/*
 * @(#)SpecialFunctions.cs        6.2.0    2026-11-13
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
namespace org.mariuszgromada.math.mxparser.mathcollection {
	/// <summary>SpecialFunctions - special (non-elementary functions).</summary>
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
	public sealed class SpecialFunctions {
		/// <summary>Exponential integral function Ei(x)</summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Exponential integral function Ei(x)</returns>
		public static double exponentialIntegralEi(double x) {
			return exponentialIntegralEiWithCancel(x, 0);
		}
		/// <summary>Exponential integral function Ei(x)
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Exponential integral function Ei(x)</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.exponentialIntegralEi(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double exponentialIntegralEiWithCancel(double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x))
				return Double.NaN;
			if (x < -5.0)
				return continuedFractionEiWithCancel(x, cancelId);
			if (x == 0.0)
				return -Double.MaxValue;
			if (x < 6.8)
				return powerSeriesEiWithCancel(x, cancelId);
			if (x < 50.0)
				return argumentAdditionSeriesEiWithCancel(x, cancelId);
			return continuedFractionEiWithCancel(x, cancelId);
		}
		/// <summary>Constants for Exponential integral function Ei(x) calculation</summary>
		private static readonly double EI_DBL_EPSILON = MathFunctions.ulp(1.0);
		private static readonly double EI_EPSILON = 10.0 * EI_DBL_EPSILON;
		/// <summary>Supporting function
		/// while Exponential integral function Ei(x) calculation</summary>
		private static double continuedFractionEiWithCancel(double x, int cancelId) {
			double Am1 = 1.0;
			double A0 = 0.0;
			double Bm1 = 0.0;
			double B0 = 1.0;
			bool scaled = x > 700.0;
			double a = scaled ? 1.0 : Math.Exp(x);
			double b = -x + 1.0;
			double Ap1 = b * A0 + a * Am1;
			double Bp1 = b * B0 + a * Bm1;
			int j = 1;
			a = 1.0;
			while (Math.Abs(Ap1 * B0 - A0 * Bp1) > EI_EPSILON * Math.Abs(A0 * Bp1)) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				if (Math.Abs(Bp1) > 1.0) {
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
			double result = -Ap1 / Bp1;
			return scaled ? Math.Exp(x + Math.Log(result)) : result;
		}
		/// <summary>Supporting function
		/// while Exponential integral function Ei(x) calculation</summary>
		private static double powerSeriesEiWithCancel(double x, int cancelId) {
			double xn = -x;
			double Sn = -x;
			double Sm1 = 0.0;
			double hsum = 1.0;
			double g = MathConstants.EULER_MASCHERONI;
			double y = 1.0;
			double factorial = 1.0;
			if (x == 0.0)
				return -Double.MaxValue;
			while (Math.Abs(Sn - Sm1) > EI_EPSILON * Math.Abs(Sm1)) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				Sm1 = Sn;
				y += 1.0;
				xn *= (-x);
				factorial *= y;
				hsum += (1.0 / y);
				Sn += hsum * xn / factorial;
			}
			return (g + Math.Log(Math.Abs(x)) - Math.Exp(x) * Sn);
		}
		/// <summary>Supporting function
		/// while Exponential integral function Ei(x) calculation</summary>
		private static double argumentAdditionSeriesEiWithCancel(double x, int cancelId) {
			int k = (int)(x + 0.5);
			int j = 0;
			double xx = k;
			double dx = x - xx;
			double xxj = xx;
			double edx = Math.Exp(dx);
			double Sm = 1.0;
			double Sn = (edx - 1.0) / xxj;
			double term = Double.MaxValue;
			double factorial = 1.0;
			double dxj = 1.0;
			while (Math.Abs(term) > EI_EPSILON * Math.Abs(Sn)) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				j++;
				factorial *= j;
				xxj *= xx;
				dxj *= (-dx);
				Sm += (dxj / factorial);
				term = (factorial * (edx * Sm - 1.0)) / xxj;
				Sn += term;
			}
			return Coefficients.EI[k - 7] + Sn * Math.Exp(xx);
		}
		/// <summary>Logarithmic integral function li(x)</summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Logarithmic integral function li(x)</returns>
		public static double logarithmicIntegralLi(double x) {
			return logarithmicIntegralLiWithCancel(x, 0);
		}
		/// <summary>Logarithmic integral function li(x)
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Logarithmic integral function li(x)</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.logarithmicIntegralLi(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double logarithmicIntegralLiWithCancel(double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x))
				return Double.NaN;
			if (x < 0)
				return Double.NaN;
			if (x == 0)
				return 0;
			if (x == 2)
				return MathConstants.LI2;
			return exponentialIntegralEiWithCancel(MathFunctions.ln(x), cancelId);
		}
		/// <summary>Offset logarithmic integral function Li(x)</summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Offset logarithmic integral function Li(x)</returns>
		public static double offsetLogarithmicIntegralLi(double x) {
			return offsetLogarithmicIntegralLiWithCancel(x, 0);
		}
		/// <summary>Offset logarithmic integral function Li(x)
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Offset logarithmic integral function Li(x)</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.offsetLogarithmicIntegralLi(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double offsetLogarithmicIntegralLiWithCancel(double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x))
				return Double.NaN;
			if (x < 0)
				return Double.NaN;
			if (x == 0)
				return -MathConstants.LI2;
			return logarithmicIntegralLiWithCancel(x, cancelId) - MathConstants.LI2;
		}
		/// <summary>Calculates the error function</summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Error function erf(x)</returns>
		public static double erf(double x) {
			if (Double.IsNaN(x)) return Double.NaN;
			if (x == 0) return 0;
			if (x == Double.PositiveInfinity) return 1.0;
			if (x == Double.NegativeInfinity) return -1.0;
			return erfImp(x, false);
		}
		/// <summary>Calculates the complementary error function.</summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Complementary error function erfc(x)</returns>
		public static double erfc(double x) {
			if (Double.IsNaN(x)) return Double.NaN;
			if (x == 0) return 1;
			if (x == Double.PositiveInfinity) return 0.0;
			if (x == Double.NegativeInfinity) return 2.0;
			return erfImp(x, true);
		}
		/// <summary>Calculates the inverse error function evaluated at x.</summary>
		/// <param name="x">Point at which function will be evaluated.</param>
		/// <returns>Inverse error function erfInv(x)</returns>
		public static double erfInv(double x) {
			if (x == 0.0) return 0;
			if (x >= 1.0) return Double.PositiveInfinity;
			if (x <= -1.0) return Double.NegativeInfinity;
			double p, q, s;
			if (x < 0) {
				p = -x;
				q = 1 - p;
				s = -1;
			} else {
				p = x;
				q = 1 - x;
				s = 1;
			}
			return erfInvImpl(p, q, s);
		}
		/// <summary>Calculates the inverse error function evaluated at x.</summary>
		/// <param name="z"></param>
		/// <param name="invert"></param>
		/// <returns></returns>
		private static double erfImp(double z, bool invert) {
			if (z < 0) {
				if (!invert) return -erfImp(-z, false);
				if (z < -0.5) return 2 - erfImp(-z, true);
				return 1 + erfImp(-z, false);
			}
			double result;
			if (z < 0.5) {
				if (z < 1e-10) result = (z * 1.125) + (z * 0.003379167095512573896158903121545171688);
				else result = (z * 1.125) + (z * Evaluate.polynomial(z, Coefficients.erfImpAn) / Evaluate.polynomial(z, Coefficients.erfImpAd));
			} else if ((z < 110) || ((z < 110) && invert)) {
				invert = !invert;
				double r, b;
				if (z < 0.75) {
					r = Evaluate.polynomial(z - 0.5, Coefficients.erfImpBn) / Evaluate.polynomial(z - 0.5, Coefficients.erfImpBd);
					b = 0.3440242112F;
				} else if (z < 1.25) {
					r = Evaluate.polynomial(z - 0.75, Coefficients.erfImpCn) / Evaluate.polynomial(z - 0.75, Coefficients.erfImpCd);
					b = 0.419990927F;
				} else if (z < 2.25) {
					r = Evaluate.polynomial(z - 1.25, Coefficients.erfImpDn) / Evaluate.polynomial(z - 1.25, Coefficients.erfImpDd);
					b = 0.4898625016F;
				} else if (z < 3.5) {
					r = Evaluate.polynomial(z - 2.25, Coefficients.erfImpEn) / Evaluate.polynomial(z - 2.25, Coefficients.erfImpEd);
					b = 0.5317370892F;
				} else if (z < 5.25) {
					r = Evaluate.polynomial(z - 3.5, Coefficients.erfImpFn) / Evaluate.polynomial(z - 3.5, Coefficients.erfImpFd);
					b = 0.5489973426F;
				} else if (z < 8) {
					r = Evaluate.polynomial(z - 5.25, Coefficients.erfImpGn) / Evaluate.polynomial(z - 5.25, Coefficients.erfImpGd);
					b = 0.5571740866F;
				} else if (z < 11.5) {
					r = Evaluate.polynomial(z - 8, Coefficients.erfImpHn) / Evaluate.polynomial(z - 8, Coefficients.erfImpHd);
					b = 0.5609807968F;
				} else if (z < 17) {
					r = Evaluate.polynomial(z - 11.5, Coefficients.erfImpIn) / Evaluate.polynomial(z - 11.5, Coefficients.erfImpId);
					b = 0.5626493692F;
				} else if (z < 24) {
					r = Evaluate.polynomial(z - 17, Coefficients.erfImpJn) / Evaluate.polynomial(z - 17, Coefficients.erfImpJd);
					b = 0.5634598136F;
				} else if (z < 38) {
					r = Evaluate.polynomial(z - 24, Coefficients.erfImpKn) / Evaluate.polynomial(z - 24, Coefficients.erfImpKd);
					b = 0.5638477802F;
				} else if (z < 60) {
					r = Evaluate.polynomial(z - 38, Coefficients.erfImpLn) / Evaluate.polynomial(z - 38, Coefficients.erfImpLd);
					b = 0.5640528202F;
				} else if (z < 85) {
					r = Evaluate.polynomial(z - 60, Coefficients.erfImpMn) / Evaluate.polynomial(z - 60, Coefficients.erfImpMd);
					b = 0.5641309023F;
				} else {
					r = Evaluate.polynomial(z - 85, Coefficients.erfImpNn) / Evaluate.polynomial(z - 85, Coefficients.erfImpNd);
					b = 0.5641584396F;
				}
				double g = MathFunctions.exp(-z * z) / z;
				result = (g * b) + (g * r);
			} else {
				result = 0;
				invert = !invert;
			}
			if (invert) result = 1 - result;
			return result;
		}
		/// <summary>Calculates the complementary inverse error function evaluated at x.</summary>
		/// <param name="z">Point at which function will be evaluated.</param>
		/// <returns>Inverse of complementary inverse error function erfcInv(x)</returns>
		public static double erfcInv(double z) {
			if (z <= 0.0) return Double.PositiveInfinity;
			if (z >= 2.0) return Double.NegativeInfinity;
			double p, q, s;
			if (z > 1) {
				q = 2 - z;
				p = 1 - q;
				s = -1;
			} else {
				p = 1 - z;
				q = z;
				s = 1;
			}
			return erfInvImpl(p, q, s);
		}
		/// <summary>The implementation of the inverse error function.</summary>
		/// <param name="p"></param>
		/// <param name="q"></param>
		/// <param name="s"></param>
		/// <returns></returns>
		private static double erfInvImpl(double p, double q, double s) {
			double result;
			if (p <= 0.5) {
				float y = 0.0891314744949340820313f;
				double g = p * (p + 10);
				double r = Evaluate.polynomial(p, Coefficients.ervInvImpAn) / Evaluate.polynomial(p, Coefficients.ervInvImpAd);
				result = (g * y) + (g * r);
			} else if (q >= 0.25) {
				float y = 2.249481201171875f;
				double g = MathFunctions.sqrt(-2 * MathFunctions.ln(q));
				double xs = q - 0.25;
				double r = Evaluate.polynomial(xs, Coefficients.ervInvImpBn) / Evaluate.polynomial(xs, Coefficients.ervInvImpBd);
				result = g / (y + r);
			} else {
				double x = MathFunctions.sqrt(-MathFunctions.ln(q));
				if (x < 3) {
					float y = 0.807220458984375f;
					double xs = x - 1.125;
					double r = Evaluate.polynomial(xs, Coefficients.ervInvImpCn) / Evaluate.polynomial(xs, Coefficients.ervInvImpCd);
					result = (y * x) + (r * x);
				} else if (x < 6) {
					float y = 0.93995571136474609375f;
					double xs = x - 3;
					double r = Evaluate.polynomial(xs, Coefficients.ervInvImpDn) / Evaluate.polynomial(xs, Coefficients.ervInvImpDd);
					result = (y * x) + (r * x);
				} else if (x < 18) {
					float y = 0.98362827301025390625f;
					double xs = x - 6;
					double r = Evaluate.polynomial(xs, Coefficients.ervInvImpEn) / Evaluate.polynomial(xs, Coefficients.ervInvImpEd);
					result = (y * x) + (r * x);
				} else if (x < 44) {
					float y = 0.99714565277099609375f;
					double xs = x - 18;
					double r = Evaluate.polynomial(xs, Coefficients.ervInvImpFn) / Evaluate.polynomial(xs, Coefficients.ervInvImpFd);
					result = (y * x) + (r * x);
				} else {
					float y = 0.99941349029541015625f;
					double xs = x - 44;
					double r = Evaluate.polynomial(xs, Coefficients.ervInvImpGn) / Evaluate.polynomial(xs, Coefficients.ervInvImpGd);
					result = (y * x) + (r * x);
				}
			}
			return s * result;
		}
		/// <summary>Gamma function for the integers</summary>
		/// <returns>Returns Gamma function for the integers.</returns>
		/// <remarks><para>Parameter <c>n</c>: Integer number</para></remarks>
		private static double gammaIntWithCancel(long n, int cancelId) {
			if (n == 0) return MathConstants.EULER_MASCHERONI;
			if (n == 1) return 1;
			if (n == 2) return 1;
			if (n == 3) return 1.0*2.0;
			if (n == 4) return 1.0*2.0*3.0;
			if (n == 5) return 1.0*2.0*3.0*4.0;
			if (n == 6) return 1.0*2.0*3.0*4.0*5.0;
			if (n == 7) return 1.0*2.0*3.0*4.0*5.0*6.0;
			if (n == 8) return 1.0*2.0*3.0*4.0*5.0*6.0*7.0;
			if (n == 9) return 1.0*2.0*3.0*4.0*5.0*6.0*7.0*8.0;
			if (n == 10) return 1.0*2.0*3.0*4.0*5.0*6.0*7.0*8.0*9.0;
			if (n >= 11) return MathFunctions.factorialWithCancel(n-1, cancelId);
			if (n <= -1) {
				// Preserve the finite pole convention: (-1)^r * (H_r + gamma) / r!.
				// The recurrence underflows after fewer than 180 steps, even for huge |n|.
				double result = MathConstants.EULER_MASCHERONI;
				double inverseFactorial = 1.0;
				double sign = 1.0;
				for (int r = 1; -((long)r) >= n; r++) {
					if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					inverseFactorial /= r;
					sign = -sign;
					result = sign * inverseFactorial / r - result / r;
					if (result == 0.0 && inverseFactorial == 0.0)
						return n % 2 == 0 ? 0.0 : -0.0;
				}
				return result;
			}
			return Double.NaN;
		}
		/// <summary>Real valued Gamma function</summary>
		/// <param name="x">Argument value</param>
		/// <returns>Returns gamma function value.</returns>
		public static double gamma(double x) {
			return gammaWithCancel(x, 0);
		}
		/// <summary>Real valued Gamma function
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
		/// <param name="x">Argument value</param>
		/// <returns>Returns gamma function value.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.gamma(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double gammaWithCancel(double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsPositiveInfinity(x)) return Double.PositiveInfinity;
			if (Double.IsNegativeInfinity(x)) return Double.NaN;
			double xabs = MathFunctions.abs(x);
			double xint = Math.Round(xabs);
			if ( MathFunctions.abs(xabs-xint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON ) {
				long n = (long)xint;
				if (x < 0) n = -n;
				return gammaIntWithCancel(n, cancelId);
			}
			return lanchosGammaWithCancel(x, cancelId);
		}
		/// <summary>Gamma function implementation based on
		/// Lanchos approximation algorithm</summary>
		/// <param name="x">Function parameter</param>
		/// <returns>Gamma function value (Lanchos approx).</returns>
		public static double lanchosGamma(double x) {
			return lanchosGammaWithCancel(x, 0);
		}
		/// <summary>Gamma function implementation based on
		/// Lanchos approximation algorithm
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
		/// <param name="x">Function parameter</param>
		/// <returns>Gamma function value (Lanchos approx).</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.lanchosGamma(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double lanchosGammaWithCancel(double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;

			double xabs = MathFunctions.abs(x);
			double xint = Math.Round(xabs);
			if (x > BinaryRelations.DEFAULT_COMPARISON_EPSILON) {
				if ( MathFunctions.abs(xabs-xint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON )
					return MathFunctions.factorialWithCancel(xint-1, cancelId);
			} else if (x < -BinaryRelations.DEFAULT_COMPARISON_EPSILON) {
				if ( MathFunctions.abs(xabs-xint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON )
					return Double.NaN;
			} else return Double.NaN;
			if (x < 0.5) return MathConstants.PI / (Math.Sin(MathConstants.PI * x) * lanchosGammaWithCancel(1.0-x, cancelId));
			if (x > 171.0) return Math.Exp(logGammaWithCancel(x, cancelId));
			double g = 7.0;
			double[] coefficients = Coefficients.lanchosGamma;
			x -= 1.0;
			double a = coefficients[0];
			double t = x+g+0.5;
			for (int i = 1; i < coefficients.Length; i++){
				a += coefficients[i] / (x+i);
			}
			if (x > 140.0) {
				double halfPower = Math.Pow(t, (x+0.5)/2.0);
				return Math.Sqrt(2.0*MathConstants.PI) * (halfPower * Math.Exp(-t)) * halfPower * a;
			}
			return Math.Sqrt(2.0*MathConstants.PI) * Math.Pow(t, x+0.5) * Math.Exp(-t) * a;
		}
		/// <summary>Real valued log gamma function.</summary>
		/// <param name="x">Argument value</param>
		/// <returns>Returns log value from gamma function.</returns>
		public static double logGamma(double x) {
			return logGammaWithCancel(x, 0);
		}
		/// <summary>Real valued log gamma function.
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Argument value</param>
		/// <returns>Returns log value from gamma function.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.logGamma(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double logGammaWithCancel(double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsPositiveInfinity(x)) return Double.PositiveInfinity;
			if (Double.IsNegativeInfinity(x)) return Double.NaN;
			if (x < 172.0 && MathFunctions.isInteger(x)) {
				if (x >= 0)
					return Math.Log( Math.Abs( gammaIntWithCancel( (long)(Math.Round(x) ) , cancelId) ) );
				else
					return Math.Log( Math.Abs( gammaIntWithCancel( -(long)(Math.Round(-x) ) , cancelId) ) );
			}
			double p, q, w, z;
			if (x < -34.0) {
				q = -x;
				w = logGammaWithCancel(q, cancelId);
				p = Math.Floor(q);
				if (Math.Abs(p-q) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;
				z = q - p;
				if (z > 0.5) {
					p += 1.0;
					z = p - q;
				}
				z = q * Math.Sin( Math.PI * z );
				if (Math.Abs(z) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;
				z = MathConstants.LNPI - Math.Log(z) - w;
				return z;
			}
			if (x < 13.0) {
				z = 1.0;
				while (x >= 3.0) {
					x -= 1.0;
					z *= x;
				}
				while (x < 2.0) {
					if ( Math.Abs(x) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON ) return Double.NaN;
					z /= x;
					x += 1.0;
				}
				if (z < 0.0) z = -z;
				if (x == 2.0) return Math.Log(z);
				x -= 2.0;
				p = x * Evaluate.polevl( x, Coefficients.logGammaB, 5 ) / Evaluate.p1evl( x, Coefficients.logGammaC, 6);
				return Math.Log(z) + p;
			}
			if (x > 2.556348e305) return Double.NaN;
			q = (x - 0.5) * Math.Log(x) - x + 0.91893853320467274178;
			if (x > 1.0e8) return q;
			p = 1.0/(x*x);
			if (x >= 1000.0)
				q += (( 7.9365079365079365079365e-4 * p - 2.7777777777777777777778e-3 ) * p + 0.0833333333333333333333 ) / x;
			else
				q += Evaluate.polevl( p, Coefficients.logGammaA, 4 ) / x;
			return q;
		}
		/// <summary>Signum from the real valued gamma function.</summary>
		/// <param name="x">Argument value</param>
		/// <returns>Returns signum of the gamma(x)</returns>
		public static double sgnGamma(double x) {
			return sgnGammaWithCancel(x, 0);
		}
		/// <summary>Signum from the real valued gamma function.
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Argument value</param>
		/// <returns>Returns signum of the gamma(x)</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.sgnGamma(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double sgnGammaWithCancel(double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsPositiveInfinity(x)) return 1;
			if (Double.IsNegativeInfinity(x)) return Double.NaN;
			if (x > 0) return 1;
			if (MathFunctions.isInteger(x)) return MathFunctions.sgn( gammaIntWithCancel( -(long)(Math.Round(-x) ) , cancelId) );
			x = -x;
			double fx = Math.Floor(x);
			double div2remainder = Math.Floor(fx % 2);
			if (div2remainder == 0) return -1;
			else return 1;
		}
		/// <summary>Regularized lower gamma function 'P'</summary>
		/// <param name="s">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Value of the regularized lower gamma function 'P'.</returns>
		public static double regularizedGammaLowerP(double s, double x) {
			return regularizedGammaLowerPWithCancel(s, x, 0);
		}
		/// <summary>Regularized lower gamma function 'P'
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
		/// <param name="s">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Value of the regularized lower gamma function 'P'.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.regularizedGammaLowerP(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double regularizedGammaLowerPWithCancel(double s, double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsNaN(s)) return Double.NaN;
			if (MathFunctions.almostEqual(x, 0)) return 0;
			if (MathFunctions.almostEqual(s, 0))
				return 1 + SpecialFunctions.exponentialIntegralEiWithCancel(-x, cancelId) / MathConstants.EULER_MASCHERONI;

			if (MathFunctions.almostEqual(s, 1))
				return 1 - Math.Exp(-x);

			if (x < 0) return Double.NaN;

			if (s < 0) {
				double sNext = s + 1;
				if (sNext == s) return Double.NaN;
				if (MathFunctions.isInteger(s))
					return 1.0 - incompleteGammaUpperNegativeIntegerWithCancel(s, x, cancelId) / gammaWithCancel(s, cancelId);
				return regularizedGammaLowerPWithCancel(sNext, x, cancelId) + ( Math.Pow(x,  s) * Math.Exp(-x) ) / ( s * gammaWithCancel(s, cancelId) );
			}

			const double epsilon = 0.000000000000001;
			const double bigNumber = 4503599627370496.0;
			const double bigNumberInverse = 2.22044604925031308085e-16;

			double ax = (s * Math.Log(x)) - x - logGammaWithCancel(s, cancelId);
			if (ax < -709.78271289338399 && x > s) {
				return 1;
			}

			if (x <= 1 || x <= s) {
				double r2 = s;
				double c2 = 1;
				double ans2 = 1;
				do {
					r2 = r2 + 1;
					c2 = c2 * x / r2;
					ans2 += c2;
				} while ((c2 / ans2) > epsilon);
				return Math.Exp(ax) * ans2 / s;
			}

			int c = 0;
			double y = 1 - s;
			double z = x + y + 1;

			double p3 = 1;
			double q3 = x;
			double p2 = x + 1;
			double q2 = z * x;
			double ans = p2 / q2;

			double error;

			do {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
        		c++;
        		y += 1;
        		z += 2;
        		double yc = y * c;

        		double p = (p2 * z) - (p3 * yc);
        		double q = (q2 * z) - (q3 * yc);

        		if (q != 0) {
        			double nextans = p / q;
        			error = Math.Abs((ans - nextans) / nextans);
        			ans = nextans;
        		} else {
        			// zero div, skip
        			error = 1;
        		}

        		// shift
        		p3 = p2;
        		p2 = p;
        		q3 = q2;
        		q2 = q;

        		// normalize fraction when the numerator becomes large
        		if (Math.Abs(p) > bigNumber) {
        			p3 *= bigNumberInverse;
        			p2 *= bigNumberInverse;
        			q3 *= bigNumberInverse;
        			q2 *= bigNumberInverse;
        		}
			} while (error > epsilon);

			return 1 - (Math.Exp(ax) * ans);
  		}
		/// <summary>Inverse of regularized lower gamma function 'P'</summary>
		/// <param name="a">Argument value</param>
		/// <param name="p">Argument value</param>
		/// <returns>Value of the inverse regularized lower gamma function 'P'.</returns>
		public static double inverseRegularizedGammaLowerP(double a, double p) {
			return inverseRegularizedGammaLowerPWithCancel(a, p, 0);
		}
		/// <summary>Inverse of regularized lower gamma function 'P'
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
		/// <param name="a">Argument value</param>
		/// <param name="p">Argument value</param>
		/// <returns>Value of the inverse regularized lower gamma function 'P'.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.inverseRegularizedGammaLowerP(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double inverseRegularizedGammaLowerPWithCancel(double a, double p, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(p)) return Double.NaN;
			if (a <= 0.0) return Double.NaN;
			if (BinaryRelations.isEqualOrAlmost(a, 0.0)) return Double.NaN;
			if (p <= 0.0) return 0.0;
			if (BinaryRelations.isEqualOrAlmost(p, 0.0)) return 0.0;
			if (p >= 1.0) return Math.Max(100.0, a + 100.0 * Math.Sqrt(a));

			const double EPS = 1.0E-8;
			double x, err, t, u, pp;
			double lna1 = 0.0;
			double afac = 0.0;
			double a1 = a - 1.0;
			double gln = logGammaWithCancel(a, cancelId);

			if (a > 1.0) {
				lna1 = Math.Log(a1);
				afac = Math.Exp(a1 * (lna1 - 1.0) - gln);
				pp = (p < 0.5) ? p : 1.0 - p;
				t = Math.Sqrt(-2.0 * Math.Log(pp));
				x = (2.30753 + t * 0.27061) / (1.0 + t * (0.99229 + t * 0.04481)) - t;
				if (p < 0.5) x = -x;
				x = Math.Max(1.0e-3, a * Math.Pow(1.0 - 1.0 / (9.0 * a) - x / (3.0 * Math.Sqrt(a)), 3.0));
			} else {
				t = 1.0 - a * (0.253 + a * 0.12);
				if (p < t)
					x = Math.Pow(p / t, 1.0 / a);
				else
					x = 1.0 - Math.Log(1.0 - (p - t) / (1.0 - t));
			}
			for (int j = 0; j < 12; j++) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				if (x <= 0.0) return 0.0;
				err = regularizedGammaLowerPWithCancel(a, x, cancelId) - p;
				if (a > 1.0)
					t = afac * Math.Exp(-(x - a1) + a1 * (Math.Log(x) - lna1));
				else
					t = Math.Exp(-x + a1 * Math.Log(x) - gln);
				u = err / t;
				x -= (t = u / (1.0 - 0.5 * Math.Min(1.0, u * ((a - 1.0) / x - 1.0))));
				if (x <= 0.0)
					x = 0.5 * (x + t);
				if (Math.Abs(t) < EPS * x)
					break;
			}
			return x;
		}
		/// <summary>Incomplete lower gamma function</summary>
		/// <param name="s">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Value of the incomplete lower gamma function.</returns>
		public static double incompleteGammaLower(double s, double x) {
			return incompleteGammaLowerWithCancel(s, x, 0);
		}
		/// <summary>Incomplete lower gamma function
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="s">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Value of the incomplete lower gamma function.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.incompleteGammaLower(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double incompleteGammaLowerWithCancel(double s, double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (s < 0 && s + 1 != s && MathFunctions.isInteger(s) && x > 0 && !MathFunctions.almostEqual(x, 0))
				return gammaWithCancel(s, cancelId) - incompleteGammaUpperNegativeIntegerWithCancel(s, x, cancelId);
			return gammaWithCancel(s, cancelId) * regularizedGammaLowerPWithCancel(s, x, cancelId);
		}
		/// <summary>Regularized upper gamma function 'Q'</summary>
		/// <param name="s">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Value of the regularized upper gamma function 'Q'.</returns>
		public static double regularizedGammaUpperQ(double s, double x) {
			return regularizedGammaUpperQWithCancel(s, x, 0);
		}
		/// <summary>Regularized upper gamma function 'Q'
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
		/// <param name="s">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Value of the regularized upper gamma function 'Q'.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.regularizedGammaUpperQ(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double regularizedGammaUpperQWithCancel(double s, double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsNaN(s)) return Double.NaN;
			if (MathFunctions.almostEqual(x, 0)) return 1;

			if (MathFunctions.almostEqual(s, 0))
				return -SpecialFunctions.exponentialIntegralEiWithCancel(-x, cancelId) / MathConstants.EULER_MASCHERONI;

			if (MathFunctions.almostEqual(s, 1))
				return Math.Exp(-x);

			if (x < 0) return Double.NaN;

			if (s < 0) {
				double sNext = s + 1;
				if (sNext == s) return Double.NaN;
				if (MathFunctions.isInteger(s))
					return incompleteGammaUpperNegativeIntegerWithCancel(s, x, cancelId) / gammaWithCancel(s, cancelId);
				return regularizedGammaUpperQWithCancel(sNext, x, cancelId) - ( Math.Pow(x,  s) * Math.Exp(-x) ) / ( s * gammaWithCancel(s, cancelId) );
			}

			double ax = s * Math.Log(x) - x - logGammaWithCancel(s, cancelId);
			if (ax < -709.78271289338399 && x < s) {
                return 1;
			}
			double t;
			const double igammaepsilon = 0.000000000000001;
			const double igammabignumber = 4503599627370496.0;
			const double igammabignumberinv = 2.22044604925031308085 * 0.0000000000000001;

			ax = Math.Exp(ax);
			double y = 1 - s;
			double z = x + y + 1;
			double c = 0;
			double pkm2 = 1;
			double qkm2 = x;
			double pkm1 = x + 1;
			double qkm1 = z * x;
			double ans = pkm1 / qkm1;
			do {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
        		c = c + 1;
        		y = y + 1;
        		z = z + 2;
        		double yc = y * c;
        		double pk = pkm1 * z - pkm2 * yc;
        		double qk = qkm1 * z - qkm2 * yc;
        		if (qk != 0) {
        			double r = pk / qk;
        			t = Math.Abs((ans - r) / r);
        			ans = r;
        		} else {
        			t = 1;
        		}

        		pkm2 = pkm1;
        		pkm1 = pk;
        		qkm2 = qkm1;
        		qkm1 = qk;

        		if (Math.Abs(pk) > igammabignumber) {
        			pkm2 = pkm2 * igammabignumberinv;
        			pkm1 = pkm1 * igammabignumberinv;
        			qkm2 = qkm2 * igammabignumberinv;
        			qkm1 = qkm1 * igammabignumberinv;
        		}
			} while (t > igammaepsilon);
			return ans * ax;
		}
		/// <summary>Incomplete upper gamma function</summary>
		/// <param name="s">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Value of the incomplete upper gamma function.</returns>
		public static double incompleteGammaUpper(double s, double x) {
			return incompleteGammaUpperWithCancel(s, x, 0);
		}
		/// <summary>Incomplete upper gamma function
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="s">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Value of the incomplete upper gamma function.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.incompleteGammaUpper(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double incompleteGammaUpperWithCancel(double s, double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (s < 0 && s + 1 != s && MathFunctions.isInteger(s) && x > 0 && !MathFunctions.almostEqual(x, 0))
				return incompleteGammaUpperNegativeIntegerWithCancel(s, x, cancelId);
			return gammaWithCancel(s, cancelId) * regularizedGammaUpperQWithCancel(s, x, cancelId);
		}
		// DLMF 8.8.2 and 8.9.2; preserve finite full-Gamma pole convention.
		private static double incompleteGammaUpperNegativeIntegerWithCancel(double s, double x, int cancelId) {
			if (x > 745.0) return 0.0;
			double order = Math.Round(-s);
			if (order <= 100.0 && x <= 2.0) {
				double result = -exponentialIntegralEiWithCancel(-x, cancelId);
				double logX = Math.Log(x);
				for (int k = 1; k <= order; k++) {
					if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
					result = Math.Exp(-k*logX - x - Math.Log(k)) - result/k;
				}
				return result;
			}
			double b = x + 1.0 - s;
			double c = 1e300;
			double d = 1.0/b;
			double h = d;
			for (int i = 1; i <= 10000; i++) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				double an = -i*(i-s);
				b += 2.0;
				d = an*d + b;
				if (Math.Abs(d) < 1e-300) d = 1e-300;
				c = b + an/c;
				if (Math.Abs(c) < 1e-300) c = 1e-300;
				d = 1.0/d;
				double delta = d*c;
				h *= delta;
				if (Math.Abs(delta-1.0) < 1e-15) break;
			}
			return Math.Exp(s*Math.Log(x) - x + Math.Log(h));
		}
		/// <summary>Digamma function as the logarithmic derivative of the Gamma special function</summary>
		/// <param name="x">Argument value</param>
		/// <returns>Approximated value of the digamma function.</returns>
		public static double diGamma(double x) {
			return diGammaWithCancel(x, 0);
		}
		/// <summary>Digamma function as the logarithmic derivative of the Gamma special function
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
		/// <param name="x">Argument value</param>
		/// <returns>Approximated value of the digamma function.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.diGamma(double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double diGammaWithCancel(double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			const double c = 12.0;
			const double d1 = -0.57721566490153286;
			const double d2 = 1.6449340668482264365;
			const double s = 1e-6;
			const double s3 = 1.0/12.0;
			const double s4 = 1.0/120.0;
			const double s5 = 1.0/252.0;
			const double s6 = 1.0/240.0;
			const double s7 = 1.0/132.0;

			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsNegativeInfinity(x)) return Double.NaN;
			if (x <= 0)
				if (MathFunctions.isInteger(x))
					return Double.NaN;

			// Use inversion formula for negative numbers.
			if (x < 0) return diGammaWithCancel(1.0 - x, cancelId) + (MathConstants.PI/Math.Tan(-Math.PI*x));

			if (x <= s) return d1 - (1/x) + (d2*x);

			double result = 0;
			while (x < c) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				result -= 1/x;
				x++;
			}

			if (x >= c) {
				double r = 1/x;
				result += Math.Log(x) - (0.5*r);
				r *= r;
				result -= r*(s3 - (r*(s4 - (r*(s5 - (r*(s6 - (r*s7))))))));
			}

			return result;
		}
		private const int doubleWidth = 53;
		private static readonly double doublePrecision = Math.Pow(2, -doubleWidth);

		/// <summary>Log Beta special function</summary>
		/// <param name="x">Argument value</param>
		/// <param name="y">Argument value</param>
		/// <returns>Return logBeta special function (for positive x and positive y)</returns>
		public static double logBeta(double x, double y) {
			return logBetaWithCancel(x, y, 0);
		}
		/// <summary>Log Beta special function
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Argument value</param>
		/// <param name="y">Argument value</param>
		/// <returns>Return logBeta special function (for positive x and positive y)</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.logBeta(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double logBetaWithCancel(double x, double y, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsNaN(y)) return Double.NaN;
			if ( (x <= 0) || (y <= 0) ) return Double.NaN;

			double lgx = logGammaWithCancel(x, cancelId);
			if (Double.IsNaN(lgx)) lgx = Math.Log( Math.Abs( gammaWithCancel(x, cancelId) ) );

			double lgy = logGammaWithCancel(y, cancelId);
			if (Double.IsNaN(lgy)) lgy = Math.Log( Math.Abs( gammaWithCancel(y, cancelId) ) );

			double lgxy = logGammaWithCancel(x+y, cancelId);
			if (Double.IsNaN(lgy)) lgxy = Math.Log( Math.Abs( gammaWithCancel(x+y, cancelId) ) );

			if ( (!Double.IsNaN(lgx)) && (!Double.IsNaN(lgy)) && (!Double.IsNaN(lgxy)) )
				return (lgx + lgy - lgxy);
			else return Double.NaN;
		}
		/// <summary>Beta special function</summary>
		/// <param name="x">Argument value</param>
		/// <param name="y">Argument value</param>
		/// <returns>Return Beta special function (for positive x and positive y)</returns>
		public static double beta(double x, double y) {
			return betaWithCancel(x, y, 0);
		}
		/// <summary>Beta special function
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Argument value</param>
		/// <param name="y">Argument value</param>
		/// <returns>Return Beta special function (for positive x and positive y)</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.beta(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double betaWithCancel(double x, double y, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsNaN(y)) return Double.NaN;
			if ( (x <= 0) || (y <= 0) ) return Double.NaN;
			if ( (x > 99) || (y > 99) ) return Math.Exp(logBetaWithCancel(x, y, cancelId));
			return gammaWithCancel(x, cancelId)*gammaWithCancel(y, cancelId) / gammaWithCancel(x+y, cancelId);
		}
		/// <summary>Log Incomplete Beta special function</summary>
		/// <param name="a">Argument value</param>
		/// <param name="b">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Return incomplete Beta special function
		/// for positive a and positive b and x between 0 and 1</returns>
		public static double incompleteBeta(double a, double b, double x) {
			return incompleteBetaWithCancel(a, b, x, 0);
		}
		/// <summary>Log Incomplete Beta special function
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="a">Argument value</param>
		/// <param name="b">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Return incomplete Beta special function
		/// for positive a and positive b and x between 0 and 1</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.incompleteBeta(double,double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double incompleteBetaWithCancel(double a, double b, double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;
			if (Double.IsNaN(x)) return Double.NaN;
			if (x < -BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;
			if (x > 1+BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;
			if ( (a <= 0) || (b <= 0) ) return Double.NaN;
			if (MathFunctions.almostEqual(x, 0)) return 0;
			if (MathFunctions.almostEqual(x, 1)) return betaWithCancel(a, b, cancelId);
			bool aEq0 = MathFunctions.almostEqual(a, 0);
			bool bEq0 = MathFunctions.almostEqual(b, 0);
			bool aIsInt = MathFunctions.isInteger(a);
			bool bIsInt = MathFunctions.isInteger(b);
			long aInt = 0, bInt = 0;
			if (aIsInt) aInt = (long)MathFunctions.integerPart(a);
			if (bIsInt) bInt = (long)MathFunctions.integerPart(b);

			long n;
			if (aEq0 && bEq0) return Math.Log( x / (1-x) );
			if (aEq0 && bIsInt) {
				n = bInt;
				if (n >= 1) {
					if (n == 1) return Math.Log(x);
					if (n == 2) return Math.Log(x) + x;
					double v = Math.Log(x);
					for (long i = 1; i <= n-1; i++)
						v -= MathFunctions.binomCoeffWithCancel(n-1, i, cancelId) * Math.Pow(-1, i) * ( Math.Pow(x, i) / i );
					return v;
				}
				if (n <= -1) {
					if (n == -1) return Math.Log( x / (1-x) ) + 1/(1-x) - 1;
					if (n == -2) return Math.Log( x / (1-x) ) - 1/x - 1/(2*x*x);
					double v = -Math.Log(x / (1-x));
					for (long i = 1; i <= -n-1; i++)
						v -= Math.Pow(x, -i) / i;
					return v;
				}
			}
			if (aIsInt && bEq0) {
				n = aInt;
				if (n >= 1) {
					if (n == 1) return -Math.Log(1-x);
					if (n == 2) return -Math.Log(1-x) - x;
					double v = -Math.Log(1-x);
					for (long i = 1; i <= n-1; i++)
						v -= Math.Pow(x, i) / i;
					return v;
				}
				if (n <= -1) {
					if (n == -1) return Math.Log( x / (1-x) ) - 1/x;
					double v = -Math.Log(x / (1-x));
					for (long i = 1; i <= -n; i++)
						v += Math.Pow(1-x, -i) / i;
					for (long i = 1; i <= -n; i++)
						v -= Math.Pow( MathFunctions.factorialWithCancel(i-1, cancelId) , 2) / i;
					return v;
				}
			}
			if(aIsInt) {
				n = aInt;
				if (MathFunctions.almostEqual(b, 1)) {
					if (n <= -1) return -( 1/(-n) ) * Math.Pow(x, n);
				}
			}
			return regularizedBetaWithCancel(a, b, x, cancelId)*betaWithCancel(a, b, cancelId);
		}
		private static double nextUp(double d) {
			// Check for special values
			if (double.IsPositiveInfinity(d) || double.IsNegativeInfinity(d)) return d;
			if (double.IsNaN(d)) return d;
			ulong bits = (ulong)BitConverter.DoubleToInt64Bits(d);
			// Mask out the mantissa bits
			bits &= 0xfff0000000000000L;
			// Reduce exponent by 52 bits, so subtract 52 from the mantissa.
			// First check if number is great enough.
			ulong testWithoutSign = bits & 0x7ff0000000000000L;
			if (testWithoutSign > 0x0350000000000000L)
				bits -= 0x0350000000000000L;
			else
				bits = 0x0000000000000001L;
			return BitConverter.Int64BitsToDouble((long)bits);
		}
		/// <summary>Regularized incomplete Beta special function</summary>
		/// <param name="a">Argument value</param>
		/// <param name="b">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Return incomplete Beta special function
		/// for positive a and positive b and x between 0 and 1</returns>
		public static double regularizedBeta(double a, double b, double x) {
			return regularizedBetaWithCancel(a, b, x, 0);
		}
		/// <summary>Regularized incomplete Beta special function
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
		/// <param name="a">Argument value</param>
		/// <param name="b">Argument value</param>
		/// <param name="x">Argument value</param>
		/// <returns>Return incomplete Beta special function
		/// for positive a and positive b and x between 0 and 1</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.regularizedBeta(double,double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double regularizedBetaWithCancel(double a, double b, double x, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;
			if (Double.IsNaN(x)) return Double.NaN;

			if ((a < 0) || (b < 0)) return Double.NaN;
			if (BinaryRelations.isEqualOrAlmost(a, 0.0)) return Double.NaN;
			if (BinaryRelations.isEqualOrAlmost(b, 0.0)) return Double.NaN;

			if (x < -BinaryRelations.DEFAULT_COMPARISON_EPSILON) return 0.0;
			if (x > 1 + BinaryRelations.DEFAULT_COMPARISON_EPSILON) return 1.0;
			if (BinaryRelations.isEqualOrAlmost(x, 0.0)) return 0.0;
			if (BinaryRelations.isEqualOrAlmost(x, 1.0)) return 1.0;
			if (BinaryRelations.isEqualOrAlmost(a, 1.0)) return 1.0 - Math.Pow(1.0 - x, b);
			if (BinaryRelations.isEqualOrAlmost(b, 1.0)) return Math.Pow(x, a);

			double bt = (x == 0.0 || x == 1.0)
				? 0.0
				: Math.Exp(logGammaWithCancel(a + b, cancelId) - logGammaWithCancel(a, cancelId) - logGammaWithCancel(b, cancelId) + (a*Math.Log(x)) + (b*Math.Log(1.0 - x)));

			bool symmetryTransformation = x >= (a + 1.0)/(a + b + 2.0);

			/* Continued fraction representation */
			double eps = doublePrecision;
			double fpmin =
				nextUp(0.0)/eps;

			if (symmetryTransformation) {
				x = 1.0 - x;
				double swap = a;
				a = b;
				b = swap;
			}

			double qab = a + b;
			double qap = a + 1.0;
			double qam = a - 1.0;
			double c = 1.0;
			double d = 1.0 - (qab*x/qap);

			if (Math.Abs(d) < fpmin) {
				d = fpmin;
			}

			d = 1.0/d;
			double h = d;

			for (int m = 1, m2 = 2; m <= 50000; m++, m2 += 2) {
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				double aa = m*(b - m)*x/((qam + m2)*(a + m2));
				d = 1.0 + (aa*d);

				if (Math.Abs(d) < fpmin) {
					d = fpmin;
				}

				c = 1.0 + (aa/c);
				if (Math.Abs(c) < fpmin) {
					c = fpmin;
				}

				d = 1.0/d;
				h *= d*c;
				aa = -(a + m)*(qab + m)*x/((a + m2)*(qap + m2));
				d = 1.0 + (aa*d);

				if (Math.Abs(d) < fpmin) {
					d = fpmin;
				}

				c = 1.0 + (aa/c);

				if (Math.Abs(c) < fpmin) {
					c = fpmin;
				}

				d = 1.0/d;
				double del = d*c;
				h *= del;

				if (Math.Abs(del - 1.0) <= eps) {
					return symmetryTransformation ? 1.0 - (bt*h/a) : bt*h/a;
				}
			}
			return symmetryTransformation ? 1.0 - (bt*h/a) : bt*h/a;
		}
		/// <summary>Inerse regularized incomplete Beta special function</summary>
		/// <param name="a">Argument value</param>
		/// <param name="b">Argument value</param>
		/// <param name="p">Argument value</param>
		/// <returns>Return inverse incomplete Beta special function
		/// for positive a and positive b and x between 0 and 1</returns>
		public static double inverseRegularizedBeta(double a, double b, double p) {
			return inverseRegularizedBetaWithCancel(a, b, p, 0);
		}
		/// <summary>Inerse regularized incomplete Beta special function
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="a">Argument value</param>
		/// <param name="b">Argument value</param>
		/// <param name="p">Argument value</param>
		/// <returns>Return inverse incomplete Beta special function
		/// for positive a and positive b and x between 0 and 1</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.inverseRegularizedBeta(double,double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double inverseRegularizedBetaWithCancel(double a, double b, double p, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;

			if ( (a < 0) || (b < 0) ) return Double.NaN;
			if (BinaryRelations.isEqualOrAlmost(a, 0.0)) return Double.NaN;
			if (BinaryRelations.isEqualOrAlmost(b, 0.0)) return Double.NaN;

			if (p < -BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;
			if (p > 1 + BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;

			if (BinaryRelations.isEqualOrAlmost(p, 0.0)) return 0.0;
			if (BinaryRelations.isEqualOrAlmost(p, 1.0)) return 1.0;
			if (BinaryRelations.isEqualOrAlmost(a, 1.0)) return 1.0 - Math.Pow(1.0 - p, 1.0 / b);
			if (BinaryRelations.isEqualOrAlmost(b, 1.0)) return Math.Pow(p, 1.0 / a);

			double pp, t, u, err, x, al, h, w;
			double a1 = a - 1.0;
			double b1 = b - 1.0;

			if (a >= 1.0 && b >= 1.0) {
				pp = (p < 0.5) ? p : 1.0 - p;
				t = Math.Sqrt(-2.0 * Math.Log(pp));
				x = (2.30753 + t * 0.27061) / (1.0 + t * (0.99229 + t * 0.04481)) - t;
				if (p < 0.5) x = -x;
				al = (x * x - 3.0) / 6.0;
				h = 2.0 / (1.0 / (2.0 * a - 1.0) + 1.0 / (2.0 * b - 1.0));
				w = (x * Math.Sqrt(al + h) / h) - (1.0 / (2.0 * b - 1.0) - 1.0 / (2.0 * a - 1.0)) * (al + 5.0 / 6.0 - 2.0 / (3.0 * h));
				x = a / (a + b * Math.Exp(2.0 * w));
			} else {
				double lna = Math.Log(a / (a + b));
				double lnb = Math.Log(b / (a + b));
				t = Math.Exp(a * lna) / a;
				u = Math.Exp(b * lnb) / b;
				w = t + u;
				if (p < t / w) x = Math.Pow(a * w * p, 1.0 / a);
				else x = 1.0 - Math.Pow(b * w * (1.0 - p), 1.0 / b);
			}

			double afac = -logGammaWithCancel(a, cancelId) - logGammaWithCancel(b, cancelId) + logGammaWithCancel(a + b, cancelId);
			for (int j = 0; j < 10; j++) {
				if (x == 0.0 || x == 1.0) return x;
				err = regularizedBetaWithCancel(a, b, x, cancelId) - p;
				t = Math.Exp(a1 * Math.Log(x) + b1 * Math.Log(1.0 - x) + afac);
				u = err / t;
				x -= (t = u / (1.0 - 0.5 * Math.Min(1.0, u * (a1 / x - b1 / (1.0 - x)))));
				if (x <= 0.0) x = 0.5 * (x + t);
				if (x >= 1.0) x = 0.5 * (x + t + 1.0);
				if (Math.Abs(t) < 1e-11 * x && j > 0) break;
			}
			return x;
		}
		/*
		 * halleyIteration epsilon
		 */
		private const double GSL_DBL_EPSILON = 2.2204460492503131e-16;
		/// <summary>Halley's iteration used in Lambert-W approximation</summary>
		/// <returns>Halley's iteration value if successful, otherwise Double.NaN</returns>
		/// <remarks><para>Parameter <c>x</c>: Point at which Halley iteration will be calculated</para><para>Parameter <c>wInitial</c>: Starting point</para><para>Parameter <c>maxIter</c>: Maximum number of iteration</para></remarks>
		private static double halleyIterationWithCancel(double x, double wInitial, int maxIter, int cancelId) {
			double w = wInitial;
			double tol = 1;
			double t = 0, p, e;
			for (int i = 0; i < maxIter; i++) {
				if (mXparser.isCalculationCancelled(cancelId))
					return Double.NaN;
				e = Math.Exp(w);
				p = w + 1.0;
				t = w * e - x;
				if (w > 0) t = (t / p) / e;
				else t /= e * p - 0.5 * (p + 1.0) * t / p;
				w -= t;
				tol = GSL_DBL_EPSILON * Math.Max(Math.Abs(w), 1.0 / (Math.Abs(p) * e));
				if (Math.Abs(t) < tol) return w;
			}
			double perc = Math.Abs(t / tol);
			if (perc >= 0.5 && perc <= 1.5) return w;
			return Double.NaN;
		}
		/// <summary>Private method used in Lambert-W approximation - near zero</summary>
		/// <param name="r"></param>
		/// <returns>Ner zero approximation</returns>
		private static double seriesEval(double r) {
			double t8 = Coefficients.lambertWqNearZero[8] + r * (Coefficients.lambertWqNearZero[9] + r * (Coefficients.lambertWqNearZero[10] + r * Coefficients.lambertWqNearZero[11]));
			double t5 = Coefficients.lambertWqNearZero[5] + r * (Coefficients.lambertWqNearZero[6] + r * (Coefficients.lambertWqNearZero[7] + r * t8));
			double t1 = Coefficients.lambertWqNearZero[1] + r * (Coefficients.lambertWqNearZero[2] + r * (Coefficients.lambertWqNearZero[3] + r * (Coefficients.lambertWqNearZero[4] + r * t5)));
			return Coefficients.lambertWqNearZero[0] + r * t1;
		}
		/// <summary>W0 - Principal branch of Lambert-W function</summary>
		/// <returns>Approximation of principal branch of Lambert-W function</returns>
		/// <remarks><para>Parameter <c>x</c>: </para></remarks>
		private static double lambertW0WithCancel(double x, int cancelId) {
			if (Math.Abs(x) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return 0;
			if (Math.Abs(x + MathConstants.EXP_MINUS_1) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return -1;
			if (Math.Abs(x - 1) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return MathConstants.OMEGA;
			if (Math.Abs(x - MathConstants.E) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return 1;
			if (Math.Abs(x + MathConstants.LN_SQRT2) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return -2 * MathConstants.LN_SQRT2;
			if (x < -MathConstants.EXP_MINUS_1) return Double.NaN;
			double q = x + MathConstants.EXP_MINUS_1;
			if (q < 1.0e-03) return seriesEval(Math.Sqrt(q));
			const int MAX_ITER = 100;
			double w;
			if (x < 1) {
				double p = Math.Sqrt(2.0 * MathConstants.E * q);
				w = -1.0 + p * (1.0 + p * (-1.0 / 3.0 + p * 11.0 / 72.0));
			}
			else {
				w = Math.Log(x);
				if (x > 3.0) w -= Math.Log(w);
			}
			return halleyIterationWithCancel(x, w, MAX_ITER, cancelId);
		}
		/// <summary>Minus 1 branch of Lambert-W function
		/// Analytical approximations for real values of the Lambert W-function - D.A. Barry
		/// Mathematics and Computers in Simulation 53 (2000) 95–103</summary>
		/// <param name="x"></param>
		/// <returns>Approxmiation of minus 1 branch of Lambert-W function</returns>
		private static double lambertW1(double x) {
			if (x >= -BinaryRelations.DEFAULT_COMPARISON_EPSILON) return Double.NaN;
			if (x < -MathConstants.EXP_MINUS_1) return Double.NaN;
			if (Math.Abs(x + MathConstants.EXP_MINUS_1) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return -1;
			/*
			 * Analytical approximations for real values of the Lambert W-function - D.A. Barry
			 * Mathematics and Computers in Simulation 53 (2000) 95–103
			 */
			double M1 = 0.3361;
			double M2 = -0.0042;
			double M3 = -0.0201;
			double s = -1 - Math.Log(-x);
			return -1.0 - s - (2.0 / M1) * (1.0 - 1.0 / (1.0 + ((M1 * Math.Sqrt(s / 2.0)) / (1.0 + M2 * s * Math.Exp(M3 * Math.Sqrt(s))))));
		}
		/// <summary>Real-valued Lambert-W function approximation.</summary>
		/// <param name="x">Point at which function will be approximated</param>
		/// <param name="branch">Branch id, 0 for principal branch, -1 for the other branch</param>
		/// <returns>Principal branch for x greater or equal than -1/e, otherwise Double.NaN.
		///               Minus 1 branch for x greater or equal than -1/e and lower than 0, otherwise Double.NaN.</returns>
		public static double lambertW(double x, double branch) {
			return lambertWWithCancel(x, branch, 0);
		}
		/// <summary>Real-valued Lambert-W function approximation.
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="x">Point at which function will be approximated</param>
		/// <param name="branch">Branch id, 0 for principal branch, -1 for the other branch</param>
		/// <returns>Principal branch for x greater or equal than -1/e, otherwise Double.NaN.
		///               Minus 1 branch for x greater or equal than -1/e and lower than 0, otherwise Double.NaN.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.lambertW(double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double lambertWWithCancel(double x, double branch, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(x)) return Double.NaN;
			if (Double.IsNaN(branch)) return Double.NaN;
			if (Math.Abs(branch) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return lambertW0WithCancel(x, cancelId);
			if (Math.Abs(branch + 1) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON) return lambertW1(x);
			return Double.NaN;
		}
		/// <summary>The Gaussian or ordinary hypergeometric special function</summary>
		/// <param name="a">Argument value</param>
		/// <param name="b">Argument value</param>
		/// <param name="c">Argument value</param>
		/// <param name="z">Argument value</param>
		/// <param name="maxIterations">Stop condition</param>
		/// <param name="precision">Stop condition</param>
		/// <returns>Returns hypergeometric special function approximation</returns>
		public static double hypergeometricF(double a, double b, double c, double z, double maxIterations, double precision){
			return hypergeometricFWithCancel(a, b, c, z, maxIterations, precision, 0);
		}
		/// <summary>The Gaussian or ordinary hypergeometric special function
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// </para><para>There is no uniform cancellation result across the WithCancel family.
		/// The existing returns of this method remain in effect; a caller using a
		/// sentinel may throw an exception. Querying the signal does not establish
		/// whether this particular call observed cancellation.</para></summary>
		/// <param name="a">Argument value</param>
		/// <param name="b">Argument value</param>
		/// <param name="c">Argument value</param>
		/// <param name="z">Argument value</param>
		/// <param name="maxIterations">Stop condition</param>
		/// <param name="precision">Stop condition</param>
		/// <returns>Returns hypergeometric special function approximation</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.hypergeometricF(double,double,double,double,double,double)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double hypergeometricFWithCancel(double a, double b, double c, double z, double maxIterations, double precision, int cancelId){
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;
			if (Double.IsNaN(c)) return Double.NaN;
			if (Double.IsNaN(z)) return Double.NaN;
			if (Double.IsNaN(maxIterations)) return Double.NaN;
			if (Double.IsNaN(precision)) return Double.NaN;
			if (maxIterations < 1.0) return Double.NaN;
			if (precision < 0.0) return Double.NaN;
			double y;
			if(Math.Abs(z) >= 0.5)
				y = Math.Pow(1.0 - z, -a) * hypergeometricFDirectWithCancel(a, c - b, c, z/(z - 1), maxIterations, precision, cancelId);
			else
				y = hypergeometricFDirectWithCancel(a, b, c, z, maxIterations, precision, cancelId);
			return y;
		}
		/// <summary>The Gaussian or ordinary hypergeometric special function - direct</summary>
		/// <returns>Returns hypergeometric special function approximation - direct</returns>
		/// <remarks><para>Parameter <c>a</c>: Argument value</para><para>Parameter <c>b</c>: Argument value</para><para>Parameter <c>c</c>: Argument value</para><para>Parameter <c>z</c>: Argument value</para><para>Parameter <c>maxIterations</c>: Stop condition</para><para>Parameter <c>precision</c>: Stop condition</para></remarks>
		private static double hypergeometricFDirectWithCancel(double a, double b, double c, double z, double maxIterations, double precision, int cancelId){
			if (Double.IsNaN(a)) return Double.NaN;
			if (Double.IsNaN(b)) return Double.NaN;
			if (Double.IsNaN(c)) return Double.NaN;
			if (Double.IsNaN(z)) return Double.NaN;
			if (Double.IsNaN(maxIterations)) return Double.NaN;
			if (Double.IsNaN(precision)) return Double.NaN;
			if (maxIterations < 1) return Double.NaN;
			if (precision < 0) return Double.NaN;
			double y, yp, n;
			bool done;
			y = 0;
			done = false;
			for (n = 0; n < maxIterations && !done; n = n + 1){
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
				yp = MathFunctions.factorialRisingWithCancel(a, n, cancelId) * MathFunctions.factorialRisingWithCancel(b, n, cancelId) / MathFunctions.factorialRisingWithCancel(c, n, cancelId) * Math.Pow(z, n) / MathFunctions.factorialWithCancel(n, cancelId);
				if(Math.Abs(yp) < precision)
					done = true;
				y = y + yp;
			}
			return y;
		}
	}
}