/*
 * @(#)Function.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/Function.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/CloneCache.hpp"
#include "org/mariuszgromada/math/mxparser/FunctionExtension.hpp"
#include "org/mariuszgromada/math/mxparser/FunctionExtensionVariadic.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Array.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/SystemUtils.hpp"

namespace org::mariuszgromada::math::mxparser {

	API_VISIBLE StringPtr Function::TYPE_DESC = nullptr;
	API_VISIBLE const ListPtr<FunctionPtr> Function::LIST_PTR_OF_FUNCTION_PTR_ALWAYS_EMPTY = new_List<FunctionPtr>();

	API_VISIBLE StringPtr Function::StringInvariantEMPTY() {
		return StringInvariant::EMPTY;
	}

	STATIC_VARS_INITI_CPP(Function,
		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);
		STATIC_VARS_PARTIAL_INITI_DEPENDENCY(StringModel);

		INIT_WITH_NA(TYPE_DESC);
	);

	/*=================================================
	 *
	 * Constructors
	 *
	 *=================================================
	 */

	API_VISIBLE bool Function::contructorStringParamsOk(const StringPtr &functionName, const StringPtr &functionExpressionString) {
		if (functionName == nullptr || functionExpressionString == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return false;
		}
		StringPtr functionNameTrim = StringUtils::trim(functionName);
		if (!StringUtils::regexMatch(functionNameTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
			return false;
		}
		this->functionName = functionNameTrim;

		StringPtr functionExpressionStringTrim = StringUtils::trim(functionExpressionString);
		functionExpression = new_Expression(functionExpressionStringTrim);
		return true;
	}

	API_VISIBLE void Function::executeContructorConstPPEnonTemplatePart(const StringPtr &functionName, const StringPtr &functionExpressionString, const ListPtr<PrimitiveElementPtr>& paramsPrimitiveElement, const ListPtr<StringPtr>& paramsString) {
		if (!contructorStringParamsOk(functionName, functionExpressionString))
			return;

		if (paramsPrimitiveElement == nullptr || paramsString == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_ELEMENTS_ARE_NULL);
			return;
		}

		if (paramsString && paramsString->size() > 0) {
			for (const StringPtr& argName : *paramsString) {
				functionExpression->addArguments(new_Argument(argName));
			}
			parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
		}

		if (paramsPrimitiveElement && paramsPrimitiveElement->size() > 0)
			functionExpression->addDefinitions(paramsPrimitiveElement);

		functionExpression->setDescription(this->functionName);
		functionExpression->UDFExpression = true;
		registerNoSyntaxErrorInDefinition();

	}

	API_VISIBLE void Function::executeContructorConstPEnonTemplatePart(const StringPtr &functionDefinitionString, const ListPtr<PrimitiveElementPtr>& paramsPrimitiveElement) {
		if (functionDefinitionString == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		if (paramsPrimitiveElement == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_ELEMENTS_ARE_NULL);
			return;
		}
		StringPtr functionDefinitionStringTrim = StringUtils::trim(functionDefinitionString);
		if (StringUtils::regexMatch(functionDefinitionStringTrim, ParserSymbol::functionDefStrRegExp)) {
			HeadEqBodyPtr headEqBody = new_HeadEqBody(functionDefinitionStringTrim);
			functionName = headEqBody->headTokens->get(0)->tokenStr;
			if (paramsPrimitiveElement)
				functionExpression = new_Expression(headEqBody->bodyStr, paramsPrimitiveElement);
			else
				functionExpression = new_Expression(headEqBody->bodyStr, VariadicProcessor::paramsPrimitiveElementEmpty);
			functionExpression->setDescription(headEqBody->headStr);
			functionExpression->UDFExpression = true;
			addHeadTokensArguments(headEqBody->headTokens);
			parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
			registerNoSyntaxErrorInDefinition();
			return;
		}
		if (StringUtils::regexMatch(functionDefinitionStringTrim, ParserSymbol::functionVariadicDefStrRegExp)) {
			HeadEqBodyPtr headEqBody = new_HeadEqBody(functionDefinitionStringTrim);
			functionName = headEqBody->headTokens->get(0)->tokenStr;
			if (paramsPrimitiveElement)
				functionExpression = new_Expression(headEqBody->bodyStr, paramsPrimitiveElement);
			else
				functionExpression = new_Expression(headEqBody->bodyStr, VariadicProcessor::paramsPrimitiveElementEmpty);
			functionExpression->setDescription(headEqBody->headStr);
			functionExpression->UDFExpression = true;
			isVariadic = true;
			parametersNumber = -1;
			registerNoSyntaxErrorInDefinition();
			return;
		}
		registerSyntaxErrorInDefinition(
			buildErrorMessageInvalidFunctionDefinitionString(functionDefinitionStringTrim));
	}

	API_VISIBLE void Function::executeContructorConstPPL(const StringPtr &functionName, const StringPtr &functionExpressionString, const ListPtr<StringPtr> &argumentsNames) {
		if (!contructorStringParamsOk(functionName, functionExpressionString))
			return;
		for (const StringPtr& argName : *argumentsNames) {
			functionExpression->addArguments(new_Argument(argName));
		}
		parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	API_VISIBLE void Function::executeContructorPPL(StringPtr &functionName, StringPtr &functionExpressionString, ListPtr<StringPtr> &argumentsNames) {
		executeContructorConstPPL(functionName, functionExpressionString, argumentsNames);
	}

	API_VISIBLE StringPtr Function::buildErrorMessageInvalidFunctionName(const StringPtr &functionName) {
		return StringModel::buildErrorMessagePatternDoesNotMatchWithExamples(
			functionName, StringModel::STRING_RESOURCES->INVALID_FUNCTION_NAME,
			StringInvariant::FUNCTION_NAME_EXAMPLES);
	}

	API_VISIBLE StringPtr Function::buildErrorMessageInvalidFunctionDefinitionString(const StringPtr &functionDefinitionString) {
		return StringModel::buildErrorMessagePatternDoesNotMatchWithExamples(
			functionDefinitionString, StringModel::STRING_RESOURCES->INVALID_FUNCTION_DEFINITION,
			StringInvariant::FUNCTION_DEFINITION_EXAMPLES);
	}

	API_VISIBLE StringPtr Function::buildErrorMessageIncorrectNumberOfFunctionParameters(
		const StringPtr &functionName, int expectedNumberOfParameters, int providedNumberOfParameters) {
		return StringModel::buildErrorMessageIncorrectNumberOfParameters(
			functionName, StringModel::STRING_RESOURCES->INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS,
			expectedNumberOfParameters, providedNumberOfParameters);
	}

	API_VISIBLE void Function::registerNoSyntaxErrorInDefinition() {
		syntaxStatusDefinition = NO_SYNTAX_ERRORS;
		errorMessageDefinition = StringModel::STRING_RESOURCES->NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION;
		if (!thisAlreadyAdded) {
			if (iAmFullyConstructed) addFunctions(THIS(Function));
			else isSelfThisSyncNeeded = true;
			thisAlreadyAdded = true;
		}
	}

	API_VISIBLE void Function::registerSyntaxErrorInDefinition(const StringPtr &errorMessage) {
		syntaxStatusDefinition = SYNTAX_ERROR;
		errorMessageDefinition = errorMessage;
		functionExpression = new_Expression(StringInvariant::EMPTY);
	}

	/**
	 * Constructor for function definition based on
	 * your own source code - this is via implementation
	 * of FunctionExtension interface.
	 *
	 * @param functionName       Function name
	 * @param functionExtension  Your own source code
	 */
	API_VISIBLE void Function::executeContructorConst(const StringPtr &functionName,
	                                      const FunctionExtensionPtr &functionExtension) {
		if (functionName == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		if (functionExtension == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_EXTENSION_IS_NULL);
			return;
		}
		StringPtr functionNameTrim = StringUtils::trim(functionName);
		if (!StringUtils::regexMatch(functionNameTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
			return;
		}
		this->functionName = functionNameTrim;
		functionExpression = new_Expression(StringInvariant::BODY_EXTENDED);
		functionExpression->setDescription(functionNameTrim);
		parametersNumber = functionExtension->getParametersNumber();
		this->functionExtension = functionExtension;
		functionBodyType = BODY_EXTENDED;
		registerNoSyntaxErrorInDefinition();
	}

	/**
	 * Constructor for function definition based on
	 * your own source code - this is via implementation
	 * of FunctionExtensionVariadic interface.
	 *
	 * @param functionName       Function name
	 * @param functionExtensionVariadic  Your own source code
	 */
	API_VISIBLE void Function::executeContructorConst(const StringPtr &functionName,
	                                      const FunctionExtensionVariadicPtr &functionExtensionVariadic) {
		if (functionName == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		if (functionExtensionVariadic == nullptr) {
			registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_EXTENSION_IS_NULL);
			return;
		}
		StringPtr functionNameTrim = StringUtils::trim(functionName);
		if (!StringUtils::regexMatch(functionNameTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
			return;
		}
		this->functionName = functionNameTrim;
		functionExpression = new_Expression(StringInvariant::BODY_EXTENDED_VARIADIC);
		functionExpression->setDescription(functionNameTrim);
		isVariadic = true;
		parametersNumber = -1;
		this->functionExtensionVariadic = functionExtensionVariadic;
		functionBodyType = BODY_EXTENDED;
		registerNoSyntaxErrorInDefinition();
	}

	/**
	 * Private constructor used for function cloning.
	 *
	 * @param      functionToClone     the function, which is going
	 *                                 to be cloned.
	 */
	API_VISIBLE void Function::executeContructorConst(const FunctionPtr &functionToClone, bool isThreadSafeClone,
	                                      const CloneCachePtr &cloneCache) {
		functionBodyType = functionToClone->functionBodyType;
		functionName = functionToClone->functionName;
		syntaxStatusDefinition = functionToClone->syntaxStatusDefinition;
		errorMessageDefinition = functionToClone->errorMessageDefinition;
		description = functionToClone->description;
		isVariadic = functionToClone->isVariadic;
		parametersNumber = functionToClone->parametersNumber;
		computingTime = functionToClone->computingTime;
		thisAlreadyAdded = functionToClone->thisAlreadyAdded;

		if (functionToClone->functionExtension != nullptr)
			functionExtension = functionToClone->functionExtension->clone();
		if (functionToClone->functionExtensionVariadic != nullptr)
			functionExtensionVariadic = functionToClone->functionExtensionVariadic->clone();

		if (isThreadSafeClone) {
			functionExpression = functionToClone->functionExpression->cloneForThreadSafeInternal(cloneCache);
			return;
		}

		functionExpression = functionToClone->functionExpression->clone();
	}

	API_VISIBLE void Function::addHeadTokensArguments(const ListPtr<TokenPtr> &headTokens) const {
		if (headTokens->size() <= 1)
			return;
		for (int i = 1; i < headTokens->size(); i++) {
			const TokenPtr& t = headTokens->getRef(i);
			if (t->tokenTypeId != ParserSymbol::TYPE_ID) {
				ArgumentPtr ta = new_Argument(t->tokenStr);
				functionExpression->addArguments(ta);
			}
		}
	}

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
	 * @deprecated Planned to be removed, use {addFunctions(Function...)}, {addDefinitions(PrimitiveElement...)} instead
	 *
	 */
	// @Deprecated
	API_VISIBLE void Function::setFunction(const StringPtr &functionDefinitionString,
	                           const ListPtr<PrimitiveElementPtr> &elements) {
		if (StringUtils::regexMatch(functionDefinitionString, ParserSymbol::functionDefStrRegExp)) {
			HeadEqBodyPtr headEqBody = new_HeadEqBody(functionDefinitionString);
			this->functionName = headEqBody->headTokens->get(0)->tokenStr;
			functionExpression = new_Expression(headEqBody->bodyStr, elements);
			functionExpression->setDescription(headEqBody->headStr);
			functionExpression->UDFExpression = true;
			isVariadic = false;
			addHeadTokensArguments(headEqBody->headTokens);
			parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
			description = StringInvariant::EMPTY;
			functionBodyType = BODY_RUNTIME;
			registerNoSyntaxErrorInDefinition();
			return;
		}
		if (StringUtils::regexMatch(functionDefinitionString, ParserSymbol::functionVariadicDefStrRegExp)) {
			HeadEqBodyPtr headEqBody = new_HeadEqBody(functionDefinitionString);
			this->functionName = headEqBody->headTokens->get(0)->tokenStr;
			functionExpression = new_Expression(headEqBody->bodyStr, elements);
			functionExpression->setDescription(headEqBody->headStr);
			functionExpression->UDFExpression = true;
			isVariadic = true;
			parametersNumber = -1;
			description = StringInvariant::EMPTY;
			functionBodyType = BODY_RUNTIME;
			registerNoSyntaxErrorInDefinition();
			return;
		}
		registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionDefinitionString(functionDefinitionString));
	}

	/**
	 * Sets function description.
	 *
	 * @param      description         the function description
	 */
	API_VISIBLE void Function::setDescription(const StringPtr &description) {
		if (description == nullptr)
			return;
		this->description = description;
	}

	/**
	 * Gets function description
	 *
	 * @return     Function description as string
	 */
	API_VISIBLE StringPtr Function::getDescription() const {
		return description;
	}

	/**
	 * Gets function name.
	 *
	 * @return     Function name as string.
	 */
	API_VISIBLE StringPtr Function::getFunctionName() const {
		return functionName;
	}

	/**
	 * Gets function expression string
	 *
	 * @return     Function expression as string.
	 */
	API_VISIBLE StringPtr Function::getFunctionExpressionString() const {
		return functionExpression->getExpressionString();
	}

	/**
	 * Sets function name.
	 *
	 * @param      functionName        the function name
	 */
	API_VISIBLE void Function::setFunctionName(const StringPtr &functionName) {
		if (functionName == nullptr) {
			if (!syntaxStatusDefinition)
				registerSyntaxErrorInDefinition(StringModel::STRING_RESOURCES->PROVIDED_STRING_IS_NULL);
			return;
		}
		StringPtr functionNameTrim = StringUtils::trim(functionName);
		if (*this->functionName == *functionNameTrim)
			return;
		if (!StringUtils::regexMatch(functionNameTrim, ParserSymbol::nameOnlyTokenRegExp)) {
			if (!syntaxStatusDefinition)
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
			return;
		}
		this->functionName = functionNameTrim;
		registerNoSyntaxErrorInDefinition();
		setExpressionModifiedFlags();
	}


	/**
	 * Sets value of function argument (function parameter).
	 *
	 * @param      argumentIndex   the argument index (in accordance to
	 *                             arguments declaration sequence)
	 * @param      argumentValue   the argument value
	 */
	API_VISIBLE void Function::setArgumentValue(int argumentIndex, double argumentValue) {
		if (argumentIndex < 0 || argumentIndex >= parametersNumber)
			return;
		if (isVariadic)
			return;
		if (functionBodyType == BODY_RUNTIME)
			functionExpression->argumentsList->getRef(argumentIndex)->argumentValue = argumentValue;
		else
			functionExtension->setParameterValue(argumentIndex, argumentValue);
	}

	/**
	 * Returns function body type: {Function#BODY_RUNTIME} {Function#BODY_EXTENDED}
	 * @return Returns function body type: {Function#BODY_RUNTIME} {Function#BODY_EXTENDED}
	 */
	API_VISIBLE int Function::getFunctionBodyType() const {
		return functionBodyType;
	}

	/**
	 * Checks function syntax
	 *
	 * @return     syntax status: Function::NO_SYNTAX_ERRORS,
	 *                            Function::SYNTAX_ERROR
	 *
	 */
	API_VISIBLE bool Function::checkSyntax() {
		if (!syntaxStatusDefinition)
			return SYNTAX_ERROR;
		if (functionName->empty())
			return SYNTAX_ERROR;
		if (functionBodyType == BODY_EXTENDED) {
			if (!isVariadic && functionExtension == nullptr)
				return SYNTAX_ERROR;
			if (isVariadic && functionExtensionVariadic == nullptr)
				return SYNTAX_ERROR;
			return NO_SYNTAX_ERRORS;
		}
		bool syntaxStatus = functionExpression->checkSyntax();
		checkRecursiveMode();
		return syntaxStatus;
	}

	/**
	 * Returns error message after checking the syntax->
	 *
	 * @return     Error message as string.
	 */
	API_VISIBLE StringPtr Function::getErrorMessage() const {
		if (!syntaxStatusDefinition)
			return errorMessageDefinition;
		if (functionName->empty())
			return errorMessageDefinition;
		if (functionBodyType == BODY_EXTENDED) {
			if (!isVariadic && functionExtension == nullptr)
				return errorMessageDefinition;
			if (isVariadic && functionExtensionVariadic == nullptr)
				return errorMessageDefinition;
		}
		StringPtr functionExpressionErrorMessage = functionExpression->getErrorMessage();
		if (!errorMessageDefinition->empty() && functionExpressionErrorMessage->empty())
			return errorMessageDefinition;
		return functionExpressionErrorMessage;
	}

	/**
	 * clone method
	 */
	API_VISIBLE FunctionPtr Function::clone() {
		return new_Function(THIS(Function), false, nullptr);
	}

	API_VISIBLE double Function::calculateNonTemplatePart(
		const ListPtr<double>& paramsDouble
		,const ListPtr<ArgumentPtr>& paramsArgument
		,const ListPtr<ConstantPtr>& paramsConstant
		,const ListPtr<FunctionPtr>& paramsFunction
		,const ListPtr<ExpressionPtr>& paramsExpression) {

		size_t cntDouble = 0;
		size_t cntArgument = 0;
		size_t cntConstant = 0;
		size_t cntFunction = 0;
		size_t cntExpression = 0;
		if (paramsDouble)
			cntDouble = paramsDouble->size();
		if (paramsArgument)
			cntArgument = paramsArgument->size();
		if (paramsConstant)
			cntConstant = paramsConstant->size();
		if (paramsFunction)
			cntFunction = paramsFunction->size();
		if (paramsExpression)
			cntExpression = paramsExpression->size();

		if (cntDouble > 0)
			if (cntArgument == 0 && cntConstant == 0 && cntFunction == 0 && cntExpression == 0)
				return calculate(paramsDouble);

		if (cntArgument > 0)
			if (cntDouble == 0 && cntConstant == 0 && cntFunction == 0 && cntExpression == 0)
				return calculate(paramsArgument);

		ListPtr<double> allParamsAsDouble = new_List<double>();

		if (paramsDouble)
			for (double v : *paramsDouble)
				allParamsAsDouble->add(v);

		if (paramsArgument)
			for (const ArgumentPtr& a : *paramsArgument)
				allParamsAsDouble->add(a->getArgumentValue());

		if (paramsConstant)
			for (const ConstantPtr& c : *paramsConstant)
				allParamsAsDouble->add(c->getConstantValue());

		if (paramsFunction)
			for (const FunctionPtr& f : *paramsFunction)
				allParamsAsDouble->add(f->calculate());

		if (paramsExpression)
			for (const ExpressionPtr& e : *paramsExpression)
				allParamsAsDouble->add(e->calculate());

		return calculate(allParamsAsDouble);
	}

	/**
	 * Calculates function value
	 *
	 * @return     Function value as double.
	 */
	API_VISIBLE double Function::calculate() {
		return calculate(CalcStepsRegister::Null);
	}

	/**
	 * Calculates function value and registers all the calculation steps
	 *
	 * @param calcStepsRegister A collection to store list of calculation steps,
	 *                          steps registered as strings.
	 *
	 * @return     Function value as double.
	 */
	API_VISIBLE double Function::calculate(const CalcStepsRegisterPtr &calcStepsRegister) {
		CalcStepsRegister::setUserFunction(calcStepsRegister, THIS(Function));
		computingTime = 0;
		if (!syntaxStatusDefinition)
			return Double::NaN;
		double value = Double::NaN;
		if (functionBodyType == BODY_RUNTIME) {
			value = functionExpression->calculate(calcStepsRegister);
			computingTime = functionExpression->computingTime;
			return value;
		}
		License::checkLicense();
		Long startTime = SystemUtils::currentTimeMillis();
		if (!isVariadic) {
			value = functionExtension->calculate();
			computingTime = CAST_DOUBLE(SystemUtils::currentTimeMillis() - startTime) / 1000.0;
			return value;
		}
		ListPtr<double> paramsList = functionExpression->UDFVariadicParamsAtRunTime;
		if (paramsList != nullptr) {
			value = functionExtensionVariadic->calculate(paramsList);
		}
		computingTime = CAST_DOUBLE(SystemUtils::currentTimeMillis() - startTime) / 1000.0;
		return value;
	}

	/**
	 * Calculates function value
	 *
	 * @param      parameters              the function parameters values (as doubles)
	 *
	 * @return     function value as double.
	 */
	API_VISIBLE double Function::calculate(const ListPtr<double> &parameters) {
		computingTime = 0;
		if (!syntaxStatusDefinition)
			return Double::NaN;
		if (parameters == nullptr)
			return Double::NaN;
		if (parameters->size() == 0)
			return Double::NaN;

		Long startTime = SystemUtils::currentTimeMillis();
		functionExpression->UDFVariadicParamsAtRunTime = new_List<double>();
		for (double x : *parameters)
			functionExpression->UDFVariadicParamsAtRunTime->add(x);

		double value = Double::NaN;
		if (isVariadic) {
			if (functionBodyType == BODY_RUNTIME) {
				value = functionExpression->calculate();
				computingTime = functionExpression->computingTime;
				return value;
			}
			value = functionExtensionVariadic->calculate(parameters);
			computingTime = CAST_DOUBLE(SystemUtils::currentTimeMillis() - startTime) / 1000.0;
			return value;
		}

		if (parameters->size() != this->getParametersNumber()) {
			functionExpression->setSyntaxStatus(SYNTAX_ERROR,
			                                    buildErrorMessageIncorrectNumberOfFunctionParameters(
				                                    functionName, getParametersNumber(), parameters->size()));
			return Double::NaN;
		}

		if (functionBodyType == BODY_RUNTIME) {
			for (int p = 0; p < parameters->size(); p++)
				setArgumentValue(p, (*parameters)[p]);
			value = functionExpression->calculate();
			computingTime = functionExpression->computingTime;
			return value;
		}

		for (int p = 0; p < parameters->size(); p++)
			functionExtension->setParameterValue(p, (*parameters)[p]);

		value = functionExtension->calculate();
		computingTime = CAST_DOUBLE(SystemUtils::currentTimeMillis() - startTime) / 1000.0;
		return value;
	}

	/**
	 * Calculates function value
	 *
	 * @param      arguments   function parameters (as Arguments)
	 *
	 * @return     function value as double
	 */
	API_VISIBLE double Function::calculate(const ListPtr<ArgumentPtr> &arguments) {
		computingTime = 0;
		if (!syntaxStatusDefinition)
			return Double::NaN;
		if (arguments == nullptr)
			return Double::NaN;
		if (arguments->size() == 0)
			return Double::NaN;

		Long startTime = SystemUtils::currentTimeMillis();
		ListPtr<double> parameters;
		functionExpression->UDFVariadicParamsAtRunTime = new_List<double>();
		parameters = new_List<double>();
		double x;
		for (int i = 0; i < arguments->size(); i++) {
			x = arguments->getRef(i)->getArgumentValue();
			functionExpression->UDFVariadicParamsAtRunTime->add(x);
			parameters->add(x);
		}

		double value = Double::NaN;
		if (isVariadic) {
			if (functionBodyType == BODY_RUNTIME) {
				value = functionExpression->calculate();
				computingTime = functionExpression->computingTime;
				return value;
			}
			value = functionExtensionVariadic->calculate(parameters);
			computingTime = CAST_DOUBLE(SystemUtils::currentTimeMillis() - startTime) / 1000.0;
			return value;
		}

		if (arguments->size() != this->getParametersNumber()) {
			functionExpression->setSyntaxStatus(SYNTAX_ERROR,
			                                    buildErrorMessageIncorrectNumberOfFunctionParameters(
				                                    functionName, getParametersNumber(), arguments->size()));
			return Double::NaN;
		}

		if (functionBodyType == BODY_RUNTIME) {
			for (int p = 0; p < arguments->size(); p++)
				setArgumentValue(p, (*arguments)[p]->getArgumentValue());
			value = functionExpression->calculate();
			computingTime = functionExpression->computingTime;
			return value;
		}
		for (int p = 0; p < arguments->size(); p++)
			functionExtension->setParameterValue(p, (*arguments)[p]->getArgumentValue());

		value = functionExtension->calculate();
		computingTime = CAST_DOUBLE(SystemUtils::currentTimeMillis() - startTime) / 1000.0;
		return value;
	}

	/**
	 * Adds user defined elements (such as: Arguments, Constants, Functions)
	 * to the function expressions.
	 *
	 * @param elements Elements list (variadic), where Argument, Constant, Function
	 *                 extend the same class PrimitiveElement
	 *
	 * @see PrimitiveElement
	 */
	API_VISIBLE void Function::addDefinitions(const ListPtr<PrimitiveElementPtr> &elements) {
		if (elements == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->addDefinitions(elements);
	}

	API_VISIBLE void Function::addDefinitions(const PrimitiveElementPtr &element) {
		if (element == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->addDefinitions(element);
	}

	/**
	 * Removes user defined elements (such as: Arguments, Constants, Functions)
	 * from the function expressions.
	 *
	 * @param elements Elements list (variadic), where Argument, Constant, Function
	 *                 extend the same class PrimitiveElement
	 *
	 * @see PrimitiveElement
	 */
	API_VISIBLE void Function::removeDefinitions(const ListPtr<PrimitiveElementPtr> &elements) {
		if (elements == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeDefinitions(elements);
	}

	API_VISIBLE void Function::removeDefinitions(const PrimitiveElementPtr &element) {
		if (element == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeDefinitions(element);
	}

	/*=================================================
	 *
	 * Arguments handling API (the same as in Expression)
	 * (protected argument expression)
	 *
	 *=================================================
	 */
	API_VISIBLE int Function::countRecursiveArguments() {
		if (functionBodyType != Function::BODY_RUNTIME)
			return 0;
		int numOfRecursiveArguments = 0;
		for (const ArgumentPtr& argument : *functionExpression->argumentsList)
			if (argument->getArgumentType() == Argument::RECURSIVE_ARGUMENT) numOfRecursiveArguments++;
		return numOfRecursiveArguments;
	}

	/**
	 * Adds arguments (variadic) to the function expression definition.
	 *
	 * @param      arguments           the arguments list
	 *                                 (comma separated list)
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Function::addArguments(const ListPtr<ArgumentPtr> &arguments) {
		if (arguments == nullptr) return;
		if (functionBodyType != Function::BODY_RUNTIME) return;
		functionExpression->addArguments(arguments);
		//parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	API_VISIBLE void Function::addArguments(const ArgumentPtr &argument) {
		if (argument == nullptr) return;
		if (functionBodyType != Function::BODY_RUNTIME) return;
		functionExpression->addArguments(argument);
		//parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	/**
	 * Enables to define the arguments (associated with
	 * the function expression) based on the given arguments names.
	 *
	 * @param      argumentsNames      the arguments names (variadic)
	 *                                 comma separated list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Function::defineArguments(const ListPtr<StringPtr> &argumentsNames) {
		if (argumentsNames == nullptr) return;
		if (functionBodyType != Function::BODY_RUNTIME) return;
		functionExpression->defineArguments(argumentsNames);
		parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	API_VISIBLE void Function::defineArguments(const StringPtr &argumentName) {
		if (argumentName == nullptr) return;
		if (functionBodyType != Function::BODY_RUNTIME) return;
		functionExpression->defineArguments(argumentName);
		parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	/**
	 * Enables to define the argument (associated with the function expression)
	 * based on the argument name and the argument value.
	 *
	 * @param      argumentName        the argument name
	 * @param      argumentValue       the argument value
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Function::defineArgument(const StringPtr &argumentName, double argumentValue) {
		if (argumentName == nullptr)
			return;
		if (functionBodyType != Function::BODY_RUNTIME)
			return;
		functionExpression->defineArgument(argumentName, argumentValue);
		parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	/**
	 * Gets argument index from the function expression.
	 *
	 * @param      argumentName        the argument name
	 *
	 * @return     The argument index if the argument name was found,
	 *             otherwise returns Argument::NOT_FOUND
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE int Function::getArgumentIndex(const StringPtr &argumentName) const {
		if (argumentName == nullptr)
			return -1;
		if (functionBodyType != Function::BODY_RUNTIME)
			return -1;
		return functionExpression->getArgumentIndex(argumentName);
	}

	/**
	 * Gets argument from the function expression.
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
	ArgumentPtr Function::getArgument(const StringPtr &argumentName) const {
		if (argumentName == nullptr)
			return nullptr;
		if (functionBodyType != Function::BODY_RUNTIME)
			return nullptr;
		return functionExpression->getArgument(argumentName);
	}

	/**
	 * Gets argument from the function expression.
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
	ArgumentPtr Function::getArgument(int argumentIndex) const {
		if (argumentIndex < 0)
			return nullptr;
		if (functionBodyType != Function::BODY_RUNTIME)
			return nullptr;
		return functionExpression->getArgument(argumentIndex);
	}

	/**
	 * Gets number of parameters associated with the function expression.
	 *
	 * @return     The number of function parameters (int &gt;= 0)
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE int Function::getParametersNumber() const {
		if (!isVariadic)
			return parametersNumber;
		if (functionExpression->UDFVariadicParamsAtRunTime == nullptr)
			return -1;
		return functionExpression->UDFVariadicParamsAtRunTime->size();
	}

	/**
	 * Set parameters number.
	 *
	 * @param      parametersNumber    the number of function parameters (default = number of arguments
	 *                                 (lower number might be specified).
	 */
	API_VISIBLE void Function::setParametersNumber(int parametersNumber) {
		if (parametersNumber < 0)
			return;
		if (functionBodyType != Function::BODY_RUNTIME)
			return;
		this->parametersNumber = parametersNumber;
		functionExpression->setExpressionModifiedFlag();
	}

	/**
	 * Gets user defined function parameter name
	 *
	 * @param parameterIndex  Parameter index between 0 and n-1
	 * @return If parameter exists returns parameters name, otherwise empty string is returned.
	 */
	API_VISIBLE StringPtr Function::getParameterName(int parameterIndex) const {
		if (parameterIndex < 0) return StringInvariant::EMPTY;
		if (parameterIndex >= parametersNumber) return StringInvariant::EMPTY;
		if (functionBodyType == BODY_RUNTIME) {
			ArgumentPtr x = getArgument(parameterIndex);
			if (x == nullptr)
				return StringInvariant::EMPTY;
			return x->getArgumentName();
		}
		if (functionBodyType == BODY_EXTENDED) return this->functionExtension->getParameterName(parameterIndex);
		return StringInvariant::EMPTY;
	}

	/**
	 * Gets number of arguments associated with the function expression.
	 *
	 * @return     The number of arguments (int &gt;= 0)
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE int Function::getArgumentsNumber() const {
		if (functionBodyType != Function::BODY_RUNTIME)
			return 0;
		return functionExpression->getArgumentsNumber();
	}

	/**
	 * Removes first occurrences of the arguments
	 * associated with the function expression.
	 *
	 * @param      argumentsNames      the arguments names
	 *                                 (variadic parameters) comma separated
	 *                                 list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Function::removeArguments(const ListPtr<StringPtr> &argumentsNames) {
		if (argumentsNames == nullptr) return;
		if (functionBodyType != Function::BODY_RUNTIME) return;
		functionExpression->removeArguments(argumentsNames);
		parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	API_VISIBLE void Function::removeArguments(const StringPtr &argumentName) {
		if (argumentName == nullptr) return;
		if (functionBodyType != Function::BODY_RUNTIME) return;
		functionExpression->removeArguments(argumentName);
		parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	/**
	 * Removes first occurrences of the arguments
	 * associated with the function expression.
	 *
	 * @param      arguments           the arguments (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Function::removeArguments(const ListPtr<ArgumentPtr> &arguments) {
		if (arguments == nullptr) return;
		if (functionBodyType != Function::BODY_RUNTIME) return;
		functionExpression->removeArguments(arguments);
		parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	API_VISIBLE void Function::removeArguments(const ArgumentPtr &argument) {
		if (argument == nullptr) return;
		if (functionBodyType != Function::BODY_RUNTIME) return;
		functionExpression->removeArguments(argument);
		parametersNumber = functionExpression->getArgumentsNumber() - countRecursiveArguments();
	}

	/**
	 * Removes all arguments associated with the function expression.
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Function::removeAllArguments() {
		if (functionBodyType != Function::BODY_RUNTIME)
			return;
		functionExpression->removeAllArguments();
		parametersNumber = 0;
	}

	/*=================================================
	 *
	 * Constants handling API (the same as in Expression)
	 * (protected argument expression)
	 *
	 *=================================================
	 */
	/**
	 * Adds constants (variadic parameters) to the function expression definition.
	 *
	 * @param      constants           the constants
	 *                                 (comma separated list)
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Function::addConstants(const ListPtr<ConstantPtr> &constants) {
		if (constants == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->addConstants(constants);
	}

	API_VISIBLE void Function::addConstants(const ConstantPtr &constant) {
		if (constant == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->addConstants(constant);
	}

	/**
	 * Enables to define the constant (associated with
	 * the function expression) based on the constant name and
	 * constant value.
	 *
	 * @param      constantName        the constant name
	 * @param      constantValue       the constant value
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Function::defineConstant(const StringPtr &constantName, double constantValue) {
		if (constantName == nullptr)
			return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->defineConstant(constantName, constantValue);
	}

	/**
	 * Gets constant index associated with the function expression.
	 *
	 * @param      constantName        the constant name
	 *
	 * @return     Constant index if constant name was found,
	 *             otherwise return Constant::NOT_FOUND.
	 *
	 * @see        Constant
	 */
	API_VISIBLE int Function::getConstantIndex(const StringPtr &constantName) const {
		if (constantName == nullptr)
			return -1;
		if (functionBodyType != Function::BODY_RUNTIME)
			return -1;
		return functionExpression->getConstantIndex(constantName);
	}

	/**
	 * Gets constant associated with the function expression.
	 *
	 * @param      constantName        the constant name
	 *
	 * @return     Constant if constant name was found,
	 *             otherwise return nullptr.
	 *
	 * @see        Constant
	 */
	API_VISIBLE ConstantPtr Function::getConstant(const StringPtr &constantName) const {
		if (constantName == nullptr)
			return nullptr;
		if (functionBodyType != Function::BODY_RUNTIME)
			return nullptr;
		return functionExpression->getConstant(constantName);
	}

	/**
	 * Gets constant associated with the function expression.
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
	API_VISIBLE ConstantPtr Function::getConstant(int constantIndex) const {
		if (constantIndex < 0)
			return nullptr;
		if (functionBodyType != Function::BODY_RUNTIME)
			return nullptr;
		return functionExpression->getConstant(constantIndex);
	}

	/**
	 * Gets number of constants associated with the function expression.
	 *
	 * @return     number of constants (int &gt;= 0)
	 *
	 * @see        Constant
	 */
	API_VISIBLE int Function::getConstantsNumber() const {
		if (functionBodyType != Function::BODY_RUNTIME)
			return 0;
		return functionExpression->getConstantsNumber();
	}

	/**
	 * Removes first occurrences of the constants
	 * associated with the function expression.
	 *
	 * @param      constantsNames      the constants names (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Function::removeConstants(const ListPtr<StringPtr> &constantsNames) {
		if (constantsNames == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeConstants(constantsNames);
	}

	API_VISIBLE void Function::removeConstants(const StringPtr &constantName) {
		if (constantName == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeConstants(constantName);
	}

	/**
	 * Removes first occurrences of the constants
	 * associated with the function expression
	 *
	 * @param      constants           the constants (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Function::removeConstants(const ListPtr<ConstantPtr> &constants) {
		if (constants == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeConstants(constants);
	}

	API_VISIBLE void Function::removeConstants(const ConstantPtr &constant) {
		if (constant == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeConstants(constant);
	}

	/**
	 * Removes all constants
	 * associated with the function expression
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Function::removeAllConstants() {
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeAllConstants();
	}

	/*=================================================
	 *
	 * Functions handling API (the same as in Expression)
	 * (protected argument expression)
	 *
	 *=================================================
	 */
	/**
	 * Adds functions (variadic parameters) to the function expression definition.
	 *
	 * @param      functions           the functions
	 *                                 (variadic parameters) comma separated list
	 *
	 * @see        Function
	 */
	API_VISIBLE void Function::addFunctions(const ListPtr<FunctionPtr> &functions) {
		if (functions == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->addFunctions(functions);
	}

	API_VISIBLE void Function::addFunctions(const FunctionPtr &function) {
		if (function == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->addFunctions(function);
	}

	/**
	 * Enables to define the function (associated with
	 * the function expression) based on the function name,
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
	API_VISIBLE void Function::defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString,
	                              const ListPtr<StringPtr> &argumentsNames) {
		if (functionName == nullptr || functionExpressionString == nullptr || argumentsNames == nullptr)
			return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->defineFunction(functionName, functionExpressionString, argumentsNames);
	}

	/**
	 * Gets index of function associated with the function expression.
	 *
	 * @param      functionName        the function name
	 *
	 * @return     Function index if function name was found,
	 *             otherwise returns Function::NOT_FOUND
	 *
	 * @see        Function
	 */
	API_VISIBLE int Function::getFunctionIndex(const StringPtr &functionName) const {
		if (functionName == nullptr)
			return -1;
		if (functionBodyType != Function::BODY_RUNTIME)
			return -1;
		return functionExpression->getFunctionIndex(functionName);
	}

	/**
	 * Gets function associated with the function expression.
	 *
	 * @param      functionName        the function name
	 *
	 * @return     Function if function name was found,
	 *             otherwise returns nullptr.
	 *
	 * @see        Function
	 */
	API_VISIBLE FunctionPtr Function::getFunction(const StringPtr &functionName) const {
		if (functionName == nullptr)
			return nullptr;
		if (functionBodyType != Function::BODY_RUNTIME)
			return nullptr;
		return functionExpression->getFunction(functionName);
	}

	/**
	 * Gets function associated with the function expression.
	 *
	 * @param      functionIndex the function index
	 *
	 * @return     Function if function index is between 0 and
	 *             the last available function index (getFunctionsNumber()-1),
	 *             otherwise returns nullptr.
	 *
	 * @see        Function
	 */
	API_VISIBLE FunctionPtr Function::getFunction(int functionIndex) const {
		if (functionIndex < 0)
			return nullptr;
		if (functionBodyType != Function::BODY_RUNTIME)
			return nullptr;
		return functionExpression->getFunction(functionIndex);
	}

	/**
	 * Gets number of functions associated with the function expression.
	 *
	 * @return     number of functions (int &gt;= 0)
	 *
	 * @see        Function
	 */
	API_VISIBLE int Function::getFunctionsNumber() {
		if (functionBodyType != Function::BODY_RUNTIME)
			return 0;
		int recursiveThisCorrection = 0;
		for (const FunctionPtr& f : *functionExpression->functionsList)
			if (THIS(Function) == f)
				recursiveThisCorrection++;
		return functionExpression->getFunctionsNumber() - recursiveThisCorrection;
	}

	/**
	 * Removes first occurrences of the functions
	 * associated with the function expression.
	 *
	 * @param      functionsNames      the functions names (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Function
	 */
	API_VISIBLE void Function::removeFunctions(const ListPtr<StringPtr> &functionsNames) {
		if (functionsNames == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeFunctions(functionsNames);
	}

	API_VISIBLE void Function::removeFunctions(const StringPtr &functionName) {
		if (functionName == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeFunctions(functionName);
	}

	/**
	 * Removes first occurrences of the functions
	 * associated with the function expression.
	 *
	 * @param      functions           the functions (variadic parameters)
	 *                                 comma separated list.
	 *
	 * @see        Function
	 */
	API_VISIBLE void Function::removeFunctions(const ListPtr<FunctionPtr> &functions) {
		if (functions == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeFunctions(functions);
	}

	API_VISIBLE void Function::removeFunctions(const FunctionPtr &function) {
		if (function == nullptr) return;
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeFunctions(function);
	}

	/**
	 * Removes all functions
	 * associated with the function expression.
	 *
	 * @see        Function
	 */
	API_VISIBLE void Function::removeAllFunctions() {
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeAllFunctions();
	}

	/**
	 * Enables verbose function mode
	 */
	API_VISIBLE void Function::setVerboseMode() {
		functionExpression->setVerboseMode();
	}

	/**
	 * Disables function verbose mode (sets default silent mode)
	 */
	API_VISIBLE void Function::setSilentMode() {
		functionExpression->setSilentMode();
	}

	/**
	 * Returns verbose mode status
	 *
	 * @return     true if verbose mode is on,
	 *             otherwise returns false
	 */
	API_VISIBLE bool Function::getVerboseMode() const {
		return functionExpression->getVerboseMode();
	}

	/**
	 * Checks whether function name appears in function body
	 * if yes the recursive mode is being set
	 */
	API_VISIBLE void Function::checkRecursiveMode() {
		if (functionBodyType != Function::BODY_RUNTIME)
			return;
		if (functionExpression->initialTokens == nullptr)
			return;
		functionExpression->disableRecursiveMode();
		for (const TokenPtr& t : *functionExpression->initialTokens)
			if (*t->tokenStr == *functionName) {
				functionExpression->setRecursiveMode();
				break;
			}
	}

	/**
	 * Gets recursive mode status
	 *
	 * @return     true if recursive mode is enabled,
	 *             otherwise returns false
	 *
	 */
	API_VISIBLE bool Function::getRecursiveMode() const {
		return functionExpression->getRecursiveMode();
	}

	/**
	 * Gets computing time
	 *
	 * @return     computing time in seconds.
	 */
	API_VISIBLE double Function::getComputingTime() const {
		return computingTime;
	}

	/**
	 * Adds related expression.
	 *
	 * @param      expression          the related expression
	 */
	API_VISIBLE void Function::addRelatedExpression(const ExpressionPtr &expression) {
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->addRelatedExpression(expression);
	}

	/**
	 * Removes related expression.
	 *
	 * @param      expression          the related expression
	 */
	API_VISIBLE void Function::removeRelatedExpression(const ExpressionPtr &expression) {
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->removeRelatedExpression(expression);
	}

	/**
	 * Set expression modified flags in the related expressions.
	 */
	API_VISIBLE void Function::setExpressionModifiedFlags() {
		if (functionBodyType == Function::BODY_RUNTIME)
			functionExpression->setExpressionModifiedFlag();
	}

	API_VISIBLE FunctionPtr Function::cloneForThreadSafeInternal(const CloneCachePtr &cloneCache) {
		FunctionPtr functionClone = cloneCache->getFunctionClone(THIS(Function));
		if (functionClone == nullptr) {
			cloneCache->cacheCloneInProgress(THIS(Function));
			functionClone = new_Function(THIS(Function), true, cloneCache);
			cloneCache->clearCloneInProgress(THIS(Function));
			cloneCache->cacheFunctionClone(THIS(Function), functionClone);
		}
		return functionClone;
	}

	API_VISIBLE FunctionPtr Function::cloneForThreadSafeInternal(const ExpressionPtr &relatedExpressionThatInitiatedClone,
	                                                 const CloneCachePtr &cloneCache) {
		FunctionPtr functionClone = cloneForThreadSafeInternal(cloneCache);
		functionClone->addRelatedExpression(relatedExpressionThatInitiatedClone);
		return functionClone;
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
	API_VISIBLE FunctionPtr Function::cloneForThreadSafe() {
		CloneCachePtr cloneCache = new_CloneCache();
		FunctionPtr functionClone = cloneForThreadSafeInternal(cloneCache);
		cloneCache->addAllAtTheEndElements();
		cloneCache->clearCache();
		return functionClone;
	}
} // org::mariuszgromada::math::mxparser
