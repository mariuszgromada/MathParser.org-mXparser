/*
 * @(#)Miscellaneous.java        5.0.0    2022-04-10
 *
 * Copyright 2010 - 2022 MARIUSZ GROMADA. All rights reserved.
 *
 * PRODUCT: MathParser.org-mXparser
 * LICENSE: DUAL LICENSE
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE SOFTWARE, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * MARIUSZ GROMADA provides MathParser.org-mXparser SOFTWARE under the
 * DUAL LICENSE model designed to meet the needs of both Non-Commercial Use
 * as well as Commercial Use.
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
 * IN CASE YOU WANT TO USE THE SOFTWARE COMMERCIALLY, YOU MUST PURCHASE
 * THE APPROPRIATE LICENSE FROM "INFIMA IWONA GLOWACKA-GROMADA", ONLINE
 * STORE ADDRESS: HTTPS://PAYHIP.COM/INFIMA
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms, with
 * or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE in the documentation and/or other
 *    materials provided with the distribution, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, MARIUSZ GROMADA allows you to
 *     download, install and use up to three copies of the PRODUCT to perform
 *     integration tests, confirm the quality of the PRODUCT and its
 *     suitability. The testing period should be limited to one month. Tests
 *     should take place via test environments. The purpose of the tests must
 *     not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA IWONA GLOWACKA-GROMADA"
 *     (online store address: https://payhip.com/INFIMA), you comply with all
 *     below terms and conditions, and you have acknowledged and understood the
 *     following DISCLAIMER, MARIUSZ GROMADA grants you a nonexclusive license
 *     including the following rights:
 *  3. In case you purchased a "Single License" You can install and use the
 *     PRODUCT from one workstation.
 *  4. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number of
 *     copies purchased as per order.
 *  5. In case you purchased a "Site License", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
 *  6. You may incorporate the unmodified PRODUCT into your own products and
 *     software.
 *  7. If you purchased a license with the "Source Code" option, you may modify
 *     the PRODUCT's source code and incorporate the modified source code into
 *     your own products and / or software.
 *  8. You may distribute your product and / or software with the incorporated
 *     PRODUCT royalty-free.
 *  9. You may make copies of the PRODUCT for backup and archival purposes.
 * 10. MARIUSZ GROMADA reserves all rights not expressly granted to you in
 *     this agreement.
 *
 * CONTACT
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://payhip.com/INFIMA
 *
 * DISCLAIMER
 *
 * THIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL MATHPARSER.ORG MARIUSZ GROMADA OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE SOFTWARE AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING OFFICIAL
 * POLICIES, EITHER EXPRESSED OR IMPLIED, OF MARIUSZ GROMADA.
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