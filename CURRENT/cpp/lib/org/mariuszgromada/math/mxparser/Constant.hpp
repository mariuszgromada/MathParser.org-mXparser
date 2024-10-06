/*
 * @(#)Constant.hpp        6.1.0    2024-10-06
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_CONSTANT_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_CONSTANT_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/ExpressionUtils.hpp"
#include "org/mariuszgromada/math/mxparser/Miscellaneous.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Token.hpp"
#include "org/mariuszgromada/math/mxparser/PrimitiveElement.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include <type_traits>

namespace org::mariuszgromada::math::mxparser {

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE Constant : public PrimitiveElement {

		ADD_FRIENDS_OF(Constant);

	private:

		// ***********************************************************
		// ****************** CONSTRUCTORS HELPERS *******************
		// ***********************************************************

		void executeContructorConst(const StringPtr &constantName, double constantValue);
		void executeContructorConst(const StringPtr &constantName, double constantValue, const StringPtr &description);
		void executeContructorConstPEnonTemplatePart(const StringPtr &constantDefinitionString, const ListPtr<PrimitiveElementPtr>& paramsPrimitiveElement);

		template<typename... PrimitiveElements>
		void executeContructorConstPE(const StringPtr &constantDefinitionString, PrimitiveElements &&... elements) {
			EXECUTE_FUNCTION_WITH_OPTIONAL_VARIADIC(VariadicProcessorUdfs, elements,
				executeContructorConstPEnonTemplatePart, constantDefinitionString
			);
		}

	public:

		// ***********************************************************
		// ********************** CONSTRUCTORS ***********************
		// ***********************************************************

		Constant(const StringPtr &constantName, double constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(constantName, constantValue);
			iAmFullyConstructed = true;
		}

		Constant(const String &constantName, double constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue);
			iAmFullyConstructed = true;
		}

		Constant(const std::string &constantName, double constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue);
			iAmFullyConstructed = true;
		}

		Constant(const std::string *constantName, double constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(*constantName), constantValue);
			iAmFullyConstructed = true;
		}

		Constant(const Char *constantName, double constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue);
			iAmFullyConstructed = true;
		}

		Constant(const char *constantName, double constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue);
			iAmFullyConstructed = true;
		}

		Constant(const StringPtr &constantName, int constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(constantName, CAST_DOUBLE(constantValue));
			iAmFullyConstructed = true;
		}

		Constant(const String &constantName, int constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue));
			iAmFullyConstructed = true;
		}

		Constant(const std::string &constantName, int constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue));
			iAmFullyConstructed = true;
		}

		Constant(const std::string *constantName, int constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(*constantName), CAST_DOUBLE(constantValue));
			iAmFullyConstructed = true;
		}

		Constant(const Char *constantName, int constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue));
			iAmFullyConstructed = true;
		}

		Constant(const char *constantName, int constantValue) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue));
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		Constant(const StringPtr &constantName, int constantValue, const StringPtr &description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(constantName, CAST_DOUBLE(constantValue), description);
			iAmFullyConstructed = true;
		}

		Constant(const String &constantName, int constantValue, const String &description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue), S(description));
			iAmFullyConstructed = true;
		}

		Constant(const std::string &constantName, int constantValue, const std::string &description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue), S(description));
			iAmFullyConstructed = true;
		}

		Constant(std::string &constantName, int constantValue, std::string &description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue), S(description));
			iAmFullyConstructed = true;
		}

		Constant(const Char *constantName, int constantValue, const Char *description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue), S(description));
			iAmFullyConstructed = true;
		}

		Constant(const char *constantName, int constantValue, const char *description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), CAST_DOUBLE(constantValue), S(description));
			iAmFullyConstructed = true;
		}

		Constant(const StringPtr &constantName, double constantValue, const StringPtr &description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(constantName, constantValue, description);
			iAmFullyConstructed = true;
		}

		Constant(const String &constantName, double constantValue, const String &description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue, S(description));
			iAmFullyConstructed = true;
		}

		Constant(const std::string &constantName, double constantValue, const std::string &description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue, S(description));
			iAmFullyConstructed = true;
		}

		Constant(std::string &constantName, double constantValue, std::string &description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue, S(description));
			iAmFullyConstructed = true;
		}

		Constant(const Char *constantName, double constantValue, const Char *description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue, S(description));
			iAmFullyConstructed = true;
		}

		Constant(const char *constantName, double constantValue, const char *description) : PrimitiveElement(TYPE_ID) {
			executeContructorConst(S(constantName), constantValue, S(description));
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		/**
		 * Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 *
		 * @param constantDefinitionString      Constant definition in the form
		 *                                      of one String, ie "c = 2" or "c = 2*sin(pi/3)"
		 * @param      elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 */
		template<typename... PrimitiveElements>
		explicit Constant(const StringPtr &constantDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(constantDefinitionString, FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		/**
		 * Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 *
		 * @param constantDefinitionString      Constant definition in the form
		 *                                      of one String, ie "c = 2" or "c = 2*sin(pi/3)"
		 * @param      elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 */
		template<typename... PrimitiveElements>
		explicit Constant(const String &constantDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(constantDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Constant(const std::string &constantDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(constantDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Constant(std::string &constantDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(constantDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Constant(const Char *constantDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(constantDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		template<typename... PrimitiveElements>
		explicit Constant(const char *constantDefinitionString, PrimitiveElements &&... elements) : PrimitiveElement(TYPE_ID) {
			executeContructorConstPE(S(constantDefinitionString), FORWARD_PRIMITIVE(elements)...);
			iAmFullyConstructed = true;
		}

		// ***********************************************************

		static constexpr int TYPE_ID = 104;
		static StringPtr TYPE_DESC;

		// ***********************************************************

		/**
		 * When constant could not be found
		 */
		static constexpr int NOT_FOUND = Expression::NOT_FOUND;
		/**
		 * Status of the syntax - no syntax error
		 */
		static constexpr bool NO_SYNTAX_ERRORS = Expression::NO_SYNTAX_ERRORS;
		/**
		 * Status of the syntax - syntax error
		 */
		static constexpr bool SYNTAX_ERROR = Expression::SYNTAX_ERROR;
		/**
		 * Status of the syntax - syntax error
		 *
		 * @deprecated Planned to be removed, use {link #SYNTAX_ERROR} instead
		 */
		// @Deprecated
		static constexpr bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;

		// ***********************************************************

		StringPtr getConstantName();

		// ***********************************************************

		void setConstantName(const StringPtr &constantName);
		void setConstantName(const String &constantName) { setConstantName(S(constantName)); }
		void setConstantName(const std::string &constantName) { setConstantName(SC(constantName)); }
		void setConstantName(const Char* constantName) { setConstantName(SC(constantName)); }
		void setConstantName(const char* constantName) { setConstantName(SC(constantName)); }

		// ***********************************************************

		void setConstantValue(double constantValue);
		double getConstantValue() const;

		// ***********************************************************

		StringPtr getDescription();

		// ***********************************************************

		void setDescription(const StringPtr &description);
		void setDescription(const String &description) { setDescription(S(description)); }
		void setDescription(const Char *description) { setDescription(S(description)); }
		void setDescription(const std::string &description) { setDescription(S(description)); }
		void setDescription(const char *description) { setDescription(S(description)); }

		// ***********************************************************

		StringPtr getErrorMessage();
		bool getSyntaxStatus() const;

		// ***********************************************************

		ConstantPtr cloneForThreadSafe();

	public: /* but should be private */
		explicit Constant(const ConstantPtr &constantToClone);
		Constant() : PrimitiveElement(TYPE_ID) {};

	private:

		static StringPtr StringInvariantEMPTY();
		static const ListPtr<ConstantPtr> LIST_PTR_OF_CONSTANT_PTR_ALWAYS_EMPTY;;

		StringPtr constantName = StringInvariantEMPTY();
		double constantValue = Double::NaN;
		StringPtr description = StringInvariantEMPTY();
		ListPtr<ExpressionPtr> relatedExpressionsList = nullptr;
		bool syntaxStatus = SYNTAX_ERROR;
		StringPtr errorMessage = StringInvariantEMPTY();

		// ***********************************************************

		static StringPtr buildErrorMessageInvalidConstantName(const StringPtr &constantName);
		static StringPtr buildErrorMessageInvalidConstantDefinitionString(const StringPtr &constantDefinitionString);

		// ***********************************************************

		void registerNoSyntaxErrorInDefinition();
		void registerSyntaxErrorInDefinition(const StringPtr &errorMessage);

		// ***********************************************************

		// package
		void addRelatedExpression(const ExpressionPtr &expression) override;
		void removeRelatedExpression(const ExpressionPtr &expression);

		// ***********************************************************

		void setExpressionModifiedFlags();

		// ***********************************************************

		ConstantPtr cloneForThreadSafeInternal(const CloneCachePtr &cloneCache);
		ConstantPtr cloneForThreadSafeInternal(const ExpressionPtr &relatedExpressionThatInitiatedClone, const CloneCachePtr &cloneCache);

		// ***********************************************************

		SERIALIZE_DERIVED(5, PrimitiveElement,
			(
				NVP(constantName)
				,NVP(constantValue)
				,NVP(description)
				,NVP(relatedExpressionsList)
				,NVP(syntaxStatus)
				,NVP(errorMessage)
			)
		);


	public:
		STATIC_VARS_INITI_H;
	};

	inline ConstantPtr new_Constant(const StringPtr &constantName, double constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const String &constantName, double constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const std::string &constantName, double constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(std::string &constantName, double constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const Char *constantName, double constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const char *constantName, double constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}


	inline ConstantPtr new_Constant(const StringPtr &constantName, double constantValue, const StringPtr &description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(StringPtr &constantName, double constantValue, StringPtr &description) {
		ConstantPtr constant = std::make_shared<Constant>(CONST_STRING_PTR(constantName), constantValue, CONST_STRING_PTR(description));
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const String &constantName, double constantValue, const String &description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(String &constantName, double constantValue, String &description) {
		ConstantPtr constant = std::make_shared<Constant>(CONST_STRING(constantName), constantValue, CONST_STRING(description));
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const std::string &constantName, double constantValue, const std::string &description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}


	inline ConstantPtr new_Constant(std::string &constantName, double constantValue, std::string &description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const Char *constantName, double constantValue, const Char *description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const char *constantName, double constantValue, const char *description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const StringPtr &constantName, int constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(StringPtr &constantName, int constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(CONST_STRING_PTR(constantName), constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const String &constantName, int constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(String &constantName, int constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(CONST_STRING(constantName), constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const std::string &constantName, int constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(std::string &constantName, int constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const Char *constantName, int constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const char *constantName, int constantValue) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const StringPtr &constantName, int constantValue, const StringPtr &description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(StringPtr &constantName, int constantValue, StringPtr &description) {
		ConstantPtr constant = std::make_shared<Constant>(CONST_STRING_PTR(constantName), constantValue, CONST_STRING_PTR(description));
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const String &constantName, int constantValue, const String &description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(String &constantName, int constantValue, String &description) {
		ConstantPtr constant = std::make_shared<Constant>(CONST_STRING(constantName), constantValue, CONST_STRING(description));
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const std::string &constantName, int constantValue, const std::string &description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(std::string &constantName, int constantValue, std::string &description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const Char *constantName, int constantValue, const Char *description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const char *constantName, int constantValue, const char *description) {
		ConstantPtr constant = std::make_shared<Constant>(constantName, constantValue, description);
		constant->postConstructorSync();
		return constant;
	}


	template<typename... PrimitiveElements>
	ConstantPtr new_Constant(const StringPtr &constantDefinitionString, PrimitiveElements &&... elements) {
		ConstantPtr constant = std::make_shared<Constant>(constantDefinitionString, FORWARD_PRIMITIVE(elements)...);
		constant->postConstructorSync();
		return constant;
	}

	template<typename... PrimitiveElements>
	ConstantPtr new_Constant(const String &constantDefinitionString, PrimitiveElements &&... elements) {
		ConstantPtr constant = std::make_shared<Constant>(constantDefinitionString, FORWARD_PRIMITIVE(elements)...);
		constant->postConstructorSync();
		return constant;
	}

	template<typename... PrimitiveElements>
	ConstantPtr new_Constant(const std::string &constantDefinitionString, PrimitiveElements &&... elements) {
		ConstantPtr constant = std::make_shared<Constant>(constantDefinitionString, FORWARD_PRIMITIVE(elements)...);
		constant->postConstructorSync();
		return constant;
	}

	template<typename... PrimitiveElements>
	ConstantPtr new_Constant(const Char *constantDefinitionString, PrimitiveElements &&... elements) {
		ConstantPtr constant = std::make_shared<Constant>(constantDefinitionString, FORWARD_PRIMITIVE(elements)...);
		constant->postConstructorSync();
		return constant;
	}

	template<typename... PrimitiveElements>
	ConstantPtr new_Constant(const char *constantDefinitionString, PrimitiveElements &&... elements) {
		ConstantPtr constant = std::make_shared<Constant>(constantDefinitionString, FORWARD_PRIMITIVE(elements)...);
		constant->postConstructorSync();
		return constant;
	}

	inline ConstantPtr new_Constant(const ConstantPtr &constantToClone) {
		ConstantPtr constant = std::make_shared<Constant>(constantToClone);
		constant->postConstructorSync();
		return constant;
	}
} // namespace org::mariuszgromada::math::mxparser


#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_CONSTANT_H