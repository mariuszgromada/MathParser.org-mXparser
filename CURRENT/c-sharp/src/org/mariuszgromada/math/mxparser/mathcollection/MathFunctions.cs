/*
 * @(#)MathFunctions.cs        6.2.0    2026-11-13
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
using System.Globalization;

namespace org.mariuszgromada.math.mxparser.mathcollection {
	/// <summary>MathFunctions - the most popular math functions. Many of function implemented by this class
	/// could be found in java Math package (in fact functions from MathFunctions typically calls
	/// original functions from the Math package). The reason why it was "re-implemented" is:
	/// if you decide to implement your own function you do not need to change anything in the parser,
	/// jut modify function implementation in this class.</summary>
	/// <remarks><para>Author: <b>Mariusz Gromada</b><br/>
	///                 <a href="https://mathparser.org">MathParser.org - mXparser project page</a><br/>
	///                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser">mXparser on GitHub</a><br/>
	///                 <a href="https://payhip.com/INFIMA">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br/>
	///                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br/>
	///                 <a href="https://scalarmath.org/">ScalarMath.org - a powerful math engine and math scripting language</a><br/>
	///                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite">Scalar Lite</a><br/>
	///                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro">Scalar Pro</a><br/>
	///                 <a href="https://mathspace.pl">MathSpace.pl</a><br/></para><para>Version: 6.2.0</para></remarks>
	[CLSCompliant(true)]
	public sealed class MathFunctions {
		private static readonly double DECIMAL_MIN_VALUE = (double)Decimal.MinValue / 1e17;
		private static readonly double DECIMAL_MAX_VALUE = (double)Decimal.MaxValue / 1e17;

		private static int MAX_RECURSION_CALLS = mXparser.getMaxAllowedRecursionDepth();
		private static readonly String DECIMAL_FORMAT = "0." + new String('#', 339);

		private static void refreshMaxAllowedRecursionDepth() {
			MAX_RECURSION_CALLS = mXparser.getMaxAllowedRecursionDepth();
		}

		internal static bool isNotInDecimalRange(double x) {
			if (Double.IsNaN(x)) return true;
			if (Double.IsInfinity(x)) return true;
			if (x <= DECIMAL_MIN_VALUE || x >= DECIMAL_MAX_VALUE) return true;
			return false;
		}
		/// <summary>Converts the value through its invariant-culture decimal representation.</summary>
		/// <param name="x">The value to convert.</param>
		/// <returns>The parsed value; NaN and infinities are returned unchanged.</returns>
		public static double canonicalRound(double x) {
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsInfinity(x)) return x;
			String sx = x.ToString(CultureInfo.InvariantCulture);
			double nx = Double.Parse(sx, NumberStyles.Float, CultureInfo.InvariantCulture);
			if (Double.IsNaN(nx)) return x;
			if (Double.IsInfinity(nx)) return x;
			return nx;
		}
		/// <summary>Converts a decimal value to double through its invariant-culture representation.</summary>
		/// <param name="x">The decimal value.</param>
		/// <returns>The parsed double value.</returns>
		public static double canonicalRound(decimal x) {
			String sx = x.ToString(CultureInfo.InvariantCulture);
			double nx = Double.Parse(sx, NumberStyles.Float, CultureInfo.InvariantCulture);
			return nx;
		}
		/// <summary>Addition a + b applying canonical rounding if canonical
		/// rounding is enabled</summary>
		/// <param name="a">The a parameter</param>
		/// <param name="b">The b parameter</param>
		/// <returns>The result of addition</returns>
		public static double plus(double a, double b) {
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;
			double r = a + b;
			if (!mXparser.checkIfCanonicalRounding()) return r;
			if (Double.IsInfinity(a)) return r;
			if (Double.IsInfinity(b)) return r;
			if (isNotInDecimalRange(a)) return r;
			if (isNotInDecimalRange(b)) return r;
			if (isNotInDecimalRange(r)) return r;
			decimal da = (decimal) a;
			decimal db = (decimal) b;
			decimal dr = da + db;
			return (double) dr;
		}
		/// <summary>Subtraction a - b applying canonical rounding if canonical
		/// rounding is enabled</summary>
		/// <param name="a">The a parameter</param>
		/// <param name="b">The b parameter</param>
		/// <returns>The result of subtraction</returns>
		public static double minus(double a, double b) {
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;
			double r = a - b;
			if (!mXparser.checkIfCanonicalRounding()) return r;
			if (Double.IsInfinity(a)) return r;
			if (Double.IsInfinity(b)) return r;
			if (isNotInDecimalRange(a)) return r;
			if (isNotInDecimalRange(b)) return r;
			if (isNotInDecimalRange(r)) return r;
			decimal da = (decimal)a;
			decimal db = (decimal)b;
			decimal dr = da - db;
			return (double)dr;
		}
		/// <summary>Multiplication a * b applying canonical rounding if canonical
		/// rounding is enabled</summary>
		/// <param name="a">The a parameter</param>
		/// <param name="b">The b parameter</param>
		/// <returns>The result of multiplication</returns>
		public static double multiply(double a, double b) {
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;
			double r = a * b;
			if (!mXparser.checkIfCanonicalRounding()) return r;
			if (Double.IsInfinity(a)) return r;
			if (Double.IsInfinity(b)) return r;
			if (isNotInDecimalRange(a)) return r;
			if (isNotInDecimalRange(b)) return r;
			if (isNotInDecimalRange(r)) return r;
			decimal da = (decimal)a;
			decimal db = (decimal)b;
			decimal dr = da * db;
			return (double)dr;
		}
		/// <summary>Division a / b applying canonical rounding if canonical
		/// rounding is enabled</summary>
		/// <param name="a">The a parameter</param>
		/// <param name="b">The b parameter</param>
		/// <returns>The result of division</returns>
		public static double div(double a, double b) {
			if (b == 0) return Double.NaN;
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;
			double r = a / b;
			if (!mXparser.checkIfCanonicalRounding()) return r;
			if (Double.IsInfinity(a)) return r;
			if (Double.IsInfinity(b)) return r;
			if (isNotInDecimalRange(a)) return r;
			if (isNotInDecimalRange(b)) return r;
			if (isNotInDecimalRange(r)) return r;
			decimal da = (decimal)a;
			decimal db = (decimal)b;
			decimal dr = da / db;
			double rErr = Math.Abs(a - r * b);
			double drErr = Math.Abs((double)(da - dr * db));
			if (rErr <= drErr) return r;
			else return (double)dr;
		}
		/// <summary>Integer division (also called quotient) a / b applying canonical rounding if canonical
		/// rounding is enabled</summary>
		/// <param name="a">The a parameter</param>
		/// <param name="b">The b parameter</param>
		/// <returns>The result of integer division</returns>
		public static double divQuotient(double a, double b) {
			double result = div(a, b);
			if (Double.IsNaN(result) || Double.IsInfinity(result)) return result;
			if (isAlmostInt(result)) return Math.Round(result);
			return Math.Floor(result);
		}
		/// <summary>Bell Numbers</summary>
		/// <param name="n">the n</param>
		/// <returns>if n &gt;= 0 returns Bell numbers,
		///             otherwise returns Double.NaN.</returns>
		public static double bellNumber(int n) {
			return bellNumberWithCancel(n, 0);
		}
		/// <summary>Bell Numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n</param>
		/// <returns>if n &gt;= 0 returns Bell numbers,
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.bellNumber(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double bellNumberWithCancel(int n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			double result = Double.NaN;
			if (n > 1) {
				n -= 1;
				if ((long)(n + 1) * (n + 1) >= int.MaxValue) return Double.NaN;
				// Bell(25) is the last Bell number representable by a signed long.
				if (n < 25) {
					long[,] bellTriangleLong = new long[n+1, n+1];
					bellTriangleLong[0, 0] = 1;
					bellTriangleLong[1, 0] = 1;
					for (int r = 1; r <= n; r++) {
						for (int k = 0; k < r; k++)
							bellTriangleLong[r, k+1] = bellTriangleLong[r-1, k] + bellTriangleLong[r, k];
						if (r < n)
							bellTriangleLong[r+1, 0] = bellTriangleLong[r, r];
						if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					}
					return bellTriangleLong[n, n];
				}
				double[,] bellTriangle = new double[n+1, n+1];
				bellTriangle[0, 0] = 1;
				bellTriangle[1, 0] = 1;
				for (int r = 1; r <= n; r++) {
					for (int k = 0; k < r; k++)
						bellTriangle[r, k+1] = bellTriangle[r-1, k] + bellTriangle[r, k];
					if (r < n)
						bellTriangle[r+1, 0] = bellTriangle[r, r];
					if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				}
				result = bellTriangle[n, n];
			} else if (n >= 0)
				result = 1;
			return result;
		}
		/// <summary>Bell number</summary>
		/// <param name="n">the n</param>
		/// <returns>if n is within the int range return bellNumber( (int)Math.round(n) ),
		///             otherwise return Double.NaN.</returns>
		public static double bellNumber(double n) {
			return bellNumberWithCancel(n, 0);
		}
		/// <summary>Bell number
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n</param>
		/// <returns>if n is within the int range return bellNumber( (int)Math.round(n) ),
		///             otherwise return Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.bellNumber(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double bellNumberWithCancel(double n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n) || n < int.MinValue || n > int.MaxValue)
				return Double.NaN;
			return bellNumberWithCancel( (int)Math.Round(n) , cancelId);
		}
		/// <summary>Euler numbers</summary>
		/// <param name="n">the n function param</param>
		/// <param name="k">the k function param</param>
		/// <returns>if n &gt;=0 returns Euler number,
		///             otherwise return Double.NaN.
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		public static double eulerNumber(int n, int k) {
			return eulerNumberWithCancel(n, k, 0);
		}
		/// <summary>Euler numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function param</param>
		/// <param name="k">the k function param</param>
		/// <returns>if n &gt;=0 returns Euler number,
		///             otherwise return Double.NaN.
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.eulerNumber(int,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double eulerNumberWithCancel(int n, int k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			refreshMaxAllowedRecursionDepth();
			return eulerNumberWithCancel(n, k, 1, cancelId);
		}
		private static double eulerNumberWithCancel(int n, int k, int recursionCall, int cancelId) {
			if (recursionCall > MAX_RECURSION_CALLS)
				return Double.NaN;
			if (n < 0)
				return Double.NaN;
			if (k < 0)
				return 0;
			if (n == 0)
				if (k == 0)
					return 1;
				else
					return 0;
			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			double e1 = eulerNumberWithCancel(n - 1, k, recursionCall + 1, cancelId);
			if (Double.IsNaN(e1))
				return Double.NaN;
			double e2 = eulerNumberWithCancel(n - 1, k - 1, recursionCall + 1, cancelId);
			if (Double.IsNaN(e2))
				return Double.NaN;
			return (k + 1) * e1 + (n - k) * e2;
		}
		/// <summary>Euler numbers</summary>
		/// <param name="n">the n function param</param>
		/// <param name="k">the k function param</param>
		/// <returns>if n, k &lt;&gt; Double.NaN returns eulerNumber( (int)Math.round(n), (int)Math.round(k) ),
		///             otherwise return Double.NaN.</returns>
		public static double eulerNumber(double n, double k) {
			return eulerNumberWithCancel(n, k, 0);
		}
		/// <summary>Euler numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function param</param>
		/// <param name="k">the k function param</param>
		/// <returns>if n, k &lt;&gt; Double.NaN returns eulerNumber( (int)Math.round(n), (int)Math.round(k) ),
		///             otherwise return Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.eulerNumber(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double eulerNumberWithCancel(double n, double k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return eulerNumberWithCancel( (int)Math.Round(n), (int)Math.Round(k) , cancelId);
		}
		/// <summary>Factorial</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>Factorial if n &gt;=0, otherwise returns Double.NaN.</returns>
		public static double factorial(int n) {
			return factorialWithCancel(n, 0);
		}
		/// <summary>Factorial
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>Factorial if n &gt;=0, otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.factorial(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double factorialWithCancel(int n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			double f = Double.NaN;
			if (n >= 0)
				if (n < 2) f = 1;
				else {
					f = 1;
					for (int i = 1; i <= n; i++) {
						f = f*i;
						if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					}
				}
			return f;
		}
		/// <summary>Factorial</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN return factorial( (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		public static double factorial(double n) {
			return factorialWithCancel(n, 0);
		}
		/// <summary>Factorial
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN return factorial( (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.factorial(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double factorialWithCancel(double n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n))
				return Double.NaN;
			return factorialWithCancel( (int)Math.Round(n) , cancelId);
		}
		/// <summary>Falling factorial polynomial</summary>
		/// <param name="x">Argument</param>
		/// <param name="n">Polynomial degree</param>
		/// <returns>Falling factorial polynomial of degree n at point x</returns>
		public static double factorialFalling(double x, double n){
			return factorialFallingWithCancel(x, n, 0);
		}
		/// <summary>Falling factorial polynomial
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Argument</param>
		/// <param name="n">Polynomial degree</param>
		/// <returns>Falling factorial polynomial of degree n at point x</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.factorialFalling(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double factorialFallingWithCancel(double x, double n, int cancelId){
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsNaN(n)) return Double.NaN;
			if (n < 0) return Double.NaN;
			if (BinaryRelations.isEqualOrAlmost(n, 0)) return 1.0;
			double k, y;
			y = 1;
			for (k = 0; k <= n - 1; k = k + 1) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				y = y * (x - k);
			}
			return y;
		}
		/// <summary>Rising factorial polynomial</summary>
		/// <param name="x">Argument</param>
		/// <param name="n">Polynomial degree</param>
		/// <returns>Rising factorial polynomial of degree n at point x</returns>
		public static double factorialRising(double x, double n){
			return factorialRisingWithCancel(x, n, 0);
		}
		/// <summary>Rising factorial polynomial
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Argument</param>
		/// <param name="n">Polynomial degree</param>
		/// <returns>Rising factorial polynomial of degree n at point x</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.factorialRising(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double factorialRisingWithCancel(double x, double n, int cancelId){
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsNaN(n)) return Double.NaN;
			if (n < 0) return Double.NaN;
			if (BinaryRelations.isEqualOrAlmost(n, 0)) return 1.0;
			double k, y;
			y = 1;
			for (k = 0; k <= n - 1; k = k + 1) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				y = y * (x + k);
			}
			return y;
		}

		/// <summary>Generalized binomial coefficient</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">k                   the k function parameter</param>
		/// <returns>Generalized binomial coefficient, if
		///             n = Double.NaN or k &lt; 0 returns Double.NaN.</returns>
		public static double binomCoeff(double n, long k) {
			return binomCoeffWithCancel(n, k, 0);
		}
		/// <summary>Generalized binomial coefficient
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">k                   the k function parameter</param>
		/// <returns>Generalized binomial coefficient, if
		///             n = Double.NaN or k &lt; 0 returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.binomCoeff(double,long)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double binomCoeffWithCancel(double n, long k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n))
				return Double.NaN;
			double result = Double.NaN;
			if ( k >= 0 ){
				double numerator = 1;
				if (k > 0 )
					for (long i = 0; i <= k-1; i++) {
						numerator*=(n-i);
						if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					}
				double denominator = 1;
				if ( k > 1 )
					for (long i = 1; i <= k; i++) {
						denominator *= i;
						if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					}
				result = numerator / denominator;
			}
			return result;
		}
		/// <summary>Generalized binomial coefficient</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n, k &lt;&gt; Double.NaN returns binomCoeff(n, (int)Math.round(k) ),
		///             otherwise returns Double.NaN.</returns>
		public static double binomCoeff(double n, double k) {
			return binomCoeffWithCancel(n, k, 0);
		}
		/// <summary>Generalized binomial coefficient
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n, k &lt;&gt; Double.NaN returns binomCoeff(n, (int)Math.round(k) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.binomCoeff(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double binomCoeffWithCancel(double n, double k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return binomCoeffWithCancel(n, (long)Math.Round(k) , cancelId);
		}
		/// <summary>Generalized coefficient returning number of k permutations
		/// that can be drawn for n elements set.</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>For k greater than 0 return number of permutations, otherwise
		///           returns Double.NaN</returns>
		public static double numberOfPermutations(double n, long k) {
			return numberOfPermutationsWithCancel(n, k, 0);
		}
		/// <summary>Generalized coefficient returning number of k permutations
		/// that can be drawn for n elements set.
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>For k greater than 0 return number of permutations, otherwise
		///           returns Double.NaN</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.numberOfPermutations(double,long)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double numberOfPermutationsWithCancel(double n, long k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n))
				return Double.NaN;
			double result = Double.NaN;
			if ( k >= 0 ){
				double numerator = 1;
				if (k > 0 )
					for (long i = 0; i <= k-1; i++) {
						numerator*=(n-i);
						if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					}
				result = numerator;
			}
			return result;
		}
		/// <summary>Generalized coefficient returning number of k permutations
		/// that can be drawn for n elements set.</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>For k greater than 0 return number of permutations, otherwise
		///           returns Double.NaN</returns>
		public static double numberOfPermutations(double n, double k) {
			return numberOfPermutationsWithCancel(n, k, 0);
		}
		/// <summary>Generalized coefficient returning number of k permutations
		/// that can be drawn for n elements set.
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>For k greater than 0 return number of permutations, otherwise
		///           returns Double.NaN</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.numberOfPermutations(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double numberOfPermutationsWithCancel(double n, double k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return numberOfPermutationsWithCancel(n, (long)Math.Round(k) , cancelId);
		}
		/// <summary>Bernoulli numbers</summary>
		/// <param name="m">the m function parameter</param>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n, m &gt;= 0 returns Bernoulli number,
		///             otherwise returns Double.NaN.</returns>
		public static double bernoulliNumber(int m, int n) {
			return bernoulliNumberWithCancel(m, n, 0);
		}
		/// <summary>Bernoulli numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="m">the m function parameter</param>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n, m &gt;= 0 returns Bernoulli number,
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.bernoulliNumber(int,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double bernoulliNumberWithCancel(int m, int n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			double result = Double.NaN;
			if ( (m >= 0) && (n >= 0) ) {
				result = 0;
				for (int k = 0; k <= m; k++)
					for (int v = 0; v <= k; v++) {
						result += Math.Pow(-1, v) * binomCoeffWithCancel(k, v, cancelId)
							* (Math.Pow(n + v, m) / (k + 1));
						if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					}
			}
			return result;
		}
		/// <summary>Bernoulli numbers</summary>
		/// <param name="m">the m function parameter</param>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n, m &lt;&gt; Double.NaN returns bernoulliNumber( (int)Math.round(m), (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		public static double bernoulliNumber(double m, double n) {
			return bernoulliNumberWithCancel(m, n, 0);
		}
		/// <summary>Bernoulli numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="m">the m function parameter</param>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n, m &lt;&gt; Double.NaN returns bernoulliNumber( (int)Math.round(m), (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.bernoulliNumber(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double bernoulliNumberWithCancel(double m, double n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(m) || Double.IsNaN(n))
				return Double.NaN;
			return bernoulliNumberWithCancel( (int)Math.Round(m), (int)Math.Round(n) , cancelId);
		}
		/// <summary>Stirling numbers of the first kind</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>Stirling numbers of the first kind
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		public static double Stirling1Number(int n, int k) {
			return Stirling1NumberWithCancel(n, k, 0);
		}
		/// <summary>Stirling numbers of the first kind
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>Stirling numbers of the first kind
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.Stirling1Number(int,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double Stirling1NumberWithCancel(int n, int k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			refreshMaxAllowedRecursionDepth();
			return Stirling1NumberWithCancel(n, k, 1, cancelId);
		}
		private static double Stirling1NumberWithCancel(int n, int k, int recursionCall, int cancelId) {
			if (recursionCall > MAX_RECURSION_CALLS)
				return Double.NaN;
			if (k > n) return 0;
			if (n == 0)
				if (k == 0) return 1;
				else return 0;
			if (k == 0) return 0;

			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			double s1 = Stirling1NumberWithCancel(n - 1, k, recursionCall + 1, cancelId);
			if (Double.IsNaN(s1))
				return Double.NaN;
			double s2 = Stirling1NumberWithCancel(n - 1, k - 1, recursionCall + 1, cancelId);
			if (Double.IsNaN(s2))
				return Double.NaN;
			return (n - 1) * s1 + s2;
		}
		/// <summary>Stirling numbers of the first kind</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n, k &lt;&gt; Doube.NaN returns Stirling1Number( (int)Math.round(n), (int)Math.round(k) ),
		///             otherwise returns Double.NaN.</returns>
		public static double Stirling1Number(double n, double k) {
			return Stirling1NumberWithCancel(n, k, 0);
		}
		/// <summary>Stirling numbers of the first kind
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n, k &lt;&gt; Doube.NaN returns Stirling1Number( (int)Math.round(n), (int)Math.round(k) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.Stirling1Number(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double Stirling1NumberWithCancel(double n, double k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return Stirling1NumberWithCancel( (int)Math.Round(n), (int)Math.Round(k) , cancelId);
		}
		/// <summary>Stirling numbers of the second kind</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>Stirling numbers of the second kind
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		public static double Stirling2Number(int n, int k) {
			return Stirling2NumberWithCancel(n, k, 0);
		}
		/// <summary>Stirling numbers of the second kind
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>Stirling numbers of the second kind
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.Stirling2Number(int,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double Stirling2NumberWithCancel(int n, int k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			refreshMaxAllowedRecursionDepth();
			return Stirling2NumberWithCancel(n, k, 1, cancelId);
		}
		private static double Stirling2NumberWithCancel(int n, int k, int recursionCall, int cancelId) {
			if (recursionCall > MAX_RECURSION_CALLS)
				return Double.NaN;
			if (k > n) return 0;
			if (n == 0)
				if (k == 0) return 1;
				else return 0;
			if (k == 0) return 0;

			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			double s1 = Stirling2NumberWithCancel(n - 1, k, recursionCall + 1, cancelId);
			if (Double.IsNaN(s1))
				return Double.NaN;
			double s2 = Stirling2NumberWithCancel(n - 1, k - 1, recursionCall + 1, cancelId);
			if (Double.IsNaN(s2))
				return Double.NaN;
			return k * s1 + s2;

		}
		/// <summary>Stirling numbers of the second kind</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n, k &lt;&gt; Doube.NaN returns Stirling2Number( (int)Math.round(n), (int)Math.round(k) ),
		///             otherwise returns Double.NaN.</returns>
		public static double Stirling2Number(double n, double k) {
			return Stirling2NumberWithCancel(n, k, 0);
		}
		/// <summary>Stirling numbers of the second kind
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n, k &lt;&gt; Doube.NaN returns Stirling2Number( (int)Math.round(n), (int)Math.round(k) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.Stirling2Number(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double Stirling2NumberWithCancel(double n, double k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return Stirling2NumberWithCancel( (int)Math.Round(n), (int)Math.Round(k) , cancelId);
		}
		/// <summary>Worpitzky numbers</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n,k &gt;= 0 and k &lt;= n return Worpitzky number,
		///             otherwise return Double.NaN.</returns>
		public static double worpitzkyNumber(int n, int k) {
			return worpitzkyNumberWithCancel(n, k, 0);
		}
		/// <summary>Worpitzky numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n,k &gt;= 0 and k &lt;= n return Worpitzky number,
		///             otherwise return Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.worpitzkyNumber(int,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double worpitzkyNumberWithCancel(int n, int k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			double result = Double.NaN;
			if (k >= 0 && k <= n) {
				result = 0;
				for (int v = 0; v <= k; v++) {
					result += Math.Pow(-1, v + k) * Math.Pow(v + 1, n) * binomCoeffWithCancel(k, v, cancelId);
					if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				}
			}
			return result;
		}
		/// <summary>Worpitzky numbers</summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n,k &lt;&gt; Double.NaN returns worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) ),
		///             otherwise return Double.NaN.</returns>
		public static double worpitzkyNumber(double n, double k) {
			return worpitzkyNumberWithCancel(n, k, 0);
		}
		/// <summary>Worpitzky numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <param name="k">the k function parameter</param>
		/// <returns>if n,k &lt;&gt; Double.NaN returns worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) ),
		///             otherwise return Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.worpitzkyNumber(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double worpitzkyNumberWithCancel(double n, double k, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n) || Double.IsNaN(k))
				return Double.NaN;
			return worpitzkyNumberWithCancel( (int)Math.Round(n), (int)Math.Round(k) , cancelId);
		}
		/// <summary>Harmonic numer</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &gt; 0 returns harmonic number, otherwise returns 0
		///             (empty summation operator)</returns>
		public static double harmonicNumber(int n) {
			return ordinaryHarmonicNumberWithCancel(n, 0);
		}
		/// <summary>Harmonic numer
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &gt; 0 returns harmonic number, otherwise returns 0
		///             (empty summation operator)</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.harmonicNumber(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double ordinaryHarmonicNumberWithCancel(int n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (n <= 0)
				return 0;
			if (n == 1)
				return 1;
			double h = 1;
			for (double k = 2.0; k <= n; k++) {
				h += 1.0 / k;
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			return h;
		}
		/// <summary>Harmonic number</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN returns harmonicNumber( (int)Math.round(n) ),
		///             otherwise returns Double.NaN</returns>
		public static double harmonicNumber(double n) {
			return ordinaryHarmonicNumberWithCancel(n, 0);
		}
		/// <summary>Harmonic number
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN returns harmonicNumber( (int)Math.round(n) ),
		///             otherwise returns Double.NaN</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.harmonicNumber(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double ordinaryHarmonicNumberWithCancel(double n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n))
				return Double.NaN;
			return ordinaryHarmonicNumberWithCancel( (int)Math.Round(n) , cancelId);
		}
		/// <summary>Harmonic number 1/1 + 1/2^x + ... + 1/n^x</summary>
		/// <param name="x">the x function parameter</param>
		/// <param name="n">the n function parameter</param>
		/// <returns>if x &lt;&gt; Double.NaN and x &gt;= 0 Harmonic number,
		///             otherwise returns Double.NaN.</returns>
		public static double harmonicNumber(double x, int n) {
			return generalizedHarmonicNumberWithCancel(x, n, 0);
		}
		/// <summary>Harmonic number 1/1 + 1/2^x + ... + 1/n^x
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">the x function parameter</param>
		/// <param name="n">the n function parameter</param>
		/// <returns>if x &lt;&gt; Double.NaN and x &gt;= 0 Harmonic number,
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.harmonicNumber(double,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double generalizedHarmonicNumberWithCancel(double x, int n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if  ( (Double.IsNaN(x)) || (x < 0) )
				return Double.NaN;
			if (n <= 0)
				return 0;
			if (n == 1)
				return 1;
			double h = 1;
			for (double k = 2.0; k <= n; k++) {
				h += 1 / power(k, x);
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			return h;
		}
		/// <summary>Harmonic number 1/1 + 1/2^x + ... + 1/n^x</summary>
		/// <param name="x">the x function parameter</param>
		/// <param name="n">the n function parameter</param>
		/// <returns>if x,n &lt;&gt; Double.NaN returns harmonicNumber( x, (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		public static double harmonicNumber(double x, double n) {
			return generalizedHarmonicNumberWithCancel(x, n, 0);
		}
		/// <summary>Harmonic number 1/1 + 1/2^x + ... + 1/n^x
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">the x function parameter</param>
		/// <param name="n">the n function parameter</param>
		/// <returns>if x,n &lt;&gt; Double.NaN returns harmonicNumber( x, (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.harmonicNumber(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double generalizedHarmonicNumberWithCancel(double x, double n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if ( (Double.IsNaN(x)) || (Double.IsNaN(n)) )
				return Double.NaN;
			return generalizedHarmonicNumberWithCancel( x, (int)Math.Round(n) , cancelId);
		}
		/// <summary>Catalan numbers</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>Catalan numbers</returns>
		public static double catalanNumber(int n) {
			return binomCoeff(2*n, n) * div(1, n+1);
		}
		/// <summary>Catalan numbers</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN returns catalanNumber( (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		public static double catalanNumber(double n) {
			if (Double.IsNaN(n))
				return Double.NaN;
			return catalanNumber( (int)Math.Round(n) );
		}
		/// <summary>Fibonacci numbers</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &gt;= 0 returns fibonacci numbers,
		///             otherwise returns Double.NaN.
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		public static double fibonacciNumber(int n) {
			return fibonacciNumberWithCancel(n, 0);
		}
		/// <summary>Fibonacci numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &gt;= 0 returns fibonacci numbers,
		///             otherwise returns Double.NaN.
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.fibonacciNumber(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double fibonacciNumberWithCancel(int n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			refreshMaxAllowedRecursionDepth();
			return fibonacciNumberWithCancel(n, 1, cancelId);
		}
		private static double fibonacciNumberWithCancel(int n, int recursionCall, int cancelId) {
			if (recursionCall > MAX_RECURSION_CALLS)
				return Double.NaN;
			if (n < 0)
				return Double.NaN;
			if (n == 0)
				return 0;
			if (n == 1)
				return 1;
			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			if (n > MAX_RECURSION_CALLS - recursionCall + 1) return Double.NaN;
			double previous = 0;
			double result = 1;
			for (int i = 2; i <= n; i++) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				double next = result + previous;
				previous = result;
				result = next;
			}
			return result;
		}
		/// <summary>Fibonacci numbers</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN returns fibonacciNumber( (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		public static double fibonacciNumber(double n) {
			return fibonacciNumberWithCancel(n, 0);
		}
		/// <summary>Fibonacci numbers
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN returns fibonacciNumber( (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.fibonacciNumber(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double fibonacciNumberWithCancel(double n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n))
				return Double.NaN;
			return fibonacciNumberWithCancel( (int)Math.Round(n) , cancelId);
		}
		/// <summary>Lucas numebrs</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &gt;= 0 returns Lucas numbers,
		///             otherwise returns Double.NaN.
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		public static double lucasNumber(int n) {
			return lucasNumberWithCancel(n, 0);
		}
		/// <summary>Lucas numebrs
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &gt;= 0 returns Lucas numbers,
		///             otherwise returns Double.NaN.
		///             Returns also Double.NaN when MAX RECURSION CALLS
		///             is exceeded.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.getMaxAllowedRecursionDepth()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.setMaxAllowedRecursionDepth(int)"/>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.lucasNumber(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double lucasNumberWithCancel(int n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			refreshMaxAllowedRecursionDepth();
			return lucasNumberWithCancel(n, 1, cancelId);
		}
		private static double lucasNumberWithCancel(int n, int recursionCall, int cancelId) {
			if (recursionCall > MAX_RECURSION_CALLS)
				return Double.NaN;
			if (n < 0)
				return Double.NaN;
			if (n == 0)
				return 2;
			if (n == 1)
				return 1;
			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			if (n > MAX_RECURSION_CALLS - recursionCall + 1) return Double.NaN;
			double previous = 2;
			double result = 1;
			for (int i = 2; i <= n; i++) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				double next = result + previous;
				previous = result;
				result = next;
			}
			return result;
		}
		/// <summary>Lucas numebrs</summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN returns lucasNumber( (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		public static double lucasNumber(double n) {
			return lucasNumberWithCancel(n, 0);
		}
		/// <summary>Lucas numebrs
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="n">the n function parameter</param>
		/// <returns>if n &lt;&gt; Double.NaN returns lucasNumber( (int)Math.round(n) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.lucasNumber(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double lucasNumberWithCancel(double n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(n))
				return Double.NaN;
			return lucasNumberWithCancel( (int)Math.Round(n) , cancelId);
		}
		/// <summary>Kronecker delta</summary>
		/// <param name="i">the i function parameter</param>
		/// <param name="j">the j function parameter</param>
		/// <returns>if i,j &lt;&gt; Double.NaN returns Kronecker delta,
		///             otherwise returns Double.NaN.</returns>
		public static double kroneckerDelta(double i, double j) {
			if (Double.IsNaN(i) || Double.IsNaN(j))
				return Double.NaN;
			if (i == j)
				return 1;
			else
				return 0;
		}
		/// <summary>Kronecker delta</summary>
		/// <param name="i">the i function parameter</param>
		/// <param name="j">the j function parameter</param>
		/// <returns>Kronecker delta</returns>
		public static double kroneckerDelta(int i, int j) {
			if (i == j)
				return 1;
			else
				return 0;
		}
		/// <summary>Continued fraction</summary>
		/// <param name="sequence">the numbers</param>
		/// <returns>if each number form the sequence &lt;&gt; Double.NaN and
		///             there is no division by 0 while computing returns continued fraction
		///             value, otherwise returns Double.NaN.</returns>
		public static double continuedFraction(params double[] sequence) {
			return continuedFractionWithCancel(sequence, 0);
		}
		/// <summary>Continued fraction
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// Array parameters are fixed arrays, not token-bearing varargs.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="sequence">the numbers</param>
		/// <returns>if each number form the sequence &lt;&gt; Double.NaN and
		///             there is no division by 0 while computing returns continued fraction
		///             value, otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.continuedFraction(double[])"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double continuedFractionWithCancel(double[] sequence, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
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
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			return cf;
		}
		/// <summary>Private function calculating continued polynomial
		/// recursively.</summary>
		/// <returns>continued polynomial value</returns>
		/// <remarks><para>Parameter <c>n</c>: the polynomial order</para><para>Parameter <c>x</c>: the x values</para></remarks>
		private static double continuedPolynomialWithCancel(int n, double[] x, int cancelId) {
			if (x == null) return Double.NaN;
			if (x.Length == 0) return Double.NaN;
			if (n == 0)
				return 1;
			if (n == 1)
				return x[0];
			if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			return x[n-1] * continuedPolynomialWithCancel(n-1, x, cancelId) + continuedPolynomialWithCancel(n-2, x, cancelId);
		}
		/// <summary>Continued polynomial</summary>
		/// <param name="x">the x values</param>
		/// <returns>if each number for x is different the Double.NaN
		///             returns continued polynomial, otherwise returns
		///             Double.NaN.</returns>
		public static double continuedPolynomial(params double[] x) {
			return continuedPolynomialWithCancel(x, 0);
		}
		/// <summary>Continued polynomial
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// Array parameters are fixed arrays, not token-bearing varargs.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">the x values</param>
		/// <returns>if each number for x is different the Double.NaN
		///             returns continued polynomial, otherwise returns
		///             Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.continuedPolynomial(double[])"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double continuedPolynomialWithCancel(double[] x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (x == null) return Double.NaN;
			if (x.Length == 0) return Double.NaN;
			foreach (double d in x) {
				if (Double.IsNaN(d))
					return Double.NaN;
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			return continuedPolynomialWithCancel(x.Length, x, cancelId);
		}
		/// <summary>Euler polynomial</summary>
		/// <param name="m">the m parameter</param>
		/// <param name="x">the x parameter</param>
		/// <returns>if x &lt;&gt; Double.NaN and m &gt;= 0 returns polynomial value,
		///             otherwise returns Double.NaN.</returns>
		public static double eulerPolynomial(int m, double x) {
			return eulerPolynomialWithCancel(m, x, 0);
		}
		/// <summary>Euler polynomial
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="m">the m parameter</param>
		/// <param name="x">the x parameter</param>
		/// <returns>if x &lt;&gt; Double.NaN and m &gt;= 0 returns polynomial value,
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.eulerPolynomial(int,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double eulerPolynomialWithCancel(int m, double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x))
				return Double.NaN;
			double sumTotal = Double.NaN;
			if (m >= 0) {
				sumTotal = 0;
				for (int n = 0; n <= m; n++) {
					double sumPartial = 0;
					for (int k = 0; k <= n; k++) {
						sumPartial += Math.Pow(-1, k) * binomCoeffWithCancel(n, k, cancelId) * Math.Pow(x+k, m);
						if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					}
					sumPartial /= Math.Pow(2, n);
					sumTotal += sumPartial;
				}
			}
			return sumTotal;
		}
		/// <summary>Euler polynomial</summary>
		/// <param name="m">the m parameter</param>
		/// <param name="x">the x parameter</param>
		/// <returns>if x,m &lt;&gt; Double.NaN returns eulerPolynomial( (int)Math.round(m), (int)Math.round(x) ),
		///             otherwise returns Double.NaN.</returns>
		public static double eulerPolynomial(double m, double x) {
			return eulerPolynomialWithCancel(m, x, 0);
		}
		/// <summary>Euler polynomial
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="m">the m parameter</param>
		/// <param name="x">the x parameter</param>
		/// <returns>if x,m &lt;&gt; Double.NaN returns eulerPolynomial( (int)Math.round(m), (int)Math.round(x) ),
		///             otherwise returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.eulerPolynomial(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double eulerPolynomialWithCancel(double m, double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(m) || Double.IsNaN(x))
				return Double.NaN;
			return eulerPolynomialWithCancel( (int)Math.Round(m), x, cancelId);
		}
		/// <summary>Characteristic function x in (a,b)</summary>
		/// <param name="x">the x value</param>
		/// <param name="a">the left (lower) limit</param>
		/// <param name="b">the right (upper) limit</param>
		/// <returns>if x, a, b &lt;&gt; Double.NaN returns
		/// 			   characteristic function value on the (a,b) range.</returns>
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
		/// <summary>Characteristic function x in [a,b]</summary>
		/// <param name="x">the x value</param>
		/// <param name="a">the left (lower) limit</param>
		/// <param name="b">the right (upper) limit</param>
		/// <returns>if x, a, b &lt;&gt; Double.NaN returns
		/// 			   characteristic function value on the [a,b] range.</returns>
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
		/// <summary>Characteristic function x in [a,b)</summary>
		/// <param name="x">the x value</param>
		/// <param name="a">the left (lower) limit</param>
		/// <param name="b">the right (upper) limit</param>
		/// <returns>if x, a, b &lt;&gt; Double.NaN returns
		/// 			   characteristic function value on the [a,b) range.</returns>
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
		/// <summary>Characteristic function x in (a,b]</summary>
		/// <param name="x">the x value</param>
		/// <param name="a">the left (lower) limit</param>
		/// <param name="b">the right (upper) limit</param>
		/// <returns>if x, a, b &lt;&gt; Double.NaN returns
		/// 			   characteristic function value on the (a,b] range.</returns>
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
		/// <summary>Verifies whether provided number is almost integer</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations.DEFAULT_COMPARISON_EPSILON"/>
		/// <param name="a">The number to be verified</param>
		/// <returns>True if the number is almost integer according to the default epsilon,
		///           otherwise returns false.</returns>
		public static bool isAlmostInt(double a) {
			double aint = Math.Round(a);
			return abs(a - aint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON;
		}
		private static double shorterResult(decimal dr, double r) {
			if (Double.IsNaN(r)) return Double.NaN;
			if (Double.IsInfinity(r)) return r;
			double drd = (double)dr;
#if !NETFRAMEWORK
			String drds = drd.ToString(CultureInfo.InvariantCulture);
			String rs = r.ToString(CultureInfo.InvariantCulture);
#else
			String drds = drd.ToString("G17", CultureInfo.InvariantCulture);
			String rs = r.ToString("G17", CultureInfo.InvariantCulture);
#endif
			double res;
			String sres;
			if (drds.Length < rs.Length) {
				res = drd;
				sres = drds;
			} else {
				res = r;
				sres = rs;
			}
			double resround = MathFunctions.round(res, MathFunctions.ulpDecimalDigitsBefore(res));
			String sresround = resround.ToString(CultureInfo.InvariantCulture);
			if (sres.Length - sresround.Length >= 4) return resround;
			else return res;
		}
		/// <summary>Applies the integer exponent to the base a</summary>
		/// <param name="a">The base</param>
		/// <param name="n">The integer exponent</param>
		/// <returns>Return a to the power of n, if canonical rounding is enable, the it operates on big numbers</returns>
		private static double powInt(double a, int n) {
			if (Double.IsNaN(a)) return Double.NaN;
			double r = Math.Pow(a, n);
			if (Double.IsInfinity(a)) return r;
			if (a == 0) return r;
			if (n == 0) return 1;
			if (n == 1) return a;
			if (isNotInDecimalRange(a)) return r;
			if (isNotInDecimalRange(r)) return r;
			decimal dr = (decimal)r;
			double apow = 1;
			if (mXparser.checkIfCanonicalRounding()) {
				decimal da = (decimal)a;
				if (n == 2) {
					r = a * a;
					if (MathFunctions.isNotInDecimalRange(r)) return r;
					dr = da * da;
					return shorterResult(dr, r);
				}
				if (n == 3) {
					r = a * a * a;
					if (MathFunctions.isNotInDecimalRange(r)) return r;
					dr = da * da * da;
					return shorterResult(dr, r);
				}
				if (n == 4) {
					r = a * a * a * a;
					if (MathFunctions.isNotInDecimalRange(r)) return r;
					dr = da * da * da * da;
					return shorterResult(dr, r);
				}
				if (n == -1) {
					r = 1 / a;
					if (MathFunctions.isNotInDecimalRange(r)) return r;
					dr = Decimal.One / da;
					return shorterResult(dr, r);
				}
				if (n == -2) {
					apow = a * a;
					r = 1 / apow;
					if (MathFunctions.isNotInDecimalRange(r) || MathFunctions.isNotInDecimalRange(apow)) return r;
					dr = Decimal.One / (da * da);
					return shorterResult(dr, r);
				};
				if (n == -3) {
					apow = a * a * a;
					r = 1 / apow;
					if (MathFunctions.isNotInDecimalRange(r) || MathFunctions.isNotInDecimalRange(apow)) return r;
					dr = Decimal.One / (da * da * da);
					return shorterResult(dr, r);
				}
				if (n == -4) {
					apow = a * a * a * a;
					r = 1 / apow;
					if (MathFunctions.isNotInDecimalRange(r) || MathFunctions.isNotInDecimalRange(apow)) return r;
					dr = Decimal.One / (da * da * da * da);
					return shorterResult(dr, r);
				}
				r = a * a * a * a;
				bool decimalStillInRange = true;
				if (MathFunctions.isNotInDecimalRange(r)) decimalStillInRange = false;
				if (decimalStillInRange) dr = da * da * da * da;
				int nabs = Math.Abs(n);
				for (int i = 5; i <= nabs; i++) {
					r = r * a;
					if (MathFunctions.isNotInDecimalRange(r)) decimalStillInRange = false;
					if (decimalStillInRange) dr = dr * da;
				}
				if (decimalStillInRange) {
					if (n >= 0) return shorterResult(dr, r);
					else return shorterResult(Decimal.One / dr, 1.0 / r);
				}
				else {
					if (n >= 0) return r;
					else return 1.0 / r;
				}
			} else {
				return r;
			}
		}
		/// <summary>Power function a^b</summary>
		/// <param name="a">the a function parameter</param>
		/// <param name="b">the b function parameter</param>
		/// <returns>if a,b &lt;&gt; Double.NaN returns Math.pow(a, b),
		///             otherwise returns Double.NaN.</returns>
		public static double power(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			if (Double.IsInfinity(a)) return Math.Pow(a, b);
			if (Double.IsInfinity(b)) return Math.Pow(a, b);
			double babs = Math.Abs(b);
			double bint = Math.Round(babs);
			if ( MathFunctions.abs(babs - bint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON && babs < int.MaxValue && -babs > int.MinValue) {
				if (b >= 0) return powInt(a, (int)bint);
				else return powInt(a, -(int)bint);
			} else if (a >= 0)
				return Math.Pow(a, b);
			else if (abs(b) >= 1)
				return Math.Pow(a, b);
			else if (b == 0)
				return Math.Pow(a, b);
			else {
				double ndob = 1.0 / abs(b);
				double nint = Math.Round(ndob);
				if ( MathFunctions.abs(ndob-nint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON ) {
					long n = (long)nint;
					if (n % 2 == 1)
						if (b > 0)
							return -Math.Pow( abs(a), 1.0 / ndob);
						else
							return -Math.Pow( abs(a), -1.0 / ndob);
					else
						return Double.NaN;
				} else return Double.NaN;
			}
		}
		/// <summary>Nth order root of a number</summary>
		/// <param name="n">Root order</param>
		/// <param name="x">Number</param>
		/// <returns>Returns root of a number. If calculation is not possible Double.NaN is returned.</returns>
		public static double root(double n, double x) {
			if (Double.IsNaN(n) || Double.IsNaN(x)) return Double.NaN;
			if (Double.IsInfinity(n) || Double.IsInfinity(x)) return Double.NaN;
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
		/// <summary>Tetration, exponential power, power series</summary>
		/// <param name="a">base</param>
		/// <param name="n">exponent</param>
		/// <returns>Tetration result.</returns>
		public static double tetration(double a, double n) {
			return tetrationWithCancel(a, n, 0);
		}
		/// <summary>Tetration, exponential power, power series
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="a">base</param>
		/// <param name="n">exponent</param>
		/// <returns>Tetration result.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.tetration(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double tetrationWithCancel(double a, double n, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(n)) return Double.NaN;
			if (Double.IsPositiveInfinity(n)) {
				if (BinaryRelations.isEqualOrAlmost(a, 1)) return 1.0;
				if (abs(a - MathConstants.EXP_MINUS_E) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)
					return MathConstants.EXP_MINUS_1;
				if (abs(a - MathConstants.EXP_1_OVER_E) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)
					return MathConstants.E;
				if ((a > MathConstants.EXP_MINUS_E) && (a < MathConstants.EXP_1_OVER_E))
					return SpecialFunctions.lambertWWithCancel(-MathFunctions.ln(a), 0, cancelId) / (-MathFunctions.ln(a));
				if (a > MathConstants.EXP_1_OVER_E) return Double.PositiveInfinity;
				if (a < MathConstants.EXP_MINUS_E) return Double.NaN;
			}
			if (n < -BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;
			if (abs(n) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) {
				if (abs(a) > BinaryRelations.DEFAULT_COMPARISON_EPSILON)
					return 1;
				else
					return Double.NaN;
			}
			n = floor(n);
			if (n == 0) {
				if (abs(a) > BinaryRelations.DEFAULT_COMPARISON_EPSILON)
					return 1;
				else
					return Double.NaN;
			}
			if (abs(a) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return 0;
			if (n == 1) return a;
			double r = a;
			for (double i = 2; i <= n; i++) {
				r = Math.Pow(a, r);
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			return r;
		}
		/// <summary>Modulo operator a % b</summary>
		/// <param name="a">the a function parameter</param>
		/// <param name="b">the b function parameter</param>
		/// <returns>if a,b &lt;&gt; Double.NaN returns a % b.</returns>
		public static double mod(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			return a % b;
		}
		/*
		 * Division a/b
		 *
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     if a,b <> Double.NaN and b <> 0 returns a/b,
		 *             otherwise return Double.NaN.
		 */
		 /*
		public static double div(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			double result = Double.NaN;
			if (b != 0)
				result = a / b;
			return result;
		}
		*/
		/// <summary>Sine trigonometric function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN return Math.sin(a),
		///             otherwise return Double.NaN.</returns>
		public static double sin(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			if (mXparser.checkIfDegreesMode())
				a = a * Units.DEGREE_ARC;
			SpecialValueTrigonometric sv = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
			if (sv != null)
				return sv.sin;
			return Math.Sin(a);
		}
		/// <summary>Cosine trigonometric function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.cos(a),
		///             otherwise returns Double.NaN.</returns>
		public static double cos(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			if (mXparser.checkIfDegreesMode())
				a = a * Units.DEGREE_ARC;
			SpecialValueTrigonometric sv = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
			if (sv != null)
				return sv.cos;
			return Math.Cos(a);
		}
		/// <summary>Tangent trigonometric function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.tan(a),
		///             otherwise returns Double.NaN.</returns>
		public static double tan(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			if (mXparser.checkIfDegreesMode())
				a = a * Units.DEGREE_ARC;
			SpecialValueTrigonometric sv = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
			if (sv != null)
				return sv.tan;
			return Math.Tan(a);
		}
		/// <summary>Cotangent trigonometric function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and tan(a) &lt;&gt; 0 returns 1 / Math.tan(a),
		///             otherwise returns Double.NaN.</returns>
		public static double ctan(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			if (mXparser.checkIfDegreesMode())
				a = a * Units.DEGREE_ARC;
			SpecialValueTrigonometric sv = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
			if (sv != null)
				return sv.ctan;
			double result = Double.NaN;
			double tg = Math.Tan(a);
			if (tg != 0)
				result = 1.0 / tg;
			return result;
		}
		/// <summary>Secant trigonometric function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and cos(a) &lt;&gt; 0 returns 1 / Math.cos(a),
		///             otherwise returns Double.NaN.</returns>
		public static double sec(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			if (mXparser.checkIfDegreesMode())
				a = a * Units.DEGREE_ARC;
			SpecialValueTrigonometric sv = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
			if (sv != null)
				return sv.sec;
			double result = Double.NaN;
			double cos = Math.Cos(a);
			if (cos != 0)
				result = 1.0 / cos;
			return result;
		}
		/// <summary>Cosecant trigonometric function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and sin(a) &lt;&gt; 0 returns 1 / Math.sin(a),
		///             otherwise returns Double.NaN.</returns>
		public static double cosec(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			if (mXparser.checkIfDegreesMode())
				a = a * Units.DEGREE_ARC;
			SpecialValueTrigonometric sv = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
			if (sv != null)
				return sv.csc;
			double result = Double.NaN;
			double sin = Math.Sin(a);
			if (sin != 0)
				result = 1.0 / sin;
			return result;
		}
		/// <summary>If double is almost integer returns the closes integer, otherwise original value</summary>
		/// <param name="val">Parameter</param>
		/// <returns>f double is almost integer returns the closest integer, otherwise original value</returns>
		private static double intIfAlmostIntOtherwiseOrig(double val) {
			double valint = Math.Round(val);
			if (Math.Abs(val - valint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return valint;
			return val;
		}
		/// <summary>Arcus sine - inverse trigonometric sine function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.asin(a),
		///             otherwise returns Double.NaN.</returns>
		public static double asin(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			SpecialValue sv = SpecialValueTrigonometric.getSpecialValueAsin(a);
			double r;
			if (sv != null) r = sv.fv;
			else r = Math.Asin(a);
			if (mXparser.checkIfDegreesMode()) {
				if (sv != null) return sv.fvdeg;
				return intIfAlmostIntOtherwiseOrig(div(r, Units.DEGREE_ARC));
			} else return r;
		}
		/// <summary>Arcus cosine - inverse trigonometric cosine function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.acos(a),
		///             otherwise returns Double.NaN.</returns>
		public static double acos(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			SpecialValue sv = SpecialValueTrigonometric.getSpecialValueAcos(a);
			double r;
			if (sv != null) r = sv.fv;
			else r = Math.Acos(a);
			if (mXparser.checkIfDegreesMode()) {
				if (sv != null) return sv.fvdeg;
				return intIfAlmostIntOtherwiseOrig(div(r, Units.DEGREE_ARC));
			}
			else return r;
		}
		/// <summary>Arcus tangent - inverse trigonometric tangent function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.atan(a),
		///             otherwise returns Double.NaN.</returns>
		public static double atan(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			SpecialValue sv = SpecialValueTrigonometric.getSpecialValueAtan(a);
			double r;
			if (sv != null) r = sv.fv;
			else r = Math.Atan(a);
			if (mXparser.checkIfDegreesMode()) {
				if (sv != null) return sv.fvdeg;
				return intIfAlmostIntOtherwiseOrig(div(r, Units.DEGREE_ARC));
			}
			else return r;
		}
		/// <summary>Arcus cotangent - inverse trigonometric cotangent function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.atan(1/a),
		///             otherwise returns Double.NaN.</returns>
		public static double actan(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			SpecialValue sv = SpecialValueTrigonometric.getSpecialValueActan(a);
			double r;
			if (sv != null) r = sv.fv;
			else {
				if (a > 0) r = Math.Atan(1 / a);
				else if (a < 0) r = Math.Atan(1 / a) + MathConstants.PI;
				else r = Double.NaN;
			}
			if (mXparser.checkIfDegreesMode()) {
				if (sv != null) return sv.fvdeg;
				return intIfAlmostIntOtherwiseOrig(div(r, Units.DEGREE_ARC));
			}
			else return r;
		}
		/// <summary>Arcus secant - inverse trigonometric secant function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>Inverse trigonometric secant function</returns>
		public static double asec(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			SpecialValue sv = SpecialValueTrigonometric.getSpecialValueAsec(a);
			double r;
			if (sv != null) r = sv.fv;
			else r = Math.Acos(1 / a);
			if (mXparser.checkIfDegreesMode()) {
				if (sv != null) return sv.fvdeg;
				return intIfAlmostIntOtherwiseOrig(div(r, Units.DEGREE_ARC));
			}
			else return r;
		}
		/// <summary>Arcus cosecant - inverse trigonometric cosecant function</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>Inverse trigonometric cosecant function</returns>
		public static double acosec(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			SpecialValue sv = SpecialValueTrigonometric.getSpecialValueAcsc(a);
			double r;
			if (sv != null) r = sv.fv;
			else r = Math.Asin(1 / a);
			if (mXparser.checkIfDegreesMode()) {
				if (sv != null) return sv.fvdeg;
				return intIfAlmostIntOtherwiseOrig(div(r, Units.DEGREE_ARC));
			}
			else return r;
		}
		/// <summary>Natural logarithm</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.log(1/a),
		///             otherwise returns Double.NaN.</returns>
		public static double ln(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Log(a);
		}
		/// <summary>Binary logarithm</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.log(a)/Math.log(2.0),
		///             otherwise returns Double.NaN.</returns>
		public static double log2(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Log(a)/Math.Log(2.0);
		}
		/// <summary>Common logarithm</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.log10(a),
		///             otherwise returns Double.NaN.</returns>
		public static double log10(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Log10(a);
		}
		/// <summary>Degrees to radius translation.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.toRadians(a),
		///             otherwise returns Double.NaN.</returns>
		public static double rad(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return a * (MathConstants.PI / 180.0);
		}
		/// <summary>Exponential function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.exp(a),
		///             otherwise returns Double.NaN.</returns>
		public static double exp(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Exp(a);
		}
		/// <summary>Square root.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.sqrt(a),
		///             otherwise returns Double.NaN.</returns>
		 public static double sqrt(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Sqrt(a);
		}
		/// <summary>Hyperbolic sine function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.sinh(a),
		///             otherwise returns Double.NaN.</returns>
		public static double sinh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Sinh(a);
		}
		/// <summary>Hyperbolic cosine function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.cosh(a),
		///             otherwise returns Double.NaN.</returns>
		public static double cosh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Cosh(a);
		}
		/// <summary>Hyperbolic tangent function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.tanh(a),
		///             otherwise returns Double.NaN.</returns>
		public static double tanh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Tanh(a);
		}
		/// <summary>Hyperbolic cotangent function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and tanh(a) &lt;&gt; 0 returns 1 / Math.tanh(a),
		///             otherwise returns Double.NaN.</returns>
		public static double coth(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double tanh = Math.Tanh(a);
			if (tanh != 0)
				result = 1.0 / tanh;
			return result;
		}
		/// <summary>Hyperbolic secant function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and cosh(a) &lt;&gt; 0 returns 1 / Math.cosh(a),
		///             otherwise returns Double.NaN.</returns>
		public static double sech(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double cosh = Math.Cosh(a);
			if (cosh != 0)
				result = 1.0 / cosh;
			return result;
		}
		/// <summary>Hyperbolic cosecant function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and sinh(a) &lt;&gt; 0 returns 1 / Math.sinh(a),
		///             otherwise returns Double.NaN.</returns>
		public static double csch(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			double sinh = Math.Sinh(a);
			if (sinh != 0)
				result = 1.0 / sinh;
			return result;
		}
		/// <summary>Radius to degrees translation.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.toDegrees(a),
		///             otherwise returns Double.NaN.</returns>
		public static double deg(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return a * (180.0 / MathConstants.PI);
		}
		/// <summary>Absolute value.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.abs(a),
		///             otherwise returns Double.NaN.</returns>
		public static double abs(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Abs(a);
		}
		/// <summary>Signum function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.signum(a),
		///             otherwise returns Double.NaN.</returns>
		public static double sgn(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Sign(a);
		}
		/// <summary>Floor function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.floor(a),
		///             otherwise returns Double.NaN.</returns>
		public static double floor(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Floor(a);
		}
		/// <summary>Ceiling function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.ceil(a),
		///             otherwise returns Double.NaN.</returns>
		public static double ceil(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			return Math.Ceiling(a);
		}
		/// <summary>Arcus hyperbolic sine - inverse hyperbolic sine function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.log(a + Math.sqrt(a*a+1)),
		///             otherwise returns Double.NaN.</returns>
		public static double arsinh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double magnitude = Math.Abs(a);
			if (magnitude < 1e-8) return a;
			if (magnitude < 0.01) {
				double square = a*a;
				return a * (1.0 - square * (1.0/6.0 - square * (3.0/40.0 - square * (5.0/112.0))));
			}
			double result;
			if (magnitude > 1e150)
				result = Math.Log(magnitude) + 0.69314718055994530942;
			else
				result = Math.Log(magnitude + Math.Sqrt(magnitude*magnitude+1));
			return a < 0 ? -result : result;
		}
		/// <summary>Arcus hyperbolic cosine - inverse hyperbolic cosine function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN returns Math.log(a + Math.sqrt(a*a-1)),
		///             otherwise returns Double.NaN.</returns>
		public static double arcosh(double a) {
			if (Double.IsNaN(a) || a < 1)
				return Double.NaN;
			if (a > 1e150) return Math.Log(a) + 0.69314718055994530942;
			return Math.Log(a + Math.Sqrt(a*a-1));
		}
		/// <summary>Arcus hyperbolic tangent - inverse hyperbolic tangent function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and 1-a &lt;&gt; 0 returns 0.5*Math.log( (1+a)/(1-a) ),
		///             otherwise returns Double.NaN.</returns>
		public static double artanh(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (1-a != 0)
				result = 0.5*Math.Log( (1+a)/(1-a) );
			return result;
		}
		/// <summary>Arcus hyperbolic tangent - inverse hyperbolic tangent function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and a-1 &lt;&gt; 0 returns 0.5*Math.log( (a+1)/(a-1) );,
		///             otherwise returns Double.NaN.</returns>
		public static double arcoth(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (a-1 != 0)
				result = 0.5*Math.Log( (a+1)/(a-1) );
			return result;
		}
		/// <summary>Arcus hyperbolic secant - inverse hyperbolic secant function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
		///             otherwise returns Double.NaN.</returns>
		public static double arsech(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (a != 0)
				result = Math.Log( (1+Math.Sqrt(1-a*a))/a);
			return result;
		}
		/// <summary>Arcus hyperbolic cosecant - inverse hyperbolic cosecant function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
		///             otherwise returns Double.NaN.</returns>
		public static double arcsch(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (a != 0)
				result = Math.Log( 1/a + Math.Sqrt(1+a*a)/Math.Abs(a) );
			return result;
		}
		/// <summary>Normalized sinc function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.sin(PI*a) / (PI*a);,
		///             otherwise returns Double.NaN.</returns>
		public static double sa(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double x = MathConstants.PI * a;
			double result = Double.NaN;
			if (x != 0)
				result = Math.Sin(x) / (x);
			else result = 1.0;
			return result;
		}
		/// <summary>Sinc function.</summary>
		/// <param name="a">the a function parameter</param>
		/// <returns>if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.sin(a) / (a),
		///             otherwise returns Double.NaN.</returns>
		public static double sinc(double a) {
			if (Double.IsNaN(a))
				return Double.NaN;
			double result = Double.NaN;
			if (a != 0)
				if (mXparser.checkIfDegreesMode())
					result = Math.Sin(a * Units.DEGREE_ARC) / (a);
				else
					result = Math.Sin(a) / (a);
			else
				result = 1.0;
			return result;
		}
		/// <summary>General logarithm.</summary>
		/// <param name="a">the a function parameter (base)</param>
		/// <param name="b">the b function parameter (number)</param>
		/// <returns>if a,b &lt;&gt; Double.NaN and log(b) &lt;&gt; 0 returns Math.log(a) / Math.log(b),
		///             otherwise returns Double.NaN.</returns>
		public static double log(double a, double b) {
			if (Double.IsNaN(a) || Double.IsNaN(b))
				return Double.NaN;
			double result = Double.NaN;
			double logb = Math.Log(b);
			if (logb != 0)
				result = Math.Log(a) / logb;
			return result;
		}
		/// <summary>Double rounding</summary>
		/// <param name="value">double value to be rounded</param>
		/// <param name="places">decimal places</param>
		/// <returns>Rounded value</returns>
		public static double round(double value, int places) {
			return roundWithCancel(value, places, 0);
		}
		/// <summary>Double rounding
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="value">double value to be rounded</param>
		/// <param name="places">decimal places</param>
		/// <returns>Rounded value</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.round(double,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double roundWithCancel(double value, int places, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(value)) return Double.NaN;
			if (Double.IsInfinity(value)) return value;
			if (places < 0) return Double.NaN;
			try {
				Decimal bd = Convert.ToDecimal(value);
				bd = Math.Round(bd, places, MidpointRounding.AwayFromZero);
				return Convert.ToDouble(bd);
			} catch (Exception) {
				return value;
			}
		}
		/// <summary>Double half up rounding</summary>
		/// <param name="value">double value to be rounded</param>
		/// <param name="places">decimal places</param>
		/// <returns>Rounded value</returns>
		public static double roundHalfUp(double value, int places) {
			return roundHalfUpWithCancel(value, places, 0);
		}
		/// <summary>Double half up rounding
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="value">double value to be rounded</param>
		/// <param name="places">decimal places</param>
		/// <returns>Rounded value</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.roundHalfUp(double,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double roundHalfUpWithCancel(double value, int places, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(value)) return Double.NaN;
			if (places < 0) return Double.NaN;
			if (Double.IsNegativeInfinity(value)) return Double.NegativeInfinity;
			if (Double.IsPositiveInfinity(value)) return Double.PositiveInfinity;
			if (value == 0) return 0;
			double sign = 1;
			double origValue = value;
			if (value < 0) {
				sign = -1;
				value = -value;
			}
			int ulpPosition = MathFunctions.ulpDecimalDigitsBefore(value);
			if (ulpPosition <= 0) return sign * Math.Floor(value);
			if (places > ulpPosition) return origValue;
			double multiplier = 1;
			for (int place = 0; place < places; place++) {
				multiplier = Math.Floor(multiplier * 10);
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			double valueMultiplied = value * multiplier;
			double valueFloor = Math.Floor(valueMultiplied);
			if (Math.Abs(valueMultiplied - valueFloor) >= 0.5) valueFloor = Math.Floor(valueFloor + 1);
			return Math.Floor(sign * valueFloor) / multiplier;
		}
		/// <summary>Double down rounding</summary>
		/// <param name="value">double value to be rounded</param>
		/// <param name="places">decimal places</param>
		/// <returns>Rounded value</returns>
 		public static double roundDown(double value, int places) {
			return roundDownWithCancel(value, places, 0);
		}
		/// <summary>Double down rounding
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="value">double value to be rounded</param>
		/// <param name="places">decimal places</param>
		/// <returns>Rounded value</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.roundDown(double,int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double roundDownWithCancel(double value, int places, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
 			if (Double.IsNaN(value)) return Double.NaN;
			if (places < 0) return Double.NaN;
 			if (value == Double.NegativeInfinity) return Double.NegativeInfinity;
 			if (value == Double.PositiveInfinity) return Double.PositiveInfinity;
 			if (value == 0) return 0;
 			double sign = 1;
 			double origValue = value;
 			if (value < 0) {
 				sign = -1;
 				value = -value;
 			}
 			int ulpPosition = MathFunctions.ulpDecimalDigitsBefore(value);
 			if (ulpPosition <= 0) return sign * Math.Floor(value);
 			if (places > ulpPosition) return origValue;
 			double multiplier = 1;
 			for (int place = 0; place < places; place++) {
 				multiplier = Math.Floor(multiplier * 10);
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
 			double valueMultiplied = value * multiplier;
 			double valueFloor = Math.Floor(valueMultiplied);
 			return Math.Floor(sign * valueFloor) / multiplier;
 		}
		/// <summary>Unit in the last place rounding, see
		/// 0.1 + 0.1 + 0.1 vs roundUlp(0.1 + 0.1 + 0.1)</summary>
		/// <param name="number">Double number that is to be rounded</param>
		/// <returns>Double number with rounded ulp</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.decimalDigitsBefore(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.ulp(double)"/>
		public static double roundUlp(double number) {
			if ( (Double.IsNaN(number) ) || (Double.IsInfinity(number)) || (number == 0) )
				return number;
			else {
				int precision = MathFunctions.ulpDecimalDigitsBefore(number);
				if (precision >= 1)
					return MathFunctions.round(number, precision-5);
				else if (precision == 0)
					return MathFunctions.round(number, 0);
				else return number;
			}
		}
		/// <summary>Returns integer part of a double value.</summary>
		/// <param name="x">Number</param>
		/// <returns>For non-negative x returns Math.floor(x),
		///         otherwise returns -Math.floor(-x)</returns>
 		public static double integerPart(double x) {
 			if (x > 0) return Math.Floor(x);
 			else if (x < 0) return -Math.Floor(-x);
 			else return 0;
 		}
		/// <summary>For very small number returns the position of
		/// first significant digit, ie 0.1 = 1, 0.01 = 2</summary>
		/// <param name="anyValue">Double value, small one.</param>
		/// <returns>Number of digits, number of places.</returns>
		public static int decimalDigitsBefore(double anyValue) {
            double value;

            if (anyValue >= 0) value = anyValue;
            else value = -anyValue;

            if (value >= 1) return -1;

			if (value < 1e-200) {
				if (value < 1e-322) return 322;
				if (value < 1e-321) return 321;
				if (value < 1e-320) return 320;
				if (value < 1e-319) return 319;
				if (value < 1e-318) return 318;
				if (value < 1e-317) return 317;
				if (value < 1e-316) return 316;
				if (value < 1e-315) return 315;
				if (value < 1e-314) return 314;
				if (value < 1e-313) return 313;
				if (value < 1e-312) return 312;
				if (value < 1e-311) return 311;
				if (value < 1e-310) return 310;
				if (value < 1e-309) return 309;
				if (value < 1e-308) return 308;
				if (value < 1e-307) return 307;
				if (value < 1e-306) return 306;
				if (value < 1e-305) return 305;
				if (value < 1e-304) return 304;
				if (value < 1e-303) return 303;
				if (value < 1e-302) return 302;
				if (value < 1e-301) return 301;
				if (value < 1e-300) return 300;
				if (value < 1e-299) return 299;
				if (value < 1e-298) return 298;
				if (value < 1e-297) return 297;
				if (value < 1e-296) return 296;
				if (value < 1e-295) return 295;
				if (value < 1e-294) return 294;
				if (value < 1e-293) return 293;
				if (value < 1e-292) return 292;
				if (value < 1e-291) return 291;
				if (value < 1e-290) return 290;
				if (value < 1e-289) return 289;
				if (value < 1e-288) return 288;
				if (value < 1e-287) return 287;
				if (value < 1e-286) return 286;
				if (value < 1e-285) return 285;
				if (value < 1e-284) return 284;
				if (value < 1e-283) return 283;
				if (value < 1e-282) return 282;
				if (value < 1e-281) return 281;
				if (value < 1e-280) return 280;
				if (value < 1e-279) return 279;
				if (value < 1e-278) return 278;
				if (value < 1e-277) return 277;
				if (value < 1e-276) return 276;
				if (value < 1e-275) return 275;
				if (value < 1e-274) return 274;
				if (value < 1e-273) return 273;
				if (value < 1e-272) return 272;
				if (value < 1e-271) return 271;
				if (value < 1e-270) return 270;
				if (value < 1e-269) return 269;
				if (value < 1e-268) return 268;
				if (value < 1e-267) return 267;
				if (value < 1e-266) return 266;
				if (value < 1e-265) return 265;
				if (value < 1e-264) return 264;
				if (value < 1e-263) return 263;
				if (value < 1e-262) return 262;
				if (value < 1e-261) return 261;
				if (value < 1e-260) return 260;
				if (value < 1e-259) return 259;
				if (value < 1e-258) return 258;
				if (value < 1e-257) return 257;
				if (value < 1e-256) return 256;
				if (value < 1e-255) return 255;
				if (value < 1e-254) return 254;
				if (value < 1e-253) return 253;
				if (value < 1e-252) return 252;
				if (value < 1e-251) return 251;
				if (value < 1e-250) return 250;
				if (value < 1e-249) return 249;
				if (value < 1e-248) return 248;
				if (value < 1e-247) return 247;
				if (value < 1e-246) return 246;
				if (value < 1e-245) return 245;
				if (value < 1e-244) return 244;
				if (value < 1e-243) return 243;
				if (value < 1e-242) return 242;
				if (value < 1e-241) return 241;
				if (value < 1e-240) return 240;
				if (value < 1e-239) return 239;
				if (value < 1e-238) return 238;
				if (value < 1e-237) return 237;
				if (value < 1e-236) return 236;
				if (value < 1e-235) return 235;
				if (value < 1e-234) return 234;
				if (value < 1e-233) return 233;
				if (value < 1e-232) return 232;
				if (value < 1e-231) return 231;
				if (value < 1e-230) return 230;
				if (value < 1e-229) return 229;
				if (value < 1e-228) return 228;
				if (value < 1e-227) return 227;
				if (value < 1e-226) return 226;
				if (value < 1e-225) return 225;
				if (value < 1e-224) return 224;
				if (value < 1e-223) return 223;
				if (value < 1e-222) return 222;
				if (value < 1e-221) return 221;
				if (value < 1e-220) return 220;
				if (value < 1e-219) return 219;
				if (value < 1e-218) return 218;
				if (value < 1e-217) return 217;
				if (value < 1e-216) return 216;
				if (value < 1e-215) return 215;
				if (value < 1e-214) return 214;
				if (value < 1e-213) return 213;
				if (value < 1e-212) return 212;
				if (value < 1e-211) return 211;
				if (value < 1e-210) return 210;
				if (value < 1e-209) return 209;
				if (value < 1e-208) return 208;
				if (value < 1e-207) return 207;
				if (value < 1e-206) return 206;
				if (value < 1e-205) return 205;
				if (value < 1e-204) return 204;
				if (value < 1e-203) return 203;
				if (value < 1e-202) return 202;
				if (value < 1e-201) return 201;
				/* if (value < 1e-200) */ return 200;
			}
			if (value < 1e-100) {
				if (value < 1e-199) return 199;
				if (value < 1e-198) return 198;
				if (value < 1e-197) return 197;
				if (value < 1e-196) return 196;
				if (value < 1e-195) return 195;
				if (value < 1e-194) return 194;
				if (value < 1e-193) return 193;
				if (value < 1e-192) return 192;
				if (value < 1e-191) return 191;
				if (value < 1e-190) return 190;
				if (value < 1e-189) return 189;
				if (value < 1e-188) return 188;
				if (value < 1e-187) return 187;
				if (value < 1e-186) return 186;
				if (value < 1e-185) return 185;
				if (value < 1e-184) return 184;
				if (value < 1e-183) return 183;
				if (value < 1e-182) return 182;
				if (value < 1e-181) return 181;
				if (value < 1e-180) return 180;
				if (value < 1e-179) return 179;
				if (value < 1e-178) return 178;
				if (value < 1e-177) return 177;
				if (value < 1e-176) return 176;
				if (value < 1e-175) return 175;
				if (value < 1e-174) return 174;
				if (value < 1e-173) return 173;
				if (value < 1e-172) return 172;
				if (value < 1e-171) return 171;
				if (value < 1e-170) return 170;
				if (value < 1e-169) return 169;
				if (value < 1e-168) return 168;
				if (value < 1e-167) return 167;
				if (value < 1e-166) return 166;
				if (value < 1e-165) return 165;
				if (value < 1e-164) return 164;
				if (value < 1e-163) return 163;
				if (value < 1e-162) return 162;
				if (value < 1e-161) return 161;
				if (value < 1e-160) return 160;
				if (value < 1e-159) return 159;
				if (value < 1e-158) return 158;
				if (value < 1e-157) return 157;
				if (value < 1e-156) return 156;
				if (value < 1e-155) return 155;
				if (value < 1e-154) return 154;
				if (value < 1e-153) return 153;
				if (value < 1e-152) return 152;
				if (value < 1e-151) return 151;
				if (value < 1e-150) return 150;
				if (value < 1e-149) return 149;
				if (value < 1e-148) return 148;
				if (value < 1e-147) return 147;
				if (value < 1e-146) return 146;
				if (value < 1e-145) return 145;
				if (value < 1e-144) return 144;
				if (value < 1e-143) return 143;
				if (value < 1e-142) return 142;
				if (value < 1e-141) return 141;
				if (value < 1e-140) return 140;
				if (value < 1e-139) return 139;
				if (value < 1e-138) return 138;
				if (value < 1e-137) return 137;
				if (value < 1e-136) return 136;
				if (value < 1e-135) return 135;
				if (value < 1e-134) return 134;
				if (value < 1e-133) return 133;
				if (value < 1e-132) return 132;
				if (value < 1e-131) return 131;
				if (value < 1e-130) return 130;
				if (value < 1e-129) return 129;
				if (value < 1e-128) return 128;
				if (value < 1e-127) return 127;
				if (value < 1e-126) return 126;
				if (value < 1e-125) return 125;
				if (value < 1e-124) return 124;
				if (value < 1e-123) return 123;
				if (value < 1e-122) return 122;
				if (value < 1e-121) return 121;
				if (value < 1e-120) return 120;
				if (value < 1e-119) return 119;
				if (value < 1e-118) return 118;
				if (value < 1e-117) return 117;
				if (value < 1e-116) return 116;
				if (value < 1e-115) return 115;
				if (value < 1e-114) return 114;
				if (value < 1e-113) return 113;
				if (value < 1e-112) return 112;
				if (value < 1e-111) return 111;
				if (value < 1e-110) return 110;
				if (value < 1e-109) return 109;
				if (value < 1e-108) return 108;
				if (value < 1e-107) return 107;
				if (value < 1e-106) return 106;
				if (value < 1e-105) return 105;
				if (value < 1e-104) return 104;
				if (value < 1e-103) return 103;
				if (value < 1e-102) return 102;
				if (value < 1e-101) return 101;
				/* if (value < 1e-100) */ return 100;
			}

			if (value < 1e-50) {
				if (value < 1e-99) return 99;
				if (value < 1e-98) return 98;
				if (value < 1e-97) return 97;
				if (value < 1e-96) return 96;
				if (value < 1e-95) return 95;
				if (value < 1e-94) return 94;
				if (value < 1e-93) return 93;
				if (value < 1e-92) return 92;
				if (value < 1e-91) return 91;
				if (value < 1e-90) return 90;
				if (value < 1e-89) return 89;
				if (value < 1e-88) return 88;
				if (value < 1e-87) return 87;
				if (value < 1e-86) return 86;
				if (value < 1e-85) return 85;
				if (value < 1e-84) return 84;
				if (value < 1e-83) return 83;
				if (value < 1e-82) return 82;
				if (value < 1e-81) return 81;
				if (value < 1e-80) return 80;
				if (value < 1e-79) return 79;
				if (value < 1e-78) return 78;
				if (value < 1e-77) return 77;
				if (value < 1e-76) return 76;
				if (value < 1e-75) return 75;
				if (value < 1e-74) return 74;
				if (value < 1e-73) return 73;
				if (value < 1e-72) return 72;
				if (value < 1e-71) return 71;
				if (value < 1e-70) return 70;
				if (value < 1e-69) return 69;
				if (value < 1e-68) return 68;
				if (value < 1e-67) return 67;
				if (value < 1e-66) return 66;
				if (value < 1e-65) return 65;
				if (value < 1e-64) return 64;
				if (value < 1e-63) return 63;
				if (value < 1e-62) return 62;
				if (value < 1e-61) return 61;
				if (value < 1e-60) return 60;
				if (value < 1e-59) return 59;
				if (value < 1e-58) return 58;
				if (value < 1e-57) return 57;
				if (value < 1e-56) return 56;
				if (value < 1e-55) return 55;
				if (value < 1e-54) return 54;
				if (value < 1e-53) return 53;
				if (value < 1e-52) return 52;
				if (value < 1e-51) return 51;
				/* if (value < 1e-50) */ return 50;
			}

			if (value < 1e-20) {
				if (value < 1e-49) return 49;
				if (value < 1e-48) return 48;
				if (value < 1e-47) return 47;
				if (value < 1e-46) return 46;
				if (value < 1e-45) return 45;
				if (value < 1e-44) return 44;
				if (value < 1e-43) return 43;
				if (value < 1e-42) return 42;
				if (value < 1e-41) return 41;
				if (value < 1e-40) return 40;
				if (value < 1e-39) return 39;
				if (value < 1e-38) return 38;
				if (value < 1e-37) return 37;
				if (value < 1e-36) return 36;
				if (value < 1e-35) return 35;
				if (value < 1e-34) return 34;
				if (value < 1e-33) return 33;
				if (value < 1e-32) return 32;
				if (value < 1e-31) return 31;
				if (value < 1e-30) return 30;
				if (value < 1e-29) return 29;
				if (value < 1e-28) return 28;
				if (value < 1e-27) return 27;
				if (value < 1e-26) return 26;
				if (value < 1e-25) return 25;
				if (value < 1e-24) return 24;
				if (value < 1e-23) return 23;
				if (value < 1e-22) return 22;
				if (value < 1e-21) return 21;
				/* if (value < 1e-20) */ return 20;
			}

			if (value < 1e-10) {
				if (value < 1e-19) return 19;
				if (value < 1e-18) return 18;
				if (value < 1e-17) return 17;
				if (value < 1e-16) return 16;
				if (value < 1e-15) return 15;
				if (value < 1e-14) return 14;
				if (value < 1e-13) return 13;
				if (value < 1e-12) return 12;
				if (value < 1e-11) return 11;
				/* if (value < 1e-10) */ return 10;
			}

			if (value < 1e-5) {
				if (value < 1e-9) return 9;
				if (value < 1e-8) return 8;
				if (value < 1e-7) return 7;
				if (value < 1e-6) return 6;
				/* if (value < 1e-5) */ return 5;
			}

			if (value < 1e-4) return 4;
			if (value < 1e-3) return 3;
			if (value < 1e-2) return 2;
			if (value < 1e-1) return 1;
			if (value < 1e-0) return 0;

			return -1;
		}
		/// <summary>Unit in the last place(ULP) for double</summary>
		/// <param name="value">Double number</param>
		/// <returns>ULP for a given double.</returns>
		public static double ulp(double value) {
			double v = abs(value);
			long bits = BitConverter.DoubleToInt64Bits(v) & 0x7FFFFFFFFFFFFFFFL;
			double nextValue = BitConverter.Int64BitsToDouble(bits + 1);
			return nextValue - v;
		}
		/// <summary>Unit in The Last Place - number of decimal digits before</summary>
		/// <param name="value">Double number</param>
		/// <returns>Positive number of digits N for ulp = 1e-{N+1},
		///                if ulp is &gt; 1 then -1 is returned.
		///                Returned proper value is always between -1 and +322.
		///                If value is NaN then -2 is returned.</returns>
		public static int ulpDecimalDigitsBefore(double value) {
			if (Double.IsNaN(value)) return -2;
			double u = ulp(value);
			return decimalDigitsBefore(u);
		}
		/// <summary>Length of a number represented in a standard decimal format</summary>
		/// <param name="value">A given number</param>
		/// <returns>Length of a number represented in a standard decimal format
		///                including decimal separator, excluding leading zeros (integer part),
		///                excluding trailing zeros (fractional part)</returns>
		public static int decimalNumberLength(double value) {
			return value.ToString(CultureInfo.InvariantCulture).Length;
		}
		/// <summary>Fractional part length of a number represented in a standard decimal format</summary>
		/// <param name="value">A given number</param>
		/// <returns>Fractional part length of a number represented in a standard decimal
		///                format excluding decimal separator, excluding trailing zeros (fractional part)</returns>
		public static int fractionalPartLength(double value) {
			if (Double.IsNaN(value)) return 0;
			if (Double.IsInfinity(value)) return 0;
			if (ulpDecimalDigitsBefore(value) <= 0) return 0;
#if !NETFRAMEWORK
            String valueStr = value.ToString(CultureInfo.InvariantCulture);
#else
            String valueStr = value.ToString("G17", CultureInfo.InvariantCulture);
#endif
            int exponentPos = valueStr.IndexOf('E');
            if (exponentPos < 0) exponentPos = valueStr.IndexOf('e');
            int mantissaEnd = exponentPos < 0 ? valueStr.Length : exponentPos;
            int dotPos = valueStr.IndexOf('.');
            int fractionalDigits = dotPos < 0 ? 0 : mantissaEnd - 1 - dotPos;
            int exponent = exponentPos < 0 ? 0 : int.Parse(valueStr.Substring(exponentPos + 1), CultureInfo.InvariantCulture);
            return Math.Max(0, fractionalDigits - exponent);
		}
		/// <summary>Intelligent rounding of a number within the decimal position of the ULP (Unit in the Last Place),
		/// provided that the result is significantly shortened in the standard decimal notation. Examples:
		/// 30.499999999999992 is rounded to 30.5, but 30.499999999999122 will not be rounded. Rounding is
		/// made to the decimal position of the ULP minus 2 on condition that the resulted number is shortened
		/// by at least 9 places.</summary>
		/// <param name="value">A given number</param>
		/// <returns>Returns an intelligently rounded number when the decimal position of ULP
		///                is a minimum of 11 and when rounded to the position of ULP - 2, shortens
		///                the number by a minimum of 9 places. Otherwise, returns original number.</returns>
		public static double lengthRound(double value) {
			return lengthRoundWithCancel(value, 0);
		}
		/// <summary>Intelligent rounding of a number within the decimal position of the ULP (Unit in the Last Place),
		/// provided that the result is significantly shortened in the standard decimal notation. Examples:
		/// 30.499999999999992 is rounded to 30.5, but 30.499999999999122 will not be rounded. Rounding is
		/// made to the decimal position of the ULP minus 2 on condition that the resulted number is shortened
		/// by at least 9 places.
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="value">A given number</param>
		/// <returns>Returns an intelligently rounded number when the decimal position of ULP
		///                is a minimum of 11 and when rounded to the position of ULP - 2, shortens
		///                the number by a minimum of 9 places. Otherwise, returns original number.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.lengthRound(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double lengthRoundWithCancel(double value, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(value)) return value;
			if (Double.IsInfinity(value)) return value;
			if (value == 0d || value == -1d || value == 1d || value == -2d || value == 2d || value == -3d || value == 3d) return value;
			if (value == -4d || value == 4d || value == -5d || value == 5d || value == -6d || value == 6d) return value;
			if (value == -7d || value == 7d || value == -8d || value == 8d || value == -9d || value == 9d) return value;
			if (value == -10d || value == 10d || value == -11d || value == 11d || value == -12d || value == 12d) return value;
			if (ulpDecimalDigitsBefore(value) < 6) return value;
			int decPartLen = fractionalPartLength(value);
			if (decPartLen < 11) return value;
			double valueRound = roundWithCancel(value, decPartLen - 2, cancelId);
			int decPartLenRound = fractionalPartLength(valueRound);
			if (decPartLen - decPartLenRound >= 9) return valueRound;
			return value;
		}
		/// <summary>Returns the first non-NaN value</summary>
		/// <param name="values">List of values</param>
		/// <returns>Returns the first non-NaN value, if list is null
		///                 then returns Double.NaN, if list contains no elements
		///                 then returns Double.NaN.</returns>
		public static double coalesce(double[] values) {
			return coalesceWithCancel(values, 0);
		}
		/// <summary>Returns the first non-NaN value
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// Array parameters are fixed arrays, not token-bearing varargs.
		/// At this method's existing cancellation checks it returns Double.NaN.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="values">List of values</param>
		/// <returns>Returns the first non-NaN value, if list is null
		///                 then returns Double.NaN, if list contains no elements
		///                 then returns Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.coalesce(double[])"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double coalesceWithCancel(double[] values, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (values == null) return Double.NaN;
			foreach (double v in values) {
				if (!Double.IsNaN(v)) return v;
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			return Double.NaN;
		}
		/// <summary>Check whether double value is almost integer.</summary>
		/// <param name="x">Number</param>
		/// <returns>True if double value is almost integer, otherwise false.
		///         <see cref="org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations.DEFAULT_COMPARISON_EPSILON"/></returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations.DEFAULT_COMPARISON_EPSILON"/>
		public static bool isInteger(double x) {
			if (Double.IsNaN(x)) return false;
			if (Double.IsPositiveInfinity(x)) return false;
			if (Double.IsNegativeInfinity(x)) return false;
			if (x < 0) x = -x;
			double round = Math.Round(x);
			return Math.Abs(x - round) < BinaryRelations.DEFAULT_COMPARISON_EPSILON;
		}
		/// <summary>Check whether two double values are almost equal.</summary>
		/// <param name="a">First number</param>
		/// <param name="b">Second number</param>
		/// <returns>True if double values are almost equal, otherwise false.
		///         <see cref="org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations.DEFAULT_COMPARISON_EPSILON"/></returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations.DEFAULT_COMPARISON_EPSILON"/>
		public static bool almostEqual(double a, double b) {
			if (Double.IsNaN(a)) return false;
			if (Double.IsNaN(b)) return false;
			if (a == b) return true;
			return Math.Abs(a - b) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON;
		}

		/// <summary>Calculates function f(x0) (given as expression) assigning Argument x = x0;</summary>
		/// <param name="f">the expression</param>
		/// <param name="x">the argument</param>
		/// <param name="x0">the argument value</param>
		/// <returns>f.calculate()</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
		public static double getFunctionValue(Expression f, Argument x, double x0) {
			return getFunctionValueWithCancel(f, x, x0, 0);
		}
		/// <summary>Calculates function f(x0) (given as expression) assigning Argument x = x0;
		///
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="f">the expression</param>
		/// <param name="x">the argument</param>
		/// <param name="x0">the argument value</param>
		/// <returns>the result of f.calculateWithCancel(cancelId) after setting x to x0</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.getFunctionValue(Expression,Argument,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double getFunctionValueWithCancel(Expression f, Argument x, double x0, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			x.setArgumentValue(x0);
			return f.calculateWithCancel(cancelId);
		}

		/// <summary>Returns array of double values of the function f(i)
		/// calculated on the range: i = from to i = to by step = delta</summary>
		/// <param name="f">Function expression</param>
		/// <param name="index">Index argument</param>
		/// <param name="from">'from' value</param>
		/// <param name="to">'to' value</param>
		/// <param name="delta">'delta' step definition</param>
		/// <returns>Array of function values</returns>
		public static double[] getFunctionValues(Expression f, Argument index, double from, double to, double delta) {
			return getFunctionValuesWithCancel(f, index, from, to, delta, 0);
		}
		/// <summary>Returns array of double values of the function f(i)
		/// calculated on the range: i = from to i = to by step = delta
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// Array parameters are fixed arrays, not token-bearing varargs.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="f">Function expression</param>
		/// <param name="index">Index argument</param>
		/// <param name="from">'from' value</param>
		/// <param name="to">'to' value</param>
		/// <param name="delta">'delta' step definition</param>
		/// <returns>Array of function values</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.MathFunctions.getFunctionValues(Expression,Argument,double,double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double[] getFunctionValuesWithCancel(Expression f, Argument index, double from, double to, double delta, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(delta) || Double.IsNaN(from) || Double.IsNaN(to) || delta == 0)
				return null;
			int n = 0;
			double[] values;
			if (to >= from && delta > 0) {
				for (double i = from; i < to; i += delta)
					n++;
				n++;
				values = new double[n];
				int j = 0;
				for (double i = from; i < to; i += delta) {
					values[j] = getFunctionValueWithCancel(f, index, i, cancelId);
					j++;
				}
				values[j] = getFunctionValueWithCancel(f, index, to, cancelId);
			} else if (to <= from && delta < 0) {
				for (double i = from; i > to; i += delta)
					n++;
				n++;
				values = new double[n];
				int j = 0;
				for (double i = from; i > to; i += delta) {
					values[j] = getFunctionValueWithCancel(f, index, i, cancelId);
					j++;
				}
				values[j] = getFunctionValueWithCancel(f, index, to, cancelId);
			} else if (from == to) {
				n = 1;
				values = new double[n];
				values[0] = getFunctionValueWithCancel(f, index, from, cancelId);
			} else values = null;
			return values;
		}

	}
}