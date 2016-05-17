/*
 * @(#)MathFunctions.java        3.0.0    2016-05-07
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
package org.mariuszgromada.math.mxparser.mathcollection;

import java.math.BigDecimal;
import java.math.RoundingMode;

/**
 * MathFunctions - the most popular math functions. Many of function implemented by this class
 * could be found in java Math package (in fact functions from MathFunctions typically calls
 * original functions from the Math package). The reason why it was "re-implemented" is:
 * if you decide to implement your own function you do not need to change anything in the parser,
 * jut modify function implementation in this class.
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
public final class MathFunctions {
	/**
	 * Bell Numbers
	 *
	 * @param      n                   the n
	 *
	 * @return     if n &gt;= 0 returns Bell numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static final double bellNumber(int n) {
		double result = Double.NaN;
		if (n > 1) {
			n -= 1;
			long[][] bellTriangle = new long[n+1][n+1];
			bellTriangle[0][0] = 1;
			bellTriangle[1][0] = 1;
			for (int r = 1; r <= n; r++) {
				for (int k = 0; k < r; k++)
					bellTriangle[r][k+1] = bellTriangle[r-1][k] + bellTriangle[r][k];
				if (r < n)
					bellTriangle[r+1][0] = bellTriangle[r][r];
			}
			result = bellTriangle[n][n];
		} else if (n >= 0)
			result = 1;
		return result;
	}
	/**
	 * Bell number
	 * @param      n                   the n
	 *
	 * @return     if n &lt;&gt; Double.NaN return bellNumber( (int)Math.round(n) ),
	 *             otherwise return Double.NaN.
	 */
	public static final double bellNumber(double n) {
		if (Double.isNaN(n))
			return Double.NaN;
		return bellNumber( (int)Math.round(n) );
	}
	/**
	 * Euler numbers
	 *
	 * @param      n                   the n function param
	 * @param      k                   the k function param
	 *
	 * @return     if n &gt;=0 returns Euler number,
	 *             otherwise return Double.NaN.
	 */
	public static final double eulerNumber(int n, int k) {
		if ( n < 0)
			return Double.NaN;
		if (k < 0)
			return 0;
		if (n == 0)
			if (k == 0)
				return 1;
			else
				return 0;
		return (k+1) * eulerNumber(n-1, k) + (n-k) * eulerNumber(n-1, k-1);
	}
	/**
	 * Euler numbers
	 *
	 * @param      n                   the n function param
	 * @param      k                   the k function param
	 *
	 * @return     if n, k &lt;&gt; Double.NaN returns eulerNumber( (int)Math.round(n), (int)Math.round(k) ),
	 *             otherwise return Double.NaN.
	 */
	public static final double eulerNumber(double n, double k) {
		if (Double.isNaN(n) || Double.isNaN(k))
			return Double.NaN;
		return eulerNumber( (int)Math.round(n), (int)Math.round(k) );
	}
	/**
	 * Factorial
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     Factorial if n &gt;=0, otherwise returns Double.NaN.
	 */
	public static final double factorial(int n) {
		double f = Double.NaN;
		if (n >= 0)
			if (n < 2) f = 1;
			else {
				f = 1;
				for (int i = 1; i <= n; i++)
					f = f*i;
			}
		return f;
	}
	/**
	 * Factorial
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     if n &lt;&gt; Double.NaN return factorial( (int)Math.round(n) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double factorial(double n) {
		if (Double.isNaN(n))
			return Double.NaN;
		return factorial( (int)Math.round(n) );
	}
	/**
	 * Generalized binomial coefficient
	 *
	 * @param      n                   the n function parameter
	 * @param k    k                   the k function parameter
	 *
	 * @return     Generalized binomial coefficient, if
	 *             n = Double.NaN or k &lt; 0 returns Double.NaN.
	 */
	public static final double binomCoeff(double n, int k) {
		if (Double.isNaN(n))
			return Double.NaN;
		double result = Double.NaN;
		if ( k >= 0 ){
			double numerator = 1;
			if (k > 0 )
				for (int i = 0; i <= k-1; i++)
					numerator*=(n-i);
			double denominator = 1;
			if ( k > 1 )
			for (int i = 1; i <= k; i++)
				denominator *= i;
			result = numerator / denominator;
		}
		return result;
	}
	/**
	 * Generalized binomial coefficient
	 *
	 * @param      n                   the n function parameter
	 * @param      k                   the k function parameter
	 *
	 * @return     if n, k &lt;&gt; Double.NaN returns binomCoeff(n, (int)Math.round(k) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double binomCoeff(double n, double k) {
		if (Double.isNaN(n) || Double.isNaN(k))
			return Double.NaN;
		return binomCoeff(n, (int)Math.round(k) );
	}
	/**
	 * Bernoulli numbers
	 *
	 * @param      m                   the m function parameter
	 * @param      n                   the n function parameter
	 *
	 * @return     if n, m &gt;= 0 returns Bernoulli number,
	 *             otherwise returns Double.NaN.
	 */
	public static final double bernoulliNumber(int m, int n) {
		double result = Double.NaN;
		if ( (m >= 0) && (n >= 0) ) {
			result = 0;
			for (int k = 0; k <= m; k++)
				for (int v = 0; v <= k; v++)
					result += Math.pow(-1, v) * binomCoeff(k, v)
						* ( Math.pow(n + v, m) / (k + 1) )
						;
		}
		return result;
	}
	/**
	 * Bernoulli numbers
	 *
	 * @param      m                   the m function parameter
	 * @param      n                   the n function parameter
	 *
	 * @return     if n, m &lt;&gt; Double.NaN returns bernoulliNumber( (int)Math.round(m), (int)Math.round(n) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double bernoulliNumber(double m, double n) {
		if (Double.isNaN(m) || Double.isNaN(n))
			return Double.NaN;
		return bernoulliNumber( (int)Math.round(m), (int)Math.round(n) );
	}
	/**
	 * Striling numbers of the first kind
	 *
	 * @param      n                   the n function parameter
	 * @param      k                   the k function parameter
	 *
	 * @return     Striling numbers of the first kind
	 */
	public static final double Srirling1Number(int n, int k) {
		if (k > n)
			return 0;
		if (n == 0)
			if (k == 0)
				return 1;
			else
				return 0;
		if (k == 0)
			if (n == 0)
				return 1;
			else
				return 0;
		return (n-1) * Srirling1Number(n-1, k) + Srirling1Number(n-1, k-1);
	}
	/**
	 * Striling numbers of the first kind
	 *
	 * @param      n                   the n function parameter
	 * @param      k                   the k function parameter
	 *
	 * @return     if n, k &lt;&gt; Doube.NaN returns Srirling1Number( (int)Math.round(n), (int)Math.round(k) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double Srirling1Number(double n, double k) {
		if (Double.isNaN(n) || Double.isNaN(k))
			return Double.NaN;
		return Srirling1Number( (int)Math.round(n), (int)Math.round(k) );
	}
	/**
	 * Striling numbers of the second kind
	 *
	 * @param      n                   the n function parameter
	 * @param      k                   the k function parameter
	 *
	 * @return     Striling numbers of the second kind
	 */
	public static final double Srirling2Number(int n, int k) {
		if (k > n)
			return 0;
		if (n == 0)
			if (k == 0)
				return 1;
			else
				return 0;
		if (k == 0)
			if (n == 0)
				return 1;
			else
				return 0;
		return k * Srirling2Number(n-1, k) + Srirling2Number(n-1, k-1);
	}
	/**
	 * Striling numbers of the second kind
	 *
	 * @param      n                   the n function parameter
	 * @param      k                   the k function parameter
	 *
	 * @return     if n, k &lt;&gt; Doube.NaN returns Srirling2Number( (int)Math.round(n), (int)Math.round(k) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double Srirling2Number(double n, double k) {
		if (Double.isNaN(n) || Double.isNaN(k))
			return Double.NaN;
		return Srirling2Number( (int)Math.round(n), (int)Math.round(k) );
	}
	/**
	 * Worpitzky numbers
	 *
	 * @param      n                   the n function parameter
	 * @param      k                   the k function parameter
	 *
	 * @return     if n,k &gt;= 0 and k &lt;= n return Worpitzky number,
	 *             otherwise return Double.NaN.
	 */
	public static final double worpitzkyNumber(int n, int k) {
		double result = Double.NaN;
		if ( (n >= 0) && (k >= 0) && (k <= n) ){
			result = 0;
			for (int v = 0; v <= k; v++)
				result += Math.pow(-1, v+k) * Math.pow(v+1, n) * binomCoeff(k, v);
		}
		return result;
	}
	/**
	 * Worpitzky numbers
	 *
	 * @param      n                   the n function parameter
	 * @param      k                   the k function parameter
	 *
	 * @return     if n,k &lt;&gt; Double.NaN returns worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) ),
	 *             otherwise return Double.NaN.
	 */
	public static final double worpitzkyNumber(double n, double k) {
		if (Double.isNaN(n) || Double.isNaN(k))
			return Double.NaN;
		return worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) );
	}
	/**
	 * Harmonic numer
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     if n &gt; 0 returns harmonic number, otherwise returns 0
	 *             (empty summation operator)
	 */
	public static final double harmonicNumber(int n) {
		if (n <= 0)
			return 0;
		if (n == 1)
			return 1;
		double h = 1;
		for (double k = 2.0; k <= n; k++)
			h += 1.0 / k;
		return h;
	}
	/**
	 * Harmonic number
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     if n &lt;&gt; Double.NaN returns harmonicNumber( (int)Math.round(n) ),
	 *             otherwise returns Double.NaN
	 */
	public static final double harmonicNumber(double n) {
		if (Double.isNaN(n))
			return Double.NaN;
		return harmonicNumber( (int)Math.round(n) );
	}
	/**
	 * Harmonic number 1/1 + 1/2^x + ... + 1/n^x
	 *
	 * @param      x                   the x function parameter
	 * @param      n                   the n function parameter
	 *
	 * @return     if x &lt;&gt; Double.NaN and x &gt;= 0 Harmonic number,
	 *             otherwise returns Double.NaN.
	 */
	public static final double harmonicNumber(double x, int n) {
		if  ( (Double.isNaN(x)) || (x < 0) )
			return Double.NaN;
		if (n <= 0)
			return 0;
		if (n == 1)
			return x;
		double h = 1;
		for (double k = 2.0; k <= n; k++)
			h += 1 / power(k, x);
		return h;
	}
	/**
	 * Harmonic number 1/1 + 1/2^x + ... + 1/n^x
	 *
	 * @param      x                   the x function parameter
	 * @param      n                   the n function parameter
	 *
	 * @return     if x,n &lt;&gt; Double.NaN returns harmonicNumber( x, (int)Math.round(n) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double harmonicNumber(double x, double n) {
		if ( (Double.isNaN(x)) || (Double.isNaN(n)) )
			return Double.NaN;
		return harmonicNumber( x, (int)Math.round(n) );
	}
	/**
	 * Catalan numbers
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     Catalan numbers
	 */
	public static final double catalanNumber(int n) {
		return binomCoeff(2*n, n) * div(1, n+1);
	}
	/**
	 * Catalan numbers
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     if n &lt;&gt; Double.NaN returns catalanNumber( (int)Math.round(n) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double catalanNumber(double n) {
		if (Double.isNaN(n))
			return Double.NaN;
		return catalanNumber( (int)Math.round(n) );
	}
	/**
	 * Fibonacci numbers
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     if n &gt;= 0 returns fibonacci numbers,
	 *             otherwise returns Double.NaN.
	 */
	public final static double fibonacciNumber(int n) {
		if (n < 0 )
			return Double.NaN;
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		return fibonacciNumber(n-1) + fibonacciNumber(n-2);
	}
	/**
	 * Fibonacci numbers
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     if n &lt;&gt; Double.NaN returns fibonacciNumber( (int)Math.round(n) ),
	 *             otherwise returns Double.NaN.
	 */
	public final static double fibonacciNumber(double n) {
		if (Double.isNaN(n))
			return Double.NaN;
		return fibonacciNumber( (int)Math.round(n) );
	}
	/**
	 * Lucas numebrs
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     if n &gt;= 0 returns Lucas numbers,
	 *             otherwise returns Double.NaN.
	 */
	public final static double lucasNumber(int n) {
		if (n < 0 )
			return Double.NaN;
		if (n == 0)
			return 2;
		if (n == 1)
			return 1;
		return lucasNumber(n-1) + lucasNumber(n-2);
	}
	/**
	 * Lucas numebrs
	 *
	 * @param      n                   the n function parameter
	 *
	 * @return     if n &lt;&gt; Double.NaN returns lucasNumber( (int)Math.round(n) ),
	 *             otherwise returns Double.NaN.
	 */
	public final static double lucasNumber(double n) {
		if (Double.isNaN(n))
			return Double.NaN;
		return lucasNumber( (int)Math.round(n) );
	}
	/**
	 * Kronecker delta
	 *
	 * @param      i                   the i function parameter
	 * @param      j                   the j function parameter
	 *
	 * @return     if i,j &lt;&gt; Double.NaN returns Kronecker delta,
	 *             otherwise returns Double.NaN.
	 */
	public static final double kroneckerDelta(double i, double j) {
		if (Double.isNaN(i) || Double.isNaN(j))
			return Double.NaN;
		if (i == j)
			return 1;
		else
			return 0;
	}
	/**
	 * Kronecker delta
	 *
	 * @param      i                   the i function parameter
	 * @param      j                   the j function parameter
	 *
	 * @return     Kronecker delta
	 */
	public static final double kroneckerDelta(int i, int j) {
		if (i == j)
			return 1;
		else
			return 0;
	}
	/**
	 * Continued fraction
	 *
	 * @param      sequence            the numbers
	 *
	 * @return     if each number form the sequence &lt;&gt; Double.NaN and
	 *             there is no division by 0 while computing returns continued fraction
	 *             value, otherwise returns Double.NaN.
	 */
	public static final double continuedFraction(double... sequence) {
		double cf = 0;
		double a;
		if (sequence.length == 1)
			return sequence[0];
		int lastIndex = sequence.length-1;
		for(int i = lastIndex; i >= 0; i--) {
			a = sequence[i];
			if (Double.isNaN(a))
				return Double.NaN;
			if (i == lastIndex) {
				cf = a;
			} else {
				if (cf == 0)
					return Double.NaN;
				cf = a + 1.0 / cf;
			}
		}
		return cf;
	}
	/**
	 * Private function calculating continued polynomial
	 * recursively.
	 *
	 * @param      n         the polunomial order
	 * @param      x         the x values
	 *
	 * @return     continued polynomial value
	 */
	private static final double continuedPolynomial(int n, double[] x) {
		if (n == 0)
			return 1;
		if (n == 1)
			return x[0];
		return x[n-1] * continuedPolynomial(n-1, x) + continuedPolynomial(n-2, x);
	}
	/**
	 * Continued polynomial
	 *
	 * @param      x         the x values
	 *
	 * @return     if each number for x is different the Double.NaN
	 *             returns continued polynomial, otherwise returns
	 *             Double.NaN.
	 */
	public static final double continuedPolynomial(double... x) {
		for (double d : x)
			if (Double.isNaN(d))
				return Double.NaN;
		return continuedPolynomial(x.length, x);
	}
	/**
	 * Euler polynomial
	 *
	 * @param      m                   the m parameter
	 * @param      x                   the x parameter
	 *
	 * @return     if x &lt;&gt; Double.NaN and m &gt;= 0 returns polynomial value,
	 *             otherwise returns Double.NaN.
	 */
	public static final double eulerPolynomial(int m, double x) {
		if (Double.isNaN(x))
			return Double.NaN;
		double result = Double.NaN;
		if (m >= 0) {
			result = 0;
			for (int n = 0; n <= m; n++) {
				for (int k = 0; k <= n; k++)
					result += Math.pow(-1, k) * binomCoeff(n, k) * Math.pow(x+k, m);
				result /= Math.pow(2, n);
			}
		}
		return result;
	}
	/**
	 * Euler polynomial
	 *
	 * @param      m                   the m parameter
	 * @param      x                   the x parameter
	 *
	 * @return     if x,m &lt;&gt; Double.NaN returns eulerPolynomial( (int)Math.round(m), (int)Math.round(x) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double eulerPolynomial(double m, double x) {
		if (Double.isNaN(m) || Double.isNaN(x))
			return Double.NaN;
		return eulerPolynomial( (int)Math.round(m), (int)Math.round(x) );
	}
	/**
	 * Characteristic function x in (a,b)
	 *
	 * @param      x                   the x value
	 * @param      a                   the left (lower) limit
	 * @param      b                   the right (upper) limit
	 *
	 * @return     if x, a, b &lt;&gt; Double.NaN returns
	 * 			   characteristic function value on the (a,b) range.
	 */
	public static final double chi(double x, double a, double b) {
		if (Double.isNaN(x) || Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		double result = Double.NaN;
		if ( (!Double.isNaN(x)) && (!Double.isNaN(a)) && (!Double.isNaN(b)) )
			if ( (x > a) && (x < b) )
				result = 1;
			else
				result = 0;
		return result;
	}
	/**
	 * Characteristic function x in [a,b]
	 *
	 * @param      x                   the x value
	 * @param      a                   the left (lower) limit
	 * @param      b                   the right (upper) limit
	 *
	 * @return     if x, a, b &lt;&gt; Double.NaN returns
	 * 			   characteristic function value on the [a,b] range.
	 */
	public static final double CHi_LR(double x, double a, double b) {
		if (Double.isNaN(x) || Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		double result = Double.NaN;
		if ( (!Double.isNaN(x)) && (!Double.isNaN(a)) && (!Double.isNaN(b)) )
			if ( (x >= a) && (x <= b) )
				result = 1;
			else
				result = 0;
		return result;
	}
	/**
	 * Characteristic function x in [a,b)
	 *
	 * @param      x                   the x value
	 * @param      a                   the left (lower) limit
	 * @param      b                   the right (upper) limit
	 *
	 * @return     if x, a, b &lt;&gt; Double.NaN returns
	 * 			   characteristic function value on the [a,b) range.
	 */
	public static final double Chi_L(double x, double a, double b) {
		if (Double.isNaN(x) || Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		double result = Double.NaN;
		if ( (!Double.isNaN(x)) && (!Double.isNaN(a)) && (!Double.isNaN(b)) )
			if ( (x >= a) && (x < b) )
				result = 1;
			else
				result = 0;
		return result;
	}
	/**
	 * Characteristic function x in (a,b]
	 *
	 * @param      x                   the x value
	 * @param      a                   the left (lower) limit
	 * @param      b                   the right (upper) limit
	 *
	 * @return     if x, a, b &lt;&gt; Double.NaN returns
	 * 			   characteristic function value on the (a,b] range.
	 */
	public static final double cHi_R(double x, double a, double b) {
		if (Double.isNaN(x) || Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		double result = Double.NaN;
		if ( (!Double.isNaN(x)) && (!Double.isNaN(a)) && (!Double.isNaN(b)) )
			if ( (x > a) && (x <= b) )
				result = 1;
			else
				result = 0;
		return result;
	}
	/**
	 * Power function a^b
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     if a,b &lt;&gt; Double.NaN returns Math.pow(a, b),
	 *             otherwise returns Double.NaN.
	 */
	public static final double power(double a, double b) {
		if (Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		return Math.pow(a, b);
	}
	/**
	 * Modulo operator a % b
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     if a,b &lt;&gt; Double.NaN returns a % b.
	 */
	public static final double mod(double a, double b) {
		if (Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		return a % b;
	}
	/**
	 * Division a/b
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     if a,b &lt;&gt; Double.NaN and b &lt;&gt; 0 returns a/b,
	 *             otherwise return Double.NaN.
	 */
	public static final double div(double a, double b) {
		if (Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		double result = Double.NaN;
		if (b != 0)
			result = a / b;
		return result;
	}
	/**
	 * Sine trigonometric function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN return Math.sin(a),
	 *             otherwise return Double.NaN.
	 */
	public static final double sin(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.sin(a);
	}
	/**
	 * Cosine trigonometric function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.cos(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double cos(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.cos(a);
	}
	/**
	 * Tangent trigonometric function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.tan(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double tan(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.tan(a);
	}
	/**
	 * Cotangent trigonometric function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and tan(a) &lt;&gt; 0 returns 1 / Math.tan(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double ctan(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		double tg = Math.tan(a);
		if (tg != 0)
			result = 1.0 / tg;
		return result;
	}
	/**
	 * Secant trigonometric function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and cos(a) &lt;&gt; 0 returns 1 / Math.cos(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double sec(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		double cos = Math.cos(a);
		if (cos != 0)
			result = 1.0 / cos;
		return result;
	}
	/**
	 * Cosecant trigonometric function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and sin(a) &lt;&gt; 0 returns 1 / Math.sin(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double cosec(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		double sin = Math.sin(a);
		if (sin != 0)
			result = 1.0 / sin;
		return result;
	}
	/**
	 * Arcus sine - inverse trigonometric sine function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.asin(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double asin(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.asin(a);
	}
	/**
	 * Arcus cosine - inverse trigonometric cosine function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.acos(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double acos(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.acos(a);
	}
	/**
	 * Arcus tangent - inverse trigonometric tangent function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.atan(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double atan(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.atan(a);
	}
	/**
	 * Arcus cotangent - inverse trigonometric cotangent function
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.atan(1/a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double actan(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.atan(1/a);
	}
	/**
	 * Natural logarithm
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.log(1/a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double ln(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.log(a);
	}
	/**
	 * Binary logarithm
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.log(a)/Math.log(2.0),
	 *             otherwise returns Double.NaN.
	 */
	public static final double log2(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.log(a)/Math.log(2.0);
	}
	/**
	 * Common logarithm
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.log10(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double log10(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.log10(a);
	}
	/**
	 * Degrees to radius translation.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.toRadians(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double rad(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.toRadians(a);
	}
	/**
	 * Exponential function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.exp(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double exp(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.exp(a);
	}
	/**
	 * Square root.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.sqrt(a),
	 *             otherwise returns Double.NaN.
	 */
	 public static final double sqrt(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.sqrt(a);
	}
	/**
	 * Hyperbolic sine function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.sinh(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double sinh(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.sinh(a);
	}
	/**
	 * Hyperbolic cosine function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.cosh(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double cosh(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.cosh(a);
	}
	/**
	 * Hyperbolic tangent function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.tanh(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double tanh(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.tanh(a);
	}
	/**
	 * Hyperbolic cotangent function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and tanh(a) &lt;&gt; 0 returns 1 / Math.tanh(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double coth(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		double tanh = Math.tanh(a);
		if (tanh != 0)
			result = 1.0 / tanh;
		return result;
	}
	/**
	 * Hyperbolic secant function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and cosh(a) &lt;&gt; 0 returns 1 / Math.cosh(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double sech(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		double cosh = Math.cosh(a);
		if (cosh != 0)
			result = 1.0 / cosh;
		return result;
	}
	/**
	 * Hyperbolic cosecant function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and sinh(a) &lt;&gt; 0 returns 1 / Math.sinh(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double csch(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		double sinh = Math.sinh(a);
		if (sinh != 0)
			result = 1.0 / sinh;
		return result;
	}
	/**
	 * Radius to degrees translation.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.toDegrees(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double deg(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.toDegrees(a);
	}
	/**
	 * Absolute value.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.abs(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double abs(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.abs(a);
	}
	/**
	 * Signum function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.signum(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double sgn(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.signum(a);
	}
	/**
	 * Floor function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.floor(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double floor(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.floor(a);
	}
	/**
	 * Ceiling function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.ceil(a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double ceil(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.ceil(a);
	}
	/**
	 * Arcus hyperbolic sine - inverse hyperbolic sine function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.log(a + Math.sqrt(a*a+1)),
	 *             otherwise returns Double.NaN.
	 */
	public static final double arsinh(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.log(a + Math.sqrt(a*a+1));
	}
	/**
	 * Arcus hyperbolic cosine - inverse hyperbolic cosine function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN returns Math.log(a + Math.sqrt(a*a-1)),
	 *             otherwise returns Double.NaN.
	 */
	public static final double arcosh(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		return Math.log(a + Math.sqrt(a*a-1));
	}
	/**
	 * Arcus hyperbolic tangent - inverse hyperbolic tangent function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and 1-a &lt;&gt; 0 returns 0.5*Math.log( (1+a)/(1-a) ),
	 *             otherwise returns Double.NaN.
	 */
	public static final double artanh(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		if (1-a != 0)
			result = 0.5*Math.log( (1+a)/(1-a) );
		return result;
	}
	/**
	 * Arcus hyperbolic tangent - inverse hyperbolic tangent function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and a-1 &lt;&gt; 0 returns 0.5*Math.log( (a+1)/(a-1) );,
	 *             otherwise returns Double.NaN.
	 */
	public static final double arcoth(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		if (a-1 != 0)
			result = 0.5*Math.log( (a+1)/(a-1) );
		return result;
	}
	/**
	 * Arcus hyperbolic secant - inverse hyperbolic secant function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
	 *             otherwise returns Double.NaN.
	 */
	public static final double arsech(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		if (a != 0)
			result = Math.log( (1+Math.sqrt(1-a*a))/a);
		return result;
	}
	/**
	 * Arcus hyperbolic cosecant - inverse hyperbolic cosecant function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
	 *             otherwise returns Double.NaN.
	 */
	public static final double arcsch(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		if (a != 0)
			result = Math.log( 1/a + Math.sqrt(1+a*a)/Math.abs(a) );
		return result;
	}
	/**
	 * Normalized sinc function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.sin(PI*a) / (PI*a);,
	 *             otherwise returns Double.NaN.
	 */
	public static final double sa(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double x = MathConstants.PI * a;
		double result = Double.NaN;
		if (x != 0)
			result = Math.sin(x) / (x);
		return result;
	}
	/**
	 * Sinc function.
	 *
	 * @param      a                   the a function parameter
	 *
	 * @return     if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.sin(a) / (a),
	 *             otherwise returns Double.NaN.
	 */
	public static final double sinc(double a) {
		if (Double.isNaN(a))
			return Double.NaN;
		double result = Double.NaN;
		if (a != 0)
			result = Math.sin(a) / (a);
		return result;
	}
	/**
	 * General logarithm.
	 *
	 * @param      a                   the a function parameter (base)
	 * @param      b                   the b function parameter (number)
	 *
	 * @return     if a,b &lt;&gt; Double.NaN and log(b) &lt;&gt; 0 returns Math.log(a) / Math.log(b),
	 *             otherwise returns Double.NaN.
	 */
	public static final double log(double a, double b) {
		if (Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		double result = Double.NaN;
		double logb = Math.log(b);
		if (logb != 0)
			result = Math.log(a) / logb;
		return result;
	}
	/**
	 * Double rounding
	 *
	 * @param value    double value to be rounded
	 * @param places   decimal places
	 * @return         Rounded value
	 */
 	public static final double round(double value, int places) {
		if (Double.isNaN(value)) return Double.NaN;
		if (places < 0) return Double.NaN;
	    BigDecimal bd = new BigDecimal(Double.toString(value));
	    bd = bd.setScale(places, RoundingMode.HALF_UP);
	    return bd.doubleValue();
 	}
	/**
	 * Unit in the last place(ULP) for double
	 * @param value Double number
	 * @return ULP for a given double.
	 */
	public static final double ulp(double value) {
		return Math.ulp(value);
	}
	/**
	 * Unit in The Last Place - number of decimal digits before
	 * @param value   Double number
	 * @return        Positive number of digits N for ulp = 1e-{N+1},
	 *                if ulp is &gt; 1 then -1 is returned.
	 *                Returned proper value is always between -1 and +99.
	 *                If value is NaN then -2 is returned.
	 */
	public static final int  ulpDecimalDigitsBefore(double value) {
		if (Double.isNaN(value)) return -2;
		double u = ulp(value);

		if (u <= 1e-90) {

			if (u <= 1e-99) return 99;
			else if (u <= 1e-98) return 98;
			else if (u <= 1e-97) return 97;
			else if (u <= 1e-96) return 96;
			else if (u <= 1e-95) return 95;
			else if (u <= 1e-94) return 94;
			else if (u <= 1e-93) return 93;
			else if (u <= 1e-92) return 92;
			else if (u <= 1e-91) return 91;
			else return 90;

		} else if (u <= 1e-80) {

			if (u <= 1e-89) return 89;
			else if (u <= 1e-88) return 88;
			else if (u <= 1e-87) return 87;
			else if (u <= 1e-86) return 86;
			else if (u <= 1e-85) return 85;
			else if (u <= 1e-84) return 84;
			else if (u <= 1e-83) return 83;
			else if (u <= 1e-82) return 82;
			else if (u <= 1e-81) return 81;
			else return 80;

		} else if (u <= 1e-70) {

			if (u <= 1e-79) return 79;
			else if (u <= 1e-78) return 78;
			else if (u <= 1e-77) return 77;
			else if (u <= 1e-76) return 76;
			else if (u <= 1e-75) return 75;
			else if (u <= 1e-74) return 74;
			else if (u <= 1e-73) return 73;
			else if (u <= 1e-72) return 72;
			else if (u <= 1e-71) return 71;
			else return 70;

		} else if (u <= 1e-60) {

			if (u <= 1e-69) return 69;
			else if (u <= 1e-68) return 68;
			else if (u <= 1e-67) return 67;
			else if (u <= 1e-66) return 66;
			else if (u <= 1e-65) return 65;
			else if (u <= 1e-64) return 64;
			else if (u <= 1e-63) return 63;
			else if (u <= 1e-62) return 62;
			else if (u <= 1e-61) return 61;
			else return 60;

		} else if (u <= 1e-50) {

			if (u <= 1e-59) return 59;
			else if (u <= 1e-58) return 58;
			else if (u <= 1e-57) return 57;
			else if (u <= 1e-56) return 56;
			else if (u <= 1e-55) return 55;
			else if (u <= 1e-54) return 54;
			else if (u <= 1e-53) return 53;
			else if (u <= 1e-52) return 52;
			else if (u <= 1e-51) return 51;
			else return 50;

		} else if (u <= 1e-40) {

			if (u <= 1e-49) return 49;
			else if (u <= 1e-48) return 48;
			else if (u <= 1e-47) return 47;
			else if (u <= 1e-46) return 46;
			else if (u <= 1e-45) return 45;
			else if (u <= 1e-44) return 44;
			else if (u <= 1e-43) return 43;
			else if (u <= 1e-42) return 42;
			else if (u <= 1e-41) return 41;
			else return 40;

		} else if (u <= 1e-40) {

			if (u <= 1e-49) return 49;
			else if (u <= 1e-48) return 48;
			else if (u <= 1e-47) return 47;
			else if (u <= 1e-46) return 46;
			else if (u <= 1e-45) return 45;
			else if (u <= 1e-44) return 44;
			else if (u <= 1e-43) return 43;
			else if (u <= 1e-42) return 42;
			else if (u <= 1e-41) return 41;
			else return 40;

		} else if (u <= 1e-30) {

			if (u <= 1e-39) return 39;
			else if (u <= 1e-38) return 38;
			else if (u <= 1e-37) return 37;
			else if (u <= 1e-36) return 36;
			else if (u <= 1e-35) return 35;
			else if (u <= 1e-34) return 34;
			else if (u <= 1e-33) return 33;
			else if (u <= 1e-32) return 32;
			else if (u <= 1e-31) return 31;
			else return 30;

		} else if (u <= 1e-20) {

			if (u <= 1e-29) return 29;
			else if (u <= 1e-28) return 28;
			else if (u <= 1e-27) return 27;
			else if (u <= 1e-26) return 26;
			else if (u <= 1e-25) return 25;
			else if (u <= 1e-24) return 24;
			else if (u <= 1e-23) return 23;
			else if (u <= 1e-22) return 22;
			else if (u <= 1e-21) return 21;
			else return 20;

		} else if (u <= 1e-10) {

			if (u <= 1e-19) return 19;
			else if (u <= 1e-18) return 18;
			else if (u <= 1e-17) return 17;
			else if (u <= 1e-16) return 16;
			else if (u <= 1e-15) return 15;
			else if (u <= 1e-14) return 14;
			else if (u <= 1e-13) return 13;
			else if (u <= 1e-12) return 12;
			else if (u <= 1e-11) return 11;
			else return 10;

		} else {

			if (u <= 1e-9) return 9;
			else if (u <= 1e-8) return 8;
			else if (u <= 1e-7) return 7;
			else if (u <= 1e-6) return 6;
			else if (u <= 1e-5) return 5;
			else if (u <= 1e-4) return 4;
			else if (u <= 1e-3) return 3;
			else if (u <= 1e-2) return 2;
			else if (u <= 1e-1) return 1;
			else if (u <= 1.0) return 0;
			else return -1;

		}
	}
}
