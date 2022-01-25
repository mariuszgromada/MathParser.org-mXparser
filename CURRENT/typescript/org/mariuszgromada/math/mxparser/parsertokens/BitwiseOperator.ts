import { mXparserConstants } from '../mXparserConstants';

/**
 * Bitwise Operators - mXparser tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class BitwiseOperator {
    public static TYPE_ID: number = 11;

    public static TYPE_DESC: string = "Bitwise Operator";

    public static COMPL_ID: number = 1;

    public static AND_ID: number = 2;

    public static XOR_ID: number = 3;

    public static OR_ID: number = 4;

    public static LEFT_SHIFT_ID: number = 5;

    public static RIGHT_SHIFT_ID: number = 6;

    public static COMPL_STR: string = "@~";

    public static AND_STR: string = "@&";

    public static XOR_STR: string = "@^";

    public static OR_STR: string = "@|";

    public static LEFT_SHIFT_STR: string = "@<<";

    public static RIGHT_SHIFT_STR: string = "@>>";

    public static COMPL_SYN: string = "@~a";

    public static AND_SYN: string = "a @& b";

    public static XOR_SYN: string = "a @^ b";

    public static OR_SYN: string = "a @| b";

    public static LEFT_SHIFT_SYN: string = "a @<< b";

    public static RIGHT_SHIFT_SYN: string = "a @>> b";

    public static COMPL_DESC: string = "Bitwise unary complement";

    public static AND_DESC: string = "Bitwise AND";

    public static XOR_DESC: string = "Bitwise exclusive OR";

    public static OR_DESC: string = "Bitwise inclusive OR";

    public static LEFT_SHIFT_DESC: string = "Signed left shift";

    public static RIGHT_SHIFT_DESC: string = "Signed right shift";

    public static COMPL_SINCE: string; public static COMPL_SINCE_$LI$(): string { if (BitwiseOperator.COMPL_SINCE == null) { BitwiseOperator.COMPL_SINCE = mXparserConstants.NAMEv40; }  return BitwiseOperator.COMPL_SINCE; }

    public static AND_SINCE: string; public static AND_SINCE_$LI$(): string { if (BitwiseOperator.AND_SINCE == null) { BitwiseOperator.AND_SINCE = mXparserConstants.NAMEv40; }  return BitwiseOperator.AND_SINCE; }

    public static XOR_SINCE: string; public static XOR_SINCE_$LI$(): string { if (BitwiseOperator.XOR_SINCE == null) { BitwiseOperator.XOR_SINCE = mXparserConstants.NAMEv40; }  return BitwiseOperator.XOR_SINCE; }

    public static OR_SINCE: string; public static OR_SINCE_$LI$(): string { if (BitwiseOperator.OR_SINCE == null) { BitwiseOperator.OR_SINCE = mXparserConstants.NAMEv40; }  return BitwiseOperator.OR_SINCE; }

    public static LEFT_SHIFT_SINCE: string; public static LEFT_SHIFT_SINCE_$LI$(): string { if (BitwiseOperator.LEFT_SHIFT_SINCE == null) { BitwiseOperator.LEFT_SHIFT_SINCE = mXparserConstants.NAMEv40; }  return BitwiseOperator.LEFT_SHIFT_SINCE; }

    public static RIGHT_SHIFT_SINCE: string; public static RIGHT_SHIFT_SINCE_$LI$(): string { if (BitwiseOperator.RIGHT_SHIFT_SINCE == null) { BitwiseOperator.RIGHT_SHIFT_SINCE = mXparserConstants.NAMEv40; }  return BitwiseOperator.RIGHT_SHIFT_SINCE; }
}
BitwiseOperator["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.BitwiseOperator";