import { mXparserConstants } from '../mXparserConstants';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';
import { SpecialFunctions } from './SpecialFunctions';
import { MathConstants } from './MathConstants';
import { MathFunctions } from './MathFunctions';

/**
 * ProbabilityDistributions - random number generators, PDF - Probability Distribution Functions,
 * CDF - Cumulative Distribution Functions, QNT - Quantile Functions (Inverse Cumulative Distribution
 * Functions).
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.3.0
 * @class
 */
export class ProbabilityDistributions {
    /**
     * java.util.Random number generator
     */
    public static randomGenerator: java.util.Random; public static randomGenerator_$LI$(): java.util.Random { if (ProbabilityDistributions.randomGenerator == null) { ProbabilityDistributions.randomGenerator = new java.util.Random(); }  return ProbabilityDistributions.randomGenerator; }

    public static rndUniformContinuous$double$double$java_util_Random(a: number, b: number, rnd: java.util.Random): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (b < a)return javaemul.internal.DoubleHelper.NaN;
        if (a === b)return a;
        const r: number = a + rnd.nextDouble() * (b - a);
        return r;
    }

    /**
     * java.util.Random number from Uniform Continuous distribution over interval [a, b).
     * 
     * @param {number} a       Interval limit - left / lower.
     * @param {number} b       Interval limit - right / upper.
     * @param {Random} rnd     java.util.Random number generator.
     * @return        {number} Double.NaN if a or b is null, or b is lower than a -
     * otherwise returns random number.
     */
    public static rndUniformContinuous(a?: any, b?: any, rnd?: any): any {
        if (((typeof a === 'number') || a === null) && ((typeof b === 'number') || b === null) && ((rnd != null && rnd instanceof <any>java.util.Random) || rnd === null)) {
            return <any>ProbabilityDistributions.rndUniformContinuous$double$double$java_util_Random(a, b, rnd);
        } else if (((typeof a === 'number') || a === null) && ((typeof b === 'number') || b === null) && rnd === undefined) {
            return <any>ProbabilityDistributions.rndUniformContinuous$double$double(a, b);
        } else if (((a != null && a instanceof <any>java.util.Random) || a === null) && b === undefined && rnd === undefined) {
            return <any>ProbabilityDistributions.rndUniformContinuous$java_util_Random(a);
        } else throw new Error('invalid overload');
    }

    public static rndUniformContinuous$double$double(a: number, b: number): number {
        return ProbabilityDistributions.rndUniformContinuous$double$double$java_util_Random(a, b, ProbabilityDistributions.randomGenerator_$LI$());
    }

    public static rndUniformContinuous$java_util_Random(rnd: java.util.Random): number {
        return rnd.nextDouble();
    }

    /**
     * java.util.Random number from Uniform Continuous distribution over interval [0, 1).
     * 
     * @return        {number} java.util.Random number.
     */
    public static randomUniformContinuous(): number {
        return ProbabilityDistributions.rndUniformContinuous$java_util_Random(ProbabilityDistributions.randomGenerator_$LI$());
    }

    /**
     * PDF - Probability Distribution Function - Uniform Continuous distribution
     * over interval [a, b).
     * 
     * @param {number} x       Point to evaluate pdf function.
     * @param {number} a       Interval limit - left / lower.
     * @param {number} b       Interval limit - right / upper.
     * @return        {number} Double.NaN if a or b is null, or b is lower than a -
     * otherwise function value.
     */
    public static pdfUniformContinuous(x: number, a: number, b: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (b < a)return javaemul.internal.DoubleHelper.NaN;
        if (a === b){
            if (x === a)return 1; else return 0;
        }
        if ((x < a) || (x > b))return 0;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return 0.0;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return 0.0;
        return 1.0 / (b - a);
    }

    /**
     * CDF - Cumulative Distribution Function - Uniform Continuous distribution
     * over interval [a, b).
     * 
     * @param {number} x       Point to evaluate cdf function.
     * @param {number} a       Interval limit - left / lower.
     * @param {number} b       Interval limit - right / upper.
     * @return        {number} Double.NaN if a or b is null, or b is lower than a -
     * otherwise function value.
     */
    public static cdfUniformContinuous(x: number, a: number, b: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (b < a)return javaemul.internal.DoubleHelper.NaN;
        if (a === b){
            if (x < a)return 0.0; else return 1.0;
        }
        if (x < a)return 0.0;
        if (x >= b)return 1.0;
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return 0.0;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return 1.0;
        return (x - a) / (b - a);
    }

    /**
     * QNT - Quantile Function - Uniform Continuous distribution over interval [a, b).
     * (Inverse of Cumulative Distribution Function).
     * 
     * @param {number} q       Quantile.
     * @param {number} a       Interval limit - left / lower.
     * @param {number} b       Interval limit - right / upper.
     * @return        {number} Double.NaN if a or b is null, or b is lower than a
     * or q is lower than 0 or q is greater than 1 -
     * otherwise function value.
     */
    public static qntUniformContinuous(q: number, a: number, b: number): number {
        if (/* isNaN */isNaN(q))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if ((q < 0.0) || (q > 1.0))return javaemul.internal.DoubleHelper.NaN;
        if (b < a)return javaemul.internal.DoubleHelper.NaN;
        if (a === b){
            if (q === 1.0)return b; else return javaemul.internal.DoubleHelper.NaN;
        }
        if (q === 0.0)return a;
        if (q === 1.0)return b;
        return a + q * (b - a);
    }

    public static rndInteger$int$int$java_util_Random(a: number, b: number, rnd: java.util.Random): number {
        if (/* isNaN */isNaN(a))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(b))return javaemul.internal.DoubleHelper.NaN;
        if (b < a)return javaemul.internal.DoubleHelper.NaN;
        if (a === b)return a;
        const n: number = (b - a) + 1;
        const r: number = a + rnd.nextInt(n);
        return r;
    }

    /**
     * java.util.Random number from Uniform Discrete distribution.
     * over set interval (a, a+1, ..., b-1, b).
     * 
     * @param {number} a       Interval limit - left / lower.
     * @param {number} b       Interval limit - right / upper.
     * @param {Random} rnd     java.util.Random number generator.
     * @return        {number} Double.NaN if a or b is null, or b is lower than a -
     * otherwise returns random number.
     */
    public static rndInteger(a?: any, b?: any, rnd?: any): any {
        if (((typeof a === 'number') || a === null) && ((typeof b === 'number') || b === null) && ((rnd != null && rnd instanceof <any>java.util.Random) || rnd === null)) {
            return <any>ProbabilityDistributions.rndInteger$int$int$java_util_Random(a, b, rnd);
        } else if (((typeof a === 'number') || a === null) && ((typeof b === 'number') || b === null) && rnd === undefined) {
            return <any>ProbabilityDistributions.rndInteger$int$int(a, b);
        } else if (((a != null && a instanceof <any>java.util.Random) || a === null) && b === undefined && rnd === undefined) {
            return <any>ProbabilityDistributions.rndInteger$java_util_Random(a);
        } else if (a === undefined && b === undefined && rnd === undefined) {
            return <any>ProbabilityDistributions.rndInteger$();
        } else throw new Error('invalid overload');
    }

    public static rndInteger$int$int(a: number, b: number): number {
        return ProbabilityDistributions.rndInteger$int$int$java_util_Random(a, b, ProbabilityDistributions.randomGenerator_$LI$());
    }

    public static rndInteger$java_util_Random(rnd: java.util.Random): number {
        return rnd.nextInt();
    }

    public static rndIndex$int$java_util_Random(n: number, rnd: java.util.Random): number {
        if (n < 0)return -1;
        return rnd.nextInt(n);
    }

    /**
     * java.util.Random index from 0 to n-1,
     * 
     * @param {number} n          Bound.
     * @param {Random} rnd        java.util.Random number generator.
     * @return           {number} if n &lt; 0 returns -1, otherwise random index.
     */
    public static rndIndex(n?: any, rnd?: any): any {
        if (((typeof n === 'number') || n === null) && ((rnd != null && rnd instanceof <any>java.util.Random) || rnd === null)) {
            return <any>ProbabilityDistributions.rndIndex$int$java_util_Random(n, rnd);
        } else if (((typeof n === 'number') || n === null) && rnd === undefined) {
            return <any>ProbabilityDistributions.rndIndex$int(n);
        } else throw new Error('invalid overload');
    }

    public static rndIndex$int(n: number): number {
        if (n < 0)return -1;
        return ProbabilityDistributions.randomGenerator_$LI$().nextInt(n);
    }

    public static rndInteger$(): number {
        return ProbabilityDistributions.rndInteger$java_util_Random(ProbabilityDistributions.randomGenerator_$LI$());
    }

    public static rndNormal$double$double$java_util_Random(mean: number, stddev: number, rnd: java.util.Random): number {
        if (/* isNaN */isNaN(mean))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(stddev))return javaemul.internal.DoubleHelper.NaN;
        if (rnd == null)return javaemul.internal.DoubleHelper.NaN;
        if (stddev < 0)return javaemul.internal.DoubleHelper.NaN;
        if (stddev === 0)return mean;
        let x: number;
        let a: number;
        let v1: number;
        let b: number;
        let v2: number;
        let r: number;
        let fac: number;
        let polarTransform: boolean;
        do {{
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            a = rnd.nextDouble();
            b = rnd.nextDouble();
            v1 = 2.0 * a - 1.0;
            v2 = 2.0 * b - 1.0;
            r = (v1 * v1) + (v2 * v2);
            if (r >= 1.0 || r === 0.0){
                x = 0.0;
                polarTransform = false;
            } else {
                fac = MathFunctions.sqrt(-2.0 * MathFunctions.ln(r) / r);
                x = v1 * fac;
                polarTransform = true;
            }
        }} while((!polarTransform));
        return mean + (stddev * x);
    }

    /**
     * java.util.Random number from normal distribution N(mean, stddev).
     * 
     * @param {number} mean              Mean value.
     * @param {number} stddev            Standard deviation.
     * @param {Random} rnd               java.util.Random number generator.
     * @return                  {number} Double.NaN if mean or stddev or rnd is null or stddev is lower than 0 -
     * otherwise random number.
     */
    public static rndNormal(mean?: any, stddev?: any, rnd?: any): any {
        if (((typeof mean === 'number') || mean === null) && ((typeof stddev === 'number') || stddev === null) && ((rnd != null && rnd instanceof <any>java.util.Random) || rnd === null)) {
            return <any>ProbabilityDistributions.rndNormal$double$double$java_util_Random(mean, stddev, rnd);
        } else if (((typeof mean === 'number') || mean === null) && ((typeof stddev === 'number') || stddev === null) && rnd === undefined) {
            return <any>ProbabilityDistributions.rndNormal$double$double(mean, stddev);
        } else throw new Error('invalid overload');
    }

    public static rndNormal$double$double(mean: number, stddev: number): number {
        return ProbabilityDistributions.rndNormal$double$double$java_util_Random(mean, stddev, ProbabilityDistributions.randomGenerator_$LI$());
    }

    /**
     * PDF - Probability Distribution Function - Normal distribution N(mean, stddev).
     * 
     * @param {number} x                 Point to evaluate pdf function.
     * @param {number} mean              Mean value.
     * @param {number} stddev            Standard deviation.
     * @return                  {number} Double.NaN if mean or stddev is null or stddev is lower than 0 -
     * otherwise function value.
     */
    public static pdfNormal(x: number, mean: number, stddev: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(mean))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(stddev))return javaemul.internal.DoubleHelper.NaN;
        if (stddev < 0)return javaemul.internal.DoubleHelper.NaN;
        if (stddev === 0){
            if (x === mean)return 1.0; else return 0;
        }
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return 0.0;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return 0.0;
        const d: number = (x - mean) / stddev;
        return MathFunctions.exp(-0.5 * d * d) / (MathConstants.SQRT2Pi * stddev);
    }

    /**
     * CDF - Cumulative Distribution Function - Normal distribution N(mean, stddev).
     * 
     * @param {number} x                 Point to evaluate pdf function.
     * @param {number} mean              Mean value.
     * @param {number} stddev            Standard deviation.
     * @return                  {number} Double.NaN if mean or stddev is null or stddev is lower than 0 -
     * otherwise function value.
     */
    public static cdfNormal(x: number, mean: number, stddev: number): number {
        if (/* isNaN */isNaN(x))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(mean))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(stddev))return javaemul.internal.DoubleHelper.NaN;
        if (stddev < 0)return javaemul.internal.DoubleHelper.NaN;
        if (stddev === 0){
            if (x < mean)return 0.0; else return 1.0;
        }
        if (x === javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)return 0.0;
        if (x === javaemul.internal.DoubleHelper.POSITIVE_INFINITY)return 1.0;
        return 0.5 * SpecialFunctions.erfc((mean - x) / (stddev * MathConstants.SQRT2_$LI$()));
    }

    /**
     * QNT - Quantile Function - Normal distribution N(mean, stddev).
     * (Inverse of Cumulative Distribution Function).
     * 
     * @param {number} q                 Quantile.
     * @param {number} mean              Mean value.
     * @param {number} stddev            Standard deviation.
     * @return                  {number} Double.NaN if mean or stddev is null or stddev is lower than 0
     * or q is lower than 0 or q is greater than 1 -
     * otherwise function value.
     */
    public static qntNormal(q: number, mean: number, stddev: number): number {
        if (/* isNaN */isNaN(q))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(mean))return javaemul.internal.DoubleHelper.NaN;
        if (/* isNaN */isNaN(stddev))return javaemul.internal.DoubleHelper.NaN;
        if ((q < 0.0) || (q > 1.0))return javaemul.internal.DoubleHelper.NaN;
        if (stddev < 0)return javaemul.internal.DoubleHelper.NaN;
        if (stddev === 0){
            if (q === 1.0)return mean; else return javaemul.internal.DoubleHelper.NaN;
        }
        if (q === 0.0)return javaemul.internal.DoubleHelper.NEGATIVE_INFINITY;
        if (q === 1.0)return javaemul.internal.DoubleHelper.POSITIVE_INFINITY;
        return mean - (stddev * MathConstants.SQRT2_$LI$() * SpecialFunctions.erfcInv(2.0 * q));
    }
}
ProbabilityDistributions["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions";