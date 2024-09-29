/*
 * @(#)VariadicProcessor.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_WRAPPER_VARIADICPROCESSOR_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_WRAPPER_VARIADICPROCESSOR_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"

namespace org::mariuszgromada::math::mxparser::wrapper {

	class API_VISIBLE VariadicProcessor {
	public:
		VariadicProcessor();

		// ***********************************************************

		virtual ~VariadicProcessor() = default;
		void makeOutputNullIfOnlyNulls();

		template<typename... Args>
		void processArgs(Args &&... args) {
			auto tuple = std::make_tuple(args...);
			processTuple(tuple, std::index_sequence_for<Args...>{});
			makeOutputNullIfOnlyNulls();
		}

		template<typename T>
		void processElement(const T &element) {
			ifElementTypeIs(element);
		}

		template<typename Tuple, std::size_t... I>
		void processTuple(const Tuple &tuple, std::index_sequence<I...>) {
			(processElement(std::get<I>(tuple)), ...);
		}

		// ***********************************************************

		ListPtr<PrimitiveElementPtr> paramsPrimitiveElement;
		ListPtr<StringPtr> paramsString;
		ListPtr<double> paramsDouble;
		ListPtr<ArgumentPtr> paramsArgument;
		ListPtr<FunctionPtr> paramsFunction;
		ListPtr<ConstantPtr> paramsConstant;
		ListPtr<ExpressionPtr> paramsExpression;

		// ***********************************************************

		int paramsPrimitiveElementNumberNull;
		int paramsPrimitiveElementNumberNotNull;

		// ***********************************************************

		int paramsStringNumberNull;
		int paramsStringNumberNotNull;

		// ***********************************************************

		int paramsArgumentNumberNull;
		int paramsArgumentNumberNotNull;

		// ***********************************************************

		int paramsFunctionNumberNull;
		int paramsFunctionNumberNotNull;

		// ***********************************************************

		int paramsConstantNumberNull;
		int paramsConstantNumberNotNull;

		// ***********************************************************

		int paramsExpressionNumberNull;
		int paramsExpressionNumberNotNull;

		// ***********************************************************

		static ListPtr<PrimitiveElementPtr> paramsPrimitiveElementEmpty;
		static ListPtr<StringPtr> paramsStringEmpty;
		static ListPtr<double> paramsDoubleEmpty;
		static ListPtr<ArgumentPtr> paramsArgumentEmpty;
		static ListPtr<FunctionPtr> paramsFunctionEmpty;
		static ListPtr<ConstantPtr> paramsConstantEmpty;
		static ListPtr<ExpressionPtr> paramsExpressionEmpty;

		// ***********************************************************
		// Double
		virtual void ifElementTypeIs(double element);
		virtual void ifElementTypeIs(int element);

		// ***********************************************************
			// String
		virtual void ifElementTypeIs(const String &element);
		virtual void ifElementTypeIs(const String *element);
		virtual void ifElementTypeIs(const std::string &element);
		virtual void ifElementTypeIs(const std::string *element);
		virtual void ifElementTypeIs(const Char *element);
		virtual void ifElementTypeIs(const char *element);
		virtual void ifElementTypeIs(const StringPtr &element);

		// ***********************************************************
		// PrimitiveElement
		virtual void ifElementTypeIs(PrimitiveElement *element);
		virtual void ifElementTypeIs(const PrimitiveElementPtr &element);

		// ***********************************************************
		// Argument
		virtual void ifElementTypeIs(Argument *element);
		virtual void ifElementTypeIs(const ArgumentPtr &element);

		// ***********************************************************
		// Argument
		virtual void ifElementTypeIs(RecursiveArgument *element);
		virtual void ifElementTypeIs(const RecursiveArgumentPtr &element);

		// ***********************************************************
		// Function
		virtual void ifElementTypeIs(Function *element);
		virtual void ifElementTypeIs(const FunctionPtr &element);

		// ***********************************************************
		// Constant
		virtual void ifElementTypeIs(Constant *element);
		virtual void ifElementTypeIs(const ConstantPtr &element);

		// ***********************************************************
		// Expression
		virtual void ifElementTypeIs(Expression *element);
		virtual void ifElementTypeIs(const ExpressionPtr &element);

	protected:

		static String STRING;
		static String PRIMITIVE_ELEMENT;
		static String ARGUMENT;
		static String CONSTANT;
		static String FUNCTION;
		static String EXPRESSION;
		static String NUMERIC;
		static String NL;
		String typesAllowed;

		template<typename T>
		void typeNotAllowedRuntimeError(const T &element) {
			auto typeName = typeid(T).name();
			fwprintf(stderr, UTF("VariadicProcessor: Type not allowed: %hs.\n"), typeName);
			fwprintf(stderr, UTF("VariadicProcessor: Types allowed: %ls.\n"), typesAllowed.c_str());
		}

	public:
		STATIC_VARS_INITI_H;

	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorNull : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;;
		VariadicProcessorNull();
		~VariadicProcessorNull() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorDouble : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorDouble();
		~VariadicProcessorDouble() override = default;
		//void ifElementTypeIs(double element) override;
		//void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorDoubleOrUdf : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorDoubleOrUdf();
		~VariadicProcessorDoubleOrUdf() override = default;
		//void ifElementTypeIs(double element) override;
		//void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		//void ifElementTypeIs(PrimitiveElement* element) override;
		//void ifElementTypeIs(const PrimitiveElementPtr& element) override;
		//void ifElementTypeIs(Argument* element) override;
		//void ifElementTypeIs(const ArgumentPtr &element) override;
		//void ifElementTypeIs(RecursiveArgument* element) override;
		//void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		//void ifElementTypeIs(Function* element) override;
		//void ifElementTypeIs(const FunctionPtr& element) override;
		//void ifElementTypeIs(Constant* element) override;
		//void ifElementTypeIs(const ConstantPtr& element) override;
		//void ifElementTypeIs(Expression* element) override;
		//void ifElementTypeIs(const ExpressionPtr& element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorString : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorString();
		~VariadicProcessorString() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		//void ifElementTypeIs(const String& element) override;
		//void ifElementTypeIs(const String* element) override;
		//void ifElementTypeIs(const std::string &element) override;
		//void ifElementTypeIs(const std::string* element) override;
		//void ifElementTypeIs(const Char* element) override;
		//void ifElementTypeIs(const char* element) override;
		//void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorStringOrArgument : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorStringOrArgument();
		~VariadicProcessorStringOrArgument() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		//void ifElementTypeIs(const String& element) override;
		//void ifElementTypeIs(const String* element) override;
		//void ifElementTypeIs(const std::string &element) override;
		//void ifElementTypeIs(const std::string* element) override;
		//void ifElementTypeIs(const Char* element) override;
		//void ifElementTypeIs(const char* element) override;
		//void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		//void ifElementTypeIs(Argument* element) override;
		//void ifElementTypeIs(const ArgumentPtr &element) override;
		//void ifElementTypeIs(RecursiveArgument* element) override;
		//void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorStringOrFunction : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorStringOrFunction();
		~VariadicProcessorStringOrFunction() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		//void ifElementTypeIs(const String& element) override;
		//void ifElementTypeIs(const String* element) override;
		//void ifElementTypeIs(const std::string &element) override;
		//void ifElementTypeIs(const std::string* element) override;
		//void ifElementTypeIs(const Char* element) override;
		//void ifElementTypeIs(const char* element) override;
		//void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		//void ifElementTypeIs(Function* element) override;
		//void ifElementTypeIs(const FunctionPtr& element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorStringOrConstant : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorStringOrConstant();
		~VariadicProcessorStringOrConstant() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		//void ifElementTypeIs(const String& element) override;
		//void ifElementTypeIs(const String* element) override;
		//void ifElementTypeIs(const std::string &element) override;
		//void ifElementTypeIs(const std::string* element) override;
		//void ifElementTypeIs(const Char* element) override;
		//void ifElementTypeIs(const char* element) override;
		//void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		//void ifElementTypeIs(Constant* element) override;
		//void ifElementTypeIs(const ConstantPtr& element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorStringOrUdf : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorStringOrUdf();
		~VariadicProcessorStringOrUdf() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;

		//void ifElementTypeIs(const String& element) override;
		//void ifElementTypeIs(const String* element) override;
		//void ifElementTypeIs(const std::string &element) override;
		//void ifElementTypeIs(const std::string* element) override;
		//void ifElementTypeIs(const Char* element) override;
		//void ifElementTypeIs(const char* element) override;
		//void ifElementTypeIs(const StringPtr &element) override;
		//void ifElementTypeIs(PrimitiveElement* element) override;
		//void ifElementTypeIs(const PrimitiveElementPtr& element) override;
		//void ifElementTypeIs(Argument* element) override;
		//void ifElementTypeIs(const ArgumentPtr &element) override;
		//void ifElementTypeIs(RecursiveArgument* element) override;
		//void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		//void ifElementTypeIs(Function* element) override;
		//void ifElementTypeIs(const FunctionPtr& element) override;
		//void ifElementTypeIs(Constant* element) override;
		//void ifElementTypeIs(const ConstantPtr& element) override;
		//void ifElementTypeIs(Expression* element) override;
		//void ifElementTypeIs(const ExpressionPtr& element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorPrimitiveElement : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorPrimitiveElement();
		~VariadicProcessorPrimitiveElement() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		//void ifElementTypeIs(PrimitiveElement* element) override;
		//void ifElementTypeIs(const PrimitiveElementPtr& element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;
		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorArgument : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorArgument();
		~VariadicProcessorArgument() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		//void ifElementTypeIs(Argument* element) override;
		//void ifElementTypeIs(const ArgumentPtr &element) override;
		//void ifElementTypeIs(RecursiveArgument* element) override;
		//void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorFunction : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorFunction();
		~VariadicProcessorFunction() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		//void ifElementTypeIs(Function* element) override;
		//void ifElementTypeIs(const FunctionPtr& element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorConstant : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorConstant();
		~VariadicProcessorConstant() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		//void ifElementTypeIs(Constant* element) override;
		//void ifElementTypeIs(const ConstantPtr& element) override;
		void ifElementTypeIs(Expression *element) override;
		void ifElementTypeIs(const ExpressionPtr &element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorExpression : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorExpression();
		~VariadicProcessorExpression() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		void ifElementTypeIs(PrimitiveElement *element) override;
		void ifElementTypeIs(const PrimitiveElementPtr &element) override;
		void ifElementTypeIs(Argument *element) override;
		void ifElementTypeIs(const ArgumentPtr &element) override;
		void ifElementTypeIs(RecursiveArgument *element) override;
		void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		void ifElementTypeIs(Function *element) override;
		void ifElementTypeIs(const FunctionPtr &element) override;
		void ifElementTypeIs(Constant *element) override;
		void ifElementTypeIs(const ConstantPtr &element) override;
		//void ifElementTypeIs(Expression* element) override;
		//void ifElementTypeIs(const ExpressionPtr& element) override;

		STATIC_VARS_INITI_H;
	};

	// ***********************************************************

	class API_VISIBLE VariadicProcessorUdfs : public VariadicProcessor {
	public:
		static String TYPES_ALLOWED;
		VariadicProcessorUdfs();
		~VariadicProcessorUdfs() override = default;
		void ifElementTypeIs(double element) override;
		void ifElementTypeIs(int element) override;
		void ifElementTypeIs(const String &element) override;
		void ifElementTypeIs(const String *element) override;
		void ifElementTypeIs(const std::string &element) override;
		void ifElementTypeIs(const std::string *element) override;
		void ifElementTypeIs(const Char *element) override;
		void ifElementTypeIs(const char *element) override;
		void ifElementTypeIs(const StringPtr &element) override;
		//void ifElementTypeIs(PrimitiveElement* element) override;
		//void ifElementTypeIs(const PrimitiveElementPtr& element) override;
		//void ifElementTypeIs(Argument* element) override;
		//void ifElementTypeIs(const ArgumentPtr &element) override;
		//void ifElementTypeIs(RecursiveArgument* element) override;
		//void ifElementTypeIs(const RecursiveArgumentPtr &element) override;
		//void ifElementTypeIs(Function* element) override;
		//void ifElementTypeIs(const FunctionPtr& element) override;
		//void ifElementTypeIs(Constant* element) override;
		//void ifElementTypeIs(const ConstantPtr& element) override;
		//void ifElementTypeIs(Expression* element) override;
		//void ifElementTypeIs(const ExpressionPtr& element) override;

		STATIC_VARS_INITI_H;
	};

} // namespace org::mariuszgromada::math::mxparser::wrapper

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_WRAPPER_VARIADICPROCESSOR_H
