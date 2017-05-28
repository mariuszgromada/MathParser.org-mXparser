/*
 * @(#)ConstantValue.java        4.1.0    2017-05-13
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
 * Constant Values - mXparser tokens definition.
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
public final class ConstantValue {
	/*
	 * ConstantValue - token type id.
	 */
	public static final int TYPE_ID 							= 9;
	public static final String TYPE_DESC						= "Constant Value";
	/*
	 * ConstantValue - tokens id.
	 */
	/* Math Constants */
	public static final int PI_ID 								= 1;
	public static final int EULER_ID 							= 2;
	public static final int EULER_MASCHERONI_ID					= 3;
	public static final int GOLDEN_RATIO_ID						= 4;
	public static final int PLASTIC_ID							= 5;
	public static final int EMBREE_TREFETHEN_ID					= 6;
	public static final int FEIGENBAUM_DELTA_ID					= 7;
	public static final int FEIGENBAUM_ALFA_ID					= 8;
	public static final int TWIN_PRIME_ID						= 9;
	public static final int MEISSEL_MERTEENS_ID					= 10;
	public static final int BRAUN_TWIN_PRIME_ID					= 11;
	public static final int BRAUN_PRIME_QUADR_ID				= 12;
	public static final int BRUIJN_NEWMAN_ID					= 13;
	public static final int CATALAN_ID							= 14;
	public static final int LANDAU_RAMANUJAN_ID					= 15;
	public static final int VISWANATH_ID						= 16;
	public static final int LEGENDRE_ID							= 17;
	public static final int RAMANUJAN_SOLDNER_ID				= 18;
	public static final int ERDOS_BORWEIN_ID					= 19;
	public static final int BERNSTEIN_ID						= 20;
	public static final int GAUSS_KUZMIN_WIRSING_ID				= 21;
	public static final int HAFNER_SARNAK_MCCURLEY_ID			= 22;
	public static final int GOLOMB_DICKMAN_ID					= 23;
	public static final int CAHEN_ID							= 24;
	public static final int LAPLACE_LIMIT_ID					= 25;
	public static final int ALLADI_GRINSTEAD_ID					= 26;
	public static final int LENGYEL_ID							= 27;
	public static final int LEVY_ID								= 28;
	public static final int APERY_ID							= 29;
	public static final int MILLS_ID							= 30;
	public static final int BACKHOUSE_ID						= 31;
	public static final int PORTER_ID							= 32;
	public static final int LIEB_QUARE_ICE_ID					= 33;
	public static final int NIVEN_ID							= 34;
	public static final int SIERPINSKI_ID						= 35;
	public static final int KHINCHIN_ID							= 36;
	public static final int FRANSEN_ROBINSON_ID					= 37;
	public static final int LANDAU_ID							= 38;
	public static final int PARABOLIC_ID						= 39;
	public static final int OMEGA_ID							= 40;
	public static final int MRB_ID								= 41;
	public static final int LI2_ID								= 42;
	public static final int GOMPERTZ_ID							= 43;
	/* Physical Constants */
	public static final int LIGHT_SPEED_ID						= 101;
	public static final int GRAVITATIONAL_CONSTANT_ID			= 102;
	public static final int GRAVIT_ACC_EARTH_ID					= 103;
	public static final int PLANCK_CONSTANT_ID					= 104;
	public static final int PLANCK_CONSTANT_REDUCED_ID			= 105;
	public static final int PLANCK_LENGTH_ID					= 106;
	public static final int PLANCK_MASS_ID						= 107;
	public static final int PLANCK_TIME_ID						= 108;
	/* Astronomical Constants */
	public static final int LIGHT_YEAR_ID						= 201;
	public static final int ASTRONOMICAL_UNIT_ID				= 202;
	public static final int PARSEC_ID							= 203;
	public static final int KILOPARSEC_ID						= 204;
	public static final int EARTH_RADIUS_EQUATORIAL_ID			= 205;
	public static final int EARTH_RADIUS_POLAR_ID				= 206;
	public static final int EARTH_RADIUS_MEAN_ID				= 207;
	public static final int EARTH_MASS_ID						= 208;
	public static final int EARTH_SEMI_MAJOR_AXIS_ID			= 209;
	public static final int MOON_RADIUS_MEAN_ID					= 210;
	public static final int MOON_MASS_ID						= 211;
	public static final int MONN_SEMI_MAJOR_AXIS_ID				= 212;
	public static final int SOLAR_RADIUS_ID						= 213;
	public static final int SOLAR_MASS_ID						= 214;
	public static final int MERCURY_RADIUS_MEAN_ID				= 215;
	public static final int MERCURY_MASS_ID						= 216;
	public static final int MERCURY_SEMI_MAJOR_AXIS_ID			= 217;
	public static final int VENUS_RADIUS_MEAN_ID				= 218;
	public static final int VENUS_MASS_ID						= 219;
	public static final int VENUS_SEMI_MAJOR_AXIS_ID			= 220;
	public static final int MARS_RADIUS_MEAN_ID					= 221;
	public static final int MARS_MASS_ID						= 222;
	public static final int MARS_SEMI_MAJOR_AXIS_ID				= 223;
	public static final int JUPITER_RADIUS_MEAN_ID				= 224;
	public static final int JUPITER_MASS_ID						= 225;
	public static final int JUPITER_SEMI_MAJOR_AXIS_ID			= 226;
	public static final int SATURN_RADIUS_MEAN_ID				= 227;
	public static final int SATURN_MASS_ID						= 228;
	public static final int SATURN_SEMI_MAJOR_AXIS_ID			= 229;
	public static final int URANUS_RADIUS_MEAN_ID				= 230;
	public static final int URANUS_MASS_ID						= 231;
	public static final int URANUS_SEMI_MAJOR_AXIS_ID			= 232;
	public static final int NEPTUNE_RADIUS_MEAN_ID				= 233;
	public static final int NEPTUNE_MASS_ID						= 234;
	public static final int NEPTUNE_SEMI_MAJOR_AXIS_ID			= 235;
	/* boolean values */
	public static final int TRUE_ID								= 301;
	public static final int FALSE_ID							= 302;
	/* other values */
	public static final int NAN_ID								= 999;
	public static final int NaN									= -1;
	/*
	 * ConstantValue - tokens key words.
	 */
	public static final String PI_STR 							= "pi";
	public static final String EULER_STR 						= "e";
	public static final String EULER_MASCHERONI_STR				= "[gam]";
	public static final String GOLDEN_RATIO_STR					= "[phi]";
	public static final String PLASTIC_STR						= "[PN]";
	public static final String EMBREE_TREFETHEN_STR				= "[B*]";
	public static final String FEIGENBAUM_DELTA_STR				= "[F'd]";
	public static final String FEIGENBAUM_ALFA_STR				= "[F'a]";
	public static final String TWIN_PRIME_STR					= "[C2]";
	public static final String MEISSEL_MERTEENS_STR				= "[M1]";
	public static final String BRAUN_TWIN_PRIME_STR				= "[B2]";
	public static final String BRAUN_PRIME_QUADR_STR			= "[B4]";
	public static final String BRUIJN_NEWMAN_STR				= "[BN'L]";
	public static final String CATALAN_STR						= "[Kat]";
	public static final String LANDAU_RAMANUJAN_STR				= "[K*]";
	public static final String VISWANATH_STR					= "[K.]";
	public static final String LEGENDRE_STR						= "[B'L]";
	public static final String RAMANUJAN_SOLDNER_STR			= "[RS'm]";
	public static final String ERDOS_BORWEIN_STR				= "[EB'e]";
	public static final String BERNSTEIN_STR					= "[Bern]";
	public static final String GAUSS_KUZMIN_WIRSING_STR			= "[GKW'l]";
	public static final String HAFNER_SARNAK_MCCURLEY_STR		= "[HSM's]";
	public static final String GOLOMB_DICKMAN_STR				= "[lm]";
	public static final String CAHEN_STR						= "[Cah]";
	public static final String LAPLACE_LIMIT_STR				= "[Ll]";
	public static final String ALLADI_GRINSTEAD_STR				= "[AG]";
	public static final String LENGYEL_STR						= "[L*]";
	public static final String LEVY_STR							= "[L.]";
	public static final String APERY_STR						= "[Dz3]";
	public static final String MILLS_STR						= "[A3n]";
	public static final String BACKHOUSE_STR					= "[Bh]";
	public static final String PORTER_STR						= "[Pt]";
	public static final String LIEB_QUARE_ICE_STR				= "[L2]";
	public static final String NIVEN_STR						= "[Nv]";
	public static final String SIERPINSKI_STR					= "[Ks]";
	public static final String KHINCHIN_STR						= "[Kh]";
	public static final String FRANSEN_ROBINSON_STR				= "[FR]";
	public static final String LANDAU_STR						= "[La]";
	public static final String PARABOLIC_STR					= "[P2]";
	public static final String OMEGA_STR						= "[Om]";
	public static final String MRB_STR							= "[MRB]";
	public static final String LI2_STR							= "[li2]";
	public static final String GOMPERTZ_STR						= "[EG]";
	/* Physical Constants */
	public static final String LIGHT_SPEED_STR					= "[c]";
	public static final String GRAVITATIONAL_CONSTANT_STR		= "[G.]";
	public static final String GRAVIT_ACC_EARTH_STR				= "[g]";
	public static final String PLANCK_CONSTANT_STR				= "[hP]";
	public static final String PLANCK_CONSTANT_REDUCED_STR		= "[h-]";
	public static final String PLANCK_LENGTH_STR				= "[lP]";
	public static final String PLANCK_MASS_STR					= "[mP]";
	public static final String PLANCK_TIME_STR					= "[tP]";
	/* AstronomicalConstants */
	public static final String LIGHT_YEAR_STR					= "[ly]";
	public static final String ASTRONOMICAL_UNIT_STR			= "[au]";
	public static final String PARSEC_STR						= "[pc]";
	public static final String KILOPARSEC_STR					= "[kpc]";
	public static final String EARTH_RADIUS_EQUATORIAL_STR		= "[Earth-R-eq]";
	public static final String EARTH_RADIUS_POLAR_STR			= "[Earth-R-po]";
	public static final String EARTH_RADIUS_MEAN_STR			= "[Earth-R]";
	public static final String EARTH_MASS_STR					= "[Earth-M]";
	public static final String EARTH_SEMI_MAJOR_AXIS_STR		= "[Earth-D]";
	public static final String MOON_RADIUS_MEAN_STR				= "[Moon-R]";
	public static final String MOON_MASS_STR					= "[Moon-M]";
	public static final String MONN_SEMI_MAJOR_AXIS_STR			= "[Moon-D]";
	public static final String SOLAR_RADIUS_STR					= "[Solar-R]";
	public static final String SOLAR_MASS_STR					= "[Solar-M]";
	public static final String MERCURY_RADIUS_MEAN_STR			= "[Mercury-R]";
	public static final String MERCURY_MASS_STR					= "[Mercury-M]";
	public static final String MERCURY_SEMI_MAJOR_AXIS_STR		= "[Mercury-D]";
	public static final String VENUS_RADIUS_MEAN_STR			= "[Venus-R]";
	public static final String VENUS_MASS_STR					= "[Venus-M]";
	public static final String VENUS_SEMI_MAJOR_AXIS_STR		= "[Venus-D]";
	public static final String MARS_RADIUS_MEAN_STR				= "[Mars-R]";
	public static final String MARS_MASS_STR					= "[Mars-M]";
	public static final String MARS_SEMI_MAJOR_AXIS_STR			= "[Mars-D]";
	public static final String JUPITER_RADIUS_MEAN_STR			= "[Jupiter-R]";
	public static final String JUPITER_MASS_STR					= "[Jupiter-M]";
	public static final String JUPITER_SEMI_MAJOR_AXIS_STR		= "[Jupiter-D]";
	public static final String SATURN_RADIUS_MEAN_STR			= "[Saturn-R]";
	public static final String SATURN_MASS_STR					= "[Saturn-M]";
	public static final String SATURN_SEMI_MAJOR_AXIS_STR		= "[Saturn-D]";
	public static final String URANUS_RADIUS_MEAN_STR			= "[Uranus-R]";
	public static final String URANUS_MASS_STR					= "[Uranus-M]";
	public static final String URANUS_SEMI_MAJOR_AXIS_STR		= "[Uranus-D]";
	public static final String NEPTUNE_RADIUS_MEAN_STR			= "[Neptune-R]";
	public static final String NEPTUNE_MASS_STR					= "[Neptune-M]";
	public static final String NEPTUNE_SEMI_MAJOR_AXIS_STR		= "[Neptune-D]";
	/* boolean values */
	public static final String TRUE_STR							= "[true]";
	public static final String FALSE_STR						= "[false]";
	/* other values */
	public static final String NAN_STR							= "[NaN]";
	/*
	 * ConstantValue - syntax.
	 */
	public static final String PI_SYN							= PI_STR;
	public static final String EULER_SYN						= EULER_STR;
	public static final String EULER_MASCHERONI_SYN				= EULER_MASCHERONI_STR;
	public static final String GOLDEN_RATIO_SYN					= GOLDEN_RATIO_STR;
	public static final String PLASTIC_SYN						= PLASTIC_STR;
	public static final String EMBREE_TREFETHEN_SYN				= EMBREE_TREFETHEN_STR;
	public static final String FEIGENBAUM_DELTA_SYN				= FEIGENBAUM_DELTA_STR;
	public static final String FEIGENBAUM_ALFA_SYN				= FEIGENBAUM_ALFA_STR;
	public static final String TWIN_PRIME_SYN					= TWIN_PRIME_STR;
	public static final String MEISSEL_MERTEENS_SYN				= MEISSEL_MERTEENS_STR;
	public static final String BRAUN_TWIN_PRIME_SYN				= BRAUN_TWIN_PRIME_STR;
	public static final String BRAUN_PRIME_QUADR_SYN			= BRAUN_PRIME_QUADR_STR;
	public static final String BRUIJN_NEWMAN_SYN				= BRUIJN_NEWMAN_STR;
	public static final String CATALAN_SYN						= CATALAN_STR;
	public static final String LANDAU_RAMANUJAN_SYN				= LANDAU_RAMANUJAN_STR;
	public static final String VISWANATH_SYN					= VISWANATH_STR;
	public static final String LEGENDRE_SYN						= LEGENDRE_STR;
	public static final String RAMANUJAN_SOLDNER_SYN			= RAMANUJAN_SOLDNER_STR;
	public static final String ERDOS_BORWEIN_SYN				= ERDOS_BORWEIN_STR;
	public static final String BERNSTEIN_SYN					= BERNSTEIN_STR;
	public static final String GAUSS_KUZMIN_WIRSING_SYN			= GAUSS_KUZMIN_WIRSING_STR;
	public static final String HAFNER_SARNAK_MCCURLEY_SYN		= HAFNER_SARNAK_MCCURLEY_STR;
	public static final String GOLOMB_DICKMAN_SYN				= GOLOMB_DICKMAN_STR;
	public static final String CAHEN_SYN						= CAHEN_STR;
	public static final String LAPLACE_LIMIT_SYN				= LAPLACE_LIMIT_STR;
	public static final String ALLADI_GRINSTEAD_SYN				= ALLADI_GRINSTEAD_STR;
	public static final String LENGYEL_SYN						= LENGYEL_STR;
	public static final String LEVY_SYN							= LEVY_STR;
	public static final String APERY_SYN						= APERY_STR;
	public static final String MILLS_SYN						= MILLS_STR;
	public static final String BACKHOUSE_SYN					= BACKHOUSE_STR;
	public static final String PORTER_SYN						= PORTER_STR;
	public static final String LIEB_QUARE_ICE_SYN				= LIEB_QUARE_ICE_STR;
	public static final String NIVEN_SYN						= NIVEN_STR;
	public static final String SIERPINSKI_SYN					= SIERPINSKI_STR;
	public static final String KHINCHIN_SYN						= KHINCHIN_STR;
	public static final String FRANSEN_ROBINSON_SYN				= FRANSEN_ROBINSON_STR;
	public static final String LANDAU_SYN						= LANDAU_STR;
	public static final String PARABOLIC_SYN					= PARABOLIC_STR;
	public static final String OMEGA_SYN						= OMEGA_STR;
	public static final String MRB_SYN							= MRB_STR;
	public static final String LI2_SYN							= LI2_STR;
	public static final String GOMPERTZ_SYN						= GOMPERTZ_STR;
	/* Physical Constants */
	public static final String LIGHT_SPEED_SYN					= LIGHT_SPEED_STR;
	public static final String GRAVITATIONAL_CONSTANT_SYN		= GRAVITATIONAL_CONSTANT_STR;
	public static final String GRAVIT_ACC_EARTH_SYN				= GRAVIT_ACC_EARTH_STR;
	public static final String PLANCK_CONSTANT_SYN				= PLANCK_CONSTANT_STR;
	public static final String PLANCK_CONSTANT_REDUCED_SYN		= PLANCK_CONSTANT_REDUCED_STR;
	public static final String PLANCK_LENGTH_SYN				= PLANCK_LENGTH_STR;
	public static final String PLANCK_MASS_SYN					= PLANCK_MASS_STR;
	public static final String PLANCK_TIME_SYN					= PLANCK_TIME_STR;
	/* AstronomicalConstants */
	public static final String LIGHT_YEAR_SYN					= LIGHT_YEAR_STR;
	public static final String ASTRONOMICAL_UNIT_SYN			= ASTRONOMICAL_UNIT_STR;
	public static final String PARSEC_SYN						= PARSEC_STR;
	public static final String KILOPARSEC_SYN					= KILOPARSEC_STR;
	public static final String EARTH_RADIUS_EQUATORIAL_SYN		= EARTH_RADIUS_EQUATORIAL_STR;
	public static final String EARTH_RADIUS_POLAR_SYN			= EARTH_RADIUS_POLAR_STR;
	public static final String EARTH_RADIUS_MEAN_SYN			= EARTH_RADIUS_MEAN_STR;
	public static final String EARTH_MASS_SYN					= EARTH_MASS_STR;
	public static final String EARTH_SEMI_MAJOR_AXIS_SYN		= EARTH_SEMI_MAJOR_AXIS_STR;
	public static final String MOON_RADIUS_MEAN_SYN				= MOON_RADIUS_MEAN_STR;
	public static final String MOON_MASS_SYN					= MOON_MASS_STR;
	public static final String MONN_SEMI_MAJOR_AXIS_SYN			= MONN_SEMI_MAJOR_AXIS_STR;
	public static final String SOLAR_RADIUS_SYN					= SOLAR_RADIUS_STR;
	public static final String SOLAR_MASS_SYN					= SOLAR_MASS_STR;
	public static final String MERCURY_RADIUS_MEAN_SYN			= MERCURY_RADIUS_MEAN_STR;
	public static final String MERCURY_MASS_SYN					= MERCURY_MASS_STR;
	public static final String MERCURY_SEMI_MAJOR_AXIS_SYN		= MERCURY_SEMI_MAJOR_AXIS_STR;
	public static final String VENUS_RADIUS_MEAN_SYN			= VENUS_RADIUS_MEAN_STR;
	public static final String VENUS_MASS_SYN					= VENUS_MASS_STR;
	public static final String VENUS_SEMI_MAJOR_AXIS_SYN		= VENUS_SEMI_MAJOR_AXIS_STR;
	public static final String MARS_RADIUS_MEAN_SYN				= MARS_RADIUS_MEAN_STR;
	public static final String MARS_MASS_SYN					= MARS_MASS_STR;
	public static final String MARS_SEMI_MAJOR_AXIS_SYN			= MARS_SEMI_MAJOR_AXIS_STR;
	public static final String JUPITER_RADIUS_MEAN_SYN			= JUPITER_RADIUS_MEAN_STR;
	public static final String JUPITER_MASS_SYN					= JUPITER_MASS_STR;
	public static final String JUPITER_SEMI_MAJOR_AXIS_SYN		= JUPITER_SEMI_MAJOR_AXIS_STR;
	public static final String SATURN_RADIUS_MEAN_SYN			= SATURN_RADIUS_MEAN_STR;
	public static final String SATURN_MASS_SYN					= SATURN_MASS_STR;
	public static final String SATURN_SEMI_MAJOR_AXIS_SYN		= SATURN_SEMI_MAJOR_AXIS_STR;
	public static final String URANUS_RADIUS_MEAN_SYN			= URANUS_RADIUS_MEAN_STR;
	public static final String URANUS_MASS_SYN					= URANUS_MASS_STR;
	public static final String URANUS_SEMI_MAJOR_AXIS_SYN		= URANUS_SEMI_MAJOR_AXIS_STR;
	public static final String NEPTUNE_RADIUS_MEAN_SYN			= NEPTUNE_RADIUS_MEAN_STR;
	public static final String NEPTUNE_MASS_SYN					= NEPTUNE_MASS_STR;
	public static final String NEPTUNE_SEMI_MAJOR_AXIS_SYN		= NEPTUNE_SEMI_MAJOR_AXIS_STR;
	/* boolean values */
	public static final String TRUE_SYN							= TRUE_STR;
	public static final String FALSE_SYN						= FALSE_STR;
	/* other values */
	public static final String NAN_SYN							= NAN_STR;
	/*
	 * ConstantValue - tokens description.
	 */
	public static final String PI_DESC 							= "Pi, Archimedes' constant or Ludolph's number";
	public static final String EULER_DESC 						= "Napier's constant, or Euler's number, base of Natural logarithm";
	public static final String EULER_MASCHERONI_DESC			= "Euler-Mascheroni constant";
	public static final String GOLDEN_RATIO_DESC				= "Golden ratio";
	public static final String PLASTIC_DESC						= "Plastic constant";
	public static final String EMBREE_TREFETHEN_DESC			= "Embree-Trefethen constant";
	public static final String FEIGENBAUM_DELTA_DESC			= "Feigenbaum constant alfa";
	public static final String FEIGENBAUM_ALFA_DESC				= "Feigenbaum constant delta";
	public static final String TWIN_PRIME_DESC					= "Twin prime constant";
	public static final String MEISSEL_MERTEENS_DESC			= "Meissel-Mertens constant";
	public static final String BRAUN_TWIN_PRIME_DESC			= "Brun's constant for twin primes";
	public static final String BRAUN_PRIME_QUADR_DESC			= "Brun's constant for prime quadruplets";
	public static final String BRUIJN_NEWMAN_DESC				= "de Bruijn-Newman constant";
	public static final String CATALAN_DESC						= "Catalan's constant";
	public static final String LANDAU_RAMANUJAN_DESC			= "Landau-Ramanujan constant";
	public static final String VISWANATH_DESC					= "Viswanath's constant";
	public static final String LEGENDRE_DESC					= "Legendre's constant";
	public static final String RAMANUJAN_SOLDNER_DESC			= "Ramanujan-Soldner constant";
	public static final String ERDOS_BORWEIN_DESC				= "Erdos-Borwein constant";
	public static final String BERNSTEIN_DESC					= "Bernstein's constant";
	public static final String GAUSS_KUZMIN_WIRSING_DESC		= "Gauss-Kuzmin-Wirsing constant";
	public static final String HAFNER_SARNAK_MCCURLEY_DESC		= "Hafner-Sarnak-McCurley constant";
	public static final String GOLOMB_DICKMAN_DESC				= "Golomb-Dickman constant";
	public static final String CAHEN_DESC						= "Cahen's constant";
	public static final String LAPLACE_LIMIT_DESC				= "Laplace limit";
	public static final String ALLADI_GRINSTEAD_DESC			= "Alladi-Grinstead constant";
	public static final String LENGYEL_DESC						= "Lengyel's constant";
	public static final String LEVY_DESC						= "Levy's constant";
	public static final String APERY_DESC						= "Apery's constant";
	public static final String MILLS_DESC						= "Mills' constant";
	public static final String BACKHOUSE_DESC					= "Backhouse's constant";
	public static final String PORTER_DESC						= "Porter's constant";
	public static final String LIEB_QUARE_ICE_DESC				= "Lieb's square ice constant";
	public static final String NIVEN_DESC						= "Niven's constant";
	public static final String SIERPINSKI_DESC					= "Sierpinski's constant";
	public static final String KHINCHIN_DESC					= "Khinchin's constant";
	public static final String FRANSEN_ROBINSON_DESC			= "Fransen-Robinson constant";
	public static final String LANDAU_DESC						= "Landau's constant";
	public static final String PARABOLIC_DESC					= "Parabolic constant";
	public static final String OMEGA_DESC						= "Omega constant";
	public static final String MRB_DESC							= "MRB constant";
	public static final String LI2_DESC							= "li(2) - Logarithmic integral function at x=2";
	public static final String GOMPERTZ_DESC					= "Gompertz constant";
	/* Physical Constants */
	public static final String LIGHT_SPEED_DESC					= "<Physical Constant> Light speed in vacuum [m/s] (m=1, s=1)";
	public static final String GRAVITATIONAL_CONSTANT_DESC		= "<Physical Constant> Gravitational constant (m=1, kg=1, s=1)]";
	public static final String GRAVIT_ACC_EARTH_DESC			= "<Physical Constant> Gravitational acceleration on Earth [m/s^2] (m=1, s=1)";
	public static final String PLANCK_CONSTANT_DESC				= "<Physical Constant> Planck constant (m=1, kg=1, s=1)";
	public static final String PLANCK_CONSTANT_REDUCED_DESC		= "<Physical Constant> Reduced Planck constant / Dirac constant (m=1, kg=1, s=1)]";
	public static final String PLANCK_LENGTH_DESC				= "<Physical Constant> Planck length [m] (m=1)";
	public static final String PLANCK_MASS_DESC					= "<Physical Constant> Planck mass [kg] (kg=1)";
	public static final String PLANCK_TIME_DESC					= "<Physical Constant> Planck time [s] (s=1)";
	/* Astronomical Constants */
	public static final String LIGHT_YEAR_DESC					= "<Astronomical Constant> Light year [m] (m=1)";
	public static final String ASTRONOMICAL_UNIT_DESC			= "<Astronomical Constant> Astronomical unit [m] (m=1)";
	public static final String PARSEC_DESC						= "<Astronomical Constant> Parsec [m] (m=1)";
	public static final String KILOPARSEC_DESC					= "<Astronomical Constant> Kiloparsec [m] (m=1)";
	public static final String EARTH_RADIUS_EQUATORIAL_DESC		= "<Astronomical Constant> Earth equatorial radius [m] (m=1)";
	public static final String EARTH_RADIUS_POLAR_DESC			= "<Astronomical Constant> Earth polar radius [m] (m=1)";
	public static final String EARTH_RADIUS_MEAN_DESC			= "<Astronomical Constant> Earth mean radius (m=1)";
	public static final String EARTH_MASS_DESC					= "<Astronomical Constant> Earth mass [kg] (kg=1)";
	public static final String EARTH_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Earth-Sun distance - semi major axis [m] (m=1)";
	public static final String MOON_RADIUS_MEAN_DESC			= "<Astronomical Constant> Moon mean radius [m] (m=1)";
	public static final String MOON_MASS_DESC					= "<Astronomical Constant> Moon mass [kg] (kg=1)";
	public static final String MONN_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Moon-Earth distance - semi major axis [m] (m=1)";
	public static final String SOLAR_RADIUS_DESC				= "<Astronomical Constant> Solar mean radius [m] (m=1)";
	public static final String SOLAR_MASS_DESC					= "<Astronomical Constant> Solar mass [kg] (kg=1)";
	public static final String MERCURY_RADIUS_MEAN_DESC			= "<Astronomical Constant> Mercury mean radius [m] (m=1)";
	public static final String MERCURY_MASS_DESC				= "<Astronomical Constant> Mercury mass [kg] (kg=1)";
	public static final String MERCURY_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Mercury-Sun distance - semi major axis [m] (m=1)";
	public static final String VENUS_RADIUS_MEAN_DESC			= "<Astronomical Constant> Venus mean radius [m] (m=1)";
	public static final String VENUS_MASS_DESC					= "<Astronomical Constant> Venus mass [kg] (kg=1)";
	public static final String VENUS_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Venus-Sun distance - semi major axis [m] (m=1)";
	public static final String MARS_RADIUS_MEAN_DESC			= "<Astronomical Constant> Mars mean radius [m] (m=1)";
	public static final String MARS_MASS_DESC					= "<Astronomical Constant> Mars mass [kg] (kg=1)";
	public static final String MARS_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Mars-Sun distance - semi major axis [m] (m=1)";
	public static final String JUPITER_RADIUS_MEAN_DESC			= "<Astronomical Constant> Jupiter mean radius [m] (m=1)";
	public static final String JUPITER_MASS_DESC				= "<Astronomical Constant> Jupiter mass [kg] (kg=1)";
	public static final String JUPITER_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Jupiter-Sun distance - semi major axis [m] (m=1)";
	public static final String SATURN_RADIUS_MEAN_DESC			= "<Astronomical Constant> Saturn mean radius [m] (m=1)";
	public static final String SATURN_MASS_DESC					= "<Astronomical Constant> Saturn mass [kg] (kg=1)";
	public static final String SATURN_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Saturn-Sun distance - semi major axis [m] (m=1)";
	public static final String URANUS_RADIUS_MEAN_DESC			= "<Astronomical Constant> Uranus mean radius [m] (m=1)";
	public static final String URANUS_MASS_DESC					= "<Astronomical Constant> Uranus mass [kg] (kg=1)";
	public static final String URANUS_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Uranus-Sun distance - semi major axis [m] (m=1)";
	public static final String NEPTUNE_RADIUS_MEAN_DESC			= "<Astronomical Constant> Neptune mean radius [m] (m=1)";
	public static final String NEPTUNE_MASS_DESC				= "<Astronomical Constant> Neptune mass [kg] (kg=1)";
	public static final String NEPTUNE_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Neptune-Sun distance - semi major axis [m] (m=1)";
	/* boolean values */
	public static final String TRUE_DESC						= "Boolean True represented as double, [true] = 1";
	public static final String FALSE_DESC						= "Boolean False represented as double, [false] = 0";
	/* other values */
	public static final String NAN_DESC							= "Not-a-Number";

	/*
	 * ConstantValue - since.
	 */
	public static final String PI_SINCE							= mXparser.NAMEv10;
	public static final String EULER_SINCE						= mXparser.NAMEv10;
	public static final String EULER_MASCHERONI_SINCE			= mXparser.NAMEv10;
	public static final String GOLDEN_RATIO_SINCE				= mXparser.NAMEv10;
	public static final String PLASTIC_SINCE					= mXparser.NAMEv10;
	public static final String EMBREE_TREFETHEN_SINCE			= mXparser.NAMEv10;
	public static final String FEIGENBAUM_DELTA_SINCE			= mXparser.NAMEv10;
	public static final String FEIGENBAUM_ALFA_SINCE			= mXparser.NAMEv10;
	public static final String TWIN_PRIME_SINCE					= mXparser.NAMEv10;
	public static final String MEISSEL_MERTEENS_SINCE			= mXparser.NAMEv10;
	public static final String BRAUN_TWIN_PRIME_SINCE			= mXparser.NAMEv10;
	public static final String BRAUN_PRIME_QUADR_SINCE			= mXparser.NAMEv10;
	public static final String BRUIJN_NEWMAN_SINCE				= mXparser.NAMEv10;
	public static final String CATALAN_SINCE					= mXparser.NAMEv10;
	public static final String LANDAU_RAMANUJAN_SINCE			= mXparser.NAMEv10;
	public static final String VISWANATH_SINCE					= mXparser.NAMEv10;
	public static final String LEGENDRE_SINCE					= mXparser.NAMEv10;
	public static final String RAMANUJAN_SOLDNER_SINCE			= mXparser.NAMEv10;
	public static final String ERDOS_BORWEIN_SINCE				= mXparser.NAMEv10;
	public static final String BERNSTEIN_SINCE					= mXparser.NAMEv10;
	public static final String GAUSS_KUZMIN_WIRSING_SINCE		= mXparser.NAMEv10;
	public static final String HAFNER_SARNAK_MCCURLEY_SINCE		= mXparser.NAMEv10;
	public static final String GOLOMB_DICKMAN_SINCE				= mXparser.NAMEv10;
	public static final String CAHEN_SINCE						= mXparser.NAMEv10;
	public static final String LAPLACE_LIMIT_SINCE				= mXparser.NAMEv10;
	public static final String ALLADI_GRINSTEAD_SINCE			= mXparser.NAMEv10;
	public static final String LENGYEL_SINCE					= mXparser.NAMEv10;
	public static final String LEVY_SINCE						= mXparser.NAMEv10;
	public static final String APERY_SINCE						= mXparser.NAMEv10;
	public static final String MILLS_SINCE						= mXparser.NAMEv10;
	public static final String BACKHOUSE_SINCE					= mXparser.NAMEv10;
	public static final String PORTER_SINCE						= mXparser.NAMEv10;
	public static final String LIEB_QUARE_ICE_SINCE				= mXparser.NAMEv10;
	public static final String NIVEN_SINCE						= mXparser.NAMEv10;
	public static final String SIERPINSKI_SINCE					= mXparser.NAMEv10;
	public static final String KHINCHIN_SINCE					= mXparser.NAMEv10;
	public static final String FRANSEN_ROBINSON_SINCE			= mXparser.NAMEv10;
	public static final String LANDAU_SINCE						= mXparser.NAMEv10;
	public static final String PARABOLIC_SINCE					= mXparser.NAMEv10;
	public static final String OMEGA_SINCE						= mXparser.NAMEv10;
	public static final String MRB_SINCE						= mXparser.NAMEv10;
	public static final String LI2_SINCE						= mXparser.NAMEv23;
	public static final String GOMPERTZ_SINCE					= mXparser.NAMEv23;
	/* Physical Constants */
	public static final String LIGHT_SPEED_SINCE				= mXparser.NAMEv40;
	public static final String GRAVITATIONAL_CONSTANT_SINCE		= mXparser.NAMEv40;
	public static final String GRAVIT_ACC_EARTH_SINCE			= mXparser.NAMEv40;
	public static final String PLANCK_CONSTANT_SINCE			= mXparser.NAMEv40;
	public static final String PLANCK_CONSTANT_REDUCED_SINCE	= mXparser.NAMEv40;
	public static final String PLANCK_LENGTH_SINCE				= mXparser.NAMEv40;
	public static final String PLANCK_MASS_SINCE				= mXparser.NAMEv40;
	public static final String PLANCK_TIME_SINCE				= mXparser.NAMEv40;
	/* AstronomicalConstants */
	public static final String LIGHT_YEAR_SINCE					= mXparser.NAMEv40;
	public static final String ASTRONOMICAL_UNIT_SINCE			= mXparser.NAMEv40;
	public static final String PARSEC_SINCE						= mXparser.NAMEv40;
	public static final String KILOPARSEC_SINCE					= mXparser.NAMEv40;
	public static final String EARTH_RADIUS_EQUATORIAL_SINCE	= mXparser.NAMEv40;
	public static final String EARTH_RADIUS_POLAR_SINCE			= mXparser.NAMEv40;
	public static final String EARTH_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String EARTH_MASS_SINCE					= mXparser.NAMEv40;
	public static final String EARTH_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String MOON_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String MOON_MASS_SINCE					= mXparser.NAMEv40;
	public static final String MONN_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String SOLAR_RADIUS_SINCE				= mXparser.NAMEv40;
	public static final String SOLAR_MASS_SINCE					= mXparser.NAMEv40;
	public static final String MERCURY_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
	public static final String MERCURY_MASS_SINCE				= mXparser.NAMEv40;
	public static final String MERCURY_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
	public static final String VENUS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String VENUS_MASS_SINCE					= mXparser.NAMEv40;
	public static final String VENUS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String MARS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String MARS_MASS_SINCE					= mXparser.NAMEv40;
	public static final String MARS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String JUPITER_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
	public static final String JUPITER_MASS_SINCE				= mXparser.NAMEv40;
	public static final String JUPITER_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
	public static final String SATURN_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String SATURN_MASS_SINCE				= mXparser.NAMEv40;
	public static final String SATURN_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String URANUS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
	public static final String URANUS_MASS_SINCE				= mXparser.NAMEv40;
	public static final String URANUS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
	public static final String NEPTUNE_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
	public static final String NEPTUNE_MASS_SINCE				= mXparser.NAMEv40;
	public static final String NEPTUNE_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
	/* boolean values */
	public static final String TRUE_SINCE						= mXparser.NAMEv41;
	public static final String FALSE_SINCE						= mXparser.NAMEv41;
	/* other values */
	public static final String NAN_SINCE						= mXparser.NAMEv41;
}

