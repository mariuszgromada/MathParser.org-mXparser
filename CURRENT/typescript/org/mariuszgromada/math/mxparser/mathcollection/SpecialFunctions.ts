import { mXparserConstants } from '../mXparserConstants';
import { javaemul } from 'j4ts/j4ts';
import { BinaryRelations } from './BinaryRelations';
import { Evaluate } from './Evaluate';
import { MathFunctions } from './MathFunctions';
import { Coefficients } from './Coefficients';
import { MathConstants } from './MathConstants';

/**
 * SpecialFunctions - special (non-elementary functions).
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.3.0
 * @class
 */
export class SpecialFunctions {
    /**
     * Exponential integral function Ei(x)
     * @param {number} x    Point at which function will be evaluated.
     * @return {number} Exponential integral function Ei(x)
     */
    public static exponentialIntegralEi(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x < -5.0)return SpecialFunctions.continuedFractionEi(x);
        if (x === 0.0)return -javaemul.internal.DoubleHelper.MAX_VALUE;
        if (x < 6.8)return SpecialFunctions.powerSeriesEi(x);
        if (x < 50.0)return SpecialFunctions.argumentAdditionSeriesEi(x);
        return SpecialFunctions.continuedFractionEi(x);
    }

    /**
     * Constants for Exponential integral function Ei(x) calculation
     */
    static EI_DBL_EPSILON: number; public static EI_DBL_EPSILON_$LI$(): number { if (SpecialFunctions.EI_DBL_EPSILON == null) { SpecialFunctions.EI_DBL_EPSILON = javaemul.internal.MathHelper.ulp(1.0); }  return SpecialFunctions.EI_DBL_EPSILON; }

    static EI_EPSILON: number; public static EI_EPSILON_$LI$(): number { if (SpecialFunctions.EI_EPSILON == null) { SpecialFunctions.EI_EPSILON = 10.0 * SpecialFunctions.EI_DBL_EPSILON_$LI$(); }  return SpecialFunctions.EI_EPSILON; }

    /**
     * Supporting function
     * while Exponential integral function Ei(x) calculation
     * @param {number} x
     * @return {number}
     * @private
     */
    /*private*/ static continuedFractionEi(x: number): number {
        let Am1: number = 1.0;
        let A0: number = 0.0;
        let Bm1: number = 0.0;
        let B0: number = 1.0;
        let a: number = Math.exp(x);
        let b: number = -x + 1.0;
        let Ap1: number = b * A0 + a * Am1;
        let Bp1: number = b * B0 + a * Bm1;
        let j: number = 1;
        a = 1.0;
        while((Math.abs(Ap1 * B0 - A0 * Bp1) > SpecialFunctions.EI_EPSILON_$LI$() * Math.abs(A0 * Bp1))) {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            if (Math.abs(Bp1) > 1.0){
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
        }};
        return (-Ap1 / Bp1);
    }

    /**
     * Supporting function
     * while Exponential integral function Ei(x) calculation
     * @param {number} x
     * @return {number}
     * @private
     */
    /*private*/ static powerSeriesEi(x: number): number {
        let xn: number = -x;
        let Sn: number = -x;
        let Sm1: number = 0.0;
        let hsum: number = 1.0;
        const g: number = MathConstants.EULER_MASCHERONI;
        let y: number = 1.0;
        let factorial: number = 1.0;
        if (x === 0.0)return -javaemul.internal.DoubleHelper.MAX_VALUE;
        while((Math.abs(Sn - Sm1) > SpecialFunctions.EI_EPSILON_$LI$() * Math.abs(Sm1))) {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            Sm1 = Sn;
            y += 1.0;
            xn *= (-x);
            factorial *= y;
            hsum += (1.0 / y);
            Sn += hsum * xn / factorial;
        }};
        return (g + Math.log(Math.abs(x)) - Math.exp(x) * Sn);
    }

    /**
     * Supporting function
     * while Exponential integral function Ei(x) calculation
     * @param {number} x
     * @return {number}
     * @private
     */
    /*private*/ static argumentAdditionSeriesEi(x: number): number {
        const k: number = (<number>(x + 0.5)|0);
        let j: number = 0;
        const xx: number = k;
        const dx: number = x - xx;
        let xxj: number = xx;
        const edx: number = Math.exp(dx);
        let Sm: number = 1.0;
        let Sn: number = (edx - 1.0) / xxj;
        let term: number = javaemul.internal.DoubleHelper.MAX_VALUE;
        let factorial: number = 1.0;
        let dxj: number = 1.0;
        while((Math.abs(term) > SpecialFunctions.EI_EPSILON_$LI$() * Math.abs(Sn))) {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            j++;
            factorial *= j;
            xxj *= xx;
            dxj *= (-dx);
            Sm += (dxj / factorial);
            term = (factorial * (edx * Sm - 1.0)) / xxj;
            Sn += term;
        }};
        return Coefficients.EI_$LI$()[k - 7] + Sn * Math.exp(xx);
    }

    /**
     * Logarithmic integral function li(x)
     * @param {number} x   Point at which function will be evaluated.
     * @return {number} Logarithmic integral function li(x)
     */
    public static logarithmicIntegralLi(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x < 0)return javaemul.internal.DoubleHelper.NaN;
        if (x === 0)return 0;
        if (x === 2)return MathConstants.LI2;
        return SpecialFunctions.exponentialIntegralEi(MathFunctions.ln(x));
    }

    /**
     * Offset logarithmic integral function Li(x)
     * @param {number} x   Point at which function will be evaluated.
     * @return {number} Offset logarithmic integral function Li(x)
     */
    public static offsetLogarithmicIntegralLi(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x < 0)return javaemul.internal.DoubleHelper.NaN;
        if (x === 0)return -MathConstants.LI2;
        return SpecialFunctions.logarithmicIntegralLi(x) - MathConstants.LI2;
    }

    /**
     * Calculates the error function
     * @param {number} x   Point at which function will be evaluated.
     * @return    {number} Error function erf(x)
     */
    public static erf(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x === 0)return 0;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return 1.0;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return -1.0;
        return SpecialFunctions.erfImp(x, false);
    }

    /**
     * Calculates the complementary error function.
     * @param {number} x   Point at which function will be evaluated.
     * @return    {number} Complementary error function erfc(x)
     */
    public static erfc(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x === 0)return 1;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return 0.0;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return 2.0;
        return SpecialFunctions.erfImp(x, true);
    }

    /**
     * Calculates the inverse error function evaluated at x.
     * @param {number} x   Point at which function will be evaluated.
     * @return    {number} Inverse error function erfInv(x)
     */
    public static erfInv(x: number): number {
        if (x === 0.0)return 0;
        if (x >= 1.0)return javaemul.internal.DoubleHelper.POSITIVE_INFINITY;
        if (x <= -1.0)return javaemul.internal.DoubleHelper.NEGATIVE_INFINITY;
        let p: number;
        let q: number;
        let s: number;
        if (x < 0){
            p = -x;
            q = 1 - p;
            s = -1;
        } else {
            p = x;
            q = 1 - x;
            s = 1;
        }
        return SpecialFunctions.erfInvImpl(p, q, s);
    }

    /**
     * Calculates the inverse error function evaluated at x.
     * @param x
     * @param {boolean} invert
     * @return
     * @param {number} z
     * @return {number}
     * @private
     */
    /*private*/ static erfImp(z: number, invert: boolean): number {
        if (z < 0){
            if (!invert)return -SpecialFunctions.erfImp(-z, false);
            if (z < -0.5)return 2 - SpecialFunctions.erfImp(-z, true);
            return 1 + SpecialFunctions.erfImp(-z, false);
        }
        let result: number;
        if (z < 0.5){
            if (z < 1.0E-10)result = (z * 1.125) + (z * 0.0033791670955125737); else result = (z * 1.125) + (z * Evaluate.polynomial(z, Coefficients.erfImpAn_$LI$()) / Evaluate.polynomial(z, Coefficients.erfImpAd_$LI$()));
        } else if ((z < 110) || ((z < 110) && invert)){
            invert = !invert;
            let r: number;
            let b: number;
            if (z < 0.75){
                r = Evaluate.polynomial(z - 0.5, Coefficients.erfImpBn_$LI$()) / Evaluate.polynomial(z - 0.5, Coefficients.erfImpBd_$LI$());
                b = 0.3440242;
            } else if (z < 1.25){
                r = Evaluate.polynomial(z - 0.75, Coefficients.erfImpCn_$LI$()) / Evaluate.polynomial(z - 0.75, Coefficients.erfImpCd_$LI$());
                b = 0.41999093;
            } else if (z < 2.25){
                r = Evaluate.polynomial(z - 1.25, Coefficients.erfImpDn_$LI$()) / Evaluate.polynomial(z - 1.25, Coefficients.erfImpDd_$LI$());
                b = 0.4898625;
            } else if (z < 3.5){
                r = Evaluate.polynomial(z - 2.25, Coefficients.erfImpEn_$LI$()) / Evaluate.polynomial(z - 2.25, Coefficients.erfImpEd_$LI$());
                b = 0.5317371;
            } else if (z < 5.25){
                r = Evaluate.polynomial(z - 3.5, Coefficients.erfImpFn_$LI$()) / Evaluate.polynomial(z - 3.5, Coefficients.erfImpFd_$LI$());
                b = 0.54899734;
            } else if (z < 8){
                r = Evaluate.polynomial(z - 5.25, Coefficients.erfImpGn_$LI$()) / Evaluate.polynomial(z - 5.25, Coefficients.erfImpGd_$LI$());
                b = 0.5571741;
            } else if (z < 11.5){
                r = Evaluate.polynomial(z - 8, Coefficients.erfImpHn_$LI$()) / Evaluate.polynomial(z - 8, Coefficients.erfImpHd_$LI$());
                b = 0.5609808;
            } else if (z < 17){
                r = Evaluate.polynomial(z - 11.5, Coefficients.erfImpIn_$LI$()) / Evaluate.polynomial(z - 11.5, Coefficients.erfImpId_$LI$());
                b = 0.56264937;
            } else if (z < 24){
                r = Evaluate.polynomial(z - 17, Coefficients.erfImpJn_$LI$()) / Evaluate.polynomial(z - 17, Coefficients.erfImpJd_$LI$());
                b = 0.5634598;
            } else if (z < 38){
                r = Evaluate.polynomial(z - 24, Coefficients.erfImpKn_$LI$()) / Evaluate.polynomial(z - 24, Coefficients.erfImpKd_$LI$());
                b = 0.5638478;
            } else if (z < 60){
                r = Evaluate.polynomial(z - 38, Coefficients.erfImpLn_$LI$()) / Evaluate.polynomial(z - 38, Coefficients.erfImpLd_$LI$());
                b = 0.5640528;
            } else if (z < 85){
                r = Evaluate.polynomial(z - 60, Coefficients.erfImpMn_$LI$()) / Evaluate.polynomial(z - 60, Coefficients.erfImpMd_$LI$());
                b = 0.5641309;
            } else {
                r = Evaluate.polynomial(z - 85, Coefficients.erfImpNn_$LI$()) / Evaluate.polynomial(z - 85, Coefficients.erfImpNd_$LI$());
                b = 0.56415844;
            }
            const g: number = MathFunctions.exp(-z * z) / z;
            result = (g * b) + (g * r);
        } else {
            result = 0;
            invert = !invert;
        }
        if (invert)result = 1 - result;
        return result;
    }

    /**
     * Calculates the complementary inverse error function evaluated at x.
     * @param {number} z   Point at which function will be evaluated.
     * @return    {number} Inverse of complementary inverse error function erfcInv(x)
     */
    public static erfcInv(z: number): number {
        if (z <= 0.0)return javaemul.internal.DoubleHelper.POSITIVE_INFINITY;
        if (z >= 2.0)return javaemul.internal.DoubleHelper.NEGATIVE_INFINITY;
        let p: number;
        let q: number;
        let s: number;
        if (z > 1){
            q = 2 - z;
            p = 1 - q;
            s = -1;
        } else {
            p = 1 - z;
            q = z;
            s = 1;
        }
        return SpecialFunctions.erfInvImpl(p, q, s);
    }

    /**
     * The implementation of the inverse error function.
     * @param {number} p
     * @param {number} q
     * @param {number} s
     * @return
     * @return {number}
     * @private
     */
    /*private*/ static erfInvImpl(p: number, q: number, s: number): number {
        let result: number;
        if (p <= 0.5){
            const y: number = 0.089131474;
            const g: number = p * (p + 10);
            const r: number = Evaluate.polynomial(p, Coefficients.ervInvImpAn_$LI$()) / Evaluate.polynomial(p, Coefficients.ervInvImpAd_$LI$());
            result = (g * y) + (g * r);
        } else if (q >= 0.25){
            const y: number = 2.2494812;
            const g: number = MathFunctions.sqrt(-2 * MathFunctions.ln(q));
            const xs: number = q - 0.25;
            const r: number = Evaluate.polynomial(xs, Coefficients.ervInvImpBn_$LI$()) / Evaluate.polynomial(xs, Coefficients.ervInvImpBd_$LI$());
            result = g / (y + r);
        } else {
            const x: number = MathFunctions.sqrt(-MathFunctions.ln(q));
            if (x < 3){
                const y: number = 0.80722046;
                const xs: number = x - 1.125;
                const r: number = Evaluate.polynomial(xs, Coefficients.ervInvImpCn_$LI$()) / Evaluate.polynomial(xs, Coefficients.ervInvImpCd_$LI$());
                result = (y * x) + (r * x);
            } else if (x < 6){
                const y: number = 0.9399557;
                const xs: number = x - 3;
                const r: number = Evaluate.polynomial(xs, Coefficients.ervInvImpDn_$LI$()) / Evaluate.polynomial(xs, Coefficients.ervInvImpDd_$LI$());
                result = (y * x) + (r * x);
            } else if (x < 18){
                const y: number = 0.9836283;
                const xs: number = x - 6;
                const r: number = Evaluate.polynomial(xs, Coefficients.ervInvImpEn_$LI$()) / Evaluate.polynomial(xs, Coefficients.ervInvImpEd_$LI$());
                result = (y * x) + (r * x);
            } else if (x < 44){
                const y: number = 0.99714565;
                const xs: number = x - 18;
                const r: number = Evaluate.polynomial(xs, Coefficients.ervInvImpFn_$LI$()) / Evaluate.polynomial(xs, Coefficients.ervInvImpFd_$LI$());
                result = (y * x) + (r * x);
            } else {
                const y: number = 0.9994135;
                const xs: number = x - 44;
                const r: number = Evaluate.polynomial(xs, Coefficients.ervInvImpGn_$LI$()) / Evaluate.polynomial(xs, Coefficients.ervInvImpGd_$LI$());
                result = (y * x) + (r * x);
            }
        }
        return s * result;
    }

    /**
     * Gamma function for the integers
     * @param {number} n Integer number
     * @return  {number} Returns Gamma function for the integers.
     * @private
     */
    /*private*/ static gammaInt(n: number): number {
        if (n === 0)return MathConstants.EULER_MASCHERONI;
        if (n === 1)return 1;
        if (n === 2)return 1;
        if (n === 3)return 1.0 * 2.0;
        if (n === 4)return 1.0 * 2.0 * 3.0;
        if (n === 5)return 1.0 * 2.0 * 3.0 * 4.0;
        if (n === 6)return 1.0 * 2.0 * 3.0 * 4.0 * 5.0;
        if (n === 7)return 1.0 * 2.0 * 3.0 * 4.0 * 5.0 * 6.0;
        if (n === 8)return 1.0 * 2.0 * 3.0 * 4.0 * 5.0 * 6.0 * 7.0;
        if (n === 9)return 1.0 * 2.0 * 3.0 * 4.0 * 5.0 * 6.0 * 7.0 * 8.0;
        if (n === 10)return 1.0 * 2.0 * 3.0 * 4.0 * 5.0 * 6.0 * 7.0 * 8.0 * 9.0;
        if (n >= 11)return MathFunctions.factorial$double(n - 1);
        if (n <= -1){
            const r: number = -n;
            const factr: number = MathFunctions.factorial$double(r);
            let sign: number = -1;
            if (r % 2 === 0)sign = 1;
            return sign / (r * factr) - (1.0 / r) * SpecialFunctions.gammaInt(n + 1);
        }
        return javaemul.internal.DoubleHelper.NaN;
    }

    /**
     * Real valued Gamma function
     * 
     * @param {number} x   Argument value
     * @return  {number} Returns gamma function value.
     */
    public static gamma(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return javaemul.internal.DoubleHelper.POSITIVE_INFINITY;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return javaemul.internal.DoubleHelper.NaN;
        const xabs: number = MathFunctions.abs(x);
        const xint: number = Math.round(xabs);
        if (MathFunctions.abs(xabs - xint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON){
            let n: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>xint);
            if (x < 0)n = -n;
            return SpecialFunctions.gammaInt(n);
        }
        return SpecialFunctions.lanchosGamma(x);
    }

    /**
     * Gamma function implementation based on
     * Lanchos approximation algorithm
     * 
     * @param {number} x    Function parameter
     * @return     {number} Gamma function value (Lanchos approx).
     */
    public static lanchosGamma(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        const xabs: number = MathFunctions.abs(x);
        const xint: number = Math.round(xabs);
        if (x > BinaryRelations.DEFAULT_COMPARISON_EPSILON){
            if (MathFunctions.abs(xabs - xint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return MathFunctions.factorial$double(xint - 1);
        } else if (x < -BinaryRelations.DEFAULT_COMPARISON_EPSILON){
            if (MathFunctions.abs(xabs - xint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
        } else return javaemul.internal.DoubleHelper.NaN;
        if (x < 0.5)return MathConstants.PI / (Math.sin(MathConstants.PI * x) * SpecialFunctions.lanchosGamma(1 - x));
        const g: number = 7;
        x -= 1;
        let a: number = Coefficients.lanchosGamma_$LI$()[0];
        const t: number = x + g + 0.5;
        for(let i: number = 1; i < Coefficients.lanchosGamma_$LI$().length; i++) {{
            a += Coefficients.lanchosGamma_$LI$()[i] / (x + i);
        };}
        return Math.sqrt(2 * MathConstants.PI) * Math.pow(t, x + 0.5) * Math.exp(-t) * a;
    }

    /**
     * Real valued log gamma function.
     * @param {number} x  Argument value
     * @return  {number} Returns log value from gamma function.
     */
    public static logGamma(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return javaemul.internal.DoubleHelper.POSITIVE_INFINITY;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return javaemul.internal.DoubleHelper.NaN;
        if (MathFunctions.isInteger(x)){
            if (x >= 0)return Math.log(Math.abs(SpecialFunctions.gammaInt((n => n<0?Math.ceil(n):Math.floor(n))(<number>(Math.round(x)))))); else return Math.log(Math.abs(SpecialFunctions.gammaInt(-(n => n<0?Math.ceil(n):Math.floor(n))(<number>(Math.round(-x))))));
        }
        let p: number;
        let q: number;
        let w: number;
        let z: number;
        if (x < -34.0){
            q = -x;
            w = SpecialFunctions.logGamma(q);
            p = Math.floor(q);
            if (Math.abs(p - q) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
            z = q - p;
            if (z > 0.5){
                p += 1.0;
                z = p - q;
            }
            z = q * Math.sin(Math.PI * z);
            if (Math.abs(z) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
            z = MathConstants.LNPI_$LI$() - Math.log(z) - w;
            return z;
        }
        if (x < 13.0){
            z = 1.0;
            while((x >= 3.0)) {{
                x -= 1.0;
                z *= x;
            }};
            while((x < 2.0)) {{
                if (Math.abs(x) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
                z /= x;
                x += 1.0;
            }};
            if (z < 0.0)z = -z;
            if (x === 2.0)return Math.log(z);
            x -= 2.0;
            p = x * Evaluate.polevl(x, Coefficients.logGammaB_$LI$(), 5) / Evaluate.p1evl(x, Coefficients.logGammaC_$LI$(), 6);
            return Math.log(z) + p;
        }
        if (x > 2.556348E305)return javaemul.internal.DoubleHelper.NaN;
        q = (x - 0.5) * Math.log(x) - x + 0.9189385332046728;
        if (x > 1.0E8)return q;
        p = 1.0 / (x * x);
        if (x >= 1000.0)q += ((7.936507936507937E-4 * p - 0.002777777777777778) * p + 0.08333333333333333) / x; else q += Evaluate.polevl(p, Coefficients.logGammaA_$LI$(), 4) / x;
        return q;
    }

    /**
     * Signum from the real valued gamma function.
     * @param {number} x Argument value
     * @return  {number} Returns signum of the gamma(x)
     */
    public static sgnGamma(x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return 1;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return javaemul.internal.DoubleHelper.NaN;
        if (x > 0)return 1;
        if (MathFunctions.isInteger(x))return MathFunctions.sgn(SpecialFunctions.gammaInt(-(n => n<0?Math.ceil(n):Math.floor(n))(<number>(Math.round(-x)))));
        x = -x;
        const fx: number = Math.floor(x);
        const div2remainder: number = Math.floor(fx % 2);
        if (div2remainder === 0)return -1; else return 1;
    }

    /**
     * Regularized lower gamma function 'P'
     * @param {number} s  Argument value
     * @param {number} x  Argument value
     * @return {number} Value of the regularized lower gamma function 'P'.
     */
    public static regularizedGammaLowerP(s: number, x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(s))return javaemul.internal.DoubleHelper.NaN;
        if (MathFunctions.almostEqual(x, 0))return 0;
        if (MathFunctions.almostEqual(s, 0))return 1 + SpecialFunctions.exponentialIntegralEi(-x) / MathConstants.EULER_MASCHERONI;
        if (MathFunctions.almostEqual(s, 1))return 1 - Math.exp(-x);
        if (x < 0)return javaemul.internal.DoubleHelper.NaN;
        if (s < 0)return SpecialFunctions.regularizedGammaLowerP(s + 1, x) + (Math.pow(x, s) * Math.exp(-x)) / (s * SpecialFunctions.gamma(s));
        const epsilon: number = 1.0E-15;
        const bigNumber: number = 4.503599627370496E15;
        const bigNumberInverse: number = 2.220446049250313E-16;
        const ax: number = (s * Math.log(x)) - x - SpecialFunctions.logGamma(s);
        if (ax < -709.782712893384){
            return 1;
        }
        if (x <= 1 || x <= s){
            let r2: number = s;
            let c2: number = 1;
            let ans2: number = 1;
            do {{
                r2 = r2 + 1;
                c2 = c2 * x / r2;
                ans2 += c2;
            }} while(((c2 / ans2) > epsilon));
            return Math.exp(ax) * ans2 / s;
        }
        let c: number = 0;
        let y: number = 1 - s;
        let z: number = x + y + 1;
        let p3: number = 1;
        let q3: number = x;
        let p2: number = x + 1;
        let q2: number = z * x;
        let ans: number = p2 / q2;
        let error: number;
        do {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            c++;
            y += 1;
            z += 2;
            const yc: number = y * c;
            const p: number = (p2 * z) - (p3 * yc);
            const q: number = (q2 * z) - (q3 * yc);
            if (q !== 0){
                const nextans: number = p / q;
                error = Math.abs((ans - nextans) / nextans);
                ans = nextans;
            } else {
                error = 1;
            }
            p3 = p2;
            p2 = p;
            q3 = q2;
            q2 = q;
            if (Math.abs(p) > bigNumber){
                p3 *= bigNumberInverse;
                p2 *= bigNumberInverse;
                q3 *= bigNumberInverse;
                q2 *= bigNumberInverse;
            }
        }} while((error > epsilon));
        return 1 - (Math.exp(ax) * ans);
    }

    /**
     * Incomplete lower gamma function
     * @param {number} s   Argument value
     * @param {number} x   Argument value
     * @return {number} Value of the incomplete lower gamma function.
     */
    public static incompleteGammaLower(s: number, x: number): number {
        return SpecialFunctions.gamma(s) * SpecialFunctions.regularizedGammaLowerP(s, x);
    }

    /**
     * Regularized upper gamma function 'Q'
     * @param {number} s  Argument value
     * @param {number} x  Argument value
     * @return {number} Value of the regularized upper gamma function 'Q'.
     */
    public static regularizedGammaUpperQ(s: number, x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(s))return javaemul.internal.DoubleHelper.NaN;
        if (MathFunctions.almostEqual(x, 0))return 1;
        if (MathFunctions.almostEqual(s, 0))return -SpecialFunctions.exponentialIntegralEi(-x) / MathConstants.EULER_MASCHERONI;
        if (MathFunctions.almostEqual(s, 1))return Math.exp(-x);
        if (x < 0)return javaemul.internal.DoubleHelper.NaN;
        if (s < 0)return SpecialFunctions.regularizedGammaUpperQ(s + 1, x) - (Math.pow(x, s) * Math.exp(-x)) / (s * SpecialFunctions.gamma(s));
        let ax: number = s * Math.log(x) - x - SpecialFunctions.logGamma(s);
        if (ax < -709.782712893384){
            return 0;
        }
        let t: number;
        const igammaepsilon: number = 1.0E-15;
        const igammabignumber: number = 4.503599627370496E15;
        const igammabignumberinv: number = 2.220446049250313 * 1.0E-16;
        ax = Math.exp(ax);
        let y: number = 1 - s;
        let z: number = x + y + 1;
        let c: number = 0;
        let pkm2: number = 1;
        let qkm2: number = x;
        let pkm1: number = x + 1;
        let qkm1: number = z * x;
        let ans: number = pkm1 / qkm1;
        do {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            c = c + 1;
            y = y + 1;
            z = z + 2;
            const yc: number = y * c;
            const pk: number = pkm1 * z - pkm2 * yc;
            const qk: number = qkm1 * z - qkm2 * yc;
            if (qk !== 0){
                const r: number = pk / qk;
                t = Math.abs((ans - r) / r);
                ans = r;
            } else {
                t = 1;
            }
            pkm2 = pkm1;
            pkm1 = pk;
            qkm2 = qkm1;
            qkm1 = qk;
            if (Math.abs(pk) > igammabignumber){
                pkm2 = pkm2 * igammabignumberinv;
                pkm1 = pkm1 * igammabignumberinv;
                qkm2 = qkm2 * igammabignumberinv;
                qkm1 = qkm1 * igammabignumberinv;
            }
        }} while((t > igammaepsilon));
        return ans * ax;
    }

    /**
     * Incomplete upper gamma function
     * @param {number} s   Argument value
     * @param {number} x   Argument value
     * @return {number} Value of the incomplete upper gamma function.
     */
    public static incompleteGammaUpper(s: number, x: number): number {
        return SpecialFunctions.gamma(s) * SpecialFunctions.regularizedGammaUpperQ(s, x);
    }

    /**
     * Digamma function as the logarithmic derivative of the Gamma special function
     * @param {number} x   Argument value
     * @return {number} Approximated value of the digamma function.
     */
    public static diGamma(x: number): number {
        const c: number = 12.0;
        const d1: number = -0.5772156649015329;
        const d2: number = 1.6449340668482264;
        const s: number = 1.0E-6;
        const s3: number = 1.0 / 12.0;
        const s4: number = 1.0 / 120.0;
        const s5: number = 1.0 / 252.0;
        const s6: number = 1.0 / 240.0;
        const s7: number = 1.0 / 132.0;
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return javaemul.internal.DoubleHelper.NaN;
        if (x <= 0)if (MathFunctions.isInteger(x))return javaemul.internal.DoubleHelper.NaN;
        if (x < 0)return SpecialFunctions.diGamma(1.0 - x) + (MathConstants.PI / Math.tan(-Math.PI * x));
        if (x <= s)return d1 - (1 / x) + (d2 * x);
        let result: number = 0;
        while((x < c)) {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            result -= 1 / x;
            x++;
        }};
        if (x >= c){
            let r: number = 1 / x;
            result += Math.log(x) - (0.5 * r);
            r *= r;
            result -= r * (s3 - (r * (s4 - (r * (s5 - (r * (s6 - (r * s7))))))));
        }
        return result;
    }

    static doubleWidth: number = 53;

    static doublePrecision: number; public static doublePrecision_$LI$(): number { if (SpecialFunctions.doublePrecision == null) { SpecialFunctions.doublePrecision = Math.pow(2, -SpecialFunctions.doubleWidth); }  return SpecialFunctions.doublePrecision; }

    /**
     * Log Beta special function
     * @param {number} x   Argument value
     * @param {number} y   Argument value
     * @return  {number} Return logBeta special function (for positive x and positive y)
     */
    public static logBeta(x: number, y: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(y))return javaemul.internal.DoubleHelper.NaN;
        if ((x <= 0) || (y <= 0))return javaemul.internal.DoubleHelper.NaN;
        let lgx: number = SpecialFunctions.logGamma(x);
        if (/* isNaN */isNaN(lgx))lgx = Math.log(Math.abs(SpecialFunctions.gamma(x)));
        let lgy: number = SpecialFunctions.logGamma(y);
        if (/* isNaN */isNaN(lgy))lgy = Math.log(Math.abs(SpecialFunctions.gamma(y)));
        let lgxy: number = SpecialFunctions.logGamma(x + y);
        if (/* isNaN */isNaN(lgy))lgxy = Math.log(Math.abs(SpecialFunctions.gamma(x + y)));
        if ((!/* isNaN */isNaN(lgx)) && (!/* isNaN */isNaN(lgy)) && (!/* isNaN */isNaN(lgxy)))return (lgx + lgy - lgxy); else return javaemul.internal.DoubleHelper.NaN;
    }

    /**
     * Beta special function
     * @param {number} x   Argument value
     * @param {number} y   Argument value
     * @return  {number} Return Beta special function (for positive x and positive y)
     */
    public static beta(x: number, y: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(y))return javaemul.internal.DoubleHelper.NaN;
        if ((x <= 0) || (y <= 0))return javaemul.internal.DoubleHelper.NaN;
        if ((x > 99) || (y > 99))return Math.exp(SpecialFunctions.logBeta(x, y));
        return SpecialFunctions.gamma(x) * SpecialFunctions.gamma(y) / SpecialFunctions.gamma(x + y);
    }

    /**
     * Log Incomplete Beta special function
     * @param {number} a   Argument value
     * @param {number} b   Argument value
     * @param {number} x   Argument value
     * @return  {number} Return incomplete Beta special function
     * for positive a and positive b and x between 0 and 1
     */
    public static incompleteBeta(a: number, b: number, x: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (x < -BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
        if (x > 1 + BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
        if ((a <= 0) || (b <= 0))return javaemul.internal.DoubleHelper.NaN;
        if (MathFunctions.almostEqual(x, 0))return 0;
        if (MathFunctions.almostEqual(x, 1))return SpecialFunctions.beta(a, b);
        const aEq0: boolean = MathFunctions.almostEqual(a, 0);
        const bEq0: boolean = MathFunctions.almostEqual(b, 0);
        const aIsInt: boolean = MathFunctions.isInteger(a);
        const bIsInt: boolean = MathFunctions.isInteger(b);
        let aInt: number = 0;
        let bInt: number = 0;
        if (aIsInt)aInt = (n => n<0?Math.ceil(n):Math.floor(n))(<number>MathFunctions.integerPart(a));
        if (bIsInt)bInt = (n => n<0?Math.ceil(n):Math.floor(n))(<number>MathFunctions.integerPart(b));
        let n: number;
        if (aEq0 && bEq0)return Math.log(x / (1 - x));
        if (aEq0 && bIsInt){
            n = bInt;
            if (n >= 1){
                if (n === 1)return Math.log(x);
                if (n === 2)return Math.log(x) + x;
                let v: number = Math.log(x);
                for(let i: number = 1; i <= n - 1; i++) {v -= MathFunctions.binomCoeff$double$long(n - 1, i) * Math.pow(-1, i) * (Math.pow(x, i) / i);}
                return v;
            }
            if (n <= -1){
                if (n === -1)return Math.log(x / (1 - x)) + 1 / (1 - x) - 1;
                if (n === -2)return Math.log(x / (1 - x)) - 1 / x - 1 / (2 * x * x);
                let v: number = -Math.log(x / (1 - x));
                for(let i: number = 1; i <= -n - 1; i++) {v -= Math.pow(x, -i) / i;}
                return v;
            }
        }
        if (aIsInt && bEq0){
            n = aInt;
            if (n >= 1){
                if (n === 1)return -Math.log(1 - x);
                if (n === 2)return -Math.log(1 - x) - x;
                let v: number = -Math.log(1 - x);
                for(let i: number = 1; i <= n - 1; i++) {v -= Math.pow(x, i) / i;}
                return v;
            }
            if (n <= -1){
                if (n === -1)return Math.log(x / (1 - x)) - 1 / x;
                let v: number = -Math.log(x / (1 - x));
                for(let i: number = 1; i <= -n; i++) {v += Math.pow(1 - x, -i) / i;}
                for(let i: number = 1; i <= -n; i++) {v -= Math.pow(MathFunctions.factorial$double(i - 1), 2) / i;}
                return v;
            }
        }
        if (aIsInt){
            n = aInt;
            if (MathFunctions.almostEqual(b, 1)){
                if (n <= -1)return -((n => n<0?Math.ceil(n):Math.floor(n))(1 / (-n))) * Math.pow(x, n);
            }
        }
        return SpecialFunctions.regularizedBeta(a, b, x) * SpecialFunctions.beta(a, b);
    }

    /**
     * Regularized incomplete Beta special function
     * @param {number} a   Argument value
     * @param {number} b   Argument value
     * @param {number} x   Argument value
     * @return  {number} Return incomplete Beta special function
     * for positive a and positive b and x between 0 and 1
     */
    public static regularizedBeta(a: number, b: number, x: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if ((a <= 0) || (b <= 0))return javaemul.internal.DoubleHelper.NaN;
        if (x < -BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
        if (x > 1 + BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
        if (MathFunctions.almostEqual(x, 0))return 0;
        if (MathFunctions.almostEqual(x, 1))return 1;
        const bt: number = (x === 0.0 || x === 1.0) ? 0.0 : Math.exp(SpecialFunctions.logGamma(a + b) - SpecialFunctions.logGamma(a) - SpecialFunctions.logGamma(b) + (a * Math.log(x)) + (b * Math.log(1.0 - x)));
        const symmetryTransformation: boolean = x >= (a + 1.0) / (a + b + 2.0);
        const eps: number = SpecialFunctions.doublePrecision_$LI$();
        const fpmin: number = javaemul.internal.MathHelper.nextUp(0.0) / eps;
        if (symmetryTransformation){
            x = 1.0 - x;
            const swap: number = a;
            a = b;
            b = swap;
        }
        const qab: number = a + b;
        const qap: number = a + 1.0;
        const qam: number = a - 1.0;
        let c: number = 1.0;
        let d: number = 1.0 - (qab * x / qap);
        if (Math.abs(d) < fpmin){
            d = fpmin;
        }
        d = 1.0 / d;
        let h: number = d;
        for(let m: number = 1, m2: number = 2; m <= 50000; m++, m2 += 2) {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            let aa: number = m * (b - m) * x / ((qam + m2) * (a + m2));
            d = 1.0 + (aa * d);
            if (Math.abs(d) < fpmin){
                d = fpmin;
            }
            c = 1.0 + (aa / c);
            if (Math.abs(c) < fpmin){
                c = fpmin;
            }
            d = 1.0 / d;
            h *= d * c;
            aa = -(a + m) * (qab + m) * x / ((a + m2) * (qap + m2));
            d = 1.0 + (aa * d);
            if (Math.abs(d) < fpmin){
                d = fpmin;
            }
            c = 1.0 + (aa / c);
            if (Math.abs(c) < fpmin){
                c = fpmin;
            }
            d = 1.0 / d;
            const del: number = d * c;
            h *= del;
            if (Math.abs(del - 1.0) <= eps){
                return symmetryTransformation ? 1.0 - (bt * h / a) : bt * h / a;
            }
        };}
        return symmetryTransformation ? 1.0 - (bt * h / a) : bt * h / a;
    }

    static GSL_DBL_EPSILON: number = 2.220446049250313E-16;

    /**
     * Halley iteration used in Lambert-W approximation
     * @param {number} x         Point at which Halley iteration will be calculated
     * @param {number} wInitial  Starting point
     * @param {number} maxIter   Maximum number of iteration
     * @return          {number} Halley iteration value if succesfull, otherwise Double.NaN
     * @private
     */
    /*private*/ static halleyIteration(x: number, wInitial: number, maxIter: number): number {
        let w: number = wInitial;
        let tol: number = 1;
        let t: number = 0;
        let p: number;
        let e: number;
        for(let i: number = 0; i < maxIter; i++) {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            e = Math.exp(w);
            p = w + 1.0;
            t = w * e - x;
            if (w > 0)t = (t / p) / e; else t /= e * p - 0.5 * (p + 1.0) * t / p;
            w -= t;
            tol = SpecialFunctions.GSL_DBL_EPSILON * Math.max(Math.abs(w), 1.0 / (Math.abs(p) * e));
            if (Math.abs(t) < tol)return w;
        };}
        const perc: number = Math.abs(t / tol);
        if (perc >= 0.5 && perc <= 1.5)return w;
        return javaemul.internal.DoubleHelper.NaN;
    }

    /**
     * Private method used in Lambert-W approximation - near zero
     * @param {number} r
     * @return {number} Ner zero approximation
     * @private
     */
    /*private*/ static seriesEval(r: number): number {
        const t8: number = Coefficients.lambertWqNearZero_$LI$()[8] + r * (Coefficients.lambertWqNearZero_$LI$()[9] + r * (Coefficients.lambertWqNearZero_$LI$()[10] + r * Coefficients.lambertWqNearZero_$LI$()[11]));
        const t5: number = Coefficients.lambertWqNearZero_$LI$()[5] + r * (Coefficients.lambertWqNearZero_$LI$()[6] + r * (Coefficients.lambertWqNearZero_$LI$()[7] + r * t8));
        const t1: number = Coefficients.lambertWqNearZero_$LI$()[1] + r * (Coefficients.lambertWqNearZero_$LI$()[2] + r * (Coefficients.lambertWqNearZero_$LI$()[3] + r * (Coefficients.lambertWqNearZero_$LI$()[4] + r * t5)));
        return Coefficients.lambertWqNearZero_$LI$()[0] + r * t1;
    }

    /**
     * W0 - Principal branch of Lambert-W function
     * @param {number} x
     * @return {number} Approximation of principal branch of Lambert-W function
     * @private
     */
    /*private*/ static lambertW0(x: number): number {
        if (Math.abs(x) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return 0;
        if (Math.abs(x + MathConstants.EXP_MINUS_1_$LI$()) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return -1;
        if (Math.abs(x - 1) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return MathConstants.OMEGA;
        if (Math.abs(x - MathConstants.E) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return 1;
        if (Math.abs(x + MathConstants.LN_SQRT2_$LI$()) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return -2 * MathConstants.LN_SQRT2_$LI$();
        if (x < -MathConstants.EXP_MINUS_1_$LI$())return javaemul.internal.DoubleHelper.NaN;
        const q: number = x + MathConstants.EXP_MINUS_1_$LI$();
        if (q < 0.001)return SpecialFunctions.seriesEval(Math.sqrt(q));
        const MAX_ITER: number = 100;
        let w: number;
        if (x < 1){
            const p: number = Math.sqrt(2.0 * MathConstants.E * q);
            w = -1.0 + p * (1.0 + p * (-1.0 / 3.0 + p * 11.0 / 72.0));
        } else {
            w = Math.log(x);
            if (x > 3.0)w -= Math.log(w);
        }
        return SpecialFunctions.halleyIteration(x, w, MAX_ITER);
    }

    /**
     * Minus 1 branch of Lambert-W function
     * Analytical approximations for real values of the Lambert W-function - D.A. Barry
     * Mathematics and Computers in Simulation 53 (2000) 95–103
     * @param {number} x
     * @return {number} Approxmiation of minus 1 branch of Lambert-W function
     * @private
     */
    /*private*/ static lambertW1(x: number): number {
        if (x >= -BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
        if (x < -MathConstants.EXP_MINUS_1_$LI$())return javaemul.internal.DoubleHelper.NaN;
        if (Math.abs(x + MathConstants.EXP_MINUS_1_$LI$()) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return -1;
        const M1: number = 0.3361;
        const M2: number = -0.0042;
        const M3: number = -0.0201;
        const s: number = -1 - Math.log(-x);
        return -1.0 - s - (2.0 / M1) * (1.0 - 1.0 / (1.0 + ((M1 * Math.sqrt(s / 2.0)) / (1.0 + M2 * s * Math.exp(M3 * Math.sqrt(s))))));
    }

    /**
     * Real-valued Lambert-W function approximation.
     * @param {number} x      Point at which function will be approximated
     * @param {number} branch Branch id, 0 for principal branch, -1 for the other branch
     * @return       {number} Principal branch for x greater or equal than -1/e, otherwise Double.NaN.
     * Minus 1 branch for x greater or equal than -1/e and lower than 0, otherwise Double.NaN.
     */
    public static lambertW(x: number, branch: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(branch))return javaemul.internal.DoubleHelper.NaN;
        if (Math.abs(branch) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return SpecialFunctions.lambertW0(x);
        if (Math.abs(branch + 1) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return SpecialFunctions.lambertW1(x);
        return javaemul.internal.DoubleHelper.NaN;
    }
}
SpecialFunctions["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions";