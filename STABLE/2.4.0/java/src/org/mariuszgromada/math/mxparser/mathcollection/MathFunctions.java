/*
 * @(#)MathFunctions.java        2.4.0    2016-02-28
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
package org.mariuszgromada.math.mxparser.mathcollection;

import org.mariuszgromada.math.mxparser.mXparser;
/**
 * MathFunctions - the most popular math functions. Many of function implemented by this class
 * could be found in java Math package (in fact functions from MathFunctions typically calls
 * original functions from the Math package). The reason why it was "re-implemented" is:
 * if you decide to implement your own function you do not need to change anything in the parser,
 * jut modify function implementation in this class.
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
 */
public final class MathFunctions {
	/**
	 * Bell Numbers
	 *
	 * @param      n                   the n
	 *
	 * @return     if n >= 0 returns Bell numbers,
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
	 * @return     if n <> Double.NaN return bellNumber( (int)Math.round(n) ),
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
	 * @return     if n >=0 returns Euler number,
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
	 * @return     if n, k <> Double.NaN returns eulerNumber( (int)Math.round(n), (int)Math.round(k) ),
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
	 * @return     Factorial if n >=0, otherwise returns Double.NaN.
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
	 * @return     if n <> Double.NaN return factorial( (int)Math.round(n) ),
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
	 *             n = Double.NaN or k<0 returns Double.NaN.
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
	 * @return     if n, k <> Double.NaN returns binomCoeff(n, (int)Math.round(k) ),
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
	 * @return     if n, m >= 0 returns Bernoulli number,
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
	 * @return     if n, m <> Double.NaN returns bernoulliNumber( (int)Math.round(m), (int)Math.round(n) ),
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
	 * @return     if n, k <> Doube.NaN returns Srirling1Number( (int)Math.round(n), (int)Math.round(k) ),
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
	 * @return     if n, k <> Doube.NaN returns Srirling2Number( (int)Math.round(n), (int)Math.round(k) ),
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
	 * @return     if n,k>=0 and k<=n return Worpitzky number,
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
	 * @return     if n,k<> Double.NaN returns worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) ),
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
	 * @return     if n>0 returns harmonic number, otherwise returns 0
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
	 * @return     if n <> Double.NaN returns harmonicNumber( (int)Math.round(n) ),
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
	 * @return     if x<> Double.NaN and x>=0 Harmonic number,
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
	 * @return     if x,n <> Double.NaN returns harmonicNumber( x, (int)Math.round(n) ),
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
	 * @return     if n <> Double.NaN returns catalanNumber( (int)Math.round(n) ),
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
	 * @return     if n >= 0 returns fibonacci numbers,
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
	 * @return     if n <> Double.NaN returns fibonacciNumber( (int)Math.round(n) ),
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
	 * @return     if n >=0 returns Lucas numbers,
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
	 * @return     if n <> Double.NaN returns lucasNumber( (int)Math.round(n) ),
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
	 * @return     if i,j <> Double.NaN returns Kronecker delta,
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
	 * @return     if each number form the sequence <> Double.NaN and
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
	 * @return     if x <> Double.NaN and m>=0 returns polynomial value,
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
	 * @return     if x,m <> Double.NaN returns eulerPolynomial( (int)Math.round(m), (int)Math.round(x) ),
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
	 * @return     if x, a, b <> Double.NaN returns
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
	 * @return     if x, a, b <> Double.NaN returns
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
	 * @return     if x, a, b <> Double.NaN returns
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
	 * @return     if x, a, b <> Double.NaN returns
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
	 * @return     if a,b <> Double.NaN returns Math.pow(a, b),
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
	 * @return     if a,b <> Double.NaN returns a % b.
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
	 * @return     if a,b <> Double.NaN and b <> 0 returns a/b,
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
	 * @return     if a <> Double.NaN return Math.sin(a),
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
	 * @return     if a <> Double.NaN returns Math.cos(a),
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
	 * @return     if a <> Double.NaN returns Math.tan(a),
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
	 * @return     if a <> Double.NaN and tan(a) <> 0 returns 1 / Math.tan(a),
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
	 * @return     if a <> Double.NaN and cos(a) <> 0 returns 1 / Math.cos(a),
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
	 * @return     if a <> Double.NaN and sin(a) <> 0 returns 1 / Math.sin(a),
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
	 * @return     if a <> Double.NaN returns Math.asin(a),
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
	 * @return     if a <> Double.NaN returns Math.acos(a),
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
	 * @return     if a <> Double.NaN returns Math.atan(a),
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
	 * @return     if a <> Double.NaN and a <> 0 returns Math.atan(1/a),
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
	 * @return     if a <> Double.NaN returns Math.log(1/a),
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
	 * @return     if a <> Double.NaN returns Math.log(a)/Math.log(2.0),
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
	 * @return     if a <> Double.NaN returns Math.log10(a),
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
	 * @return     if a <> Double.NaN returns Math.toRadians(a),
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
	 * @return     if a <> Double.NaN returns Math.exp(a),
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
	 * @return     if a <> Double.NaN returns Math.sqrt(a),
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
	 * @return     if a <> Double.NaN returns Math.sinh(a),
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
	 * @return     if a <> Double.NaN returns Math.cosh(a),
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
	 * @return     if a <> Double.NaN returns Math.tanh(a),
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
	 * @return     if a <> Double.NaN and tanh(a) <> 0 returns 1 / Math.tanh(a),
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
	 * @return     if a <> Double.NaN and cosh(a) <> 0 returns 1 / Math.cosh(a),
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
	 * @return     if a <> Double.NaN and sinh(a) <> 0 returns 1 / Math.sinh(a),
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
	 * @return     if a <> Double.NaN returns Math.toDegrees(a),
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
	 * @return     if a <> Double.NaN returns Math.abs(a),
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
	 * @return     if a <> Double.NaN returns Math.signum(a),
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
	 * @return     if a <> Double.NaN returns Math.floor(a),
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
	 * @return     if a <> Double.NaN returns Math.ceil(a),
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
	 * @return     if a <> Double.NaN returns Math.log(a + Math.sqrt(a*a+1)),
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
	 * @return     if a <> Double.NaN returns Math.log(a + Math.sqrt(a*a-1)),
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
	 * @return     if a <> Double.NaN and 1-a <> 0 returns 0.5*Math.log( (1+a)/(1-a) ),
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
	 * @return     if a <> Double.NaN and a-1 <> 0 returns 0.5*Math.log( (a+1)/(a-1) );,
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
	 * @return     if a <> Double.NaN and a <> 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
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
	 * @return     if a <> Double.NaN and a <> 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
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
	 * @return     if a <> Double.NaN and a <> 0 returns Math.sin(PI*a) / (PI*a);,
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
	 * @return     if a <> Double.NaN and a <> 0 returns Math.sin(a) / (a),
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
	 * @return     if a,b <> Double.NaN and log(b) <> 0 returns Math.log(a) / Math.log(b),
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
	 * Minimum function.
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     if a,b <> Double.NaN returns Math.min(a, b),
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
	 * @return     if each number form numbers <> Double.NaN returns the smallest number,
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
	 * @return     if a,b <> Double.NaN returns Math.max(a, b),
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
	 * @return     if each number form numbers <> Double.NaN returns the highest number,
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
	 * @return     if a, b <> Double.NaN returns gcd( (int)Math.round(a),(int)Math.round(b) ),
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
	 * @return     if each number form numbers <> Double.NaN returns
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
	 * @return     if a, b <> Double.NaN returns lcm( (int)Math.round(a), (int)Math.round(b) ),
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
	 * @return     if each number form numbers <> Double.NaN returns
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
	 * @return     if each number from numbers <> Double.NaN returns
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
	 * @return     if each number from numbers <> Double.NaN returns
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
	 * Sample average.
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     if each number from numbers <> Double.NaN returns
	 *             avg(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static final double avg(double... numbers) {
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) return numbers[0];
		double sum = 0;
		for (double xi : numbers) {
			if ( Double.isNaN(xi) )
				return Double.NaN;
			sum+=xi;
		}
		return sum / numbers.length;
	}
	/**
	 * Sample variance (biased-corrected).
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     if each number from numbers <> Double.NaN returns
	 *             Var(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static final double var(double... numbers) {
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) {
			if (Double.isNaN(numbers[0])) return Double.NaN;
			return 0;
		}
		double m = avg(numbers);
		double sum = 0;
		for (double xi : numbers) {
			if ( Double.isNaN(xi) )
				return Double.NaN;
			sum+=(xi-m)*(xi-m);
		}
		return sum / (numbers.length - 1);
	}
	/**
	 * Sample standard deviation (biased-corrected).
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     if each number from numbers <> Double.NaN returns
	 *             Std(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static final double std(double... numbers) {
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) {
			if (Double.isNaN(numbers[0])) return Double.NaN;
			return 0;
		}
		return sqrt( var(numbers) );
	}
	/**
	 * Prime test
	 *
	 * @param n
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
	 * @param n
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
	 * Exponential integral function Ei(x)
	 * @param x
	 * @return Exponential integral function Ei(x)
	 */
	public static double exponentialIntegralEi(double x) {
		if (Double.isNaN(x))
			return Double.NaN;
		if (x < -5.0)
			return continuedFractionEi(x);
		if (x == 0.0)
			return -Double.MAX_VALUE;
		if (x < 6.8)
			return powerSeriesEi(x);
		if (x < 50.0)
			return argumentAdditionSeriesEi(x);
		return continuedFractionEi(x);
	}
	/**
	 * Constants for Exponential integral function Ei(x) calculation
	 */
	private static final double EI_DBL_EPSILON = Math.ulp(1.0);
	private static final double EI_EPSILON = 10.0 * EI_DBL_EPSILON;
	/**
	 * Supporting function
	 * while Exponential integral function Ei(x) calculation
	 */
	private static double continuedFractionEi(double x) {
		double Am1 = 1.0;
		double A0 = 0.0;
		double Bm1 = 0.0;
		double B0 = 1.0;
		double a = Math.exp(x);
		double b = -x + 1.0;
		double Ap1 = b * A0 + a * Am1;
		double Bp1 = b * B0 + a * Bm1;
		int j = 1;
		a = 1.0;
		while (Math.abs(Ap1 * B0 - A0 * Bp1) > EI_EPSILON * Math.abs(A0 * Bp1)) {
			if (Math.abs(Bp1) > 1.0) {
				Am1 = A0 / Bp1;
				A0 = Ap1 / Bp1;
				Bm1 = B0 / Bp1;
				B0 = 1.0;
			} else {
				Am1 = A0;
				A0 = Ap1;
				Bm1 = B0;
				B0 = Bp1;
			}
			a = -j * j;
			b += 2.0;
			Ap1 = b * A0 + a * Am1;
			Bp1 = b * B0 + a * Bm1;
			j += 1;
		}
		return (-Ap1 / Bp1);
	}
	/**
	 * Supporting function
	 * while Exponential integral function Ei(x) calculation
	 */
	private static double powerSeriesEi(double x) {
		double xn = -x;
		double Sn = -x;
		double Sm1 = 0.0;
		double hsum = 1.0;
		final double g = MathConstants.EULER_MASCHERONI;
		double y = 1.0;
		double factorial = 1.0;
		if (x == 0.0)
			return -Double.MAX_VALUE;
		while (Math.abs(Sn - Sm1) > EI_EPSILON * Math.abs(Sm1)) {
			Sm1 = Sn;
			y += 1.0;
			xn *= (-x);
			factorial *= y;
			hsum += (1.0 / y);
			Sn += hsum * xn / factorial;
		}
		return (g + Math.log(Math.abs(x)) - Math.exp(x) * Sn);
	}
	/**
	 * Supporting function
	 * while Exponential integral function Ei(x) calculation
	 */
	private static final double EI[] = {
			1.915047433355013959531e2, 4.403798995348382689974e2,
			1.037878290717089587658e3, 2.492228976241877759138e3,
			6.071406374098611507965e3, 1.495953266639752885229e4,
			3.719768849068903560439e4, 9.319251363396537129882e4,
			2.349558524907683035782e5, 5.955609986708370018502e5,
			1.516637894042516884433e6, 3.877904330597443502996e6,
			9.950907251046844760026e6, 2.561565266405658882048e7,
			6.612718635548492136250e7, 1.711446713003636684975e8,
			4.439663698302712208698e8, 1.154115391849182948287e9,
			3.005950906525548689841e9, 7.842940991898186370453e9,
			2.049649711988081236484e10, 5.364511859231469415605e10,
			1.405991957584069047340e11, 3.689732094072741970640e11,
			9.694555759683939661662e11, 2.550043566357786926147e12,
			6.714640184076497558707e12,	1.769803724411626854310e13,
			4.669055014466159544500e13,	1.232852079912097685431e14,
			3.257988998672263996790e14,	8.616388199965786544948e14,
			2.280446200301902595341e15,	6.039718263611241578359e15,
			1.600664914324504111070e16,	4.244796092136850759368e16,
			1.126348290166966760275e17,	2.990444718632336675058e17,
			7.943916035704453771510e17,	2.111342388647824195000e18,
			5.614329680810343111535e18,	1.493630213112993142255e19,
			3.975442747903744836007e19,	1.058563689713169096306e20
		};
	/**
	 * Supporting function
	 * while Exponential integral function Ei(x) calculation
	 */
	private static double argumentAdditionSeriesEi(double x) {
		final int k = (int) (x + 0.5);
		int j = 0;
		final double xx = k;
		final double dx = x - xx;
		double xxj = xx;
		final double edx = Math.exp(dx);
		double Sm = 1.0;
		double Sn = (edx - 1.0) / xxj;
		double term = Double.MAX_VALUE;
		double factorial = 1.0;
		double dxj = 1.0;
		while (Math.abs(term) > EI_EPSILON * Math.abs(Sn)) {
			j++;
			factorial *= j;
			xxj *= xx;
			dxj *= (-dx);
			Sm += (dxj / factorial);
			term = (factorial * (edx * Sm - 1.0)) / xxj;
			Sn += term;
		}
		return EI[k - 7] + Sn * Math.exp(xx);
	}
	/**
	 * Logarithmic integral function li(x)
	 * @param x
	 * @return Logarithmic integral function li(x)
	 */
	public static final double logarithmicIntegralLi(double x) {
		if (Double.isNaN(x))
			return Double.NaN;
		if (x < 0)
			return Double.NaN;
		if (x == 0)
			return 0;
		if (x == 2)
			return MathConstants.LI2;
		return exponentialIntegralEi( ln(x) );
	}
	/**
	 * Offset logarithmic integral function Li(x)
	 * @param x
	 * @return Offset logarithmic integral function Li(x)
	 */
	public static final double offsetLogarithmicIntegralLi(double x) {
		if (Double.isNaN(x))
			return Double.NaN;
		if (x < 0)
			return Double.NaN;
		if (x == 0)
			return -MathConstants.LI2;
		return logarithmicIntegralLi(x) - MathConstants.LI2;
	}
}
