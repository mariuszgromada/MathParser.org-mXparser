import { mXparserConstants } from '../mXparserConstants';

/**
 * Binary Relations - mXparser tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.1.0
 * @class
 */
export class BinaryRelation {
    public static TYPE_ID: number = 3;

    public static TYPE_DESC: string = "Binary Relation";

    public static EQ_ID: number = 1;

    public static NEQ_ID: number = 2;

    public static LT_ID: number = 3;

    public static GT_ID: number = 4;

    public static LEQ_ID: number = 5;

    public static GEQ_ID: number = 6;

    public static EQ_STR: string = "=";

    public static EQ1_STR: string = "==";

    public static NEQ_STR: string = "<>";

    public static NEQ1_STR: string = "~=";

    public static NEQ2_STR: string = "!=";

    public static LT_STR: string = "<";

    public static GT_STR: string = ">";

    public static LEQ_STR: string = "<=";

    public static GEQ_STR: string = ">=";

    public static EQ_SYN: string = "a = b";

    public static EQ1_SYN: string = "a == b";

    public static NEQ_SYN: string = "a <> b";

    public static NEQ1_SYN: string = "a ~= b";

    public static NEQ2_SYN: string = "a != b";

    public static LT_SYN: string = "a < b";

    public static GT_SYN: string = "a > b";

    public static LEQ_SYN: string = "a <= b";

    public static GEQ_SYN: string = "a >= b";

    public static EQ_DESC: string = "Equality";

    public static NEQ_DESC: string = "Inequation";

    public static LT_DESC: string = "Lower than";

    public static GT_DESC: string = "Greater than";

    public static LEQ_DESC: string = "Lower or equal";

    public static GEQ_DESC: string = "Greater or equal";

    public static EQ_SINCE: string; public static EQ_SINCE_$LI$(): string { if (BinaryRelation.EQ_SINCE == null) { BinaryRelation.EQ_SINCE = mXparserConstants.NAMEv10; }  return BinaryRelation.EQ_SINCE; }

    public static NEQ_SINCE: string; public static NEQ_SINCE_$LI$(): string { if (BinaryRelation.NEQ_SINCE == null) { BinaryRelation.NEQ_SINCE = mXparserConstants.NAMEv10; }  return BinaryRelation.NEQ_SINCE; }

    public static LT_SINCE: string; public static LT_SINCE_$LI$(): string { if (BinaryRelation.LT_SINCE == null) { BinaryRelation.LT_SINCE = mXparserConstants.NAMEv10; }  return BinaryRelation.LT_SINCE; }

    public static GT_SINCE: string; public static GT_SINCE_$LI$(): string { if (BinaryRelation.GT_SINCE == null) { BinaryRelation.GT_SINCE = mXparserConstants.NAMEv10; }  return BinaryRelation.GT_SINCE; }

    public static LEQ_SINCE: string; public static LEQ_SINCE_$LI$(): string { if (BinaryRelation.LEQ_SINCE == null) { BinaryRelation.LEQ_SINCE = mXparserConstants.NAMEv10; }  return BinaryRelation.LEQ_SINCE; }

    public static GEQ_SINCE: string; public static GEQ_SINCE_$LI$(): string { if (BinaryRelation.GEQ_SINCE == null) { BinaryRelation.GEQ_SINCE = mXparserConstants.NAMEv10; }  return BinaryRelation.GEQ_SINCE; }
}
BinaryRelation["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.BinaryRelation";