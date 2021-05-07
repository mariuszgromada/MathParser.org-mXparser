/* Generated from Java with JSweet 3.0.0 - http://www.jsweet.org */
import { MathConstants } from './MathConstants';

/**
 * Units - class representing the most important units (length, area, volume, mass).
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * @class
 */
export class Units {
    /**
     * Percentage
     */
    public static PERC: number = 0.01;

    /**
     * Promil, Per mille
     */
    public static PROMIL: number = 0.001;

    /**
     * Yotta
     */
    public static YOTTA: number = 1.0E24;

    /**
     * Zetta
     */
    public static ZETTA: number = 1.0E21;

    /**
     * Exa
     */
    public static EXA: number = 1.0E18;

    /**
     * Peta
     */
    public static PETA: number = 1.0E15;

    /**
     * Tera
     */
    public static TERA: number = 1.0E12;

    /**
     * Giga
     */
    public static GIGA: number = 1.0E9;

    /**
     * Mega
     */
    public static MEGA: number = 1000000.0;

    /**
     * Kilo
     */
    public static KILO: number = 1000.0;

    /**
     * Hecto
     */
    public static HECTO: number = 100.0;

    /**
     * Deca
     */
    public static DECA: number = 10.0;

    /**
     * Deci
     */
    public static DECI: number = 0.1;

    /**
     * Centi
     */
    public static CENTI: number = 0.01;

    /**
     * Milli
     */
    public static MILLI: number = 0.001;

    /**
     * Micro
     */
    public static MICRO: number = 1.0E-6;

    /**
     * Nano
     */
    public static NANO: number = 1.0E-9;

    /**
     * Pico
     */
    public static PICO: number = 1.0E-12;

    /**
     * Femto
     */
    public static FEMTO: number = 1.0E-15;

    /**
     * Atto
     */
    public static ATTO: number = 1.0E-18;

    /**
     * Zepto
     */
    public static ZEPTO: number = 1.0E-21;

    /**
     * Yocto
     */
    public static YOCTO: number = 1.0E-24;

    /**
     * Meter
     */
    public static METRE: number = 1.0;

    /**
     * Kilometer
     */
    public static KILOMETRE: number; public static KILOMETRE_$LI$(): number { if (Units.KILOMETRE == null) { Units.KILOMETRE = 1000.0 * Units.METRE; }  return Units.KILOMETRE; }

    /**
     * Centimeter
     */
    public static CENTIMETRE: number; public static CENTIMETRE_$LI$(): number { if (Units.CENTIMETRE == null) { Units.CENTIMETRE = Units.CENTI * Units.METRE; }  return Units.CENTIMETRE; }

    /**
     * Millimetre
     */
    public static MILLIMETRE: number; public static MILLIMETRE_$LI$(): number { if (Units.MILLIMETRE == null) { Units.MILLIMETRE = Units.MILLI * Units.METRE; }  return Units.MILLIMETRE; }

    /**
     * Inch
     */
    public static INCH: number; public static INCH_$LI$(): number { if (Units.INCH == null) { Units.INCH = 2.54 * Units.CENTIMETRE_$LI$(); }  return Units.INCH; }

    /**
     * Yard
     */
    public static YARD: number; public static YARD_$LI$(): number { if (Units.YARD == null) { Units.YARD = 0.9144 * Units.METRE; }  return Units.YARD; }

    /**
     * Feet
     */
    public static FEET: number; public static FEET_$LI$(): number { if (Units.FEET == null) { Units.FEET = 30.48 * Units.CENTIMETRE_$LI$(); }  return Units.FEET; }

    /**
     * Mile
     */
    public static MILE: number; public static MILE_$LI$(): number { if (Units.MILE == null) { Units.MILE = 1.609344 * Units.KILOMETRE_$LI$(); }  return Units.MILE; }

    /**
     * Nautical mile
     */
    public static NAUTICAL_MILE: number; public static NAUTICAL_MILE_$LI$(): number { if (Units.NAUTICAL_MILE == null) { Units.NAUTICAL_MILE = 1.852 * Units.KILOMETRE_$LI$(); }  return Units.NAUTICAL_MILE; }

    /**
     * Square metre
     */
    public static METRE2: number; public static METRE2_$LI$(): number { if (Units.METRE2 == null) { Units.METRE2 = Units.METRE * Units.METRE; }  return Units.METRE2; }

    /**
     * Square centimetre
     */
    public static CENTIMETRE2: number; public static CENTIMETRE2_$LI$(): number { if (Units.CENTIMETRE2 == null) { Units.CENTIMETRE2 = Units.CENTIMETRE_$LI$() * Units.CENTIMETRE_$LI$(); }  return Units.CENTIMETRE2; }

    /**
     * Square millimetre
     */
    public static MILLIMETRE2: number; public static MILLIMETRE2_$LI$(): number { if (Units.MILLIMETRE2 == null) { Units.MILLIMETRE2 = Units.MILLIMETRE_$LI$() * Units.MILLIMETRE_$LI$(); }  return Units.MILLIMETRE2; }

    /**
     * Are
     */
    public static ARE: number; public static ARE_$LI$(): number { if (Units.ARE == null) { Units.ARE = (10.0 * Units.METRE) * (10.0 * Units.METRE); }  return Units.ARE; }

    /**
     * Hectare
     */
    public static HECTARE: number; public static HECTARE_$LI$(): number { if (Units.HECTARE == null) { Units.HECTARE = (100.0 * Units.METRE) * (100.0 * Units.METRE); }  return Units.HECTARE; }

    /**
     * Square kilometre
     */
    public static KILOMETRE2: number; public static KILOMETRE2_$LI$(): number { if (Units.KILOMETRE2 == null) { Units.KILOMETRE2 = Units.KILOMETRE_$LI$() * Units.KILOMETRE_$LI$(); }  return Units.KILOMETRE2; }

    /**
     * Acre
     */
    public static ACRE: number; public static ACRE_$LI$(): number { if (Units.ACRE == null) { Units.ACRE = (66.0 * Units.FEET_$LI$()) * (660.0 * Units.FEET_$LI$()); }  return Units.ACRE; }

    /**
     * Qubic millimetre
     */
    public static MILLIMETRE3: number; public static MILLIMETRE3_$LI$(): number { if (Units.MILLIMETRE3 == null) { Units.MILLIMETRE3 = Units.MILLIMETRE_$LI$() * Units.MILLIMETRE_$LI$() * Units.MILLIMETRE_$LI$(); }  return Units.MILLIMETRE3; }

    /**
     * Qubic centimetre
     */
    public static CENTIMETRE3: number; public static CENTIMETRE3_$LI$(): number { if (Units.CENTIMETRE3 == null) { Units.CENTIMETRE3 = Units.CENTIMETRE_$LI$() * Units.CENTIMETRE_$LI$() * Units.CENTIMETRE_$LI$(); }  return Units.CENTIMETRE3; }

    /**
     * Qubic metre
     */
    public static METRE3: number; public static METRE3_$LI$(): number { if (Units.METRE3 == null) { Units.METRE3 = Units.METRE * Units.METRE * Units.METRE; }  return Units.METRE3; }

    /**
     * Qubic kilometre
     */
    public static KILOMETRE3: number; public static KILOMETRE3_$LI$(): number { if (Units.KILOMETRE3 == null) { Units.KILOMETRE3 = Units.KILOMETRE_$LI$() * Units.KILOMETRE_$LI$() * Units.KILOMETRE_$LI$(); }  return Units.KILOMETRE3; }

    /**
     * Millilitre
     */
    public static MILLILITRE: number; public static MILLILITRE_$LI$(): number { if (Units.MILLILITRE == null) { Units.MILLILITRE = Units.CENTIMETRE3_$LI$(); }  return Units.MILLILITRE; }

    /**
     * Litre
     */
    public static LITRE: number; public static LITRE_$LI$(): number { if (Units.LITRE == null) { Units.LITRE = 1000.0 * Units.MILLILITRE_$LI$(); }  return Units.LITRE; }

    /**
     * Gallon
     */
    public static GALLON: number; public static GALLON_$LI$(): number { if (Units.GALLON == null) { Units.GALLON = 3.78541178 * Units.LITRE_$LI$(); }  return Units.GALLON; }

    /**
     * Pint
     */
    public static PINT: number; public static PINT_$LI$(): number { if (Units.PINT == null) { Units.PINT = 473.176473 * Units.MILLILITRE_$LI$(); }  return Units.PINT; }

    /**
     * Second
     */
    public static SECOND: number = 1.0;

    /**
     * Millisecond
     */
    public static MILLISECOND: number; public static MILLISECOND_$LI$(): number { if (Units.MILLISECOND == null) { Units.MILLISECOND = Units.MILLI * Units.SECOND; }  return Units.MILLISECOND; }

    /**
     * MINUTE
     */
    public static MINUTE: number; public static MINUTE_$LI$(): number { if (Units.MINUTE == null) { Units.MINUTE = 60.0 * Units.SECOND; }  return Units.MINUTE; }

    /**
     * HOUR
     */
    public static HOUR: number; public static HOUR_$LI$(): number { if (Units.HOUR == null) { Units.HOUR = 60.0 * Units.MINUTE_$LI$(); }  return Units.HOUR; }

    /**
     * DAY
     */
    public static DAY: number; public static DAY_$LI$(): number { if (Units.DAY == null) { Units.DAY = 24.0 * Units.HOUR_$LI$(); }  return Units.DAY; }

    /**
     * WEEK
     */
    public static WEEK: number; public static WEEK_$LI$(): number { if (Units.WEEK == null) { Units.WEEK = 7.0 * Units.DAY_$LI$(); }  return Units.WEEK; }

    /**
     * JULIAN YEAR
     */
    public static JULIAN_YEAR: number; public static JULIAN_YEAR_$LI$(): number { if (Units.JULIAN_YEAR == null) { Units.JULIAN_YEAR = 365.25 * Units.DAY_$LI$(); }  return Units.JULIAN_YEAR; }

    /**
     * Kilogram
     */
    public static KILOGRAM: number = 1.0;

    /**
     * Gram
     */
    public static GRAM: number; public static GRAM_$LI$(): number { if (Units.GRAM == null) { Units.GRAM = 0.001 * Units.KILOGRAM; }  return Units.GRAM; }

    /**
     * Milligram
     */
    public static MILLIGRAM: number; public static MILLIGRAM_$LI$(): number { if (Units.MILLIGRAM == null) { Units.MILLIGRAM = Units.MILLI * Units.GRAM_$LI$(); }  return Units.MILLIGRAM; }

    /**
     * Decagram
     */
    public static DECAGRAM: number; public static DECAGRAM_$LI$(): number { if (Units.DECAGRAM == null) { Units.DECAGRAM = Units.DECA * Units.GRAM_$LI$(); }  return Units.DECAGRAM; }

    /**
     * Tonne
     */
    public static TONNE: number; public static TONNE_$LI$(): number { if (Units.TONNE == null) { Units.TONNE = 1000.0 * Units.KILOGRAM; }  return Units.TONNE; }

    /**
     * Ounce
     */
    public static OUNCE: number; public static OUNCE_$LI$(): number { if (Units.OUNCE == null) { Units.OUNCE = 28.3495231 * Units.GRAM_$LI$(); }  return Units.OUNCE; }

    /**
     * Pound
     */
    public static POUND: number; public static POUND_$LI$(): number { if (Units.POUND == null) { Units.POUND = 0.45359237 * Units.KILOGRAM; }  return Units.POUND; }

    public static MOLE: number = 1.0;

    /**
     * Coulomb
     */
    public static COULOMB: number = 1.0;

    /**
     * Ampere
     */
    public static AMPERE: number; public static AMPERE_$LI$(): number { if (Units.AMPERE == null) { Units.AMPERE = Units.COULOMB / Units.SECOND; }  return Units.AMPERE; }

    /**
     * Kelvin
     */
    public static KELVIN: number = 1.0;

    /**
     * Celcius
     */
    public static CELCIUS: number = 1.0;

    /**
     * Farenheight
     */
    public static FARENHEIGHT: number = 1.8;

    /**
     * Bit
     */
    public static BIT: number = 1.0;

    /**
     * Kilobit
     */
    public static KILOBIT: number; public static KILOBIT_$LI$(): number { if (Units.KILOBIT == null) { Units.KILOBIT = 1024.0 * Units.BIT; }  return Units.KILOBIT; }

    /**
     * Megabit
     */
    public static MEGABIT: number; public static MEGABIT_$LI$(): number { if (Units.MEGABIT == null) { Units.MEGABIT = 1024.0 * Units.KILOBIT_$LI$(); }  return Units.MEGABIT; }

    /**
     * Gigabit
     */
    public static GIGABIT: number; public static GIGABIT_$LI$(): number { if (Units.GIGABIT == null) { Units.GIGABIT = 1024.0 * Units.MEGABIT_$LI$(); }  return Units.GIGABIT; }

    /**
     * Terabit
     */
    public static TERABIT: number; public static TERABIT_$LI$(): number { if (Units.TERABIT == null) { Units.TERABIT = 1024.0 * Units.GIGABIT_$LI$(); }  return Units.TERABIT; }

    /**
     * Petabit
     */
    public static PETABIT: number; public static PETABIT_$LI$(): number { if (Units.PETABIT == null) { Units.PETABIT = 1024.0 * Units.TERABIT_$LI$(); }  return Units.PETABIT; }

    /**
     * Exabit
     */
    public static EXABIT: number; public static EXABIT_$LI$(): number { if (Units.EXABIT == null) { Units.EXABIT = 1024.0 * Units.PETABIT_$LI$(); }  return Units.EXABIT; }

    /**
     * Zettabit
     */
    public static ZETTABIT: number; public static ZETTABIT_$LI$(): number { if (Units.ZETTABIT == null) { Units.ZETTABIT = 1024.0 * Units.EXABIT_$LI$(); }  return Units.ZETTABIT; }

    /**
     * Yottabit
     */
    public static YOTTABIT: number; public static YOTTABIT_$LI$(): number { if (Units.YOTTABIT == null) { Units.YOTTABIT = 1024.0 * Units.ZETTABIT_$LI$(); }  return Units.YOTTABIT; }

    /**
     * Byte
     */
    public static BYTE: number; public static BYTE_$LI$(): number { if (Units.BYTE == null) { Units.BYTE = 8.0 * Units.BIT; }  return Units.BYTE; }

    /**
     * Kilobyte
     */
    public static KILOBYTE: number; public static KILOBYTE_$LI$(): number { if (Units.KILOBYTE == null) { Units.KILOBYTE = 1024.0 * Units.BYTE_$LI$(); }  return Units.KILOBYTE; }

    /**
     * Megabyte
     */
    public static MEGABYTE: number; public static MEGABYTE_$LI$(): number { if (Units.MEGABYTE == null) { Units.MEGABYTE = 1024.0 * Units.KILOBYTE_$LI$(); }  return Units.MEGABYTE; }

    /**
     * Gigabyte
     */
    public static GIGABYTE: number; public static GIGABYTE_$LI$(): number { if (Units.GIGABYTE == null) { Units.GIGABYTE = 1024.0 * Units.MEGABYTE_$LI$(); }  return Units.GIGABYTE; }

    /**
     * Terabyte
     */
    public static TERABYTE: number; public static TERABYTE_$LI$(): number { if (Units.TERABYTE == null) { Units.TERABYTE = 1024.0 * Units.GIGABYTE_$LI$(); }  return Units.TERABYTE; }

    /**
     * Petabyte
     */
    public static PETABYTE: number; public static PETABYTE_$LI$(): number { if (Units.PETABYTE == null) { Units.PETABYTE = 1024.0 * Units.TERABYTE_$LI$(); }  return Units.PETABYTE; }

    /**
     * Exabyte
     */
    public static EXABYTE: number; public static EXABYTE_$LI$(): number { if (Units.EXABYTE == null) { Units.EXABYTE = 1024.0 * Units.PETABYTE_$LI$(); }  return Units.EXABYTE; }

    /**
     * Zettabyte
     */
    public static ZETTABYTE: number; public static ZETTABYTE_$LI$(): number { if (Units.ZETTABYTE == null) { Units.ZETTABYTE = 1024.0 * Units.EXABYTE_$LI$(); }  return Units.ZETTABYTE; }

    /**
     * Yottabyte
     */
    public static YOTTABYTE: number; public static YOTTABYTE_$LI$(): number { if (Units.YOTTABYTE == null) { Units.YOTTABYTE = 1024.0 * Units.ZETTABYTE_$LI$(); }  return Units.YOTTABYTE; }

    /**
     * Jule
     */
    public static JOULE: number; public static JOULE_$LI$(): number { if (Units.JOULE == null) { Units.JOULE = (Units.KILOGRAM * Units.METRE * Units.METRE) / (Units.SECOND * Units.SECOND); }  return Units.JOULE; }

    /**
     * Electrono-Volt
     */
    public static ELECTRONO_VOLT: number; public static ELECTRONO_VOLT_$LI$(): number { if (Units.ELECTRONO_VOLT == null) { Units.ELECTRONO_VOLT = 1.6021766208E-19 * Units.JOULE_$LI$(); }  return Units.ELECTRONO_VOLT; }

    /**
     * Kilo Electrono-Volt
     */
    public static KILO_ELECTRONO_VOLT: number; public static KILO_ELECTRONO_VOLT_$LI$(): number { if (Units.KILO_ELECTRONO_VOLT == null) { Units.KILO_ELECTRONO_VOLT = Units.KILO * Units.ELECTRONO_VOLT_$LI$(); }  return Units.KILO_ELECTRONO_VOLT; }

    /**
     * Mega Electrono-Volt
     */
    public static MEGA_ELECTRONO_VOLT: number; public static MEGA_ELECTRONO_VOLT_$LI$(): number { if (Units.MEGA_ELECTRONO_VOLT == null) { Units.MEGA_ELECTRONO_VOLT = Units.MEGA * Units.ELECTRONO_VOLT_$LI$(); }  return Units.MEGA_ELECTRONO_VOLT; }

    /**
     * Giga Electrono-Volt
     */
    public static GIGA_ELECTRONO_VOLT: number; public static GIGA_ELECTRONO_VOLT_$LI$(): number { if (Units.GIGA_ELECTRONO_VOLT == null) { Units.GIGA_ELECTRONO_VOLT = Units.GIGA * Units.ELECTRONO_VOLT_$LI$(); }  return Units.GIGA_ELECTRONO_VOLT; }

    /**
     * Tera Electrono-Volt
     */
    public static TERA_ELECTRONO_VOLT: number; public static TERA_ELECTRONO_VOLT_$LI$(): number { if (Units.TERA_ELECTRONO_VOLT == null) { Units.TERA_ELECTRONO_VOLT = Units.TERA * Units.ELECTRONO_VOLT_$LI$(); }  return Units.TERA_ELECTRONO_VOLT; }

    /**
     * Metre per second
     */
    public static METRE_PER_SECOND: number; public static METRE_PER_SECOND_$LI$(): number { if (Units.METRE_PER_SECOND == null) { Units.METRE_PER_SECOND = Units.METRE / Units.SECOND; }  return Units.METRE_PER_SECOND; }

    /**
     * Kilometre per hour
     */
    public static KILOMETRE_PER_HOUR: number; public static KILOMETRE_PER_HOUR_$LI$(): number { if (Units.KILOMETRE_PER_HOUR == null) { Units.KILOMETRE_PER_HOUR = Units.KILOMETRE_$LI$() / Units.HOUR_$LI$(); }  return Units.KILOMETRE_PER_HOUR; }

    /**
     * Mile per hour
     */
    public static MILE_PER_HOUR: number; public static MILE_PER_HOUR_$LI$(): number { if (Units.MILE_PER_HOUR == null) { Units.MILE_PER_HOUR = Units.MILE_$LI$() / Units.HOUR_$LI$(); }  return Units.MILE_PER_HOUR; }

    /**
     * Knot
     */
    public static KNOT: number; public static KNOT_$LI$(): number { if (Units.KNOT == null) { Units.KNOT = 0.514444444 * Units.METRE / Units.SECOND; }  return Units.KNOT; }

    /**
     * Metre per squared second
     */
    public static METRE_PER_SECOND2: number; public static METRE_PER_SECOND2_$LI$(): number { if (Units.METRE_PER_SECOND2 == null) { Units.METRE_PER_SECOND2 = Units.METRE / (Units.SECOND * Units.SECOND); }  return Units.METRE_PER_SECOND2; }

    /**
     * Kilometre per squared hour
     */
    public static KILOMETRE_PER_HOUR2: number; public static KILOMETRE_PER_HOUR2_$LI$(): number { if (Units.KILOMETRE_PER_HOUR2 == null) { Units.KILOMETRE_PER_HOUR2 = Units.KILOMETRE_$LI$() / (Units.HOUR_$LI$() * Units.HOUR_$LI$()); }  return Units.KILOMETRE_PER_HOUR2; }

    /**
     * Mile per squared hour
     */
    public static MILE_PER_HOUR2: number; public static MILE_PER_HOUR2_$LI$(): number { if (Units.MILE_PER_HOUR2 == null) { Units.MILE_PER_HOUR2 = Units.MILE_$LI$() / (Units.HOUR_$LI$() * Units.HOUR_$LI$()); }  return Units.MILE_PER_HOUR2; }

    /**
     * Radian (angle)
     */
    public static RADIAN_ARC: number = 1.0;

    /**
     * Degree (angle)
     */
    public static DEGREE_ARC: number; public static DEGREE_ARC_$LI$(): number { if (Units.DEGREE_ARC == null) { Units.DEGREE_ARC = (MathConstants.PI / 180.0) * Units.RADIAN_ARC; }  return Units.DEGREE_ARC; }

    /**
     * Minute (angle)
     */
    public static MINUTE_ARC: number; public static MINUTE_ARC_$LI$(): number { if (Units.MINUTE_ARC == null) { Units.MINUTE_ARC = Units.DEGREE_ARC_$LI$() / 60.0; }  return Units.MINUTE_ARC; }

    /**
     * Second (angle)
     */
    public static SECOND_ARC: number; public static SECOND_ARC_$LI$(): number { if (Units.SECOND_ARC == null) { Units.SECOND_ARC = Units.MINUTE_ARC_$LI$() / 60.0; }  return Units.SECOND_ARC; }
}
Units["__class"] = "org.mariuszgromada.math.mxparser.mathcollection.Units";