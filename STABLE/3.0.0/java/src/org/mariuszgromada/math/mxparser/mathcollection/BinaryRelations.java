/*
 * @(#)BinaryRelations.java        3.0.0    2016-05-07
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

/**
 * BinaryRelations - class for dealing with binary relations on integers or doubles.
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
public final class BinaryRelations {
	/**
	 * Default epsilon for comparison
	 */
	public static final double DEFAULT_COMPARISON_EPSILON = 0.00000000000001;
	/**
	 * Epsilon for comparison
	 */
	static double epsilon = DEFAULT_COMPARISON_EPSILON;
	/**
	 * COmparison mode indicator
	 */
	static boolean epsilonComparison = true;
	/**
	 * Sets comparison mode to EXACT.
	 */
	public static final void setExactComparison() {
		epsilonComparison = false;
	}
	/**
	 * Sets comparison mode to EPSILON.
	 */
	public static final void setEpsilonComparison() {
		epsilonComparison = true;
	}
	/**
	 * Sets epsilon value.
	 * @param epsilon   Epsilon value (grater than 0).
	 *
	 * @see #setEpsilonComparison()
	 */
	public static final void setEpsilon(double epsilon) {
		if (epsilon > 0) BinaryRelations.epsilon = epsilon;
	}
	/**
	 * Sets default epsilon value.
	 *
	 * @see #setEpsilonComparison()
	 * @see #DEFAULT_COMPARISON_EPSILON
	 */
	public static final void setDefaultEpsilon() {
		BinaryRelations.epsilon = DEFAULT_COMPARISON_EPSILON;
	}
	/**
	 * Returns current epsilon value.
	 * @return  Returns current epsilon value.
	 *
	 * @see #setEpsilonComparison()
	 */
	public static final double getEpsilon() {
		return epsilon;
	}
	/**
	 * Checks if epsilon comparison mode is active;
	 * @return  True if epsilon mode is active, otherwise returns false.
	 * @see #setEpsilonComparison()
	 * @see #setExactComparison()
	 */
	public static final boolean checkIfEpsilonMode() {
		return epsilonComparison;
	}
	/**
	 * Checks if exact comparison mode is active;
	 * @return  True if exact mode is active, otherwise returns false.
	 * @see #setEpsilonComparison()
	 * @see #setExactComparison()
	 */
	public static final boolean checkIfExactMode() {
		return !epsilonComparison;
	}
	/**
	 * Equality relation.
	 *
	 * @param      a                   the a number (a = b)
	 * @param      b                   the b number (a = b)
	 *
	 * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	 *             else if a = b return 1,
	 *             otherwise return 0.
	 */
	public static final double eq(double a, double b) {
		if ( ( Double.isNaN(a) ) || ( Double.isNaN(b) ) ) return Double.NaN;
		double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b) );
		double result = 0;
		if (epsilonComparison) {
			if ( MathFunctions.abs(a-b) <= eps ) result = 1;
		} else if ( a == b ) result = 1;
		return result;
	}
	/**
	 * Inequality relation.
	 *
	 * @param      a                   the a number (a &lt;&gt; b)
	 * @param      b                   the b number (a &lt;&gt; b)
	 *
	 * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	 *             else if a &lt;&gt; b return 1,
	 *             otherwise return 0.
	 */
	public static final double neq(double a, double b) {
		if ( ( Double.isNaN(a) ) || ( Double.isNaN(b) ) ) return Double.NaN;
		double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b) );
		double result = 0;
		if (epsilonComparison) {
			if ( MathFunctions.abs(a-b) > eps ) result = 1;
		} else if ( a != b ) result = 1;
		return result;
	}
	/**
	 * Lower than relation.
	 *
	 * @param      a                   the a number (a &lt; b)
	 * @param      b                   the b number (a &lt; b)
	 *
	 * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	 *             else if a &lt; b return 1,
	 *             otherwise return 0.
	 */
	public static final double lt(double a, double b) {
		if ( ( Double.isNaN(a) ) || ( Double.isNaN(b) ) ) return Double.NaN;
		double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b) );
		double result = 0;
		if (epsilonComparison) {
			if ( a < b - eps ) result = 1;
		} else if ( a < b ) result = 1;
		return result;
	}
	/**
	 * Greater than relation.
	 *
	 * @param      a                   the a number (a &gt; b)
	 * @param      b                   the b number (a &gt; b)
	 *
	 * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	 *             else if a &gt; b return 1,
	 *             otherwise return 0.
	 */
	public static final double gt(double a, double b) {
		if ( ( Double.isNaN(a) ) || ( Double.isNaN(b) ) ) return Double.NaN;
		double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b) );
		double result = 0;
		if (epsilonComparison) {
			if ( a > b + eps ) result = 1;
		} else if ( a > b ) result = 1;
		return result;
	}
	/**
	 * Lower or equal relation.
	 *
	 * @param      a                   the a number (a &lt;= b)
	 * @param      b                   the b number (a &lt;= b)
	 *
	 * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	 *             else if a &lt;= b return 1,
	 *             otherwise return 0.
	 */
	public static final double leq(double a, double b) {
		if ( ( Double.isNaN(a) ) || ( Double.isNaN(b) ) ) return Double.NaN;
		double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b) );
		double result = 0;
		if (epsilonComparison) {
			if ( a <= b + eps ) result = 1;
		} else if ( a <= b ) result = 1;
		return result;
	}
	/**
	 * Greater or equal relation.
	 *
	 * @param      a                   the a number (a &gt;= b)
	 * @param      b                   the b number (a &gt;= b)
	 *
	 * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	 *             else if a &gt;= b return 1,
	 *             otherwise return 0.
	 */
	public static final double geq(double a, double b) {
		if ( ( Double.isNaN(a) ) || ( Double.isNaN(b) ) ) return Double.NaN;
		double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b) );
		double result = 0;
		if (epsilonComparison) {
			if ( a >= b - eps ) result = 1;
		} else if ( a >= b ) result = 1;
		return result;
	}
}