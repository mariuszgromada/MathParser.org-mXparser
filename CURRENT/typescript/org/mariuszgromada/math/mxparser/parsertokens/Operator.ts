import { mXparserConstants } from '../mXparserConstants';

/**
 * Operators - mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class Operator {
    public static TYPE_ID: number = 1;

    public static TYPE_DESC: string = "Operator";

    public static PLUS_ID: number = 1;

    public static MINUS_ID: number = 2;

    public static MULTIPLY_ID: number = 3;

    public static DIVIDE_ID: number = 4;

    public static POWER_ID: number = 5;

    public static FACT_ID: number = 6;

    public static MOD_ID: number = 7;

    public static PERC_ID: number = 8;

    public static TETRATION_ID: number = 9;

    public static PLUS_STR: string = "+";

    public static MINUS_STR: string = "-";

    public static MULTIPLY_STR: string = "*";

    public static DIVIDE_STR: string = "/";

    public static POWER_STR: string = "^";

    public static FACT_STR: string = "!";

    public static MOD_STR: string = "#";

    public static PERC_STR: string = "%";

    public static TETRATION_STR: string = "^^";

    public static PLUS_SYN: string = "a + b";

    public static MINUS_SYN: string = "a - b";

    public static MULTIPLY_SYN: string = "a * b";

    public static DIVIDE_SYN: string = "a / b";

    public static POWER_SYN: string = "a^b";

    public static FACT_SYN: string = "n!";

    public static MOD_SYN: string = "a # b";

    public static PERC_SYN: string = "n%";

    public static TETRATION_SYN: string = "a^^n";

    public static PLUS_DESC: string = "Addition";

    public static MINUS_DESC: string = "Subtraction";

    public static MULTIPLY_DESC: string = "Nultiplication";

    public static DIVIDE_DESC: string = "Division";

    public static POWER_DESC: string = "Exponentiation";

    public static FACT_DESC: string = "Factorial";

    public static MOD_DESC: string = "Modulo function";

    public static PERC_DESC: string = "Percentage";

    public static TETRATION_DESC: string = "Tetration (hyper-4, power tower, exponential tower)";

    public static PLUS_SINCE: string; public static PLUS_SINCE_$LI$(): string { if (Operator.PLUS_SINCE == null) { Operator.PLUS_SINCE = mXparserConstants.NAMEv10; }  return Operator.PLUS_SINCE; }

    public static MINUS_SINCE: string; public static MINUS_SINCE_$LI$(): string { if (Operator.MINUS_SINCE == null) { Operator.MINUS_SINCE = mXparserConstants.NAMEv10; }  return Operator.MINUS_SINCE; }

    public static MULTIPLY_SINCE: string; public static MULTIPLY_SINCE_$LI$(): string { if (Operator.MULTIPLY_SINCE == null) { Operator.MULTIPLY_SINCE = mXparserConstants.NAMEv10; }  return Operator.MULTIPLY_SINCE; }

    public static DIVIDE_SINCE: string; public static DIVIDE_SINCE_$LI$(): string { if (Operator.DIVIDE_SINCE == null) { Operator.DIVIDE_SINCE = mXparserConstants.NAMEv10; }  return Operator.DIVIDE_SINCE; }

    public static POWER_SINCE: string; public static POWER_SINCE_$LI$(): string { if (Operator.POWER_SINCE == null) { Operator.POWER_SINCE = mXparserConstants.NAMEv10; }  return Operator.POWER_SINCE; }

    public static FACT_SINCE: string; public static FACT_SINCE_$LI$(): string { if (Operator.FACT_SINCE == null) { Operator.FACT_SINCE = mXparserConstants.NAMEv10; }  return Operator.FACT_SINCE; }

    public static MOD_SINCE: string; public static MOD_SINCE_$LI$(): string { if (Operator.MOD_SINCE == null) { Operator.MOD_SINCE = mXparserConstants.NAMEv10; }  return Operator.MOD_SINCE; }

    public static PERC_SINCE: string; public static PERC_SINCE_$LI$(): string { if (Operator.PERC_SINCE == null) { Operator.PERC_SINCE = mXparserConstants.NAMEv41; }  return Operator.PERC_SINCE; }

    public static TETRATION_SINCE: string; public static TETRATION_SINCE_$LI$(): string { if (Operator.TETRATION_SINCE == null) { Operator.TETRATION_SINCE = mXparserConstants.NAMEv42; }  return Operator.TETRATION_SINCE; }
}
Operator["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.Operator";