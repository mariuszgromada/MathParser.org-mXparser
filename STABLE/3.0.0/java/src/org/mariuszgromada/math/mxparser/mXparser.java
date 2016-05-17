/*
 * @(#)mXparser.java        3.0.0    2016-05-07
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
import java.util.Random;
import java.util.regex.Pattern;

import org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations;
import org.mariuszgromada.math.mxparser.mathcollection.PrimesCache;
import org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions;
import org.mariuszgromada.math.mxparser.parsertokens.Token;
/**
 * mXparser class provides usefull methods when parsing, calculating or
 * parameters transforming.
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 *                 <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br>
 *                 <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br>
 *                 <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br>
 *                 <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br>
 *                 <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br>
 *                 <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br>
 *
 * @version        3.0.0
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
	static final String VERSION = "3.0.0";
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
	private static final Expression mXparserHelp = new Expression();
	/**
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is different than 0.3
	 *
	 * mXparser provides intelligent ULP rounding to avoid this
	 * type of errors.
	 */
	static boolean ulpRounding = true;
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
	 * Sets {@link mXparser#primesCache} to null
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
	 *
	 * @return Threads number.
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
	 *
	 * @param threadsNumber  Thread number.
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
	 * Converts ArrayList of double to double[]
	 *
	 * @param      numbers             the numbers list
	 *
	 * @return     numbers array
	 */
	public static final double[] arrayList2double(ArrayList<Double> numbers) {
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
	 * Modifies random generator used by the ProbabilityDistributions class.
	 *
	 * @param randomGenerator      Random generator.
	 * @see ProbabilityDistributions
	 * @see ProbabilityDistributions#randomGenerator
	 */
	public static final void setRandomGenerator(Random randomGenerator) {
		if (randomGenerator != null) ProbabilityDistributions.randomGenerator = randomGenerator;
	}
	/**
	 * Sets comparison mode to EXACT.
	 * @see BinaryRelations
	 */
	public static final void setExactComparison() {
		BinaryRelations.setExactComparison();
	}
	/**
	 * Sets comparison mode to EPSILON.
	 * @see BinaryRelations
	 */
	public static final void setEpsilonComparison() {
		BinaryRelations.setEpsilonComparison();
	}
	/**
	 * Sets epsilon value.
	 * @param epsilon   Epsilon value (grater than 0).
	 *
	 * @see #setEpsilonComparison()
	 * @see BinaryRelations
	 */
	public static final void setEpsilon(double epsilon) {
		BinaryRelations.setEpsilon(epsilon);
	}
	/**
	 * Sets default epsilon value.
	 *
	 * @see #setEpsilonComparison()
	 * @see BinaryRelations#DEFAULT_COMPARISON_EPSILON
	 * @see BinaryRelations
	 */
	public static final void setDefaultEpsilon() {
		BinaryRelations.setDefaultEpsilon();
	}
	/**
	 * Returns current epsilon value.
	 * @return  Returns current epsilon value.
	 *
	 * @see #setEpsilonComparison()
	 * @see BinaryRelations
	 */
	public static final double getEpsilon() {
		return BinaryRelations.getEpsilon();
	}
	/**
	 * Checks if epsilon comparison mode is active;
	 * @return  True if epsilon mode is active, otherwise returns false.
	 * @see #setEpsilonComparison()
	 * @see #setExactComparison()
	 * @see BinaryRelations
	 */
	public static final boolean checkIfEpsilonMode() {
		return BinaryRelations.checkIfEpsilonMode();
	}
	/**
	 * Checks if exact comparison mode is active;
	 * @return  True if exact mode is active, otherwise returns false.
	 * @see #setEpsilonComparison()
	 * @see #setExactComparison()
	 * @see BinaryRelations
	 */
	public static final boolean checkIfExactMode() {
		return BinaryRelations.checkIfExactMode();
	}
	/**
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent ULP rounding
	 * to minimize misleading results. By default this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Using this mode 0.1 + 0.1 + 0.1 = 0.3
	 */
	public static final void enableUlpRounding() {
		ulpRounding = true;
	}
	/**
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent ULP rounding
	 * to minimize misleading results. By default this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different than 0.3.
	 */
	public static final void disableUlpRounding() {
		ulpRounding = false;
	}
	/**
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent ULP rounding
	 * to minimize misleading results. By default this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Using this mode 0.1 + 0.1 + 0.1 = 0.3
	 *
	 * @return True if ULP rounding is enabled, otherwise false.
	 */
	public static final boolean checkIfUlpRounding() {
		return ulpRounding;
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
	 * @see mXparser#consolePrint(Object)
	 * @see mXparser#consolePrintln(Object)
	 * @see mXparser#consolePrintln()
	 * @see mXparser#resetConsoleOutput()
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
	 *
	 * @param consolePrefix String containing console prefix definition.
	 */
	public void setConsolePrefix(String consolePrefix) {
		CONSOLE_PREFIX = consolePrefix;
	}
	/**
	 * Sets console output string prefix.
	 *
	 * @param consoleOutputPrefix String containing console output prefix definition.
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
	 * @see mXparser#consolePrint(Object)
	 * @see mXparser#consolePrintln(Object)
	 * @see mXparser#consolePrintln()
	 * @see mXparser#resetConsoleOutput()
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
		return mXparserHelp.getHelp();
	}
	/**
	 * General mXparser expression help - in-line key word searching
	 * @param   word    Key word to be searched
	 * @return  String with all help content
	 * lines containing given keyword
	 */
	public static final String getHelp(String word) {
		return mXparserHelp.getHelp(word);
	}
	/**
	 * Prints all help content.
	 */
	public static final void consolePrintHelp() {
		System.out.println(getHelp());
	}
	/**
	 * Prints filtered help content.
	 * @param word      Key word.
	 */
	public static final void consolePrintHelp(String word) {
		System.out.println(getHelp(word));
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
     * Prints tokens to the console.
     * @param tokens   Tokens list.
     * 
     * @see Expression#getCopyOfInitialTokens()
     * @see Token
     */
    public static final void consolePrintTokens(ArrayList<Token> tokens) {
    	Expression.showTokens(tokens);
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
		"    mariuszgromada.org@gmail.com\n" +
		"    http://mathspace.plt/\n" +
		"    http://mathparser.org/\n" +
		"    http://github.com/mariuszgromada/MathParser.org-mXparser\n" +
		"    http://mariuszgromada.github.io/MathParser.org-mXparser/\n" +
		"    http://mxparser.sourceforge.net/\n" +
		"    http://bitbucket.org/mariuszgromada/mxparser/\n" +
		"    http://mxparser.codeplex.com/\n" +
		"    http://janetsudoku.mariuszgromada.org/\n"
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
