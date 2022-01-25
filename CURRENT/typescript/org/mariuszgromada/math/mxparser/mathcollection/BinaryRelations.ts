/**
 * BinaryRelations - class for dealing with binary relations on integers or doubles.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.1.0
 * @class
 */
 import { BooleanAlgebra } from './BooleanAlgebra';
 import { MathFunctions } from './MathFunctions';
 import { NumberTheory } from './NumberTheory';
 import { javaemul } from 'j4ts/j4ts';

export class BinaryRelations {
    /**
     * Default epsilon for comparison
     */
    public static DEFAULT_COMPARISON_EPSILON: number = 1.0E-14;

    /**
     * Epsilon for comparison
     */
    static epsilon: number; public static epsilon_$LI$(): number { if (BinaryRelations.epsilon == null) { BinaryRelations.epsilon = BinaryRelations.DEFAULT_COMPARISON_EPSILON; }  return BinaryRelations.epsilon; }

    /**
     * COmparison mode indicator
     */
    static epsilonComparison: boolean = true;

    /**
     * Sets comparison mode to EXACT.
     */
    public static setExactComparison() {
        BinaryRelations.epsilonComparison = false;
    }

    /**
     * Sets comparison mode to EPSILON.
     */
    public static setEpsilonComparison() {
        BinaryRelations.epsilonComparison = true;
    }

    /**
     * Sets epsilon value.
     * @param {number} epsilon   Epsilon value (grater than 0).
     * 
     * @see #setEpsilonComparison()
     */
    public static setEpsilon(epsilon: number) {
        if (epsilon > 0)BinaryRelations.epsilon = epsilon;
    }

    /**
     * Sets default epsilon value.
     * 
     * @see #setEpsilonComparison()
     * @see #DEFAULT_COMPARISON_EPSILON
     */
    public static setDefaultEpsilon() {
        BinaryRelations.epsilon = BinaryRelations.DEFAULT_COMPARISON_EPSILON;
    }

    /**
     * Returns current epsilon value.
     * @return  {number} Returns current epsilon value.
     * 
     * @see #setEpsilonComparison()
     */
    public static getEpsilon(): number {
        return BinaryRelations.epsilon_$LI$();
    }

    /**
     * Checks if epsilon comparison mode is active;
     * @return  {boolean} True if epsilon mode is active, otherwise returns false.
     * @see #setEpsilonComparison()
     * @see #setExactComparison()
     */
    public static checkIfEpsilonMode(): boolean {
        return BinaryRelations.epsilonComparison;
    }

    /**
     * Checks if exact comparison mode is active;
     * @return  {boolean} True if exact mode is active, otherwise returns false.
     * @see #setEpsilonComparison()
     * @see #setExactComparison()
     */
    public static checkIfExactMode(): boolean {
        return !BinaryRelations.epsilonComparison;
    }

    /**
     * Equality relation.
     * 
     * @param      {number} a                   the a number (a = b)
     * @param      {number} b                   the b number (a = b)
     * 
     * @return     {number} if a = Double.NaN or b = Double.NaN return Double.NaN,
     * else if a = b return 1,
     * otherwise return 0.
     */
    public static eq(a: number, b: number): number {
        if ((/* isNaN */isNaN(a)) || (/* isNaN */isNaN(b)))return javaemul.internal.DoubleHelper.NaN;
        let eps: number = NumberTheory.max$double$double(BinaryRelations.epsilon_$LI$(), MathFunctions.ulp(b));
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a) || /* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))eps = 0;
        let result: number = BooleanAlgebra.FALSE;
        if (BinaryRelations.epsilonComparison){
            if (MathFunctions.abs(a - b) <= eps)result = BooleanAlgebra.TRUE;
        } else if (a === b)result = BooleanAlgebra.TRUE;
        return result;
    }

    /**
     * Inequality relation.
     * 
     * @param      {number} a                   the a number (a &lt;&gt; b)
     * @param      {number} b                   the b number (a &lt;&gt; b)
     * 
     * @return     {number} if a = Double.NaN or b = Double.NaN return Double.NaN,
     * else if a &lt;&gt; b return 1,
     * otherwise return 0.
     */
    public static neq(a: number, b: number): number {
        if ((/* isNaN */isNaN(a)) || (/* isNaN */isNaN(b)))return javaemul.internal.DoubleHelper.NaN;
        let eps: number = NumberTheory.max$double$double(BinaryRelations.epsilon_$LI$(), MathFunctions.ulp(b));
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a) || /* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))eps = 0;
        let result: number = BooleanAlgebra.FALSE;
        if (BinaryRelations.epsilonComparison){
            if (MathFunctions.abs(a - b) > eps)result = BooleanAlgebra.TRUE;
        } else if (a !== b)result = BooleanAlgebra.TRUE;
        return result;
    }

    /**
     * Lower than relation.
     * 
     * @param      {number} a                   the a number (a &lt; b)
     * @param      {number} b                   the b number (a &lt; b)
     * 
     * @return     {number} if a = Double.NaN or b = Double.NaN return Double.NaN,
     * else if a &lt; b return 1,
     * otherwise return 0.
     */
    public static lt(a: number, b: number): number {
        if ((/* isNaN */isNaN(a)) || (/* isNaN */isNaN(b)))return javaemul.internal.DoubleHelper.NaN;
        let eps: number = NumberTheory.max$double$double(BinaryRelations.epsilon_$LI$(), MathFunctions.ulp(b));
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a) || /* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))eps = 0;
        let result: number = BooleanAlgebra.FALSE;
        if (BinaryRelations.epsilonComparison){
            if (a < b - eps)result = BooleanAlgebra.TRUE;
        } else if (a < b)result = BooleanAlgebra.TRUE;
        return result;
    }

    /**
     * Greater than relation.
     * 
     * @param      {number} a                   the a number (a &gt; b)
     * @param      {number} b                   the b number (a &gt; b)
     * 
     * @return     {number} if a = Double.NaN or b = Double.NaN return Double.NaN,
     * else if a &gt; b return 1,
     * otherwise return 0.
     */
    public static gt(a: number, b: number): number {
        if ((/* isNaN */isNaN(a)) || (/* isNaN */isNaN(b)))return javaemul.internal.DoubleHelper.NaN;
        let eps: number = NumberTheory.max$double$double(BinaryRelations.epsilon_$LI$(), MathFunctions.ulp(b));
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a) || /* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))eps = 0;
        let result: number = BooleanAlgebra.FALSE;
        if (BinaryRelations.epsilonComparison){
            if (a > b + eps)result = BooleanAlgebra.TRUE;
        } else if (a > b)result = BooleanAlgebra.TRUE;
        return result;
    }

    /**
     * Lower or equal relation.
     * 
     * @param      {number} a                   the a number (a &lt;= b)
     * @param      {number} b                   the b number (a &lt;= b)
     * 
     * @return     {number} if a = Double.NaN or b = Double.NaN return Double.NaN,
     * else if a &lt;= b return 1,
     * otherwise return 0.
     */
    public static leq(a: number, b: number): number {
        if ((/* isNaN */isNaN(a)) || (/* isNaN */isNaN(b)))return javaemul.internal.DoubleHelper.NaN;
        let eps: number = NumberTheory.max$double$double(BinaryRelations.epsilon_$LI$(), MathFunctions.ulp(b));
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a) || /* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))eps = 0;
        let result: number = BooleanAlgebra.FALSE;
        if (BinaryRelations.epsilonComparison){
            if (a <= b + eps)result = BooleanAlgebra.TRUE;
        } else if (a <= b)result = BooleanAlgebra.TRUE;
        return result;
    }

    /**
     * Greater or equal relation.
     * 
     * @param      {number} a                   the a number (a &gt;= b)
     * @param      {number} b                   the b number (a &gt;= b)
     * 
     * @return     {number} if a = Double.NaN or b = Double.NaN return Double.NaN,
     * else if a &gt;= b return 1,
     * otherwise return 0.
     */
    public static geq(a: number, b: number): number {
        if ((/* isNaN */isNaN(a)) || (/* isNaN */isNaN(b)))return javaemul.internal.DoubleHelper.NaN;
        let eps: number = NumberTheory.max$double$double(BinaryRelations.epsilon_$LI$(), MathFunctions.ulp(b));
        if (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(a) || /* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(b))eps = 0;
        let result: number = BooleanAlgebra.FALSE;
        if (BinaryRelations.epsilonComparison){
            if (a >= b - eps)result = BooleanAlgebra.TRUE;
        } else if (a >= b)result = BooleanAlgebra.TRUE;
        return result;
    }
}
BinaryRelations["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations";