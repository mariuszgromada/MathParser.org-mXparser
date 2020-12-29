/* Generated from Java with JSweet 3.0.0 - http://www.jsweet.org */
import { mXparserConstants } from '../mXparserConstants';

/**
 * Binary functions (2 arguments) - mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class Function2Arg {
    public static TYPE_ID: number = 5;

    public static TYPE_DESC: string = "Binary Function";

    public static LOG_ID: number = 1;

    public static MOD_ID: number = 2;

    public static BINOM_COEFF_ID: number = 3;

    public static BERNOULLI_NUMBER_ID: number = 4;

    public static STIRLING1_NUMBER_ID: number = 5;

    public static STIRLING2_NUMBER_ID: number = 6;

    public static WORPITZKY_NUMBER_ID: number = 7;

    public static EULER_NUMBER_ID: number = 8;

    public static KRONECKER_DELTA_ID: number = 9;

    public static EULER_POLYNOMIAL_ID: number = 10;

    public static HARMONIC_NUMBER_ID: number = 11;

    public static RND_UNIFORM_CONT_ID: number = 12;

    public static RND_UNIFORM_DISCR_ID: number = 13;

    public static ROUND_ID: number = 14;

    public static RND_NORMAL_ID: number = 15;

    public static NDIG_ID: number = 16;

    public static DIGIT10_ID: number = 17;

    public static FACTVAL_ID: number = 18;

    public static FACTEXP_ID: number = 19;

    public static ROOT_ID: number = 20;

    public static INC_GAMMA_LOWER_ID: number = 21;

    public static INC_GAMMA_UPPER_ID: number = 22;

    public static REG_GAMMA_LOWER_ID: number = 23;

    public static REG_GAMMA_UPPER_ID: number = 24;

    public static PERMUTATIONS_ID: number = 25;

    public static BETA_ID: number = 26;

    public static LOG_BETA_ID: number = 27;

    public static LOG_STR: string = "log";

    public static MOD_STR: string = "mod";

    public static BINOM_COEFF_STR: string = "C";

    public static BINOM_COEFF_NCK_STR: string = "nCk";

    public static BERNOULLI_NUMBER_STR: string = "Bern";

    public static STIRLING1_NUMBER_STR: string = "Stirl1";

    public static STIRLING2_NUMBER_STR: string = "Stirl2";

    public static WORPITZKY_NUMBER_STR: string = "Worp";

    public static EULER_NUMBER_STR: string = "Euler";

    public static KRONECKER_DELTA_STR: string = "KDelta";

    public static EULER_POLYNOMIAL_STR: string = "EulerPol";

    public static HARMONIC_NUMBER_STR: string = "Harm";

    public static RND_UNIFORM_CONT_STR: string = "rUni";

    public static RND_UNIFORM_DISCR_STR: string = "rUnid";

    public static ROUND_STR: string = "round";

    public static RND_NORMAL_STR: string = "rNor";

    public static NDIG_STR: string = "ndig";

    public static DIGIT10_STR: string = "dig10";

    public static FACTVAL_STR: string = "factval";

    public static FACTEXP_STR: string = "factexp";

    public static ROOT_STR: string = "root";

    public static INC_GAMMA_LOWER_STR: string = "GammaL";

    public static INC_GAMMA_UPPER_STR: string = "GammaU";

    public static REG_GAMMA_LOWER_STR: string = "GammaRegL";

    public static REG_GAMMA_UPPER_STR: string = "GammaRegU";

    public static REG_GAMMA_LOWER_P_STR: string = "GammaP";

    public static REG_GAMMA_UPPER_Q_STR: string = "GammaQ";

    public static PERMUTATIONS_STR: string = "nPk";

    public static BETA_STR: string = "Beta";

    public static LOG_BETA_STR: string = "logBeta";

    public static LOG_SYN: string = "log(a, b)";

    public static MOD_SYN: string = "mod(a, b)";

    public static BINOM_COEFF_SYN: string = "C(n, k)";

    public static BERNOULLI_NUMBER_SYN: string = "Bern(m, n)";

    public static STIRLING1_NUMBER_SYN: string = "Stirl1(n, k)";

    public static STIRLING2_NUMBER_SYN: string = "Stirl2(n, k)";

    public static WORPITZKY_NUMBER_SYN: string = "Worp(n, k)";

    public static EULER_NUMBER_SYN: string = "Euler(n, k)";

    public static KRONECKER_DELTA_SYN: string = "KDelta(i, j)";

    public static EULER_POLYNOMIAL_SYN: string = "EulerPol";

    public static HARMONIC_NUMBER_SYN: string = "Harm(x, n)";

    public static RND_UNIFORM_CONT_SYN: string = "rUni(a, b)";

    public static RND_UNIFORM_DISCR_SYN: string = "rUnid(a, b)";

    public static ROUND_SYN: string = "round(x, n)";

    public static RND_NORMAL_SYN: string = "rNor(mean, stdv)";

    public static NDIG_SYN: string = "ndig(number, base)";

    public static DIGIT10_SYN: string = "dig10(num, pos)";

    public static FACTVAL_SYN: string = "factval(number, factorid)";

    public static FACTEXP_SYN: string = "factexp(number, factorid)";

    public static ROOT_SYN: string = "root(rootorder, number)";

    public static INC_GAMMA_LOWER_SYN: string; public static INC_GAMMA_LOWER_SYN_$LI$(): string { if (Function2Arg.INC_GAMMA_LOWER_SYN == null) { Function2Arg.INC_GAMMA_LOWER_SYN = Function2Arg.INC_GAMMA_LOWER_STR + "(s,x)"; }  return Function2Arg.INC_GAMMA_LOWER_SYN; }

    public static INC_GAMMA_UPPER_SYN: string; public static INC_GAMMA_UPPER_SYN_$LI$(): string { if (Function2Arg.INC_GAMMA_UPPER_SYN == null) { Function2Arg.INC_GAMMA_UPPER_SYN = Function2Arg.INC_GAMMA_UPPER_STR + "(s,x)"; }  return Function2Arg.INC_GAMMA_UPPER_SYN; }

    public static REG_GAMMA_LOWER_SYN: string; public static REG_GAMMA_LOWER_SYN_$LI$(): string { if (Function2Arg.REG_GAMMA_LOWER_SYN == null) { Function2Arg.REG_GAMMA_LOWER_SYN = Function2Arg.REG_GAMMA_LOWER_STR + "(s,x)"; }  return Function2Arg.REG_GAMMA_LOWER_SYN; }

    public static REG_GAMMA_UPPER_SYN: string; public static REG_GAMMA_UPPER_SYN_$LI$(): string { if (Function2Arg.REG_GAMMA_UPPER_SYN == null) { Function2Arg.REG_GAMMA_UPPER_SYN = Function2Arg.REG_GAMMA_UPPER_STR + "(s,x)"; }  return Function2Arg.REG_GAMMA_UPPER_SYN; }

    public static REG_GAMMA_LOWER_P_SYN: string; public static REG_GAMMA_LOWER_P_SYN_$LI$(): string { if (Function2Arg.REG_GAMMA_LOWER_P_SYN == null) { Function2Arg.REG_GAMMA_LOWER_P_SYN = Function2Arg.REG_GAMMA_LOWER_P_STR + "(s,x)"; }  return Function2Arg.REG_GAMMA_LOWER_P_SYN; }

    public static REG_GAMMA_UPPER_Q_SYN: string; public static REG_GAMMA_UPPER_Q_SYN_$LI$(): string { if (Function2Arg.REG_GAMMA_UPPER_Q_SYN == null) { Function2Arg.REG_GAMMA_UPPER_Q_SYN = Function2Arg.REG_GAMMA_UPPER_Q_STR + "(s,x)"; }  return Function2Arg.REG_GAMMA_UPPER_Q_SYN; }

    public static BINOM_COEFF_NCK_SYN: string; public static BINOM_COEFF_NCK_SYN_$LI$(): string { if (Function2Arg.BINOM_COEFF_NCK_SYN == null) { Function2Arg.BINOM_COEFF_NCK_SYN = Function2Arg.BINOM_COEFF_NCK_STR + "(n,k)"; }  return Function2Arg.BINOM_COEFF_NCK_SYN; }

    public static PERMUTATIONS_SYN: string; public static PERMUTATIONS_SYN_$LI$(): string { if (Function2Arg.PERMUTATIONS_SYN == null) { Function2Arg.PERMUTATIONS_SYN = Function2Arg.PERMUTATIONS_STR + "(n,k)"; }  return Function2Arg.PERMUTATIONS_SYN; }

    public static BETA_SYN: string; public static BETA_SYN_$LI$(): string { if (Function2Arg.BETA_SYN == null) { Function2Arg.BETA_SYN = Function2Arg.BETA_STR + "(x,y)"; }  return Function2Arg.BETA_SYN; }

    public static LOG_BETA_SYN: string; public static LOG_BETA_SYN_$LI$(): string { if (Function2Arg.LOG_BETA_SYN == null) { Function2Arg.LOG_BETA_SYN = Function2Arg.LOG_BETA_STR + "(x,y)"; }  return Function2Arg.LOG_BETA_SYN; }

    public static LOG_DESC: string = "Logarithm function";

    public static MOD_DESC: string = "Modulo function";

    public static BINOM_COEFF_DESC: string = "Binomial coefficient function, number of k-combinations that can be drawn from n-elements set";

    public static BERNOULLI_NUMBER_DESC: string = "Bernoulli numbers";

    public static STIRLING1_NUMBER_DESC: string = "Stirling numbers of the first kind";

    public static STIRLING2_NUMBER_DESC: string = "Stirling numbers of the second kind";

    public static WORPITZKY_NUMBER_DESC: string = "Worpitzky number";

    public static EULER_NUMBER_DESC: string = "Euler number";

    public static KRONECKER_DELTA_DESC: string = "Kronecker delta";

    public static EULER_POLYNOMIAL_DESC: string = "EulerPol";

    public static HARMONIC_NUMBER_DESC: string = "Harmonic number";

    public static RND_UNIFORM_CONT_DESC: string = "Random variable - Uniform continuous distribution U(a,b), usage example: 2*rUni(2,10)";

    public static RND_UNIFORM_DISCR_DESC: string = "Random variable - Uniform discrete distribution U{a,b}, usage example: 2*rUnid(2,100)";

    public static ROUND_DESC: string = "Half-up rounding, usage examples: round(2.2, 0) = 2, round(2.6, 0) = 3, round(2.66,1) = 2.7";

    public static RND_NORMAL_DESC: string = "Random variable - Normal distribution N(m,s) m - mean, s - stddev, usage example: 3*rNor(0,1)";

    public static NDIG_DESC: string = "Number of digits representing the number in numeral system with given base";

    public static DIGIT10_DESC: string = "Digit at position 1 ... n (left -> right) or 0 ... -(n-1) (right -> left) - base 10 numeral system";

    public static FACTVAL_DESC: string = "Prime decomposition - factor value at position between 1 ... nfact(n) - ascending order by factor value";

    public static FACTEXP_DESC: string = "Prime decomposition - factor exponent / multiplicity at position between 1 ... nfact(n) - ascending order by factor value";

    public static ROOT_DESC: string = "N-th order root of a number";

    public static INC_GAMMA_LOWER_DESC: string = "Lower incomplete gamma special function, \u03b3(s,x)";

    public static INC_GAMMA_UPPER_DESC: string = "Upper incomplete Gamma special function, \u0393(s,x)";

    public static REG_GAMMA_LOWER_DESC: string = "Lower regularized P gamma special function, P(s,x)";

    public static REG_GAMMA_UPPER_DESC: string = "Upper regularized Q Gamma special function, Q(s,x)";

    public static PERMUTATIONS_DESC: string = "Number of k-permutations that can be drawn from n-elements set";

    public static BETA_DESC: string = "The Beta special function B(x,y), also called the Euler integral of the first kind";

    public static LOG_BETA_DESC: string = "The Log Beta special function ln B(x,y), also called the Log Euler integral of the first kind, ln B(x,y)";

    public static LOG_SINCE: string; public static LOG_SINCE_$LI$(): string { if (Function2Arg.LOG_SINCE == null) { Function2Arg.LOG_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.LOG_SINCE; }

    public static MOD_SINCE: string; public static MOD_SINCE_$LI$(): string { if (Function2Arg.MOD_SINCE == null) { Function2Arg.MOD_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.MOD_SINCE; }

    public static BINOM_COEFF_SINCE: string; public static BINOM_COEFF_SINCE_$LI$(): string { if (Function2Arg.BINOM_COEFF_SINCE == null) { Function2Arg.BINOM_COEFF_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.BINOM_COEFF_SINCE; }

    public static BINOM_COEFF_NCK_SINCE: string; public static BINOM_COEFF_NCK_SINCE_$LI$(): string { if (Function2Arg.BINOM_COEFF_NCK_SINCE == null) { Function2Arg.BINOM_COEFF_NCK_SINCE = mXparserConstants.NAMEv42; }  return Function2Arg.BINOM_COEFF_NCK_SINCE; }

    public static BERNOULLI_NUMBER_SINCE: string; public static BERNOULLI_NUMBER_SINCE_$LI$(): string { if (Function2Arg.BERNOULLI_NUMBER_SINCE == null) { Function2Arg.BERNOULLI_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.BERNOULLI_NUMBER_SINCE; }

    public static STIRLING1_NUMBER_SINCE: string; public static STIRLING1_NUMBER_SINCE_$LI$(): string { if (Function2Arg.STIRLING1_NUMBER_SINCE == null) { Function2Arg.STIRLING1_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.STIRLING1_NUMBER_SINCE; }

    public static STIRLING2_NUMBER_SINCE: string; public static STIRLING2_NUMBER_SINCE_$LI$(): string { if (Function2Arg.STIRLING2_NUMBER_SINCE == null) { Function2Arg.STIRLING2_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.STIRLING2_NUMBER_SINCE; }

    public static WORPITZKY_NUMBER_SINCE: string; public static WORPITZKY_NUMBER_SINCE_$LI$(): string { if (Function2Arg.WORPITZKY_NUMBER_SINCE == null) { Function2Arg.WORPITZKY_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.WORPITZKY_NUMBER_SINCE; }

    public static EULER_NUMBER_SINCE: string; public static EULER_NUMBER_SINCE_$LI$(): string { if (Function2Arg.EULER_NUMBER_SINCE == null) { Function2Arg.EULER_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.EULER_NUMBER_SINCE; }

    public static KRONECKER_DELTA_SINCE: string; public static KRONECKER_DELTA_SINCE_$LI$(): string { if (Function2Arg.KRONECKER_DELTA_SINCE == null) { Function2Arg.KRONECKER_DELTA_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.KRONECKER_DELTA_SINCE; }

    public static EULER_POLYNOMIAL_SINCE: string; public static EULER_POLYNOMIAL_SINCE_$LI$(): string { if (Function2Arg.EULER_POLYNOMIAL_SINCE == null) { Function2Arg.EULER_POLYNOMIAL_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.EULER_POLYNOMIAL_SINCE; }

    public static HARMONIC_NUMBER_SINCE: string; public static HARMONIC_NUMBER_SINCE_$LI$(): string { if (Function2Arg.HARMONIC_NUMBER_SINCE == null) { Function2Arg.HARMONIC_NUMBER_SINCE = mXparserConstants.NAMEv10; }  return Function2Arg.HARMONIC_NUMBER_SINCE; }

    public static RND_UNIFORM_CONT_SINCE: string; public static RND_UNIFORM_CONT_SINCE_$LI$(): string { if (Function2Arg.RND_UNIFORM_CONT_SINCE == null) { Function2Arg.RND_UNIFORM_CONT_SINCE = mXparserConstants.NAMEv30; }  return Function2Arg.RND_UNIFORM_CONT_SINCE; }

    public static RND_UNIFORM_DISCR_SINCE: string; public static RND_UNIFORM_DISCR_SINCE_$LI$(): string { if (Function2Arg.RND_UNIFORM_DISCR_SINCE == null) { Function2Arg.RND_UNIFORM_DISCR_SINCE = mXparserConstants.NAMEv30; }  return Function2Arg.RND_UNIFORM_DISCR_SINCE; }

    public static ROUND_SINCE: string; public static ROUND_SINCE_$LI$(): string { if (Function2Arg.ROUND_SINCE == null) { Function2Arg.ROUND_SINCE = mXparserConstants.NAMEv30; }  return Function2Arg.ROUND_SINCE; }

    public static RND_NORMAL_SINCE: string; public static RND_NORMAL_SINCE_$LI$(): string { if (Function2Arg.RND_NORMAL_SINCE == null) { Function2Arg.RND_NORMAL_SINCE = mXparserConstants.NAMEv30; }  return Function2Arg.RND_NORMAL_SINCE; }

    public static NDIG_SINCE: string; public static NDIG_SINCE_$LI$(): string { if (Function2Arg.NDIG_SINCE == null) { Function2Arg.NDIG_SINCE = mXparserConstants.NAMEv41; }  return Function2Arg.NDIG_SINCE; }

    public static DIGIT10_SINCE: string; public static DIGIT10_SINCE_$LI$(): string { if (Function2Arg.DIGIT10_SINCE == null) { Function2Arg.DIGIT10_SINCE = mXparserConstants.NAMEv41; }  return Function2Arg.DIGIT10_SINCE; }

    public static FACTVAL_SINCE: string; public static FACTVAL_SINCE_$LI$(): string { if (Function2Arg.FACTVAL_SINCE == null) { Function2Arg.FACTVAL_SINCE = mXparserConstants.NAMEv41; }  return Function2Arg.FACTVAL_SINCE; }

    public static FACTEXP_SINCE: string; public static FACTEXP_SINCE_$LI$(): string { if (Function2Arg.FACTEXP_SINCE == null) { Function2Arg.FACTEXP_SINCE = mXparserConstants.NAMEv41; }  return Function2Arg.FACTEXP_SINCE; }

    public static ROOT_SINCE: string; public static ROOT_SINCE_$LI$(): string { if (Function2Arg.ROOT_SINCE == null) { Function2Arg.ROOT_SINCE = mXparserConstants.NAMEv41; }  return Function2Arg.ROOT_SINCE; }

    public static INC_GAMMA_LOWER_SINCE: string; public static INC_GAMMA_LOWER_SINCE_$LI$(): string { if (Function2Arg.INC_GAMMA_LOWER_SINCE == null) { Function2Arg.INC_GAMMA_LOWER_SINCE = mXparserConstants.NAMEv42; }  return Function2Arg.INC_GAMMA_LOWER_SINCE; }

    public static INC_GAMMA_UPPER_SINCE: string; public static INC_GAMMA_UPPER_SINCE_$LI$(): string { if (Function2Arg.INC_GAMMA_UPPER_SINCE == null) { Function2Arg.INC_GAMMA_UPPER_SINCE = mXparserConstants.NAMEv42; }  return Function2Arg.INC_GAMMA_UPPER_SINCE; }

    public static REG_GAMMA_LOWER_SINCE: string; public static REG_GAMMA_LOWER_SINCE_$LI$(): string { if (Function2Arg.REG_GAMMA_LOWER_SINCE == null) { Function2Arg.REG_GAMMA_LOWER_SINCE = mXparserConstants.NAMEv42; }  return Function2Arg.REG_GAMMA_LOWER_SINCE; }

    public static REG_GAMMA_UPPER_SINCE: string; public static REG_GAMMA_UPPER_SINCE_$LI$(): string { if (Function2Arg.REG_GAMMA_UPPER_SINCE == null) { Function2Arg.REG_GAMMA_UPPER_SINCE = mXparserConstants.NAMEv42; }  return Function2Arg.REG_GAMMA_UPPER_SINCE; }

    public static PERMUTATIONS_SINCE: string; public static PERMUTATIONS_SINCE_$LI$(): string { if (Function2Arg.PERMUTATIONS_SINCE == null) { Function2Arg.PERMUTATIONS_SINCE = mXparserConstants.NAMEv42; }  return Function2Arg.PERMUTATIONS_SINCE; }

    public static BETA_SINCE: string; public static BETA_SINCE_$LI$(): string { if (Function2Arg.BETA_SINCE == null) { Function2Arg.BETA_SINCE = mXparserConstants.NAMEv42; }  return Function2Arg.BETA_SINCE; }

    public static LOG_BETA_SINCE: string; public static LOG_BETA_SINCE_$LI$(): string { if (Function2Arg.LOG_BETA_SINCE == null) { Function2Arg.LOG_BETA_SINCE = mXparserConstants.NAMEv42; }  return Function2Arg.LOG_BETA_SINCE; }
}
Function2Arg["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.Function2Arg";