import { mXparserConstants } from '../mXparserConstants';

/**
 * Functions with 3 arguments - mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class Function3Arg {
    public static TYPE_ID: number = 6;

    public static TYPE_DESC: string = "3-args Function";

    public static IF_CONDITION_ID: number = 1;

    public static IF_ID: number = 2;

    public static CHI_ID: number = 3;

    public static CHI_LR_ID: number = 4;

    public static CHI_L_ID: number = 5;

    public static CHI_R_ID: number = 6;

    public static PDF_UNIFORM_CONT_ID: number = 7;

    public static CDF_UNIFORM_CONT_ID: number = 8;

    public static QNT_UNIFORM_CONT_ID: number = 9;

    public static PDF_NORMAL_ID: number = 10;

    public static CDF_NORMAL_ID: number = 11;

    public static QNT_NORMAL_ID: number = 12;

    public static DIGIT_ID: number = 13;

    public static INC_BETA_ID: number = 14;

    public static REG_BETA_ID: number = 15;

    public static IF_STR: string = "if";

    public static CHI_STR: string = "chi";

    public static CHI_LR_STR: string = "CHi";

    public static CHI_L_STR: string = "Chi";

    public static CHI_R_STR: string = "cHi";

    public static PDF_UNIFORM_CONT_STR: string = "pUni";

    public static CDF_UNIFORM_CONT_STR: string = "cUni";

    public static QNT_UNIFORM_CONT_STR: string = "qUni";

    public static PDF_NORMAL_STR: string = "pNor";

    public static CDF_NORMAL_STR: string = "cNor";

    public static QNT_NORMAL_STR: string = "qNor";

    public static DIGIT_STR: string = "dig";

    public static INC_BETA_STR: string = "BetaInc";

    public static REG_BETA_STR: string = "BetaReg";

    public static REG_BETA_I_STR: string = "BetaI";

    public static IF_SYN: string = "if( cond, expr-if-true, expr-if-false )";

    public static CHI_SYN: string = "chi(x, a, b)";

    public static CHI_LR_SYN: string = "CHi(x, a, b)";

    public static CHI_L_SYN: string = "Chi(x, a, b)";

    public static CHI_R_SYN: string = "cHi(x, a, b)";

    public static PDF_UNIFORM_CONT_SYN: string = "pUni(x, a, b)";

    public static CDF_UNIFORM_CONT_SYN: string = "cUni(x, a, b)";

    public static QNT_UNIFORM_CONT_SYN: string = "qUni(q, a, b)";

    public static PDF_NORMAL_SYN: string = "pNor(x, mean, stdv)";

    public static CDF_NORMAL_SYN: string = "cNor(x, mean, stdv)";

    public static QNT_NORMAL_SYN: string = "qNor(q, mean, stdv)";

    public static DIGIT_SYN: string = "dig(num, pos, base)";

    public static INC_BETA_SYN: string; public static INC_BETA_SYN_$LI$(): string { if (Function3Arg.INC_BETA_SYN == null) { Function3Arg.INC_BETA_SYN = Function3Arg.INC_BETA_STR + "(x,a,b)"; }  return Function3Arg.INC_BETA_SYN; }

    public static REG_BETA_SYN: string; public static REG_BETA_SYN_$LI$(): string { if (Function3Arg.REG_BETA_SYN == null) { Function3Arg.REG_BETA_SYN = Function3Arg.REG_BETA_STR + "(x,a,b)"; }  return Function3Arg.REG_BETA_SYN; }

    public static REG_BETA_I_SYN: string; public static REG_BETA_I_SYN_$LI$(): string { if (Function3Arg.REG_BETA_I_SYN == null) { Function3Arg.REG_BETA_I_SYN = Function3Arg.REG_BETA_I_STR + "(x,a,b)"; }  return Function3Arg.REG_BETA_I_SYN; }

    public static IF_DESC: string = "If function";

    public static CHI_DESC: string = "Characteristic function for x in (a,b)";

    public static CHI_LR_DESC: string = "Characteristic function for x in [a,b]";

    public static CHI_L_DESC: string = "Characteristic function for x in [a,b)";

    public static CHI_R_DESC: string = "Characteristic function for x in (a,b]";

    public static PDF_UNIFORM_CONT_DESC: string = "Probability distribution function - Uniform continuous distribution U(a,b)";

    public static CDF_UNIFORM_CONT_DESC: string = "Cumulative distribution function - Uniform continuous distribution U(a,b)";

    public static QNT_UNIFORM_CONT_DESC: string = "Quantile function (inverse cumulative distribution function) - Uniform continuous distribution U(a,b)";

    public static PDF_NORMAL_DESC: string = "Probability distribution function - Normal distribution N(m,s)";

    public static CDF_NORMAL_DESC: string = "Cumulative distribution function - Normal distribution N(m,s)";

    public static QNT_NORMAL_DESC: string = "Quantile function (inverse cumulative distribution function)";

    public static DIGIT_DESC: string = "Digit at position 1 ... n (left -> right) or 0 ... -(n-1) (right -> left) - numeral system with given base";

    public static INC_BETA_DESC: string = "The incomplete beta special function B(x; a, b), also called the incomplete Euler integral of the first kind";

    public static REG_BETA_DESC: string = "The regularized incomplete beta (or regularized beta) special function I(x; a, b), also called the regularized incomplete Euler integral of the first kind";

    public static IF_SINCE: string; public static IF_SINCE_$LI$(): string { if (Function3Arg.IF_SINCE == null) { Function3Arg.IF_SINCE = mXparserConstants.NAMEv10; }  return Function3Arg.IF_SINCE; }

    public static CHI_SINCE: string; public static CHI_SINCE_$LI$(): string { if (Function3Arg.CHI_SINCE == null) { Function3Arg.CHI_SINCE = mXparserConstants.NAMEv10; }  return Function3Arg.CHI_SINCE; }

    public static CHI_LR_SINCE: string; public static CHI_LR_SINCE_$LI$(): string { if (Function3Arg.CHI_LR_SINCE == null) { Function3Arg.CHI_LR_SINCE = mXparserConstants.NAMEv10; }  return Function3Arg.CHI_LR_SINCE; }

    public static CHI_L_SINCE: string; public static CHI_L_SINCE_$LI$(): string { if (Function3Arg.CHI_L_SINCE == null) { Function3Arg.CHI_L_SINCE = mXparserConstants.NAMEv10; }  return Function3Arg.CHI_L_SINCE; }

    public static CHI_R_SINCE: string; public static CHI_R_SINCE_$LI$(): string { if (Function3Arg.CHI_R_SINCE == null) { Function3Arg.CHI_R_SINCE = mXparserConstants.NAMEv10; }  return Function3Arg.CHI_R_SINCE; }

    public static PDF_UNIFORM_CONT_SINCE: string; public static PDF_UNIFORM_CONT_SINCE_$LI$(): string { if (Function3Arg.PDF_UNIFORM_CONT_SINCE == null) { Function3Arg.PDF_UNIFORM_CONT_SINCE = mXparserConstants.NAMEv30; }  return Function3Arg.PDF_UNIFORM_CONT_SINCE; }

    public static CDF_UNIFORM_CONT_SINCE: string; public static CDF_UNIFORM_CONT_SINCE_$LI$(): string { if (Function3Arg.CDF_UNIFORM_CONT_SINCE == null) { Function3Arg.CDF_UNIFORM_CONT_SINCE = mXparserConstants.NAMEv30; }  return Function3Arg.CDF_UNIFORM_CONT_SINCE; }

    public static QNT_UNIFORM_CONT_SINCE: string; public static QNT_UNIFORM_CONT_SINCE_$LI$(): string { if (Function3Arg.QNT_UNIFORM_CONT_SINCE == null) { Function3Arg.QNT_UNIFORM_CONT_SINCE = mXparserConstants.NAMEv30; }  return Function3Arg.QNT_UNIFORM_CONT_SINCE; }

    public static PDF_NORMAL_SINCE: string; public static PDF_NORMAL_SINCE_$LI$(): string { if (Function3Arg.PDF_NORMAL_SINCE == null) { Function3Arg.PDF_NORMAL_SINCE = mXparserConstants.NAMEv30; }  return Function3Arg.PDF_NORMAL_SINCE; }

    public static CDF_NORMAL_SINCE: string; public static CDF_NORMAL_SINCE_$LI$(): string { if (Function3Arg.CDF_NORMAL_SINCE == null) { Function3Arg.CDF_NORMAL_SINCE = mXparserConstants.NAMEv30; }  return Function3Arg.CDF_NORMAL_SINCE; }

    public static QNT_NORMAL_SINCE: string; public static QNT_NORMAL_SINCE_$LI$(): string { if (Function3Arg.QNT_NORMAL_SINCE == null) { Function3Arg.QNT_NORMAL_SINCE = mXparserConstants.NAMEv30; }  return Function3Arg.QNT_NORMAL_SINCE; }

    public static DIGIT_SINCE: string; public static DIGIT_SINCE_$LI$(): string { if (Function3Arg.DIGIT_SINCE == null) { Function3Arg.DIGIT_SINCE = mXparserConstants.NAMEv41; }  return Function3Arg.DIGIT_SINCE; }

    public static INC_BETA_SINCE: string; public static INC_BETA_SINCE_$LI$(): string { if (Function3Arg.INC_BETA_SINCE == null) { Function3Arg.INC_BETA_SINCE = mXparserConstants.NAMEv42; }  return Function3Arg.INC_BETA_SINCE; }

    public static REG_BETA_SINCE: string; public static REG_BETA_SINCE_$LI$(): string { if (Function3Arg.REG_BETA_SINCE == null) { Function3Arg.REG_BETA_SINCE = mXparserConstants.NAMEv42; }  return Function3Arg.REG_BETA_SINCE; }

    public static REG_BETA_I_SINCE: string; public static REG_BETA_I_SINCE_$LI$(): string { if (Function3Arg.REG_BETA_I_SINCE == null) { Function3Arg.REG_BETA_I_SINCE = mXparserConstants.NAMEv42; }  return Function3Arg.REG_BETA_I_SINCE; }
}
Function3Arg["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.Function3Arg";