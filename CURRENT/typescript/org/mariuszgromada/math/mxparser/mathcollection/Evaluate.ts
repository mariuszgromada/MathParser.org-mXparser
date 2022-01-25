import { javaemul } from 'j4ts/j4ts';

/**
 * Evaluate - currently only polynomial evaluation based on provided coefficients.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class Evaluate {
    /**
     * Polynomial evaluation based on provided coefficients.
     * @param {number} x                  Point at which polynomial will be evaluated
     * @param {double[]} coefficients       Polynomial coefficients
     * @return                   {number} Polynomial value
     */
    public static polynomial(x: number, coefficients: number[]): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (coefficients == null)return javaemul.internal.DoubleHelper.NaN;
        if (coefficients.length === 0)return javaemul.internal.DoubleHelper.NaN;
        if (coefficients.length === 1)return coefficients[0];
        let sum: number = coefficients[coefficients.length - 1];
        if (/* isNaN */isNaN(sum))return javaemul.internal.DoubleHelper.NaN;
        for(let i: number = coefficients.length - 2; i >= 0; i--) {{
            if (/* isNaN */isNaN(coefficients[i]))return javaemul.internal.DoubleHelper.NaN;
            sum *= x;
            sum += coefficients[i];
        };}
        return sum;
    }

    /**
     * Polynomial evaluation for the {@link SpecialFunctions#logGamma(double)}
     * @param {number} x      Argument value
     * @param {double[]} coef   List of polynomial coefficients
     * @param {number} n      Polynomial degree
     * @return {number} Polynomial value
     */
    public static p1evl(x: number, coef: number[], n: number): number {
        let ans: number;
        ans = x + coef[0];
        for(let i: number = 1; i < n; i++) {{
            ans = ans * x + coef[i];
        };}
        return ans;
    }

    /**
     * Polynomial evaluation for the {@link SpecialFunctions#logGamma(double)}
     * @param {number} x      Argument value
     * @param {double[]} coef   List of polynomial coefficients
     * @param {number} n      Polynomial degree
     * @return {number} Polynomial value
     */
    public static polevl(x: number, coef: number[], n: number): number {
        let ans: number;
        ans = coef[0];
        for(let i: number = 1; i <= n; i++) {ans = ans * x + coef[i];}
        return ans;
    }
}
Evaluate["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.Evaluate";