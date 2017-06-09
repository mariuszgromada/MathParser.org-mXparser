/*
 * @(#)NumberTheory.java        4.1.0    2017-06-09
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
package org.mariuszgromada.math.mxparser.mathcollection;

import java.util.Arrays;

import org.mariuszgromada.math.mxparser.Argument;
import org.mariuszgromada.math.mxparser.Expression;
import org.mariuszgromada.math.mxparser.mXparser;
import org.mariuszgromada.math.mxparser.parsertokens.ParserSymbol;

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
 * @version        4.1.0
 */
public final class NumberTheory {
	/**
	 * Minimum function.
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     if a,b &lt;&gt; Double.NaN returns Math.min(a, b),
	 *             otherwise returns Double.NaN.
	 */
	public static final double min(double a, double b) {
		if (Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		return Math.min(a, b);
	}
	/**
	 * Minimum function.
	 *
	 * @param      numbers             the a function parameter
	 *
	 * @return     if each number form numbers &lt;&gt; Double.NaN returns the smallest number,
	 *             otherwise returns Double.NaN.
	 */
	public static final double min(double... numbers) {
		double min = Double.POSITIVE_INFINITY;
		for (double number : numbers) {
			if (Double.isNaN(number))
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
	 * @return     if a,b &lt;&gt; Double.NaN returns Math.max(a, b),
	 *             otherwise returns Double.NaN.
	 */
	public static final double max(double a, double b) {
		if (Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		return Math.max(a, b);
	}
	/**
	 * Maximum function.
	 *
	 * @param      numbers             the a function parameter
	 *
	 * @return     if each number form numbers &lt;&gt; Double.NaN returns the highest number,
	 *             otherwise returns Double.NaN.
	 */
	public static final double max(double... numbers) {
		double max = Double.NEGATIVE_INFINITY;
		for (double number : numbers) {
			if (Double.isNaN(number))
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
	public static final double gcd(int a, int b) {
		a = Math.abs(a);
		b = Math.abs(b);
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
	 * @return     if a, b &lt;&gt; Double.NaN returns gcd( (int)Math.round(a),(int)Math.round(b) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double gcd(double a, double b) {
		if ( Double.isNaN(a) || Double.isNaN(a) )
			return Double.NaN;
		return gcd( (int)Math.round(a),(int)Math.round(b) );
	}
	/**
	 * Greatest common divisor (GCD)
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     GCD(a_1,...,a_n) a_1,...,a_n in numbers
	 */
	public static final double gcd(int... numbers) {
		if (numbers.length == 1)
			return numbers[0];
		if (numbers.length == 2)
			return gcd( numbers[0], numbers[1] );
		for (int i = 1; i < numbers.length; i++)
			numbers[i] = (int)gcd( numbers[i-1], numbers[i] );
		return numbers[numbers.length-1];
	}
	/**
	 * Greatest common divisor (GCD)
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     if each number form numbers &lt;&gt; Double.NaN returns
	 *             GCD(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static final double gcd(double... numbers) {
		int[] intNumbers = new int[numbers.length];
		for(int i = 0; i < numbers.length; i++) {
			double n = numbers[i];
			if ( Double.isNaN(n) )
				return Double.NaN;
			intNumbers[i] = (int)Math.round(n);
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
	public static final double lcm(int a, int b) {
		if ( (a == 0) || (b == 0) )
			return 0;
		return Math.abs(a*b) / gcd(a, b);
	}
	/**
	 * Latest common multiply (LCM)
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     if a, b &lt;&gt; Double.NaN returns lcm( (int)Math.round(a), (int)Math.round(b) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double lcm(double a, double b) {
		if ( Double.isNaN(a) || Double.isNaN(a) )
			return Double.NaN;
		return lcm( (int)Math.round(a), (int)Math.round(b) );
	}
	/**
	 * Latest common multiply (LCM)
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     LCM(a_1,...,a_n) a_1,...,a_n in numbers
	 */
	public static final double lcm(int... numbers) {
		if (numbers.length == 1)
			return numbers[0];
		if (numbers.length == 2)
			return lcm( numbers[0], numbers[1] );
		for (int i = 1; i < numbers.length; i++)
			numbers[i] = (int)lcm( numbers[i-1], numbers[i] );
		return numbers[numbers.length-1];
	}
	/**
	 * Latest common multiply (LCM)
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     if each number form numbers &lt;&gt; Double.NaN returns
	 *             LCM(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static final double lcm(double... numbers) {
		int[] intNumbers = new int[numbers.length];
		for(int i = 0; i < numbers.length; i++) {
			double n = numbers[i];
			if ( Double.isNaN(n) )
				return Double.NaN;
			intNumbers[i] = (int)Math.round(n);
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
	 * @return     if each number from numbers &lt;&gt; Double.NaN returns
	 *             sum(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static final double sum(double... numbers) {
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) return numbers[0];
		double sum = 0;
		for (double xi : numbers) {
			if ( Double.isNaN(xi) )
				return Double.NaN;
			sum+=xi;
		}
		return sum;
	}
	/**
	 * Numbers multiplication.
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     if each number from numbers &lt;&gt; Double.NaN returns
	 *             prod(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static final double prod(double... numbers) {
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) return numbers[0];
		double prod = 1;
		for (double xi : numbers) {
			if ( Double.isNaN(xi) )
				return Double.NaN;
			prod*=xi;
		}
		return prod;
	}

	/**
	 * Prime test
	 *
	 * @param n           The number to be tested.
	 *
	 * @return true if number is prime, otherwise false
	 */
	public static final boolean primeTest(long n) {
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
		long top = (long)Math.sqrt(n);
		/*
		 * Supporting variable indicating odd end of primes cache
		 */
		long primesCacheOddEnd = 3;
		/*
		 * If prime cache exist
		 */
		if (mXparser.primesCache != null)
			if ( mXparser.primesCache.cacheStatus == PrimesCache.CACHING_FINISHED ) {
					/*
					 * If prime cache is ready and number we are querying
					 * is in cache the cache answer will be returned
					 */
					if ( n <= mXparser.primesCache.maxNumInCache )
						return mXparser.primesCache.isPrime[(int)n];
					else {
						/*
						 * If number is bigger than maximum stored in cache
						 * the we are querying each prime in cache
						 * and checking if it is a divisor of n
						 */
						long topCache = Math.min(top, mXparser.primesCache.maxNumInCache);
						long i;
						for (i = 3; i <= topCache; i+=2) {
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
		for (long i = primesCacheOddEnd; i <= top; i+=2)
			if (n % i == 0) return false;
		return true;
	}
	/**
	 * Prime test
	 *
	 * @param n        The number to be tested.
	 *
	 * @return true if number is prime, otherwise false
	 */
	public static final double primeTest(double n) {
		if ( Double.isNaN(n) ) return Double.NaN;
		boolean isPrime = primeTest((long)n);
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
	public static final long primeCount(long n) {
		if (n <= 1) return 0;
		if (n == 2) return 1;
		long numberOfPrimes = 1;
		for (long i = 3; i <= n; i++)
			if( primeTest(i) == true)
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
	public static final double primeCount(double n) {
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
	public static final double sigmaSummation(Expression f, Argument index, double from, double to, double delta) {
		double result = 0;
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		if ( (to >= from) && (delta > 0) ) {
			double i;
			for (i = from; i < to; i+=delta)
				result += mXparser.getFunctionValue(f, index, i);
			if ( delta - (i - to) > 0.5 * delta) result += mXparser.getFunctionValue(f, index, to);
		} else if ( (to <= from) && (delta < 0) ) {
			double i;
			for (i = from; i > to; i+=delta)
				result += mXparser.getFunctionValue(f, index, i);
			if ( delta - (to - i) > 0.5 * delta) result += mXparser.getFunctionValue(f, index, to);
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
	public static final double piProduct(Expression f, Argument index, double from, double to, double delta) {
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		double result = 1;
		if ( (to >= from) && (delta > 0) ) {
			double i;
			for (i = from; i < to; i+=delta)
				result *= mXparser.getFunctionValue(f, index, i);
			if ( delta - (i - to) > 0.5 * delta) result *= mXparser.getFunctionValue(f, index, to);
		} else if ( (to <= from) && (delta < 0) ) {
			double i;
			for (i = from; i > to; i+=delta)
				result *= mXparser.getFunctionValue(f, index, i);
			if ( delta - (to - i) > 0.5 * delta) result *= mXparser.getFunctionValue(f, index, to);
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
	public static final double min(Expression f, Argument index, double from, double to, double delta) {
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		double min = Double.POSITIVE_INFINITY;
		double v;
		if ( (to >= from) && (delta > 0) ) {
			for (double i = from; i < to; i+=delta) {
				v = mXparser.getFunctionValue(f, index, i);
				if (v < min) min = v;
			}
			v = mXparser.getFunctionValue(f, index, to);
			if (v < min) min = v;
		} else if ( (to <= from) && (delta < 0) ) {
			for (double i = from; i > to; i+=delta) {
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
	public static final double max(Expression f, Argument index, double from, double to, double delta) {
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		double max = Double.NEGATIVE_INFINITY;
		double v;
		if ( (to >= from) && (delta > 0) ) {
			for (double i = from; i < to; i+=delta) {
				v = mXparser.getFunctionValue(f, index, i);
				if (v > max) max = v;
			}
			v = mXparser.getFunctionValue(f, index, to);
			if (v > max) max = v;
		} else if ( (to <= from) && (delta < 0) ) {
			for (double i = from; i > to; i+=delta) {
				v = mXparser.getFunctionValue(f, index, i);
				if (v > max) max = v;
			}
			v = mXparser.getFunctionValue(f, index, to);
			if (v > max) max = v;
		} else if (from == to)
			max = mXparser.getFunctionValue(f, index, from);
		return max;
	}
    /**
     * Return regular expression representing number literal
     * string in given numeral system with base between 1 and 36.
     *
     * @param numeralSystemBase    Base of numeral system, base between 1 and 36
     * @return        Regular expression string if base between 1 and 36,
     *                otherwise empty string "" is returned.
     */
	private static final String getRegExpForNumeralSystem(int numeralSystemBase) {
		switch (numeralSystemBase) {
			case 1: return ParserSymbol.BASE1_REG_EXP;
			case 2: return ParserSymbol.BASE2_REG_EXP;
			case 3: return ParserSymbol.BASE3_REG_EXP;
			case 4: return ParserSymbol.BASE4_REG_EXP;
			case 5: return ParserSymbol.BASE5_REG_EXP;
			case 6: return ParserSymbol.BASE6_REG_EXP;
			case 7: return ParserSymbol.BASE7_REG_EXP;
			case 8: return ParserSymbol.BASE8_REG_EXP;
			case 9: return ParserSymbol.BASE9_REG_EXP;
			case 10: return ParserSymbol.BASE10_REG_EXP;
			case 11: return ParserSymbol.BASE11_REG_EXP;
			case 12: return ParserSymbol.BASE12_REG_EXP;
			case 13: return ParserSymbol.BASE13_REG_EXP;
			case 14: return ParserSymbol.BASE14_REG_EXP;
			case 15: return ParserSymbol.BASE15_REG_EXP;
			case 16: return ParserSymbol.BASE16_REG_EXP;
			case 17: return ParserSymbol.BASE17_REG_EXP;
			case 18: return ParserSymbol.BASE18_REG_EXP;
			case 19: return ParserSymbol.BASE19_REG_EXP;
			case 20: return ParserSymbol.BASE20_REG_EXP;
			case 21: return ParserSymbol.BASE21_REG_EXP;
			case 22: return ParserSymbol.BASE22_REG_EXP;
			case 23: return ParserSymbol.BASE23_REG_EXP;
			case 24: return ParserSymbol.BASE24_REG_EXP;
			case 25: return ParserSymbol.BASE25_REG_EXP;
			case 26: return ParserSymbol.BASE26_REG_EXP;
			case 27: return ParserSymbol.BASE27_REG_EXP;
			case 28: return ParserSymbol.BASE28_REG_EXP;
			case 29: return ParserSymbol.BASE29_REG_EXP;
			case 30: return ParserSymbol.BASE30_REG_EXP;
			case 31: return ParserSymbol.BASE31_REG_EXP;
			case 32: return ParserSymbol.BASE32_REG_EXP;
			case 33: return ParserSymbol.BASE33_REG_EXP;
			case 34: return ParserSymbol.BASE34_REG_EXP;
			case 35: return ParserSymbol.BASE35_REG_EXP;
			case 36: return ParserSymbol.BASE36_REG_EXP;
		}
		/* reg exp that does not match anything */
		return "\\b\\B";
	}
	/**
	 * Digit index based on digit character for numeral systems with
	 * base between 1 and 36.
	 *
	 * @param digitChar   Digit character (lower or upper case) representing digit in numeral
	 *                    systems with base between 1 and 36. Digits:
	 *                    0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8,
	 *                    9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G,
	 *                    17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O,
	 *                    25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W,
	 *                    33:X, 34:Y, 35:Z
	 * @return            Returns digit index if digit char was recognized,
	 *                    otherwise returns -1.
	 */
	public static final int digitIndex(char digitChar) {
		switch (digitChar) {
			case '0': return 0;
			case '1': return 1;
			case '2': return 2;
			case '3': return 3;
			case '4': return 4;
			case '5': return 5;
			case '6': return 6;
			case '7': return 7;
			case '8': return 8;
			case '9': return 9;
			case 'A': return 10;
			case 'B': return 11;
			case 'C': return 12;
			case 'D': return 13;
			case 'E': return 14;
			case 'F': return 15;
			case 'G': return 16;
			case 'H': return 17;
			case 'I': return 18;
			case 'J': return 19;
			case 'K': return 20;
			case 'L': return 21;
			case 'M': return 22;
			case 'N': return 23;
			case 'O': return 24;
			case 'P': return 25;
			case 'Q': return 26;
			case 'R': return 27;
			case 'S': return 28;
			case 'T': return 29;
			case 'U': return 30;
			case 'V': return 31;
			case 'W': return 32;
			case 'X': return 33;
			case 'Y': return 34;
			case 'Z': return 35;
			case 'a': return 10;
			case 'b': return 11;
			case 'c': return 12;
			case 'd': return 13;
			case 'e': return 14;
			case 'f': return 15;
			case 'g': return 16;
			case 'h': return 17;
			case 'i': return 18;
			case 'j': return 19;
			case 'k': return 20;
			case 'l': return 21;
			case 'm': return 22;
			case 'n': return 23;
			case 'o': return 24;
			case 'p': return 25;
			case 'q': return 26;
			case 'r': return 27;
			case 's': return 28;
			case 't': return 29;
			case 'u': return 30;
			case 'v': return 31;
			case 'w': return 32;
			case 'x': return 33;
			case 'y': return 34;
			case 'z': return 35;
		}
		return -1;
	}
	/**
	 * Character representing digit for numeral systems with base
	 * between 1 and 36.
	 *
	 * @param digitIndex   Digit index between 0 and 35
	 * @return             Digit character representing digit
	 *                     for numeral systems with base between 1 and 36.
	 *                     Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
	 *                     8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F,
	 *                     16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N,
	 *                     24:O, 25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V,
	 *                     32:W, 33:X, 34:Y, 35:Z. If digit index is put of range
	 *                     '?' is returned.
	 */
	public static final char digitChar(int digitIndex) {
		switch (digitIndex) {
			case  0: return '0';
			case  1: return '1';
			case  2: return '2';
			case  3: return '3';
			case  4: return '4';
			case  5: return '5';
			case  6: return '6';
			case  7: return '7';
			case  8: return '8';
			case  9: return '9';
			case 10: return 'A';
			case 11: return 'B';
			case 12: return 'C';
			case 13: return 'D';
			case 14: return 'E';
			case 15: return 'F';
			case 16: return 'G';
			case 17: return 'H';
			case 18: return 'I';
			case 19: return 'J';
			case 20: return 'K';
			case 21: return 'L';
			case 22: return 'M';
			case 23: return 'N';
			case 24: return 'O';
			case 25: return 'P';
			case 26: return 'Q';
			case 27: return 'R';
			case 28: return 'S';
			case 29: return 'T';
			case 30: return 'U';
			case 31: return 'V';
			case 32: return 'W';
			case 33: return 'X';
			case 34: return 'Y';
			case 35: return 'Z';
		}
		return '?';
	}
	/**
	 * Recognition of numeral system base in which number literal represents
	 * number.
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
	 * @return  If number literal fits numeral system definition then numeral
	 *          system base is returned (base between 1 and 36), otherwise
	 *          -1 is returned.
	 */
	public static final int getNumeralSystemBase(String numberLiteral) {
		for (int b = 0; b <= 36; b++)
			if (mXparser.regexMatch(numberLiteral, getRegExpForNumeralSystem(b)))
				return b;
		return -1;
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
	public static final double convOthBase2Decimal(String numberLiteral, int numeralSystemBase) {
		if (numberLiteral == null) return Double.NaN;
		numberLiteral = numberLiteral.trim();
		if (numberLiteral.length() == 0) {
			if (numeralSystemBase == 1) return 0;
			else return Double.NaN;
		}
		if (numeralSystemBase < 1) return Double.NaN;
		if (numeralSystemBase > 36) return Double.NaN;
		char signChar = numberLiteral.charAt(0);
		double sign = 1.0;
		if (signChar == '-') {
			sign = -1.0;
			numberLiteral = numberLiteral.substring(1);
		} else if (signChar == '+') {
			sign = 1.0;
			numberLiteral = numberLiteral.substring(1);
		}
		int length = numberLiteral.length();
		double decValue = 0;
		int digit;
		for (int i = 0; i < length; i++ ) {
			digit = digitIndex( numberLiteral.charAt(i) );
			if (numeralSystemBase > 1) {
				if ( (digit >= 0) && (digit < numeralSystemBase) ) decValue = numeralSystemBase * decValue + digit;
				else return Double.NaN;
			} else {
				if (digit == 1) decValue = numeralSystemBase * decValue + digit;
				else return Double.NaN;
			}
		}
		return sign * decValue;
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
	public static final double convOthBase2Decimal(String numberLiteral) {
		if (numberLiteral == null) return Double.NaN;
		numberLiteral = numberLiteral.trim();
		int numberLiteralStrLenght = numberLiteral.length();
		if (numberLiteralStrLenght < 2) return Double.NaN;
		int numeralSystemBase = getNumeralSystemBase(numberLiteral);
		if (numeralSystemBase == -1) return Double.NaN;
		/* find dot position */
		int dotPos = numberLiteral.indexOf('.');
		if (dotPos == 0) return Double.NaN;
		char signChar = numberLiteral.charAt(0);
		double sign = 1.0;
		if (signChar == '-') sign = -1;
		String finalLiteral = "";
		if (numberLiteralStrLenght > dotPos+1) finalLiteral = numberLiteral.substring(dotPos+1);
		return sign * convOthBase2Decimal(finalLiteral, numeralSystemBase);
	}
	/**
	 * Other base to decimal conversion.
	 *
	 * @param numeralSystemBase   Numeral system base has to be above 0.
	 * @param digits              List of digits
	 * @return                    Number after conversion. If conversion is not possible then
	 *                            Double.NaN is returned.
	 */
	public static final double convOthBase2Decimal(int numeralSystemBase, int... digits) {
		if (numeralSystemBase < 1) return Double.NaN;
		if (digits == null) return Double.NaN;
		int length = digits.length;
		if (length == 0) {
			if (numeralSystemBase == 1) return 0;
			else return Double.NaN;
		}
		double decValue = 0;
		int digit;
		for (int i = 0; i < length; i++ ) {
			digit = digits[i];
			if (numeralSystemBase > 1) {
				if ( (digit >= 0) && (digit < numeralSystemBase) ) decValue = numeralSystemBase * decValue + digit;
				else return Double.NaN;
			} else {
				if (digit == 1) decValue = numeralSystemBase * decValue + digit;
				else return Double.NaN;
			}
		}
		return decValue;
	}
	/**
	 * Other base to decimal conversion.
	 *
	 * @param numeralSystemBase   Numeral system base has to be above 0.
	 * @param digits              List of digits
	 * @return                    Number after conversion. If conversion is not possible then
	 *                            Double.NaN is returned.
	 */
	public static final double convOthBase2Decimal(double numeralSystemBase, double... digits) {
		if (numeralSystemBase < 0) return Double.NaN;
		if (Double.isNaN(numeralSystemBase)) return Double.NaN;
		int numeralSystemBaseInt = (int)MathFunctions.floor(numeralSystemBase);
		if (digits == null) return Double.NaN;
		int length = digits.length;
		if (length == 0) {
			if (numeralSystemBaseInt == 1) return 0;
			else return Double.NaN;
		}
		int[] digitsInt = new int[length];
		double digit;
		for (int i = 0; i < length; i++ ) {
			digit = digits[i];
			if (Double.isNaN(digit)) return Double.NaN;
			digitsInt[i] = (int)digit;
		}
		return convOthBase2Decimal(numeralSystemBaseInt, digitsInt);
	}
	/**
	 * Other base to decimal conversion.
	 *
	 * @param baseAndDigits   Numeral system base and digits specification.
	 *                        Numeral system base is placed at index 0, rest of
	 *                        array is interpreted as digits. Numeral system base
	 *                        has to be above 0.
	 * @return                Number after conversion. If conversion is not possible then
	 *                        Double.NaN is returned.
	 */
	public static final double convOthBase2Decimal(int[] baseAndDigits) {
		if (baseAndDigits == null) return Double.NaN;
		if (baseAndDigits.length == 0) return Double.NaN;
		int numeralSystemBase = baseAndDigits[0];
		int[] digits = new int[baseAndDigits.length-1];
		for (int i = 1; i < baseAndDigits.length; i++)
			digits[i-1] = baseAndDigits[i];
		return convOthBase2Decimal(numeralSystemBase, digits);
	}
	/**
	 * Other base to decimal conversion.
	 *
	 * @param baseAndDigits   Numeral system base and digits specification.
	 *                        Numeral system base is placed at index 0, rest of
	 *                        array is interpreted as digits. Numeral system base
	 *                        has to be above 0.
	 * @return                Number after conversion. If conversion is not possible then
	 *                        Double.NaN is returned.
	 */
	public static final double convOthBase2Decimal(double[] baseAndDigits) {
		if (baseAndDigits == null) return Double.NaN;
		if (baseAndDigits.length == 0) return Double.NaN;
		double numeralSystemBase = baseAndDigits[0];
		double[] digits = new double[baseAndDigits.length-1];
		for (int i = 1; i < baseAndDigits.length; i++)
			digits[i-1] = baseAndDigits[i];
		return convOthBase2Decimal(numeralSystemBase, digits);
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
	public static final String convDecimal2OthBase(double decimalNumber, int numeralSystemBase) {
		if (Double.isNaN(decimalNumber)) return "NaN";
		if (numeralSystemBase < 1) return "NaN";
		if (numeralSystemBase > 36) return "NaN";
		if (decimalNumber == 0.0) {
			if (numeralSystemBase > 1) return "0";
			else return "";
		}
		double intPart = MathFunctions.floor( MathFunctions.abs(decimalNumber) );
		double sign = MathFunctions.sgn(decimalNumber);
		String signChar = "";
		if (sign < 0) signChar = "-";
		if (intPart < numeralSystemBase) return signChar + digitChar( (int)intPart );
		String numberLiteral = "";
		double quotient = intPart;
		int reminder;
		if (numeralSystemBase > 1)
			while (quotient >= 1.0) {
				reminder = (int)(quotient % numeralSystemBase);
				quotient = MathFunctions.floor(quotient / numeralSystemBase);
				numberLiteral = digitChar(reminder) + numberLiteral;
			}
		else {
			char[] repeat = new char[(int)intPart];
			Arrays.fill(repeat, '1');
			numberLiteral = (new String(repeat));
		}
		return signChar + numberLiteral;
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
	public static final String convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format) {
		if (Double.isNaN(decimalNumber)) return "NaN";
		if (numeralSystemBase < 1) return "NaN";
		if (numeralSystemBase > 36) return "NaN";
		String prefix = "";
		if ( (format == 1) || (format == 2) ) prefix = "b" + numeralSystemBase + ".";
		if (format == 2) {
			if (numeralSystemBase == 2) prefix = "b.";
			if (numeralSystemBase == 8) prefix = "o.";
			if (numeralSystemBase == 16) prefix = "h.";
		}
		String sign = "";
		if (decimalNumber < 0) sign = "-";
		return sign + prefix + convDecimal2OthBase( MathFunctions.abs(decimalNumber), numeralSystemBase );
	}
}