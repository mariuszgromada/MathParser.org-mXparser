import { mXparserConstants } from '../mXparserConstants';

/**
 * Units - mXparserConstants tokens definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.1.0
 * @class
 */
export class Unit {
    public static TYPE_ID: number = 12;

    public static TYPE_DESC: string = "Unit";

    public static PERC_ID: number = 1;

    public static PROMIL_ID: number = 2;

    public static YOTTA_ID: number = 101;

    public static ZETTA_ID: number = 102;

    public static EXA_ID: number = 103;

    public static PETA_ID: number = 104;

    public static TERA_ID: number = 105;

    public static GIGA_ID: number = 106;

    public static MEGA_ID: number = 107;

    public static KILO_ID: number = 108;

    public static HECTO_ID: number = 109;

    public static DECA_ID: number = 110;

    public static DECI_ID: number = 111;

    public static CENTI_ID: number = 112;

    public static MILLI_ID: number = 113;

    public static MICRO_ID: number = 114;

    public static NANO_ID: number = 115;

    public static PICO_ID: number = 116;

    public static FEMTO_ID: number = 117;

    public static ATTO_ID: number = 118;

    public static ZEPTO_ID: number = 119;

    public static YOCTO_ID: number = 120;

    public static METRE_ID: number = 201;

    public static KILOMETRE_ID: number = 202;

    public static CENTIMETRE_ID: number = 203;

    public static MILLIMETRE_ID: number = 204;

    public static INCH_ID: number = 205;

    public static YARD_ID: number = 206;

    public static FEET_ID: number = 207;

    public static MILE_ID: number = 208;

    public static NAUTICAL_MILE_ID: number = 209;

    public static METRE2_ID: number = 301;

    public static CENTIMETRE2_ID: number = 302;

    public static MILLIMETRE2_ID: number = 303;

    public static ARE_ID: number = 304;

    public static HECTARE_ID: number = 305;

    public static ACRE_ID: number = 306;

    public static KILOMETRE2_ID: number = 307;

    public static MILLIMETRE3_ID: number = 401;

    public static CENTIMETRE3_ID: number = 402;

    public static METRE3_ID: number = 403;

    public static KILOMETRE3_ID: number = 404;

    public static MILLILITRE_ID: number = 405;

    public static LITRE_ID: number = 406;

    public static GALLON_ID: number = 407;

    public static PINT_ID: number = 408;

    public static SECOND_ID: number = 501;

    public static MILLISECOND_ID: number = 502;

    public static MINUTE_ID: number = 503;

    public static HOUR_ID: number = 504;

    public static DAY_ID: number = 505;

    public static WEEK_ID: number = 506;

    public static JULIAN_YEAR_ID: number = 507;

    public static KILOGRAM_ID: number = 508;

    public static GRAM_ID: number = 509;

    public static MILLIGRAM_ID: number = 510;

    public static DECAGRAM_ID: number = 511;

    public static TONNE_ID: number = 512;

    public static OUNCE_ID: number = 513;

    public static POUND_ID: number = 514;

    public static BIT_ID: number = 601;

    public static KILOBIT_ID: number = 602;

    public static MEGABIT_ID: number = 603;

    public static GIGABIT_ID: number = 604;

    public static TERABIT_ID: number = 605;

    public static PETABIT_ID: number = 606;

    public static EXABIT_ID: number = 607;

    public static ZETTABIT_ID: number = 608;

    public static YOTTABIT_ID: number = 609;

    public static BYTE_ID: number = 610;

    public static KILOBYTE_ID: number = 611;

    public static MEGABYTE_ID: number = 612;

    public static GIGABYTE_ID: number = 613;

    public static TERABYTE_ID: number = 614;

    public static PETABYTE_ID: number = 615;

    public static EXABYTE_ID: number = 616;

    public static ZETTABYTE_ID: number = 617;

    public static YOTTABYTE_ID: number = 618;

    public static JOULE_ID: number = 701;

    public static ELECTRONO_VOLT_ID: number = 702;

    public static KILO_ELECTRONO_VOLT_ID: number = 703;

    public static MEGA_ELECTRONO_VOLT_ID: number = 704;

    public static GIGA_ELECTRONO_VOLT_ID: number = 705;

    public static TERA_ELECTRONO_VOLT_ID: number = 706;

    public static METRE_PER_SECOND_ID: number = 801;

    public static KILOMETRE_PER_HOUR_ID: number = 802;

    public static MILE_PER_HOUR_ID: number = 803;

    public static KNOT_ID: number = 804;

    public static METRE_PER_SECOND2_ID: number = 901;

    public static KILOMETRE_PER_HOUR2_ID: number = 902;

    public static MILE_PER_HOUR2_ID: number = 903;

    public static RADIAN_ARC_ID: number = 1001;

    public static DEGREE_ARC_ID: number = 1002;

    public static MINUTE_ARC_ID: number = 1003;

    public static SECOND_ARC_ID: number = 1004;

    public static PERC_STR: string = "[%]";

    public static PROMIL_STR: string = "[%%]";

    public static YOTTA_STR: string = "[Y]";

    public static YOTTA_SEPT_STR: string = "[sept]";

    public static ZETTA_STR: string = "[Z]";

    public static ZETTA_SEXT_STR: string = "[sext]";

    public static EXA_STR: string = "[E]";

    public static EXA_QUINT_STR: string = "[quint]";

    public static PETA_STR: string = "[P]";

    public static PETA_QUAD_STR: string = "[quad]";

    public static TERA_STR: string = "[T]";

    public static TERA_TRIL_STR: string = "[tril]";

    public static GIGA_STR: string = "[G]";

    public static GIGA_BIL_STR: string = "[bil]";

    public static MEGA_STR: string = "[M]";

    public static MEGA_MIL_STR: string = "[mil]";

    public static KILO_STR: string = "[k]";

    public static KILO_TH_STR: string = "[th]";

    public static HECTO_STR: string = "[hecto]";

    public static HECTO_HUND_STR: string = "[hund]";

    public static DECA_STR: string = "[deca]";

    public static DECA_TEN_STR: string = "[ten]";

    public static DECI_STR: string = "[deci]";

    public static CENTI_STR: string = "[centi]";

    public static MILLI_STR: string = "[milli]";

    public static MICRO_STR: string = "[mic]";

    public static NANO_STR: string = "[n]";

    public static PICO_STR: string = "[p]";

    public static FEMTO_STR: string = "[f]";

    public static ATTO_STR: string = "[a]";

    public static ZEPTO_STR: string = "[z]";

    public static YOCTO_STR: string = "[y]";

    public static METRE_STR: string = "[m]";

    public static KILOMETRE_STR: string = "[km]";

    public static CENTIMETRE_STR: string = "[cm]";

    public static MILLIMETRE_STR: string = "[mm]";

    public static INCH_STR: string = "[inch]";

    public static YARD_STR: string = "[yd]";

    public static FEET_STR: string = "[ft]";

    public static MILE_STR: string = "[mile]";

    public static NAUTICAL_MILE_STR: string = "[nmi]";

    public static METRE2_STR: string = "[m2]";

    public static CENTIMETRE2_STR: string = "[cm2]";

    public static MILLIMETRE2_STR: string = "[mm2]";

    public static ARE_STR: string = "[are]";

    public static HECTARE_STR: string = "[ha]";

    public static ACRE_STR: string = "[acre]";

    public static KILOMETRE2_STR: string = "[km2]";

    public static MILLIMETRE3_STR: string = "[mm3]";

    public static CENTIMETRE3_STR: string = "[cm3]";

    public static METRE3_STR: string = "[m3]";

    public static KILOMETRE3_STR: string = "[km3]";

    public static MILLILITRE_STR: string = "[ml]";

    public static LITRE_STR: string = "[l]";

    public static GALLON_STR: string = "[gall]";

    public static PINT_STR: string = "[pint]";

    public static SECOND_STR: string = "[s]";

    public static MILLISECOND_STR: string = "[ms]";

    public static MINUTE_STR: string = "[min]";

    public static HOUR_STR: string = "[h]";

    public static DAY_STR: string = "[day]";

    public static WEEK_STR: string = "[week]";

    public static JULIAN_YEAR_STR: string = "[yearj]";

    public static KILOGRAM_STR: string = "[kg]";

    public static GRAM_STR: string = "[gr]";

    public static MILLIGRAM_STR: string = "[mg]";

    public static DECAGRAM_STR: string = "[dag]";

    public static TONNE_STR: string = "[t]";

    public static OUNCE_STR: string = "[oz]";

    public static POUND_STR: string = "[lb]";

    public static BIT_STR: string = "[b]";

    public static KILOBIT_STR: string = "[kb]";

    public static MEGABIT_STR: string = "[Mb]";

    public static GIGABIT_STR: string = "[Gb]";

    public static TERABIT_STR: string = "[Tb]";

    public static PETABIT_STR: string = "[Pb]";

    public static EXABIT_STR: string = "[Eb]";

    public static ZETTABIT_STR: string = "[Zb]";

    public static YOTTABIT_STR: string = "[Yb]";

    public static BYTE_STR: string = "[B]";

    public static KILOBYTE_STR: string = "[kB]";

    public static MEGABYTE_STR: string = "[MB]";

    public static GIGABYTE_STR: string = "[GB]";

    public static TERABYTE_STR: string = "[TB]";

    public static PETABYTE_STR: string = "[PB]";

    public static EXABYTE_STR: string = "[EB]";

    public static ZETTABYTE_STR: string = "[ZB]";

    public static YOTTABYTE_STR: string = "[YB]";

    public static JOULE_STR: string = "[J]";

    public static ELECTRONO_VOLT_STR: string = "[eV]";

    public static KILO_ELECTRONO_VOLT_STR: string = "[keV]";

    public static MEGA_ELECTRONO_VOLT_STR: string = "[MeV]";

    public static GIGA_ELECTRONO_VOLT_STR: string = "[GeV]";

    public static TERA_ELECTRONO_VOLT_STR: string = "[TeV]";

    public static METRE_PER_SECOND_STR: string = "[m/s]";

    public static KILOMETRE_PER_HOUR_STR: string = "[km/h]";

    public static MILE_PER_HOUR_STR: string = "[mi/h]";

    public static KNOT_STR: string = "[knot]";

    public static METRE_PER_SECOND2_STR: string = "[m/s2]";

    public static KILOMETRE_PER_HOUR2_STR: string = "[km/h2]";

    public static MILE_PER_HOUR2_STR: string = "[mi/h2]";

    public static RADIAN_ARC_STR: string = "[rad]";

    public static DEGREE_ARC_STR: string = "[deg]";

    public static MINUTE_ARC_STR: string = "[\']";

    public static SECOND_ARC_STR: string = "[\'\']";

    public static PERC_SYN: string; public static PERC_SYN_$LI$(): string { if (Unit.PERC_SYN == null) { Unit.PERC_SYN = Unit.PERC_STR; }  return Unit.PERC_SYN; }

    public static PROMIL_SYN: string; public static PROMIL_SYN_$LI$(): string { if (Unit.PROMIL_SYN == null) { Unit.PROMIL_SYN = Unit.PROMIL_STR; }  return Unit.PROMIL_SYN; }

    public static YOTTA_SYN: string; public static YOTTA_SYN_$LI$(): string { if (Unit.YOTTA_SYN == null) { Unit.YOTTA_SYN = Unit.YOTTA_STR; }  return Unit.YOTTA_SYN; }

    public static YOTTA_SEPT_SYN: string; public static YOTTA_SEPT_SYN_$LI$(): string { if (Unit.YOTTA_SEPT_SYN == null) { Unit.YOTTA_SEPT_SYN = Unit.YOTTA_SEPT_STR; }  return Unit.YOTTA_SEPT_SYN; }

    public static ZETTA_SYN: string; public static ZETTA_SYN_$LI$(): string { if (Unit.ZETTA_SYN == null) { Unit.ZETTA_SYN = Unit.ZETTA_STR; }  return Unit.ZETTA_SYN; }

    public static ZETTA_SEXT_SYN: string; public static ZETTA_SEXT_SYN_$LI$(): string { if (Unit.ZETTA_SEXT_SYN == null) { Unit.ZETTA_SEXT_SYN = Unit.ZETTA_SEXT_STR; }  return Unit.ZETTA_SEXT_SYN; }

    public static EXA_SYN: string; public static EXA_SYN_$LI$(): string { if (Unit.EXA_SYN == null) { Unit.EXA_SYN = Unit.EXA_STR; }  return Unit.EXA_SYN; }

    public static EXA_QUINT_SYN: string; public static EXA_QUINT_SYN_$LI$(): string { if (Unit.EXA_QUINT_SYN == null) { Unit.EXA_QUINT_SYN = Unit.EXA_QUINT_STR; }  return Unit.EXA_QUINT_SYN; }

    public static PETA_SYN: string; public static PETA_SYN_$LI$(): string { if (Unit.PETA_SYN == null) { Unit.PETA_SYN = Unit.PETA_STR; }  return Unit.PETA_SYN; }

    public static PETA_QUAD_SYN: string; public static PETA_QUAD_SYN_$LI$(): string { if (Unit.PETA_QUAD_SYN == null) { Unit.PETA_QUAD_SYN = Unit.PETA_QUAD_STR; }  return Unit.PETA_QUAD_SYN; }

    public static TERA_SYN: string; public static TERA_SYN_$LI$(): string { if (Unit.TERA_SYN == null) { Unit.TERA_SYN = Unit.TERA_STR; }  return Unit.TERA_SYN; }

    public static TERA_TRIL_SYN: string; public static TERA_TRIL_SYN_$LI$(): string { if (Unit.TERA_TRIL_SYN == null) { Unit.TERA_TRIL_SYN = Unit.TERA_TRIL_STR; }  return Unit.TERA_TRIL_SYN; }

    public static GIGA_SYN: string; public static GIGA_SYN_$LI$(): string { if (Unit.GIGA_SYN == null) { Unit.GIGA_SYN = Unit.GIGA_STR; }  return Unit.GIGA_SYN; }

    public static GIGA_BIL_SYN: string; public static GIGA_BIL_SYN_$LI$(): string { if (Unit.GIGA_BIL_SYN == null) { Unit.GIGA_BIL_SYN = Unit.GIGA_BIL_STR; }  return Unit.GIGA_BIL_SYN; }

    public static MEGA_SYN: string; public static MEGA_SYN_$LI$(): string { if (Unit.MEGA_SYN == null) { Unit.MEGA_SYN = Unit.MEGA_STR; }  return Unit.MEGA_SYN; }

    public static MEGA_MIL_SYN: string; public static MEGA_MIL_SYN_$LI$(): string { if (Unit.MEGA_MIL_SYN == null) { Unit.MEGA_MIL_SYN = Unit.MEGA_MIL_STR; }  return Unit.MEGA_MIL_SYN; }

    public static KILO_SYN: string; public static KILO_SYN_$LI$(): string { if (Unit.KILO_SYN == null) { Unit.KILO_SYN = Unit.KILO_STR; }  return Unit.KILO_SYN; }

    public static KILO_TH_SYN: string; public static KILO_TH_SYN_$LI$(): string { if (Unit.KILO_TH_SYN == null) { Unit.KILO_TH_SYN = Unit.KILO_TH_STR; }  return Unit.KILO_TH_SYN; }

    public static HECTO_SYN: string; public static HECTO_SYN_$LI$(): string { if (Unit.HECTO_SYN == null) { Unit.HECTO_SYN = Unit.HECTO_STR; }  return Unit.HECTO_SYN; }

    public static HECTO_HUND_SYN: string; public static HECTO_HUND_SYN_$LI$(): string { if (Unit.HECTO_HUND_SYN == null) { Unit.HECTO_HUND_SYN = Unit.HECTO_HUND_STR; }  return Unit.HECTO_HUND_SYN; }

    public static DECA_SYN: string; public static DECA_SYN_$LI$(): string { if (Unit.DECA_SYN == null) { Unit.DECA_SYN = Unit.DECA_STR; }  return Unit.DECA_SYN; }

    public static DECA_TEN_SYN: string; public static DECA_TEN_SYN_$LI$(): string { if (Unit.DECA_TEN_SYN == null) { Unit.DECA_TEN_SYN = Unit.DECA_TEN_STR; }  return Unit.DECA_TEN_SYN; }

    public static DECI_SYN: string; public static DECI_SYN_$LI$(): string { if (Unit.DECI_SYN == null) { Unit.DECI_SYN = Unit.DECI_STR; }  return Unit.DECI_SYN; }

    public static CENTI_SYN: string; public static CENTI_SYN_$LI$(): string { if (Unit.CENTI_SYN == null) { Unit.CENTI_SYN = Unit.CENTI_STR; }  return Unit.CENTI_SYN; }

    public static MILLI_SYN: string; public static MILLI_SYN_$LI$(): string { if (Unit.MILLI_SYN == null) { Unit.MILLI_SYN = Unit.MILLI_STR; }  return Unit.MILLI_SYN; }

    public static MICRO_SYN: string; public static MICRO_SYN_$LI$(): string { if (Unit.MICRO_SYN == null) { Unit.MICRO_SYN = Unit.MICRO_STR; }  return Unit.MICRO_SYN; }

    public static NANO_SYN: string; public static NANO_SYN_$LI$(): string { if (Unit.NANO_SYN == null) { Unit.NANO_SYN = Unit.NANO_STR; }  return Unit.NANO_SYN; }

    public static PICO_SYN: string; public static PICO_SYN_$LI$(): string { if (Unit.PICO_SYN == null) { Unit.PICO_SYN = Unit.PICO_STR; }  return Unit.PICO_SYN; }

    public static FEMTO_SYN: string; public static FEMTO_SYN_$LI$(): string { if (Unit.FEMTO_SYN == null) { Unit.FEMTO_SYN = Unit.FEMTO_STR; }  return Unit.FEMTO_SYN; }

    public static ATTO_SYN: string; public static ATTO_SYN_$LI$(): string { if (Unit.ATTO_SYN == null) { Unit.ATTO_SYN = Unit.ATTO_STR; }  return Unit.ATTO_SYN; }

    public static ZEPTO_SYN: string; public static ZEPTO_SYN_$LI$(): string { if (Unit.ZEPTO_SYN == null) { Unit.ZEPTO_SYN = Unit.ZEPTO_STR; }  return Unit.ZEPTO_SYN; }

    public static YOCTO_SYN: string; public static YOCTO_SYN_$LI$(): string { if (Unit.YOCTO_SYN == null) { Unit.YOCTO_SYN = Unit.YOCTO_STR; }  return Unit.YOCTO_SYN; }

    public static METRE_SYN: string; public static METRE_SYN_$LI$(): string { if (Unit.METRE_SYN == null) { Unit.METRE_SYN = Unit.METRE_STR; }  return Unit.METRE_SYN; }

    public static KILOMETRE_SYN: string; public static KILOMETRE_SYN_$LI$(): string { if (Unit.KILOMETRE_SYN == null) { Unit.KILOMETRE_SYN = Unit.KILOMETRE_STR; }  return Unit.KILOMETRE_SYN; }

    public static CENTIMETRE_SYN: string; public static CENTIMETRE_SYN_$LI$(): string { if (Unit.CENTIMETRE_SYN == null) { Unit.CENTIMETRE_SYN = Unit.CENTIMETRE_STR; }  return Unit.CENTIMETRE_SYN; }

    public static MILLIMETRE_SYN: string; public static MILLIMETRE_SYN_$LI$(): string { if (Unit.MILLIMETRE_SYN == null) { Unit.MILLIMETRE_SYN = Unit.MILLIMETRE_STR; }  return Unit.MILLIMETRE_SYN; }

    public static INCH_SYN: string; public static INCH_SYN_$LI$(): string { if (Unit.INCH_SYN == null) { Unit.INCH_SYN = Unit.INCH_STR; }  return Unit.INCH_SYN; }

    public static YARD_SYN: string; public static YARD_SYN_$LI$(): string { if (Unit.YARD_SYN == null) { Unit.YARD_SYN = Unit.YARD_STR; }  return Unit.YARD_SYN; }

    public static FEET_SYN: string; public static FEET_SYN_$LI$(): string { if (Unit.FEET_SYN == null) { Unit.FEET_SYN = Unit.FEET_STR; }  return Unit.FEET_SYN; }

    public static MILE_SYN: string; public static MILE_SYN_$LI$(): string { if (Unit.MILE_SYN == null) { Unit.MILE_SYN = Unit.MILE_STR; }  return Unit.MILE_SYN; }

    public static NAUTICAL_MILE_SYN: string; public static NAUTICAL_MILE_SYN_$LI$(): string { if (Unit.NAUTICAL_MILE_SYN == null) { Unit.NAUTICAL_MILE_SYN = Unit.NAUTICAL_MILE_STR; }  return Unit.NAUTICAL_MILE_SYN; }

    public static METRE2_SYN: string; public static METRE2_SYN_$LI$(): string { if (Unit.METRE2_SYN == null) { Unit.METRE2_SYN = Unit.METRE2_STR; }  return Unit.METRE2_SYN; }

    public static CENTIMETRE2_SYN: string; public static CENTIMETRE2_SYN_$LI$(): string { if (Unit.CENTIMETRE2_SYN == null) { Unit.CENTIMETRE2_SYN = Unit.CENTIMETRE2_STR; }  return Unit.CENTIMETRE2_SYN; }

    public static MILLIMETRE2_SYN: string; public static MILLIMETRE2_SYN_$LI$(): string { if (Unit.MILLIMETRE2_SYN == null) { Unit.MILLIMETRE2_SYN = Unit.MILLIMETRE2_STR; }  return Unit.MILLIMETRE2_SYN; }

    public static ARE_SYN: string; public static ARE_SYN_$LI$(): string { if (Unit.ARE_SYN == null) { Unit.ARE_SYN = Unit.ARE_STR; }  return Unit.ARE_SYN; }

    public static HECTARE_SYN: string; public static HECTARE_SYN_$LI$(): string { if (Unit.HECTARE_SYN == null) { Unit.HECTARE_SYN = Unit.HECTARE_STR; }  return Unit.HECTARE_SYN; }

    public static ACRE_SYN: string; public static ACRE_SYN_$LI$(): string { if (Unit.ACRE_SYN == null) { Unit.ACRE_SYN = Unit.ACRE_STR; }  return Unit.ACRE_SYN; }

    public static KILOMETRE2_SYN: string; public static KILOMETRE2_SYN_$LI$(): string { if (Unit.KILOMETRE2_SYN == null) { Unit.KILOMETRE2_SYN = Unit.KILOMETRE2_STR; }  return Unit.KILOMETRE2_SYN; }

    public static MILLIMETRE3_SYN: string; public static MILLIMETRE3_SYN_$LI$(): string { if (Unit.MILLIMETRE3_SYN == null) { Unit.MILLIMETRE3_SYN = Unit.MILLIMETRE3_STR; }  return Unit.MILLIMETRE3_SYN; }

    public static CENTIMETRE3_SYN: string; public static CENTIMETRE3_SYN_$LI$(): string { if (Unit.CENTIMETRE3_SYN == null) { Unit.CENTIMETRE3_SYN = Unit.CENTIMETRE3_STR; }  return Unit.CENTIMETRE3_SYN; }

    public static METRE3_SYN: string; public static METRE3_SYN_$LI$(): string { if (Unit.METRE3_SYN == null) { Unit.METRE3_SYN = Unit.METRE3_STR; }  return Unit.METRE3_SYN; }

    public static KILOMETRE3_SYN: string; public static KILOMETRE3_SYN_$LI$(): string { if (Unit.KILOMETRE3_SYN == null) { Unit.KILOMETRE3_SYN = Unit.KILOMETRE3_STR; }  return Unit.KILOMETRE3_SYN; }

    public static MILLILITRE_SYN: string; public static MILLILITRE_SYN_$LI$(): string { if (Unit.MILLILITRE_SYN == null) { Unit.MILLILITRE_SYN = Unit.MILLILITRE_STR; }  return Unit.MILLILITRE_SYN; }

    public static LITRE_SYN: string; public static LITRE_SYN_$LI$(): string { if (Unit.LITRE_SYN == null) { Unit.LITRE_SYN = Unit.LITRE_STR; }  return Unit.LITRE_SYN; }

    public static GALLON_SYN: string; public static GALLON_SYN_$LI$(): string { if (Unit.GALLON_SYN == null) { Unit.GALLON_SYN = Unit.GALLON_STR; }  return Unit.GALLON_SYN; }

    public static PINT_SYN: string; public static PINT_SYN_$LI$(): string { if (Unit.PINT_SYN == null) { Unit.PINT_SYN = Unit.PINT_STR; }  return Unit.PINT_SYN; }

    public static SECOND_SYN: string; public static SECOND_SYN_$LI$(): string { if (Unit.SECOND_SYN == null) { Unit.SECOND_SYN = Unit.SECOND_STR; }  return Unit.SECOND_SYN; }

    public static MILLISECOND_SYN: string; public static MILLISECOND_SYN_$LI$(): string { if (Unit.MILLISECOND_SYN == null) { Unit.MILLISECOND_SYN = Unit.MILLISECOND_STR; }  return Unit.MILLISECOND_SYN; }

    public static MINUTE_SYN: string; public static MINUTE_SYN_$LI$(): string { if (Unit.MINUTE_SYN == null) { Unit.MINUTE_SYN = Unit.MINUTE_STR; }  return Unit.MINUTE_SYN; }

    public static HOUR_SYN: string; public static HOUR_SYN_$LI$(): string { if (Unit.HOUR_SYN == null) { Unit.HOUR_SYN = Unit.HOUR_STR; }  return Unit.HOUR_SYN; }

    public static DAY_SYN: string; public static DAY_SYN_$LI$(): string { if (Unit.DAY_SYN == null) { Unit.DAY_SYN = Unit.DAY_STR; }  return Unit.DAY_SYN; }

    public static WEEK_SYN: string; public static WEEK_SYN_$LI$(): string { if (Unit.WEEK_SYN == null) { Unit.WEEK_SYN = Unit.WEEK_STR; }  return Unit.WEEK_SYN; }

    public static JULIAN_YEAR_SYN: string; public static JULIAN_YEAR_SYN_$LI$(): string { if (Unit.JULIAN_YEAR_SYN == null) { Unit.JULIAN_YEAR_SYN = Unit.JULIAN_YEAR_STR; }  return Unit.JULIAN_YEAR_SYN; }

    public static KILOGRAM_SYN: string; public static KILOGRAM_SYN_$LI$(): string { if (Unit.KILOGRAM_SYN == null) { Unit.KILOGRAM_SYN = Unit.KILOGRAM_STR; }  return Unit.KILOGRAM_SYN; }

    public static GRAM_SYN: string; public static GRAM_SYN_$LI$(): string { if (Unit.GRAM_SYN == null) { Unit.GRAM_SYN = Unit.GRAM_STR; }  return Unit.GRAM_SYN; }

    public static MILLIGRAM_SYN: string; public static MILLIGRAM_SYN_$LI$(): string { if (Unit.MILLIGRAM_SYN == null) { Unit.MILLIGRAM_SYN = Unit.MILLIGRAM_STR; }  return Unit.MILLIGRAM_SYN; }

    public static DECAGRAM_SYN: string; public static DECAGRAM_SYN_$LI$(): string { if (Unit.DECAGRAM_SYN == null) { Unit.DECAGRAM_SYN = Unit.DECAGRAM_STR; }  return Unit.DECAGRAM_SYN; }

    public static TONNE_SYN: string; public static TONNE_SYN_$LI$(): string { if (Unit.TONNE_SYN == null) { Unit.TONNE_SYN = Unit.TONNE_STR; }  return Unit.TONNE_SYN; }

    public static OUNCE_SYN: string; public static OUNCE_SYN_$LI$(): string { if (Unit.OUNCE_SYN == null) { Unit.OUNCE_SYN = Unit.OUNCE_STR; }  return Unit.OUNCE_SYN; }

    public static POUND_SYN: string; public static POUND_SYN_$LI$(): string { if (Unit.POUND_SYN == null) { Unit.POUND_SYN = Unit.POUND_STR; }  return Unit.POUND_SYN; }

    public static BIT_SYN: string; public static BIT_SYN_$LI$(): string { if (Unit.BIT_SYN == null) { Unit.BIT_SYN = Unit.BIT_STR; }  return Unit.BIT_SYN; }

    public static KILOBIT_SYN: string; public static KILOBIT_SYN_$LI$(): string { if (Unit.KILOBIT_SYN == null) { Unit.KILOBIT_SYN = Unit.KILOBIT_STR; }  return Unit.KILOBIT_SYN; }

    public static MEGABIT_SYN: string; public static MEGABIT_SYN_$LI$(): string { if (Unit.MEGABIT_SYN == null) { Unit.MEGABIT_SYN = Unit.MEGABIT_STR; }  return Unit.MEGABIT_SYN; }

    public static GIGABIT_SYN: string; public static GIGABIT_SYN_$LI$(): string { if (Unit.GIGABIT_SYN == null) { Unit.GIGABIT_SYN = Unit.GIGABIT_STR; }  return Unit.GIGABIT_SYN; }

    public static TERABIT_SYN: string; public static TERABIT_SYN_$LI$(): string { if (Unit.TERABIT_SYN == null) { Unit.TERABIT_SYN = Unit.TERABIT_STR; }  return Unit.TERABIT_SYN; }

    public static PETABIT_SYN: string; public static PETABIT_SYN_$LI$(): string { if (Unit.PETABIT_SYN == null) { Unit.PETABIT_SYN = Unit.PETABIT_STR; }  return Unit.PETABIT_SYN; }

    public static EXABIT_SYN: string; public static EXABIT_SYN_$LI$(): string { if (Unit.EXABIT_SYN == null) { Unit.EXABIT_SYN = Unit.EXABIT_STR; }  return Unit.EXABIT_SYN; }

    public static ZETTABIT_SYN: string; public static ZETTABIT_SYN_$LI$(): string { if (Unit.ZETTABIT_SYN == null) { Unit.ZETTABIT_SYN = Unit.ZETTABIT_STR; }  return Unit.ZETTABIT_SYN; }

    public static YOTTABIT_SYN: string; public static YOTTABIT_SYN_$LI$(): string { if (Unit.YOTTABIT_SYN == null) { Unit.YOTTABIT_SYN = Unit.YOTTABIT_STR; }  return Unit.YOTTABIT_SYN; }

    public static BYTE_SYN: string; public static BYTE_SYN_$LI$(): string { if (Unit.BYTE_SYN == null) { Unit.BYTE_SYN = Unit.BYTE_STR; }  return Unit.BYTE_SYN; }

    public static KILOBYTE_SYN: string; public static KILOBYTE_SYN_$LI$(): string { if (Unit.KILOBYTE_SYN == null) { Unit.KILOBYTE_SYN = Unit.KILOBYTE_STR; }  return Unit.KILOBYTE_SYN; }

    public static MEGABYTE_SYN: string; public static MEGABYTE_SYN_$LI$(): string { if (Unit.MEGABYTE_SYN == null) { Unit.MEGABYTE_SYN = Unit.MEGABYTE_STR; }  return Unit.MEGABYTE_SYN; }

    public static GIGABYTE_SYN: string; public static GIGABYTE_SYN_$LI$(): string { if (Unit.GIGABYTE_SYN == null) { Unit.GIGABYTE_SYN = Unit.GIGABYTE_STR; }  return Unit.GIGABYTE_SYN; }

    public static TERABYTE_SYN: string; public static TERABYTE_SYN_$LI$(): string { if (Unit.TERABYTE_SYN == null) { Unit.TERABYTE_SYN = Unit.TERABYTE_STR; }  return Unit.TERABYTE_SYN; }

    public static PETABYTE_SYN: string; public static PETABYTE_SYN_$LI$(): string { if (Unit.PETABYTE_SYN == null) { Unit.PETABYTE_SYN = Unit.PETABYTE_STR; }  return Unit.PETABYTE_SYN; }

    public static EXABYTE_SYN: string; public static EXABYTE_SYN_$LI$(): string { if (Unit.EXABYTE_SYN == null) { Unit.EXABYTE_SYN = Unit.EXABYTE_STR; }  return Unit.EXABYTE_SYN; }

    public static ZETTABYTE_SYN: string; public static ZETTABYTE_SYN_$LI$(): string { if (Unit.ZETTABYTE_SYN == null) { Unit.ZETTABYTE_SYN = Unit.ZETTABYTE_STR; }  return Unit.ZETTABYTE_SYN; }

    public static YOTTABYTE_SYN: string; public static YOTTABYTE_SYN_$LI$(): string { if (Unit.YOTTABYTE_SYN == null) { Unit.YOTTABYTE_SYN = Unit.YOTTABYTE_STR; }  return Unit.YOTTABYTE_SYN; }

    public static JOULE_SYN: string; public static JOULE_SYN_$LI$(): string { if (Unit.JOULE_SYN == null) { Unit.JOULE_SYN = Unit.JOULE_STR; }  return Unit.JOULE_SYN; }

    public static ELECTRONO_VOLT_SYN: string; public static ELECTRONO_VOLT_SYN_$LI$(): string { if (Unit.ELECTRONO_VOLT_SYN == null) { Unit.ELECTRONO_VOLT_SYN = Unit.ELECTRONO_VOLT_STR; }  return Unit.ELECTRONO_VOLT_SYN; }

    public static KILO_ELECTRONO_VOLT_SYN: string; public static KILO_ELECTRONO_VOLT_SYN_$LI$(): string { if (Unit.KILO_ELECTRONO_VOLT_SYN == null) { Unit.KILO_ELECTRONO_VOLT_SYN = Unit.KILO_ELECTRONO_VOLT_STR; }  return Unit.KILO_ELECTRONO_VOLT_SYN; }

    public static MEGA_ELECTRONO_VOLT_SYN: string; public static MEGA_ELECTRONO_VOLT_SYN_$LI$(): string { if (Unit.MEGA_ELECTRONO_VOLT_SYN == null) { Unit.MEGA_ELECTRONO_VOLT_SYN = Unit.MEGA_ELECTRONO_VOLT_STR; }  return Unit.MEGA_ELECTRONO_VOLT_SYN; }

    public static GIGA_ELECTRONO_VOLT_SYN: string; public static GIGA_ELECTRONO_VOLT_SYN_$LI$(): string { if (Unit.GIGA_ELECTRONO_VOLT_SYN == null) { Unit.GIGA_ELECTRONO_VOLT_SYN = Unit.GIGA_ELECTRONO_VOLT_STR; }  return Unit.GIGA_ELECTRONO_VOLT_SYN; }

    public static TERA_ELECTRONO_VOLT_SYN: string; public static TERA_ELECTRONO_VOLT_SYN_$LI$(): string { if (Unit.TERA_ELECTRONO_VOLT_SYN == null) { Unit.TERA_ELECTRONO_VOLT_SYN = Unit.TERA_ELECTRONO_VOLT_STR; }  return Unit.TERA_ELECTRONO_VOLT_SYN; }

    public static METRE_PER_SECOND_SYN: string; public static METRE_PER_SECOND_SYN_$LI$(): string { if (Unit.METRE_PER_SECOND_SYN == null) { Unit.METRE_PER_SECOND_SYN = Unit.METRE_PER_SECOND_STR; }  return Unit.METRE_PER_SECOND_SYN; }

    public static KILOMETRE_PER_HOUR_SYN: string; public static KILOMETRE_PER_HOUR_SYN_$LI$(): string { if (Unit.KILOMETRE_PER_HOUR_SYN == null) { Unit.KILOMETRE_PER_HOUR_SYN = Unit.KILOMETRE_PER_HOUR_STR; }  return Unit.KILOMETRE_PER_HOUR_SYN; }

    public static MILE_PER_HOUR_SYN: string; public static MILE_PER_HOUR_SYN_$LI$(): string { if (Unit.MILE_PER_HOUR_SYN == null) { Unit.MILE_PER_HOUR_SYN = Unit.MILE_PER_HOUR_STR; }  return Unit.MILE_PER_HOUR_SYN; }

    public static KNOT_SYN: string; public static KNOT_SYN_$LI$(): string { if (Unit.KNOT_SYN == null) { Unit.KNOT_SYN = Unit.KNOT_STR; }  return Unit.KNOT_SYN; }

    public static METRE_PER_SECOND2_SYN: string; public static METRE_PER_SECOND2_SYN_$LI$(): string { if (Unit.METRE_PER_SECOND2_SYN == null) { Unit.METRE_PER_SECOND2_SYN = Unit.METRE_PER_SECOND2_STR; }  return Unit.METRE_PER_SECOND2_SYN; }

    public static KILOMETRE_PER_HOUR2_SYN: string; public static KILOMETRE_PER_HOUR2_SYN_$LI$(): string { if (Unit.KILOMETRE_PER_HOUR2_SYN == null) { Unit.KILOMETRE_PER_HOUR2_SYN = Unit.KILOMETRE_PER_HOUR2_STR; }  return Unit.KILOMETRE_PER_HOUR2_SYN; }

    public static MILE_PER_HOUR2_SYN: string; public static MILE_PER_HOUR2_SYN_$LI$(): string { if (Unit.MILE_PER_HOUR2_SYN == null) { Unit.MILE_PER_HOUR2_SYN = Unit.MILE_PER_HOUR2_STR; }  return Unit.MILE_PER_HOUR2_SYN; }

    public static RADIAN_ARC_SYN: string; public static RADIAN_ARC_SYN_$LI$(): string { if (Unit.RADIAN_ARC_SYN == null) { Unit.RADIAN_ARC_SYN = Unit.RADIAN_ARC_STR; }  return Unit.RADIAN_ARC_SYN; }

    public static DEGREE_ARC_SYN: string; public static DEGREE_ARC_SYN_$LI$(): string { if (Unit.DEGREE_ARC_SYN == null) { Unit.DEGREE_ARC_SYN = Unit.DEGREE_ARC_STR; }  return Unit.DEGREE_ARC_SYN; }

    public static MINUTE_ARC_SYN: string; public static MINUTE_ARC_SYN_$LI$(): string { if (Unit.MINUTE_ARC_SYN == null) { Unit.MINUTE_ARC_SYN = Unit.MINUTE_ARC_STR; }  return Unit.MINUTE_ARC_SYN; }

    public static SECOND_ARC_SYN: string; public static SECOND_ARC_SYN_$LI$(): string { if (Unit.SECOND_ARC_SYN == null) { Unit.SECOND_ARC_SYN = Unit.SECOND_ARC_STR; }  return Unit.SECOND_ARC_SYN; }

    public static PERC_DESC: string = "<Ratio, Fraction> Percentage = 0.01";

    public static PROMIL_DESC: string = "<Ratio, Fraction> Promil, Per mille = 0.001";

    public static YOTTA_DESC: string = "<Metric prefix> Septillion / Yotta = 10^24";

    public static ZETTA_DESC: string = "<Metric prefix> Sextillion / Zetta = 10^21";

    public static EXA_DESC: string = "<Metric prefix> Quintillion / Exa = 10^18";

    public static PETA_DESC: string = "<Metric prefix> Quadrillion / Peta = 10^15";

    public static TERA_DESC: string = "<Metric prefix> Trillion / Tera = 10^12";

    public static GIGA_DESC: string = "<Metric prefix> Billion / Giga = 10^9";

    public static MEGA_DESC: string = "<Metric prefix> Million / Mega = 10^6";

    public static KILO_DESC: string = "<Metric prefix> Thousand / Kilo = 10^3";

    public static HECTO_DESC: string = "<Metric prefix> Hundred / Hecto = 10^2";

    public static DECA_DESC: string = "<Metric prefix> Ten / Deca = 10";

    public static DECI_DESC: string = "<Metric prefix> Tenth / Deci = 0.1";

    public static CENTI_DESC: string = "<Metric prefix> Hundredth / Centi = 0.01";

    public static MILLI_DESC: string = "<Metric prefix> Thousandth / Milli = 0.001";

    public static MICRO_DESC: string = "<Metric prefix> Millionth / Micro = 10^-6";

    public static NANO_DESC: string = "<Metric prefix> Billionth / Nano = 10^-9";

    public static PICO_DESC: string = "<Metric prefix> Trillionth / Pico = 10^-12";

    public static FEMTO_DESC: string = "<Metric prefix> Quadrillionth / Femto = 10^-15";

    public static ATTO_DESC: string = "<Metric prefix> Quintillionth / Atoo = 10^-18";

    public static ZEPTO_DESC: string = "<Metric prefix> Sextillionth / Zepto = 10^-21";

    public static YOCTO_DESC: string = "<Metric prefix> Septillionth / Yocto = 10^-24";

    public static METRE_DESC: string = "<Unit of length> Metre / Meter (m=1)";

    public static KILOMETRE_DESC: string = "<Unit of length> Kilometre / Kilometer (m=1)";

    public static CENTIMETRE_DESC: string = "<Unit of length> Centimetre / Centimeter (m=1)";

    public static MILLIMETRE_DESC: string = "<Unit of length> Millimetre / Millimeter (m=1)";

    public static INCH_DESC: string = "<Unit of length> Inch (m=1)";

    public static YARD_DESC: string = "<Unit of length> Yard (m=1)";

    public static FEET_DESC: string = "<Unit of length> Feet (m=1)";

    public static MILE_DESC: string = "<Unit of length> Mile (m=1)";

    public static NAUTICAL_MILE_DESC: string = "<Unit of length> Nautical mile (m=1)";

    public static METRE2_DESC: string = "<Unit of area> Square metre / Square meter (m=1)";

    public static CENTIMETRE2_DESC: string = "<Unit of area> Square centimetre / Square centimeter (m=1)";

    public static MILLIMETRE2_DESC: string = "<Unit of area> Square millimetre / Square millimeter (m=1)";

    public static ARE_DESC: string = "<Unit of area> Are (m=1)";

    public static HECTARE_DESC: string = "<Unit of area> Hectare (m=1)";

    public static ACRE_DESC: string = "<Unit of area> Acre (m=1)";

    public static KILOMETRE2_DESC: string = "<Unit of area> Square kilometre / Square kilometer (m=1)";

    public static MILLIMETRE3_DESC: string = "<Unit of volume> Cubic millimetre / Cubic millimeter (m=1)";

    public static CENTIMETRE3_DESC: string = "<Unit of volume> Cubic centimetre / Cubic centimeter (m=1)";

    public static METRE3_DESC: string = "<Unit of volume> Cubic metre / Cubic meter (m=1)";

    public static KILOMETRE3_DESC: string = "<Unit of volume> Cubic kilometre / Cubic kilometer (m=1)";

    public static MILLILITRE_DESC: string = "<Unit of volume> Millilitre / Milliliter (m=1)";

    public static LITRE_DESC: string = "<Unit of volume> Litre / Liter (m=1)";

    public static GALLON_DESC: string = "<Unit of volume> Gallon (m=1)";

    public static PINT_DESC: string = "<Unit of volume> Pint (m=1)";

    public static SECOND_DESC: string = "<Unit of time> Second (s=1)";

    public static MILLISECOND_DESC: string = "<Unit of time> Millisecond (s=1)";

    public static MINUTE_DESC: string = "<Unit of time> Minute (s=1)";

    public static HOUR_DESC: string = "<Unit of time> Hour (s=1)";

    public static DAY_DESC: string = "<Unit of time> Day (s=1)";

    public static WEEK_DESC: string = "<Unit of time> Week (s=1)";

    public static JULIAN_YEAR_DESC: string = "<Unit of time> Julian year = 365.25 days (s=1)";

    public static KILOGRAM_DESC: string = "<Unit of mass> Kilogram (kg=1)";

    public static GRAM_DESC: string = "<Unit of mass> Gram (kg=1)";

    public static MILLIGRAM_DESC: string = "<Unit of mass> Milligram (kg=1)";

    public static DECAGRAM_DESC: string = "<Unit of mass> Decagram (kg=1)";

    public static TONNE_DESC: string = "<Unit of mass> Tonne (kg=1)";

    public static OUNCE_DESC: string = "<Unit of mass> Ounce (kg=1)";

    public static POUND_DESC: string = "<Unit of mass> Pound (kg=1)";

    public static BIT_DESC: string = "<Unit of information> Bit (bit=1)";

    public static KILOBIT_DESC: string = "<Unit of information> Kilobit (bit=1)";

    public static MEGABIT_DESC: string = "<Unit of information> Megabit (bit=1)";

    public static GIGABIT_DESC: string = "<Unit of information> Gigabit (bit=1)";

    public static TERABIT_DESC: string = "<Unit of information> Terabit (bit=1)";

    public static PETABIT_DESC: string = "<Unit of information> Petabit (bit=1)";

    public static EXABIT_DESC: string = "<Unit of information> Exabit (bit=1)";

    public static ZETTABIT_DESC: string = "<Unit of information> Zettabit (bit=1)";

    public static YOTTABIT_DESC: string = "<Unit of information> Yottabit (bit=1)";

    public static BYTE_DESC: string = "<Unit of information> Byte (bit=1)";

    public static KILOBYTE_DESC: string = "<Unit of information> Kilobyte (bit=1)";

    public static MEGABYTE_DESC: string = "<Unit of information> Megabyte (bit=1)";

    public static GIGABYTE_DESC: string = "<Unit of information> Gigabyte (bit=1)";

    public static TERABYTE_DESC: string = "<Unit of information> Terabyte (bit=1)";

    public static PETABYTE_DESC: string = "<Unit of information> Petabyte (bit=1)";

    public static EXABYTE_DESC: string = "<Unit of information> Exabyte (bit=1)";

    public static ZETTABYTE_DESC: string = "<Unit of information> Zettabyte (bit=1)";

    public static YOTTABYTE_DESC: string = "<Unit of information> Yottabyte (bit=1)";

    public static JOULE_DESC: string = "<Unit of energy> Joule (m=1, kg=1, s=1)";

    public static ELECTRONO_VOLT_DESC: string = "<Unit of energy> Electronovolt (m=1, kg=1, s=1)";

    public static KILO_ELECTRONO_VOLT_DESC: string = "<Unit of energy> Kiloelectronovolt (m=1, kg=1, s=1)";

    public static MEGA_ELECTRONO_VOLT_DESC: string = "<Unit of energy> Megaelectronovolt (m=1, kg=1, s=1)";

    public static GIGA_ELECTRONO_VOLT_DESC: string = "<Unit of energy> Gigaelectronovolt (m=1, kg=1, s=1)";

    public static TERA_ELECTRONO_VOLT_DESC: string = "<Unit of energy> Teraelectronovolt (m=1, kg=1, s=1)";

    public static METRE_PER_SECOND_DESC: string = "<Unit of speed> Metre / Meter per second (m=1, s=1)";

    public static KILOMETRE_PER_HOUR_DESC: string = "<Unit of speed> Kilometre / Kilometer per hour (m=1, s=1)";

    public static MILE_PER_HOUR_DESC: string = "<Unit of speed> Mile per hour (m=1, s=1)";

    public static KNOT_DESC: string = "<Unit of speed> Knot (m=1, s=1)";

    public static METRE_PER_SECOND2_DESC: string = "<Unit of acceleration> Metre / Meter per square second (m=1, s=1)";

    public static KILOMETRE_PER_HOUR2_DESC: string = "<Unit of acceleration> Kilometre / Kilometer per square hour (m=1, s=1)";

    public static MILE_PER_HOUR2_DESC: string = "<Unit of acceleration> Mile per square hour (m=1, s=1)";

    public static RADIAN_ARC_DESC: string = "<Unit of angle> Radian (rad=1)";

    public static DEGREE_ARC_DESC: string = "<Unit of angle> Degree of arc (rad=1)";

    public static MINUTE_ARC_DESC: string = "<Unit of angle> Minute of arc (rad=1)";

    public static SECOND_ARC_DESC: string = "<Unit of angle> Second of arc (rad=1)";

    public static PERC_SINCE: string; public static PERC_SINCE_$LI$(): string { if (Unit.PERC_SINCE == null) { Unit.PERC_SINCE = mXparserConstants.NAMEv40; }  return Unit.PERC_SINCE; }

    public static PROMIL_SINCE: string; public static PROMIL_SINCE_$LI$(): string { if (Unit.PROMIL_SINCE == null) { Unit.PROMIL_SINCE = mXparserConstants.NAMEv40; }  return Unit.PROMIL_SINCE; }

    public static YOTTA_SINCE: string; public static YOTTA_SINCE_$LI$(): string { if (Unit.YOTTA_SINCE == null) { Unit.YOTTA_SINCE = mXparserConstants.NAMEv40; }  return Unit.YOTTA_SINCE; }

    public static YOTTA_SEPT_SINCE: string; public static YOTTA_SEPT_SINCE_$LI$(): string { if (Unit.YOTTA_SEPT_SINCE == null) { Unit.YOTTA_SEPT_SINCE = mXparserConstants.NAMEv40; }  return Unit.YOTTA_SEPT_SINCE; }

    public static ZETTA_SINCE: string; public static ZETTA_SINCE_$LI$(): string { if (Unit.ZETTA_SINCE == null) { Unit.ZETTA_SINCE = mXparserConstants.NAMEv40; }  return Unit.ZETTA_SINCE; }

    public static ZETTA_SEXT_SINCE: string; public static ZETTA_SEXT_SINCE_$LI$(): string { if (Unit.ZETTA_SEXT_SINCE == null) { Unit.ZETTA_SEXT_SINCE = mXparserConstants.NAMEv40; }  return Unit.ZETTA_SEXT_SINCE; }

    public static EXA_SINCE: string; public static EXA_SINCE_$LI$(): string { if (Unit.EXA_SINCE == null) { Unit.EXA_SINCE = mXparserConstants.NAMEv40; }  return Unit.EXA_SINCE; }

    public static EXA_QUINT_SINCE: string; public static EXA_QUINT_SINCE_$LI$(): string { if (Unit.EXA_QUINT_SINCE == null) { Unit.EXA_QUINT_SINCE = mXparserConstants.NAMEv40; }  return Unit.EXA_QUINT_SINCE; }

    public static PETA_SINCE: string; public static PETA_SINCE_$LI$(): string { if (Unit.PETA_SINCE == null) { Unit.PETA_SINCE = mXparserConstants.NAMEv40; }  return Unit.PETA_SINCE; }

    public static PETA_QUAD_SINCE: string; public static PETA_QUAD_SINCE_$LI$(): string { if (Unit.PETA_QUAD_SINCE == null) { Unit.PETA_QUAD_SINCE = mXparserConstants.NAMEv40; }  return Unit.PETA_QUAD_SINCE; }

    public static TERA_SINCE: string; public static TERA_SINCE_$LI$(): string { if (Unit.TERA_SINCE == null) { Unit.TERA_SINCE = mXparserConstants.NAMEv40; }  return Unit.TERA_SINCE; }

    public static TERA_TRIL_SINCE: string; public static TERA_TRIL_SINCE_$LI$(): string { if (Unit.TERA_TRIL_SINCE == null) { Unit.TERA_TRIL_SINCE = mXparserConstants.NAMEv40; }  return Unit.TERA_TRIL_SINCE; }

    public static GIGA_SINCE: string; public static GIGA_SINCE_$LI$(): string { if (Unit.GIGA_SINCE == null) { Unit.GIGA_SINCE = mXparserConstants.NAMEv40; }  return Unit.GIGA_SINCE; }

    public static GIGA_BIL_SINCE: string; public static GIGA_BIL_SINCE_$LI$(): string { if (Unit.GIGA_BIL_SINCE == null) { Unit.GIGA_BIL_SINCE = mXparserConstants.NAMEv40; }  return Unit.GIGA_BIL_SINCE; }

    public static MEGA_SINCE: string; public static MEGA_SINCE_$LI$(): string { if (Unit.MEGA_SINCE == null) { Unit.MEGA_SINCE = mXparserConstants.NAMEv40; }  return Unit.MEGA_SINCE; }

    public static MEGA_MIL_SINCE: string; public static MEGA_MIL_SINCE_$LI$(): string { if (Unit.MEGA_MIL_SINCE == null) { Unit.MEGA_MIL_SINCE = mXparserConstants.NAMEv40; }  return Unit.MEGA_MIL_SINCE; }

    public static KILO_SINCE: string; public static KILO_SINCE_$LI$(): string { if (Unit.KILO_SINCE == null) { Unit.KILO_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILO_SINCE; }

    public static KILO_TH_SINCE: string; public static KILO_TH_SINCE_$LI$(): string { if (Unit.KILO_TH_SINCE == null) { Unit.KILO_TH_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILO_TH_SINCE; }

    public static HECTO_SINCE: string; public static HECTO_SINCE_$LI$(): string { if (Unit.HECTO_SINCE == null) { Unit.HECTO_SINCE = mXparserConstants.NAMEv40; }  return Unit.HECTO_SINCE; }

    public static HECTO_HUND_SINCE: string; public static HECTO_HUND_SINCE_$LI$(): string { if (Unit.HECTO_HUND_SINCE == null) { Unit.HECTO_HUND_SINCE = mXparserConstants.NAMEv40; }  return Unit.HECTO_HUND_SINCE; }

    public static DECA_SINCE: string; public static DECA_SINCE_$LI$(): string { if (Unit.DECA_SINCE == null) { Unit.DECA_SINCE = mXparserConstants.NAMEv40; }  return Unit.DECA_SINCE; }

    public static DECA_TEN_SINCE: string; public static DECA_TEN_SINCE_$LI$(): string { if (Unit.DECA_TEN_SINCE == null) { Unit.DECA_TEN_SINCE = mXparserConstants.NAMEv40; }  return Unit.DECA_TEN_SINCE; }

    public static DECI_SINCE: string; public static DECI_SINCE_$LI$(): string { if (Unit.DECI_SINCE == null) { Unit.DECI_SINCE = mXparserConstants.NAMEv40; }  return Unit.DECI_SINCE; }

    public static CENTI_SINCE: string; public static CENTI_SINCE_$LI$(): string { if (Unit.CENTI_SINCE == null) { Unit.CENTI_SINCE = mXparserConstants.NAMEv40; }  return Unit.CENTI_SINCE; }

    public static MILLI_SINCE: string; public static MILLI_SINCE_$LI$(): string { if (Unit.MILLI_SINCE == null) { Unit.MILLI_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILLI_SINCE; }

    public static MICRO_SINCE: string; public static MICRO_SINCE_$LI$(): string { if (Unit.MICRO_SINCE == null) { Unit.MICRO_SINCE = mXparserConstants.NAMEv40; }  return Unit.MICRO_SINCE; }

    public static NANO_SINCE: string; public static NANO_SINCE_$LI$(): string { if (Unit.NANO_SINCE == null) { Unit.NANO_SINCE = mXparserConstants.NAMEv40; }  return Unit.NANO_SINCE; }

    public static PICO_SINCE: string; public static PICO_SINCE_$LI$(): string { if (Unit.PICO_SINCE == null) { Unit.PICO_SINCE = mXparserConstants.NAMEv40; }  return Unit.PICO_SINCE; }

    public static FEMTO_SINCE: string; public static FEMTO_SINCE_$LI$(): string { if (Unit.FEMTO_SINCE == null) { Unit.FEMTO_SINCE = mXparserConstants.NAMEv40; }  return Unit.FEMTO_SINCE; }

    public static ATTO_SINCE: string; public static ATTO_SINCE_$LI$(): string { if (Unit.ATTO_SINCE == null) { Unit.ATTO_SINCE = mXparserConstants.NAMEv40; }  return Unit.ATTO_SINCE; }

    public static ZEPTO_SINCE: string; public static ZEPTO_SINCE_$LI$(): string { if (Unit.ZEPTO_SINCE == null) { Unit.ZEPTO_SINCE = mXparserConstants.NAMEv40; }  return Unit.ZEPTO_SINCE; }

    public static YOCTO_SINCE: string; public static YOCTO_SINCE_$LI$(): string { if (Unit.YOCTO_SINCE == null) { Unit.YOCTO_SINCE = mXparserConstants.NAMEv40; }  return Unit.YOCTO_SINCE; }

    public static METRE_SINCE: string; public static METRE_SINCE_$LI$(): string { if (Unit.METRE_SINCE == null) { Unit.METRE_SINCE = mXparserConstants.NAMEv40; }  return Unit.METRE_SINCE; }

    public static KILOMETRE_SINCE: string; public static KILOMETRE_SINCE_$LI$(): string { if (Unit.KILOMETRE_SINCE == null) { Unit.KILOMETRE_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILOMETRE_SINCE; }

    public static CENTIMETRE_SINCE: string; public static CENTIMETRE_SINCE_$LI$(): string { if (Unit.CENTIMETRE_SINCE == null) { Unit.CENTIMETRE_SINCE = mXparserConstants.NAMEv40; }  return Unit.CENTIMETRE_SINCE; }

    public static MILLIMETRE_SINCE: string; public static MILLIMETRE_SINCE_$LI$(): string { if (Unit.MILLIMETRE_SINCE == null) { Unit.MILLIMETRE_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILLIMETRE_SINCE; }

    public static INCH_SINCE: string; public static INCH_SINCE_$LI$(): string { if (Unit.INCH_SINCE == null) { Unit.INCH_SINCE = mXparserConstants.NAMEv40; }  return Unit.INCH_SINCE; }

    public static YARD_SINCE: string; public static YARD_SINCE_$LI$(): string { if (Unit.YARD_SINCE == null) { Unit.YARD_SINCE = mXparserConstants.NAMEv40; }  return Unit.YARD_SINCE; }

    public static FEET_SINCE: string; public static FEET_SINCE_$LI$(): string { if (Unit.FEET_SINCE == null) { Unit.FEET_SINCE = mXparserConstants.NAMEv40; }  return Unit.FEET_SINCE; }

    public static MILE_SINCE: string; public static MILE_SINCE_$LI$(): string { if (Unit.MILE_SINCE == null) { Unit.MILE_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILE_SINCE; }

    public static NAUTICAL_MILE_SINCE: string; public static NAUTICAL_MILE_SINCE_$LI$(): string { if (Unit.NAUTICAL_MILE_SINCE == null) { Unit.NAUTICAL_MILE_SINCE = mXparserConstants.NAMEv40; }  return Unit.NAUTICAL_MILE_SINCE; }

    public static METRE2_SINCE: string; public static METRE2_SINCE_$LI$(): string { if (Unit.METRE2_SINCE == null) { Unit.METRE2_SINCE = mXparserConstants.NAMEv40; }  return Unit.METRE2_SINCE; }

    public static CENTIMETRE2_SINCE: string; public static CENTIMETRE2_SINCE_$LI$(): string { if (Unit.CENTIMETRE2_SINCE == null) { Unit.CENTIMETRE2_SINCE = mXparserConstants.NAMEv40; }  return Unit.CENTIMETRE2_SINCE; }

    public static MILLIMETRE2_SINCE: string; public static MILLIMETRE2_SINCE_$LI$(): string { if (Unit.MILLIMETRE2_SINCE == null) { Unit.MILLIMETRE2_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILLIMETRE2_SINCE; }

    public static ARE_SINCE: string; public static ARE_SINCE_$LI$(): string { if (Unit.ARE_SINCE == null) { Unit.ARE_SINCE = mXparserConstants.NAMEv40; }  return Unit.ARE_SINCE; }

    public static HECTARE_SINCE: string; public static HECTARE_SINCE_$LI$(): string { if (Unit.HECTARE_SINCE == null) { Unit.HECTARE_SINCE = mXparserConstants.NAMEv40; }  return Unit.HECTARE_SINCE; }

    public static ACRE_SINCE: string; public static ACRE_SINCE_$LI$(): string { if (Unit.ACRE_SINCE == null) { Unit.ACRE_SINCE = mXparserConstants.NAMEv40; }  return Unit.ACRE_SINCE; }

    public static KILOMETRE2_SINCE: string; public static KILOMETRE2_SINCE_$LI$(): string { if (Unit.KILOMETRE2_SINCE == null) { Unit.KILOMETRE2_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILOMETRE2_SINCE; }

    public static MILLIMETRE3_SINCE: string; public static MILLIMETRE3_SINCE_$LI$(): string { if (Unit.MILLIMETRE3_SINCE == null) { Unit.MILLIMETRE3_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILLIMETRE3_SINCE; }

    public static CENTIMETRE3_SINCE: string; public static CENTIMETRE3_SINCE_$LI$(): string { if (Unit.CENTIMETRE3_SINCE == null) { Unit.CENTIMETRE3_SINCE = mXparserConstants.NAMEv40; }  return Unit.CENTIMETRE3_SINCE; }

    public static METRE3_SINCE: string; public static METRE3_SINCE_$LI$(): string { if (Unit.METRE3_SINCE == null) { Unit.METRE3_SINCE = mXparserConstants.NAMEv40; }  return Unit.METRE3_SINCE; }

    public static KILOMETRE3_SINCE: string; public static KILOMETRE3_SINCE_$LI$(): string { if (Unit.KILOMETRE3_SINCE == null) { Unit.KILOMETRE3_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILOMETRE3_SINCE; }

    public static MILLILITRE_SINCE: string; public static MILLILITRE_SINCE_$LI$(): string { if (Unit.MILLILITRE_SINCE == null) { Unit.MILLILITRE_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILLILITRE_SINCE; }

    public static LITRE_SINCE: string; public static LITRE_SINCE_$LI$(): string { if (Unit.LITRE_SINCE == null) { Unit.LITRE_SINCE = mXparserConstants.NAMEv40; }  return Unit.LITRE_SINCE; }

    public static GALLON_SINCE: string; public static GALLON_SINCE_$LI$(): string { if (Unit.GALLON_SINCE == null) { Unit.GALLON_SINCE = mXparserConstants.NAMEv40; }  return Unit.GALLON_SINCE; }

    public static PINT_SINCE: string; public static PINT_SINCE_$LI$(): string { if (Unit.PINT_SINCE == null) { Unit.PINT_SINCE = mXparserConstants.NAMEv40; }  return Unit.PINT_SINCE; }

    public static SECOND_SINCE: string; public static SECOND_SINCE_$LI$(): string { if (Unit.SECOND_SINCE == null) { Unit.SECOND_SINCE = mXparserConstants.NAMEv40; }  return Unit.SECOND_SINCE; }

    public static MILLISECOND_SINCE: string; public static MILLISECOND_SINCE_$LI$(): string { if (Unit.MILLISECOND_SINCE == null) { Unit.MILLISECOND_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILLISECOND_SINCE; }

    public static MINUTE_SINCE: string; public static MINUTE_SINCE_$LI$(): string { if (Unit.MINUTE_SINCE == null) { Unit.MINUTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.MINUTE_SINCE; }

    public static HOUR_SINCE: string; public static HOUR_SINCE_$LI$(): string { if (Unit.HOUR_SINCE == null) { Unit.HOUR_SINCE = mXparserConstants.NAMEv40; }  return Unit.HOUR_SINCE; }

    public static DAY_SINCE: string; public static DAY_SINCE_$LI$(): string { if (Unit.DAY_SINCE == null) { Unit.DAY_SINCE = mXparserConstants.NAMEv40; }  return Unit.DAY_SINCE; }

    public static WEEK_SINCE: string; public static WEEK_SINCE_$LI$(): string { if (Unit.WEEK_SINCE == null) { Unit.WEEK_SINCE = mXparserConstants.NAMEv40; }  return Unit.WEEK_SINCE; }

    public static JULIAN_YEAR_SINCE: string; public static JULIAN_YEAR_SINCE_$LI$(): string { if (Unit.JULIAN_YEAR_SINCE == null) { Unit.JULIAN_YEAR_SINCE = mXparserConstants.NAMEv40; }  return Unit.JULIAN_YEAR_SINCE; }

    public static KILOGRAM_SINCE: string; public static KILOGRAM_SINCE_$LI$(): string { if (Unit.KILOGRAM_SINCE == null) { Unit.KILOGRAM_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILOGRAM_SINCE; }

    public static GRAM_SINCE: string; public static GRAM_SINCE_$LI$(): string { if (Unit.GRAM_SINCE == null) { Unit.GRAM_SINCE = mXparserConstants.NAMEv40; }  return Unit.GRAM_SINCE; }

    public static MILLIGRAM_SINCE: string; public static MILLIGRAM_SINCE_$LI$(): string { if (Unit.MILLIGRAM_SINCE == null) { Unit.MILLIGRAM_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILLIGRAM_SINCE; }

    public static DECAGRAM_SINCE: string; public static DECAGRAM_SINCE_$LI$(): string { if (Unit.DECAGRAM_SINCE == null) { Unit.DECAGRAM_SINCE = mXparserConstants.NAMEv40; }  return Unit.DECAGRAM_SINCE; }

    public static TONNE_SINCE: string; public static TONNE_SINCE_$LI$(): string { if (Unit.TONNE_SINCE == null) { Unit.TONNE_SINCE = mXparserConstants.NAMEv40; }  return Unit.TONNE_SINCE; }

    public static OUNCE_SINCE: string; public static OUNCE_SINCE_$LI$(): string { if (Unit.OUNCE_SINCE == null) { Unit.OUNCE_SINCE = mXparserConstants.NAMEv40; }  return Unit.OUNCE_SINCE; }

    public static POUND_SINCE: string; public static POUND_SINCE_$LI$(): string { if (Unit.POUND_SINCE == null) { Unit.POUND_SINCE = mXparserConstants.NAMEv40; }  return Unit.POUND_SINCE; }

    public static BIT_SINCE: string; public static BIT_SINCE_$LI$(): string { if (Unit.BIT_SINCE == null) { Unit.BIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.BIT_SINCE; }

    public static KILOBIT_SINCE: string; public static KILOBIT_SINCE_$LI$(): string { if (Unit.KILOBIT_SINCE == null) { Unit.KILOBIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILOBIT_SINCE; }

    public static MEGABIT_SINCE: string; public static MEGABIT_SINCE_$LI$(): string { if (Unit.MEGABIT_SINCE == null) { Unit.MEGABIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.MEGABIT_SINCE; }

    public static GIGABIT_SINCE: string; public static GIGABIT_SINCE_$LI$(): string { if (Unit.GIGABIT_SINCE == null) { Unit.GIGABIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.GIGABIT_SINCE; }

    public static TERABIT_SINCE: string; public static TERABIT_SINCE_$LI$(): string { if (Unit.TERABIT_SINCE == null) { Unit.TERABIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.TERABIT_SINCE; }

    public static PETABIT_SINCE: string; public static PETABIT_SINCE_$LI$(): string { if (Unit.PETABIT_SINCE == null) { Unit.PETABIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.PETABIT_SINCE; }

    public static EXABIT_SINCE: string; public static EXABIT_SINCE_$LI$(): string { if (Unit.EXABIT_SINCE == null) { Unit.EXABIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.EXABIT_SINCE; }

    public static ZETTABIT_SINCE: string; public static ZETTABIT_SINCE_$LI$(): string { if (Unit.ZETTABIT_SINCE == null) { Unit.ZETTABIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.ZETTABIT_SINCE; }

    public static YOTTABIT_SINCE: string; public static YOTTABIT_SINCE_$LI$(): string { if (Unit.YOTTABIT_SINCE == null) { Unit.YOTTABIT_SINCE = mXparserConstants.NAMEv40; }  return Unit.YOTTABIT_SINCE; }

    public static BYTE_SINCE: string; public static BYTE_SINCE_$LI$(): string { if (Unit.BYTE_SINCE == null) { Unit.BYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.BYTE_SINCE; }

    public static KILOBYTE_SINCE: string; public static KILOBYTE_SINCE_$LI$(): string { if (Unit.KILOBYTE_SINCE == null) { Unit.KILOBYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILOBYTE_SINCE; }

    public static MEGABYTE_SINCE: string; public static MEGABYTE_SINCE_$LI$(): string { if (Unit.MEGABYTE_SINCE == null) { Unit.MEGABYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.MEGABYTE_SINCE; }

    public static GIGABYTE_SINCE: string; public static GIGABYTE_SINCE_$LI$(): string { if (Unit.GIGABYTE_SINCE == null) { Unit.GIGABYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.GIGABYTE_SINCE; }

    public static TERABYTE_SINCE: string; public static TERABYTE_SINCE_$LI$(): string { if (Unit.TERABYTE_SINCE == null) { Unit.TERABYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.TERABYTE_SINCE; }

    public static PETABYTE_SINCE: string; public static PETABYTE_SINCE_$LI$(): string { if (Unit.PETABYTE_SINCE == null) { Unit.PETABYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.PETABYTE_SINCE; }

    public static EXABYTE_SINCE: string; public static EXABYTE_SINCE_$LI$(): string { if (Unit.EXABYTE_SINCE == null) { Unit.EXABYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.EXABYTE_SINCE; }

    public static ZETTABYTE_SINCE: string; public static ZETTABYTE_SINCE_$LI$(): string { if (Unit.ZETTABYTE_SINCE == null) { Unit.ZETTABYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.ZETTABYTE_SINCE; }

    public static YOTTABYTE_SINCE: string; public static YOTTABYTE_SINCE_$LI$(): string { if (Unit.YOTTABYTE_SINCE == null) { Unit.YOTTABYTE_SINCE = mXparserConstants.NAMEv40; }  return Unit.YOTTABYTE_SINCE; }

    public static JOULE_SINCE: string; public static JOULE_SINCE_$LI$(): string { if (Unit.JOULE_SINCE == null) { Unit.JOULE_SINCE = mXparserConstants.NAMEv40; }  return Unit.JOULE_SINCE; }

    public static ELECTRONO_VOLT_SINCE: string; public static ELECTRONO_VOLT_SINCE_$LI$(): string { if (Unit.ELECTRONO_VOLT_SINCE == null) { Unit.ELECTRONO_VOLT_SINCE = mXparserConstants.NAMEv40; }  return Unit.ELECTRONO_VOLT_SINCE; }

    public static KILO_ELECTRONO_VOLT_SINCE: string; public static KILO_ELECTRONO_VOLT_SINCE_$LI$(): string { if (Unit.KILO_ELECTRONO_VOLT_SINCE == null) { Unit.KILO_ELECTRONO_VOLT_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILO_ELECTRONO_VOLT_SINCE; }

    public static MEGA_ELECTRONO_VOLT_SINCE: string; public static MEGA_ELECTRONO_VOLT_SINCE_$LI$(): string { if (Unit.MEGA_ELECTRONO_VOLT_SINCE == null) { Unit.MEGA_ELECTRONO_VOLT_SINCE = mXparserConstants.NAMEv40; }  return Unit.MEGA_ELECTRONO_VOLT_SINCE; }

    public static GIGA_ELECTRONO_VOLT_SINCE: string; public static GIGA_ELECTRONO_VOLT_SINCE_$LI$(): string { if (Unit.GIGA_ELECTRONO_VOLT_SINCE == null) { Unit.GIGA_ELECTRONO_VOLT_SINCE = mXparserConstants.NAMEv40; }  return Unit.GIGA_ELECTRONO_VOLT_SINCE; }

    public static TERA_ELECTRONO_VOLT_SINCE: string; public static TERA_ELECTRONO_VOLT_SINCE_$LI$(): string { if (Unit.TERA_ELECTRONO_VOLT_SINCE == null) { Unit.TERA_ELECTRONO_VOLT_SINCE = mXparserConstants.NAMEv40; }  return Unit.TERA_ELECTRONO_VOLT_SINCE; }

    public static METRE_PER_SECOND_SINCE: string; public static METRE_PER_SECOND_SINCE_$LI$(): string { if (Unit.METRE_PER_SECOND_SINCE == null) { Unit.METRE_PER_SECOND_SINCE = mXparserConstants.NAMEv40; }  return Unit.METRE_PER_SECOND_SINCE; }

    public static KILOMETRE_PER_HOUR_SINCE: string; public static KILOMETRE_PER_HOUR_SINCE_$LI$(): string { if (Unit.KILOMETRE_PER_HOUR_SINCE == null) { Unit.KILOMETRE_PER_HOUR_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILOMETRE_PER_HOUR_SINCE; }

    public static MILE_PER_HOUR_SINCE: string; public static MILE_PER_HOUR_SINCE_$LI$(): string { if (Unit.MILE_PER_HOUR_SINCE == null) { Unit.MILE_PER_HOUR_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILE_PER_HOUR_SINCE; }

    public static KNOT_SINCE: string; public static KNOT_SINCE_$LI$(): string { if (Unit.KNOT_SINCE == null) { Unit.KNOT_SINCE = mXparserConstants.NAMEv40; }  return Unit.KNOT_SINCE; }

    public static METRE_PER_SECOND2_SINCE: string; public static METRE_PER_SECOND2_SINCE_$LI$(): string { if (Unit.METRE_PER_SECOND2_SINCE == null) { Unit.METRE_PER_SECOND2_SINCE = mXparserConstants.NAMEv40; }  return Unit.METRE_PER_SECOND2_SINCE; }

    public static KILOMETRE_PER_HOUR2_SINCE: string; public static KILOMETRE_PER_HOUR2_SINCE_$LI$(): string { if (Unit.KILOMETRE_PER_HOUR2_SINCE == null) { Unit.KILOMETRE_PER_HOUR2_SINCE = mXparserConstants.NAMEv40; }  return Unit.KILOMETRE_PER_HOUR2_SINCE; }

    public static MILE_PER_HOUR2_SINCE: string; public static MILE_PER_HOUR2_SINCE_$LI$(): string { if (Unit.MILE_PER_HOUR2_SINCE == null) { Unit.MILE_PER_HOUR2_SINCE = mXparserConstants.NAMEv40; }  return Unit.MILE_PER_HOUR2_SINCE; }

    public static RADIAN_ARC_SINCE: string; public static RADIAN_ARC_SINCE_$LI$(): string { if (Unit.RADIAN_ARC_SINCE == null) { Unit.RADIAN_ARC_SINCE = mXparserConstants.NAMEv40; }  return Unit.RADIAN_ARC_SINCE; }

    public static DEGREE_ARC_SINCE: string; public static DEGREE_ARC_SINCE_$LI$(): string { if (Unit.DEGREE_ARC_SINCE == null) { Unit.DEGREE_ARC_SINCE = mXparserConstants.NAMEv40; }  return Unit.DEGREE_ARC_SINCE; }

    public static MINUTE_ARC_SINCE: string; public static MINUTE_ARC_SINCE_$LI$(): string { if (Unit.MINUTE_ARC_SINCE == null) { Unit.MINUTE_ARC_SINCE = mXparserConstants.NAMEv40; }  return Unit.MINUTE_ARC_SINCE; }

    public static SECOND_ARC_SINCE: string; public static SECOND_ARC_SINCE_$LI$(): string { if (Unit.SECOND_ARC_SINCE == null) { Unit.SECOND_ARC_SINCE = mXparserConstants.NAMEv40; }  return Unit.SECOND_ARC_SINCE; }
}
Unit["__class"] = "org.mariuszgromada.math.mxparser.parsertokens.Unit";