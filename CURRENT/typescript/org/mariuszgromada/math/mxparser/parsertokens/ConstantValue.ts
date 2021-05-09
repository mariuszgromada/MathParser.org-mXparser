import { mXparserConstants } from '../mXparserConstants';

/**
 * Constant Values - mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class ConstantValue {
    public static TYPE_ID: number = 9;

    public static TYPE_DESC: string = "Constant Value";

    public static PI_ID: number = 1;

    public static EULER_ID: number = 2;

    public static EULER_MASCHERONI_ID: number = 3;

    public static GOLDEN_RATIO_ID: number = 4;

    public static PLASTIC_ID: number = 5;

    public static EMBREE_TREFETHEN_ID: number = 6;

    public static FEIGENBAUM_DELTA_ID: number = 7;

    public static FEIGENBAUM_ALFA_ID: number = 8;

    public static TWIN_PRIME_ID: number = 9;

    public static MEISSEL_MERTEENS_ID: number = 10;

    public static BRAUN_TWIN_PRIME_ID: number = 11;

    public static BRAUN_PRIME_QUADR_ID: number = 12;

    public static BRUIJN_NEWMAN_ID: number = 13;

    public static CATALAN_ID: number = 14;

    public static LANDAU_RAMANUJAN_ID: number = 15;

    public static VISWANATH_ID: number = 16;

    public static LEGENDRE_ID: number = 17;

    public static RAMANUJAN_SOLDNER_ID: number = 18;

    public static ERDOS_BORWEIN_ID: number = 19;

    public static BERNSTEIN_ID: number = 20;

    public static GAUSS_KUZMIN_WIRSING_ID: number = 21;

    public static HAFNER_SARNAK_MCCURLEY_ID: number = 22;

    public static GOLOMB_DICKMAN_ID: number = 23;

    public static CAHEN_ID: number = 24;

    public static LAPLACE_LIMIT_ID: number = 25;

    public static ALLADI_GRINSTEAD_ID: number = 26;

    public static LENGYEL_ID: number = 27;

    public static LEVY_ID: number = 28;

    public static APERY_ID: number = 29;

    public static MILLS_ID: number = 30;

    public static BACKHOUSE_ID: number = 31;

    public static PORTER_ID: number = 32;

    public static LIEB_QUARE_ICE_ID: number = 33;

    public static NIVEN_ID: number = 34;

    public static SIERPINSKI_ID: number = 35;

    public static KHINCHIN_ID: number = 36;

    public static FRANSEN_ROBINSON_ID: number = 37;

    public static LANDAU_ID: number = 38;

    public static PARABOLIC_ID: number = 39;

    public static OMEGA_ID: number = 40;

    public static MRB_ID: number = 41;

    public static LI2_ID: number = 42;

    public static GOMPERTZ_ID: number = 43;

    public static LIGHT_SPEED_ID: number = 101;

    public static GRAVITATIONAL_CONSTANT_ID: number = 102;

    public static GRAVIT_ACC_EARTH_ID: number = 103;

    public static PLANCK_CONSTANT_ID: number = 104;

    public static PLANCK_CONSTANT_REDUCED_ID: number = 105;

    public static PLANCK_LENGTH_ID: number = 106;

    public static PLANCK_MASS_ID: number = 107;

    public static PLANCK_TIME_ID: number = 108;

    public static LIGHT_YEAR_ID: number = 201;

    public static ASTRONOMICAL_UNIT_ID: number = 202;

    public static PARSEC_ID: number = 203;

    public static KILOPARSEC_ID: number = 204;

    public static EARTH_RADIUS_EQUATORIAL_ID: number = 205;

    public static EARTH_RADIUS_POLAR_ID: number = 206;

    public static EARTH_RADIUS_MEAN_ID: number = 207;

    public static EARTH_MASS_ID: number = 208;

    public static EARTH_SEMI_MAJOR_AXIS_ID: number = 209;

    public static MOON_RADIUS_MEAN_ID: number = 210;

    public static MOON_MASS_ID: number = 211;

    public static MONN_SEMI_MAJOR_AXIS_ID: number = 212;

    public static SOLAR_RADIUS_ID: number = 213;

    public static SOLAR_MASS_ID: number = 214;

    public static MERCURY_RADIUS_MEAN_ID: number = 215;

    public static MERCURY_MASS_ID: number = 216;

    public static MERCURY_SEMI_MAJOR_AXIS_ID: number = 217;

    public static VENUS_RADIUS_MEAN_ID: number = 218;

    public static VENUS_MASS_ID: number = 219;

    public static VENUS_SEMI_MAJOR_AXIS_ID: number = 220;

    public static MARS_RADIUS_MEAN_ID: number = 221;

    public static MARS_MASS_ID: number = 222;

    public static MARS_SEMI_MAJOR_AXIS_ID: number = 223;

    public static JUPITER_RADIUS_MEAN_ID: number = 224;

    public static JUPITER_MASS_ID: number = 225;

    public static JUPITER_SEMI_MAJOR_AXIS_ID: number = 226;

    public static SATURN_RADIUS_MEAN_ID: number = 227;

    public static SATURN_MASS_ID: number = 228;

    public static SATURN_SEMI_MAJOR_AXIS_ID: number = 229;

    public static URANUS_RADIUS_MEAN_ID: number = 230;

    public static URANUS_MASS_ID: number = 231;

    public static URANUS_SEMI_MAJOR_AXIS_ID: number = 232;

    public static NEPTUNE_RADIUS_MEAN_ID: number = 233;

    public static NEPTUNE_MASS_ID: number = 234;

    public static NEPTUNE_SEMI_MAJOR_AXIS_ID: number = 235;

    public static TRUE_ID: number = 301;

    public static FALSE_ID: number = 302;

    public static NPAR_ID: number = 303;

    public static NAN_ID: number = 999;

    public static NaN: number = -1;

    public static PI_STR: string = "pi";

    public static EULER_STR: string = "e";

    public static EULER_MASCHERONI_STR: string = "[gam]";

    public static GOLDEN_RATIO_STR: string = "[phi]";

    public static PLASTIC_STR: string = "[PN]";

    public static EMBREE_TREFETHEN_STR: string = "[B*]";

    public static FEIGENBAUM_DELTA_STR: string = "[F\'d]";

    public static FEIGENBAUM_ALFA_STR: string = "[F\'a]";

    public static TWIN_PRIME_STR: string = "[C2]";

    public static MEISSEL_MERTEENS_STR: string = "[M1]";

    public static BRAUN_TWIN_PRIME_STR: string = "[B2]";

    public static BRAUN_PRIME_QUADR_STR: string = "[B4]";

    public static BRUIJN_NEWMAN_STR: string = "[BN\'L]";

    public static CATALAN_STR: string = "[Kat]";

    public static LANDAU_RAMANUJAN_STR: string = "[K*]";

    public static VISWANATH_STR: string = "[K.]";

    public static LEGENDRE_STR: string = "[B\'L]";

    public static RAMANUJAN_SOLDNER_STR: string = "[RS\'m]";

    public static ERDOS_BORWEIN_STR: string = "[EB\'e]";

    public static BERNSTEIN_STR: string = "[Bern]";

    public static GAUSS_KUZMIN_WIRSING_STR: string = "[GKW\'l]";

    public static HAFNER_SARNAK_MCCURLEY_STR: string = "[HSM\'s]";

    public static GOLOMB_DICKMAN_STR: string = "[lm]";

    public static CAHEN_STR: string = "[Cah]";

    public static LAPLACE_LIMIT_STR: string = "[Ll]";

    public static ALLADI_GRINSTEAD_STR: string = "[AG]";

    public static LENGYEL_STR: string = "[L*]";

    public static LEVY_STR: string = "[L.]";

    public static APERY_STR: string = "[Dz3]";

    public static MILLS_STR: string = "[A3n]";

    public static BACKHOUSE_STR: string = "[Bh]";

    public static PORTER_STR: string = "[Pt]";

    public static LIEB_QUARE_ICE_STR: string = "[L2]";

    public static NIVEN_STR: string = "[Nv]";

    public static SIERPINSKI_STR: string = "[Ks]";

    public static KHINCHIN_STR: string = "[Kh]";

    public static FRANSEN_ROBINSON_STR: string = "[FR]";

    public static LANDAU_STR: string = "[La]";

    public static PARABOLIC_STR: string = "[P2]";

    public static OMEGA_STR: string = "[Om]";

    public static MRB_STR: string = "[MRB]";

    public static LI2_STR: string = "[li2]";

    public static GOMPERTZ_STR: string = "[EG]";

    public static LIGHT_SPEED_STR: string = "[c]";

    public static GRAVITATIONAL_CONSTANT_STR: string = "[G.]";

    public static GRAVIT_ACC_EARTH_STR: string = "[g]";

    public static PLANCK_CONSTANT_STR: string = "[hP]";

    public static PLANCK_CONSTANT_REDUCED_STR: string = "[h-]";

    public static PLANCK_LENGTH_STR: string = "[lP]";

    public static PLANCK_MASS_STR: string = "[mP]";

    public static PLANCK_TIME_STR: string = "[tP]";

    public static LIGHT_YEAR_STR: string = "[ly]";

    public static ASTRONOMICAL_UNIT_STR: string = "[au]";

    public static PARSEC_STR: string = "[pc]";

    public static KILOPARSEC_STR: string = "[kpc]";

    public static EARTH_RADIUS_EQUATORIAL_STR: string = "[Earth-R-eq]";

    public static EARTH_RADIUS_POLAR_STR: string = "[Earth-R-po]";

    public static EARTH_RADIUS_MEAN_STR: string = "[Earth-R]";

    public static EARTH_MASS_STR: string = "[Earth-M]";

    public static EARTH_SEMI_MAJOR_AXIS_STR: string = "[Earth-D]";

    public static MOON_RADIUS_MEAN_STR: string = "[Moon-R]";

    public static MOON_MASS_STR: string = "[Moon-M]";

    public static MONN_SEMI_MAJOR_AXIS_STR: string = "[Moon-D]";

    public static SOLAR_RADIUS_STR: string = "[Solar-R]";

    public static SOLAR_MASS_STR: string = "[Solar-M]";

    public static MERCURY_RADIUS_MEAN_STR: string = "[Mercury-R]";

    public static MERCURY_MASS_STR: string = "[Mercury-M]";

    public static MERCURY_SEMI_MAJOR_AXIS_STR: string = "[Mercury-D]";

    public static VENUS_RADIUS_MEAN_STR: string = "[Venus-R]";

    public static VENUS_MASS_STR: string = "[Venus-M]";

    public static VENUS_SEMI_MAJOR_AXIS_STR: string = "[Venus-D]";

    public static MARS_RADIUS_MEAN_STR: string = "[Mars-R]";

    public static MARS_MASS_STR: string = "[Mars-M]";

    public static MARS_SEMI_MAJOR_AXIS_STR: string = "[Mars-D]";

    public static JUPITER_RADIUS_MEAN_STR: string = "[Jupiter-R]";

    public static JUPITER_MASS_STR: string = "[Jupiter-M]";

    public static JUPITER_SEMI_MAJOR_AXIS_STR: string = "[Jupiter-D]";

    public static SATURN_RADIUS_MEAN_STR: string = "[Saturn-R]";

    public static SATURN_MASS_STR: string = "[Saturn-M]";

    public static SATURN_SEMI_MAJOR_AXIS_STR: string = "[Saturn-D]";

    public static URANUS_RADIUS_MEAN_STR: string = "[Uranus-R]";

    public static URANUS_MASS_STR: string = "[Uranus-M]";

    public static URANUS_SEMI_MAJOR_AXIS_STR: string = "[Uranus-D]";

    public static NEPTUNE_RADIUS_MEAN_STR: string = "[Neptune-R]";

    public static NEPTUNE_MASS_STR: string = "[Neptune-M]";

    public static NEPTUNE_SEMI_MAJOR_AXIS_STR: string = "[Neptune-D]";

    public static TRUE_STR: string = "[true]";

    public static FALSE_STR: string = "[false]";

    public static NPAR_STR: string = "[npar]";

    public static NAN_STR: string = "[NaN]";

    public static PI_SYN: string; public static PI_SYN_$LI$(): string { if (ConstantValue.PI_SYN == null) { ConstantValue.PI_SYN = ConstantValue.PI_STR; }  return ConstantValue.PI_SYN; }

    public static EULER_SYN: string; public static EULER_SYN_$LI$(): string { if (ConstantValue.EULER_SYN == null) { ConstantValue.EULER_SYN = ConstantValue.EULER_STR; }  return ConstantValue.EULER_SYN; }

    public static EULER_MASCHERONI_SYN: string; public static EULER_MASCHERONI_SYN_$LI$(): string { if (ConstantValue.EULER_MASCHERONI_SYN == null) { ConstantValue.EULER_MASCHERONI_SYN = ConstantValue.EULER_MASCHERONI_STR; }  return ConstantValue.EULER_MASCHERONI_SYN; }

    public static GOLDEN_RATIO_SYN: string; public static GOLDEN_RATIO_SYN_$LI$(): string { if (ConstantValue.GOLDEN_RATIO_SYN == null) { ConstantValue.GOLDEN_RATIO_SYN = ConstantValue.GOLDEN_RATIO_STR; }  return ConstantValue.GOLDEN_RATIO_SYN; }

    public static PLASTIC_SYN: string; public static PLASTIC_SYN_$LI$(): string { if (ConstantValue.PLASTIC_SYN == null) { ConstantValue.PLASTIC_SYN = ConstantValue.PLASTIC_STR; }  return ConstantValue.PLASTIC_SYN; }

    public static EMBREE_TREFETHEN_SYN: string; public static EMBREE_TREFETHEN_SYN_$LI$(): string { if (ConstantValue.EMBREE_TREFETHEN_SYN == null) { ConstantValue.EMBREE_TREFETHEN_SYN = ConstantValue.EMBREE_TREFETHEN_STR; }  return ConstantValue.EMBREE_TREFETHEN_SYN; }

    public static FEIGENBAUM_DELTA_SYN: string; public static FEIGENBAUM_DELTA_SYN_$LI$(): string { if (ConstantValue.FEIGENBAUM_DELTA_SYN == null) { ConstantValue.FEIGENBAUM_DELTA_SYN = ConstantValue.FEIGENBAUM_DELTA_STR; }  return ConstantValue.FEIGENBAUM_DELTA_SYN; }

    public static FEIGENBAUM_ALFA_SYN: string; public static FEIGENBAUM_ALFA_SYN_$LI$(): string { if (ConstantValue.FEIGENBAUM_ALFA_SYN == null) { ConstantValue.FEIGENBAUM_ALFA_SYN = ConstantValue.FEIGENBAUM_ALFA_STR; }  return ConstantValue.FEIGENBAUM_ALFA_SYN; }

    public static TWIN_PRIME_SYN: string; public static TWIN_PRIME_SYN_$LI$(): string { if (ConstantValue.TWIN_PRIME_SYN == null) { ConstantValue.TWIN_PRIME_SYN = ConstantValue.TWIN_PRIME_STR; }  return ConstantValue.TWIN_PRIME_SYN; }

    public static MEISSEL_MERTEENS_SYN: string; public static MEISSEL_MERTEENS_SYN_$LI$(): string { if (ConstantValue.MEISSEL_MERTEENS_SYN == null) { ConstantValue.MEISSEL_MERTEENS_SYN = ConstantValue.MEISSEL_MERTEENS_STR; }  return ConstantValue.MEISSEL_MERTEENS_SYN; }

    public static BRAUN_TWIN_PRIME_SYN: string; public static BRAUN_TWIN_PRIME_SYN_$LI$(): string { if (ConstantValue.BRAUN_TWIN_PRIME_SYN == null) { ConstantValue.BRAUN_TWIN_PRIME_SYN = ConstantValue.BRAUN_TWIN_PRIME_STR; }  return ConstantValue.BRAUN_TWIN_PRIME_SYN; }

    public static BRAUN_PRIME_QUADR_SYN: string; public static BRAUN_PRIME_QUADR_SYN_$LI$(): string { if (ConstantValue.BRAUN_PRIME_QUADR_SYN == null) { ConstantValue.BRAUN_PRIME_QUADR_SYN = ConstantValue.BRAUN_PRIME_QUADR_STR; }  return ConstantValue.BRAUN_PRIME_QUADR_SYN; }

    public static BRUIJN_NEWMAN_SYN: string; public static BRUIJN_NEWMAN_SYN_$LI$(): string { if (ConstantValue.BRUIJN_NEWMAN_SYN == null) { ConstantValue.BRUIJN_NEWMAN_SYN = ConstantValue.BRUIJN_NEWMAN_STR; }  return ConstantValue.BRUIJN_NEWMAN_SYN; }

    public static CATALAN_SYN: string; public static CATALAN_SYN_$LI$(): string { if (ConstantValue.CATALAN_SYN == null) { ConstantValue.CATALAN_SYN = ConstantValue.CATALAN_STR; }  return ConstantValue.CATALAN_SYN; }

    public static LANDAU_RAMANUJAN_SYN: string; public static LANDAU_RAMANUJAN_SYN_$LI$(): string { if (ConstantValue.LANDAU_RAMANUJAN_SYN == null) { ConstantValue.LANDAU_RAMANUJAN_SYN = ConstantValue.LANDAU_RAMANUJAN_STR; }  return ConstantValue.LANDAU_RAMANUJAN_SYN; }

    public static VISWANATH_SYN: string; public static VISWANATH_SYN_$LI$(): string { if (ConstantValue.VISWANATH_SYN == null) { ConstantValue.VISWANATH_SYN = ConstantValue.VISWANATH_STR; }  return ConstantValue.VISWANATH_SYN; }

    public static LEGENDRE_SYN: string; public static LEGENDRE_SYN_$LI$(): string { if (ConstantValue.LEGENDRE_SYN == null) { ConstantValue.LEGENDRE_SYN = ConstantValue.LEGENDRE_STR; }  return ConstantValue.LEGENDRE_SYN; }

    public static RAMANUJAN_SOLDNER_SYN: string; public static RAMANUJAN_SOLDNER_SYN_$LI$(): string { if (ConstantValue.RAMANUJAN_SOLDNER_SYN == null) { ConstantValue.RAMANUJAN_SOLDNER_SYN = ConstantValue.RAMANUJAN_SOLDNER_STR; }  return ConstantValue.RAMANUJAN_SOLDNER_SYN; }

    public static ERDOS_BORWEIN_SYN: string; public static ERDOS_BORWEIN_SYN_$LI$(): string { if (ConstantValue.ERDOS_BORWEIN_SYN == null) { ConstantValue.ERDOS_BORWEIN_SYN = ConstantValue.ERDOS_BORWEIN_STR; }  return ConstantValue.ERDOS_BORWEIN_SYN; }

    public static BERNSTEIN_SYN: string; public static BERNSTEIN_SYN_$LI$(): string { if (ConstantValue.BERNSTEIN_SYN == null) { ConstantValue.BERNSTEIN_SYN = ConstantValue.BERNSTEIN_STR; }  return ConstantValue.BERNSTEIN_SYN; }

    public static GAUSS_KUZMIN_WIRSING_SYN: string; public static GAUSS_KUZMIN_WIRSING_SYN_$LI$(): string { if (ConstantValue.GAUSS_KUZMIN_WIRSING_SYN == null) { ConstantValue.GAUSS_KUZMIN_WIRSING_SYN = ConstantValue.GAUSS_KUZMIN_WIRSING_STR; }  return ConstantValue.GAUSS_KUZMIN_WIRSING_SYN; }

    public static HAFNER_SARNAK_MCCURLEY_SYN: string; public static HAFNER_SARNAK_MCCURLEY_SYN_$LI$(): string { if (ConstantValue.HAFNER_SARNAK_MCCURLEY_SYN == null) { ConstantValue.HAFNER_SARNAK_MCCURLEY_SYN = ConstantValue.HAFNER_SARNAK_MCCURLEY_STR; }  return ConstantValue.HAFNER_SARNAK_MCCURLEY_SYN; }

    public static GOLOMB_DICKMAN_SYN: string; public static GOLOMB_DICKMAN_SYN_$LI$(): string { if (ConstantValue.GOLOMB_DICKMAN_SYN == null) { ConstantValue.GOLOMB_DICKMAN_SYN = ConstantValue.GOLOMB_DICKMAN_STR; }  return ConstantValue.GOLOMB_DICKMAN_SYN; }

    public static CAHEN_SYN: string; public static CAHEN_SYN_$LI$(): string { if (ConstantValue.CAHEN_SYN == null) { ConstantValue.CAHEN_SYN = ConstantValue.CAHEN_STR; }  return ConstantValue.CAHEN_SYN; }

    public static LAPLACE_LIMIT_SYN: string; public static LAPLACE_LIMIT_SYN_$LI$(): string { if (ConstantValue.LAPLACE_LIMIT_SYN == null) { ConstantValue.LAPLACE_LIMIT_SYN = ConstantValue.LAPLACE_LIMIT_STR; }  return ConstantValue.LAPLACE_LIMIT_SYN; }

    public static ALLADI_GRINSTEAD_SYN: string; public static ALLADI_GRINSTEAD_SYN_$LI$(): string { if (ConstantValue.ALLADI_GRINSTEAD_SYN == null) { ConstantValue.ALLADI_GRINSTEAD_SYN = ConstantValue.ALLADI_GRINSTEAD_STR; }  return ConstantValue.ALLADI_GRINSTEAD_SYN; }

    public static LENGYEL_SYN: string; public static LENGYEL_SYN_$LI$(): string { if (ConstantValue.LENGYEL_SYN == null) { ConstantValue.LENGYEL_SYN = ConstantValue.LENGYEL_STR; }  return ConstantValue.LENGYEL_SYN; }

    public static LEVY_SYN: string; public static LEVY_SYN_$LI$(): string { if (ConstantValue.LEVY_SYN == null) { ConstantValue.LEVY_SYN = ConstantValue.LEVY_STR; }  return ConstantValue.LEVY_SYN; }

    public static APERY_SYN: string; public static APERY_SYN_$LI$(): string { if (ConstantValue.APERY_SYN == null) { ConstantValue.APERY_SYN = ConstantValue.APERY_STR; }  return ConstantValue.APERY_SYN; }

    public static MILLS_SYN: string; public static MILLS_SYN_$LI$(): string { if (ConstantValue.MILLS_SYN == null) { ConstantValue.MILLS_SYN = ConstantValue.MILLS_STR; }  return ConstantValue.MILLS_SYN; }

    public static BACKHOUSE_SYN: string; public static BACKHOUSE_SYN_$LI$(): string { if (ConstantValue.BACKHOUSE_SYN == null) { ConstantValue.BACKHOUSE_SYN = ConstantValue.BACKHOUSE_STR; }  return ConstantValue.BACKHOUSE_SYN; }

    public static PORTER_SYN: string; public static PORTER_SYN_$LI$(): string { if (ConstantValue.PORTER_SYN == null) { ConstantValue.PORTER_SYN = ConstantValue.PORTER_STR; }  return ConstantValue.PORTER_SYN; }

    public static LIEB_QUARE_ICE_SYN: string; public static LIEB_QUARE_ICE_SYN_$LI$(): string { if (ConstantValue.LIEB_QUARE_ICE_SYN == null) { ConstantValue.LIEB_QUARE_ICE_SYN = ConstantValue.LIEB_QUARE_ICE_STR; }  return ConstantValue.LIEB_QUARE_ICE_SYN; }

    public static NIVEN_SYN: string; public static NIVEN_SYN_$LI$(): string { if (ConstantValue.NIVEN_SYN == null) { ConstantValue.NIVEN_SYN = ConstantValue.NIVEN_STR; }  return ConstantValue.NIVEN_SYN; }

    public static SIERPINSKI_SYN: string; public static SIERPINSKI_SYN_$LI$(): string { if (ConstantValue.SIERPINSKI_SYN == null) { ConstantValue.SIERPINSKI_SYN = ConstantValue.SIERPINSKI_STR; }  return ConstantValue.SIERPINSKI_SYN; }

    public static KHINCHIN_SYN: string; public static KHINCHIN_SYN_$LI$(): string { if (ConstantValue.KHINCHIN_SYN == null) { ConstantValue.KHINCHIN_SYN = ConstantValue.KHINCHIN_STR; }  return ConstantValue.KHINCHIN_SYN; }

    public static FRANSEN_ROBINSON_SYN: string; public static FRANSEN_ROBINSON_SYN_$LI$(): string { if (ConstantValue.FRANSEN_ROBINSON_SYN == null) { ConstantValue.FRANSEN_ROBINSON_SYN = ConstantValue.FRANSEN_ROBINSON_STR; }  return ConstantValue.FRANSEN_ROBINSON_SYN; }

    public static LANDAU_SYN: string; public static LANDAU_SYN_$LI$(): string { if (ConstantValue.LANDAU_SYN == null) { ConstantValue.LANDAU_SYN = ConstantValue.LANDAU_STR; }  return ConstantValue.LANDAU_SYN; }

    public static PARABOLIC_SYN: string; public static PARABOLIC_SYN_$LI$(): string { if (ConstantValue.PARABOLIC_SYN == null) { ConstantValue.PARABOLIC_SYN = ConstantValue.PARABOLIC_STR; }  return ConstantValue.PARABOLIC_SYN; }

    public static OMEGA_SYN: string; public static OMEGA_SYN_$LI$(): string { if (ConstantValue.OMEGA_SYN == null) { ConstantValue.OMEGA_SYN = ConstantValue.OMEGA_STR; }  return ConstantValue.OMEGA_SYN; }

    public static MRB_SYN: string; public static MRB_SYN_$LI$(): string { if (ConstantValue.MRB_SYN == null) { ConstantValue.MRB_SYN = ConstantValue.MRB_STR; }  return ConstantValue.MRB_SYN; }

    public static LI2_SYN: string; public static LI2_SYN_$LI$(): string { if (ConstantValue.LI2_SYN == null) { ConstantValue.LI2_SYN = ConstantValue.LI2_STR; }  return ConstantValue.LI2_SYN; }

    public static GOMPERTZ_SYN: string; public static GOMPERTZ_SYN_$LI$(): string { if (ConstantValue.GOMPERTZ_SYN == null) { ConstantValue.GOMPERTZ_SYN = ConstantValue.GOMPERTZ_STR; }  return ConstantValue.GOMPERTZ_SYN; }

    public static LIGHT_SPEED_SYN: string; public static LIGHT_SPEED_SYN_$LI$(): string { if (ConstantValue.LIGHT_SPEED_SYN == null) { ConstantValue.LIGHT_SPEED_SYN = ConstantValue.LIGHT_SPEED_STR; }  return ConstantValue.LIGHT_SPEED_SYN; }

    public static GRAVITATIONAL_CONSTANT_SYN: string; public static GRAVITATIONAL_CONSTANT_SYN_$LI$(): string { if (ConstantValue.GRAVITATIONAL_CONSTANT_SYN == null) { ConstantValue.GRAVITATIONAL_CONSTANT_SYN = ConstantValue.GRAVITATIONAL_CONSTANT_STR; }  return ConstantValue.GRAVITATIONAL_CONSTANT_SYN; }

    public static GRAVIT_ACC_EARTH_SYN: string; public static GRAVIT_ACC_EARTH_SYN_$LI$(): string { if (ConstantValue.GRAVIT_ACC_EARTH_SYN == null) { ConstantValue.GRAVIT_ACC_EARTH_SYN = ConstantValue.GRAVIT_ACC_EARTH_STR; }  return ConstantValue.GRAVIT_ACC_EARTH_SYN; }

    public static PLANCK_CONSTANT_SYN: string; public static PLANCK_CONSTANT_SYN_$LI$(): string { if (ConstantValue.PLANCK_CONSTANT_SYN == null) { ConstantValue.PLANCK_CONSTANT_SYN = ConstantValue.PLANCK_CONSTANT_STR; }  return ConstantValue.PLANCK_CONSTANT_SYN; }

    public static PLANCK_CONSTANT_REDUCED_SYN: string; public static PLANCK_CONSTANT_REDUCED_SYN_$LI$(): string { if (ConstantValue.PLANCK_CONSTANT_REDUCED_SYN == null) { ConstantValue.PLANCK_CONSTANT_REDUCED_SYN = ConstantValue.PLANCK_CONSTANT_REDUCED_STR; }  return ConstantValue.PLANCK_CONSTANT_REDUCED_SYN; }

    public static PLANCK_LENGTH_SYN: string; public static PLANCK_LENGTH_SYN_$LI$(): string { if (ConstantValue.PLANCK_LENGTH_SYN == null) { ConstantValue.PLANCK_LENGTH_SYN = ConstantValue.PLANCK_LENGTH_STR; }  return ConstantValue.PLANCK_LENGTH_SYN; }

    public static PLANCK_MASS_SYN: string; public static PLANCK_MASS_SYN_$LI$(): string { if (ConstantValue.PLANCK_MASS_SYN == null) { ConstantValue.PLANCK_MASS_SYN = ConstantValue.PLANCK_MASS_STR; }  return ConstantValue.PLANCK_MASS_SYN; }

    public static PLANCK_TIME_SYN: string; public static PLANCK_TIME_SYN_$LI$(): string { if (ConstantValue.PLANCK_TIME_SYN == null) { ConstantValue.PLANCK_TIME_SYN = ConstantValue.PLANCK_TIME_STR; }  return ConstantValue.PLANCK_TIME_SYN; }

    public static LIGHT_YEAR_SYN: string; public static LIGHT_YEAR_SYN_$LI$(): string { if (ConstantValue.LIGHT_YEAR_SYN == null) { ConstantValue.LIGHT_YEAR_SYN = ConstantValue.LIGHT_YEAR_STR; }  return ConstantValue.LIGHT_YEAR_SYN; }

    public static ASTRONOMICAL_UNIT_SYN: string; public static ASTRONOMICAL_UNIT_SYN_$LI$(): string { if (ConstantValue.ASTRONOMICAL_UNIT_SYN == null) { ConstantValue.ASTRONOMICAL_UNIT_SYN = ConstantValue.ASTRONOMICAL_UNIT_STR; }  return ConstantValue.ASTRONOMICAL_UNIT_SYN; }

    public static PARSEC_SYN: string; public static PARSEC_SYN_$LI$(): string { if (ConstantValue.PARSEC_SYN == null) { ConstantValue.PARSEC_SYN = ConstantValue.PARSEC_STR; }  return ConstantValue.PARSEC_SYN; }

    public static KILOPARSEC_SYN: string; public static KILOPARSEC_SYN_$LI$(): string { if (ConstantValue.KILOPARSEC_SYN == null) { ConstantValue.KILOPARSEC_SYN = ConstantValue.KILOPARSEC_STR; }  return ConstantValue.KILOPARSEC_SYN; }

    public static EARTH_RADIUS_EQUATORIAL_SYN: string; public static EARTH_RADIUS_EQUATORIAL_SYN_$LI$(): string { if (ConstantValue.EARTH_RADIUS_EQUATORIAL_SYN == null) { ConstantValue.EARTH_RADIUS_EQUATORIAL_SYN = ConstantValue.EARTH_RADIUS_EQUATORIAL_STR; }  return ConstantValue.EARTH_RADIUS_EQUATORIAL_SYN; }

    public static EARTH_RADIUS_POLAR_SYN: string; public static EARTH_RADIUS_POLAR_SYN_$LI$(): string { if (ConstantValue.EARTH_RADIUS_POLAR_SYN == null) { ConstantValue.EARTH_RADIUS_POLAR_SYN = ConstantValue.EARTH_RADIUS_POLAR_STR; }  return ConstantValue.EARTH_RADIUS_POLAR_SYN; }

    public static EARTH_RADIUS_MEAN_SYN: string; public static EARTH_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.EARTH_RADIUS_MEAN_SYN == null) { ConstantValue.EARTH_RADIUS_MEAN_SYN = ConstantValue.EARTH_RADIUS_MEAN_STR; }  return ConstantValue.EARTH_RADIUS_MEAN_SYN; }

    public static EARTH_MASS_SYN: string; public static EARTH_MASS_SYN_$LI$(): string { if (ConstantValue.EARTH_MASS_SYN == null) { ConstantValue.EARTH_MASS_SYN = ConstantValue.EARTH_MASS_STR; }  return ConstantValue.EARTH_MASS_SYN; }

    public static EARTH_SEMI_MAJOR_AXIS_SYN: string; public static EARTH_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.EARTH_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.EARTH_SEMI_MAJOR_AXIS_SYN = ConstantValue.EARTH_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.EARTH_SEMI_MAJOR_AXIS_SYN; }

    public static MOON_RADIUS_MEAN_SYN: string; public static MOON_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.MOON_RADIUS_MEAN_SYN == null) { ConstantValue.MOON_RADIUS_MEAN_SYN = ConstantValue.MOON_RADIUS_MEAN_STR; }  return ConstantValue.MOON_RADIUS_MEAN_SYN; }

    public static MOON_MASS_SYN: string; public static MOON_MASS_SYN_$LI$(): string { if (ConstantValue.MOON_MASS_SYN == null) { ConstantValue.MOON_MASS_SYN = ConstantValue.MOON_MASS_STR; }  return ConstantValue.MOON_MASS_SYN; }

    public static MONN_SEMI_MAJOR_AXIS_SYN: string; public static MONN_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.MONN_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.MONN_SEMI_MAJOR_AXIS_SYN = ConstantValue.MONN_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.MONN_SEMI_MAJOR_AXIS_SYN; }

    public static SOLAR_RADIUS_SYN: string; public static SOLAR_RADIUS_SYN_$LI$(): string { if (ConstantValue.SOLAR_RADIUS_SYN == null) { ConstantValue.SOLAR_RADIUS_SYN = ConstantValue.SOLAR_RADIUS_STR; }  return ConstantValue.SOLAR_RADIUS_SYN; }

    public static SOLAR_MASS_SYN: string; public static SOLAR_MASS_SYN_$LI$(): string { if (ConstantValue.SOLAR_MASS_SYN == null) { ConstantValue.SOLAR_MASS_SYN = ConstantValue.SOLAR_MASS_STR; }  return ConstantValue.SOLAR_MASS_SYN; }

    public static MERCURY_RADIUS_MEAN_SYN: string; public static MERCURY_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.MERCURY_RADIUS_MEAN_SYN == null) { ConstantValue.MERCURY_RADIUS_MEAN_SYN = ConstantValue.MERCURY_RADIUS_MEAN_STR; }  return ConstantValue.MERCURY_RADIUS_MEAN_SYN; }

    public static MERCURY_MASS_SYN: string; public static MERCURY_MASS_SYN_$LI$(): string { if (ConstantValue.MERCURY_MASS_SYN == null) { ConstantValue.MERCURY_MASS_SYN = ConstantValue.MERCURY_MASS_STR; }  return ConstantValue.MERCURY_MASS_SYN; }

    public static MERCURY_SEMI_MAJOR_AXIS_SYN: string; public static MERCURY_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SYN = ConstantValue.MERCURY_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SYN; }

    public static VENUS_RADIUS_MEAN_SYN: string; public static VENUS_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.VENUS_RADIUS_MEAN_SYN == null) { ConstantValue.VENUS_RADIUS_MEAN_SYN = ConstantValue.VENUS_RADIUS_MEAN_STR; }  return ConstantValue.VENUS_RADIUS_MEAN_SYN; }

    public static VENUS_MASS_SYN: string; public static VENUS_MASS_SYN_$LI$(): string { if (ConstantValue.VENUS_MASS_SYN == null) { ConstantValue.VENUS_MASS_SYN = ConstantValue.VENUS_MASS_STR; }  return ConstantValue.VENUS_MASS_SYN; }

    public static VENUS_SEMI_MAJOR_AXIS_SYN: string; public static VENUS_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.VENUS_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.VENUS_SEMI_MAJOR_AXIS_SYN = ConstantValue.VENUS_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.VENUS_SEMI_MAJOR_AXIS_SYN; }

    public static MARS_RADIUS_MEAN_SYN: string; public static MARS_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.MARS_RADIUS_MEAN_SYN == null) { ConstantValue.MARS_RADIUS_MEAN_SYN = ConstantValue.MARS_RADIUS_MEAN_STR; }  return ConstantValue.MARS_RADIUS_MEAN_SYN; }

    public static MARS_MASS_SYN: string; public static MARS_MASS_SYN_$LI$(): string { if (ConstantValue.MARS_MASS_SYN == null) { ConstantValue.MARS_MASS_SYN = ConstantValue.MARS_MASS_STR; }  return ConstantValue.MARS_MASS_SYN; }

    public static MARS_SEMI_MAJOR_AXIS_SYN: string; public static MARS_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.MARS_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.MARS_SEMI_MAJOR_AXIS_SYN = ConstantValue.MARS_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.MARS_SEMI_MAJOR_AXIS_SYN; }

    public static JUPITER_RADIUS_MEAN_SYN: string; public static JUPITER_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.JUPITER_RADIUS_MEAN_SYN == null) { ConstantValue.JUPITER_RADIUS_MEAN_SYN = ConstantValue.JUPITER_RADIUS_MEAN_STR; }  return ConstantValue.JUPITER_RADIUS_MEAN_SYN; }

    public static JUPITER_MASS_SYN: string; public static JUPITER_MASS_SYN_$LI$(): string { if (ConstantValue.JUPITER_MASS_SYN == null) { ConstantValue.JUPITER_MASS_SYN = ConstantValue.JUPITER_MASS_STR; }  return ConstantValue.JUPITER_MASS_SYN; }

    public static JUPITER_SEMI_MAJOR_AXIS_SYN: string; public static JUPITER_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SYN = ConstantValue.JUPITER_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SYN; }

    public static SATURN_RADIUS_MEAN_SYN: string; public static SATURN_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.SATURN_RADIUS_MEAN_SYN == null) { ConstantValue.SATURN_RADIUS_MEAN_SYN = ConstantValue.SATURN_RADIUS_MEAN_STR; }  return ConstantValue.SATURN_RADIUS_MEAN_SYN; }

    public static SATURN_MASS_SYN: string; public static SATURN_MASS_SYN_$LI$(): string { if (ConstantValue.SATURN_MASS_SYN == null) { ConstantValue.SATURN_MASS_SYN = ConstantValue.SATURN_MASS_STR; }  return ConstantValue.SATURN_MASS_SYN; }

    public static SATURN_SEMI_MAJOR_AXIS_SYN: string; public static SATURN_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.SATURN_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.SATURN_SEMI_MAJOR_AXIS_SYN = ConstantValue.SATURN_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.SATURN_SEMI_MAJOR_AXIS_SYN; }

    public static URANUS_RADIUS_MEAN_SYN: string; public static URANUS_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.URANUS_RADIUS_MEAN_SYN == null) { ConstantValue.URANUS_RADIUS_MEAN_SYN = ConstantValue.URANUS_RADIUS_MEAN_STR; }  return ConstantValue.URANUS_RADIUS_MEAN_SYN; }

    public static URANUS_MASS_SYN: string; public static URANUS_MASS_SYN_$LI$(): string { if (ConstantValue.URANUS_MASS_SYN == null) { ConstantValue.URANUS_MASS_SYN = ConstantValue.URANUS_MASS_STR; }  return ConstantValue.URANUS_MASS_SYN; }

    public static URANUS_SEMI_MAJOR_AXIS_SYN: string; public static URANUS_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.URANUS_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.URANUS_SEMI_MAJOR_AXIS_SYN = ConstantValue.URANUS_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.URANUS_SEMI_MAJOR_AXIS_SYN; }

    public static NEPTUNE_RADIUS_MEAN_SYN: string; public static NEPTUNE_RADIUS_MEAN_SYN_$LI$(): string { if (ConstantValue.NEPTUNE_RADIUS_MEAN_SYN == null) { ConstantValue.NEPTUNE_RADIUS_MEAN_SYN = ConstantValue.NEPTUNE_RADIUS_MEAN_STR; }  return ConstantValue.NEPTUNE_RADIUS_MEAN_SYN; }

    public static NEPTUNE_MASS_SYN: string; public static NEPTUNE_MASS_SYN_$LI$(): string { if (ConstantValue.NEPTUNE_MASS_SYN == null) { ConstantValue.NEPTUNE_MASS_SYN = ConstantValue.NEPTUNE_MASS_STR; }  return ConstantValue.NEPTUNE_MASS_SYN; }

    public static NEPTUNE_SEMI_MAJOR_AXIS_SYN: string; public static NEPTUNE_SEMI_MAJOR_AXIS_SYN_$LI$(): string { if (ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SYN == null) { ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SYN = ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_STR; }  return ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SYN; }

    public static TRUE_SYN: string; public static TRUE_SYN_$LI$(): string { if (ConstantValue.TRUE_SYN == null) { ConstantValue.TRUE_SYN = ConstantValue.TRUE_STR; }  return ConstantValue.TRUE_SYN; }

    public static FALSE_SYN: string; public static FALSE_SYN_$LI$(): string { if (ConstantValue.FALSE_SYN == null) { ConstantValue.FALSE_SYN = ConstantValue.FALSE_STR; }  return ConstantValue.FALSE_SYN; }

    public static NPAR_SYN: string; public static NPAR_SYN_$LI$(): string { if (ConstantValue.NPAR_SYN == null) { ConstantValue.NPAR_SYN = ConstantValue.NPAR_STR; }  return ConstantValue.NPAR_SYN; }

    public static NAN_SYN: string; public static NAN_SYN_$LI$(): string { if (ConstantValue.NAN_SYN == null) { ConstantValue.NAN_SYN = ConstantValue.NAN_STR; }  return ConstantValue.NAN_SYN; }

    public static PI_DESC: string = "Pi, Archimedes\' constant or Ludolph\'s number";

    public static EULER_DESC: string = "Napier\'s constant, or Euler\'s number, base of Natural logarithm";

    public static EULER_MASCHERONI_DESC: string = "Euler-Mascheroni constant";

    public static GOLDEN_RATIO_DESC: string = "Golden ratio";

    public static PLASTIC_DESC: string = "Plastic constant";

    public static EMBREE_TREFETHEN_DESC: string = "Embree-Trefethen constant";

    public static FEIGENBAUM_DELTA_DESC: string = "Feigenbaum constant alfa";

    public static FEIGENBAUM_ALFA_DESC: string = "Feigenbaum constant delta";

    public static TWIN_PRIME_DESC: string = "Twin prime constant";

    public static MEISSEL_MERTEENS_DESC: string = "Meissel-Mertens constant";

    public static BRAUN_TWIN_PRIME_DESC: string = "Brun\'s constant for twin primes";

    public static BRAUN_PRIME_QUADR_DESC: string = "Brun\'s constant for prime quadruplets";

    public static BRUIJN_NEWMAN_DESC: string = "de Bruijn-Newman constant";

    public static CATALAN_DESC: string = "Catalan\'s constant";

    public static LANDAU_RAMANUJAN_DESC: string = "Landau-Ramanujan constant";

    public static VISWANATH_DESC: string = "Viswanath\'s constant";

    public static LEGENDRE_DESC: string = "Legendre\'s constant";

    public static RAMANUJAN_SOLDNER_DESC: string = "Ramanujan-Soldner constant";

    public static ERDOS_BORWEIN_DESC: string = "Erdos-Borwein constant";

    public static BERNSTEIN_DESC: string = "Bernstein\'s constant";

    public static GAUSS_KUZMIN_WIRSING_DESC: string = "Gauss-Kuzmin-Wirsing constant";

    public static HAFNER_SARNAK_MCCURLEY_DESC: string = "Hafner-Sarnak-McCurley constant";

    public static GOLOMB_DICKMAN_DESC: string = "Golomb-Dickman constant";

    public static CAHEN_DESC: string = "Cahen\'s constant";

    public static LAPLACE_LIMIT_DESC: string = "Laplace limit";

    public static ALLADI_GRINSTEAD_DESC: string = "Alladi-Grinstead constant";

    public static LENGYEL_DESC: string = "Lengyel\'s constant";

    public static LEVY_DESC: string = "Levy\'s constant";

    public static APERY_DESC: string = "Apery\'s constant";

    public static MILLS_DESC: string = "Mills\' constant";

    public static BACKHOUSE_DESC: string = "Backhouse\'s constant";

    public static PORTER_DESC: string = "Porter\'s constant";

    public static LIEB_QUARE_ICE_DESC: string = "Lieb\'s square ice constant";

    public static NIVEN_DESC: string = "Niven\'s constant";

    public static SIERPINSKI_DESC: string = "Sierpinski\'s constant";

    public static KHINCHIN_DESC: string = "Khinchin\'s constant";

    public static FRANSEN_ROBINSON_DESC: string = "Fransen-Robinson constant";

    public static LANDAU_DESC: string = "Landau\'s constant";

    public static PARABOLIC_DESC: string = "Parabolic constant";

    public static OMEGA_DESC: string = "Omega constant";

    public static MRB_DESC: string = "MRB constant";

    public static LI2_DESC: string = "li(2) - Logarithmic integral function at x=2";

    public static GOMPERTZ_DESC: string = "Gompertz constant";

    public static LIGHT_SPEED_DESC: string = "<Physical Constant> Light speed in vacuum [m/s] (m=1, s=1)";

    public static GRAVITATIONAL_CONSTANT_DESC: string = "<Physical Constant> Gravitational constant (m=1, kg=1, s=1)]";

    public static GRAVIT_ACC_EARTH_DESC: string = "<Physical Constant> Gravitational acceleration on Earth [m/s^2] (m=1, s=1)";

    public static PLANCK_CONSTANT_DESC: string = "<Physical Constant> Planck constant (m=1, kg=1, s=1)";

    public static PLANCK_CONSTANT_REDUCED_DESC: string = "<Physical Constant> Reduced Planck constant / Dirac constant (m=1, kg=1, s=1)]";

    public static PLANCK_LENGTH_DESC: string = "<Physical Constant> Planck length [m] (m=1)";

    public static PLANCK_MASS_DESC: string = "<Physical Constant> Planck mass [kg] (kg=1)";

    public static PLANCK_TIME_DESC: string = "<Physical Constant> Planck time [s] (s=1)";

    public static LIGHT_YEAR_DESC: string = "<Astronomical Constant> Light year [m] (m=1)";

    public static ASTRONOMICAL_UNIT_DESC: string = "<Astronomical Constant> Astronomical unit [m] (m=1)";

    public static PARSEC_DESC: string = "<Astronomical Constant> Parsec [m] (m=1)";

    public static KILOPARSEC_DESC: string = "<Astronomical Constant> Kiloparsec [m] (m=1)";

    public static EARTH_RADIUS_EQUATORIAL_DESC: string = "<Astronomical Constant> Earth equatorial radius [m] (m=1)";

    public static EARTH_RADIUS_POLAR_DESC: string = "<Astronomical Constant> Earth polar radius [m] (m=1)";

    public static EARTH_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Earth mean radius (m=1)";

    public static EARTH_MASS_DESC: string = "<Astronomical Constant> Earth mass [kg] (kg=1)";

    public static EARTH_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Earth-Sun distance - semi major axis [m] (m=1)";

    public static MOON_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Moon mean radius [m] (m=1)";

    public static MOON_MASS_DESC: string = "<Astronomical Constant> Moon mass [kg] (kg=1)";

    public static MONN_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Moon-Earth distance - semi major axis [m] (m=1)";

    public static SOLAR_RADIUS_DESC: string = "<Astronomical Constant> Solar mean radius [m] (m=1)";

    public static SOLAR_MASS_DESC: string = "<Astronomical Constant> Solar mass [kg] (kg=1)";

    public static MERCURY_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Mercury mean radius [m] (m=1)";

    public static MERCURY_MASS_DESC: string = "<Astronomical Constant> Mercury mass [kg] (kg=1)";

    public static MERCURY_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Mercury-Sun distance - semi major axis [m] (m=1)";

    public static VENUS_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Venus mean radius [m] (m=1)";

    public static VENUS_MASS_DESC: string = "<Astronomical Constant> Venus mass [kg] (kg=1)";

    public static VENUS_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Venus-Sun distance - semi major axis [m] (m=1)";

    public static MARS_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Mars mean radius [m] (m=1)";

    public static MARS_MASS_DESC: string = "<Astronomical Constant> Mars mass [kg] (kg=1)";

    public static MARS_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Mars-Sun distance - semi major axis [m] (m=1)";

    public static JUPITER_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Jupiter mean radius [m] (m=1)";

    public static JUPITER_MASS_DESC: string = "<Astronomical Constant> Jupiter mass [kg] (kg=1)";

    public static JUPITER_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Jupiter-Sun distance - semi major axis [m] (m=1)";

    public static SATURN_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Saturn mean radius [m] (m=1)";

    public static SATURN_MASS_DESC: string = "<Astronomical Constant> Saturn mass [kg] (kg=1)";

    public static SATURN_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Saturn-Sun distance - semi major axis [m] (m=1)";

    public static URANUS_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Uranus mean radius [m] (m=1)";

    public static URANUS_MASS_DESC: string = "<Astronomical Constant> Uranus mass [kg] (kg=1)";

    public static URANUS_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Uranus-Sun distance - semi major axis [m] (m=1)";

    public static NEPTUNE_RADIUS_MEAN_DESC: string = "<Astronomical Constant> Neptune mean radius [m] (m=1)";

    public static NEPTUNE_MASS_DESC: string = "<Astronomical Constant> Neptune mass [kg] (kg=1)";

    public static NEPTUNE_SEMI_MAJOR_AXIS_DESC: string = "<Astronomical Constant> Neptune-Sun distance - semi major axis [m] (m=1)";

    public static TRUE_DESC: string = "Boolean True represented as double, [true] = 1";

    public static FALSE_DESC: string = "Boolean False represented as double, [false] = 0";

    public static NPAR_DESC: string = "Automatically generated constant for user defined functions, returns number of given function parameters";

    public static NAN_DESC: string = "Not-a-Number";

    public static PI_SINCE: string; public static PI_SINCE_$LI$(): string { if (ConstantValue.PI_SINCE == null) { ConstantValue.PI_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.PI_SINCE; }

    public static EULER_SINCE: string; public static EULER_SINCE_$LI$(): string { if (ConstantValue.EULER_SINCE == null) { ConstantValue.EULER_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.EULER_SINCE; }

    public static EULER_MASCHERONI_SINCE: string; public static EULER_MASCHERONI_SINCE_$LI$(): string { if (ConstantValue.EULER_MASCHERONI_SINCE == null) { ConstantValue.EULER_MASCHERONI_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.EULER_MASCHERONI_SINCE; }

    public static GOLDEN_RATIO_SINCE: string; public static GOLDEN_RATIO_SINCE_$LI$(): string { if (ConstantValue.GOLDEN_RATIO_SINCE == null) { ConstantValue.GOLDEN_RATIO_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.GOLDEN_RATIO_SINCE; }

    public static PLASTIC_SINCE: string; public static PLASTIC_SINCE_$LI$(): string { if (ConstantValue.PLASTIC_SINCE == null) { ConstantValue.PLASTIC_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.PLASTIC_SINCE; }

    public static EMBREE_TREFETHEN_SINCE: string; public static EMBREE_TREFETHEN_SINCE_$LI$(): string { if (ConstantValue.EMBREE_TREFETHEN_SINCE == null) { ConstantValue.EMBREE_TREFETHEN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.EMBREE_TREFETHEN_SINCE; }

    public static FEIGENBAUM_DELTA_SINCE: string; public static FEIGENBAUM_DELTA_SINCE_$LI$(): string { if (ConstantValue.FEIGENBAUM_DELTA_SINCE == null) { ConstantValue.FEIGENBAUM_DELTA_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.FEIGENBAUM_DELTA_SINCE; }

    public static FEIGENBAUM_ALFA_SINCE: string; public static FEIGENBAUM_ALFA_SINCE_$LI$(): string { if (ConstantValue.FEIGENBAUM_ALFA_SINCE == null) { ConstantValue.FEIGENBAUM_ALFA_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.FEIGENBAUM_ALFA_SINCE; }

    public static TWIN_PRIME_SINCE: string; public static TWIN_PRIME_SINCE_$LI$(): string { if (ConstantValue.TWIN_PRIME_SINCE == null) { ConstantValue.TWIN_PRIME_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.TWIN_PRIME_SINCE; }

    public static MEISSEL_MERTEENS_SINCE: string; public static MEISSEL_MERTEENS_SINCE_$LI$(): string { if (ConstantValue.MEISSEL_MERTEENS_SINCE == null) { ConstantValue.MEISSEL_MERTEENS_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.MEISSEL_MERTEENS_SINCE; }

    public static BRAUN_TWIN_PRIME_SINCE: string; public static BRAUN_TWIN_PRIME_SINCE_$LI$(): string { if (ConstantValue.BRAUN_TWIN_PRIME_SINCE == null) { ConstantValue.BRAUN_TWIN_PRIME_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.BRAUN_TWIN_PRIME_SINCE; }

    public static BRAUN_PRIME_QUADR_SINCE: string; public static BRAUN_PRIME_QUADR_SINCE_$LI$(): string { if (ConstantValue.BRAUN_PRIME_QUADR_SINCE == null) { ConstantValue.BRAUN_PRIME_QUADR_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.BRAUN_PRIME_QUADR_SINCE; }

    public static BRUIJN_NEWMAN_SINCE: string; public static BRUIJN_NEWMAN_SINCE_$LI$(): string { if (ConstantValue.BRUIJN_NEWMAN_SINCE == null) { ConstantValue.BRUIJN_NEWMAN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.BRUIJN_NEWMAN_SINCE; }

    public static CATALAN_SINCE: string; public static CATALAN_SINCE_$LI$(): string { if (ConstantValue.CATALAN_SINCE == null) { ConstantValue.CATALAN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.CATALAN_SINCE; }

    public static LANDAU_RAMANUJAN_SINCE: string; public static LANDAU_RAMANUJAN_SINCE_$LI$(): string { if (ConstantValue.LANDAU_RAMANUJAN_SINCE == null) { ConstantValue.LANDAU_RAMANUJAN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.LANDAU_RAMANUJAN_SINCE; }

    public static VISWANATH_SINCE: string; public static VISWANATH_SINCE_$LI$(): string { if (ConstantValue.VISWANATH_SINCE == null) { ConstantValue.VISWANATH_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.VISWANATH_SINCE; }

    public static LEGENDRE_SINCE: string; public static LEGENDRE_SINCE_$LI$(): string { if (ConstantValue.LEGENDRE_SINCE == null) { ConstantValue.LEGENDRE_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.LEGENDRE_SINCE; }

    public static RAMANUJAN_SOLDNER_SINCE: string; public static RAMANUJAN_SOLDNER_SINCE_$LI$(): string { if (ConstantValue.RAMANUJAN_SOLDNER_SINCE == null) { ConstantValue.RAMANUJAN_SOLDNER_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.RAMANUJAN_SOLDNER_SINCE; }

    public static ERDOS_BORWEIN_SINCE: string; public static ERDOS_BORWEIN_SINCE_$LI$(): string { if (ConstantValue.ERDOS_BORWEIN_SINCE == null) { ConstantValue.ERDOS_BORWEIN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.ERDOS_BORWEIN_SINCE; }

    public static BERNSTEIN_SINCE: string; public static BERNSTEIN_SINCE_$LI$(): string { if (ConstantValue.BERNSTEIN_SINCE == null) { ConstantValue.BERNSTEIN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.BERNSTEIN_SINCE; }

    public static GAUSS_KUZMIN_WIRSING_SINCE: string; public static GAUSS_KUZMIN_WIRSING_SINCE_$LI$(): string { if (ConstantValue.GAUSS_KUZMIN_WIRSING_SINCE == null) { ConstantValue.GAUSS_KUZMIN_WIRSING_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.GAUSS_KUZMIN_WIRSING_SINCE; }

    public static HAFNER_SARNAK_MCCURLEY_SINCE: string; public static HAFNER_SARNAK_MCCURLEY_SINCE_$LI$(): string { if (ConstantValue.HAFNER_SARNAK_MCCURLEY_SINCE == null) { ConstantValue.HAFNER_SARNAK_MCCURLEY_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.HAFNER_SARNAK_MCCURLEY_SINCE; }

    public static GOLOMB_DICKMAN_SINCE: string; public static GOLOMB_DICKMAN_SINCE_$LI$(): string { if (ConstantValue.GOLOMB_DICKMAN_SINCE == null) { ConstantValue.GOLOMB_DICKMAN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.GOLOMB_DICKMAN_SINCE; }

    public static CAHEN_SINCE: string; public static CAHEN_SINCE_$LI$(): string { if (ConstantValue.CAHEN_SINCE == null) { ConstantValue.CAHEN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.CAHEN_SINCE; }

    public static LAPLACE_LIMIT_SINCE: string; public static LAPLACE_LIMIT_SINCE_$LI$(): string { if (ConstantValue.LAPLACE_LIMIT_SINCE == null) { ConstantValue.LAPLACE_LIMIT_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.LAPLACE_LIMIT_SINCE; }

    public static ALLADI_GRINSTEAD_SINCE: string; public static ALLADI_GRINSTEAD_SINCE_$LI$(): string { if (ConstantValue.ALLADI_GRINSTEAD_SINCE == null) { ConstantValue.ALLADI_GRINSTEAD_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.ALLADI_GRINSTEAD_SINCE; }

    public static LENGYEL_SINCE: string; public static LENGYEL_SINCE_$LI$(): string { if (ConstantValue.LENGYEL_SINCE == null) { ConstantValue.LENGYEL_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.LENGYEL_SINCE; }

    public static LEVY_SINCE: string; public static LEVY_SINCE_$LI$(): string { if (ConstantValue.LEVY_SINCE == null) { ConstantValue.LEVY_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.LEVY_SINCE; }

    public static APERY_SINCE: string; public static APERY_SINCE_$LI$(): string { if (ConstantValue.APERY_SINCE == null) { ConstantValue.APERY_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.APERY_SINCE; }

    public static MILLS_SINCE: string; public static MILLS_SINCE_$LI$(): string { if (ConstantValue.MILLS_SINCE == null) { ConstantValue.MILLS_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.MILLS_SINCE; }

    public static BACKHOUSE_SINCE: string; public static BACKHOUSE_SINCE_$LI$(): string { if (ConstantValue.BACKHOUSE_SINCE == null) { ConstantValue.BACKHOUSE_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.BACKHOUSE_SINCE; }

    public static PORTER_SINCE: string; public static PORTER_SINCE_$LI$(): string { if (ConstantValue.PORTER_SINCE == null) { ConstantValue.PORTER_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.PORTER_SINCE; }

    public static LIEB_QUARE_ICE_SINCE: string; public static LIEB_QUARE_ICE_SINCE_$LI$(): string { if (ConstantValue.LIEB_QUARE_ICE_SINCE == null) { ConstantValue.LIEB_QUARE_ICE_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.LIEB_QUARE_ICE_SINCE; }

    public static NIVEN_SINCE: string; public static NIVEN_SINCE_$LI$(): string { if (ConstantValue.NIVEN_SINCE == null) { ConstantValue.NIVEN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.NIVEN_SINCE; }

    public static SIERPINSKI_SINCE: string; public static SIERPINSKI_SINCE_$LI$(): string { if (ConstantValue.SIERPINSKI_SINCE == null) { ConstantValue.SIERPINSKI_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.SIERPINSKI_SINCE; }

    public static KHINCHIN_SINCE: string; public static KHINCHIN_SINCE_$LI$(): string { if (ConstantValue.KHINCHIN_SINCE == null) { ConstantValue.KHINCHIN_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.KHINCHIN_SINCE; }

    public static FRANSEN_ROBINSON_SINCE: string; public static FRANSEN_ROBINSON_SINCE_$LI$(): string { if (ConstantValue.FRANSEN_ROBINSON_SINCE == null) { ConstantValue.FRANSEN_ROBINSON_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.FRANSEN_ROBINSON_SINCE; }

    public static LANDAU_SINCE: string; public static LANDAU_SINCE_$LI$(): string { if (ConstantValue.LANDAU_SINCE == null) { ConstantValue.LANDAU_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.LANDAU_SINCE; }

    public static PARABOLIC_SINCE: string; public static PARABOLIC_SINCE_$LI$(): string { if (ConstantValue.PARABOLIC_SINCE == null) { ConstantValue.PARABOLIC_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.PARABOLIC_SINCE; }

    public static OMEGA_SINCE: string; public static OMEGA_SINCE_$LI$(): string { if (ConstantValue.OMEGA_SINCE == null) { ConstantValue.OMEGA_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.OMEGA_SINCE; }

    public static MRB_SINCE: string; public static MRB_SINCE_$LI$(): string { if (ConstantValue.MRB_SINCE == null) { ConstantValue.MRB_SINCE = mXparserConstants.NAMEv10; }  return ConstantValue.MRB_SINCE; }

    public static LI2_SINCE: string; public static LI2_SINCE_$LI$(): string { if (ConstantValue.LI2_SINCE == null) { ConstantValue.LI2_SINCE = mXparserConstants.NAMEv23; }  return ConstantValue.LI2_SINCE; }

    public static GOMPERTZ_SINCE: string; public static GOMPERTZ_SINCE_$LI$(): string { if (ConstantValue.GOMPERTZ_SINCE == null) { ConstantValue.GOMPERTZ_SINCE = mXparserConstants.NAMEv23; }  return ConstantValue.GOMPERTZ_SINCE; }

    public static LIGHT_SPEED_SINCE: string; public static LIGHT_SPEED_SINCE_$LI$(): string { if (ConstantValue.LIGHT_SPEED_SINCE == null) { ConstantValue.LIGHT_SPEED_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.LIGHT_SPEED_SINCE; }

    public static GRAVITATIONAL_CONSTANT_SINCE: string; public static GRAVITATIONAL_CONSTANT_SINCE_$LI$(): string { if (ConstantValue.GRAVITATIONAL_CONSTANT_SINCE == null) { ConstantValue.GRAVITATIONAL_CONSTANT_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.GRAVITATIONAL_CONSTANT_SINCE; }

    public static GRAVIT_ACC_EARTH_SINCE: string; public static GRAVIT_ACC_EARTH_SINCE_$LI$(): string { if (ConstantValue.GRAVIT_ACC_EARTH_SINCE == null) { ConstantValue.GRAVIT_ACC_EARTH_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.GRAVIT_ACC_EARTH_SINCE; }

    public static PLANCK_CONSTANT_SINCE: string; public static PLANCK_CONSTANT_SINCE_$LI$(): string { if (ConstantValue.PLANCK_CONSTANT_SINCE == null) { ConstantValue.PLANCK_CONSTANT_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.PLANCK_CONSTANT_SINCE; }

    public static PLANCK_CONSTANT_REDUCED_SINCE: string; public static PLANCK_CONSTANT_REDUCED_SINCE_$LI$(): string { if (ConstantValue.PLANCK_CONSTANT_REDUCED_SINCE == null) { ConstantValue.PLANCK_CONSTANT_REDUCED_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.PLANCK_CONSTANT_REDUCED_SINCE; }

    public static PLANCK_LENGTH_SINCE: string; public static PLANCK_LENGTH_SINCE_$LI$(): string { if (ConstantValue.PLANCK_LENGTH_SINCE == null) { ConstantValue.PLANCK_LENGTH_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.PLANCK_LENGTH_SINCE; }

    public static PLANCK_MASS_SINCE: string; public static PLANCK_MASS_SINCE_$LI$(): string { if (ConstantValue.PLANCK_MASS_SINCE == null) { ConstantValue.PLANCK_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.PLANCK_MASS_SINCE; }

    public static PLANCK_TIME_SINCE: string; public static PLANCK_TIME_SINCE_$LI$(): string { if (ConstantValue.PLANCK_TIME_SINCE == null) { ConstantValue.PLANCK_TIME_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.PLANCK_TIME_SINCE; }

    public static LIGHT_YEAR_SINCE: string; public static LIGHT_YEAR_SINCE_$LI$(): string { if (ConstantValue.LIGHT_YEAR_SINCE == null) { ConstantValue.LIGHT_YEAR_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.LIGHT_YEAR_SINCE; }

    public static ASTRONOMICAL_UNIT_SINCE: string; public static ASTRONOMICAL_UNIT_SINCE_$LI$(): string { if (ConstantValue.ASTRONOMICAL_UNIT_SINCE == null) { ConstantValue.ASTRONOMICAL_UNIT_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.ASTRONOMICAL_UNIT_SINCE; }

    public static PARSEC_SINCE: string; public static PARSEC_SINCE_$LI$(): string { if (ConstantValue.PARSEC_SINCE == null) { ConstantValue.PARSEC_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.PARSEC_SINCE; }

    public static KILOPARSEC_SINCE: string; public static KILOPARSEC_SINCE_$LI$(): string { if (ConstantValue.KILOPARSEC_SINCE == null) { ConstantValue.KILOPARSEC_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.KILOPARSEC_SINCE; }

    public static EARTH_RADIUS_EQUATORIAL_SINCE: string; public static EARTH_RADIUS_EQUATORIAL_SINCE_$LI$(): string { if (ConstantValue.EARTH_RADIUS_EQUATORIAL_SINCE == null) { ConstantValue.EARTH_RADIUS_EQUATORIAL_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.EARTH_RADIUS_EQUATORIAL_SINCE; }

    public static EARTH_RADIUS_POLAR_SINCE: string; public static EARTH_RADIUS_POLAR_SINCE_$LI$(): string { if (ConstantValue.EARTH_RADIUS_POLAR_SINCE == null) { ConstantValue.EARTH_RADIUS_POLAR_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.EARTH_RADIUS_POLAR_SINCE; }

    public static EARTH_RADIUS_MEAN_SINCE: string; public static EARTH_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.EARTH_RADIUS_MEAN_SINCE == null) { ConstantValue.EARTH_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.EARTH_RADIUS_MEAN_SINCE; }

    public static EARTH_MASS_SINCE: string; public static EARTH_MASS_SINCE_$LI$(): string { if (ConstantValue.EARTH_MASS_SINCE == null) { ConstantValue.EARTH_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.EARTH_MASS_SINCE; }

    public static EARTH_SEMI_MAJOR_AXIS_SINCE: string; public static EARTH_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.EARTH_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.EARTH_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.EARTH_SEMI_MAJOR_AXIS_SINCE; }

    public static MOON_RADIUS_MEAN_SINCE: string; public static MOON_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.MOON_RADIUS_MEAN_SINCE == null) { ConstantValue.MOON_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MOON_RADIUS_MEAN_SINCE; }

    public static MOON_MASS_SINCE: string; public static MOON_MASS_SINCE_$LI$(): string { if (ConstantValue.MOON_MASS_SINCE == null) { ConstantValue.MOON_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MOON_MASS_SINCE; }

    public static MONN_SEMI_MAJOR_AXIS_SINCE: string; public static MONN_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.MONN_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.MONN_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MONN_SEMI_MAJOR_AXIS_SINCE; }

    public static SOLAR_RADIUS_SINCE: string; public static SOLAR_RADIUS_SINCE_$LI$(): string { if (ConstantValue.SOLAR_RADIUS_SINCE == null) { ConstantValue.SOLAR_RADIUS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.SOLAR_RADIUS_SINCE; }

    public static SOLAR_MASS_SINCE: string; public static SOLAR_MASS_SINCE_$LI$(): string { if (ConstantValue.SOLAR_MASS_SINCE == null) { ConstantValue.SOLAR_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.SOLAR_MASS_SINCE; }

    public static MERCURY_RADIUS_MEAN_SINCE: string; public static MERCURY_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.MERCURY_RADIUS_MEAN_SINCE == null) { ConstantValue.MERCURY_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MERCURY_RADIUS_MEAN_SINCE; }

    public static MERCURY_MASS_SINCE: string; public static MERCURY_MASS_SINCE_$LI$(): string { if (ConstantValue.MERCURY_MASS_SINCE == null) { ConstantValue.MERCURY_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MERCURY_MASS_SINCE; }

    public static MERCURY_SEMI_MAJOR_AXIS_SINCE: string; public static MERCURY_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SINCE; }

    public static VENUS_RADIUS_MEAN_SINCE: string; public static VENUS_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.VENUS_RADIUS_MEAN_SINCE == null) { ConstantValue.VENUS_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.VENUS_RADIUS_MEAN_SINCE; }

    public static VENUS_MASS_SINCE: string; public static VENUS_MASS_SINCE_$LI$(): string { if (ConstantValue.VENUS_MASS_SINCE == null) { ConstantValue.VENUS_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.VENUS_MASS_SINCE; }

    public static VENUS_SEMI_MAJOR_AXIS_SINCE: string; public static VENUS_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.VENUS_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.VENUS_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.VENUS_SEMI_MAJOR_AXIS_SINCE; }

    public static MARS_RADIUS_MEAN_SINCE: string; public static MARS_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.MARS_RADIUS_MEAN_SINCE == null) { ConstantValue.MARS_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MARS_RADIUS_MEAN_SINCE; }

    public static MARS_MASS_SINCE: string; public static MARS_MASS_SINCE_$LI$(): string { if (ConstantValue.MARS_MASS_SINCE == null) { ConstantValue.MARS_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MARS_MASS_SINCE; }

    public static MARS_SEMI_MAJOR_AXIS_SINCE: string; public static MARS_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.MARS_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.MARS_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.MARS_SEMI_MAJOR_AXIS_SINCE; }

    public static JUPITER_RADIUS_MEAN_SINCE: string; public static JUPITER_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.JUPITER_RADIUS_MEAN_SINCE == null) { ConstantValue.JUPITER_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.JUPITER_RADIUS_MEAN_SINCE; }

    public static JUPITER_MASS_SINCE: string; public static JUPITER_MASS_SINCE_$LI$(): string { if (ConstantValue.JUPITER_MASS_SINCE == null) { ConstantValue.JUPITER_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.JUPITER_MASS_SINCE; }

    public static JUPITER_SEMI_MAJOR_AXIS_SINCE: string; public static JUPITER_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SINCE; }

    public static SATURN_RADIUS_MEAN_SINCE: string; public static SATURN_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.SATURN_RADIUS_MEAN_SINCE == null) { ConstantValue.SATURN_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.SATURN_RADIUS_MEAN_SINCE; }

    public static SATURN_MASS_SINCE: string; public static SATURN_MASS_SINCE_$LI$(): string { if (ConstantValue.SATURN_MASS_SINCE == null) { ConstantValue.SATURN_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.SATURN_MASS_SINCE; }

    public static SATURN_SEMI_MAJOR_AXIS_SINCE: string; public static SATURN_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.SATURN_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.SATURN_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.SATURN_SEMI_MAJOR_AXIS_SINCE; }

    public static URANUS_RADIUS_MEAN_SINCE: string; public static URANUS_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.URANUS_RADIUS_MEAN_SINCE == null) { ConstantValue.URANUS_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.URANUS_RADIUS_MEAN_SINCE; }

    public static URANUS_MASS_SINCE: string; public static URANUS_MASS_SINCE_$LI$(): string { if (ConstantValue.URANUS_MASS_SINCE == null) { ConstantValue.URANUS_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.URANUS_MASS_SINCE; }

    public static URANUS_SEMI_MAJOR_AXIS_SINCE: string; public static URANUS_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.URANUS_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.URANUS_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.URANUS_SEMI_MAJOR_AXIS_SINCE; }

    public static NEPTUNE_RADIUS_MEAN_SINCE: string; public static NEPTUNE_RADIUS_MEAN_SINCE_$LI$(): string { if (ConstantValue.NEPTUNE_RADIUS_MEAN_SINCE == null) { ConstantValue.NEPTUNE_RADIUS_MEAN_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.NEPTUNE_RADIUS_MEAN_SINCE; }

    public static NEPTUNE_MASS_SINCE: string; public static NEPTUNE_MASS_SINCE_$LI$(): string { if (ConstantValue.NEPTUNE_MASS_SINCE == null) { ConstantValue.NEPTUNE_MASS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.NEPTUNE_MASS_SINCE; }

    public static NEPTUNE_SEMI_MAJOR_AXIS_SINCE: string; public static NEPTUNE_SEMI_MAJOR_AXIS_SINCE_$LI$(): string { if (ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SINCE == null) { ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SINCE = mXparserConstants.NAMEv40; }  return ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SINCE; }

    public static TRUE_SINCE: string; public static TRUE_SINCE_$LI$(): string { if (ConstantValue.TRUE_SINCE == null) { ConstantValue.TRUE_SINCE = mXparserConstants.NAMEv41; }  return ConstantValue.TRUE_SINCE; }

    public static FALSE_SINCE: string; public static FALSE_SINCE_$LI$(): string { if (ConstantValue.FALSE_SINCE == null) { ConstantValue.FALSE_SINCE = mXparserConstants.NAMEv41; }  return ConstantValue.FALSE_SINCE; }

    public static NPAR_SINCE: string; public static NPAR_SINCE_$LI$(): string { if (ConstantValue.NPAR_SINCE == null) { ConstantValue.NPAR_SINCE = mXparserConstants.NAMEv42; }  return ConstantValue.NPAR_SINCE; }

    public static NAN_SINCE: string; public static NAN_SINCE_$LI$(): string { if (ConstantValue.NAN_SINCE == null) { ConstantValue.NAN_SINCE = mXparserConstants.NAMEv41; }  return ConstantValue.NAN_SINCE; }
}
ConstantValue["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.ConstantValue";