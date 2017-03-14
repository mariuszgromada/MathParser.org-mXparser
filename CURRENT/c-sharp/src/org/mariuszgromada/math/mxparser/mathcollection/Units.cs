/*
 * @(#)Units.cs        4.0.0    2017-03-12
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
using System;

namespace org.mariuszgromada.math.mxparser.mathcollection {
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
	[CLSCompliant(true)]
	public sealed class Units {
		/* ===========================================
		 * Units prefixes
		 * ===========================================
		 */
		/**
		 * Percentage
		 */
		public const double PERC = 0.01;
		/**
		 * Promil, Per mille
		 */
		public const double PROMIL = 0.001;
		/**
		 * Yotta
		 */
		public const double YOTTA = 1.0E24;
		/**
		 * Zetta
		 */
		public const double ZETTA = 1.0E21;
		/**
		 * Exa
		 */
		public const double EXA = 1.0E18;
		/**
		 * Peta
		 */
		public const double PETA = 1.0E15;
		/**
		 * Tera
		 */
		public const double TERA = 1.0E12;
		/**
		 * Giga
		 */
		public const double GIGA = 1000000000.0;
		/**
		 * Mega
		 */
		public const double MEGA = 1000000.0;
		/**
		 * Kilo
		 */
		public const double KILO = 1000.0;
		/**
		 * Hecto
		 */
		public const double HECTO = 100.0;
		/**
		 * Deca
		 */
		public const double DECA = 10.0;
		/**
		 * Deci
		 */
		public const double DECI = 0.1;
		/**
		 * Centi
		 */
		public const double CENTI = 0.01;
		/**
		 * Milli
		 */
		public const double MILLI = 0.001;
		/**
		 * Micro
		 */
		public const double MICRO = 0.000001;
		/**
		 * Nano
		 */
		public const double NANO = 0.000000001;
		/**
		 * Pico
		 */
		public const double PICO = 1.0E-12;
		/**
		 * Femto
		 */
		public const double FEMTO = 1.0E-15;
		/**
		 * Atto
		 */
		public const double ATTO = 1.0E-18;
		/**
		 * Zepto
		 */
		public const double ZEPTO = 1.0E-21;
		/**
		 * Yocto
		 */
		public const double YOCTO = 1.0E-24;

		/* ===========================================
		 * Units of length / distance
		 * ===========================================
		 */
		/**
		 * Meter
		 */
		public const double METRE = 1.0;
		/**
		 * Kilometer
		 */
		public const double KILOMETRE = 1000.0 * METRE;
		/**
		 * Centimeter
		 */
		public const double CENTIMETRE = CENTI * METRE;
		/**
		 * Millimetre
		 */
		public const double MILLIMETRE = MILLI * METRE;
		/**
		 * Inch
		 */
		public const double INCH = 2.54 * CENTIMETRE;
		/**
		 * Yard
		 */
		public const double YARD = 0.9144 * METRE;
		/**
		 * Feet
		 */
		public const double FEET = 30.48 * CENTIMETRE;
		/**
		 * Mile
		 */
		public const double MILE = 1.609344 * KILOMETRE;
		/**
		 * Nautical mile
		 */
		public const double NAUTICAL_MILE = 1.852 * KILOMETRE;

		/* ===========================================
		 * Units of area
		 * ===========================================
		 */
		/**
		 * Square metre
		 */
		public const double METRE2 = METRE * METRE;
		/**
		 * Square centimetre
		 */
		public const double CENTIMETRE2 = CENTIMETRE * CENTIMETRE;
		/**
		 * Square millimetre
		 */
		public const double MILLIMETRE2 = MILLIMETRE * MILLIMETRE;
		/**
		 * Are
		 */
		public const double ARE = (10.0 * METRE) * (10.0 * METRE);
		/**
		 * Hectare
		 */
		public const double HECTARE = (100.0 * METRE) * (100.0 * METRE);
		/**
		 * Square kilometre
		 */
		public const double KILOMETRE2 = KILOMETRE * KILOMETRE;
		/**
		 * Acre
		 */
		public const double ACRE = (66.0 * FEET) * (660.0 * FEET);

		/* ===========================================
		 * Units of volume
		 * ===========================================
		 */
		/**
		 * Qubic millimetre
		 */
		public const double MILLIMETRE3 = MILLIMETRE * MILLIMETRE * MILLIMETRE;
		/**
		 * Qubic centimetre
		 */
		public const double CENTIMETRE3 = CENTIMETRE * CENTIMETRE * CENTIMETRE;
		/**
		 * Qubic metre
		 */
		public const double METRE3 = METRE * METRE * METRE;
		/**
		 * Qubic kilometre
		 */
		public const double KILOMETRE3 = KILOMETRE * KILOMETRE * KILOMETRE;
		/**
		 * Millilitre
		 */
		public const double MILLILITRE = CENTIMETRE3;
		/**
		 * Litre
		 */
		public const double LITRE = 1000.0 * MILLILITRE;
		/**
		 * Gallon
		 */
		public const double GALLON = 3.78541178 * LITRE;
		/**
		 * Pint
		 */
		public const double PINT = 473.176473 * MILLILITRE;

		/* ===========================================
		 * Units of time
		 * ===========================================
		 */
		/**
		 * Second
		 */
		public const double SECOND = 1.0;
		/**
		 * Millisecond
		 */
		public const double MILLISECOND = MILLI * SECOND;
		/**
		 * MINUTE
		 */
		public const double MINUTE = 60.0 * SECOND;
		/**
		 * HOUR
		 */
		public const double HOUR = 60.0 * MINUTE;
		/**
		 * DAY
		 */
		public const double DAY = 24.0 * HOUR;
		/**
		 * WEEK
		 */
		public const double WEEK = 7.0 * DAY;
		/**
		 * JULIAN YEAR
		 */
		public const double JULIAN_YEAR = 365.25 * DAY;

		/* ===========================================
		 * Units of mass
		 * ===========================================
		 */
		/**
		 * Kilogram
		 */
		public const double KILOGRAM = 1.0;
		/**
		 * Gram
		 */
		public const double GRAM = 0.001 * KILOGRAM;
		/**
		 * Milligram
		 */
		public const double MILLIGRAM = MILLI * GRAM;
		/**
		 * Decagram
		 */
		public const double DECAGRAM = DECA * GRAM;
		/**
		 * Tonne
		 */
		public const double TONNE = 1000.0 * KILOGRAM;
		/**
		 * Ounce
		 */
		public const double OUNCE = 28.3495231 * GRAM;
		/**
		 * Pound
		 */
		public const double POUND = 0.45359237 * KILOGRAM;

		/* ===========================================
		 * Units of information
		 * ===========================================
		 */
		/**
		 * Bit
		 */
		public const double BIT = 1.0;
		/**
		 * Kilobit
		 */
		public const double KILOBIT = 1024.0 * BIT;
		/**
		 * Megabit
		 */
		public const double MEGABIT = 1024.0 * KILOBIT;
		/**
		 * Gigabit
		 */
		public const double GIGABIT = 1024.0 * MEGABIT;
		/**
		 * Terabit
		 */
		public const double TERABIT = 1024.0 * GIGABIT;
		/**
		 * Petabit
		 */
		public const double PETABIT = 1024.0 * TERABIT;
		/**
		 * Exabit
		 */
		public const double EXABIT = 1024.0 * PETABIT;
		/**
		 * Zettabit
		 */
		public const double ZETTABIT = 1024.0 * EXABIT;
		/**
		 * Yottabit
		 */
		public const double YOTTABIT = 1024.0 * ZETTABIT;
		/**
		 * Byte
		 */
		public const double BYTE = 8.0 * BIT;
		/**
		 * Kilobyte
		 */
		public const double KILOBYTE = 1024.0 * BYTE;
		/**
		 * Megabyte
		 */
		public const double MEGABYTE = 1024.0 * KILOBYTE;
		/**
		 * Gigabyte
		 */
		public const double GIGABYTE = 1024.0 * MEGABYTE;
		/**
		 * Terabyte
		 */
		public const double TERABYTE = 1024.0 * GIGABYTE;
		/**
		 * Petabyte
		 */
		public const double PETABYTE = 1024.0 * TERABYTE;
		/**
		 * Exabyte
		 */
		public const double EXABYTE = 1024.0 * PETABYTE;
		/**
		 * Zettabyte
		 */
		public const double ZETTABYTE = 1024.0 * EXABYTE;
		/**
		 * Yottabyte
		 */
		public const double YOTTABYTE = 1024.0 * ZETTABYTE;

		/* ===========================================
		 * Units of energy
		 * ===========================================
		 */
		/**
		 * Jule
		 */
		public const double JOULE = (KILOGRAM * METRE * METRE) / (SECOND * SECOND);
		/**
		 * Electrono-Volt
		 */
		public const double ELECTRONO_VOLT = 1.6021766208E-19 * JOULE;
		/**
		 * Kilo Electrono-Volt
		 */
		public const double KILO_ELECTRONO_VOLT = KILO * ELECTRONO_VOLT;
		/**
		 * Mega Electrono-Volt
		 */
		public const double MEGA_ELECTRONO_VOLT = MEGA * ELECTRONO_VOLT;
		/**
		 * Giga Electrono-Volt
		 */
		public const double GIGA_ELECTRONO_VOLT = GIGA * ELECTRONO_VOLT;
		/**
		 * Tera Electrono-Volt
		 */
		public const double TERA_ELECTRONO_VOLT = TERA * ELECTRONO_VOLT;

		/* ===========================================
		 * Units of speed
		 * ===========================================
		 */
		/**
		 * Metre per second
		 */
		public const double METRE_PER_SECOND = METRE / SECOND;
		/**
		 * Kilometre per hour
		 */
		public const double KILOMETRE_PER_HOUR = KILOMETRE / HOUR;
		/**
		 * Mile per hour
		 */
		public const double MILE_PER_HOUR = MILE / HOUR;
		/**
		 * Knot
		 */
		public const double KNOT = 0.514444444 * METRE / SECOND;

		/* ===========================================
		 * Units of acceleration
		 * ===========================================
		 */
		/**
		 * Metre per squared second
		 */
		public const double METRE_PER_SECOND2 = METRE / (SECOND * SECOND);
		/**
		 * Kilometre per squared hour
		 */
		public const double KILOMETRE_PER_HOUR2 = KILOMETRE / (HOUR * HOUR);
		/**
		 * Mile per squared hour
		 */
		public const double MILE_PER_HOUR2 = MILE / (HOUR * HOUR);

		/* ===========================================
		 * Units of angle
		 * ===========================================
		 */
		/**
		 * Radian (angle)
		 */
		public const double RADIAN_ARC = 1.0;
		/**
		 * Degree (angle)
		 */
		public const double DEGREE_ARC = (MathConstants.PI / 180.0) * RADIAN_ARC;
		/**
		 * Minute (angle)
		 */
		public const double MINUTE_ARC = DEGREE_ARC / 60.0;
		/**
		 * Second (angle)
		 */
		public const double SECOND_ARC = MINUTE_ARC / 60.0;
	}
}