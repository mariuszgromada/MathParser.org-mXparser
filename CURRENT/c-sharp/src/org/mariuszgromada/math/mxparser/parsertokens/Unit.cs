/*
 * @(#)Unit.cs        4.0.0    2017-03-12
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

namespace org.mariuszgromada.math.mxparser.parsertokens {
	/**
	 * Units - mXparser tokens definition.
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
	public sealed class Unit {
	/*
	 * Unit - token type id.
	 */
	public const int TYPE_ID 				= 12;
	public const String TYPE_DESC			= "Unit";
	/*
	 * Unit - tokens id.
	 */
	/* Ratio, Fraction */
	public const int PERC_ID				= 1;
	public const int PROMIL_ID				= 2;
	/* Metric prefixes */
	public const int YOTTA_ID				= 101;
	public const int ZETTA_ID				= 102;
	public const int EXA_ID					= 103;
	public const int PETA_ID				= 104;
	public const int TERA_ID				= 105;
	public const int GIGA_ID				= 106;
	public const int MEGA_ID				= 107;
	public const int KILO_ID				= 108;
	public const int HECTO_ID				= 109;
	public const int DECA_ID				= 110;
	public const int DECI_ID				= 111;
	public const int CENTI_ID				= 112;
	public const int MILLI_ID				= 113;
	public const int MICRO_ID				= 114;
	public const int NANO_ID				= 115;
	public const int PICO_ID				= 116;
	public const int FEMTO_ID				= 117;
	public const int ATTO_ID				= 118;
	public const int ZEPTO_ID				= 119;
	public const int YOCTO_ID				= 120;
	/* Units of length / distance */
	public const int METRE_ID				= 201;
	public const int KILOMETRE_ID			= 202;
	public const int CENTIMETRE_ID			= 203;
	public const int MILLIMETRE_ID			= 204;
	public const int INCH_ID				= 205;
	public const int YARD_ID				= 206;
	public const int FEET_ID				= 207;
	public const int MILE_ID				= 208;
	public const int NAUTICAL_MILE_ID		= 209;
	/* Units of area */
	public const int METRE2_ID				= 301;
	public const int CENTIMETRE2_ID			= 302;
	public const int MILLIMETRE2_ID			= 303;
	public const int ARE_ID					= 304;
	public const int HECTARE_ID				= 305;
	public const int ACRE_ID				= 306;
	public const int KILOMETRE2_ID			= 307;
	/* Units of volume */
	public const int MILLIMETRE3_ID			= 401;
	public const int CENTIMETRE3_ID			= 402;
	public const int METRE3_ID				= 403;
	public const int KILOMETRE3_ID			= 404;
	public const int MILLILITRE_ID			= 405;
	public const int LITRE_ID				= 406;
	public const int GALLON_ID				= 407;
	public const int PINT_ID				= 408;
	/* Units of time */
	public const int SECOND_ID				= 501;
	public const int MILLISECOND_ID			= 502;
	public const int MINUTE_ID				= 503;
	public const int HOUR_ID				= 504;
	public const int DAY_ID					= 505;
	public const int WEEK_ID				= 506;
	public const int JULIAN_YEAR_ID			= 507;
	/* Units of mass */
	public const int KILOGRAM_ID			= 508;
	public const int GRAM_ID				= 509;
	public const int MILLIGRAM_ID			= 510;
	public const int DECAGRAM_ID			= 511;
	public const int TONNE_ID				= 512;
	public const int OUNCE_ID				= 513;
	public const int POUND_ID				= 514;
	/* Units of information */
	public const int BIT_ID					= 601;
	public const int KILOBIT_ID				= 602;
	public const int MEGABIT_ID				= 603;
	public const int GIGABIT_ID				= 604;
	public const int TERABIT_ID				= 605;
	public const int PETABIT_ID				= 606;
	public const int EXABIT_ID				= 607;
	public const int ZETTABIT_ID			= 608;
	public const int YOTTABIT_ID			= 609;
	public const int BYTE_ID				= 610;
	public const int KILOBYTE_ID			= 611;
	public const int MEGABYTE_ID			= 612;
	public const int GIGABYTE_ID			= 613;
	public const int TERABYTE_ID			= 614;
	public const int PETABYTE_ID			= 615;
	public const int EXABYTE_ID				= 616;
	public const int ZETTABYTE_ID			= 617;
	public const int YOTTABYTE_ID			= 618;
	/* Units of energy */
	public const int JOULE_ID				= 701;
	public const int ELECTRONO_VOLT_ID		= 702;
	public const int KILO_ELECTRONO_VOLT_ID	= 703;
	public const int MEGA_ELECTRONO_VOLT_ID	= 704;
	public const int GIGA_ELECTRONO_VOLT_ID	= 705;
	public const int TERA_ELECTRONO_VOLT_ID	= 706;
	/* Units of speed */
	public const int METRE_PER_SECOND_ID	= 801;
	public const int KILOMETRE_PER_HOUR_ID	= 802;
	public const int MILE_PER_HOUR_ID		= 803;
	public const int KNOT_ID				= 804;
	/* Units of acceleration */
	public const int METRE_PER_SECOND2_ID	= 901;
	public const int KILOMETRE_PER_HOUR2_ID	= 902;
	public const int MILE_PER_HOUR2_ID		= 903;
	/* Units of angle */
	public const int RADIAN_ARC_ID			= 1001;
	public const int DEGREE_ARC_ID			= 1002;
	public const int MINUTE_ARC_ID			= 1003;
	public const int SECOND_ARC_ID			= 1004;

	/*
	 * Unit - tokens key words.
	 */
	/* Ratio, Fraction */
	public const String PERC_STR				= "[%]";
	public const String PROMIL_STR				= "[%%]";
	/* Metric prefixes */
	public const String YOTTA_STR				= "[Y]";
	public const String YOTTA_SEPT_STR			= "[sept]";
	public const String ZETTA_STR				= "[Z]";
	public const String ZETTA_SEXT_STR			= "[sext]";
	public const String EXA_STR					= "[E]";
	public const String EXA_QUINT_STR			= "[quint]";
	public const String PETA_STR				= "[P]";
	public const String PETA_QUAD_STR			= "[quad]";
	public const String TERA_STR				= "[T]";
	public const String TERA_TRIL_STR			= "[tril]";
	public const String GIGA_STR				= "[G]";
	public const String GIGA_BIL_STR			= "[bil]";
	public const String MEGA_STR				= "[M]";
	public const String MEGA_MIL_STR			= "[mil]";
	public const String KILO_STR				= "[k]";
	public const String KILO_TH_STR				= "[th]";
	public const String HECTO_STR				= "[hecto]";
	public const String HECTO_HUND_STR			= "[hund]";
	public const String DECA_STR				= "[deca]";
	public const String DECA_TEN_STR			= "[ten]";
	public const String DECI_STR				= "[deci]";
	public const String CENTI_STR				= "[centi]";
	public const String MILLI_STR				= "[milli]";
	public const String MICRO_STR				= "[mic]";
	public const String NANO_STR				= "[n]";
	public const String PICO_STR				= "[p]";
	public const String FEMTO_STR				= "[f]";
	public const String ATTO_STR				= "[a]";
	public const String ZEPTO_STR				= "[z]";
	public const String YOCTO_STR				= "[y]";
	/* Units of length / distance */
	public const String METRE_STR				= "[m]";
	public const String KILOMETRE_STR			= "[km]";
	public const String CENTIMETRE_STR			= "[cm]";
	public const String MILLIMETRE_STR			= "[mm]";
	public const String INCH_STR				= "[inch]";
	public const String YARD_STR				= "[yd]";
	public const String FEET_STR				= "[ft]";
	public const String MILE_STR				= "[mile]";
	public const String NAUTICAL_MILE_STR		= "[nmi]";
	/* Units of area */
	public const String METRE2_STR				= "[m2]";
	public const String CENTIMETRE2_STR			= "[cm2]";
	public const String MILLIMETRE2_STR			= "[mm2]";
	public const String ARE_STR					= "[are]";
	public const String HECTARE_STR				= "[ha]";
	public const String ACRE_STR				= "[acre]";
	public const String KILOMETRE2_STR			= "[km2]";
	/* Units of volume */
	public const String MILLIMETRE3_STR			= "[mm3]";
	public const String CENTIMETRE3_STR			= "[cm3]";
	public const String METRE3_STR				= "[m3]";
	public const String KILOMETRE3_STR			= "[km3]";
	public const String MILLILITRE_STR			= "[ml]";
	public const String LITRE_STR				= "[l]";
	public const String GALLON_STR				= "[gall]";
	public const String PINT_STR				= "[pint]";
	/* Units of time */
	public const String SECOND_STR				= "[s]";
	public const String MILLISECOND_STR			= "[ms]";
	public const String MINUTE_STR				= "[min]";
	public const String HOUR_STR				= "[h]";
	public const String DAY_STR					= "[day]";
	public const String WEEK_STR				= "[week]";
	public const String JULIAN_YEAR_STR			= "[yearj]";
	/* Units of mass */
	public const String KILOGRAM_STR			= "[kg]";
	public const String GRAM_STR				= "[gr]";
	public const String MILLIGRAM_STR			= "[mg]";
	public const String DECAGRAM_STR			= "[dag]";
	public const String TONNE_STR				= "[t]";
	public const String OUNCE_STR				= "[oz]";
	public const String POUND_STR				= "[lb]";
	/* Units of information */
	public const String BIT_STR					= "[b]";
	public const String KILOBIT_STR				= "[kb]";
	public const String MEGABIT_STR				= "[Mb]";
	public const String GIGABIT_STR				= "[Gb]";
	public const String TERABIT_STR				= "[Tb]";
	public const String PETABIT_STR				= "[Pb]";
	public const String EXABIT_STR				= "[Eb]";
	public const String ZETTABIT_STR			= "[Zb]";
	public const String YOTTABIT_STR			= "[Yb]";
	public const String BYTE_STR				= "[B]";
	public const String KILOBYTE_STR			= "[kB]";
	public const String MEGABYTE_STR			= "[MB]";
	public const String GIGABYTE_STR			= "[GB]";
	public const String TERABYTE_STR			= "[TB]";
	public const String PETABYTE_STR			= "[PB]";
	public const String EXABYTE_STR				= "[EB]";
	public const String ZETTABYTE_STR			= "[ZB]";
	public const String YOTTABYTE_STR			= "[YB]";
	/* Units of energy */
	public const String JOULE_STR				= "[J]";
	public const String ELECTRONO_VOLT_STR		= "[eV]";
	public const String KILO_ELECTRONO_VOLT_STR	= "[keV]";
	public const String MEGA_ELECTRONO_VOLT_STR	= "[MeV]";
	public const String GIGA_ELECTRONO_VOLT_STR	= "[GeV]";
	public const String TERA_ELECTRONO_VOLT_STR	= "[TeV]";
	/* Units of speed */
	public const String METRE_PER_SECOND_STR	= "[m/s]";
	public const String KILOMETRE_PER_HOUR_STR	= "[km/h]";
	public const String MILE_PER_HOUR_STR		= "[mi/h]";
	public const String KNOT_STR				= "[knot]";
	/* Units of acceleration */
	public const String METRE_PER_SECOND2_STR	= "[m/s2]";
	public const String KILOMETRE_PER_HOUR2_STR	= "[km/h2]";
	public const String MILE_PER_HOUR2_STR		= "[mi/h2]";
	/* Units of angle */
	public const String RADIAN_ARC_STR			= "[rad]";
	public const String DEGREE_ARC_STR			= "[deg]";
	public const String MINUTE_ARC_STR			= "[']";
	public const String SECOND_ARC_STR			= "['']";

	/*
	 * Unit - tokens description.
	 */
	/* Ratio, Fraction */
	public const String PERC_DESC				= "(4.0) <Ratio, Fraction> Percentage = 0.01";
	public const String PROMIL_DESC				= "(4.0) <Ratio, Fraction> Promil, Per mille = 0.001";
	/* Metric prefixes */
	public const String YOTTA_DESC				= "(4.0) <Metric prefix> Septillion / Yotta = 10^24";
	public const String ZETTA_DESC				= "(4.0) <Metric prefix> Sextillion / Zetta = 10^21";
	public const String EXA_DESC				= "(4.0) <Metric prefix> Quintillion / Exa = 10^18";
	public const String PETA_DESC				= "(4.0) <Metric prefix> Quadrillion / Peta = 10^15";
	public const String TERA_DESC				= "(4.0) <Metric prefix> Trillion / Tera = 10^12";
	public const String GIGA_DESC				= "(4.0) <Metric prefix> Billion / Giga = 10^9";
	public const String MEGA_DESC				= "(4.0) <Metric prefix> Million / Mega = 10^6";
	public const String KILO_DESC				= "(4.0) <Metric prefix> Thousand / Kilo = 10^3";
	public const String HECTO_DESC				= "(4.0) <Metric prefix> Hundred / Hecto = 10^2";
	public const String DECA_DESC				= "(4.0) <Metric prefix> Ten / Deca = 10";
	public const String DECI_DESC				= "(4.0) <Metric prefix> Tenth / Deci = 0.1";
	public const String CENTI_DESC				= "(4.0) <Metric prefix> Hundredth / Centi = 0.01";
	public const String MILLI_DESC				= "(4.0) <Metric prefix> Thousandth / Milli = 0.001";
	public const String MICRO_DESC				= "(4.0) <Metric prefix> Millionth / Micro = 10^-6";
	public const String NANO_DESC				= "(4.0) <Metric prefix> Billionth / Nano = 10^-9";
	public const String PICO_DESC				= "(4.0) <Metric prefix> Trillionth / Pico = 10^-12";
	public const String FEMTO_DESC				= "(4.0) <Metric prefix> Quadrillionth / Femto = 10^-15";
	public const String ATTO_DESC				= "(4.0) <Metric prefix> Quintillionth / Atoo = 10^-18";
	public const String ZEPTO_DESC				= "(4.0) <Metric prefix> Sextillionth / Zepto = 10^-21";
	public const String YOCTO_DESC				= "(4.0) <Metric prefix> Septillionth / Yocto = 10^-24";
	/* Units of length / distance */
	public const String METRE_DESC				= "(4.0) <Unit of length> Metre / Meter (m=1)";
	public const String KILOMETRE_DESC			= "(4.0) <Unit of length> Kilometre / Kilometer (m=1)";
	public const String CENTIMETRE_DESC			= "(4.0) <Unit of length> Centimetre / Centimeter (m=1)";
	public const String MILLIMETRE_DESC			= "(4.0) <Unit of length> Millimetre / Millimeter (m=1)";
	public const String INCH_DESC				= "(4.0) <Unit of length> Inch (m=1)";
	public const String YARD_DESC				= "(4.0) <Unit of length> Yard (m=1)";
	public const String FEET_DESC				= "(4.0) <Unit of length> Feet (m=1)";
	public const String MILE_DESC				= "(4.0) <Unit of length> Mile (m=1)";
	public const String NAUTICAL_MILE_DESC		= "(4.0) <Unit of length> Nautical mile (m=1)";
	/* Units of area */
	public const String METRE2_DESC				= "(4.0) <Unit of area> Square metre / Square meter (m=1)";
	public const String CENTIMETRE2_DESC		= "(4.0) <Unit of area> Square centimetre / Square centimeter (m=1)";
	public const String MILLIMETRE2_DESC		= "(4.0) <Unit of area> Square millimetre / Square millimeter (m=1)";
	public const String ARE_DESC				= "(4.0) <Unit of area> Are (m=1)";
	public const String HECTARE_DESC			= "(4.0) <Unit of area> Hectare (m=1)";
	public const String ACRE_DESC				= "(4.0) <Unit of area> Acre (m=1)";
	public const String KILOMETRE2_DESC			= "(4.0) <Unit of area> Square kilometre / Square kilometer (m=1)";
	/* Units of volume */
	public const String MILLIMETRE3_DESC		= "(4.0) <Unit of volume> Cubic millimetre / Cubic millimeter (m=1)";
	public const String CENTIMETRE3_DESC		= "(4.0) <Unit of volume> Cubic centimetre / Cubic centimeter (m=1)";
	public const String METRE3_DESC				= "(4.0) <Unit of volume> Cubic metre / Cubic meter (m=1)";
	public const String KILOMETRE3_DESC			= "(4.0) <Unit of volume> Cubic kilometre / Cubic kilometer (m=1)";
	public const String MILLILITRE_DESC			= "(4.0) <Unit of volume> Millilitre / Milliliter (m=1)";
	public const String LITRE_DESC				= "(4.0) <Unit of volume> Litre / Liter (m=1)";
	public const String GALLON_DESC				= "(4.0) <Unit of volume> Gallon (m=1)";
	public const String PINT_DESC				= "(4.0) <Unit of volume> Pint (m=1)";
	/* Units of time */
	public const String SECOND_DESC				= "(4.0) <Unit of time> Second (s=1)";
	public const String MILLISECOND_DESC		= "(4.0) <Unit of time> Millisecond (s=1)";
	public const String MINUTE_DESC				= "(4.0) <Unit of time> Minute (s=1)";
	public const String HOUR_DESC				= "(4.0) <Unit of time> Hour (s=1)";
	public const String DAY_DESC				= "(4.0) <Unit of time> Day (s=1)";
	public const String WEEK_DESC				= "(4.0) <Unit of time> Week (s=1)";
	public const String JULIAN_YEAR_DESC		= "(4.0) <Unit of time> Julian year = 365.25 days (s=1)";
	/* Units of mass */
	public const String KILOGRAM_DESC			= "(4.0) <Unit of mass> Kilogram (kg=1)";
	public const String GRAM_DESC				= "(4.0) <Unit of mass> Gram (kg=1)";
	public const String MILLIGRAM_DESC			= "(4.0) <Unit of mass> Milligram (kg=1)";
	public const String DECAGRAM_DESC			= "(4.0) <Unit of mass> Decagram (kg=1)";
	public const String TONNE_DESC				= "(4.0) <Unit of mass> Tonne (kg=1)";
	public const String OUNCE_DESC				= "(4.0) <Unit of mass> Ounce (kg=1)";
	public const String POUND_DESC				= "(4.0) <Unit of mass> Pound (kg=1)";
	/* Units of information */
	public const String BIT_DESC				= "(4.0) <Unit of information> Bit (bit=1)";
	public const String KILOBIT_DESC			= "(4.0) <Unit of information> Kilobit (bit=1)";
	public const String MEGABIT_DESC			= "(4.0) <Unit of information> Megabit (bit=1)";
	public const String GIGABIT_DESC			= "(4.0) <Unit of information> Gigabit (bit=1)";
	public const String TERABIT_DESC			= "(4.0) <Unit of information> Terabit (bit=1)";
	public const String PETABIT_DESC			= "(4.0) <Unit of information> Petabit (bit=1)";
	public const String EXABIT_DESC				= "(4.0) <Unit of information> Exabit (bit=1)";
	public const String ZETTABIT_DESC			= "(4.0) <Unit of information> Zettabit (bit=1)";
	public const String YOTTABIT_DESC			= "(4.0) <Unit of information> Yottabit (bit=1)";
	public const String BYTE_DESC				= "(4.0) <Unit of information> Byte (bit=1)";
	public const String KILOBYTE_DESC			= "(4.0) <Unit of information> Kilobyte (bit=1)";
	public const String MEGABYTE_DESC			= "(4.0) <Unit of information> Megabyte (bit=1)";
	public const String GIGABYTE_DESC			= "(4.0) <Unit of information> Gigabyte (bit=1)";
	public const String TERABYTE_DESC			= "(4.0) <Unit of information> Terabyte (bit=1)";
	public const String PETABYTE_DESC			= "(4.0) <Unit of information> Petabyte (bit=1)";
	public const String EXABYTE_DESC			= "(4.0) <Unit of information> Exabyte (bit=1)";
	public const String ZETTABYTE_DESC			= "(4.0) <Unit of information> Zettabyte (bit=1)";
	public const String YOTTABYTE_DESC			= "(4.0) <Unit of information> Yottabyte (bit=1)";
	/* Units of energy */
	public const String JOULE_DESC				= "(4.0) <Unit of energy> Joule (m=1, kg=1, s=1)";
	public const String ELECTRONO_VOLT_DESC		= "(4.0) <Unit of energy> Electronovolt (m=1, kg=1, s=1)";
	public const String KILO_ELECTRONO_VOLT_DESC	= "(4.0) <Unit of energy> Kiloelectronovolt (m=1, kg=1, s=1)";
	public const String MEGA_ELECTRONO_VOLT_DESC	= "(4.0) <Unit of energy> Megaelectronovolt (m=1, kg=1, s=1)";
	public const String GIGA_ELECTRONO_VOLT_DESC	= "(4.0) <Unit of energy> Gigaelectronovolt (m=1, kg=1, s=1)";
	public const String TERA_ELECTRONO_VOLT_DESC	= "(4.0) <Unit of energy> Teraelectronovolt (m=1, kg=1, s=1)";
	/* Units of speed */
	public const String METRE_PER_SECOND_DESC	= "(4.0) <Unit of speed> Metre / Meter per second (m=1, s=1)";
	public const String KILOMETRE_PER_HOUR_DESC	= "(4.0) <Unit of speed> Kilometre / Kilometer per hour (m=1, s=1)";
	public const String MILE_PER_HOUR_DESC		= "(4.0) <Unit of speed> Mile per hour (m=1, s=1)";
	public const String KNOT_DESC				= "(4.0) <Unit of speed> Knot (m=1, s=1)";
	/* Units of acceleration */
	public const String METRE_PER_SECOND2_DESC	= "(4.0) <Unit of acceleration> Metre / Meter per square second (m=1, s=1)";
	public const String KILOMETRE_PER_HOUR2_DESC	= "(4.0) <Unit of acceleration> Kilometre / Kilometer per square hour (m=1, s=1)";
	public const String MILE_PER_HOUR2_DESC		= "(4.0) <Unit of acceleration> Mile per square hour (m=1, s=1)";
	/* Units of angle */
	public const String RADIAN_ARC_DESC			= "(4.0) <Unit of angle> Radian (rad=1)";
	public const String DEGREE_ARC_DESC			= "(4.0) <Unit of angle> Degree of arc (rad=1)";
	public const String MINUTE_ARC_DESC			= "(4.0) <Unit of angle> Minute of arc (rad=1)";
	public const String SECOND_ARC_DESC			= "(4.0) <Unit of angle> Second of arc (rad=1)";
}
}