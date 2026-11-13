/*
 * @(#)BooleanAlgebra.cs        6.2.0    2026-11-13
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
	/// <summary>BooleanAlgebra - class for boolean operators.</summary>
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
	public sealed class BooleanAlgebra {
		/// <summary>False as integer</summary>
		public const int FALSE = 0;
		/// <summary>True as integer</summary>
		public const int TRUE = 1;
		/// <summary>Null as integer</summary>
		public const int NULL = 2;
		/// <summary>False as double</summary>
		public const double F = 0;
		/// <summary>True as double</summary>
		public const double T = 1;
		/// <summary>Null as double</summary>
		public const double N = Double.NaN;
		/// <summary>AND truth table</summary>
		public static readonly double[,] AND_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ F, F, F} ,
			/* T */	{ F, T, N} ,
			/* N */	{ F, N, N}
		};
		/// <summary>NAND truth table</summary>
		public static readonly double[,] NAND_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ T, T, T} ,
			/* T */	{ T, F, N} ,
			/* N */	{ T, N, N}
		};
		/// <summary>OR truth table</summary>
		public static readonly double[,] OR_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ F, T, N} ,
			/* T */	{ T, T, T} ,
			/* N */	{ N, T, N}
		};
		/// <summary>NOR truth table</summary>
		public static readonly double[,] NOR_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ T, F, N} ,
			/* T */	{ F, F, F} ,
			/* N */	{ N, F, N}
		};
		/// <summary>XOR truth table</summary>
		public static readonly double[,] XOR_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ F, T, N} ,
			/* T */	{ T, F, N} ,
			/* N */	{ N, N, N}
		};
		/// <summary>XNOR truth table</summary>
		public static readonly double[,] XNOR_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ T, F, N} ,
			/* T */	{ F, T, N} ,
			/* N */	{ N, N, N}
		};
		/// <summary>IMP truth table</summary>
		public static readonly double[,] IMP_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ T, T, T} ,
			/* T */	{ F, T, N} ,
			/* N */	{ N, T, N}
		};
		/// <summary>CIMP truth table</summary>
		public static readonly double[,] CIMP_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ T, F, N} ,
			/* T */	{ T, T, T} ,
			/* N */	{ T, N, N}
		};
		/// <summary>EQV truth table</summary>
		public static readonly double[,] EQV_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ T, F, N} ,
			/* T */	{ F, T, N} ,
			/* N */	{ N, N, N}
		};
		/// <summary>NIMP truth table</summary>
		public static readonly double[,] NIMP_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ F, F, F} ,
			/* T */	{ T, F, N} ,
			/* N */	{ N, F, N}
		};
		/// <summary>CNIMP truth table</summary>
		public static readonly double[,] CNIMP_TRUTH_TABLE = {
			/*		  F  T  N
			/* F */	{ F, T, N} ,
			/* T */	{ F, F, F} ,
			/* N */	{ F, N, N}
		};
		/// <summary>NOT truth table</summary>
		public static readonly double[] NOT_TRUTH_TABLE = {
				   /* F  T  N	*/
					  T, F, N
		};
		/// <summary>Double to integer boolean translation</summary>
		/// <param name="a">the double number</param>
		/// <returns>If a = Double.NaN return NULL,
		///             else if a &lt;&gt; 0 return TRUE,
		///             else return FALSE.</returns>
		public static int double2IntBoolean(double a) {
			if (Double.IsNaN(a))
				return NULL;
			if (BinaryRelations.epsilonComparison) {
				/* Epsilon comparison mode */
				if (MathFunctions.abs(a) > BinaryRelations.epsilon)
					return TRUE;
				else
					return FALSE;
			}
			else {
				/* Exact comparison mode */
				if (a != 0)
					return TRUE;
				else
					return FALSE;
			}
		}
		/// <summary>Boolean AND</summary>
		/// <param name="a">the a number (a AND b)</param>
		/// <param name="b">the b number (a AND b)</param>
		/// <returns>Truth table element AND[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double and(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return AND_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean OR</summary>
		/// <param name="a">the a number (a OR b)</param>
		/// <param name="b">the b number (a OR b)</param>
		/// <returns>Truth table element OR[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double or(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return OR_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean XOR</summary>
		/// <param name="a">the a number (a XOR b)</param>
		/// <param name="b">the b number (a XOR b)</param>
		/// <returns>Truth table element XOR[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double xor(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return XOR_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean NAND</summary>
		/// <param name="a">the a number (a NAND b)</param>
		/// <param name="b">the b number (a NAND b)</param>
		/// <returns>Truth table element NAND[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double nand(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return NAND_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean NOR</summary>
		/// <param name="a">the a number (a NOR b)</param>
		/// <param name="b">the b number (a NOR b)</param>
		/// <returns>Truth table element NOR[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double nor(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return NOR_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean XNOR</summary>
		/// <param name="a">the a number (a XNOR b)</param>
		/// <param name="b">the b number (a XNOR b)</param>
		/// <returns>Truth table element XNOR[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double xnor(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return XNOR_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean IMP</summary>
		/// <param name="a">the a number (a IMP b)</param>
		/// <param name="b">the b number (a IMP b)</param>
		/// <returns>Truth table element IMP[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double imp(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return IMP_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean EQV</summary>
		/// <param name="a">the a number (a EQV b)</param>
		/// <param name="b">the b number (a EQV b)</param>
		/// <returns>Truth table element EQV[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double eqv(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return EQV_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean NOT</summary>
		/// <param name="a">the a number (NOT a)</param>
		/// <returns>Truth table element NOT[A]
		///             where A = double2IntBoolean(a)</returns>
		public static double not(double a) {
			int A = double2IntBoolean(a);
			return NOT_TRUTH_TABLE[A];
		}
		/// <summary>Boolean CIMP</summary>
		/// <param name="a">the a number (a CIMP b)</param>
		/// <param name="b">the b number (a CIMP b)</param>
		/// <returns>Truth table element CIMP[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double cimp(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return CIMP_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean NIMP</summary>
		/// <param name="a">the a number (a NIMP b)</param>
		/// <param name="b">the b number (a NIMP b)</param>
		/// <returns>Truth table element NIMP[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double nimp(double a, double b) {
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return NIMP_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean CNIMP</summary>
		/// <param name="a">the a number (a CNIMP b)</param>
		/// <param name="b">the b number (a CNIMP b)</param>
		/// <returns>Truth table element CNIMP[A][B]
		///             where A = double2IntBoolean(a), B = double2IntBoolean(b)</returns>
		public static double cnimp(double a, double b)
		{
			int A = double2IntBoolean(a);
			int B = double2IntBoolean(b);
			return CNIMP_TRUTH_TABLE[A, B];
		}
		/// <summary>Boolean AND variadic</summary>
		/// <param name="values">List of values</param>
		/// <returns>Returns BooleanAlgebra.TRUE if all values on the list are BooleanAlgebra.TURE,
		///           otherwise returns BooleanAlgebra.FALSE</returns>
		public static double andVariadic(params double[] values) {
			return andVariadicWithCancel(values, 0);
		}
		/// <summary>Boolean AND variadic
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
		/// <returns>Returns BooleanAlgebra.TRUE if all values on the list are BooleanAlgebra.TURE,
		///           otherwise returns BooleanAlgebra.FALSE</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.BooleanAlgebra.andVariadic(double[])"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double andVariadicWithCancel(double[] values, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (values == null) return Double.NaN;
			if (values.Length == 0) return Double.NaN;
			int cntTrue = 0;
			int bv;
			foreach (double v in values) {
				bv = double2IntBoolean(v);
				if (bv == FALSE) return FALSE;
				if (bv == TRUE) cntTrue++;
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			if (cntTrue == values.Length) return TRUE;
			else return Double.NaN;
		}
		/// <summary>Boolean OR variadic</summary>
		/// <param name="values">List of values</param>
		/// <returns>Returns BooleanAlgebra.TRUE if at least one value on the list is BooleanAlgebra.TURE,
		///           otherwise returns BooleanAlgebra.FALSE</returns>
		public static double orVariadic(params double[] values) {
			return orVariadicWithCancel(values, 0);
		}
		/// <summary>Boolean OR variadic
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
		/// <returns>Returns BooleanAlgebra.TRUE if at least one value on the list is BooleanAlgebra.TURE,
		///           otherwise returns BooleanAlgebra.FALSE</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.BooleanAlgebra.orVariadic(double[])"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double orVariadicWithCancel(double[] values, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (values == null) return Double.NaN;
			if (values.Length == 0) return Double.NaN;
			int cntFalse = 0;
			int bv;
			foreach (double v in values) {
				bv = double2IntBoolean(v);
				if (bv == TRUE) return TRUE;
				if (bv == FALSE) cntFalse++;
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			if (cntFalse == values.Length) return FALSE;
			else return Double.NaN;
		}
		/// <summary>Boolean XOR variadic</summary>
		/// <param name="values">List of values</param>
		/// <returns>Returns BooleanAlgebra.TRUE if exactly one value on the list is BooleanAlgebra.TURE,
		///           otherwise returns BooleanAlgebra.FALSE</returns>
		public static double xorVariadic(params double[] values) {
			return xorVariadicWithCancel(values, 0);
		}
		/// <summary>Boolean XOR variadic
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
		/// <returns>Returns BooleanAlgebra.TRUE if exactly one value on the list is BooleanAlgebra.TURE,
		///           otherwise returns BooleanAlgebra.FALSE</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mathcollection.BooleanAlgebra.xorVariadic(double[])"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public static double xorVariadicWithCancel(double[] values, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (values == null) return Double.NaN;
			if (values.Length == 0) return Double.NaN;
			int cntTrue = 0;
			int bv;
			foreach (double v in values) {
				bv = double2IntBoolean(v);
				if (bv == TRUE) {
					cntTrue++;
					if (cntTrue > 1) return FALSE;
				}
				if (bv == NULL) return Double.NaN;
				if (mXparser.isCalculationCancelled(cancelId)) return Double.NaN;
			}
			if (cntTrue == 1) return TRUE;
			else return FALSE;
		}
	}
}