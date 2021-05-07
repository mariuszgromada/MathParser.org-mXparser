import { BinaryRelations } from './BinaryRelations';

/**
 * Constructor - functions only with values in radians and degrees
 * @param {number} x       The value of x from f(x)
 * @param {number} fv      The value of f(x) in radians for a given x
 * @param {number} fvdeg   The value of f(x) in degrees for a given x
 * @class
 */
export class SpecialValue {
    /**
     * Epsilon is used to compare the x value with regards to some given small interval
     */
    public static EPSILON: number; public static EPSILON_$LI$(): number { if (SpecialValue.EPSILON == null) { SpecialValue.EPSILON = 10 * BinaryRelations.DEFAULT_COMPARISON_EPSILON; }  return SpecialValue.EPSILON; }

    /**
     * The x value from f(x)
     */
    public x: number;

    /**
     * The start of the interval where the function value is considered to be by fv and fvdeg
     */
    public xFrom: number;

    /**
     * The end of the interval where the function value is considered to be by fv and fvdeg
     */
    public xTo: number;

    /**
     * The function value in main unit
     */
    public fv: number;

    /**
     * The function value in degrees for inverse trigonometric functions
     */
    public fvdeg: number;

    public constructor(x?: any, fv?: any, fvdeg?: any) {
        if (((typeof x === 'number') || x === null) && ((typeof fv === 'number') || fv === null) && ((typeof fvdeg === 'number') || fvdeg === null)) {
            let __args = arguments;
            if (this.x === undefined) { this.x = 0; } 
            if (this.xFrom === undefined) { this.xFrom = 0; } 
            if (this.xTo === undefined) { this.xTo = 0; } 
            if (this.fv === undefined) { this.fv = 0; } 
            if (this.fvdeg === undefined) { this.fvdeg = 0; } 
            this.x = x;
            this.fv = fv;
            this.fvdeg = fvdeg;
            this.xFrom = x - SpecialValue.EPSILON_$LI$();
            this.xTo = x + SpecialValue.EPSILON_$LI$();
        } else if (((typeof x === 'number') || x === null) && ((typeof fv === 'number') || fv === null) && fvdeg === undefined) {
            let __args = arguments;
            if (this.x === undefined) { this.x = 0; } 
            if (this.xFrom === undefined) { this.xFrom = 0; } 
            if (this.xTo === undefined) { this.xTo = 0; } 
            if (this.fv === undefined) { this.fv = 0; } 
            if (this.fvdeg === undefined) { this.fvdeg = 0; } 
            this.x = x;
            this.fv = fv;
            this.xFrom = x - SpecialValue.EPSILON_$LI$();
            this.xTo = x + SpecialValue.EPSILON_$LI$();
        } else throw new Error('invalid overload');
    }
}
SpecialValue["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.SpecialValue";