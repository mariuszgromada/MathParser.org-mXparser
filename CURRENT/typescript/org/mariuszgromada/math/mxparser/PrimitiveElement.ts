/**
 * Default constructor setting element type id
 * 
 * @param {number} typeId     Element type id
 * 
 * @see     Argument#TYPE_ID
 * @see     Constant#TYPE_ID
 * @see     Function#TYPE_ID
 * @class
 */
export class PrimitiveElement {
    /**
     * Element type id
     * 
     * @see     Argument#TYPE_ID
     * @see     Constant#TYPE_ID
     * @see     Function#TYPE_ID
     */
    /*private*/ myTypeId: number;

    public constructor(typeId: number) {
        if (this.myTypeId === undefined) { this.myTypeId = 0; }
        this.myTypeId = typeId;
    }

    /**
     * Returns element type id
     * 
     * @return  {number} Element type id as int Function.TYPE_ID, Argument.TYPE_ID, Function.TYPE_ID
     * 
     * @see     Argument#TYPE_ID
     * @see     Constant#TYPE_ID
     * @see     Function#TYPE_ID
     */
    public getMyTypeId(): number {
        return this.myTypeId;
    }
}
PrimitiveElement["__class"] = "org.mariuszgromada.math.mxparser.PrimitiveElement";