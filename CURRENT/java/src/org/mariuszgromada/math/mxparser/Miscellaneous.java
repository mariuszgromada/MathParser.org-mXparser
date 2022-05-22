/*
 * @(#)Miscellaneous.java        5.0.4    2022-05-22
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2022-05-22
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2022 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use as well as
 * commercial use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. NON-COMMERCIAL USE examples:
 *
 * 1. Free Open-Source Software ("FOSS").
 * 2. Non-commercial use in research, scholarly and education.
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
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call takes place only internally for logging purposes and
 *    there is no connection with other external services and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, AUTHOR & PUBLISHER allow you
 *     to download, install and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the conditions of test
 *     environments. The purpose of the tests must not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all below terms and
 *     conditions, and you have acknowledged and understood the following
 *     DISCLAIMER, AUTHOR & PUBLISHER grant you a nonexclusive license
 *     including the following rights:
 *  3. The license has been granted only to you, i.e., the person or entity
 *     that made the purchase, who is identified and confirmed by the data
 *     provided during the purchase.
 *  4. In case you purchased a license in the "ONE-TIME PURCHASE" model,
 *     the license has been granted only for the PRODUCT version specified
 *     in the purchase. The upgrade policy gives you additional rights and
 *     is described in the dedicated section below.
 *  5. In case you purchased a license in the "SUBSCRIPTION" model, you can
 *     install and use any version of the PRODUCT, but only during the
 *     subscription validity period.
 *  6. In case you purchased a "SINGLE LICENSE" you can install and use the
 *     PRODUCT from one workstation.
 *  7. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number
 *     of workstations purchased as per order.
 *  8. In case you purchased a "SITE LICENSE ", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
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
 *     The method call takes place only internally for logging purposes and
 *     there is no connection with other external services and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. AUTHOR & PUBLISHER reserve all rights not expressly granted to you
 *     in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned the
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies of your final product
 * (delivered to your end-users) is not limited.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g.: 5.0), you can freely install
 *    all the various releases specified in the [PATCH] version (e.g.: 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for [MAJOR].[MINOR] version (e.g.: 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g.: 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
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
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF AUTHOR OR PUBLISHER.
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
class FunctionParameter {
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
class IterativeOperatorParameters {
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
	}
}
/**
* Handling argument parameters
*/
class ArgumentParameter {
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
	}
}
/**
* Internal token class
* which is used with stack while
* evaluation of tokens levels
*/
class TokenStackElement {
	int tokenIndex;
	int tokenId;
	int tokenTypeId;
	int tokenLevel;
	boolean precedingFunction;
}
class SyntaxStackElement {
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
class KwStrComparator implements Comparator<KeyWord> {
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
class DescKwLenComparator implements Comparator<KeyWord> {
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
*
*/
class KwTypeComparator implements Comparator<KeyWord> {
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
class HeadEqBody {
	private boolean ONLY_PARSER_KEYWORDS = true;
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
			headStr = definitionString.substring(0, eqPos);
			bodyStr  = definitionString.substring(eqPos+1);
			Expression headExpression = new Expression(headStr, ONLY_PARSER_KEYWORDS);
			headExpression.disableImpliedMultiplicationMode();
			headTokens = headExpression.getCopyOfInitialTokens();
		} else {
			definitionError = true;
			headStr = "";
			bodyStr = "";
			headTokens = null;
			eqPos = -1;
		}
	}
}
/**
 * Data structure used internally for token to be modified list
 */
class TokenModification {
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
class TokenPart {
	static final int INTEGER = 1;
	static final int DECIMAL = 2;
	static final int FRACTION = 3;
	static final int OTHER_NUMERAL_BASE = 4;
	static final int KNOWN_KEYWORD = 5;
	static final int UNKNOWN_NAME = 6;
	String str;
	int type;
	KeyWord keyWord;
}