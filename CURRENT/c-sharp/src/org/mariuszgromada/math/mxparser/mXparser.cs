/*
 * @(#)mXparser.cs        6.0.0    2024-05-19
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
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Globalization;

using org.mariuszgromada.math.mxparser.mathcollection;
using org.mariuszgromada.math.mxparser.parsertokens;
using System.Text;
using System.Threading;

[assembly: CLSCompliant(true)]
namespace org.mariuszgromada.math.mxparser {
	/**
	 * mXparser class provides usefull methods when parsing, calculating or
	 * parameters transforming.
	 *
	 * @author         <b>Mariusz Gromada</b><br>
	 *                 <a href="https://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
	 *                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
	 *                 <a href="https://payhip.com/INFIMA" target="_blank">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br>
	 *                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br>
	 *                 <a href="https://scalarmath.org/" target="_blank">ScalarMath.org - a powerful math engine and math scripting language</a><br>
	 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Lite</a><br>
	 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
	 *                 <a href="https://mathspace.pl" target="_blank">MathSpace.pl</a><br>
	 *
	 * @version        6.0.0
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
		public const int VERSION_MAJOR = 6;
		public const int VERSION_MINOR = 0;
		public const int VERSION_PATCH = 0;
		public static readonly String VERSION = VERSION_MAJOR + "." + VERSION_MINOR + "." + VERSION_PATCH;
		public const String VERSION_CODE_NAME = "Picon";
		public static readonly String VERSION_NAME = VERSION + " " + VERSION_CODE_NAME;
#if NET48
		public const String BUIT_FOR = "NET48";
#elif NET472
		public const String BUIT_FOR = "NET472";
#elif NET471
		public const String BUIT_FOR = "NET471";
#elif NET47
		public const String BUIT_FOR = "NET47";
#elif NET462
		public const String BUIT_FOR = "NET462";
#elif NET461
		public const String BUIT_FOR = "NET461";
#elif NET46
		public const String BUIT_FOR = "NET46";
#elif NET452
		public const String BUIT_FOR = "NET452";
#elif NET451
		public const String BUIT_FOR = "NET451";
#elif NET45
		public const String BUIT_FOR = "NET45";
#elif NET40
		public const String BUIT_FOR = "NET40";
#elif NET35
		public const String BUIT_FOR = "NET35";
#elif NET20
		public const String BUIT_FOR = "NET20";
#elif NETSTANDARD2_1
		public const String BUIT_FOR = "NETSTANDARD2_1";
#elif NETSTANDARD2_0
		public const String BUIT_FOR = "NETSTANDARD2_0";
#elif NETSTANDARD1_6
		public const String BUIT_FOR = "NETSTANDARD1_6";
#elif NETSTANDARD1_5
		public const String BUIT_FOR = "NETSTANDARD1_5";
#elif NETSTANDARD1_4
		public const String BUIT_FOR = "NETSTANDARD1_4";
#elif NETSTANDARD1_3
		public const String BUIT_FOR = "NETSTANDARD1_3";
#elif NETSTANDARD1_2
		public const String BUIT_FOR = "NETSTANDARD1_2";
#elif NETSTANDARD1_1
		public const String BUIT_FOR = "NETSTANDARD1_1";
#elif NETSTANDARD1_0
		public const String BUIT_FOR = "NETSTANDARD1_0";
#elif NET8_0
		public const String BUIT_FOR = "NET8_0";
#elif NET7_0
		public const String BUIT_FOR = "NET7_0";
#elif NET6_0
		public const String BUIT_FOR = "NET6_0";
#elif NET6_0_ANDROID
		public const String BUIT_FOR = "NET6_0_ANDROID";
#elif NET6_0_IOS
		public const String BUIT_FOR = "NET6_0_IOS";
#elif NET6_0_MACOS
		public const String BUIT_FOR = "NET6_0_MACOS";
#elif NET6_0_MACCATALYST
		public const String BUIT_FOR = "NET6_0_MACCATALYST";
#elif NET6_0_TVOS
		public const String BUIT_FOR = "NET6_0_TVOS";
#elif NET6_0_WINDOWS
		public const String BUIT_FOR = "NET6_0_WINDOWS";
#elif NET5_0
		public const String BUIT_FOR = "NET5_0";
#elif NETCOREAPP3_1
		public const String BUIT_FOR = "NETCOREAPP3_1";
#elif NETCOREAPP3_0
		public const String BUIT_FOR = "NETCOREAPP3_0";
#elif NETCOREAPP2_2
		public const String BUIT_FOR = "NETCOREAPP2_2";
#elif NETCOREAPP2_1
		public const String BUIT_FOR = "NETCOREAPP2_1";
#elif NETCOREAPP2_0
		public const String BUIT_FOR = "NETCOREAPP2_0";
#elif NETCOREAPP1_1
		public const String BUIT_FOR = "NETCOREAPP1_1";
#elif NETCOREAPP1_0
		public const String BUIT_FOR = "NETCOREAPP1_0";
#elif IOS
		public const String BUIT_FOR = "Xamarin.iOS";
#elif ANDROID
		public const String BUIT_FOR = "Xamarin.Android";
#elif NETFRAMEWORK
		public const String BUIT_FOR = "NETFRAMEWORK";
#elif NETSTANDARD
		public const String BUIT_FOR = "NETSTANDARD";
#elif NETCOREAPP
		public const String BUIT_FOR = "NETCOREAPP";
#elif NET
		public const String BUIT_FOR = "NET";
#elif PCL
		public const String BUIT_FOR = "PCL";
#else
		public const String BUIT_FOR = "NET?";
#endif
		/**
		 * FOUND / NOT_FOUND
		 * used for matching purposes
		 */
		internal const int NOT_FOUND = -1;
		internal const int FOUND = 0;
		/**
		 * Console output string  for below methods
		 *
		 * @see #consolePrintln(Object)
		 * @see #consolePrint(Object)
		 */
		private static volatile StringBuilder CONSOLE_OUTPUT = new StringBuilder();
		private static volatile String CONSOLE_PREFIX = "[mXparser-v." + VERSION + "] ";
		private static volatile String CONSOLE_OUTPUT_PREFIX = CONSOLE_PREFIX;
		private static volatile int CONSOLE_ROW_NUMBER = 1;
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
		 * Double floating-point precision arithmetic causes
		 *
		 * mXparser provides intelligent ULP rounding to avoid some
		 * type of this errors.
		 */
		internal volatile static bool ulpRounding = false;
		/**
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is different from 0.3
		 *
		 * mXparser provides intelligent canonical rounding to avoid majority
		 * of this errors.
		 *
		 */
		internal volatile static bool canonicalRounding = true;
		/**
		 * Indicator marking whether to round final result
		 * to precise integer when result is very close
		 * to integer, solves problems like
		 * sin(pi) = 0
		 */
		internal volatile static bool almostIntRounding = true;
		internal const int DEFAULT_MAX_RECURSION_CALLS = 200;
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
		internal volatile static int MAX_RECURSION_CALLS = DEFAULT_MAX_RECURSION_CALLS;
		/**
		 * The maximum error message length in expression
		 */
		internal volatile static int ERROR_MESSAGE_MAXIMUM_LENGTH = 10000;
		/**
		 * The maximum number of expected tokens presented
		 * in error message when lexical error was encountered
		 */
		internal volatile static int ERROR_MESSAGE_MAXIMUM_NUMBER_OF_EXPECTED_TOKENS = 5;
		/**
		 * List of built-in tokens to remove.
		 */
		internal volatile static List<String> tokensToRemove = new List<String>();
		/**
		 * List of built-in tokens to modify
		 */
		internal volatile static List<TokenModification> tokensToModify = new List<TokenModification>();
		/**
		 * Indicator whether mXparser operates in radians / degrees mode
		 * true - degrees mode
		 * false - radians mode
		 *
		 * Default false (radians mode)
		 */
		internal volatile static bool degreesMode = false;
		/**
		 * Indicator whether user defined tokens should override
		 * built-in tokens.
		 */
		internal volatile static bool overrideBuiltinTokens = false;
		/**
		 * Implied multiplication mode
		 */
		internal volatile static bool impliedMultiplicationMode = true;
		/**
		 * Internal indicator informing hte parser
		 * that unicode know keywords are enabled
		 * and will be recognized by the parser
		 * as built-in functions or operators
		 */
		internal volatile static bool unicodeKeyWordsEnabled = true;
		/**
		 * Internal indicator informing the parser
		 * whether to try to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed to "+"
		 */
		internal volatile static bool attemptToFixExpStrEnabled = true;
		/**
		 * Options changeset
		 */
		internal volatile static int optionsChangesetNumber = 0;
		/**
		 * Indicator whether to call cancel current calculation
		 */
		internal static volatile bool cancelCurrentCalculationFlag = false;
		/**
		 * Indicator whether to select best matching language to OS locale
		 */
		internal static volatile bool selectBestMatchingLanguage = true;
		/**
		 * Empty expression for general help purposes.
		 */
		internal static volatile Expression HELP_EXPRESSION = new Expression();
		internal static void refreshHelp() {
			HELP_EXPRESSION = new Expression();
		}
		/**
		 * Initialization of prime numbers cache.
		 * Cache size according to {@link PrimesCache#DEFAULT_MAX_NUM_IN_CACHE}
		 * @see PrimesCache
		 */
		public static void initPrimesCache() {
			primesCache = new PrimesCache();
		}
		/**
		 * Returns true in case when primes cache initialization was successful,
		 * otherwise returns false.
		 *
		 * @return Returns true in case when primes cache initialization was successful,
		 * otherwise returns false.
		 */
		public static bool isInitPrimesCacheSuccessful() {
			if (primesCache == null) return false;
			lock (primesCache) {
				return primesCache.isInitSuccessful();
			}
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
			if (primesCache != null) {
				lock (primesCache) {
					return primesCache.getMaxNumInCache();
				}
			} else
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
		public static void setDefaultThreadsNumber() {
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
		 *
		 * @deprecated Planned to be removed, use {@link MathFunctions#getFunctionValue(Expression, Argument, double)} instead
		 */
		[Obsolete("Planned to be removed, use MathFunctions.getFunctionValue(Expression, Argument, double)")]
		public static double dgetFunctionValue(Expression f, Argument x, double x0) {
			return MathFunctions.getFunctionValue(f, x, x0);
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
		 *
		 * @deprecated Planned to be removed, use {@link MathFunctions#getFunctionValues(Expression, Argument, double, double, double)} instead
		 */
		[Obsolete("Planned to be removed, use MathFunctions.getFunctionValues(Expression, Argument, double, double, double) instead")]
		public static double[] dgetFunctionValues(Expression f, Argument index, double from, double to, double delta) {
			return MathFunctions.getFunctionValues(f, index, from, to, delta);
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
		 * @see #setEpsilon(double)
		 */
		public static void setEpsilonComparison() {
			BinaryRelations.setEpsilonComparison();
		}
		/**
		 * Sets epsilon value used in the EPSILON comparison mode and
		 * the almost integer rounding mode.
		 * 
		 * @param epsilon   Epsilon value (grater than 0).
		 *
		 * @see #setEpsilonComparison()
		 * @see #enableAlmostIntRounding()
		 * @see BinaryRelations
		 */
		public static void setEpsilon(double epsilon) {
			BinaryRelations.setEpsilon(epsilon);
		}
		/**
		 * Sets default epsilon value.
		 *
		 * @see #setEpsilonComparison()
		 * @see #enableAlmostIntRounding()
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
		 * @see #enableAlmostIntRounding()
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
		 * @see #enableAlmostIntRounding()
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
		 * Enables ULP rounding.
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent ULP rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Using this mode 0.1 + 0.1 + 0.1 = 0.3
		 */
		public static void enableUlpRounding() {
			ulpRounding = true;
		}
		/**
		 * Disables ULP rounding.
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent ULP rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
		 */
		public static void disableUlpRounding() {
			ulpRounding = false;
		}
		/**
		 * Enables / disables ULP rounding.
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent ULP rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
		 *
		 * @param ulpRoundingState    True to enable, false to disable
		 */
		public static void setUlpRounding(bool ulpRoundingState) {
			ulpRounding = ulpRoundingState;
		}
		/**
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent ULP rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Using this mode 0.1 + 0.1 + 0.1 = 0.3
		 *
		 * @return True if ULP rounding is enabled, otherwise false.
		 */
		public static bool checkIfUlpRounding() {
			return ulpRounding;
		}
		/**
		 * Enables canonical rounding.
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent canonical rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Using this mode 2.5 - 2.2 = 0.3
		 */
		public static void enableCanonicalRounding() {
			canonicalRounding = true;
		}
		/**
		 * Disables canonical rounding.
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent canonical rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Using this mode 2.5 - 2.2 = 0.3
		 */
		public static void disableCanonicalRounding() {
			canonicalRounding = false;
		}
		/**
		 * Enables / disables canonical rounding.
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent ULP rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
		 *
		 * @param canonicalRoundingState    True to enable, false to disable
		 */
		public static void setCanonicalRounding(bool canonicalRoundingState) {
			canonicalRounding = canonicalRoundingState;
		}
		/**
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent canonical rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Using this mode 2.5 - 2.2 = 0.3
		 *
		 * @return True if Canonical rounding is enabled, otherwise false.
		 */
		public static bool checkIfCanonicalRounding() {
			return canonicalRounding;
		}
		/**
		 * Enables almost integer rounding option causing
		 * rounding final calculation result to precise integer
		 * if and only if result is very close to integer.
		 * Very close condition depends on epsilon.
		 *
		 * @see mXparser#setEpsilon(double)
		 * @see mXparser#getEpsilon()
		 * @see Expression#calculate()
		 */
		public static void enableAlmostIntRounding() {
			almostIntRounding = true;
		}
		/**
		 * Disables almost integer rounding option causing
		 * rounding final calculation result to precise integer
		 * if and only if result is very close to integer.
		 * Very close condition depends on epsilon.
		 *
		 * @see mXparser#setEpsilon(double)
		 * @see mXparser#getEpsilon()
		 * @see Expression#calculate()
		 */
		public static void disableAlmostIntRounding() {
			almostIntRounding = false;
		}
		/**
		 * Enables / disables almost integer rounding option causing
		 * rounding final calculation result to precise integer
		 * if and only if result is very close to integer.
		 * Very close condition depends on epsilon.
		 *
		 * @param almostIntRoundingState    True to enable, false to disable
		 */
		public static void setAlmostIntRounding(bool almostIntRoundingState) {
			almostIntRounding = almostIntRoundingState;
		}
		/**
		 * Returns state of almost integer rounding option causing
		 * rounding final calculation result to precise integer
		 * if and only if result is very close to integer.
		 * Very close condition depends on epsilon.
		 *
		 * @return true if option enabled, false otherwise
		 *
		 * @see mXparser#setEpsilon(double)
		 * @see mXparser#getEpsilon()
		 * @see Expression#calculate()
		 */
		public static bool checkIfAlmostIntRounding() {
			return almostIntRounding;
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
		 * Currently, does not affect properly defined recursive mode.
		 *
		 * @param maxAllowedRecursionDepth
		 */
		public static void setMaxAllowedRecursionDepth(int maxAllowedRecursionDepth) {
			MAX_RECURSION_CALLS = maxAllowedRecursionDepth;
			Argument.refreshMaxAllowedRecursionDepth();
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
		 * Currently, does not affect properly defined recursive mode.
		 */
		public static int getMaxAllowedRecursionDepth() {
			return MAX_RECURSION_CALLS;
		}
		/**
		 * Set mXparser to operate in radians mode for
		 * trigonometric functions
		 */
		public static void setRadiansMode() {
			degreesMode = false;
		}
		/**
		 * Set mXparser to operate in degrees mode for
		 * trigonometric functions
		 */
		public static void setDegreesMode() {
			degreesMode = true;
		}
		/**
		 * Checks whether mXparser operates in radians mode for
		 * trigonometric functions.
		 *
		 * @return true - if radians mode, false - otherwise
		 */
		public static bool checkIfRadiansMode() {
			return !degreesMode;
		}
		/**
		 * Checks whether mXparser operates in degrees mode for
		 * trigonometric functions.
		 *
		 * @return true - if degrees mode, false - otherwise
		 */
		public static bool checkIfDegreesMode() {
			return degreesMode;
		}
		/**
		 * Sets implied multiplication
		 */
		public static void enableImpliedMultiplicationMode() {
			impliedMultiplicationMode = true;
			HELP_EXPRESSION.enableImpliedMultiplicationMode();
		}
		/**
		 * Disables implied multiplication
		 */
		public static void disableImpliedMultiplicationMode() {
			impliedMultiplicationMode = false;
			HELP_EXPRESSION.disableImpliedMultiplicationMode();
		}
		/**
		 * Gets implied multiplication status
		 *
		 * @return     true if implied multiplication is enabled,
		 *             otherwise returns false.
		 */
		public static bool checkIfImpliedMultiplicationMode() {
			return impliedMultiplicationMode;
		}
		/**
		 * Enables unicode built-in parser keywords, this flag
		 * informs the parser that built-in unicode keywords
		 * are supported and will be recognized as functions or
		 * operators.
		 */
		public static void enableUnicodeBuiltinKeyWordsMode() {
			unicodeKeyWordsEnabled = true;
			HELP_EXPRESSION.enableUnicodeBuiltinKeyWordsMode();
		}
		/**
		 * Disables unicode built-in parser keywords, this flag
		 * informs the parser that built-in unicode keywords
		 * are not supported and will not be recognized as functions or
		 * operators.
		 */
		public static void disableUnicodeBuiltinKeyWordsMode() {
			unicodeKeyWordsEnabled = false;
			HELP_EXPRESSION.disableUnicodeBuiltinKeyWordsMode();
		}
		/**
		 * Gets unicode built-in parser keywords mode
		 *
		 * @return     true if unicode built-in parser keywords is enabled,
		 *             otherwise returns false.
		 */
		public static bool checkIfUnicodeBuiltinKeyWordsMode() {
			return unicodeKeyWordsEnabled;
		}
		/**
		 * Enables attempt to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed to "+"
		 */
		public static void enableAttemptToFixExpStrMode() {
			attemptToFixExpStrEnabled = true;
		}
		/**
		 * Disables attempt to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed to "+"
		 */
		public static void disableAttemptToFixExpStrMode() {
			attemptToFixExpStrEnabled = false;
		}
		/**
		 * Gets attempt to fix expression string mode
		 *
		 * @return     true attempt to fix expression string mode is enabled,
		 *             otherwise returns false.
		 */
		public static bool checkIfAttemptToFixExpStrMode() {
			return attemptToFixExpStrEnabled;
		}
		/**
		 * Option that enables selection of best matching language based on the current OS locale.
		 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
		 * If OS language is not supported, then English is selected.
		 *
		 * @see StringModel
		 * @see StringResources
		 * @see StringResources#bestMatchingLanguage()
		 */
		public static void enableSelectBestMatchingLanguage() {
			selectBestMatchingLanguage = true;
			StringModel.setDefaultStringResources();
		}
		/**
		 * Disables mode of selection of best matching language based on the current OS locale.
		 * Returns to the English language.
		 *
		 * @see StringModel
		 * @see StringResources
		 * @see StringResources#bestMatchingLanguage()
		 */
		public static void disableSelectBestMatchingLanguage() {
			selectBestMatchingLanguage = false;
			StringModel.setDefaultEnglishStringResources();
		}
		/**
		 * Checks if mode of selection of best matching language based on the current OS locale is enabled.
		 *
		 * @return   True if mode of selection of best matching language is enabled, otherwise false.
		 *
		 * @see StringModel
		 * @see StringResources
		 * @see StringResources#bestMatchingLanguage()
		 */
		public static bool checkIfSelectBestMatchingLanguage() {
			return selectBestMatchingLanguage;
		}
		/**
		 * Changes language to the one that best matches provided language code.
		 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
		 * If language code does not belong to the supported language codes
		 * English language is selected.
		 *
		 * @param language     Supported language codes: en, fr, de, it, pl, pt, es.
		 *
		 * @see StringModel
		 * @see StringModel#setStringResources(StringResources)
		 * @see StringResources
		 * @see StringResources#bestMatchingLanguage(String)
		 */
		public static void changeLanguageTo(String language) {
			StringModel.setStringResources(StringResources.bestMatchingLanguage(language));
		}
		/**
		 * Changes language to the one that best matches provided language code in locale.
		 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
		 * If language code does not belong to the supported language codes
		 * English language is selected.
		 *
		 * @param locale      Supported locale language codes: en, fr, de, it, pl, pt, es.
		 *
		 * @see StringModel
		 * @see StringModel#setStringResources(StringResources)
		 * @see StringResources
		 * @see StringResources#bestMatchingLanguage(Locale)
		 */
		public static void changeLanguageTo(CultureInfo locale) {
			StringModel.setStringResources(StringResources.bestMatchingLanguage(locale));
		}
		/**
		 * Changes language to the one that best matches current OS locale.
		 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
		 * If OS language is not supported, then English is selected.
		 *
		 * @see StringModel
		 * @see StringModel#setStringResources(StringResources)
		 * @see StringResources
		 * @see StringResources#bestMatchingLanguage()
		 */
		public static void changeLanguageToBestMatching() {
			StringModel.forceDefaultStringResources();
		}
		/**
		 * Sets initial search size for the toFraction method
		 *
		 * @param n initial search size, has to be non-zero positive.
		 * @see NumberTheory#toFraction(double)
		 */
		public static void setToFractionInitSearchSize(long n) {
			NumberTheory.setToFractionInitSearchSize(n);
		}
		/**
		 * Gets initial search size used by the toFraction method
		 *
		 * @return initial search size used by the toFraction method
		 * @see NumberTheory#toFraction(double)
		 */
		public static long getToFractionInitSearchSize() {
			return NumberTheory.getToFractionInitSearchSize();
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
			lock (tokensToRemove) {
				foreach (String token in tokens)
					if (token != null)
						if (token.Length > 0)
							if (!tokensToRemove.Contains(token))
								tokensToRemove.Add(token);
				optionsChangesetNumber++;
			}
		}
		/**
		 * Un-marks tokens previously marked to be removed.
		 * @param tokens List of tokens to un-mark.
		 */
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
		/**
		 * Un-marks all tokens previously marked to be removed.
		 */
		public static void unremoveAllBuiltinTokens() {
			lock (tokensToRemove) {
				tokensToRemove.Clear();
				optionsChangesetNumber++;
			}
		}
		/**
		 * Returns current list of tokens marked to be removed.
		 * @return Current list of tokens marked to be removed
		 */
		public static String[] getBuiltinTokensToRemove() {
			lock (tokensToRemove) {
				int tokensNum = tokensToRemove.Count;
				String[] tokensToRemoveArray = new String[tokensNum];
				for (int i = 0; i < tokensNum; i++)
					tokensToRemoveArray[i] = tokensToRemove[i];
				return tokensToRemoveArray;
			}
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
		/**
		 * Un-marks tokens previously marked to be modified.
		 * @param currentOrNewTokens   List of tokens to be un-marked (current or modified).
		 */
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
		/**
		 * Un-marks all tokens previously marked to be modified.
		 */
		public static void unmodifyAllBuiltinTokens() {
			lock (tokensToModify) {
				tokensToModify.Clear();
				optionsChangesetNumber++;
			}
		}
		/**
		 * Return details on tokens marked to be modified.
		 * @return String[i][0] - current token, String[i][1] - new token,
		 *                        String[i][2] - new token description.
		 */
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
		 * Sets default mXparser options
		 *
		 */
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
			enableImpliedMultiplicationMode();
			enableUnicodeBuiltinKeyWordsMode();
			enableAttemptToFixExpStrMode();
			enableSelectBestMatchingLanguage();
			optionsChangesetNumber++;
		}
		/**
		 * Returns token type description.
		 *
		 * @param tokenTypeId Token type id
		 * @return String representing token type description.
		 *
		 * @deprecated Planned to be removed, use {@link Token#getTokenTypeDescription(int)} instead
		 */
		[Obsolete("Planned to be removed, use Token.getTokenTypeDescription(int) instead")]
		public static String getTokenTypeDescription(int tokenTypeId) {
			return Token.getTokenTypeDescription(tokenTypeId);
		}
		/**
		 * Converts integer number to hex string (plain text)
		 *
		 * @param number   Integer number
		 * @return         Hex string (i.e. FF23)
		 * 
		 * @deprecated Planned to be removed, use {@link StringUtils#numberToHexString(int)} instead
		 */
		[Obsolete("Planned to be removed, use StringUtils.numberToHexString(int) instead")]
		public static String numberToHexString(int number) {
			return StringUtils.numberToHexString(number);
		}
		/**
		 * Converts long number to hex string (plain text)
		 *
		 * @param number   Long number
		 * @return         Hex string (i.e. FF23)
		 * 
		 * @deprecated Planned to be removed, use {@link StringUtils#numberToHexString(long)} instead
		 */
		[Obsolete("Planned to be removed, use StringUtils.numberToHexString(long) instead")]
		public static String numberToHexString(long number) {
			return StringUtils.numberToHexString(number);
		}
		/**
		 * Converts (long)double number to hex string (plain text)
		 *
		 * @param number   Double number
		 * @return         Hex string (i.e. FF23)
		 * 
		 * @deprecated Planned to be removed, use {@link StringUtils#numberToHexString(double)} instead
		 */
		[Obsolete("Planned to be removed, use StringUtils.numberToHexString(double) instead")]
		public static String numberToHexString(double number) {
			return StringUtils.numberToHexString(number);
		}
		/**
		 * Converts hex string into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex string.
		 *
		 * @param hexString   Hex string (i.e. 48656C6C6F)
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 *
		 * @deprecated Planned to be removed, use {@link StringUtils#hexString2AsciiString(String)} instead
		 */
		[Obsolete("Planned to be removed, use StringUtils.hexString2AsciiString(String)")]
		public static String hexString2AsciiString(String hexString) {
			return StringUtils.hexString2AsciiString(hexString);
		}
		/**
		 * Converts number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number
		 *
		 * @param number   Integer number (i.e. 310939249775 = '48656C6C6F')
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 *
		 * @deprecated Planned to be removed, use {@link StringUtils#numberToAsciiString(int)} instead
		 */
		[Obsolete("Planned to be removed, use StringUtils.numberToAsciiString(int) instead")]
		public static String numberToAsciiString(int number) {
			return StringUtils.numberToAsciiString(number);
		}
		/**
		 * Converts number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number
		 *
		 * @param number   Long number (i.e. 310939249775 = '48656C6C6F')
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 *
		 * @deprecated Planned to be removed, use {@link StringUtils#numberToAsciiString(long)} instead
		 */
		[Obsolete("Planned to be removed, use StringUtils.numberToAsciiString(long) instead")]
		public static String numberToAsciiString(long number) {
			return StringUtils.numberToAsciiString(number);
		}
		/**
		 * Converts (long)double number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number casted to long type.
		 *
		 * @param number   Double number (i.e. 310939249775 = '48656C6C6F')
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 *
		 * @deprecated Planned to be removed, use {@link StringUtils#numberToAsciiString(double)} instead
		 */
		[Obsolete("Planned to be removed, use StringUtils.numberToAsciiString(double) instead")]
		public static String numberToAsciiString(double number) {
			return StringUtils.numberToAsciiString(number);
		}
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 *
		 * @param numberLiteral    Number literal in given system with base between
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
		 *                   given numeral system. Digits
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
		 *                   given numeral system.
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
		/**
		 * Converts double value to its fraction representation.
		 *
		 * @param value Value to be converted
		 *
		 * @return Array representing fraction. Sign at index 0,
		 * numerator at index 1, denominator at index 2.
		 * If conversion is not possible then Double.NaN is
		 * assigned to all the fields.
		 */
		public static double[] toFraction(double value) {
			return NumberTheory.toFraction(value);
		}
		/**
		 * Converts double value to its mixed fraction representation.
		 *
		 * @param value Value to be converted
		 *
		 * @return Array representing fraction.
		 * Sign at index 0, whole number at index 1,
		 * numerator at index 2, denominator at index 3.
		 * If conversion is not possible then Double.NaN is
		 * assigned to both numerator and denominator.
		 */
		public static double[] toMixedFraction(double value) {
			return NumberTheory.toMixedFraction(value);
		}
		/**
		 * Converts array representing fraction to fraction string representation.
		 *
		 * @param fraction    Array representing fraction (including mix fractions)
		 * @return  String representation of fraction.
		 *
		 * @see NumberTheory#toFraction(double)
		 * @see NumberTheory#toMixedFraction(double)
		 */
		public static String fractionToString(double[] fraction) {
			return NumberTheory.fractionToString(fraction);
		}
		/**
		 * Converts number to its fraction string representation.
		 *
		 * @param value   Given number
		 * @return  String representation of fraction.
		 *
		 * @see NumberTheory#toFraction(double)
		 * @see NumberTheory#fractionToString(double[])
		 */
		public static String toFractionString(double value) {
			return NumberTheory.toFractionString(value);
		}
		/**
		 * Converts number to its mixed fraction string representation.
		 *
		 * @param value   Given number
		 * @return  String representation of fraction.
		 *
		 * @see NumberTheory#toMixedFraction(double)
		 * @see NumberTheory#fractionToString(double[])
		 */
		public static String toMixedFractionString(double value) {
			return NumberTheory.toMixedFractionString(value);
		}
		internal static void clearConsoleOutput() {
#if NET35
			CONSOLE_OUTPUT.Remove(0, CONSOLE_OUTPUT.Length);
#else
			CONSOLE_OUTPUT.Clear();
#endif
		}
		private static void initConsoleOutput() {
			if (CONSOLE_ROW_NUMBER == 1 && CONSOLE_OUTPUT.Length == 0) {
				Console.Write(CONSOLE_PREFIX);
				clearConsoleOutput();
				CONSOLE_OUTPUT.Append(CONSOLE_OUTPUT_PREFIX);
			}
		}
		/**
		 * Prints object.toString to the Console + new line
		 *
		 * @param o    Object to print
		 */
		public static void consolePrintln(Object o) {
			lock (CONSOLE_OUTPUT) {
				initConsoleOutput();
				Console.WriteLine(o);
				CONSOLE_ROW_NUMBER++;
				Console.Write(CONSOLE_PREFIX);
				CONSOLE_OUTPUT.Append(o);
				CONSOLE_OUTPUT.Append(StringInvariant.NEW_LINE);
				CONSOLE_OUTPUT.Append(CONSOLE_OUTPUT_PREFIX);
			}
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
			lock (CONSOLE_OUTPUT) {
				initConsoleOutput();
				Console.WriteLine();
				CONSOLE_ROW_NUMBER++;
				Console.Write(CONSOLE_PREFIX);
				CONSOLE_OUTPUT.Append(StringInvariant.NEW_LINE);
				CONSOLE_OUTPUT.Append(CONSOLE_OUTPUT_PREFIX);
			}
		}
		/**
		 * Prints object.toString to the Console, no new line
		 *
		 * @param o    Object to print
		 */
		public static void consolePrint(Object o) {
			lock (CONSOLE_OUTPUT) {
				initConsoleOutput();
				Console.Write(o);
				CONSOLE_OUTPUT.Append(o);
			}
		}
		public static void consolePrintSettings(String prefix) {
			mXparser.consolePrintln(prefix + "mXparser.VERSION = " + mXparser.VERSION);
			mXparser.consolePrintln(prefix + "mXparser.BUIT_FOR = " + mXparser.BUIT_FOR);
			mXparser.consolePrintln(prefix + "Environment.Version = " + Environment.Version);
			mXparser.consolePrintln(prefix + "checkIfCanonicalRounding = " + mXparser.checkIfCanonicalRounding());
			mXparser.consolePrintln(prefix + "checkIfAlmostIntRounding = " + mXparser.checkIfAlmostIntRounding());
			mXparser.consolePrintln(prefix + "checkIfUlpRounding = " + mXparser.checkIfUlpRounding());
			mXparser.consolePrintln(prefix + "checkIfRadiansMode = " + mXparser.checkIfRadiansMode());
			mXparser.consolePrintln(prefix + "checkIfDegreesMode = " + mXparser.checkIfDegreesMode());
			mXparser.consolePrintln(prefix + "checkIfExactMode = " + mXparser.checkIfExactMode());
			mXparser.consolePrintln(prefix + "checkIfEpsilonMode = " + mXparser.checkIfEpsilonMode());
			mXparser.consolePrintln(prefix + "getEpsilon = " + mXparser.getEpsilon());
			mXparser.consolePrintln(prefix + "getMaxAllowedRecursionDepth = " + mXparser.getMaxAllowedRecursionDepth());
			mXparser.consolePrintln(prefix + "getMaxNumInPrimesCache = " + mXparser.getMaxNumInPrimesCache());
			mXparser.consolePrintln(prefix + "getToFractionInitSearchSize = " + mXparser.getToFractionInitSearchSize());
			mXparser.consolePrintln(prefix + "checkIfsetToOverrideBuiltinTokens = " + mXparser.checkIfsetToOverrideBuiltinTokens());
			mXparser.consolePrintln(prefix + "checkIfSelectBestMatchingLanguage = " + mXparser.checkIfSelectBestMatchingLanguage());
		}
		public static void consolePrintSettings() {
			consolePrintSettings(StringInvariant.EMPTY);
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
			lock (CONSOLE_OUTPUT) {
				clearConsoleOutput();
				CONSOLE_ROW_NUMBER = 1;
			}
		}
		/**
		 * Sets default console prefix.
		 */
		public static void setDefaultConsolePrefix() {
			lock (CONSOLE_PREFIX) {
				CONSOLE_PREFIX = "[mXparser-v." + VERSION + "] ";
			}
		}
		/**
		 * Sets default console output string prefix.
		 */
		public static void setDefaultConsoleOutputPrefix() {
			lock (CONSOLE_OUTPUT_PREFIX) {
				CONSOLE_OUTPUT_PREFIX = "[mXparser-v." + VERSION + "] ";
			}
		}
		/**
		 * Sets console prefix.
		 * @param consolePrefix String containing console prefix definition.
		 */
		public static void setConsolePrefix(String consolePrefix) {
			lock (CONSOLE_PREFIX) {
				CONSOLE_PREFIX = consolePrefix;
			}
		}
		/**
		 * Sets console output string prefix.
		 * @param consoleOutputPrefix String containing console output prefix definition.
		 */
		public static void setConsoleOutputPrefix(String consoleOutputPrefix) {
			lock (CONSOLE_OUTPUT_PREFIX) {
				CONSOLE_OUTPUT_PREFIX = consoleOutputPrefix;
			}
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
			lock (CONSOLE_OUTPUT) {
				return CONSOLE_OUTPUT.ToString();
			}
		}
		/**
		 * Returns detailed user help on the syntax of mathematical expressions.
		 *
		 * @return One string value containing all the help.
		 */
		public static String getHelp() {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelp();
			}
		}
		/**
		 * Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @return One string value containing all the help.
		 */
		public static String getHelp(String query) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelp(query);
			}
		}
		/**
		 * Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param addHeader Indicator whether to add a header.
		 * @param addCaption Indicator whether to add caption.
		 * @param caption If a non-standard caption is to be added, any string other than ""
		 * will replace the standard caption with the one specified by the user.
		 *
		 * @return One string value containing all the help.
		 */
		public static String getHelp(bool addHeader, bool addCaption, String caption) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelp(addHeader, addCaption, caption);
			}
		}
		/**
		 * Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @param addHeader Indicator whether to add a header.
		 * @param addCaption Indicator whether to add caption.
		 * @param caption If a non-standard caption is to be added, any string other than ""
		 *
		 * @return One string value containing all the help.
		 */
		public static String getHelp(String query, bool addHeader, bool addCaption, String caption) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelp(query, addHeader, addCaption, caption);
			}
		}
		/**
		 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 *
		 * @return One string value in CSV format containing all the help.
		 */
		public static String getHelpAsCsv() {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsCsv();
			}
		}
		/**
		 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @return One string value in CSV format containing all the help.
		 */
		public static String getHelpAsCsv(String query) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsCsv(query);
			}
		}
		/**
		 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 *
		 * @param quote Text qualifier.
		 * @param delimiter Delimiter.
		 * @param addHeader Indicator whether to add a header.
		 *
		 * @return One string value in CSV format containing all the help.
		 */
		public static String getHelpAsCsv(String quote, String delimiter, bool addHeader) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsCsv(quote, delimiter, addHeader);
			}
		}
		/**
		 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @param quote Text qualifier.
		 * @param delimiter Delimiter.
		 * @param addHeader Indicator whether to add a header.
		 *
		 * @return One string value in CSV format containing all the help.
		 */
		public static String getHelpAsCsv(String query, String quote, String delimiter, bool addHeader) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsCsv(query, quote, delimiter, addHeader);
			}
		}
		/**
		 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 *
		 * @return One string value containing all the help. String in HTML table format.
		 */
		public static String getHelpAsHtmlTable() {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsHtmlTable();
			}
		}
		/**
		 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @return One string value containing all the help. String in HTML table format.
		 */
		public static String getHelpAsHtmlTable(String query) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsHtmlTable(query);
			}
		}
		/**
		 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 *
		 * @param addHeader Indicator whether to add a header.
		 * @param addCaption Indicator whether to add caption.
		 * @param addFigure Indicator whether to add a FIGURE tag.
		 * @param caption If a non-standard caption is to be added, use any string other than "".
		 * @param cssClass If CSS class is to be added, use any string other than "".
		 *
		 * @return One string value containing all the help. String in HTML table format.
		 */
		public static String getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, String caption, String cssClass) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsHtmlTable(addHeader, addCaption, addFigure, caption, cssClass);
			}
		}
		/**
		 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @param addHeader Indicator whether to add a header.
		 * @param addCaption Indicator whether to add caption.
		 * @param addFigure Indicator whether to add a FIGURE tag.
		 * @param caption If a non-standard caption is to be added, use any string other than "".
		 * @param cssClass If CSS class is to be added, use any string other than "".
		 *
		 * @return One string value containing all the help. String in HTML table format.
		 */
		public static String getHelpAsHtmlTable(String query, bool addHeader, bool addCaption, bool addFigure, String caption, String cssClass) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsHtmlTable(query, addHeader, addCaption, addFigure, caption, cssClass);
			}
		}
		/**
		 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 *
		 * @return One string value containing all the help. String in Markdown table format.
		 */
		public static String getHelpAsMarkdownTable() {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsMarkdownTable();
			}
		}
		/**
		 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.

		 * @return One string value containing all the help. String in Markdown table format.
		 */
		public static String getHelpAsMarkdownTable(String query) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsMarkdownTable(query);
			}
		}
		/**
		 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 *
		 * @param addHeader Indicator whether to add a header.
		 * @param addCaption Indicator whether to add caption.
		 * @param caption If a non-standard caption is to be added, use any string other than "".
		 *
		 * @return One string value containing all the help. String in Markdown table format.
		 */
		public static String getHelpAsMarkdownTable(bool addHeader, bool addCaption, String caption) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsMarkdownTable(addHeader, addCaption, caption);
			}
		}
		/**
		 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @param addHeader Indicator whether to add a header.
		 * @param addCaption Indicator whether to add caption.
		 * @param caption If a non-standard caption is to be added, use any string other than "".
		 *
		 * @return One string value containing all the help. String in Markdown table format.
		 */
		public static String getHelpAsMarkdownTable(String query, bool addHeader, bool addCaption, String caption) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsMarkdownTable(query, addHeader, addCaption, caption);
			}
		}
		/**
		 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 *
		 * @return One string value containing all the help. String in Json format.
		 */
		public static String getHelpAsJson() {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsJson();
			}
		}
		/**
		 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @return One string value containing all the help. String in Json format.
		 */
		public static String getHelpAsJson(String query) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsJson(query);
			}
		}
		/**
		 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 *
		 * @param addCaption Indicator whether to add caption.
		 * @param caption If a non-standard caption is to be added, use any string other than "".
		 *
		 * @return One string value containing all the help. String in Json format.
		 */
		public static String getHelpAsJson(bool addCaption, String caption) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsJson(addCaption, caption);
			}
		}
		/**
		 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 *
		 * @param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 *
		 * @param addCaption Indicator whether to add caption.
		 * @param caption If a non-standard caption is to be added, use any string other than "".
		 *
		 * @return One string value containing all the help. String in Json format.
		 */
		public static String getHelpAsJson(String query, bool addCaption, String caption) {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getHelpAsJson(query, addCaption, caption);
			}
		}
		/**
		 * Prints all help content.
		 */
		public static void consolePrintHelp() {
			consolePrintln(getHelp());
		}
		/**
		 * Prints filtered help content.
		 * @param word      Keyword.
		 */
		public static void consolePrintHelp(String word) {
			consolePrintln(getHelp(word));
		}
		/**
		 * Returns list of keywords known to the parser
		 *
		 * @return      List of keywords known to the parser.
		 *
		 * @see KeyWord
		 * @see KeyWord#wordTypeId
		 * @see mXparser#getHelp()
		 */
		public static List<KeyWord> getKeyWords() {
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getKeyWords();
			}
		}
		/**
		 * Returns list of keywords known to the parser
		 *
		 * @param query Give any string to filter list of keywords against this string.
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
			lock (HELP_EXPRESSION) {
				return HELP_EXPRESSION.getKeyWords(query);
			}
		}
		/**
		 * Function used to introduce some compatibility
		 * between JAVA and C# while regexp matching.
		 *
		 * @param str         String
		 * @param pattern     Pattern (regexp)
		 *
		 * @return            True if pattern matches entirely, False otherwise
		 *
		 * @deprecated Planned to be removed, use {@link StringUtils#regexMatch(String, String)} instead
		 */
		[Obsolete("Planned to be removed, use StringUtils.regexMatch(String, String) instead")]
		public static bool regexMatch(String str, String pattern){
			return StringUtils.regexMatch(str, pattern);
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
		 * Prints tokens to the console.
		 * @param tokens   Tokens list.
		 *
		 * @see Expression#getCopyOfInitialTokens()
		 * @see Token
		 */
		public static void consolePrint(List<Token> tokens) {
			mXparser.consolePrintTokens(tokens);
		}
		/**
		 * Prints tokens to the console.
		 * @param tokens   Tokens list.
		 *
		 * @see Expression#getCopyOfInitialTokens()
		 * @see Token
		 */
		public static void consolePrintln(List<Token> tokens) {
			mXparser.consolePrintTokens(tokens);
			mXparser.consolePrintln();
		}
		/**
		 * The terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT.
		 */
		public static readonly String LICENSE = License.MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT;
		/**
		 * Prints to the console the terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT
		 */
		public static void consolePrintLicense() {
			License.consolePrintLicense();
		}
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
		 * @param timeMillis Number of milliseconds
		 */
		public static void wait (int timeMillis){
			Thread.Sleep(timeMillis);
		}
		/**
		 * Method give a signal to other methods to cancel current calculation. This is a flag,
		 * remember to reset this flag after process is cancelled and you are going to start
		 * new calculation process.
		 */
		public static void cancelCurrentCalculation() {
			cancelCurrentCalculationFlag = true;
		}
		/**
		 * Resets a flag giving signal to the engine to cancel current calculation.
		 *
		 *  @see {@link #cancelCurrentCalculation()}
		 */
		public static void resetCancelCurrentCalculationFlag() {
			cancelCurrentCalculationFlag = false;
		}
		/**
		 * Check whether a flag to cancel current calculation process is set.
		 *
		 * @see {@link #cancelCurrentCalculation()}
		 * @see {@link #resetCancelCurrentCalculationFlag()}
		 */
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
		public const String NAMEv44 = "4.4";
		public const String NAMEv50 = "5.0";
		public const String NAMEv51 = "5.1";
		public const String NAMEv52 = "5.2";
		public const String NAMEv60 = "6.0";
	}
}