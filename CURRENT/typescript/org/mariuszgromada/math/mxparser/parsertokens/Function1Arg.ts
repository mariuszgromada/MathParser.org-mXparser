/* Generated from Java with JSweet 3.0.0 - http://www.jsweet.org */
import { mXparserConstants } from '../mXparserConstants';

/**
 * Unary functions (1 argument) - mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class Function1Arg {
    public static TYPE_ID: number = 4;

    public static TYPE_DESC: string = "Unary Function";

    public static SIN_ID: number = 1;

    public static COS_ID: number = 2;

    public static TAN_ID: number = 3;

    public static CTAN_ID: number = 4;

    public static SEC_ID: number = 5;

    public static COSEC_ID: number = 6;

    public static ASIN_ID: number = 7;

    public static ACOS_ID: number = 8;

    public static ATAN_ID: number = 9;

    public static ACTAN_ID: number = 10;

    public static LN_ID: number = 11;

    public static LOG2_ID: number = 12;

    public static LOG10_ID: number = 13;

    public static RAD_ID: number = 14;

    public static EXP_ID: number = 15;

    public static SQRT_ID: number = 16;

    public static SINH_ID: number = 17;

    public static COSH_ID: number = 18;

    public static TANH_ID: number = 19;

    public static COTH_ID: number = 20;

    public static SECH_ID: number = 21;

    public static CSCH_ID: number = 22;

    public static DEG_ID: number = 23;

    public static ABS_ID: number = 24;

    public static SGN_ID: number = 25;

    public static FLOOR_ID: number = 26;

    public static CEIL_ID: number = 27;

    public static NOT_ID: number = 29;

    public static ARSINH_ID: number = 30;

    public static ARCOSH_ID: number = 31;

    public static ARTANH_ID: number = 32;

    public static ARCOTH_ID: number = 33;

    public static ARSECH_ID: number = 34;

    public static ARCSCH_ID: number = 35;

    public static SA_ID: number = 36;

    public static SINC_ID: number = 37;

    public static BELL_NUMBER_ID: number = 38;

    public static LUCAS_NUMBER_ID: number = 39;

    public static FIBONACCI_NUMBER_ID: number = 40;

    public static HARMONIC_NUMBER_ID: number = 41;

    public static IS_PRIME_ID: number = 42;

    public static PRIME_COUNT_ID: number = 43;

    public static EXP_INT_ID: number = 44;

    public static LOG_INT_ID: number = 45;

    public static OFF_LOG_INT_ID: number = 46;

    public static GAUSS_ERF_ID: number = 47;

    public static GAUSS_ERFC_ID: number = 48;

    public static GAUSS_ERF_INV_ID: number = 49;

    public static GAUSS_ERFC_INV_ID: number = 50;

    public static ULP_ID: number = 51;

    public static ISNAN_ID: number = 52;

    public static NDIG10_ID: number = 53;

    public static NFACT_ID: number = 54;

    public static ARCSEC_ID: number = 55;

    public static ARCCSC_ID: number = 56;

    public static GAMMA_ID: number = 57;

    public static LAMBERT_W0_ID: number = 58;

    public static LAMBERT_W1_ID: number = 59;

    public static SGN_GAMMA_ID: number = 60;

    public static LOG_GAMMA_ID: number = 61;

    public static DI_GAMMA_ID: number = 62;

    public static PARAM_ID: number = 63;

    public static SIN_STR: string = "sin";

    public static COS_STR: string = "cos";

    public static TAN_STR: string = "tan";

    public static TG_STR: string = "tg";

    public static CTAN_STR: string = "ctan";

    public static CTG_STR: string = "ctg";

    public static COT_STR: string = "cot";

    public static SEC_STR: string = "sec";

    public static COSEC_STR: string = "cosec";

    public static CSC_STR: string = "csc";

    public static ASIN_STR: string = "asin";

    public static ARSIN_STR: string = "arsin";

    public static ARCSIN_STR: string = "arcsin";

    public static ACOS_STR: string = "acos";

    public static ARCOS_STR: string = "arcos";

    public static ARCCOS_STR: string = "arccos";

    public static ATAN_STR: string = "atan";

    public static ARCTAN_STR: string = "arctan";

    public static ATG_STR: string = "atg";

    public static ARCTG_STR: string = "arctg";

    public static ACTAN_STR: string = "actan";

    public static ARCCTAN_STR: string = "arcctan";

    public static ACTG_STR: string = "actg";

    public static ARCCTG_STR: string = "arcctg";

    public static ACOT_STR: string = "acot";

    public static ARCCOT_STR: string = "arccot";

    public static LN_STR: string = "ln";

    public static LOG2_STR: string = "log2";

    public static LOG10_STR: string = "log10";

    public static RAD_STR: string = "rad";

    public static EXP_STR: string = "exp";

    public static SQRT_STR: string = "sqrt";

    public static SINH_STR: string = "sinh";

    public static COSH_STR: string = "cosh";

    public static TANH_STR: string = "tanh";

    public static TGH_STR: string = "tgh";

    public static CTANH_STR: string = "ctanh";

    public static COTH_STR: string = "coth";

    public static CTGH_STR: string = "ctgh";

    public static SECH_STR: string = "sech";

    public static CSCH_STR: string = "csch";

    public static COSECH_STR: string = "cosech";

    public static DEG_STR: string = "deg";

    public static ABS_STR: string = "abs";

    public static SGN_STR: string = "sgn";

    public static FLOOR_STR: string = "floor";

    public static CEIL_STR: string = "ceil";

    public static NOT_STR: string = "not";

    public static ASINH_STR: string = "asinh";

    public static ARSINH_STR: string = "arsinh";

    public static ARCSINH_STR: string = "arcsinh";

    public static ACOSH_STR: string = "acosh";

    public static ARCOSH_STR: string = "arcosh";

    public static ARCCOSH_STR: string = "arccosh";

    public static ATANH_STR: string = "atanh";

    public static ARCTANH_STR: string = "arctanh";

    public static ATGH_STR: string = "atgh";

    public static ARCTGH_STR: string = "arctgh";

    public static ACTANH_STR: string = "actanh";

    public static ARCCTANH_STR: string = "arcctanh";

    public static ACOTH_STR: string = "acoth";

    public static ARCOTH_STR: string = "arcoth";

    public static ARCCOTH_STR: string = "arccoth";

    public static ACTGH_STR: string = "actgh";

    public static ARCCTGH_STR: string = "arcctgh";

    public static ASECH_STR: string = "asech";

    public static ARSECH_STR: string = "arsech";

    public static ARCSECH_STR: string = "arcsech";

    public static ACSCH_STR: string = "acsch";

    public static ARCSCH_STR: string = "arcsch";

    public static ARCCSCH_STR: string = "arccsch";

    public static ACOSECH_STR: string = "acosech";

    public static ARCOSECH_STR: string = "arcosech";

    public static ARCCOSECH_STR: string = "arccosech";

    public static SA_STR: string = "sinc";

    public static SA1_STR: string = "Sa";

    public static SINC_STR: string = "Sinc";

    public static BELL_NUMBER_STR: string = "Bell";

    public static LUCAS_NUMBER_STR: string = "Luc";

    public static FIBONACCI_NUMBER_STR: string = "Fib";

    public static HARMONIC_NUMBER_STR: string = "harm";

    public static IS_PRIME_STR: string = "ispr";

    public static PRIME_COUNT_STR: string = "Pi";

    public static EXP_INT_STR: string = "Ei";

    public static LOG_INT_STR: string = "li";

    public static OFF_LOG_INT_STR: string = "Li";

    public static GAUSS_ERF_STR: string = "erf";

    public static GAUSS_ERFC_STR: string = "erfc";

    public static GAUSS_ERF_INV_STR: string = "erfInv";

    public static GAUSS_ERFC_INV_STR: string = "erfcInv";

    public static ULP_STR: string = "ulp";

    public static ISNAN_STR: string = "isNaN";

    public static NDIG10_STR: string = "ndig10";

    public static NFACT_STR: string = "nfact";

    public static ARCSEC_STR: string = "arcsec";

    public static ARCCSC_STR: string = "arccsc";

    public static GAMMA_STR: string = "Gamma";

    public static LAMBERT_W0_STR: string = "LambW0";

    public static LAMBERT_W1_STR: string = "LambW1";

    public static SGN_GAMMA_STR: string = "sgnGamma";

    public static LOG_GAMMA_STR: string = "logGamma";

    public static DI_GAMMA_STR: string = "diGamma";

    public static PARAM_STR: string = "par";

    public static SIN_SYN: string; public static SIN_SYN_$LI$(): string { if (Function1Arg.SIN_SYN == null) { Function1Arg.SIN_SYN = Function1Arg.SIN_STR + "(x)"; }  return Function1Arg.SIN_SYN; }

    public static COS_SYN: string; public static COS_SYN_$LI$(): string { if (Function1Arg.COS_SYN == null) { Function1Arg.COS_SYN = Function1Arg.COS_STR + "(x)"; }  return Function1Arg.COS_SYN; }

    public static TAN_SYN: string; public static TAN_SYN_$LI$(): string { if (Function1Arg.TAN_SYN == null) { Function1Arg.TAN_SYN = Function1Arg.TAN_STR + "(x)"; }  return Function1Arg.TAN_SYN; }

    public static TG_SYN: string; public static TG_SYN_$LI$(): string { if (Function1Arg.TG_SYN == null) { Function1Arg.TG_SYN = Function1Arg.TG_STR + "(x)"; }  return Function1Arg.TG_SYN; }

    public static CTAN_SYN: string; public static CTAN_SYN_$LI$(): string { if (Function1Arg.CTAN_SYN == null) { Function1Arg.CTAN_SYN = Function1Arg.CTAN_STR + "(x)"; }  return Function1Arg.CTAN_SYN; }

    public static CTG_SYN: string; public static CTG_SYN_$LI$(): string { if (Function1Arg.CTG_SYN == null) { Function1Arg.CTG_SYN = Function1Arg.CTG_STR + "(x)"; }  return Function1Arg.CTG_SYN; }

    public static COT_SYN: string; public static COT_SYN_$LI$(): string { if (Function1Arg.COT_SYN == null) { Function1Arg.COT_SYN = Function1Arg.COT_STR + "(x)"; }  return Function1Arg.COT_SYN; }

    public static SEC_SYN: string; public static SEC_SYN_$LI$(): string { if (Function1Arg.SEC_SYN == null) { Function1Arg.SEC_SYN = Function1Arg.SEC_STR + "(x)"; }  return Function1Arg.SEC_SYN; }

    public static COSEC_SYN: string; public static COSEC_SYN_$LI$(): string { if (Function1Arg.COSEC_SYN == null) { Function1Arg.COSEC_SYN = Function1Arg.COSEC_STR + "(x)"; }  return Function1Arg.COSEC_SYN; }

    public static CSC_SYN: string; public static CSC_SYN_$LI$(): string { if (Function1Arg.CSC_SYN == null) { Function1Arg.CSC_SYN = Function1Arg.CSC_STR + "(x)"; }  return Function1Arg.CSC_SYN; }

    public static ASIN_SYN: string; public static ASIN_SYN_$LI$(): string { if (Function1Arg.ASIN_SYN == null) { Function1Arg.ASIN_SYN = Function1Arg.ASIN_STR + "(x)"; }  return Function1Arg.ASIN_SYN; }

    public static ARSIN_SYN: string; public static ARSIN_SYN_$LI$(): string { if (Function1Arg.ARSIN_SYN == null) { Function1Arg.ARSIN_SYN = Function1Arg.ARSIN_STR + "(x)"; }  return Function1Arg.ARSIN_SYN; }

    public static ARCSIN_SYN: string; public static ARCSIN_SYN_$LI$(): string { if (Function1Arg.ARCSIN_SYN == null) { Function1Arg.ARCSIN_SYN = Function1Arg.ARCSIN_STR + "(x)"; }  return Function1Arg.ARCSIN_SYN; }

    public static ACOS_SYN: string; public static ACOS_SYN_$LI$(): string { if (Function1Arg.ACOS_SYN == null) { Function1Arg.ACOS_SYN = Function1Arg.ACOS_STR + "(x)"; }  return Function1Arg.ACOS_SYN; }

    public static ARCOS_SYN: string; public static ARCOS_SYN_$LI$(): string { if (Function1Arg.ARCOS_SYN == null) { Function1Arg.ARCOS_SYN = Function1Arg.ARCOS_STR + "(x)"; }  return Function1Arg.ARCOS_SYN; }

    public static ARCCOS_SYN: string; public static ARCCOS_SYN_$LI$(): string { if (Function1Arg.ARCCOS_SYN == null) { Function1Arg.ARCCOS_SYN = Function1Arg.ARCCOS_STR + "(x)"; }  return Function1Arg.ARCCOS_SYN; }

    public static ATAN_SYN: string; public static ATAN_SYN_$LI$(): string { if (Function1Arg.ATAN_SYN == null) { Function1Arg.ATAN_SYN = Function1Arg.ATAN_STR + "(x)"; }  return Function1Arg.ATAN_SYN; }

    public static ARCTAN_SYN: string; public static ARCTAN_SYN_$LI$(): string { if (Function1Arg.ARCTAN_SYN == null) { Function1Arg.ARCTAN_SYN = Function1Arg.ARCTAN_STR + "(x)"; }  return Function1Arg.ARCTAN_SYN; }

    public static ATG_SYN: string; public static ATG_SYN_$LI$(): string { if (Function1Arg.ATG_SYN == null) { Function1Arg.ATG_SYN = Function1Arg.ATG_STR + "(x)"; }  return Function1Arg.ATG_SYN; }

    public static ARCTG_SYN: string; public static ARCTG_SYN_$LI$(): string { if (Function1Arg.ARCTG_SYN == null) { Function1Arg.ARCTG_SYN = Function1Arg.ARCTG_STR + "(x)"; }  return Function1Arg.ARCTG_SYN; }

    public static ACTAN_SYN: string; public static ACTAN_SYN_$LI$(): string { if (Function1Arg.ACTAN_SYN == null) { Function1Arg.ACTAN_SYN = Function1Arg.ACTAN_STR + "(x)"; }  return Function1Arg.ACTAN_SYN; }

    public static ARCCTAN_SYN: string; public static ARCCTAN_SYN_$LI$(): string { if (Function1Arg.ARCCTAN_SYN == null) { Function1Arg.ARCCTAN_SYN = Function1Arg.ARCCTAN_STR + "(x)"; }  return Function1Arg.ARCCTAN_SYN; }

    public static ACTG_SYN: string; public static ACTG_SYN_$LI$(): string { if (Function1Arg.ACTG_SYN == null) { Function1Arg.ACTG_SYN = Function1Arg.ACTG_STR + "(x)"; }  return Function1Arg.ACTG_SYN; }

    public static ARCCTG_SYN: string; public static ARCCTG_SYN_$LI$(): string { if (Function1Arg.ARCCTG_SYN == null) { Function1Arg.ARCCTG_SYN = Function1Arg.ARCCTG_STR + "(x)"; }  return Function1Arg.ARCCTG_SYN; }

    public static ACOT_SYN: string; public static ACOT_SYN_$LI$(): string { if (Function1Arg.ACOT_SYN == null) { Function1Arg.ACOT_SYN = Function1Arg.ACOT_STR + "(x)"; }  return Function1Arg.ACOT_SYN; }

    public static ARCCOT_SYN: string; public static ARCCOT_SYN_$LI$(): string { if (Function1Arg.ARCCOT_SYN == null) { Function1Arg.ARCCOT_SYN = Function1Arg.ARCCOT_STR + "(x)"; }  return Function1Arg.ARCCOT_SYN; }

    public static LN_SYN: string; public static LN_SYN_$LI$(): string { if (Function1Arg.LN_SYN == null) { Function1Arg.LN_SYN = Function1Arg.LN_STR + "(x)"; }  return Function1Arg.LN_SYN; }

    public static LOG2_SYN: string; public static LOG2_SYN_$LI$(): string { if (Function1Arg.LOG2_SYN == null) { Function1Arg.LOG2_SYN = Function1Arg.LOG2_STR + "(x)"; }  return Function1Arg.LOG2_SYN; }

    public static LOG10_SYN: string; public static LOG10_SYN_$LI$(): string { if (Function1Arg.LOG10_SYN == null) { Function1Arg.LOG10_SYN = Function1Arg.LOG10_STR + "(x)"; }  return Function1Arg.LOG10_SYN; }

    public static RAD_SYN: string; public static RAD_SYN_$LI$(): string { if (Function1Arg.RAD_SYN == null) { Function1Arg.RAD_SYN = Function1Arg.RAD_STR + "(x)"; }  return Function1Arg.RAD_SYN; }

    public static EXP_SYN: string; public static EXP_SYN_$LI$(): string { if (Function1Arg.EXP_SYN == null) { Function1Arg.EXP_SYN = Function1Arg.EXP_STR + "(x)"; }  return Function1Arg.EXP_SYN; }

    public static SQRT_SYN: string; public static SQRT_SYN_$LI$(): string { if (Function1Arg.SQRT_SYN == null) { Function1Arg.SQRT_SYN = Function1Arg.SQRT_STR + "(x)"; }  return Function1Arg.SQRT_SYN; }

    public static SINH_SYN: string; public static SINH_SYN_$LI$(): string { if (Function1Arg.SINH_SYN == null) { Function1Arg.SINH_SYN = Function1Arg.SINH_STR + "(x)"; }  return Function1Arg.SINH_SYN; }

    public static COSH_SYN: string; public static COSH_SYN_$LI$(): string { if (Function1Arg.COSH_SYN == null) { Function1Arg.COSH_SYN = Function1Arg.COSH_STR + "(x)"; }  return Function1Arg.COSH_SYN; }

    public static TANH_SYN: string; public static TANH_SYN_$LI$(): string { if (Function1Arg.TANH_SYN == null) { Function1Arg.TANH_SYN = Function1Arg.TANH_STR + "(x)"; }  return Function1Arg.TANH_SYN; }

    public static TGH_SYN: string; public static TGH_SYN_$LI$(): string { if (Function1Arg.TGH_SYN == null) { Function1Arg.TGH_SYN = Function1Arg.TGH_STR + "(x)"; }  return Function1Arg.TGH_SYN; }

    public static CTANH_SYN: string; public static CTANH_SYN_$LI$(): string { if (Function1Arg.CTANH_SYN == null) { Function1Arg.CTANH_SYN = Function1Arg.CTANH_STR + "(x)"; }  return Function1Arg.CTANH_SYN; }

    public static COTH_SYN: string; public static COTH_SYN_$LI$(): string { if (Function1Arg.COTH_SYN == null) { Function1Arg.COTH_SYN = Function1Arg.COTH_STR + "(x)"; }  return Function1Arg.COTH_SYN; }

    public static CTGH_SYN: string; public static CTGH_SYN_$LI$(): string { if (Function1Arg.CTGH_SYN == null) { Function1Arg.CTGH_SYN = Function1Arg.CTGH_STR + "(x)"; }  return Function1Arg.CTGH_SYN; }

    public static SECH_SYN: string; public static SECH_SYN_$LI$(): string { if (Function1Arg.SECH_SYN == null) { Function1Arg.SECH_SYN = Function1Arg.SECH_STR + "(x)"; }  return Function1Arg.SECH_SYN; }

    public static CSCH_SYN: string; public static CSCH_SYN_$LI$(): string { if (Function1Arg.CSCH_SYN == null) { Function1Arg.CSCH_SYN = Function1Arg.CSCH_STR + "(x)"; }  return Function1Arg.CSCH_SYN; }

    public static COSECH_SYN: string; public static COSECH_SYN_$LI$(): string { if (Function1Arg.COSECH_SYN == null) { Function1Arg.COSECH_SYN = Function1Arg.COSECH_STR + "(x)"; }  return Function1Arg.COSECH_SYN; }

    public static DEG_SYN: string; public static DEG_SYN_$LI$(): string { if (Function1Arg.DEG_SYN == null) { Function1Arg.DEG_SYN = Function1Arg.DEG_STR + "(x)"; }  return Function1Arg.DEG_SYN; }

    public static ABS_SYN: string; public static ABS_SYN_$LI$(): string { if (Function1Arg.ABS_SYN == null) { Function1Arg.ABS_SYN = Function1Arg.ABS_STR + "(x)"; }  return Function1Arg.ABS_SYN; }

    public static SGN_SYN: string; public static SGN_SYN_$LI$(): string { if (Function1Arg.SGN_SYN == null) { Function1Arg.SGN_SYN = Function1Arg.SGN_STR + "(x)"; }  return Function1Arg.SGN_SYN; }

    public static FLOOR_SYN: string; public static FLOOR_SYN_$LI$(): string { if (Function1Arg.FLOOR_SYN == null) { Function1Arg.FLOOR_SYN = Function1Arg.FLOOR_STR + "(x)"; }  return Function1Arg.FLOOR_SYN; }

    public static CEIL_SYN: string; public static CEIL_SYN_$LI$(): string { if (Function1Arg.CEIL_SYN == null) { Function1Arg.CEIL_SYN = Function1Arg.CEIL_STR + "(x)"; }  return Function1Arg.CEIL_SYN; }

    public static NOT_SYN: string; public static NOT_SYN_$LI$(): string { if (Function1Arg.NOT_SYN == null) { Function1Arg.NOT_SYN = Function1Arg.NOT_STR + "(x)"; }  return Function1Arg.NOT_SYN; }

    public static ASINH_SYN: string; public static ASINH_SYN_$LI$(): string { if (Function1Arg.ASINH_SYN == null) { Function1Arg.ASINH_SYN = Function1Arg.ASINH_STR + "(x)"; }  return Function1Arg.ASINH_SYN; }

    public static ARSINH_SYN: string; public static ARSINH_SYN_$LI$(): string { if (Function1Arg.ARSINH_SYN == null) { Function1Arg.ARSINH_SYN = Function1Arg.ARSINH_STR + "(x)"; }  return Function1Arg.ARSINH_SYN; }

    public static ARCSINH_SYN: string; public static ARCSINH_SYN_$LI$(): string { if (Function1Arg.ARCSINH_SYN == null) { Function1Arg.ARCSINH_SYN = Function1Arg.ARCSINH_STR + "(x)"; }  return Function1Arg.ARCSINH_SYN; }

    public static ACOSH_SYN: string; public static ACOSH_SYN_$LI$(): string { if (Function1Arg.ACOSH_SYN == null) { Function1Arg.ACOSH_SYN = Function1Arg.ACOSH_STR + "(x)"; }  return Function1Arg.ACOSH_SYN; }

    public static ARCOSH_SYN: string; public static ARCOSH_SYN_$LI$(): string { if (Function1Arg.ARCOSH_SYN == null) { Function1Arg.ARCOSH_SYN = Function1Arg.ARCOSH_STR + "(x)"; }  return Function1Arg.ARCOSH_SYN; }

    public static ARCCOSH_SYN: string; public static ARCCOSH_SYN_$LI$(): string { if (Function1Arg.ARCCOSH_SYN == null) { Function1Arg.ARCCOSH_SYN = Function1Arg.ARCCOSH_STR + "(x)"; }  return Function1Arg.ARCCOSH_SYN; }

    public static ATANH_SYN: string; public static ATANH_SYN_$LI$(): string { if (Function1Arg.ATANH_SYN == null) { Function1Arg.ATANH_SYN = Function1Arg.ATANH_STR + "(x)"; }  return Function1Arg.ATANH_SYN; }

    public static ARCTANH_SYN: string; public static ARCTANH_SYN_$LI$(): string { if (Function1Arg.ARCTANH_SYN == null) { Function1Arg.ARCTANH_SYN = Function1Arg.ARCTANH_STR + "(x)"; }  return Function1Arg.ARCTANH_SYN; }

    public static ATGH_SYN: string; public static ATGH_SYN_$LI$(): string { if (Function1Arg.ATGH_SYN == null) { Function1Arg.ATGH_SYN = Function1Arg.ATGH_STR + "(x)"; }  return Function1Arg.ATGH_SYN; }

    public static ARCTGH_SYN: string; public static ARCTGH_SYN_$LI$(): string { if (Function1Arg.ARCTGH_SYN == null) { Function1Arg.ARCTGH_SYN = Function1Arg.ARCTGH_STR + "(x)"; }  return Function1Arg.ARCTGH_SYN; }

    public static ACTANH_SYN: string; public static ACTANH_SYN_$LI$(): string { if (Function1Arg.ACTANH_SYN == null) { Function1Arg.ACTANH_SYN = Function1Arg.ACTANH_STR + "(x)"; }  return Function1Arg.ACTANH_SYN; }

    public static ARCCTANH_SYN: string; public static ARCCTANH_SYN_$LI$(): string { if (Function1Arg.ARCCTANH_SYN == null) { Function1Arg.ARCCTANH_SYN = Function1Arg.ARCCTANH_STR + "(x)"; }  return Function1Arg.ARCCTANH_SYN; }

    public static ACOTH_SYN: string; public static ACOTH_SYN_$LI$(): string { if (Function1Arg.ACOTH_SYN == null) { Function1Arg.ACOTH_SYN = Function1Arg.ACOTH_STR + "(x)"; }  return Function1Arg.ACOTH_SYN; }

    public static ARCOTH_SYN: string; public static ARCOTH_SYN_$LI$(): string { if (Function1Arg.ARCOTH_SYN == null) { Function1Arg.ARCOTH_SYN = Function1Arg.ARCOTH_STR + "(x)"; }  return Function1Arg.ARCOTH_SYN; }

    public static ARCCOTH_SYN: string; public static ARCCOTH_SYN_$LI$(): string { if (Function1Arg.ARCCOTH_SYN == null) { Function1Arg.ARCCOTH_SYN = Function1Arg.ARCCOTH_STR + "(x)"; }  return Function1Arg.ARCCOTH_SYN; }

    public static ACTGH_SYN: string; public static ACTGH_SYN_$LI$(): string { if (Function1Arg.ACTGH_SYN == null) { Function1Arg.ACTGH_SYN = Function1Arg.ACTGH_STR + "(x)"; }  return Function1Arg.ACTGH_SYN; }

    public static ARCCTGH_SYN: string; public static ARCCTGH_SYN_$LI$(): string { if (Function1Arg.ARCCTGH_SYN == null) { Function1Arg.ARCCTGH_SYN = Function1Arg.ARCCTGH_STR + "(x)"; }  return Function1Arg.ARCCTGH_SYN; }

    public static ASECH_SYN: string; public static ASECH_SYN_$LI$(): string { if (Function1Arg.ASECH_SYN == null) { Function1Arg.ASECH_SYN = Function1Arg.ASECH_STR + "(x)"; }  return Function1Arg.ASECH_SYN; }

    public static ARSECH_SYN: string; public static ARSECH_SYN_$LI$(): string { if (Function1Arg.ARSECH_SYN == null) { Function1Arg.ARSECH_SYN = Function1Arg.ARSECH_STR + "(x)"; }  return Function1Arg.ARSECH_SYN; }

    public static ARCSECH_SYN: string; public static ARCSECH_SYN_$LI$(): string { if (Function1Arg.ARCSECH_SYN == null) { Function1Arg.ARCSECH_SYN = Function1Arg.ARCSECH_STR + "(x)"; }  return Function1Arg.ARCSECH_SYN; }

    public static ACSCH_SYN: string; public static ACSCH_SYN_$LI$(): string { if (Function1Arg.ACSCH_SYN == null) { Function1Arg.ACSCH_SYN = Function1Arg.ACSCH_STR + "(x)"; }  return Function1Arg.ACSCH_SYN; }

    public static ARCSCH_SYN: string; public static ARCSCH_SYN_$LI$(): string { if (Function1Arg.ARCSCH_SYN == null) { Function1Arg.ARCSCH_SYN = Function1Arg.ARCSCH_STR + "(x)"; }  return Function1Arg.ARCSCH_SYN; }

    public static ARCCSCH_SYN: string; public static ARCCSCH_SYN_$LI$(): string { if (Function1Arg.ARCCSCH_SYN == null) { Function1Arg.ARCCSCH_SYN = Function1Arg.ARCCSCH_STR + "(x)"; }  return Function1Arg.ARCCSCH_SYN; }

    public static ACOSECH_SYN: string; public static ACOSECH_SYN_$LI$(): string { if (Function1Arg.ACOSECH_SYN == null) { Function1Arg.ACOSECH_SYN = Function1Arg.ACOSECH_STR + "(x)"; }  return Function1Arg.ACOSECH_SYN; }

    public static ARCOSECH_SYN: string; public static ARCOSECH_SYN_$LI$(): string { if (Function1Arg.ARCOSECH_SYN == null) { Function1Arg.ARCOSECH_SYN = Function1Arg.ARCOSECH_STR + "(x)"; }  return Function1Arg.ARCOSECH_SYN; }

    public static ARCCOSECH_SYN: string; public static ARCCOSECH_SYN_$LI$(): string { if (Function1Arg.ARCCOSECH_SYN == null) { Function1Arg.ARCCOSECH_SYN = Function1Arg.ARCCOSECH_STR + "(x)"; }  return Function1Arg.ARCCOSECH_SYN; }

    public static SA_SYN: string; public static SA_SYN_$LI$(): string { if (Function1Arg.SA_SYN == null) { Function1Arg.SA_SYN = Function1Arg.SA_STR + "(x)"; }  return Function1Arg.SA_SYN; }

    public static SA1_SYN: string; public static SA1_SYN_$LI$(): string { if (Function1Arg.SA1_SYN == null) { Function1Arg.SA1_SYN = Function1Arg.SA1_STR + "(x)"; }  return Function1Arg.SA1_SYN; }

    public static SINC_SYN: string; public static SINC_SYN_$LI$(): string { if (Function1Arg.SINC_SYN == null) { Function1Arg.SINC_SYN = Function1Arg.SINC_STR + "(x)"; }  return Function1Arg.SINC_SYN; }

    public static BELL_NUMBER_SYN: string; public static BELL_NUMBER_SYN_$LI$(): string { if (Function1Arg.BELL_NUMBER_SYN == null) { Function1Arg.BELL_NUMBER_SYN = Function1Arg.BELL_NUMBER_STR + "(n)"; }  return Function1Arg.BELL_NUMBER_SYN; }

    public static LUCAS_NUMBER_SYN: string; public static LUCAS_NUMBER_SYN_$LI$(): string { if (Function1Arg.LUCAS_NUMBER_SYN == null) { Function1Arg.LUCAS_NUMBER_SYN = Function1Arg.LUCAS_NUMBER_STR + "(n)"; }  return Function1Arg.LUCAS_NUMBER_SYN; }

    public static FIBONACCI_NUMBER_SYN: string; public static FIBONACCI_NUMBER_SYN_$LI$(): string { if (Function1Arg.FIBONACCI_NUMBER_SYN == null) { Function1Arg.FIBONACCI_NUMBER_SYN = Function1Arg.FIBONACCI_NUMBER_STR + "(n)"; }  return Function1Arg.FIBONACCI_NUMBER_SYN; }

    public static HARMONIC_NUMBER_SYN: string; public static HARMONIC_NUMBER_SYN_$LI$(): string { if (Function1Arg.HARMONIC_NUMBER_SYN == null) { Function1Arg.HARMONIC_NUMBER_SYN = Function1Arg.HARMONIC_NUMBER_STR + "(n)"; }  return Function1Arg.HARMONIC_NUMBER_SYN; }

    public static IS_PRIME_SYN: string; public static IS_PRIME_SYN_$LI$(): string { if (Function1Arg.IS_PRIME_SYN == null) { Function1Arg.IS_PRIME_SYN = Function1Arg.IS_PRIME_STR + "(n)"; }  return Function1Arg.IS_PRIME_SYN; }

    public static PRIME_COUNT_SYN: string; public static PRIME_COUNT_SYN_$LI$(): string { if (Function1Arg.PRIME_COUNT_SYN == null) { Function1Arg.PRIME_COUNT_SYN = Function1Arg.PRIME_COUNT_STR + "(n)"; }  return Function1Arg.PRIME_COUNT_SYN; }

    public static EXP_INT_SYN: string; public static EXP_INT_SYN_$LI$(): string { if (Function1Arg.EXP_INT_SYN == null) { Function1Arg.EXP_INT_SYN = Function1Arg.EXP_INT_STR + "(x)"; }  return Function1Arg.EXP_INT_SYN; }

    public static LOG_INT_SYN: string; public static LOG_INT_SYN_$LI$(): string { if (Function1Arg.LOG_INT_SYN == null) { Function1Arg.LOG_INT_SYN = Function1Arg.LOG_INT_STR + "(x)"; }  return Function1Arg.LOG_INT_SYN; }

    public static OFF_LOG_INT_SYN: string; public static OFF_LOG_INT_SYN_$LI$(): string { if (Function1Arg.OFF_LOG_INT_SYN == null) { Function1Arg.OFF_LOG_INT_SYN = Function1Arg.OFF_LOG_INT_STR + "(x)"; }  return Function1Arg.OFF_LOG_INT_SYN; }

    public static GAUSS_ERF_SYN: string; public static GAUSS_ERF_SYN_$LI$(): string { if (Function1Arg.GAUSS_ERF_SYN == null) { Function1Arg.GAUSS_ERF_SYN = Function1Arg.GAUSS_ERF_STR + "(x)"; }  return Function1Arg.GAUSS_ERF_SYN; }

    public static GAUSS_ERFC_SYN: string; public static GAUSS_ERFC_SYN_$LI$(): string { if (Function1Arg.GAUSS_ERFC_SYN == null) { Function1Arg.GAUSS_ERFC_SYN = Function1Arg.GAUSS_ERFC_STR + "(x)"; }  return Function1Arg.GAUSS_ERFC_SYN; }

    public static GAUSS_ERF_INV_SYN: string; public static GAUSS_ERF_INV_SYN_$LI$(): string { if (Function1Arg.GAUSS_ERF_INV_SYN == null) { Function1Arg.GAUSS_ERF_INV_SYN = Function1Arg.GAUSS_ERF_INV_STR + "(x)"; }  return Function1Arg.GAUSS_ERF_INV_SYN; }

    public static GAUSS_ERFC_INV_SYN: string; public static GAUSS_ERFC_INV_SYN_$LI$(): string { if (Function1Arg.GAUSS_ERFC_INV_SYN == null) { Function1Arg.GAUSS_ERFC_INV_SYN = Function1Arg.GAUSS_ERFC_INV_STR + "(x)"; }  return Function1Arg.GAUSS_ERFC_INV_SYN; }

    public static ULP_SYN: string; public static ULP_SYN_$LI$(): string { if (Function1Arg.ULP_SYN == null) { Function1Arg.ULP_SYN = Function1Arg.ULP_STR + "(x)"; }  return Function1Arg.ULP_SYN; }

    public static ISNAN_SYN: string; public static ISNAN_SYN_$LI$(): string { if (Function1Arg.ISNAN_SYN == null) { Function1Arg.ISNAN_SYN = Function1Arg.ISNAN_STR + "(x)"; }  return Function1Arg.ISNAN_SYN; }

    public static NDIG10_SYN: string; public static NDIG10_SYN_$LI$(): string { if (Function1Arg.NDIG10_SYN == null) { Function1Arg.NDIG10_SYN = Function1Arg.NDIG10_STR + "(x)"; }  return Function1Arg.NDIG10_SYN; }

    public static NFACT_SYN: string; public static NFACT_SYN_$LI$(): string { if (Function1Arg.NFACT_SYN == null) { Function1Arg.NFACT_SYN = Function1Arg.NFACT_STR + "(x)"; }  return Function1Arg.NFACT_SYN; }

    public static ARCSEC_SYN: string; public static ARCSEC_SYN_$LI$(): string { if (Function1Arg.ARCSEC_SYN == null) { Function1Arg.ARCSEC_SYN = Function1Arg.ARCSEC_STR + "(x)"; }  return Function1Arg.ARCSEC_SYN; }

    public static ARCCSC_SYN: string; public static ARCCSC_SYN_$LI$(): string { if (Function1Arg.ARCCSC_SYN == null) { Function1Arg.ARCCSC_SYN = Function1Arg.ARCCSC_STR + "(x)"; }  return Function1Arg.ARCCSC_SYN; }

    public static GAMMA_SYN: string; public static GAMMA_SYN_$LI$(): string { if (Function1Arg.GAMMA_SYN == null) { Function1Arg.GAMMA_SYN = Function1Arg.GAMMA_STR + "(x)"; }  return Function1Arg.GAMMA_SYN; }

    public static LAMBERT_W0_SYN: string; public static LAMBERT_W0_SYN_$LI$(): string { if (Function1Arg.LAMBERT_W0_SYN == null) { Function1Arg.LAMBERT_W0_SYN = Function1Arg.LAMBERT_W0_STR + "(x)"; }  return Function1Arg.LAMBERT_W0_SYN; }

    public static LAMBERT_W1_SYN: string; public static LAMBERT_W1_SYN_$LI$(): string { if (Function1Arg.LAMBERT_W1_SYN == null) { Function1Arg.LAMBERT_W1_SYN = Function1Arg.LAMBERT_W1_STR + "(x)"; }  return Function1Arg.LAMBERT_W1_SYN; }

    public static SGN_GAMMA_SYN: string; public static SGN_GAMMA_SYN_$LI$(): string { if (Function1Arg.SGN_GAMMA_SYN == null) { Function1Arg.SGN_GAMMA_SYN = Function1Arg.SGN_GAMMA_STR + "(x)"; }  return Function1Arg.SGN_GAMMA_SYN; }

    public static LOG_GAMMA_SYN: string; public static LOG_GAMMA_SYN_$LI$(): string { if (Function1Arg.LOG_GAMMA_SYN == null) { Function1Arg.LOG_GAMMA_SYN = Function1Arg.LOG_GAMMA_STR + "(x)"; }  return Function1Arg.LOG_GAMMA_SYN; }

    public static DI_GAMMA_SYN: string; public static DI_GAMMA_SYN_$LI$(): string { if (Function1Arg.DI_GAMMA_SYN == null) { Function1Arg.DI_GAMMA_SYN = Function1Arg.DI_GAMMA_STR + "(x)"; }  return Function1Arg.DI_GAMMA_SYN; }

    public static PARAM_SYN: string; public static PARAM_SYN_$LI$(): string { if (Function1Arg.PARAM_SYN == null) { Function1Arg.PARAM_SYN = Function1Arg.PARAM_STR + "(i)"; }  return Function1Arg.PARAM_SYN; }

    public static SIN_DESC: string = "Trigonometric sine function";

    public static COS_DESC: string = "Trigonometric cosine function";

    public static TAN_DESC: string = "Trigonometric tangent function";

    public static CTAN_DESC: string = "Trigonometric cotangent function";

    public static SEC_DESC: string = "Trigonometric secant function";

    public static COSEC_DESC: string = "Trigonometric cosecant function";

    public static ASIN_DESC: string = "Inverse trigonometric sine function";

    public static ACOS_DESC: string = "Inverse trigonometric cosine function";

    public static ATAN_DESC: string = "Inverse trigonometric tangent function";

    public static ACTAN_DESC: string = "Inverse trigonometric cotangent function";

    public static LN_DESC: string = "Natural logarithm function (base e)";

    public static LOG2_DESC: string = "Binary logarithm function (base 2)";

    public static LOG10_DESC: string = "Common logarithm function (base 10)";

    public static RAD_DESC: string = "Degrees to radians function";

    public static EXP_DESC: string = "Exponential function";

    public static SQRT_DESC: string = "Squre root function";

    public static SINH_DESC: string = "Hyperbolic sine function";

    public static COSH_DESC: string = "Hyperbolic cosine function";

    public static TANH_DESC: string = "Hyperbolic tangent function";

    public static COTH_DESC: string = "Hyperbolic cotangent function";

    public static SECH_DESC: string = "Hyperbolic secant function";

    public static CSCH_DESC: string = "Hyperbolic cosecant function";

    public static DEG_DESC: string = "Radians to degrees function";

    public static ABS_DESC: string = "Absolut value function";

    public static SGN_DESC: string = "Signum function";

    public static FLOOR_DESC: string = "Floor function";

    public static CEIL_DESC: string = "Ceiling function";

    public static NOT_DESC: string = "Negation function";

    public static ARSINH_DESC: string = "Inverse hyperbolic sine function";

    public static ARCOSH_DESC: string = "Inverse hyperbolic cosine function";

    public static ARTANH_DESC: string = "Inverse hyperbolic tangent function";

    public static ARCOTH_DESC: string = "Inverse hyperbolic cotangent function";

    public static ARSECH_DESC: string = "Inverse hyperbolic secant function";

    public static ARCSCH_DESC: string = "Inverse hyperbolic cosecant function";

    public static SA_DESC: string = "Sinc function (normalized)";

    public static SINC_DESC: string = "Sinc function (unnormalized)";

    public static BELL_NUMBER_DESC: string = "Bell number";

    public static LUCAS_NUMBER_DESC: string = "Lucas number";

    public static FIBONACCI_NUMBER_DESC: string = "Fibonacci number";

    public static HARMONIC_NUMBER_DESC: string = "Harmonic number";

    public static IS_PRIME_DESC: string = "Prime number test (is number a prime?)";

    public static PRIME_COUNT_DESC: string = "Prime-counting function - Pi(x)";

    public static EXP_INT_DESC: string = "Exponential integral function (non-elementary special function) - usage example: Ei(x)";

    public static LOG_INT_DESC: string = "Logarithmic integral function (non-elementary special function) - usage example: li(x)";

    public static OFF_LOG_INT_DESC: string = "Offset logarithmic integral function (non-elementary special function) - usage example: Li(x)";

    public static GAUSS_ERF_DESC: string = "Gauss error function (non-elementary special function) - usage example: 2 + erf(x)";

    public static GAUSS_ERFC_DESC: string = "Gauss complementary error function (non-elementary special function) - usage example: 1 - erfc(x)";

    public static GAUSS_ERF_INV_DESC: string = "Inverse Gauss error function (non-elementary special function) - usage example: erfInv(x)";

    public static GAUSS_ERFC_INV_DESC: string = "Inverse Gauss complementary error function (non-elementary special function) - usage example: erfcInv(x)";

    public static ULP_DESC: string = "Unit in The Last Place - ulp(0.1)";

    public static ISNAN_DESC: string = "Returns true = 1 if value is a Not-a-Number (NaN), false = 0 otherwise - usage example: isNaN(x)";

    public static NDIG10_DESC: string = "Number of digits in numeral system with base 10";

    public static NFACT_DESC: string = "Prime decomposition - number of distinct prime factors";

    public static ARCSEC_DESC: string = "Inverse trigonometric secant";

    public static ARCCSC_DESC: string = "Inverse trigonometric cosecant";

    public static GAMMA_DESC: string = "Gamma special function \u0393(s)";

    public static LAMBERT_W0_DESC: string = "Lambert-W special function, principal branch 0, also called the omega function or product logarithm";

    public static LAMBERT_W1_DESC: string = "Lambert-W special function, branch -1, also called the omega function or product logarithm";

    public static SGN_GAMMA_DESC: string = "Signum of Gamma special function, \u0393(s)";

    public static LOG_GAMMA_DESC: string = "Log Gamma special function, ln\u0393(s)";

    public static DI_GAMMA_DESC: string = "Digamma function as the logarithmic derivative of the Gamma special function, \u03c8(x)";

    public static PARAM_DESC: string = "Automatically generated function for user defined functions, returns function parameter value at index \'i\'";

    public static SIN_SINCE: string; public static SIN_SINCE_$LI$(): string { if (Function1Arg.SIN_SINCE == null) { Function1Arg.SIN_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.SIN_SINCE; }

    public static COS_SINCE: string; public static COS_SINCE_$LI$(): string { if (Function1Arg.COS_SINCE == null) { Function1Arg.COS_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.COS_SINCE; }

    public static TAN_SINCE: string; public static TAN_SINCE_$LI$(): string { if (Function1Arg.TAN_SINCE == null) { Function1Arg.TAN_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.TAN_SINCE; }

    public static CTAN_SINCE: string; public static CTAN_SINCE_$LI$(): string { if (Function1Arg.CTAN_SINCE == null) { Function1Arg.CTAN_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.CTAN_SINCE; }

    public static SEC_SINCE: string; public static SEC_SINCE_$LI$(): string { if (Function1Arg.SEC_SINCE == null) { Function1Arg.SEC_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.SEC_SINCE; }

    public static COSEC_SINCE: string; public static COSEC_SINCE_$LI$(): string { if (Function1Arg.COSEC_SINCE == null) { Function1Arg.COSEC_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.COSEC_SINCE; }

    public static ASIN_SINCE: string; public static ASIN_SINCE_$LI$(): string { if (Function1Arg.ASIN_SINCE == null) { Function1Arg.ASIN_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ASIN_SINCE; }

    public static ACOS_SINCE: string; public static ACOS_SINCE_$LI$(): string { if (Function1Arg.ACOS_SINCE == null) { Function1Arg.ACOS_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ACOS_SINCE; }

    public static ATAN_SINCE: string; public static ATAN_SINCE_$LI$(): string { if (Function1Arg.ATAN_SINCE == null) { Function1Arg.ATAN_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ATAN_SINCE; }

    public static ACTAN_SINCE: string; public static ACTAN_SINCE_$LI$(): string { if (Function1Arg.ACTAN_SINCE == null) { Function1Arg.ACTAN_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ACTAN_SINCE; }

    public static LN_SINCE: string; public static LN_SINCE_$LI$(): string { if (Function1Arg.LN_SINCE == null) { Function1Arg.LN_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.LN_SINCE; }

    public static LOG2_SINCE: string; public static LOG2_SINCE_$LI$(): string { if (Function1Arg.LOG2_SINCE == null) { Function1Arg.LOG2_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.LOG2_SINCE; }

    public static LOG10_SINCE: string; public static LOG10_SINCE_$LI$(): string { if (Function1Arg.LOG10_SINCE == null) { Function1Arg.LOG10_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.LOG10_SINCE; }

    public static RAD_SINCE: string; public static RAD_SINCE_$LI$(): string { if (Function1Arg.RAD_SINCE == null) { Function1Arg.RAD_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.RAD_SINCE; }

    public static EXP_SINCE: string; public static EXP_SINCE_$LI$(): string { if (Function1Arg.EXP_SINCE == null) { Function1Arg.EXP_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.EXP_SINCE; }

    public static SQRT_SINCE: string; public static SQRT_SINCE_$LI$(): string { if (Function1Arg.SQRT_SINCE == null) { Function1Arg.SQRT_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.SQRT_SINCE; }

    public static SINH_SINCE: string; public static SINH_SINCE_$LI$(): string { if (Function1Arg.SINH_SINCE == null) { Function1Arg.SINH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.SINH_SINCE; }

    public static COSH_SINCE: string; public static COSH_SINCE_$LI$(): string { if (Function1Arg.COSH_SINCE == null) { Function1Arg.COSH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.COSH_SINCE; }

    public static TANH_SINCE: string; public static TANH_SINCE_$LI$(): string { if (Function1Arg.TANH_SINCE == null) { Function1Arg.TANH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.TANH_SINCE; }

    public static COTH_SINCE: string; public static COTH_SINCE_$LI$(): string { if (Function1Arg.COTH_SINCE == null) { Function1Arg.COTH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.COTH_SINCE; }

    public static SECH_SINCE: string; public static SECH_SINCE_$LI$(): string { if (Function1Arg.SECH_SINCE == null) { Function1Arg.SECH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.SECH_SINCE; }

    public static CSCH_SINCE: string; public static CSCH_SINCE_$LI$(): string { if (Function1Arg.CSCH_SINCE == null) { Function1Arg.CSCH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.CSCH_SINCE; }

    public static DEG_SINCE: string; public static DEG_SINCE_$LI$(): string { if (Function1Arg.DEG_SINCE == null) { Function1Arg.DEG_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.DEG_SINCE; }

    public static ABS_SINCE: string; public static ABS_SINCE_$LI$(): string { if (Function1Arg.ABS_SINCE == null) { Function1Arg.ABS_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ABS_SINCE; }

    public static SGN_SINCE: string; public static SGN_SINCE_$LI$(): string { if (Function1Arg.SGN_SINCE == null) { Function1Arg.SGN_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.SGN_SINCE; }

    public static FLOOR_SINCE: string; public static FLOOR_SINCE_$LI$(): string { if (Function1Arg.FLOOR_SINCE == null) { Function1Arg.FLOOR_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.FLOOR_SINCE; }

    public static CEIL_SINCE: string; public static CEIL_SINCE_$LI$(): string { if (Function1Arg.CEIL_SINCE == null) { Function1Arg.CEIL_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.CEIL_SINCE; }

    public static NOT_SINCE: string; public static NOT_SINCE_$LI$(): string { if (Function1Arg.NOT_SINCE == null) { Function1Arg.NOT_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.NOT_SINCE; }

    public static ARSINH_SINCE: string; public static ARSINH_SINCE_$LI$(): string { if (Function1Arg.ARSINH_SINCE == null) { Function1Arg.ARSINH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ARSINH_SINCE; }

    public static ARCOSH_SINCE: string; public static ARCOSH_SINCE_$LI$(): string { if (Function1Arg.ARCOSH_SINCE == null) { Function1Arg.ARCOSH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ARCOSH_SINCE; }

    public static ARTANH_SINCE: string; public static ARTANH_SINCE_$LI$(): string { if (Function1Arg.ARTANH_SINCE == null) { Function1Arg.ARTANH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ARTANH_SINCE; }

    public static ARCOTH_SINCE: string; public static ARCOTH_SINCE_$LI$(): string { if (Function1Arg.ARCOTH_SINCE == null) { Function1Arg.ARCOTH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ARCOTH_SINCE; }

    public static ARSECH_SINCE: string; public static ARSECH_SINCE_$LI$(): string { if (Function1Arg.ARSECH_SINCE == null) { Function1Arg.ARSECH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ARSECH_SINCE; }

    public static ARCSCH_SINCE: string; public static ARCSCH_SINCE_$LI$(): string { if (Function1Arg.ARCSCH_SINCE == null) { Function1Arg.ARCSCH_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.ARCSCH_SINCE; }

    public static SA_SINCE: string; public static SA_SINCE_$LI$(): string { if (Function1Arg.SA_SINCE == null) { Function1Arg.SA_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.SA_SINCE; }

    public static SINC_SINCE: string; public static SINC_SINCE_$LI$(): string { if (Function1Arg.SINC_SINCE == null) { Function1Arg.SINC_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.SINC_SINCE; }

    public static BELL_NUMBER_SINCE: string; public static BELL_NUMBER_SINCE_$LI$(): string { if (Function1Arg.BELL_NUMBER_SINCE == null) { Function1Arg.BELL_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.BELL_NUMBER_SINCE; }

    public static LUCAS_NUMBER_SINCE: string; public static LUCAS_NUMBER_SINCE_$LI$(): string { if (Function1Arg.LUCAS_NUMBER_SINCE == null) { Function1Arg.LUCAS_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.LUCAS_NUMBER_SINCE; }

    public static FIBONACCI_NUMBER_SINCE: string; public static FIBONACCI_NUMBER_SINCE_$LI$(): string { if (Function1Arg.FIBONACCI_NUMBER_SINCE == null) { Function1Arg.FIBONACCI_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.FIBONACCI_NUMBER_SINCE; }

    public static HARMONIC_NUMBER_SINCE: string; public static HARMONIC_NUMBER_SINCE_$LI$(): string { if (Function1Arg.HARMONIC_NUMBER_SINCE == null) { Function1Arg.HARMONIC_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function1Arg.HARMONIC_NUMBER_SINCE; }

    public static IS_PRIME_SINCE: string; public static IS_PRIME_SINCE_$LI$(): string { if (Function1Arg.IS_PRIME_SINCE == null) { Function1Arg.IS_PRIME_SINCE = mXparserConstants.NAMEv23; }  return Function1Arg.IS_PRIME_SINCE; }

    public static PRIME_COUNT_SINCE: string; public static PRIME_COUNT_SINCE_$LI$(): string { if (Function1Arg.PRIME_COUNT_SINCE == null) { Function1Arg.PRIME_COUNT_SINCE = mXparserConstants.NAMEv23; }  return Function1Arg.PRIME_COUNT_SINCE; }

    public static EXP_INT_SINCE: string; public static EXP_INT_SINCE_$LI$(): string { if (Function1Arg.EXP_INT_SINCE == null) { Function1Arg.EXP_INT_SINCE = mXparserConstants.NAMEv23; }  return Function1Arg.EXP_INT_SINCE; }

    public static LOG_INT_SINCE: string; public static LOG_INT_SINCE_$LI$(): string { if (Function1Arg.LOG_INT_SINCE == null) { Function1Arg.LOG_INT_SINCE = mXparserConstants.NAMEv23; }  return Function1Arg.LOG_INT_SINCE; }

    public static OFF_LOG_INT_SINCE: string; public static OFF_LOG_INT_SINCE_$LI$(): string { if (Function1Arg.OFF_LOG_INT_SINCE == null) { Function1Arg.OFF_LOG_INT_SINCE = mXparserConstants.NAMEv23; }  return Function1Arg.OFF_LOG_INT_SINCE; }

    public static GAUSS_ERF_SINCE: string; public static GAUSS_ERF_SINCE_$LI$(): string { if (Function1Arg.GAUSS_ERF_SINCE == null) { Function1Arg.GAUSS_ERF_SINCE = mXparserConstants.NAMEv30; }  return Function1Arg.GAUSS_ERF_SINCE; }

    public static GAUSS_ERFC_SINCE: string; public static GAUSS_ERFC_SINCE_$LI$(): string { if (Function1Arg.GAUSS_ERFC_SINCE == null) { Function1Arg.GAUSS_ERFC_SINCE = mXparserConstants.NAMEv30; }  return Function1Arg.GAUSS_ERFC_SINCE; }

    public static GAUSS_ERF_INV_SINCE: string; public static GAUSS_ERF_INV_SINCE_$LI$(): string { if (Function1Arg.GAUSS_ERF_INV_SINCE == null) { Function1Arg.GAUSS_ERF_INV_SINCE = mXparserConstants.NAMEv30; }  return Function1Arg.GAUSS_ERF_INV_SINCE; }

    public static GAUSS_ERFC_INV_SINCE: string; public static GAUSS_ERFC_INV_SINCE_$LI$(): string { if (Function1Arg.GAUSS_ERFC_INV_SINCE == null) { Function1Arg.GAUSS_ERFC_INV_SINCE = mXparserConstants.NAMEv30; }  return Function1Arg.GAUSS_ERFC_INV_SINCE; }

    public static ULP_SINCE: string; public static ULP_SINCE_$LI$(): string { if (Function1Arg.ULP_SINCE == null) { Function1Arg.ULP_SINCE = mXparserConstants.NAMEv30; }  return Function1Arg.ULP_SINCE; }

    public static ISNAN_SINCE: string; public static ISNAN_SINCE_$LI$(): string { if (Function1Arg.ISNAN_SINCE == null) { Function1Arg.ISNAN_SINCE = mXparserConstants.NAMEv41; }  return Function1Arg.ISNAN_SINCE; }

    public static NDIG10_SINCE: string; public static NDIG10_SINCE_$LI$(): string { if (Function1Arg.NDIG10_SINCE == null) { Function1Arg.NDIG10_SINCE = mXparserConstants.NAMEv41; }  return Function1Arg.NDIG10_SINCE; }

    public static NFACT_SINCE: string; public static NFACT_SINCE_$LI$(): string { if (Function1Arg.NFACT_SINCE == null) { Function1Arg.NFACT_SINCE = mXparserConstants.NAMEv41; }  return Function1Arg.NFACT_SINCE; }

    public static ARCSEC_SINCE: string; public static ARCSEC_SINCE_$LI$(): string { if (Function1Arg.ARCSEC_SINCE == null) { Function1Arg.ARCSEC_SINCE = mXparserConstants.NAMEv41; }  return Function1Arg.ARCSEC_SINCE; }

    public static ARCCSC_SINCE: string; public static ARCCSC_SINCE_$LI$(): string { if (Function1Arg.ARCCSC_SINCE == null) { Function1Arg.ARCCSC_SINCE = mXparserConstants.NAMEv41; }  return Function1Arg.ARCCSC_SINCE; }

    public static GAMMA_SINCE: string; public static GAMMA_SINCE_$LI$(): string { if (Function1Arg.GAMMA_SINCE == null) { Function1Arg.GAMMA_SINCE = mXparserConstants.NAMEv42; }  return Function1Arg.GAMMA_SINCE; }

    public static LAMBERT_W0_SINCE: string; public static LAMBERT_W0_SINCE_$LI$(): string { if (Function1Arg.LAMBERT_W0_SINCE == null) { Function1Arg.LAMBERT_W0_SINCE = mXparserConstants.NAMEv42; }  return Function1Arg.LAMBERT_W0_SINCE; }

    public static LAMBERT_W1_SINCE: string; public static LAMBERT_W1_SINCE_$LI$(): string { if (Function1Arg.LAMBERT_W1_SINCE == null) { Function1Arg.LAMBERT_W1_SINCE = mXparserConstants.NAMEv42; }  return Function1Arg.LAMBERT_W1_SINCE; }

    public static SGN_GAMMA_SINCE: string; public static SGN_GAMMA_SINCE_$LI$(): string { if (Function1Arg.SGN_GAMMA_SINCE == null) { Function1Arg.SGN_GAMMA_SINCE = mXparserConstants.NAMEv42; }  return Function1Arg.SGN_GAMMA_SINCE; }

    public static LOG_GAMMA_SINCE: string; public static LOG_GAMMA_SINCE_$LI$(): string { if (Function1Arg.LOG_GAMMA_SINCE == null) { Function1Arg.LOG_GAMMA_SINCE = mXparserConstants.NAMEv42; }  return Function1Arg.LOG_GAMMA_SINCE; }

    public static DI_GAMMA_SINCE: string; public static DI_GAMMA_SINCE_$LI$(): string { if (Function1Arg.DI_GAMMA_SINCE == null) { Function1Arg.DI_GAMMA_SINCE = mXparserConstants.NAMEv42; }  return Function1Arg.DI_GAMMA_SINCE; }

    public static PARAM_SINCE: string; public static PARAM_SINCE_$LI$(): string { if (Function1Arg.PARAM_SINCE == null) { Function1Arg.PARAM_SINCE = mXparserConstants.NAMEv42; }  return Function1Arg.PARAM_SINCE; }
}
Function1Arg["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.Function1Arg";