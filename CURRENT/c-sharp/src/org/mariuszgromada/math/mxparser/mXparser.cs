/*
 * @(#)mXparser.cs        4.2.0   2017-09-18
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
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Globalization;

using org.mariuszgromada.math.mxparser.mathcollection;
using org.mariuszgromada.math.mxparser.parsertokens;

[assembly: CLSCompliant(true)]
namespace org.mariuszgromada.math.mxparser {
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
	 * @version        4.2.0
	 *
	 * @see RecursiveArgument
	 * @see Expression
	 * @see Function
	 * @see Constant
	 */
	[CLSCompliant(true)]
	public sealed class mXparser {
		/**
		 * mXparser version
		 */
		internal const String VERSION = "4.2.0";
		/**
		 * FOUND / NOT_FOUND
		 * used for matching purposes
		 */
		internal const int NOT_FOUND = -1;
		internal const int FOUND = 0;
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
		public const int PRIMES_CACHE_NOT_INITIALIZED = -1;
		/**
		 * Threads number settings
		 */
		private static int THREADS_NUMBER = Environment.ProcessorCount;
		/**
		 * Empty expression for general help purposes.
		 */
		private static Expression mXparserExp = new Expression();
		/**
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is different than 0.3
		 *
		 * mXparser provides intelligent ULP rounding to avoid this
		 * type of errors.
		 */
		internal static bool ulpRounding = true;
		/**
		 * Internal limit for counter to avoid infinite loops while calculating
		 * expression defined in the way shown by below examples
		 *
		 * Argument x = new Argument("x = 2*y");
		 * Argument y = new Argument("y = 2*x");
		 * x.addDefinitions(y);
		 * y.addDefinitions(x);
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 */
		internal static int MAX_RECURSION_CALLS = 200;
		/**
		 * List of built-in tokens to remove.
		 */
		internal static List<String> tokensToRemove = new List<String>();
		/**
		 * List of built-in tokens to modify
		 */
		internal static List<TokenModification> tokensToModify = new List<TokenModification>();
		/**
		 * Indicator whether user defined tokens should override
		 * built-in tokens.
		 */
		internal static bool overrideBuiltinTokens = false;
		/**
		 * Options changeset
		 */
		internal static int optionsChangesetNumber = 0;
		/**
		 * Initialization of prime numbers cache.
		 * Cache size according to {@link PrimesCache#DEFAULT_MAX_NUM_IN_CACHE}
		 * @see PrimesCache
		 */
		public static void initPrimesCache() {
			primesCache = new PrimesCache();
		}
		/**
		 * Initialization of prime numbers cache.
		 * @param mximumNumberInCache The maximum integer number that
		 *                            will be stored in cache.
		 * @see PrimesCache
		 */
		public static void initPrimesCache(int mximumNumberInCache) {
			primesCache = new PrimesCache(mximumNumberInCache);
		}
		/**
		 * Initialization of prime numbers cache.
		 * @param primesCache The primes cache object
		 * @see PrimesCache
		 */
		public static void initPrimesCache(PrimesCache primesCache) {
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
		public static int getMaxNumInPrimesCache() {
			if (primesCache != null)
				return primesCache.getMaxNumInCache();
			else
				return PRIMES_CACHE_NOT_INITIALIZED;
		}
		/**
		 * Gets maximum threads number
		 * @return Threads number.
		 */
		public static int getThreadsNumber() {
			return THREADS_NUMBER;
		}
		/**
		 * Sets default threads number
		 * @param threadsNumber  Thread number.
		 */
		public static  void setDefaultThreadsNumber() {
			THREADS_NUMBER = Environment.ProcessorCount;
		}
		/**
		 * Sets threads number
		 */
		public static void setThreadsNumber(int threadsNumber) {
			if (threadsNumber > 0) THREADS_NUMBER = threadsNumber;
		}

		private static readonly DateTime Jan1st1970 = new DateTime
			(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		public static long currentTimeMillis() {
			return (long)(DateTime.UtcNow - Jan1st1970).TotalMilliseconds;
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
		public static double getFunctionValue(Expression f, Argument x, double x0) {
			x.setArgumentValue(x0);
			return f.calculate();
		}
		/**
		 * Converts List of double to double[]
		 *
		 * @param      numbers             the numbers list
		 *
		 * @return     numbers array
		 */
		public static double[] arrayList2double(List<Double> numbers) {
			if (numbers == null)
				return null;
			int size = numbers.Count;
			double[] newNumbers = new double[size];
			for (int i = 0; i < size; i++)
				newNumbers[i] = numbers[i];
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
		public static double[] getFunctionValues(Expression f, Argument index, double from, double to, double delta) {
			if ((Double.IsNaN(delta)) || (Double.IsNaN(from)) || (Double.IsNaN(to)) || (delta == 0))
				return null;
			int n = 0;
			double[] values;
			if ((to >= from) && (delta > 0)) {
				for (double i = from; i < to; i += delta)
					n++;
				n++;
				values = new double[n];
				int j = 0;
				for (double i = from; i < to; i += delta) {
					values[j] = getFunctionValue(f, index, i);
					j++;
				}
				values[j] = getFunctionValue(f, index, to);
			} else if ((to <= from) && (delta < 0)) {
				for (double i = from; i > to; i += delta)
					n++;
				n++;
				values = new double[n];
				int j = 0;
				for (double i = from; i > to; i += delta) {
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
		public static void setRandomGenerator(Random randomGenerator) {
			if (randomGenerator != null) ProbabilityDistributions.randomGenerator = randomGenerator;
		}
		/**
		 * Sets comparison mode to EXACT.
		 * @see BinaryRelations
		 */
		public static void setExactComparison() {
			BinaryRelations.setExactComparison();
		}
		/**
		 * Sets comparison mode to EPSILON.
		 * @see BinaryRelations
		 */
		public static void setEpsilonComparison() {
			BinaryRelations.setEpsilonComparison();
		}
		/**
		 * Sets epsilon value.
		 * @param epsilon   Epsilon value (grater than 0).
		 *
		 * @see #setEpsilonComparison()
		 * @see BinaryRelations
		 */
		public static void setEpsilon(double epsilon) {
			BinaryRelations.setEpsilon(epsilon);
		}
		/**
		 * Sets default epsilon value.
		 *
		 * @see #setEpsilonComparison()
		 * @see BinaryRelations#DEFAULT_COMPARISON_EPSILON
		 * @see BinaryRelations
		 */
		public static void setDefaultEpsilon() {
			BinaryRelations.setDefaultEpsilon();
		}
		/**
		 * Returns current epsilon value.
		 * @return  Returns current epsilon value.
		 *
		 * @see #setEpsilonComparison()
		 * @see BinaryRelations
		 */
		public static double getEpsilon() {
			return BinaryRelations.getEpsilon();
		}
		/**
		 * Checks if epsilon comparison mode is active;
		 * @return  True if epsilon mode is active, otherwise returns false.
		 * @see #setEpsilonComparison()
		 * @see #setExactComparison()
		 * @see BinaryRelations
		 */
		public static bool checkIfEpsilonMode() {
			return BinaryRelations.checkIfEpsilonMode();
		}
		/**
		 * Checks if exact comparison mode is active;
		 * @return  True if exact mode is active, otherwise returns false.
		 * @see #setEpsilonComparison()
		 * @see #setExactComparison()
		 * @see BinaryRelations
		 */
		public static bool checkIfExactMode() {
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
		public static void enableUlpRounding() {
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
		public static void disableUlpRounding() {
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
		public static bool checkIfUlpRounding() {
			return ulpRounding;
		}
		/**
		 * Internal limit to avoid infinite loops while calculating
		 * expression defined in the way shown by below examples.
		 *
		 * Argument x = new Argument("x = 2*y");
		 * Argument y = new Argument("y = 2*x");
		 * x.addDefinitions(y);
		 * y.addDefinitions(x);
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 *
		 * Currently does not affect properly defined recursive mode.
		 *
		 * @param maxAllowedRecursionDepth
		 */
		public static void setMaxAllowedRecursionDepth(int maxAllowedRecursionDepth) {
			MAX_RECURSION_CALLS = maxAllowedRecursionDepth;
		}
		/**
		 * Internal limit to avoid infinite loops while calculating
		 * expression defined in the way shown by below examples.
		 *
		 * Argument x = new Argument("x = 2*y");
		 * Argument y = new Argument("y = 2*x");
		 * x.addDefinitions(y);
		 * y.addDefinitions(x);
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 *
		 * Currently does not affect properly defined recursive mode.
		 */
		public static int getMaxAllowedRecursionDepth() {
			return MAX_RECURSION_CALLS;
		}
		/**
		 * Removes built-in tokens form the list of tokens recognized by the parsers.
		 * Procedure affects only tokens classified to built-in functions, built-in
		 * constants, built-in units, built-in random variables.
		 *
		 * @param tokens  List of tokens to remove.
		 */
		public static void removeBuiltinTokens(params String[] tokens) {
			if (tokens == null) return;
			foreach (String token in tokens)
				if (token != null)
					if (token.Length > 0)
						if (!tokensToRemove.Contains(token))
							tokensToRemove.Add(token);
			optionsChangesetNumber++;
		}
		/**
		 * Un-marks tokens previously marked to be removed.
		 * @param tokens List of tokens to un-mark.
		 */
		public static void unremoveBuiltinTokens(params String[] tokens) {
			if (tokens == null) return;
			if (tokens.Length == 0) return;
			if (tokensToRemove.Count == 0) return;
			foreach (String token in tokens)
				if (token != null)
					tokensToRemove.Remove(token);
			optionsChangesetNumber++;
		}
		/**
		 * Un-marks all tokens previously marked to be removed.
		 */
		public static void unremoveAllBuiltinTokens() {
			tokensToRemove.Clear();
			optionsChangesetNumber++;
		}
		/**
		 * Returns current list of tokens marked to be removed.
		 * @return Current list of tokens marked to be removed
		 */
		public static String[] getBuiltinTokensToRemove() {
			int tokensNum = tokensToRemove.Count;
			String[] tokensToRemoveArray = new String[tokensNum];
			for (int i = 0; i < tokensNum; i++)
				tokensToRemoveArray[i] = tokensToRemove[i];
			return tokensToRemoveArray;
		}
		/**
		 * Method to change definition of built-in token - more precisely
		 * using this method allows to modify token string recognized by the parser
		 * (i.e. sin(x) -> sinus(x)).
		 * Procedure affects only tokens classified to built-in functions, built-in
		 * constants, built-in units, built-in random variables.
		 * @param currentToken     Current token name
		 * @param newToken         New token name
		 */
		public static void modifyBuiltinToken(String currentToken, String newToken) {
			if (currentToken == null) return;
			if (currentToken.Length == 0) return;
			if (newToken == null) return;
			if (newToken.Length == 0) return;
			foreach (TokenModification tm in tokensToModify)
				if (tm.currentToken.Equals(currentToken)) return;
			TokenModification tma = new TokenModification();
			tma.currentToken = currentToken;
			tma.newToken = newToken;
			tma.newTokenDescription = null;
			tokensToModify.Add(tma);
			optionsChangesetNumber++;
		}
		/**
		 * Method to change definition of built-in token - more precisely
		 * using this method allows to modify token string recognized by the parser
		 * (i.e. sin(x) -> sinus(x)).
		 * Procedure affects only tokens classified to built-in functions, built-in
		 * constants, built-in units, built-in random variables.
		 * @param currentToken          Current token name
		 * @param newToken              New token name
		 * @param newTokenDescription   New token description (if null the previous one will be used)
		 */
		public static void modifyBuiltinToken(String currentToken, String newToken, String newTokenDescription) {
			if (currentToken == null) return;
			if (currentToken.Length == 0) return;
			if (newToken == null) return;
			if (newToken.Length == 0) return;
			foreach (TokenModification tm in tokensToModify)
				if (tm.currentToken.Equals(currentToken)) return;
			TokenModification tma = new TokenModification();
			tma.currentToken = currentToken;
			tma.newToken = newToken;
			tma.newTokenDescription = newTokenDescription;
			tokensToModify.Add(tma);
			optionsChangesetNumber++;
		}
		/**
		 * Un-marks tokens previously marked to be modified.
		 * @param currentOrNewTokens   List of tokens to be un-marked (current or modified).
		 */
		public static void unmodifyBuiltinTokens(params String[] currentOrNewTokens) {
			if (currentOrNewTokens == null) return;
			if (currentOrNewTokens.Length == 0) return;
			if (tokensToModify.Count == 0) return;
			List<TokenModification> toRemove = new List<TokenModification>();
			foreach (String token in currentOrNewTokens)
				if (token != null)
					if (token.Length > 0) {
						foreach (TokenModification tm in tokensToModify)
							if ((token.Equals(tm.currentToken)) || (token.Equals(tm.newToken))) toRemove.Add(tm);
					}
			foreach (TokenModification tm in toRemove)
				tokensToModify.Remove(tm);
			optionsChangesetNumber++;
		}
		/**
		 * Un-marks all tokens previously marked to be modified.
		 */
		public static void unmodifyAllBuiltinTokens() {
			tokensToModify.Clear();
			optionsChangesetNumber++;
		}
		/**
		 * Return details on tokens marked to be modified.
		 * @return String[i][0] - current token, String[i][1] - new token,
		 *                        String[i][2] - new token description.
		 */
		public static String[,] getBuiltinTokensToModify() {
			int tokensNum = tokensToModify.Count;
			String[,] tokensToModifyArray = new String[tokensNum, 3];
			for (int i = 0; i < tokensNum; i++) {
				TokenModification tm = tokensToModify[i];
				tokensToModifyArray[i, 0] = tm.currentToken;
				tokensToModifyArray[i, 1] = tm.newToken;
				tokensToModifyArray[i, 2] = tm.newTokenDescription;
			}
			return tokensToModifyArray;
		}
		/**
		 * Sets mXparser to override built-in tokens
		 * by user defined tokens.
		 */
		public static void setToOverrideBuiltinTokens() {
			overrideBuiltinTokens = true;
			optionsChangesetNumber++;
		}
		/**
		 * Sets mXparser not to override built-in tokens
		 * by user defined tokens.
		 */
		public static void setNotToOverrideBuiltinTokens() {
			overrideBuiltinTokens = false;
			optionsChangesetNumber++;
		}
		/**
		 * Checks whether mXparser is set to override built-in tokens.
		 *
		 * @return True if mXparser is set to override built-in tokens by
		 *         user defined tokens, otherwise false.
		 */
		public static bool checkIfsetToOverrideBuiltinTokens() {
			return overrideBuiltinTokens;
		}
		/**
		 * Returns token type description.
		 *
		 * @param tokenTypeId Token type id
		 * @return String representing token type description.
		 */
		public static String getTokenTypeDescription(int tokenTypeId) {
			String type = "";
			switch (tokenTypeId) {
				case ParserSymbol.TYPE_ID: type = ParserSymbol.TYPE_DESC; break;
				case ParserSymbol.NUMBER_TYPE_ID: type = "number"; break;
				case Operator.TYPE_ID: type = Operator.TYPE_DESC; break;
				case BooleanOperator.TYPE_ID: type = BooleanOperator.TYPE_DESC; break;
				case BinaryRelation.TYPE_ID: type = BinaryRelation.TYPE_DESC; break;
				case Function1Arg.TYPE_ID: type = Function1Arg.TYPE_DESC; break;
				case Function2Arg.TYPE_ID: type = Function2Arg.TYPE_DESC; break;
				case Function3Arg.TYPE_ID: type = Function3Arg.TYPE_DESC; break;
				case FunctionVariadic.TYPE_ID: type = FunctionVariadic.TYPE_DESC; break;
				case CalculusOperator.TYPE_ID: type = CalculusOperator.TYPE_DESC; break;
				case RandomVariable.TYPE_ID: type = RandomVariable.TYPE_DESC; break;
				case ConstantValue.TYPE_ID: type = ConstantValue.TYPE_DESC; break;
				case Argument.TYPE_ID: type = Argument.TYPE_DESC; break;
				case RecursiveArgument.TYPE_ID_RECURSIVE: type = RecursiveArgument.TYPE_DESC_RECURSIVE; break;
				case Function.TYPE_ID: type = Function.TYPE_DESC; break;
				case Constant.TYPE_ID: type = Constant.TYPE_DESC; break;
				case Unit.TYPE_ID: type = Unit.TYPE_DESC; break;
				case BitwiseOperator.TYPE_ID: type = BitwiseOperator.TYPE_DESC; break;
			}
			return type;
		}
		/**
		 * Converts integer number to hex string (plain text)
		 *
		 * @param number   Integer number
		 * @return         Hex string (i.e. FF23)
		 */
		public static String numberToHexString(int number) {
			return number.ToString("X");
		}
		/**
		 * Converts long number to hex string (plain text)
		 *
		 * @param number   Long number
		 * @return         Hex string (i.e. FF23)
		 */
		public static String numberToHexString(long number) {
			return number.ToString("X");
		}
		/**
		 * Converts (long)double number to hex string (plain text)
		 *
		 * @param number   Double number
		 * @return         Hex string (i.e. FF23)
		 */
		public static String numberToHexString(double number) {
			return numberToHexString((long)number);
		}
		/**
		 * Converts hex string into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex string.
		 *
		 * @param hexString   Hex string (i.e. 48656C6C6F)
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 */
		public static String hexString2AsciiString(String hexString) {
			String hexByteStr;
			int hexByteInt;
			String asciiString = "";
			for (int i = 0; i < hexString.Length; i += 2) {
				hexByteStr = hexString.Substring(i, 2);
				hexByteInt = int.Parse(hexByteStr, NumberStyles.HexNumber);
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
		public static String numberToAsciiString(int number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/**
		 * Converts number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number
		 *
		 * @param number   Long number (i.e. 310939249775 = '48656C6C6F')
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 */
		public static String numberToAsciiString(long number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/**
		 * Converts (long)double number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number casted to long type.
		 *
		 * @param number   Double number (i.e. 310939249775 = '48656C6C6F')
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 */
		public static String numberToAsciiString(double number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 *
		 * @param numberLiteral    Number literal in given numeral system with base between
		 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * @param numeralSystemBase             Numeral system base, between 1 and 36
		 * @return                 Decimal number after conversion. If conversion was not
		 *                         possible the Double.NaN is returned.
		 */
		public static double convOthBase2Decimal(String numberLiteral, int numeralSystemBase) {
			return NumberTheory.convOthBase2Decimal(numberLiteral, numeralSystemBase);
		}
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 * Base specification included in number literal.
		 *
		 * Examples: 2 for b2.1001 or b.1001, 1 for b1.111, 23 for b23.123afg
		 * 16 for b16.123acdf or h.123acdf.
		 *
		 * @param numberLiteral Number literal string.
		 *
		 * Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
		 * b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26.
		 * b27. b28. b29. b30. b31. b32. b33. b34. b35. b36.
		 *
		 * Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C,
		 * 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P,
		 * 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 *
		 * @return     Decimal number after conversion. If conversion was not
		 *             possible the Double.NaN is returned.
		 */
		public static double convOthBase2Decimal(String numberLiteral) {
			return NumberTheory.convOthBase2Decimal(numberLiteral);
		}
		/**
		 * Other base to decimal conversion.
		 *
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double.NaN is returned.
		 */
		public static double convOthBase2Decimal(int numeralSystemBase, params int[] digits) {
			return NumberTheory.convOthBase2Decimal(numeralSystemBase, digits);
		}
		/**
		 * Other base to decimal conversion.
		 *
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double.NaN is returned.
		 */
		public static double convOthBase2Decimal(double numeralSystemBase, params double[] digits) {
			return NumberTheory.convOthBase2Decimal(numeralSystemBase, digits);
		}
		/**
		 * Decimal number to other numeral system conversion with base
		 * between 1 and 36.
		 *
		 * @param decimalNumber    Decimal number
		 * @param numeralSystemBase       Numeral system base between 1 and 36
		 * @return           Number literal representing decimal number in
		 *                   given numeral numeral system. Digits
		 *                   0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8,
		 *                   9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G,
		 *                   17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O,
		 *                   25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W,
		 *                   33:X, 34:Y, 35:Z. If conversion was not possible
		 *                   the "NaN" string is returned.
		 */
		public static String convDecimal2OthBase(double decimalNumber, int numeralSystemBase) {
			return NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase);
		}
		/**
		 * Decimal number to other numeral system conversion with base
		 * between 1 and 36.
		 *
		 * @param decimalNumber    Decimal number
		 * @param numeralSystemBase       Numeral system base between 1 and 36
		 * @param format     If 1 then always bxx. is used, i.e. b1. or b16.
		 *                   If 2 then for binary b. is used, for octal o. is used,
		 *                   for hexadecimal h. is used, otherwise bxx. is used
		 *                   where xx is the numeral system base specification.
		 *
		 * @return           Number literal representing decimal number in
		 *                   given numeral numeral system.
		 *
		 * Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
		 * b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26.
		 * b27. b28. b29. b30. b31. b32. b33. b34. b35. b36.
		 *
		 * Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C,
		 * 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P,
		 * 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 *
		 * If conversion was not possible the "NaN" string is returned.
		 */
		public static String convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format) {
			return NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, format);
		}
		public static void doNothing(Object o) {
		}
		private static void consoleWriteLine(Object o) {
			#if PCL || NETSTANDARD
				System.Diagnostics.Debug.WriteLine(o);
			#else
				Console.WriteLine(o);
			#endif
		}
		private static void consoleWriteLine() {
			#if PCL || NETSTANDARD
				System.Diagnostics.Debug.WriteLine("");
			#else
				Console.WriteLine();
			#endif
		}
		private static void consoleWrite(Object o) {
			#if PCL || NETSTANDARD
				System.Diagnostics.Debug.WriteLine(o);
			#else
				Console.Write(o);
			#endif
		}
		/**
		 * Prints object.toString to the Console + new line
		 *
		 * @param o    Object to print
		 */
		public static void consolePrintln(Object o) {
			if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.Equals(""))) {
				consoleWrite(CONSOLE_PREFIX);
				CONSOLE_OUTPUT = CONSOLE_PREFIX;
			}
			consoleWriteLine(o);
			CONSOLE_ROW_NUMBER++;
			consoleWrite(CONSOLE_PREFIX);
			CONSOLE_OUTPUT = CONSOLE_OUTPUT + o + "\n" + CONSOLE_OUTPUT_PREFIX;
		}
		/**
		 * Prints array of strings
		 *
		 * @param stringArray  array of strinfs
		 */
		public static void consolePrintln(String[] stringArray) {
			if (stringArray == null) {
				consolePrintln("null");
				return;
			}
			foreach (String s in stringArray)
				consolePrintln(s);
		}
		/**
		 * Prints new line to the Console, no new line
		 *
		 */
		public static void consolePrintln() {
			if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.Equals(""))) {
				consoleWrite(CONSOLE_PREFIX);
				CONSOLE_OUTPUT = CONSOLE_PREFIX;
			}
			consoleWriteLine();
			CONSOLE_ROW_NUMBER++;
			consoleWrite(CONSOLE_PREFIX);
			CONSOLE_OUTPUT = CONSOLE_OUTPUT + "\n" + CONSOLE_OUTPUT_PREFIX;
		}
		/**
		 * Prints object.toString to the Console, no new line
		 *
		 * @param o    Object to print
		 */
		public static void consolePrint(Object o) {
			if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.Equals(""))) {
				consoleWrite(CONSOLE_PREFIX);
				CONSOLE_OUTPUT = CONSOLE_PREFIX;
			}
			consoleWrite(o);
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
		public static void resetConsoleOutput() {
			CONSOLE_OUTPUT = "";
			CONSOLE_ROW_NUMBER = 1;
		}
		/**
		 * Sets default console prefix.
		 */
		public static void setDefaultConsolePrefix() {
			CONSOLE_PREFIX = "[mXparser-v." + VERSION + "] ";
		}
		/**
		 * Sets default console output string prefix.
		 */
		public static void setDefaultConsoleOutputPrefix() {
			CONSOLE_OUTPUT_PREFIX = "[mXparser-v." + VERSION + "] ";
		}
		/**
		 * Sets console prefix.
		 * @param consolePrefix String containing console prefix definition.
		 */
		public static void setConsolePrefix(String consolePrefix) {
			CONSOLE_PREFIX = consolePrefix;
		}
		/**
		 * Sets console output string prefix.
		 * @param consoleOutputPrefix String containing console output prefix definition.
		 */
		public static void setConsoleOutputPrefix(String consoleOutputPrefix) {
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
		 * @see mXparser#consolePrintln();
		 * @see mXparser#resetConsoleOutput();
		 */
		public static String getConsoleOutput() {
			return CONSOLE_OUTPUT;
		}
		/**
		 * General mXparser expression help
		 *
		 * @return String with all general help content
		 */
		public static String getHelp() {
			return mXparserExp.getHelp();
		}
		/**
		 * General mXparser expression help - in-line key word searching
		 * @param   word    Key word to be searched
		 * @return  String with all help content
		 * lines containing given keyword
		 */
		public static String getHelp(String word) {
			return mXparserExp.getHelp(word);
		}
		/**
		 * Prints all help content.
		 */
		public static void consolePrintHelp() {
			consoleWriteLine(getHelp());
		}
		/**
		 * Prints filtered help content.
		 * @param word      Key word.
		 */
		public static void consolePrintHelp(String word) {
			consoleWriteLine(getHelp(word));
		}
		/**
		 * Returns list of key words known to the parser
		 *
		 * @return      List of keywords known to the parser.
		 *
		 * @see KeyWord
		 * @see KeyWord#wordTypeId
		 * @see mXparser#getHelp()
		 */
		public static List<KeyWord> getKeyWords() {
			return mXparserExp.getKeyWords();
		}
		/**
		 * Returns list of key words known to the parser
		 *
		 * @param query Give any string to filter list of key words against this string.
		 *              User more precise syntax: str=tokenString, desc=tokenDescription,
		 *              syn=TokenSyntax, sin=tokenSince, wid=wordId, tid=wordTypeId
		 *              to narrow the result.
		 *
		 * @return      List of keywords known to the parser filter against query string.
		 *
		 * @see KeyWord
		 * @see KeyWord#wordTypeId
		 * @see mXparser#getHelp(String)
		 */
		public static List<KeyWord> getKeyWords(String query) {
			return mXparserExp.getKeyWords(query);
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
		public static bool regexMatch(String str, String pattern){
			return Regex.IsMatch(str, "^(" + pattern + ")$");
		}
		/**
		 * Prints tokens to the console.
		 * @param tokens   Tokens list.
		 *
		 * @see Expression#getCopyOfInitialTokens()
		 * @see Token
		 */
		public static void consolePrintTokens(List<Token> tokens) {
			Expression.showTokens(tokens);
		}
		/**
		 * License info.
		 */
		public const String LICENSE =
			"                      mXparser - version " + VERSION + "\n" +
			"         A flexible mathematical eXpressions parser for C#.\n" +
			"                   (port from mXparser for JAVA)\n" +
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
		 * Gets license info
		 *
		 * @return     license info as string.
		 */
		public static String getLicense() {
			return mXparser.LICENSE;
		}
		/**
		 * Waits given number of milliseconds
		 *
		 * @param n Number of milliseconds
		 */
		public static void wait(int n) {
			long t0, t1;
			t0 = DateTime.Now.Millisecond;
			do {
				t1 = DateTime.Now.Millisecond;
			} while (t1 - t0 < n);
		}
		/*
		 * mXparser version names
		 */
		public const String NAMEv10 = "1.0";
		public const String NAMEv20 = "2.0";
		public const String NAMEv23 = "2.3";
		public const String NAMEv24 = "2.4";
		public const String NAMEv30 = "3.0";
		public const String NAMEv40 = "4.0";
		public const String NAMEv41 = "4.1";
		public const String NAMEv42 = "4.2";
	}
}
