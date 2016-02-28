/*
 * @(#)mXparser.java        2.4.0   2016-02-28
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
 *     mariusz.gromada@mathspace.pl
 *     http://mathspace.pl/
 *     http://mathparser.org/
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser/
 *     http://mxparser.sourceforge.net/
 *     http://bitbucket.org/mariuszgromada/mxparser/
 *     http://mxparser.codeplex.com/
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.regex.Pattern;
import org.mariuszgromada.math.mxparser.mathcollection.PrimesCache;
/**
 * mXparser class provides usefull methods when parsing, calculating or
 * parameters transforming.
 *
 * @author         <b>Mariusz Gromada</b><br/>
 *                 <a href="mailto:mariusz.gromada@mathspace.pl">mariusz.gromada@mathspace.pl</a><br>
 *                 <a href="http://mathspace.pl/" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org/" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mariuszgromada.github.io/MathParser.org-mXparser/" target="_blank">mXparser on GitHub pages</a><br>
 *                 <a href="http://mxparser.sourceforge.net/" target="_blank">mXparser on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser/" target="_blank">mXparser on Bitbucket</a><br>
 *                 <a href="http://mxparser.codeplex.com/" target="_blank">mXparser on CodePlex</a><br>
 *
 * @version        2.4.0
 *
 * @see RecursiveArgument
 * @see Expression
 * @see Function
 * @see Constant
 */
public final class mXparser {
	/**
	 * mXparser version
	 */
	static final String VERSION = "2.4.0";
	/**
	 * FOUND / NOT_FOUND
	 * used for matching purposes
	 */
	static final int NOT_FOUND = -1;
	static final int FOUND = 0;
	/**
	 * Console output string  for below methods
	 *
	 * @see mXparser.#consolePrintln(Object)
	 * @see mXparser.#consolePrint(Object)
	 */
	private static String CONSOLE_OUTPUT = "";
	private static String CONSOLE_PREFIX = "[mXparser-v." + VERSION + "] ";
	private static String CONSOLE_OUTPUT_PREFIX = CONSOLE_PREFIX;
	private static int CONSOLE_ROW_NUMBER = 1;
	/**
	 * Prime numbers cache
	 */
	public static PrimesCache primesCache;
	public static final int PRIMES_CACHE_NOT_INITIALIZED = -1;
	/**
	 * Threads number settings
	 */
	private static int THREADS_NUMBER = Runtime.getRuntime().availableProcessors();
	/**
	 * Empty expression for general help purposes.
	 */
	private static final Expression MXPARSER_HELP = new Expression();
	/**
	 * Initialization of prime numbers cache.
	 * Cache size according to {@link PrimesCache#DEFAULT_MAX_NUM_IN_CACHE}
	 * @see PrimesCache
	 */
	public static final void initPrimesCache() {
		primesCache = new PrimesCache();
	}
	/**
	 * Initialization of prime numbers cache.
	 * @param mximumNumberInCache The maximum integer number that
	 *                            will be stored in cache.
	 * @see PrimesCache
	 */
	public static final void initPrimesCache(int mximumNumberInCache) {
		primesCache = new PrimesCache(mximumNumberInCache);
	}
	/**
	 * Initialization of prime numbers cache.
	 * @param primesCache The primes cache object
	 * @see PrimesCache
	 */
	public static final void initPrimesCache(PrimesCache primesCache) {
		mXparser.primesCache = primesCache;
	}
	/**
	 * Sets {@value mXparser#primesCache} to null
	 */
	public static void setNoPrimesCache() {
		primesCache = null;
	}
	/**
	 * Returns maximum integer number in primes cache
	 * @return If primes cache was initialized then maximum number in
	 * primes cache, otherwise {@link mXparser#PRIMES_CACHE_NOT_INITIALIZED}
	 */
	public static final int getMaxNumInPrimesCache() {
		if ( primesCache != null )
			return primesCache.getMaxNumInCache();
		else
			return PRIMES_CACHE_NOT_INITIALIZED;
	}
	/**
	 * Gets maximum threads number
	 */
	public static final int getThreadsNumber() {
		return THREADS_NUMBER;
	}
	/**
	 * Sets default threads number
	 */
	public static final void setDefaultThreadsNumber() {
		THREADS_NUMBER = Runtime.getRuntime().availableProcessors();
	}
	/**
	 * Sets threads number
	 */
	public static final void setThreadsNumber(int threadsNumber) {
		if (threadsNumber > 0) THREADS_NUMBER = threadsNumber;
	}
	/**
	 * Calculates function f(x0) (given as expression) assigning Argument x = x0;
	 *
	 *
	 * @param      f                   the expression
	 * @param      x                   the argument
	 * @param      x0                  the argument value
	 *
	 * @return     f.calculate()
	 *
	 * @see        Expression
	 */
	public static final double getFunctionValue(Expression f, Argument x, double x0) {
		x.setArgumentValue(x0);
		return f.calculate();
	}
	/**
	 * Converts ArrayList<Double> to double[]
	 *
	 * @param      numbers             the numbers list
	 *
	 * @return     numbers array
	 */
	public static final double[] arraList2double(ArrayList<Double> numbers) {
		if (numbers == null)
			return null;
		int size = numbers.size();
		double[] newNumbers = new double[size];
		for (int i = 0; i < size; i++)
			newNumbers[i] = numbers.get(i).doubleValue();
		return newNumbers;
	}
	/**
	 * Returns array of double values of the function f(i)
	 * calculated on the range: i = from to i = to by step = delta
	 *
	 * @param f            Function expression
	 * @param index        Index argument
	 * @param from         'from' value
	 * @param to           'to' value
	 * @param delta        'delta' step definition
	 * @return             Array of function values
	 */
	public static final double[] getFunctionValues(Expression f, Argument index, double from, double to, double delta) {
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return null;
		int n = 0;
		double[] values;
		if ( (to >= from) && (delta > 0) ) {
			for (double i = from; i < to; i+=delta)
				n++;
			n++;
			values = new double[n];
			int j = 0;
			for (double i = from; i < to; i+=delta) {
				values[j] = getFunctionValue(f, index, i);
				j++;
			}
			values[j] = getFunctionValue(f, index, to);
		} else if ( (to <= from) && (delta < 0) ) {
			for (double i = from; i > to; i+=delta)
				n++;
			n++;
			values = new double[n];
			int j = 0;
			for (double i = from; i > to; i+=delta) {
				values[j] = getFunctionValue(f, index, i);
				j++;
			}
			values[j] = getFunctionValue(f, index, to);
		} else if (from == to) {
			n = 1;
			values = new double[n];
			values[0] = getFunctionValue(f, index, from);
		} else values = null;
		return values;
	}
	/**
	 * Converts integer number to hex string (plain text)
	 *
	 * @param number   Integer number
	 * @return         Hex string (i.e. FF23)
	 */
	public static final String numberToHexString(int number) {
		return Integer.toHexString(number);
	}
	/**
	 * Converts long number to hex string (plain text)
	 *
	 * @param number   Long number
	 * @return         Hex string (i.e. FF23)
	 */
	public static final String numberToHexString(long number) {
		return Long.toHexString(number);
	}
	/**
	 * Converts (long)double number to hex string (plain text)
	 *
	 * @param number   Double number
	 * @return         Hex string (i.e. FF23)
	 */
	public static final String numberToHexString(double number) {
		return numberToHexString((long)number);
	}
	/**
	 * Converts hex string into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex string.
	 *
	 * @param hexString   Hex string (i.e. 48656C6C6F)
	 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
	 */
	public static final String hexString2AsciiString(String hexString) {
		String hexByteStr;
		int hexByteInt;
		String asciiString = "";
		for (int i = 0; i < hexString.length(); i+=2) {
			hexByteStr = hexString.substring(i, i+2);
			hexByteInt = Integer.parseInt(hexByteStr, 16);
			asciiString = asciiString + (char)hexByteInt;
		}
		return asciiString;
	}
	/**
	 * Converts number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number
	 *
	 * @param number   Integer number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
	 */
	public static final String numberToAsciiString(int number) {
		return hexString2AsciiString( numberToHexString(number) );
	}
	/**
	 * Converts number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number
	 *
	 * @param number   Long number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
	 */
	public static final String numberToAsciiString(long number) {
		return hexString2AsciiString( numberToHexString(number) );
	}
	/**
	 * Converts (long)double number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number casted to long type.
	 *
	 * @param number   Double number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
	 */
	public static final String numberToAsciiString(double number) {
		return hexString2AsciiString( numberToHexString(number) );
	}
	/**
	 * Prints object.toString to the Console + new line
	 *
	 * @param o    Object to print
	 */
	public static final void consolePrintln(Object o) {
		if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.equals(""))) {
			System.out.print(CONSOLE_PREFIX);
			CONSOLE_OUTPUT = CONSOLE_PREFIX;
		}
		System.out.println(o);
		CONSOLE_ROW_NUMBER++;
		System.out.print(CONSOLE_PREFIX);
		CONSOLE_OUTPUT = CONSOLE_OUTPUT + o + "\n" + CONSOLE_OUTPUT_PREFIX;
	}
	/**
	 * Prints new line to the Console, no new line
	 *
	 */
	public static final void consolePrintln() {
		if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.equals(""))) {
			System.out.print(CONSOLE_PREFIX);
			CONSOLE_OUTPUT = CONSOLE_PREFIX;
		}
		System.out.println();
		CONSOLE_ROW_NUMBER++;
		System.out.print(CONSOLE_PREFIX);
		CONSOLE_OUTPUT = CONSOLE_OUTPUT + "\n" + CONSOLE_OUTPUT_PREFIX;
	}
	/**
	 * Prints object.toString to the Console
	 *
	 * @param o    Object to print
	 */
	public static final void consolePrint(Object o) {
		if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.equals(""))) {
			System.out.print(CONSOLE_PREFIX);
			CONSOLE_OUTPUT = CONSOLE_PREFIX;
		}
		System.out.print(o);
		CONSOLE_OUTPUT = CONSOLE_OUTPUT + o;
	}
	/**
	 * Resets console output string, console output
	 * string is being built by consolePrintln(), consolePrint().
	 *
	 * @see mXparser.#consolePrint(Object)
	 * @see mXparser.#consolePrintln(Object)
	 * @see mXparser.#consolePrintln();
	 * @see mXparser.#resetConsoleOutput();
	 */
	public static final void resetConsoleOutput() {
		CONSOLE_OUTPUT = "";
		CONSOLE_ROW_NUMBER = 1;
	}
	/**
	 * Sets default console prefix.
	 */
	public void setDefaultConsolePrefix() {
		CONSOLE_PREFIX = "[mXparser-v." + VERSION + "] ";
	}
	/**
	 * Sets default console output string prefix.
	 */
	public void setDefaultConsoleOutputPrefix() {
		CONSOLE_OUTPUT_PREFIX = "[mXparser-v." + VERSION + "] ";
	}
	/**
	 * Sets console prefix.
	 */
	public void setConsolePrefix(String consolePrefix) {
		CONSOLE_PREFIX = consolePrefix;
	}
	/**
	 * Sets console output string prefix.
	 */
	public void setConsoleOutputPrefix(String consoleOutputPrefix) {
		CONSOLE_OUTPUT_PREFIX = consoleOutputPrefix;
	}
	/**
	 * Returns console output string, console output string
	 * is being built by consolePrintln(), consolePrint().
	 *
	 * @return Console output string
	 *
	 * @see mXparser.#consolePrint(Object)
	 * @see mXparser.#consolePrintln(Object)
	 * @see mXparser.#consolePrintln();
	 * @see mXparser.#resetConsoleOutput();
	 */
	public static final String getConsoleOutput() {
		return CONSOLE_OUTPUT;
	}
	/**
	 * General mXparser expression help
	 *
	 * @return String with all general help content
	 */
	public static final String getHelp() {
		return MXPARSER_HELP.getHelp();
	}
	/**
	 * General mXparser expression help - in-line key word searching
	 * @param   word    Key word to be searched
	 * @return  String with all help content
	 * lines containing given keyword
	 */
	public static final String getHelp(String word) {
		return MXPARSER_HELP.getHelp(word);
	}
	/**
	 * Function used to introduce some compatibility
	 * between JAVA and C# while regexp matching.
	 *
	 * @param str         String
	 * @param pattern     Pattern (regexp)
	 *
	 * @return            True if pattern matches entirely, False otherwise
	 */
    static final boolean regexMatch(String str, String pattern){
        return Pattern.matches(pattern, str);
    }
	/**
	 * License info.
	 */
	public static final String LICENSE =
		"                      mXparser - version " + mXparser.VERSION + "\n" +
		"         A flexible mathematical eXpressions parser for JAVA.\n" +
		"\n" +
		"You may use this software under the condition of Simplified BSD License:\n" +
		"\n" +
		"Copyright 2010-2016 MARIUSZ GROMADA. All rights reserved.\n" +
		"\n" +
		"Redistribution and use in source and binary forms, with or without modification, are\n" +
		"permitted provided that the following conditions are met:\n" +
		"\n" +
		"   1. Redistributions of source code must retain the above copyright notice, this list of\n" +
		"      conditions and the following disclaimer.\n" +
		"\n" +
		"   2. Redistributions in binary form must reproduce the above copyright notice, this list\n" +
		"      of conditions and the following disclaimer in the documentation and/or other materials\n" +
		"      provided with the distribution.\n" +
		"\n" +
		"THIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA ``AS IS'' AND ANY EXPRESS OR IMPLIED\n" +
		"WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND\n" +
		"FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL MARIUSZ GROMADA OR\n" +
		"CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR\n" +
		"CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR\n" +
		"SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON\n" +
		"ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING\n" +
		"NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF\n" +
		"ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n" +
		"\n" +
		"The views and conclusions contained in the software and documentation are those of the\n" +
		"authors and should not be interpreted as representing official policies, either expressed\n" +
		"or implied, of MARIUSZ GROMADA.\n" +
		"\n" +
		"If you have any questions/bugs feel free to contact:\n" +
		"\n" +
		"    Mariusz Gromada\n" +
		"    mariusz.gromada@mathspace.pl\n" +
		"    http://mathspace.plt/\n" +
		"    http://mathparser.org/\n" +
		"    http://github.com/mariuszgromada/MathParser.org-mXparser\n" +
		"    http://mariuszgromada.github.io/MathParser.org-mXparser/\n" +
		"    http://mxparser.sourceforge.net/\n" +
		"    http://bitbucket.org/mariuszgromada/mxparser/\n" +
		"    http://mxparser.codeplex.com/\n"
		;

	/**
	 * Waits given number of milliseconds
	 *
	 * @param n Number of milliseconds
	 */
	public static void wait (int n){
        long t0,t1;
        t0=System.currentTimeMillis();
        do{
            t1=System.currentTimeMillis();
        }
        while (t1-t0<n);
	}
}
/*=================================================
 *
 * Package level classes and interfaces
 *
 *=================================================
 */
/**
 * Package level class for retrieving calculus parameters
 * Holds params number and parameter string
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
 * Package level class
 *
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
		initialType = Const.NaN;
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
		wordId = Const.NaN;
		wordTypeId = Const.NaN;
		description = "";
	}
	/**
	 * Constructor - creates key words form wordStrin wordId
	 * and wordTypId
	 *
	 * @param wordString   the word string (refere to below interfaces)
	 * @param wordId       the word identifier (refere to below interfaces)
	 * @param wordTypeId   the word type (refere to below interfaces)
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
/**
 * Token - base class for tokens definition
 */
class Token {
	/**
	 * String token
	 */
	String tokenStr;
	/**
	 * Key word string (if matched)
	 *
	 * Please refer to below interfaces
	 *    Operator
	 *    Function1Arg
	 *    Function2Arg
	 *    Function3Arg
	 *    BinaryRelation
	 *    Const
	 *    ParserSymbol
	 */
	String keyWord;
	/**
	 * Partition identifier
	 *
	 * Please refer to below interfaces
	 *    Operator
	 *    Function1Arg
	 *    Function2Arg
	 *    Function3Arg
	 *    BinaryRelation
	 *    Const
	 *    ParserSymbol
	 */
	int tokenId;
	/**
	 * Partition type
	 *
	 * Please refer to below interfaces
	 *    Operator
	 *    Function1Arg
	 *    Function2Arg
	 *    Function3Arg
	 *    BinaryRelation
	 *    Const
	 *    ParserSymbol
	 */
	int tokenTypeId;
	/**
	 * Partition level
	 */
	int tokenLevel;
	/**
	 * Partition value if number
	 */
	double tokenValue;
	/**
	 * Default constructor
	 */
	Token() {
		tokenStr = "";
		keyWord = "";
		tokenId = Const.NaN;
		tokenTypeId = Const.NaN;
		tokenLevel = Const.NaN;
		tokenValue = Double.NaN;
	}
	@Override
	public Token clone() {
		Token token = new Token();
		token.keyWord = keyWord;
		token.tokenStr = tokenStr;
		token.tokenId = tokenId;
		token.tokenLevel = tokenLevel;
		token.tokenTypeId = tokenTypeId;
		token.tokenValue = tokenValue;
		return token;
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
/**
 * ParserSymbol
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
interface ParserSymbol {
	final String Digits     = "(\\p{Digit}+)";
	final String HexDigits  = "(\\p{XDigit}+)";
	final String Exp        = "[eE][+-]?"+Digits;
	final String fpRegex    =
	        ("[\\x00-\\x20]*"+  // Optional leading "whitespace"
	        "[+-]?(" + // Optional sign character
	        "NaN|" +           // "NaN" string
	        "Infinity|" +      // "Infinity" string
	        "((("+Digits+"(\\.)?("+Digits+"?)("+Exp+")?)|"+
	        "(\\.("+Digits+")("+Exp+")?)|"+
	        "((" +
	        // 0[xX] HexDigits ._opt BinaryExponent FloatTypeSuffix_opt
	        "(0[xX]" + HexDigits + "(\\.)?)|" +
	        // 0[xX] HexDigits_opt . HexDigits BinaryExponent FloatTypeSuffix_opt
	        "(0[xX]" + HexDigits + "?(\\.)" + HexDigits + ")" +
	        ")[pP][+-]?" + Digits + "))" +
	        "[fFdD]?))" +
	        "[\\x00-\\x20]*");
	final String nameOnlyTokenRegExp = "([a-zA-Z_])+([a-zA-Z0-9_])*";
	final String nameTokenRegExp = "(\\s)*" + nameOnlyTokenRegExp + "(\\s)*";
	final String paramsTokenRegeExp = "(\\s)*\\(" + "(" + nameTokenRegExp + ",(\\s)*)*" + nameTokenRegExp + "\\)(\\s)*";
	final String constArgDefStrRegExp = nameTokenRegExp + "=" + "(\\s)*(.)+(\\s)*";
	final String functionDefStrRegExp = nameTokenRegExp + paramsTokenRegeExp + "=" + "(\\s)*(.)+(\\s)*";
	final String function1ArgDefStrRegExp = nameTokenRegExp + "(\\s)*\\(" + nameTokenRegExp + "(\\s)*\\)(\\s)*" + "=" + "(\\s)*(.)+(\\s)*";
	int
		TYPE_ID 				= 11,
		LEFT_PARENTHESES_ID 	= 1,
		RIGHT_PARENTHESES_ID	= 2,
		COMMA_ID				= 3,
		NUMBER_ID				= 1,
		NUMBER_TYPE_ID			= 0
	;
	String
		LEFT_PARENTHESES_STR 	= "(",
		RIGHT_PARENTHESES_STR	= ")",
		COMMA_STR				= ",",
		SEMI_STR				= ";",
		NUMBER_STR				= "_num_",
		NUMBER_REG_EXP			= fpRegex,
		LEFT_PARENTHESES_DESC 	= "left parentheses",
		RIGHT_PARENTHESES_DESC	= "right parentheses",
		COMMA_DESC				= "comma (function parameters)",
		SEMI_DESC				= "semicolon (function parameters)",
		NUMBER_DESC				= "decimal number",
		NUMBER_REG_DESC			= "regullar expression for decimal numbers"
	;
}
/**
 * Operator
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
interface Operator {
	int
		TYPE_ID 			= 1,
		PLUS_ID 			= 1,
		MINUS_ID 			= 2,
		MULTIPLY_ID 		= 3,
		DIVIDE_ID 			= 4,
		POWER_ID 			= 5,
		FACT_ID				= 6,
		MOD_ID				= 7
	;
	String
		PLUS_STR 			= "+",
		MINUS_STR 			= "-",
		MULTIPLY_STR 		= "*",
		DIVIDE_STR 			= "/",
		POWER_STR 			= "^",
		FACT_STR 			= "!",
		MOD_STR				= "%",
		PLUS_DESC 			= "addition",
		MINUS_DESC 			= "subtraction",
		MULTIPLY_DESC 		= "multiplication",
		DIVIDE_DESC 		= "division",
		POWER_DESC 			= "exponentiation",
		FACT_DESC			= "factorial",
		MOD_DESC			= "modulo function"
	;
}
interface BooleanOperator {
	int
		TYPE_ID 			= 2,
		AND_ID				= 1,
		NAND_ID				= 2,
		OR_ID				= 3,
		NOR_ID				= 4,
		XOR_ID				= 5,
		IMP_ID				= 6,
		CIMP_ID				= 7,
		NIMP_ID				= 8,
		CNIMP_ID			= 9,
		EQV_ID				= 10,
		NEG_ID				= 11
	;
	String
		NEG_STR				= "~",
		AND_STR				= "&",
		AND1_STR			= "&&",
		AND2_STR			= "/\\",
		NAND_STR			= NEG_STR + AND_STR,
		NAND1_STR			= NEG_STR + AND1_STR,
		NAND2_STR			= NEG_STR + AND2_STR,
		OR_STR				= "|",
		OR1_STR				= "||",
		OR2_STR				= "\\/",
		NOR_STR				= NEG_STR + OR_STR,
		NOR1_STR			= NEG_STR + OR1_STR,
		NOR2_STR			= NEG_STR + OR2_STR,
		XOR_STR				= "(+)",
		IMP_STR				= "->",
		CIMP_STR			= "<-",
		NIMP_STR			= "-/>",
		CNIMP_STR			= "</-",
		EQV_STR				= "<->",
		AND_DESC			= "logical conjunction (AND)",
		OR_DESC				= "logical disjunction (OR)",
		NEG_DESC			= "negation",
		NAND_DESC			= "NAND - Sheffer stroke",
		NOR_DESC			= "logical NOR",
		XOR_DESC			= "exclusive or (XOR)",
		IMP_DESC			= "implication (IMP)",
		CIMP_DESC			= "converse implication (CIMP)",
		NIMP_DESC			= "material nonimplication (NIMP)",
		CNIMP_DESC			= "converse nonimplication (CNIMP)",
		EQV_DESC			= "logical biconditional (EQV)"
	;
}
/**
 * BinaryRelation
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
interface BinaryRelation {
	int
		TYPE_ID 			= 3,
		EQ_ID 				= 1,
		NEQ_ID 				= 2,
		LT_ID 				= 3,
		GT_ID 				= 4,
		LEQ_ID 				= 5,
		GEQ_ID 				= 6
	;
	String
		EQ_STR 				= "=",
		EQ1_STR 			= "==",
		NEQ_STR 			= "<>",
		NEQ1_STR 			= "~=",
		NEQ2_STR 			= "!=",
		LT_STR 				= "<",
		GT_STR 				= ">",
		LEQ_STR 			= "<=",
		GEQ_STR 			= ">=",
		EQ_DESC 			= "equality",
		NEQ_DESC			= "inequation",
		LT_DESC 			= "lower than",
		GT_DESC 			= "greater than",
		LEQ_DESC 			= "lower or equal",
		GEQ_DESC 			= "greater or equal"
	;
}
/**
 * Function1Arg
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
interface Function1Arg {
	int
		TYPE_ID 			= 4,
		SIN_ID 				= 1,
		COS_ID 				= 2,
		TAN_ID				= 3,
		CTAN_ID 			= 4,
		SEC_ID 				= 5,
		COSEC_ID 			= 6,
		ASIN_ID 			= 7,
		ACOS_ID 			= 8,
		ATAN_ID 			= 9,
		ACTAN_ID 			= 10,
		LN_ID 				= 11,
		LOG2_ID 			= 12,
		LOG10_ID 			= 13,
		RAD_ID 				= 14,
		EXP_ID 				= 15,
		SQRT_ID 			= 16,
		SINH_ID 			= 17,
		COSH_ID 			= 18,
		TANH_ID 			= 19,
		COTH_ID 			= 20,
		SECH_ID 			= 21,
		CSCH_ID 			= 22,
		DEG_ID 				= 23,
		ABS_ID 				= 24,
		SGN_ID				= 25,
		FLOOR_ID			= 26,
		CEIL_ID				= 27,
		NOT_ID				= 29,
		ARSINH_ID			= 30,
		ARCOSH_ID			= 31,
		ARTANH_ID			= 32,
		ARCOTH_ID			= 33,
		ARSECH_ID			= 34,
		ARCSCH_ID			= 35,
		SA_ID				= 36,
		SINC_ID				= 37,
		BELL_NUMBER_ID		= 38,
		LUCAS_NUMBER_ID		= 39,
		FIBONACCI_NUMBER_ID	= 40,
		HARMONIC_NUMBER_ID	= 41,
		IS_PRIME_ID			= 42,
		PRIME_COUNT_ID		= 43,
		EXP_INT_ID			= 44,
		LOG_INT_ID			= 45,
		OFF_LOG_INT_ID		= 46
	;
	String
		SIN_STR 			= "sin",
		COS_STR 			= "cos",
		TAN_STR				= "tan",
		TG_STR				= "tg",
		CTAN_STR 			= "ctan",
		CTG_STR 			= "ctg",
		COT_STR 			= "cot",
		SEC_STR 			= "sec",
		COSEC_STR 			= "cosec",
		CSC_STR 			= "csc",
		ASIN_STR 			= "asin",
		ARSIN_STR 			= "arsin",
		ARCSIN_STR 			= "arcsin",
		ACOS_STR 			= "acos",
		ARCOS_STR 			= "arcos",
		ARCCOS_STR 			= "arccos",
		ATAN_STR 			= "atan",
		ARCTAN_STR 			= "arctan",
		ATG_STR 			= "atg",
		ARCTG_STR 			= "arctg",
		ACTAN_STR 			= "actan",
		ARCCTAN_STR 		= "arcctan",
		ACTG_STR 			= "actg",
		ARCCTG_STR 			= "arcctg",
		ACOT_STR 			= "acot",
		ARCCOT_STR 			= "arccot",
 		LN_STR 				= "ln",
		LOG2_STR 			= "log2",
		LOG10_STR 			= "log10",
		RAD_STR 			= "rad",
		EXP_STR 			= "exp",
		SQRT_STR 			= "sqrt",
		SINH_STR 			= "sinh",
		COSH_STR 			= "cosh",
		TANH_STR 			= "tanh",
		TGH_STR 			= "tgh",
		CTANH_STR 			= "ctanh",
		COTH_STR 			= "coth",
		CTGH_STR 			= "ctgh",
		SECH_STR 			= "sech",
		CSCH_STR 			= "csch",
		COSECH_STR 			= "cosech",
		DEG_STR 			= "deg",
		ABS_STR 			= "abs",
		SGN_STR				= "sgn",
		FLOOR_STR			= "floor",
		CEIL_STR			= "ceil",
		NOT_STR				= "not",
		ASINH_STR 			= "asinh",
		ARSINH_STR 			= "arsinh",
		ARCSINH_STR 		= "arcsinh",
		ACOSH_STR 			= "acosh",
		ARCOSH_STR 			= "arcosh",
		ARCCOSH_STR 		= "arccosh",
		ATANH_STR 			= "atanh",
		ARCTANH_STR 		= "arctanh",
		ATGH_STR 			= "atgh",
		ARCTGH_STR 			= "arctgh",
		ACTANH_STR 			= "actanh",
		ARCCTANH_STR 		= "arcctanh",
		ACOTH_STR 			= "acoth",
		ARCOTH_STR 			= "arcoth",
		ARCCOTH_STR 		= "arccoth",
		ACTGH_STR 			= "actgh",
		ARCCTGH_STR 		= "arcctgh",
		ASECH_STR 			= "asech",
		ARSECH_STR 			= "arsech",
		ARCSECH_STR 		= "arcsech",
		ACSCH_STR 			= "acsch",
		ARCSCH_STR 			= "arcsch",
		ARCCSCH_STR 		= "arccsch",
		ACOSECH_STR 		= "acosech",
		ARCOSECH_STR 		= "arcosech",
		ARCCOSECH_STR 		= "arccosech",
		SA_STR				= "sinc",
		SA1_STR				= "Sa",
		SINC_STR			= "Sinc",
		BELL_NUMBER_STR		= "Bell",
		LUCAS_NUMBER_STR	= "Luc",
		FIBONACCI_NUMBER_STR= "Fib",
		HARMONIC_NUMBER_STR	= "harm",
		IS_PRIME_STR		= "ispr",
		PRIME_COUNT_STR		= "Pi",
		EXP_INT_STR			= "Ei",
		LOG_INT_STR			= "li",
		OFF_LOG_INT_STR		= "Li",
		SIN_DESC 			= "trigonometric sine function",
		COS_DESC 			= "trigonometric cosine function",
		TAN_DESC			= "trigonometric tangent function",
		CTAN_DESC 			= "trigonometric cotangent function",
		SEC_DESC 			= "trigonometric secant function",
		COSEC_DESC 			= "trigonometric cosecant function",
		ASIN_DESC 			= "inverse trigonometric sine function",
		ACOS_DESC 			= "inverse trigonometric cosine function",
		ATAN_DESC 			= "inverse trigonometric tangent function",
		ACTAN_DESC 			= "inverse trigonometric cotangent function",
		LN_DESC 			= "natural logarithm function (base e)",
		LOG2_DESC 			= "binary logarithm function (base 2)",
		LOG10_DESC 			= "common logarithm function (base 10)",
		RAD_DESC 			= "degrees to radians function",
		EXP_DESC 			= "exponential function",
		SQRT_DESC 			= "squre root function",
		SINH_DESC 			= "hyperbolic sine function",
		COSH_DESC 			= "hyperbolic cosine function",
		TANH_DESC 			= "hyperbolic tangent function",
		COTH_DESC 			= "hyperbolic cotangent function",
		SECH_DESC 			= "hyperbolic secant function",
		CSCH_DESC 			= "hyperbolic cosecant function",
		DEG_DESC 			= "radians to degrees function",
		ABS_DESC 			= "absolut value function",
		SGN_DESC			= "signum function",
		FLOOR_DESC			= "floor function",
		CEIL_DESC			= "ceiling function",
		NOT_DESC			= "negation function",
		ARSINH_DESC			= "inverse hyperbolic sine function",
		ARCOSH_DESC			= "inverse hyperbolic cosine function",
		ARTANH_DESC			= "inverse hyperbolic tangent function",
		ARCOTH_DESC			= "inverse hyperbolic cotangent function",
		ARSECH_DESC			= "inverse hyperbolic secant function",
		ARCSCH_DESC			= "inverse hyperbolic cosecant function",
		SA_DESC				= "sinc function (normalized)",
		SINC_DESC			= "sinc function (unnormalized)",
		BELL_NUMBER_DESC	= "Bell number",
		LUCAS_NUMBER_DESC	= "Lucas number",
		FIBONACCI_NUMBER_DESC	= "Fionacci number",
		HARMONIC_NUMBER_DESC	= "Harmonic number",
		IS_PRIME_DESC		= "Prime number test (is number a prime?)",
		PRIME_COUNT_DESC	= "Prime-counting function - Pi(x)",
		EXP_INT_DESC		= "Exponential integral function - Ei(x)",
		LOG_INT_DESC		= "Logarithmic integral function - li(x)",
		OFF_LOG_INT_DESC	= "Offset logarithmic integral function - Li(x)"
	;
}
/**
 * Function2Arg
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
interface Function2Arg {
	int
		TYPE_ID 			= 5,
		LOG_ID 				= 1,
		MOD_ID				= 2,
		BINOM_COEFF_ID		= 3,
		BERNOULLI_NUMBER_ID	= 4,
		STIRLING1_NUMBER_ID	= 5,
		STIRLING2_NUMBER_ID	= 6,
		WORPITZKY_NUMBER_ID	= 7,
		EULER_NUMBER_ID		= 8,
		KRONECKER_DELTA_ID	= 9,
		EULER_POLYNOMIAL_ID	= 10,
		HARMONIC_NUMBER_ID	= 11
	;
	String
		LOG_STR 				= "log",
		MOD_STR 				= "mod",
		BINOM_COEFF_STR			= "C",
		BERNOULLI_NUMBER_STR	= "Bern",
		STIRLING1_NUMBER_STR	= "Stirl1",
		STIRLING2_NUMBER_STR	= "Stirl2",
		WORPITZKY_NUMBER_STR	= "Worp",
		EULER_NUMBER_STR		= "Euler",
		KRONECKER_DELTA_STR		= "KDelta",
		EULER_POLYNOMIAL_STR	= "EulerPol",
		HARMONIC_NUMBER_STR		= "Harm",
		LOG_DESC 				= "logarithm function",
		MOD_DESC				= "modulo function",
		BINOM_COEFF_DESC		= "binomial coefficient function",
		BERNOULLI_NUMBER_DESC	= "Bernoulli numbers",
		STIRLING1_NUMBER_DESC	= "Stirling numbers of the first kind",
		STIRLING2_NUMBER_DESC	= "Stirling numbers of the second kind",
		WORPITZKY_NUMBER_DESC	= "Worpitzky number",
		EULER_NUMBER_DESC		= "Euler number",
		KRONECKER_DELTA_DESC	= "Kronecker delta",
		EULER_POLYNOMIAL_DESC	= "EulerPol",
		HARMONIC_NUMBER_DESC	= "Harmonic number"
	;
}
/**
 * Function3Arg
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
interface Function3Arg {
	int
		TYPE_ID 			= 6,
		IF_CONDITION_ID		= 1,
		IF_ID 				= 2,
		CHI_ab_ID			= 3,
		CHI_AB_ID			= 4,
		CHI_Ab_ID			= 5,
		CHI_aB_ID			= 6
	;
	String
		IF_STR 				= "if",
		CHI_ab_STR			= "chi",
		CHI_AB_STR			= "CHi",
		CHI_Ab_STR			= "Chi",
		CHI_aB_STR			= "cHi",
		IF_DESC 			= "if function ( if(con, if_true, if_false) )",
		CHI_ab_DESC			= "Characteristic function for x in (a,b) - chi(x, a, b)",
		CHI_AB_DESC			= "Characteristic function for x in [a,b] - CHi(x, a, b)",
		CHI_Ab_DESC			= "Characteristic function for x in [a,b) - Chi(x, a, b)",
		CHI_aB_DESC			= "Characteristic function for x in (a,b] - cHi(x, a, b)"
	;
}
interface SpecialFunction {
	int
		TYPE_ID 			= 7,
		IFF_ID 				= 1,
		MIN_ID 				= 2,
		MAX_ID 				= 3,
		CONT_FRAC_ID		= 4,
		CONT_POL_ID			= 5,
		GCD_ID				= 6,
		LCM_ID				= 7,
		SUM_ID				= 8,
		PROD_ID				= 9,
		AVG_ID				= 10,
		VAR_ID				= 11,
		STD_ID				= 12
	;
	String
		IFF_STR 			= "iff",
		MIN_STR				= "min",
		MAX_STR				= "max",
		CONT_FRAC_STR		= "ConFrac",
		CONT_POL_STR		= "ConPol",
		GCD_STR				= "gcd",
		LCM_STR				= "lcm",
		SUM_STR				= "add",
		PROD_STR			= "multi",
		AVG_STR				= "mean",
		VAR_STR				= "var",
		STD_STR				= "std",
		IFF_DESC 			= "if function ( iff(con_1, if_true_1_exp, ..., con_n, if_true_n_exp) )",
		MIN_DESC 			= "Minimum function: min(a,b,c,...)",
		MAX_DESC 			= "Maximum function: max(a,b,c,...)",
		CONT_FRAC_DESC		= "Continued fraction: ConFrac(a,b,c,...)",
		CONT_POL_DESC		= "Continued polynomial: ConPol(a,b,c,...)",
		GCD_DESC			= "Greatest common divisor: gcd(a,b,c,...)",
		LCM_DESC			= "Least common multiple: lcm(a,b,c,...)",
		SUM_DESC			= "Summation operator add(a1,a2,a3,...,an)",
		PROD_DESC			= "Multiplication multi(a1,a2,a3,...,an)",
		AVG_DESC			= "Mean / average value mean(a1,a2,a3,...,an)",
		VAR_DESC			= "Bias-corrected sample variance var(a1,a2,a3,...,an)",
		STD_DESC			= "Bias-corrected sample standard deviation std(a1,a2,a3,...,an)"
	;
}
/**
 * Calculus
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
interface Calculus {
	int
		TYPE_ID 			= 8,
		SUM_ID 				= 1,
		PROD_ID 			= 3,
		INT_ID 				= 5,
		DER_ID 				= 6,
		DER_LEFT_ID 		= 7,
		DER_RIGHT_ID		= 8,
		DERN_ID				= 9,
		FORW_DIFF_ID		= 10,
		BACKW_DIFF_ID		= 11,
		AVG_ID				= 12,
		VAR_ID				= 13,
		STD_ID				= 14,
		MIN_ID				= 15,
		MAX_ID				= 16
	;
	String
		SUM_STR				= "sum",
		PROD_STR			= "prod",
		INT_STR				= "int",
		DER_STR				= "der",
		DER_LEFT_STR		= "der-",
		DER_RIGHT_STR		= "der+",
		DERN_STR			= "dern",
		FORW_DIFF_STR		= "diff",
		BACKW_DIFF_STR		= "difb",
		AVG_STR				= "avg",
		VAR_STR				= "vari",
		STD_STR				= "stdi",
		MIN_STR				= "mini",
		MAX_STR				= "maxi",

		SUM_DESC			= "summation operator (SIGMA) sum(i, from, to, f(i,...))",
		PROD_DESC			= "product operator (PI) prod(i, from, to, f(i,...))",
		INT_DESC			= "definite integral operator ( int(f(x,...), x, a, b) )",
		DER_DESC			= "derivative operator ( der(f(x,...), x) ) ",
		DER_LEFT_DESC		= "left derivative operator ( der-(f(x,...), x) ) ",
		DER_RIGHT_DESC		= "right derivative operator ( der+(f(x,...), x) ) ",
		DERN_DESC			= "n-th derivative operator ( dern(f(x,...), x) ) ",
		FORW_DIFF_DESC		= "forward difference operator",
		BACKW_DIFF_DESC		= "backward difference operator",
		AVG_DESC			= "Average operator avg(i, from, to, f(i,...))",
		VAR_DESC			= "Bias-corrected sample variance operator vari(i, from, to, f(i,...))",
		STD_DESC			= "Bias-corrected sample standard deviation operator stdi(i, from, to, f(i,...))",
		MIN_DESC			= "Minimum value mini(i, from, to, f(i,...))",
		MAX_DESC			= "Maximum valu maxi(i, from, to, f(i,...))"
	;
}
/**
 * Const
 *
 * Identifiers and strings (words) definition.
 * Used mailny by the addParserKeywords()
 */
interface Const {
	int
		TYPE_ID 					= 10,
		PI_ID 						= 1,
		EULER_ID 					= 2,
		EULER_MASCHERONI_ID			= 3,
		GOLDEN_RATIO_ID				= 4,
		PLASTIC_ID					= 5,
		EMBREE_TREFETHEN_ID			= 6,
		FEIGENBAUM_DELTA_ID			= 7,
		FEIGENBAUM_ALFA_ID			= 8,
		TWIN_PRIME_ID				= 9,
		MEISSEL_MERTEENS_ID			= 10,
		BRAUN_TWIN_PRIME_ID			= 11,
		BRAUN_PRIME_QUADR_ID		= 12,
		BRUIJN_NEWMAN_ID			= 13,
		CATALAN_ID					= 14,
		LANDAU_RAMANUJAN_ID			= 15,
		VISWANATH_ID				= 16,
		LEGENDRE_ID					= 17,
		RAMANUJAN_SOLDNER_ID		= 18,
		ERDOS_BORWEIN_ID			= 19,
		BERNSTEIN_ID				= 20,
		GAUSS_KUZMIN_WIRSING_ID		= 21,
		HAFNER_SARNAK_MCCURLEY_ID	= 22,
		GOLOMB_DICKMAN_ID			= 23,
		CAHEN_ID					= 24,
		LAPLACE_LIMIT_ID			= 25,
		ALLADI_GRINSTEAD_ID			= 26,
		LENGYEL_ID					= 27,
		LEVY_ID						= 28,
		APERY_ID					= 29,
		MILLS_ID					= 30,
		BACKHOUSE_ID				= 31,
		PORTER_ID					= 32,
		LIEB_QUARE_ICE_ID			= 33,
		NIVEN_ID					= 34,
		SIERPINSKI_ID				= 35,
		KHINCHIN_ID					= 36,
		FRANSEN_ROBINSON_ID			= 37,
		LANDAU_ID					= 38,
		PARABOLIC_ID				= 39,
		OMEGA_ID					= 40,
		MRB_ID						= 41,
		LI2_ID						= 42,
		GOMPERTZ_ID					= 43,
		NaN							= -1
	;
	String
		PI_STR 						= "pi",
		EULER_STR 					= "e",
		EULER_MASCHERONI_STR		= "[g]",
		GOLDEN_RATIO_STR			= "[p]",
		PLASTIC_STR					= "[r]",
		EMBREE_TREFETHEN_STR		= "[B*]",
		FEIGENBAUM_DELTA_STR		= "[D]",
		FEIGENBAUM_ALFA_STR			= "[a]",
		TWIN_PRIME_STR				= "[C2]",
		MEISSEL_MERTEENS_STR		= "[M1]",
		BRAUN_TWIN_PRIME_STR		= "[B2]",
		BRAUN_PRIME_QUADR_STR		= "[B4]",
		BRUIJN_NEWMAN_STR			= "[L]",
		CATALAN_STR					= "[K]",
		LANDAU_RAMANUJAN_STR		= "[K*]",
		VISWANATH_STR				= "[K.]",
		LEGENDRE_STR				= "[B'L]",
		RAMANUJAN_SOLDNER_STR		= "[m]",
		ERDOS_BORWEIN_STR			= "[EB]",
		BERNSTEIN_STR				= "[B]",
		GAUSS_KUZMIN_WIRSING_STR	= "[l]",
		HAFNER_SARNAK_MCCURLEY_STR	= "[s]",
		GOLOMB_DICKMAN_STR			= "[lm]",
		CAHEN_STR					= "[C]",
		LAPLACE_LIMIT_STR			= "[Ll]",
		ALLADI_GRINSTEAD_STR		= "[AG]",
		LENGYEL_STR					= "[L*]",
		LEVY_STR					= "[L.]",
		APERY_STR					= "[Dz3]",
		MILLS_STR					= "[T]",
		BACKHOUSE_STR				= "[Bh]",
		PORTER_STR					= "[Pt]",
		LIEB_QUARE_ICE_STR			= "[L2]",
		NIVEN_STR					= "[Nv]",
		SIERPINSKI_STR				= "[Ks]",
		KHINCHIN_STR				= "[Kh]",
		FRANSEN_ROBINSON_STR		= "[F]",
		LANDAU_STR					= "[La]",
		PARABOLIC_STR				= "[P2]",
		OMEGA_STR					= "[O]",
		MRB_STR						= "[M]",
		LI2_STR						= "[li2]",
		GOMPERTZ_STR				= "[G]",
		PI_DESC 					= "Pi, Archimedes' constant or Ludolph's number",
		EULER_DESC 					= "Napier's constant, or Euler's number, base of Natural logarithm",
		EULER_MASCHERONI_DESC		= "Euler-Mascheroni constant",
		GOLDEN_RATIO_DESC			= "Golden ratio",
		PLASTIC_DESC				= "Plastic constant",
		EMBREE_TREFETHEN_DESC		= "Embree-Trefethen constant",
		FEIGENBAUM_DELTA_DESC		= "Feigenbaum constant alfa",
		FEIGENBAUM_ALFA_DESC		= "Feigenbaum constant delta",
		TWIN_PRIME_DESC				= "Twin prime constant",
		MEISSEL_MERTEENS_DESC		= "Meissel-Mertens constant",
		BRAUN_TWIN_PRIME_DESC		= "Brun's constant for twin primes",
		BRAUN_PRIME_QUADR_DESC		= "Brun's constant for prime quadruplets",
		BRUIJN_NEWMAN_DESC			= "de Bruijn-Newman constant",
		CATALAN_DESC				= "Catalan's constant",
		LANDAU_RAMANUJAN_DESC		= "Landau-Ramanujan constant",
		VISWANATH_DESC				= "Viswanath's constant",
		LEGENDRE_DESC				= "Legendre's constant",
		RAMANUJAN_SOLDNER_DESC		= "Ramanujan-Soldner constant",
		ERDOS_BORWEIN_DESC			= "Erdos-Borwein constant",
		BERNSTEIN_DESC				= "Bernstein's constant",
		GAUSS_KUZMIN_WIRSING_DESC	= "Gauss-Kuzmin-Wirsing constant",
		HAFNER_SARNAK_MCCURLEY_DESC	= "Hafner-Sarnak-McCurley constant",
		GOLOMB_DICKMAN_DESC			= "Golomb-Dickman constant",
		CAHEN_DESC					= "Cahen's constant",
		LAPLACE_LIMIT_DESC			= "Laplace limit",
		ALLADI_GRINSTEAD_DESC		= "Alladi-Grinstead constant",
		LENGYEL_DESC				= "Lengyel's constant",
		LEVY_DESC					= "Levy's constant",
		APERY_DESC					= "Apery's constant",
		MILLS_DESC					= "Mills' constant",
		BACKHOUSE_DESC				= "Backhouse's constant",
		PORTER_DESC					= "Porter's constant",
		LIEB_QUARE_ICE_DESC			= "Lieb's square ice constant",
		NIVEN_DESC					= "Niven's constant",
		SIERPINSKI_DESC				= "Sierpinski's constant",
		KHINCHIN_DESC				= "Khinchin's constant",
		FRANSEN_ROBINSON_DESC		= "Fransen-Robinson constant",
		LANDAU_DESC					= "Landau's constant",
		PARABOLIC_DESC				= "Parabolic constant",
		OMEGA_DESC					= "Omega constant",
		MRB_DESC					= "MRB constant",
		LI2_DESC					= "li(2) - logarithmic integral function at x=2",
		GOMPERTZ_DESC				= "Gompertz constant"
		;
}
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