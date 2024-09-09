/*
 * @(#)VariadicProcessor.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/PrimitiveElement.hpp"
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/RecursiveArgument.hpp"
#include "org/mariuszgromada/math/mxparser/Constant.hpp"
#include "org/mariuszgromada/math/mxparser/Function.hpp"

namespace org::mariuszgromada::math::mxparser::wrapper {

	API_VISIBLE ListPtr<PrimitiveElementPtr> VariadicProcessor::paramsPrimitiveElementEmpty = nullptr;
	API_VISIBLE ListPtr<StringPtr> VariadicProcessor::paramsStringEmpty = nullptr;
	API_VISIBLE ListPtr<double> VariadicProcessor::paramsDoubleEmpty = nullptr;
	API_VISIBLE ListPtr<ArgumentPtr> VariadicProcessor::paramsArgumentEmpty = nullptr;
	API_VISIBLE ListPtr<FunctionPtr> VariadicProcessor::paramsFunctionEmpty = nullptr;
	API_VISIBLE ListPtr<ConstantPtr> VariadicProcessor::paramsConstantEmpty = nullptr;
	API_VISIBLE ListPtr<ExpressionPtr> VariadicProcessor::paramsExpressionEmpty = nullptr;

	API_VISIBLE String VariadicProcessor::STRING;
	API_VISIBLE String VariadicProcessor::PRIMITIVE_ELEMENT;
	API_VISIBLE String VariadicProcessor::ARGUMENT;
	API_VISIBLE String VariadicProcessor::CONSTANT;
	API_VISIBLE String VariadicProcessor::FUNCTION;
	API_VISIBLE String VariadicProcessor::EXPRESSION;
	API_VISIBLE String VariadicProcessor::NUMERIC;
	API_VISIBLE String VariadicProcessor::NL;

	STATIC_VARS_INITI_CPP(VariadicProcessor,
		paramsPrimitiveElementEmpty = new_List<PrimitiveElementPtr>();
		paramsStringEmpty = new_List<StringPtr>();
		paramsDoubleEmpty = new_List<double>();
		paramsArgumentEmpty = new_List<ArgumentPtr>();
		paramsFunctionEmpty = new_List<FunctionPtr>();
		paramsConstantEmpty = new_List<ConstantPtr>();
		paramsExpressionEmpty = new_List<ExpressionPtr>();

		STRING = UTF("> StringPtr, String, String*, std::string, std::string*, Char*, char*");
		PRIMITIVE_ELEMENT = UTF("> PrimitiveElementPtr, PrimitiveElement*");
		ARGUMENT = UTF("> ArgumentPtr, Argument*, RecursiveArgumentPtr, RecursiveArgument*");
		CONSTANT = UTF("> ConstantPtr, Constant*");
		FUNCTION = UTF("> FunctionPtr, Function*");
		EXPRESSION = UTF("> ExpressionPtr, Expression*");
		NUMERIC = UTF(">: double, int");
		NL = UTF("\n");
	);

	API_VISIBLE VariadicProcessor::VariadicProcessor() {
		paramsPrimitiveElement = new_List<PrimitiveElementPtr>();
		paramsString = new_List<StringPtr>();
		paramsDouble = new_List<double>();
		paramsArgument = new_List<ArgumentPtr>();
		paramsFunction = new_List<FunctionPtr>();
		paramsConstant = new_List<ConstantPtr>();
		paramsExpression = new_List<ExpressionPtr>();
		typesAllowed = UTF("");

		paramsPrimitiveElementNumberNull = 0;
		paramsPrimitiveElementNumberNotNull = 0;

		paramsStringNumberNull = 0;
		paramsStringNumberNotNull = 0;

		paramsArgumentNumberNull = 0;
		paramsArgumentNumberNotNull = 0;

		paramsFunctionNumberNull = 0;
		paramsFunctionNumberNotNull = 0;

		paramsConstantNumberNull = 0;
		paramsConstantNumberNotNull = 0;

		paramsExpressionNumberNull = 0;
		paramsExpressionNumberNotNull = 0;
	}

	API_VISIBLE void VariadicProcessor::makeOutputNullIfOnlyNulls() {
		if (paramsPrimitiveElementNumberNotNull == 0)
			if (paramsPrimitiveElementNumberNull > 0)
				paramsPrimitiveElement = nullptr;

		if (paramsStringNumberNotNull == 0)
			if (paramsStringNumberNull > 0)
				paramsString = nullptr;

		if (paramsArgumentNumberNotNull == 0)
			if (paramsArgumentNumberNull > 0)
				paramsArgument = nullptr;

		if (paramsFunctionNumberNotNull == 0)
			if (paramsFunctionNumberNull > 0)
				paramsFunction = nullptr;

		if (paramsConstantNumberNotNull == 0)
			if (paramsConstantNumberNull > 0)
				paramsConstant = nullptr;

		if (paramsExpressionNumberNotNull == 0)
			if (paramsExpressionNumberNull > 0)
				paramsExpression = nullptr;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorNull::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorNull,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + STRING
				+ NL + NUMERIC
				+ NL + PRIMITIVE_ELEMENT
				+ NL + CONSTANT
				+ NL + ARGUMENT
				+ NL + FUNCTION
				+ NL + EXPRESSION;
	);
	API_VISIBLE VariadicProcessorNull::VariadicProcessorNull() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	};

	// ***********************************************************

	API_VISIBLE String VariadicProcessorDouble::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorDouble,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + NUMERIC;
	);
	API_VISIBLE VariadicProcessorDouble::VariadicProcessorDouble() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorDoubleOrUdf::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorDoubleOrUdf,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);

		TYPES_ALLOWED =
				NL + NUMERIC
				+ NL + PRIMITIVE_ELEMENT
				+ NL + CONSTANT
				+ NL + ARGUMENT
				+ NL + FUNCTION
				+ NL + EXPRESSION;
	);
	API_VISIBLE VariadicProcessorDoubleOrUdf::VariadicProcessorDoubleOrUdf() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorString::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorString,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + STRING;
	);
	API_VISIBLE VariadicProcessorString::VariadicProcessorString() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorStringOrArgument::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorStringOrArgument,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + STRING
				+ NL + ARGUMENT;
	);
	API_VISIBLE VariadicProcessorStringOrArgument::VariadicProcessorStringOrArgument() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorStringOrFunction::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorStringOrFunction,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + STRING
				+ NL + FUNCTION;
	);
	API_VISIBLE VariadicProcessorStringOrFunction::VariadicProcessorStringOrFunction() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorStringOrConstant::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorStringOrConstant,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + STRING
				+ NL + CONSTANT;
	);
	API_VISIBLE VariadicProcessorStringOrConstant::VariadicProcessorStringOrConstant() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorStringOrUdf::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorStringOrUdf,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + STRING
				+ NL + PRIMITIVE_ELEMENT
				+ NL + CONSTANT
				+ NL + ARGUMENT
				+ NL + FUNCTION
				+ NL + EXPRESSION;
	);
	API_VISIBLE VariadicProcessorStringOrUdf::VariadicProcessorStringOrUdf() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorPrimitiveElement::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorPrimitiveElement,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + PRIMITIVE_ELEMENT
				+ NL + CONSTANT
				+ NL + ARGUMENT
				+ NL + FUNCTION
				+ NL + EXPRESSION;
	);
	API_VISIBLE VariadicProcessorPrimitiveElement::VariadicProcessorPrimitiveElement() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorArgument::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorArgument,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + ARGUMENT;
	);
	API_VISIBLE VariadicProcessorArgument::VariadicProcessorArgument() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorFunction::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorFunction,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + FUNCTION;
	);
	API_VISIBLE VariadicProcessorFunction::VariadicProcessorFunction() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	String VariadicProcessorConstant::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorConstant,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + CONSTANT;
	);
	API_VISIBLE VariadicProcessorConstant::VariadicProcessorConstant() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorExpression::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorExpression,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + EXPRESSION;
	);
	API_VISIBLE VariadicProcessorExpression::VariadicProcessorExpression() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	API_VISIBLE String VariadicProcessorUdfs::TYPES_ALLOWED;
	STATIC_VARS_INITI_CPP(VariadicProcessorUdfs,
		STATIC_VARS_INITI_DEPENDENCY(VariadicProcessor);
		TYPES_ALLOWED =
				NL + PRIMITIVE_ELEMENT
				+ NL + CONSTANT
				+ NL + ARGUMENT
				+ NL + FUNCTION
				+ NL + EXPRESSION;
	);
	API_VISIBLE VariadicProcessorUdfs::VariadicProcessorUdfs() : VariadicProcessor() {
		typesAllowed = TYPES_ALLOWED;
	}

	// ***********************************************************

	// Double
	API_VISIBLE void VariadicProcessor::ifElementTypeIs(double element) {
		paramsDouble->add(element);
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(int element) {
		paramsDouble->add(element);
	}

	// ***********************************************************

	// String
	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const String &element) {
		paramsString->add(std::make_shared<String>(element));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const String *element) {
		if (element == nullptr) paramsStringNumberNull++;
		else paramsStringNumberNotNull++;
		paramsString->add(std::make_shared<String>(*element));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const std::string &element) {
		paramsString->add(S(element));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const std::string *element) {
		if (element == nullptr) paramsStringNumberNull++;
		else paramsStringNumberNotNull++;
		paramsString->add(S(*element));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const Char *element) {
		if (element == nullptr) paramsStringNumberNull++;
		else paramsStringNumberNotNull++;
		paramsString->add(S(element));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const char *element) {
		if (element == nullptr) paramsStringNumberNull++;
		else paramsStringNumberNotNull++;
		paramsString->add(S(element));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const StringPtr &element) {
		if (element == nullptr) paramsStringNumberNull++;
		else paramsStringNumberNotNull++;
		paramsString->add(element);
	}

	// ***********************************************************

	// PrimitiveElement
	API_VISIBLE void VariadicProcessor::ifElementTypeIs(PrimitiveElement *element) {
		if (element == nullptr) paramsPrimitiveElementNumberNull++;
		else paramsPrimitiveElementNumberNotNull++;
		std::shared_ptr<PrimitiveElement> elementPtr;
		std::shared_ptr<PrimitiveElement>(element).swap(elementPtr);
		paramsPrimitiveElement->add(elementPtr);
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const PrimitiveElementPtr &element) {
		if (element == nullptr) paramsPrimitiveElementNumberNull++;
		else paramsPrimitiveElementNumberNotNull++;
		paramsPrimitiveElement->add(element);
	}

	// ***********************************************************

	// Argument
	API_VISIBLE void VariadicProcessor::ifElementTypeIs(Argument *element) {
		if (element == nullptr) {
			paramsArgumentNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsArgumentNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		std::shared_ptr<Argument> elementPtr;
		std::shared_ptr<Argument>(element).swap(elementPtr);
		paramsArgument->add(elementPtr);
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(elementPtr));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const ArgumentPtr &element) {
		if (element == nullptr) {
			paramsArgumentNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsArgumentNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		paramsArgument->add(element);
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(element));
	}

	// ***********************************************************

	// RecursiveArgument
	API_VISIBLE void VariadicProcessor::ifElementTypeIs(RecursiveArgument *element) {
		if (element == nullptr) {
			paramsArgumentNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsArgumentNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		std::shared_ptr<RecursiveArgument> elementPtr;
		std::shared_ptr<RecursiveArgument>(element).swap(elementPtr);
		paramsArgument->add(PtrCast<Argument>(elementPtr));
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(elementPtr));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const RecursiveArgumentPtr &element) {
		if (element == nullptr) {
			paramsArgumentNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsArgumentNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		paramsArgument->add(PtrCast<Argument>(element));
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(element));
	}

	// ***********************************************************

	// Function
	API_VISIBLE void VariadicProcessor::ifElementTypeIs(Function *element) {
		if (element == nullptr) {
			paramsFunctionNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsFunctionNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		std::shared_ptr<Function> elementPtr;
		std::shared_ptr<Function>(element).swap(elementPtr);
		paramsFunction->add(elementPtr);
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(elementPtr));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const FunctionPtr &element) {
		if (element == nullptr) {
			paramsFunctionNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsFunctionNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		paramsFunction->add(element);
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(element));
	}

	// ***********************************************************

	// Constant
	API_VISIBLE void VariadicProcessor::ifElementTypeIs(Constant *element) {
		if (element == nullptr) {
			paramsConstantNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsConstantNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		std::shared_ptr<Constant> elementPtr;
		std::shared_ptr<Constant>(element).swap(elementPtr);
		paramsConstant->add(elementPtr);
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(elementPtr));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const ConstantPtr &element) {
		if (element == nullptr) {
			paramsConstantNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsConstantNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		paramsConstant->add(element);
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(element));
	}

	// ***********************************************************

	// Expression
	API_VISIBLE void VariadicProcessor::ifElementTypeIs(Expression *element) {
		if (element == nullptr) {
			paramsExpressionNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsExpressionNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		std::shared_ptr<Expression> elementPtr;
		std::shared_ptr<Expression>(element).swap(elementPtr);
		paramsExpression->add(elementPtr);
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(elementPtr));
	}

	API_VISIBLE void VariadicProcessor::ifElementTypeIs(const ExpressionPtr &element) {
		if (element == nullptr) {
			paramsExpressionNumberNull++;
			paramsPrimitiveElementNumberNull++;
		} else {
			paramsExpressionNumberNotNull++;
			paramsPrimitiveElementNumberNotNull++;
		}
		paramsExpression->add(element);
		paramsPrimitiveElement->add(PtrCast<PrimitiveElement>(element));
	}

	// ***********************************************************

	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorNull::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	//API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDouble::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(PrimitiveElement* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const PrimitiveElementPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(Argument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(RecursiveArgument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(Function* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const FunctionPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(Constant* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const ConstantPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(Expression* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorDoubleOrUdf::ifElementTypeIs(const ExpressionPtr& element) { typeNotAllowedRuntimeError(element); }


	// ***********************************************************

	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const String& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const String* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const std::string& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const std::string* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const Char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorString::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const String& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const String* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const std::string& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const std::string* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const Char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(Argument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(RecursiveArgument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrArgument::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const String& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const String* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const std::string& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const std::string* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const Char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(Function* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const FunctionPtr& element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrFunction::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const String& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const String* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const std::string& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const std::string* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const Char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(Constant* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const ConstantPtr& element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrConstant::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const String& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const String* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const std::string& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const std::string* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const Char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const char* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(PrimitiveElement* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const PrimitiveElementPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(Argument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(RecursiveArgument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(Function* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const FunctionPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(Constant* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const ConstantPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(Expression* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorStringOrUdf::ifElementTypeIs(const ExpressionPtr& element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(PrimitiveElement* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const PrimitiveElementPtr& element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorPrimitiveElement::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(Argument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(RecursiveArgument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorArgument::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(Function* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const FunctionPtr& element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorFunction::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(Constant* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const ConstantPtr& element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(Expression *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorConstant::ifElementTypeIs(const ExpressionPtr &element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(PrimitiveElement *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const PrimitiveElementPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(Argument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(RecursiveArgument *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(Function *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const FunctionPtr &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(Constant *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const ConstantPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(Expression* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorExpression::ifElementTypeIs(const ExpressionPtr& element) { typeNotAllowedRuntimeError(element); }

	// ***********************************************************

	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(double element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(int element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const String &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const String *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const std::string &element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const std::string *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const Char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const char *element) { typeNotAllowedRuntimeError(element); }
	API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const StringPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(PrimitiveElement* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const PrimitiveElementPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(Argument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const ArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(RecursiveArgument* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const RecursiveArgumentPtr &element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(Function* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const FunctionPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(Constant* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const ConstantPtr& element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(Expression* element) { typeNotAllowedRuntimeError(element); }
	//API_VISIBLE void VariadicProcessorUdfs::ifElementTypeIs(const ExpressionPtr& element) { typeNotAllowedRuntimeError(element); }

} // namespace org::mariuszgromada::math::mxparser::wrapper
