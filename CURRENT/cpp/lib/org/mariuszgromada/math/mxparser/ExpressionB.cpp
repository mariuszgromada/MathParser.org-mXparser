/*
 * @(#)ExpressionB.cpp        6.1.0    2024-10-06
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
#include "org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Token.hpp"
#include "org/mariuszgromada/math/mxparser/RecursiveArgument.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Math.hpp"

namespace org::mariuszgromada::math::mxparser {
	using namespace org::mariuszgromada::math::mxparser::expressionutils;
	using namespace org::mariuszgromada::math::mxparser::wrapper;
	using namespace org::mariuszgromada::math::mxparser::mathcollection;
	using namespace org::mariuszgromada::math::mxparser::stringutils;
	using namespace org::mariuszgromada::math::mxparser::miscellaneous;


	/*=================================================
	 *
	 * Math implementations
	 *
	 *=================================================
	 */
	/**
	 * Free Arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::FREE_ARGUMENT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::FREE_ARGUMENT, pos);
		const ArgumentPtr& argument = argumentsList->getRef(tokensList->getRef(pos)->tokenId);
		bool argumentVerboseMode = argument->getVerboseMode();
		if (verboseMode)
			argument->setVerboseMode();
		setToNumber(pos, argument->getArgumentValue());
		if (!argumentVerboseMode)
			argument->setSilentMode();
	}

	/**
	 * Dependent Arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::DEPENDENT_ARGUMENT(int pos, const CalcStepsRegisterPtr &calcStepsRegister) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::DEPENDENT_ARGUMENT, pos);
		const ArgumentPtr& argument = argumentsList->getRef(tokensList->getRef(pos)->tokenId);
		bool argumentVerboseMode = argument->getVerboseMode();
		if (verboseMode)
			argument->setVerboseMode();
		/*
		 * Handling possible recursive calls that can change
		 * the structure of the tokens list, i.e.
		 *
		 * Argument x = new_Argument("x = 2*y");
		 * Argument y = new_Argument("y = 2*x");
		 * x->addDefinitions(y);
		 * y->addDefinitions(x);
		 * x->getArgumentValue();
		 */
		int tokensListSizeBefore = tokensList->size();
		const TokenPtr& tokenBefore = tokensList->getRef(pos);
		double argumentValue = argument->getArgumentValue(calcStepsRegister);
		if (forwardErrorMessage && THIS(Expression) != argument->argumentExpression) {
			errorMessageCalculate = StringUtils::stringConcatenateMaxLength(
				errorMessageCalculate, argument->argumentExpression->errorMessageCalculate,
				ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH);
			errorMessage = StringUtils::stringConcatenateMaxLength(errorMessage,
			                                                       argument->argumentExpression->errorMessageCalculate,
			                                                       mXparser::ERROR_MESSAGE_MAXIMUM_LENGTH);
		}
		int tokensListSizeAfter = tokensList->size();
		if (tokensListSizeBefore == tokensListSizeAfter) {
			const TokenPtr& tokenAfter = tokensList->getRef(pos);
			if ((tokenBefore->tokenTypeId == tokenAfter->tokenTypeId) && (
				    tokenBefore->tokenId == tokenAfter->tokenId)) {
				setToNumber(pos, argumentValue);
			}
		}
		if (!argumentVerboseMode)
			argument->setSilentMode();
	}

	/**
	 * User functions handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::USER_FUNCTION(int pos, const CalcStepsRegisterPtr &calcStepsRegister) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::USER_FUNCTION, pos);
		FunctionPtr function;
		const FunctionPtr& fun = functionsList->getRef(tokensList->getRef(pos)->tokenId);
		if (fun->getRecursiveMode()) {
			function = fun->clone();
			function->functionExpression->recursionCallsCounter = recursionCallsCounter;
		} else {
			function = fun;
		}
		function->functionExpression->UDFVariadicParamsAtRunTime = getNumbers(pos);
		int argsNumber = function->getParametersNumber();
		if (!function->isVariadic)
			for (int argIdx = 0; argIdx < argsNumber; argIdx++)
				function->setArgumentValue(argIdx, tokensList->getRef(pos + argIdx + 1)->tokenValue);
		bool functionVerboseMode = function->getVerboseMode();
		if (verboseMode)
			function->setVerboseMode();
		/*
		 * Handling possible recursive calls that can change
		 * the structure of the tokens list, i.e.
		 *
		 * Function f = new_Function("f(x) = 2*g(x)");
		 * Function g = new_Function("g(x) = 2*f(x)");
		 * f->addDefinitions(g);
		 * g->addDefinitions(f);
		 */
		int tokensListSizeBefore = tokensList->size();
		const TokenPtr& tokenBefore = tokensList->getRef(pos);
		double value;
		try {
			value = function->calculate(calcStepsRegister);
		} catch (const std::overflow_error &soe) {
			value = Double::NaN;
			errorMessage = StringUtils::trimNotNull(S(soe.what()));
		} catch (const std::exception &e) {
			value = Double::NaN;
			errorMessage = StringUtils::trimNotNull(S(e.what()));
		}
		if (forwardErrorMessage && THIS(Expression) != function->functionExpression) {
			errorMessageCalculate = StringUtils::stringConcatenateMaxLength(
				errorMessageCalculate, function->functionExpression->errorMessageCalculate,
				ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH);
			errorMessage = StringUtils::stringConcatenateMaxLength(errorMessage,
			                                                       function->functionExpression->errorMessageCalculate,
			                                                       mXparser::ERROR_MESSAGE_MAXIMUM_LENGTH);
		}
		int tokensListSizeAfter = tokensList->size();
		if (tokensListSizeBefore == tokensListSizeAfter) {
			const TokenPtr& tokenAfter = tokensList->getRef(pos);
			if ((tokenBefore->tokenTypeId == tokenAfter->tokenTypeId) && (
				    tokenBefore->tokenId == tokenAfter->tokenId)) {
				setToNumber(pos, value);
				tokensList->getRef(pos)->tokenLevel--;
				for (int argIdx = argsNumber; argIdx > 0; argIdx--)
					tokensList->remove(pos + argIdx);
			}
		}
		if (!functionVerboseMode)
			function->setSilentMode();
	}

	/**
	 * User constants handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::USER_CONSTANT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::USER_CONSTANT, pos);
		const ConstantPtr& constant = constantsList->getRef(tokensList->getRef(pos)->tokenId);
		setToNumber(pos, constant->getConstantValue());
	}

	/**
	 * Recursive arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::RECURSIVE_ARGUMENT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::RECURSIVE_ARGUMENT, pos);
		double index = tokensList->getRef(pos + 1)->tokenValue;
		RecursiveArgumentPtr argument = PtrCast<RecursiveArgument, Argument>(argumentsList->getRef(tokensList->getRef(pos)->tokenId));
		bool argumentVerboseMode = argument->getVerboseMode();
		if (verboseMode)
			argument->setVerboseMode();
		double result = argument->getArgumentValue(index);
		if (forwardErrorMessage && THIS(Expression) != argument->argumentExpression) {
			errorMessageCalculate = StringUtils::stringConcatenateMaxLength(
				errorMessageCalculate, argument->argumentExpression->errorMessageCalculate,
				ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH);
			errorMessage = StringUtils::stringConcatenateMaxLength(errorMessage,
			                                                       argument->argumentExpression->errorMessageCalculate,
			                                                       mXparser::ERROR_MESSAGE_MAXIMUM_LENGTH);
		}
		f1SetDecreaseRemove(pos, result);
		if (!argumentVerboseMode)
			argument->setSilentMode();
	}

	/**
	 * Constants handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CONSTANT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::CONSTANT, pos);
		double constValue = Double::NaN;
		int constantValueId = tokensList->getRef(pos)->tokenId;
		if (constantValueId == ConstantValue::NPAR_ID)
			constValue = UDFVariadicParamsAtRunTime->size();
		else
			constValue = MathConstants::getConstantValue(constantValueId);
		setToNumber(pos, constValue);
	}

	/**
	 * Constants handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::UNIT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::UNIT, pos);
		setToNumber(pos, Units::getUnitValue(tokensList->getRef(pos)->tokenId));
	}

	/**
	 * Random Variables handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::RANDOM_VARIABLE(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::RANDOM_VARIABLE, pos);
		setToNumber(pos, ProbabilityDistributions::getRandomVariableValue(tokensList->getRef(pos)->tokenId));
	}

	/**
	 * Gets token value
	 * @param      tokenIndex          the token index
	 *
	 * @return     the token value
	 */
	API_VISIBLE double Expression::getTokenValue(int tokenIndex) {
		return tokensList->getRef(tokenIndex)->tokenValue;
	}

	/**
	 * Tetration handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::TETRATION(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::TETRATION, pos);
		double a = getTokenValue(pos - 1);
		double n = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, MathFunctions::tetration(a, n), true);
	}

	/**
	 * Power handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::POWER(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::POWER, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, MathFunctions::power(a, b), true);
	}

	/**
	 * Modulo handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MODULO(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::MODULO, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, MathFunctions::mod(a, b));
	}

	/**
	 * Division handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::DIVIDE(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::DIVIDE, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		if (disableRounding) {
			double result = Double::NaN;
			if (b != 0) result = a / b;
			opSetDecreaseRemove(pos, result, true);
		} else opSetDecreaseRemove(pos, MathFunctions::div(a, b), true);
	}

	/**
	 * Integer division handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::DIVIDE_QUOTIENT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::DIVIDE_QUOTIENT, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, MathFunctions::divQuotient(a, b), true);
	}

	/**
	 * Multiplication handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MULTIPLY(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::MULTIPLY, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		if (disableRounding) opSetDecreaseRemove(pos, a * b, true);
		else opSetDecreaseRemove(pos, MathFunctions::multiply(a, b), true);
	}

	/**
	 * Addition handling.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::PLUS(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::PLUS, pos);
		const TokenPtr& b = tokensList->getRef(pos + 1);

		if (pos == 0) {
			if (b->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) {
				setToNumber(pos, b->tokenValue);
				tokensList->remove(pos + 1);
			}
			return;
		}

		const TokenPtr& a = tokensList->getRef(pos - 1);
		if (a->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID && b->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID)
			if (disableRounding) opSetDecreaseRemove(pos, a->tokenValue + b->tokenValue, true);
			else opSetDecreaseRemove(pos, MathFunctions::plus(a->tokenValue, b->tokenValue), true);
		else if (b->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) {
			setToNumber(pos, b->tokenValue);
			tokensList->remove(pos + 1);
		}
	}

	/**
	 * Subtraction handling
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MINUS(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::MINUS, pos);
		const TokenPtr& b = tokensList->getRef(pos + 1);

		if (pos == 0) {
			if (b->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) {
				setToNumber(pos, -b->tokenValue);
				tokensList->remove(pos + 1);
			}
			return;
		}

		const TokenPtr& a = tokensList->getRef(pos - 1);
		if (a->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID && b->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID)
			if (disableRounding) opSetDecreaseRemove(pos, a->tokenValue - b->tokenValue, true);
			else opSetDecreaseRemove(pos, MathFunctions::minus(a->tokenValue, b->tokenValue), true);
		else if (b->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID) {
			setToNumber(pos, -b->tokenValue);
			tokensList->remove(pos + 1);
		}
	}

	/**
	 * Logical AND
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::AND(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::and_(a, b));
	}

	/**
	 * Logical OR
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::OR(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::or_(a, b));
	}

	/**
	 * Logical NAND
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NAND(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::nand(a, b));
	}

	/**
	 * Logical NOR
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NOR(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::nor(a, b));
	}

	/**
	 * Logical XOR
	 *
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::XOR(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::xor_(a, b));
	}

	/**
	 * Logical IMP
	 *
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::IMP(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::imp(a, b));
	}

	/**
	 * Logical CIMP
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CIMP(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::cimp(a, b));
	}

	/**
	 * Logical NIMP
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NIMP(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::nimp(a, b));
	}

	/**
	 * Logical CNIMP
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CNIMP(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::cnimp(a, b));
	}

	/**
	 * Logical EQV
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::EQV(int pos) {
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BooleanAlgebra::eqv(a, b));
	}

	/**
	 * Logical negation
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NEG(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::NEG, pos);
		double a = getTokenValue(pos + 1);
		setToNumber(pos, BooleanAlgebra::not_(a));
		tokensList->remove(pos + 1);
	}

	/**
	 * Equality relation.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::EQ(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::EQ, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BinaryRelations::eq(a, b));
	}

	/**
	 * Not equals.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NEQ(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::NEQ, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BinaryRelations::neq(a, b));
	}

	/**
	 * Lower than.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::LT, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BinaryRelations::lt(a, b));
	}

	/**
	 * Greater than.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::GT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::GT, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BinaryRelations::gt(a, b));
	}

	/**
	 * Lower or equal.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LEQ(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::LEQ, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BinaryRelations::leq(a, b));
	}

	/**
	 * Greater or equal
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::GEQ(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::GEQ, pos);
		double a = getTokenValue(pos - 1);
		double b = getTokenValue(pos + 1);
		opSetDecreaseRemove(pos, BinaryRelations::geq(a, b));
	}

	/**
	 * Square root as unary left operator
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SQUARE_ROOT_OPERATOR(int pos) {
		double a = getTokenValue(pos + 1);
		setToNumber(pos, MathFunctions::sqrt(a));
		tokensList->remove(pos + 1);
	}

	/**
	 * Cube root as unary left operator
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CUBE_ROOT_OPERATOR(int pos) {
		double a = getTokenValue(pos + 1);
		setToNumber(pos, MathFunctions::root(3, a));
		tokensList->remove(pos + 1);
	}

	/**
	 * Fourth root as unary left operator
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::FOURTH_ROOT_OPERATOR(int pos) {
		double a = getTokenValue(pos + 1);
		setToNumber(pos, MathFunctions::root(4, a));
		tokensList->remove(pos + 1);
	}

	/**
	 * Bitwise COMPL
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_COMPL(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::BITWISE_COMPL, pos);
		Long a = CAST_LONG(getTokenValue(pos + 1));
		setToNumber(pos, CAST_DOUBLE(~a));
		tokensList->remove(pos + 1);
	}

	/**
	 * Bitwise AND
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_AND(int pos) {
		Long a = CAST_LONG(getTokenValue(pos - 1));
		Long b = CAST_LONG(getTokenValue(pos + 1));
		opSetDecreaseRemove(pos, CAST_DOUBLE(a & b));
	}

	/**
	 * Bitwise OR
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_OR(int pos) {
		Long a = CAST_LONG(getTokenValue(pos - 1));
		Long b = CAST_LONG(getTokenValue(pos + 1));
		opSetDecreaseRemove(pos, CAST_DOUBLE(a | b));
	}

	/**
	 * Bitwise XOR
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_XOR(int pos) {
		Long a = CAST_LONG(getTokenValue(pos - 1));
		Long b = CAST_LONG(getTokenValue(pos + 1));
		opSetDecreaseRemove(pos, CAST_DOUBLE(a ^ b));
	}

	/**
	 * Bitwise NAND
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_NAND(int pos) {
		Long a = CAST_LONG(getTokenValue(pos - 1));
		Long b = CAST_LONG(getTokenValue(pos + 1));
		opSetDecreaseRemove(pos, CAST_DOUBLE(~(a & b)));
	}

	/**
	 * Bitwise NOR
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_NOR(int pos) {
		Long a = CAST_LONG(getTokenValue(pos - 1));
		Long b = CAST_LONG(getTokenValue(pos + 1));
		opSetDecreaseRemove(pos, CAST_DOUBLE(~(a | b)));
	}

	/**
	 * Bitwise NOR
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_XNOR(int pos) {
		Long a = CAST_LONG(getTokenValue(pos - 1));
		Long b = CAST_LONG(getTokenValue(pos + 1));
		opSetDecreaseRemove(pos, CAST_DOUBLE(~(a ^ b)));
	}

	/**
	 * Bitwise LEFT SHIFT
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_LEFT_SHIFT(int pos) {
		Long a = CAST_LONG(getTokenValue(pos - 1));
		Long b = CAST_LONG(getTokenValue(pos + 1));
		opSetDecreaseRemove(pos, CAST_DOUBLE(a << b));
	}

	/**
	 * Bitwise RIGHT SHIFT
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BITWISE_RIGHT_SHIFT(int pos) {
		Long a = CAST_LONG(getTokenValue(pos - 1));
		Long b = CAST_LONG(getTokenValue(pos + 1));
		opSetDecreaseRemove(pos, CAST_DOUBLE(a >> b));
	}

	/**
	 * Sine function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SIN(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::sin(a));
	}

	/**
	 * Cosine / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::COS(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::cos(a));
	}

	/**
	 * Tangent / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::TAN(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::tan(a));
	}

	/**
	 * Cotangent / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CTAN(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::ctan(a));
	}

	/**
	 * Secant / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SEC(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::sec(a));
	}

	/**
	 * Cosecant / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::COSEC(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::cosec(a));
	}

	/**
	 * Arcus sine / Inverse trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ASIN(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::asin(a));
	}

	/**
	 * Arcus cosine / Inverse trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ACOS(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::acos(a));
	}

	/**
	 * Arcus tangent / Inverse trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ATAN(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::atan(a));
	}

	/**
	 * Arcus cotangent / Inverse trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ACTAN(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::actan(a));
	}

	/**
	 * Natural logarithm (base e)
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LN(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::ln(a));
	}

	/**
	 * Logarithm - base 2
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LOG2(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::log2(a));
	}

	/**
	 * Logarithm - base 10
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LOG10(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::log10(a));
	}

	/**
	 * Converts degrees to radius
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::RAD(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::rad(a));
	}

	/**
	 * Exponential function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::EXP(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::exp(a));
	}

	/**
	 * Square root
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SQRT(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::sqrt(a));
	}

	/**
	 * Hyperbolic sine
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SINH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::sinh(a));
	}

	/**
	 * Hyperbolic cosine
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::COSH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::cosh(a));
	}

	/**
	 * Hyperbolic tangent
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::TANH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::tanh(a));
	}

	/**
	 * Hyperbolic cotangent
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::COTH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::coth(a));
	}

	/**
	 * Hyperbolic secant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SECH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::sech(a));
	}

	/**
	 * Hyperbolic cosecant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CSCH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::csch(a));
	}

	/**
	 * Converts radians to degrees
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::DEG(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::deg(a));
	}

	/**
	 * Absolut value
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ABS(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::abs(a));
	}

	/**
	 * Signum function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SGN(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::sgn(a));
	}

	/**
	 * Floor function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::FLOOR(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::floor(a));
	}

	/**
	 * Ceil function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CEIL(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::ceil(a));
	}

	/**
	 * Arcus hyperbolic sine
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARSINH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::arsinh(a));
	}

	/**
	 * Arcus hyperbolic cosine
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARCOSH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::arcosh(a));
	}

	/**
	 * Arcus hyperbolic tangent
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARTANH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::artanh(a));
	}

	/**
	 * Arcus hyperbolic cotangent
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARCOTH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::arcoth(a));
	}

	/**
	 * Arcus hyperbolic secant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARSECH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::arsech(a));
	}

	/**
	 * Arcus hyperbolic cosecant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARCSCH(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::arcsch(a));
	}

	/**
	 * SA / sinc normalized
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SA(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::sa(a));
	}

	/**
	 * Sinc unnormalized
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SINC(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::sinc(a));
	}

	/**
	 * Bell numbers
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BELL_NUMBER(int pos) {
		double n = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::bellNumber(n));
	}

	/**
	 * Lucas numbers
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LUCAS_NUMBER(int pos) {
		double n = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::lucasNumber(n));
	}

	/**
	 * Fibonacci numbers
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::FIBONACCI_NUMBER(int pos) {
		double n = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::fibonacciNumber(n));
	}

	/**
	 * Harmonic numbers
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::HARMONIC_NUMBER(int pos) {
		double n = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::harmonicNumber(n));
	}

	/**
	 * Prime test
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::IS_PRIME(int pos) {
		double n = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, NumberTheory::primeTest(n));
	}

	/**
	 * Prime counting
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::PRIME_COUNT(int pos) {
		double n = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, NumberTheory::primeCount(n));
	}

	/**
	 * Exponential integral function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::EXP_INT(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::exponentialIntegralEi(x));
	}

	/**
	 * Logarithmic exponential integral function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LOG_INT(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::logarithmicIntegralLi(x));
	}

	/**
	 * Offset logarithmic exponential integral function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::OFF_LOG_INT(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::offsetLogarithmicIntegralLi(x));
	}

	/**
	 * Factorilal function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::FACT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::FACT, pos);
		double a = getTokenValue(pos - 1);
		setToNumber(pos, MathFunctions::factorial(a));
		tokensList->remove(pos - 1);
	}

	/**
	 * Percentage
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::PERC(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::PERC, pos);
		double a = getTokenValue(pos - 1);
		setToNumber(pos, MathFunctions::multiply(a, Units::PERC));
		tokensList->remove(pos - 1);
	}

	/**
	 * Negation
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NOT(int pos) {
		double a = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, BooleanAlgebra::not_(a));
	}

	/**
	 * Gauss error function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::GAUSS_ERF(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::erf(x));
	}

	/**
	 * Gauss complementary error function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::GAUSS_ERFC(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::erfc(x));
	}

	/**
	 * Inverse of Gauss error function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::GAUSS_ERF_INV(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::erfInv(x));
	}

	/**
	 * Inverse of Gauss complementary error function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::GAUSS_ERFC_INV(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::erfcInv(x));
	}

	/**
	 * Unit in The Last Place
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ULP(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::ulp(x));
	}

	/**
	 * Is Not-a-Number
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ISNAN(int pos) {
		double x = getTokenValue(pos + 1);
		if (Double::isNaN(x))
			f1SetDecreaseRemove(pos, BooleanAlgebra::TRUE);
		else
			f1SetDecreaseRemove(pos, BooleanAlgebra::FALSE);
	}

	/**
	 * Number of digits in base 10
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NDIG10(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, NumberTheory::numberOfDigits(x));
	}

	/**
	 * Number of prime factors - distinct
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NFACT(int pos) {
		double n = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, NumberTheory::numberOfPrimeFactors(n));
	}

	/**
	 * Arcuus secant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARCSEC(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::asec(x));
	}

	/**
	 * Arcuus cosecant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARCCSC(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, MathFunctions::acosec(x));
	}

	/**
	 * Gamma special function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::GAMMA(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::gamma(x));
	}

	/**
	 * Lambert-W special function, principal branch 0
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LAMBERT_W0(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::lambertW(x, 0));
	}

	/**
	 * Lambert-W special function, branch = -1
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LAMBERT_W1(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::lambertW(x, -1));
	}

	/**
	 * Signum of Gamma special function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SGN_GAMMA(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::sgnGamma(x));
	}

	/**
	 * Log Gamma special function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LOG_GAMMA(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::logGamma(x));
	}

	/**
	 * Digamma special function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::DI_GAMMA(int pos) {
		double x = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, SpecialFunctions::diGamma(x));
	}

	/**
	 * User Defined Variadic function param value
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::UDF_PARAM(int pos) {
		double value = Double::NaN;
		if (UDFVariadicParamsAtRunTime != nullptr) {
			double x = getTokenValue(pos + 1);
			int npar = UDFVariadicParamsAtRunTime->size();
			if (!Double::isNaN(x) && x != Double::POSITIVE_INFINITY && x != Double::NEGATIVE_INFINITY) {
				int i = CAST_INT(MathFunctions::integerPart(x));
				if (i == 0) {
					value = npar;
				} else if (Math::abs(i) <= npar) {
					if (i >= 1) {
						value = UDFVariadicParamsAtRunTime->get(i - 1);
					} else if (i <= -1) {
						value = UDFVariadicParamsAtRunTime->get(npar + i);
					}
				}
			}
		}
		f1SetDecreaseRemove(pos, value);
	}

	API_VISIBLE void Expression::RND_STUDENT_T(int pos) {
		double v = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, ProbabilityDistributions::rndStudentT(v));
	}

	API_VISIBLE void Expression::RND_CHI2(int pos) {
		double k = getTokenValue(pos + 1);
		f1SetDecreaseRemove(pos, ProbabilityDistributions::rndChiSquared(k));
	}

	/**
	 * Logarithm
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LOG(int pos) {
		double b = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::log(a, b));
	}

	/**
	 * Creates ArraListPtr<double> containing function parameters
	 *
	 * @param      pos                 the function position
	 *
	 * @return     List of function parameters.
	 */
	ListPtr<double> Expression::getNumbers(int pos) {
		ListPtr<double> numbers = new_List<double>();
		int pn = pos;
		int lastIndex = tokensList->size() - 1;
		bool isNumber;
		bool end = false;
		do {
			pn++;
			const TokenPtr& t = tokensList->getRef(pn);
			isNumber = false;
			if (t->tokenTypeId == ParserSymbol::NUMBER_TYPE_ID && t->tokenId == ParserSymbol::NUMBER_ID) {
				isNumber = true;
				numbers->add(t->tokenValue);
			}
			if (pn == lastIndex || !isNumber)
				end = true;
		} while (!end);
		return numbers;
	}

	/**
	 * Modulo
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MOD(int pos) {
		double a = getTokenValue(pos + 1);
		double b = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::mod(a, b));
	}

	/**
	 * Binomial Coefficient
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BINOM_COEFF(int pos) {
		double n = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::binomCoeff(n, k));
	}

	/**
	 * Number of permutations
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::PERMUTATIONS(int pos) {
		double n = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::numberOfPermutations(n, k));
	}

	/**
	 * Beta special function
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BETA(int pos) {
		double x = getTokenValue(pos + 1);
		double y = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, SpecialFunctions::beta(x, y));
	}

	/**
	 * Log beta special function
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LOG_BETA(int pos) {
		double x = getTokenValue(pos + 1);
		double y = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, SpecialFunctions::logBeta(x, y));
	}

	API_VISIBLE void Expression::PDF_STUDENT_T(int pos) {
		double x = getTokenValue(pos + 1);
		double v = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions::pdfStudentT(x, v));
	}

	API_VISIBLE void Expression::CDF_STUDENT_T(int pos) {
		double x = getTokenValue(pos + 1);
		double v = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions::cdfStudentT(x, v));
	}

	API_VISIBLE void Expression::QNT_STUDENT_T(int pos) {
		double p = getTokenValue(pos + 1);
		double v = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions::qntStudentT(p, v));
	}

	API_VISIBLE void Expression::PDF_CHI2(int pos) {
		double x = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions::pdfChiSquared(x, k));
	}

	API_VISIBLE void Expression::CDF_CHI2(int pos) {
		double x = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions::cdfChiSquared(x, k));
	}

	API_VISIBLE void Expression::QNT_CHI2(int pos) {
		double p = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions::qntChiSquared(p, k));
	}

	/**
	 * Bernoulli Number
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BERNOULLI_NUMBER(int pos) {
		double m = getTokenValue(pos + 1);
		double n = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::bernoulliNumber(m, n));
	}

	/**
	 * Stirling number of the first kind
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::STIRLING1_NUMBER(int pos) {
		double n = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::Stirling1Number(n, k));
	}

	/**
	 * Stirling number of the second kind.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::STIRLING2_NUMBER(int pos) {
		double n = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::Stirling2Number(n, k));
	}

	/**
	 * Worpitzky number.
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::WORPITZKY_NUMBER(int pos) {
		double n = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::worpitzkyNumber(n, k));
	}

	/**
	 * Euler number
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::EULER_NUMBER(int pos) {
		double n = getTokenValue(pos + 1);
		double k = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::eulerNumber(n, k));
	}

	/**
	 * Kronecker delta
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::KRONECKER_DELTA(int pos) {
		double i = getTokenValue(pos + 1);
		double j = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::kroneckerDelta(i, j));
	}

	/**
	 * Euler polynomial
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::EULER_POLYNOMIAL(int pos) {
		double m = getTokenValue(pos + 1);
		double x = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::eulerPolynomial(m, x));
	}

	/**
	 * Harmonic numbers
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::HARMONIC2_NUMBER(int pos) {
		double x = getTokenValue(pos + 1);
		double n = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::harmonicNumber(x, n));
	}

	/**
	 * Decimal rounding
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ROUND(int pos) {
		double value = getTokenValue(pos + 1);
		int places = CAST_INT(getTokenValue(pos + 2));
		f2SetDecreaseRemove(pos, MathFunctions::round(value, places));
	}

	/**
	 * Random number - Uniform Continuous distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::RND_VAR_UNIFORM_CONT(int pos) {
		double a = getTokenValue(pos + 1);
		double b = getTokenValue(pos + 2);
		f2SetDecreaseRemove(
			pos, ProbabilityDistributions::rndUniformContinuous(a, b, ProbabilityDistributions::randomGenerator));
	}

	/**
	 * Random number - Uniform Discrete distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::RND_VAR_UNIFORM_DISCR(int pos) {
		double a = getTokenValue(pos + 1);
		double b = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions::rndInteger(a, b, ProbabilityDistributions::randomGenerator));
	}

	/**
	 * Random number - Normal distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::RND_NORMAL(int pos) {
		double mean = getTokenValue(pos + 1);
		double stddev = getTokenValue(pos + 2);
		f2SetDecreaseRemove(
			pos, ProbabilityDistributions::rndNormal(mean, stddev, ProbabilityDistributions::randomGenerator));
	}

	/**
	 * Random number - Snedecor's F distribution (F-distribution or F-ratio, also known as Fisher–Snedecor distribution)
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::RND_F_SNEDECOR(int pos) {
		double d1 = getTokenValue(pos + 1);
		double d2 = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions::rndSnedecordF(d1, d2));
	}

	/**
	 * Number of digits in given numeral system
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NDIG(int pos) {
		double number = getTokenValue(pos + 1);
		double numeralSystemBase = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, NumberTheory::numberOfDigits(number, numeralSystemBase));
	}

	/**
	 * Digit at position - base 10 numeral system
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::DIGIT10(int pos) {
		double number = getTokenValue(pos + 1);
		double position = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, NumberTheory::digitAtPosition(number, position));
	}

	/**
	 * Prime factor value
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::FACTVAL(int pos) {
		double number = getTokenValue(pos + 1);
		double id = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, NumberTheory::primeFactorValue(number, id));
	}

	/**
	 * Prime factor value exponent
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::FACTEXP(int pos) {
		double number = getTokenValue(pos + 1);
		double id = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, NumberTheory::primeFactorExponent(number, id));
	}

	/**
	 * Nth order root
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ROOT(int pos) {
		double n = getTokenValue(pos + 1);
		double x = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, MathFunctions::root(n, x));
	}

	/**
	 * Lower incomplete special Gamma function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::INC_GAMMA_LOWER(int pos) {
		double s = getTokenValue(pos + 1);
		double x = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, SpecialFunctions::incompleteGammaLower(s, x));
	}

	/**
	 * Upper incomplete special Gamma function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::INC_GAMMA_UPPER(int pos) {
		double s = getTokenValue(pos + 1);
		double x = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, SpecialFunctions::incompleteGammaUpper(s, x));
	}

	/**
	 * Lower regularized special Gamma function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::REG_GAMMA_LOWER(int pos) {
		double s = getTokenValue(pos + 1);
		double x = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, SpecialFunctions::regularizedGammaLowerP(s, x));
	}

	/**
	 * Lower regularized special Gamma function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::REG_GAMMA_UPPER(int pos) {
		double s = getTokenValue(pos + 1);
		double x = getTokenValue(pos + 2);
		f2SetDecreaseRemove(pos, SpecialFunctions::regularizedGammaUpperQ(s, x));
	}

	/**
	 * IF function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::IF_CONDITION(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::IF_CONDITION, pos);
		/*
		 * Get condition string
		 * 1st parameter
		 * The goal is to aAPI_VISIBLE void Expression::calculation
		 * of not needed part of IF function
		 * Example: If(1=1, 2, sin(3) ) - here sin(3) does not
		 * require to be calculated.
		 */
		ListPtr<FunctionParameterPtr> ifParams = ExpressionUtils::getFunctionParameters(pos, tokensList);
		const FunctionParameterPtr& ifParam = ifParams->getRef(0);
		ExpressionPtr ifExp = new_Expression(ifParam->paramStr, ifParam->tokens, argumentsList, functionsList,
		                                     constantsList, KEEP_ROUNDING_SETTINGS, UDFExpression,
		                                     UDFVariadicParamsAtRunTime);
		if (verboseMode)
			ifExp->setVerboseMode();
		ifSetRemove(pos, ifExp->calculate());
	}

	/**
	 * IFF function
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::IFF(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::IFF, pos);
		/*
		 * Get condition string
		 * 1st parameter
		 */
		ListPtr<FunctionParameterPtr> iffParams = ExpressionUtils::getFunctionParameters(pos, tokensList);
		FunctionParameterPtr iffParam = iffParams->getRef(0);
		int parametersNumber = iffParams->size();
		int trueParamNumber;
		int paramNumber;
		paramNumber = 1;
		ExpressionPtr iffExp;
		double iffValue = 0;
		bool iffCon = true;
		do {
			iffExp = new_Expression(iffParam->paramStr, iffParam->tokens, argumentsList, functionsList, constantsList,
			                        KEEP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
			if (verboseMode)
				iffExp->setVerboseMode();
			iffCon = true;
			iffValue = iffExp->calculate();
			if (iffValue == 0 || Double::isNaN(iffValue)) {
				paramNumber += 2;
				iffCon = false;
				if (paramNumber < parametersNumber)
					iffParam = iffParams->getRef(paramNumber - 1);
			}
		} while ((!iffCon) && (paramNumber < parametersNumber));
		int from;
		int to;
		int p;
		if (iffCon) {
			trueParamNumber = paramNumber + 1;
			from = pos + 1;
			to = iffParams->getRef(parametersNumber - 1)->toIndex + 1;
			tokensList->getRef(from)->tokenLevel--;
			tokensList->getRef(to)->tokenLevel--;
			if (trueParamNumber < parametersNumber) {
				to = iffParams->getRef(parametersNumber - 1)->toIndex;
				from = iffParams->getRef(trueParamNumber)->fromIndex - 1;
				for (p = to; p >= from; p--)
					tokensList->remove(p);
			}
			from = iffParams->getRef(trueParamNumber - 1)->fromIndex;
			to = iffParams->getRef(trueParamNumber - 1)->toIndex;
			for (p = from; p <= to; p++)
				tokensList->getRef(p)->tokenLevel--;
			to = from - 1;
			from = pos;
			for (p = to; p >= from; p--)
				if (p != pos + 1)
					tokensList->remove(p);
		} else {
			to = iffParams->getRef(parametersNumber - 1)->toIndex + 1;
			from = pos + 1;
			for (p = to; p >= from; p--)
				tokensList->remove(p);
			setToNumber(pos, Double::NaN);
			tokensList->getRef(pos)->tokenLevel--;
		}
	}

	/**
	 * IF
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	API_VISIBLE void Expression::IF(int pos) {
		double ifCondition = tokensList->getRef(pos + 1)->tokenValue;
		double ifTrue = tokensList->getRef(pos + 2)->tokenValue;
		double ifFalse = tokensList->getRef(pos + 3)->tokenValue;
		double result = ifFalse;
		if (ifCondition != 0)
			result = ifTrue;
		if (Double::isNaN(ifCondition))
			result = Double::NaN;
		f3SetDecreaseRemove(pos, result);
	}

	/**
	 * Characteristic function (a,b)
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CHI(int pos) {
		double x = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, MathFunctions::chi(x, a, b));
	}

	/**
	 * Characteristic function [a,b]
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CHI_LR(int pos) {
		double x = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, MathFunctions::chi_LR(x, a, b));
	}

	/**
	 * Characteristic function [a,b)
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CHI_L(int pos) {
		double x = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, MathFunctions::chi_L(x, a, b));
	}

	/**
	 * Characteristic function (a,b]
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CHI_R(int pos) {
		double x = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, MathFunctions::chi_R(x, a, b));
	}

	/**
	 * Probability Distribution Function - Uniform Continuous distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::PDF_UNIFORM_CONT(int pos) {
		double x = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::pdfUniformContinuous(x, a, b));
	}

	/**
	 * Cumulative Distribution Function - Uniform Continuous distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CDF_UNIFORM_CONT(int pos) {
		double x = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::cdfUniformContinuous(x, a, b));
	}

	/**
	 * Quantile Function - Uniform Continuous distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::QNT_UNIFORM_CONT(int pos) {
		double q = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::qntUniformContinuous(q, a, b));
	}

	/**
	 * Probability Distribution Function - Normal distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::PDF_NORMAL(int pos) {
		double x = getTokenValue(pos + 1);
		double mean = getTokenValue(pos + 2);
		double stddev = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::pdfNormal(x, mean, stddev));
	}

	/**
	 * Cumulative Distribution Function - Normal distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CDF_NORMAL(int pos) {
		double x = getTokenValue(pos + 1);
		double mean = getTokenValue(pos + 2);
		double stddev = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::cdfNormal(x, mean, stddev));
	}

	/**
	 * Quantile Function - Normal distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::QNT_NORMAL(int pos) {
		double q = getTokenValue(pos + 1);
		double mean = getTokenValue(pos + 2);
		double stddev = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::qntNormal(q, mean, stddev));
	}

	/**
	 * Probability Distribution Function - Snedecor's F distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::PDF_F_SNEDECOR(int pos) {
		double x = getTokenValue(pos + 1);
		double d1 = getTokenValue(pos + 2);
		double d2 = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::pdfSnedecordF(x, d1, d2));
	}

	/**
	 * Cumulative Distribution Function - Snedecor's F distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CDF_F_SNEDECOR(int pos) {
		double x = getTokenValue(pos + 1);
		double d1 = getTokenValue(pos + 2);
		double d2 = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::cdfSnedecordF(x, d1, d2));
	}

	/**
	 * Quantile Function - Snedecor's F distribution
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::QNT_F_SNEDECOR(int pos) {
		double p = getTokenValue(pos + 1);
		double d1 = getTokenValue(pos + 2);
		double d2 = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions::qntSnedecordF(p, d1, d2));
	}

	const API_VISIBLE double Expression::PP = Math::round(MathConstants::PI * 1e8);
	const API_VISIBLE double Expression::EE = Math::round(MathConstants::E * 1e8);
	const API_VISIBLE double Expression::GG = Math::round(MathConstants::GOLDEN_RATIO * 1e8);
	/**
	 * Digit at position - numeral system with given base
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::DIGIT(int pos) {
		double number = getTokenValue(pos + 1);
		double position = getTokenValue(pos + 2);
		double numeralSystemBase = getTokenValue(pos + 3);
		double value;
		if (number == PP && position == EE && numeralSystemBase == GG) {
			value = 1 + License::getUseType() * 10 + mXparser::VERSION_PATCH * 100 + mXparser::VERSION_MINOR * 10000 +
			        mXparser::VERSION_MAJOR * 1000000;
		} else
			value = NumberTheory::digitAtPosition(number, position, numeralSystemBase);
		f3SetDecreaseRemove(pos, value);
	}

	/**
	 * Incomplete beta special function
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::INC_BETA(int pos) {
		double x = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, SpecialFunctions::incompleteBeta(a, b, x));
	}

	/**
	 * Regularized incomplete beta special function
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::REG_BETA(int pos) {
		double x = getTokenValue(pos + 1);
		double a = getTokenValue(pos + 2);
		double b = getTokenValue(pos + 3);
		f3SetDecreaseRemove(pos, SpecialFunctions::regularizedBeta(a, b, x));
	}

	/**
	 * Updating missing tokens (i.e. indexes i sum operator). Used when creating
	 * internal expressions based on the sublist of tokens.
	 *
	 *
	 * @param      tokens              the tokens list
	 * @param      keyWord             missing keyword
	 * @param      tokenId             missing token id
	 * @param      tokenTypeId         missing token type id
	 */
	API_VISIBLE void Expression::updateMissingTokens(const ListPtr<TokenPtr> &tokens, const StringPtr &keyWord, int tokenId,
	                                     int tokenTypeId) {
		for (const TokenPtr& t : *tokens)
			if ((t->tokenTypeId == ConstantValue::NaN) && (*t->tokenStr == *keyWord)) {
				t->keyWord = keyWord;
				t->tokenId = tokenId;
				t->tokenTypeId = tokenTypeId;
			}
	}

	/**
	 * Update missing tokens in expression related
	 * to iterative operators.
	 *
	 * @param index      Index parameter of the iterative operator
	 * @param iterParams     Parameters list of the iterative operator
	 */
	API_VISIBLE void Expression::updateMissingTokens(const ArgumentParameterPtr &index,
	                                     const IterativeOperatorParametersPtr &iterParams) {
		if (index->presence == Argument::NOT_FOUND) {
			updateMissingTokens(iterParams->indexParam->tokens, iterParams->indexParam->paramStr, index->index,
			                    Argument::TYPE_ID);
			updateMissingTokens(iterParams->fromParam->tokens, iterParams->indexParam->paramStr, index->index,
			                    Argument::TYPE_ID);
			updateMissingTokens(iterParams->toParam->tokens, iterParams->indexParam->paramStr, index->index,
			                    Argument::TYPE_ID);
			updateMissingTokens(iterParams->funParam->tokens, iterParams->indexParam->paramStr, index->index,
			                    Argument::TYPE_ID);
		}
	}

	/**
	 * Evaluates ranges 'from', 'to', 'delta' for the iterative operator
	 *
	 * @param index      Index parameter of the iterative operator
	 * @param iterParams     Parameters list of the iterative operator
	 */
	API_VISIBLE void Expression::evalFromToDeltaParameters(const ArgumentParameterPtr &index,
	                                           const IterativeOperatorParametersPtr &iterParams) {
		/*
		 * Create from, to, fun expression
		 * based on the from string
		 *    expressions will use the same arguments list
		 *    as used in the main expression (this->argumentsList)
		 */
		iterParams->fromExp = new_Expression(iterParams->fromParam->paramStr, iterParams->fromParam->tokens,
		                                     argumentsList, functionsList, constantsList, KEEP_ROUNDING_SETTINGS,
		                                     UDFExpression, UDFVariadicParamsAtRunTime);
		iterParams->toExp = new_Expression(iterParams->toParam->paramStr, iterParams->toParam->tokens, argumentsList,
		                                   functionsList, constantsList, KEEP_ROUNDING_SETTINGS, UDFExpression,
		                                   UDFVariadicParamsAtRunTime);
		iterParams->funExp = new_Expression(iterParams->funParam->paramStr, iterParams->funParam->tokens, argumentsList,
		                                    functionsList, constantsList, DISABLE_ROUNDING, UDFExpression,
		                                    UDFVariadicParamsAtRunTime);
		iterParams->deltaExp = nullptr;
		if (verboseMode) {
			iterParams->fromExp->setVerboseMode();
			iterParams->toExp->setVerboseMode();
			iterParams->funExp->setVerboseMode();
		}
		/*
		 * Evaluate range
		 */
		iterParams->from = iterParams->fromExp->calculate();
		iterParams->to = iterParams->toExp->calculate();
		iterParams->delta = 1.0;
		if (iterParams->to < iterParams->from) iterParams->delta = -1.0;
		if (iterParams->withDelta) {
			iterParams->deltaExp = new_Expression(iterParams->deltaParam->paramStr, iterParams->deltaParam->tokens,
			                                      argumentsList, functionsList, constantsList, DISABLE_ROUNDING,
			                                      UDFExpression, UDFVariadicParamsAtRunTime);
			if (index->presence == Argument::NOT_FOUND) {
				updateMissingTokens(iterParams->deltaParam->tokens, iterParams->indexParam->paramStr, index->index,
				                    Argument::TYPE_ID);
			}
			if (verboseMode)
				iterParams->deltaExp->setVerboseMode();
			iterParams->delta = iterParams->deltaExp->calculate();
		}
	}

	/**
	 * Summation operator (SIGMA by)
	 * sum(i,m,n,f(i),b) --> sum f(i) from i=m to i=n by delta
	 * i - index (argument)
	 * m, n - numbers or expressions
	 * f(i) - function string
	 * by delta
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SUM(int pos) {
		IterativeOperatorParametersPtr iterParams = new_IterativeOperatorParameters(
			ExpressionUtils::getFunctionParameters(pos, tokensList));
		ArgumentParameterPtr index = getParamArgument(iterParams->indexParam->paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double sigma = NumberTheory::sigmaSummation(iterParams->funExp, index->argument, iterParams->from,
		                                            iterParams->to, iterParams->delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, sigma, true);
	}

	/**
	 * Product operator (SIGMA by)
	 * pord(i,m,n,f(i),b) --> prod f(i) from i=m to i=n by delta
	 * i - index (argument)
	 * m, n - numbers or expressions
	 * f(i) - function string
	 * by delta
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::PROD(int pos) {
		IterativeOperatorParametersPtr iterParams = new_IterativeOperatorParameters(
			ExpressionUtils::getFunctionParameters(pos, tokensList));
		ArgumentParameterPtr index = getParamArgument(iterParams->indexParam->paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double product = NumberTheory::piProduct(iterParams->funExp, index->argument, iterParams->from, iterParams->to,
		                                         iterParams->delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, product, true);
	}

	/**
	 * Minimum value - iterative operator
	 * mini(i,m,n,f(i),b) --> min f(i) from i=m to i=n by delta
	 * i - index (argument)
	 * m, n - numbers or expressions
	 * f(i) - function string
	 * by delta
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MINIMUM(int pos) {
		IterativeOperatorParametersPtr iterParams = new_IterativeOperatorParameters(
			ExpressionUtils::getFunctionParameters(pos, tokensList));
		ArgumentParameterPtr index = getParamArgument(iterParams->indexParam->paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double min = NumberTheory::min(iterParams->funExp, index->argument, iterParams->from, iterParams->to,
		                               iterParams->delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, min);
	}

	/**
	 * Maximum value - iterative operator
	 * maxi(i,m,n,f(i),b) --> max f(i) from i=m to i=n by delta
	 * i - index (argument)
	 * m, n - numbers or expressions
	 * f(i) - function string
	 * by delta
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MAXIMUM(int pos) {
		IterativeOperatorParametersPtr iterParams = new_IterativeOperatorParameters(
			ExpressionUtils::getFunctionParameters(pos, tokensList));
		ArgumentParameterPtr index = getParamArgument(iterParams->indexParam->paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double max = NumberTheory::max(iterParams->funExp, index->argument, iterParams->from, iterParams->to,
		                               iterParams->delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, max);
	}

	/**
	 * Average function value - iterative operator
	 * avg(i,m,n,f(i),b) --> avg f(i) from i=m to i=n by delta
	 * i - index (argument)
	 * m, n - numbers or expressions
	 * f(i) - function string
	 * by delta
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::AVG(int pos) {
		IterativeOperatorParametersPtr iterParams = new_IterativeOperatorParameters(
			ExpressionUtils::getFunctionParameters(pos, tokensList));
		ArgumentParameterPtr index = getParamArgument(iterParams->indexParam->paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double avg = Statistics::avg(iterParams->funExp, index->argument, iterParams->from, iterParams->to,
		                             iterParams->delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, avg, true);
	}

	/**
	 * Variance from sample function values - iterative operator
	 * vari(i,m,n,f(i),b) --> var f(i) from i=m to i=n by delta
	 * i - index (argument)
	 * m, n - numbers or expressions
	 * f(i) - function string
	 * by delta
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::VAR(int pos) {
		IterativeOperatorParametersPtr iterParams = new_IterativeOperatorParameters(
			ExpressionUtils::getFunctionParameters(pos, tokensList));
		ArgumentParameterPtr index = getParamArgument(iterParams->indexParam->paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double var = Statistics::var(iterParams->funExp, index->argument, iterParams->from, iterParams->to,
		                             iterParams->delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, var, true);
	}

	/**
	 * Standard deviation from sample function values - iterative operator
	 * stdi(i,m,n,f(i),b) --> std f(i) from i=m to i=n by delta
	 * i - index (argument)
	 * m, n - numbers or expressions
	 * f(i) - function string
	 * by delta
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::STD(int pos) {
		IterativeOperatorParametersPtr iterParams = new_IterativeOperatorParameters(
			ExpressionUtils::getFunctionParameters(pos, tokensList));
		ArgumentParameterPtr index = getParamArgument(iterParams->indexParam->paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double std = Statistics::std(iterParams->funExp, index->argument, iterParams->from, iterParams->to,
		                             iterParams->delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, std, true);
	}

	/**
	 * Function derivative
	 *
	 * @param      pos                 the token position
	 * @param      derivativeType      the type of derivative (LEFT, RIGHT, ...)
	 */
	API_VISIBLE void Expression::DERIVATIVE(int pos, int derivativeType) {
		/*
		 * 2 params - der( f(x), x )
		 * 3 params - der( f(x), x, x0 )
		 * 4 params - der( f(x), x, eps, maxsteps )
		 * 5 params - der( f(x), x, x0, eps, maxsteps )
		 */
		ListPtr<FunctionParameterPtr> derParams = ExpressionUtils::getFunctionParameters(pos, tokensList);
		/*
		 * Default epsilon
		 */
		const double DEF_EPS = 1E-8;
		/*
		 * Default max number of steps
		 */
		const int DEF_MAX_STEPS = 20;
		/*
		 * Get internal function string
		 * 1st - parameter
		 */
		const FunctionParameterPtr& funParam = derParams->getRef(0);
		/*
		 * Get argument
		 * 2nd - parameter
		 */
		const FunctionParameterPtr& xParam = derParams->getRef(1);
		ArgumentParameterPtr x = getParamArgument(xParam->paramStr);
		if (x->presence == Argument::NOT_FOUND) {
			updateMissingTokens(xParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(funParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
		}
		ExpressionPtr funExp = new_Expression(funParam->paramStr, funParam->tokens, argumentsList, functionsList,
		                                      constantsList, DISABLE_ROUNDING, UDFExpression,
		                                      UDFVariadicParamsAtRunTime);
		double x0 = Double::NaN;
		/*
		 * der( f(x), x )
		 * der( f(x), x, eps, maxsteps )
		 */
		if (derParams->size() == 2 || derParams->size() == 4)
			x0 = x->argument->getArgumentValue();
		/*
		 * der( f(x), x, x0 )
		 * der( f(x), x, x0, eps, maxsteps )
		 */
		if (derParams->size() == 3 || derParams->size() == 5) {
			const FunctionParameterPtr& x0Param = derParams->getRef(2);
			if (x->presence == Argument::NOT_FOUND)
				updateMissingTokens(x0Param->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			ExpressionPtr x0Expr = new_Expression(x0Param->paramStr, x0Param->tokens, argumentsList, functionsList,
			                                      constantsList, DISABLE_ROUNDING, UDFExpression,
			                                      UDFVariadicParamsAtRunTime);
			x0 = x0Expr->calculate();
		}
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		/*
		 * der( f(x), x, eps, maxsteps )
		 * der( f(x), x, x0, eps, maxsteps )
		 */
		if (derParams->size() == 4 || derParams->size() == 5) {
			FunctionParameterPtr epsParam;
			FunctionParameterPtr maxStepsParam;
			if (derParams->size() == 4) {
				epsParam = derParams->getRef(2);
				maxStepsParam = derParams->getRef(3);
			} else {
				epsParam = derParams->getRef(3);
				maxStepsParam = derParams->getRef(4);
			}
			if (x->presence == Argument::NOT_FOUND) {
				updateMissingTokens(epsParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
				updateMissingTokens(maxStepsParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			}
			ExpressionPtr epsExpr = new_Expression(epsParam->paramStr, epsParam->tokens, argumentsList, functionsList,
			                                       constantsList, DISABLE_ROUNDING, UDFExpression,
			                                       UDFVariadicParamsAtRunTime);
			ExpressionPtr maxStepsExp = new_Expression(maxStepsParam->paramStr, maxStepsParam->tokens, argumentsList,
			                                           functionsList, constantsList, DISABLE_ROUNDING, UDFExpression,
			                                           UDFVariadicParamsAtRunTime);
			eps = epsExpr->calculate();
			maxSteps = CAST_INT(Math::round(maxStepsExp->calculate()));
		}
		if (derivativeType == Calculus::GENERAL_DERIVATIVE) {
			double general = Calculus::derivative(funExp, x->argument, x0, Calculus::GENERAL_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, general);
		} else if (derivativeType == Calculus::LEFT_DERIVATIVE) {
			double left = Calculus::derivative(funExp, x->argument, x0, Calculus::LEFT_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, left);
		} else {
			double right = Calculus::derivative(funExp, x->argument, x0, Calculus::RIGHT_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, right);
		}
		clearParamArgument(x);
	}

	/**
	 * Function derivative
	 *
	 * @param      pos                 the token position
	 * @param      derivativeType      the type of derivative (left, right, etc...)
	 */
	API_VISIBLE void Expression::DERIVATIVE_NTH(int pos, int derivativeType) {
		const double DEF_EPS = 1E-6;
		/*
		 * Default max number of steps
		 */
		const int DEF_MAX_STEPS = 20;
		ListPtr<FunctionParameterPtr> derParams = ExpressionUtils::getFunctionParameters(pos, tokensList);
		/*
		 * Get internal function string
		 * 1st - parameter
		 */
		const FunctionParameterPtr& funParam = derParams->getRef(0);
		/*
		 * Get n-th
		 * 2nd - parameter
		 */
		const FunctionParameterPtr& nParam = derParams->getRef(1);
		/*
		 * Get argument
		 * 3rd - parameter
		 */
		const FunctionParameterPtr& xParam = derParams->getRef(2);
		const ArgumentParameterPtr& x = getParamArgument(xParam->paramStr);
		if (x->presence == Argument::NOT_FOUND) {
			updateMissingTokens(xParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(funParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(nParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
		}
		ExpressionPtr funExp = new_Expression(funParam->paramStr, funParam->tokens, argumentsList, functionsList,
		                                      constantsList, DISABLE_ROUNDING, UDFExpression,
		                                      UDFVariadicParamsAtRunTime);
		ExpressionPtr nExp = new_Expression(nParam->paramStr, nParam->tokens, argumentsList, functionsList,
		                                    constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		double n = nExp->calculate();
		double x0 = x->argument->getArgumentValue();
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		if (derParams->size() == 5) {
			const FunctionParameterPtr& epsParam = derParams->getRef(3);
			const FunctionParameterPtr& maxStepsParam = derParams->getRef(4);
			if (x->presence == Argument::NOT_FOUND) {
				updateMissingTokens(epsParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
				updateMissingTokens(maxStepsParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			}
			ExpressionPtr epsExpr = new_Expression(epsParam->paramStr, epsParam->tokens, argumentsList, functionsList,
			                                       constantsList, DISABLE_ROUNDING, UDFExpression,
			                                       UDFVariadicParamsAtRunTime);
			ExpressionPtr maxStepsExp = new_Expression(maxStepsParam->paramStr, maxStepsParam->tokens, argumentsList,
			                                           functionsList, constantsList, DISABLE_ROUNDING, UDFExpression,
			                                           UDFVariadicParamsAtRunTime);
			eps = epsExpr->calculate();
			maxSteps = CAST_INT(Math::round(maxStepsExp->calculate()));
		}
		if (derivativeType == Calculus::GENERAL_DERIVATIVE) {
			double left = Calculus::derivativeNth(funExp, n, x->argument, x0, Calculus::LEFT_DERIVATIVE, eps, maxSteps);
			double right = Calculus::derivativeNth(funExp, n, x->argument, x0, Calculus::RIGHT_DERIVATIVE, eps,
			                                       maxSteps);
			calcSetDecreaseRemove(pos, (left + right) / 2.0);
		} else if (derivativeType == Calculus::LEFT_DERIVATIVE) {
			double left = Calculus::derivativeNth(funExp, n, x->argument, x0, Calculus::LEFT_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, left);
		} else {
			double right = Calculus::derivativeNth(funExp, n, x->argument, x0, Calculus::RIGHT_DERIVATIVE, eps,
			                                       maxSteps);
			calcSetDecreaseRemove(pos, right);
		}
		clearParamArgument(x);
	}

	/**
	 * Function integral
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::INTEGRAL(int pos) {
		/**
		 * Default epsilon
		 */
		const double DEF_EPS = 1E-6;
		/*
		 * Default max number of steps
		 */
		const int DEF_MAX_STEPS = 20;
		ListPtr<FunctionParameterPtr> intParams = ExpressionUtils::getFunctionParameters(pos, tokensList);
		/*
		 * Get internal function string
		 * 1st - parameter
		 */
		const FunctionParameterPtr& funParam = intParams->getRef(0);
		/*
		 * Get argument
		 * 2nd - parameter
		 */
		const FunctionParameterPtr& xParam = intParams->getRef(1);
		/*
		 * Get <a,b>
		 * 2nd - parameter
		 */
		const FunctionParameterPtr& aParam = intParams->getRef(2);
		const FunctionParameterPtr& bParam = intParams->getRef(3);
		const ArgumentParameterPtr& x = getParamArgument(xParam->paramStr);
		if (x->presence == Argument::NOT_FOUND) {
			updateMissingTokens(xParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(funParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(aParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(bParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
		}
		ExpressionPtr funExp = new_Expression(funParam->paramStr, funParam->tokens, argumentsList, functionsList,
		                                      constantsList, DISABLE_ROUNDING, UDFExpression,
		                                      UDFVariadicParamsAtRunTime);
		ExpressionPtr aExp = new_Expression(aParam->paramStr, aParam->tokens, argumentsList, functionsList,
		                                    constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		ExpressionPtr bExp = new_Expression(bParam->paramStr, bParam->tokens, argumentsList, functionsList,
		                                    constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		calcSetDecreaseRemove(
			pos, Calculus::integralTrapezoid(funExp, x->argument, aExp->calculate(), bExp->calculate(), eps, maxSteps));
		clearParamArgument(x);
	}

	/**
	 * Function SOLVE
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::SOLVE(int pos) {
		/**
		 * Default epsilon
		 */
		const double DEF_EPS = 1E-9;
		/*
		 * Default max number of steps
		 */
		const int DEF_MAX_STEPS = 100;
		ListPtr<FunctionParameterPtr> intParams = ExpressionUtils::getFunctionParameters(pos, tokensList);
		/*
		 * Get internal function string
		 * 1st - parameter
		 */
		const FunctionParameterPtr& funParam = intParams->getRef(0);
		/*
		 * Get argument
		 * 2nd - parameter
		 */
		const FunctionParameterPtr& xParam = intParams->getRef(1);
		/*
		 * Get <a,b>
		 * 2nd - parameter
		 */
		const FunctionParameterPtr& aParam = intParams->getRef(2);
		const FunctionParameterPtr& bParam = intParams->getRef(3);
		ArgumentParameterPtr x = getParamArgument(xParam->paramStr);
		if (x->presence == Argument::NOT_FOUND) {
			updateMissingTokens(xParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(funParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(aParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
			updateMissingTokens(bParam->tokens, xParam->paramStr, x->index, Argument::TYPE_ID);
		}
		ExpressionPtr funExp = new_Expression(funParam->paramStr, funParam->tokens, argumentsList, functionsList,
		                                      constantsList, DISABLE_ROUNDING, UDFExpression,
		                                      UDFVariadicParamsAtRunTime);
		ExpressionPtr aExp = new_Expression(aParam->paramStr, aParam->tokens, argumentsList, functionsList,
		                                    constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		ExpressionPtr bExp = new_Expression(bParam->paramStr, bParam->tokens, argumentsList, functionsList,
		                                    constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		calcSetDecreaseRemove(
			pos, Calculus::solveBrent(funExp, x->argument, aExp->calculate(), bExp->calculate(), eps, maxSteps));
		clearParamArgument(x);
	}

	/**
	 * Forward difference operator
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::FORWARD_DIFFERENCE(int pos) {
		ListPtr<FunctionParameterPtr> params = ExpressionUtils::getFunctionParameters(pos, tokensList);
		const FunctionParameterPtr& funParam = params->getRef(0);
		const FunctionParameterPtr& xParam = params->getRef(1);
		const ArgumentParameterPtr& x = getParamArgument(xParam->paramStr);
		ExpressionPtr funExp = new_Expression(funParam->paramStr, funParam->tokens, argumentsList, functionsList,
		                                      constantsList, DISABLE_ROUNDING, UDFExpression,
		                                      UDFVariadicParamsAtRunTime);
		if (verboseMode)
			funExp->setVerboseMode();
		double h = 1;
		if (params->size() == 3) {
			const FunctionParameterPtr& hParam = params->getRef(2);
			ExpressionPtr hExp = new_Expression(hParam->paramStr, hParam->tokens, argumentsList, functionsList,
			                                    constantsList, DISABLE_ROUNDING, UDFExpression,
			                                    UDFVariadicParamsAtRunTime);
			if (verboseMode)
				hExp->setVerboseMode();
			h = hExp->calculate();
		}
		calcSetDecreaseRemove(pos, Calculus::forwardDifference(funExp, h, x->argument));
		clearParamArgument(x);
	}

	/**
	 * Backward diffrence operator
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BACKWARD_DIFFERENCE(int pos) {
		ListPtr<FunctionParameterPtr> params = ExpressionUtils::getFunctionParameters(pos, tokensList);
		const FunctionParameterPtr& funParam = params->getRef(0);
		const FunctionParameterPtr& xParam = params->getRef(1);
		const ArgumentParameterPtr& x = getParamArgument(xParam->paramStr);
		ExpressionPtr funExp = new_Expression(funParam->paramStr, funParam->tokens, argumentsList, functionsList,
		                                      constantsList, DISABLE_ROUNDING, UDFExpression,
		                                      UDFVariadicParamsAtRunTime);
		if (verboseMode)
			funExp->setVerboseMode();
		double h = 1;
		if (params->size() == 3) {
			const FunctionParameterPtr& hParam = params->getRef(2);
			ExpressionPtr hExp = new_Expression(hParam->paramStr, hParam->tokens, argumentsList, functionsList,
			                                    constantsList, DISABLE_ROUNDING, UDFExpression,
			                                    UDFVariadicParamsAtRunTime);
			if (verboseMode)
				hExp->setVerboseMode();
			h = hExp->calculate();
		}
		calcSetDecreaseRemove(pos, Calculus::backwardDifference(funExp, h, x->argument));
		clearParamArgument(x);
	}

	/**
	 * Minimum variadic
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MIN_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::min(numbersArray), numbers->size());
	}

	/**
	 * Maximum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	API_VISIBLE void Expression::MAX_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::max(numbersArray), numbers->size());
	}

	/**
	 * Sum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	API_VISIBLE void Expression::SUM_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::sum(numbersArray), numbers->size(), true);
	}

	/**
	 * Sum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	API_VISIBLE void Expression::PROD_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::prod(numbersArray), numbers->size(), true);
	}

	/**
	 * Average variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	API_VISIBLE void Expression::AVG_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, Statistics::avg(numbersArray), numbers->size(), true);
	}

	/**
	 * Variance variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	API_VISIBLE void Expression::VAR_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, Statistics::var(numbersArray), numbers->size(), true);
	}

	/**
	 * Standard deviation variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	API_VISIBLE void Expression::STD_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, Statistics::std(numbersArray), numbers->size(), true);
	}

	/**
	 * Continued fraction
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CONTINUED_FRACTION(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, MathFunctions::continuedFraction(numbersArray), numbers->size());
	}

	/**
	 * Continued polynomial
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::CONTINUED_POLYNOMIAL(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, MathFunctions::continuedPolynomial(numbersArray), numbers->size());
	}

	/**
	 * Greates Common Divisor
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::GCD(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::gcd(numbersArray), numbers->size());
	}

	/**
	 * Lowest Common Multiply
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::LCM(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::lcm(numbersArray), numbers->size());
	}

	/**
	 * Random number from list
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::RND_LIST(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		int n = numbers->size();
		int i = ProbabilityDistributions::rndIndex(n, ProbabilityDistributions::randomGenerator);
		variadicSetDecreaseRemove(pos, numbers->get(i), numbers->size());
	}

	/**
	 * Coalesce
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::COALESCE(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, MathFunctions::coalesce(numbersArray), numbers->size());
	}

	/**
	 * OR_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::OR_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, BooleanAlgebra::orVariadic(numbersArray), numbers->size());
	}

	/**
	 * AND_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::AND_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, BooleanAlgebra::andVariadic(numbersArray), numbers->size());
	}

	/**
	 * XOR_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::XOR_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, BooleanAlgebra::xorVariadic(numbersArray), numbers->size());
	}

	/**
	 * ARGMIN_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARGMIN_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::argmin(numbersArray), numbers->size());
	}

	/**
	 * ARGMAX_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::ARGMAX_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::argmax(numbersArray), numbers->size());
	}

	/**
	 * MEDIAN_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MEDIAN_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, Statistics::median(numbersArray), numbers->size());
	}

	/**
	 * MODE_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::MODE_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, Statistics::mode(numbersArray), numbers->size());
	}

	/**
	 * BASE_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::BASE_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::convOthBase2Decimal(numbersArray), numbers->size());
	}

	/**
	 * NDIST_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	API_VISIBLE void Expression::NDIST_VARIADIC(int pos) {
		ListPtr<double> numbers = getNumbers(pos);
		const ArrayPtr<double> numbersArray = mXparser::arrayList2double(numbers);
		variadicSetDecreaseRemove(pos, NumberTheory::numberOfDistValues(numbersArray), numbers->size());
	}

	/**
	 * Parser symbols
	 * Removes comma
	 *
	 * @param pos token index (position)
	 */
	API_VISIBLE void Expression::COMMA(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::COMMA, pos);
		tokensList->remove(pos);
	}

	/**
	 * Parser symbols
	 * Removes parenthesis
	 *
	 * @param lPos    left token index (position)
	 * @param rPos    roght token index (position)
	 */
	API_VISIBLE void Expression::PARENTHESES(int lPos, int rPos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement::ToCall::PARENTHESES, lPos, rPos);
		for (int p = lPos; p <= rPos; p++)
			tokensList->getRef(p)->tokenLevel--;
		tokensList->remove(rPos);
		tokensList->remove(lPos);
	}
} // org::mariuszgromada::math::mxparser