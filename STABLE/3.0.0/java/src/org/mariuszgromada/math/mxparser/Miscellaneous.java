/*
 * @(#)Miscellaneous.java        3.0.0    2016-05-07
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2016 MARIUSZ GROMADA. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY <MARIUSZ GROMADA> ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of MARIUSZ GROMADA.
 *
 * If you have any questions/bugs feel free to contact:
 *
 *     Mariusz Gromada
 *     mariuszgromada.org@gmail.com
 *     http://mathparser.org
 *     http://mathspace.pl
 *     http://janetsudoku.mariuszgromada.org
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser
 *     http://mxparser.sourceforge.net
 *     http://bitbucket.org/mariuszgromada/mxparser
 *     http://mxparser.codeplex.com
 *     http://github.com/mariuszgromada/Janet-Sudoku
 *     http://janetsudoku.codeplex.com
 *     http://sourceforge.net/projects/janetsudoku
 *     http://bitbucket.org/mariuszgromada/janet-sudoku
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser;

import java.util.ArrayList;
import java.util.Comparator;

import org.mariuszgromada.math.mxparser.parsertokens.ConstantValue;
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
	ArrayList<Token> tokens;
	String paramStr;
	int fromIndex;
	int toIndex;
	FunctionParameter(ArrayList<Token> tokens,
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
	IterativeOperatorParameters(ArrayList<FunctionParameter> functionParameters) {
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
* Base class prepresenting key words knwon by the parsere
*/
class KeyWord {
	String wordString;
	int	wordId;
	int wordTypeId;
	String description;
	public KeyWord() {
		wordString = "";
		wordId = ConstantValue.NaN;
		wordTypeId = ConstantValue.NaN;
		description = "";
	}
	/**
	 * Constructor - creates key words form wordStrin wordId
	 * and wordTypId
	 *
	 * @param wordString   the word string (refers to below interfaces)
	 * @param wordId       the word identifier (refers to below interfaces)
	 * @param wordTypeId   the word type (refers to below interfaces)
	 */
	KeyWord(String wordString, int wordId, int wordTypeId) {
		this.wordString = wordString;
		this.wordId = wordId;
		this.wordTypeId = wordTypeId;
	}
	KeyWord(String wordString, String description, int wordId, int wordTypeId) {
		this.wordString = wordString;
		this.wordId = wordId;
		this.wordTypeId = wordTypeId;
		this.description = description;
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
		int t1 = kw1.wordTypeId*1000 + kw1.wordId;
		int t2 = kw2.wordTypeId*1000 + kw2.wordId;
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
	ArrayList<Token> headTokens;
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