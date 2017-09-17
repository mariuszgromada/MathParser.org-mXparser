/*
 * @(#)SpecialFunctions.cs        4.2.0    2017-09-18
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
 * Some parts of the SpecialFunctions class were adopted from Math.NET Numerics project
 * Copyright (c) 2002-2015 Math.NET   http://numerics.mathdotnet.com/
 * http://numerics.mathdotnet.com/License.html
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
	 * SpecialFunctions - special (non-elementary functions).
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
	public sealed class SpecialFunctions {
		/**
		 * Exponential integral function Ei(x)
		 * @param x    Point at which function will be evaluated.
		 * @return Exponential integral function Ei(x)
		 */
		public static double exponentialIntegralEi(double x) {
			if (Double.IsNaN(x))
				return Double.NaN;
			if (x < -5.0)
				return continuedFractionEi(x);
			if (x == 0.0)
				return -Double.MaxValue;
			if (x < 6.8)
				return powerSeriesEi(x);
			if (x < 50.0)
				return argumentAdditionSeriesEi(x);
			return continuedFractionEi(x);
		}
		/**
		 * Constants for Exponential integral function Ei(x) calculation
		 */
		private static double EI_DBL_EPSILON = MathFunctions.ulp(1.0);
		private static double EI_EPSILON = 10.0 * EI_DBL_EPSILON;
		/**
		 * Supporting function
		 * while Exponential integral function Ei(x) calculation
		 */
		private static double continuedFractionEi(double x) {
			double Am1 = 1.0;
			double A0 = 0.0;
			double Bm1 = 0.0;
			double B0 = 1.0;
			double a = Math.Exp(x);
			double b = -x + 1.0;
			double Ap1 = b * A0 + a * Am1;
			double Bp1 = b * B0 + a * Bm1;
			int j = 1;
			a = 1.0;
			while (Math.Abs(Ap1 * B0 - A0 * Bp1) > EI_EPSILON * Math.Abs(A0 * Bp1)) {
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
			return (-Ap1 / Bp1);
		}
		/**
		 * Supporting function
		 * while Exponential integral function Ei(x) calculation
		 */
		private static double powerSeriesEi(double x) {
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
				Sm1 = Sn;
				y += 1.0;
				xn *= (-x);
				factorial *= y;
				hsum += (1.0 / y);
				Sn += hsum * xn / factorial;
			}
			return (g + Math.Log(Math.Abs(x)) - Math.Exp(x) * Sn);
		}
		/**
		 * Supporting function
		 * while Exponential integral function Ei(x) calculation
		 */
		private static double argumentAdditionSeriesEi(double x) {
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
		/**
		 * Logarithmic integral function li(x)
		 * @param x   Point at which function will be evaluated.
		 * @return Logarithmic integral function li(x)
		 */
		public static double logarithmicIntegralLi(double x) {
			if (Double.IsNaN(x))
				return Double.NaN;
			if (x < 0)
				return Double.NaN;
			if (x == 0)
				return 0;
			if (x == 2)
				return MathConstants.LI2;
			return exponentialIntegralEi(MathFunctions.ln(x));
		}
		/**
		 * Offset logarithmic integral function Li(x)
		 * @param x   Point at which function will be evaluated.
		 * @return Offset logarithmic integral function Li(x)
		 */
		public static double offsetLogarithmicIntegralLi(double x) {
			if (Double.IsNaN(x))
				return Double.NaN;
			if (x < 0)
				return Double.NaN;
			if (x == 0)
				return -MathConstants.LI2;
			return logarithmicIntegralLi(x) - MathConstants.LI2;
		}
		/**
		 * Calculates the error function
		 * @param x   Point at which function will be evaluated.
		 * @return    Error function erf(x)
		 */
		public static double erf(double x) {
			if (Double.IsNaN(x)) return Double.NaN;
			if (x == 0) return 0;
			if (x == Double.PositiveInfinity) return 1.0;
			if (x == Double.NegativeInfinity) return -1.0;
			return erfImp(x, false);
		}
		/**
		 * Calculates the complementary error function.
		 * @param x   Point at which function will be evaluated.
		 * @return    Complementary error function erfc(x)
		 */
		public static double erfc(double x) {
			if (Double.IsNaN(x)) return Double.NaN;
			if (x == 0) return 1;
			if (x == Double.PositiveInfinity) return 0.0;
			if (x == Double.NegativeInfinity) return 2.0;
			return erfImp(x, true);
		}
		/**
		 * Calculates the inverse error function evaluated at x.
		 * @param x   Point at which function will be evaluated.
		 * @return    Inverse error function erfInv(x)
		 */
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
		/**
		 * Calculates the inverse error function evaluated at x.
		 * @param x
		 * @param invert
		 * @return
		 */
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
		/**
		 * Calculates the complementary inverse error function evaluated at x.
		 * @param z   Point at which function will be evaluated.
		 * @return    Inverse of complementary inverse error function erfcInv(x)
		 */
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
		/**
		 * The implementation of the inverse error function.
		 * @param p
		 * @param q
		 * @param s
		 * @return
		 */
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
		/**
		 * Gamma function implementation based on
		 * Lanchos approximation algorithm
		 *
		 * @param x    Function parameter
		 * @return     Gamma function value, special cases:
		 *             Double.NaN for 0 and negative integers,
		 *             factorial(n-1) form positive integers
		 */
		public static double lanchosGamma(double x) {
			if (Double.IsNaN(x)) return Double.NaN;
			double xabs = MathFunctions.abs(x);
			double xint = Math.Round(xabs);
			if (x > BinaryRelations.DEFAULT_COMPARISON_EPSILON) {
				if (MathFunctions.abs(xabs - xint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)
					return MathFunctions.factorial(xint - 1);
			}
			else if (x < -BinaryRelations.DEFAULT_COMPARISON_EPSILON) {
				if (MathFunctions.abs(xabs - xint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)
					return Double.NaN;
			}
			else return Double.NaN;
			if (x < 0.5) return MathConstants.PI / (MathFunctions.sin(MathConstants.PI * x) * lanchosGamma(1 - x));
			int g = 7;
			x -= 1;
			double a = Coefficients.lanchosGamma[0];
			double t = x + g + 0.5;
			for (int i = 1; i < Coefficients.lanchosGamma.Length; i++) {
				a += Coefficients.lanchosGamma[i] / (x + i);
			}
			return MathFunctions.sqrt(2 * MathConstants.PI) * MathFunctions.power(t, x + 0.5) * MathFunctions.exp(-t) * a;
		}
	}
}