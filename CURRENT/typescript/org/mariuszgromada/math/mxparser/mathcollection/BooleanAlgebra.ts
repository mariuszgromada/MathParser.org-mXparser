/* Generated from Java with JSweet 3.0.0 - http://www.jsweet.org */
import { mXparserConstants } from '../mXparserConstants';
import { MathFunctions } from './MathFunctions';
import { BinaryRelations } from './BinaryRelations';
import { javaemul } from 'j4ts/j4ts';

/**
 * BooleanAlgebra - class for boolean operators.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.3.0
 * @class
 */
export class BooleanAlgebra {
    /**
     * False as integer
     */
    public static FALSE: number = 0;

    /**
     * True as integer
     */
    public static TRUE: number = 1;

    /**
     * Null as integer
     */
    public static NULL: number = 2;

    /**
     * False as double
     */
    public static F: number = 0;

    /**
     * True as double
     */
    public static T: number = 1;

    /**
     * Null as double
     */
    public static N: number; public static N_$LI$(): number { if (BooleanAlgebra.N == null) { BooleanAlgebra.N = javaemul.internal.DoubleHelper.NaN; }  return BooleanAlgebra.N; }

    /**
     * AND truth table
     */
    public static AND_TRUTH_TABLE: number[][]; public static AND_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.AND_TRUTH_TABLE == null) { BooleanAlgebra.AND_TRUTH_TABLE = [[BooleanAlgebra.F, BooleanAlgebra.F, BooleanAlgebra.F], [BooleanAlgebra.F, BooleanAlgebra.T, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.F, BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.AND_TRUTH_TABLE; }

    /**
     * NAND truth table
     */
    public static NAND_TRUTH_TABLE: number[][]; public static NAND_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.NAND_TRUTH_TABLE == null) { BooleanAlgebra.NAND_TRUTH_TABLE = [[BooleanAlgebra.T, BooleanAlgebra.T, BooleanAlgebra.T], [BooleanAlgebra.T, BooleanAlgebra.F, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.T, BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.NAND_TRUTH_TABLE; }

    /**
     * OR truth table
     */
    public static OR_TRUTH_TABLE: number[][]; public static OR_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.OR_TRUTH_TABLE == null) { BooleanAlgebra.OR_TRUTH_TABLE = [[BooleanAlgebra.F, BooleanAlgebra.T, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.T, BooleanAlgebra.T, BooleanAlgebra.T], [BooleanAlgebra.N_$LI$(), BooleanAlgebra.T, BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.OR_TRUTH_TABLE; }

    /**
     * NOR truth table
     */
    public static NOR_TRUTH_TABLE: number[][]; public static NOR_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.NOR_TRUTH_TABLE == null) { BooleanAlgebra.NOR_TRUTH_TABLE = [[BooleanAlgebra.T, BooleanAlgebra.F, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.F, BooleanAlgebra.F, BooleanAlgebra.F], [BooleanAlgebra.N_$LI$(), BooleanAlgebra.F, BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.NOR_TRUTH_TABLE; }

    /**
     * XOR truth table
     */
    public static XOR_TRUTH_TABLE: number[][]; public static XOR_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.XOR_TRUTH_TABLE == null) { BooleanAlgebra.XOR_TRUTH_TABLE = [[BooleanAlgebra.F, BooleanAlgebra.T, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.T, BooleanAlgebra.F, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.XOR_TRUTH_TABLE; }

    /**
     * XNOR truth table
     */
    public static XNOR_TRUTH_TABLE: number[][]; public static XNOR_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.XNOR_TRUTH_TABLE == null) { BooleanAlgebra.XNOR_TRUTH_TABLE = [[BooleanAlgebra.T, BooleanAlgebra.F, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.F, BooleanAlgebra.T, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.XNOR_TRUTH_TABLE; }

    /**
     * IMP truth table
     */
    public static IMP_TRUTH_TABLE: number[][]; public static IMP_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.IMP_TRUTH_TABLE == null) { BooleanAlgebra.IMP_TRUTH_TABLE = [[BooleanAlgebra.T, BooleanAlgebra.T, BooleanAlgebra.T], [BooleanAlgebra.F, BooleanAlgebra.T, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.N_$LI$(), BooleanAlgebra.T, BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.IMP_TRUTH_TABLE; }

    /**
     * CIMP truth table
     */
    public static CIMP_TRUTH_TABLE: number[][]; public static CIMP_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.CIMP_TRUTH_TABLE == null) { BooleanAlgebra.CIMP_TRUTH_TABLE = [[BooleanAlgebra.T, BooleanAlgebra.F, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.T, BooleanAlgebra.T, BooleanAlgebra.T], [BooleanAlgebra.T, BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.CIMP_TRUTH_TABLE; }

    /**
     * EQV truth table
     */
    public static EQV_TRUTH_TABLE: number[][]; public static EQV_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.EQV_TRUTH_TABLE == null) { BooleanAlgebra.EQV_TRUTH_TABLE = [[BooleanAlgebra.T, BooleanAlgebra.F, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.F, BooleanAlgebra.T, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.EQV_TRUTH_TABLE; }

    /**
     * NIMP truth table
     */
    public static NIMP_TRUTH_TABLE: number[][]; public static NIMP_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.NIMP_TRUTH_TABLE == null) { BooleanAlgebra.NIMP_TRUTH_TABLE = [[BooleanAlgebra.F, BooleanAlgebra.F, BooleanAlgebra.F], [BooleanAlgebra.T, BooleanAlgebra.F, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.N_$LI$(), BooleanAlgebra.F, BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.NIMP_TRUTH_TABLE; }

    /**
     * CNIMP truth table
     */
    public static CNIMP_TRUTH_TABLE: number[][]; public static CNIMP_TRUTH_TABLE_$LI$(): number[][] { if (BooleanAlgebra.CNIMP_TRUTH_TABLE == null) { BooleanAlgebra.CNIMP_TRUTH_TABLE = [[BooleanAlgebra.F, BooleanAlgebra.T, BooleanAlgebra.N_$LI$()], [BooleanAlgebra.F, BooleanAlgebra.F, BooleanAlgebra.F], [BooleanAlgebra.F, BooleanAlgebra.N_$LI$(), BooleanAlgebra.N_$LI$()]]; }  return BooleanAlgebra.CNIMP_TRUTH_TABLE; }

    /**
     * NOT truth table
     */
    public static NOT_TRUTH_TABLE: number[]; public static NOT_TRUTH_TABLE_$LI$(): number[] { if (BooleanAlgebra.NOT_TRUTH_TABLE == null) { BooleanAlgebra.NOT_TRUTH_TABLE = [BooleanAlgebra.T, BooleanAlgebra.F, BooleanAlgebra.N_$LI$()]; }  return BooleanAlgebra.NOT_TRUTH_TABLE; }

    /**
     * Double to integer boolean translation
     * 
     * @param      {number} a                   the double number
     * 
     * @return     {number} If a = Double.NaN return NULL,
     * else if a &lt;&gt; 0 return TRUE,
     * else return FALSE.
     */
    public static double2IntBoolean(a: number): number {
        if (/* isNaN */isNaN(a))return BooleanAlgebra.NULL;
        if (BinaryRelations.epsilonComparison){
            if (MathFunctions.abs(a) > BinaryRelations.epsilon_$LI$())return BooleanAlgebra.TRUE; else return BooleanAlgebra.FALSE;
        } else {
            if (a !== 0)return BooleanAlgebra.TRUE; else return BooleanAlgebra.FALSE;
        }
    }

    /**
     * Boolean AND
     * 
     * @param      {number} a                   the a number (a AND b)
     * @param      {number} b                   the b number (a AND b)
     * 
     * @return     {number} Truth table element AND[A][B] where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static and(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.AND_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean OR
     * 
     * @param      {number} a                   the a number (a OR b)
     * @param      {number} b                   the b number (a OR b)
     * 
     * @return     {number} Truth table element OR[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static or(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.OR_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean XOR
     * 
     * @param      {number} a                   the a number (a XOR b)
     * @param      {number} b                   the b number (a XOR b)
     * 
     * @return     {number} Truth table element XOR[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static xor(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.XOR_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean NAND
     * 
     * @param      {number} a                   the a number (a NAND b)
     * @param      {number} b                   the b number (a NAND b)
     * 
     * @return     {number} Truth table element NAND[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static nand(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.NAND_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean NOR
     * 
     * @param      {number} a                   the a number (a NOR b)
     * @param      {number} b                   the b number (a NOR b)
     * 
     * @return     {number} Truth table element NOR[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static nor(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.NOR_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean XNOR
     * 
     * @param      {number} a                   the a number (a XNOR b)
     * @param      {number} b                   the b number (a XNOR b)
     * 
     * @return     {number} Truth table element XNOR[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static xnor(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.XNOR_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean IMP
     * 
     * @param      {number} a                   the a number (a IMP b)
     * @param      {number} b                   the b number (a IMP b)
     * 
     * @return     {number} Truth table element IMP[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static imp(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.IMP_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean EQV
     * 
     * @param      {number} a                   the a number (a EQV b)
     * @param      {number} b                   the b number (a EQV b)
     * 
     * @return     {number} Truth table element EQV[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static eqv(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.EQV_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean NOT
     * 
     * @param      {number} a                   the a number (NOT a)
     * 
     * @return     {number} Truth table element NOT[A]
     * where A = double2IntBoolean(a)
     */
    public static not(a: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        return BooleanAlgebra.NOT_TRUTH_TABLE_$LI$()[A];
    }

    /**
     * Boolean CIMP
     * 
     * @param      {number} a                   the a number (a CIMP b)
     * @param      {number} b                   the b number (a CIMP b)
     * 
     * @return     {number} Truth table element CIMP[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static cimp(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.CIMP_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean NIMP
     * 
     * @param      {number} a                   the a number (a NIMP b)
     * @param      {number} b                   the b number (a NIMP b)
     * 
     * @return     {number} Truth table element NIMP[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static nimp(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.NIMP_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean CNIMP
     * 
     * @param      {number} a                   the a number (a CNIMP b)
     * @param      {number} b                   the b number (a CNIMP b)
     * 
     * @return     {number} Truth table element CNIMP[A][B]
     * where A = double2IntBoolean(a), B = double2IntBoolean(b)
     */
    public static cnimp(a: number, b: number): number {
        const A: number = BooleanAlgebra.double2IntBoolean(a);
        const B: number = BooleanAlgebra.double2IntBoolean(b);
        return BooleanAlgebra.CNIMP_TRUTH_TABLE_$LI$()[A][B];
    }

    /**
     * Boolean AND variadic
     * 
     * @param {double[]} values   List of values
     * @return   {number} Returns BooleanAlgebra.TRUE if all values on the list are BooleanAlgebra.TURE,
     * otherwise returns BooleanAlgebra.FALSE
     */
    public static andVariadic(values: number[]): number {
        if (values == null)return javaemul.internal.DoubleHelper.NaN;
        if (values.length === 0)return javaemul.internal.DoubleHelper.NaN;
        let cntTrue: number = 0;
        let bv: number;
        for(let index137=0; index137 < values.length; index137++) {
            let v = values[index137];
            {
                bv = BooleanAlgebra.double2IntBoolean(v);
                if (bv === BooleanAlgebra.FALSE)return BooleanAlgebra.FALSE;
                if (bv === BooleanAlgebra.TRUE)cntTrue++;
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            }
        }
        if (cntTrue === values.length)return BooleanAlgebra.TRUE; else return javaemul.internal.DoubleHelper.NaN;
    }

    /**
     * Boolean OR variadic
     * 
     * @param {double[]} values   List of values
     * @return   {number} Returns BooleanAlgebra.TRUE if at least one value on the list is BooleanAlgebra.TURE,
     * otherwise returns BooleanAlgebra.FALSE
     */
    public static orVariadic(values: number[]): number {
        if (values == null)return javaemul.internal.DoubleHelper.NaN;
        if (values.length === 0)return javaemul.internal.DoubleHelper.NaN;
        let cntFalse: number = 0;
        let bv: number;
        for(let index138=0; index138 < values.length; index138++) {
            let v = values[index138];
            {
                bv = BooleanAlgebra.double2IntBoolean(v);
                if (bv === BooleanAlgebra.TRUE)return BooleanAlgebra.TRUE;
                if (bv === BooleanAlgebra.FALSE)cntFalse++;
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            }
        }
        if (cntFalse === values.length)return BooleanAlgebra.FALSE; else return javaemul.internal.DoubleHelper.NaN;
    }

    /**
     * Boolean XOR variadic
     * 
     * @param {double[]} values   List of values
     * @return   {number} Returns BooleanAlgebra.TRUE if exactly one value on the list is BooleanAlgebra.TURE,
     * otherwise returns BooleanAlgebra.FALSE
     */
    public static xorVariadic(values: number[]): number {
        if (values == null)return javaemul.internal.DoubleHelper.NaN;
        if (values.length === 0)return javaemul.internal.DoubleHelper.NaN;
        let cntTrue: number = 0;
        let bv: number;
        for(let index139=0; index139 < values.length; index139++) {
            let v = values[index139];
            {
                bv = BooleanAlgebra.double2IntBoolean(v);
                if (bv === BooleanAlgebra.TRUE){
                    cntTrue++;
                    if (cntTrue > 1)return BooleanAlgebra.FALSE;
                }
                if (bv === BooleanAlgebra.NULL)return javaemul.internal.DoubleHelper.NaN;
                if (mXparserConstants.isCurrentCalculationCancelled())return javaemul.internal.DoubleHelper.NaN;
            }
        }
        if (cntTrue === 1)return BooleanAlgebra.TRUE; else return BooleanAlgebra.FALSE;
    }
}
BooleanAlgebra["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.BooleanAlgebra";