/*
 * @(#)NumberTheory.java        6.1.0    2024-10-14
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
package org.mariuszgromada.math.mxparser.mathcollection;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.mariuszgromada.math.mxparser.Argument;
import org.mariuszgromada.math.mxparser.Expression;
import org.mariuszgromada.math.mxparser.StringUtils;
import org.mariuszgromada.math.mxparser.mXparser;
import org.mariuszgromada.math.mxparser.parsertokens.ConstantValue;
import org.mariuszgromada.math.mxparser.parsertokens.ParserSymbol;

/**
 * NumberTheory - summation / products etc...
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
 * @version        6.1.0
 */
public final class NumberTheory {
	public static final long DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE = 10000;
	/**
	 * Initial search size 1 ... n for the toFraction method
	 * @see NumberTheory#toFraction(double)
	 */
	private static long TO_FRACTION_INIT_SEARCH_SIZE = DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE;
	/**
	 * Sets initial search size for the toFraction method
	 *
	 * @param n initial search size, has to be non-zero positive.
	 * @see NumberTheory#toFraction(double)
	 */
	public static void setToFractionInitSearchSize(long n) {
		if (n >= 0) TO_FRACTION_INIT_SEARCH_SIZE = n;
	}
	/**
	 * Gets initial search size used by the toFraction method
	 *
	 * @return initial search size used by the toFraction method
	 * @see NumberTheory#toFraction(double)
	 */
	public static long getToFractionInitSearchSize() {
		return TO_FRACTION_INIT_SEARCH_SIZE;
	}
	/**
	 * Minimum function.
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     if a,b &lt;&gt; Double.NaN returns Math.min(a, b),
	 *             otherwise returns Double.NaN.
	 */
	public static double min(double a, double b) {
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
	public static double min(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		double min = Double.POSITIVE_INFINITY;
		for (double number : numbers) {
			if (Double.isNaN(number))
				return Double.NaN;
			if (number < min)
				min = number;
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
		}
		return min;
	}
	/**
	 * Arg-Min function.
	 *
	 * @param      numbers             the a function parameter
	 *
	 * @return     Returns the index of the first smallest number,
	 *             otherwise returns Double.NaN.
	 */
	public static double argmin(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		double min = Double.POSITIVE_INFINITY;
		double minIndex = -1;
		for (int i = 0; i < numbers.length; i++) {
			double number = numbers[i];
			if (Double.isNaN(number))
				return Double.NaN;
			if (BinaryRelations.lt(number, min) == BooleanAlgebra.TRUE) {
				min = number;
				minIndex = i;
			}
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
		}
		return minIndex + 1;
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
	public static double max(double a, double b) {
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
	public static double max(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		double max = Double.NEGATIVE_INFINITY;
		for (double number : numbers) {
			if (Double.isNaN(number))
				return Double.NaN;
			if (number > max)
				max = number;
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
		}
		return max;
	}
	/**
	 * Arg-Max function.
	 *
	 * @param      numbers             the a function parameter
	 *
	 * @return     Returns the index of the first biggest number,
	 *             otherwise returns Double.NaN.
	 */
	public static double argmax(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		double max = Double.NEGATIVE_INFINITY;
		double maxIndex = -1;
		for (int i = 0; i < numbers.length; i++) {
			double number = numbers[i];
			if (Double.isNaN(number))
				return Double.NaN;
			if (BinaryRelations.gt(number, max) == BooleanAlgebra.TRUE) {
				max = number;
				maxIndex = i;
			}
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
		}
		return maxIndex + 1;
	}
	/**
	 * Sorting array - ascending - quick sort algorithm. Initial ordering swapped according to sort order.
	 * @param array         Array to be sorted
	 * @param initOrder     Array to be swapped together with sorted array
	 * @param leftIndex     Starting left index.
	 * @param rightIndex    Starting right index.
	 */
	private static void sortAsc(double[] array, int[] initOrder, int leftIndex, int rightIndex) {
		int i = leftIndex;
		int j = rightIndex;
		double x = array[(leftIndex+rightIndex)/2];
		double w;
		int v;
		do {

			while ( BinaryRelations.lt(array[i], x) == BooleanAlgebra.TRUE ) {
				i++;
				if (mXparser.isCurrentCalculationCancelled()) return;
			}
			while ( BinaryRelations.gt(array[j], x) == BooleanAlgebra.TRUE ) {
				j--;
				if (mXparser.isCurrentCalculationCancelled()) return;
			}
			if (i <= j) {
				w = array[i];
				array[i] = array[j];
				array[j] = w;
				v = initOrder[i];
				initOrder[i] = initOrder[j];
				initOrder[j] = v;
				i++;
				j--;
			}
			if (mXparser.isCurrentCalculationCancelled()) return;
		} while (i <= j);
		if (mXparser.isCurrentCalculationCancelled()) return;
		if (leftIndex < j) sortAsc(array, initOrder, leftIndex, j);
		if (i < rightIndex) sortAsc(array, initOrder, i, rightIndex);
	}
	/**
	 * Array sort - ascending - quick sort algorithm.
	 * @param array  Array to be sorted
	 * @return       Sorts array and additionally returns
	 *               initial ordering swapped according to sort order.
	 */
	public static int[] sortAsc(double[] array) {
		if (array == null) return null;
		int[] initOrder = new int[array.length];
		for (int i = 0; i < array.length; i++) {
			initOrder[i] = i;
			if (mXparser.isCurrentCalculationCancelled()) return initOrder;
		}
		if (array.length < 2) return initOrder;
		sortAsc(array, initOrder, 0, array.length-1);
		return initOrder;
	}
	/**
	 * Returns list of distinct values found in a given array.
	 * @param array The array
	 * @param returnOrderByDescFreqAndAscOrigPos Indicator whether to apply final ordering based
	 *                                           on descending value frequency and ascending initial position.
	 * @return List of values in the form of: first index - value index, second index: 0 - value, 1 - value count,
	 *                                        2 - minimal value position in original array
	 */
	public static double[][] getDistValues(double[] array, boolean returnOrderByDescFreqAndAscOrigPos) {
		if (array == null) return null;
		/*
		 * double[n][3] is returned
		 * double[i][value]         - unique value
		 * double[i][count]         - number of appearance in data
		 * double[i][initPosFirst]  - initial first position in data
		 */
		final int value = 0;
		final int count = 1;
		final int initPosFirst = 2;
		if (array.length *3 >= Integer.MAX_VALUE) return new double[0][3];
		double[][] distVal = new double[array.length][3];
		if (array.length == 0) return distVal;
		if (array.length == 1) {
			distVal[0][value] = array[0];
			distVal[0][count] = 1;
			distVal[0][initPosFirst] = 0;
			return distVal;
		}
		/*
		 * Sort ascending by value
		 */
		int[] initPos = sortAsc(array);
		/*
		 * Building unique values list
		 */
		double unqValue = array[0];
		int unqValCnt = 1;
		int unqValMinPos = initPos[0];
		/*
		 * This will be the number of found unique values
		 */
		int unqCnt = 0;
		/*
		 * Iterating from the second element
		 * First element is considered above
		 */
		for (int i = 1; i < array.length; i++) {
			if (mXparser.isCurrentCalculationCancelled()) break;
			/* if the same value */
			if ( BinaryRelations.eq(unqValue, array[i]) == BooleanAlgebra.TRUE ) {
				/*
				 * - increase counter
				 * - check if found smaller original position
				 */
				unqValCnt++;
				if (initPos[i] < unqValMinPos)
					unqValMinPos = initPos[i];
			}
			if ( ( BinaryRelations.eq(unqValue, array[i]) == BooleanAlgebra.FALSE ) && (i < array.length-1) ) {
				/* if new value found and not end of the list */
				/*
				 * Store analyzed value
				 */
				distVal[unqCnt][value] = unqValue;
				distVal[unqCnt][count] = unqValCnt;
				distVal[unqCnt][initPosFirst] = unqValMinPos;
				/*
				 * Increase unique values counter
				 */
				unqCnt++;
				/*
				 * Initiate new value to be further iterated
				 */
				unqValue = array[i];
				unqValCnt = 1;
				unqValMinPos = initPos[i];
			} else if ( ( BinaryRelations.eq(unqValue, array[i]) == BooleanAlgebra.FALSE ) && (i == array.length-1) ) {
				/* if new value found and end of the list */
				/*
				 * Store analyzed value
				 */
				distVal[unqCnt][value] = unqValue;
				distVal[unqCnt][count] = unqValCnt;
				distVal[unqCnt][initPosFirst] = unqValMinPos;
				/*
				 * Increase unique values counter
				 */
				unqCnt++;
				/*
				 * Store last value
				 */
				distVal[unqCnt][value] = array[i];
				distVal[unqCnt][count] = 1;
				distVal[unqCnt][initPosFirst] = initPos[i];
				/*
				 * Increase unique values counter
				 */
				unqCnt++;
			} else if (i == array.length-1) {
				/* if no new vale and end of the list */
				/*
				 * Store analyzed value
				 */
				distVal[unqCnt][value] = unqValue;
				distVal[unqCnt][count] = unqValCnt;
				distVal[unqCnt][initPosFirst] = unqValMinPos;
				/*
				 * Increase unique values counter
				 */
				unqCnt++;
			}
		}
		double[][] distValFinal = new double[unqCnt][3];
		double maxBase = 0;
		for (int i = 0; i < unqCnt; i++) {
			if (mXparser.isCurrentCalculationCancelled()) break;
			distValFinal[i][value] = distVal[i][value];
			distValFinal[i][count] = distVal[i][count];
			distValFinal[i][initPosFirst] = distVal[i][initPosFirst];
			if ( distVal[i][count] > maxBase) maxBase = distVal[i][count];
			if ( distVal[i][initPosFirst] > maxBase) maxBase = distVal[i][initPosFirst];
		}
		if (!returnOrderByDescFreqAndAscOrigPos) return distValFinal;
		/*
		 * This will be numeral system with base maxBase,
		 * so we need to increment with 1 to have digits interpretation
		 * for 0 ... maxBase - 1
		 */
		maxBase++;
		/*
		 * Making ordering key
		 * - greater count lower ordering key value at first component
		 * - lower position lower ordering key value at second component
		 */
		double[] key = new double[unqCnt];
		for (int i = 0; i < unqCnt; i++) {
			if (mXparser.isCurrentCalculationCancelled()) break;
			key[i] = (maxBase - distVal[i][count] - 1) * maxBase + distVal[i][initPosFirst];
		}
		/*
		 * Sorting descending
		 */
		int[] keyInitOrder = sortAsc(key);
		/*
		 * Getting final ordering
		 */
		for (int i = 0; i < unqCnt; i++) {
			if (mXparser.isCurrentCalculationCancelled()) break;
			distValFinal[i][value] = distVal[ keyInitOrder[i] ][value];
			distValFinal[i][count] = distVal[ keyInitOrder[i] ][count];
			distValFinal[i][initPosFirst] = distVal[ keyInitOrder[i] ][initPosFirst];
		}
		return distValFinal;
	}
	/**
	 * Returns number of unique values found the list of numbers
	 * @param numbers    The list of numbers
	 * @return           Number of unique values. If list is null or any Double.NaN
	 *                   is found then Double.NaN is returned.
	 */
	public static double numberOfDistValues(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return 0;
		for (double v : numbers) {
			if (Double.isNaN(v)) return Double.NaN;
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
		}
		if (numbers.length == 1) return 1;
		return getDistValues(numbers, false).length;
	}
	/**
	 * Greatest common divisor (GCD)
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 * @return     GCD(a,b)
	 */
	public static long gcd(long a, long b) {
		if (a < 0) a = -a;
		if (b < 0) b = -b;
		if ( (a == 0) && (b != 0) ) return b;
		if ( (a != 0) && (b == 0) ) return a;
		if (a == 0) return -1;
		if (b == 0) return -1;
		if (a == b) return a;
		long quotient;
		while (b != 0) {
			if (mXparser.isCurrentCalculationCancelled()) return (long)Double.NaN;
			if (a > b) {
				quotient = a / b - 1;
				if (quotient > 0)
					a -= b * quotient;
				else
					a -= b;
			} else {
				quotient = b / a - 1;
				if (quotient > 0)
					b -= a * quotient;
				else
					b -= a;
			}
		}
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
	public static double gcd(double a, double b) {
		if (Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		if (a < 0) a = -a;
		if (b < 0) b = -b;
		a = MathFunctions.floor( MathFunctions.abs(a) );
		b = MathFunctions.floor( MathFunctions.abs(b) );
		if ( (a == 0) && (b != 0) ) return b;
		if ( (a != 0) && (b == 0) ) return a;
		if (a == 0) return Double.NaN;
		if (b == 0) return Double.NaN;
		if (a == b) return a;
		double quotient;
		while (b != 0.0) {
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			if (a > b) {
				quotient = Math.floor(a / b) - 1;
				if (quotient > 0)
					a = Math.floor(a - b*quotient);
				else
					a = Math.floor(a - b);
			} else {
				quotient = Math.floor(b / a) - 1;
				if (quotient > 0)
					b = Math.floor(b - a*quotient);
				else
					b = Math.floor(b - a);
			}
		}
		return a;
	}
	/**
	 * Greatest common divisor (GCD)
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     GCD(a_1,...,a_n) a_1,...,a_n in numbers
	 */
	public static long gcd(long... numbers) {
		if (numbers == null) return -1;
		if (numbers.length == 0) return -1;
		if (numbers.length == 1)
			if (numbers[0] >= 0) return numbers[0];
			else return -numbers[0];
		if (numbers.length == 2)
			return gcd( numbers[0], numbers[1] );
		for (int i = 1; i < numbers.length; i++) {
			if (mXparser.isCurrentCalculationCancelled()) return (long)Double.NaN;
			numbers[i] = gcd( numbers[i-1], numbers[i] );
		}

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
	public static double gcd(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1)
			return MathFunctions.floor( MathFunctions.abs( numbers[0] ) );
		if (numbers.length == 2)
			return gcd( numbers[0], numbers[1] );
		for (int i = 1; i < numbers.length; i++) {
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			numbers[i] = gcd( numbers[i-1], numbers[i] );
		}
		return numbers[numbers.length-1];
	}
	/**
	 * Latest common multiply (LCM)
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     LCM(a,b)
	 */
	public static long lcm(long a, long b) {
		a = Math.abs(a);
		b = Math.abs(b);
		if ( (a == 0) || (b == 0) )
			return 0;
		return (a * b) / gcd(a, b);
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
	public static double lcm(double a, double b) {
		if (Double.isNaN(a) || Double.isNaN(b))
			return Double.NaN;
		a = MathFunctions.floor( MathFunctions.abs(a) );
		b = MathFunctions.floor( MathFunctions.abs(b) );
		return (a*b) / gcd(a, b);
	}
	/**
	 * Latest common multiply (LCM)
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     LCM(a_1,...,a_n) a_1,...,a_n in numbers
	 */
	public static long lcm(long... numbers) {
		if (numbers == null) return -1;
		if (numbers.length == 0) return -1;
		if (numbers.length == 1)
			if (numbers[0] >= 0) return numbers[0];
			else return -numbers[0];
		if (numbers.length == 2)
			return lcm( numbers[0], numbers[1] );
		for (int i = 1; i < numbers.length; i++) {
			if (mXparser.isCurrentCalculationCancelled()) return (long)Double.NaN;
			numbers[i] = lcm( numbers[i-1], numbers[i] );
		}
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
	public static double lcm(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1)
			MathFunctions.floor( MathFunctions.abs( numbers[0] ) );
		if (numbers.length == 2)
			return lcm( numbers[0], numbers[1] );
		for (int i = 1; i < numbers.length; i++) {
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			numbers[i] = lcm( numbers[i-1], numbers[i] );
		}
		return numbers[numbers.length-1];
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
	public static double sum(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) return numbers[0];
		if (mXparser.checkIfCanonicalRounding()) {
			BigDecimal dsum = BigDecimal.ZERO;
			for (double xi : numbers) {
				if ( Double.isNaN(xi) ) return Double.NaN;
				if ( Double.isInfinite(xi)) return Double.NaN;
				dsum = dsum.add(BigDecimal.valueOf(xi));
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			}
			return dsum.doubleValue();
		} else {
			double sum = 0;
			for (double xi : numbers) {
				if ( Double.isNaN(xi) ) return Double.NaN;
				if ( Double.isInfinite(xi)) return Double.NaN;
				sum += xi;
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			}
			return sum;
		}
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
	public static double prod(double... numbers) {
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) return numbers[0];
		if (mXparser.checkIfCanonicalRounding()) {
			BigDecimal dprod = BigDecimal.ONE;
			for (double xi : numbers) {
				if ( Double.isNaN(xi) ) return Double.NaN;
				if ( Double.isInfinite(xi)) return Double.NaN;
				dprod = dprod.multiply(BigDecimal.valueOf(xi));
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			}
			return dprod.doubleValue();
		} else {
			double prod = 1;
			for (double xi : numbers) {
				if ( Double.isNaN(xi) ) return Double.NaN;
				if ( Double.isInfinite(xi)) return Double.NaN;
				prod *= xi;
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			}
			return prod;
		}
	}

	/**
	 * Prime test
	 *
	 * @param n           The number to be tested.
	 *
	 * @return true if number is prime, otherwise false
	 */
	public static boolean primeTest(long n) {
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
							if (mXparser.primesCache.isPrime[(int) i])
								if (n % i == 0) return false;
							if (mXparser.isCurrentCalculationCancelled()) return false;
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
		for (long i = primesCacheOddEnd; i <= top; i+=2) {
			if (n % i == 0) return false;
			if (mXparser.isCurrentCalculationCancelled()) return false;
		}
		return true;
	}
	/**
	 * Prime test
	 *
	 * @param n        The number to be tested.
	 *
	 * @return true if number is prime, otherwise false
	 */
	public static double primeTest(double n) {
		if ( Double.isNaN(n) ) return Double.NaN;
		boolean isPrime = primeTest((long)n);
		if (isPrime)
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
		for (long i = 3; i <= n; i++) {
			if (mXparser.isCurrentCalculationCancelled()) return (long)Double.NaN;
			if(primeTest(i))
				numberOfPrimes++;
		}
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
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		double fval;
		double i;
		if (mXparser.checkIfCanonicalRounding()) {
			BigDecimal dresult = BigDecimal.ZERO;
			if ( (to >= from) && (delta > 0) ) {
				for (i = from; i < to; i+=delta) {
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					fval = MathFunctions.getFunctionValue(f, index, i);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					dresult = dresult.add(BigDecimal.valueOf(fval));
				}
				if ( delta - (i - to) > 0.5 * delta) {
					fval = MathFunctions.getFunctionValue(f, index, to);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					dresult = dresult.add(BigDecimal.valueOf(fval));
				}
			} else if ( (to <= from) && (delta < 0) ) {
				for (i = from; i > to; i+=delta) {
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					fval = MathFunctions.getFunctionValue(f, index, i);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					dresult = dresult.add(BigDecimal.valueOf(fval));
				}
				if ( -delta - (to - i) > -0.5 * delta) {
					fval = MathFunctions.getFunctionValue(f, index, to);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					dresult = dresult.add(BigDecimal.valueOf(fval));
				}
			} else if (from == to) {
				fval = MathFunctions.getFunctionValue(f, index, from);
				if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
				dresult = dresult.add(BigDecimal.valueOf(fval));
			}
			return dresult.doubleValue();
		} else {
			double result = 0;
			if ( (to >= from) && (delta > 0) ) {
				for (i = from; i < to; i+=delta) {
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					fval = MathFunctions.getFunctionValue(f, index, i);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					result += fval;
				}
				if ( delta - (i - to) > 0.5 * delta) {
					fval = MathFunctions.getFunctionValue(f, index, to);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					result += fval;
				}
			} else if ( (to <= from) && (delta < 0) ) {
				for (i = from; i > to; i+=delta) {
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					fval = MathFunctions.getFunctionValue(f, index, i);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					result += fval;
				}
				if ( -delta - (to - i) > -0.5 * delta) {
					fval = MathFunctions.getFunctionValue(f, index, to);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					result += fval;
				}
			} else if (from == to) {
				fval = MathFunctions.getFunctionValue(f, index, from);
				if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
				result += fval;
			}
			return result;
		}
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
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		double fval;
		double i;
		if (mXparser.checkIfCanonicalRounding()) {
			BigDecimal dresult = BigDecimal.ONE;
			if ( (to >= from) && (delta > 0) ) {
				for (i = from; i < to; i+=delta) {
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					fval = MathFunctions.getFunctionValue(f, index, i);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					dresult = dresult.multiply(BigDecimal.valueOf(fval));
				}
				if ( delta - (i - to) > 0.5 * delta) {
					fval = MathFunctions.getFunctionValue(f, index, to);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					dresult = dresult.multiply(BigDecimal.valueOf(fval));
				}
			} else if ( (to <= from) && (delta < 0) ) {
				for (i = from; i > to; i+=delta) {
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					fval = MathFunctions.getFunctionValue(f, index, i);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					dresult = dresult.multiply(BigDecimal.valueOf(fval));
				}
				if ( -delta - (to - i) > -0.5 * delta) {
					fval = MathFunctions.getFunctionValue(f, index, to);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					dresult = dresult.multiply(BigDecimal.valueOf(fval));
				}
			} else if (from == to) {
				fval = MathFunctions.getFunctionValue(f, index, from);
				if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
				dresult = dresult.multiply(BigDecimal.valueOf(fval));
			}
			return dresult.doubleValue();
		} else {
			double result = 1;
			if ( (to >= from) && (delta > 0) ) {
				for (i = from; i < to; i+=delta) {
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					fval = MathFunctions.getFunctionValue(f, index, i);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					result *= fval;
				}
				if ( delta - (i - to) > 0.5 * delta) {
					fval = MathFunctions.getFunctionValue(f, index, to);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					result *= fval;
				}
			} else if ( (to <= from) && (delta < 0) ) {
				for (i = from; i > to; i+=delta) {
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					fval = MathFunctions.getFunctionValue(f, index, i);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					result *= fval;
				}
				if ( -delta - (to - i) > -0.5 * delta) {
					fval = MathFunctions.getFunctionValue(f, index, to);
					if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
					result *= fval;
				}
			} else if (from == to) {
				fval = MathFunctions.getFunctionValue(f, index, from);
				if (Double.isNaN(fval) || Double.isInfinite(fval)) return Double.NaN;
				result *= fval;
			}
			return result;
		}
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
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		double min = Double.POSITIVE_INFINITY;
		double v;
		if ( (to >= from) && (delta > 0) ) {
			for (double i = from; i < to; i+=delta) {
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
				v = MathFunctions.getFunctionValue(f, index, i);
				if (v < min) min = v;
			}
			v = MathFunctions.getFunctionValue(f, index, to);
			if (v < min) min = v;
		} else if ( (to <= from) && (delta < 0) ) {
			for (double i = from; i > to; i+=delta) {
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
				v = MathFunctions.getFunctionValue(f, index, i);
				if (v < min) min = v;
			}
			v = MathFunctions.getFunctionValue(f, index, to);
			if (v < min) min = v;
		} else if (from == to)
			min = MathFunctions.getFunctionValue(f, index, from);
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
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		double max = Double.NEGATIVE_INFINITY;
		double v;
		if ( (to >= from) && (delta > 0) ) {
			for (double i = from; i < to; i+=delta) {
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
				v = MathFunctions.getFunctionValue(f, index, i);
				if (v > max) max = v;
			}
			v = MathFunctions.getFunctionValue(f, index, to);
			if (v > max) max = v;
		} else if ( (to <= from) && (delta < 0) ) {
			for (double i = from; i > to; i+=delta) {
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
				v = MathFunctions.getFunctionValue(f, index, i);
				if (v > max) max = v;
			}
			v = MathFunctions.getFunctionValue(f, index, to);
			if (v > max) max = v;
		} else if (from == to)
			max = MathFunctions.getFunctionValue(f, index, from);
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
	private static String getRegExpForNumeralSystem(int numeralSystemBase) {
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
	public static int digitIndex(char digitChar) {
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
	public static char digitChar(int digitIndex) {
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
	public static int getNumeralSystemBase(String numberLiteral) {
		for (int b = 0; b <= 36; b++)
			if (StringUtils.regexMatch(numberLiteral, getRegExpForNumeralSystem(b)))
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
	public static double convOthBase2Decimal(String numberLiteral, int numeralSystemBase) {
		if (numberLiteral == null) return Double.NaN;
		numberLiteral = numberLiteral.trim();
		if (numberLiteral.isEmpty()) {
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
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
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
	public static double convOthBase2Decimal(String numberLiteral) {
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
	public static double convOthBase2Decimal(int numeralSystemBase, int... digits) {
		if (numeralSystemBase < 1) return Double.NaN;
		if (digits == null) return Double.NaN;
		int length = digits.length;
		if (length == 0) {
			if (numeralSystemBase == 1) return 0;
			else return Double.NaN;
		}
		double decValue = 0;
		for (int digit : digits) {
			if (numeralSystemBase > 1) {
				if (digit >= 0 && digit < numeralSystemBase) decValue = numeralSystemBase * decValue + digit;
				else return Double.NaN;
			} else {
				if (digit == 1) decValue = numeralSystemBase * decValue + digit;
				else return Double.NaN;
			}
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
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
	public static double convOthBase2Decimal(double numeralSystemBase, double... digits) {
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
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
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
	public static double convOthBase2Decimal(int[] baseAndDigits) {
		if (baseAndDigits == null) return Double.NaN;
		if (baseAndDigits.length == 0) return Double.NaN;
		int numeralSystemBase = baseAndDigits[0];
		int[] digits = new int[baseAndDigits.length-1];
		for (int i = 1; i < baseAndDigits.length; i++) {
			digits[i-1] = baseAndDigits[i];
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
		}
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
	public static double convOthBase2Decimal(double[] baseAndDigits) {
		if (baseAndDigits == null) return Double.NaN;
		if (baseAndDigits.length == 0) return Double.NaN;
		double numeralSystemBase = baseAndDigits[0];
		double[] digits = new double[baseAndDigits.length-1];
		for (int i = 1; i < baseAndDigits.length; i++) {
			digits[i-1] = baseAndDigits[i];
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
		}
		return convOthBase2Decimal(numeralSystemBase, digits);
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
				if (mXparser.isCurrentCalculationCancelled()) return "NaN";
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
	/**
	 * Number of digits needed to represent given number in base 10 numeral system.
	 * @param number   The number
	 * @return         Number of digits needed to represent given number in base 10 numeral system.
	 */
	public static int numberOfDigits(long number) {
		if (number < 0) number = -number;
		if (number < 10) return 1;
		if (number < 100) return 2;
		if (number < 1000) return 3;
		if (number < 10000) return 4;
		if (number < 100000) return 5;
		if (number < 1000000) return 6;
		if (number < 10000000) return 7;
		if (number < 100000000) return 8;
		if (number < 1000000000) return 9;
		else return 10;
	}
	/**
	 * Number of digits needed to represent given number in base 10 numeral system.
	 * @param number   The number
	 * @return         Number of digits needed to represent given number in base 10 numeral system.
	 *                 If number is NaN the NaN is returned. If number is infinite then
	 *                 Double.POSITIVE_INFINITY is returned.
	 */
	public static double numberOfDigits(double number) {
		if (Double.isNaN(number)) return Double.NaN;
		if (Double.isInfinite(number)) return Double.POSITIVE_INFINITY;

		double value;
		if (number >= 0) value = number;
		else value = -number;
		value = MathFunctions.floor(value);

		if (value < 1.0e5) {
			/* if (value < 1.0) return 0; */
			if (value < 1.0e1) return 1;
			if (value < 1.0e2) return 2;
			if (value < 1.0e3) return 3;
			if (value < 1.0e4) return 4;
			/* if (value < 1.0e5) */ return 5;
		}

		if (value < 1.0e10) {
			if (value < 1.0e6) return 6;
			if (value < 1.0e7) return 7;
			if (value < 1.0e8) return 8;
			if (value < 1.0e9) return 9;
			/* if (value < 1.0e10) */ return 10;
		}

		if (value < 1.0e20) {
			if (value < 1.0e11) return 11;
			if (value < 1.0e12) return 12;
			if (value < 1.0e13) return 13;
			if (value < 1.0e14) return 14;
			if (value < 1.0e15) return 15;
			if (value < 1.0e16) return 16;
			if (value < 1.0e17) return 17;
			if (value < 1.0e18) return 18;
			if (value < 1.0e19) return 19;
			/* if (value < 1.0e20) */ return 20;
		}

		if (value < 1.0e50) {
			if (value < 1.0e21) return 21;
			if (value < 1.0e22) return 22;
			if (value < 1.0e23) return 23;
			if (value < 1.0e24) return 24;
			if (value < 1.0e25) return 25;
			if (value < 1.0e26) return 26;
			if (value < 1.0e27) return 27;
			if (value < 1.0e28) return 28;
			if (value < 1.0e29) return 29;
			if (value < 1.0e30) return 30;
			if (value < 1.0e31) return 31;
			if (value < 1.0e32) return 32;
			if (value < 1.0e33) return 33;
			if (value < 1.0e34) return 34;
			if (value < 1.0e35) return 35;
			if (value < 1.0e36) return 36;
			if (value < 1.0e37) return 37;
			if (value < 1.0e38) return 38;
			if (value < 1.0e39) return 39;
			if (value < 1.0e40) return 40;
			if (value < 1.0e41) return 41;
			if (value < 1.0e42) return 42;
			if (value < 1.0e43) return 43;
			if (value < 1.0e44) return 44;
			if (value < 1.0e45) return 45;
			if (value < 1.0e46) return 46;
			if (value < 1.0e47) return 47;
			if (value < 1.0e48) return 48;
			if (value < 1.0e49) return 49;
			/* if (value < 1.0e50) */ return 50;
		}

		if (value < 1.0e100) {
			if (value < 1.0e51) return 51;
			if (value < 1.0e52) return 52;
			if (value < 1.0e53) return 53;
			if (value < 1.0e54) return 54;
			if (value < 1.0e55) return 55;
			if (value < 1.0e56) return 56;
			if (value < 1.0e57) return 57;
			if (value < 1.0e58) return 58;
			if (value < 1.0e59) return 59;
			if (value < 1.0e60) return 60;
			if (value < 1.0e61) return 61;
			if (value < 1.0e62) return 62;
			if (value < 1.0e63) return 63;
			if (value < 1.0e64) return 64;
			if (value < 1.0e65) return 65;
			if (value < 1.0e66) return 66;
			if (value < 1.0e67) return 67;
			if (value < 1.0e68) return 68;
			if (value < 1.0e69) return 69;
			if (value < 1.0e70) return 70;
			if (value < 1.0e71) return 71;
			if (value < 1.0e72) return 72;
			if (value < 1.0e73) return 73;
			if (value < 1.0e74) return 74;
			if (value < 1.0e75) return 75;
			if (value < 1.0e76) return 76;
			if (value < 1.0e77) return 77;
			if (value < 1.0e78) return 78;
			if (value < 1.0e79) return 79;
			if (value < 1.0e80) return 80;
			if (value < 1.0e81) return 81;
			if (value < 1.0e82) return 82;
			if (value < 1.0e83) return 83;
			if (value < 1.0e84) return 84;
			if (value < 1.0e85) return 85;
			if (value < 1.0e86) return 86;
			if (value < 1.0e87) return 87;
			if (value < 1.0e88) return 88;
			if (value < 1.0e89) return 89;
			if (value < 1.0e90) return 90;
			if (value < 1.0e91) return 91;
			if (value < 1.0e92) return 92;
			if (value < 1.0e93) return 93;
			if (value < 1.0e94) return 94;
			if (value < 1.0e95) return 95;
			if (value < 1.0e96) return 96;
			if (value < 1.0e97) return 97;
			if (value < 1.0e98) return 98;
			if (value < 1.0e99) return 99;
			/* if (value < 1.0e100) */ return 100;
		}

		if (value < 1.0e200) {
			if (value < 1.0e101) return 101;
			if (value < 1.0e102) return 102;
			if (value < 1.0e103) return 103;
			if (value < 1.0e104) return 104;
			if (value < 1.0e105) return 105;
			if (value < 1.0e106) return 106;
			if (value < 1.0e107) return 107;
			if (value < 1.0e108) return 108;
			if (value < 1.0e109) return 109;
			if (value < 1.0e110) return 110;
			if (value < 1.0e111) return 111;
			if (value < 1.0e112) return 112;
			if (value < 1.0e113) return 113;
			if (value < 1.0e114) return 114;
			if (value < 1.0e115) return 115;
			if (value < 1.0e116) return 116;
			if (value < 1.0e117) return 117;
			if (value < 1.0e118) return 118;
			if (value < 1.0e119) return 119;
			if (value < 1.0e120) return 120;
			if (value < 1.0e121) return 121;
			if (value < 1.0e122) return 122;
			if (value < 1.0e123) return 123;
			if (value < 1.0e124) return 124;
			if (value < 1.0e125) return 125;
			if (value < 1.0e126) return 126;
			if (value < 1.0e127) return 127;
			if (value < 1.0e128) return 128;
			if (value < 1.0e129) return 129;
			if (value < 1.0e130) return 130;
			if (value < 1.0e131) return 131;
			if (value < 1.0e132) return 132;
			if (value < 1.0e133) return 133;
			if (value < 1.0e134) return 134;
			if (value < 1.0e135) return 135;
			if (value < 1.0e136) return 136;
			if (value < 1.0e137) return 137;
			if (value < 1.0e138) return 138;
			if (value < 1.0e139) return 139;
			if (value < 1.0e140) return 140;
			if (value < 1.0e141) return 141;
			if (value < 1.0e142) return 142;
			if (value < 1.0e143) return 143;
			if (value < 1.0e144) return 144;
			if (value < 1.0e145) return 145;
			if (value < 1.0e146) return 146;
			if (value < 1.0e147) return 147;
			if (value < 1.0e148) return 148;
			if (value < 1.0e149) return 149;
			if (value < 1.0e150) return 150;
			if (value < 1.0e151) return 151;
			if (value < 1.0e152) return 152;
			if (value < 1.0e153) return 153;
			if (value < 1.0e154) return 154;
			if (value < 1.0e155) return 155;
			if (value < 1.0e156) return 156;
			if (value < 1.0e157) return 157;
			if (value < 1.0e158) return 158;
			if (value < 1.0e159) return 159;
			if (value < 1.0e160) return 160;
			if (value < 1.0e161) return 161;
			if (value < 1.0e162) return 162;
			if (value < 1.0e163) return 163;
			if (value < 1.0e164) return 164;
			if (value < 1.0e165) return 165;
			if (value < 1.0e166) return 166;
			if (value < 1.0e167) return 167;
			if (value < 1.0e168) return 168;
			if (value < 1.0e169) return 169;
			if (value < 1.0e170) return 170;
			if (value < 1.0e171) return 171;
			if (value < 1.0e172) return 172;
			if (value < 1.0e173) return 173;
			if (value < 1.0e174) return 174;
			if (value < 1.0e175) return 175;
			if (value < 1.0e176) return 176;
			if (value < 1.0e177) return 177;
			if (value < 1.0e178) return 178;
			if (value < 1.0e179) return 179;
			if (value < 1.0e180) return 180;
			if (value < 1.0e181) return 181;
			if (value < 1.0e182) return 182;
			if (value < 1.0e183) return 183;
			if (value < 1.0e184) return 184;
			if (value < 1.0e185) return 185;
			if (value < 1.0e186) return 186;
			if (value < 1.0e187) return 187;
			if (value < 1.0e188) return 188;
			if (value < 1.0e189) return 189;
			if (value < 1.0e190) return 190;
			if (value < 1.0e191) return 191;
			if (value < 1.0e192) return 192;
			if (value < 1.0e193) return 193;
			if (value < 1.0e194) return 194;
			if (value < 1.0e195) return 195;
			if (value < 1.0e196) return 196;
			if (value < 1.0e197) return 197;
			if (value < 1.0e198) return 198;
			if (value < 1.0e199) return 199;
			/* if (value < 1.0e200) */ return 200;
		}

		if (value < 1.0e201) return 201;
		if (value < 1.0e202) return 202;
		if (value < 1.0e203) return 203;
		if (value < 1.0e204) return 204;
		if (value < 1.0e205) return 205;
		if (value < 1.0e206) return 206;
		if (value < 1.0e207) return 207;
		if (value < 1.0e208) return 208;
		if (value < 1.0e209) return 209;
		if (value < 1.0e210) return 210;
		if (value < 1.0e211) return 211;
		if (value < 1.0e212) return 212;
		if (value < 1.0e213) return 213;
		if (value < 1.0e214) return 214;
		if (value < 1.0e215) return 215;
		if (value < 1.0e216) return 216;
		if (value < 1.0e217) return 217;
		if (value < 1.0e218) return 218;
		if (value < 1.0e219) return 219;
		if (value < 1.0e220) return 220;
		if (value < 1.0e221) return 221;
		if (value < 1.0e222) return 222;
		if (value < 1.0e223) return 223;
		if (value < 1.0e224) return 224;
		if (value < 1.0e225) return 225;
		if (value < 1.0e226) return 226;
		if (value < 1.0e227) return 227;
		if (value < 1.0e228) return 228;
		if (value < 1.0e229) return 229;
		if (value < 1.0e230) return 230;
		if (value < 1.0e231) return 231;
		if (value < 1.0e232) return 232;
		if (value < 1.0e233) return 233;
		if (value < 1.0e234) return 234;
		if (value < 1.0e235) return 235;
		if (value < 1.0e236) return 236;
		if (value < 1.0e237) return 237;
		if (value < 1.0e238) return 238;
		if (value < 1.0e239) return 239;
		if (value < 1.0e240) return 240;
		if (value < 1.0e241) return 241;
		if (value < 1.0e242) return 242;
		if (value < 1.0e243) return 243;
		if (value < 1.0e244) return 244;
		if (value < 1.0e245) return 245;
		if (value < 1.0e246) return 246;
		if (value < 1.0e247) return 247;
		if (value < 1.0e248) return 248;
		if (value < 1.0e249) return 249;
		if (value < 1.0e250) return 250;
		if (value < 1.0e251) return 251;
		if (value < 1.0e252) return 252;
		if (value < 1.0e253) return 253;
		if (value < 1.0e254) return 254;
		if (value < 1.0e255) return 255;
		if (value < 1.0e256) return 256;
		if (value < 1.0e257) return 257;
		if (value < 1.0e258) return 258;
		if (value < 1.0e259) return 259;
		if (value < 1.0e260) return 260;
		if (value < 1.0e261) return 261;
		if (value < 1.0e262) return 262;
		if (value < 1.0e263) return 263;
		if (value < 1.0e264) return 264;
		if (value < 1.0e265) return 265;
		if (value < 1.0e266) return 266;
		if (value < 1.0e267) return 267;
		if (value < 1.0e268) return 268;
		if (value < 1.0e269) return 269;
		if (value < 1.0e270) return 270;
		if (value < 1.0e271) return 271;
		if (value < 1.0e272) return 272;
		if (value < 1.0e273) return 273;
		if (value < 1.0e274) return 274;
		if (value < 1.0e275) return 275;
		if (value < 1.0e276) return 276;
		if (value < 1.0e277) return 277;
		if (value < 1.0e278) return 278;
		if (value < 1.0e279) return 279;
		if (value < 1.0e280) return 280;
		if (value < 1.0e281) return 281;
		if (value < 1.0e282) return 282;
		if (value < 1.0e283) return 283;
		if (value < 1.0e284) return 284;
		if (value < 1.0e285) return 285;
		if (value < 1.0e286) return 286;
		if (value < 1.0e287) return 287;
		if (value < 1.0e288) return 288;
		if (value < 1.0e289) return 289;
		if (value < 1.0e290) return 290;
		if (value < 1.0e291) return 291;
		if (value < 1.0e292) return 292;
		if (value < 1.0e293) return 293;
		if (value < 1.0e294) return 294;
		if (value < 1.0e295) return 295;
		if (value < 1.0e296) return 296;
		if (value < 1.0e297) return 297;
		if (value < 1.0e298) return 298;
		if (value < 1.0e299) return 299;
		if (value < 1.0e300) return 300;
		if (value < 1.0e301) return 301;
		if (value < 1.0e302) return 302;
		if (value < 1.0e303) return 303;
		if (value < 1.0e304) return 304;
		if (value < 1.0e305) return 305;
		if (value < 1.0e306) return 306;
		if (value < 1.0e307) return 307;
		if (value < 1.0e308) return 308;
		return 309;
	}
	/**
	 * Number of digits needed to represent given number in numeral system with given base.
	 * @param number              The number
	 * @param numeralSystemBase   Numeral system base above 0
	 * @return                    Returns number of digits. In case when numeralSystemBase is lower than
	 *                            1 then -1 is returned.
	 */
	public static long numberOfDigits(long number, long numeralSystemBase) {
		if (numeralSystemBase < 1) return -1;
		if (number < 0) number = -number;
		if (numeralSystemBase == 10) return numberOfDigits(number);
		if (numeralSystemBase == 1) return (int)number;
		if (number < numeralSystemBase) return 1;
		long quotient = number;
		long digitsNum = 0;
		while (quotient >= 1) {
			if (mXparser.isCurrentCalculationCancelled()) return (long)Double.NaN;
			quotient = quotient / numeralSystemBase;
			digitsNum++;
		}
		return digitsNum;
	}
	/**
	 * Number of digits needed to represent given number (its integer part) in numeral system with given base.
	 * @param number              The number
	 * @param numeralSystemBase   Numeral system base above 0
	 * @return                    Returns number of digits. In case when numeralSystemBase is lower than
	 *                            1 then Double.NaN is returned. If number or numeralSystemBase is Double.NaN
	 *                            then Double.NaN is returned. If numeralSystemBase is infinite then Double.NaN
	 *                            is returned.
	 */
	public static double numberOfDigits(double number, double numeralSystemBase) {
		if (Double.isNaN(number)) return Double.NaN;
		if (Double.isNaN(numeralSystemBase)) return Double.NaN;
		if (Double.isInfinite(numeralSystemBase)) return Double.NaN;
		if (numeralSystemBase < 1.0) return Double.NaN;
		if (Double.isInfinite(number)) return Double.POSITIVE_INFINITY;
		if (number < 0.0) number = -number;
		number = MathFunctions.floor(number);
		numeralSystemBase = MathFunctions.floor(numeralSystemBase);
		if (numeralSystemBase == 10.0) return numberOfDigits(number);
		if (numeralSystemBase == 1.0) return (int)number;
		if (number < numeralSystemBase) return 1;
		double quotient = number;
		double digitsNum = 0;
		while (quotient >= 1.0) {
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			quotient = MathFunctions.floor(quotient / numeralSystemBase);
			digitsNum++;
		}
		return digitsNum;
	}
	/**
	 * Digit at position - numeral system with given base
	 *
	 * @param number              The number
	 * @param position            Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
	 * @param numeralSystemBase   Base of numeral system - above 0
	 * @return                    Return digit at given position. If digit finding was not possible then -1 is returned.
	 */
	public static int digitAtPosition(long number, int position, int numeralSystemBase) {
		if (numeralSystemBase < 1) return -1;
		if (number < 0) number = -number;
		int digitsNum = (int)numberOfDigits(number, numeralSystemBase);
		if (position <= -digitsNum) {
			if (numeralSystemBase > 1) return 0;
			else return -1;
		}
		if (position > digitsNum) return -1;
		if (numeralSystemBase == 1) return 1;
		int[] digits = new int[digitsNum];
		long quotient = number;
		int digit;
		int digitIndex = digitsNum;
		while (quotient >= 1) {
			if (mXparser.isCurrentCalculationCancelled()) return (int)Double.NaN;
			digit = (int)quotient % numeralSystemBase;
			quotient = quotient / numeralSystemBase;
			digitIndex--;
			digits[digitIndex] = digit;
		}
		if (position >= 1) return digits[position-1];
		else return digits[digitsNum+position-1];
	}
	/**
	 * Digit at position - numeral system with base 10
	 *
	 * @param number              The number
	 * @param position            Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
	 * @return                    Return digit at given position. If digit finding was not possible then -1 is returned.
	 */
	public static int digitAtPosition(long number, int position) {
		return digitAtPosition(number, position, 10);
	}
	/**
	 * Digit at position - numeral system with given base
	 *
	 * @param number              The number
	 * @param position            Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
	 * @param numeralSystemBase   Base of numeral system - above 0
	 * @return                    Return digit at given position. If digit finding was not possible then Double.NaN is returned.
	 */
	public static double digitAtPosition(double number, double position, double numeralSystemBase) {
		if (Double.isNaN(number)) return Double.NaN;
		if (Double.isNaN(position)) return Double.NaN;
		if (Double.isNaN(numeralSystemBase)) return Double.NaN;
		if (Double.isInfinite(number)) return Double.NaN;
		if (Double.isInfinite(position)) return Double.NaN;
		if (Double.isInfinite(numeralSystemBase)) return Double.NaN;
		if (numeralSystemBase < 1.0) return Double.NaN;
		if (number < 0) number = -number;
		number = MathFunctions.floor(number);
		numeralSystemBase = MathFunctions.floor(numeralSystemBase);
		int digitsNum = (int)numberOfDigits(number, numeralSystemBase);
		if (position <= -digitsNum) {
			if (numeralSystemBase > 1.0) return 0;
			else return Double.NaN;
		}
		if (position > digitsNum) return Double.NaN;
		if (numeralSystemBase == 1.0) return 1.0;
		double[] digits = new double[digitsNum];
		double quotient = number;
		double digit;
		int digitIndex = digitsNum;
		while (quotient >= 1.0) {
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			digit = MathFunctions.floor(quotient % numeralSystemBase);
			quotient = MathFunctions.floor(quotient / numeralSystemBase);
			digitIndex--;
			digits[digitIndex] = digit;
		}
		if (position >= 1) return digits[(int)(position-1)];
		else return digits[(int)(digitsNum+position-1)];
	}
	/**
	 * Digit at position - numeral system with base 10
	 *
	 * @param number              The number
	 * @param position            Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
	 * @return                    Return digit at given position. If digit finding was not possible then Double.NaN is returned.
	 */
	public static double digitAtPosition(double number, double position) {
		return digitAtPosition(number, position, 10.0);
	}
	/**
	 * Prime decomposition (prime factorization)
	 *
	 * @param number     Number to be decomposed
	 * @return           List of prime factors (non-distinct)
	 */
	public static long[] primeFactors(long number) {
		long[] longZeroArray = new long[0];
		long[] factors;
		if (number == 0) return longZeroArray;
		if (number < 0) number = -number;
		if (number == 1) {
			factors = new long[1];
			factors[0] = 1;
			return factors;
		}
		if (mXparser.primesCache != null)
			if (mXparser.primesCache.getCacheStatus() == PrimesCache.CACHING_FINISHED)
				if (number <= Integer.MAX_VALUE)
					if ( mXparser.primesCache.primeTest((int)number) == PrimesCache.IS_PRIME ) {
						factors = new long[1];
						factors[0] = number;
						return factors;
					}
		long n = number;
		List<Long> factorsList = new ArrayList<>();
		for (long i = 2; i <= n / i; i++) {
			while (n % i == 0) {
				factorsList.add(i);
				n /= i;
				if (mXparser.isCurrentCalculationCancelled()) return longZeroArray;
			}
		}
		if (n > 1) factorsList.add(n);
		int nfact = factorsList.size();
		factors = new long[nfact];
		for (int i = 0; i < nfact; i++) {
			factors[i] = factorsList.get(i);
			if (mXparser.isCurrentCalculationCancelled()) return longZeroArray;
		}
        return factors;
	}
	/**
	 * Prime decomposition (prime factorization)
	 *
	 * @param number     Number to be decomposed
	 * @return           List of prime factors (non-distinct)
	 */
	public static double[] primeFactors(double number) {
		double[] doubleZeroArray = new double[0];
		double[] factors;
		if (Double.isNaN(number)) return doubleZeroArray;
		if (Double.isInfinite(number)) return doubleZeroArray;
		number = MathFunctions.floor( MathFunctions.abs(number) );
		if (number == 0.0) return doubleZeroArray;
		if (number == 1.0) {
			factors = new double[1];
			factors[0] = 1.0;
			return factors;
		}
		if (mXparser.primesCache != null)
			if (mXparser.primesCache.getCacheStatus() == PrimesCache.CACHING_FINISHED)
				if (number <= Integer.MAX_VALUE)
					if ( mXparser.primesCache.primeTest((int)number) == PrimesCache.IS_PRIME ) {
						factors = new double[1];
						factors[0] = number;
						return factors;
					}
		double n = number;
		List<Double> factorsList = new ArrayList<>();
		for (double i = 2.0; i <= MathFunctions.floor(n / i); MathFunctions.floor(i++)) {
			while (n % i == 0) {
				factorsList.add(i);
				n = MathFunctions.floor(n / i);
				if (mXparser.isCurrentCalculationCancelled()) return doubleZeroArray;
			}
		}
		if (n > 1.0) factorsList.add(n);
		int nfact = factorsList.size();
		factors = new double[nfact];
		for (int i = 0; i < nfact; i++) {
			factors[i] = factorsList.get(i);
			if (mXparser.isCurrentCalculationCancelled()) return doubleZeroArray;
		}
        return factors;
	}
	/**
	 * Prime decomposition (prime factorization) - returns number of distinct prime factors
	 *
	 * @param number     Number to be decomposed
	 * @return           Number of distinct prime factors
	 */
	public static double numberOfPrimeFactors(double number) {
		if (Double.isNaN(number)) return Double.NaN;
		double[] factors = primeFactors(number);
		if (factors.length <= 1) return factors.length;
		double[][] factorsDist = NumberTheory.getDistValues(factors, false);
		return factorsDist.length;
	}
	/**
	 * Prime decomposition (prime factorization) - returns prime factor value
	 *
	 * @param number     Number to be decomposed
	 * @param id         Factor id
	 * @return           Factor value if factor id between 1 and numberOfPrimeFactors, otherwise 1 is returned.
	 *                   For NaN of infinite parameters Double NaN is returned. For number eq 0 Double.NaN
	 *                   is returned.
	 */
	public static double primeFactorValue(double number, double id) {
		if (Double.isNaN(number)) return Double.NaN;
		if (Double.isNaN(id)) return Double.NaN;
		if (Double.isInfinite(number)) return Double.NaN;
		if (Double.isInfinite(id)) return Double.NaN;
		number = MathFunctions.floor( MathFunctions.abs(number) );
		if (number == 0.0) return Double.NaN;
		if (id < 1) return 1;
		id = MathFunctions.floor(id);
		if (id > Integer.MAX_VALUE) return 1;
		double[] factors = primeFactors(number);
		double[][] factorsDist = NumberTheory.getDistValues(factors, false);
		int nfact = factorsDist.length;
		if (id > nfact) return 1;
		return factorsDist[(int)(id-1)][0];
	}
	/**
	 * Prime decomposition (prime factorization) - returns prime factor exponent
	 *
	 * @param number     Number to be decomposed
	 * @param id         Factor id
	 * @return           Factor exponent if factor id between 1 and numberOfPrimeFactors, otherwise 0 is returned.
	 *                   For NaN of infinite parameters Double NaN is returned. For number eq 0 Double.NaN
	 *                   is returned.
	 */
	public static double primeFactorExponent(double number, double id) {
		if (Double.isNaN(number)) return Double.NaN;
		if (Double.isNaN(id)) return Double.NaN;
		if (Double.isInfinite(number)) return Double.NaN;
		if (Double.isInfinite(id)) return Double.NaN;
		number = MathFunctions.floor( MathFunctions.abs(number) );
		if (number == 0.0) return Double.NaN;
		if (id < 1) return 0;
		id = MathFunctions.floor(id);
		if (id > Integer.MAX_VALUE) return 0;
		double[] factors = primeFactors(number);
		double[][] factorsDist = NumberTheory.getDistValues(factors, false);
		int nfact = factorsDist.length;
		if (id > nfact) return 0;
		return factorsDist[(int)(id-1)][1];
	}
	/**
	 * Creates array representing fraction (sign, numerator and denominator).
	 *
	 * @param sign        Sign of the number represented by fraction
	 * @param numerator   Numerator from the fraction
	 * @param denominator Denominator from the fraction
	 *
	 * @return Returns array containing sign, numerator and denominator.
	 * Sign at index 0, numerator at index 1, denominator at index 2.
	 */
	private static double[] fractionToDoubleArray(double sign, double numerator, double denominator) {
		double[] fraction = new double[3];
		fraction[0] = sign;
		fraction[1] = numerator;
		fraction[2] = denominator;
		return fraction;
	}
	/**
	 * Creates array representing mixed fraction (sign, whole number, numerator and denominator).
	 *
	 * @param sign        Sign of the number represented by fraction
	 * @param whole       Whole number
	 * @param numerator   Numerator from the fraction
	 * @param denominator Denominator from the fraction
	 *
	 * @return Returns array containing whole number, numerator and denominator.
	 * Sign at index 0, whole number at index 1, numerator at index 2, denominator at index 3.
	 */
	private static double[] mixedFractionToDoubleArray(double sign, double whole, double numerator, double denominator) {
		double[] mixedFraction = new double[4];
		mixedFraction[0] = sign;
		mixedFraction[1] = whole;
		mixedFraction[2] = numerator;
		mixedFraction[3] = denominator;
		return mixedFraction;
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
		if (Double.isNaN(value)) return fractionToDoubleArray(Double.NaN, Double.NaN, Double.NaN);
		if (Double.isInfinite(value)) return fractionToDoubleArray(Double.NaN, Double.NaN, Double.NaN);
		if (value == 0) return fractionToDoubleArray(0, 0, 1);
		double sign = 1;
		if (value < 0) {
			value = -value;
			sign = -1;
		}
		double valueRound0 = MathFunctions.roundHalfUp(value, 0);
		double valueInt = Math.floor(value);
		double valueIntNumOfDigits = NumberTheory.numberOfDigits(valueInt);
 		double multiplier = 1;
 		for (int place = 1; place < valueIntNumOfDigits-1; place++)
 			multiplier = Math.floor(multiplier * 10);
		final double ERROR = BinaryRelations.DEFAULT_COMPARISON_EPSILON * multiplier;
		/*
		 * If already integer
		 */
		if (value >= 1) {
			if (Math.abs(value - valueRound0) <= ERROR)
				return fractionToDoubleArray(sign, valueInt, 1);
		}
		int ulpPosition = MathFunctions.ulpDecimalDigitsBefore(value);
		/*
		 * If ulp position shows no place for decimals
		 */
		if (ulpPosition <= 0 ) return
				fractionToDoubleArray(sign, valueInt, 1);
		/*
		 * Initial search
		 */
		double numerator;
 		double denominator;
 		double gcd;
		double valueDecimal = value - valueInt;
		double fracDecimal;
		double n = 0;
		double quotient;
		double quotientRound0;
		while (n <= TO_FRACTION_INIT_SEARCH_SIZE) {
			if (mXparser.isCurrentCalculationCancelled()) break;
			n++;
			quotient = n / valueDecimal;
			quotientRound0 = MathFunctions.roundHalfUp(quotient, 0);
			fracDecimal = n / quotientRound0;
			if ( ( Math.abs(quotient - quotientRound0) <= ERROR) || ( Math.abs(fracDecimal - valueDecimal) <= ERROR) ) {
				numerator = n;
				denominator = quotientRound0;
				gcd = NumberTheory.gcd(numerator, denominator);
				numerator = Math.floor(numerator / gcd);
				denominator = Math.floor(denominator / gcd);
				return fractionToDoubleArray(sign, Math.floor(valueInt * denominator + numerator), denominator);
			}
		}
		/*
		 * Second step based o GCD if initial search was not successful
		 */
 		double valueRound = MathFunctions.roundHalfUp(value, ulpPosition);
 		multiplier = 1;
 		for (int place = 1; place < ulpPosition; place++)
 			multiplier = Math.floor(multiplier * 10);
 		double initNumerator = Math.floor(valueRound * multiplier);
 		double initDenominator = multiplier;
 		gcd = NumberTheory.gcd(initNumerator, initDenominator);
 		numerator = Math.floor(initNumerator / gcd);
 		denominator = Math.floor(initDenominator / gcd);
 		double finalQuotient;
 		double a, b;
 		if (denominator > numerator) {
 			a = denominator;
 			b = numerator;
 		} else {
 			a = numerator;
 			b = denominator;
 		}
 		finalQuotient = a / b;
 		int finalQuotientUlpPos = MathFunctions.ulpDecimalDigitsBefore(finalQuotient);
 		if (finalQuotientUlpPos > 0)
 			finalQuotient = MathFunctions.roundHalfUp(finalQuotient, finalQuotientUlpPos-1);
 		double finalQuotientFloor = Math.floor(finalQuotient);
 		if (Math.abs(finalQuotient - finalQuotientFloor) <= ERROR) {
 			numerator = Math.floor(numerator / b);
 			denominator = Math.floor(denominator / b);
 		}
		return fractionToDoubleArray(sign, numerator, denominator);
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
		double[] fraction = toFraction(value);
		double sign = fraction[0];
		double numerator = fraction[1];
		double denominator = fraction[2];
		if (Double.isNaN(numerator))
			return mixedFractionToDoubleArray(Double.NaN, Double.NaN, Double.NaN, Double.NaN);
		if (Double.isNaN(denominator))
			return mixedFractionToDoubleArray(Double.NaN, Double.NaN, Double.NaN, Double.NaN);
		if (numerator < denominator)
			return mixedFractionToDoubleArray(sign, 0, numerator, denominator);
		double whole = Math.floor(numerator / denominator);
		numerator = Math.floor(numerator - whole * denominator);
		return mixedFractionToDoubleArray(sign, whole, numerator, denominator);
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
		boolean mixedFraction = false;
		if ( (fraction.length !=3) && (fraction.length !=4) )
			return ConstantValue.NAN_STR;
		final int signIdx = 0;
		final int wholeIdx = 1;
		final int numeratorIdx;
		final int denominatorIdx;
		if (fraction.length == 4) {
			mixedFraction = true;
			numeratorIdx = 2;
			denominatorIdx = 3;
		} else {
			numeratorIdx = 1;
			denominatorIdx = 2;
		}
		if (Double.isNaN(fraction[0])) return ConstantValue.NAN_STR;
		if (Double.isNaN(fraction[1])) return ConstantValue.NAN_STR;
		if (Double.isNaN(fraction[2])) return ConstantValue.NAN_STR;
		if (mixedFraction)
			if (Double.isNaN(fraction[3])) return ConstantValue.NAN_STR;
		double sign = fraction[signIdx];
		double numerator = fraction[numeratorIdx];
		double denominator = fraction[denominatorIdx];
		String numeratorStr = String.format("%.0f", numerator);
		String denominatorStr = String.format("%.0f", denominator);
		if (!mixedFraction) {
			if (numerator == 0) return "0";
			if (denominator == 1) {
				if (sign >= 0)
					return numeratorStr;
				else
					return "-" + numeratorStr;
			} else {
				if (sign >= 0)
					return numeratorStr + "/" + denominatorStr;
				else
					return "-" + numeratorStr + "/" + denominatorStr;
			}
		} else {
			double whole = fraction[wholeIdx];
			String wholeStr = String.format("%.0f", whole);
			if (numerator == 0) {
				if (whole == 0)
					return "0";
				else {
					if (sign >= 0)
						return wholeStr;
					else
						return "-" + wholeStr;
				}
			} else {
				if (whole == 0) {
					if (sign >= 0)
						return numeratorStr + "/" + denominatorStr;
					else
						return "-" + numeratorStr + "/" + denominatorStr;
				} else {
					if (sign >= 0)
						return wholeStr + "+" + numeratorStr + "/" + denominatorStr;
					else
						return "-" + wholeStr + "-" + numeratorStr + "/" + denominatorStr;
				}
			}
		}
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
		return fractionToString( toFraction(value) );
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
		return fractionToString( toMixedFraction(value) );
	}
}