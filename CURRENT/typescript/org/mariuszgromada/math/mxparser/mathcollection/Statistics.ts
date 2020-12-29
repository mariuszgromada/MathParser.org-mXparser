import { Argument } from '../Argument';
import { Expression } from '../Expression';
import { mXparserConstants } from '../mXparserConstants';
import { mXparser } from '../mXparser';
import { javaemul } from 'j4ts/j4ts';
import { NumberTheory } from './NumberTheory';
import { MathFunctions } from './MathFunctions';

/**
 * Statistics - i.e.: mean, variance, standard deviation, etc.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.3.0
 * @class
 */
export class Statistics {
    public static avg$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(f: Expression, index: Argument, from: number, to: number, delta: number): number {
        if ((/* isNaN */isNaN(delta)) || (/* isNaN */isNaN(from)) || (/* isNaN */isNaN(to)) || (delta === 0))return javaemul.internal.DoubleHelper.NaN;
        let sum: number = 0;
        let n: number = 0;
        if ((to >= from) && (delta > 0)){
            let i: number;
            for(i = from; i < to; i += delta) {{
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                sum += mXparser.getFunctionValue(f, index, i);
                n++;
            };}
            if (delta - (i - to) > 0.5 * delta){
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                sum += mXparser.getFunctionValue(f, index, to);
                n++;
            }
        } else if ((to <= from) && (delta < 0)){
            let i: number;
            for(i = from; i > to; i += delta) {{
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                sum += mXparser.getFunctionValue(f, index, i);
                n++;
            };}
            if (-delta - (to - i) > -0.5 * delta){
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                sum += mXparser.getFunctionValue(f, index, to);
                n++;
            }
        } else if (from === to)return mXparser.getFunctionValue(f, index, from);
        return sum / n;
    }

    /**
     * Average from sample function values - iterative operator.
     * 
     * @param      {Expression} f                   the expression
     * @param      {Argument} index               the name of index argument
     * @param      {number} from                FROM index = form
     * @param      {number} to                  TO index = to
     * @param      {number} delta               BY delta
     * 
     * @return     {number} product operation (for empty product operations returns 1).
     * 
     * @see        Expression
     * @see        Argument
     */
    public static avg(f?: any, index?: any, from?: any, to?: any, delta?: any): any {
        if (((f != null && f instanceof <any>Expression) || f === null) && ((index != null && index instanceof <any>Argument) || index === null) && ((typeof from === 'number') || from === null) && ((typeof to === 'number') || to === null) && ((typeof delta === 'number') || delta === null)) {
            return <any>Statistics.avg$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(f, index, from, to, delta);
        } else if (((f != null && f instanceof <any>Array && (f.length == 0 || f[0] == null ||(typeof f[0] === 'number'))) || f === null) && index === undefined && from === undefined && to === undefined && delta === undefined) {
            return <any>Statistics.avg$double_A(...f);
        } else throw new Error('invalid overload');
    }

    public static var$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(f: Expression, index: Argument, from: number, to: number, delta: number): number {
        if ((/* isNaN */isNaN(delta)) || (/* isNaN */isNaN(from)) || (/* isNaN */isNaN(to)) || (delta === 0))return javaemul.internal.DoubleHelper.NaN;
        return Statistics.var$double_A.apply(this, mXparser.getFunctionValues(f, index, from, to, delta));
    }

    /**
     * Bias-corrected variance from sample function values - iterative operator.
     * 
     * @param      {Expression} f                   the expression
     * @param      {Argument} index               the name of index argument
     * @param      {number} from                FROM index = form
     * @param      {number} to                  TO index = to
     * @param      {number} delta               BY delta
     * 
     * @return     {number} product operation (for empty product operations returns 1).
     * 
     * @see        Expression
     * @see        Argument
     */
    public static var(f?: any, index?: any, from?: any, to?: any, delta?: any): any {
        if (((f != null && f instanceof <any>Expression) || f === null) && ((index != null && index instanceof <any>Argument) || index === null) && ((typeof from === 'number') || from === null) && ((typeof to === 'number') || to === null) && ((typeof delta === 'number') || delta === null)) {
            return <any>Statistics.var$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(f, index, from, to, delta);
        } else if (((f != null && f instanceof <any>Array && (f.length == 0 || f[0] == null ||(typeof f[0] === 'number'))) || f === null) && index === undefined && from === undefined && to === undefined && delta === undefined) {
            return <any>Statistics.var$double_A(...f);
        } else throw new Error('invalid overload');
    }

    public static std$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(f: Expression, index: Argument, from: number, to: number, delta: number): number {
        if ((/* isNaN */isNaN(delta)) || (/* isNaN */isNaN(from)) || (/* isNaN */isNaN(to)) || (delta === 0))return javaemul.internal.DoubleHelper.NaN;
        return Statistics.std$double_A.apply(this, mXparser.getFunctionValues(f, index, from, to, delta));
    }

    /**
     * Bias-corrected standard deviation from sample function values - iterative operator.
     * 
     * @param      {Expression} f                   the expression
     * @param      {Argument} index               the name of index argument
     * @param      {number} from                FROM index = form
     * @param      {number} to                  TO index = to
     * @param      {number} delta               BY delta
     * 
     * @return     {number} product operation (for empty product operations returns 1).
     * 
     * @see        Expression
     * @see        Argument
     */
    public static std(f?: any, index?: any, from?: any, to?: any, delta?: any): any {
        if (((f != null && f instanceof <any>Expression) || f === null) && ((index != null && index instanceof <any>Argument) || index === null) && ((typeof from === 'number') || from === null) && ((typeof to === 'number') || to === null) && ((typeof delta === 'number') || delta === null)) {
            return <any>Statistics.std$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(f, index, from, to, delta);
        } else if (((f != null && f instanceof <any>Array && (f.length == 0 || f[0] == null ||(typeof f[0] === 'number'))) || f === null) && index === undefined && from === undefined && to === undefined && delta === undefined) {
            return <any>Statistics.std$double_A(...f);
        } else throw new Error('invalid overload');
    }

    public static avg$double_A(...numbers: number[]): number {
        if (numbers == null)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 0)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 1)return numbers[0];
        let sum: number = 0;
        for(let index131=0; index131 < numbers.length; index131++) {
            let xi = numbers[index131];
            {
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                if (/* isNaN */isNaN(xi))return javaemul.internal.DoubleHelper.NaN;
                sum += xi;
            }
        }
        return sum / numbers.length;
    }

    public static var$double_A(...numbers: number[]): number {
        if (numbers == null)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 0)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 1){
            if (/* isNaN */isNaN(numbers[0]))return javaemul.internal.DoubleHelper.NaN;
            return 0;
        }
        const m: number = Statistics.avg$double_A.apply(this, numbers);
        let sum: number = 0;
        for(let index132=0; index132 < numbers.length; index132++) {
            let xi = numbers[index132];
            {
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                if (/* isNaN */isNaN(xi))return javaemul.internal.DoubleHelper.NaN;
                sum += (xi - m) * (xi - m);
            }
        }
        return sum / (numbers.length - 1);
    }

    public static std$double_A(...numbers: number[]): number {
        if (numbers == null)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 0)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 1){
            if (/* isNaN */isNaN(numbers[0]))return javaemul.internal.DoubleHelper.NaN;
            return 0;
        }
        return MathFunctions.sqrt(Statistics.var$double_A.apply(this, numbers));
    }

    /**
     * Sample median
     * @param {double[]} numbers   List of number
     * @return          {number} Sample median, if table was empty or null then Double.NaN is returned.
     */
    public static median(...numbers: number[]): number {
        if (numbers == null)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 0)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 1)return numbers[0];
        if (numbers.length === 2)return (numbers[0] + numbers[1]) / 2.0;
        for(let index133=0; index133 < numbers.length; index133++) {
            let v = numbers[index133];
            {
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                if (/* isNaN */isNaN(v))return javaemul.internal.DoubleHelper.NaN;
            }
        }
        NumberTheory.sortAsc$double_A(numbers);
        if ((numbers.length % 2) === 1){
            const i: number = ((numbers.length - 1) / 2|0);
            return numbers[i];
        } else {
            const i: number = ((numbers.length / 2|0)) - 1;
            return (numbers[i] + numbers[i + 1]) / 2.0;
        }
    }

    /**
     * Sample mode
     * @param {double[]} numbers   List of number
     * @return          {number} Sample median, if table was empty or null then Double.NaN is returned.
     */
    public static mode(...numbers: number[]): number {
        if (numbers == null)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 0)return javaemul.internal.DoubleHelper.NaN;
        if (numbers.length === 1)return numbers[0];
        for(let index134=0; index134 < numbers.length; index134++) {
            let v = numbers[index134];
            {
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
                if (/* isNaN */isNaN(v))return javaemul.internal.DoubleHelper.NaN;
            }
        }
        const dist: number[][] = NumberTheory.getDistValues(numbers, true);
        return dist[0][0];
    }
}
Statistics["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.Statistics";