/*
 * @(#)Miscellaneous.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_MISCELLANEOUS_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_MISCELLANEOUS_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"

namespace org::mariuszgromada::math::mxparser::miscellaneous {
	using namespace org::mariuszgromada::math::mxparser::wrapper;
	using namespace org::mariuszgromada::math::mxparser::parsertokens;

	// =====================================================

	/**
	 * Package level class API_VISIBLE for handling function parameters.
	 */
	class API_VISIBLE FunctionParameter {
	public:
				FunctionParameter(const ListPtr<TokenPtr> &tokens, const StringPtr &paramStr, int fromIndex, int toIndex);

		ListPtr<TokenPtr> tokens = nullptr;
		StringPtr paramStr = nullptr;
		int fromIndex;
		int toIndex;

		FunctionParameter() {};

	private:

		SERIALIZE(80,
			(
				NVP(tokens)
				,NVP(paramStr)
				,NVP(fromIndex)
				,NVP(toIndex)
			)
		);

	};

	inline FunctionParameterPtr new_FunctionParameter(const ListPtr<TokenPtr> &tokens, const StringPtr &paramStr,
	                                                  int fromIndex, int toIndex) {
		return std::make_shared<FunctionParameter>(tokens, paramStr, fromIndex, toIndex);
	}

	// =====================================================

	/**
	* Package level class API_VISIBLE for generating iterative operator parameters
	*/
	class API_VISIBLE IterativeOperatorParameters {
	public:
		explicit IterativeOperatorParameters(const ListPtr<FunctionParameterPtr> &functionParameters);

		FunctionParameterPtr indexParam = nullptr;
		FunctionParameterPtr fromParam = nullptr;
		FunctionParameterPtr toParam = nullptr;
		FunctionParameterPtr funParam = nullptr;
		FunctionParameterPtr deltaParam = nullptr;
		ExpressionPtr fromExp = nullptr;
		ExpressionPtr toExp = nullptr;
		ExpressionPtr funExp = nullptr;
		ExpressionPtr deltaExp = nullptr;
		double from;
		double to;
		double delta;
		bool withDelta;

		IterativeOperatorParameters() {};

	private:

		SERIALIZE(81,
			(
				NVP(indexParam)
				,NVP(fromParam)
				,NVP(toParam)
				,NVP(funParam)
				,NVP(deltaParam)
				,NVP(fromExp)
				,NVP(toExp)
				,NVP(funExp)
				,NVP(deltaExp)
				,NVP(from)
				,NVP(to)
				,NVP(delta)
				,NVP(withDelta)
			)
		);

	};

	inline IterativeOperatorParametersPtr new_IterativeOperatorParameters(
		const ListPtr<FunctionParameterPtr> &functionParameters) {
		return std::make_shared<IterativeOperatorParameters>(functionParameters);
	}

	// =====================================================

	/**
	* Handling argument parameters
	*/
	class API_VISIBLE ArgumentParameter {
	public:
		ArgumentParameter();

		ArgumentPtr argument = nullptr;
		double initialValue;
		int initialType;
		int presence;
		int index;

	private:

		SERIALIZE(82,
			(
				NVP(argument)
				,NVP(initialValue)
				,NVP(initialType)
				,NVP(presence)
				,NVP(index)
			)
		);

	};

	inline ArgumentParameterPtr new_ArgumentParameter() {
		return std::make_shared<ArgumentParameter>();
	}

	// =====================================================

	/**
	* Internal token class
	* which is used with stack while
	* evaluation of tokens levels
	*/
	class API_VISIBLE TokenStackElement {
	public:
		TokenStackElement();

		int tokenIndex;
		int tokenId;
		int tokenTypeId;
		int tokenLevel;
		bool precedingFunction;

	private:

		SERIALIZE(83,
			(
				NVP(tokenIndex)
				,NVP(tokenId)
				,NVP(tokenTypeId)
				,NVP(tokenLevel)
				,NVP(precedingFunction)
			)
		);

	};

	inline TokenStackElementPtr new_TokenStackElement() {
		return std::make_shared<TokenStackElement>();
	}

	// =====================================================

	class API_VISIBLE SyntaxStackElement {
	public:
		SyntaxStackElement(const StringPtr &tokenStr, int tokenLevel);

		StringPtr tokenStr = nullptr;
		int tokenLevel;

		SyntaxStackElement() {}

	private:

		SERIALIZE(84,
			(
				NVP(tokenStr)
				,NVP(tokenLevel)
			)
		);

	};

	inline SyntaxStackElementPtr new_SyntaxStackElement(const StringPtr &tokenStr, int tokenLevel) {
		return std::make_shared<SyntaxStackElement>(tokenStr, tokenLevel);
	}

	// =====================================================

	/**
	* Comparator for key word list sorting by key word string.
	* This king of sorting is used while checking the syntax
	* (duplicated key word error)
	*/
	class API_VISIBLE KwStrComparator {
	public:
		bool operator()(const KeyWordPtr &kw1, const KeyWordPtr &kw2) const;

		KwStrComparator() {};

	private:
		SERIALIZE_EMPTY(85);
	};

	// =====================================================


	/**
	* Comparator for key word list sorting by
	* descending key word length
	* .
	* This king of sorting is used while tokenizing
	* (best match)
	*/
	class API_VISIBLE DescKwLenComparator {
	public:
		bool operator()(const KeyWordPtr &kw1, const KeyWordPtr &kw2) const;

		DescKwLenComparator() {};

	private:
		SERIALIZE_EMPTY(86);
	};

	// =====================================================

	/**
	* Comparator for key word list sorting by
	* type of the key word
	*/

	class API_VISIBLE KwTypeComparator {
	public:
		bool operator()(const KeyWordPtr &kw1, const KeyWordPtr &kw2) const;

		KwTypeComparator() {};

	private:
		SERIALIZE_EMPTY(87);
	};

	// =====================================================

	/*
	* Package level class API_VISIBLE to be used
	* while function, argument, constant definition
	* using only one string, ie:
	* Function "f(x,y) = sin(x) + cos(y)"
	* Constant "a = 5/20"
	*/
	class API_VISIBLE HeadEqBody {
	public:
		explicit HeadEqBody(const StringPtr &definitionString);

		StringPtr headStr = nullptr;
		StringPtr bodyStr = nullptr;
		int eqPos;
		ListPtr<TokenPtr> headTokens = nullptr;
		bool definitionError;

		HeadEqBody() {};

	private:
		bool ONLY_PARSER_KEYWORDS;

		SERIALIZE(88,
			(
				NVP(headStr)
				,NVP(bodyStr)
				,NVP(eqPos)
				,NVP(headTokens)
				,NVP(definitionError)
				,NVP(ONLY_PARSER_KEYWORDS)
			)
		);

	};

	inline HeadEqBodyPtr new_HeadEqBody(const StringPtr &definitionString) {
		return std::make_shared<HeadEqBody>(definitionString);
	}

	// =====================================================

	/**
	 * Data structure used internally for token to be modified list
	 */
	class API_VISIBLE TokenModification {
	public:
		TokenModification();

		StringPtr currentToken = nullptr;
		StringPtr newToken = nullptr;
		StringPtr newTokenDescription = nullptr;

	private:

		SERIALIZE(89,
			(
				NVP(currentToken)
				,NVP(newToken)
				,NVP(newTokenDescription)
			)
		);

	};

	inline TokenModificationPtr new_TokenModification() {
		return std::make_shared<TokenModification>();
	}

	// =====================================================

	/**
	 * Data structure used in tokenization
	 * searching for implied multiplication
	 * in case of a token i a form of one name
	 * for instance x2x2 = x2*x2
	 */
	class API_VISIBLE TokenPart {
	public:
		TokenPart();

		static constexpr int INTEGER = 1;
		static constexpr int DECIMAL = 2;
		static constexpr int FRACTION = 3;
		static constexpr int OTHER_NUMERAL_BASE = 4;
		static constexpr int KNOWN_KEYWORD = 5;
		static constexpr int UNKNOWN_NAME = 6;

		StringPtr str = nullptr;
		int type;
		KeyWordPtr keyWord = nullptr;

	private:

		SERIALIZE(90,
			(
				NVP(str)
				,NVP(type)
				,NVP(keyWord)
			)
		);

	};

	inline TokenPartPtr new_TokenPart() {
		return std::make_shared<TokenPart>();
	}

	// =====================================================

	class API_VISIBLE CompilationDetails {
	public:
		CompilationDetails();

		bool containsCalculus;
		bool containsIf;
		ListPtr<CompiledElementPtr> compiledElements = nullptr;

	private:

		SERIALIZE(91,
			(
				NVP(containsCalculus)
				,NVP(containsIf)
				,NVP(compiledElements)
			)
		);

	};

	inline CompilationDetailsPtr new_CompilationDetails() {
		return std::make_shared<CompilationDetails>();
	}


	// =====================================================

	class API_VISIBLE CompiledElement {
	public:
		CompiledElement();

		enum class ToCall {
			FREE_ARGUMENT, CONSTANT, UNIT, USER_CONSTANT, RANDOM_VARIABLE, DEPENDENT_ARGUMENT, calculusCalc,
			IF_CONDITION, IFF, RECURSIVE_ARGUMENT, variadicFunCalc, f3ArgCalc, f2ArgCalc, f1ArgCalc, USER_FUNCTION,
			TETRATION, POWER, FACT, PERC, MODULO, NEG, rootOperCalc, BITWISE_COMPL, MULTIPLY, DIVIDE, DIVIDE_QUOTIENT,
			MINUS, PLUS, NEQ, EQ, LT, GT, LEQ, GEQ, COMMA, bolCalc, bitwiseCalc, PARENTHESES, Null
		};

		ToCall toCall;
		int position1;
		int position2;

	private:

		SERIALIZE(92,
			(
				NVP(toCall)
				,NVP(position1)
				,NVP(position2)
			)
		);

	};

	inline CompiledElementPtr new_CompiledElement() {
		return std::make_shared<CompiledElement>();
	}

	// =====================================================

	template<typename T>
	class API_VISIBLE ElementAtTheEnd {
		friend class org::mariuszgromada::math::mxparser::CloneCache;

	public:
		ElementAtTheEnd() = delete;

		ElementAtTheEnd(const ListPtr<T> &targetElementsList, const T &elementBeingCloned, int addAtIndex) {
			this->targetElementsList = targetElementsList;
			this->elementBeingCloned = elementBeingCloned;
			this->addAtIndex = addAtIndex;
		}

	private:
		ListPtr<T> targetElementsList = nullptr;
		T elementBeingCloned = nullptr;
		int addAtIndex = -1;
	};

	template<typename T>
	ElementAtTheEndPtr<T> new_ElementAtTheEnd(const ListPtr<T> &targetElementsList, const T &elementBeingCloned,
	                                          int addAtIndex) {
		return std::make_shared<miscellaneous::ElementAtTheEnd<T> >(targetElementsList, elementBeingCloned, addAtIndex);
	}

	// =====================================================
} // namespace org::mariuszgromada::math::mxparser::miscellaneous

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_MISCELLANEOUS_H
