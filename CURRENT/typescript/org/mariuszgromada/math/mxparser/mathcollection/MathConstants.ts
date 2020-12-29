import { MathFunctions } from './MathFunctions';
import { javaemul } from 'j4ts/j4ts';

/**
 * MathConstants - class representing the most important math constants.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.3.4
 * @class
 */
export class MathConstants {
    /**
     * Pi, Archimedes' constant or Ludolph's number
     */
    public static PI: number = 3.141592653589793;

    /**
     * Pi/2
     */
    public static PIBY2: number; public static PIBY2_$LI$(): number { if (MathConstants.PIBY2 == null) { MathConstants.PIBY2 = MathConstants.PI / 2.0; }  return MathConstants.PIBY2; }

    /**
     * Napier's constant, or Euler's number, base of Natural logarithm
     */
    public static E: number = 2.718281828459045;

    /**
     * Euler-Mascheroni constant
     */
    public static EULER_MASCHERONI: number = 0.5772156649015329;

    /**
     * Golden ratio
     */
    public static GOLDEN_RATIO: number = 1.618033988749895;

    /**
     * Plastic constant
     */
    public static PLASTIC: number = 1.324717957244746;

    /**
     * Embree-Trefethen constant
     */
    public static EMBREE_TREFETHEN: number = 0.70258;

    /**
     * Feigenbaum constant
     */
    public static FEIGENBAUM_DELTA: number = 4.66920160910299;

    /**
     * Feigenbaum constant
     */
    public static FEIGENBAUM_ALFA: number = 2.5029078750958926;

    /**
     * Feigenbaum constant
     */
    public static TWIN_PRIME: number = 0.6601618158468696;

    /**
     * Meissel-Mertens constant
     */
    public static MEISSEL_MERTEENS: number = 0.26149721284764277;

    /**
     * Brun's constant for twin primes
     */
    public static BRAUN_TWIN_PRIME: number = 1.9021605823;

    /**
     * Brun's constant for prime quadruplets
     */
    public static BRAUN_PRIME_QUADR: number = 0.87058838;

    /**
     * de Bruijn-Newman constant
     */
    public static BRUIJN_NEWMAN: number = -2.7E-9;

    /**
     * Catalan's constant
     */
    public static CATALAN: number = 0.915965594177219;

    /**
     * Landau-Ramanujan constant
     */
    public static LANDAU_RAMANUJAN: number = 0.7642236535892206;

    /**
     * Viswanath's constant
     */
    public static VISWANATH: number = 1.13198824;

    /**
     * Legendre's constant
     */
    public static LEGENDRE: number = 1.0;

    /**
     * Ramanujan-Soldner constant
     */
    public static RAMANUJAN_SOLDNER: number = 1.451369234883381;

    /**
     * Erdos-Borwein constant
     */
    public static ERDOS_BORWEIN: number = 1.6066951524152917;

    /**
     * Bernstein's constant
     */
    public static BERNSTEIN: number = 0.2801694990238691;

    /**
     * Gauss-Kuzmin-Wirsing constant
     */
    public static GAUSS_KUZMIN_WIRSING: number = 0.30366300289873266;

    /**
     * Hafner-Sarnak-McCurley constant
     */
    public static HAFNER_SARNAK_MCCURLEY: number = 0.353236371854996;

    /**
     * Golomb-Dickman constant
     */
    public static GOLOMB_DICKMAN: number = 0.6243299885435508;

    /**
     * Cahen's constant
     */
    public static CAHEN: number = 0.6434105463;

    /**
     * Laplace limit
     */
    public static LAPLACE_LIMIT: number = 0.6627434193491816;

    /**
     * Alladi-Grinstead constant
     */
    public static ALLADI_GRINSTEAD: number = 0.8093940205;

    /**
     * Lengyel's constant
     */
    public static LENGYEL: number = 1.0986858055;

    /**
     * Levy's constant
     */
    public static LEVY: number = 3.2758229187218113;

    /**
     * Apery's constant
     */
    public static APERY: number = 1.2020569031595942;

    /**
     * Mills' constant
     */
    public static MILLS: number = 1.3063778838630806;

    /**
     * Backhouse's constant
     */
    public static BACKHOUSE: number = 1.4560749485826896;

    /**
     * Porter's constant
     */
    public static PORTER: number = 1.4670780794;

    /**
     * Porter's constant
     */
    public static LIEB_QUARE_ICE: number = 1.5396007178;

    /**
     * Niven's constant
     */
    public static NIVEN: number = 1.7052111401053678;

    /**
     * Sierpiński's constant
     */
    public static SIERPINSKI: number = 2.5849817595792532;

    /**
     * Khinchin's constant
     */
    public static KHINCHIN: number = 2.6854520010653062;

    /**
     * Fransén-Robinson constant
     */
    public static FRANSEN_ROBINSON: number = 2.8077702420285195;

    /**
     * Landau's constant
     */
    public static LANDAU: number = 0.5;

    /**
     * Parabolic constant
     */
    public static PARABOLIC: number = 2.295587149392638;

    /**
     * Omega constant
     */
    public static OMEGA: number = 0.5671432904097838;

    /**
     * MRB constant
     */
    public static MRB: number = 0.187859;

    /**
     * A069284 - Logarithmic integral function li(2)
     */
    public static LI2: number = 1.045163780117493;

    /**
     * Gompertz Constant OEIS A073003
     */
    public static GOMPERTZ: number = 0.5963473623231941;

    /**
     * Square root of 2
     */
    public static SQRT2: number; public static SQRT2_$LI$(): number { if (MathConstants.SQRT2 == null) { MathConstants.SQRT2 = Math.sqrt(2.0); }  return MathConstants.SQRT2; }

    /**
     * Square root of pi
     */
    public static SQRTPi: number = 1.772453850905516;

    /**
     * Square root of 2*pi
     */
    public static SQRT2Pi: number = 2.5066282746310007;

    /**
     * Natural logarithm of pi
     */
    public static LNPI: number; public static LNPI_$LI$(): number { if (MathConstants.LNPI == null) { MathConstants.LNPI = MathFunctions.ln(MathConstants.PI); }  return MathConstants.LNPI; }

    /**
     * Tetration left convergence limit
     */
    public static EXP_MINUS_E: number; public static EXP_MINUS_E_$LI$(): number { if (MathConstants.EXP_MINUS_E == null) { MathConstants.EXP_MINUS_E = Math.pow(MathConstants.E, -MathConstants.E); }  return MathConstants.EXP_MINUS_E; }

    /**
     * Tetration right convergence limit
     */
    public static EXP_1_OVER_E: number; public static EXP_1_OVER_E_$LI$(): number { if (MathConstants.EXP_1_OVER_E == null) { MathConstants.EXP_1_OVER_E = Math.pow(MathConstants.E, 1.0 / MathConstants.E); }  return MathConstants.EXP_1_OVER_E; }

    /**
     * 1 over e
     */
    public static EXP_MINUS_1: number; public static EXP_MINUS_1_$LI$(): number { if (MathConstants.EXP_MINUS_1 == null) { MathConstants.EXP_MINUS_1 = 1.0 / Math.E; }  return MathConstants.EXP_MINUS_1; }

    /**
     * Natural logarithm of sqrt(2)
     */
    public static LN_SQRT2: number; public static LN_SQRT2_$LI$(): number { if (MathConstants.LN_SQRT2 == null) { MathConstants.LN_SQRT2 = MathFunctions.ln(MathConstants.SQRT2_$LI$()); }  return MathConstants.LN_SQRT2; }

    /**
     * SQRT2BY2
     */
    public static SQRT2BY2: number; public static SQRT2BY2_$LI$(): number { if (MathConstants.SQRT2BY2 == null) { MathConstants.SQRT2BY2 = MathConstants.SQRT2_$LI$() / 2.0; }  return MathConstants.SQRT2BY2; }

    /**
     * SQRT3
     */
    public static SQRT3: number; public static SQRT3_$LI$(): number { if (MathConstants.SQRT3 == null) { MathConstants.SQRT3 = Math.sqrt(3.0); }  return MathConstants.SQRT3; }

    /**
     * SQRT3BY2
     */
    public static SQRT3BY2: number; public static SQRT3BY2_$LI$(): number { if (MathConstants.SQRT3BY2 == null) { MathConstants.SQRT3BY2 = MathConstants.SQRT3_$LI$() / 2.0; }  return MathConstants.SQRT3BY2; }

    /**
     * D2BYSQRT3
     */
    public static D2BYSQRT3: number; public static D2BYSQRT3_$LI$(): number { if (MathConstants.D2BYSQRT3 == null) { MathConstants.D2BYSQRT3 = 2.0 / MathConstants.SQRT3_$LI$(); }  return MathConstants.D2BYSQRT3; }

    /**
     * SQRT3BY3
     */
    public static SQRT3BY3: number; public static SQRT3BY3_$LI$(): number { if (MathConstants.SQRT3BY3 == null) { MathConstants.SQRT3BY3 = MathConstants.SQRT3_$LI$() / 3.0; }  return MathConstants.SQRT3BY3; }

    /**
     * Not-a-Number
     */
    public static NOT_A_NUMBER: number; public static NOT_A_NUMBER_$LI$(): number { if (MathConstants.NOT_A_NUMBER == null) { MathConstants.NOT_A_NUMBER = javaemul.internal.DoubleHelper.NaN; }  return MathConstants.NOT_A_NUMBER; }
}
MathConstants["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.MathConstants";