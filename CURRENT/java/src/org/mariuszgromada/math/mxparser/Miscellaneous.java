/*
 * @(#)Miscellaneous.java        6.1.0    2024-10-14
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
package org.mariuszgromada.math.mxparser;

import java.io.Serializable;
import java.util.List;
import java.util.Comparator;

import org.mariuszgromada.math.mxparser.parsertokens.ConstantValue;
import org.mariuszgromada.math.mxparser.parsertokens.KeyWord;
import org.mariuszgromada.math.mxparser.parsertokens.Token;

/*=================================================
*
* Package level classes and interfaces
*
*=================================================
*/
/**
 * Package level class for handling function parameters.
 */
class FunctionParameter implements Serializable {
	private static final int serialClassID = 80;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	List<Token> tokens;
	String paramStr;
	int fromIndex;
	int toIndex;
	FunctionParameter(List<Token> tokens,
			String paramStr,
			int fromIndex,
			int toIndex ) {
		this.tokens = tokens;
		this.paramStr = paramStr;
		this.fromIndex = fromIndex;
		this.toIndex = toIndex;
	}
}
/**
* Package level class for generating iterative operator parameters
*/
class IterativeOperatorParameters implements Serializable {
	private static final int serialClassID = 81;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	FunctionParameter indexParam;
	FunctionParameter fromParam;
	FunctionParameter toParam;
	FunctionParameter funParam;
	FunctionParameter deltaParam;
	Expression fromExp;
	Expression toExp;
	Expression funExp;
	Expression deltaExp;
	double from;
	double to;
	double delta;
	boolean withDelta;
	IterativeOperatorParameters(List<FunctionParameter> functionParameters) {
		/*
		 * Get index string
		 * 1st parameter
		 */
		indexParam = functionParameters.get(0);
		/*
		 * Get from string (range from-to)
		 * 2nd parameter
		 */
		fromParam = functionParameters.get(1);
		/*
		 * Get to string (range from-to)
		 * 3rd parameter
		 */
		toParam = functionParameters.get(2);
		/*
		 * Get internal function strinng
		 * 4th - parameter
		 */
		funParam = functionParameters.get(3);
		/*
		 * Get internal function strinng
		 * 5th - parameter
		 */
		deltaParam = null;
		withDelta = false;
		if (functionParameters.size() == 5) {
			deltaParam = functionParameters.get(4);
			withDelta = true;
		}
		from = Double.NaN;
		to = Double.NaN;
		delta = Double.NaN;
	}
}
/**
* Handling argument parameters
*/
class ArgumentParameter implements Serializable {
	private static final int serialClassID = 82;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	Argument argument;
	double initialValue;
	int initialType;
	int presence;
	int index;
	ArgumentParameter() {
		argument = null;
		initialValue = Double.NaN;
		initialType = ConstantValue.NaN;
		presence = Expression.NOT_FOUND;
		index = ConstantValue.NaN;
	}
}
/**
* Internal token class
* which is used with stack while
* evaluation of tokens levels
*/
class TokenStackElement implements Serializable {
	private static final int serialClassID = 83;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	int tokenIndex;
	int tokenId;
	int tokenTypeId;
	int tokenLevel;
	boolean precedingFunction;
	TokenStackElement() {
		tokenIndex = ConstantValue.NaN;
		tokenId = ConstantValue.NaN;
		tokenTypeId = ConstantValue.NaN;
		tokenLevel = ConstantValue.NaN;
		precedingFunction = false;
	}
}

class SyntaxStackElement implements Serializable {
	private static final int serialClassID = 84;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	String tokenStr;
	int tokenLevel;
	SyntaxStackElement(String tokenStr, int tokenLevel) {
		this.tokenStr = tokenStr;
		this.tokenLevel = tokenLevel;
	}
}
/*
* ---------------------------------------------------------
* Comparators for sorting
* ---------------------------------------------------------
*/
/**
* Comparator for key word list sorting by key word string.
* This king of sorting is used while checking the syntax
* (duplicated key word error)
*/
class KwStrComparator implements Comparator<KeyWord>, Serializable {
	private static final int serialClassID = 85;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	/**
	 *
	 */
	public int compare(KeyWord kw1, KeyWord kw2) {
		String s1 = kw1.wordString;
		String s2 = kw2.wordString;
		return s1.compareTo(s2);
	}
}
/**
* Comparator for key word list sorting by
* descending key word length
* .
* This king of sorting is used while tokenizing
* (best match)
*/
class DescKwLenComparator implements Comparator<KeyWord>, Serializable {
	private static final int serialClassID = 86;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	/**
	 *
	 */
	public int compare(KeyWord kw1, KeyWord kw2) {
		int l1 = kw1.wordString.length();
		int l2 = kw2.wordString.length();
		return l2-l1;
	}
}
/**
* Comparator for key word list sorting by
* type of the key word
*/
class KwTypeComparator implements Comparator<KeyWord>, Serializable {
	private static final int serialClassID = 87;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	/**
	 *
	 */
	public int compare(KeyWord kw1, KeyWord kw2) {
		int t1 = kw1.wordTypeId * 1000000 + kw1.wordId * 1000 + kw1.wordString.length();
		int t2 = kw2.wordTypeId * 1000000 + kw2.wordId * 1000 + kw2.wordString.length();
		return t1-t2;
	}
}
/*
* ---------------------------------------------------------
* Grouping constants by interfaces
* ---------------------------------------------------------
*/
/*
* Package level class to be used
* while function, argument, constant definition
* using only one string, ie:
* Function "f(x,y) = sin(x) + cos(y)"
* Constant "a = 5/20"
*/
class HeadEqBody implements Serializable {
	private static final int serialClassID = 88;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	private final boolean ONLY_PARSER_KEYWORDS = true;
	String headStr;
	String bodyStr;
	int eqPos;
	List<Token> headTokens;
	boolean definitionError;
	HeadEqBody(String definitionString) {
		char c;
		eqPos = 0;
		int matchStatus = mXparser.NOT_FOUND;
		definitionError = false;
		do {
			c = definitionString.charAt(eqPos);
			if (c == '=') matchStatus = mXparser.FOUND;
			else eqPos++;
		} while ( (eqPos < definitionString.length()) && (matchStatus == mXparser.NOT_FOUND) );
		if ( (matchStatus == mXparser.FOUND) && (eqPos > 0) && (eqPos <= definitionString.length()-2) ) {
			headStr = definitionString.substring(0, eqPos).trim();
			bodyStr  = definitionString.substring(eqPos+1).trim();
			Expression headExpression = new Expression(headStr, ONLY_PARSER_KEYWORDS);
			headExpression.disableImpliedMultiplicationMode();
			headTokens = headExpression.getCopyOfInitialTokens();
		} else {
			definitionError = true;
			headStr = StringInvariant.EMPTY;
			bodyStr = StringInvariant.EMPTY;
			headTokens = null;
			eqPos = -1;
		}
	}
}
/**
 * Data structure used internally for token to be modified list
 */
class TokenModification implements Serializable {
	private static final int serialClassID = 89;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	String currentToken;
	String newToken;
	String newTokenDescription;
}

/**
 * Data structure used in tokenization
 * searching for implied multiplication
 * in case of a token i a form of one name
 * for instance x2x2 = x2*x2
 */
class TokenPart implements Serializable {
	private static final int serialClassID = 90;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	static final int INTEGER = 1;
	static final int DECIMAL = 2;
	static final int FRACTION = 3;
	static final int OTHER_NUMERAL_BASE = 4;
	static final int KNOWN_KEYWORD = 5;
	static final int UNKNOWN_NAME = 6;
	String str;
	int type = ConstantValue.NaN;
	KeyWord keyWord;
}

/*
 * --------------------------------
 */
class CompilationDetails implements Serializable {
	private static final int serialClassID = 91;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	boolean containsCalculus = false;
	boolean containsIf = false;
	List<CompiledElement> compiledElements;
}

/*
 * --------------------------------
 */
class CompiledElement implements Serializable {
	private static final int serialClassID = 92;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);

	enum ToCall {
		FREE_ARGUMENT
		,CONSTANT
		,UNIT
		,USER_CONSTANT
		,RANDOM_VARIABLE
		,DEPENDENT_ARGUMENT
		,calculusCalc
		,IF_CONDITION
		,IFF
		,RECURSIVE_ARGUMENT
		,variadicFunCalc
		,f3ArgCalc
		,f2ArgCalc
		,f1ArgCalc
		,USER_FUNCTION
		,TETRATION
		,POWER
		,FACT
		,PERC
		,MODULO
		,NEG
		,rootOperCalc
		,BITWISE_COMPL
		,MULTIPLY
		,DIVIDE
		,DIVIDE_QUOTIENT
		,MINUS
		,PLUS
		,NEQ
		,EQ
		,LT
		,GT
		,LEQ
		,GEQ
		,COMMA
		,bolCalc
		,bitwiseCalc
		,PARENTHESES
		,Null
	}

	ToCall toCall = ToCall.Null;
	int position1 = ConstantValue.NaN;
	int position2 = ConstantValue.NaN;

}