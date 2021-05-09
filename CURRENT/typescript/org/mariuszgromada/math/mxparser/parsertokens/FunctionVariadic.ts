import { mXparserConstants } from '../mXparserConstants';

/**
 * Variadic functions (n parameters)- mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.1.0
 * @class
 */
export class FunctionVariadic {
    public static TYPE_ID: number = 7;

    public static TYPE_DESC: string = "Variadic Function";

    public static IFF_ID: number = 1;

    public static MIN_ID: number = 2;

    public static MAX_ID: number = 3;

    public static CONT_FRAC_ID: number = 4;

    public static CONT_POL_ID: number = 5;

    public static GCD_ID: number = 6;

    public static LCM_ID: number = 7;

    public static SUM_ID: number = 8;

    public static PROD_ID: number = 9;

    public static AVG_ID: number = 10;

    public static VAR_ID: number = 11;

    public static STD_ID: number = 12;

    public static RND_LIST_ID: number = 13;

    public static COALESCE_ID: number = 14;

    public static OR_ID: number = 15;

    public static AND_ID: number = 16;

    public static XOR_ID: number = 17;

    public static ARGMIN_ID: number = 18;

    public static ARGMAX_ID: number = 19;

    public static MEDIAN_ID: number = 20;

    public static MODE_ID: number = 21;

    public static BASE_ID: number = 22;

    public static NDIST_ID: number = 23;

    public static IFF_STR: string = "iff";

    public static MIN_STR: string = "min";

    public static MAX_STR: string = "max";

    public static CONT_FRAC_STR: string = "ConFrac";

    public static CONT_POL_STR: string = "ConPol";

    public static GCD_STR: string = "gcd";

    public static LCM_STR: string = "lcm";

    public static SUM_STR: string = "add";

    public static PROD_STR: string = "multi";

    public static AVG_STR: string = "mean";

    public static VAR_STR: string = "var";

    public static STD_STR: string = "std";

    public static RND_LIST_STR: string = "rList";

    public static COALESCE_STR: string = "coalesce";

    public static OR_STR: string = "or";

    public static AND_STR: string = "and";

    public static XOR_STR: string = "xor";

    public static ARGMIN_STR: string = "argmin";

    public static ARGMAX_STR: string = "argmax";

    public static MEDIAN_STR: string = "med";

    public static MODE_STR: string = "mode";

    public static BASE_STR: string = "base";

    public static NDIST_STR: string = "ndist";

    public static IFF_SYN: string = "iff( cond-1, expr-1; ... ; cond-n, expr-n )";

    public static MIN_SYN: string = "min(a1, ..., an)";

    public static MAX_SYN: string = "max(a1, ..., an)";

    public static CONT_FRAC_SYN: string = "ConFrac(a1, ..., an)";

    public static CONT_POL_SYN: string = "ConPol(a1, ..., an)";

    public static GCD_SYN: string = "gcd(a1, ..., an)";

    public static LCM_SYN: string = "lcm(a1, ..., an)";

    public static SUM_SYN: string = "add(a1, ..., an)";

    public static PROD_SYN: string = "multi(a1, ..., an)";

    public static AVG_SYN: string = "mean(a1, ..., an)";

    public static VAR_SYN: string = "var(a1, ..., an)";

    public static STD_SYN: string = "std(a1, ..., an)";

    public static RND_LIST_SYN: string = "rList(a1, ..., an)";

    public static COALESCE_SYN: string = "coalesce(a1, ..., an)";

    public static OR_SYN: string = "or(a1, ..., an)";

    public static AND_SYN: string = "and(a1, ..., an)";

    public static XOR_SYN: string = "xor(a1, ..., an)";

    public static ARGMIN_SYN: string = "argmin(a1, ..., an)";

    public static ARGMAX_SYN: string = "argmax(a1, ..., an)";

    public static MEDIAN_SYN: string = "med(a1, ..., an)";

    public static MODE_SYN: string = "mode(a1, ..., an)";

    public static BASE_SYN: string = "base(b, d1, ..., dn)";

    public static NDIST_SYN: string = "ndist(v1, ..., vn)";

    public static IFF_DESC: string = "If function";

    public static MIN_DESC: string = "Minimum function";

    public static MAX_DESC: string = "Maximum function";

    public static CONT_FRAC_DESC: string = "Continued fraction";

    public static CONT_POL_DESC: string = "Continued polynomial";

    public static GCD_DESC: string = "Greatest common divisor";

    public static LCM_DESC: string = "Least common multiple";

    public static SUM_DESC: string = "Summation operator";

    public static PROD_DESC: string = "Multiplication";

    public static AVG_DESC: string = "Mean / average value";

    public static VAR_DESC: string = "Bias-corrected sample variance";

    public static STD_DESC: string = "Bias-corrected sample standard deviation";

    public static RND_LIST_DESC: string = "Random number from given list of numbers";

    public static COALESCE_DESC: string = "Returns the first non-NaN value";

    public static OR_DESC: string = "Logical disjunction (OR) - variadic";

    public static AND_DESC: string = "Logical conjunction (AND) - variadic";

    public static XOR_DESC: string = "Exclusive or (XOR) - variadic";

    public static ARGMIN_DESC: string = "Arguments / indices of the minima";

    public static ARGMAX_DESC: string = "Arguments / indices of the maxima";

    public static MEDIAN_DESC: string = "The sample median";

    public static MODE_DESC: string = "Mode - the value that appears most often";

    public static BASE_DESC: string = "Returns number in given numeral system base represented by list of digits";

    public static NDIST_DESC: string = "Number of distinct values";

    public static IFF_SINCE: string; public static IFF_SINCE_$LI$(): string { if (FunctionVariadic.IFF_SINCE == null) { FunctionVariadic.IFF_SINCE = mXparserConstants.NAMEv10; }  return FunctionVariadic.IFF_SINCE; }

    public static MIN_SINCE: string; public static MIN_SINCE_$LI$(): string { if (FunctionVariadic.MIN_SINCE == null) { FunctionVariadic.MIN_SINCE = mXparserConstants.NAMEv10; }  return FunctionVariadic.MIN_SINCE; }

    public static MAX_SINCE: string; public static MAX_SINCE_$LI$(): string { if (FunctionVariadic.MAX_SINCE == null) { FunctionVariadic.MAX_SINCE = mXparserConstants.NAMEv10; }  return FunctionVariadic.MAX_SINCE; }

    public static CONT_FRAC_SINCE: string; public static CONT_FRAC_SINCE_$LI$(): string { if (FunctionVariadic.CONT_FRAC_SINCE == null) { FunctionVariadic.CONT_FRAC_SINCE = mXparserConstants.NAMEv10; }  return FunctionVariadic.CONT_FRAC_SINCE; }

    public static CONT_POL_SINCE: string; public static CONT_POL_SINCE_$LI$(): string { if (FunctionVariadic.CONT_POL_SINCE == null) { FunctionVariadic.CONT_POL_SINCE = mXparserConstants.NAMEv10; }  return FunctionVariadic.CONT_POL_SINCE; }

    public static GCD_SINCE: string; public static GCD_SINCE_$LI$(): string { if (FunctionVariadic.GCD_SINCE == null) { FunctionVariadic.GCD_SINCE = mXparserConstants.NAMEv10; }  return FunctionVariadic.GCD_SINCE; }

    public static LCM_SINCE: string; public static LCM_SINCE_$LI$(): string { if (FunctionVariadic.LCM_SINCE == null) { FunctionVariadic.LCM_SINCE = mXparserConstants.NAMEv10; }  return FunctionVariadic.LCM_SINCE; }

    public static SUM_SINCE: string; public static SUM_SINCE_$LI$(): string { if (FunctionVariadic.SUM_SINCE == null) { FunctionVariadic.SUM_SINCE = mXparserConstants.NAMEv24; }  return FunctionVariadic.SUM_SINCE; }

    public static PROD_SINCE: string; public static PROD_SINCE_$LI$(): string { if (FunctionVariadic.PROD_SINCE == null) { FunctionVariadic.PROD_SINCE = mXparserConstants.NAMEv24; }  return FunctionVariadic.PROD_SINCE; }

    public static AVG_SINCE: string; public static AVG_SINCE_$LI$(): string { if (FunctionVariadic.AVG_SINCE == null) { FunctionVariadic.AVG_SINCE = mXparserConstants.NAMEv24; }  return FunctionVariadic.AVG_SINCE; }

    public static VAR_SINCE: string; public static VAR_SINCE_$LI$(): string { if (FunctionVariadic.VAR_SINCE == null) { FunctionVariadic.VAR_SINCE = mXparserConstants.NAMEv24; }  return FunctionVariadic.VAR_SINCE; }

    public static STD_SINCE: string; public static STD_SINCE_$LI$(): string { if (FunctionVariadic.STD_SINCE == null) { FunctionVariadic.STD_SINCE = mXparserConstants.NAMEv24; }  return FunctionVariadic.STD_SINCE; }

    public static RND_LIST_SINCE: string; public static RND_LIST_SINCE_$LI$(): string { if (FunctionVariadic.RND_LIST_SINCE == null) { FunctionVariadic.RND_LIST_SINCE = mXparserConstants.NAMEv30; }  return FunctionVariadic.RND_LIST_SINCE; }

    public static COALESCE_SINCE: string; public static COALESCE_SINCE_$LI$(): string { if (FunctionVariadic.COALESCE_SINCE == null) { FunctionVariadic.COALESCE_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.COALESCE_SINCE; }

    public static OR_SINCE: string; public static OR_SINCE_$LI$(): string { if (FunctionVariadic.OR_SINCE == null) { FunctionVariadic.OR_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.OR_SINCE; }

    public static AND_SINCE: string; public static AND_SINCE_$LI$(): string { if (FunctionVariadic.AND_SINCE == null) { FunctionVariadic.AND_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.AND_SINCE; }

    public static XOR_SINCE: string; public static XOR_SINCE_$LI$(): string { if (FunctionVariadic.XOR_SINCE == null) { FunctionVariadic.XOR_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.XOR_SINCE; }

    public static ARGMIN_SINCE: string; public static ARGMIN_SINCE_$LI$(): string { if (FunctionVariadic.ARGMIN_SINCE == null) { FunctionVariadic.ARGMIN_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.ARGMIN_SINCE; }

    public static ARGMAX_SINCE: string; public static ARGMAX_SINCE_$LI$(): string { if (FunctionVariadic.ARGMAX_SINCE == null) { FunctionVariadic.ARGMAX_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.ARGMAX_SINCE; }

    public static MEDIAN_SINCE: string; public static MEDIAN_SINCE_$LI$(): string { if (FunctionVariadic.MEDIAN_SINCE == null) { FunctionVariadic.MEDIAN_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.MEDIAN_SINCE; }

    public static MODE_SINCE: string; public static MODE_SINCE_$LI$(): string { if (FunctionVariadic.MODE_SINCE == null) { FunctionVariadic.MODE_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.MODE_SINCE; }

    public static BASE_SINCE: string; public static BASE_SINCE_$LI$(): string { if (FunctionVariadic.BASE_SINCE == null) { FunctionVariadic.BASE_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.BASE_SINCE; }

    public static NDIST_SINCE: string; public static NDIST_SINCE_$LI$(): string { if (FunctionVariadic.NDIST_SINCE == null) { FunctionVariadic.NDIST_SINCE = mXparserConstants.NAMEv41; }  return FunctionVariadic.NDIST_SINCE; }
}
FunctionVariadic["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.FunctionVariadic";