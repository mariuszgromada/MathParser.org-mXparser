/*
 * @(#)MathFunctions.java        4.2.0    2017-09-18
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

namespace org.mariuszgromada.math.mxparser.mathcollection {
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
	 * @version        4.2.0
	 */
	[CLSCompliant(true)]
	public sealed class MathFunctions {
		/**
		 * Bell Numbers
		 *
		 * @param      n                   the n
		 *
		 * @return     if n >= 0 returns Bell numbers,
		 *             otherwise returns Double.NaN.
		 */
		public static double bellNumber(int n) {
			double result = Double.NaN;
			if (n > 1) {
				n -= 1;
				long[,] bellTriangle = new long[n+1, n+1];
				bellTriangle[0, 0] = 1;
				bellTriangle[1, 0] = 1;
				for (int r = 1; r <= n; r++) {
					for (int k = 0; k < r; k++)
						bellTriangle[r, k+1] = bellTriangle[r-1, k] + bellTriangle[r, k];
					if (r < n)
						bellTriangle[r+1, 0] = bellTriangle[r, r];
				}
				result = bellTriangle[n, n];
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
		public static double bellNumber(double n) {
			if (Double.IsNaN(n))
				return Double.NaN;
			return bellNumber( (int)Math.Round(n) );
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
		public static double eulerNumber(int n, int k) {
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
		public static double eulerNumber(double n, double k) {
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return eulerNumber( (int)Math.Round(n), (int)Math.Round(k) );
		}
		/**
		 * Factorial
		 *
		 * @param      n                   the n function parameter
		 *
		 * @return     Factorial if n >=0, otherwise returns Double.NaN.
		 */
		public static double factorial(int n) {
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
		public static double factorial(double n) {
			if (Double.IsNaN(n))
				return Double.NaN;
			return factorial( (int)Math.Round(n) );
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
		public static double binomCoeff(double n, int k) {
			if (Double.IsNaN(n))
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
		public static double binomCoeff(double n, double k) {
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return binomCoeff(n, (int)Math.Round(k) );
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
		public static double bernoulliNumber(int m, int n) {
			double result = Double.NaN;
			if ( (m >= 0) && (n >= 0) ) {
				result = 0;
				for (int k = 0; k <= m; k++)
					for (int v = 0; v <= k; v++)
						result += Math.Pow(-1, v) * binomCoeff(k, v)
							* ( Math.Pow(n + v, m) / (k + 1) )
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
		public static double bernoulliNumber(double m, double n) {
			if (Double.IsNaN(m) || Double.IsNaN(n))
				return Double.NaN;
			return bernoulliNumber( (int)Math.Round(m), (int)Math.Round(n) );
		}
		/**
		 * Stirling numbers of the first kind
		 *
		 * @param      n                   the n function parameter
		 * @param      k                   the k function parameter
		 *
		 * @return     Stirling numbers of the first kind
		 */
		public static double Stirling1Number(int n, int k) {
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
			return (n-1) * Stirling1Number(n-1, k) + Stirling1Number(n-1, k-1);
		}
		/**
		 * Stirling numbers of the first kind
		 *
		 * @param      n                   the n function parameter
		 * @param      k                   the k function parameter
		 *
		 * @return     if n, k <> Doube.NaN returns Stirling1Number( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise returns Double.NaN.
		 */
		public static double Stirling1Number(double n, double k) {
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return Stirling1Number( (int)Math.Round(n), (int)Math.Round(k) );
		}
		/**
		 * Stirling numbers of the second kind
		 *
		 * @param      n                   the n function parameter
		 * @param      k                   the k function parameter
		 *
		 * @return     Stirling numbers of the second kind
		 */
		public static double Stirling2Number(int n, int k) {
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
			return k * Stirling2Number(n-1, k) + Stirling2Number(n-1, k-1);
		}
		/**
		 * Stirling numbers of the second kind
		 *
		 * @param      n                   the n function parameter
		 * @param      k                   the k function parameter
		 *
		 * @return     if n, k <> Doube.NaN returns Stirling2Number( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise returns Double.NaN.
		 */
		public static double Stirling2Number(double n, double k) {
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return Stirling2Number( (int)Math.Round(n), (int)Math.Round(k) );
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
		public static double worpitzkyNumber(int n, int k) {
			double result = Double.NaN;
			if ( (n >= 0) && (k >= 0) && (k <= n) ){
				result = 0;
				for (int v = 0; v <= k; v++)
					result += Math.Pow(-1, v+k) * Math.Pow(v+1, n) * binomCoeff(k, v);
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
		public static double worpitzkyNumber(double n, double k) {
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return worpitzkyNumber( (int)Math.Round(n), (int)Math.Round(k) );
		}
		/**
		 * Harmonic numer
		 *
		 * @param      n                   the n function parameter
		 *
		 * @return     if n>0 returns harmonic number, otherwise returns 0
		 *             (empty summation operator)
		 */
		public static double harmonicNumber(int n) {
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
		public static double harmonicNumber(double n) {
			if (Double.IsNaN(n))
				return Double.NaN;
			return harmonicNumber( (int)Math.Round(n) );
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
		public static double harmonicNumber(double x, int n) {
			if  ( (Double.IsNaN(x)) || (x < 0) )
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
		public static double harmonicNumber(double x, double n) {
			if ( (Double.IsNaN(x)) || (Double.IsNaN(n)) )
				return Double.NaN;
			return harmonicNumber( x, (int)Math.Round(n) );
		}
		/**
		 * Catalan numbers
		 *
		 * @param      n                   the n function parameter
		 *
		 * @return     Catalan numbers
		 */
		public static double catalanNumber(int n) {
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
		public static double catalanNumber(double n) {
			if (Double.IsNaN(n))
				return Double.NaN;
			return catalanNumber( (int)Math.Round(n) );
		}
		/**
		 * Fibonacci numbers
		 *
		 * @param      n                   the n function parameter
		 *
		 * @return     if n >= 0 returns fibonacci numbers,
		 *             otherwise returns Double.NaN.
		 */
		public static double fibonacciNumber(int n) {
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
		public static double fibonacciNumber(double n) {
			if (Double.IsNaN(n))
				return Double.NaN;
			return fibonacciNumber( (int)Math.Round(n) );
		}
		/**
		 * Lucas numebrs
		 *
		 * @param      n                   the n function parameter
		 *
		 * @return     if n >=0 returns Lucas numbers,
		 *             otherwise returns Double.NaN.
		 */
		public static double lucasNumber(int n) {
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
		public static double lucasNumber(double n) {
			if (Double.IsNaN(n))
				return Double.NaN;
			return lucasNumber( (int)Math.Round(n) );
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
		public static double kroneckerDelta(double i, double j) {
			if (Double.IsNaN(i) || Double.IsNaN(j))
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
		public static double kroneckerDelta(int i, int j) {
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
		public static double continuedFraction(params double[] sequence) {
			if (sequence == null) return Double.NaN;
			if (sequence.Length == 0) return Double.NaN;
			double cf = 0;
			double a;
			if (sequence.Length == 1)
				return sequence[0];
			int lastIndex = sequence.Length-1;
			for(int i = lastIndex; i >= 0; i--) {
				a = sequence[i];
				if (Double.IsNaN(a))
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
		 * @param      n         the polynomial order
		 * @param      x         the x values
		 *
		 * @return     continued polynomial value
		 */
		private static double continuedPolynomial(int n, double[] x) {
			if (x == null) return Double.NaN;
			if (x.Length == 0) return Double.NaN;
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
		public static double continuedPolynomial(params double[] x) {
			if (x == null) return Double.NaN;
			if (x.Length == 0) return Double.NaN;
			foreach (double d in x)
				if (Double.IsNaN(d))
					return Double.NaN;
			return continuedPolynomial(x.Length, x);
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
		public static double eulerPolynomial(int m, double x) {
			if (Double.IsNaN(x))
				return Double.NaN;
			double result = Double.NaN;
			if (m >= 0) {
				result = 0;
				for (int n = 0; n <= m; n++) {
					for (int k = 0; k <= n; k++)
						result += Math.Pow(-1, k) * binomCoeff(n, k) * Math.Pow(x+k, m);
					result /= Math.Pow(2, n);
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
		public static double eulerPolynomial(double m, double x) {
			if (Double.IsNaN(m) || Double.IsNaN(x))
				return Double.NaN;
			return eulerPolynomial( (int)Math.Round(m), (int)Math.Round(x) );
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
		public static double chi(double x, double a, double b) {
			if (Double.IsNaN(x) || Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			double result = Double.NaN;
			if ( (!Double.IsNaN(x)) && (!Double.IsNaN(a)) && (!Double.IsNaN(b)) )
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
		public static double chi_LR(double x, double a, double b) {
			if (Double.IsNaN(x) || Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			double result = Double.NaN;
			if ( (!Double.IsNaN(x)) && (!Double.IsNaN(a)) && (!Double.IsNaN(b)) )
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
		public static double chi_L(double x, double a, double b) {
			if (Double.IsNaN(x) || Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			double result = Double.NaN;
			if ( (!Double.IsNaN(x)) && (!Double.IsNaN(a)) && (!Double.IsNaN(b)) )
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
		public static double chi_R(double x, double a, double b) {
			if (Double.IsNaN(x) || Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			double result = Double.NaN;
			if ( (!Double.IsNaN(x)) && (!Double.IsNaN(a)) && (!Double.IsNaN(b)) )
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
		public static double power(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			if (a >= 0)
				return Math.Pow(a, b);
			else if (abs(b) >= 1)
				return Math.Pow(a, b);
			else if (b == 0)
				return Math.Pow(a, b);
			else {
				double ndob = 1.0 / abs(b);
				double nint = Math.Round(ndob);
				if (MathFunctions.abs(ndob - nint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) {
					long n = (long)nint;
					if (n % 2 == 1)
						if (b > 0)
							return -Math.Pow(abs(a), 1.0 / ndob);
						else
							return -Math.Pow(abs(a), -1.0 / ndob);
					else
						return Double.NaN;
				}
				else return Double.NaN;
			}
		}
		/**
		 * Nth order root of a number
		 *
		 * @param n   Root order
		 * @param x   Number
		 * @return    Returns root of a number. If calculation is not possible Double.NaN is returned.
		 */
		public static double root(double n, double x) {
			if (Double.IsNaN(n) || Double.IsNaN(n)) return Double.NaN;
			if (Double.IsInfinity(n) || Double.IsInfinity(n)) return Double.NaN;
			if (n < -BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;
			if (abs(n) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) {
				if (abs(x) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return 0;
				else if (abs(x - 1) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return 1;
				else return Double.NaN;
			}
			long nint = (long)floor(n);
			if (nint == 1) return x;
			if (nint == 2) return sqrt(x);
			if (nint % 2 == 1) {
				if (x >= 0) return Math.Pow(x, 1.0 / nint);
				else return -Math.Pow(abs(x), 1.0 / nint);
			}
			else {
				if (x >= 0) return Math.Pow(x, 1.0 / nint);
				else return Double.NaN;
			}
		}
		/**
		 * Modulo operator a % b
		 *
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     if a,b <> Double.NaN returns a % b.
		 */
		public static double mod(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
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
		public static double div(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
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
		public static double sin(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Sin(a);
		}
		/**
		 * Cosine trigonometric function
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.cos(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double cos(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Cos(a);
		}
		/**
		 * Tangent trigonometric function
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.tan(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double tan(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Tan(a);
		}
		/**
		 * Cotangent trigonometric function
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN and tan(a) <> 0 returns 1 / Math.tan(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double ctan(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double tg = Math.Tan(a);
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
		public static double sec(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double cos = Math.Cos(a);
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
		public static double cosec(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double sin = Math.Sin(a);
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
		public static double asin(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Asin(a);
		}
		/**
		 * Arcus cosine - inverse trigonometric cosine function
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.acos(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double acos(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Acos(a);
		}
		/**
		 * Arcus tangent - inverse trigonometric tangent function
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.atan(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double atan(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Atan(a);
		}
		/**
		 * Arcus cotangent - inverse trigonometric cotangent function
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN and a <> 0 returns Math.atan(1/a),
		 *             otherwise returns Double.NaN.
		 */
		public static double actan(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Atan(1/a);
		}
		/**
		 * Arcus secant - inverse trigonometric secant function
		 *
		 * @param      a                   the a function parameter
		 * @return     Inverse trigonometric secant function
		 */
		public static double asec(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Acos(1 / a);
		}
		/**
		 * Arcus cosecant - inverse trigonometric cosecant function
		 *
		 * @param      a                   the a function parameter
		 * @return     Inverse trigonometric cosecant function
		 */
		public static double acosec(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Asin(1 / a);
		}
		/**
		 * Natural logarithm
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.log(1/a),
		 *             otherwise returns Double.NaN.
		 */
		public static double ln(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Log(a);
		}
		/**
		 * Binary logarithm
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.log(a)/Math.log(2.0),
		 *             otherwise returns Double.NaN.
		 */
		public static double log2(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Log(a)/Math.Log(2.0);
		}
		/**
		 * Common logarithm
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.log10(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double log10(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Log10(a);
		}
		/**
		 * Degrees to radius translation.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.toRadians(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double rad(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return a * (MathConstants.PI / 180.0);
		}
		/**
		 * Exponential function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.exp(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double exp(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Exp(a);
		}
		/**
		 * Square root.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.sqrt(a),
		 *             otherwise returns Double.NaN.
		 */
		 public static double sqrt(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Sqrt(a);
		}
		/**
		 * Hyperbolic sine function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.sinh(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double sinh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Sinh(a);
		}
		/**
		 * Hyperbolic cosine function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.cosh(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double cosh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Cosh(a);
		}
		/**
		 * Hyperbolic tangent function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.tanh(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double tanh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Tanh(a);
		}
		/**
		 * Hyperbolic cotangent function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN and tanh(a) <> 0 returns 1 / Math.tanh(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double coth(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double tanh = Math.Tanh(a);
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
		public static double sech(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double cosh = Math.Cosh(a);
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
		public static double csch(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double sinh = Math.Sinh(a);
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
		public static double deg(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return a * (180.0 / MathConstants.PI);
		}
		/**
		 * Absolute value.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.abs(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double abs(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Abs(a);
		}
		/**
		 * Signum function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.signum(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double sgn(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Sign(a);
		}
		/**
		 * Floor function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.floor(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double floor(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Floor(a);
		}
		/**
		 * Ceiling function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.ceil(a),
		 *             otherwise returns Double.NaN.
		 */
		public static double ceil(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Ceiling(a);
		}
		/**
		 * Arcus hyperbolic sine - inverse hyperbolic sine function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.log(a + Math.sqrt(a*a+1)),
		 *             otherwise returns Double.NaN.
		 */
		public static double arsinh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Log(a + Math.Sqrt(a*a+1));
		}
		/**
		 * Arcus hyperbolic cosine - inverse hyperbolic cosine function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN returns Math.log(a + Math.sqrt(a*a-1)),
		 *             otherwise returns Double.NaN.
		 */
		public static double arcosh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Log(a + Math.Sqrt(a*a-1));
		}
		/**
		 * Arcus hyperbolic tangent - inverse hyperbolic tangent function.
		 *
		 * @param      a                   the a function parameter
		 *
		 * @return     if a <> Double.NaN and 1-a <> 0 returns 0.5*Math.log( (1+a)/(1-a) ),
		 *             otherwise returns Double.NaN.
		 */
		public static double artanh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (1-a != 0)
				result = 0.5*Math.Log( (1+a)/(1-a) );
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
		public static double arcoth(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (a-1 != 0)
				result = 0.5*Math.Log( (a+1)/(a-1) );
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
		public static double arsech(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (a != 0)
				result = Math.Log( (1+Math.Sqrt(1-a*a))/a);
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
		public static double arcsch(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (a != 0)
				result = Math.Log( 1/a + Math.Sqrt(1+a*a)/Math.Abs(a) );
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
		public static double sa(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double x = MathConstants.PI * a;
			double result = Double.NaN;
			if (x != 0)
				result = Math.Sin(x) / (x);
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
		public static double sinc(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (a != 0)
				result = Math.Sin(a) / (a);
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
		public static double log(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			double result = Double.NaN;
			double logb = Math.Log(b);
			if (logb != 0)
				result = Math.Log(a) / logb;
			return result;
		}
		/**
		 * Double rounding
		 *
		 * @param value    double value to be rounded
		 * @param places   decimal places
		 * @return         If conversion from double to Decimal possible
		 *                 returns rounded value, otherwise Double.NaN.
		 */
		public static double round(double value, int places) {
			if (Double.IsNaN(value)) return Double.NaN;
			if (places < 0) return Double.NaN;
			try {
				Decimal bd = Convert.ToDecimal(value);
				bd = Math.Round(bd, places, MidpointRounding.AwayFromZero);
				return Convert.ToDouble(bd);
			} catch (Exception e) {
				#if PCL || CORE || NETSTANDARD || ANDROID || IOS
					mXparser.doNothing(e);
				#endif
				return value;
			}
		}
		/**
		 * For very small number returns number of zeros
		 * before first significant digit.
		 *
		 * @param value Double value, small one.
		 * @return Number of digits, number of places.
		 */
		public static int decimalDigitsBefore(double value) {
			if (value <= 1e-90) {
				if (value <= 1e-99) return 99;
				else if (value <= 1e-98) return 98;
				else if (value <= 1e-97) return 97;
				else if (value <= 1e-96) return 96;
				else if (value <= 1e-95) return 95;
				else if (value <= 1e-94) return 94;
				else if (value <= 1e-93) return 93;
				else if (value <= 1e-92) return 92;
				else if (value <= 1e-91) return 91;
				else return 90;
			} else if (value <= 1e-80) {
				if (value <= 1e-89) return 89;
				else if (value <= 1e-88) return 88;
				else if (value <= 1e-87) return 87;
				else if (value <= 1e-86) return 86;
				else if (value <= 1e-85) return 85;
				else if (value <= 1e-84) return 84;
				else if (value <= 1e-83) return 83;
				else if (value <= 1e-82) return 82;
				else if (value <= 1e-81) return 81;
				else return 80;
			} else if (value <= 1e-70) {
				if (value <= 1e-79) return 79;
				else if (value <= 1e-78) return 78;
				else if (value <= 1e-77) return 77;
				else if (value <= 1e-76) return 76;
				else if (value <= 1e-75) return 75;
				else if (value <= 1e-74) return 74;
				else if (value <= 1e-73) return 73;
				else if (value <= 1e-72) return 72;
				else if (value <= 1e-71) return 71;
				else return 70;
			} else if (value <= 1e-60) {
				if (value <= 1e-69) return 69;
				else if (value <= 1e-68) return 68;
				else if (value <= 1e-67) return 67;
				else if (value <= 1e-66) return 66;
				else if (value <= 1e-65) return 65;
				else if (value <= 1e-64) return 64;
				else if (value <= 1e-63) return 63;
				else if (value <= 1e-62) return 62;
				else if (value <= 1e-61) return 61;
				else return 60;
			} else if (value <= 1e-50) {
				if (value <= 1e-59) return 59;
				else if (value <= 1e-58) return 58;
				else if (value <= 1e-57) return 57;
				else if (value <= 1e-56) return 56;
				else if (value <= 1e-55) return 55;
				else if (value <= 1e-54) return 54;
				else if (value <= 1e-53) return 53;
				else if (value <= 1e-52) return 52;
				else if (value <= 1e-51) return 51;
				else return 50;
			} else if (value <= 1e-40) {
				if (value <= 1e-49) return 49;
				else if (value <= 1e-48) return 48;
				else if (value <= 1e-47) return 47;
				else if (value <= 1e-46) return 46;
				else if (value <= 1e-45) return 45;
				else if (value <= 1e-44) return 44;
				else if (value <= 1e-43) return 43;
				else if (value <= 1e-42) return 42;
				else if (value <= 1e-41) return 41;
				else return 40;
			} else if (value <= 1e-40) {
				if (value <= 1e-49) return 49;
				else if (value <= 1e-48) return 48;
				else if (value <= 1e-47) return 47;
				else if (value <= 1e-46) return 46;
				else if (value <= 1e-45) return 45;
				else if (value <= 1e-44) return 44;
				else if (value <= 1e-43) return 43;
				else if (value <= 1e-42) return 42;
				else if (value <= 1e-41) return 41;
				else return 40;
			} else if (value <= 1e-30) {
				if (value <= 1e-39) return 39;
				else if (value <= 1e-38) return 38;
				else if (value <= 1e-37) return 37;
				else if (value <= 1e-36) return 36;
				else if (value <= 1e-35) return 35;
				else if (value <= 1e-34) return 34;
				else if (value <= 1e-33) return 33;
				else if (value <= 1e-32) return 32;
				else if (value <= 1e-31) return 31;
				else return 30;
			} else if (value <= 1e-20) {
				if (value <= 1e-29) return 29;
				else if (value <= 1e-28) return 28;
				else if (value <= 1e-27) return 27;
				else if (value <= 1e-26) return 26;
				else if (value <= 1e-25) return 25;
				else if (value <= 1e-24) return 24;
				else if (value <= 1e-23) return 23;
				else if (value <= 1e-22) return 22;
				else if (value <= 1e-21) return 21;
				else return 20;
			} else if (value <= 1e-10) {
				if (value <= 1e-19) return 19;
				else if (value <= 1e-18) return 18;
				else if (value <= 1e-17) return 17;
				else if (value <= 1e-16) return 16;
				else if (value <= 1e-15) return 15;
				else if (value <= 1e-14) return 14;
				else if (value <= 1e-13) return 13;
				else if (value <= 1e-12) return 12;
				else if (value <= 1e-11) return 11;
				else return 10;
			} else {
				if (value <= 1e-9) return 9;
				else if (value <= 1e-8) return 8;
				else if (value <= 1e-7) return 7;
				else if (value <= 1e-6) return 6;
				else if (value <= 1e-5) return 5;
				else if (value <= 1e-4) return 4;
				else if (value <= 1e-3) return 3;
				else if (value <= 1e-2) return 2;
				else if (value <= 1e-1) return 1;
				else if (value <= 1.0) return 0;
				else return -1;
			}
		}
		/**
		 * Unit in the last place(ULP) for double
		 * @return ULP for a given double.
		 */
		public static double ulp(double value) {
			double v = abs(value);
			long bits = BitConverter.DoubleToInt64Bits(v) & 0x7FFFFFFFFFFFFFFFL;
			double nextValue = BitConverter.Int64BitsToDouble(bits + 1);
			return nextValue - v;
		}
		/**
		 * Unit in The Last Place - number of decimal digits before
		 * @param value   Double number
		 * @return        Positive number of digits N for ulp = 1e-{N+1},
		 *                if ulp is &gt; 1 then -1 is returned.
		 *                Returned proper value is always between -1 and +99.
		 *                If value is NaN then -2 is returned.
		 */
		public static int ulpDecimalDigitsBefore(double value) {
			if (Double.IsNaN(value)) return -2;
			double u = ulp(value);
			return decimalDigitsBefore(u);
		}
		/**
		 * Returns the first non-NaN value
		 *
		 * @param values   List of values
		 * @return         Returns the first non-NaN value, if list is null
		 *                 then returns Double.NaN, if list contains no elements
		 *                 then returns Double.NaN.
		 */
		public static double coalesce(double[] values) {
			if (values == null) return Double.NaN;
			if (values.Length == 0) return Double.NaN;
			foreach (double v in values)
				if (!Double.IsNaN(v)) return v;
			return Double.NaN;
		}
	}
}