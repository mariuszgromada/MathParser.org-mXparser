/*
 * @(#)BinaryRelations.cs        5.0.0    2022-04-10
 *
 * Copyright 2010 - 2022 MARIUSZ GROMADA. All rights reserved.
 *
 * PRODUCT: MathParser.org-mXparser
 * LICENSE: DUAL LICENSE
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE SOFTWARE, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * MARIUSZ GROMADA provides MathParser.org-mXparser SOFTWARE under the
 * DUAL LICENSE model designed to meet the needs of both Non-Commercial Use
 * as well as Commercial Use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. NON-COMMERCIAL USE examples:
 *
 * 1. Free Open-Source Software ("FOSS").
 * 2. Non-commercial use in research, scholarly and education.
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
 * IN CASE YOU WANT TO USE THE SOFTWARE COMMERCIALLY, YOU MUST PURCHASE
 * THE APPROPRIATE LICENSE FROM "INFIMA IWONA GLOWACKA-GROMADA", ONLINE
 * STORE ADDRESS: HTTPS://PAYHIP.COM/INFIMA
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms, with
 * or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE in the documentation and/or other
 *    materials provided with the distribution, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, MARIUSZ GROMADA allows you to
 *     download, install and use up to three copies of the PRODUCT to perform
 *     integration tests, confirm the quality of the PRODUCT and its
 *     suitability. The testing period should be limited to one month. Tests
 *     should take place via test environments. The purpose of the tests must
 *     not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA IWONA GLOWACKA-GROMADA"
 *     (online store address: https://payhip.com/INFIMA), you comply with all
 *     below terms and conditions, and you have acknowledged and understood the
 *     following DISCLAIMER, MARIUSZ GROMADA grants you a nonexclusive license
 *     including the following rights:
 *  3. In case you purchased a "Single License" You can install and use the
 *     PRODUCT from one workstation.
 *  4. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number of
 *     copies purchased as per order.
 *  5. In case you purchased a "Site License", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
 *  6. You may incorporate the unmodified PRODUCT into your own products and
 *     software.
 *  7. If you purchased a license with the "Source Code" option, you may modify
 *     the PRODUCT's source code and incorporate the modified source code into
 *     your own products and / or software.
 *  8. You may distribute your product and / or software with the incorporated
 *     PRODUCT royalty-free.
 *  9. You may make copies of the PRODUCT for backup and archival purposes.
 * 10. MARIUSZ GROMADA reserves all rights not expressly granted to you in
 *     this agreement.
 *
 * CONTACT
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://payhip.com/INFIMA
 *
 * DISCLAIMER
 *
 * THIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL MATHPARSER.ORG MARIUSZ GROMADA OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE SOFTWARE AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING OFFICIAL
 * POLICIES, EITHER EXPRESSED OR IMPLIED, OF MARIUSZ GROMADA.
 */
using System;

namespace org.mariuszgromada.math.mxparser.mathcollection {
	/**
	 * BinaryRelations - class for dealing with binary relations on integers or doubles.
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
	 * @version        5.0.0
	 */
	[CLSCompliant(true)]
	public sealed class BinaryRelations {
		/**
		 * Default epsilon for comparison
		 */
		public static readonly double DEFAULT_COMPARISON_EPSILON = 0.00000000000001;
		/**
		 * Epsilon for comparison
		 */
		internal static double epsilon = DEFAULT_COMPARISON_EPSILON;
		/**
		 * COmparison mode indicator
		 */
		internal static bool epsilonComparison = true;
		/**
		 * Sets comparison mode to EXACT.
		 */
		public static void setExactComparison() {
			epsilonComparison = false;
		}
		/**
		 * Sets comparison mode to EPSILON.
		 */
		public static void setEpsilonComparison() {
			epsilonComparison = true;
		}
		/**
		 * Sets epsilon value.
		 * @param epsilon   Epsilon value (grater than 0).
		 *
		 * @see #setEpsilonComparison()
		 */
		public static void setEpsilon(double epsilon) {
			if (epsilon > 0) BinaryRelations.epsilon = epsilon;
		}
		/**
		 * Sets default epsilon value.
		 *
		 * @see #setEpsilonComparison()
		 * @see #DEFAULT_COMPARISON_EPSILON
		 */
		public static void setDefaultEpsilon() {
			BinaryRelations.epsilon = DEFAULT_COMPARISON_EPSILON;
		}
		/**
		 * Returns current epsilon value.
		 * @return  Returns current epsilon value.
		 *
		 * @see #setEpsilonComparison()
		 */
		public static double getEpsilon() {
			return epsilon;
		}
		/**
		 * Checks if epsilon comparison mode is active;
		 * @return  True if epsilon mode is active, otherwise returns false.
		 * @see #setEpsilonComparison()
		 * @see #setExactComparison()
		 */
		public static bool checkIfEpsilonMode() {
			return epsilonComparison;
		}
		/**
		 * Checks if exact comparison mode is active;
		 * @return  True if exact mode is active, otherwise returns false.
		 * @see #setEpsilonComparison()
		 * @see #setExactComparison()
		 */
		public static bool checkIfExactMode() {
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
		public static double eq(double a, double b) {
			if ((Double.IsNaN(a)) || (Double.IsNaN(b))) return Double.NaN;
			double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b));
			if (Double.IsInfinity(a) || Double.IsInfinity(b)) eps = 0;
			double result = BooleanAlgebra.FALSE;
			if (epsilonComparison) {
				if (MathFunctions.abs(a - b) <= eps) result = BooleanAlgebra.TRUE;
			} else if (a == b) result = BooleanAlgebra.TRUE;
			return result;
		}
		/**
		 * Test for equality or almost equality.
		 *
		 * @param a   First number
		 * @param b   Second number
		 * @return    Returns true if both number are equal or are almost equal.
		 *
		 * @see #DEFAULT_COMPARISON_EPSILON
		 */
		public static bool isEqualOrAlmost(double a, double b) {
			if (Math.Abs(a - b) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return true;
			else return false;
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
		public static double neq(double a, double b) {
			if ((Double.IsNaN(a)) || (Double.IsNaN(b))) return Double.NaN;
			double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b));
			if (Double.IsInfinity(a) || Double.IsInfinity(b)) eps = 0;
			double result = BooleanAlgebra.FALSE;
			if (epsilonComparison) {
				if (MathFunctions.abs(a - b) > eps) result = BooleanAlgebra.TRUE;
			} else if (a != b) result = BooleanAlgebra.TRUE;
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
		public static double lt(double a, double b) {
			if ((Double.IsNaN(a)) || (Double.IsNaN(b))) return Double.NaN;
			double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b));
			if (Double.IsInfinity(a) || Double.IsInfinity(b)) eps = 0;
			double result = BooleanAlgebra.FALSE;
			if (epsilonComparison) {
				if (a < b - eps) result = BooleanAlgebra.TRUE;
			} else if (a < b) result = BooleanAlgebra.TRUE;
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
		public static double gt(double a, double b) {
			if ((Double.IsNaN(a)) || (Double.IsNaN(b))) return Double.NaN;
			double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b));
			if (Double.IsInfinity(a) || Double.IsInfinity(b)) eps = 0;
			double result = BooleanAlgebra.FALSE;
			if (epsilonComparison) {
				if (a > b + eps) result = BooleanAlgebra.TRUE;
			} else if (a > b) result = BooleanAlgebra.TRUE;
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
		public static double leq(double a, double b) {
			if ((Double.IsNaN(a)) || (Double.IsNaN(b))) return Double.NaN;
			double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b));
			if (Double.IsInfinity(a) || Double.IsInfinity(b)) eps = 0;
			double result = BooleanAlgebra.FALSE;
			if (epsilonComparison) {
				if (a <= b + eps) result = BooleanAlgebra.TRUE;
			} else if (a <= b) result = BooleanAlgebra.TRUE;
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
		public static double geq(double a, double b) {
			if ((Double.IsNaN(a)) || (Double.IsNaN(b))) return Double.NaN;
			double eps = NumberTheory.max(epsilon, MathFunctions.ulp(b));
			if (Double.IsInfinity(a) || Double.IsInfinity(b)) eps = 0;
			double result = BooleanAlgebra.FALSE;
			if (epsilonComparison) {
				if (a >= b - eps) result = BooleanAlgebra.TRUE;
			} else if (a >= b) result = BooleanAlgebra.TRUE;
			return result;
		}
	}
}