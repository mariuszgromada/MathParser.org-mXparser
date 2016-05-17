/*
 * @(#)NumberTheory.cs        3.0.0    2016-05-07
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
using System;

namespace org.mariuszgromada.math.mxparser.mathcollection {
	/**
	 * NumberTheory - summation / products etc...
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
	 */
	[CLSCompliant(true)]
	public sealed class NumberTheory {
		/**
		 * Minimum function.
		 *
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     if a,b <> Double.NaN returns Math.min(a, b),
		 *             otherwise returns Double.NaN.
		 */
		public static double min(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			return Math.Min(a, b);
		}
		/**
		 * Minimum function.
		 *
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers <> Double.NaN returns the smallest number,
		 *             otherwise returns Double.NaN.
		 */
		public static double min(params double[] numbers) {
			double min = Double.PositiveInfinity;
			foreach (double number in numbers) {
				if (Double.IsNaN(number))
					return Double.NaN;
				if (number < min)
					min = number;
			}
			return min;
		}
		/**
		 * Maximum function.
		 *
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     if a,b <> Double.NaN returns Math.max(a, b),
		 *             otherwise returns Double.NaN.
		 */
		public static double max(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			return Math.Max(a, b);
		}
		/**
		 * Maximum function.
		 *
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers <> Double.NaN returns the highest number,
		 *             otherwise returns Double.NaN.
		 */
		public static double max(params double[] numbers) {
			double max = Double.NegativeInfinity;
			foreach (double number in numbers) {
				if (Double.IsNaN(number))
					return Double.NaN;
				if (number > max)
					max = number;
			}
			return max;
		}
		/**
		 * Greatest common divisor (GCD)
		 *
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 * @return     GCD(a,b)
		 */
		public static double gcd(int a, int b) {
			a = Math.Abs(a);
			b = Math.Abs(b);
			if (a == 0)
				return b;
			while (b != 0)
				if (a > b)
					a -= b;
				else
					b -= a;
			return a;
		}
		/**
		 * Greatest common divisor (GCD)
		 *
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     if a, b <> Double.NaN returns gcd( (int)Math.round(a),(int)Math.round(b) ),
		 *             otherwise returns Double.NaN.
		 */
		public static double gcd(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(a))
				return Double.NaN;
			return gcd((int)Math.Round(a), (int)Math.Round(b));
		}
		/**
		 * Greatest common divisor (GCD)
		 *
		 * @param      numbers             the numbers
		 *
		 * @return     GCD(a_1,...,a_n) a_1,...,a_n in numbers
		 */
		public static double gcd(params int[] numbers) {
			if (numbers.Length == 1)
				return numbers[0];
			if (numbers.Length == 2)
				return gcd(numbers[0], numbers[1]);
			for (int i = 1; i < numbers.Length; i++)
				numbers[i] = (int)gcd(numbers[i - 1], numbers[i]);
			return numbers[numbers.Length - 1];
		}
		/**
		 * Greatest common divisor (GCD)
		 *
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers <> Double.NaN returns
		 *             GCD(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double.NaN.
		 */
		public static double gcd(params double[] numbers) {
			int[] intNumbers = new int[numbers.Length];
			for (int i = 0; i < numbers.Length; i++) {
				double n = numbers[i];
				if (Double.IsNaN(n))
					return Double.NaN;
				intNumbers[i] = (int)Math.Round(n);
			}
			return gcd(intNumbers);
		}
		/**
		 * Latest common multiply (LCM)
		 *
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     LCM(a,b)
		 */
		public static double lcm(int a, int b) {
			if ((a == 0) || (b == 0))
				return 0;
			return Math.Abs(a * b) / gcd(a, b);
		}
		/**
		 * Latest common multiply (LCM)
		 *
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     if a, b <> Double.NaN returns lcm( (int)Math.round(a), (int)Math.round(b) ),
		 *             otherwise returns Double.NaN.
		 */
		public static double lcm(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(a))
				return Double.NaN;
			return lcm((int)Math.Round(a), (int)Math.Round(b));
		}
		/**
		 * Latest common multiply (LCM)
		 *
		 * @param      numbers             the numbers
		 *
		 * @return     LCM(a_1,...,a_n) a_1,...,a_n in numbers
		 */
		public static double lcm(params int[] numbers) {
			if (numbers.Length == 1)
				return numbers[0];
			if (numbers.Length == 2)
				return lcm(numbers[0], numbers[1]);
			for (int i = 1; i < numbers.Length; i++)
				numbers[i] = (int)lcm(numbers[i - 1], numbers[i]);
			return numbers[numbers.Length - 1];
		}
		/**
		 * Latest common multiply (LCM)
		 *
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers <> Double.NaN returns
		 *             LCM(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double.NaN.
		 */
		public static double lcm(params double[] numbers) {
			int[] intNumbers = new int[numbers.Length];
			for (int i = 0; i < numbers.Length; i++) {
				double n = numbers[i];
				if (Double.IsNaN(n))
					return Double.NaN;
				intNumbers[i] = (int)Math.Round(n);
				if (intNumbers[i] == 0)
					return 0;
			}
			return lcm(intNumbers);
		}
		/**
		 * Adding numbers.
		 *
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers <> Double.NaN returns
		 *             sum(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double.NaN.
		 */
		public static double sum(params double[] numbers) {
			if (numbers.Length == 0) return Double.NaN;
			if (numbers.Length == 1) return numbers[0];
			double sum = 0;
			foreach (double xi in numbers) {
				if (Double.IsNaN(xi))
					return Double.NaN;
				sum += xi;
			}
			return sum;
		}
		/**
		 * Numbers multiplication.
		 *
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers <> Double.NaN returns
		 *             prod(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double.NaN.
		 */
		public static double prod(params double[] numbers) {
			if (numbers.Length == 0) return Double.NaN;
			if (numbers.Length == 1) return numbers[0];
			double prod = 1;
			foreach (double xi in numbers) {
				if (Double.IsNaN(xi))
					return Double.NaN;
				prod *= xi;
			}
			return prod;
		}
		/**
		 * Prime test
		 *
		 * @param n
		 *
		 * @return true if number is prime, otherwise false
		 */
		public static bool primeTest(long n) {
			/*
			 * 2 is a prime :-)
			 */
			if (n == 2) return true;
			/*
			 * Even number is not a prime
			 */
			if (n % 2 == 0) return false;
			/*
			 * Everything <= 1 is not a prime
			 */
			if (n <= 1) return false;
			/*
			 * Will be searching for divisors till sqrt(n)
			 */
			long top = (long)Math.Sqrt(n);
			/*
			 * Supporting variable indicating odd end of primes cache
			 */
			long primesCacheOddEnd = 3;
			/*
			 * If prime cache exist
			 */
			if (mXparser.primesCache != null)
				if (mXparser.primesCache.cacheStatus == PrimesCache.CACHING_FINISHED) {
					/*
					 * If prime cache is ready and number we are querying
					 * is in cache the cache answer will be returned
					 */
					if (n <= mXparser.primesCache.maxNumInCache)
						return mXparser.primesCache.isPrime[(int)n];
					else {
						/*
						 * If number is bigger than maximum stored in cache
						 * the we are querying each prime in cache
						 * and checking if it is a divisor of n
						 */
						long topCache = Math.Min(top, mXparser.primesCache.maxNumInCache);
						long i;
						for (i = 3; i <= topCache; i += 2) {
							if (mXparser.primesCache.isPrime[(int)i] == true)
								if (n % i == 0) return false;
						}
						/*
						 * If no prime divisor of n in primes cache
						 * we are seting the odd end of prime cache
						 */
						primesCacheOddEnd = i;
					}
				}
			/*
			 * Finally we are checking any odd number that
			 * still left and is below sqrt(n) agains being
			 * divisor of n
			 */
			for (long i = primesCacheOddEnd; i <= top; i += 2)
				if (n % i == 0) return false;
			return true;
		}
		/**
		 * Prime test
		 *
		 * @param n
		 *
		 * @return true if number is prime, otherwise false
		 */
		public static double primeTest(double n) {
			if (Double.IsNaN(n)) return Double.NaN;
			bool isPrime = primeTest((long)n);
			if (isPrime == true)
				return 1;
			else
				return 0;
		}
		/**
		 * Prime counting function
		 *
		 * @param n number
		 *
		 * @return Number of primes below or equal x
		 */
		public static long primeCount(long n) {
			if (n <= 1) return 0;
			if (n == 2) return 1;
			long numberOfPrimes = 1;
			for (long i = 3; i <= n; i++)
				if (primeTest(i) == true)
					numberOfPrimes++;
			return numberOfPrimes;
		}
		/**
		 * Prime counting function
		 *
		 * @param n number
		 *
		 * @return Number of primes below or equal x
		 */
		public static double primeCount(double n) {
			return primeCount((long)n);
		}
		/**
		 * Summation operator (SIGMA FROM i = a, to b,  f(i) by delta
		 *
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return     summation operation (for empty summation operations returns 0).
		 */
		public static double sigmaSummation(Expression f, Argument index, double from, double to, double delta) {
			double result = 0;
			if ((Double.IsNaN(delta)) || (Double.IsNaN(from)) || (Double.IsNaN(to)) || (delta == 0))
				return Double.NaN;
			if ((to >= from) && (delta > 0)) {
				double i;
				for (i = from; i < to; i += delta)
					result += mXparser.getFunctionValue(f, index, i);
				if (delta - (i - to) > 0.5 * delta) result += mXparser.getFunctionValue(f, index, to);
			} else if ((to <= from) && (delta < 0)) {
				double i;
				for (i = from; i > to; i += delta)
					result += mXparser.getFunctionValue(f, index, i);
				if (delta - (to - i) > 0.5 * delta) result += mXparser.getFunctionValue(f, index, to);
			} else if (from == to)
				result += mXparser.getFunctionValue(f, index, from);
			return result;
		}
		/**
		 * Product operator
		 *
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return     product operation (for empty product operations returns 1).
		 *
		 * @see        Expression
		 * @see        Argument
		 */
		public static double piProduct(Expression f, Argument index, double from, double to, double delta) {
			if ((Double.IsNaN(delta)) || (Double.IsNaN(from)) || (Double.IsNaN(to)) || (delta == 0))
				return Double.NaN;
			double result = 1;
			if ((to >= from) && (delta > 0)) {
				double i;
				for (i = from; i < to; i += delta)
					result *= mXparser.getFunctionValue(f, index, i);
				if (delta - (i - to) > 0.5 * delta) result *= mXparser.getFunctionValue(f, index, to);
			} else if ((to <= from) && (delta < 0)) {
				double i;
				for (i = from; i > to; i += delta)
					result *= mXparser.getFunctionValue(f, index, i);
				if (delta - (to - i) > 0.5 * delta) result *= mXparser.getFunctionValue(f, index, to);
			} else if (from == to)
				result *= mXparser.getFunctionValue(f, index, from);
			return result;
		}
		/**
		 * Minimum value - iterative operator.
		 *
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return     product operation (for empty product operations returns 1).
		 *
		 * @see        Expression
		 * @see        Argument
		 */
		public static double min(Expression f, Argument index, double from, double to, double delta) {
			if ((Double.IsNaN(delta)) || (Double.IsNaN(from)) || (Double.IsNaN(to)) || (delta == 0))
				return Double.NaN;
			double min = Double.PositiveInfinity;
			double v;
			if ((to >= from) && (delta > 0)) {
				for (double i = from; i < to; i += delta) {
					v = mXparser.getFunctionValue(f, index, i);
					if (v < min) min = v;
				}
				v = mXparser.getFunctionValue(f, index, to);
				if (v < min) min = v;
			} else if ((to <= from) && (delta < 0)) {
				for (double i = from; i > to; i += delta) {
					v = mXparser.getFunctionValue(f, index, i);
					if (v < min) min = v;
				}
				v = mXparser.getFunctionValue(f, index, to);
				if (v < min) min = v;
			} else if (from == to)
				min = mXparser.getFunctionValue(f, index, from);
			return min;
		}
		/**
		 * Maximum value - iterative operator.
		 *
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return     product operation (for empty product operations returns 1).
		 *
		 * @see        Expression
		 * @see        Argument
		 */
		public static double max(Expression f, Argument index, double from, double to, double delta) {
			if ((Double.IsNaN(delta)) || (Double.IsNaN(from)) || (Double.IsNaN(to)) || (delta == 0))
				return Double.NaN;
			double max = Double.NegativeInfinity;
			double v;
			if ((to >= from) && (delta > 0)) {
				for (double i = from; i < to; i += delta) {
					v = mXparser.getFunctionValue(f, index, i);
					if (v > max) max = v;
				}
				v = mXparser.getFunctionValue(f, index, to);
				if (v > max) max = v;
			} else if ((to <= from) && (delta < 0)) {
				for (double i = from; i > to; i += delta) {
					v = mXparser.getFunctionValue(f, index, i);
					if (v > max) max = v;
				}
				v = mXparser.getFunctionValue(f, index, to);
				if (v > max) max = v;
			} else if (from == to)
				max = mXparser.getFunctionValue(f, index, from);
			return max;
		}
	}
}