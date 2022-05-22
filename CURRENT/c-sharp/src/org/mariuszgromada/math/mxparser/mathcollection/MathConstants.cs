/*
 * @(#)MathConstants.cs        5.0.4    2022-05-22
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2022-05-22
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2022 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use as well as
 * commercial use.
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
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call takes place only internally for logging purposes and
 *    there is no connection with other external services and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, AUTHOR & PUBLISHER allow you
 *     to download, install and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the conditions of test
 *     environments. The purpose of the tests must not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all below terms and
 *     conditions, and you have acknowledged and understood the following
 *     DISCLAIMER, AUTHOR & PUBLISHER grant you a nonexclusive license
 *     including the following rights:
 *  3. The license has been granted only to you, i.e., the person or entity
 *     that made the purchase, who is identified and confirmed by the data
 *     provided during the purchase.
 *  4. In case you purchased a license in the "ONE-TIME PURCHASE" model,
 *     the license has been granted only for the PRODUCT version specified
 *     in the purchase. The upgrade policy gives you additional rights and
 *     is described in the dedicated section below.
 *  5. In case you purchased a license in the "SUBSCRIPTION" model, you can
 *     install and use any version of the PRODUCT, but only during the
 *     subscription validity period.
 *  6. In case you purchased a "SINGLE LICENSE" you can install and use the
 *     PRODUCT from one workstation.
 *  7. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number
 *     of workstations purchased as per order.
 *  8. In case you purchased a "SITE LICENSE ", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
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
 *     The method call takes place only internally for logging purposes and
 *     there is no connection with other external services and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. AUTHOR & PUBLISHER reserve all rights not expressly granted to you
 *     in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned the
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies of your final product
 * (delivered to your end-users) is not limited.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g.: 5.0), you can freely install
 *    all the various releases specified in the [PATCH] version (e.g.: 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for [MAJOR].[MINOR] version (e.g.: 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g.: 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
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
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF AUTHOR OR PUBLISHER.
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
	/**
	 * MathConstants - class representing the most important math constants.
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
	public sealed class MathConstants {
		/**
		 * Pi, Archimedes' constant or Ludolph's number
		 */
		public const double PI = 3.14159265358979323846264338327950288;
		/**
		 * Pi/2
		 */
		public static readonly double PIBY2 = PI / 2.0;
		/**
		 * 1/Pi
		 */
		public static readonly double PIINV = 1.0 / PI;
		/**
		 * Napier's constant, or Euler's number, base of Natural logarithm
		 */
		public const double E = 2.71828182845904523536028747135266249;
		/**
		 * Euler-Mascheroni constant
		 */
		public const double EULER_MASCHERONI = 0.57721566490153286060651209008240243;
		/**
		 * Golden ratio
		 */
		public const double GOLDEN_RATIO = 1.61803398874989484820458683436563811;
		/**
		 * Plastic constant
		 */
		public const double PLASTIC = 1.32471795724474602596090885447809734;
		/**
		 * Embree-Trefethen constant
		 */
		public const double EMBREE_TREFETHEN = 0.70258;
		/**
		 * Feigenbaum constant
		 */
		public const double FEIGENBAUM_DELTA = 4.66920160910299067185320382046620161;
		/**
		 * Feigenbaum constant
		 */
		public const double FEIGENBAUM_ALFA = 2.50290787509589282228390287321821578;
		/**
		 * Feigenbaum constant
		 */
		public const double TWIN_PRIME = 0.66016181584686957392781211001455577;
		/**
		 * Meissel-Mertens constant
		 */
		public const double MEISSEL_MERTEENS = 0.26149721284764278375542683860869585;
		/**
		 * Brun's constant for twin primes
		 */
		public const double BRAUN_TWIN_PRIME = 1.9021605823;
		/**
		 * Brun's constant for prime quadruplets
		 */
		public const double BRAUN_PRIME_QUADR = 0.8705883800;
		/**
		 * de Bruijn-Newman constant
		 */
		public const double BRUIJN_NEWMAN = -2.7E-9;
		/**
		 * Catalan's constant
		 */
		public const double CATALAN = 0.91596559417721901505460351493238411;
		/**
		 * Landau-Ramanujan constant
		 */
		public const double LANDAU_RAMANUJAN = 0.76422365358922066299069873125009232;
		/**
		 * Viswanath's constant
		 */
		public const double VISWANATH = 1.13198824;
		/**
		 * Legendre's constant
		 */
		public const double LEGENDRE = 1.0;
		/**
		 * Ramanujan-Soldner constant
		 */
		public const double RAMANUJAN_SOLDNER = 1.45136923488338105028396848589202744;
		/**
		 * Erdos-Borwein constant
		 */
		public const double ERDOS_BORWEIN = 1.60669515241529176378330152319092458;
		/**
		 * Bernstein's constant
		 */
		public const double BERNSTEIN = 0.28016949902386913303;
		/**
		 * Gauss-Kuzmin-Wirsing constant
		 */
		public const double GAUSS_KUZMIN_WIRSING = 0.30366300289873265859744812190155623;
		/**
		 * Hafner-Sarnak-McCurley constant
		 */
		public const double HAFNER_SARNAK_MCCURLEY = 0.35323637185499598454;
		/**
		 * Golomb-Dickman constant
		 */
		public const double GOLOMB_DICKMAN = 0.62432998854355087099293638310083724;
		/**
		 * Cahen's constant
		 */
		public const double CAHEN = 0.6434105463;
		/**
		 * Laplace limit
		 */
		public const double LAPLACE_LIMIT = 0.66274341934918158097474209710925290;
		/**
		 * Alladi-Grinstead constant
		 */
		public const double ALLADI_GRINSTEAD = 0.8093940205;
		/**
		 * Lengyel's constant
		 */
		public const double LENGYEL = 1.0986858055;
		/**
		 * Levy's constant
		 */
		public const double LEVY = 3.27582291872181115978768188245384386;
		/**
		 * Apery's constant
		 */
		public const double APERY = 1.20205690315959428539973816151144999;
		/**
		 * Mills' constant
		 */
		public const double MILLS = 1.30637788386308069046861449260260571;
		/**
		 * Backhouse's constant
		 */
		public const double BACKHOUSE = 1.45607494858268967139959535111654356;
		/**
		 * Porter's constant
		 */
		public const double PORTER = 1.4670780794;
		/**
		 * Porter's constant
		 */
		public const double LIEB_QUARE_ICE = 1.5396007178;
		/**
		 * Niven's constant
		 */
		public const double NIVEN = 1.70521114010536776428855145343450816;
		/**
		 * Sierpiński's constant
		 */
		public const double SIERPINSKI = 2.58498175957925321706589358738317116;
		/**
		 * Khinchin's constant
		 */
		public const double KHINCHIN = 2.68545200106530644530971483548179569;
		/**
		 * Fransén-Robinson constant
		 */
		public const double FRANSEN_ROBINSON = 2.80777024202851936522150118655777293;
		/**
		 * Landau's constant
		 */
		public const double LANDAU = 0.5;
		/**
		 * Parabolic constant
		 */
		public const double PARABOLIC = 2.29558714939263807403429804918949039;
		/**
		 * Omega constant
		 */
		public const double OMEGA = 0.56714329040978387299996866221035555;
		/**
		 * MRB constant
		 */
		public const double MRB = 0.187859;
		/**
		 * A069284 - Logarithmic integral function li(2)
		 */
		public const double LI2 = 1.045163780117492784844588889194613136522615578151;
		/**
		 * Gompertz Constant OEIS A073003
		 */
		public const double GOMPERTZ = 0.596347362323194074341078499369279376074;
		/**
		 * Square root of 2
		 */
		public static readonly double SQRT2 = Math.Sqrt(2.0);
		/**
		 * Square root of pi
		 */
		public const double SQRTPi = 1.772453850905516027298167483341145182797549456122387128213d;
		/**
		 * Square root of 2*pi
		 */
		public const double SQRT2Pi = 2.5066282746310005024157652848110452530069867406099d;
		/**
		 * Natural logarithm of pi
		 */
		public static readonly double LNPI = MathFunctions.ln(PI);
		/**
		 * Tetration left convergence limit
		 */
		public static readonly double EXP_MINUS_E = Math.Pow(E, -E);
		/**
		 * Tetration right convergence limit
		 */
		public static readonly double EXP_1_OVER_E = Math.Pow(E, 1.0 / E);
		/**
		 * 1 over e
		 */
		public const double EXP_MINUS_1 = 1.0 / Math.E;
		/**
		 * Natural logarithm of sqrt(2)
		 */
		public static readonly double LN_SQRT2 = MathFunctions.ln(SQRT2);
		/**
		 * SQRT2BY2
		 */
		public static readonly double SQRT2BY2 = SQRT2 / 2.0;
		/**
		 * SQRT3
		 */
		public static readonly double SQRT3 = Math.Sqrt(3.0);
		/**
		 * SQRT3BY2
		 */
		public static readonly double SQRT3BY2 = SQRT3 / 2.0;
		/**
		 * D2BYSQRT3
		 */
		public static readonly double D2BYSQRT3 = 2.0 / SQRT3;
		/**
		 * SQRT3BY3
		 */
		public static readonly double SQRT3BY3 = SQRT3 / 3.0;
		/**
		 * SQRT5
		 */
		public static readonly double SQRT5 = Math.Sqrt(5.0);
		/**
		 * Not-a-Number
		 */
		public const double NOT_A_NUMBER = Double.NaN;
	}
}