import { Argument } from '../Argument';
import { Expression } from '../Expression';
import { mXparserConstants } from '../mXparserConstants';
import { mXparser } from '../mXparser';
import { ProbabilityDistributions } from './ProbabilityDistributions';
import { MathFunctions } from './MathFunctions';
import { javaemul } from 'j4ts/j4ts';

/**
 * Calculus - numerical integration, differentiation, etc...
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.3.0
 * @class
 */
export class Calculus {
    /**
     * Derivative type specification
     */
    public static LEFT_DERIVATIVE: number = 1;

    public static RIGHT_DERIVATIVE: number = 2;

    public static GENERAL_DERIVATIVE: number = 3;

    /**
     * Trapezoid numerical integration
     * 
     * @param      {Expression} f                   the expression
     * @param      {Argument} x                   the argument
     * @param      {number} a                   form a ...
     * @param      {number} b                   ... to b
     * @param      {number} eps                 the epsilon (error)
     * @param      {number} maxSteps            the maximum number of steps
     * 
     * @return     {number} Integral value as double.
     * 
     * @see        Expression
     */
    public static integralTrapezoid(f: Expression, x: Argument, a: number, b: number, eps: number, maxSteps: number): number {
        let h: number = 0.5 * (b - a);
        let s: number = mXparser.getFunctionValue(f, x, a) + mXparser.getFunctionValue(f, x, b) + 2 * mXparser.getFunctionValue(f, x, a + h);
        let intF: number = s * h * 0.5;
        let intFprev: number = 0;
        let t: number = a;
        let i: number;
        let j: number;
        let n: number = 1;
        for(i = 1; i <= maxSteps; i++) {{
            n += n;
            t = a + 0.5 * h;
            intFprev = intF;
            for(j = 1; j <= n; j++) {{
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                s += 2 * mXparser.getFunctionValue(f, x, t);
                t += h;
            };}
            h *= 0.5;
            intF = s * h * 0.5;
            if (Math.abs(intF - intFprev) <= eps)return intF;
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        };}
        return intF;
    }

    /**
     * Numerical derivative at x = x0
     * 
     * @param      {Expression} f                   the expression
     * @param      {Argument} x                   the argument
     * @param      {number} x0                  at point x = x0
     * @param      {number} derType             derivative type (LEFT_DERIVATIVE, RIGHT_DERIVATIVE,
     * GENERAL_DERIVATIVE
     * @param      {number} eps                 the epsilon (error)
     * @param      {number} maxSteps            the maximum number of steps
     * 
     * @return     {number} Derivative value as double.
     * 
     * @see        Expression
     */
    public static derivative(f: Expression, x: Argument, x0: number, derType: number, eps: number, maxSteps: number): number {
        const START_DX: number = 0.1;
        let step: number = 0;
        let error: number = 2.0 * eps;
        let y0: number = 0.0;
        let derF: number = 0.0;
        let derFprev: number = 0.0;
        let dx: number = 0.0;
        if (derType === Calculus.LEFT_DERIVATIVE)dx = -START_DX; else dx = START_DX;
        let dy: number = 0.0;
        if ((derType === Calculus.LEFT_DERIVATIVE) || (derType === Calculus.RIGHT_DERIVATIVE)){
            y0 = mXparser.getFunctionValue(f, x, x0);
            dy = mXparser.getFunctionValue(f, x, x0 + dx) - y0;
            derF = dy / dx;
        } else derF = (mXparser.getFunctionValue(f, x, x0 + dx) - mXparser.getFunctionValue(f, x, x0 - dx)) / (2.0 * dx);
        do {{
            derFprev = derF;
            dx = dx / 2.0;
            if ((derType === Calculus.LEFT_DERIVATIVE) || (derType === Calculus.RIGHT_DERIVATIVE)){
                dy = mXparser.getFunctionValue(f, x, x0 + dx) - y0;
                derF = dy / dx;
            } else derF = (mXparser.getFunctionValue(f, x, x0 + dx) - mXparser.getFunctionValue(f, x, x0 - dx)) / (2.0 * dx);
            error = Math.abs(derF - derFprev);
            step++;
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        }} while(((step < maxSteps) && ((error > eps) || /* isNaN */isNaN(derF))));
        return derF;
    }

    /**
     * Numerical n-th derivative at x = x0 (you should avoid calculation
     * of derivatives with order higher than 2).
     * 
     * @param      {Expression} f                   the expression
     * @param      {number} n                   the deriviative order
     * @param      {Argument} x                   the argument
     * @param      {number} x0                  at point x = x0
     * @param      {number} derType             derivative type (LEFT_DERIVATIVE, RIGHT_DERIVATIVE,
     * GENERAL_DERIVATIVE
     * @param      {number} eps                 the epsilon (error)
     * @param      {number} maxSteps            the maximum number of steps
     * 
     * @return     {number} Derivative value as double.
     * 
     * @see        Expression
     */
    public static derivativeNth(f: Expression, n: number, x: Argument, x0: number, derType: number, eps: number, maxSteps: number): number {
        n = Math.round(n);
        let step: number = 0;
        let error: number = 2 * eps;
        let derFprev: number = 0;
        let dx: number = 0.01;
        let derF: number = 0;
        if (derType === Calculus.RIGHT_DERIVATIVE)for(let i: number = 1; i <= n; i++) {derF += MathFunctions.binomCoeff$double$double(-1, n - i) * MathFunctions.binomCoeff$double$long(n, i) * mXparser.getFunctionValue(f, x, x0 + i * dx);} else for(let i: number = 1; i <= n; i++) {derF += MathFunctions.binomCoeff$double$long(-1, i) * MathFunctions.binomCoeff$double$long(n, i) * mXparser.getFunctionValue(f, x, x0 - i * dx);}
        derF = derF / Math.pow(dx, n);
        do {{
            derFprev = derF;
            dx = dx / 2.0;
            derF = 0;
            if (derType === Calculus.RIGHT_DERIVATIVE)for(let i: number = 1; i <= n; i++) {derF += MathFunctions.binomCoeff$double$double(-1, n - i) * MathFunctions.binomCoeff$double$long(n, i) * mXparser.getFunctionValue(f, x, x0 + i * dx);} else for(let i: number = 1; i <= n; i++) {derF += MathFunctions.binomCoeff$double$long(-1, i) * MathFunctions.binomCoeff$double$long(n, i) * mXparser.getFunctionValue(f, x, x0 - i * dx);}
            derF = derF / Math.pow(dx, n);
            error = Math.abs(derF - derFprev);
            step++;
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        }} while(((step < maxSteps) && ((error > eps) || /* isNaN */isNaN(derF))));
        return derF;
    }

    public static forwardDifference$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double(f: Expression, x: Argument, x0: number): number {
        if (/* isNaN */isNaN(x0))return javaemul.internal.DoubleHelper.NaN;
        const xb: number = x.getArgumentValue();
        const delta: number = mXparser.getFunctionValue(f, x, x0 + 1) - mXparser.getFunctionValue(f, x, x0);
        x.setArgumentValue(xb);
        return delta;
    }

    public static forwardDifference$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument(f: Expression, x: Argument): number {
        const xb: number = x.getArgumentValue();
        if (/* isNaN */isNaN(xb))return javaemul.internal.DoubleHelper.NaN;
        const fv: number = f.calculate();
        x.setArgumentValue(xb + 1);
        const delta: number = f.calculate() - fv;
        x.setArgumentValue(xb);
        return delta;
    }

    public static backwardDifference$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double(f: Expression, x: Argument, x0: number): number {
        if (/* isNaN */isNaN(x0))return javaemul.internal.DoubleHelper.NaN;
        const xb: number = x.getArgumentValue();
        const delta: number = mXparser.getFunctionValue(f, x, x0) - mXparser.getFunctionValue(f, x, x0 - 1);
        x.setArgumentValue(xb);
        return delta;
    }

    public static backwardDifference$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument(f: Expression, x: Argument): number {
        const xb: number = x.getArgumentValue();
        if (/* isNaN */isNaN(xb))return javaemul.internal.DoubleHelper.NaN;
        const fv: number = f.calculate();
        x.setArgumentValue(xb - 1);
        const delta: number = fv - f.calculate();
        x.setArgumentValue(xb);
        return delta;
    }

    public static forwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument$double(f: Expression, h: number, x: Argument, x0: number): number {
        if (/* isNaN */isNaN(x0))return javaemul.internal.DoubleHelper.NaN;
        const xb: number = x.getArgumentValue();
        const delta: number = mXparser.getFunctionValue(f, x, x0 + h) - mXparser.getFunctionValue(f, x, x0);
        x.setArgumentValue(xb);
        return delta;
    }

    /**
     * Forward difference(h) operator (at x = x0)
     * 
     * @param      {Expression} f                   the expression
     * @param      {number} h                   the difference
     * @param      {Argument} x                   the argument name
     * @param      {number} x0                  x = x0
     * 
     * @return     {number} Forward difference(h) value calculated at x0.
     * 
     * @see        Expression
     * @see        Argument
     */
    public static forwardDifference(f?: any, h?: any, x?: any, x0?: any): any {
        if (((f != null && f instanceof <any>Expression) || f === null) && ((typeof h === 'number') || h === null) && ((x != null && x instanceof <any>Argument) || x === null) && ((typeof x0 === 'number') || x0 === null)) {
            return <any>Calculus.forwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument$double(f, h, x, x0);
        } else if (((f != null && f instanceof <any>Expression) || f === null) && ((h != null && h instanceof <any>Argument) || h === null) && ((typeof x === 'number') || x === null) && x0 === undefined) {
            return <any>Calculus.forwardDifference$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double(f, h, x);
        } else if (((f != null && f instanceof <any>Expression) || f === null) && ((typeof h === 'number') || h === null) && ((x != null && x instanceof <any>Argument) || x === null) && x0 === undefined) {
            return <any>Calculus.forwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument(f, h, x);
        } else if (((f != null && f instanceof <any>Expression) || f === null) && ((h != null && h instanceof <any>Argument) || h === null) && x === undefined && x0 === undefined) {
            return <any>Calculus.forwardDifference$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument(f, h);
        } else throw new Error('invalid overload');
    }

    public static forwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument(f: Expression, h: number, x: Argument): number {
        const xb: number = x.getArgumentValue();
        if (/* isNaN */isNaN(xb))return javaemul.internal.DoubleHelper.NaN;
        const fv: number = f.calculate();
        x.setArgumentValue(xb + h);
        const delta: number = f.calculate() - fv;
        x.setArgumentValue(xb);
        return delta;
    }

    public static backwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument$double(f: Expression, h: number, x: Argument, x0: number): number {
        if (/* isNaN */isNaN(x0))return javaemul.internal.DoubleHelper.NaN;
        const xb: number = x.getArgumentValue();
        const delta: number = mXparser.getFunctionValue(f, x, x0) - mXparser.getFunctionValue(f, x, x0 - h);
        x.setArgumentValue(xb);
        return delta;
    }

    /**
     * Backward difference(h) operator (at x = x0)
     * 
     * @param      {Expression} f                   the expression
     * @param      {number} h                   the difference
     * @param      {Argument} x                   the argument name
     * @param      {number} x0                  x = x0
     * 
     * @return     {number} Backward difference(h) value calculated at x0.
     * 
     * @see        Expression
     * @see        Argument
     */
    public static backwardDifference(f?: any, h?: any, x?: any, x0?: any): any {
        if (((f != null && f instanceof <any>Expression) || f === null) && ((typeof h === 'number') || h === null) && ((x != null && x instanceof <any>Argument) || x === null) && ((typeof x0 === 'number') || x0 === null)) {
            return <any>Calculus.backwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument$double(f, h, x, x0);
        } else if (((f != null && f instanceof <any>Expression) || f === null) && ((h != null && h instanceof <any>Argument) || h === null) && ((typeof x === 'number') || x === null) && x0 === undefined) {
            return <any>Calculus.backwardDifference$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double(f, h, x);
        } else if (((f != null && f instanceof <any>Expression) || f === null) && ((typeof h === 'number') || h === null) && ((x != null && x instanceof <any>Argument) || x === null) && x0 === undefined) {
            return <any>Calculus.backwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument(f, h, x);
        } else if (((f != null && f instanceof <any>Expression) || f === null) && ((h != null && h instanceof <any>Argument) || h === null) && x === undefined && x0 === undefined) {
            return <any>Calculus.backwardDifference$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument(f, h);
        } else throw new Error('invalid overload');
    }

    public static backwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument(f: Expression, h: number, x: Argument): number {
        const xb: number = x.getArgumentValue();
        if (/* isNaN */isNaN(xb))return javaemul.internal.DoubleHelper.NaN;
        const fv: number = f.calculate();
        x.setArgumentValue(xb - h);
        const delta: number = fv - f.calculate();
        x.setArgumentValue(xb);
        return delta;
    }

    /**
     * Brent solver (Brent root finder)
     * 
     * @param {Expression} f  Function given in the Expression form
     * @param {Argument} x  Argument
     * @param {number} a  Left limit
     * @param {number} b  Right limit
     * @param {number} eps      Epsilon value (accuracy)
     * @param {number} maxSteps Maximum number of iterations
     * @return   {number} Function root - if found, otherwise Double.NaN.
     */
    public static solveBrent(f: Expression, x: Argument, a: number, b: number, eps: number, maxSteps: number): number {
        let fa: number;
        let fb: number;
        let fc: number;
        let fs: number;
        let c: number;
        let c0: number;
        let c1: number;
        let c2: number;
        let tmp: number;
        let d: number;
        let s: number;
        let mflag: boolean;
        let iter: number;
        if (b < a){
            tmp = a;
            a = b;
            b = tmp;
        }
        fa = mXparser.getFunctionValue(f, x, a);
        fb = mXparser.getFunctionValue(f, x, b);
        if (MathFunctions.abs(fa) <= eps)return a;
        if (MathFunctions.abs(fb) <= eps)return b;
        if (b === a)return javaemul.internal.DoubleHelper.NaN;
        if (fa * fb > 0){
            let rndflag: boolean = false;
            let ap: number;
            let bp: number;
            for(let i: number = 0; i < maxSteps; i++) {{
                ap = ProbabilityDistributions.rndUniformContinuous$double$double(a, b);
                bp = ProbabilityDistributions.rndUniformContinuous$double$double(a, b);
                if (bp < ap){
                    tmp = ap;
                    ap = bp;
                    bp = tmp;
                }
                fa = mXparser.getFunctionValue(f, x, ap);
                fb = mXparser.getFunctionValue(f, x, bp);
                if (MathFunctions.abs(fa) <= eps)return ap;
                if (MathFunctions.abs(fb) <= eps)return bp;
                if (fa * fb < 0){
                    rndflag = true;
                    a = ap;
                    b = bp;
                    break;
                }
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            };}
            if (rndflag === false)return javaemul.internal.DoubleHelper.NaN;
        }
        c = a;
        d = c;
        fc = mXparser.getFunctionValue(f, x, c);
        if (MathFunctions.abs(fa) < MathFunctions.abs(fb)){
            tmp = a;
            a = b;
            b = tmp;
            tmp = fa;
            fa = fb;
            fb = tmp;
        }
        mflag = true;
        iter = 0;
        while(((MathFunctions.abs(fb) > eps) && (MathFunctions.abs(b - a) > eps) && (iter < maxSteps))) {{
            if ((fa !== fc) && (fb !== fc)){
                c0 = (a * fb * fc) / ((fa - fb) * (fa - fc));
                c1 = (b * fa * fc) / ((fb - fa) * (fb - fc));
                c2 = (c * fa * fb) / ((fc - fa) * (fc - fb));
                s = c0 + c1 + c2;
            } else s = b - (fb * (b - a)) / (fb - fa);
            if ((s < (3 * (a + b) / 4) || s > b) || ((mflag === true) && MathFunctions.abs(s - b) >= (MathFunctions.abs(b - c) / 2))){
                s = (a + b) / 2;
                mflag = true;
            } else mflag = true;
            fs = mXparser.getFunctionValue(f, x, s);
            d = c;
            c = b;
            fc = fb;
            if ((fa * fs) < 0)b = s; else a = s;
            if (MathFunctions.abs(fa) < MathFunctions.abs(fb)){
                tmp = a;
                a = b;
                b = tmp;
                tmp = fa;
                fa = fb;
                fb = tmp;
            }
            iter++;
            if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
        }};
        return MathFunctions.round(b, MathFunctions.decimalDigitsBefore(eps) - 1);
    }
}
Calculus["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.Calculus";