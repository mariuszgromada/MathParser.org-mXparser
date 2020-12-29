import { mXparserConstants } from '../mXparserConstants';
import { javaemul } from 'j4ts/j4ts';
import { SpecialValue } from './SpecialValue';
import { SpecialValueTrigonometric } from './SpecialValueTrigonometric';
import { Units } from './Units';
import { SpecialFunctions } from './SpecialFunctions';
import { MathConstants } from './MathConstants';
import { BinaryRelations } from './BinaryRelations';
import { BigNumber } from 'bignumber.js/bignumber';

/**
 * MathFunctions - the most popular math functions. Many of function implemented by this class
 * could be found in java Math package (in fact functions from MathFunctions typically calls
 * original functions from the Math package). The reason why it was "re-implemented" is:
 * if you decide to implement your own function you do not need to change anything in the parser,
 * jut modify function implementation in this class.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.4.2
 * @class
 */
export class MathFunctions {
    /**
     * Addition a + b applying canonical rounding if canonical
     * rounding is enabled
     * 
     * @param {number} a  The a parameter
     * @param {number} b  The b parameter
     * @return   {number} The result of addition
     */
    public static plus(a: number, b: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (!mXparserConstants.checkIfCanonicalRounding())return a + b;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a))return a + b;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))return a + b;
        const da: BigNumber = new BigNumber(a);
        const db: BigNumber = new BigNumber(b);
        return da.plus(db).toNumber();
    }

    /**
     * Subtraction a - b applying canonical rounding if canonical
     * rounding is enabled
     * 
     * @param {number} a  The a parameter
     * @param {number} b  The b parameter
     * @return   {number} The result of subtraction
     */
    public static minus(a: number, b: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (!mXparserConstants.checkIfCanonicalRounding())return a - b;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a))return a - b;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))return a - b;
        const da: BigNumber = new BigNumber(a);
        const db: BigNumber = new BigNumber(b);
        return da.minus(db).toNumber();
    }

    /**
     * Multiplication a * b applying canonical rounding if canonical
     * rounding is enabled
     * 
     * @param {number} a  The a parameter
     * @param {number} b  The b parameter
     * @return   {number} The result of multiplication
     */
    public static multiply(a: number, b: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (!mXparserConstants.checkIfCanonicalRounding())return a * b;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a))return a * b;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))return a * b;
        const da: BigNumber = new BigNumber(a);
        const db: BigNumber = new BigNumber(b);
        return da.multipliedBy(db).toNumber();
    }

    /**
     * Division a / b applying canonical rounding if canonical
     * rounding is enabled
     * 
     * @param {number} a  The a parameter
     * @param {number} b  The b parameter
     * @return   {number} The result of division
     */
    public static div(a: number, b: number): number {
        if (b === 0)return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (!mXparserConstants.checkIfCanonicalRounding())return a / b;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a))return a / b;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))return a / b;
        const da: BigNumber = new BigNumber(a);
        const db: BigNumber = new BigNumber(b);
        return da.dividedBy(db).decimalPlaces(34, BigNumber.ROUND_HALF_UP).toNumber();
    }

    public static bellNumber$int(n: number): number {
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (n > 1){
            n -= 1;
            if ((n + 1) * (n + 1) >= javaemul.internal.IntegerHelper.MAX_VALUE)return javaemul.internal.DoubleHelper.NaN;
            const bellTriangle: number[][] = <any> (function(dims) { let allocate = function(dims) { if (dims.length === 0) { return 0; } else { let array = []; for(let i = 0; i < dims[0]; i++) { array.push(allocate(dims.slice(1))); } return array; }}; return allocate(dims);})([n + 1, n + 1]);
            bellTriangle[0][0] = 1;
            bellTriangle[1][0] = 1;
            for(let r: number = 1; r <= n; r++) {{
                for(let k: number = 0; k < r; k++) {bellTriangle[r][k + 1] = bellTriangle[r - 1][k] + bellTriangle[r][k];}
                if (r < n)bellTriangle[r + 1][0] = bellTriangle[r][r];
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            };}
            result = bellTriangle[n][n];
        } else if (n >= 0)result = 1;
        return result;
    }

    /**
     * Bell Numbers
     * 
     * @param      {number} n                   the n
     * 
     * @return     {number} if n &gt;= 0 returns Bell numbers,
     * otherwise returns Double.NaN.
     */
    public static bellNumber(n?: any): any {
        if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.bellNumber$int(n);
        } else if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.bellNumber$double(n);
        } else throw new Error('invalid overload');
    }

    public static bellNumber$double(n: number): number {
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.bellNumber$int((<number>Math.round(n)|0));
    }

    public static eulerNumber$int$int(n: number, k: number): number {
        if (n < 0)return javaemul.internal.DoubleHelper.NaN;
        if (k < 0)return 0;
        if (n === 0)if (k === 0)return 1; else return 0;
        if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        return (k + 1) * MathFunctions.eulerNumber$int$int(n - 1, k) + (n - k) * MathFunctions.eulerNumber$int$int(n - 1, k - 1);
    }

    /**
     * Euler numbers
     * 
     * @param      {number} n                   the n function param
     * @param      {number} k                   the k function param
     * 
     * @return     {number} if n &gt;=0 returns Euler number,
     * otherwise return Double.NaN.
     */
    public static eulerNumber(n?: any, k?: any): any {
        if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.eulerNumber$int$int(n, k);
        } else if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.eulerNumber$double$double(n, k);
        } else throw new Error('invalid overload');
    }

    public static eulerNumber$double$double(n: number, k: number): number {
        if (/* isNaN */isNaN(n) || /* isNaN */isNaN(k))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.eulerNumber$int$int((<number>Math.round(n)|0), (<number>Math.round(k)|0));
    }

    public static factorial$int(n: number): number {
        let f: number = javaemul.internal.DoubleHelper.NaN;
        if (n >= 0)if (n < 2)f = 1; else {
            f = 1;
            for(let i: number = 1; i <= n; i++) {{
                f = f * i;
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            };}
        }
        return f;
    }

    /**
     * Factorial
     * 
     * @param      {number} n                   the n function parameter
     * 
     * @return     {number} Factorial if n &gt;=0, otherwise returns Double.NaN.
     */
    public static factorial(n?: any): any {
        if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.factorial$int(n);
        } else if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.factorial$double(n);
        } else throw new Error('invalid overload');
    }

    public static factorial$double(n: number): number {
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.factorial$int((<number>Math.round(n)|0));
    }

    public static binomCoeff$double$long(n: number, k: number): number {
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (k >= 0){
            let numerator: number = 1;
            if (k > 0)for(let i: number = 0; i <= k - 1; i++) {{
                numerator *= (n - i);
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            };}
            let denominator: number = 1;
            if (k > 1)for(let i: number = 1; i <= k; i++) {{
                denominator *= i;
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            };}
            result = numerator / denominator;
        }
        return result;
    }

    /**
     * Generalized binomial coefficient
     * 
     * @param      {number} n                   the n function parameter
     * @param {number} k    k                   the k function parameter
     * 
     * @return     {number} Generalized binomial coefficient, if
     * n = Double.NaN or k &lt; 0 returns Double.NaN.
     */
    public static binomCoeff(n?: any, k?: any): any {
        if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.binomCoeff$double$long(n, k);
        } else if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.binomCoeff$double$double(n, k);
        } else throw new Error('invalid overload');
    }

    public static binomCoeff$double$double(n: number, k: number): number {
        if (/* isNaN */isNaN(n) || /* isNaN */isNaN(k))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.binomCoeff$double$long(n, (n => n<0?Math.ceil(n):Math.floor(n))(<number>Math.round(k)));
    }

    public static numberOfPermutations$double$long(n: number, k: number): number {
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (k >= 0){
            let numerator: number = 1;
            if (k > 0)for(let i: number = 0; i <= k - 1; i++) {{
                numerator *= (n - i);
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            };}
            result = numerator;
        }
        return result;
    }

    /**
     * Generalized coefficient returning number of k permutations
     * that can be drawn for n elements set.
     * 
     * @param      {number} n                   the n function parameter
     * @param      {number} k                   the k function parameter
     * 
     * @return   {number} For k greater than 0 return number of permutations, otherwise
     * returns Double.NaN
     */
    public static numberOfPermutations(n?: any, k?: any): any {
        if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.numberOfPermutations$double$long(n, k);
        } else if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.numberOfPermutations$double$double(n, k);
        } else throw new Error('invalid overload');
    }

    public static numberOfPermutations$double$double(n: number, k: number): number {
        if (/* isNaN */isNaN(n) || /* isNaN */isNaN(k))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.numberOfPermutations$double$long(n, (n => n<0?Math.ceil(n):Math.floor(n))(<number>Math.round(k)));
    }

    public static bernoulliNumber$int$int(m: number, n: number): number {
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if ((m >= 0) && (n >= 0)){
            result = 0;
            for(let k: number = 0; k <= m; k++) {for(let v: number = 0; v <= k; v++) {{
                result += Math.pow(-1, v) * MathFunctions.binomCoeff$double$long(k, v) * (Math.pow(n + v, m) / (k + 1));
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            };};}
        }
        return result;
    }

    /**
     * Bernoulli numbers
     * 
     * @param      {number} m                   the m function parameter
     * @param      {number} n                   the n function parameter
     * 
     * @return     {number} if n, m &gt;= 0 returns Bernoulli number,
     * otherwise returns Double.NaN.
     */
    public static bernoulliNumber(m?: any, n?: any): any {
        if (((typeof m === 'number') || m === null) && ((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.bernoulliNumber$int$int(m, n);
        } else if (((typeof m === 'number') || m === null) && ((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.bernoulliNumber$double$double(m, n);
        } else throw new Error('invalid overload');
    }

    public static bernoulliNumber$double$double(m: number, n: number): number {
        if (/* isNaN */isNaN(m) || /* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.bernoulliNumber$int$int((<number>Math.round(m)|0), (<number>Math.round(n)|0));
    }

    public static Stirling1Number$int$int(n: number, k: number): number {
        if (k > n)return 0;
        if (n === 0)if (k === 0)return 1; else return 0;
        if (k === 0)if (n === 0)return 1; else return 0;
        if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        return (n - 1) * MathFunctions.Stirling1Number$int$int(n - 1, k) + MathFunctions.Stirling1Number$int$int(n - 1, k - 1);
    }

    /**
     * Stirling numbers of the first kind
     * 
     * @param      {number} n                   the n function parameter
     * @param      {number} k                   the k function parameter
     * 
     * @return     {number} Stirling numbers of the first kind
     */
    public static Stirling1Number(n?: any, k?: any): any {
        if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.Stirling1Number$int$int(n, k);
        } else if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.Stirling1Number$double$double(n, k);
        } else throw new Error('invalid overload');
    }

    public static Stirling1Number$double$double(n: number, k: number): number {
        if (/* isNaN */isNaN(n) || /* isNaN */isNaN(k))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.Stirling1Number$int$int((<number>Math.round(n)|0), (<number>Math.round(k)|0));
    }

    public static Stirling2Number$int$int(n: number, k: number): number {
        if (k > n)return 0;
        if (n === 0)if (k === 0)return 1; else return 0;
        if (k === 0)if (n === 0)return 1; else return 0;
        if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        return k * MathFunctions.Stirling2Number$int$int(n - 1, k) + MathFunctions.Stirling2Number$int$int(n - 1, k - 1);
    }

    /**
     * Stirling numbers of the second kind
     * 
     * @param      {number} n                   the n function parameter
     * @param      {number} k                   the k function parameter
     * 
     * @return     {number} Stirling numbers of the second kind
     */
    public static Stirling2Number(n?: any, k?: any): any {
        if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.Stirling2Number$int$int(n, k);
        } else if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.Stirling2Number$double$double(n, k);
        } else throw new Error('invalid overload');
    }

    public static Stirling2Number$double$double(n: number, k: number): number {
        if (/* isNaN */isNaN(n) || /* isNaN */isNaN(k))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.Stirling2Number$int$int((<number>Math.round(n)|0), (<number>Math.round(k)|0));
    }

    public static worpitzkyNumber$int$int(n: number, k: number): number {
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if ((n >= 0) && (k >= 0) && (k <= n)){
            result = 0;
            for(let v: number = 0; v <= k; v++) {{
                result += Math.pow(-1, v + k) * Math.pow(v + 1, n) * MathFunctions.binomCoeff$double$long(k, v);
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            };}
        }
        return result;
    }

    /**
     * Worpitzky numbers
     * 
     * @param      {number} n                   the n function parameter
     * @param      {number} k                   the k function parameter
     * 
     * @return     {number} if n,k &gt;= 0 and k &lt;= n return Worpitzky number,
     * otherwise return Double.NaN.
     */
    public static worpitzkyNumber(n?: any, k?: any): any {
        if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.worpitzkyNumber$int$int(n, k);
        } else if (((typeof n === 'number') || n === null) && ((typeof k === 'number') || k === null)) {
            return <any>MathFunctions.worpitzkyNumber$double$double(n, k);
        } else throw new Error('invalid overload');
    }

    public static worpitzkyNumber$double$double(n: number, k: number): number {
        if (/* isNaN */isNaN(n) || /* isNaN */isNaN(k))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.worpitzkyNumber$int$int((<number>Math.round(n)|0), (<number>Math.round(k)|0));
    }

    public static harmonicNumber$int(n: number): number {
        if (n <= 0)return 0;
        if (n === 1)return 1;
        let h: number = 1;
        for(let k: number = 2.0; k <= n; k++) {{
            h += 1.0 / k;
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        };}
        return h;
    }

    public static harmonicNumber$double(n: number): number {
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.harmonicNumber$int((<number>Math.round(n)|0));
    }

    public static harmonicNumber$double$int(x: number, n: number): number {
        if ((/* isNaN */isNaN(x)) || (x < 0))return javaemul.internal.DoubleHelper.NaN;
        if (n <= 0)return 0;
        if (n === 1)return x;
        let h: number = 1;
        for(let k: number = 2.0; k <= n; k++) {{
            h += 1 / MathFunctions.power(k, x);
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        };}
        return h;
    }

    /**
     * Harmonic number 1/1 + 1/2^x + ... + 1/n^x
     * 
     * @param      {number} x                   the x function parameter
     * @param      {number} n                   the n function parameter
     * 
     * @return     {number} if x &lt;&gt; Double.NaN and x &gt;= 0 Harmonic number,
     * otherwise returns Double.NaN.
     */
    public static harmonicNumber(x?: any, n?: any): any {
        if (((typeof x === 'number') || x === null) && ((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.harmonicNumber$double$int(x, n);
        } else if (((typeof x === 'number') || x === null) && ((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.harmonicNumber$double$double(x, n);
        } else if (((typeof x === 'number') || x === null) && n === undefined) {
            return <any>MathFunctions.harmonicNumber$int(x);
        } else if (((typeof x === 'number') || x === null) && n === undefined) {
            return <any>MathFunctions.harmonicNumber$double(x);
        } else throw new Error('invalid overload');
    }

    public static harmonicNumber$double$double(x: number, n: number): number {
        if ((/* isNaN */isNaN(x)) || (/* isNaN */isNaN(n)))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.harmonicNumber$double$int(x, (<number>Math.round(n)|0));
    }

    public static catalanNumber$int(n: number): number {
        return MathFunctions.binomCoeff$double$long(2 * n, n) * MathFunctions.div(1, n + 1);
    }

    /**
     * Catalan numbers
     * 
     * @param      {number} n                   the n function parameter
     * 
     * @return     {number} Catalan numbers
     */
    public static catalanNumber(n?: any): any {
        if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.catalanNumber$int(n);
        } else if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.catalanNumber$double(n);
        } else throw new Error('invalid overload');
    }

    public static catalanNumber$double(n: number): number {
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.catalanNumber$int((<number>Math.round(n)|0));
    }

    public static fibonacciNumber$int(n: number): number {
        if (n < 0)return javaemul.internal.DoubleHelper.NaN;
        if (n === 0)return 0;
        if (n === 1)return 1;
        if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.fibonacciNumber$int(n - 1) + MathFunctions.fibonacciNumber$int(n - 2);
    }

    /**
     * Fibonacci numbers
     * 
     * @param      {number} n                   the n function parameter
     * 
     * @return     {number} if n &gt;= 0 returns fibonacci numbers,
     * otherwise returns Double.NaN.
     */
    public static fibonacciNumber(n?: any): any {
        if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.fibonacciNumber$int(n);
        } else if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.fibonacciNumber$double(n);
        } else throw new Error('invalid overload');
    }

    public static fibonacciNumber$double(n: number): number {
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.fibonacciNumber$int((<number>Math.round(n)|0));
    }

    public static lucasNumber$int(n: number): number {
        if (n < 0)return javaemul.internal.DoubleHelper.NaN;
        if (n === 0)return 2;
        if (n === 1)return 1;
        if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.lucasNumber$int(n - 1) + MathFunctions.lucasNumber$int(n - 2);
    }

    /**
     * Lucas numebrs
     * 
     * @param      {number} n                   the n function parameter
     * 
     * @return     {number} if n &gt;= 0 returns Lucas numbers,
     * otherwise returns Double.NaN.
     */
    public static lucasNumber(n?: any): any {
        if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.lucasNumber$int(n);
        } else if (((typeof n === 'number') || n === null)) {
            return <any>MathFunctions.lucasNumber$double(n);
        } else throw new Error('invalid overload');
    }

    public static lucasNumber$double(n: number): number {
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.lucasNumber$int((<number>Math.round(n)|0));
    }

    public static kroneckerDelta$double$double(i: number, j: number): number {
        if (/* isNaN */isNaN(i) || /* isNaN */isNaN(j))return javaemul.internal.DoubleHelper.NaN;
        if (i === j)return 1; else return 0;
    }

    public static kroneckerDelta$int$int(i: number, j: number): number {
        if (i === j)return 1; else return 0;
    }

    /**
     * Kronecker delta
     * 
     * @param      {number} i                   the i function parameter
     * @param      {number} j                   the j function parameter
     * 
     * @return     {number} Kronecker delta
     */
    public static kroneckerDelta(i?: any, j?: any): any {
        if (((typeof i === 'number') || i === null) && ((typeof j === 'number') || j === null)) {
            return <any>MathFunctions.kroneckerDelta$int$int(i, j);
        } else if (((typeof i === 'number') || i === null) && ((typeof j === 'number') || j === null)) {
            return <any>MathFunctions.kroneckerDelta$double$double(i, j);
        } else throw new Error('invalid overload');
    }

    /**
     * Continued fraction
     * 
     * @param      {double[]} sequence            the numbers
     * 
     * @return     {number} if each number form the sequence &lt;&gt; Double.NaN and
     * there is no division by 0 while computing returns continued fraction
     * value, otherwise returns Double.NaN.
     */
    public static continuedFraction(...sequence: number[]): number {
        if (sequence == null)return javaemul.internal.DoubleHelper.NaN;
        if (sequence.length === 0)return javaemul.internal.DoubleHelper.NaN;
        let cf: number = 0;
        let a: number;
        if (sequence.length === 1)return sequence[0];
        const lastIndex: number = sequence.length - 1;
        for(let i: number = lastIndex; i >= 0; i--) {{
            a = sequence[i];
            if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
            if (i === lastIndex){
                cf = a;
            } else {
                if (cf === 0)return javaemul.internal.DoubleHelper.NaN;
                cf = a + 1.0 / cf;
            }
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        };}
        return cf;
    }

    public static continuedPolynomial$int$double_A(n: number, x: number[]): number {
        if (x == null)return javaemul.internal.DoubleHelper.NaN;
        if (x.length === 0)return javaemul.internal.DoubleHelper.NaN;
        if (n === 0)return 1;
        if (n === 1)return x[0];
        if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        return x[n - 1] * MathFunctions.continuedPolynomial$int$double_A(n - 1, x) + MathFunctions.continuedPolynomial$int$double_A(n - 2, x);
    }

    /**
     * Private function calculating continued polynomial
     * recursively.
     * 
     * @param      {number} n         the polynomial order
     * @param      {double[]} x         the x values
     * 
     * @return     {number} continued polynomial value
     * @private
     */
    public static continuedPolynomial(n?: any, x?: any): any {
        if (((typeof n === 'number') || n === null) && ((x != null && x instanceof <any>Array && (x.length == 0 || x[0] == null ||(typeof x[0] === 'number'))) || x === null)) {
            return <any>MathFunctions.continuedPolynomial$int$double_A(n, x);
        } else if (((n != null && n instanceof <any>Array && (n.length == 0 || n[0] == null ||(typeof n[0] === 'number'))) || n === null) && x === undefined) {
            return <any>MathFunctions.continuedPolynomial$double_A(...n);
        } else throw new Error('invalid overload');
    }

    public static continuedPolynomial$double_A(...x: number[]): number {
        if (x == null)return javaemul.internal.DoubleHelper.NaN;
        if (x.length === 0)return javaemul.internal.DoubleHelper.NaN;
        for(let index135=0; index135 < x.length; index135++) {
            let d = x[index135];
            {
                if (/* isNaN */isNaN(d))return javaemul.internal.DoubleHelper.NaN;
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            }
        }
        return MathFunctions.continuedPolynomial$int$double_A(x.length, x);
    }

    public static eulerPolynomial$int$double(m: number, x: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (m >= 0){
            result = 0;
            for(let n: number = 0; n <= m; n++) {{
                for(let k: number = 0; k <= n; k++) {{
                    result += Math.pow(-1, k) * MathFunctions.binomCoeff$double$long(n, k) * Math.pow(x + k, m);
                    if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                };}
                result /= Math.pow(2, n);
            };}
        }
        return result;
    }

    /**
     * Euler polynomial
     * 
     * @param      {number} m                   the m parameter
     * @param      {number} x                   the x parameter
     * 
     * @return     {number} if x &lt;&gt; Double.NaN and m &gt;= 0 returns polynomial value,
     * otherwise returns Double.NaN.
     */
    public static eulerPolynomial(m?: any, x?: any): any {
        if (((typeof m === 'number') || m === null) && ((typeof x === 'number') || x === null)) {
            return <any>MathFunctions.eulerPolynomial$int$double(m, x);
        } else if (((typeof m === 'number') || m === null) && ((typeof x === 'number') || x === null)) {
            return <any>MathFunctions.eulerPolynomial$double$double(m, x);
        } else throw new Error('invalid overload');
    }

    public static eulerPolynomial$double$double(m: number, x: number): number {
        if (/* isNaN */isNaN(m) || /* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        return MathFunctions.eulerPolynomial$int$double((<number>Math.round(m)|0), (<number>Math.round(x)|0));
    }

    /**
     * Characteristic function x in (a,b)
     * 
     * @param      {number} x                   the x value
     * @param      {number} a                   the left (lower) limit
     * @param      {number} b                   the right (upper) limit
     * 
     * @return     {number} if x, a, b &lt;&gt; Double.NaN returns
     * characteristic function value on the (a,b) range.
     */
    public static chi(x: number, a: number, b: number): number {
        if (/* isNaN */isNaN(x) || /* isNaN */isNaN(a) || /* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if ((!/* isNaN */isNaN(x)) && (!/* isNaN */isNaN(a)) && (!/* isNaN */isNaN(b)))if ((x > a) && (x < b))result = 1; else result = 0;
        return result;
    }

    /**
     * Characteristic function x in [a,b]
     * 
     * @param      {number} x                   the x value
     * @param      {number} a                   the left (lower) limit
     * @param      {number} b                   the right (upper) limit
     * 
     * @return     {number} if x, a, b &lt;&gt; Double.NaN returns
     * characteristic function value on the [a,b] range.
     */
    public static chi_LR(x: number, a: number, b: number): number {
        if (/* isNaN */isNaN(x) || /* isNaN */isNaN(a) || /* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if ((!/* isNaN */isNaN(x)) && (!/* isNaN */isNaN(a)) && (!/* isNaN */isNaN(b)))if ((x >= a) && (x <= b))result = 1; else result = 0;
        return result;
    }

    /**
     * Characteristic function x in [a,b)
     * 
     * @param      {number} x                   the x value
     * @param      {number} a                   the left (lower) limit
     * @param      {number} b                   the right (upper) limit
     * 
     * @return     {number} if x, a, b &lt;&gt; Double.NaN returns
     * characteristic function value on the [a,b) range.
     */
    public static chi_L(x: number, a: number, b: number): number {
        if (/* isNaN */isNaN(x) || /* isNaN */isNaN(a) || /* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if ((!/* isNaN */isNaN(x)) && (!/* isNaN */isNaN(a)) && (!/* isNaN */isNaN(b)))if ((x >= a) && (x < b))result = 1; else result = 0;
        return result;
    }

    /**
     * Characteristic function x in (a,b]
     * 
     * @param      {number} x                   the x value
     * @param      {number} a                   the left (lower) limit
     * @param      {number} b                   the right (upper) limit
     * 
     * @return     {number} if x, a, b &lt;&gt; Double.NaN returns
     * characteristic function value on the (a,b] range.
     */
    public static chi_R(x: number, a: number, b: number): number {
        if (/* isNaN */isNaN(x) || /* isNaN */isNaN(a) || /* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if ((!/* isNaN */isNaN(x)) && (!/* isNaN */isNaN(a)) && (!/* isNaN */isNaN(b)))if ((x > a) && (x <= b))result = 1; else result = 0;
        return result;
    }

    /**
     * Verifies whether provided number is almost integer
     * 
     * @see BinaryRelations#DEFAULT_COMPARISON_EPSILON
     * 
     * @param {number} a  The number to be verified
     * @return   {boolean} True if the number is almost integer according to the default epsilon,
     * otherwise returns false.
     */
    public static isAlmostInt(a: number): boolean {
        const aint: number = Math.round(a);
        if (MathFunctions.abs(a - aint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return true; else return false;
    }

    /**
     * Applies the integer exponent to the base a
     * 
     * @param {number} a   The base
     * @param {number} n   The integer exponent
     * @return    {number} Return a to the power of n, if canonical rounding is enable, the it operates on big numbers
     * @private
     */
    /*private*/ static powInt(a: number, n: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a))Math.pow(a, n);
        if (a === 0)return Math.pow(a, n);
        if (n === 0)return 1;
        if (n === 1)return a;
        if (mXparserConstants.checkIfCanonicalRounding()){
            const da: BigNumber = new BigNumber(a);
            if (n >= 0)return da.pow(n).toNumber(); else return new BigNumber(1).dividedBy(da).decimalPlaces(34, BigNumber.ROUND_HALF_UP).pow(-n).toNumber();
        } else {
            return Math.pow(a, n);
        }
    }

    /**
     * Power function a^b
     * 
     * @param      {number} a                   the a function parameter
     * @param      {number} b                   the b function parameter
     * 
     * @return     {number} if a,b &lt;&gt; Double.NaN returns Math.pow(a, b),
     * otherwise returns Double.NaN.
     */
    public static power(a: number, b: number): number {
        if (/* isNaN */isNaN(a) || /* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a))Math.pow(a, b);
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))Math.pow(a, b);
        const babs: number = Math.abs(b);
        const bint: number = Math.round(babs);
        if (MathFunctions.abs(babs - bint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON){
            if (b >= 0)return MathFunctions.powInt(a, (<number>bint|0)); else return MathFunctions.powInt(a, -(<number>bint|0));
        } else if (a >= 0)return Math.pow(a, b); else if (MathFunctions.abs(b) >= 1)return Math.pow(a, b); else if (b === 0)return Math.pow(a, b); else {
            const ndob: number = 1.0 / MathFunctions.abs(b);
            const nint: number = Math.round(ndob);
            if (MathFunctions.abs(ndob - nint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON){
                const n: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>nint);
                if (n % 2 === 1)if (b > 0)return -Math.pow(MathFunctions.abs(a), 1.0 / ndob); else return -Math.pow(MathFunctions.abs(a), -1.0 / ndob); else return javaemul.internal.DoubleHelper.NaN;
            } else return javaemul.internal.DoubleHelper.NaN;
        }
    }

    /**
     * Nth order root of a number
     * 
     * @param {number} n   Root order
     * @param {number} x   Number
     * @return    {number} Returns root of a number. If calculation is not possible Double.NaN is returned.
     */
    public static root(n: number, x: number): number {
        if (/* isNaN */isNaN(n) || /* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(n) || /* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(n))return javaemul.internal.DoubleHelper.NaN;
        if (n < -BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
        if (MathFunctions.abs(n) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON){
            if (MathFunctions.abs(x) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return 0; else if (MathFunctions.abs(x - 1) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return 1; else return javaemul.internal.DoubleHelper.NaN;
        }
        const nint: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>MathFunctions.floor(n));
        if (nint === 1)return x;
        if (nint === 2)return MathFunctions.sqrt(x);
        if (nint % 2 === 1){
            if (x >= 0)return Math.pow(x, 1.0 / nint); else return -Math.pow(MathFunctions.abs(x), 1.0 / nint);
        } else {
            if (x >= 0)return Math.pow(x, 1.0 / nint); else return javaemul.internal.DoubleHelper.NaN;
        }
    }

    /**
     * Tetration, exponential power, power series
     * 
     * @param {number} a   base
     * @param {number} n   exponent
     * @return    {number} Tetration result.
     */
    public static tetration(a: number, n: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(n))return javaemul.internal.DoubleHelper.NaN;
        if (n === javaemul.internal.DoubleHelper.POSITIVE_INFINITY){
            if (MathFunctions.abs(a - MathConstants.EXP_MINUS_E_$LI$()) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return MathConstants.EXP_MINUS_1_$LI$();
            if (MathFunctions.abs(a - MathConstants.EXP_1_OVER_E_$LI$()) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return MathConstants.E;
            if ((a > MathConstants.EXP_MINUS_E_$LI$()) && (a < MathConstants.EXP_1_OVER_E_$LI$()))return SpecialFunctions.lambertW(-MathFunctions.ln(a), 0) / (-MathFunctions.ln(a));
            if (a > MathConstants.EXP_1_OVER_E_$LI$())return javaemul.internal.DoubleHelper.POSITIVE_INFINITY;
            if (a < MathConstants.EXP_MINUS_E_$LI$())return javaemul.internal.DoubleHelper.NaN;
        }
        if (n < -BinaryRelations.DEFAULT_COMPARISON_EPSILON)return javaemul.internal.DoubleHelper.NaN;
        if (MathFunctions.abs(n) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON){
            if (MathFunctions.abs(a) > BinaryRelations.DEFAULT_COMPARISON_EPSILON)return 1; else return javaemul.internal.DoubleHelper.NaN;
        }
        n = MathFunctions.floor(n);
        if (n === 0){
            if (MathFunctions.abs(a) > BinaryRelations.DEFAULT_COMPARISON_EPSILON)return 1; else return javaemul.internal.DoubleHelper.NaN;
        }
        if (MathFunctions.abs(a) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return 0;
        if (n === 1)return a;
        let r: number = a;
        for(let i: number = 2; i <= n; i++) {{
            r = Math.pow(a, r);
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        };}
        return r;
    }

    /**
     * Modulo operator a % b
     * 
     * @param      {number} a                   the a function parameter
     * @param      {number} b                   the b function parameter
     * 
     * @return     {number} if a,b &lt;&gt; Double.NaN returns a % b.
     */
    public static mod(a: number, b: number): number {
        if (/* isNaN */isNaN(a) || /* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        return a % b;
    }

    /**
     * Sine trigonometric function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN return Math.sin(a),
     * otherwise return Double.NaN.
     */
    public static sin(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (mXparserConstants.checkIfDegreesMode())a = a * Units.DEGREE_ARC_$LI$();
        const sv: SpecialValueTrigonometric = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
        if (sv != null)return sv.sin;
        return Math.sin(a);
    }

    /**
     * Cosine trigonometric function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.cos(a),
     * otherwise returns Double.NaN.
     */
    public static cos(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (mXparserConstants.checkIfDegreesMode())a = a * Units.DEGREE_ARC_$LI$();
        const sv: SpecialValueTrigonometric = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
        if (sv != null)return sv.cos;
        return Math.cos(a);
    }

    /**
     * Tangent trigonometric function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.tan(a),
     * otherwise returns Double.NaN.
     */
    public static tan(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (mXparserConstants.checkIfDegreesMode())a = a * Units.DEGREE_ARC_$LI$();
        const sv: SpecialValueTrigonometric = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
        if (sv != null)return sv.tan;
        return Math.tan(a);
    }

    /**
     * Cotangent trigonometric function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and tan(a) &lt;&gt; 0 returns 1 / Math.tan(a),
     * otherwise returns Double.NaN.
     */
    public static ctan(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (mXparserConstants.checkIfDegreesMode())a = a * Units.DEGREE_ARC_$LI$();
        const sv: SpecialValueTrigonometric = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
        if (sv != null)return sv.ctan;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        const tg: number = Math.tan(a);
        if (tg !== 0)result = 1.0 / tg;
        return result;
    }

    /**
     * Secant trigonometric function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and cos(a) &lt;&gt; 0 returns 1 / Math.cos(a),
     * otherwise returns Double.NaN.
     */
    public static sec(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (mXparserConstants.checkIfDegreesMode())a = a * Units.DEGREE_ARC_$LI$();
        const sv: SpecialValueTrigonometric = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
        if (sv != null)return sv.sec;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        const cos: number = Math.cos(a);
        if (cos !== 0)result = 1.0 / cos;
        return result;
    }

    /**
     * Cosecant trigonometric function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and sin(a) &lt;&gt; 0 returns 1 / Math.sin(a),
     * otherwise returns Double.NaN.
     */
    public static cosec(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (mXparserConstants.checkIfDegreesMode())a = a * Units.DEGREE_ARC_$LI$();
        const sv: SpecialValueTrigonometric = SpecialValueTrigonometric.getSpecialValueTrigonometric(a);
        if (sv != null)return sv.csc;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        const sin: number = Math.sin(a);
        if (sin !== 0)result = 1.0 / sin;
        return result;
    }

    /**
     * If double is almost integer returns the closes integer, otherwise original value
     * @param {number} val   Parameter
     * @return      {number} f double is almost integer returns the closest integer, otherwise original value
     * @private
     */
    /*private*/ static intIfAlmostIntOtherwiseOrig(val: number): number {
        const valint: number = Math.round(val);
        if (Math.abs(val - valint) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return valint;
        return val;
    }

    /**
     * Arcus sine - inverse trigonometric sine function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.asin(a),
     * otherwise returns Double.NaN.
     */
    public static asin(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        const sv: SpecialValue = SpecialValueTrigonometric.getSpecialValueAsin(a);
        let r: number;
        if (sv != null)r = sv.fv; else r = Math.asin(a);
        if (mXparserConstants.checkIfDegreesMode()){
            if (sv != null)return sv.fvdeg;
            return MathFunctions.intIfAlmostIntOtherwiseOrig(r / Units.DEGREE_ARC_$LI$());
        } else return r;
    }

    /**
     * Arcus cosine - inverse trigonometric cosine function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.acos(a),
     * otherwise returns Double.NaN.
     */
    public static acos(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        const sv: SpecialValue = SpecialValueTrigonometric.getSpecialValueAcos(a);
        let r: number;
        if (sv != null)r = sv.fv; else r = Math.acos(a);
        if (mXparserConstants.checkIfDegreesMode()){
            if (sv != null)return sv.fvdeg;
            return MathFunctions.intIfAlmostIntOtherwiseOrig(r / Units.DEGREE_ARC_$LI$());
        } else return r;
    }

    /**
     * Arcus tangent - inverse trigonometric tangent function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.atan(a),
     * otherwise returns Double.NaN.
     */
    public static atan(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        const sv: SpecialValue = SpecialValueTrigonometric.getSpecialValueAtan(a);
        let r: number;
        if (sv != null)r = sv.fv; else r = Math.atan(a);
        if (mXparserConstants.checkIfDegreesMode()){
            if (sv != null)return sv.fvdeg;
            return MathFunctions.intIfAlmostIntOtherwiseOrig(r / Units.DEGREE_ARC_$LI$());
        } else return r;
    }

    /**
     * Arcus cotangent - inverse trigonometric cotangent function
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.atan(1/a),
     * otherwise returns Double.NaN.
     */
    public static actan(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        const sv: SpecialValue = SpecialValueTrigonometric.getSpecialValueActan(a);
        let r: number;
        if (sv != null)r = sv.fv; else {
            if (a > 0)r = Math.atan(1 / a); else if (a < 0)r = Math.atan(1 / a) + MathConstants.PI; else r = javaemul.internal.DoubleHelper.NaN;
        }
        if (mXparserConstants.checkIfDegreesMode()){
            if (sv != null)return sv.fvdeg;
            return MathFunctions.intIfAlmostIntOtherwiseOrig(r / Units.DEGREE_ARC_$LI$());
        } else return r;
    }

    /**
     * Arcus secant - inverse trigonometric secant function
     * 
     * @param      {number} a                   the a function parameter
     * @return     {number} Inverse trigonometric secant function
     */
    public static asec(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        const sv: SpecialValue = SpecialValueTrigonometric.getSpecialValueAsec(a);
        let r: number;
        if (sv != null)r = sv.fv; else r = Math.acos(1 / a);
        if (mXparserConstants.checkIfDegreesMode()){
            if (sv != null)return sv.fvdeg;
            return MathFunctions.intIfAlmostIntOtherwiseOrig(r / Units.DEGREE_ARC_$LI$());
        } else return r;
    }

    /**
     * Arcus cosecant - inverse trigonometric cosecant function
     * 
     * @param      {number} a                   the a function parameter
     * @return     {number} Inverse trigonometric cosecant function
     */
    public static acosec(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        const sv: SpecialValue = SpecialValueTrigonometric.getSpecialValueAcsc(a);
        let r: number;
        if (sv != null)r = sv.fv; else r = Math.asin(1 / a);
        if (mXparserConstants.checkIfDegreesMode()){
            if (sv != null)return sv.fvdeg;
            return MathFunctions.intIfAlmostIntOtherwiseOrig(r / Units.DEGREE_ARC_$LI$());
        } else return r;
    }

    /**
     * Natural logarithm
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.log(1/a),
     * otherwise returns Double.NaN.
     */
    public static ln(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.log(a);
    }

    /**
     * Binary logarithm
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.log(a)/Math.log(2.0),
     * otherwise returns Double.NaN.
     */
    public static log2(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.log(a) / Math.log(2.0);
    }

    /**
     * Common logarithm
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.log10(a),
     * otherwise returns Double.NaN.
     */
    public static log10(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return /* log10 */(x => Math.log(x) * Math.LOG10E)(a);
    }

    /**
     * Degrees to radius translation.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.toRadians(a),
     * otherwise returns Double.NaN.
     */
    public static rad(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return /* toRadians */(x => x * Math.PI / 180)(a);
    }

    /**
     * Exponential function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.exp(a),
     * otherwise returns Double.NaN.
     */
    public static exp(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.exp(a);
    }

    /**
     * Square root.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.sqrt(a),
     * otherwise returns Double.NaN.
     */
    public static sqrt(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.sqrt(a);
    }

    /**
     * Hyperbolic sine function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.sinh(a),
     * otherwise returns Double.NaN.
     */
    public static sinh(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return /* sinh */(x => (Math.exp(x) - Math.exp(-x)) / 2)(a);
    }

    /**
     * Hyperbolic cosine function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.cosh(a),
     * otherwise returns Double.NaN.
     */
    public static cosh(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return /* cosh */(x => (Math.exp(x) + Math.exp(-x)) / 2)(a);
    }

    /**
     * Hyperbolic tangent function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.tanh(a),
     * otherwise returns Double.NaN.
     */
    public static tanh(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return /* tanh */(x => { if (x == Number.POSITIVE_INFINITY) { return 1; } else if (x == Number.NEGATIVE_INFINITY) { return -1; } let e2x = Math.exp(2 * x); return (e2x - 1) / (e2x + 1); })(a);
    }

    /**
     * Hyperbolic cotangent function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and tanh(a) &lt;&gt; 0 returns 1 / Math.tanh(a),
     * otherwise returns Double.NaN.
     */
    public static coth(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        const tanh: number = /* tanh */(x => { if (x == Number.POSITIVE_INFINITY) { return 1; } else if (x == Number.NEGATIVE_INFINITY) { return -1; } let e2x = Math.exp(2 * x); return (e2x - 1) / (e2x + 1); })(a);
        if (tanh !== 0)result = 1.0 / tanh;
        return result;
    }

    /**
     * Hyperbolic secant function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and cosh(a) &lt;&gt; 0 returns 1 / Math.cosh(a),
     * otherwise returns Double.NaN.
     */
    public static sech(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        const cosh: number = /* cosh */(x => (Math.exp(x) + Math.exp(-x)) / 2)(a);
        if (cosh !== 0)result = 1.0 / cosh;
        return result;
    }

    /**
     * Hyperbolic cosecant function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and sinh(a) &lt;&gt; 0 returns 1 / Math.sinh(a),
     * otherwise returns Double.NaN.
     */
    public static csch(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        const sinh: number = /* sinh */(x => (Math.exp(x) - Math.exp(-x)) / 2)(a);
        if (sinh !== 0)result = 1.0 / sinh;
        return result;
    }

    /**
     * Radius to degrees translation.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.toDegrees(a),
     * otherwise returns Double.NaN.
     */
    public static deg(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return /* toDegrees */(x => x * 180 / Math.PI)(a);
    }

    /**
     * Absolute value.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.abs(a),
     * otherwise returns Double.NaN.
     */
    public static abs(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.abs(a);
    }

    /**
     * Signum function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.signum(a),
     * otherwise returns Double.NaN.
     */
    public static sgn(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return /* signum */(f => { if (f > 0) { return 1; } else if (f < 0) { return -1; } else { return 0; } })(a);
    }

    /**
     * Floor function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.floor(a),
     * otherwise returns Double.NaN.
     */
    public static floor(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.floor(a);
    }

    /**
     * Ceiling function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.ceil(a),
     * otherwise returns Double.NaN.
     */
    public static ceil(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.ceil(a);
    }

    /**
     * Arcus hyperbolic sine - inverse hyperbolic sine function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.log(a + Math.sqrt(a*a+1)),
     * otherwise returns Double.NaN.
     */
    public static arsinh(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.log(a + Math.sqrt(a * a + 1));
    }

    /**
     * Arcus hyperbolic cosine - inverse hyperbolic cosine function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN returns Math.log(a + Math.sqrt(a*a-1)),
     * otherwise returns Double.NaN.
     */
    public static arcosh(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        return Math.log(a + Math.sqrt(a * a - 1));
    }

    /**
     * Arcus hyperbolic tangent - inverse hyperbolic tangent function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and 1-a &lt;&gt; 0 returns 0.5*Math.log( (1+a)/(1-a) ),
     * otherwise returns Double.NaN.
     */
    public static artanh(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (1 - a !== 0)result = 0.5 * Math.log((1 + a) / (1 - a));
        return result;
    }

    /**
     * Arcus hyperbolic tangent - inverse hyperbolic tangent function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and a-1 &lt;&gt; 0 returns 0.5*Math.log( (a+1)/(a-1) );,
     * otherwise returns Double.NaN.
     */
    public static arcoth(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (a - 1 !== 0)result = 0.5 * Math.log((a + 1) / (a - 1));
        return result;
    }

    /**
     * Arcus hyperbolic secant - inverse hyperbolic secant function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
     * otherwise returns Double.NaN.
     */
    public static arsech(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (a !== 0)result = Math.log((1 + Math.sqrt(1 - a * a)) / a);
        return result;
    }

    /**
     * Arcus hyperbolic cosecant - inverse hyperbolic cosecant function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
     * otherwise returns Double.NaN.
     */
    public static arcsch(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (a !== 0)result = Math.log(1 / a + Math.sqrt(1 + a * a) / Math.abs(a));
        return result;
    }

    /**
     * Normalized sinc function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.sin(PI*a) / (PI*a);,
     * otherwise returns Double.NaN.
     */
    public static sa(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        const x: number = MathConstants.PI * a;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (x !== 0)result = Math.sin(x) / (x); else result = 1.0;
        return result;
    }

    /**
     * Sinc function.
     * 
     * @param      {number} a                   the a function parameter
     * 
     * @return     {number} if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.sin(a) / (a),
     * otherwise returns Double.NaN.
     */
    public static sinc(a: number): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        if (a !== 0)if (mXparserConstants.checkIfDegreesMode())result = Math.sin(a * Units.DEGREE_ARC_$LI$()) / (a); else result = Math.sin(a) / (a); else result = 1.0;
        return result;
    }

    /**
     * General logarithm.
     * 
     * @param      {number} a                   the a function parameter (base)
     * @param      {number} b                   the b function parameter (number)
     * 
     * @return     {number} if a,b &lt;&gt; Double.NaN and log(b) &lt;&gt; 0 returns Math.log(a) / Math.log(b),
     * otherwise returns Double.NaN.
     */
    public static log(a: number, b: number): number {
        if (/* isNaN */isNaN(a) || /* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        let result: number = javaemul.internal.DoubleHelper.NaN;
        const logb: number = Math.log(b);
        if (logb !== 0)result = Math.log(a) / logb;
        return result;
    }

    /**
     * Double rounding
     * 
     * @param {number} value    double value to be rounded
     * @param {number} places   decimal places
     * @return         {number} Rounded value
     */
    public static round(value: number, places: number): number {
        if (/* isNaN */isNaN(value))return javaemul.internal.DoubleHelper.NaN;
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(value))return value;
        if (places < 0)return javaemul.internal.DoubleHelper.NaN;
        let bd: BigNumber = new BigNumber(/* toString */(''+(value)));
        bd = bd.decimalPlaces(places, BigNumber.ROUND_HALF_UP);
        return bd.toNumber();
    }

    /**
     * Double half up rounding
     * 
     * @param {number} value    double value to be rounded
     * @param {number} places   decimal places
     * @return         {number} Rounded value
     */
    public static roundHalfUp(value: number, places: number): number {
        if (/* isNaN */isNaN(value))return javaemul.internal.DoubleHelper.NaN;
        if (places < 0)return javaemul.internal.DoubleHelper.NaN;
        if (value === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return javaemul.internal.DoubleHelper.NEGATIVE_INFINITY;
        if (value === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return javaemul.internal.DoubleHelper.POSITIVE_INFINITY;
        if (value === 0)return 0;
        let sign: number = 1;
        const origValue: number = value;
        if (value < 0){
            sign = -1;
            value = -value;
        }
        const ulpPosition: number = MathFunctions.ulpDecimalDigitsBefore(value);
        if (ulpPosition <= 0)return sign * Math.floor(value);
        if (places > ulpPosition)return origValue;
        let multiplier: number = 1;
        for(let place: number = 0; place < places; place++) {{
            multiplier = Math.floor(multiplier * 10);
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        };}
        const valueMultiplied: number = value * multiplier;
        let valueFloor: number = Math.floor(valueMultiplied);
        if (Math.abs(valueMultiplied - valueFloor) >= 0.5)valueFloor = Math.floor(valueFloor + 1);
        return Math.floor(sign * valueFloor) / multiplier;
    }

    /**
     * Double down rounding
     * 
     * @param {number} value    double value to be rounded
     * @param {number} places   decimal places
     * @return         {number} Rounded value
     */
    public static roundDown(value: number, places: number): number {
        if (/* isNaN */isNaN(value))return javaemul.internal.DoubleHelper.NaN;
        if (places < 0)return javaemul.internal.DoubleHelper.NaN;
        if (value === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return javaemul.internal.DoubleHelper.NEGATIVE_INFINITY;
        if (value === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return javaemul.internal.DoubleHelper.POSITIVE_INFINITY;
        if (value === 0)return 0;
        let sign: number = 1;
        const origValue: number = value;
        if (value < 0){
            sign = -1;
            value = -value;
        }
        const ulpPosition: number = MathFunctions.ulpDecimalDigitsBefore(value);
        if (ulpPosition <= 0)return sign * Math.floor(value);
        if (places > ulpPosition)return origValue;
        let multiplier: number = 1;
        for(let place: number = 0; place < places; place++) {{
            multiplier = Math.floor(multiplier * 10);
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        };}
        const valueMultiplied: number = value * multiplier;
        const valueFloor: number = Math.floor(valueMultiplied);
        return Math.floor(sign * valueFloor) / multiplier;
    }

    /**
     * Unit in the last place rounding, see
     * 0.1 + 0.1 + 0.1 vs roundUlp(0.1 + 0.1 + 0.1)
     * 
     * @param {number} number   Double number that is to be rounded
     * 
     * @return    {number} Double number with rounded ulp
     * 
     * @see MathFunctions#decimalDigitsBefore(double)
     * @see MathFunctions#ulp(double)
     */
    public static roundUlp(number: number): number {
        if ((/* isNaN */isNaN(number)) || (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(number)) || (number === 0))return number; else {
            const precision: number = MathFunctions.ulpDecimalDigitsBefore(number);
            if (precision >= 1)return MathFunctions.round(number, precision - 5); else if (precision === 0)return MathFunctions.round(number, 0); else return number;
        }
    }

    /**
     * Returns integer part of a double value.
     * @param {number} x  Number
     * @return {number} For non- negative x returns Math.floor(x),
     * otherwise returns -Math.floor(-x)
     */
    public static integerPart(x: number): number {
        if (x > 0)return Math.floor(x); else if (x < 0)return -Math.floor(-x); else return 0;
    }

    /**
     * For very small number returns the position of
     * first significant digit, ie 0.1 = 1, 0.01 = 2
     * 
     * @param {number} value Double value, small one.
     * @return {number} Number of digits, number of places.
     */
    public static decimalDigitsBefore(value: number): number {
        if (value === 0)return -1;
        if (value <= 1.0E-322)return 322; else if (value <= 1.0E-321)return 321; else if (value <= 1.0E-320)return 320; else if (value <= 1.0E-319)return 319; else if (value <= 1.0E-318)return 318; else if (value <= 1.0E-317)return 317; else if (value <= 1.0E-316)return 316; else if (value <= 1.0E-315)return 315; else if (value <= 1.0E-314)return 314; else if (value <= 1.0E-313)return 313; else if (value <= 1.0E-312)return 312; else if (value <= 1.0E-311)return 311; else if (value <= 1.0E-310)return 310; else if (value <= 1.0E-309)return 309; else if (value <= 1.0E-308)return 308; else if (value <= 1.0E-307)return 307; else if (value <= 1.0E-306)return 306; else if (value <= 1.0E-305)return 305; else if (value <= 1.0E-304)return 304; else if (value <= 1.0E-303)return 303; else if (value <= 1.0E-302)return 302; else if (value <= 1.0E-301)return 301; else if (value <= 1.0E-300)return 300; else if (value <= 1.0E-299)return 299; else if (value <= 1.0E-298)return 298; else if (value <= 1.0E-297)return 297; else if (value <= 1.0E-296)return 296; else if (value <= 1.0E-295)return 295; else if (value <= 1.0E-294)return 294; else if (value <= 1.0E-293)return 293; else if (value <= 1.0E-292)return 292; else if (value <= 1.0E-291)return 291; else if (value <= 1.0E-290)return 290; else if (value <= 1.0E-289)return 289; else if (value <= 1.0E-288)return 288; else if (value <= 1.0E-287)return 287; else if (value <= 1.0E-286)return 286; else if (value <= 1.0E-285)return 285; else if (value <= 1.0E-284)return 284; else if (value <= 1.0E-283)return 283; else if (value <= 1.0E-282)return 282; else if (value <= 1.0E-281)return 281; else if (value <= 1.0E-280)return 280; else if (value <= 1.0E-279)return 279; else if (value <= 1.0E-278)return 278; else if (value <= 1.0E-277)return 277; else if (value <= 1.0E-276)return 276; else if (value <= 1.0E-275)return 275; else if (value <= 1.0E-274)return 274; else if (value <= 1.0E-273)return 273; else if (value <= 1.0E-272)return 272; else if (value <= 1.0E-271)return 271; else if (value <= 1.0E-270)return 270; else if (value <= 1.0E-269)return 269; else if (value <= 1.0E-268)return 268; else if (value <= 1.0E-267)return 267; else if (value <= 1.0E-266)return 266; else if (value <= 1.0E-265)return 265; else if (value <= 1.0E-264)return 264; else if (value <= 1.0E-263)return 263; else if (value <= 1.0E-262)return 262; else if (value <= 1.0E-261)return 261; else if (value <= 1.0E-260)return 260; else if (value <= 1.0E-259)return 259; else if (value <= 1.0E-258)return 258; else if (value <= 1.0E-257)return 257; else if (value <= 1.0E-256)return 256; else if (value <= 1.0E-255)return 255; else if (value <= 1.0E-254)return 254; else if (value <= 1.0E-253)return 253; else if (value <= 1.0E-252)return 252; else if (value <= 1.0E-251)return 251; else if (value <= 1.0E-250)return 250; else if (value <= 1.0E-249)return 249; else if (value <= 1.0E-248)return 248; else if (value <= 1.0E-247)return 247; else if (value <= 1.0E-246)return 246; else if (value <= 1.0E-245)return 245; else if (value <= 1.0E-244)return 244; else if (value <= 1.0E-243)return 243; else if (value <= 1.0E-242)return 242; else if (value <= 1.0E-241)return 241; else if (value <= 1.0E-240)return 240; else if (value <= 1.0E-239)return 239; else if (value <= 1.0E-238)return 238; else if (value <= 1.0E-237)return 237; else if (value <= 1.0E-236)return 236; else if (value <= 1.0E-235)return 235; else if (value <= 1.0E-234)return 234; else if (value <= 1.0E-233)return 233; else if (value <= 1.0E-232)return 232; else if (value <= 1.0E-231)return 231; else if (value <= 1.0E-230)return 230; else if (value <= 1.0E-229)return 229; else if (value <= 1.0E-228)return 228; else if (value <= 1.0E-227)return 227; else if (value <= 1.0E-226)return 226; else if (value <= 1.0E-225)return 225; else if (value <= 1.0E-224)return 224; else if (value <= 1.0E-223)return 223; else if (value <= 1.0E-222)return 222; else if (value <= 1.0E-221)return 221; else if (value <= 1.0E-220)return 220; else if (value <= 1.0E-219)return 219; else if (value <= 1.0E-218)return 218; else if (value <= 1.0E-217)return 217; else if (value <= 1.0E-216)return 216; else if (value <= 1.0E-215)return 215; else if (value <= 1.0E-214)return 214; else if (value <= 1.0E-213)return 213; else if (value <= 1.0E-212)return 212; else if (value <= 1.0E-211)return 211; else if (value <= 1.0E-210)return 210; else if (value <= 1.0E-209)return 209; else if (value <= 1.0E-208)return 208; else if (value <= 1.0E-207)return 207; else if (value <= 1.0E-206)return 206; else if (value <= 1.0E-205)return 205; else if (value <= 1.0E-204)return 204; else if (value <= 1.0E-203)return 203; else if (value <= 1.0E-202)return 202; else if (value <= 1.0E-201)return 201; else if (value <= 1.0E-200)return 200; else if (value <= 1.0E-199)return 199; else if (value <= 1.0E-198)return 198; else if (value <= 1.0E-197)return 197; else if (value <= 1.0E-196)return 196; else if (value <= 1.0E-195)return 195; else if (value <= 1.0E-194)return 194; else if (value <= 1.0E-193)return 193; else if (value <= 1.0E-192)return 192; else if (value <= 1.0E-191)return 191; else if (value <= 1.0E-190)return 190; else if (value <= 1.0E-189)return 189; else if (value <= 1.0E-188)return 188; else if (value <= 1.0E-187)return 187; else if (value <= 1.0E-186)return 186; else if (value <= 1.0E-185)return 185; else if (value <= 1.0E-184)return 184; else if (value <= 1.0E-183)return 183; else if (value <= 1.0E-182)return 182; else if (value <= 1.0E-181)return 181; else if (value <= 1.0E-180)return 180; else if (value <= 1.0E-179)return 179; else if (value <= 1.0E-178)return 178; else if (value <= 1.0E-177)return 177; else if (value <= 1.0E-176)return 176; else if (value <= 1.0E-175)return 175; else if (value <= 1.0E-174)return 174; else if (value <= 1.0E-173)return 173; else if (value <= 1.0E-172)return 172; else if (value <= 1.0E-171)return 171; else if (value <= 1.0E-170)return 170; else if (value <= 1.0E-169)return 169; else if (value <= 1.0E-168)return 168; else if (value <= 1.0E-167)return 167; else if (value <= 1.0E-166)return 166; else if (value <= 1.0E-165)return 165; else if (value <= 1.0E-164)return 164; else if (value <= 1.0E-163)return 163; else if (value <= 1.0E-162)return 162; else if (value <= 1.0E-161)return 161; else if (value <= 1.0E-160)return 160; else if (value <= 1.0E-159)return 159; else if (value <= 1.0E-158)return 158; else if (value <= 1.0E-157)return 157; else if (value <= 1.0E-156)return 156; else if (value <= 1.0E-155)return 155; else if (value <= 1.0E-154)return 154; else if (value <= 1.0E-153)return 153; else if (value <= 1.0E-152)return 152; else if (value <= 1.0E-151)return 151; else if (value <= 1.0E-150)return 150; else if (value <= 1.0E-149)return 149; else if (value <= 1.0E-148)return 148; else if (value <= 1.0E-147)return 147; else if (value <= 1.0E-146)return 146; else if (value <= 1.0E-145)return 145; else if (value <= 1.0E-144)return 144; else if (value <= 1.0E-143)return 143; else if (value <= 1.0E-142)return 142; else if (value <= 1.0E-141)return 141; else if (value <= 1.0E-140)return 140; else if (value <= 1.0E-139)return 139; else if (value <= 1.0E-138)return 138; else if (value <= 1.0E-137)return 137; else if (value <= 1.0E-136)return 136; else if (value <= 1.0E-135)return 135; else if (value <= 1.0E-134)return 134; else if (value <= 1.0E-133)return 133; else if (value <= 1.0E-132)return 132; else if (value <= 1.0E-131)return 131; else if (value <= 1.0E-130)return 130; else if (value <= 1.0E-129)return 129; else if (value <= 1.0E-128)return 128; else if (value <= 1.0E-127)return 127; else if (value <= 1.0E-126)return 126; else if (value <= 1.0E-125)return 125; else if (value <= 1.0E-124)return 124; else if (value <= 1.0E-123)return 123; else if (value <= 1.0E-122)return 122; else if (value <= 1.0E-121)return 121; else if (value <= 1.0E-120)return 120; else if (value <= 1.0E-119)return 119; else if (value <= 1.0E-118)return 118; else if (value <= 1.0E-117)return 117; else if (value <= 1.0E-116)return 116; else if (value <= 1.0E-115)return 115; else if (value <= 1.0E-114)return 114; else if (value <= 1.0E-113)return 113; else if (value <= 1.0E-112)return 112; else if (value <= 1.0E-111)return 111; else if (value <= 1.0E-110)return 110; else if (value <= 1.0E-109)return 109; else if (value <= 1.0E-108)return 108; else if (value <= 1.0E-107)return 107; else if (value <= 1.0E-106)return 106; else if (value <= 1.0E-105)return 105; else if (value <= 1.0E-104)return 104; else if (value <= 1.0E-103)return 103; else if (value <= 1.0E-102)return 102; else if (value <= 1.0E-101)return 101; else if (value <= 1.0E-100)return 100; else if (value <= 1.0E-99)return 99; else if (value <= 1.0E-98)return 98; else if (value <= 1.0E-97)return 97; else if (value <= 1.0E-96)return 96; else if (value <= 1.0E-95)return 95; else if (value <= 1.0E-94)return 94; else if (value <= 1.0E-93)return 93; else if (value <= 1.0E-92)return 92; else if (value <= 1.0E-91)return 91; else if (value <= 1.0E-90)return 90; else if (value <= 1.0E-89)return 89; else if (value <= 1.0E-88)return 88; else if (value <= 1.0E-87)return 87; else if (value <= 1.0E-86)return 86; else if (value <= 1.0E-85)return 85; else if (value <= 1.0E-84)return 84; else if (value <= 1.0E-83)return 83; else if (value <= 1.0E-82)return 82; else if (value <= 1.0E-81)return 81; else if (value <= 1.0E-80)return 80; else if (value <= 1.0E-79)return 79; else if (value <= 1.0E-78)return 78; else if (value <= 1.0E-77)return 77; else if (value <= 1.0E-76)return 76; else if (value <= 1.0E-75)return 75; else if (value <= 1.0E-74)return 74; else if (value <= 1.0E-73)return 73; else if (value <= 1.0E-72)return 72; else if (value <= 1.0E-71)return 71; else if (value <= 1.0E-70)return 70; else if (value <= 1.0E-69)return 69; else if (value <= 1.0E-68)return 68; else if (value <= 1.0E-67)return 67; else if (value <= 1.0E-66)return 66; else if (value <= 1.0E-65)return 65; else if (value <= 1.0E-64)return 64; else if (value <= 1.0E-63)return 63; else if (value <= 1.0E-62)return 62; else if (value <= 1.0E-61)return 61; else if (value <= 1.0E-60)return 60; else if (value <= 1.0E-59)return 59; else if (value <= 1.0E-58)return 58; else if (value <= 1.0E-57)return 57; else if (value <= 1.0E-56)return 56; else if (value <= 1.0E-55)return 55; else if (value <= 1.0E-54)return 54; else if (value <= 1.0E-53)return 53; else if (value <= 1.0E-52)return 52; else if (value <= 1.0E-51)return 51; else if (value <= 1.0E-50)return 50; else if (value <= 1.0E-49)return 49; else if (value <= 1.0E-48)return 48; else if (value <= 1.0E-47)return 47; else if (value <= 1.0E-46)return 46; else if (value <= 1.0E-45)return 45; else if (value <= 1.0E-44)return 44; else if (value <= 1.0E-43)return 43; else if (value <= 1.0E-42)return 42; else if (value <= 1.0E-41)return 41; else if (value <= 1.0E-40)return 40; else if (value <= 1.0E-39)return 39; else if (value <= 1.0E-38)return 38; else if (value <= 1.0E-37)return 37; else if (value <= 1.0E-36)return 36; else if (value <= 1.0E-35)return 35; else if (value <= 1.0E-34)return 34; else if (value <= 1.0E-33)return 33; else if (value <= 1.0E-32)return 32; else if (value <= 1.0E-31)return 31; else if (value <= 1.0E-30)return 30; else if (value <= 1.0E-29)return 29; else if (value <= 1.0E-28)return 28; else if (value <= 1.0E-27)return 27; else if (value <= 1.0E-26)return 26; else if (value <= 1.0E-25)return 25; else if (value <= 1.0E-24)return 24; else if (value <= 1.0E-23)return 23; else if (value <= 1.0E-22)return 22; else if (value <= 1.0E-21)return 21; else if (value <= 1.0E-20)return 20; else if (value <= 1.0E-19)return 19; else if (value <= 1.0E-18)return 18; else if (value <= 1.0E-17)return 17; else if (value <= 1.0E-16)return 16; else if (value <= 1.0E-15)return 15; else if (value <= 1.0E-14)return 14; else if (value <= 1.0E-13)return 13; else if (value <= 1.0E-12)return 12; else if (value <= 1.0E-11)return 11; else if (value <= 1.0E-10)return 10; else if (value <= 1.0E-9)return 9; else if (value <= 1.0E-8)return 8; else if (value <= 1.0E-7)return 7; else if (value <= 1.0E-6)return 6; else if (value <= 1.0E-5)return 5; else if (value <= 1.0E-4)return 4; else if (value <= 0.001)return 3; else if (value <= 0.01)return 2; else if (value <= 0.1)return 1; else if (value <= 1.0)return 0; else return -1;
    }

    /**
     * Unit in the last place(ULP) for double
     * @param {number} value Double number
     * @return {number} ULP for a given double.
     */
    public static ulp(value: number): number {
        return javaemul.internal.MathHelper.ulp(value);
    }

    /**
     * Unit in The Last Place - number of decimal digits before
     * @param {number} value   Double number
     * @return        {number} Positive number of digits N for ulp = 1e-{N+1},
     * if ulp is &gt; 1 then -1 is returned.
     * Returned proper value is always between -1 and +322.
     * If value is NaN then -2 is returned.
     */
    public static ulpDecimalDigitsBefore(value: number): number {
        if (/* isNaN */isNaN(value))return -2;
        const u: number = MathFunctions.ulp(value);
        return MathFunctions.decimalDigitsBefore(u);
    }

    /**
     * Returns the first non-NaN value
     * 
     * @param {double[]} values   List of values
     * @return         {number} Returns the first non-NaN value, if list is null
     * then returns Double.NaN, if list contains no elements
     * then returns Double.NaN.
     */
    public static coalesce(values: number[]): number {
        if (values == null)return javaemul.internal.DoubleHelper.NaN;
        if (values.length === 0)return javaemul.internal.DoubleHelper.NaN;
        for(let index136=0; index136 < values.length; index136++) {
            let v = values[index136];
            {
                if (!/* isNaN */isNaN(v))return v;
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            }
        }
        return javaemul.internal.DoubleHelper.NaN;
    }

    /**
     * Check whether double value is almost integer.
     * @param {number} x   Number
     * @return {boolean} True if double value is almost integer, otherwise false.
     * {@link BinaryRelations#DEFAULT_COMPARISON_EPSILON}
     * 
     * @see BinaryRelations#DEFAULT_COMPARISON_EPSILON
     */
    public static isInteger(x: number): boolean {
        if (/* isNaN */isNaN(x))return false;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return false;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return false;
        if (x < 0)x = -x;
        const round: number = Math.round(x);
        if (Math.abs(x - round) < BinaryRelations.DEFAULT_COMPARISON_EPSILON)return true; else return false;
    }

    /**
     * Check whether two double values are almost equal.
     * @param {number} a   First number
     * @param {number} b   Second number
     * @return {boolean} True if double values are almost equal, otherwise false.
     * {@link BinaryRelations#DEFAULT_COMPARISON_EPSILON}
     * 
     * @see BinaryRelations#DEFAULT_COMPARISON_EPSILON
     */
    public static almostEqual(a: number, b: number): boolean {
        if (/* isNaN */isNaN(a))return false;
        if (/* isNaN */isNaN(b))return false;
        if (a === b)return true;
        if (Math.abs(a - b) <= BinaryRelations.DEFAULT_COMPARISON_EPSILON)return true;
        return false;
    }
}
MathFunctions["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.MathFunctions";