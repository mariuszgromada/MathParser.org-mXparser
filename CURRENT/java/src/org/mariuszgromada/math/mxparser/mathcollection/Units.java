/*
 * @(#)Units.java        4.0.0    2017-03-12
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2017 MARIUSZ GROMADA. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY <MARIUSZ GROMADA> ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of MARIUSZ GROMADA.
 *
 * If you have any questions/bugs feel free to contact:
 *
 *     Mariusz Gromada
 *     mariuszgromada.org@gmail.com
 *     http://mathparser.org
 *     http://mathspace.pl
 *     http://janetsudoku.mariuszgromada.org
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser
 *     http://mxparser.sourceforge.net
 *     http://bitbucket.org/mariuszgromada/mxparser
 *     http://mxparser.codeplex.com
 *     http://github.com/mariuszgromada/Janet-Sudoku
 *     http://janetsudoku.codeplex.com
 *     http://sourceforge.net/projects/janetsudoku
 *     http://bitbucket.org/mariuszgromada/janet-sudoku
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser.mathcollection;

/**
 * Units - class representing the most important units (length, area, volume, mass).
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 *                 <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br>
 *                 <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br>
 *                 <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br>
 *                 <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br>
 *                 <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br>
 *                 <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br>
 *
 * @version        4.0.0
 */
public final class Units {
	/* ===========================================
	 * Units prefixes
	 * ===========================================
	 */
	/**
	 * Percentage
	 */
	public static final double PERC = 0.01;
	/**
	 * Promil, Per mille
	 */
	public static final double PROMIL = 0.001;
	/**
	 * Yotta
	 */
	public static final double YOTTA = 1.0E24;
	/**
	 * Zetta
	 */
	public static final double ZETTA = 1.0E21;
	/**
	 * Exa
	 */
	public static final double EXA = 1.0E18;
	/**
	 * Peta
	 */
	public static final double PETA = 1.0E15;
	/**
	 * Tera
	 */
	public static final double TERA = 1.0E12;
	/**
	 * Giga
	 */
	public static final double GIGA = 1000000000.0;
	/**
	 * Mega
	 */
	public static final double MEGA = 1000000.0;
	/**
	 * Kilo
	 */
	public static final double KILO = 1000.0;
	/**
	 * Hecto
	 */
	public static final double HECTO = 100.0;
	/**
	 * Deca
	 */
	public static final double DECA = 10.0;
	/**
	 * Deci
	 */
	public static final double DECI = 0.1;
	/**
	 * Centi
	 */
	public static final double CENTI = 0.01;
	/**
	 * Milli
	 */
	public static final double MILLI = 0.001;
	/**
	 * Micro
	 */
	public static final double MICRO = 0.000001;
	/**
	 * Nano
	 */
	public static final double NANO = 0.000000001;
	/**
	 * Pico
	 */
	public static final double PICO = 1.0E-12;
	/**
	 * Femto
	 */
	public static final double FEMTO = 1.0E-15;
	/**
	 * Atto
	 */
	public static final double ATTO = 1.0E-18;
	/**
	 * Zepto
	 */
	public static final double ZEPTO = 1.0E-21;
	/**
	 * Yocto
	 */
	public static final double YOCTO = 1.0E-24;

	/* ===========================================
	 * Units of length / distance
	 * ===========================================
	 */
	/**
	 * Meter
	 */
	public static final double METRE = 1.0;
	/**
	 * Kilometer
	 */
	public static final double KILOMETRE = 1000.0 * METRE;
	/**
	 * Centimeter
	 */
	public static final double CENTIMETRE = CENTI * METRE;
	/**
	 * Millimetre
	 */
	public static final double MILLIMETRE = MILLI * METRE;
	/**
	 * Inch
	 */
	public static final double INCH = 2.54 * CENTIMETRE;
	/**
	 * Yard
	 */
	public static final double YARD = 0.9144 * METRE;
	/**
	 * Feet
	 */
	public static final double FEET = 30.48 * CENTIMETRE;
	/**
	 * Mile
	 */
	public static final double MILE = 1.609344 * KILOMETRE;
	/**
	 * Nautical mile
	 */
	public static final double NAUTICAL_MILE = 1.852 * KILOMETRE;

	/* ===========================================
	 * Units of area
	 * ===========================================
	 */
	/**
	 * Square metre
	 */
	public static final double METRE2 = METRE * METRE;
	/**
	 * Square centimetre
	 */
	public static final double CENTIMETRE2 = CENTIMETRE * CENTIMETRE;
	/**
	 * Square millimetre
	 */
	public static final double MILLIMETRE2 = MILLIMETRE * MILLIMETRE;
	/**
	 * Are
	 */
	public static final double ARE = (10.0 * METRE) * (10.0 * METRE);
	/**
	 * Hectare
	 */
	public static final double HECTARE = (100.0 * METRE) * (100.0 * METRE);
	/**
	 * Square kilometre
	 */
	public static final double KILOMETRE2 = KILOMETRE * KILOMETRE;
	/**
	 * Acre
	 */
	public static final double ACRE = (66.0 * FEET) * (660.0 * FEET);

	/* ===========================================
	 * Units of volume
	 * ===========================================
	 */
	/**
	 * Qubic millimetre
	 */
	public static final double MILLIMETRE3 = MILLIMETRE * MILLIMETRE * MILLIMETRE;
	/**
	 * Qubic centimetre
	 */
	public static final double CENTIMETRE3 = CENTIMETRE * CENTIMETRE * CENTIMETRE;
	/**
	 * Qubic metre
	 */
	public static final double METRE3 = METRE * METRE * METRE;
	/**
	 * Qubic kilometre
	 */
	public static final double KILOMETRE3 = KILOMETRE * KILOMETRE * KILOMETRE;
	/**
	 * Millilitre
	 */
	public static final double MILLILITRE = CENTIMETRE3;
	/**
	 * Litre
	 */
	public static final double LITRE = 1000.0 * MILLILITRE;
	/**
	 * Gallon
	 */
	public static final double GALLON = 3.78541178 * LITRE;
	/**
	 * Pint
	 */
	public static final double PINT = 473.176473 * MILLILITRE;

	/* ===========================================
	 * Units of time
	 * ===========================================
	 */
	/**
	 * Second
	 */
	public static final double SECOND = 1.0;
	/**
	 * Millisecond
	 */
	public static final double MILLISECOND = MILLI * SECOND;
	/**
	 * MINUTE
	 */
	public static final double MINUTE = 60.0 * SECOND;
	/**
	 * HOUR
	 */
	public static final double HOUR = 60.0 * MINUTE;
	/**
	 * DAY
	 */
	public static final double DAY = 24.0 * HOUR;
	/**
	 * WEEK
	 */
	public static final double WEEK = 7.0 * DAY;
	/**
	 * JULIAN YEAR
	 */
	public static final double JULIAN_YEAR = 365.25 * DAY;

	/* ===========================================
	 * Units of mass
	 * ===========================================
	 */
	/**
	 * Kilogram
	 */
	public static final double KILOGRAM = 1.0;
	/**
	 * Gram
	 */
	public static final double GRAM = 0.001 * KILOGRAM;
	/**
	 * Milligram
	 */
	public static final double MILLIGRAM = MILLI * GRAM;
	/**
	 * Decagram
	 */
	public static final double DECAGRAM = DECA * GRAM;
	/**
	 * Tonne
	 */
	public static final double TONNE = 1000.0 * KILOGRAM;
	/**
	 * Ounce
	 */
	public static final double OUNCE = 28.3495231 * GRAM;
	/**
	 * Pound
	 */
	public static final double POUND = 0.45359237 * KILOGRAM;

	/* ===========================================
	 * Units of information
	 * ===========================================
	 */
	/**
	 * Bit
	 */
	public static final double BIT = 1.0;
	/**
	 * Kilobit
	 */
	public static final double KILOBIT = 1024.0 * BIT;
	/**
	 * Megabit
	 */
	public static final double MEGABIT = 1024.0 * KILOBIT;
	/**
	 * Gigabit
	 */
	public static final double GIGABIT = 1024.0 * MEGABIT;
	/**
	 * Terabit
	 */
	public static final double TERABIT = 1024.0 * GIGABIT;
	/**
	 * Petabit
	 */
	public static final double PETABIT = 1024.0 * TERABIT;
	/**
	 * Exabit
	 */
	public static final double EXABIT = 1024.0 * PETABIT;
	/**
	 * Zettabit
	 */
	public static final double ZETTABIT = 1024.0 * EXABIT;
	/**
	 * Yottabit
	 */
	public static final double YOTTABIT = 1024.0 * ZETTABIT;
	/**
	 * Byte
	 */
	public static final double BYTE = 8.0 * BIT;
	/**
	 * Kilobyte
	 */
	public static final double KILOBYTE = 1024.0 * BYTE;
	/**
	 * Megabyte
	 */
	public static final double MEGABYTE = 1024.0 * KILOBYTE;
	/**
	 * Gigabyte
	 */
	public static final double GIGABYTE = 1024.0 * MEGABYTE;
	/**
	 * Terabyte
	 */
	public static final double TERABYTE = 1024.0 * GIGABYTE;
	/**
	 * Petabyte
	 */
	public static final double PETABYTE = 1024.0 * TERABYTE;
	/**
	 * Exabyte
	 */
	public static final double EXABYTE = 1024.0 * PETABYTE;
	/**
	 * Zettabyte
	 */
	public static final double ZETTABYTE = 1024.0 * EXABYTE;
	/**
	 * Yottabyte
	 */
	public static final double YOTTABYTE = 1024.0 * ZETTABYTE;

	/* ===========================================
	 * Units of energy
	 * ===========================================
	 */
	/**
	 * Jule
	 */
	public static final double JOULE = (KILOGRAM * METRE * METRE) / (SECOND * SECOND);
	/**
	 * Electrono-Volt
	 */
	public static final double ELECTRONO_VOLT = 1.6021766208E-19 * JOULE;
	/**
	 * Kilo Electrono-Volt
	 */
	public static final double KILO_ELECTRONO_VOLT = KILO * ELECTRONO_VOLT;
	/**
	 * Mega Electrono-Volt
	 */
	public static final double MEGA_ELECTRONO_VOLT = MEGA * ELECTRONO_VOLT;
	/**
	 * Giga Electrono-Volt
	 */
	public static final double GIGA_ELECTRONO_VOLT = GIGA * ELECTRONO_VOLT;
	/**
	 * Tera Electrono-Volt
	 */
	public static final double TERA_ELECTRONO_VOLT = TERA * ELECTRONO_VOLT;

	/* ===========================================
	 * Units of speed
	 * ===========================================
	 */
	/**
	 * Metre per second
	 */
	public static final double METRE_PER_SECOND = METRE / SECOND;
	/**
	 * Kilometre per hour
	 */
	public static final double KILOMETRE_PER_HOUR = KILOMETRE / HOUR;
	/**
	 * Mile per hour
	 */
	public static final double MILE_PER_HOUR = MILE / HOUR;
	/**
	 * Knot
	 */
	public static final double KNOT = 0.514444444 * METRE / SECOND;

	/* ===========================================
	 * Units of acceleration
	 * ===========================================
	 */
	/**
	 * Metre per squared second
	 */
	public static final double METRE_PER_SECOND2 = METRE / (SECOND * SECOND);
	/**
	 * Kilometre per squared hour
	 */
	public static final double KILOMETRE_PER_HOUR2 = KILOMETRE / (HOUR * HOUR);
	/**
	 * Mile per squared hour
	 */
	public static final double MILE_PER_HOUR2 = MILE / (HOUR * HOUR);

	/* ===========================================
	 * Units of angle
	 * ===========================================
	 */
	/**
	 * Radian (angle)
	 */
	public static final double RADIAN_ARC = 1.0;
	/**
	 * Degree (angle)
	 */
	public static final double DEGREE_ARC = (MathConstants.PI / 180.0) * RADIAN_ARC;
	/**
	 * Minute (angle)
	 */
	public static final double MINUTE_ARC = DEGREE_ARC / 60.0;
	/**
	 * Second (angle)
	 */
	public static final double SECOND_ARC = MINUTE_ARC / 60.0;
}