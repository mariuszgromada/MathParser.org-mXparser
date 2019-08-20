/*
 * @(#)mXparser.cs        4.3.0   2018-12-12
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2019 MARIUSZ GROMADA. All rights reserved.
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
 *     http://scalarmath.org/
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro
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
	/// <summary>
	/// mXparser class provides usefull methods when parsing, calculating or
	/// parameters transforming.
	/// </summary>
	///
	/// <remarks>
	/// Author: <b>Mariusz Gromada</b><br/>
	/// <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br/>
	/// <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br/>
	/// <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br/>
	/// <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br/>
	/// <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br/>
	/// <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br/>
	/// <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br/>
	/// <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br/>
	/// <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br/>
	/// <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br/>
	/// <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br/>
	/// <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br/>
	/// <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br/>
	/// <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br/>
	/// <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a>
	/// <para/>
	/// Version: 4.3.0
	/// </remarks>
	///
	/// <seealso cref="RecursiveArgument"/>
	/// <seealso cref="Expression"/>
	/// <seealso cref="Function"/>
	/// <seealso cref="Constant"/>
	[CLSCompliant(true)]
	public sealed class mXparser {
		/// <summary>mXparser version</summary>
		public const String VERSION = "4.3.0";
		public const String VERSION_CODE_NAME = "Caprica";
		public const String VERSION_NAME = VERSION + " " + VERSION_CODE_NAME;
		/// <summary>
		/// <see cref="FOUND"/> / <see cref="NOT_FOUND"/>
		/// used for matching purposes
		/// </summary>
		internal const int NOT_FOUND = -1;
		internal const int FOUND = 0;
		/// <summary>Console output string  for below methods</summary>
		///
		/// <seealso cref="mXparser.consolePrintln(Object)"/>
		/// <seealso cref="mXparser.consolePrint(Object)"/>
		private static volatile String CONSOLE_OUTPUT = "";
		private static volatile String CONSOLE_PREFIX = "[mXparser-v." + VERSION + "] ";
		private static volatile String CONSOLE_OUTPUT_PREFIX = CONSOLE_PREFIX;
		private static volatile int CONSOLE_ROW_NUMBER = 1;
		/// <summary>Prime numbers cache</summary>
		public static PrimesCache primesCache;
		public const int PRIMES_CACHE_NOT_INITIALIZED = -1;
		/// <summary>Threads number settings</summary>
		private static int THREADS_NUMBER = Environment.ProcessorCount;
		/// <summary>Empty expression for general help purposes.</summary>
		internal static volatile Expression mXparserExp = new Expression();
		/// <summary>
		/// Double floating-point precision arithmetic causes
		/// rounding problems, i.e. 0.1 + 0.1 + 0.1 is different than 0.3
		/// <para/>
		/// mXparser provides intelligent ULP rounding to avoid this
		/// type of errors.
		/// </summary>
		internal volatile static bool ulpRounding = true;
		/// <summary>
		/// Indicator marking whether to round final result
		/// to precise integer when result is very close
		/// to integer, solves problems like
		/// sin(pi) = 0
		/// </summary>
		internal volatile static bool almostIntRounding = true;
		internal const int DEFAULT_MAX_RECURSION_CALLS = 200;
		/// <summary>
		/// Internal limit for counter to avoid infinite loops while calculating
		/// expression defined in the way shown by below examples
		/// <code>
		/// Argument x = new Argument("x = 2*y");
		/// Argument y = new Argument("y = 2*x");
		/// x.addDefinitions(y);
		/// y.addDefinitions(x);
		/// </code>
		/// <code>
		/// Function f = new Function("f(x) = 2*g(x)");
		/// Function g = new Function("g(x) = 2*f(x)");
		/// f.addDefinitions(g);
		/// g.addDefinitions(f);
		/// </code>
		/// </summary>
		internal volatile static int MAX_RECURSION_CALLS = DEFAULT_MAX_RECURSION_CALLS;
		/// <summary>List of built-in tokens to remove.</summary>
		internal volatile static List<String> tokensToRemove = new List<String>();
		/// <summary>List of built-in tokens to modify</summary>
		internal volatile static List<TokenModification> tokensToModify = new List<TokenModification>();
		/// <summary>
		/// Indicator whether mXparser operates in radians / degrees mode
		/// <list type="definition">
		/// <item><term>true</term><description>degrees mode</description></item>
		/// <item><term>false</term><description>radians mode</description></item>
		/// </list>
		/// </summary>
		/// <remarks>
		/// Default false (radians mode)
		/// </remarks>
		internal volatile static bool degreesMode = false;
		/// <summary>
		/// Indicator whether user defined tokens should override
		/// built-in tokens.
		/// </summary>
		internal volatile static bool overrideBuiltinTokens = false;
		/// <summary>Options changeset</summary>
		internal volatile static int optionsChangesetNumber = 0;
		/// <summary>Indicator whether to call cancel current calculation</summary>
		private static volatile bool cancelCurrentCalculationFlag = false;
		/// <summary>
		/// Initialization of prime numbers cache.
		/// Cache size according to <see cref="PrimesCache.DEFAULT_MAX_NUM_IN_CACHE"/>
		/// </summary>
		/// <seealso cref="PrimesCache"/>
		public static void initPrimesCache() {
			primesCache = new PrimesCache();
		}
		/// <summary>
		/// Returns true in case when primes cache initialization was successful,
		/// otherwise returns false.
		/// </summary>
		/// <returns>
		///     Returns true in case when primes cache initialization was successful,
		///     otherwise returns false.
		/// </returns>
		public static bool isInitPrimesCacheSuccessful() {
			if (primesCache == null) return false;
			lock (primesCache) {
				return primesCache.isInitSuccessful();
			}
		}
		/// <summary>Initialization of prime numbers cache.</summary>
		/// 
		/// <param name="mximumNumberInCache">
		///     The maximum integer number that
		///     will be stored in cache.
		/// </param>
		///                            
		/// <seealso cref="PrimesCache"/>
		public static void initPrimesCache(int mximumNumberInCache) {
			primesCache = new PrimesCache(mximumNumberInCache);
		}
		/// <summary>Initialization of prime numbers cache.</summary>
		/// 
		/// <param name="primesCache">The primes cache object</param>
		/// 
		/// <seealso cref="PrimesCache"/>
		public static void initPrimesCache(PrimesCache primesCache) {
			mXparser.primesCache = primesCache;
		}
		/// <summary>Sets <see cref="primesCache"/> to null</summary>
		public static void setNoPrimesCache() {
			primesCache = null;
		}
		/// <summary>Returns maximum integer number in primes cache</summary>
		/// 
		/// <returns>
		///     If primes cache was initialized then maximum number in
		///     primes cache, otherwise <see cref="PRIMES_CACHE_NOT_INITIALIZED"/>
		/// </returns>
		public static int getMaxNumInPrimesCache() {
			if (primesCache != null) {
				lock (primesCache) {
					return primesCache.getMaxNumInCache();
				}
			} else
				return PRIMES_CACHE_NOT_INITIALIZED;
		}
		/// <summary>Gets maximum threads number</summary>
		/// 
		/// <returns>Threads number.</returns>
		public static int getThreadsNumber() {
			return THREADS_NUMBER;
		}
		/// <summary>Sets default threads number</summary>
		public static void setDefaultThreadsNumber() {
			THREADS_NUMBER = Environment.ProcessorCount;
		}
		/// <summary>Sets threads number</summary>
		public static void setThreadsNumber(int threadsNumber) {
			if (threadsNumber > 0) THREADS_NUMBER = threadsNumber;
		}

		private static readonly DateTime Jan1st1970 = new DateTime
			(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		public static long currentTimeMillis() {
			return (long)(DateTime.UtcNow - Jan1st1970).TotalMilliseconds;
		}
		/// <summary>Calculates function f(x0) (given as expression) assigning Argument x = x0;</summary>
		///
		/// <param name="f">the expression</param>
		/// <param name="x">the argument</param>
		/// <param name="x0">the argument value</param>
		///
		/// <returns>f.calculate()</returns>
		///
		/// <seealso cref="Expression"/>
		public static double getFunctionValue(Expression f, Argument x, double x0) {
			x.setArgumentValue(x0);
			return f.calculate();
		}
		/// <summary>Converts List of double to double[]</summary>
		///
		/// <param name="numbers">the numbers list</param>
		///
		/// <returns>numbers array</returns>
		public static double[] arrayList2double(List<Double> numbers) {
			if (numbers == null)
				return null;
			int size = numbers.Count;
			double[] newNumbers = new double[size];
			for (int i = 0; i < size; i++)
				newNumbers[i] = numbers[i];
			return newNumbers;
		}
		/// <summary>
		/// Returns array of double values of the function f(i)
		/// calculated on the range: i = from to i = to by step = delta
		/// </summary>
		/// 
		/// <param name="f">Function expression</param>
		/// <param name="index">Index argument</param>
		/// <param name="from">'from' value</param>
		/// <param name="to">'to' value</param>
		/// <param name="delta">'delta' step definition</param>
		/// 
		/// <returns>Array of function values</returns>
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
		/// <summary>Modifies random generator used by the ProbabilityDistributions class.</summary>
		///
		/// <param name="randomGenerator">Random generator.</param>
		/// 
		/// <seealso cref="ProbabilityDistributions"/>
		/// <seealso cref="ProbabilityDistributions.randomGenerator"/>
		public static void setRandomGenerator(Random randomGenerator) {
			if (randomGenerator != null) ProbabilityDistributions.randomGenerator = randomGenerator;
		}
		/// <summary>Sets comparison mode to EXACT.</summary>
		/// 
		/// <seealso cref="BinaryRelations"/>
		public static void setExactComparison() {
			BinaryRelations.setExactComparison();
		}
		/// <summary>Sets comparison mode to EPSILON.</summary>
		/// 
		/// <seealso cref="BinaryRelations"/>
		public static void setEpsilonComparison() {
			BinaryRelations.setEpsilonComparison();
		}
		/// <summary>Sets epsilon value.</summary>
		/// 
		/// <param name="epsilon">Epsilon value (grater than 0).</param>
		///
		/// <seealso cref="setEpsilonComparison()"/>
		/// <seealso cref="BinaryRelations"/>
		public static void setEpsilon(double epsilon) {
			BinaryRelations.setEpsilon(epsilon);
		}
		/// <summary>Sets default epsilon value.</summary>
		///
		/// <seealso cref="setEpsilonComparison()"/>
		/// <seealso cref="BinaryRelations.DEFAULT_COMPARISON_EPSILON"/>
		/// <seealso cref="BinaryRelations"/>
		public static void setDefaultEpsilon() {
			BinaryRelations.setDefaultEpsilon();
		}
		/// <summary>Returns current epsilon value.</summary>
		/// 
		/// <returns>Returns current epsilon value.</returns>
		///
		/// <seealso cref="setEpsilonComparison()"/>
		/// <seealso cref="BinaryRelations"/>
		public static double getEpsilon() {
			return BinaryRelations.getEpsilon();
		}
		/// <summary>Checks if epsilon comparison mode is active;</summary>
		/// 
		/// <returns>True if epsilon mode is active, otherwise returns false.</returns>
		/// 
		/// <seealso cref="setEpsilonComparison()"/>
		/// <seealso cref="setExactComparison()"/>
		/// <seealso cref="BinaryRelations"/>
		public static bool checkIfEpsilonMode() {
			return BinaryRelations.checkIfEpsilonMode();
		}
		/// <summary>Checks if exact comparison mode is active;</summary>
		/// 
		/// <returns>True if exact mode is active, otherwise returns false.</returns>
		/// 
		/// <seealso cref="setEpsilonComparison()"/>
		/// <seealso cref="setExactComparison()"/>
		/// <seealso cref="BinaryRelations"/>
		public static bool checkIfExactMode() {
			return BinaryRelations.checkIfExactMode();
		}
		/// <summary>
		/// Double floating-point precision arithmetic causes
		/// rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
		/// additionally doubles are having a lot of advantages
		/// providing flexible number representation regardless of
		/// number size. mXparser is fully based on double numbers
		/// and that is why is providing intelligent ULP rounding
		/// to minimize misleading results. By default this option is
		/// enabled resulting in automatic rounding only in some cases.
		/// Using this mode 0.1 + 0.1 + 0.1 = 0.3
		/// </summary>
		public static void enableUlpRounding() {
			ulpRounding = true;
		}
		/// <summary>
		/// Double floating-point precision arithmetic causes
		/// rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
		/// additionally doubles are having a lot of advantages
		/// providing flexible number representation regardless of
		/// number size. mXparser is fully based on double numbers
		/// and that is why is providing intelligent ULP rounding
		/// to minimize misleading results. By default this option is
		/// enabled resulting in automatic rounding only in some cases.
		/// Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different than 0.3.
		/// </summary>
		public static void disableUlpRounding() {
			ulpRounding = false;
		}
		/// <summary>
		/// Double floating-point precision arithmetic causes
		/// rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different than 0.3,
		/// additionally doubles are having a lot of advantages
		/// providing flexible number representation regardless of
		/// number size. mXparser is fully based on double numbers
		/// and that is why is providing intelligent ULP rounding
		/// to minimize misleading results. By default this option is
		/// enabled resulting in automatic rounding only in some cases.
		/// Using this mode 0.1 + 0.1 + 0.1 = 0.3
		/// </summary>
		///
		/// <returns>True if ULP rounding is enabled, otherwise false.</returns>
		public static bool checkIfUlpRounding() {
			return ulpRounding;
		}
		/// <summary>
		/// Enables almost integer rounding option causing
		/// rounding final calculation result to precise integer
		/// if and only if result is very close to integer.
		/// Very close condition depends on epsilon.
		/// </summary>
		///
		/// <seealso cref="mXparser.setEpsilon(double)"/>
		/// <seealso cref="mXparser.getEpsilon()"/>
		/// <seealso cref="Expression.calculate()"/>
		public static void enableAlmostIntRounding() {
			almostIntRounding = true;
		}
		/// <summary>
		/// Disables almost integer rounding option causing
		/// rounding final calculation result to precise integer
		/// if and only if result is very close to integer.
		/// Very close condition depends on epsilon.
		/// </summary>
		///
		/// <seealso cref="mXparser.setEpsilon(double)"/>
		/// <seealso cref="mXparser.getEpsilon()"/>
		/// <seealso cref="Expression.calculate()"/>
		public static void disableAlmostIntRounding() {
			almostIntRounding = false;
		}
		/// <summary>
		/// Returns state of almost integer rounding option causing
		/// rounding final calculation result to precise integer
		/// if and only if result is very close to integer.
		/// Very close condition depends on epsilon.
		/// </summary>
		///
		/// <returns>true if option enabled, false otherwise</returns>
		///
		/// <seealso cref="mXparser.setEpsilon(double)"/>
		/// <seealso cref="mXparser.getEpsilon()"/>
		/// <seealso cref="Expression.calculate()"/>
		public static bool checkIfAlmostIntRounding() {
			return almostIntRounding;
		}
		/// <summary>
		/// Internal limit to avoid infinite loops while calculating
		/// expression defined in the way shown by below examples.
		/// <code>
		/// Argument x = new Argument("x = 2*y");
		/// Argument y = new Argument("y = 2*x");
		/// x.addDefinitions(y);
		/// y.addDefinitions(x);
		/// </code>
		/// <code>
		/// Function f = new Function("f(x) = 2*g(x)");
		/// Function g = new Function("g(x) = 2*f(x)");
		/// f.addDefinitions(g);
		/// g.addDefinitions(f);
		/// </code>
		/// Currently does not affect properly defined recursive mode.
		/// </summary>
		/// 
		/// <param name="maxAllowedRecursionDepth"/>
		public static void setMaxAllowedRecursionDepth(int maxAllowedRecursionDepth) {
			MAX_RECURSION_CALLS = maxAllowedRecursionDepth;
		}
		/// <summary>
		/// Internal limit to avoid infinite loops while calculating
		/// expression defined in the way shown by below examples.
		/// <code>
		/// Argument x = new Argument("x = 2*y");
		/// Argument y = new Argument("y = 2*x");
		/// x.addDefinitions(y);
		/// y.addDefinitions(x);
		/// </code>
		/// <code>
		/// Function f = new Function("f(x) = 2*g(x)");
		/// Function g = new Function("g(x) = 2*f(x)");
		/// f.addDefinitions(g);
		/// g.addDefinitions(f);
		/// </code>
		/// Currently does not affect properly defined recursive mode.
		/// </summary>
		public static int getMaxAllowedRecursionDepth() {
			return MAX_RECURSION_CALLS;
		}
		/// <summary>
		/// Set mXparser to operate in radians mode for
		/// trigonometric functions
		/// </summary>
		public static void setRadiansMode() {
			degreesMode = false;
		}
		/// <summary>
		/// Set mXparser to operate in degrees mode for
		/// trigonometric functions
		/// </summary>
		public static void setDegreesMode() {
			degreesMode = true;
		}
		/// <summary>
		/// Checks whether mXparser operates in radians mode for
		/// trigonometric functions.
		/// </summary>
		///
		/// <returns>
		///     <list type="definition">
		///		    <item><term>true</term><description>if radians mode</description></item>
		///		    <item><term>false</term><description>otherwise</description></item>
		///		</list>
		/// </returns>
		public static bool checkIfRadiansMode() {
			return !degreesMode;
		}
		/// <summary>
		/// Checks whether mXparser operates in degrees mode for
		/// trigonometric functions.
		/// </summary>
		///
		/// <returns>
		///     <list type="definition">
		///         <item><term>true</term><description>if degrees mode</description></item>
		///         <item><term>false</term><description>otherwise</description></item>
		///     </list>
		/// </returns>
		public static bool checkIfDegreesMode() {
			return degreesMode;
		}
		/// <summary>Sets initial search size for the toFraction method</summary>
		///
		/// <param name="n">initial search size, has to be non-zero positive.</param>
		/// 
		/// <seealso cref="NumberTheory.toFraction(double)"/>
		public static void setToFractionInitSearchSize(long n) {
			NumberTheory.setToFractionInitSearchSize(n);
		}
		/// <summary>Gets initial search size used by the toFraction method</summary>
		///
		/// <returns>initial search size used by the toFraction method</returns>
		/// 
		/// <seealso cref="NumberTheory.toFraction(double)"/>
		public static long getToFractionInitSearchSize() {
			return NumberTheory.getToFractionInitSearchSize();
		}
		/// <summary>
		/// Removes built-in tokens form the list of tokens recognized by the parsers.
		/// Procedure affects only tokens classified to built-in functions, built-in
		/// constants, built-in units, built-in random variables.
		/// </summary>
		///
		/// <param name="tokens">List of tokens to remove.</param>
		public static void removeBuiltinTokens(params String[] tokens) {
			if (tokens == null) return;
			lock (tokensToRemove) {
				foreach (String token in tokens)
					if (token != null)
						if (token.Length > 0)
							if (!tokensToRemove.Contains(token))
								tokensToRemove.Add(token);
				optionsChangesetNumber++;
			}
		}
		/// <summary>Un-marks tokens previously marked to be removed.</summary>
		/// 
		/// <param name="tokens">List of tokens to un-mark.</param>
		public static void unremoveBuiltinTokens(params String[] tokens) {
			if (tokens == null) return;
			if (tokens.Length == 0) return;
			if (tokensToRemove.Count == 0) return;
			lock (tokensToRemove) {
				foreach (String token in tokens)
					if (token != null)
						tokensToRemove.Remove(token);
				optionsChangesetNumber++;
			}
		}
		/// <summary>Un-marks all tokens previously marked to be removed.</summary>
		public static void unremoveAllBuiltinTokens() {
			lock (tokensToRemove) {
				tokensToRemove.Clear();
				optionsChangesetNumber++;
			}
		}
		/// <summary>Returns current list of tokens marked to be removed.</summary>
		/// 
		/// <returns>Current list of tokens marked to be removed</returns>
		public static String[] getBuiltinTokensToRemove() {
			lock (tokensToRemove) {
				int tokensNum = tokensToRemove.Count;
				String[] tokensToRemoveArray = new String[tokensNum];
				for (int i = 0; i < tokensNum; i++)
					tokensToRemoveArray[i] = tokensToRemove[i];
				return tokensToRemoveArray;
			}
		}
		/// <summary>
		/// Method to change definition of built-in token - more precisely
		/// using this method allows to modify token string recognized by the parser
		/// (i.e. sin(x) -> sinus(x)).
		/// Procedure affects only tokens classified to built-in functions, built-in
		/// constants, built-in units, built-in random variables.
		/// </summary>
		/// 
		/// <param name="currentToken">Current token name</param>
		/// <param name="newToken">New token name</param>
		public static void modifyBuiltinToken(String currentToken, String newToken) {
			if (currentToken == null) return;
			if (currentToken.Length == 0) return;
			if (newToken == null) return;
			if (newToken.Length == 0) return;
			lock (tokensToModify) {
				foreach (TokenModification tm in tokensToModify)
					if (tm.currentToken.Equals(currentToken)) return;
				TokenModification tma = new TokenModification();
				tma.currentToken = currentToken;
				tma.newToken = newToken;
				tma.newTokenDescription = null;
				tokensToModify.Add(tma);
				optionsChangesetNumber++;
			}
		}
		/// <summary>
		/// Method to change definition of built-in token - more precisely
		/// using this method allows to modify token string recognized by the parser
		/// (i.e. sin(x) -> sinus(x)).
		/// Procedure affects only tokens classified to built-in functions, built-in
		/// constants, built-in units, built-in random variables.
		/// </summary>
		/// 
		/// <param name="currentToken">Current token name</param>
		/// <param name="newToken">New token name</param>
		/// <param name="newTokenDescription">New token description (if null the previous one will be used</param>
		public static void modifyBuiltinToken(String currentToken, String newToken, String newTokenDescription) {
			if (currentToken == null) return;
			if (currentToken.Length == 0) return;
			if (newToken == null) return;
			if (newToken.Length == 0) return;
			lock (tokensToModify) {
				foreach (TokenModification tm in tokensToModify)
					if (tm.currentToken.Equals(currentToken)) return;
				TokenModification tma = new TokenModification();
				tma.currentToken = currentToken;
				tma.newToken = newToken;
				tma.newTokenDescription = newTokenDescription;
				tokensToModify.Add(tma);
				optionsChangesetNumber++;
			}
		}
		/// <summary>Un-marks tokens previously marked to be modified.</summary>
		/// 
		/// <param name="currentOrNewTokens">List of tokens to be un-marked (current or modified).</param>
		public static void unmodifyBuiltinTokens(params String[] currentOrNewTokens) {
			if (currentOrNewTokens == null) return;
			if (currentOrNewTokens.Length == 0) return;
			if (tokensToModify.Count == 0) return;
			lock (tokensToModify) {
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
		}
		/// <summary>Un-marks all tokens previously marked to be modified.</summary>
		public static void unmodifyAllBuiltinTokens() {
			lock (tokensToModify) {
				tokensToModify.Clear();
				optionsChangesetNumber++;
			}
		}
		/// <summary>Return details on tokens marked to be modified.</summary>
		/// 
		/// <returns>
		///     String[i][0] - current token, String[i][1] - new token,
		///     String[i][2] - new token description.
		/// </returns>
		public static String[,] getBuiltinTokensToModify() {
			lock (tokensToModify) {
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
		}
		/// <summary>
		/// Sets mXparser to override built-in tokens
		/// by user defined tokens.
		/// </summary>
		public static void setToOverrideBuiltinTokens() {
			overrideBuiltinTokens = true;
			optionsChangesetNumber++;
		}
		/// <summary>
		/// Sets mXparser not to override built-in tokens
		/// by user defined tokens.
		/// </summary>
		public static void setNotToOverrideBuiltinTokens() {
			overrideBuiltinTokens = false;
			optionsChangesetNumber++;
		}
		/// <summary>Checks whether mXparser is set to override built-in tokens.</summary>
		///
		/// <returns>
		///     True if mXparser is set to override built-in tokens by
		///     user defined tokens, otherwise false.
		/// </returns>
		public static bool checkIfsetToOverrideBuiltinTokens() {
			return overrideBuiltinTokens;
		}
		/// <summary>Sets default mXparser options</summary>
		public static void setDefaultOptions() {
			enableUlpRounding();
			enableAlmostIntRounding();
			setMaxAllowedRecursionDepth(DEFAULT_MAX_RECURSION_CALLS);
			setNotToOverrideBuiltinTokens();
			unmodifyAllBuiltinTokens();
			setRadiansMode();
			resetCancelCurrentCalculationFlag();
			setDefaultEpsilon();
			setEpsilonComparison();
			setToFractionInitSearchSize(NumberTheory.DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE);
			optionsChangesetNumber++;
		}
		/// <summary>Returns token type description.</summary>
		///
		/// <param name="tokenTypeId">Token type id</param>
		/// 
		/// <returns>String representing token type description.</returns>
		public static String getTokenTypeDescription(int tokenTypeId) {
			String type = "";
			switch (tokenTypeId) {
				case ParserSymbol.TYPE_ID: type = ParserSymbol.TYPE_DESC; break;
				case ParserSymbol.NUMBER_TYPE_ID: type = "Number"; break;
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
		/// <summary>Converts integer number to hex string (plain text)</summary>
		///
		/// <param name="number">Integer number</param>
		/// 
		/// <returns>Hex string (i.e. FF23)</returns>
		public static String numberToHexString(int number) {
			return number.ToString("X");
		}
		/// <summary>Converts long number to hex string (plain text)</summary>
		///
		/// <param name="number">Long number</param>
		/// 
		/// <returns>Hex string (i.e. FF23)</returns>
		public static String numberToHexString(long number) {
			return number.ToString("X");
		}
		/// <summary>Converts (long)double number to hex string (plain text)</summary>
		///
		/// <param name="number">Double number</param>
		/// 
		/// <returns>Hex string (i.e. FF23)</returns>
		public static String numberToHexString(double number) {
			return numberToHexString((long)number);
		}
		/// <summary>
		/// Converts hex string into ASCII string, where each letter is
		/// represented by two hex digits (byte) from the hex string.
		/// </summary>
		///
		/// <param name="hexString">Hex string (i.e. 48656C6C6F)</param>
		/// 
		/// <returns>ASCII string (i.e. '48656C6C6F' = 'Hello')</returns>
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
		/// <summary>
		/// Converts number into ASCII string, where each letter is
		/// represented by two hex digits (byte) from the hex representation
		/// of the original number
		/// </summary>
		///
		/// <param name="number">Integer number (i.e. 310939249775 = '48656C6C6F')</param>
		/// 
		/// <returns>ASCII string (i.e. '48656C6C6F' = 'Hello')</returns>
		public static String numberToAsciiString(int number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/// <summary>
		/// Converts number into ASCII string, where each letter is
		/// represented by two hex digits (byte) from the hex representation
		/// of the original number
		/// </summary>
		///
		/// <param name="number">Long number (i.e. 310939249775 = '48656C6C6F')</param>
		/// 
		/// <returns>ASCII string (i.e. '48656C6C6F' = 'Hello')</returns>
		public static String numberToAsciiString(long number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/// <summary>
		/// Converts (long)double number into ASCII string, where each letter is
		/// represented by two hex digits (byte) from the hex representation
		/// of the original number casted to long type.
		/// </summary>
		///
		/// <param name="number">Double number (i.e. 310939249775 = '48656C6C6F')</param>
		/// 
		/// <returns>ASCII string (i.e. '48656C6C6F' = 'Hello')</returns>
		public static String numberToAsciiString(double number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/// <summary>Other base (base between 1 and 36) number literal conversion to decimal number.</summary>
		///
		/// <param name="numberLiteral">
		///     Number literal in given numeral system with base between
		///     1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		///     8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		///     18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		///     28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		/// </param>
		/// <param name="numeralSystemBase">Numeral system base, between 1 and 36</param>
		/// 
		/// <returns>
		///     Decimal number after conversion. If conversion was not
		///     possible the <see cref="Double.NaN"/> is returned.
		/// </returns>
		public static double convOthBase2Decimal(String numberLiteral, int numeralSystemBase) {
			return NumberTheory.convOthBase2Decimal(numberLiteral, numeralSystemBase);
		}
		/// <summary>
		/// Other base (base between 1 and 36) number literal conversion to decimal number.
		/// Base specification included in number literal.
		/// </summary>
		/// <remarks>
		/// Examples: 2 for b2.1001 or b.1001, 1 for b1.111, 23 for b23.123afg
		/// 16 for b16.123acdf or h.123acdf.
		/// </remarks>
		/// 
		/// <param name="numberLiteral">
		///     Number literal string.
		///     <para/>
		///     Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
		///     b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26.
		///     b27. b28. b29. b30. b31. b32. b33. b34. b35. b36.
		///     <para/>
		///     Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C,
		///     13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P,
		///     26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		/// </param>
		/// 
		/// <returns>
		///     Decimal number after conversion. If conversion was not
		///     possible the <see cref="Double.NaN"/> is returned.
		/// </returns>
		public static double convOthBase2Decimal(String numberLiteral) {
			return NumberTheory.convOthBase2Decimal(numberLiteral);
		}
		/// <summary>Other base to decimal conversion.</summary>
		///
		/// <param name="numeralSystemBase">Numeral system base has to be above 0.</param>
		/// <param name="digits">List of digits</param>
		/// 
		/// <returns>
		///     Number after conversion. If conversion is not possible then
		///     <see cref="Double.NaN"/> is returned.
		/// </returns>
		public static double convOthBase2Decimal(int numeralSystemBase, params int[] digits) {
			return NumberTheory.convOthBase2Decimal(numeralSystemBase, digits);
		}
		/// <summary>Other base to decimal conversion.</summary>
		///
		/// <param name="numeralSystemBase">Numeral system base has to be above 0.</param>
		/// <param name="digits">List of digits</param>
		/// 
		/// <returns>
		///     Number after conversion. If conversion is not possible then
		///     <see cref="Double.NaN"/> is returned.
		/// </returns>
		public static double convOthBase2Decimal(double numeralSystemBase, params double[] digits) {
			return NumberTheory.convOthBase2Decimal(numeralSystemBase, digits);
		}
		/// <summary>
		/// Decimal number to other numeral system conversion with base
		/// between 1 and 36.
		/// </summary>
		/// 
		/// <param name="decimalNumber">Decimal number</param>
		/// <param name="numeralSystemBase">Numeral system base between 1 and 36</param>
		/// 
		/// <returns>
		///     Number literal representing decimal number in
		///     given numeral numeral system. Digits
		///     0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8,
		///     9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G,
		///     17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O,
		///     25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W,
		///     33:X, 34:Y, 35:Z. If conversion was not possible
		///     the "NaN" string is returned.
		/// </returns>
		public static String convDecimal2OthBase(double decimalNumber, int numeralSystemBase) {
			return NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase);
		}
		/// <summary>
		/// Decimal number to other numeral system conversion with base
		/// between 1 and 36.
		/// </summary>
		///
		/// <param name="decimalNumber">Decimal number</param>
		/// <param name="numeralSystemBase">Numeral system base between 1 and 36</param>
		/// <param name="format">
		///     If 1 then always bxx. is used, i.e. b1. or b16.
		///     If 2 then for binary b. is used, for octal o. is used,
		///     for hexadecimal h. is used, otherwise bxx. is used
		///     where xx is the numeral system base specification.
		/// </param>
		/// 
		/// <returns>
		///     Number literal representing decimal number in
		///     given numeral numeral system.
		///     <para/>
		///     Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
		///     b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26.
		///     b27. b28. b29. b30. b31. b32. b33. b34. b35. b36.
		///     <para/>
		///     Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C,
		///     13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P,
		///     26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		///     <para/>
		///     If conversion was not possible the "NaN" string is returned.
		/// </returns>
		public static String convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format) {
			return NumberTheory.convDecimal2OthBase(decimalNumber, numeralSystemBase, format);
		}
		/// Converts double value to its fraction representation.
		///
		/// @param value Value to be converted
		///
		/// @return Array representing fraction. Sign at index 0,
		/// numerator at index 1, denominator at index 2.
		/// If conversion is not possible then Double.NaN is
		/// assigned to all the fields.
		public static double[] toFraction(double value) {
			return NumberTheory.toFraction(value);
		}
		/// <summary>Converts double value to its mixed fraction representation.</summary>
		///
		/// <param name="value">Value to be converted</param>
		///
		/// <returns>
		///     Array representing fraction.
		///     Sign at index 0, whole number at index 1,
		///     numerator at index 2, denominator at index 3.
		///     If conversion is not possible then <see cref="Double.NaN"/> is
		///     assigned to both numerator and denominator.
		/// </returns>
		public static double[] toMixedFraction(double value) {
			return NumberTheory.toMixedFraction(value);
		}
		/// <summary>Converts array representing fraction to fraction string representation.</summary>
		///
		/// <param name="fraction">Array representing fraction (including mix fractions)</param>
		/// 
		/// <returns>String representation of fraction.</returns>
		///
		/// <seealso cref="NumberTheory.toFraction(double)"/>
		/// <seealso cref="NumberTheory.toMixedFraction(double)"/>
		public static String fractionToString(double[] fraction) {
			return NumberTheory.fractionToString(fraction);
		}
		/// <summary>Converts number to its fraction string representation.</summary>
		///
		/// <param name="value">Given number</param>
		/// 
		/// <returns>String representation of fraction.</returns>
		///
		/// <seealso cref="NumberTheory.toFraction(double)"/>
		/// <seealso cref="NumberTheory.fractionToString(double[])"/>
		public static String toFractionString(double value) {
			return NumberTheory.toFractionString(value);
		}
		/// <summary>Converts number to its mixed fraction string representation.</summary>
		///
		/// <param name="value">Given number</param>
		/// 
		/// <returns>String representation of fraction.</returns>
		///
		/// <seealso cref="NumberTheory.toMixedFraction(double)"/>
		/// <seealso cref="NumberTheory.fractionToString(double[])"/>
		public static String toMixedFractionString(double value) {
			return NumberTheory.toMixedFractionString(value);
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
		/// <summary>Prints <see cref="Object.ToString()"/> to the Console + new line</summary>
		///
		/// <param name="o">Object to print</param>
		public static void consolePrintln(Object o) {
			lock (CONSOLE_OUTPUT) {
				if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.Equals(""))) {
					consoleWrite(CONSOLE_PREFIX);
					CONSOLE_OUTPUT = CONSOLE_PREFIX;
				}
				consoleWriteLine(o);
				CONSOLE_ROW_NUMBER++;
				consoleWrite(CONSOLE_PREFIX);
				CONSOLE_OUTPUT = CONSOLE_OUTPUT + o + "\n" + CONSOLE_OUTPUT_PREFIX;
			}
		}
		/// <summary>Prints array of strings</summary>
		///
		/// <param name="stringArray">array of strinfs</param>
		public static void consolePrintln(String[] stringArray) {
			if (stringArray == null) {
				consolePrintln("null");
				return;
			}
			foreach (String s in stringArray)
				consolePrintln(s);
		}
		/// <summary>Prints new line to the Console, no new line</summary>
		public static void consolePrintln() {
			lock (CONSOLE_OUTPUT) {
				if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.Equals(""))) {
					consoleWrite(CONSOLE_PREFIX);
					CONSOLE_OUTPUT = CONSOLE_PREFIX;
				}
				consoleWriteLine();
				CONSOLE_ROW_NUMBER++;
				consoleWrite(CONSOLE_PREFIX);
				CONSOLE_OUTPUT = CONSOLE_OUTPUT + "\n" + CONSOLE_OUTPUT_PREFIX;
			}
		}
		/// <summary>Prints <see cref="Object.ToString()"/> to the Console, no new line</summary>
		///
		/// <param name="o">Object to print</param>
		public static void consolePrint(Object o) {
			lock (CONSOLE_OUTPUT) {
				if ((CONSOLE_ROW_NUMBER == 1) && (CONSOLE_OUTPUT.Equals(""))) {
					consoleWrite(CONSOLE_PREFIX);
					CONSOLE_OUTPUT = CONSOLE_PREFIX;
				}
				consoleWrite(o);
				CONSOLE_OUTPUT = CONSOLE_OUTPUT + o;
			}
		}
		/// <summary>
		/// Resets console output string, console output
		/// string is being built by consolePrintln(), consolePrint().
		/// </summary>
		///
		/// <seealso cref="mXparser.consolePrint(Object)"/>
		/// <seealso cref="mXparser.consolePrintln(Object)"/>
		/// <seealso cref="mXparser.consolePrintln()"/>
		/// <seealso cref="mXparser.resetConsoleOutput()"/>
		public static void resetConsoleOutput() {
			lock (CONSOLE_OUTPUT) {
				CONSOLE_OUTPUT = "";
				CONSOLE_ROW_NUMBER = 1;
			}
		}
		/// <summary>Sets default console prefix.</summary>
		public static void setDefaultConsolePrefix() {
			lock (CONSOLE_PREFIX) {
				CONSOLE_PREFIX = "[mXparser-v." + VERSION + "] ";
			}
		}
		/// <summary>Sets default console output string prefix.</summary>
		public static void setDefaultConsoleOutputPrefix() {
			lock (CONSOLE_OUTPUT_PREFIX) {
				CONSOLE_OUTPUT_PREFIX = "[mXparser-v." + VERSION + "] ";
			}
		}
		/// <summary>Sets console prefix.</summary>
		/// 
		/// <param name="consolePrefix">String containing console prefix definition.</param>
		public static void setConsolePrefix(String consolePrefix) {
			lock (CONSOLE_PREFIX) {
				CONSOLE_PREFIX = consolePrefix;
			}
		}
		/// <summary>Sets console output string prefix.</summary>
		/// 
		/// <param name="consoleOutputPrefix">String containing console output prefix definition.</param>
		public static void setConsoleOutputPrefix(String consoleOutputPrefix) {
			lock (CONSOLE_OUTPUT_PREFIX) {
				CONSOLE_OUTPUT_PREFIX = consoleOutputPrefix;
			}
		}
		/// <summary>
		/// Returns console output string, console output string
		/// is being built by <see cref="consolePrintln()"/>, <see cref="consolePrint(Object)"/>.
		/// </summary>
		///
		/// <returns>Console output string</returns>
		///
		/// <seealso cref="mXparser.consolePrint(Object)"/>
		/// <seealso cref="mXparser.consolePrintln(Object)"/>
		/// <seealso cref="mXparser.consolePrintln();"/>
		/// <seealso cref="mXparser.resetConsoleOutput();"/>
		public static String getConsoleOutput() {
			return CONSOLE_OUTPUT;
		}
		/// <summary>General mXparser expression help</summary>
		///
		/// <returns>String with all general help content</returns>
		public static String getHelp() {
			lock (mXparserExp) {
				return mXparserExp.getHelp();
			}
		}
		/// <summary>General mXparser expression help - in-line key word searching</summary>
		/// 
		/// <param name="word">Key word to be searched</param>
		/// 
		/// <returns>
		///     String with all help content
		///     lines containing given keyword
		/// </returns>
		public static String getHelp(String word) {
			lock (mXparserExp) {
				return mXparserExp.getHelp(word);
			}
		}
		/// <summary>Prints all help content.</summary>
		public static void consolePrintHelp() {
			consoleWriteLine(getHelp());
		}
		/// <summary>Prints filtered help content.</summary>
		/// 
		/// <param name="word">Key word.</param>
		public static void consolePrintHelp(String word) {
			consoleWriteLine(getHelp(word));
		}
		/// <summary>Returns list of key words known to the parser</summary>
		///
		/// <returns>List of keywords known to the parser.</returns>
		///
		/// <seealso cref="KeyWord"/>
		/// <seealso cref="KeyWord.wordTypeId"/>
		/// <seealso cref="mXparser.getHelp()"/>
		public static List<KeyWord> getKeyWords() {
			lock (mXparserExp) {
				return mXparserExp.getKeyWords();
			}
		}
		/// <summary>Returns list of key words known to the parser</summary>
		///
		/// <param name="query">
		///     Give any string to filter list of key words against this string.
		///     User more precise syntax: str=tokenString, desc=tokenDescription,
		///     syn=TokenSyntax, sin=tokenSince, wid=wordId, tid=wordTypeId
		///     to narrow the result.
		/// </param>
		///
		/// <returns>List of keywords known to the parser filter against query string.</returns>
		///
		/// <seealso cref="KeyWord"/>
		/// <seealso cref="KeyWord.wordTypeId"/>
		/// <seealso cref="mXparser.getHelp(String)"/>
		public static List<KeyWord> getKeyWords(String query) {
			lock (mXparserExp) {
				return mXparserExp.getKeyWords(query);
			}
		}
		/// <summary>
		/// Function used to introduce some compatibility
		/// between JAVA and C# while regexp matching.
		/// </summary>
		///
		/// <param name="str">String</param>
		/// <param name="pattern">Pattern (regexp)</param>
		///
		/// <returns>True if pattern matches entirely, False otherwise</returns>
		public static bool regexMatch(String str, String pattern){
			return Regex.IsMatch(str, "^(" + pattern + ")$");
		}
		/// <summary>Prints tokens to the console.</summary>
		/// 
		/// <param name="tokens">Tokens list.</param>
		///
		/// <seealso cref="Expression.getCopyOfInitialTokens()"/>
		/// <seealso cref="Token"/>
		public static void consolePrintTokens(List<Token> tokens) {
			Expression.showTokens(tokens);
		}
		/// <summary>License info.</summary>
		public const String LICENSE =
			"                      mXparser - version " + VERSION + "\n" +
			"         A flexible mathematical eXpressions parser for C#.\n" +
			"                   (port from mXparser for JAVA)\n" +
			"\n" +
			"You may use this software under the condition of Simplified BSD License:\n" +
			"\n" +
			"Copyright 2010-2018 MARIUSZ GROMADA. All rights reserved.\n" +
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
		/// <summary>Gets license info</summary>
		///
		/// <returns>license info as string.</returns>
		public static String getLicense() {
			return mXparser.LICENSE;
		}
		/// <summary>Waits given number of milliseconds</summary>
		///
		/// <param name="n">Number of milliseconds</param>
		public static void wait(int n) {
			long t0, t1;
			t0 = DateTime.Now.Millisecond;
			do {
				t1 = DateTime.Now.Millisecond;
			} while (t1 - t0 < n);
		}
		/// <summary>
		/// Method give a signal to other methods to cancel current calculation. This is a flag,
		/// remember to reset this flag after process is cancelled and you are going to start
		/// new calculation process.
		/// </summary>
		public static void cancelCurrentCalculation() {
			cancelCurrentCalculationFlag = true;
		}
		/// <summary>Resets a flag giving signal to the engine to cancel current calculation.</summary>
		///
		/// <seealso cref="cancelCurrentCalculation()"/>
		public static void resetCancelCurrentCalculationFlag() {
			cancelCurrentCalculationFlag = false;
		}
		/// <summary>Check whether a flag to cancel current calculation process is set.</summary>
		///
		/// <seealso cref="cancelCurrentCalculation()"/>
		/// <seealso cref="resetCancelCurrentCalculationFlag()"/>
		public static bool isCurrentCalculationCancelled() {
			return cancelCurrentCalculationFlag;
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
		public const String NAMEv43 = "4.3";
	}
}
