/*
 * @(#)ExpressionA.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/Expression.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/CalcStepsRegister.hpp"
#include "org/mariuszgromada/math/mxparser/CloneCache.hpp"
#include "org/mariuszgromada/math/mxparser/Constant.hpp"
#include "org/mariuszgromada/math/mxparser/Function.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/Calculus.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathConstants.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/Statistics.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/Units.hpp"
#include "org/mariuszgromada/math/mxparser/Miscellaneous.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/BinaryRelation.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/BitwiseOperator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/BooleanOperator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/CalculusOperator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function1Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function2Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function3Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/FunctionVariadic.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/KeyWord.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Operator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/RandomVariable.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Token.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Unit.hpp"
#include "org/mariuszgromada/math/mxparser/RecursiveArgument.hpp"
#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/CharStream.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxChecker.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Math.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/PtrsSet.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/SystemUtils.hpp"
#include <algorithm>

namespace org::mariuszgromada::math::mxparser {
	using namespace org::mariuszgromada::math::mxparser::expressionutils;
	using namespace org::mariuszgromada::math::mxparser::wrapper;
	using namespace org::mariuszgromada::math::mxparser::mathcollection;
	using namespace org::mariuszgromada::math::mxparser::stringutils;
	using namespace org::mariuszgromada::math::mxparser::miscellaneous;
	using namespace org::mariuszgromada::math::mxparser::parsertokens;

	API_VISIBLE StringPtr Expression::TYPE_DESC = nullptr;
	API_VISIBLE const ListPtr<ExpressionPtr> Expression::LIST_PTR_OF_EXPRESSION_PTR_ALWAYS_EMPTY = new_List<ExpressionPtr>();
	API_VISIBLE int Expression::ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH = mXparser::ERROR_MESSAGE_MAXIMUM_LENGTH / 5;

	API_VISIBLE StringPtr Expression::StringInvariantEMPTY() {
		return StringInvariant::EMPTY;
	}

	STATIC_VARS_INITI_CPP(Expression,
		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);
		STATIC_VARS_INITI_DEPENDENCY(StringInvariant);
		STATIC_VARS_PARTIAL_INITI_DEPENDENCY(StringModel);

		INIT_WITH_NA(TYPE_DESC);
	);


	/*=================================================
	 *
	 * Related expressions handling
	 *
	 *=================================================
	 */
	/**
	 * Adds related expression
	 * The same expression could be added more than once
	 * For example when
	 *
	 * @param      expression          the expression
	 */
	API_VISIBLE void Expression::addRelatedExpression(const ExpressionPtr &expression) {
		if (expression == nullptr || expression == THIS(Expression))
			return;
		if (!relatedExpressionsList->contains(expression))
			relatedExpressionsList->add(expression);
	}

	/**
	 * Removes related expression
	 *
	 * @param      expression          the expression
	 */
	API_VISIBLE void Expression::removeRelatedExpression(const ExpressionPtr &expression) {
		relatedExpressionsList->remove(expression);
	}

	/**
	 * Prints related expression list
	 */
	API_VISIBLE void Expression::showRelatedExpressions() const {
		mXparser::consolePrintln();
		mXparser::consolePrintln(
			description + StringInvariant::SPACE_EQUAL_SPACE + expressionString + StringInvariant::COLON);
		for (const ExpressionPtr& e : *relatedExpressionsList)
			mXparser::consolePrintln(
				StringInvariant::RIGHT_ARROW_SPACE + e->description + StringInvariant::SPACE_EQUAL_SPACE + e->
				expressionString);
	}

	/**
	 * Method return error message after
	 * calling checkSyntax() method or
	 * calculate().
	 *
	 * @return     Error message as string.
	 */
	API_VISIBLE StringPtr Expression::getErrorMessage() const {
		return StringUtils::cleanNewLineAtTheEnd(errorMessage);
	}

	/**
	 * Gets syntax status of the expression.
	 *
	 * @return     true if there are no syntax errors,
	 *             false when syntax error was found or
	 *             syntax status is unknown
	 */
	API_VISIBLE bool Expression::getSyntaxStatus() const {
		return this->syntaxStatus;
	}

	/**
	 * Package level method for passing
	 * information about errors identified
	 * on the constructors level
	 *
	 * @param syntaxStatus Syntax status
	 * @param errorMessage Error message
	 *
	 * @see Function
	 */
	API_VISIBLE void Expression::setSyntaxStatus(bool syntaxStatus, const StringPtr &errorMessage) {
		this->syntaxStatus = syntaxStatus;
		this->errorMessage = errorMessage;
		this->expressionWasModified = false;
		markAsNotFullyCompiled();
	}

	API_VISIBLE void Expression::markAsNotFullyCompiled() {
		isFullyCompiled = false;
		initialCompilationDetails = nullptr;
	}

	/**
	 * Sets expression status to modified
	 * Calls setExpressionModifiedFlag() method
	 * to all related expressions.
	 */
	API_VISIBLE void Expression::setExpressionModifiedFlag() {
		if (recursionCallPending) return;
		recursionCallPending = true;
		recursionCallsCounter = 0;
		internalClone = false;
		expressionWasModified = true;
		syntaxStatus = SYNTAX_STATUS_UNKNOWN;
		markAsNotFullyCompiled();
		errorMessage = StringInvariant::EMPTY;
		for (const ExpressionPtr& e : *relatedExpressionsList)
			e->setExpressionModifiedFlag();
		recursionCallPending = false;
	}

	/**
	 * Common variables while expression initializing
	 */
	API_VISIBLE void Expression::expressionInternalVarsInit() {
		description = StringInvariant::EMPTY;
		errorMessage = StringInvariant::EMPTY;
		errorMessageCalculate = StringInvariant::EMPTY;
		computingTime = 0;
		recursionCallPending = false;
		recursionCallsCounter = 0;
		internalClone = false;
		forwardErrorMessage = true;
		parserKeyWordsOnly = false;
		verboseMode = false;
		syntaxStatus = false;
		isFullyCompiled = false;
		impliedMultiplicationMode = mXparser::impliedMultiplicationMode;
		unicodeKeyWordsEnabled = mXparser::unicodeKeyWordsEnabled;
		attemptToFixExpStrEnabled = mXparser::attemptToFixExpStrEnabled;
		disableRounding = KEEP_ROUNDING_SETTINGS;
	}

	/**
	 * Common elements while expression initializing
	 */
	API_VISIBLE void Expression::expressionInit() {
		/*
		 * New lists
		 */
		argumentsList = new_List<ArgumentPtr>();
		functionsList = new_List<FunctionPtr>();
		constantsList = new_List<ConstantPtr>();
		relatedExpressionsList = new_List<ExpressionPtr>();
		/*
		 * Empty description
		 * Silent mode
		 * No recursive mode
		 */
		setSilentMode();
		disableRecursiveMode();
		expressionInternalVarsInit();
	}

	/*=================================================
	 *
	 * Constructors
	 *
	 *=================================================
	 */
	API_VISIBLE void Expression::executeConstructorConst() {
		expressionString = StringInvariant::EMPTY;
		expressionInit();
		setExpressionModifiedFlag();
	}

	/**
	 * Constructor - creates new expression from expression string.
	 * @param expressionString    definition of the expression
	 * @param parserKeyWordsOnly  if true then all keywords such as functions,
	 *                            constants, arguments will not be recognized.
	 */
	API_VISIBLE void Expression::executeConstructorConst(const StringPtr &expressionString, bool parserKeyWordsOnly) {
		expressionInit();
		this->expressionString = expressionString;
		setExpressionModifiedFlag();
		this->parserKeyWordsOnly = parserKeyWordsOnly;
	}

	API_VISIBLE void Expression::executeConstructorConst(StringPtr &expressionString, bool parserKeyWordsOnly) {
		executeConstructorConst(CONST_STRING_PTR(expressionString), parserKeyWordsOnly);
	}

	API_VISIBLE void Expression::executeConstructorConst(const String &expressionString, bool parserKeyWordsOnly) {
		executeConstructorConst(S(expressionString), parserKeyWordsOnly);
	}

	API_VISIBLE void Expression::executeConstructorConst(String &expressionString, bool parserKeyWordsOnly) {
		executeConstructorConst(CONST_STRING(expressionString), parserKeyWordsOnly);
	}

	/**
	 * Package level constructor - creates new expression from subexpression
	 * (sublist of the tokens list), arguments list, functions list and
	 * constants list (used by the internal calculus operations, etc...).
	 *
	 * @param      expressionString    the expression string
	 * @param      initialTokens       the tokens list (starting point - no tokenizing,
	 *                                 no syntax checking)
	 * @param      argumentsList       the arguments list
	 * @param      functionsList       the functions list
	 * @param      constantsList       the constants list
	 */
	API_VISIBLE void Expression::executeConstructorConst(const StringPtr &expressionString, const ListPtr<TokenPtr> &initialTokens,
	                                         const ListPtr<ArgumentPtr> &argumentsList,
	                                         const ListPtr<FunctionPtr> &functionsList,
	                                         const ListPtr<ConstantPtr> &constantsList, bool disableUlpRounding,
	                                         bool UDFExpression, const ListPtr<double> &UDFVariadicParamsAtRunTime) {
		this->expressionString = expressionString;
		this->initialTokens = initialTokens;
		this->argumentsList = argumentsList;
		this->functionsList = functionsList;
		this->constantsList = constantsList;
		relatedExpressionsList = new_List<ExpressionPtr>();
		expressionWasModified = false;
		syntaxStatus = NO_SYNTAX_ERRORS;
		isFullyCompiled = false;
		description = StringInvariant::INTERNAL;
		errorMessage = StringInvariant::EMPTY;
		errorMessageCalculate = StringInvariant::EMPTY;
		computingTime = 0;
		recursionCallPending = false;
		recursionCallsCounter = 0;
		internalClone = false;
		forwardErrorMessage = true;
		parserKeyWordsOnly = false;
		verboseMode = false;
		impliedMultiplicationMode = mXparser::impliedMultiplicationMode;
		unicodeKeyWordsEnabled = mXparser::unicodeKeyWordsEnabled;
		attemptToFixExpStrEnabled = mXparser::attemptToFixExpStrEnabled;
		this->UDFExpression = UDFExpression;
		this->UDFVariadicParamsAtRunTime = UDFVariadicParamsAtRunTime;
		this->disableRounding = disableUlpRounding;
		setSilentMode();
		disableRecursiveMode();
	}

	API_VISIBLE void Expression::executeConstructorConst(StringPtr &expressionString, ListPtr<TokenPtr> &initialTokens,
	                                         ListPtr<ArgumentPtr> &argumentsList, ListPtr<FunctionPtr> &functionsList,
	                                         ListPtr<ConstantPtr> &constantsList, bool disableUlpRounding,
	                                         bool UDFExpression, ListPtr<double> &UDFVariadicParamsAtRunTime) {
		executeConstructorConst(CONST_STRING_PTR(expressionString),
		                        CONST_LIST_TOKEN(initialTokens),
		                        CONST_LIST_ARGUMENT(argumentsList),
		                        CONST_LIST_FUNCTION(functionsList),
		                        CONST_LIST_CONSTANT(constantsList), disableUlpRounding,
		                        UDFExpression, CONST_LIST_DOUBLE(UDFVariadicParamsAtRunTime));
	}

	/**
	 * Package level constructor - creates new expression from expression string,
	 * arguments list, functions list and constants list (used by the
	 * RecursiveArgument class).
	 *
	 * No related expressions at the beginning.
	 *
	 * @param      expressionString    the expression string
	 * @param      argumentsList       the arguments list
	 * @param      functionsList       the functions list
	 * @param      constantsList       the constants list
	 * @param      internal            the marker for internal processing
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 * @see        Function
	 * @see        Constant
	 */
	API_VISIBLE void Expression::executeConstructorConst(const StringPtr &expressionString,
	                                         const ListPtr<ArgumentPtr> &argumentsList,
	                                         const ListPtr<FunctionPtr> &functionsList,
	                                         const ListPtr<ConstantPtr> &constantsList, bool internal,
	                                         bool UDFExpression, const ListPtr<double> &UDFVariadicParamsAtRunTime) {
		this->expressionString = expressionString;
		expressionInternalVarsInit();
		setSilentMode();
		disableRecursiveMode();
		this->argumentsList = argumentsList;
		this->functionsList = functionsList;
		this->constantsList = constantsList;
		this->UDFExpression = UDFExpression;
		this->UDFVariadicParamsAtRunTime = UDFVariadicParamsAtRunTime;
		relatedExpressionsList = new_List<ExpressionPtr>();
		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::executeConstructorConst(StringPtr &expressionString, ListPtr<ArgumentPtr> &argumentsList,
	                                         ListPtr<FunctionPtr> &functionsList, ListPtr<ConstantPtr> &constantsList,
	                                         bool internal, bool UDFExpression,
	                                         ListPtr<double> &UDFVariadicParamsAtRunTime) {
		executeConstructorConst(CONST_STRING_PTR(expressionString),
		                        CONST_LIST_ARGUMENT(argumentsList),
		                        CONST_LIST_FUNCTION(functionsList),
		                        CONST_LIST_CONSTANT(constantsList), internal, UDFExpression,
		                        CONST_LIST_DOUBLE(UDFVariadicParamsAtRunTime));
	}

	/*
	 * Private constructor - expression cloning.
	 */
	API_VISIBLE void Expression::executeConstructorConst(const ExpressionPtr &expressionToClone, bool isThreadSafeClone,
	                                         const CloneCachePtr &cloneCache) {
		expressionString = expressionToClone->expressionString;
		expressionStringCleaned = expressionToClone->expressionStringCleaned;
		description = expressionToClone->description;
		computingTime = expressionToClone->computingTime;
		expressionWasModified = expressionToClone->expressionWasModified;
		recursiveMode = expressionToClone->recursiveMode;
		verboseMode = expressionToClone->verboseMode;
		impliedMultiplicationMode = expressionToClone->impliedMultiplicationMode;
		impliedMultiplicationError = expressionToClone->impliedMultiplicationError;
		disableRounding = expressionToClone->disableRounding;
		syntaxStatus = expressionToClone->syntaxStatus;
		isFullyCompiled = expressionToClone->isFullyCompiled;
		errorMessage = expressionToClone->errorMessage;
		errorMessageCalculate = expressionToClone->errorMessageCalculate;
		recursionCallPending = expressionToClone->recursionCallPending;
		recursionCallsCounter = expressionToClone->recursionCallsCounter;
		parserKeyWordsOnly = expressionToClone->parserKeyWordsOnly;
		unicodeKeyWordsEnabled = expressionToClone->unicodeKeyWordsEnabled;
		attemptToFixExpStrEnabled = expressionToClone->attemptToFixExpStrEnabled;
		UDFExpression = expressionToClone->UDFExpression;
		forwardErrorMessage = expressionToClone->forwardErrorMessage;
		optionsChangesetNumber = expressionToClone->optionsChangesetNumber;
		keyWordsList = expressionToClone->keyWordsList;
		UDFVariadicParamsAtRunTime = expressionToClone->UDFVariadicParamsAtRunTime;
		neverParseForImpliedMultiplication = expressionToClone->neverParseForImpliedMultiplication;

		if (isThreadSafeClone) {
			internalClone = expressionToClone->internalClone;
			relatedExpressionsList = new_List<ExpressionPtr>();
			registerThreadSafeCloneElementsToPostConstructorSync(expressionToClone, cloneCache);
			return;
		}

		internalClone = true;
		argumentsList = expressionToClone->argumentsList;
		functionsList = expressionToClone->functionsList;
		constantsList = expressionToClone->constantsList;
		relatedExpressionsList = expressionToClone->relatedExpressionsList;
	}

	API_VISIBLE void Expression::executeConstructorConst(ExpressionPtr &expressionToClone, bool isThreadSafeClone,
	                                         CloneCachePtr &cloneCache) {
		executeConstructorConst(CONST_EXPRESSION(expressionToClone), isThreadSafeClone,
		                        CONST_CLONE_CACHE(cloneCache));
	}


	API_VISIBLE void Expression::executeConstructorConst(const StringPtr &expressionString) {
		expressionInit();
		this->expressionString = expressionString;
		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::executeConstructorConst(StringPtr &expressionString) {
		executeConstructorConst(CONST_STRING_PTR(expressionString));
	}

	API_VISIBLE void Expression::executeConstructorConst(const String &expressionString) {
		executeConstructorConst(S(expressionString));
	}

	API_VISIBLE void Expression::executeConstructorConst(String &expressionString) {
		executeConstructorConst(CONST_STRING(expressionString));
	}

	/**
	 * Sets (modifies expression) expression string.
	 *
	 * @param      expressionString    the expression string
	 */
	API_VISIBLE void Expression::setExpressionString(const StringPtr &expressionString) {
		this->expressionString = expressionString;
		expressionStringCleaned = StringInvariant::EMPTY;
		setExpressionModifiedFlag();
	}

	/**
	 * Returns expression string
	 *
	 * @return Expression string definition.
	 */
	API_VISIBLE StringPtr Expression::getExpressionString() {
		return expressionString;
	}

	/**
	 * Returns expression string
	 *
	 * @return Expression string definition.
	 */
	API_VISIBLE StringPtr Expression::getCanonicalExpressionString() {
		StringBuilderPtr canonicalExpression = new_StringBuilder();
		ListPtr<TokenPtr> tokens = getCopyOfInitialTokens();
		for (const TokenPtr& t : *tokens)
			canonicalExpression->append(t->tokenStr);
		return canonicalExpression->toString();
	}

	/**
	 * Clears expression string
	 */
	API_VISIBLE void Expression::clearExpressionString() {
		expressionString = StringInvariant::EMPTY;
		expressionStringCleaned = StringInvariant::EMPTY;
		setExpressionModifiedFlag();
	}

	/**
	 * Sets expression description.
	 *
	 * @param      description         the description string
	 */
	API_VISIBLE void Expression::setDescription(const StringPtr &description) {
		this->description = description;
	}

	/**
	 * Gets expression description.
	 *
	 * @return     StringPtr description.
	 */
	API_VISIBLE StringPtr Expression::getDescription() {
		return description;
	}

	/**
	 * Clears expression description
	 */
	API_VISIBLE void Expression::clearDescription() {
		this->description = StringInvariant::EMPTY;
	}

	/**
	 * Enables verbose mode.
	 */
	API_VISIBLE void Expression::setVerboseMode() {
		verboseMode = true;
	}

	/**
	 * Disables verbose mode (default silent mode).
	 */
	API_VISIBLE void Expression::setSilentMode() {
		verboseMode = false;
	}

	/**
	 * Returns verbose mode status.
	 *
	 * @return     true if verbose mode is on,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Expression::getVerboseMode() const {
		return verboseMode;
	}

	/**
	 * Sets implied multiplication
	 */
	API_VISIBLE void Expression::enableImpliedMultiplicationMode() {
		if (impliedMultiplicationMode) return;
		impliedMultiplicationMode = true;
		setExpressionModifiedFlag();
	}

	/**
	 * Disables implied multiplication
	 */
	API_VISIBLE void Expression::disableImpliedMultiplicationMode() {
		if (!impliedMultiplicationMode) return;
		impliedMultiplicationMode = false;
		setExpressionModifiedFlag();
	}

	/**
	 * Gets implied multiplication status
	 *
	 * @return     true if implied multiplication is enabled,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Expression::checkIfImpliedMultiplicationMode() const {
		return impliedMultiplicationMode;
	}

	/**
	 * Enables unicode built-in parser keywords, this flag
	 * informs the parser that built-in unicode keywords
	 * are supported and will be recognized as functions or
	 * operators.
	 */
	API_VISIBLE void Expression::enableUnicodeBuiltinKeyWordsMode() {
		if (unicodeKeyWordsEnabled) return;
		unicodeKeyWordsEnabled = true;
		setExpressionModifiedFlag();
	}

	/**
	 * Disables unicode built-in parser keywords, this flag
	 * informs the parser that built-in unicode keywords
	 * are not supported and will not be recognized as functions or
	 * operators.
	 */
	API_VISIBLE void Expression::disableUnicodeBuiltinKeyWordsMode() {
		if (!unicodeKeyWordsEnabled) return;
		unicodeKeyWordsEnabled = false;
		setExpressionModifiedFlag();
	}

	/**
	 * Gets unicode built-in parser keywords mode
	 *
	 * @return     true if unicode built-in parser keywords is enabled,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Expression::checkIfUnicodeBuiltinKeyWordsMode() const {
		return unicodeKeyWordsEnabled;
	}

	/**
	 * Enables attempt to fix the expression String.
	 * For example, situations such as:
	 * "++" change to "+",
	 * "+-" changed to "-"
	 * "-+" changed to "-"
	 * "--" changed to "+"
	 */
	API_VISIBLE void Expression::enableAttemptToFixExpStrMode() {
		if (attemptToFixExpStrEnabled) return;
		attemptToFixExpStrEnabled = true;
		setExpressionModifiedFlag();
	}

	/**
	 * Disables attempt to fix the expression String.
	 * For example, situations such as:
	 * "++" change to "+",
	 * "+-" changed to "-"
	 * "-+" changed to "-"
	 * "--" changed ro "+"
	 */
	API_VISIBLE void Expression::disableAttemptToFixExpStrMode() {
		if (!attemptToFixExpStrEnabled) return;
		attemptToFixExpStrEnabled = false;
		setExpressionModifiedFlag();
	}

	/**
	 * Gets attempt to fix expression string mode
	 *
	 * @return     true attempt to fix expression string mode is enabled,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Expression::checkIfAttemptToFixExpStrMode() const {
		return attemptToFixExpStrEnabled;
	}

	/**
	 * Sets recursive mode
	 */
	API_VISIBLE void Expression::setRecursiveMode() {
		recursiveMode = true;
	}

	/**
	 * Disables recursive mode
	 */
	API_VISIBLE void Expression::disableRecursiveMode() {
		recursiveMode = false;
	}

	/**
	 * Gets recursive mode status
	 *
	 * @return     true if recursive mode is enabled,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Expression::getRecursiveMode() const {
		return recursiveMode;
	}

	/**
	 * An indicator of whether an error message
	 * should be passed from the current expression
	 * to the expression that called it.
	 *
	 * @param forward If true then message is being forwarded.
	 */
	API_VISIBLE void Expression::setForwardErrorMessage(bool forward) {
		if (forward == forwardErrorMessage) return;
		errorMessage = StringInvariant::EMPTY;
		errorMessageCalculate = StringInvariant::EMPTY;
		forwardErrorMessage = forward;
	}

	/**
	 * Gets computing time.
	 *
	 * @return     computing time in seconds.
	 */
	API_VISIBLE double Expression::getComputingTime() const {
		return computingTime;
	}

	/**
	 * Adds user defined elements (such as: Arguments, Constants, Functions)
	 * to the expressions.
	 *
	 * @param elements Elements list (variadic), where Argument, Constant, Function
	 *                 extend the same class PrimitiveElement
	 *
	 * @see PrimitiveElement
	 */
	API_VISIBLE void Expression::addDefinitions(const ListPtr<PrimitiveElementPtr> &elements) {
		for (const PrimitiveElementPtr &e: *elements)
			addDefinitions(e);
	}

	API_VISIBLE void Expression::addDefinitions(const PrimitiveElementPtr &element) {
		if (element == nullptr) return;
		switch (element->getMyTypeId()) {
			case Argument::TYPE_ID:
			case RecursiveArgument::TYPE_ID_RECURSIVE:
				addArguments(CONST_ARGUMENT(PtrCast<Argument, PrimitiveElement>(element)));
				break;
			case Constant::TYPE_ID:
				addConstants(CONST_CONSTANT(PtrCast<Constant, PrimitiveElement>(element)));
				break;
			case Function::TYPE_ID:
				addFunctions(CONST_FUNCTION(PtrCast<Function, PrimitiveElement>(element)));
				break;
			default: break;
		}
	}

	/**
	 * Removes user defined elements (such as: Arguments, Constants, Functions)
	 * to the expressions.
	 *
	 * @param elements Elements list (variadic), where Argument, Constant, Function
	 *                 extend the same class PrimitiveElement
	 *
	 * @see PrimitiveElement
	 */
	API_VISIBLE void Expression::removeDefinitions(const ListPtr<PrimitiveElementPtr> &elements) {
		for (const PrimitiveElementPtr &e : *elements)
			removeDefinitions(e);
	}

	API_VISIBLE void Expression::removeDefinitions(const PrimitiveElementPtr &element) {
		if (element == nullptr) return;;
		switch (element->getMyTypeId()) {
			case Argument::TYPE_ID:
			case RecursiveArgument::TYPE_ID_RECURSIVE:
				removeArguments(CONST_ARGUMENT(PtrCast<Argument, PrimitiveElement>(element)));
				break;
			case Constant::TYPE_ID:
				removeConstants(CONST_CONSTANT(PtrCast<Constant, PrimitiveElement>(element)));
				break;
			case Function::TYPE_ID:
				removeFunctions(CONST_FUNCTION(PtrCast<Function, PrimitiveElement>(element)));
				break;
			default:
				break;
		}
	}

	/*=================================================
	 *
	 * Arguments handling API
	 *
	 *=================================================
	 */
	/**
	 * Adds arguments (variadic) to the expression definition.
	 *
	 * @param      arguments           the arguments list
	 *                                 (comma separated list)
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Expression::addArguments(const ListPtr<ArgumentPtr> &arguments) {
		for (const ArgumentPtr &arg : *arguments)
			addArguments(arg);
	}

	API_VISIBLE void Expression::addArguments(const ArgumentPtr &argument) {
		if (argument == nullptr) return;
		argumentsList->add(argument);

		if (argument->getArgumentBodyType() == Argument::BODY_RUNTIME) {
			if (iAmFullyConstructed)
				argument->addRelatedExpression(THIS(Expression));
			else
				addRelatedExpressionToPostConstructorSync(argument);
		}

		setExpressionModifiedFlag();
	}

	/**
	 * Enables to define the arguments (associated with
	 * the expression) based on the given arguments names.
	 *
	 * @param      argumentsNames      the arguments names (variadic)
	 *                                 comma separated list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Expression::defineArguments(const ListPtr<StringPtr> &argumentsNames) {
		for (const StringPtr& argName : *argumentsNames)
			defineArguments(argName);
	}

	API_VISIBLE void Expression::defineArguments(const StringPtr &argumentName) {
		if (argumentName == nullptr) return;
		ArgumentPtr arg = new_Argument(argumentName);
		arg->addRelatedExpression(THIS(Expression));
		argumentsList->add(arg);
		setExpressionModifiedFlag();
	}

	/**
	 * Enables to define the argument (associated with the expression)
	 * based on the argument name and the argument value.
	 *
	 * @param      argumentName        the argument name
	 * @param      argumentValue       the argument value
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Expression::defineArgument(const StringPtr &argumentName, double argumentValue) {
		ArgumentPtr arg = new_Argument(argumentName, argumentValue);
		arg->addRelatedExpression(THIS(Expression));
		argumentsList->add(arg);
		setExpressionModifiedFlag();
	}

	/**
	 * Gets argument index from the expression.
	 *
	 * @param      argumentName        the argument name
	 *
	 * @return     The argument index if the argument name was found,
	 *             otherwise returns Argument::NOT_FOUND
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE int Expression::getArgumentIndex(const StringPtr &argumentName) const {
		int argumentsNumber = argumentsList->size();
		if (argumentsNumber == 0)
			return NOT_FOUND;

		for (int argumentIndex = 0; argumentIndex < argumentsNumber; argumentIndex++)
			if (*argumentsList->getRef(argumentIndex)->getArgumentName() == *argumentName)
				return argumentIndex;

		return NOT_FOUND;
	}

	/**
	 * Gets argument from the expression.
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
	API_VISIBLE ArgumentPtr Expression::getArgument(const StringPtr &argumentName) const {
		int argumentIndex = getArgumentIndex(argumentName);
		if (argumentIndex == NOT_FOUND)
			return nullptr;
		return argumentsList->getRef(argumentIndex);
	}

	/**
	 * Gets argument from the expression.
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
	API_VISIBLE ArgumentPtr Expression::getArgument(int argumentIndex) const {
		if (argumentIndex < 0 || argumentIndex >= argumentsList->size())
			return nullptr;
		return argumentsList->getRef(argumentIndex);
	}

	/**
	 * Gets number of arguments associated with the expression.
	 *
	 * @return     The number of arguments (int &gt;= 0)
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE int Expression::getArgumentsNumber() const {
		return argumentsList->size();
	}

	/**
	 * Sets argument value.
	 *
	 * @param      argumentName        the argument name
	 * @param      argumentValue       the argument value
	 */
	API_VISIBLE void Expression::setArgumentValue(const StringPtr &argumentName, double argumentValue) {
		int argumentIndex = getArgumentIndex(argumentName);
		if (argumentIndex != NOT_FOUND)
			argumentsList->getRef(argumentIndex)->setArgumentValue(argumentValue);
	}

	/**
	 * Gets argument vale.
	 *
	 * @param      argumentName        the argument name
	 *
	 * @return     Argument value if argument name was found,
	 *             otherwise return Double::NaN.
	 */
	API_VISIBLE double Expression::getArgumentValue(const StringPtr &argumentName) {
		int argumentIndex = getArgumentIndex(argumentName);
		if (argumentIndex == NOT_FOUND)
			return Double::NaN;
		return argumentsList->getRef(argumentIndex)->getArgumentValue();
	}

	/**
	 * Removes first occurrences of the arguments
	 * associated with the expression.
	 *
	 * @param      argumentsNames      the arguments names
	 *                                 (variadic parameters) comma separated
	 *                                 list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Expression::removeArguments(const ListPtr<StringPtr> &argumentsNames) {
		for (const StringPtr& argumentName : *argumentsNames)
			removeArguments(argumentName);

		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::removeArguments(const StringPtr &argumentName) {
		if (argumentName == nullptr) return;
		int argumentIndex = getArgumentIndex(argumentName);
		if (argumentIndex == NOT_FOUND) return;;
		const ArgumentPtr& arg = argumentsList->getRef(argumentIndex);
		arg->removeRelatedExpression(THIS(Expression));
		argumentsList->remove(argumentIndex);
		setExpressionModifiedFlag();
	}

	/**
	 * Removes first occurrences of the arguments
	 * associated with the expression.
	 *
	 * @param      arguments           the arguments (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Expression::removeArguments(const ListPtr<ArgumentPtr> &arguments) {
		for (const ArgumentPtr &argument : *arguments)
			removeArguments(argument);

		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::removeArguments(const ArgumentPtr &argument) {
		if (argument == nullptr) return;
		argumentsList->remove(argument);
		argument->removeRelatedExpression(THIS(Expression));
		setExpressionModifiedFlag();
	}

	/**
	 * Removes all arguments associated with the expression.
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	API_VISIBLE void Expression::removeAllArguments() {
		for (const ArgumentPtr &arg : *argumentsList)
			arg->removeRelatedExpression(THIS(Expression));
		argumentsList->clear();
		setExpressionModifiedFlag();
	}

	/*=================================================
	 *
	 * Constants handling API
	 *
	 *=================================================
	 */
	/**
	 * Adds constants (variadic parameters) to the expression definition.
	 *
	 * @param      constants           the constants
	 *                                 (comma separated list)
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Expression::addConstants(const ListPtr<ConstantPtr> &constants) {
		for (const ConstantPtr &constant : *constants)
			addConstants(constant);

		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::addConstants(const ConstantPtr &constant) {
		if (constant == nullptr) return;
		constantsList->add(constant);

		if (iAmFullyConstructed)
			constant->addRelatedExpression(THIS(Expression));
		else
			addRelatedExpressionToPostConstructorSync(constant);

		setExpressionModifiedFlag();
	}

	/**
	 * Enables to define the constant (associated with
	 * the expression) based on the constant name and
	 * constant value.
	 *
	 * @param      constantName        the constant name
	 * @param      constantValue       the constant value
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Expression::defineConstant(const StringPtr &constantName, double constantValue) {
		ConstantPtr c = new_Constant(constantName, constantValue);
		c->addRelatedExpression(THIS(Expression));
		constantsList->add(c);
		setExpressionModifiedFlag();
	}

	/**
	 * Gets constant index associated with the expression.
	 *
	 * @param      constantName        the constant name
	 *
	 * @return     Constant index if constant name was found,
	 *             otherwise return Constant::NOT_FOUND.
	 *
	 * @see        Constant
	 */
	API_VISIBLE int Expression::getConstantIndex(const StringPtr &constantName) const {
		int constantsNumber = constantsList->size();
		if (constantsNumber == 0)
			return NOT_FOUND;

		for (int constantIndex = 0; constantIndex < constantsNumber; constantIndex++)
			if (*constantsList->getRef(constantIndex)->getConstantName() == *constantName)
				return constantIndex;

		return NOT_FOUND;
	}

	/**
	 * Gets constant associated with the expression.
	 *
	 * @param      constantName        the constant name
	 *
	 * @return     Constant if constant name was found,
	 *             otherwise return nullptr.
	 *
	 * @see        Constant
	 */
	API_VISIBLE ConstantPtr Expression::getConstant(const StringPtr &constantName) const {
		int constantIndex = getConstantIndex(constantName);
		if (constantIndex == NOT_FOUND)
			return nullptr;
		return constantsList->getRef(constantIndex);
	}

	/**
	 * Gets constant associated with the expression.
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
	API_VISIBLE ConstantPtr Expression::getConstant(int constantIndex) const {
		if (constantIndex < 0 || constantIndex >= constantsList->size())
			return nullptr;
		return constantsList->getRef(constantIndex);
	}

	/**
	 * Gets number of constants associated with the expression.
	 *
	 * @return     number of constants (int &gt;= 0)
	 *
	 * @see        Constant
	 */
	API_VISIBLE int Expression::getConstantsNumber() const {
		return constantsList->size();
	}

	/**
	 * Removes first occurrences of the constants
	 * associated with the expression.
	 *
	 * @param      constantsNames      the constants names (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Expression::removeConstants(const ListPtr<StringPtr> &constantsNames) {
		for (const StringPtr& constantName : *constantsNames)
			removeConstants(constantName);

		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::removeConstants(const StringPtr &constantName) {
		if (constantName == nullptr) return;
		int constantIndex = getConstantIndex(constantName);
		if (constantIndex == NOT_FOUND) return;
		const ConstantPtr& c = constantsList->getRef(constantIndex);
		c->removeRelatedExpression(THIS(Expression));
		constantsList->remove(constantIndex);
		setExpressionModifiedFlag();
	}

	/**
	 * Removes first occurrences of the constants
	 * associated with the expression
	 *
	 * @param      constants           the constants (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Expression::removeConstants(const ListPtr<ConstantPtr> &constants) {
		for (const ConstantPtr & constant: *constants)
			removeConstants(constant);

		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::removeConstants(const ConstantPtr &constant) {
		if (constant == nullptr) return;
		constantsList->remove(constant);
		constant->removeRelatedExpression(THIS(Expression));
		setExpressionModifiedFlag();
	}

	/**
	 * Removes all constants
	 * associated with the expression
	 *
	 * @see        Constant
	 */
	API_VISIBLE void Expression::removeAllConstants() {
		for (const ConstantPtr & c: *constantsList)
			c->removeRelatedExpression(THIS(Expression));
		constantsList->clear();
		setExpressionModifiedFlag();
	}

	/*=================================================
	 *
	 * Functions handling API
	 *
	 *=================================================
	 */
	/**
	 * Adds functions (variadic parameters) to the expression definition.
	 *
	 * @param      functions           the functions
	 *                                 (variadic parameters) comma separated list
	 *
	 * @see        Function
	 */
	API_VISIBLE void Expression::addFunctions(const ListPtr<FunctionPtr> &functions) {
		for (const FunctionPtr &f: *functions)
			addFunctions(f);

		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::addFunctions(const FunctionPtr &function) {
		if (function == nullptr) return;
		functionsList->add(function);

		if (function->getFunctionBodyType() == Function::BODY_RUNTIME) {
			if (iAmFullyConstructed)
				function->addRelatedExpression(THIS(Expression));
			else
				addRelatedExpressionToPostConstructorSync(function);
		}

		setExpressionModifiedFlag();
	}

	/**
	 * Enables to define the function (associated with
	 * the expression) based on the function name,
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
	API_VISIBLE void Expression::defineFunction(const StringPtr &functionName, const StringPtr &functionExpressionString,
	                                const ListPtr<StringPtr> &argumentsNames) {
		FunctionPtr f = new_Function(functionName, functionExpressionString, argumentsNames);
		functionsList->add(f);
		f->addRelatedExpression(THIS(Expression));
		setExpressionModifiedFlag();
	}

	/**
	 * Gets index of function associated with the expression.
	 *
	 * @param      functionName        the function name
	 *
	 * @return     Function index if function name was found,
	 *             otherwise returns Function::NOT_FOUND
	 *
	 * @see        Function
	 */
	API_VISIBLE int Expression::getFunctionIndex(const StringPtr &functionName) const {
		int functionsNumber = functionsList->size();
		if (functionsNumber == 0)
			return NOT_FOUND;

		for (int functionIndex = 0; functionIndex < functionsNumber; functionIndex++)
			if (*functionsList->getRef(functionIndex)->getFunctionName() == *functionName)
				return functionIndex;

		return NOT_FOUND;
	}

	/**
	 * Gets function associated with the expression.
	 *
	 * @param      functionName        the function name
	 *
	 * @return     Function if function name was found,
	 *             otherwise returns nullptr.
	 *
	 * @see        Function
	 */
	API_VISIBLE FunctionPtr Expression::getFunction(const StringPtr &functionName) const {
		int functionIndex = getFunctionIndex(functionName);
		if (functionIndex == NOT_FOUND)
			return nullptr;
		return functionsList->getRef(functionIndex);
	}

	/**
	 * Gets function associated with the expression.
	 *
	 * @param      functionIndex the function index
	 *
	 * @return     Function if function index is between 0 and
	 *             the last available function index (getFunctionsNumber()-1),
	 *             otherwise returns nullptr.
	 *
	 * @see        Function
	 */
	API_VISIBLE FunctionPtr Expression::getFunction(int functionIndex) const {
		if (functionIndex < 0 || functionIndex >= functionsList->size())
			return nullptr;
		return functionsList->getRef(functionIndex);
	}

	/**
	 * Gets number of functions associated with the expression.
	 *
	 * @return     number of functions (int &gt;= 0)
	 *
	 * @see        Function
	 */
	API_VISIBLE int Expression::getFunctionsNumber() const {
		return functionsList->size();
	}

	/**
	 * Removes first occurrences of the functions
	 * associated with the expression.
	 *
	 * @param      functionsNames      the functions names (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Function
	 */
	API_VISIBLE void Expression::removeFunctions(const ListPtr<StringPtr> &functionsNames) {
		for (const StringPtr& functionName : *functionsNames)
			removeFunctions(functionName);

		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::removeFunctions(const StringPtr &functionName) {
		if (functionName == nullptr) return;
		int functionIndex = getFunctionIndex(functionName);
		if (functionIndex == NOT_FOUND) return;
		const FunctionPtr& f = functionsList->getRef(functionIndex);
		f->removeRelatedExpression(THIS(Expression));
		functionsList->remove(f);
		setExpressionModifiedFlag();
	}

	/**
	 * Removes first occurrences of the functions
	 * associated with the expression.
	 *
	 * @param      functions           the functions (variadic parameters)
	 *                                 comma separated list.
	 *
	 * @see        Function
	 */
	API_VISIBLE void Expression::removeFunctions(const ListPtr<FunctionPtr> &functions) {
		for (const FunctionPtr &function : *functions)
			removeFunctions(function);

		setExpressionModifiedFlag();
	}

	API_VISIBLE void Expression::removeFunctions(const FunctionPtr &function) {
		if (function == nullptr) return;
		function->removeRelatedExpression(THIS(Expression));
		functionsList->remove(function);
		setExpressionModifiedFlag();
	}

	/**
	 * Removes all functions
	 * associated with the expression.
	 *
	 * @see        Function
	 */
	API_VISIBLE void Expression::removeAllFunctions() {
		for (const FunctionPtr &f : *functionsList)
			f->removeRelatedExpression(THIS(Expression));
		functionsList->clear();
		setExpressionModifiedFlag();
	}

	/*=================================================
	 *
	 * Common methods (supporting calculations)
	 *
	 *=================================================
	 */
	/**
	 * Sets given token to the number type / value.
	 * Method should be called only by the SetDecreaseRemove like methods
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      number              the number
	 * @param      ulpRound            If true, then if {mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	API_VISIBLE void Expression::setToNumber(int pos, double number, bool ulpRound) {
		const TokenPtr& token = tokensList->getRef(pos);
		token->tokenTypeId = ParserSymbol::NUMBER_TYPE_ID;
		token->tokenId = ParserSymbol::NUMBER_ID;
		token->keyWord = ParserSymbol::NUMBER_STR;

		if (!mXparser::ulpRounding || disableRounding || !ulpRound) {
			token->tokenValue = number;
			return;
		}

		if (Double::isNaN(number) || Double::isInfinite(number)) {
			token->tokenValue = number;
			return;
		}

		int precision = MathFunctions::ulpDecimalDigitsBefore(number);
		if (precision >= 0)
			token->tokenValue = MathFunctions::round(number, precision);
		else
			token->tokenValue = number;
	}

	API_VISIBLE void Expression::setToNumber(int pos, double number) {
		setToNumber(pos, number, false);
	}

	/**
	 * SetDecreaseRemove for 1 arg functions
	 *
	 * SetDecreaseRemove like methods are called by the methods
	 * calculating values of the unary operation, binary relations
	 * and functions.
	 *
	 * 3 things are done by this type of methods
	 * 1) Set token type to number type / value
	 * 2) Decrease level of the token
	 * 3) Remove no longer needed tokens
	 *
	 * For example:
	 *
	 * Expression string: 1+cos(0)
	 * will be tokened as follows:
	 *
	 *   idx   :  0   1    2    3   4   5
	 *   token :  1   +   cos   (   0   )
	 *   level :  0   0    1    2   2   2
	 *
	 * Partitions with the highest level will be handled first.
	 * In the case presented above, it means, that the parenthesis will be removed
	 *
	 *   idx   :  0   1    2    3
	 *   token :  1   +   cos   0
	 *   level :  0   0    1    2
	 *
	 * Next step is to calculate cos(0) = 1
	 *
	 * SetDecreaseRemove like methods
	 *
	 * 1) Set cos token to 1 (pos=2, result=1):
	 *   idx   :  0   1    2    3
	 *   token :  1   +    1    0
	 *   level :  0   0    1    2
	 *
	 * 2) Decrease level (pos=2):
	 *   idx   :  0   1    2    3
	 *   token :  1   +    1    0
	 *   level :  0   0    0    2
	 *
	 * 3) Remove no longer needed tokens (pos+1=3):
	 *   idx   :  0   1    2
	 *   token :  1   +    1
	 *   level :  0   0    0
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	API_VISIBLE void Expression::f1SetDecreaseRemove(int pos, double result, bool ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList->getRef(pos)->tokenLevel--;
		tokensList->remove(pos + 1);
	}

	API_VISIBLE void Expression::f1SetDecreaseRemove(int pos, double result) {
		f1SetDecreaseRemove(pos, result, false);
	}

	/**
	 * SetDecreaseRemove for 2-args functions
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	API_VISIBLE void Expression::f2SetDecreaseRemove(int pos, double result, bool ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList->getRef(pos)->tokenLevel--;
		tokensList->remove(pos + 2);
		tokensList->remove(pos + 1);
	}

	API_VISIBLE void Expression::f2SetDecreaseRemove(int pos, double result) {
		f2SetDecreaseRemove(pos, result, false);
	}

	/**
	 * SetDecreaseRemove for 3-args functions
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	API_VISIBLE void Expression::f3SetDecreaseRemove(int pos, double result, bool ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList->getRef(pos)->tokenLevel--;
		tokensList->remove(pos + 3);
		tokensList->remove(pos + 2);
		tokensList->remove(pos + 1);
	}

	API_VISIBLE void Expression::f3SetDecreaseRemove(int pos, double result) {
		f3SetDecreaseRemove(pos, result, false);
	}

	/**
	 * SetDecreaseRemove for operators
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	API_VISIBLE void Expression::opSetDecreaseRemove(int pos, double result, bool ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList->remove(pos + 1);
		tokensList->remove(pos - 1);
	}

	API_VISIBLE void Expression::opSetDecreaseRemove(int pos, double result) {
		opSetDecreaseRemove(pos, result, false);
	}

	/**
	 * SetDecreaseRemove for calculus operators.
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	API_VISIBLE void Expression::calcSetDecreaseRemove(int pos, double result, bool ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList->getRef(pos)->tokenLevel--;
		/*
		 * left parenthesis position
		 */
		int lPos = pos + 1;
		/*
		 * Evaluate right parenthesis position
		 */
		int rPos = lPos + 1;
		while (!(tokensList->getRef(rPos)->tokenTypeId == ParserSymbol::TYPE_ID
		         && tokensList->getRef(rPos)->tokenId == ParserSymbol::RIGHT_PARENTHESES_ID
		         && tokensList->getRef(rPos)->tokenLevel == tokensList->getRef(lPos)->tokenLevel))
			rPos++;
		for (int p = rPos; p >= lPos; p--)
			tokensList->remove(p);
	}

	API_VISIBLE void Expression::calcSetDecreaseRemove(int pos, double result) {
		calcSetDecreaseRemove(pos, result, false);
	}

	/**
	 * SetDecreaseRemove for special functions.
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      value              the number
	 * @param      length              the special function range
	 * @param      ulpRound            If true, then if {mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	API_VISIBLE void Expression::variadicSetDecreaseRemove(int pos, double value, int length, bool ulpRound) {
		setToNumber(pos, value, ulpRound);
		tokensList->getRef(pos)->tokenLevel--;
		for (int p = pos + length; p > pos; p--)
			tokensList->remove(p);
	}

	API_VISIBLE void Expression::variadicSetDecreaseRemove(int pos, double value, int length) {
		variadicSetDecreaseRemove(pos, value, length, false);
	}

	/**
	 * If set remove method for the if function->
	 *
	 * @param      pos                 the position
	 * @param      ifCondition         the result of if condition
	 * @param      ulpRound            If true, then if {mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	API_VISIBLE void Expression::ifSetRemove(int pos, double ifCondition, bool ulpRound) {
		/*
		 * left parethesis position
		 */
		int lPos = pos + 1;
		int ifLevel = tokensList->getRef(lPos)->tokenLevel;
		/*
		 * Evaluate 1 comma position on the same level
		 */
		int c1Pos = lPos + 1;
		while (!(tokensList->getRef(c1Pos)->tokenTypeId == ParserSymbol::TYPE_ID
		         && tokensList->getRef(c1Pos)->tokenId == ParserSymbol::COMMA_ID
		         && tokensList->getRef(c1Pos)->tokenLevel == ifLevel))
			c1Pos++;
		/*
		 * Evaluate 2 comma position on the same level
		 */
		int c2Pos = c1Pos + 1;
		while (!(tokensList->getRef(c2Pos)->tokenTypeId == ParserSymbol::TYPE_ID
		         && tokensList->getRef(c2Pos)->tokenId == ParserSymbol::COMMA_ID
		         && tokensList->getRef(c2Pos)->tokenLevel == ifLevel))
			c2Pos++;
		/*
		 * Evaluate right parenthesis position
		 */
		int rPos = c2Pos + 1;
		while (!(tokensList->getRef(rPos)->tokenTypeId == ParserSymbol::TYPE_ID
		         && tokensList->getRef(rPos)->tokenId == ParserSymbol::RIGHT_PARENTHESES_ID
		         && tokensList->getRef(rPos)->tokenLevel == ifLevel))
			rPos++;
		if (!Double::isNaN(ifCondition)) {
			if (ifCondition != 0) {
				setToNumber(c2Pos + 1, Double::NaN);
				tokensList->getRef(c2Pos + 1)->tokenLevel = ifLevel;
				removeTokens(c2Pos + 2, rPos - 1);
			} else {
				setToNumber(c1Pos + 1, Double::NaN);
				tokensList->getRef(c1Pos + 1)->tokenLevel = ifLevel;
				removeTokens(c1Pos + 2, c2Pos - 1);
			}
		} else {
			setToNumber(c1Pos + 1, Double::NaN);
			setToNumber(c2Pos + 1, Double::NaN);
			tokensList->getRef(c1Pos + 1)->tokenLevel = ifLevel;
			tokensList->getRef(c2Pos + 1)->tokenLevel = ifLevel;
			removeTokens(c2Pos + 2, rPos - 1);
			removeTokens(c1Pos + 2, c2Pos - 1);
		}
		setToNumber(lPos + 1, ifCondition, ulpRound);
		tokensList->getRef(lPos + 1)->tokenLevel = ifLevel;
		removeTokens(lPos + 2, c1Pos - 1);
		tokensList->getRef(pos)->tokenId = Function3Arg::IF_ID;
	}

	API_VISIBLE void Expression::removeTokens(int from, int to) {
		if (from < to) {
			for (int p = to; p >= from; p--)
				tokensList->remove(p);
		} else if (from == to)
			tokensList->remove(from);
	}

	API_VISIBLE void Expression::ifSetRemove(int pos, double ifCondition) {
		ifSetRemove(pos, ifCondition, false);
	}

	/**
	 * Creates string tokens list from the subexpression.
	 *
	 * @param      startPos            start position (index)
	 * @param      endPos              end position   (index)
	 *
	 * @return     tokens list representing requested subexpression.
	 */
	API_VISIBLE ListPtr<TokenPtr> Expression::createInitialTokens(int startPos, int endPos, const ListPtr<TokenPtr> &tokensList) {
		ListPtr<TokenPtr> tokens = new_List<TokenPtr>();
		for (int p = startPos; p <= endPos; p++) {
			const TokenPtr& t = Token::clone(tokensList->getRef(p));
			tokens->add(t);
		}
		return tokens;
	}

	/**
	 * Return number of functions parameters.
	 *
	 * @param      pos                 the function position
	 */
	API_VISIBLE int Expression::getParametersNumber(int pos) {
		int lPpos = pos + 1;
		if (lPpos == initialTokens->size())
			return -1;
		if (initialTokens->getRef(lPpos)->tokenTypeId != ParserSymbol::TYPE_ID || initialTokens->getRef(lPpos)->tokenId !=
		    ParserSymbol::LEFT_PARENTHESES_ID)
			return -1;

		int tokenLevel = initialTokens->getRef(lPpos)->tokenLevel;
		/*
		 * Evaluate right parenthesis position
		 */
		int endPos = lPpos + 1;
		while (!(initialTokens->getRef(endPos)->tokenTypeId == ParserSymbol::TYPE_ID
		         && initialTokens->getRef(endPos)->tokenId == ParserSymbol::RIGHT_PARENTHESES_ID
		         && initialTokens->getRef(endPos)->tokenLevel == tokenLevel))
			endPos++;
		if (endPos == lPpos + 1)
			return 0;
		/*
		 * Evaluate number of parameters by
		 * counting number of ',' between parenthesis
		 */
		int numberOfCommas = 0;
		for (int p = lPpos; p < endPos; p++) {
			const TokenPtr& token = initialTokens->getRef(p);
			if (token->tokenTypeId == ParserSymbol::TYPE_ID && token->tokenId == ParserSymbol::COMMA_ID && token->
			    tokenLevel == tokenLevel)
				numberOfCommas++;
		}
		return numberOfCommas + 1;
	}

	/**
	 * Gets / returns argument representing given argument name. If
	 * argument name exists on the list of known arguments
	 * the initial status of the found argument is remembered, otherwise new
	 * argument will be created.
	 *
	 * @param      argumentName        the argument name
	 *
	 * @return     Argument parameter representing given argument name:
	 *
	 *
	 * @see        ArgumentParameter
	 * @see        Argument
	 */
	ArgumentParameterPtr Expression::getParamArgument(const StringPtr &argumentName) {
		ArgumentParameterPtr argParam = new_ArgumentParameter();
		argParam->index = getArgumentIndex(argumentName);
		argParam->argument = getArgument(argParam->index);
		argParam->presence = FOUND;
		if (argParam->argument == nullptr) {
			argParam->argument = new_Argument(argumentName);
			argumentsList->add(argParam->argument);
			argParam->index = argumentsList->size() - 1;
			argParam->presence = NOT_FOUND;
			return argParam;
		}
		argParam->initialValue = argParam->argument->argumentValue;
		argParam->initialType = argParam->argument->argumentType;
		argParam->argument->argumentValue = argParam->argument->getArgumentValue();
		argParam->argument->argumentType = Argument::FREE_ARGUMENT;
		return argParam;
	}

	/**
	 * Clears argument parameter.
	 *
	 * @param      argParam            the argument parameter.
	 */
	API_VISIBLE void Expression::clearParamArgument(const ArgumentParameterPtr &argParam) {
		if (argParam->presence == NOT_FOUND) {
			argumentsList->remove(argParam->index);
			return;
		}
		argParam->argument->argumentValue = argParam->initialValue;
		argParam->argument->argumentType = argParam->initialType;
	}

	/*=================================================
	 *
	 * Syntax checking and calculate() method
	 *
	 *=================================================
	 */
	/**
	 * Checks syntax of the expression string.
	 *
	 * @return     true if syntax is ok
	 */
	API_VISIBLE bool Expression::checkLexSyntax() {
		bool syntax = NO_SYNTAX_ERRORS;
		recursionCallsCounter = 0;
		if (expressionString->empty()) {
			syntax = SYNTAX_ERROR;
			errorMessage = StringModel::STRING_RESOURCES->EXPRESSION_STRING_IS_EMPTY + StringInvariant::NEW_LINE;
			return syntax;
		}
		cleanExpressionString();

		CharStreamPtr charStream = new_CharStream(expressionStringCleaned);
		SyntaxCheckerTokenManagerPtr tokenMmanager = new_SyntaxCheckerTokenManager(charStream);
		SyntaxCheckerPtr syntaxChecker = new_SyntaxChecker(tokenMmanager);
		syntax = syntaxChecker->checkSyntax();

		if (!syntax)
			registerSyntaxLexicalError(StringInvariant::EMPTY, syntaxChecker->errorMessages,
			                           tokenMmanager->errorMessages);

		registerFinalSyntax(StringInvariant::EMPTY, syntax);
		return syntax;
	}

	/**
	 * Cleans blanks and other cases like "++', "+-", "-+"", "--"
	 */
	API_VISIBLE void Expression::cleanExpressionString() {
		expressionStringCleaned = ExpressionUtils::cleanExpressionString(expressionString, attemptToFixExpStrEnabled);
	}

	/**
	 * Checks syntax of the expression string.
	 *
	 * @return     true if syntax is ok
	 */
	API_VISIBLE bool Expression::checkSyntax() {
		return checkSyntax(ExpressionUtils::createExpressionDescription(description, expressionString), false);
	}

	/**
	 * Checks syntax of the calculus parameter
	 *
	 * @return     true if syntax is ok
	 */
	API_VISIBLE int Expression::checkCalculusParameter(const StringPtr &param) {
		int errors = 0;
		for (const KeyWordPtr &kw : *keyWordsList)
			if (kw->wordTypeId != Argument::TYPE_ID)
				if (*param == *kw->wordString)
					errors++;
		return errors;
	}

	/**
	 * Checks if argument given in the function parameter is known
	 * in the expression.
	 *
	 * @param      param               the function parameter
	 *
	 * @return     true if argument is known,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Expression::checkIfKnownArgument(const FunctionParameterPtr &param) {
		if (param->tokens->size() > 1)
			return false;
		const TokenPtr& t = param->tokens->getRef(0);
		return t->tokenTypeId == Argument::TYPE_ID;
	}

	/**
	 * Checks if token is uknown
	 *
	 * @param      param               the function parameter
	 *
	 * @return     true if there is only 1 token with unknown type,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Expression::checkIfUnknownToken(const FunctionParameterPtr &param) {
		if (param->tokens->size() > 1)
			return false;
		const TokenPtr& t = param->tokens->getRef(0);
		return t->tokenTypeId == ConstantValue::NaN;
	}

	// ======================================================
	// Syntax checking logic
	API_VISIBLE bool Expression::syntaxIsAlreadyCheckedNorErrors() {
		return !expressionWasModified && syntaxStatus == NO_SYNTAX_ERRORS && optionsChangesetNumber ==
		       mXparser::optionsChangesetNumber;
	}

	API_VISIBLE void Expression::registerFinalSyntaxAlreadyCheckedNorErrors(const StringPtr &recursionInfoLevel) {
		errorMessage = StringModel::startErrorMassage(recursionInfoLevel,
		                                              StringModel::STRING_RESOURCES->ALREADY_CHECKED_NO_ERRORS);
		recursionCallPending = false;
	}

	API_VISIBLE void Expression::registerFinalSyntaxFunctionWithBodyExtNoErrors(const StringPtr &recursionInfoLevel) {
		syntaxStatus = NO_SYNTAX_ERRORS;
		recursionCallPending = false;
		expressionWasModified = false;
		errorMessage = StringModel::startErrorMassage(recursionInfoLevel,
		                                              StringModel::STRING_RESOURCES->
		                                              FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS);
	}

	API_VISIBLE void Expression::registerFinalSyntaxExpressionStringIsEmpty(const StringPtr &recursionInfoLevel) {
		errorMessage = StringModel::addErrorMassage(errorMessage, recursionInfoLevel,
		                                            StringModel::STRING_RESOURCES->EXPRESSION_STRING_IS_EMPTY);
		syntaxStatus = SYNTAX_ERROR;
		recursionCallPending = false;
	}

	API_VISIBLE void Expression::registerSyntaxLexicalErrorFromParserErrorMessage(const StringPtr &recursionInfoLevel,
	                                                                  const ErrorMessagePtr &parserErrorMessege) {
		StringPtr errMsgToAdd;
		switch (parserErrorMessege->errorType) {
			case ErrorMessage::ErrorType::UnexpectedToken:
				errMsgToAdd = StringModel::buildErrorMessageFromUnexpectedTokenError(parserErrorMessege);
				break;
			case ErrorMessage::ErrorType::ParseError:
				errMsgToAdd = StringModel::buildErrorMessageFromParseError(parserErrorMessege);
				break;
			case ErrorMessage::ErrorType::OtherError:
				errMsgToAdd = StringModel::buildErrorMessageFromOtherError(parserErrorMessege);
				break;
			case ErrorMessage::ErrorType::LexicalErrorDetails:
				errMsgToAdd = StringModel::buildErrorMessageFromLexicalErrorDetails(parserErrorMessege);
				break;
			case ErrorMessage::ErrorType::LexicalErrorGeneral:
				errMsgToAdd = StringModel::buildErrorMessageFromLexicalErrorGeneral(parserErrorMessege);
				break;
			case ErrorMessage::ErrorType::Null:
				errMsgToAdd = StringModel::STRING_RESOURCES->UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED;
				break;
		}
		errorMessage = StringModel::addErrorMassage(errorMessage, recursionInfoLevel, errMsgToAdd);
	}

	API_VISIBLE void Expression::registerSyntaxLexicalError(const StringPtr &recursionInfoLevel,
	                                            const VectorPtr<ErrorMessagePtr> &syntaxCheckerErrorMessages,
	                                            const VectorPtr<ErrorMessagePtr> &tokenMmanagerErrorMessages) {
		for (const ErrorMessagePtr& errMsg : *syntaxCheckerErrorMessages)
			registerSyntaxLexicalErrorFromParserErrorMessage(recursionInfoLevel, errMsg);

		for (const ErrorMessagePtr& errMsg : *tokenMmanagerErrorMessages)
			registerSyntaxLexicalErrorFromParserErrorMessage(recursionInfoLevel, errMsg);

		errorMessage = StringModel::addErrorMassage(errorMessage, recursionInfoLevel,
		                                            StringModel::STRING_RESOURCES->LEXICAL_ERROR_HAS_BEEN_FOUND);
	}

	API_VISIBLE void Expression::registerFinalSyntax(const StringPtr &recursionInfoLevel, bool syntax) {
		if (syntax == NO_SYNTAX_ERRORS) {
			errorMessage = StringModel::addErrorMassage(errorMessage, recursionInfoLevel,
			                                            StringModel::STRING_RESOURCES->NO_ERRORS_DETECTED);
			expressionWasModified = false;
		} else {
			errorMessage = StringModel::addErrorMassage(errorMessage, recursionInfoLevel,
			                                            StringModel::STRING_RESOURCES->ERRORS_HAVE_BEEN_FOUND);
			expressionWasModified = true;
		}
		syntaxStatus = syntax;
		recursionCallPending = false;
	}

	API_VISIBLE void Expression::registerPartialSyntaxStartingSyntaxCheck(const StringPtr &recursionInfoLevel) {
		recursionCallPending = true;
		errorMessage = StringModel::startErrorMassage(recursionInfoLevel,
		                                              StringModel::STRING_RESOURCES->STARTING_SYNTAX_CHECK);
	}

	API_VISIBLE bool Expression::checkPartialSyntaxImpliedMultiplication(const StringPtr &recursionInfoLevel) {
		if (!impliedMultiplicationMode && impliedMultiplicationError) {
			errorMessage = StringModel::addErrorMassage(errorMessage, recursionInfoLevel,
			                                            StringModel::STRING_RESOURCES->
			                                            MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE);
			return SYNTAX_ERROR;
		}
		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxDuplicatedKeywords(const StringPtr &recursionInfoLevel) {
		std::sort(keyWordsList->begin(), keyWordsList->end(), KwStrComparator());
		for (int kwId = 1; kwId < keyWordsList->size(); kwId++) {
			StringPtr kw1 = keyWordsList->getRef(kwId - 1)->wordString;
			StringPtr kw2 = keyWordsList->getRef(kwId)->wordString;
			if (*kw1 == *kw2) {
				errorMessage = StringModel::addErrorMassage(errorMessage, recursionInfoLevel,
				                                            StringModel::buildErrorMessageKeyword(
					                                            StringModel::STRING_RESOURCES->DUPLICATED_KEYWORD,
					                                            kw1));
				return SYNTAX_ERROR;
			}
		}
		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxUserDefinedArgument(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                       const TokenPtr &token, const StringPtr &tokenInfoMessage) {
		if (token->tokenTypeId != Argument::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		ArgumentPtr arg = getArgument(token->tokenId);

		if (getParametersNumber(tokenIndex) >= 0) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->ARGUMENT_WAS_EXPECTED,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (arg->getArgumentBodyType() == Argument::BODY_EXTENDED) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS,
			                                                       tokenInfoMessage);
			return NO_SYNTAX_ERRORS;
		}

		if (arg->getArgumentType() != Argument::DEPENDENT_ARGUMENT)
			return NO_SYNTAX_ERRORS;

		if (arg->argumentExpression != THIS(Expression) && !arg->argumentExpression->recursionCallPending) {
			bool syntaxRec = arg->argumentExpression->checkSyntax(
				recursionInfoLevel + StringInvariant::RIGHT_ARROW_SPACE +
				StringUtils::surroundSquareBrackets(token->tokenStr) + StringInvariant::SPACE_EQUAL_SPACE +
				StringUtils::surroundSquareBracketsAddSpace(arg->argumentExpression->expressionString), false);
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT,
			                                                       tokenInfoMessage,
			                                                       arg->argumentExpression->errorMessage);
			return syntaxRec;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxUserDefinedRecursiveArgument(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                                const TokenPtr &token,
	                                                                const StringPtr &tokenInfoMessage) {
		if (token->tokenTypeId != RecursiveArgument::TYPE_ID_RECURSIVE)
			return NO_SYNTAX_ERRORS;

		ArgumentPtr arg = getArgument(token->tokenId);

		if (getParametersNumber(tokenIndex) != 1) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if ((arg->argumentExpression != THIS(Expression)) && !arg->argumentExpression->recursionCallPending) {
			bool syntaxRec = arg->argumentExpression->checkSyntax(
				recursionInfoLevel + StringInvariant::RIGHT_ARROW_SPACE +
				StringUtils::surroundSquareBrackets(token->tokenStr) + StringInvariant::SPACE_EQUAL_SPACE +
				StringUtils::surroundSquareBracketsAddSpace(arg->argumentExpression->expressionString), false);
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT,
			                                                       tokenInfoMessage,
			                                                       arg->argumentExpression->errorMessage);
			return syntaxRec;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxInvalidToken(const StringPtr &recursionInfoLevel, const TokenPtr &token,
	                                                const StringPtr &tokenInfoMessage,
	                                                const StackPtr<SyntaxStackElementPtr> &syntaxStack) {
		if (token->tokenTypeId != Token::NOT_MATCHED)
			return NO_SYNTAX_ERRORS;

		bool calculusToken = false;
		for (const SyntaxStackElementPtr& e : *syntaxStack)
			if (*e->tokenStr == *token->tokenStr)
				calculusToken = true;

		if (!calculusToken) {
			if (!impliedMultiplicationMode && StringUtils::regexMatch(token->tokenStr,
			                                                          ParserSymbol::NUMBER_NAME_IMPL_MULTI_REG_EXP))
				errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
				                                                       StringModel::STRING_RESOURCES->
				                                                       INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR,
				                                                       tokenInfoMessage);
			else
				errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
				                                                       StringModel::STRING_RESOURCES->INVALID_TOKEN,
				                                                       tokenInfoMessage);

			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxUserDefinedFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                       const TokenPtr &token, const StringPtr &tokenInfoMessage) {
		if (token->tokenTypeId != Function::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		FunctionPtr fun = getFunction(token->tokenId);
		fun->checkRecursiveMode();
		int npar = getParametersNumber(tokenIndex);
		int fpar = fun->getParametersNumber();

		if (npar <= 0) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (!fun->isVariadic && fpar != npar) {
			errorMessage = StringModel::addErrorMassage(errorMessage, recursionInfoLevel,
			                                            StringModel::STRING_RESOURCES->
			                                            INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION, fpar,
			                                            npar, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (fun->functionExpression != THIS(Expression) && !fun->functionExpression->recursionCallPending) {
			bool syntaxRec;

			if (fun->getFunctionBodyType() == Function::BODY_RUNTIME)
				syntaxRec = fun->functionExpression->checkSyntax(
					recursionInfoLevel + StringInvariant::RIGHT_ARROW_SPACE +
					StringUtils::surroundSquareBrackets(token->tokenStr) + StringInvariant::SPACE_EQUAL_SPACE +
					StringUtils::surroundSquareBracketsAddSpace(fun->functionExpression->expressionString), false);
			else
				syntaxRec = fun->functionExpression->checkSyntax(
					recursionInfoLevel + StringInvariant::RIGHT_ARROW_SPACE +
					StringUtils::surroundSquareBrackets(token->tokenStr) + StringInvariant::SPACE_EQUAL_SPACE +
					StringUtils::surroundSquareBracketsAddSpace(fun->functionExpression->expressionString), true);

			if (fun->isVariadic)
				errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
				                                                       StringModel::STRING_RESOURCES->
				                                                       STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION,
				                                                       tokenInfoMessage,
				                                                       fun->functionExpression->errorMessage);
			else
				errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
				                                                       StringModel::STRING_RESOURCES->
				                                                       STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION,
				                                                       tokenInfoMessage,
				                                                       fun->functionExpression->errorMessage);

			return syntaxRec;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxBuiltinConstant(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                   const TokenPtr &token, const StringPtr &tokenInfoMessage) {
		if (token->tokenTypeId != ConstantValue::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) >= 0) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->CONSTANT_WAS_EXPECTED,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxUserDefinedConstant(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                       const TokenPtr &token, const StringPtr &tokenStr) {
		if (token->tokenTypeId != Constant::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) >= 0) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       USER_CONSTANT_WAS_EXPECTED, tokenStr);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxUnaryFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                 const TokenPtr &token, const StringPtr &tokenInfoMessage) {
		if (token->tokenTypeId != Function1Arg::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) != 1) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       UNARY_FUNCTION_EXPECTS_1_PARAMETER,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxBinaryFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                  const TokenPtr &token, const StringPtr &tokenInfoMessage) {
		if (token->tokenTypeId != Function2Arg::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) != 2) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       BINARY_FUNCTION_EXPECTS_2_PARAMETERS,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxTernaryFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                   const TokenPtr &token, const StringPtr &tokenInfoMessage) {
		if (token->tokenTypeId != Function3Arg::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) != 3) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       TERNARY_FUNCTION_EXPECTS_3_PARAMETERS,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkInternalSyntaxCalculusOperatorDerivative(const StringPtr &recursionInfoLevel,
	                                                               const TokenPtr &token,
	                                                               const StringPtr &tokenInfoMessage,
	                                                               const StackPtr<SyntaxStackElementPtr> &syntaxStack,
	                                                               int paramsNumber,
	                                                               const ListPtr<FunctionParameterPtr> &funParams) {
		if (token->tokenId != CalculusOperator::DER_ID && token->tokenId != CalculusOperator::DER_LEFT_ID && token->
		    tokenId != CalculusOperator::DER_RIGHT_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber < 2 || paramsNumber > 5) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (paramsNumber == 2 || paramsNumber == 4) {
			const FunctionParameterPtr& argParam = funParams->getRef(1);

			if (!checkIfKnownArgument(argParam)) {
				errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
				                                                       StringModel::STRING_RESOURCES->
				                                                       ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION,
				                                                       tokenInfoMessage);
				return SYNTAX_ERROR;
			}
		} else {
			const FunctionParameterPtr& argParam = funParams->getRef(1);
			SyntaxStackElementPtr stackElement = new_SyntaxStackElement(argParam->paramStr, token->tokenLevel + 1);
			syntaxStack->push(stackElement);

			int errors = checkCalculusParameter(stackElement->tokenStr);
			if (errors > 0) {
				errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
				                                                       StringModel::STRING_RESOURCES->
				                                                       DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION,
				                                                       tokenInfoMessage);
				return SYNTAX_ERROR;
			}
			if (!checkIfKnownArgument(argParam) && !checkIfUnknownToken(argParam)) {
				errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
				                                                       StringModel::STRING_RESOURCES->
				                                                       ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION,
				                                                       tokenInfoMessage);
				return SYNTAX_ERROR;
			}
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkInternalSyntaxCalculusOperatorDerivativeNth(const StringPtr &recursionInfoLevel,
	                                                                  const TokenPtr &token,
	                                                                  const StringPtr &tokenInfoMessage,
	                                                                  const StackPtr<SyntaxStackElementPtr> &
	                                                                  syntaxStack, int paramsNumber,
	                                                                  const ListPtr<FunctionParameterPtr> &funParams) {
		if (token->tokenId != CalculusOperator::DERN_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber != 3 && paramsNumber != 5) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		const FunctionParameterPtr& argParam = funParams->getRef(2);
		if (!checkIfKnownArgument(argParam)) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkInternalSyntaxCalculusOperatorIntegralSolve(const StringPtr &recursionInfoLevel,
	                                                                  const TokenPtr &token,
	                                                                  const StringPtr &tokenInfoMessage,
	                                                                  const StackPtr<SyntaxStackElementPtr> &
	                                                                  syntaxStack, int paramsNumber,
	                                                                  const ListPtr<FunctionParameterPtr> &funParams) {
		if (token->tokenId != CalculusOperator::INT_ID && token->tokenId != CalculusOperator::SOLVE_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber != 4) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		const FunctionParameterPtr& argParam = funParams->getRef(1);
		SyntaxStackElementPtr stackElement = new_SyntaxStackElement(argParam->paramStr, token->tokenLevel + 1);
		syntaxStack->push(stackElement);

		int errors = checkCalculusParameter(stackElement->tokenStr);
		if (errors > 0) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (!checkIfKnownArgument(argParam) && !checkIfUnknownToken(argParam)) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkInternalSyntaxCalculusOperatorIterated(const StringPtr &recursionInfoLevel,
	                                                             const TokenPtr &token,
	                                                             const StringPtr &tokenInfoMessage,
	                                                             const StackPtr<SyntaxStackElementPtr> &syntaxStack,
	                                                             int paramsNumber,
	                                                             const ListPtr<FunctionParameterPtr> &funParams) {
		if (token->tokenId != CalculusOperator::PROD_ID
		    && token->tokenId != CalculusOperator::SUM_ID
		    && token->tokenId != CalculusOperator::MIN_ID
		    && token->tokenId != CalculusOperator::MAX_ID
		    && token->tokenId != CalculusOperator::AVG_ID
		    && token->tokenId != CalculusOperator::VAR_ID
		    && token->tokenId != CalculusOperator::STD_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber != 4 && paramsNumber != 5) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		const FunctionParameterPtr& indexParam = funParams->getRef(0);
		SyntaxStackElementPtr stackElement = new_SyntaxStackElement(indexParam->paramStr, token->tokenLevel + 1);
		syntaxStack->push(stackElement);

		int errors = checkCalculusParameter(stackElement->tokenStr);
		if (errors > 0) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}
		if (!checkIfKnownArgument(indexParam) && !checkIfUnknownToken(indexParam)) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkInternalSyntaxCalculusOperatorForwardBackwardDiff(
		const StringPtr &recursionInfoLevel, const TokenPtr &token, const StringPtr &tokenInfoMessage,
		const StackPtr<SyntaxStackElementPtr> &syntaxStack, int paramsNumber,
		const ListPtr<FunctionParameterPtr> &funParams) {
		if (token->tokenId != CalculusOperator::FORW_DIFF_ID && token->tokenId != CalculusOperator::BACKW_DIFF_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber != 2 && paramsNumber != 3) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		const FunctionParameterPtr& xParam = funParams->getRef(1);
		if (!checkIfKnownArgument(xParam)) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxVariadicFunction(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                    const TokenPtr &token, const StringPtr &tokenInfoMessage) {
		if (token->tokenTypeId != FunctionVariadic::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		int paramsNumber = getParametersNumber(tokenIndex);

		if (paramsNumber < 1) {
			errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
			                                                       StringModel::STRING_RESOURCES->
			                                                       AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED,
			                                                       tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (token->tokenId == FunctionVariadic::IFF_ID) {
			if (paramsNumber % 2 != 0 || paramsNumber < 2) {
				errorMessage = StringModel::addErrorMassageTokenString(errorMessage, recursionInfoLevel,
				                                                       StringModel::STRING_RESOURCES->
				                                                       EXPECTED_EVEN_NUMBER_OF_ARGUMENTS,
				                                                       tokenInfoMessage);
				return SYNTAX_ERROR;
			}
		}

		return NO_SYNTAX_ERRORS;
	}

	API_VISIBLE bool Expression::checkPartialSyntaxCalculusOperator(const StringPtr &recursionInfoLevel, int tokenIndex,
	                                                    const TokenPtr &token, const StringPtr &tokenInfoMessage,
	                                                    const StackPtr<SyntaxStackElementPtr> &syntaxStack) {
		if (token->tokenTypeId != CalculusOperator::TYPE_ID)
			return NO_SYNTAX_ERRORS;

		int paramsNumber = getParametersNumber(tokenIndex);
		ListPtr<FunctionParameterPtr> funParams = nullptr;

		if (paramsNumber > 0)
			funParams = ExpressionUtils::getFunctionParameters(tokenIndex, initialTokens);

		bool syntax = NO_SYNTAX_ERRORS;

		syntax = checkInternalSyntaxCalculusOperatorDerivative(recursionInfoLevel, token, tokenInfoMessage, syntaxStack,
		                                                       paramsNumber, funParams) && syntax;
		syntax = checkInternalSyntaxCalculusOperatorDerivativeNth(recursionInfoLevel, token, tokenInfoMessage,
		                                                          syntaxStack, paramsNumber, funParams) && syntax;
		syntax = checkInternalSyntaxCalculusOperatorIntegralSolve(recursionInfoLevel, token, tokenInfoMessage,
		                                                          syntaxStack, paramsNumber, funParams) && syntax;
		syntax = checkInternalSyntaxCalculusOperatorIterated(recursionInfoLevel, token, tokenInfoMessage, syntaxStack,
		                                                     paramsNumber, funParams) && syntax;
		syntax = checkInternalSyntaxCalculusOperatorForwardBackwardDiff(recursionInfoLevel, token, tokenInfoMessage,
		                                                                syntaxStack, paramsNumber, funParams) && syntax;

		return syntax;
	}

	API_VISIBLE void Expression::performSyntaxStackPopIfEndOfSectionLevel(const TokenPtr &token,
	                                                          const StackPtr<SyntaxStackElementPtr> &syntaxStack) {
		if (token->tokenTypeId == ParserSymbol::TYPE_ID && token->tokenId == ParserSymbol::RIGHT_PARENTHESES_ID)
			if (syntaxStack->size() > 0)
				if (token->tokenLevel == syntaxStack->top()->tokenLevel)
					syntaxStack->pop();
	}

	/**
	 * Checking the syntax (recursively).
	 *
	 * @param      recursionInfoLevel               string representing the recursion level.
	 * @return     true if syntax was correct,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool Expression::checkSyntax(const StringPtr &recursionInfoLevel, bool functionWithBodyExt) {
		if (syntaxIsAlreadyCheckedNorErrors()) {
			registerFinalSyntaxAlreadyCheckedNorErrors(recursionInfoLevel);
			return NO_SYNTAX_ERRORS;
		}
		optionsChangesetNumber = mXparser::optionsChangesetNumber;
		if (functionWithBodyExt) {
			registerFinalSyntaxFunctionWithBodyExtNoErrors(recursionInfoLevel);
			return NO_SYNTAX_ERRORS;
		}
		registerPartialSyntaxStartingSyntaxCheck(recursionInfoLevel);
		bool syntax = NO_SYNTAX_ERRORS;
		cleanExpressionString();
		if (expressionStringCleaned->empty()) {
			registerFinalSyntaxExpressionStringIsEmpty(recursionInfoLevel);
			return SYNTAX_ERROR;
		}
		CharStreamPtr charStream = new_CharStream(expressionStringCleaned);
		SyntaxCheckerTokenManagerPtr tokenMmanager = new_SyntaxCheckerTokenManager(charStream);
		SyntaxCheckerPtr syntaxChecker = new_SyntaxChecker(tokenMmanager);
		syntax = syntaxChecker->checkSyntax();

		if (syntax) {
			tokenizeExpressionString();

			syntax = checkPartialSyntaxImpliedMultiplication(recursionInfoLevel) && syntax;
			syntax = checkPartialSyntaxDuplicatedKeywords(recursionInfoLevel) && syntax;

			int tokensNumber = initialTokens->size();
			StackPtr<SyntaxStackElementPtr> syntaxStack = new_Stack<SyntaxStackElementPtr>();

			for (int tokenIndex = 0; tokenIndex < tokensNumber; tokenIndex++) {
				const TokenPtr& token = initialTokens->getRef(tokenIndex);
				StringPtr tokenInfoMessage = StringModel::buildTokenString(token->tokenStr, tokenIndex);

				syntax = checkPartialSyntaxUserDefinedArgument(recursionInfoLevel, tokenIndex, token, tokenInfoMessage)
				         && syntax;
				syntax = checkPartialSyntaxUserDefinedRecursiveArgument(recursionInfoLevel, tokenIndex, token,
				                                                        tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxInvalidToken(recursionInfoLevel, token, tokenInfoMessage, syntaxStack) &&
				         syntax;
				syntax = checkPartialSyntaxUserDefinedFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage)
				         && syntax;
				syntax = checkPartialSyntaxBuiltinConstant(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) &&
				         syntax;
				syntax = checkPartialSyntaxUserDefinedConstant(recursionInfoLevel, tokenIndex, token, tokenInfoMessage)
				         && syntax;
				syntax = checkPartialSyntaxUnaryFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) &&
				         syntax;
				syntax = checkPartialSyntaxBinaryFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) &&
				         syntax;
				syntax = checkPartialSyntaxTernaryFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) &&
				         syntax;
				syntax = checkPartialSyntaxCalculusOperator(recursionInfoLevel, tokenIndex, token, tokenInfoMessage,
				                                            syntaxStack) && syntax;
				syntax = checkPartialSyntaxVariadicFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) &&
				         syntax;

				performSyntaxStackPopIfEndOfSectionLevel(token, syntaxStack);
			}
		} else {
			registerSyntaxLexicalError(recursionInfoLevel, syntaxChecker->errorMessages, tokenMmanager->errorMessages);
		}
		registerFinalSyntax(recursionInfoLevel, syntax);
		return syntax;
	}

	/**
	 * Calculates the expression value and registers all the calculation steps
	 *
	 * @return     The expression value if syntax was ok,
	 *             otherwise returns Double::NaN.
	 */
	API_VISIBLE double Expression::calculate() {
		return calculate(CalcStepsRegister::Null);
	}

	API_VISIBLE void Expression::registerErrorWhileCalculate(const StringPtr &errorMessageToAdd) {
		errorMessage = StringModel::addErrorMassageNoLevel(errorMessage, errorMessageToAdd, description,
		                                                   expressionString);
		errorMessageCalculate = StringModel::addErrorMassageNoLevel(errorMessageCalculate, errorMessageToAdd,
		                                                            description, expressionString);
	}

	/**
	 * Calculates the expression value
	 *
	 * @param calcStepsRegister A collection to store list of calculation steps,
	 *                          steps registered as strings.
	 *
	 * @return     The expression value if syntax was ok,
	 *             otherwise returns Double::NaN.
	 */
	API_VISIBLE double Expression::calculate(const CalcStepsRegisterPtr &calcStepsRegister) {
		License::checkLicense();
		try {
			return calculateInternal(calcStepsRegister);
		} catch (std::exception &e) {
			registerErrorWhileCalculate(
				StringModel::STRING_RESOURCES->ERROR_WHILE_EXECUTING_THE_CALCULATE
				+ StringInvariant::SPACE + StringModel::STRING_RESOURCES->EXCEPTION
				+ StringInvariant::COLON_SPACE
				+ S(typeid(e).name())
				+ StringInvariant::COLON_SPACE
				+ StringUtils::trimNotNull(S(e.what()))
			);
			return Double::NaN;
		} catch (...) {
			registerErrorWhileCalculate(
				StringModel::STRING_RESOURCES->ERROR_WHILE_EXECUTING_THE_CALCULATE
				+ StringInvariant::SPACE + StringModel::STRING_RESOURCES->EXCEPTION
			);
			return Double::NaN;
		}
	}

	API_VISIBLE StringPtr Expression::makeStepDescription() {
		StringPtr stepDescription;
		if (!StringUtils::trim(description)->empty())
			stepDescription = StringUtils::trim(description) + StringInvariant::SPACE_EQUAL_SPACE + StringUtils::trim(
				                  expressionString);
		else stepDescription = StringUtils::trim(expressionString);
		return stepDescription;
	}

	API_VISIBLE void Expression::registerCalculationStepRecord(const CalcStepsRegisterPtr &calcStepsRegister,
	                                               int stepsRegisteredCounter, const StringPtr &stepDescription) {
		CalcStepRecordPtr stepRecord = new_CalcStepRecord();
		stepRecord->numberGroup = calcStepsRegister->stepNumberGroup;
		stepRecord->numberGroupWithin = stepsRegisteredCounter;
		stepRecord->description = stepDescription;
		stepRecord->content = ExpressionUtils::tokensListToString(tokensList);
		stepRecord->type = calcStepsRegister->stepType;

		if (stepsRegisteredCounter == 1)
			stepRecord->firstInGroup = true;

		calcStepsRegister->calcStepRecords->add(stepRecord);
	}

	API_VISIBLE void Expression::registerCalculationStepRecord(const CalcStepsRegisterPtr &calcStepsRegister,
	                                               int stepsRegisteredCounter, const StringPtr &stepDescription,
	                                               double result) const {
		CalcStepRecordPtr stepRecord = new_CalcStepRecord();
		stepRecord->numberGroup = calcStepsRegister->stepNumberGroup;
		stepRecord->numberGroupWithin = stepsRegisteredCounter;
		stepRecord->description = stepDescription;
		stepRecord->content = ExpressionUtils::tokensListToString(tokensList);
		stepRecord->type = calcStepsRegister->stepType;
		stepRecord->lastInGroup = true;
		calcStepsRegister->calcStepRecords->add(stepRecord);
		calcStepsRegister->stepNumberGroup--;
		if (calcStepsRegister->stepNumberGroup == 0) {
			calcStepsRegister->result = result;
			calcStepsRegister->computingTime = computingTime;
			calcStepsRegister->errorMessage = errorMessage;
		}
	}

	API_VISIBLE int Expression::calculateFirstAndFullyCompile(const CalcStepsRegisterPtr &calcStepsRegister,
	                                              const StringPtr &stepDescription) {
		/*
		 * position for particular tokens types
		 */
		int calculusPos, ifPos, iffPos, variadicFunPos;
		int depArgPos, recArgPos, f3ArgPos, f2ArgPos;
		int f1ArgPos, userFunPos, plusPos, minusPos;
		int multiplyPos, dividePos, divideQuotientPos, powerPos, tetrationPos;
		int powerNum, factPos, modPos, percPos;
		int negPos, rootOperGroupPos, andGroupPos, orGroupPos;
		int implGroupPos, bolPos, eqPos, neqPos;
		int ltPos, gtPos, leqPos, geqPos;
		int commaPos, lParPos, rParPos, bitwisePos;
		int bitwiseComplPos;
		int tokensNumber, maxPartLevel;
		bool maxPartLevelNotInterrupted;
		bool depArgFound;
		int lPos, rPos;
		int tokenIndex, pos, p;
		int firstPos;
		//TokenPtr token, tokenL, tokenR;
		//ArgumentPtr argument;
		ListPtr<int> commas = nullptr;
		int emptyLoopCounter = 0;
		bool storeStepsInRegister = true;
		int stepsRegisteredCounter = 0;
		CalcStepRecord::StepType stepTypePrev = CalcStepRecord::StepType::Unknown;

		/* While exist token which needs to bee evaluated */
		do {
			if (storeStepsInRegister && calcStepsRegister != nullptr) {
				stepsRegisteredCounter++;
				registerCalculationStepRecord(calcStepsRegister, stepsRegisteredCounter, stepDescription);
			}

			storeStepsInRegister = true;

			if (mXparser::cancelCurrentCalculationFlag) {
				registerErrorWhileCalculate(StringModel::STRING_RESOURCES->CANCEL_REQUEST_FINISHING);
				return -1;
			}

			tokensNumber = tokensList->size();
			maxPartLevel = -1;
			maxPartLevelNotInterrupted = false;
			lPos = -1;
			rPos = -1;
			/*
			 * initializing tokens types positions
			 */
			calculusPos = -1;
			ifPos = -1;
			iffPos = -1;
			variadicFunPos = -1;
			recArgPos = -1;
			depArgPos = -1;
			f3ArgPos = -1;
			f2ArgPos = -1;
			f1ArgPos = -1;
			userFunPos = -1;
			plusPos = -1;
			minusPos = -1;
			multiplyPos = -1;
			dividePos = -1;
			divideQuotientPos = -1;
			powerPos = -1;
			tetrationPos = -1;
			factPos = -1;
			modPos = -1;
			percPos = -1;
			powerNum = 0;
			negPos = -1;
			rootOperGroupPos = -1;
			andGroupPos = -1;
			orGroupPos = -1;
			implGroupPos = -1;
			bolPos = -1;
			eqPos = -1;
			neqPos = -1;
			ltPos = -1;
			gtPos = -1;
			leqPos = -1;
			geqPos = -1;
			commaPos = -1;
			lParPos = -1;
			rParPos = -1;
			bitwisePos = -1;
			bitwiseComplPos = -1;
			/* calculus or if or iff operations ... */
			p = -1;
			if (compilationDetails->containsCalculus || compilationDetails->containsIf)
				do {
					p++;
					const TokenPtr& token = tokensList->getRef(p);
					if (token->tokenTypeId == CalculusOperator::TYPE_ID) calculusPos = p;
					else if (token->tokenTypeId == Function3Arg::TYPE_ID && token->tokenId == Function3Arg::IF_CONDITION_ID) ifPos = p;
					else if (token->tokenTypeId == FunctionVariadic::TYPE_ID && token->tokenId == FunctionVariadic::IFF_ID) iffPos = p;
				} while (p < tokensNumber - 1 && calculusPos < 0 && ifPos < 0 && iffPos < 0);
			if (calculusPos < 0 && ifPos < 0 && iffPos < 0) {
				/* Find start index of the tokens with the highest level */
				for (tokenIndex = 0; tokenIndex < tokensNumber; tokenIndex++) {
					const TokenPtr& token = tokensList->getRef(tokenIndex);

					if (token->tokenLevel > maxPartLevel) {
						maxPartLevel = tokensList->getRef(tokenIndex)->tokenLevel;
						lPos = tokenIndex;
						maxPartLevelNotInterrupted = true;
					}

					if (token->tokenLevel < maxPartLevel)
						maxPartLevelNotInterrupted = false;

					if (maxPartLevelNotInterrupted && token->tokenLevel == maxPartLevel)
						rPos = tokenIndex;

					if (token->tokenTypeId == Argument::TYPE_ID) {
						const ArgumentPtr& argument = argumentsList->getRef(tokensList->getRef(tokenIndex)->tokenId);
						/*
						 * Only free arguments can be directly
						 * replaced with numbers. This is in order to
						 * aAPI_VISIBLE void Expression::tokensList change in possible
						 * recursive calls from dependent arguments
						 * as dependent arguments will not work
						 * on argument clones. Here we are also checking
						 * if there is dependent argument in expression.
						 */
						if (argument->argumentType == Argument::FREE_ARGUMENT) FREE_ARGUMENT(tokenIndex);
						else depArgPos = tokenIndex;
					} else if (token->tokenTypeId == ConstantValue::TYPE_ID) CONSTANT(tokenIndex);
					else if (token->tokenTypeId == Unit::TYPE_ID) UNIT(tokenIndex);
					else if (token->tokenTypeId == Constant::TYPE_ID) USER_CONSTANT(tokenIndex);
					else if (token->tokenTypeId == RandomVariable::TYPE_ID) RANDOM_VARIABLE(tokenIndex);
				}
				if (lPos < 0) {
					registerErrorWhileCalculate(StringModel::STRING_RESOURCES->INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING);
					return -1;
				}
				/*
				 * If dependent argument was found then dependent arguments
				 * in the tokensList need to replaced one after another in
				 * separate loops as tokensList might change in some other
				 * call done in possible recursive call.
				 *
				 * Argument x = new_Argument("x = 2*y");
				 * Argument y = new_Argument("y = 2*x");
				 * x->addDefinitions(y);
				 * y->addDefinitions(x);
				 */
				if (depArgPos >= 0) {
					do {
						depArgFound = false;
						int currentTokensNumber = tokensList->size();
						for (tokenIndex = 0; tokenIndex < currentTokensNumber; tokenIndex++) {
							const TokenPtr& token = tokensList->getRef(tokenIndex);
							if (token->tokenTypeId != Argument::TYPE_ID)
								continue;
							const ArgumentPtr& argument = argumentsList->getRef(tokensList->getRef(tokenIndex)->tokenId);
							if (argument->argumentType != Argument::DEPENDENT_ARGUMENT)
								continue;
							if (calcStepsRegister != nullptr) stepTypePrev = calcStepsRegister->stepType;
							DEPENDENT_ARGUMENT(tokenIndex, calcStepsRegister);
							if (calcStepsRegister != nullptr) {
								calcStepsRegister->stepType = stepTypePrev;
								stepsRegisteredCounter++;
								registerCalculationStepRecord(calcStepsRegister, stepsRegisteredCounter, stepDescription);
							}
							depArgFound = true;
							break;
						}
					} while (depArgFound);
					storeStepsInRegister = false;
				} else {
					if (verboseMode) {
						printSystemInfo(
							StringModel::STRING_RESOURCES->PARSING + StringInvariant::SPACE +
							StringUtils::surroundBracketsAddSpace(StringUtils::toString(lPos) + StringInvariant::COMMA_SPACE + StringUtils::toString(rPos)), WITH_EXP_STR);
						showParsing(lPos, rPos);
					}
					/* if no calculus operations were found
					 * check for other tokens
					 */
					bool leftIsNumber;
					bool rigthIsNumber;
					for (pos = lPos; pos <= rPos; pos++) {
						leftIsNumber = false;
						rigthIsNumber = false;
						const TokenPtr& token = tokensList->getRef(pos);
						if (pos - 1 >= 0) {
							const TokenPtr& tokenL = tokensList->getRef(pos - 1);
							if (tokenL->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) leftIsNumber = true;
						}
						if (pos + 1 < tokensNumber) {
							const TokenPtr& tokenR = tokensList->getRef(pos + 1);
							if (tokenR->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) rigthIsNumber = true;
						}
						if (token->tokenTypeId == RecursiveArgument::TYPE_ID_RECURSIVE && recArgPos < 0) recArgPos = pos;
						else if (token->tokenTypeId == FunctionVariadic::TYPE_ID && variadicFunPos < 0) variadicFunPos = pos;
						else if (token->tokenTypeId == Function3Arg::TYPE_ID && f3ArgPos < 0) f3ArgPos = pos;
						else if (token->tokenTypeId == Function2Arg::TYPE_ID && f2ArgPos < 0) f2ArgPos = pos;
						else if (token->tokenTypeId == Function1Arg::TYPE_ID && f1ArgPos < 0) f1ArgPos = pos;
						else if (token->tokenTypeId == Function::TYPE_ID && userFunPos < 0) userFunPos = pos;
						else if (token->tokenTypeId == Operator::TYPE_ID) {
							if (token->tokenId == Operator::POWER_ID && leftIsNumber && rigthIsNumber) {
								powerPos = pos;
								powerNum++;
							} else if (token->tokenId == Operator::TETRATION_ID && leftIsNumber && rigthIsNumber) tetrationPos = pos;
							else if (token->tokenId == Operator::FACT_ID && factPos < 0 && leftIsNumber) factPos = pos;
							else if (token->tokenId == Operator::PERC_ID && percPos < 0 && leftIsNumber) percPos = pos;
							else if ((token->tokenId == Operator::SQUARE_ROOT_ID || token->tokenId == Operator::CUBE_ROOT_ID || token->tokenId == Operator::FOURTH_ROOT_ID) && rootOperGroupPos < 0 && rigthIsNumber) rootOperGroupPos = pos;
							else if (token->tokenId == Operator::MOD_ID && modPos < 0 && leftIsNumber && rigthIsNumber) modPos = pos;
							else if (token->tokenId == Operator::PLUS_ID && plusPos < 0 && rigthIsNumber) plusPos = pos;
							else if (token->tokenId == Operator::MINUS_ID && minusPos < 0 && rigthIsNumber) minusPos = pos;
							else if (token->tokenId == Operator::MULTIPLY_ID && multiplyPos < 0 && leftIsNumber && rigthIsNumber) multiplyPos = pos;
							else if (token->tokenId == Operator::DIVIDE_ID && dividePos < 0 && leftIsNumber && rigthIsNumber) dividePos = pos;
							else if (token->tokenId == Operator::DIVIDE_QUOTIENT_ID && divideQuotientPos < 0 && leftIsNumber && rigthIsNumber) divideQuotientPos = pos;
						} else if (token->tokenTypeId == BooleanOperator::TYPE_ID) {
							if (token->tokenId == BooleanOperator::NEG_ID && negPos < 0 && rigthIsNumber) negPos = pos;
							else if (leftIsNumber && rigthIsNumber) {
								if ((token->tokenId == BooleanOperator::AND_ID || token->tokenId == BooleanOperator::NAND_ID) && andGroupPos < 0) andGroupPos = pos;
								else if ((token->tokenId == BooleanOperator::OR_ID || token->tokenId == BooleanOperator::NOR_ID || token->tokenId == BooleanOperator::XOR_ID) && orGroupPos < 0) orGroupPos = pos;
								else if ((token->tokenId == BooleanOperator::IMP_ID || token->tokenId == BooleanOperator::CIMP_ID || token->tokenId == BooleanOperator::NIMP_ID || token->tokenId == BooleanOperator::CNIMP_ID || token->tokenId == BooleanOperator::EQV_ID) && implGroupPos < 0) implGroupPos = pos;
								else if (bolPos < 0) bolPos = pos;
							}
						} else if (token->tokenTypeId == BinaryRelation::TYPE_ID) {
							if (token->tokenId == BinaryRelation::EQ_ID && eqPos < 0 && leftIsNumber && rigthIsNumber) eqPos = pos;
							else if (token->tokenId == BinaryRelation::NEQ_ID && neqPos < 0 && leftIsNumber && rigthIsNumber) neqPos = pos;
							else if (token->tokenId == BinaryRelation::LT_ID && ltPos < 0 && leftIsNumber && rigthIsNumber) ltPos = pos;
							else if (token->tokenId == BinaryRelation::GT_ID && gtPos < 0 && leftIsNumber && rigthIsNumber) gtPos = pos;
							else if (token->tokenId == BinaryRelation::LEQ_ID && leqPos < 0 && leftIsNumber && rigthIsNumber) leqPos = pos;
							else if (token->tokenId == BinaryRelation::GEQ_ID && geqPos < 0 && leftIsNumber && rigthIsNumber) geqPos = pos;
						} else if (token->tokenTypeId == BitwiseOperator::TYPE_ID) {
							if (token->tokenId == BitwiseOperator::COMPL_ID && bitwiseComplPos < 0 && rigthIsNumber) bitwiseComplPos = pos;
							else if (bitwisePos < 0 && leftIsNumber && rigthIsNumber) bitwisePos = pos;
						} else if (token->tokenTypeId == ParserSymbol::TYPE_ID) {
							if (token->tokenId == ParserSymbol::COMMA_ID) {
								if (commaPos < 0) commas = new_List<int>();
								commas->add(pos);
								commaPos = pos;
							} else if (token->tokenId == ParserSymbol::LEFT_PARENTHESES_ID && lParPos < 0) lParPos = pos;
							else if (token->tokenId == ParserSymbol::RIGHT_PARENTHESES_ID && rParPos < 0) rParPos = pos;
						}
					}
					/*
					 * powering should be done using backwards sequence
					 */
					if (powerNum > 1) {
						powerPos = -1;
						p = rPos + 1;
						do {
							p--;
							const TokenPtr & token = tokensList->getRef(p);
							if (token->tokenTypeId == Operator::TYPE_ID && token->tokenId == Operator::POWER_ID)
								powerPos = p;
						} while (p > lPos && powerPos == -1);
					}
				}
			}
			if (calculusPos >= 0) calculusCalc(calculusPos);
			else if (ifPos >= 0) IF_CONDITION(ifPos);
			else if (iffPos >= 0) IFF(iffPos);
			else if (recArgPos >= 0) RECURSIVE_ARGUMENT(recArgPos);
			else if (variadicFunPos >= 0) variadicFunCalc(variadicFunPos);
			else if (f3ArgPos >= 0) f3ArgCalc(f3ArgPos);
			else if (f2ArgPos >= 0) f2ArgCalc(f2ArgPos);
			else if (f1ArgPos >= 0) f1ArgCalc(f1ArgPos);
			else if (userFunPos >= 0) {
				if (calcStepsRegister != nullptr) stepTypePrev = calcStepsRegister->stepType;
				USER_FUNCTION(userFunPos, calcStepsRegister);
				if (calcStepsRegister != nullptr) calcStepsRegister->stepType = stepTypePrev;
			} else if (tetrationPos >= 0) TETRATION(tetrationPos);
			else if (powerPos >= 0) POWER(powerPos);
			else if (factPos >= 0) FACT(factPos);
			else if (percPos >= 0) PERC(percPos);
			else if (modPos >= 0) MODULO(modPos);
			else if (negPos >= 0) NEG(negPos);
			else if (rootOperGroupPos >= 0) rootOperCalc(rootOperGroupPos);
			else if (bitwiseComplPos >= 0) BITWISE_COMPL(bitwiseComplPos);
			else if (multiplyPos >= 0 || dividePos >= 0 || divideQuotientPos >= 0) {
				firstPos = ExpressionUtils::findNonNegativeMinimum(multiplyPos, dividePos, divideQuotientPos);
				if (multiplyPos == firstPos) MULTIPLY(multiplyPos);
				else if (dividePos == firstPos) DIVIDE(dividePos);
				else if (divideQuotientPos == firstPos) DIVIDE_QUOTIENT(divideQuotientPos);
			} else if (minusPos >= 0 || plusPos >= 0) {
				firstPos = ExpressionUtils::findNonNegativeMinimum(minusPos, plusPos);
				if (minusPos == firstPos) MINUS(minusPos);
				else if (plusPos == firstPos) PLUS(plusPos);
			} else if (neqPos >= 0) NEQ(neqPos);
			else if (eqPos >= 0) EQ(eqPos);
			else if (ltPos >= 0) LT(ltPos);
			else if (gtPos >= 0) GT(gtPos);
			else if (leqPos >= 0) LEQ(leqPos);
			else if (geqPos >= 0) GEQ(geqPos);
			else if (commaPos >= 0) {
				for (int i = commas->size() - 1; i >= 0; i--)
					COMMA((*commas)[i]);
				storeStepsInRegister = false;
			} else if (andGroupPos >= 0) bolCalc(andGroupPos);
			else if (orGroupPos >= 0) bolCalc(orGroupPos);
			else if (implGroupPos >= 0) bolCalc(implGroupPos);
			else if (bolPos >= 0) bolCalc(bolPos);
			else if (bitwisePos >= 0) bitwiseCalc(bitwisePos);
			else if (lParPos >= 0 && rParPos > lParPos) {
				PARENTHESES(lParPos, rParPos);
				storeStepsInRegister = false;
			}

			if (verboseMode) {
				showParsing(0, tokensList->size() - 1);
				printSystemInfo(
					StringInvariant::SPACE + StringModel::STRING_RESOURCES->DONE + StringInvariant::NEW_LINE,
					NO_EXP_STR);
			}

			if (tokensList->size() == tokensNumber) emptyLoopCounter++;
			else emptyLoopCounter = 0;

			if (emptyLoopCounter > 10) {
				registerErrorWhileCalculate(
					StringModel::STRING_RESOURCES->FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN);
				return -1;
			}
		} while (tokensList->size() > 1);

		if (!compilationDetails->containsIf)
			isFullyCompiled = true;

		return stepsRegisteredCounter;
	}

	API_VISIBLE int Expression::applySequenceFromCompilation(const CalcStepsRegisterPtr &calcStepsRegister, const StringPtr &stepDescription) {
		int stepsRegisteredCounter = 0;
		CalcStepRecord::StepType stepTypePrev = CalcStepRecord::StepType::Unknown;
		bool storeStepsInRegister = true;
		for (const CompiledElementPtr &compiledElement: *initialCompilationDetails->compiledElements) {
			if (mXparser::cancelCurrentCalculationFlag) {
				registerErrorWhileCalculate(StringModel::STRING_RESOURCES->CANCEL_REQUEST_FINISHING);
				return -1;
			}

			if (storeStepsInRegister && calcStepsRegister != nullptr) {
				stepsRegisteredCounter++;
				registerCalculationStepRecord(calcStepsRegister, stepsRegisteredCounter, stepDescription);
			}

			storeStepsInRegister = true;
			int pos = compiledElement->position1;

			if (verboseMode) {
				printSystemInfo(
					StringModel::STRING_RESOURCES->PARSING + StringInvariant::SPACE +
					StringUtils::surroundBracketsAddSpace(StringUtils::toString(pos) + StringInvariant::COMMA_SPACE + StringUtils::toString(pos)),
					WITH_EXP_STR);
				showParsing(pos, pos);
			}

			switch (compiledElement->toCall) {
				case CompiledElement::ToCall::FREE_ARGUMENT:
					FREE_ARGUMENT(pos);
					storeStepsInRegister = false;
					break;
				case CompiledElement::ToCall::CONSTANT:
					CONSTANT(pos);
					storeStepsInRegister = false;
					break;
				case CompiledElement::ToCall::UNIT:
					UNIT(pos);
					storeStepsInRegister = false;
					break;
				case CompiledElement::ToCall::USER_CONSTANT:
					USER_CONSTANT(pos);
					storeStepsInRegister = false;
					break;
				case CompiledElement::ToCall::RANDOM_VARIABLE:
					RANDOM_VARIABLE(pos);
					storeStepsInRegister = false;
					break;
				case CompiledElement::ToCall::DEPENDENT_ARGUMENT:
					if (calcStepsRegister != nullptr) stepTypePrev = calcStepsRegister->stepType;
					DEPENDENT_ARGUMENT(pos, calcStepsRegister);
					if (calcStepsRegister != nullptr) calcStepsRegister->stepType = stepTypePrev;
					break;
				case CompiledElement::ToCall::calculusCalc: calculusCalc(pos);
					break;
				case CompiledElement::ToCall::IF_CONDITION: IF_CONDITION(pos);
					break;
				case CompiledElement::ToCall::IFF: IFF(pos);
					break;
				case CompiledElement::ToCall::RECURSIVE_ARGUMENT: RECURSIVE_ARGUMENT(pos);
					break;
				case CompiledElement::ToCall::variadicFunCalc: variadicFunCalc(pos);
					break;
				case CompiledElement::ToCall::f3ArgCalc: f3ArgCalc(pos);
					break;
				case CompiledElement::ToCall::f2ArgCalc: f2ArgCalc(pos);
					break;
				case CompiledElement::ToCall::f1ArgCalc: f1ArgCalc(pos);
					break;
				case CompiledElement::ToCall::USER_FUNCTION:
					if (calcStepsRegister != nullptr) stepTypePrev = calcStepsRegister->stepType;
					USER_FUNCTION(pos, calcStepsRegister);
					if (calcStepsRegister != nullptr) calcStepsRegister->stepType = stepTypePrev;
					break;
				case CompiledElement::ToCall::TETRATION: TETRATION(pos);
					break;
				case CompiledElement::ToCall::POWER: POWER(pos);
					break;
				case CompiledElement::ToCall::FACT: FACT(pos);
					break;
				case CompiledElement::ToCall::PERC: PERC(pos);
					break;
				case CompiledElement::ToCall::MODULO: MODULO(pos);
					break;
				case CompiledElement::ToCall::NEG: NEG(pos);
					break;
				case CompiledElement::ToCall::rootOperCalc: rootOperCalc(pos);
					break;
				case CompiledElement::ToCall::BITWISE_COMPL: BITWISE_COMPL(pos);
					break;
				case CompiledElement::ToCall::MULTIPLY: MULTIPLY(pos);
					break;
				case CompiledElement::ToCall::DIVIDE: DIVIDE(pos);
					break;
				case CompiledElement::ToCall::DIVIDE_QUOTIENT: DIVIDE_QUOTIENT(pos);
					break;
				case CompiledElement::ToCall::MINUS: MINUS(pos);
					break;
				case CompiledElement::ToCall::PLUS: PLUS(pos);
					break;
				case CompiledElement::ToCall::NEQ: NEQ(pos);
					break;
				case CompiledElement::ToCall::EQ: EQ(pos);
					break;
				case CompiledElement::ToCall::LT: LT(pos);
					break;
				case CompiledElement::ToCall::GT: GT(pos);
					break;
				case CompiledElement::ToCall::LEQ: LEQ(pos);
					break;
				case CompiledElement::ToCall::GEQ: GEQ(pos);
					break;
				case CompiledElement::ToCall::COMMA:
					COMMA(pos);
					storeStepsInRegister = false;
					break;
				case CompiledElement::ToCall::bolCalc: bolCalc(pos);
					break;
				case CompiledElement::ToCall::bitwiseCalc: bitwiseCalc(pos);
					break;
				case CompiledElement::ToCall::PARENTHESES:
					PARENTHESES(compiledElement->position1, compiledElement->position2);
					storeStepsInRegister = false;
					break;
				case CompiledElement::ToCall::Null:
					break;
			}

			if (verboseMode) {
				showParsing(0, tokensList->size() - 1);
				printSystemInfo(
					StringInvariant::SPACE + StringModel::STRING_RESOURCES->DONE + StringInvariant::NEW_LINE,
					NO_EXP_STR);
			}
		}

		return stepsRegisteredCounter;
	}

	API_VISIBLE double Expression::calculateInternal(const CalcStepsRegisterPtr &calcStepsRegister) {
		computingTime = 0;
		Long startTime = SystemUtils::currentTimeMillis();
		if (verboseMode) {
			printSystemInfo(StringInvariant::NEW_LINE, NO_EXP_STR);
			printSystemInfo(StringInvariant::NEW_LINE, WITH_EXP_STR);
			printSystemInfo(StringModel::STRING_RESOURCES->STARTING + StringInvariant::NEW_LINE, WITH_EXP_STR);
			showArguments();
		}
		/*
		 * check expression syntax and
		 * evaluate expression string tokens
		 *
		 */
		if (expressionWasModified || syntaxStatus != NO_SYNTAX_ERRORS)
			syntaxStatus = checkSyntax();
		if (syntaxStatus == SYNTAX_ERROR) {
			if (verboseMode)
				printSystemInfo(
					StringModel::STRING_RESOURCES->PROBLEM_WITH_EXPRESSION_SYNTAX + StringInvariant::NEW_LINE,
					NO_EXP_STR);
			/*
			 * Recursive counter to aAPI_VISIBLE void Expression::infinite loops in expressions
			 * created in they way showed in below examples
			 *
			 * Argument x = new_Argument("x = 2*y");
			 * Argument y = new_Argument("y = 2*x");
			 * x->addDefinitions(y);
			 * y->addDefinitions(x);
			 *
			 * Function f = new_Function("f(x) = 2*g(x)");
			 * Function g = new_Function("g(x) = 2*f(x)");
			 * f->addDefinitions(g);
			 * g->addDefinitions(f);
			 *
			 */
			recursionCallsCounter = 0;
			return Double::NaN;
		}
		/*
		 * Building initial tokens only if this is first recursion call
		 * or we have expression clone, helps to solve problem with
		 * definitions similar to the below example
		 *
		 *
		 * Function f = new_Function("f(x) = 2*g(x)");
		 * Function g = new_Function("g(x) = 2*f(x)");
		 * f->addDefinitions(g);
		 * g->addDefinitions(f);
		 */
		if (recursionCallsCounter == 0 || internalClone)
			copyInitialTokens();
		/*
		 * if nothing to calculate return Double::NaN
		 */
		if (tokensList->size() == 0) {
			registerErrorWhileCalculate(StringModel::STRING_RESOURCES->EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS);
			if (verboseMode)
				printSystemInfo(
					StringModel::STRING_RESOURCES->EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS + StringInvariant::NEW_LINE,
					NO_EXP_STR);
			recursionCallsCounter = 0;
			return Double::NaN;
		}
		/*
		 * Incrementing recursive counter to aAPI_VISIBLE void Expression::infinite loops in expressions
		 * created in they way showed in below examples
		 *
		 * Argument x = new_Argument("x = 2*y");
		 * Argument y = new_Argument("y = 2*x");
		 * x->addDefinitions(y);
		 * y->addDefinitions(x);
		 *
		 * Function f = new_Function("f(x) = 2*g(x)");
		 * Function g = new_Function("g(x) = 2*f(x)");
		 * f->addDefinitions(g);
		 * g->addDefinitions(f);
		 *
		 */
		if (recursionCallsCounter >= mXparser::MAX_RECURSION_CALLS) {
			if (verboseMode)
				printSystemInfo(
					StringModel::STRING_RESOURCES->RECURSION_CALLS_COUNTER_EXCEEDED + StringInvariant::NEW_LINE,
					NO_EXP_STR);
			recursionCallsCounter--;
			registerErrorWhileCalculate(StringModel::STRING_RESOURCES->RECURSION_CALLS_COUNTER_EXCEEDED);
			return Double::NaN;
		}
		recursionCallsCounter++;

		if (verboseMode)
			printSystemInfo(StringModel::STRING_RESOURCES->STARTING_CALCULATION_LOOP + StringInvariant::NEW_LINE,
			                WITH_EXP_STR);

		CalcStepsRegister::stepNumberGroupIncrease(calcStepsRegister, THIS(Expression));
		StringPtr stepDescription = StringInvariant::EMPTY;
		if (calcStepsRegister != nullptr)
			stepDescription = makeStepDescription();

		if (verboseMode)
			printSystemInfo(
				StringModel::STRING_RESOURCES->FULLY_COMPILED + StringInvariant::SPACE_EQUAL_SPACE +
				StringUtils::toString(isFullyCompiled) + StringInvariant::NEW_LINE, WITH_EXP_STR);

		int stepsRegisteredCounter;
		if (isFullyCompiled) {
			stepsRegisteredCounter = applySequenceFromCompilation(calcStepsRegister, stepDescription);
		} else {
			stepsRegisteredCounter = calculateFirstAndFullyCompile(calcStepsRegister, stepDescription);
		}

		if (verboseMode) {
			printSystemInfo(
				StringModel::STRING_RESOURCES->CALCULATED_VALUE + StringInvariant::COLON_SPACE +
				StringUtils::toString(tokensList->getRef(0)->tokenValue) + StringInvariant::NEW_LINE, WITH_EXP_STR);
			printSystemInfo(StringModel::STRING_RESOURCES->EXITING + StringInvariant::NEW_LINE, WITH_EXP_STR);
			printSystemInfo(StringInvariant::NEW_LINE, NO_EXP_STR);
		}

		Long endTime = SystemUtils::currentTimeMillis();
		computingTime = CAST_DOUBLE(endTime - startTime) / 1000.0;
		recursionCallsCounter--;

		if (stepsRegisteredCounter < 0) return Double::NaN;

		double result = tokensList->getRef(0)->tokenValue;
		if (!disableRounding) {
			if (mXparser::almostIntRounding) {
				double resultInt = Math::round(result);
				if (Math::abs(result-resultInt) <= BinaryRelations::getEpsilon()) result = resultInt;
			}
			if (mXparser::canonicalRounding) result = MathFunctions::lengthRound(result);
		}

		if (calcStepsRegister != nullptr) {
			stepsRegisteredCounter++;
			registerCalculationStepRecord(calcStepsRegister, stepsRegisteredCounter, stepDescription, result);
		}

		return result;
	}

	API_VISIBLE void Expression::registerCompiledElement(CompiledElement::ToCall toCall, int position) {
		CompiledElementPtr compiledElement = new_CompiledElement();
		compiledElement->toCall = toCall;
		compiledElement->position1 = position;
		initialCompilationDetails->compiledElements->add(compiledElement);
	}

	API_VISIBLE void Expression::registerCompiledElement(CompiledElement::ToCall toCall, int position1, int position2) {
		CompiledElementPtr compiledElement = new_CompiledElement();
		compiledElement->toCall = toCall;
		compiledElement->position1 = position1;
		compiledElement->position2 = position2;
		initialCompilationDetails->compiledElements->add(compiledElement);
	}

	/**
	 * Calculates unary function
	 * @param pos    token position
	 */
	API_VISIBLE void Expression::f1ArgCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::f1ArgCalc, pos);
		switch (tokensList->getRef(pos)->tokenId) {
			case Function1Arg::SIN_ID: SIN(pos);
				break;
			case Function1Arg::COS_ID: COS(pos);
				break;
			case Function1Arg::TAN_ID: TAN(pos);
				break;
			case Function1Arg::CTAN_ID: CTAN(pos);
				break;
			case Function1Arg::SEC_ID: SEC(pos);
				break;
			case Function1Arg::COSEC_ID: COSEC(pos);
				break;
			case Function1Arg::ASIN_ID: ASIN(pos);
				break;
			case Function1Arg::ACOS_ID: ACOS(pos);
				break;
			case Function1Arg::ATAN_ID: ATAN(pos);
				break;
			case Function1Arg::ACTAN_ID: ACTAN(pos);
				break;
			case Function1Arg::LN_ID: LN(pos);
				break;
			case Function1Arg::LOG2_ID: LOG2(pos);
				break;
			case Function1Arg::LOG10_ID: LOG10(pos);
				break;
			case Function1Arg::RAD_ID: RAD(pos);
				break;
			case Function1Arg::EXP_ID: EXP(pos);
				break;
			case Function1Arg::SQRT_ID: SQRT(pos);
				break;
			case Function1Arg::SINH_ID: SINH(pos);
				break;
			case Function1Arg::COSH_ID: COSH(pos);
				break;
			case Function1Arg::TANH_ID: TANH(pos);
				break;
			case Function1Arg::COTH_ID: COTH(pos);
				break;
			case Function1Arg::SECH_ID: SECH(pos);
				break;
			case Function1Arg::CSCH_ID: CSCH(pos);
				break;
			case Function1Arg::DEG_ID: DEG(pos);
				break;
			case Function1Arg::ABS_ID: ABS(pos);
				break;
			case Function1Arg::SGN_ID: SGN(pos);
				break;
			case Function1Arg::FLOOR_ID: FLOOR(pos);
				break;
			case Function1Arg::CEIL_ID: CEIL(pos);
				break;
			case Function1Arg::NOT_ID: NOT(pos);
				break;
			case Function1Arg::ARSINH_ID: ARSINH(pos);
				break;
			case Function1Arg::ARCOSH_ID: ARCOSH(pos);
				break;
			case Function1Arg::ARTANH_ID: ARTANH(pos);
				break;
			case Function1Arg::ARCOTH_ID: ARCOTH(pos);
				break;
			case Function1Arg::ARSECH_ID: ARSECH(pos);
				break;
			case Function1Arg::ARCSCH_ID: ARCSCH(pos);
				break;
			case Function1Arg::SA_ID: SA(pos);
				break;
			case Function1Arg::SINC_ID: SINC(pos);
				break;
			case Function1Arg::BELL_NUMBER_ID: BELL_NUMBER(pos);
				break;
			case Function1Arg::LUCAS_NUMBER_ID: LUCAS_NUMBER(pos);
				break;
			case Function1Arg::FIBONACCI_NUMBER_ID: FIBONACCI_NUMBER(pos);
				break;
			case Function1Arg::HARMONIC_NUMBER_ID: HARMONIC_NUMBER(pos);
				break;
			case Function1Arg::IS_PRIME_ID: IS_PRIME(pos);
				break;
			case Function1Arg::PRIME_COUNT_ID: PRIME_COUNT(pos);
				break;
			case Function1Arg::EXP_INT_ID: EXP_INT(pos);
				break;
			case Function1Arg::LOG_INT_ID: LOG_INT(pos);
				break;
			case Function1Arg::OFF_LOG_INT_ID: OFF_LOG_INT(pos);
				break;
			case Function1Arg::GAUSS_ERF_ID: GAUSS_ERF(pos);
				break;
			case Function1Arg::GAUSS_ERFC_ID: GAUSS_ERFC(pos);
				break;
			case Function1Arg::GAUSS_ERF_INV_ID: GAUSS_ERF_INV(pos);
				break;
			case Function1Arg::GAUSS_ERFC_INV_ID: GAUSS_ERFC_INV(pos);
				break;
			case Function1Arg::ULP_ID: ULP(pos);
				break;
			case Function1Arg::ISNAN_ID: ISNAN(pos);
				break;
			case Function1Arg::NDIG10_ID: NDIG10(pos);
				break;
			case Function1Arg::NFACT_ID: NFACT(pos);
				break;
			case Function1Arg::ARCSEC_ID: ARCSEC(pos);
				break;
			case Function1Arg::ARCCSC_ID: ARCCSC(pos);
				break;
			case Function1Arg::GAMMA_ID: GAMMA(pos);
				break;
			case Function1Arg::LAMBERT_W0_ID: LAMBERT_W0(pos);
				break;
			case Function1Arg::LAMBERT_W1_ID: LAMBERT_W1(pos);
				break;
			case Function1Arg::SGN_GAMMA_ID: SGN_GAMMA(pos);
				break;
			case Function1Arg::LOG_GAMMA_ID: LOG_GAMMA(pos);
				break;
			case Function1Arg::DI_GAMMA_ID: DI_GAMMA(pos);
				break;
			case Function1Arg::PARAM_ID: UDF_PARAM(pos);
				break;
			case Function1Arg::RND_STUDENT_T_ID: RND_STUDENT_T(pos);
				break;
			case Function1Arg::RND_CHI2_ID: RND_CHI2(pos);
				break;
			default:
				break;
		}
	}

	/**
	 * Calculates binary function
	 * @param pos   Token position
	 */
	API_VISIBLE void Expression::f2ArgCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::f2ArgCalc, pos);
		switch (tokensList->getRef(pos)->tokenId) {
			case Function2Arg::LOG_ID: LOG(pos);
				break;
			case Function2Arg::MOD_ID: MOD(pos);
				break;
			case Function2Arg::BINOM_COEFF_ID: BINOM_COEFF(pos);
				break;
			case Function2Arg::BERNOULLI_NUMBER_ID: BERNOULLI_NUMBER(pos);
				break;
			case Function2Arg::STIRLING1_NUMBER_ID: STIRLING1_NUMBER(pos);
				break;
			case Function2Arg::STIRLING2_NUMBER_ID: STIRLING2_NUMBER(pos);
				break;
			case Function2Arg::WORPITZKY_NUMBER_ID: WORPITZKY_NUMBER(pos);
				break;
			case Function2Arg::EULER_NUMBER_ID: EULER_NUMBER(pos);
				break;
			case Function2Arg::KRONECKER_DELTA_ID: KRONECKER_DELTA(pos);
				break;
			case Function2Arg::EULER_POLYNOMIAL_ID: EULER_POLYNOMIAL(pos);
				break;
			case Function2Arg::HARMONIC_NUMBER_ID: HARMONIC2_NUMBER(pos);
				break;
			case Function2Arg::RND_UNIFORM_CONT_ID: RND_VAR_UNIFORM_CONT(pos);
				break;
			case Function2Arg::RND_UNIFORM_DISCR_ID: RND_VAR_UNIFORM_DISCR(pos);
				break;
			case Function2Arg::ROUND_ID: ROUND(pos);
				break;
			case Function2Arg::RND_NORMAL_ID: RND_NORMAL(pos);
				break;
			case Function2Arg::NDIG_ID: NDIG(pos);
				break;
			case Function2Arg::DIGIT10_ID: DIGIT10(pos);
				break;
			case Function2Arg::FACTVAL_ID: FACTVAL(pos);
				break;
			case Function2Arg::FACTEXP_ID: FACTEXP(pos);
				break;
			case Function2Arg::ROOT_ID: ROOT(pos);
				break;
			case Function2Arg::INC_GAMMA_LOWER_ID: INC_GAMMA_LOWER(pos);
				break;
			case Function2Arg::INC_GAMMA_UPPER_ID: INC_GAMMA_UPPER(pos);
				break;
			case Function2Arg::REG_GAMMA_LOWER_ID: REG_GAMMA_LOWER(pos);
				break;
			case Function2Arg::REG_GAMMA_UPPER_ID: REG_GAMMA_UPPER(pos);
				break;
			case Function2Arg::PERMUTATIONS_ID: PERMUTATIONS(pos);
				break;
			case Function2Arg::BETA_ID: BETA(pos);
				break;
			case Function2Arg::LOG_BETA_ID: LOG_BETA(pos);
				break;
			case Function2Arg::PDF_STUDENT_T_ID: PDF_STUDENT_T(pos);
				break;
			case Function2Arg::CDF_STUDENT_T_ID: CDF_STUDENT_T(pos);
				break;
			case Function2Arg::QNT_STUDENT_T_ID: QNT_STUDENT_T(pos);
				break;
			case Function2Arg::PDF_CHI2_ID: PDF_CHI2(pos);
				break;
			case Function2Arg::CDF_CHI2_ID: CDF_CHI2(pos);
				break;
			case Function2Arg::QNT_CHI2_ID: QNT_CHI2(pos);
				break;
			case Function2Arg::RND_F_SNEDECOR_ID: RND_F_SNEDECOR(pos);
				break;
			default:
				break;
		}
	}

	/**
	 * Calculates function with 3 arguments
	 * @param pos   Token position
	 */
	API_VISIBLE void Expression::f3ArgCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::f3ArgCalc, pos);
		switch (tokensList->getRef(pos)->tokenId) {
			case Function3Arg::IF_ID: IF(pos);
				break;
			case Function3Arg::CHI_ID: CHI(pos);
				break;
			case Function3Arg::CHI_LR_ID: CHI_LR(pos);
				break;
			case Function3Arg::CHI_L_ID: CHI_L(pos);
				break;
			case Function3Arg::CHI_R_ID: CHI_R(pos);
				break;
			case Function3Arg::PDF_UNIFORM_CONT_ID: PDF_UNIFORM_CONT(pos);
				break;
			case Function3Arg::CDF_UNIFORM_CONT_ID: CDF_UNIFORM_CONT(pos);
				break;
			case Function3Arg::QNT_UNIFORM_CONT_ID: QNT_UNIFORM_CONT(pos);
				break;
			case Function3Arg::PDF_NORMAL_ID: PDF_NORMAL(pos);
				break;
			case Function3Arg::CDF_NORMAL_ID: CDF_NORMAL(pos);
				break;
			case Function3Arg::QNT_NORMAL_ID: QNT_NORMAL(pos);
				break;
			case Function3Arg::DIGIT_ID: DIGIT(pos);
				break;
			case Function3Arg::INC_BETA_ID: INC_BETA(pos);
				break;
			case Function3Arg::REG_BETA_ID: REG_BETA(pos);
				break;
			case Function3Arg::PDF_F_SNEDECOR_ID: PDF_F_SNEDECOR(pos);
				break;
			case Function3Arg::CDF_F_SNEDECOR_ID: CDF_F_SNEDECOR(pos);
				break;
			case Function3Arg::QNT_F_SNEDECOR_ID: QNT_F_SNEDECOR(pos);
				break;
			default:
				break;
		}
	}

	/**
	 * Calculates Variadic function
	 * @param pos   Token position
	 */
	API_VISIBLE void Expression::variadicFunCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::variadicFunCalc, pos);
		switch (tokensList->getRef(pos)->tokenId) {
			case FunctionVariadic::IFF_ID: IFF(pos);
				break;
			case FunctionVariadic::MIN_ID: MIN_VARIADIC(pos);
				break;
			case FunctionVariadic::MAX_ID: MAX_VARIADIC(pos);
				break;
			case FunctionVariadic::SUM_ID: SUM_VARIADIC(pos);
				break;
			case FunctionVariadic::PROD_ID: PROD_VARIADIC(pos);
				break;
			case FunctionVariadic::AVG_ID: AVG_VARIADIC(pos);
				break;
			case FunctionVariadic::VAR_ID: VAR_VARIADIC(pos);
				break;
			case FunctionVariadic::STD_ID: STD_VARIADIC(pos);
				break;
			case FunctionVariadic::CONT_FRAC_ID: CONTINUED_FRACTION(pos);
				break;
			case FunctionVariadic::CONT_POL_ID: CONTINUED_POLYNOMIAL(pos);
				break;
			case FunctionVariadic::GCD_ID: GCD(pos);
				break;
			case FunctionVariadic::LCM_ID: LCM(pos);
				break;
			case FunctionVariadic::RND_LIST_ID: RND_LIST(pos);
				break;
			case FunctionVariadic::COALESCE_ID: COALESCE(pos);
				break;
			case FunctionVariadic::OR_ID: OR_VARIADIC(pos);
				break;
			case FunctionVariadic::AND_ID: AND_VARIADIC(pos);
				break;
			case FunctionVariadic::XOR_ID: XOR_VARIADIC(pos);
				break;
			case FunctionVariadic::ARGMIN_ID: ARGMIN_VARIADIC(pos);
				break;
			case FunctionVariadic::ARGMAX_ID: ARGMAX_VARIADIC(pos);
				break;
			case FunctionVariadic::MEDIAN_ID: MEDIAN_VARIADIC(pos);
				break;
			case FunctionVariadic::MODE_ID: MODE_VARIADIC(pos);
				break;
			case FunctionVariadic::BASE_ID: BASE_VARIADIC(pos);
				break;
			case FunctionVariadic::NDIST_ID: NDIST_VARIADIC(pos);
				break;
			default:
				break;
		}
	}

	/**
	 * Calculates calculus operators
	 * @param pos
	 */
	API_VISIBLE void Expression::calculusCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::calculusCalc, pos);
		switch (tokensList->getRef(pos)->tokenId) {
			case CalculusOperator::SUM_ID: SUM(pos);
				break;
			case CalculusOperator::PROD_ID: PROD(pos);
				break;
			case CalculusOperator::MIN_ID: MINIMUM(pos);
				break;
			case CalculusOperator::MAX_ID: MAXIMUM(pos);
				break;
			case CalculusOperator::AVG_ID: AVG(pos);
				break;
			case CalculusOperator::VAR_ID: VAR(pos);
				break;
			case CalculusOperator::STD_ID: STD(pos);
				break;
			case CalculusOperator::INT_ID: INTEGRAL(pos);
				break;
			case CalculusOperator::SOLVE_ID: SOLVE(pos);
				break;
			case CalculusOperator::DER_ID: DERIVATIVE(pos, Calculus::GENERAL_DERIVATIVE);
				break;
			case CalculusOperator::DER_LEFT_ID: DERIVATIVE(pos, Calculus::LEFT_DERIVATIVE);
				break;
			case CalculusOperator::DER_RIGHT_ID: DERIVATIVE(pos, Calculus::RIGHT_DERIVATIVE);
				break;
			case CalculusOperator::DERN_ID: DERIVATIVE_NTH(pos, Calculus::GENERAL_DERIVATIVE);
				break;
			case CalculusOperator::FORW_DIFF_ID: FORWARD_DIFFERENCE(pos);
				break;
			case CalculusOperator::BACKW_DIFF_ID: BACKWARD_DIFFERENCE(pos);
				break;
			default:
				break;
		}
	}

	/**
	 * Unicode root operators
	 * @param pos
	 */
	API_VISIBLE void Expression::rootOperCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::rootOperCalc, pos);
		switch (tokensList->getRef(pos)->tokenId) {
			case Operator::SQUARE_ROOT_ID: SQUARE_ROOT_OPERATOR(pos);
				break;
			case Operator::CUBE_ROOT_ID: CUBE_ROOT_OPERATOR(pos);
				break;
			case Operator::FOURTH_ROOT_ID: FOURTH_ROOT_OPERATOR(pos);
				break;
			default:
				break;
		}
	}

	/**
	 * Calculates bool operators
	 * @param pos
	 */
	API_VISIBLE void Expression::bolCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::bolCalc, pos);
		switch (tokensList->getRef(pos)->tokenId) {
			case BooleanOperator::AND_ID: AND(pos);
				break;
			case BooleanOperator::CIMP_ID: CIMP(pos);
				break;
			case BooleanOperator::CNIMP_ID: CNIMP(pos);
				break;
			case BooleanOperator::EQV_ID: EQV(pos);
				break;
			case BooleanOperator::IMP_ID: IMP(pos);
				break;
			case BooleanOperator::NAND_ID: NAND(pos);
				break;
			case BooleanOperator::NIMP_ID: NIMP(pos);
				break;
			case BooleanOperator::NOR_ID: NOR(pos);
				break;
			case BooleanOperator::OR_ID: OR(pos);
				break;
			case BooleanOperator::XOR_ID: XOR(pos);
				break;
			default:
				break;
		}
	}

	/**
	 * Calculates Bitwise operators
	 * @param pos
	 */
	API_VISIBLE void Expression::bitwiseCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::bitwiseCalc, pos);
		switch (tokensList->getRef(pos)->tokenId) {
			case BitwiseOperator::AND_ID: BITWISE_AND(pos);
				break;
			case BitwiseOperator::OR_ID: BITWISE_OR(pos);
				break;
			case BitwiseOperator::XOR_ID: BITWISE_XOR(pos);
				break;
			case BitwiseOperator::NAND_ID: BITWISE_NAND(pos);
				break;
			case BitwiseOperator::NOR_ID: BITWISE_NOR(pos);
				break;
			case BitwiseOperator::XNOR_ID: BITWISE_XNOR(pos);
				break;
			case BitwiseOperator::LEFT_SHIFT_ID: BITWISE_LEFT_SHIFT(pos);
				break;
			case BitwiseOperator::RIGHT_SHIFT_ID: BITWISE_RIGHT_SHIFT(pos);
				break;
			default:
				break;
		}
	}

	/*=================================================
	 *
	 * Parser methods
	 *
	 *=================================================
	 */
	/**
	 * Creates parser keywords list
	 */
	API_VISIBLE void Expression::initParserKeyWords() {
		keyWordsList = new_List<KeyWordPtr>();
		ExpressionUtils::addParserKeyWords(parserKeyWordsOnly, UDFExpression, unicodeKeyWordsEnabled, keyWordsList);
		modifyParserKeyWords();
		validateParserKeyWords();
		addUserDefinedKeyWords();
	}

	API_VISIBLE void Expression::modifyParserKeyWords() {
		bool toRemove = mXparser::tokensToRemove->size() > 0;
		bool toModify = mXparser::tokensToModify->size() > 0;

		if (!toRemove && !toModify)
			return;

		ListPtr<KeyWordPtr> keyWordsToRemove = new_List<KeyWordPtr>();
		for (int i = 0; i < keyWordsList->size(); i++) {
			const KeyWordPtr& kw = keyWordsList->getRef(i);

			if (kw->wordTypeId == Function1Arg::TYPE_ID ||
			    kw->wordTypeId == Function2Arg::TYPE_ID ||
			    kw->wordTypeId == Function3Arg::TYPE_ID ||
			    kw->wordTypeId == FunctionVariadic::TYPE_ID ||
			    kw->wordTypeId == CalculusOperator::TYPE_ID ||
			    kw->wordTypeId == ConstantValue::TYPE_ID ||
			    kw->wordTypeId == RandomVariable::TYPE_ID ||
			    kw->wordTypeId == Unit::TYPE_ID) {
				if (toRemove)
					if (mXparser::tokensToRemove->containsByPtrDeref(kw->wordString))
						keyWordsToRemove->add(kw);

				StringPtr wordString;
				StringPtr wordDescription;
				StringPtr wordSyntax;
				if (toModify) {
					for (const TokenModificationPtr &tm : *mXparser::tokensToModify) {
						if (*tm->currentToken != *kw->wordString)
							continue;
						wordString = tm->newToken;
						wordDescription = kw->description;
						if (tm->newTokenDescription != nullptr)
							wordDescription = tm->newTokenDescription;
						wordSyntax = StringUtils::replace(kw->syntax, tm->currentToken, tm->newToken);
						KeyWordPtr newKw = new_KeyWord(wordString, wordDescription, kw->wordId, wordSyntax, kw->since,
						                               kw->wordTypeId);
						keyWordsList->set(i, newKw);
					}
				}
			}
		}

		if (toRemove && keyWordsToRemove->size() > 0)
			for (const KeyWordPtr &kw : *keyWordsToRemove)
				keyWordsList->remove(kw);
	}

	/**
	 * Final validation of keywords
	 */
	API_VISIBLE void Expression::validateParserKeyWords() {
		if (!mXparser::overrideBuiltinTokens)
			return;

		/*
		 * Building list of user defined tokens
		 */
		ListPtr<StringPtr> userDefinedTokens = new_List<StringPtr>();
		for (const ArgumentPtr &arg : *argumentsList)
			userDefinedTokens->add(arg->getArgumentName());
		for (const FunctionPtr &fun : *functionsList)
			userDefinedTokens->add(fun->getFunctionName());
		for (const ConstantPtr &cons : *constantsList)
			userDefinedTokens->add(cons->getConstantName());
		/*
		 * If no user defined tokens then exit
		 */
		if (userDefinedTokens->isEmpty()) return;
		/*
		 * Building list of built-in tokens to remove
		 */
		ListPtr<KeyWordPtr> keyWordsToOverride = new_List<KeyWordPtr>();
		for (const KeyWordPtr &kw : *keyWordsList)
			if (userDefinedTokens->containsByPtrDeref(kw->wordString))
				keyWordsToOverride->add(kw);
		/*
		 * If nothing to remove then exit
		 */
		if (keyWordsToOverride->isEmpty()) return;
		/*
		 * Performing final override
		 */
		for (const KeyWordPtr &kw : *keyWordsToOverride)
			keyWordsList->remove(kw);
	}

	/**
	 * Method used in case of implied multiplication, where x2x can be understood as x2*x
	 *
	 * sum( x2x, 1, 20, 2*x2x)
	 *
	 * x2x is not known and it will be prevented from split into x2*x
	 *
	 * @param token The token
	 * @return Returns true in case calculus argument was found
	 */
	API_VISIBLE bool Expression::checkArgumentNameInCalculusOperator(const TokenPtr &token) {
		if (neverParseForImpliedMultiplication->containsByPtrDeref(token->tokenStr)) {
			initialTokens->add(token);
			return true;
		}
		int initialTokensSize = initialTokens->size();
		if (initialTokensSize < 2) return false;
		bool argumentNameFound = false;
		if (initialTokensSize >= 2) {
			const TokenPtr& tokenMinus2 = initialTokens->getRef(initialTokensSize - 2);
			if (tokenMinus2->tokenTypeId == CalculusOperator::TYPE_ID) {
				switch (tokenMinus2->tokenId) {
					case CalculusOperator::SUM_ID:
					case CalculusOperator::PROD_ID:
					case CalculusOperator::AVG_ID:
					case CalculusOperator::VAR_ID:
					case CalculusOperator::STD_ID:
					case CalculusOperator::MIN_ID:
					case CalculusOperator::MAX_ID:
						argumentNameFound = true;
						break;
					default:
						break;
				}
			}
		}

		if (initialTokensSize >= 4 && !argumentNameFound) {
			const TokenPtr& tokenMinus4 = initialTokens->getRef(initialTokensSize - 4);
			if (tokenMinus4->tokenTypeId == CalculusOperator::TYPE_ID) {
				switch (tokenMinus4->tokenId) {
					case CalculusOperator::INT_ID:
					case CalculusOperator::DER_ID:
					case CalculusOperator::DER_LEFT_ID:
					case CalculusOperator::DER_RIGHT_ID:
					case CalculusOperator::DERN_ID:
					case CalculusOperator::FORW_DIFF_ID:
					case CalculusOperator::BACKW_DIFF_ID:
					case CalculusOperator::SOLVE_ID:
						argumentNameFound = true;
						break;
					default:
						break;
				}
			}
		}

		if (argumentNameFound) {
			initialTokens->add(token);
			neverParseForImpliedMultiplication->add(token->tokenStr);
		}

		return argumentNameFound;
	}

	/**
	 * Check whether we have a case of '[abc]'
	 *
	 * @param token  The token
	 * @return Returns true in case token is in a form of '[abc]'
	 * otherwise returns false.
	 */
	API_VISIBLE bool Expression::checkSpecialConstantName(const TokenPtr &token) {
		int tokenStrLenght = CAST_INT(token->tokenStr->length());
		if (tokenStrLenght < 2) return false;
		if (token->tokenStr->at(0) != UTF('[')) return false;
		if (token->tokenStr->at(tokenStrLenght - 1) != UTF(']')) return false;
		initialTokensAdd(token);
		return true;
	}

	/**
	 * Checks whether unknown token represents number literal
	 * provided in different numeral base system, where
	 * base is between 1 and 36.
	 *
	 * @param token   The token not know to the parser
	 */
	API_VISIBLE bool Expression::checkOtherNumberBases(const TokenPtr &token) {
		int dotPos = 0;
		int tokenStrLength = CAST_INT(token->tokenStr->length());
		/* find dot position */
		if (tokenStrLength >= 2) {
			if (token->tokenStr->at(1) == UTF('.'))
				dotPos = 1;
		}
		if (dotPos == 0 && tokenStrLength >= 3) {
			if (token->tokenStr->at(2) == UTF('.'))
				dotPos = 2;
		}
		if (dotPos == 0 && tokenStrLength >= 4) {
			if (token->tokenStr->at(3) == UTF('.'))
				dotPos = 3;
		}
		if (dotPos == 0) return false;
		/* check if there is base indicator */
		StringPtr baseInd = StringUtils::toLowerCase(S(token->tokenStr->substr(0, dotPos)));
		StringPtr numberLiteral = StringInvariant::EMPTY;
		if (tokenStrLength > dotPos + 1) numberLiteral = S(token->tokenStr->substr(dotPos + 1));
		int numeralSystemBase = ExpressionUtils::getNumeralSystemBaseFromBaseInd(baseInd);
		/* if base was found, perform conversion */
		if (numeralSystemBase > 0 && numeralSystemBase <= 36) {
			double tokenValue = NumberTheory::convOthBase2Decimal(numberLiteral, numeralSystemBase);
			if (Double::isNaN(tokenValue))
				return false;
			token->tokenTypeId = ParserSymbol::NUMBER_TYPE_ID;
			token->tokenId = ParserSymbol::NUMBER_ID;
			token->tokenValue = tokenValue;
			initialTokensAdd(token);
			return true;
		}
		return false;
	}

	/**
	 * Adds fraction token to the tokens list
	 * @param token The token
	 */
	API_VISIBLE void Expression::addFractionToken(const TokenPtr &token) {
		int underscore1stPos = CAST_INT(token->tokenStr->find(UTF('_')));
		int underscore2ndPos = CAST_INT(token->tokenStr->find(UTF('_'), underscore1stPos + 1));
		bool mixedFraction = underscore2ndPos > 0;
		double fractionValue;
		if (mixedFraction) {
			StringPtr wholeStr = S(token->tokenStr->substr(0, underscore1stPos));
			StringPtr numeratorStr = S(
				token->tokenStr->substr(underscore1stPos + 1, underscore2ndPos - (underscore1stPos + 1)));
			StringPtr denominatorStr = S(token->tokenStr->substr(underscore2ndPos + 1));
			double whole = Double::parseDouble(wholeStr);
			double numerator = Double::parseDouble(numeratorStr);
			double denominator = Double::parseDouble(denominatorStr);
			if (denominator == 0) {
				fractionValue = Double::NaN;
			} else {
				fractionValue = whole + numerator / denominator;
			}
		} else {
			StringPtr numeratorStr = S(token->tokenStr->substr(0, underscore1stPos));
			StringPtr denominatorStr = S(token->tokenStr->substr(underscore1stPos + 1));
			double numerator = Double::parseDouble(numeratorStr);
			double denominator = Double::parseDouble(denominatorStr);
			if (denominator == 0)
				fractionValue = Double::NaN;
			else {
				fractionValue = numerator / denominator;
			}
		}
		token->tokenTypeId = ParserSymbol::NUMBER_TYPE_ID;
		token->tokenId = ParserSymbol::NUMBER_ID;
		token->tokenValue = fractionValue;
		initialTokensAdd(token);
	}

	/**
	 * Checks whether unknown token represents fraction
	 * provided as fraction or mixed fraction
	 *
	 * @param token   The token not know to the parser
	 */
	API_VISIBLE bool Expression::checkFraction(const TokenPtr &token) {
		if (token->tokenStr->length() < 3) return false;
		if (!StringUtils::regexMatch(token->tokenStr, ParserSymbol::FRACTION)) return false;
		addFractionToken(token);
		return true;
	}

	/**
	 * Handles implied multiplication while adding single token to the tokens list
	 * is checking preceding token
	 * @param token The token
	 */
	API_VISIBLE void Expression::initialTokensAdd(const TokenPtr &token) {
		if (initialTokens->size() == 0) {
			initialTokens->add(token);
			return;
		}
		/* Start: Implied Multiplication related part*/
		const TokenPtr& precedingToken = initialTokens->getRef(initialTokens->size() - 1);
		if (Token::isSpecialTokenName(token)) {
			/* Special constant case [...]
			 * Excluding: '([a]', ';[a]', ',[a]', '+[a]', ....
			 */
			if (!Token::isLeftParenthesis(precedingToken) &&
			    !Token::isBinaryOperator(precedingToken) &&
			    !Token::isParameterSeparator(precedingToken) &&
			    !Token::isUnaryLeftOperator(precedingToken)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (Token::isSpecialTokenName(precedingToken)) {
			if (!Token::isRightParenthesis(token) &&
			    !Token::isBinaryOperator(token) &&
			    !Token::isParameterSeparator(token) &&
			    !Token::isUnaryRightOperator(token)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (Token::isLeftParenthesis(token)) {
			// ')(' case
			if (Token::isRightParenthesis(precedingToken)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
			// '2(' case
			if (Token::isNumber(precedingToken)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
			// 'e(', 'pi(' cases
			if (Token::isIdentifier(precedingToken)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (Token::isRightParenthesis(precedingToken)) {
			// ')2', ')h.1212', ')1_2_3' cases
			if (Token::isNumber(token)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
			// ')x', ')sin(x)', ')[sdf]' cases
			if (!Token::isParameterSeparator(token) &&
			    !Token::isBinaryOperator(token) &&
			    !Token::isUnaryRightOperator(token) &&
			    !Token::isRightParenthesis(token)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (Token::isUnicodeRootOperator(token)) {
			/* Unicode root operator */
			if (!Token::isLeftParenthesis(precedingToken) &&
			    !Token::isBinaryOperator(precedingToken) &&
			    !Token::isParameterSeparator(precedingToken) &&
			    !Token::isUnaryLeftOperator(precedingToken)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (!Token::isLeftParenthesis(token)
		           && !Token::isRightParenthesis(token)
		           && !Token::isBinaryOperator(token)
		           && !Token::isParameterSeparator(token)
		           && !Token::isUnaryRightOperator(token)) {
			/* Blank support: '2 x', 'n x', 'n sin(x)' */
			if (!Token::isLeftParenthesis(precedingToken) &&
			    !Token::isRightParenthesis(precedingToken) &&
			    !Token::isBinaryOperator(precedingToken) &&
			    !Token::isParameterSeparator(precedingToken) &&
			    !Token::isUnaryLeftOperator(precedingToken)) {
				if (impliedMultiplicationMode) {
					initialTokens->add(Token::makeMultiplyToken());
					initialTokens->add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		}
		/* End: Implied Multiplication related part*/
		initialTokens->add(token);
	}

	/**
	 * Assign found known keyword to the token
	 *
	 * @param token   The token
	 * @param keyWord  The keyword
	 */
	API_VISIBLE void Expression::assignKnownKeyword(const TokenPtr &token, const KeyWordPtr &keyWord) {
		token->tokenTypeId = keyWord->wordTypeId;
		token->tokenId = keyWord->wordId;
		if (token->tokenTypeId == Argument::TYPE_ID)
			token->tokenValue = argumentsList->getRef(token->tokenId)->argumentValue;
	}

	/**
	 * Tries to find known keyword for a given token
	 * via string matching
	 *
	 * @param tokenStr  Token string
	 * @return known keyword if match found, otherwise not matched keyword
	 */
	API_VISIBLE KeyWordPtr Expression::tryFindKnownKeyword(const StringPtr &tokenStr) {
		for (const KeyWordPtr &kw : *keyWordsList) {
			if (*kw->wordString == *tokenStr)
				return kw;
		}
		return new_KeyWord();
	}

	/**
	 * Tries to find known keyword for a given token
	 * via string matching
	 *
	 * @param token The token
	 * @return  true if keyword matched, otherwise false
	 */
	API_VISIBLE bool Expression::tryAssignKnownKeyword(const TokenPtr &token) {
		KeyWordPtr keyWord = tryFindKnownKeyword(token->tokenStr);
		if (keyWord->wordTypeId != KeyWord::NO_DEFINITION) {
			assignKnownKeyword(token, keyWord);
			return true;
		}
		return false;
	}

	/**
	 * Handles adding token part after single token split
	 * in the proces of parsing implied multiplication.
	 *
	 * @param tokenPart  The token part to be added to the token list
	 */
	API_VISIBLE void Expression::initialTokensAddTokenPart(const TokenPartPtr &tokenPart) {
		TokenPtr token = new_Token();
		token->tokenStr = tokenPart->str;
		switch (tokenPart->type) {
			case TokenPart::INTEGER:
			case TokenPart::DECIMAL:
				token->tokenValue = Double::parseDouble(token->tokenStr);
				token->tokenTypeId = ParserSymbol::NUMBER_TYPE_ID;
				token->tokenId = ParserSymbol::NUMBER_ID;
				initialTokensAdd(token);
				break;
			case TokenPart::FRACTION:
				addFractionToken(token);
				break;
			case TokenPart::OTHER_NUMERAL_BASE:
				checkOtherNumberBases(token);
				break;
			case TokenPart::KNOWN_KEYWORD:
				assignKnownKeyword(token, tokenPart->keyWord);
				initialTokensAdd(token);
				break;
			case TokenPart::UNKNOWN_NAME:
				initialTokensAdd(token);
				break;
			default: break;
		}
	}

	/**
	 * Handles implied multiplication logic in case of a single
	 * continuous string, e.g. no brackets
	 *
	 * @param token The token
	 * @return  returns true in case there was a reason to parse, otherwise returns false
	 */
	API_VISIBLE bool Expression::checkNumberNameManyImpliedMultiplication(const TokenPtr &token, bool parenthesisIsOnTheRight) {
		int tokenStrLength = CAST_INT(token->tokenStr->length());
		if (tokenStrLength < 2) return false;
		Char c;
		bool canStartDecimal, decimalFound;
		bool canStartOtherNumberBase, otherNumberBaseFound;
		bool canStartFraction, fractionFound;
		bool canStartKeyword, keywordFound;
		bool isDigit;
		StringPtr substr = StringInvariant::EMPTY;
		KeyWordPtr parserKeyword, kw;
		int lPos = 0;
		int rPos;
		int lastConsumedPos = -1;
		ListPtr<TokenPartPtr> tokenParts = new_List<TokenPartPtr>();
		TokenPartPtr tokenPart = nullptr;

		do {
			canStartDecimal = false;
			canStartOtherNumberBase = false;

			c = token->tokenStr->at(lPos);
			isDigit = StringUtils::is0To9Digit(c);

			if (isDigit || c == UTF('.') || c == UTF('+') || c == UTF('-'))
				canStartDecimal = true;

			canStartFraction = isDigit;

			if (c == UTF('b') || c == UTF('B') || c == UTF('o') || c == UTF('O') || c == UTF('h') || c == UTF('H'))
				canStartOtherNumberBase = true;

			canStartKeyword = !canStartDecimal;

			decimalFound = false;
			otherNumberBaseFound = false;
			fractionFound = false;
			keywordFound = false;
			parserKeyword = nullptr;
			for (rPos = tokenStrLength; rPos > lPos; rPos--) {
				substr = S(token->tokenStr->substr(lPos, rPos - lPos));
				//  Longest possible decimal checking
				if (canStartDecimal) {
					decimalFound = StringUtils::regexMatch(substr, ParserSymbol::DECIMAL_REG_EXP);
					if (decimalFound)
						break;
				}
				//  Longest possible fraction checking
				if (canStartFraction) {
					fractionFound = StringUtils::regexMatch(substr, ParserSymbol::FRACTION);
					if (fractionFound)
						break;
				}
				//  Longest possible other numeral base checking
				if (canStartOtherNumberBase) {
					otherNumberBaseFound = StringUtils::regexMatch(substr, ParserSymbol::BASE_OTHER_REG_EXP);
					if (otherNumberBaseFound)
						break;
				}
				//  Longest possible keyword checking
				if (canStartKeyword) {
					kw = tryFindKnownKeyword(substr);
					if (kw->wordTypeId != KeyWord::NO_DEFINITION) {
						if (!KeyWord::isFunctionForm(kw) || (rPos == tokenStrLength && parenthesisIsOnTheRight)) {
							parserKeyword = kw;
							keywordFound = true;
							break;
						}
					} else if (neverParseForImpliedMultiplication->containsByPtrDeref(substr)) {
						keywordFound = true;
						parserKeyword = new_KeyWord();
						break;
					}
				}
			}

			if (decimalFound || fractionFound || otherNumberBaseFound || keywordFound) {
				// Checking if not recognized token was present
				if (lPos - lastConsumedPos > 1) {
					tokenPart = new_TokenPart();
					tokenPart->str = S(token->tokenStr->substr(lastConsumedPos + 1, lPos - (lastConsumedPos + 1)));
					tokenPart->type = TokenPart::UNKNOWN_NAME;
					tokenParts->add(tokenPart);
				}

				tokenPart = new_TokenPart();
				tokenPart->str = substr;
				if (decimalFound) {
					if (StringUtils::regexMatch(tokenPart->str, ParserSymbol::INTEGER))
						tokenPart->type = TokenPart::INTEGER;
					else tokenPart->type = TokenPart::DECIMAL;
				}

				if (fractionFound) tokenPart->type = TokenPart::FRACTION;
				if (otherNumberBaseFound) tokenPart->type = TokenPart::OTHER_NUMERAL_BASE;
				if (keywordFound) {
					tokenPart->type = TokenPart::KNOWN_KEYWORD;
					tokenPart->keyWord = parserKeyword;
				}

				tokenParts->add(tokenPart);

				if (rPos > lPos) {
					lastConsumedPos = rPos - 1;
					lPos = rPos;
				} else {
					lastConsumedPos = tokenStrLength - 1;
					lPos = tokenStrLength;
				}
			} else {
				lPos++;
			}
		} while (lPos < tokenStrLength);

		if (lPos - lastConsumedPos > 1) {
			tokenPart = new_TokenPart();
			tokenPart->str = S(token->tokenStr->substr(lastConsumedPos + 1, lPos - (lastConsumedPos + 1)));
			tokenPart->type = TokenPart::UNKNOWN_NAME;
			tokenParts->add(tokenPart);
		}

		if (tokenParts->size() == 1) {
			initialTokensAddTokenPart(tokenParts->getRef(0));
			return true;
		}

		TokenPartPtr partAtPos = nullptr;
		TokenPartPtr partAtPosPlus1 = nullptr;

		bool foundNameFolloweByInteger;
		do {
			foundNameFolloweByInteger = false;
			int namePos;
			for (namePos = 0; namePos < tokenParts->size() - 1; namePos++) {
				partAtPos = tokenParts->getRef(namePos);
				partAtPosPlus1 = tokenParts->getRef(namePos + 1);
				if ((partAtPos->type == TokenPart::KNOWN_KEYWORD || partAtPos->type == TokenPart::UNKNOWN_NAME)
				    && partAtPosPlus1->type == TokenPart::INTEGER) {
					foundNameFolloweByInteger = true;
					break;
				}
			}
			if (foundNameFolloweByInteger) {
				partAtPos->str = partAtPos->str + partAtPosPlus1->str;
				partAtPos->type = TokenPart::UNKNOWN_NAME;
				partAtPos->keyWord = nullptr;
				tokenParts->remove(namePos + 1);
			}
		} while (foundNameFolloweByInteger);

		if (tokenParts->size() == 1) {
			initialTokensAddTokenPart(tokenParts->getRef(0));
			return true;
		}

		for (int i = 0; i < tokenParts->size(); i++) {
			if (i > 0) initialTokens->add(Token::makeMultiplyToken());
			initialTokensAddTokenPart(tokenParts->getRef(i));
		}

		return true;
	}

	/**
	 * Adds expression token
	 * Method is called by the tokenExpressionString()
	 * while parsing string expression
	 *
	 * @param      tokenStr            the token string
	 * @param      keyWord             the keyword
	 */
	API_VISIBLE void Expression::addToken(const StringPtr &tokenStr, const KeyWordPtr &keyWord, bool parenthesisIsOnTheRight) {
		TokenPtr token = new_Token();
		token->tokenStr = tokenStr;
		token->keyWord = keyWord->wordString;
		token->tokenTypeId = keyWord->wordTypeId;
		token->tokenId = keyWord->wordId;
		if (token->tokenTypeId != Token::NOT_MATCHED)
			initialTokensAdd(token);
		if (token->tokenTypeId == Argument::TYPE_ID) {
			token->tokenValue = argumentsList->getRef(token->tokenId)->argumentValue;
		} else if (token->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) {
			token->tokenValue = Double::parseDouble(token->tokenStr);
			token->keyWord = ParserSymbol::NUMBER_STR;
		} else if (token->tokenTypeId == Token::NOT_MATCHED) {
			bool alternativeMatchFound = checkArgumentNameInCalculusOperator(token);
			if (!alternativeMatchFound) alternativeMatchFound = checkSpecialConstantName(token);
			if (!alternativeMatchFound) alternativeMatchFound = checkOtherNumberBases(token);
			if (!alternativeMatchFound) alternativeMatchFound = checkFraction(token);
			if (impliedMultiplicationMode && !alternativeMatchFound)
				alternativeMatchFound = checkNumberNameManyImpliedMultiplication(token, parenthesisIsOnTheRight);
			if (!alternativeMatchFound) initialTokensAdd(token);
		}
	}

	API_VISIBLE void Expression::addToken(const StringPtr &tokenStr, const KeyWordPtr &keyWord) {
		addToken(tokenStr, keyWord, false);
	}

	API_VISIBLE void Expression::addUserDefinedKeyWords() {
		if (parserKeyWordsOnly)
			return;
		ExpressionUtils::addArgumentsKeyWords(argumentsList, keyWordsList);
		ExpressionUtils::addFunctionsKeyWords(functionsList, keyWordsList);
		ExpressionUtils::addConstantsKeyWords(constantsList, keyWordsList);
	}

	/**
	 * Tokenizing expression string
	 */
	API_VISIBLE void Expression::tokenizeExpressionString() {
		impliedMultiplicationError = false;
		/*
		 * Add parser and argument keywords
		 */
		initParserKeyWords();
		std::sort(keyWordsList->begin(), keyWordsList->end(), DescKwLenComparator());
		/*
		 * Evaluate position after sorting for the following keywords types
		 *    number
		 *    plus operator
		 *    minus operator
		 *
		 * Above-mentioned information is required
		 * when distinguishing between numbers (regexp) and operators
		 *
		 * For example
		 *
		 * 1-2 : two numbers and one operator, but -2 is also a valid number
		 * (-2)+3 : two number and one operator
		 */
		int numberKwId = ConstantValue::NaN;
		int plusKwId = ConstantValue::NaN;
		int minusKwId = ConstantValue::NaN;
		for (int kwId = 0; kwId < keyWordsList->size(); kwId++) {
			if (keyWordsList->getRef(kwId)->wordTypeId == ParserSymbol::NUMBER_TYPE_ID) numberKwId = kwId;
			if (keyWordsList->getRef(kwId)->wordTypeId == Operator::TYPE_ID) {
				if (keyWordsList->getRef(kwId)->wordId == Operator::PLUS_ID) plusKwId = kwId;
				if (keyWordsList->getRef(kwId)->wordId == Operator::MINUS_ID) minusKwId = kwId;
			}
		}
		initialTokens = new_List<TokenPtr>();
		neverParseForImpliedMultiplication = new_PtrsSet<String>();
		int expLen = CAST_INT(expressionString->length());
		if (expLen == 0) return;
		/*
		 * Clearing expression string from spaces
		 */
		if (syntaxStatus == SYNTAX_ERROR || syntaxStatus == SYNTAX_STATUS_UNKNOWN) cleanExpressionString();
		StringPtr newExpressionString = expressionStringCleaned;
		/*
		 * words list and tokens list
		 */
		if (newExpressionString->empty()) return;
		int lastPos = 0; /* position of the keyword previously added*/
		int pos = 0; /* current position */
		StringPtr tokenStr = StringInvariant::EMPTY;
		bool matchFoundPrev = false; /* unknown keyword (previous) */
		bool matchFound = false; /* unknown keyword (current) */
		KeyWordPtr kw = nullptr;
		StringPtr sub = StringInvariant::EMPTY;
		StringPtr kwStr = StringInvariant::EMPTY;
		Char precedingChar;
		Char followingChar;
		Char firstChar;
		Char c;
		bool specialConstFound = false;
		StringPtr specialConstStr = StringInvariant::EMPTY;
		/*
		 * Check all available positions in the expression tokens list
		 */
		do {
			/*
			 * 1st step
			 *
			 * compare with the regExp for real numbers
			 * find the longest word which could be matched
			 * with the given regExp
			 */
			int numEnd = -1;
			/*
			 * Number has to start with digit or dot
			 */
			firstChar = newExpressionString->at(pos);
			if (firstChar == UTF('+') ||
			    firstChar == UTF('-') ||
			    firstChar == UTF('.') ||
			    StringUtils::is0To9Digit(firstChar)) {
				for (int i = pos; i < newExpressionString->length(); i++) {
					/*
					 * Escaping if encountering char that can not
					 * be included in number
					 */
					if (i > pos) {
						c = newExpressionString->at(i);
						if (c != UTF('+') &&
						    c != UTF('-') &&
						    !StringUtils::is0To9Digit(c) &&
						    c != UTF('.') &&
						    c != UTF('e') &&
						    c != UTF('E'))
							break;
					}
					/*
					 * Checking if substring represents number
					 */
					StringPtr str = S(newExpressionString->substr(pos, i + 1 - pos));
					if (StringUtils::regexMatch(str, ParserSymbol::DECIMAL_REG_EXP)) numEnd = i;
				}
			}
			/*
			 * If number was found
			 */
			if (numEnd >= 0)
				if (pos > 0) {
					precedingChar = newExpressionString->at(pos - 1);
					if (!StringUtils::canBeSeparatingChar(precedingChar)) numEnd = -1;
				}
			if (numEnd >= 0)
				if (numEnd < newExpressionString->length() - 1) {
					followingChar = newExpressionString->at(numEnd + 1);
					if (!StringUtils::canBeSeparatingChar(followingChar)) numEnd = -1;
				}
			if (numEnd >= 0) {
				/*
				 * If preceding word was unknown
				 *
				 * For example:
				 *    'abc-2'
				 *
				 *   number starts with '-', preceding word 'abc'
				 *   is not known by the parser
				 */
				if (!matchFoundPrev && pos > 0) {
					/*
					 * add preceding word to the list of tokens
					 * as unknown keyword word
					 */
					tokenStr = S(newExpressionString->substr(lastPos, pos - lastPos));
					addToken(tokenStr, new_KeyWord(), StringUtils::charIsLeftParenthesis(newExpressionString, pos));
				}
				/*
				 * Check leading operators ('-' or '+')
				 *
				 * For example:
				 *    '2-1' :  1(num) -(op) 2(num) = 1(num)
				 *    -1+2  : -1(num) +(op) 2(num) = 1(num)
				 */
				firstChar = newExpressionString->at(pos);
				bool leadingOp = true;
				if (firstChar == UTF('-') || firstChar == UTF('+')) {
					if (initialTokens->size() > 0) {
						const TokenPtr& lastToken = initialTokens->getRef(initialTokens->size() - 1);
						if ((lastToken->tokenTypeId == Operator::TYPE_ID && lastToken->tokenId != Operator::FACT_ID &&
						     lastToken->tokenId != Operator::PERC_ID) ||
						    lastToken->tokenTypeId == BinaryRelation::TYPE_ID ||
						    lastToken->tokenTypeId == BooleanOperator::TYPE_ID ||
						    lastToken->tokenTypeId == BitwiseOperator::TYPE_ID ||
						    (lastToken->tokenTypeId == ParserSymbol::TYPE_ID && lastToken->tokenId ==
						     ParserSymbol::LEFT_PARENTHESES_ID))
							leadingOp = false;
						else leadingOp = true;
					} else leadingOp = false;
				} else leadingOp = false;
				/*
				 * If leading operator was found
				 */
				if (leadingOp) {
					/*
					 * Add leading operator to the tokens list
					 */
					if (firstChar == UTF('-')) addToken(S(UTF("-")), keyWordsList->getRef(minusKwId));
					if (firstChar == UTF('+')) addToken(S(UTF("+")), keyWordsList->getRef(plusKwId));
					pos++;
				}
				/*
				 * Add found number to the tokens list
				 */
				tokenStr = S(newExpressionString->substr(pos, numEnd + 1 - pos));
				addToken(tokenStr, keyWordsList->getRef(numberKwId));
				/*
				 * change current position (just after the number ends)
				 */
				pos = numEnd + 1;
				lastPos = pos;
				/*
				 * Mark match status indicators
				 */
				matchFound = true;
				matchFoundPrev = true;
			} else {
				/*
				 * If there is no number which starts with current position
				 * Check for known keywords
				 */
				int kwId = -1;
				matchFound = false;
				firstChar = newExpressionString->at(pos);
				do {
					kwId++;
					kw = keyWordsList->getRef(kwId);
					kwStr = kw->wordString;
					if (pos + kwStr->length() <= newExpressionString->length()) {
						sub = S(newExpressionString->substr(pos, kwStr->length()));
						if (*sub == *kwStr)
							matchFound = true;
						/*
						 * If keyword is known by the parser
						 * and keyword is not a special keyword of the form [...]
						 */
						if (matchFound && firstChar != UTF('[')) {
							/*
							 * If keyword is in the form of identifier
							 * then check preceding and following characters
							 */
							if (kw->wordTypeId == Argument::TYPE_ID ||
							    kw->wordTypeId == RecursiveArgument::TYPE_ID_RECURSIVE ||
							    kw->wordTypeId == Function1Arg::TYPE_ID ||
							    kw->wordTypeId == Function2Arg::TYPE_ID ||
							    kw->wordTypeId == Function3Arg::TYPE_ID ||
							    kw->wordTypeId == FunctionVariadic::TYPE_ID ||
							    kw->wordTypeId == ConstantValue::TYPE_ID ||
							    kw->wordTypeId == Constant::TYPE_ID ||
							    kw->wordTypeId == RandomVariable::TYPE_ID ||
							    kw->wordTypeId == Unit::TYPE_ID ||
							    kw->wordTypeId == Function::TYPE_ID ||
							    kw->wordTypeId == CalculusOperator::TYPE_ID) {
								/*
								 * Checking preceding character
								 */
								if (pos > 0) {
									precedingChar = newExpressionString->at(pos - 1);
									if (!StringUtils::canBeSeparatingChar(precedingChar)) matchFound = false;
								}
								/*
								 * Checking following character
								 */
								if (matchFound && pos + kwStr->length() < newExpressionString->length()) {
									followingChar = newExpressionString->at(pos + kwStr->length());
									if (!StringUtils::canBeSeparatingChar(followingChar)) matchFound = false;
								}
							}
						}
					}
				} while (kwId < keyWordsList->size() - 1 && !matchFound);

				/*
				 * If keyword was unknown to the parser
				 * but it might be a special constant keyword in the for [...]
				 */
				specialConstFound = false;
				if (!matchFound) {
					if (firstChar == UTF('[')) {
						for (int i = pos + 1; i < newExpressionString->length(); i++) {
							/*
							 * Escaping if encountering char ']'
							 */
							c = newExpressionString->at(i);
							if (c == UTF(']')) {
								specialConstFound = true;
								specialConstStr = S(newExpressionString->substr(pos, i + 1 - pos));
								break;
							}
						}
					}
				}

				/*
				 * If keyword known by the parser was found
				 */
				if (matchFound || specialConstFound) {
					/*
					 * if preceding word was not known by the parser
					 */
					if (!matchFoundPrev && pos > 0) {
						/*
						 * Add preceding word to the tokens list
						 * as unknown keyword
						 */
						tokenStr = S(newExpressionString->substr(lastPos, pos - lastPos));
						addToken(tokenStr, new_KeyWord(), StringUtils::charIsLeftParenthesis(newExpressionString, pos));
					}
					matchFoundPrev = true;
					/*
					 * Add current (known by the parser or special constant)
					 * keyword to the tokens list
					 */
					if (matchFound) {
						tokenStr = S(newExpressionString->substr(pos, kwStr->length()));
						if (!(kw->wordTypeId == ParserSymbol::TYPE_ID && kw->wordId == ParserSymbol::BLANK_ID)) {
							addToken(tokenStr, kw);
						}
					} else {
						tokenStr = specialConstStr;
						addToken(tokenStr, new_KeyWord());
					}
					/*
					 * Remember position where last added word ends + 1
					 */
					lastPos = pos + CAST_INT(tokenStr->length());
					/*
					 * Change current position;
					 */
					pos = pos + CAST_INT(tokenStr->length());
				} else {
					/*
					 * Update preceding word indicator
					 */
					matchFoundPrev = false;
					/*
					 * Increment position if possible
					 */
					if (pos < newExpressionString->length())
						pos++;
				}
			}
			/*
			 * while there is still something to analyse
			 */
		} while (pos < newExpressionString->length());
		/*
		 * If keyword was not known by the parser
		 * and end with the string end
		 * it needs to be added to the tokens list
		 * as unknown keyword
		 */
		if (!matchFound) {
			tokenStr = S(newExpressionString->substr(lastPos, pos - lastPos));
			addToken(tokenStr, new_KeyWord(), StringUtils::charIsLeftParenthesis(newExpressionString, pos));
		}
		/*
		 * Evaluate tokens levels
		 *
		 * token level identifies the sequence of parsing
		 */
		ExpressionUtils::evaluateTokensLevels(initialTokens);
	}


	/**
	 * copy initial tokens list to tokens list and prepares initial compilation details
	 */
	API_VISIBLE void Expression::copyInitialTokens() {
		bool prepareInitialTokensListInfo = false;
		if (initialCompilationDetails == nullptr) {
			initialCompilationDetails = new_CompilationDetails();
			initialCompilationDetails->compiledElements = new_List<CompiledElementPtr>();
			prepareInitialTokensListInfo = true;
		}

		if (prepareInitialTokensListInfo) {
			tokensList = new_List<TokenPtr>();
			for (const TokenPtr &token : *initialTokens) {
				tokensList->add(Token::cloneFast(token));
				if (token->tokenTypeId == CalculusOperator::TYPE_ID)
					initialCompilationDetails->containsCalculus = true;
				else if (token->tokenTypeId == Function3Arg::TYPE_ID && token->tokenId == Function3Arg::IF_CONDITION_ID)
					initialCompilationDetails->containsIf = true;
				else if (token->tokenTypeId == FunctionVariadic::TYPE_ID && token->tokenId == FunctionVariadic::IFF_ID)
					initialCompilationDetails->containsIf = true;
			}
		} else {
			tokensList = std::make_shared<List<TokenPtr>>();
			for (const TokenPtr &token : *initialTokens) {
				tokensList->add(std::make_shared<Token>(token));
			}
		}

		if (compilationDetails == nullptr)
			compilationDetails = new_CompilationDetails();

		compilationDetails->containsCalculus = initialCompilationDetails->containsCalculus;
		compilationDetails->containsIf = initialCompilationDetails->containsIf;
		compilationDetails->compiledElements = initialCompilationDetails->compiledElements;
	}

	/**
	 * Tokenizes expression string and returns tokens list,
	 * including: string, type, level.
	 *
	 * @return Copy of initial tokens.
	 *
	 * @see Token
	 * @see mXparser#consolePrintTokens(List)
	 */
	API_VISIBLE ListPtr<TokenPtr> Expression::getCopyOfInitialTokens() {
		tokenizeExpressionString();
		return ExpressionUtils::getCopyOfInitialTokens(expressionString, initialTokens);
	}

	/**
	 * Prints to the console copy of initial tokens. Presents how
	 * expression string is interpreted by the parser.
	 *
	 * @see #getCopyOfInitialTokens()
	 */
	API_VISIBLE void Expression::consolePrintCopyOfInitialTokens() {
		mXparser::consolePrintTokens(getCopyOfInitialTokens());
	}

	/**
	 * Returns missing user defined arguments names, i.e.
	 * sin(x) + cos(y) where x and y are not defined
	 * function will return x and y.
	 *
	 * @return Array of missing user defined arguments names
	 * - distinct strings.
	 */
	API_VISIBLE ArrayPtr<StringPtr> Expression::getMissingUserDefinedArguments() {
		return ExpressionUtils::getMissingUserDefinedArguments(getCopyOfInitialTokens());
	}

	/**
	 * Returns missing user defined units names, i.e.
	 * 2*[w] + [q] where [w] and [q] are not defined
	 * function will return [w] and [q].
	 *
	 * @return Array of missing user defined units names
	 * - distinct strings.
	 */
	API_VISIBLE ArrayPtr<StringPtr> Expression::getMissingUserDefinedUnits() {
		return ExpressionUtils::getMissingUserDefinedUnits(getCopyOfInitialTokens());
	}

	/**
	 * Returns missing user defined functions names, i.e.
	 * sin(x) + fun(x,y) where fun is not defined
	 * function will return fun.
	 *
	 * @return Array of missing user defined functions names
	 * - distinct strings.
	 */
	API_VISIBLE ArrayPtr<StringPtr> Expression::getMissingUserDefinedFunctions() {
		return ExpressionUtils::getMissingUserDefinedFunctions(getCopyOfInitialTokens());
	}

	/**
	 * Gets initial tokens and returns copied list
	 *
	 * @see Function
	 */
	API_VISIBLE ListPtr<TokenPtr> Expression::getInitialTokens() {
		return initialTokens;
	}

	/**
	 * Shows parsing (verbose mode purposes).
	 *
	 */
	API_VISIBLE void Expression::showParsing(int lPos, int rPos) const {
		ExpressionUtils::showParsing(lPos, rPos, tokensList);
	}

	/**
	 * shows known keywords
	 */
	API_VISIBLE void Expression::showKeyWords() const {
		ExpressionUtils::showKeyWords(keyWordsList);
	}

	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help.
	 */
	API_VISIBLE StringPtr Expression::getHelp() {
		return getHelp(StringInvariant::EMPTY);
	}

	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help.
	 */
	API_VISIBLE StringPtr Expression::getHelp(const StringPtr &query) {
		initParserKeyWords();
		return ExpressionUtils::getHelp(query, keyWordsList);
	}

	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, any string other than ""
	 * will replace the standard caption with the one specified by the user.
	 *
	 * @return One string value containing all the help.
	 */
	API_VISIBLE StringPtr Expression::getHelp(bool addHeader, bool addCaption, const StringPtr &caption) {
		initParserKeyWords();
		return ExpressionUtils::getHelp(StringInvariant::EMPTY, keyWordsList, addHeader, addCaption, caption);
	}

	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, any string other than ""
	 *
	 * @return One string value containing all the help.
	 */
	API_VISIBLE StringPtr Expression::getHelp(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption) {
		initParserKeyWords();
		return ExpressionUtils::getHelp(query, keyWordsList, addHeader, addCaption, caption);
	}

	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsCsv() {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsCsv(keyWordsList, StringInvariant::QUOTE, StringInvariant::SEMICOLON, true,
		                                     StringInvariant::EMPTY);
	}

	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsCsv(const StringPtr &query) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsCsv(keyWordsList, StringInvariant::QUOTE, StringInvariant::SEMICOLON, true,
		                                     query);
	}

	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param quote Text qualifier.
	 * @param delimiter Delimiter.
	 * @param addHeader Indicator whether to add a header.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsCsv(const StringPtr &quote, const StringPtr &delimiter, bool addHeader) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsCsv(keyWordsList, quote, delimiter, addHeader, StringInvariant::EMPTY);
	}

	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param quote Text qualifier.
	 * @param delimiter Delimiter.
	 * @param addHeader Indicator whether to add a header.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsCsv(const StringPtr &query, const StringPtr &quote, const StringPtr &delimiter,
	                                   bool addHeader) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsCsv(keyWordsList, quote, delimiter, addHeader, query);
	}

	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. StringPtr in HTML table format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsHtmlTable() {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsHtmlTable(keyWordsList, true, StringInvariant::EMPTY);
	}

	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help. StringPtr in HTML table format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsHtmlTable(const StringPtr &query) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsHtmlTable(keyWordsList, true, query);
	}

	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param addFigure Indicator whether to add a FIGURE tag.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 * @param cssClass If CSS class is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in HTML table format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption,
	                                         const StringPtr &cssClass) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsHtmlTable(keyWordsList, addHeader, addCaption, addFigure,
		                                           StringInvariant::EMPTY, caption, cssClass);
	}

	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param addFigure Indicator whether to add a FIGURE tag.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 * @param cssClass If CSS class is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in HTML table format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsHtmlTable(const StringPtr &query, bool addHeader, bool addCaption, bool addFigure,
	                                         const StringPtr &caption, const StringPtr &cssClass) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsHtmlTable(keyWordsList, addHeader, addCaption, addFigure, query, caption,
		                                           cssClass);
	}

	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. StringPtr in Markdown table format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsMarkdownTable() {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsMarkdownTable(keyWordsList, StringInvariant::EMPTY);
	}

	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.

	 * @return One string value containing all the help. StringPtr in Markdown table format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsMarkdownTable(const StringPtr &query) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsMarkdownTable(keyWordsList, query);
	}

	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in Markdown table format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsMarkdownTable(bool addHeader, bool addCaption, const StringPtr &caption) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsMarkdownTable(keyWordsList, addHeader, addCaption, StringInvariant::EMPTY,
		                                               caption);
	}

	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in Markdown table format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsMarkdownTable(const StringPtr &query, bool addHeader, bool addCaption,
	                                             const StringPtr &caption) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsMarkdownTable(keyWordsList, addHeader, addCaption, query, caption);
	}

	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. StringPtr in Json format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsJson() {
		return getHelpAsJson(StringInvariant::EMPTY);
	}

	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help. StringPtr in Json format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsJson(const StringPtr &query) {
		return getHelpAsJson(query, true, StringInvariant::EMPTY);
	}

	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in Json format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsJson(bool addCaption, const StringPtr &caption) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsJson(keyWordsList, addCaption, StringInvariant::EMPTY, caption);
	}

	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in Json format.
	 */
	API_VISIBLE StringPtr Expression::getHelpAsJson(const StringPtr &query, bool addCaption, const StringPtr &caption) {
		initParserKeyWords();
		return ExpressionUtils::getHelpAsJson(keyWordsList, addCaption, query, caption);
	}

	/**
	 * Returns list of keywords known to the parser
	 *
	 * @return      List of keywords known to the parser.
	 *
	 * @see KeyWord
	 * @see KeyWord#wordTypeId
	 * @see Expression#getHelp()
	 */
	API_VISIBLE ListPtr<KeyWordPtr> Expression::getKeyWords() {
		return getKeyWords(StringInvariant::EMPTY);
	}

	/**
	 * Returns list of keywords known to the parser. Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return      List of keywords known to the parser filter against query string.
	 *
	 * @see KeyWord
	 * @see KeyWord#wordTypeId
	 * @see Expression#getHelp(String)
	 */
	API_VISIBLE ListPtr<KeyWordPtr> Expression::getKeyWords(const StringPtr &query) {
		initParserKeyWords();
		return ExpressionUtils::getKeyWords(query, keyWordsList);
	}

	/*
	 * shows tokens
	 */
	API_VISIBLE void Expression::showTokens() const {
		showTokens(tokensList);
	}

	/*
	 * show tokens
	 */
	API_VISIBLE void Expression::showTokens(const ListPtr<TokenPtr> &tokensList) {
		ExpressionUtils::showTokens(tokensList);
	}

	/**
	 * shows initial tokens
	 */
	API_VISIBLE void Expression::showInitialTokens() const {
		showTokens(initialTokens);
	}

	/*
	 * show arguments
	 */
	API_VISIBLE void Expression::showArguments() const {
		for (const ArgumentPtr &a : *argumentsList) {
			bool vMode = a->getVerboseMode();
			a->setSilentMode();
			printSystemInfo(
				a->getArgumentName() + StringInvariant::SPACE_EQUAL_SPACE + StringUtils::toString(a->getArgumentValue())
				+ StringInvariant::NEW_LINE, WITH_EXP_STR);
			if (vMode)
				a->setVerboseMode();
		}
	}

	/**
	 *
	 * @param info
	 * @param withExpressionString
	 */
	API_VISIBLE void Expression::printSystemInfo(const StringPtr &info, bool withExpressionString) const {
		if (withExpressionString)
			mXparser::consolePrint(
				StringUtils::surroundSquareBrackets(description) + StringUtils::surroundSquareBracketsAddSpace(
					expressionString) + info);
		else
			mXparser::consolePrint(info);
	}

	/**
	 * Expression cloning.
	 */
	//@Override
	API_VISIBLE ExpressionPtr Expression::clone() {
		ExpressionPtr newExp = new_Expression(THIS(Expression), false, CloneCache::Null);
		if (initialTokens != nullptr && initialTokens->size() > 0) {
			newExp->initialTokens = createInitialTokens(0, initialTokens->size() - 1, initialTokens);
			newExp->initialCompilationDetails = initialCompilationDetails;
		}
		return newExp;
	}

	API_VISIBLE ExpressionPtr Expression::cloneForThreadSafeInternal(const CloneCachePtr &cloneCache) {
		const ExpressionPtr thisPtr = THIS(Expression);
		ExpressionPtr expressionClone = cloneCache->getExpressionClone(thisPtr);
		if (expressionClone == nullptr) {
			cloneCache->cacheCloneInProgress(thisPtr);
			expressionClone = new_Expression(thisPtr, true, cloneCache);
			if (initialTokens != nullptr && initialTokens->size() > 0) {
				expressionClone->initialTokens = createInitialTokens(0, initialTokens->size() - 1, initialTokens);
				expressionClone->initialCompilationDetails = initialCompilationDetails;
			}
			cloneCache->clearCloneInProgress(thisPtr);
			cloneCache->cacheExpressionClone(thisPtr, expressionClone);
		}
		return expressionClone;
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
	API_VISIBLE ExpressionPtr Expression::cloneForThreadSafe() {
		CloneCachePtr cloneCache = new_CloneCache();
		ExpressionPtr expressionClone = cloneForThreadSafeInternal(cloneCache);
		cloneCache->addAllAtTheEndElements();
		cloneCache->clearCache();
		return expressionClone;
	}

} // org::mariuszgromada::math::mxparser
