import { mXparserConstants } from '../mXparserConstants';

/**
 * Calculus Operators - mXparser tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.3.0
 * @class
 */
export class CalculusOperator {
    public static TYPE_ID: number = 8;

    public static TYPE_DESC: string = "Calculus Operator";

    public static SUM_ID: number = 1;

    public static PROD_ID: number = 3;

    public static INT_ID: number = 5;

    public static DER_ID: number = 6;

    public static DER_LEFT_ID: number = 7;

    public static DER_RIGHT_ID: number = 8;

    public static DERN_ID: number = 9;

    public static FORW_DIFF_ID: number = 10;

    public static BACKW_DIFF_ID: number = 11;

    public static AVG_ID: number = 12;

    public static VAR_ID: number = 13;

    public static STD_ID: number = 14;

    public static MIN_ID: number = 15;

    public static MAX_ID: number = 16;

    public static SOLVE_ID: number = 17;

    public static SUM_STR: string = "sum";

    public static PROD_STR: string = "prod";

    public static INT_STR: string = "int";

    public static DER_STR: string = "der";

    public static DER_LEFT_STR: string = "der-";

    public static DER_RIGHT_STR: string = "der+";

    public static DERN_STR: string = "dern";

    public static FORW_DIFF_STR: string = "diff";

    public static BACKW_DIFF_STR: string = "difb";

    public static AVG_STR: string = "avg";

    public static VAR_STR: string = "vari";

    public static STD_STR: string = "stdi";

    public static MIN_STR: string = "mini";

    public static MAX_STR: string = "maxi";

    public static SOLVE_STR: string = "solve";

    public static SUM_SYN: string = "sum( i, from, to, expr , <by> )";

    public static PROD_SYN: string = "prod( i, from, to, expr , <by> )";

    public static INT_SYN: string = "int( expr, arg, from, to )";

    public static DER_SYN: string = "der( expr, arg, <point> )";

    public static DER_LEFT_SYN: string = "der-( expr, arg, <point> )";

    public static DER_RIGHT_SYN: string = "der+( expr, arg, <point> )";

    public static DERN_SYN: string = "dern( expr, n, arg )";

    public static FORW_DIFF_SYN: string = "diff( expr, arg, <delta> )";

    public static BACKW_DIFF_SYN: string = "difb( expr, arg, <delta> )";

    public static AVG_SYN: string = "avg( i, from, to, expr , <by> )";

    public static VAR_SYN: string = "vari( i, from, to, expr , <by> )";

    public static STD_SYN: string = "stdi( i, from, to, expr , <by> )";

    public static MIN_SYN: string = "mini( i, from, to, expr , <by> )";

    public static MAX_SYN: string = "maxi( i, from, to, expr , <by> )";

    public static SOLVE_SYN: string = "solve( expr, arg, from, to )";

    public static SUM_DESC: string = "Summation operator - SIGMA";

    public static PROD_DESC: string = "Product operator - PI";

    public static INT_DESC: string = "Definite integral operator";

    public static DER_DESC: string = "Derivative operator";

    public static DER_LEFT_DESC: string = "Left derivative operator";

    public static DER_RIGHT_DESC: string = "Right derivative operator";

    public static DERN_DESC: string = "n-th derivative operator";

    public static FORW_DIFF_DESC: string = "Forward difference operator";

    public static BACKW_DIFF_DESC: string = "Backward difference operator";

    public static AVG_DESC: string = "Average operator";

    public static VAR_DESC: string = "Bias-corrected sample variance operator";

    public static STD_DESC: string = "Bias-corrected sample standard deviation operator";

    public static MIN_DESC: string = "Minimum value";

    public static MAX_DESC: string = "Maximum value";

    public static SOLVE_DESC: string = "f(x) = 0 equation solving, function root finding";

    public static SUM_SINCE: string; public static SUM_SINCE_$LI$(): string { if (CalculusOperator.SUM_SINCE == null) { CalculusOperator.SUM_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.SUM_SINCE; }

    public static PROD_SINCE: string; public static PROD_SINCE_$LI$(): string { if (CalculusOperator.PROD_SINCE == null) { CalculusOperator.PROD_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.PROD_SINCE; }

    public static INT_SINCE: string; public static INT_SINCE_$LI$(): string { if (CalculusOperator.INT_SINCE == null) { CalculusOperator.INT_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.INT_SINCE; }

    public static DER_SINCE: string; public static DER_SINCE_$LI$(): string { if (CalculusOperator.DER_SINCE == null) { CalculusOperator.DER_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.DER_SINCE; }

    public static DER_LEFT_SINCE: string; public static DER_LEFT_SINCE_$LI$(): string { if (CalculusOperator.DER_LEFT_SINCE == null) { CalculusOperator.DER_LEFT_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.DER_LEFT_SINCE; }

    public static DER_RIGHT_SINCE: string; public static DER_RIGHT_SINCE_$LI$(): string { if (CalculusOperator.DER_RIGHT_SINCE == null) { CalculusOperator.DER_RIGHT_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.DER_RIGHT_SINCE; }

    public static DERN_SINCE: string; public static DERN_SINCE_$LI$(): string { if (CalculusOperator.DERN_SINCE == null) { CalculusOperator.DERN_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.DERN_SINCE; }

    public static FORW_DIFF_SINCE: string; public static FORW_DIFF_SINCE_$LI$(): string { if (CalculusOperator.FORW_DIFF_SINCE == null) { CalculusOperator.FORW_DIFF_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.FORW_DIFF_SINCE; }

    public static BACKW_DIFF_SINCE: string; public static BACKW_DIFF_SINCE_$LI$(): string { if (CalculusOperator.BACKW_DIFF_SINCE == null) { CalculusOperator.BACKW_DIFF_SINCE = mXparserConstants.NAMEv10; }  return CalculusOperator.BACKW_DIFF_SINCE; }

    public static AVG_SINCE: string; public static AVG_SINCE_$LI$(): string { if (CalculusOperator.AVG_SINCE == null) { CalculusOperator.AVG_SINCE = mXparserConstants.NAMEv24; }  return CalculusOperator.AVG_SINCE; }

    public static VAR_SINCE: string; public static VAR_SINCE_$LI$(): string { if (CalculusOperator.VAR_SINCE == null) { CalculusOperator.VAR_SINCE = mXparserConstants.NAMEv24; }  return CalculusOperator.VAR_SINCE; }

    public static STD_SINCE: string; public static STD_SINCE_$LI$(): string { if (CalculusOperator.STD_SINCE == null) { CalculusOperator.STD_SINCE = mXparserConstants.NAMEv24; }  return CalculusOperator.STD_SINCE; }

    public static MIN_SINCE: string; public static MIN_SINCE_$LI$(): string { if (CalculusOperator.MIN_SINCE == null) { CalculusOperator.MIN_SINCE = mXparserConstants.NAMEv24; }  return CalculusOperator.MIN_SINCE; }

    public static MAX_SINCE: string; public static MAX_SINCE_$LI$(): string { if (CalculusOperator.MAX_SINCE == null) { CalculusOperator.MAX_SINCE = mXparserConstants.NAMEv24; }  return CalculusOperator.MAX_SINCE; }

    public static SOLVE_SINCE: string; public static SOLVE_SINCE_$LI$(): string { if (CalculusOperator.SOLVE_SINCE == null) { CalculusOperator.SOLVE_SINCE = mXparserConstants.NAMEv40; }  return CalculusOperator.SOLVE_SINCE; }
}
CalculusOperator["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.CalculusOperator";