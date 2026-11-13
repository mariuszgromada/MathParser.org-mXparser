/*
 * @(#)Statistics.java        6.2.0    2026-11-13
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

import org.mariuszgromada.math.mxparser.Argument;
import org.mariuszgromada.math.mxparser.Expression;
import org.mariuszgromada.math.mxparser.mXparser;

/**
 * Statistics - i.e.: mean, variance, standard deviation, etc.
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
 * @version        6.2.0
 */
public final class Statistics {
	/**
	 * Average from sample function values - iterative operator.
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
	public static double avg(Expression f, Argument index, double from, double to, double delta) {
		return avgWithCancel(f, index, from, to, delta, 0);
	}

	/**
	 * Average from sample function values - iterative operator.
	 *
	 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
	 * cancellation; positive IDs combine the global signal with the domain signal.
	 * This method does not clear either signal. Cached values and fast returns
	 * may complete normally despite a pending signal. Separate IDs do not make
	 * a shared mutable expression graph safe for concurrent calculations.
	 * At this method's existing cancellation checks it returns Double.NaN.
	 * <p>There is no uniform cancellation result across the WithCancel family.
	 * The existing returns of this method remain in effect; a caller using a
	 * sentinel may throw an exception. Querying the signal does not establish
	 * whether this particular call observed cancellation.
	 * @param      f                   the expression
	 * @param      index               the name of index argument
	 * @param      from                FROM index = form
	 * @param      to                  TO index = to
	 * @param      delta               BY delta
	 *
	 * @return the arithmetic mean of the sampled values, or Double.NaN for an invalid or empty sample or observed cancellation
	 * @see        Expression
	 * @see        Argument
	 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
	 * @throws IllegalArgumentException if cancelId is outside the supported range
	 * @since 6.2.0
	 * @see avg(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
	 * @see mXparser#cancelCalculation(int)
	 * @see mXparser#resetCalculationCancellation(int)
	 * @see mXparser#acquireCancellationTokenId()
	 * @see mXparser#reserveCancellationTokenId(int)
	 * @see mXparser#releaseCancellationTokenId(int)
	 */
	public static double avgWithCancel(Expression f, Argument index, double from, double to, double delta, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
			throw new IllegalArgumentException("cancelId out of range");
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		double sum = 0;
		int n = 0;
		if ( (to >= from) && (delta > 0) ) {
			double i;
			for (i = from; i < to; i+=delta) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				sum += MathFunctions.getFunctionValueWithCancel(f, index, i, cancelId);
				n++;
			}
			if ( delta - (i - to) > 0.5 * delta) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				sum += MathFunctions.getFunctionValueWithCancel(f, index, to, cancelId);
				n++;
			}
		} else if ( (to <= from) && (delta < 0) ) {
			double i;
			for (i = from; i > to; i+=delta) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				sum += MathFunctions.getFunctionValueWithCancel(f, index, i, cancelId);
				n++;
			}
			if ( -delta - (to - i) > -0.5 * delta) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				sum += MathFunctions.getFunctionValueWithCancel(f, index, to, cancelId);
				n++;
			}
		} else if (from == to)
			return MathFunctions.getFunctionValueWithCancel(f, index, from, cancelId);
		return sum / n;
	}
	/**
	 * Bias-corrected variance from sample function values - iterative operator.
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
	public static double var(Expression f, Argument index, double from, double to, double delta) {
		return varWithCancel(f, index, from, to, delta, 0);
	}

	/**
	 * Bias-corrected variance from sample function values - iterative operator.
	 *
	 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
	 * cancellation; positive IDs combine the global signal with the domain signal.
	 * This method does not clear either signal. Cached values and fast returns
	 * may complete normally despite a pending signal. Separate IDs do not make
	 * a shared mutable expression graph safe for concurrent calculations.
	 * <p>There is no uniform cancellation result across the WithCancel family.
	 * The existing returns of this method remain in effect; a caller using a
	 * sentinel may throw an exception. Querying the signal does not establish
	 * whether this particular call observed cancellation.
	 * @param      f                   the expression
	 * @param      index               the name of index argument
	 * @param      from                FROM index = form
	 * @param      to                  TO index = to
	 * @param      delta               BY delta
	 *
	 * @return the sample variance of the sampled values using the existing sample-size convention, or Double.NaN on an invalid sample or observed cancellation
	 * @see        Expression
	 * @see        Argument
	 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
	 * @throws IllegalArgumentException if cancelId is outside the supported range
	 * @since 6.2.0
	 * @see var(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
	 * @see mXparser#cancelCalculation(int)
	 * @see mXparser#resetCalculationCancellation(int)
	 * @see mXparser#acquireCancellationTokenId()
	 * @see mXparser#reserveCancellationTokenId(int)
	 * @see mXparser#releaseCancellationTokenId(int)
	 */
	public static double varWithCancel(Expression f, Argument index, double from, double to, double delta, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
			throw new IllegalArgumentException("cancelId out of range");
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		return varWithCancel( MathFunctions.getFunctionValuesWithCancel(f, index, from, to, delta, cancelId) , cancelId);
	}
	/**
	 * Bias-corrected standard deviation from sample function values - iterative operator.
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
	public static double std(Expression f, Argument index, double from, double to, double delta) {
		return stdWithCancel(f, index, from, to, delta, 0);
	}

	/**
	 * Bias-corrected standard deviation from sample function values - iterative operator.
	 *
	 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
	 * cancellation; positive IDs combine the global signal with the domain signal.
	 * This method does not clear either signal. Cached values and fast returns
	 * may complete normally despite a pending signal. Separate IDs do not make
	 * a shared mutable expression graph safe for concurrent calculations.
	 * <p>There is no uniform cancellation result across the WithCancel family.
	 * The existing returns of this method remain in effect; a caller using a
	 * sentinel may throw an exception. Querying the signal does not establish
	 * whether this particular call observed cancellation.
	 * @param      f                   the expression
	 * @param      index               the name of index argument
	 * @param      from                FROM index = form
	 * @param      to                  TO index = to
	 * @param      delta               BY delta
	 *
	 * @return the square root of the sample variance, or Double.NaN on an invalid sample or observed cancellation
	 * @see        Expression
	 * @see        Argument
	 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
	 * @throws IllegalArgumentException if cancelId is outside the supported range
	 * @since 6.2.0
	 * @see std(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
	 * @see mXparser#cancelCalculation(int)
	 * @see mXparser#resetCalculationCancellation(int)
	 * @see mXparser#acquireCancellationTokenId()
	 * @see mXparser#reserveCancellationTokenId(int)
	 * @see mXparser#releaseCancellationTokenId(int)
	 */
	public static double stdWithCancel(Expression f, Argument index, double from, double to, double delta, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
			throw new IllegalArgumentException("cancelId out of range");
		if ( (Double.isNaN(delta) ) || (Double.isNaN(from) ) || (Double.isNaN(to) ) || (delta == 0) )
			return Double.NaN;
		return stdWithCancel( MathFunctions.getFunctionValuesWithCancel(f, index, from, to, delta, cancelId) , cancelId);
	}
	/**
	 * Sample average.
	 *
	 * @param      numbers             the numbers
	 *
	 * @return     if each number from numbers &lt;&gt; Double.NaN returns
	 *             avg(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static double avg(double... numbers) {
		return avgWithCancel(numbers, 0);
	}

	/**
	 * Sample average.
	 *
	 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
	 * cancellation; positive IDs combine the global signal with the domain signal.
	 * This method does not clear either signal. Cached values and fast returns
	 * may complete normally despite a pending signal. Separate IDs do not make
	 * a shared mutable expression graph safe for concurrent calculations.
	 * Array parameters are fixed arrays, not token-bearing varargs.
	 * At this method's existing cancellation checks it returns Double.NaN.
	 * <p>There is no uniform cancellation result across the WithCancel family.
	 * The existing returns of this method remain in effect; a caller using a
	 * sentinel may throw an exception. Querying the signal does not establish
	 * whether this particular call observed cancellation.
	 * @param      numbers             the numbers
	 *
	 * @return     if each number from numbers &lt;&gt; Double.NaN returns
	 *             avg(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
	 * @throws IllegalArgumentException if cancelId is outside the supported range
	 * @since 6.2.0
	 * @see avg(double[])
	 * @see mXparser#cancelCalculation(int)
	 * @see mXparser#resetCalculationCancellation(int)
	 * @see mXparser#acquireCancellationTokenId()
	 * @see mXparser#reserveCancellationTokenId(int)
	 * @see mXparser#releaseCancellationTokenId(int)
	 */
	public static double avgWithCancel(double[] numbers, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
			throw new IllegalArgumentException("cancelId out of range");
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) return numbers[0];
		double sum = 0;
		for (double xi : numbers) {
			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
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
	 * @return     if each number from numbers &lt;&gt; Double.NaN returns
	 *             Var(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static double var(double... numbers) {
		return varWithCancel(numbers, 0);
	}

	/**
	 * Sample variance (biased-corrected).
	 *
	 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
	 * cancellation; positive IDs combine the global signal with the domain signal.
	 * This method does not clear either signal. Cached values and fast returns
	 * may complete normally despite a pending signal. Separate IDs do not make
	 * a shared mutable expression graph safe for concurrent calculations.
	 * Array parameters are fixed arrays, not token-bearing varargs.
	 * At this method's existing cancellation checks it returns Double.NaN.
	 * <p>There is no uniform cancellation result across the WithCancel family.
	 * The existing returns of this method remain in effect; a caller using a
	 * sentinel may throw an exception. Querying the signal does not establish
	 * whether this particular call observed cancellation.
	 * @param      numbers             the numbers
	 *
	 * @return     if each number from numbers &lt;&gt; Double.NaN returns
	 *             Var(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
	 * @throws IllegalArgumentException if cancelId is outside the supported range
	 * @since 6.2.0
	 * @see var(double[])
	 * @see mXparser#cancelCalculation(int)
	 * @see mXparser#resetCalculationCancellation(int)
	 * @see mXparser#acquireCancellationTokenId()
	 * @see mXparser#reserveCancellationTokenId(int)
	 * @see mXparser#releaseCancellationTokenId(int)
	 */
	public static double varWithCancel(double[] numbers, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
			throw new IllegalArgumentException("cancelId out of range");
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) {
			if (Double.isNaN(numbers[0])) return Double.NaN;
			return 0;
		}
		double m = avgWithCancel(numbers, cancelId);
		double sum = 0;
		for (double xi : numbers) {
			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
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
	 * @return     if each number from numbers &lt;&gt; Double.NaN returns
	 *             Std(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 */
	public static double std(double... numbers) {
		return stdWithCancel(numbers, 0);
	}

	/**
	 * Sample standard deviation (biased-corrected).
	 *
	 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
	 * cancellation; positive IDs combine the global signal with the domain signal.
	 * This method does not clear either signal. Cached values and fast returns
	 * may complete normally despite a pending signal. Separate IDs do not make
	 * a shared mutable expression graph safe for concurrent calculations.
	 * Array parameters are fixed arrays, not token-bearing varargs.
	 * <p>There is no uniform cancellation result across the WithCancel family.
	 * The existing returns of this method remain in effect; a caller using a
	 * sentinel may throw an exception. Querying the signal does not establish
	 * whether this particular call observed cancellation.
	 * @param      numbers             the numbers
	 *
	 * @return     if each number from numbers &lt;&gt; Double.NaN returns
	 *             Std(a_1,...,a_n) a_1,...,a_n in numbers,
	 *             otherwise returns Double.NaN.
	 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
	 * @throws IllegalArgumentException if cancelId is outside the supported range
	 * @since 6.2.0
	 * @see std(double[])
	 * @see mXparser#cancelCalculation(int)
	 * @see mXparser#resetCalculationCancellation(int)
	 * @see mXparser#acquireCancellationTokenId()
	 * @see mXparser#reserveCancellationTokenId(int)
	 * @see mXparser#releaseCancellationTokenId(int)
	 */
	public static double stdWithCancel(double[] numbers, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
			throw new IllegalArgumentException("cancelId out of range");
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) {
			if (Double.isNaN(numbers[0])) return Double.NaN;
			return 0;
		}
		return MathFunctions.sqrt( varWithCancel(numbers, cancelId) );
	}
	/**
	 * Sample median
	 * @param numbers   List of number
	 * @return          Sample median, if table was empty or null then Double.NaN is returned.
	 */
	public static double median(double... numbers) {
		return medianWithCancel(numbers, 0);
	}

	/**
	 * Sample median
	 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
	 * cancellation; positive IDs combine the global signal with the domain signal.
	 * This method does not clear either signal. Cached values and fast returns
	 * may complete normally despite a pending signal. Separate IDs do not make
	 * a shared mutable expression graph safe for concurrent calculations.
	 * Array parameters are fixed arrays, not token-bearing varargs.
	 * At this method's existing cancellation checks it returns Double.NaN.
	 * <p>There is no uniform cancellation result across the WithCancel family.
	 * The existing returns of this method remain in effect; a caller using a
	 * sentinel may throw an exception. Querying the signal does not establish
	 * whether this particular call observed cancellation.
	 * @param numbers   List of number
	 * @return          Sample median, if table was empty or null then Double.NaN is returned.
	 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
	 * @throws IllegalArgumentException if cancelId is outside the supported range
	 * @since 6.2.0
	 * @see median(double[])
	 * @see mXparser#cancelCalculation(int)
	 * @see mXparser#resetCalculationCancellation(int)
	 * @see mXparser#acquireCancellationTokenId()
	 * @see mXparser#reserveCancellationTokenId(int)
	 * @see mXparser#releaseCancellationTokenId(int)
	 */
	public static double medianWithCancel(double[] numbers, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
			throw new IllegalArgumentException("cancelId out of range");
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) return numbers[0];
		if (numbers.length == 2) return (numbers[0] + numbers[1]) / 2.0;
		for (double v : numbers) {
			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			if (Double.isNaN(v)) return Double.NaN;
		}
		NumberTheory.sortAscWithCancel(numbers, cancelId);
		if ((numbers.length % 2) == 1) {
			int i = (numbers.length-1) / 2;
			return numbers[i];
		} else {
			int i = ( numbers.length / 2 ) - 1;
			return (numbers[i] + numbers[i+1]) / 2.0;
		}
	}
	/**
	 * Sample mode
	 * @param numbers   List of number
	 * @return          Sample median, if table was empty or null then Double.NaN is returned.
	 */
	public static double mode(double... numbers) {
		return modeWithCancel(numbers, 0);
	}

	/**
	 * Sample mode
	 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
	 * cancellation; positive IDs combine the global signal with the domain signal.
	 * This method does not clear either signal. Cached values and fast returns
	 * may complete normally despite a pending signal. Separate IDs do not make
	 * a shared mutable expression graph safe for concurrent calculations.
	 * Array parameters are fixed arrays, not token-bearing varargs.
	 * At this method's existing cancellation checks it returns Double.NaN.
	 * <p>There is no uniform cancellation result across the WithCancel family.
	 * The existing returns of this method remain in effect; a caller using a
	 * sentinel may throw an exception. Querying the signal does not establish
	 * whether this particular call observed cancellation.
	 * @param numbers   List of number
	 * @return the sample mode (ties use the existing frequency/original-position ordering), or Double.NaN for null, empty or NaN-containing input or observed cancellation
	 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
	 * @throws IllegalArgumentException if cancelId is outside the supported range
	 * @since 6.2.0
	 * @see mode(double[])
	 * @see mXparser#cancelCalculation(int)
	 * @see mXparser#resetCalculationCancellation(int)
	 * @see mXparser#acquireCancellationTokenId()
	 * @see mXparser#reserveCancellationTokenId(int)
	 * @see mXparser#releaseCancellationTokenId(int)
	 */
	public static double modeWithCancel(double[] numbers, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
			throw new IllegalArgumentException("cancelId out of range");
		if (numbers == null) return Double.NaN;
		if (numbers.length == 0) return Double.NaN;
		if (numbers.length == 1) return numbers[0];
		for (double v : numbers) {
			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			if (Double.isNaN(v)) return Double.NaN;
		}
		double[][] dist = NumberTheory.getDistValuesWithCancel(numbers, true, cancelId);
		return dist[0][0];
	}
}