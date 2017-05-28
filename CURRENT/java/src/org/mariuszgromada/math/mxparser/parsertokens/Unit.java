/*
 * @(#)Unit.java        4.1.0    2017-05-14
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
package org.mariuszgromada.math.mxparser.parsertokens;

import org.mariuszgromada.math.mxparser.mXparser;
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
 * @version        4.1.0
 */
public final class Unit {
	/*
	 * Unit - token type id.
	 */
	public static final int TYPE_ID 				= 12;
	public static final String TYPE_DESC			= "Unit";
	/*
	 * Unit - tokens id.
	 */
	/* Ratio, Fraction */
	public static final int PERC_ID					= 1;
	public static final int PROMIL_ID				= 2;
	/* Metric prefixes */
	public static final int YOTTA_ID				= 101;
	public static final int ZETTA_ID				= 102;
	public static final int EXA_ID					= 103;
	public static final int PETA_ID					= 104;
	public static final int TERA_ID					= 105;
	public static final int GIGA_ID					= 106;
	public static final int MEGA_ID					= 107;
	public static final int KILO_ID					= 108;
	public static final int HECTO_ID				= 109;
	public static final int DECA_ID					= 110;
	public static final int DECI_ID					= 111;
	public static final int CENTI_ID				= 112;
	public static final int MILLI_ID				= 113;
	public static final int MICRO_ID				= 114;
	public static final int NANO_ID					= 115;
	public static final int PICO_ID					= 116;
	public static final int FEMTO_ID				= 117;
	public static final int ATTO_ID					= 118;
	public static final int ZEPTO_ID				= 119;
	public static final int YOCTO_ID				= 120;
	/* Units of length / distance */
	public static final int METRE_ID				= 201;
	public static final int KILOMETRE_ID			= 202;
	public static final int CENTIMETRE_ID			= 203;
	public static final int MILLIMETRE_ID			= 204;
	public static final int INCH_ID					= 205;
	public static final int YARD_ID					= 206;
	public static final int FEET_ID					= 207;
	public static final int MILE_ID					= 208;
	public static final int NAUTICAL_MILE_ID		= 209;
	/* Units of area */
	public static final int METRE2_ID				= 301;
	public static final int CENTIMETRE2_ID			= 302;
	public static final int MILLIMETRE2_ID			= 303;
	public static final int ARE_ID					= 304;
	public static final int HECTARE_ID				= 305;
	public static final int ACRE_ID					= 306;
	public static final int KILOMETRE2_ID			= 307;
	/* Units of volume */
	public static final int MILLIMETRE3_ID			= 401;
	public static final int CENTIMETRE3_ID			= 402;
	public static final int METRE3_ID				= 403;
	public static final int KILOMETRE3_ID			= 404;
	public static final int MILLILITRE_ID			= 405;
	public static final int LITRE_ID				= 406;
	public static final int GALLON_ID				= 407;
	public static final int PINT_ID					= 408;
	/* Units of time */
	public static final int SECOND_ID				= 501;
	public static final int MILLISECOND_ID			= 502;
	public static final int MINUTE_ID				= 503;
	public static final int HOUR_ID					= 504;
	public static final int DAY_ID					= 505;
	public static final int WEEK_ID					= 506;
	public static final int JULIAN_YEAR_ID			= 507;
	/* Units of mass */
	public static final int KILOGRAM_ID				= 508;
	public static final int GRAM_ID					= 509;
	public static final int MILLIGRAM_ID			= 510;
	public static final int DECAGRAM_ID				= 511;
	public static final int TONNE_ID				= 512;
	public static final int OUNCE_ID				= 513;
	public static final int POUND_ID				= 514;
	/* Units of information */
	public static final int BIT_ID					= 601;
	public static final int KILOBIT_ID				= 602;
	public static final int MEGABIT_ID				= 603;
	public static final int GIGABIT_ID				= 604;
	public static final int TERABIT_ID				= 605;
	public static final int PETABIT_ID				= 606;
	public static final int EXABIT_ID				= 607;
	public static final int ZETTABIT_ID				= 608;
	public static final int YOTTABIT_ID				= 609;
	public static final int BYTE_ID					= 610;
	public static final int KILOBYTE_ID				= 611;
	public static final int MEGABYTE_ID				= 612;
	public static final int GIGABYTE_ID				= 613;
	public static final int TERABYTE_ID				= 614;
	public static final int PETABYTE_ID				= 615;
	public static final int EXABYTE_ID				= 616;
	public static final int ZETTABYTE_ID			= 617;
	public static final int YOTTABYTE_ID			= 618;
	/* Units of energy */
	public static final int JOULE_ID				= 701;
	public static final int ELECTRONO_VOLT_ID		= 702;
	public static final int KILO_ELECTRONO_VOLT_ID	= 703;
	public static final int MEGA_ELECTRONO_VOLT_ID	= 704;
	public static final int GIGA_ELECTRONO_VOLT_ID	= 705;
	public static final int TERA_ELECTRONO_VOLT_ID	= 706;
	/* Units of speed */
	public static final int METRE_PER_SECOND_ID		= 801;
	public static final int KILOMETRE_PER_HOUR_ID	= 802;
	public static final int MILE_PER_HOUR_ID		= 803;
	public static final int KNOT_ID					= 804;
	/* Units of acceleration */
	public static final int METRE_PER_SECOND2_ID	= 901;
	public static final int KILOMETRE_PER_HOUR2_ID	= 902;
	public static final int MILE_PER_HOUR2_ID		= 903;
	/* Units of angle */
	public static final int RADIAN_ARC_ID			= 1001;
	public static final int DEGREE_ARC_ID			= 1002;
	public static final int MINUTE_ARC_ID			= 1003;
	public static final int SECOND_ARC_ID			= 1004;

	/*
	 * Unit - tokens key words.
	 */
	/* Ratio, Fraction */
	public static final String PERC_STR					= "[%]";
	public static final String PROMIL_STR				= "[%%]";
	/* Metric prefixes */
	public static final String YOTTA_STR				= "[Y]";
	public static final String YOTTA_SEPT_STR			= "[sept]";
	public static final String ZETTA_STR				= "[Z]";
	public static final String ZETTA_SEXT_STR			= "[sext]";
	public static final String EXA_STR					= "[E]";
	public static final String EXA_QUINT_STR			= "[quint]";
	public static final String PETA_STR					= "[P]";
	public static final String PETA_QUAD_STR			= "[quad]";
	public static final String TERA_STR					= "[T]";
	public static final String TERA_TRIL_STR			= "[tril]";
	public static final String GIGA_STR					= "[G]";
	public static final String GIGA_BIL_STR				= "[bil]";
	public static final String MEGA_STR					= "[M]";
	public static final String MEGA_MIL_STR				= "[mil]";
	public static final String KILO_STR					= "[k]";
	public static final String KILO_TH_STR				= "[th]";
	public static final String HECTO_STR				= "[hecto]";
	public static final String HECTO_HUND_STR			= "[hund]";
	public static final String DECA_STR					= "[deca]";
	public static final String DECA_TEN_STR				= "[ten]";
	public static final String DECI_STR					= "[deci]";
	public static final String CENTI_STR				= "[centi]";
	public static final String MILLI_STR				= "[milli]";
	public static final String MICRO_STR				= "[mic]";
	public static final String NANO_STR					= "[n]";
	public static final String PICO_STR					= "[p]";
	public static final String FEMTO_STR				= "[f]";
	public static final String ATTO_STR					= "[a]";
	public static final String ZEPTO_STR				= "[z]";
	public static final String YOCTO_STR				= "[y]";
	/* Units of length / distance */
	public static final String METRE_STR				= "[m]";
	public static final String KILOMETRE_STR			= "[km]";
	public static final String CENTIMETRE_STR			= "[cm]";
	public static final String MILLIMETRE_STR			= "[mm]";
	public static final String INCH_STR					= "[inch]";
	public static final String YARD_STR					= "[yd]";
	public static final String FEET_STR					= "[ft]";
	public static final String MILE_STR					= "[mile]";
	public static final String NAUTICAL_MILE_STR		= "[nmi]";
	/* Units of area */
	public static final String METRE2_STR				= "[m2]";
	public static final String CENTIMETRE2_STR			= "[cm2]";
	public static final String MILLIMETRE2_STR			= "[mm2]";
	public static final String ARE_STR					= "[are]";
	public static final String HECTARE_STR				= "[ha]";
	public static final String ACRE_STR					= "[acre]";
	public static final String KILOMETRE2_STR			= "[km2]";
	/* Units of volume */
	public static final String MILLIMETRE3_STR			= "[mm3]";
	public static final String CENTIMETRE3_STR			= "[cm3]";
	public static final String METRE3_STR				= "[m3]";
	public static final String KILOMETRE3_STR			= "[km3]";
	public static final String MILLILITRE_STR			= "[ml]";
	public static final String LITRE_STR				= "[l]";
	public static final String GALLON_STR				= "[gall]";
	public static final String PINT_STR					= "[pint]";
	/* Units of time */
	public static final String SECOND_STR				= "[s]";
	public static final String MILLISECOND_STR			= "[ms]";
	public static final String MINUTE_STR				= "[min]";
	public static final String HOUR_STR					= "[h]";
	public static final String DAY_STR					= "[day]";
	public static final String WEEK_STR					= "[week]";
	public static final String JULIAN_YEAR_STR			= "[yearj]";
	/* Units of mass */
	public static final String KILOGRAM_STR				= "[kg]";
	public static final String GRAM_STR					= "[gr]";
	public static final String MILLIGRAM_STR			= "[mg]";
	public static final String DECAGRAM_STR				= "[dag]";
	public static final String TONNE_STR				= "[t]";
	public static final String OUNCE_STR				= "[oz]";
	public static final String POUND_STR				= "[lb]";
	/* Units of information */
	public static final String BIT_STR					= "[b]";
	public static final String KILOBIT_STR				= "[kb]";
	public static final String MEGABIT_STR				= "[Mb]";
	public static final String GIGABIT_STR				= "[Gb]";
	public static final String TERABIT_STR				= "[Tb]";
	public static final String PETABIT_STR				= "[Pb]";
	public static final String EXABIT_STR				= "[Eb]";
	public static final String ZETTABIT_STR				= "[Zb]";
	public static final String YOTTABIT_STR				= "[Yb]";
	public static final String BYTE_STR					= "[B]";
	public static final String KILOBYTE_STR				= "[kB]";
	public static final String MEGABYTE_STR				= "[MB]";
	public static final String GIGABYTE_STR				= "[GB]";
	public static final String TERABYTE_STR				= "[TB]";
	public static final String PETABYTE_STR				= "[PB]";
	public static final String EXABYTE_STR				= "[EB]";
	public static final String ZETTABYTE_STR			= "[ZB]";
	public static final String YOTTABYTE_STR			= "[YB]";
	/* Units of energy */
	public static final String JOULE_STR				= "[J]";
	public static final String ELECTRONO_VOLT_STR		= "[eV]";
	public static final String KILO_ELECTRONO_VOLT_STR	= "[keV]";
	public static final String MEGA_ELECTRONO_VOLT_STR	= "[MeV]";
	public static final String GIGA_ELECTRONO_VOLT_STR	= "[GeV]";
	public static final String TERA_ELECTRONO_VOLT_STR	= "[TeV]";
	/* Units of speed */
	public static final String METRE_PER_SECOND_STR		= "[m/s]";
	public static final String KILOMETRE_PER_HOUR_STR	= "[km/h]";
	public static final String MILE_PER_HOUR_STR		= "[mi/h]";
	public static final String KNOT_STR					= "[knot]";
	/* Units of acceleration */
	public static final String METRE_PER_SECOND2_STR	= "[m/s2]";
	public static final String KILOMETRE_PER_HOUR2_STR	= "[km/h2]";
	public static final String MILE_PER_HOUR2_STR		= "[mi/h2]";
	/* Units of angle */
	public static final String RADIAN_ARC_STR			= "[rad]";
	public static final String DEGREE_ARC_STR			= "[deg]";
	public static final String MINUTE_ARC_STR			= "[']";
	public static final String SECOND_ARC_STR			= "['']";
	/*
	 * Unit - syntax.
	 */
	/* Ratio, Fraction */
	public static final String PERC_SYN					= PERC_STR;
	public static final String PROMIL_SYN				= PROMIL_STR;
	/* Metric prefixes */
	public static final String YOTTA_SYN				= YOTTA_STR;
	public static final String YOTTA_SEPT_SYN			= YOTTA_SEPT_STR;
	public static final String ZETTA_SYN				= ZETTA_STR;
	public static final String ZETTA_SEXT_SYN			= ZETTA_SEXT_STR;
	public static final String EXA_SYN					= EXA_STR;
	public static final String EXA_QUINT_SYN			= EXA_QUINT_STR;
	public static final String PETA_SYN					= PETA_STR;
	public static final String PETA_QUAD_SYN			= PETA_QUAD_STR;
	public static final String TERA_SYN					= TERA_STR;
	public static final String TERA_TRIL_SYN			= TERA_TRIL_STR;
	public static final String GIGA_SYN					= GIGA_STR;
	public static final String GIGA_BIL_SYN				= GIGA_BIL_STR;
	public static final String MEGA_SYN					= MEGA_STR;
	public static final String MEGA_MIL_SYN				= MEGA_MIL_STR;
	public static final String KILO_SYN					= KILO_STR;
	public static final String KILO_TH_SYN				= KILO_TH_STR;
	public static final String HECTO_SYN				= HECTO_STR;
	public static final String HECTO_HUND_SYN			= HECTO_HUND_STR;
	public static final String DECA_SYN					= DECA_STR;
	public static final String DECA_TEN_SYN				= DECA_TEN_STR;
	public static final String DECI_SYN					= DECI_STR;
	public static final String CENTI_SYN				= CENTI_STR;
	public static final String MILLI_SYN				= MILLI_STR;
	public static final String MICRO_SYN				= MICRO_STR;
	public static final String NANO_SYN					= NANO_STR;
	public static final String PICO_SYN					= PICO_STR;
	public static final String FEMTO_SYN				= FEMTO_STR;
	public static final String ATTO_SYN					= ATTO_STR;
	public static final String ZEPTO_SYN				= ZEPTO_STR;
	public static final String YOCTO_SYN				= YOCTO_STR;
	/* Units of length / distance */
	public static final String METRE_SYN				= METRE_STR;
	public static final String KILOMETRE_SYN			= KILOMETRE_STR;
	public static final String CENTIMETRE_SYN			= CENTIMETRE_STR;
	public static final String MILLIMETRE_SYN			= MILLIMETRE_STR;
	public static final String INCH_SYN					= INCH_STR;
	public static final String YARD_SYN					= YARD_STR;
	public static final String FEET_SYN					= FEET_STR;
	public static final String MILE_SYN					= MILE_STR;
	public static final String NAUTICAL_MILE_SYN		= NAUTICAL_MILE_STR;
	/* Units of area */
	public static final String METRE2_SYN				= METRE2_STR;
	public static final String CENTIMETRE2_SYN			= CENTIMETRE2_STR;
	public static final String MILLIMETRE2_SYN			= MILLIMETRE2_STR;
	public static final String ARE_SYN					= ARE_STR;
	public static final String HECTARE_SYN				= HECTARE_STR;
	public static final String ACRE_SYN					= ACRE_STR;
	public static final String KILOMETRE2_SYN			= KILOMETRE2_STR;
	/* Units of volume */
	public static final String MILLIMETRE3_SYN			= MILLIMETRE3_STR;
	public static final String CENTIMETRE3_SYN			= CENTIMETRE3_STR;
	public static final String METRE3_SYN				= METRE3_STR;
	public static final String KILOMETRE3_SYN			= KILOMETRE3_STR;
	public static final String MILLILITRE_SYN			= MILLILITRE_STR;
	public static final String LITRE_SYN				= LITRE_STR;
	public static final String GALLON_SYN				= GALLON_STR;
	public static final String PINT_SYN					= PINT_STR;
	/* Units of time */
	public static final String SECOND_SYN				= SECOND_STR;
	public static final String MILLISECOND_SYN			= MILLISECOND_STR;
	public static final String MINUTE_SYN				= MINUTE_STR;
	public static final String HOUR_SYN					= HOUR_STR;
	public static final String DAY_SYN					= DAY_STR;
	public static final String WEEK_SYN					= WEEK_STR;
	public static final String JULIAN_YEAR_SYN			= JULIAN_YEAR_STR;
	/* Units of mass */
	public static final String KILOGRAM_SYN				= KILOGRAM_STR;
	public static final String GRAM_SYN					= GRAM_STR;
	public static final String MILLIGRAM_SYN			= MILLIGRAM_STR;
	public static final String DECAGRAM_SYN				= DECAGRAM_STR;
	public static final String TONNE_SYN				= TONNE_STR;
	public static final String OUNCE_SYN				= OUNCE_STR;
	public static final String POUND_SYN				= POUND_STR;
	/* Units of information */
	public static final String BIT_SYN					= BIT_STR;
	public static final String KILOBIT_SYN				= KILOBIT_STR;
	public static final String MEGABIT_SYN				= MEGABIT_STR;
	public static final String GIGABIT_SYN				= GIGABIT_STR;
	public static final String TERABIT_SYN				= TERABIT_STR;
	public static final String PETABIT_SYN				= PETABIT_STR;
	public static final String EXABIT_SYN				= EXABIT_STR;
	public static final String ZETTABIT_SYN				= ZETTABIT_STR;
	public static final String YOTTABIT_SYN				= YOTTABIT_STR;
	public static final String BYTE_SYN					= BYTE_STR;
	public static final String KILOBYTE_SYN				= KILOBYTE_STR;
	public static final String MEGABYTE_SYN				= MEGABYTE_STR;
	public static final String GIGABYTE_SYN				= GIGABYTE_STR;
	public static final String TERABYTE_SYN				= TERABYTE_STR;
	public static final String PETABYTE_SYN				= PETABYTE_STR;
	public static final String EXABYTE_SYN				= EXABYTE_STR;
	public static final String ZETTABYTE_SYN			= ZETTABYTE_STR;
	public static final String YOTTABYTE_SYN			= YOTTABYTE_STR;
	/* Units of energy */
	public static final String JOULE_SYN				= JOULE_STR;
	public static final String ELECTRONO_VOLT_SYN		= ELECTRONO_VOLT_STR;
	public static final String KILO_ELECTRONO_VOLT_SYN	= KILO_ELECTRONO_VOLT_STR;
	public static final String MEGA_ELECTRONO_VOLT_SYN	= MEGA_ELECTRONO_VOLT_STR;
	public static final String GIGA_ELECTRONO_VOLT_SYN	= GIGA_ELECTRONO_VOLT_STR;
	public static final String TERA_ELECTRONO_VOLT_SYN	= TERA_ELECTRONO_VOLT_STR;
	/* Units of speed */
	public static final String METRE_PER_SECOND_SYN		= METRE_PER_SECOND_STR;
	public static final String KILOMETRE_PER_HOUR_SYN	= KILOMETRE_PER_HOUR_STR;
	public static final String MILE_PER_HOUR_SYN		= MILE_PER_HOUR_STR;
	public static final String KNOT_SYN					= KNOT_STR;
	/* Units of acceleration */
	public static final String METRE_PER_SECOND2_SYN	= METRE_PER_SECOND2_STR;
	public static final String KILOMETRE_PER_HOUR2_SYN	= KILOMETRE_PER_HOUR2_STR;
	public static final String MILE_PER_HOUR2_SYN		= MILE_PER_HOUR2_STR;
	/* Units of angle */
	public static final String RADIAN_ARC_SYN			= RADIAN_ARC_STR;
	public static final String DEGREE_ARC_SYN			= DEGREE_ARC_STR;
	public static final String MINUTE_ARC_SYN			= MINUTE_ARC_STR;
	public static final String SECOND_ARC_SYN			= SECOND_ARC_STR;

	/*
	 * Unit - tokens description.
	 */
	/* Ratio, Fraction */
	public static final String PERC_DESC				= "<Ratio, Fraction> Percentage = 0.01";
	public static final String PROMIL_DESC				= "<Ratio, Fraction> Promil, Per mille = 0.001";
	/* Metric prefixes */
	public static final String YOTTA_DESC				= "<Metric prefix> Septillion / Yotta = 10^24";
	public static final String ZETTA_DESC				= "<Metric prefix> Sextillion / Zetta = 10^21";
	public static final String EXA_DESC					= "<Metric prefix> Quintillion / Exa = 10^18";
	public static final String PETA_DESC				= "<Metric prefix> Quadrillion / Peta = 10^15";
	public static final String TERA_DESC				= "<Metric prefix> Trillion / Tera = 10^12";
	public static final String GIGA_DESC				= "<Metric prefix> Billion / Giga = 10^9";
	public static final String MEGA_DESC				= "<Metric prefix> Million / Mega = 10^6";
	public static final String KILO_DESC				= "<Metric prefix> Thousand / Kilo = 10^3";
	public static final String HECTO_DESC				= "<Metric prefix> Hundred / Hecto = 10^2";
	public static final String DECA_DESC				= "<Metric prefix> Ten / Deca = 10";
	public static final String DECI_DESC				= "<Metric prefix> Tenth / Deci = 0.1";
	public static final String CENTI_DESC				= "<Metric prefix> Hundredth / Centi = 0.01";
	public static final String MILLI_DESC				= "<Metric prefix> Thousandth / Milli = 0.001";
	public static final String MICRO_DESC				= "<Metric prefix> Millionth / Micro = 10^-6";
	public static final String NANO_DESC				= "<Metric prefix> Billionth / Nano = 10^-9";
	public static final String PICO_DESC				= "<Metric prefix> Trillionth / Pico = 10^-12";
	public static final String FEMTO_DESC				= "<Metric prefix> Quadrillionth / Femto = 10^-15";
	public static final String ATTO_DESC				= "<Metric prefix> Quintillionth / Atoo = 10^-18";
	public static final String ZEPTO_DESC				= "<Metric prefix> Sextillionth / Zepto = 10^-21";
	public static final String YOCTO_DESC				= "<Metric prefix> Septillionth / Yocto = 10^-24";
	/* Units of length / distance */
	public static final String METRE_DESC				= "<Unit of length> Metre / Meter (m=1)";
	public static final String KILOMETRE_DESC			= "<Unit of length> Kilometre / Kilometer (m=1)";
	public static final String CENTIMETRE_DESC			= "<Unit of length> Centimetre / Centimeter (m=1)";
	public static final String MILLIMETRE_DESC			= "<Unit of length> Millimetre / Millimeter (m=1)";
	public static final String INCH_DESC				= "<Unit of length> Inch (m=1)";
	public static final String YARD_DESC				= "<Unit of length> Yard (m=1)";
	public static final String FEET_DESC				= "<Unit of length> Feet (m=1)";
	public static final String MILE_DESC				= "<Unit of length> Mile (m=1)";
	public static final String NAUTICAL_MILE_DESC		= "<Unit of length> Nautical mile (m=1)";
	/* Units of area */
	public static final String METRE2_DESC				= "<Unit of area> Square metre / Square meter (m=1)";
	public static final String CENTIMETRE2_DESC			= "<Unit of area> Square centimetre / Square centimeter (m=1)";
	public static final String MILLIMETRE2_DESC			= "<Unit of area> Square millimetre / Square millimeter (m=1)";
	public static final String ARE_DESC					= "<Unit of area> Are (m=1)";
	public static final String HECTARE_DESC				= "<Unit of area> Hectare (m=1)";
	public static final String ACRE_DESC				= "<Unit of area> Acre (m=1)";
	public static final String KILOMETRE2_DESC			= "<Unit of area> Square kilometre / Square kilometer (m=1)";
	/* Units of volume */
	public static final String MILLIMETRE3_DESC			= "<Unit of volume> Cubic millimetre / Cubic millimeter (m=1)";
	public static final String CENTIMETRE3_DESC			= "<Unit of volume> Cubic centimetre / Cubic centimeter (m=1)";
	public static final String METRE3_DESC				= "<Unit of volume> Cubic metre / Cubic meter (m=1)";
	public static final String KILOMETRE3_DESC			= "<Unit of volume> Cubic kilometre / Cubic kilometer (m=1)";
	public static final String MILLILITRE_DESC			= "<Unit of volume> Millilitre / Milliliter (m=1)";
	public static final String LITRE_DESC				= "<Unit of volume> Litre / Liter (m=1)";
	public static final String GALLON_DESC				= "<Unit of volume> Gallon (m=1)";
	public static final String PINT_DESC				= "<Unit of volume> Pint (m=1)";
	/* Units of time */
	public static final String SECOND_DESC				= "<Unit of time> Second (s=1)";
	public static final String MILLISECOND_DESC			= "<Unit of time> Millisecond (s=1)";
	public static final String MINUTE_DESC				= "<Unit of time> Minute (s=1)";
	public static final String HOUR_DESC				= "<Unit of time> Hour (s=1)";
	public static final String DAY_DESC					= "<Unit of time> Day (s=1)";
	public static final String WEEK_DESC				= "<Unit of time> Week (s=1)";
	public static final String JULIAN_YEAR_DESC			= "<Unit of time> Julian year = 365.25 days (s=1)";
	/* Units of mass */
	public static final String KILOGRAM_DESC			= "<Unit of mass> Kilogram (kg=1)";
	public static final String GRAM_DESC				= "<Unit of mass> Gram (kg=1)";
	public static final String MILLIGRAM_DESC			= "<Unit of mass> Milligram (kg=1)";
	public static final String DECAGRAM_DESC			= "<Unit of mass> Decagram (kg=1)";
	public static final String TONNE_DESC				= "<Unit of mass> Tonne (kg=1)";
	public static final String OUNCE_DESC				= "<Unit of mass> Ounce (kg=1)";
	public static final String POUND_DESC				= "<Unit of mass> Pound (kg=1)";
	/* Units of information */
	public static final String BIT_DESC					= "<Unit of information> Bit (bit=1)";
	public static final String KILOBIT_DESC				= "<Unit of information> Kilobit (bit=1)";
	public static final String MEGABIT_DESC				= "<Unit of information> Megabit (bit=1)";
	public static final String GIGABIT_DESC				= "<Unit of information> Gigabit (bit=1)";
	public static final String TERABIT_DESC				= "<Unit of information> Terabit (bit=1)";
	public static final String PETABIT_DESC				= "<Unit of information> Petabit (bit=1)";
	public static final String EXABIT_DESC				= "<Unit of information> Exabit (bit=1)";
	public static final String ZETTABIT_DESC			= "<Unit of information> Zettabit (bit=1)";
	public static final String YOTTABIT_DESC			= "<Unit of information> Yottabit (bit=1)";
	public static final String BYTE_DESC				= "<Unit of information> Byte (bit=1)";
	public static final String KILOBYTE_DESC			= "<Unit of information> Kilobyte (bit=1)";
	public static final String MEGABYTE_DESC			= "<Unit of information> Megabyte (bit=1)";
	public static final String GIGABYTE_DESC			= "<Unit of information> Gigabyte (bit=1)";
	public static final String TERABYTE_DESC			= "<Unit of information> Terabyte (bit=1)";
	public static final String PETABYTE_DESC			= "<Unit of information> Petabyte (bit=1)";
	public static final String EXABYTE_DESC				= "<Unit of information> Exabyte (bit=1)";
	public static final String ZETTABYTE_DESC			= "<Unit of information> Zettabyte (bit=1)";
	public static final String YOTTABYTE_DESC			= "<Unit of information> Yottabyte (bit=1)";
	/* Units of energy */
	public static final String JOULE_DESC				= "<Unit of energy> Joule (m=1, kg=1, s=1)";
	public static final String ELECTRONO_VOLT_DESC		= "<Unit of energy> Electronovolt (m=1, kg=1, s=1)";
	public static final String KILO_ELECTRONO_VOLT_DESC	= "<Unit of energy> Kiloelectronovolt (m=1, kg=1, s=1)";
	public static final String MEGA_ELECTRONO_VOLT_DESC	= "<Unit of energy> Megaelectronovolt (m=1, kg=1, s=1)";
	public static final String GIGA_ELECTRONO_VOLT_DESC	= "<Unit of energy> Gigaelectronovolt (m=1, kg=1, s=1)";
	public static final String TERA_ELECTRONO_VOLT_DESC	= "<Unit of energy> Teraelectronovolt (m=1, kg=1, s=1)";
	/* Units of speed */
	public static final String METRE_PER_SECOND_DESC	= "<Unit of speed> Metre / Meter per second (m=1, s=1)";
	public static final String KILOMETRE_PER_HOUR_DESC	= "<Unit of speed> Kilometre / Kilometer per hour (m=1, s=1)";
	public static final String MILE_PER_HOUR_DESC		= "<Unit of speed> Mile per hour (m=1, s=1)";
	public static final String KNOT_DESC				= "<Unit of speed> Knot (m=1, s=1)";
	/* Units of acceleration */
	public static final String METRE_PER_SECOND2_DESC	= "<Unit of acceleration> Metre / Meter per square second (m=1, s=1)";
	public static final String KILOMETRE_PER_HOUR2_DESC	= "<Unit of acceleration> Kilometre / Kilometer per square hour (m=1, s=1)";
	public static final String MILE_PER_HOUR2_DESC		= "<Unit of acceleration> Mile per square hour (m=1, s=1)";
	/* Units of angle */
	public static final String RADIAN_ARC_DESC			= "<Unit of angle> Radian (rad=1)";
	public static final String DEGREE_ARC_DESC			= "<Unit of angle> Degree of arc (rad=1)";
	public static final String MINUTE_ARC_DESC			= "<Unit of angle> Minute of arc (rad=1)";
	public static final String SECOND_ARC_DESC			= "<Unit of angle> Second of arc (rad=1)";

	/*
	 * Unit - since.
	 */
	/* Ratio, Fraction */
	public static final String PERC_SINCE					= mXparser.NAMEv40;
	public static final String PROMIL_SINCE					= mXparser.NAMEv40;
	/* Metric prefixes */
	public static final String YOTTA_SINCE					= mXparser.NAMEv40;
	public static final String YOTTA_SEPT_SINCE				= mXparser.NAMEv40;
	public static final String ZETTA_SINCE					= mXparser.NAMEv40;
	public static final String ZETTA_SEXT_SINCE				= mXparser.NAMEv40;
	public static final String EXA_SINCE					= mXparser.NAMEv40;
	public static final String EXA_QUINT_SINCE				= mXparser.NAMEv40;
	public static final String PETA_SINCE					= mXparser.NAMEv40;
	public static final String PETA_QUAD_SINCE				= mXparser.NAMEv40;
	public static final String TERA_SINCE					= mXparser.NAMEv40;
	public static final String TERA_TRIL_SINCE				= mXparser.NAMEv40;
	public static final String GIGA_SINCE					= mXparser.NAMEv40;
	public static final String GIGA_BIL_SINCE				= mXparser.NAMEv40;
	public static final String MEGA_SINCE					= mXparser.NAMEv40;
	public static final String MEGA_MIL_SINCE				= mXparser.NAMEv40;
	public static final String KILO_SINCE					= mXparser.NAMEv40;
	public static final String KILO_TH_SINCE				= mXparser.NAMEv40;
	public static final String HECTO_SINCE					= mXparser.NAMEv40;
	public static final String HECTO_HUND_SINCE				= mXparser.NAMEv40;
	public static final String DECA_SINCE					= mXparser.NAMEv40;
	public static final String DECA_TEN_SINCE				= mXparser.NAMEv40;
	public static final String DECI_SINCE					= mXparser.NAMEv40;
	public static final String CENTI_SINCE					= mXparser.NAMEv40;
	public static final String MILLI_SINCE					= mXparser.NAMEv40;
	public static final String MICRO_SINCE					= mXparser.NAMEv40;
	public static final String NANO_SINCE					= mXparser.NAMEv40;
	public static final String PICO_SINCE					= mXparser.NAMEv40;
	public static final String FEMTO_SINCE					= mXparser.NAMEv40;
	public static final String ATTO_SINCE					= mXparser.NAMEv40;
	public static final String ZEPTO_SINCE					= mXparser.NAMEv40;
	public static final String YOCTO_SINCE					= mXparser.NAMEv40;
	/* Units of length / distance */
	public static final String METRE_SINCE					= mXparser.NAMEv40;
	public static final String KILOMETRE_SINCE				= mXparser.NAMEv40;
	public static final String CENTIMETRE_SINCE				= mXparser.NAMEv40;
	public static final String MILLIMETRE_SINCE				= mXparser.NAMEv40;
	public static final String INCH_SINCE					= mXparser.NAMEv40;
	public static final String YARD_SINCE					= mXparser.NAMEv40;
	public static final String FEET_SINCE					= mXparser.NAMEv40;
	public static final String MILE_SINCE					= mXparser.NAMEv40;
	public static final String NAUTICAL_MILE_SINCE			= mXparser.NAMEv40;
	/* Units of area */
	public static final String METRE2_SINCE					= mXparser.NAMEv40;
	public static final String CENTIMETRE2_SINCE			= mXparser.NAMEv40;
	public static final String MILLIMETRE2_SINCE			= mXparser.NAMEv40;
	public static final String ARE_SINCE					= mXparser.NAMEv40;
	public static final String HECTARE_SINCE				= mXparser.NAMEv40;
	public static final String ACRE_SINCE					= mXparser.NAMEv40;
	public static final String KILOMETRE2_SINCE				= mXparser.NAMEv40;
	/* Units of volume */
	public static final String MILLIMETRE3_SINCE			= mXparser.NAMEv40;
	public static final String CENTIMETRE3_SINCE			= mXparser.NAMEv40;
	public static final String METRE3_SINCE					= mXparser.NAMEv40;
	public static final String KILOMETRE3_SINCE				= mXparser.NAMEv40;
	public static final String MILLILITRE_SINCE				= mXparser.NAMEv40;
	public static final String LITRE_SINCE					= mXparser.NAMEv40;
	public static final String GALLON_SINCE					= mXparser.NAMEv40;
	public static final String PINT_SINCE					= mXparser.NAMEv40;
	/* Units of time */
	public static final String SECOND_SINCE					= mXparser.NAMEv40;
	public static final String MILLISECOND_SINCE			= mXparser.NAMEv40;
	public static final String MINUTE_SINCE					= mXparser.NAMEv40;
	public static final String HOUR_SINCE					= mXparser.NAMEv40;
	public static final String DAY_SINCE					= mXparser.NAMEv40;
	public static final String WEEK_SINCE					= mXparser.NAMEv40;
	public static final String JULIAN_YEAR_SINCE			= mXparser.NAMEv40;
	/* Units of mass */
	public static final String KILOGRAM_SINCE				= mXparser.NAMEv40;
	public static final String GRAM_SINCE					= mXparser.NAMEv40;
	public static final String MILLIGRAM_SINCE				= mXparser.NAMEv40;
	public static final String DECAGRAM_SINCE				= mXparser.NAMEv40;
	public static final String TONNE_SINCE					= mXparser.NAMEv40;
	public static final String OUNCE_SINCE					= mXparser.NAMEv40;
	public static final String POUND_SINCE					= mXparser.NAMEv40;
	/* Units of information */
	public static final String BIT_SINCE					= mXparser.NAMEv40;
	public static final String KILOBIT_SINCE				= mXparser.NAMEv40;
	public static final String MEGABIT_SINCE				= mXparser.NAMEv40;
	public static final String GIGABIT_SINCE				= mXparser.NAMEv40;
	public static final String TERABIT_SINCE				= mXparser.NAMEv40;
	public static final String PETABIT_SINCE				= mXparser.NAMEv40;
	public static final String EXABIT_SINCE					= mXparser.NAMEv40;
	public static final String ZETTABIT_SINCE				= mXparser.NAMEv40;
	public static final String YOTTABIT_SINCE				= mXparser.NAMEv40;
	public static final String BYTE_SINCE					= mXparser.NAMEv40;
	public static final String KILOBYTE_SINCE				= mXparser.NAMEv40;
	public static final String MEGABYTE_SINCE				= mXparser.NAMEv40;
	public static final String GIGABYTE_SINCE				= mXparser.NAMEv40;
	public static final String TERABYTE_SINCE				= mXparser.NAMEv40;
	public static final String PETABYTE_SINCE				= mXparser.NAMEv40;
	public static final String EXABYTE_SINCE				= mXparser.NAMEv40;
	public static final String ZETTABYTE_SINCE				= mXparser.NAMEv40;
	public static final String YOTTABYTE_SINCE				= mXparser.NAMEv40;
	/* Units of energy */
	public static final String JOULE_SINCE					= mXparser.NAMEv40;
	public static final String ELECTRONO_VOLT_SINCE			= mXparser.NAMEv40;
	public static final String KILO_ELECTRONO_VOLT_SINCE	= mXparser.NAMEv40;
	public static final String MEGA_ELECTRONO_VOLT_SINCE	= mXparser.NAMEv40;
	public static final String GIGA_ELECTRONO_VOLT_SINCE	= mXparser.NAMEv40;
	public static final String TERA_ELECTRONO_VOLT_SINCE	= mXparser.NAMEv40;
	/* Units of speed */
	public static final String METRE_PER_SECOND_SINCE		= mXparser.NAMEv40;
	public static final String KILOMETRE_PER_HOUR_SINCE		= mXparser.NAMEv40;
	public static final String MILE_PER_HOUR_SINCE			= mXparser.NAMEv40;
	public static final String KNOT_SINCE					= mXparser.NAMEv40;
	/* Units of acceleration */
	public static final String METRE_PER_SECOND2_SINCE		= mXparser.NAMEv40;
	public static final String KILOMETRE_PER_HOUR2_SINCE	= mXparser.NAMEv40;
	public static final String MILE_PER_HOUR2_SINCE			= mXparser.NAMEv40;
	/* Units of angle */
	public static final String RADIAN_ARC_SINCE				= mXparser.NAMEv40;
	public static final String DEGREE_ARC_SINCE				= mXparser.NAMEv40;
	public static final String MINUTE_ARC_SINCE				= mXparser.NAMEv40;
	public static final String SECOND_ARC_SINCE				= mXparser.NAMEv40;
}
