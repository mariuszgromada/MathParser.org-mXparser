/*
 * @(#)Miscellaneous.cs        4.1.0    2017-05-28
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2017 MARIUSZ GROMADA. All rights reserved.
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
using org.mariuszgromada.math.mxparser.parsertokens;
using System;
using System.Collections.Generic;

namespace org.mariuszgromada.math.mxparser {
	/*=================================================
	*
	* Package level classes and interfaces
	*
	*=================================================
	*/
	/**
	 * Package level class for handling function parameters.
	 */
	internal class FunctionParameter {
		internal List<Token> tokens;
		internal String paramStr;
		internal int fromIndex;
		internal int toIndex;
		internal FunctionParameter(List<Token> tokens,
				String paramStr,
				int fromIndex,
				int toIndex) {
			this.tokens = tokens;
			this.paramStr = paramStr;
			this.fromIndex = fromIndex;
			this.toIndex = toIndex;
		}
	}

	/**
	* Package level class for generating iterative operator parameters
	*/
	internal class IterativeOperatorParameters {
		internal FunctionParameter indexParam;
		internal FunctionParameter fromParam;
		internal FunctionParameter toParam;
		internal FunctionParameter funParam;
		internal FunctionParameter deltaParam;
		internal Expression fromExp;
		internal Expression toExp;
		internal Expression funExp;
		internal Expression deltaExp;
		internal double from;
		internal double to;
		internal double delta;
		internal bool withDelta;

		internal IterativeOperatorParameters(List<FunctionParameter> functionParameters) {
			/*
			 * Get index string
			 * 1st parameter
			 */
			indexParam = functionParameters[0];
			/*
			 * Get from string (range from-to)
			 * 2nd parameter
			 */
			fromParam = functionParameters[1];
			/*
			 * Get to string (range from-to)
			 * 3rd parameter
			 */
			toParam = functionParameters[2];
			/*
			 * Get internal function strinng
			 * 4th - parameter
			 */
			funParam = functionParameters[3];
			/*
			 * Get internal function strinng
			 * 5th - parameter
			 */
			deltaParam = null;
			withDelta = false;
			if (functionParameters.Count == 5) {
				deltaParam = functionParameters[4];
				withDelta = true;
			}
		}
	}
	/**
	* Handling argument parameters
	*/
	internal class ArgumentParameter {
		internal Argument argument;
		internal double initialValue;
		internal int initialType;
		internal int presence;
		internal int index;
		internal ArgumentParameter() {
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
	internal class TokenStackElement {
		internal int tokenIndex;
		internal int tokenId;
		internal int tokenTypeId;
		internal int tokenLevel;
		internal bool precedingFunction;
	}
	internal class SyntaxStackElement {
		internal String tokenStr;
		internal int tokenLevel;
		internal SyntaxStackElement(String tokenStr, int tokenLevel) {
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
	class KwStrComparator : IComparer<KeyWord> {
		/**
		 *
		 */
		public int Compare(KeyWord kw1, KeyWord kw2) {
			String s1 = kw1.wordString;
			String s2 = kw2.wordString;
			return s1.CompareTo(s2);
		}
	}
	/**
	* Comparator for key word list sorting by
	* descending key word length
	* .
	* This king of sorting is used while tokenizing
	* (best match)
	*/
	class DescKwLenComparator : IComparer<KeyWord> {
		/**
		 *
		 */
		public int Compare(KeyWord kw1, KeyWord kw2) {
			int l1 = kw1.wordString.Length;
			int l2 = kw2.wordString.Length;
			return l2 - l1;
		}
	}
	/**
	* Comparator for key word list sorting by
	* type of the key word
	*
	*/
	class KwTypeComparator : IComparer<KeyWord> {
		/**
		 *
		 */
		public int Compare(KeyWord kw1, KeyWord kw2) {
			int t1 = kw1.wordTypeId * 1000000 + kw1.wordId * 1000 + kw1.wordString.Length;
			int t2 = kw2.wordTypeId * 1000000 + kw2.wordId * 1000 + kw2.wordString.Length;
			return t1 - t2;
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
	internal class HeadEqBody {
		private const bool ONLY_PARSER_KEYWORDS = true;
		internal String headStr;
		internal String bodyStr;
		internal int eqPos;
		internal List<Token> headTokens;
		internal bool definitionError;
		internal HeadEqBody(String definitionString) {
			char c;
			eqPos = 0;
			int matchStatus = mXparser.NOT_FOUND;
			definitionError = false;
			do {
				c = definitionString[eqPos];
				if (c == '=') matchStatus = mXparser.FOUND;
				else eqPos++;
			} while ((eqPos < definitionString.Length) && (matchStatus == mXparser.NOT_FOUND));
			if ((matchStatus == mXparser.FOUND) && (eqPos > 0) && (eqPos <= definitionString.Length - 2)) {
				headStr = definitionString.Substring(0, eqPos);
				bodyStr = definitionString.Substring(eqPos + 1);
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
	/**
	 * Data structure used internally for token to be modified list
	 */
	internal class TokenModification {
		internal String currentToken;
		internal String newToken;
		internal String newTokenDescription;
	}
}