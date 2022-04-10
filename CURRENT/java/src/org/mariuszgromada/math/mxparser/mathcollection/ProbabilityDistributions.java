/*
 * @(#)ProbabilityDistributions.java        5.0.0    2022-04-10
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
package org.mariuszgromada.math.mxparser.mathcollection;

import java.util.Random;

import org.mariuszgromada.math.mxparser.Argument;
import org.mariuszgromada.math.mxparser.Constant;
import org.mariuszgromada.math.mxparser.Expression;
import org.mariuszgromada.math.mxparser.mXparser;
import org.mariuszgromada.math.mxparser.parsertokens.BinaryRelation;

/**
 * ProbabilityDistributions - random number generators, PDF - Probability Distribution Functions,
 * CDF - Cumulative Distribution Functions, QNT - Quantile Functions (Inverse Cumulative Distribution
 * Functions).
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
public final class ProbabilityDistributions {
	/**
	 * Random number generator
	 */
	public static Random randomGenerator = new Random();
	/**
	 * Random number from Uniform Continuous distribution over interval [a, b).
	 *
	 * @param a       Interval limit - left / lower.
	 * @param b       Interval limit - right / upper.
	 * @param rnd     Random number generator.
	 * @return        Double.NaN if a or b is null, or b is lower than a -
	 *                otherwise returns random number.
	 */
	public static double rndUniformContinuous(double a, double b, Random rnd) {
		if (Double.isNaN(a)) return Double.NaN;
		if (Double.isNaN(b)) return Double.NaN;
		if (b < a) return Double.NaN;
		if (a == b) return a;
		double r = a + rnd.nextDouble() * (b - a);
		return r;
	}
	/**
	 * Random number from dUniform Continuous distribution over interval [a, b).
	 * @param a       Interval limit - left / lower.
	 * @param b       Interval limit - right / upper.
	 * @return        Double.NaN if a or b is null, or b is lower than a -
	 *                otherwise returns random number.
	 */
	public static double rndUniformContinuous(double a, double b) {
		return rndUniformContinuous(a, b, randomGenerator);
	}
	/**
	 * Random number from Uniform Continuous distribution over interval [0, 1).
	 *
	 * @param rnd     Random number generator.
	 * @return        Random number.
	 */
	public static double rndUniformContinuous(Random rnd) {
		return rnd.nextDouble();
	}
	/**
	 * Random number from Uniform Continuous distribution over interval [0, 1).
	 *
	 * @return        Random number.
	 */
	public static double randomUniformContinuous() {
		return rndUniformContinuous(randomGenerator);
	}
	/**
	 * PDF - Probability Distribution Function - Uniform Continuous distribution
	 * over interval [a, b).
	 *
	 * @param x       Point to evaluate pdf function.
	 * @param a       Interval limit - left / lower.
	 * @param b       Interval limit - right / upper.
	 * @return        Double.NaN if a or b is null, or b is lower than a -
	 *                otherwise function value.
	 */
	public static double pdfUniformContinuous(double x, double a, double b) {
		if (Double.isNaN(x)) return Double.NaN;
		if (Double.isNaN(a)) return Double.NaN;
		if (Double.isNaN(b)) return Double.NaN;
		if (b < a) return Double.NaN;
		if (a == b) {
			if (x == a) return 1;
			else return 0;
		}
		if ( (x < a) || (x > b) ) return 0;
		if (x == Double.NEGATIVE_INFINITY) return 0.0;
		if (x == Double.POSITIVE_INFINITY) return 0.0;
		return 1.0 / (b - a);
	}
	/**
	 * CDF - Cumulative Distribution Function - Uniform Continuous distribution
	 * over interval [a, b).
	 *
	 * @param x       Point to evaluate cdf function.
	 * @param a       Interval limit - left / lower.
	 * @param b       Interval limit - right / upper.
	 * @return        Double.NaN if a or b is null, or b is lower than a -
	 *                otherwise function value.
	 */
	public static double cdfUniformContinuous(double x, double a, double b) {
		if (Double.isNaN(x)) return Double.NaN;
		if (Double.isNaN(a)) return Double.NaN;
		if (Double.isNaN(b)) return Double.NaN;
		if (b < a) return Double.NaN;
		if (a == b) {
			if (x < a) return 0.0;
			else return 1.0;
		}
		if (x < a) return 0.0;
		if (x >= b) return 1.0;
		if (x == Double.NEGATIVE_INFINITY) return 0.0;
		if (x == Double.POSITIVE_INFINITY) return 1.0;
		return (x - a) / (b - a);
	}
	/**
	 * QNT - Quantile Function - Uniform Continuous distribution over interval [a, b).
	 * (Inverse of Cumulative Distribution Function).
	 *
	 * @param q       Quantile.
	 * @param a       Interval limit - left / lower.
	 * @param b       Interval limit - right / upper.
	 * @return        Double.NaN if a or b is null, or b is lower than a
	 *                or q is lower than 0 or q is greater than 1 -
	 *                otherwise function value.
	 */
	public static double qntUniformContinuous(double q, double a, double b) {
		if (Double.isNaN(q)) return Double.NaN;
		if (Double.isNaN(a)) return Double.NaN;
		if (Double.isNaN(b)) return Double.NaN;
		if ( (q < 0.0) || (q > 1.0) ) return Double.NaN;
		if (b < a) return Double.NaN;
		if (a == b) {
			if (q == 1.0) return b;
			else return Double.NaN;
		}
		if (q == 0.0) return a;
		if (q == 1.0) return b;
		return a + q*(b-a);
	}
	/**
	 * Random number from Uniform Discrete distribution.
	 * over set interval (a, a+1, ..., b-1, b).
	 *
	 * @param a       Interval limit - left / lower.
	 * @param b       Interval limit - right / upper.
	 * @param rnd     Random number generator.
	 * @return        Double.NaN if a or b is null, or b is lower than a -
	 *                otherwise returns random number.
	 */
	public static double rndInteger(int a, int b, Random rnd) {
		if (Double.isNaN(a)) return Double.NaN;
		if (Double.isNaN(b)) return Double.NaN;
		if (b < a) return Double.NaN;
		if (a == b) return a;
		int n = (b - a) + 1;
		int r = a + rnd.nextInt(n);
		return r;
	}
	/**
	 * Random number from Uniform Discrete distribution.
	 * over set interval (a, a+1, ..., b-1, b).
	 *
	 * @param a       Interval limit - left / lower.
	 * @param b       Interval limit - right / upper.
	 * @return        Double.NaN if a or b is null, or b is lower than a -
	 *                otherwise returns random number.
	 */
	public static double rndInteger(int a, int b) {
		return rndInteger(a, b, randomGenerator);
	}
	/**
	 * Random integer.
	 *
	 * @param rnd     Random number generator.
	 * @return        Returns random number.
	 */
	public static int rndInteger(Random rnd) {
		return rnd.nextInt();
	}
	/**
	 * Random index from 0 to n-1,
	 *
	 * @param n          Bound.
	 * @param rnd        Random number generator.
	 * @return           if n &lt; 0 returns -1, otherwise random index.
	 */
	public static int rndIndex(int n, Random rnd) {
		if (n < 0) return -1;
		return rnd.nextInt(n);
	}
	/**
	 * Random index from 0 to n-1,
	 *
	 * @param n          Bound.
	 * @return           if n &lt; 0 returns -1, otherwise random index.
	 */
	public static int rndIndex(int n) {
		if (n < 0) return -1;
		return randomGenerator.nextInt(n);
	}
	/**
	 * Random integer.
	 *
	 * @return        Double.NaN if a or b is null, or b is lower than a -
	 *                otherwise returns random number.
	 */
	public static int rndInteger() {
		return rndInteger(randomGenerator);
	}
	/**
	 * Random number from normal distribution N(mean, stddev).
	 *
	 * @param mean              Mean value.
	 * @param stddev            Standard deviation.
	 * @param rnd               Random number generator.
	 * @return                  Double.NaN if mean or stddev or rnd is null or stddev is lower than 0 -
	 *                          otherwise random number.
	 */
	public static double rndNormal(double mean, double stddev, Random rnd) {
		if (Double.isNaN(mean)) return Double.NaN;
		if (Double.isNaN(stddev)) return Double.NaN;
		if (rnd == null) return Double.NaN;
		if (stddev < 0) return Double.NaN;
		if (stddev == 0) return mean;
		double x, a, v1;
		double b, v2;
		double r, fac;
		boolean polarTransform;
		do {
			if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
			a = rnd.nextDouble();
			b = rnd.nextDouble();
			v1 = 2.0*a - 1.0;
			v2 = 2.0*b - 1.0;
			r = (v1*v1) + (v2*v2);
			if (r >= 1.0 || r == 0.0) {
				x = 0.0;
				polarTransform = false;
			} else {
				fac = MathFunctions.sqrt( -2.0 * MathFunctions.ln(r) / r);
				x = v1*fac;
				polarTransform = true;
			}
		} while (!polarTransform);
		return mean + (stddev*x);
	}
	/**
	 * Random number from normal distribution N(mean, stddev).
	 *
	 * @param mean              Mean value.
	 * @param stddev            Standard deviation.
	 * @return                  Double.NaN if mean or stddev is null or stddev is lower than 0 -
	 *                          otherwise random number.
	 */
	public static double rndNormal(double mean, double stddev) {
		return rndNormal(mean, stddev, randomGenerator);
	}
	/**
	 * PDF - Probability Distribution Function - Normal distribution N(mean, stddev).
	 *
	 * @param x                 Point to evaluate pdf function.
	 * @param mean              Mean value.
	 * @param stddev            Standard deviation.
	 * @return                  Double.NaN if mean or stddev is null or stddev is lower than 0 -
	 *                          otherwise function value.
	 */
	public static double pdfNormal(double x, double mean, double stddev) {
		if (Double.isNaN(x)) return Double.NaN;
		if (Double.isNaN(mean)) return Double.NaN;
		if (Double.isNaN(stddev)) return Double.NaN;
		if (stddev < 0) return Double.NaN;
		if (stddev == 0) {
			if (x == mean) return 1.0;
			else return 0;
		}
		if (x == Double.NEGATIVE_INFINITY) return 0.0;
		if (x == Double.POSITIVE_INFINITY) return 0.0;
		double d = (x - mean) / stddev;
		return MathFunctions.exp( -0.5*d*d ) / ( MathConstants.SQRT2Pi*stddev );
	}
	/**
	 * CDF - Cumulative Distribution Function - Normal distribution N(mean, stddev).
	 *
	 * @param x                 Point to evaluate pdf function.
	 * @param mean              Mean value.
	 * @param stddev            Standard deviation.
	 * @return                  Double.NaN if mean or stddev is null or stddev is lower than 0 -
	 *                          otherwise function value.
	 */
	public static double cdfNormal(double x, double mean, double stddev) {
		if (Double.isNaN(x)) return Double.NaN;
		if (Double.isNaN(mean)) return Double.NaN;
		if (Double.isNaN(stddev)) return Double.NaN;
		if (stddev < 0) return Double.NaN;
		if (stddev == 0) {
			if (x < mean) return 0.0;
			else return 1.0;
		}
		if (x == Double.NEGATIVE_INFINITY) return 0.0;
		if (x == Double.POSITIVE_INFINITY) return 1.0;
		return 0.5 * SpecialFunctions.erfc( (mean - x) / (stddev * MathConstants.SQRT2));
	}
	/**
	 * QNT - Quantile Function - Normal distribution N(mean, stddev).
	 * (Inverse of Cumulative Distribution Function).
	 *
	 * @param q                 Quantile.
	 * @param mean              Mean value.
	 * @param stddev            Standard deviation.
	 * @return                  Double.NaN if mean or stddev is null or stddev is lower than 0
	 *                          or q is lower than 0 or q is greater than 1 -
	 *                          otherwise function value.
	 */
	public static double qntNormal(double q, double mean, double stddev) {
		if (Double.isNaN(q)) return Double.NaN;
		if (Double.isNaN(mean)) return Double.NaN;
		if (Double.isNaN(stddev)) return Double.NaN;
		if ( (q < 0.0) || (q > 1.0) ) return Double.NaN;
		if (stddev < 0) return Double.NaN;
		if (stddev == 0) {
			if (q == 1.0) return mean;
			else return Double.NaN;
		}
		if (q == 0.0) return Double.NEGATIVE_INFINITY;
		if (q == 1.0) return Double.POSITIVE_INFINITY;
		return mean - ( stddev * MathConstants.SQRT2 * SpecialFunctions.erfcInv( 2.0*q ) );
	}
	/**
	 * Probability distribution function - Student's t-distribution
	 *
	 * @param x   Given point.
	 * @param v   Number of degrees of freedom.
	 * @return    Returns the PDF of Student's t-distribution.
	 */
	public static double pdfStudentT(double x, double v){
		if (Double.isNaN(x)) return Double.NaN;
		if (Double.isNaN(v)) return Double.NaN;
		if (v <= 0) return Double.NaN;
		if (x == Double.NEGATIVE_INFINITY) return 0;
		if (x == Double.POSITIVE_INFINITY) return 0;

		if (BinaryRelations.isEqualOrAlmost(v, 1))
			return 1.0 / ( MathConstants.PI * (1.0 + x*x) );

		if (BinaryRelations.isEqualOrAlmost(v, 2))
			return 1.0 / ( 2.0 * MathConstants.SQRT2 * Math.pow(1 + x*x / 2.0, 1.5) );

		if (BinaryRelations.isEqualOrAlmost(v, 3))
			return 2.0 / ( MathConstants.PI * MathConstants.SQRT3 * Math.pow(1.0 + x*x / 3.0, 2.0) );

		if (BinaryRelations.isEqualOrAlmost(v, 4))
			return 3.0 / ( 8.0 * Math.pow(1.0 + x*x / 4, 2.5) );

		if (BinaryRelations.isEqualOrAlmost(v, 5))
			return 8.0 / ( 3.0 * MathConstants.PI * MathConstants.SQRT5 * Math.pow(1.0 + x*x / 5.0, 3.0) );

		if (v == Double.POSITIVE_INFINITY)
			return 1.0 / MathConstants.SQRT2Pi * Math.exp(-x*x / 2.0);

		return SpecialFunctions.gamma((v + 1.0) / 2.0) / (Math.sqrt(v*MathConstants.PI) * SpecialFunctions.gamma(v/2.0)) * Math.pow(1.0 + x*x/v, -((v + 1.0)/2.0));
	}
	/**
	 * Cumulative distribution function - Student's t-distribution
	 * for positive arguments
	 *
	 * @param x   Given point.
	 * @param v   Number of degrees of freedom.
	 * @return    Returns the CDF of Student's t-distribution.
	 */
	private static double cdfStudentTPositiveX(double x, double v) {
		if (BinaryRelations.isEqualOrAlmost(v, 1.0))
			return 0.5 + MathConstants.PIINV * Math.atan(x);

		if (BinaryRelations.isEqualOrAlmost(v, 2.0))
			return 0.5 + x / ( 2.0 * MathConstants.SQRT2 * Math.sqrt(1 + x*x / 2.0 ) );

		if (BinaryRelations.isEqualOrAlmost(v, 3.0))
			return 0.5 + MathConstants.PIINV * ( 1.0 / MathConstants.SQRT3 * x / (1.0 + x*x / 3.0) + Math.atan(x / MathConstants.SQRT3) );

		if (BinaryRelations.isEqualOrAlmost(v, 4.0))
			return 0.5 + 3.0/8.0 * x / Math.sqrt(1 + x*x / 4.0) * (1.0 - 1.0/12.0 * x*x / (1.0 + x*x /4.0) );

		if (BinaryRelations.isEqualOrAlmost(v, 5.0))
			return 0.5 + MathConstants.PIINV * ( x / ( MathConstants.SQRT5 * (1.0 + x*x / 5.0) ) * (1.0 + 2.0 / (3.0 * (1.0 + x*x / 5.0) ) ) + Math.atan(x / MathConstants.SQRT5) );

		if (v == Double.POSITIVE_INFINITY)
			return 0.5 * (1.0 + SpecialFunctions.erf(x / MathConstants.SQRT2) );

		return 1.0 / 2.0 + x * SpecialFunctions.gamma((v + 1.0) / 2.0) * SpecialFunctions.hypergeometricF(1.0 / 2.0, (v + 1.0) / 2.0, 3.0/2.0, -Math.pow(x, 2.0) / v, 300, 1e-14) / (Math.sqrt(MathConstants.PI * v) * SpecialFunctions.gamma(v / 2.0));
	}
	/**
	 * Cumulative distribution function - Student's t-distribution
	 *
	 * @param x   Given point.
	 * @param v   Number of degrees of freedom.
	 * @return    Returns the CDF of Student's t-distribution.
	 */
	public static double cdfStudentT(double x, double v){
		if (Double.isNaN(x)) return Double.NaN;
		if (Double.isNaN(v)) return Double.NaN;
		if (v <= 0) return Double.NaN;
		if (x == Double.NEGATIVE_INFINITY) return 0;
		if (x == Double.POSITIVE_INFINITY) return 1;
		if (BinaryRelations.isEqualOrAlmost(x, 0))
			return 0.5;

		if (x > 0)
			return cdfStudentTPositiveX(x, v);
		else
			return 1.0 - cdfStudentTPositiveX(-x, v);
	}

	private static Constant pp = new Constant("p", 1);
	private static Constant vv = new Constant("v", 1);
	private static Expression qntSolveStud = new Expression("solve( cStud(x, v) - p, x, -100000000000000.0, 100000000000000.0)", pp, vv) {{checkSyntax();}};
	/**
	 * Quantile function (Inverse cumulative distribution function)
	 * - Student's t-distribution
	 *
	 * @param p   Probability
	 * @param v   Number of degrees of freedom.
	 * @return    Returns the quantile of Student's t-distribution
	 */
	public static double qntStudentT(double p, double v){
		if (Double.isNaN(p)) return Double.NaN;
		if (Double.isNaN(v)) return Double.NaN;
		if (v <= 0.0) return Double.NaN;

		if( BinaryRelations.isEqualOrAlmost(p, 0.0) )
			return Double.NEGATIVE_INFINITY;
		if( BinaryRelations.isEqualOrAlmost(p, 1.0) )
			return Double.POSITIVE_INFINITY;

		if ( (p < 0.0) || (p > 1.0) ) return Double.NaN;

		if (BinaryRelations.isEqualOrAlmost(p, 0.5))
			return 0;

		double q, a;
		if( BinaryRelations.isEqualOrAlmost(v, 1.0) )
			return Math.tan(MathConstants.PI*(p - 0.5));

		if( BinaryRelations.isEqualOrAlmost(v, 2.0) ) {
			a = 4.0 * p * (1.0 - p);
			return (2.0 * p - 1.0) * Math.sqrt(2.0 / a);
		}

		if ( BinaryRelations.isEqualOrAlmost(v, 4.0) ) {
			a = 4 * p * (1.0 - p);
			q = Math.cos(1.0/3.0 * Math.acos(Math.sqrt(a)))/Math.sqrt(a);
			return Math.signum(p - 0.5) * 2.0 * Math.sqrt(q - 1);
		}

		double x;
		if (v == Double.POSITIVE_INFINITY)
			x = MathConstants.SQRT2 * SpecialFunctions.erfInv(2.0 * Math.max(p, 1.0 - p) - 1);
		else {
			x = SpecialFunctions.inverseRegularizedBeta(0.5 * v, 0.5, 2.0 * Math.min(p, 1.0 - p));
			x = Math.sqrt(v * (1.0 - x) / x);
		}

		if (Double.isNaN(x)) {
			if (BinaryRelations.isEqualOrAlmost(v % 2, 0))
				x = qntChengFuStudentTAlgorithm(p, v);
			else
				x = qntHillsAlgorithm396(p, v);
		}

		if (Double.isNaN(x)) {
			pp.setConstantValue(Math.max(p, 1.0 - p));
			vv.setConstantValue(v);
			x = qntSolveStud.calculate();
		}

		return p >= 0.5 ? x : -x;
	}
	/**
	 * Pseudo-random number from Student's t-distribution
	 *
	 * @param v   Number of degrees of freedom.
	 * @return    returns Pseudo-random number from Student's t-distribution
	 */
	public static double rndStudentT(double v) {
		if (Double.isNaN(v)) return Double.NaN;
		if (v <= 0) return Double.NaN;
		return qntStudentT(randomGenerator.nextDouble(), v);
	}
	/*
	 * Cheng Fu approximation of quantile function of
	 * Student's t-distribution
	 */
	private static double qntChengFuStudentTAlgorithm(double p, double v){
		if (Double.isNaN(p)) return Double.NaN;
		if (Double.isNaN(v)) return Double.NaN;
		if (v <= 0.0) return Double.NaN;
		if ( (p < 0.0) || (p > 1.0) ) return Double.NaN;
		double a, qi, i, gy, j, qip1, q, k;
		k = Math.ceil( v / 2.0);
		a = 1 - p;
		if (a != 0.5) {
			qi = Math.sqrt( 2.0 * Math.pow(1.0 - 2.0*a, 2.0)/(1.0 - Math.pow(1.0 - 2.0*a, 2.0)));
			for (i = 0.0; i < 20.0; i = i + 1.0){
				if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
				gy = 0.0;
				for (j = 0.0; j <= k - 1.0; j = j + 1.0){
					if (mXparser.isCurrentCalculationCancelled()) return Double.NaN;
					gy = gy + MathFunctions.factorial(2.0*j) / Math.pow(2.0, 2.0*j) / Math.pow( MathFunctions.factorial(j), 2.0) * Math.pow(1.0 + Math.pow(qi, 2.0)/(2.0*k), -j);
				}
				qip1 = 1.0 / Math.sqrt(1/(2.0*k) * (Math.pow(gy/(1.0 - 2.0*a), 2.0) - 1.0));
				qi = qip1;
			}
			if (a > 0.5) {
				q = -qi;
			} else {
				q = qi;
			}
		} else {
			q = 0.0;
		}
		return q;
	}
	/*
	 * Hills 396 approximation of quantile function of
	 * Student's t-distribution
	 */
	private static double qntHillsAlgorithm396(double p, double v) {
		if (Double.isNaN(p)) return Double.NaN;
		if (Double.isNaN(v)) return Double.NaN;
		if (v <= 0) return Double.NaN;
		if ((p < 0.0) || (p > 1.0)) return Double.NaN;
		double q, z;
		boolean negate;
		if (p > 0.5) {
			negate = false;
			z = 2.0 * (1.0 - p);
		} else {
			negate = true;
			z = 2.0 * p;
		}
		double a, b, c, d, x, y;
		a = 1.0 / (v - 0.5);
		b = 48.0 / (a*a);
		c = ((20700.0 * a/b - 98.0) * a - 16.0) * a + 96.36;
		d = ((94.5/(b + c) - 3.0)/b + 1.0) * Math.sqrt(a * MathConstants.PIBY2) * v;
		x = z*d;
		y = Math.pow(x, 2.0 / v);

		if (y > 0.05 + a) {
			x = qntNormal(z*0.5, 0.0, 1.0);
			y = x*x;
			if (v < 5.0)  c = c + 0.3 * (v - 4.5)*(x + 0.6);
			c = c + (((0.05*d*x - 5.0)*x - 7.0)*x - 2.0)*x + b;
			y = (((((0.4*y + 6.3)*y + 36.0)*y + 94.5)/c - y - 3.0)/b + 1.0) * x;
			y = a*y*y;
			if (y > 0.002) y = Math.exp(y) - 1.0;
			else y = y + 0.5*y*y;
		} else y = ((1/(((v + 6)/(v*y) - 0.089 * d - 0.822)*(v + 2.0)*3.0) + 0.5/(v + 4.0))*y - 1)*(v + 1.0)/(v + 2.0) + 1.0/y;
		q = Math.sqrt(v*y);
		if (negate) q = -q;
		return q;
	}
	/**
	 * Probability distribution function - Chi-Squared distribution
	 *
	 * @param x   Given point.
	 * @param k   Number of degrees of freedom.
	 * @return    Returns the PDF of Chi-Squared t-distribution.
	 */
	public static double pdfChiSquared(double x, double k) {
		if (Double.isNaN(x)) return Double.NaN;
		if (Double.isNaN(k)) return Double.NaN;
		k = Math.round(k);
		if (k < 1.0) return Double.NaN;
		if (x < 0.0) return 0.0;
		if (BinaryRelations.isEqualOrAlmost(x, 0.0)) return 0.0;
		return ( Math.pow(x, k/2.0 - 1.0) * Math.exp(-x/2.0) ) / ( Math.pow(2, k/2.0) * SpecialFunctions.gamma(k / 2.0) );
	}
	/**
	 * Cumulative distribution function - Chi-Squared distribution
	 *
	 * @param x   Given point.
	 * @param k   Number of degrees of freedom.
	 * @return    Returns the CDF of Chi-Squared distribution.
	 */
	public static double cdfChiSquared(double x, double k) {
		if (Double.isNaN(x)) return Double.NaN;
		if (Double.isNaN(k)) return Double.NaN;
		k = Math.round(k);
		if (k < 1.0) return Double.NaN;
		if (x < 0.0) return 0.0;
		if (BinaryRelations.isEqualOrAlmost(x, 0.0)) return 0.0;
		return SpecialFunctions.regularizedGammaLowerP(k/2.0, x/2.0);
	}
	/**
	 * Quantile function (Inverse cumulative distribution function)
	 * - Chi-Squared distribution
	 *
	 * @param p   Probability
	 * @param k   Number of degrees of freedom.
	 * @return    Returns the quantile of Chi-Squared distribution
	 */
	public static double qntChiSquared(double p, double k) {
		if (Double.isNaN(p)) return Double.NaN;
		if (Double.isNaN(k)) return Double.NaN;
		if (BinaryRelations.isEqualOrAlmost(p, 0.0)) return 0.0;
		if (BinaryRelations.isEqualOrAlmost(p, 1.0)) return Double.POSITIVE_INFINITY;
		if ((p < 0.0) || (p > 1.0)) return Double.NaN;
		k = Math.round(k);
		if (k < 1.0) return Double.NaN;
		return 2.0 * SpecialFunctions.inverseRegularizedGammaLowerP(k/2.0, p);
	}
	/**
	 * Pseudo-random number from Chi-Squared distribution
	 *
	 * @param k   Number of degrees of freedom.
	 * @return    returns Pseudo-random number from Chi-Squared distribution
	 */
	public static double rndChiSquared(double k) {
		if (Double.isNaN(k)) return Double.NaN;
		k = Math.round(k);
		if (k < 1.0) return Double.NaN;
		return qntChiSquared(randomGenerator.nextDouble(), k);
	}
}
