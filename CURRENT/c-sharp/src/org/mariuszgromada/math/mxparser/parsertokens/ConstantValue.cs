/*
 * @(#)ConstantValue.cs        4.1.0    2017-05-13
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
	[CLSCompliant(true)]
	public sealed class ConstantValue {
		/*
		 * ConstantValue - token type id.
		 */
		public const int TYPE_ID							= 9;
		public const String TYPE_DESC						= "Constant Value";
		/*
		 * ConstantValue - tokens id.
		 */
		/* Math Constants */
		public const int PI_ID								= 1;
		public const int EULER_ID							= 2;
		public const int EULER_MASCHERONI_ID				= 3;
		public const int GOLDEN_RATIO_ID					= 4;
		public const int PLASTIC_ID							= 5;
		public const int EMBREE_TREFETHEN_ID				= 6;
		public const int FEIGENBAUM_DELTA_ID				= 7;
		public const int FEIGENBAUM_ALFA_ID					= 8;
		public const int TWIN_PRIME_ID						= 9;
		public const int MEISSEL_MERTEENS_ID				= 10;
		public const int BRAUN_TWIN_PRIME_ID				= 11;
		public const int BRAUN_PRIME_QUADR_ID				= 12;
		public const int BRUIJN_NEWMAN_ID					= 13;
		public const int CATALAN_ID							= 14;
		public const int LANDAU_RAMANUJAN_ID				= 15;
		public const int VISWANATH_ID						= 16;
		public const int LEGENDRE_ID						= 17;
		public const int RAMANUJAN_SOLDNER_ID				= 18;
		public const int ERDOS_BORWEIN_ID					= 19;
		public const int BERNSTEIN_ID						= 20;
		public const int GAUSS_KUZMIN_WIRSING_ID			= 21;
		public const int HAFNER_SARNAK_MCCURLEY_ID			= 22;
		public const int GOLOMB_DICKMAN_ID					= 23;
		public const int CAHEN_ID							= 24;
		public const int LAPLACE_LIMIT_ID					= 25;
		public const int ALLADI_GRINSTEAD_ID				= 26;
		public const int LENGYEL_ID							= 27;
		public const int LEVY_ID							= 28;
		public const int APERY_ID							= 29;
		public const int MILLS_ID							= 30;
		public const int BACKHOUSE_ID						= 31;
		public const int PORTER_ID							= 32;
		public const int LIEB_QUARE_ICE_ID					= 33;
		public const int NIVEN_ID							= 34;
		public const int SIERPINSKI_ID						= 35;
		public const int KHINCHIN_ID						= 36;
		public const int FRANSEN_ROBINSON_ID				= 37;
		public const int LANDAU_ID							= 38;
		public const int PARABOLIC_ID						= 39;
		public const int OMEGA_ID							= 40;
		public const int MRB_ID								= 41;
		public const int LI2_ID								= 42;
		public const int GOMPERTZ_ID						= 43;
		/* Physical Constants */
		public const int LIGHT_SPEED_ID						= 101;
		public const int GRAVITATIONAL_CONSTANT_ID			= 102;
		public const int GRAVIT_ACC_EARTH_ID				= 103;
		public const int PLANCK_CONSTANT_ID					= 104;
		public const int PLANCK_CONSTANT_REDUCED_ID			= 105;
		public const int PLANCK_LENGTH_ID					= 106;
		public const int PLANCK_MASS_ID						= 107;
		public const int PLANCK_TIME_ID						= 108;
		/* Astronomical Constants */
		public const int LIGHT_YEAR_ID						= 201;
		public const int ASTRONOMICAL_UNIT_ID				= 202;
		public const int PARSEC_ID							= 203;
		public const int KILOPARSEC_ID						= 204;
		public const int EARTH_RADIUS_EQUATORIAL_ID			= 205;
		public const int EARTH_RADIUS_POLAR_ID				= 206;
		public const int EARTH_RADIUS_MEAN_ID				= 207;
		public const int EARTH_MASS_ID						= 208;
		public const int EARTH_SEMI_MAJOR_AXIS_ID			= 209;
		public const int MOON_RADIUS_MEAN_ID				= 210;
		public const int MOON_MASS_ID						= 211;
		public const int MONN_SEMI_MAJOR_AXIS_ID			= 212;
		public const int SOLAR_RADIUS_ID					= 213;
		public const int SOLAR_MASS_ID						= 214;
		public const int MERCURY_RADIUS_MEAN_ID				= 215;
		public const int MERCURY_MASS_ID					= 216;
		public const int MERCURY_SEMI_MAJOR_AXIS_ID			= 217;
		public const int VENUS_RADIUS_MEAN_ID				= 218;
		public const int VENUS_MASS_ID						= 219;
		public const int VENUS_SEMI_MAJOR_AXIS_ID			= 220;
		public const int MARS_RADIUS_MEAN_ID				= 221;
		public const int MARS_MASS_ID						= 222;
		public const int MARS_SEMI_MAJOR_AXIS_ID			= 223;
		public const int JUPITER_RADIUS_MEAN_ID				= 224;
		public const int JUPITER_MASS_ID					= 225;
		public const int JUPITER_SEMI_MAJOR_AXIS_ID			= 226;
		public const int SATURN_RADIUS_MEAN_ID				= 227;
		public const int SATURN_MASS_ID						= 228;
		public const int SATURN_SEMI_MAJOR_AXIS_ID			= 229;
		public const int URANUS_RADIUS_MEAN_ID				= 230;
		public const int URANUS_MASS_ID						= 231;
		public const int URANUS_SEMI_MAJOR_AXIS_ID			= 232;
		public const int NEPTUNE_RADIUS_MEAN_ID				= 233;
		public const int NEPTUNE_MASS_ID					= 234;
		public const int NEPTUNE_SEMI_MAJOR_AXIS_ID			= 235;
		/* boolean values */
		public const int TRUE_ID							= 301;
		public const int FALSE_ID							= 302;
		/* other values */
		public const int NAN_ID								= 999;
		public const int NaN								= -1;
		/*
		 * ConstantValue - tokens key words.
		 */
		public const String PI_STR 							= "pi";
		public const String EULER_STR 						= "e";
		public const String EULER_MASCHERONI_STR			= "[gam]";
		public const String GOLDEN_RATIO_STR				= "[phi]";
		public const String PLASTIC_STR						= "[PN]";
		public const String EMBREE_TREFETHEN_STR			= "[B*]";
		public const String FEIGENBAUM_DELTA_STR			= "[F'd]";
		public const String FEIGENBAUM_ALFA_STR				= "[F'a]";
		public const String TWIN_PRIME_STR					= "[C2]";
		public const String MEISSEL_MERTEENS_STR			= "[M1]";
		public const String BRAUN_TWIN_PRIME_STR			= "[B2]";
		public const String BRAUN_PRIME_QUADR_STR			= "[B4]";
		public const String BRUIJN_NEWMAN_STR				= "[BN'L]";
		public const String CATALAN_STR						= "[Kat]";
		public const String LANDAU_RAMANUJAN_STR			= "[K*]";
		public const String VISWANATH_STR					= "[K.]";
		public const String LEGENDRE_STR					= "[B'L]";
		public const String RAMANUJAN_SOLDNER_STR			= "[RS'm]";
		public const String ERDOS_BORWEIN_STR				= "[EB'e]";
		public const String BERNSTEIN_STR					= "[Bern]";
		public const String GAUSS_KUZMIN_WIRSING_STR		= "[GKW'l]";
		public const String HAFNER_SARNAK_MCCURLEY_STR		= "[HSM's]";
		public const String GOLOMB_DICKMAN_STR				= "[lm]";
		public const String CAHEN_STR						= "[Cah]";
		public const String LAPLACE_LIMIT_STR				= "[Ll]";
		public const String ALLADI_GRINSTEAD_STR			= "[AG]";
		public const String LENGYEL_STR						= "[L*]";
		public const String LEVY_STR						= "[L.]";
		public const String APERY_STR						= "[Dz3]";
		public const String MILLS_STR						= "[A3n]";
		public const String BACKHOUSE_STR					= "[Bh]";
		public const String PORTER_STR						= "[Pt]";
		public const String LIEB_QUARE_ICE_STR				= "[L2]";
		public const String NIVEN_STR						= "[Nv]";
		public const String SIERPINSKI_STR					= "[Ks]";
		public const String KHINCHIN_STR					= "[Kh]";
		public const String FRANSEN_ROBINSON_STR			= "[FR]";
		public const String LANDAU_STR						= "[La]";
		public const String PARABOLIC_STR					= "[P2]";
		public const String OMEGA_STR						= "[Om]";
		public const String MRB_STR							= "[MRB]";
		public const String LI2_STR							= "[li2]";
		public const String GOMPERTZ_STR					= "[EG]";
		/* Physical Constants */
		public const String LIGHT_SPEED_STR					= "[c]";
		public const String GRAVITATIONAL_CONSTANT_STR		= "[G.]";
		public const String GRAVIT_ACC_EARTH_STR			= "[g]";
		public const String PLANCK_CONSTANT_STR				= "[hP]";
		public const String PLANCK_CONSTANT_REDUCED_STR		= "[h-]";
		public const String PLANCK_LENGTH_STR				= "[lP]";
		public const String PLANCK_MASS_STR					= "[mP]";
		public const String PLANCK_TIME_STR					= "[tP]";
		/* AstronomicalConstants */
		public const String LIGHT_YEAR_STR					= "[ly]";
		public const String ASTRONOMICAL_UNIT_STR			= "[au]";
		public const String PARSEC_STR						= "[pc]";
		public const String KILOPARSEC_STR					= "[kpc]";
		public const String EARTH_RADIUS_EQUATORIAL_STR		= "[Earth-R-eq]";
		public const String EARTH_RADIUS_POLAR_STR			= "[Earth-R-po]";
		public const String EARTH_RADIUS_MEAN_STR			= "[Earth-R]";
		public const String EARTH_MASS_STR					= "[Earth-M]";
		public const String EARTH_SEMI_MAJOR_AXIS_STR		= "[Earth-D]";
		public const String MOON_RADIUS_MEAN_STR			= "[Moon-R]";
		public const String MOON_MASS_STR					= "[Moon-M]";
		public const String MONN_SEMI_MAJOR_AXIS_STR		= "[Moon-D]";
		public const String SOLAR_RADIUS_STR				= "[Solar-R]";
		public const String SOLAR_MASS_STR					= "[Solar-M]";
		public const String MERCURY_RADIUS_MEAN_STR			= "[Mercury-R]";
		public const String MERCURY_MASS_STR				= "[Mercury-M]";
		public const String MERCURY_SEMI_MAJOR_AXIS_STR		= "[Mercury-D]";
		public const String VENUS_RADIUS_MEAN_STR			= "[Venus-R]";
		public const String VENUS_MASS_STR					= "[Venus-M]";
		public const String VENUS_SEMI_MAJOR_AXIS_STR		= "[Venus-D]";
		public const String MARS_RADIUS_MEAN_STR			= "[Mars-R]";
		public const String MARS_MASS_STR					= "[Mars-M]";
		public const String MARS_SEMI_MAJOR_AXIS_STR		= "[Mars-D]";
		public const String JUPITER_RADIUS_MEAN_STR			= "[Jupiter-R]";
		public const String JUPITER_MASS_STR				= "[Jupiter-M]";
		public const String JUPITER_SEMI_MAJOR_AXIS_STR		= "[Jupiter-D]";
		public const String SATURN_RADIUS_MEAN_STR			= "[Saturn-R]";
		public const String SATURN_MASS_STR					= "[Saturn-M]";
		public const String SATURN_SEMI_MAJOR_AXIS_STR		= "[Saturn-D]";
		public const String URANUS_RADIUS_MEAN_STR			= "[Uranus-R]";
		public const String URANUS_MASS_STR					= "[Uranus-M]";
		public const String URANUS_SEMI_MAJOR_AXIS_STR		= "[Uranus-D]";
		public const String NEPTUNE_RADIUS_MEAN_STR			= "[Neptune-R]";
		public const String NEPTUNE_MASS_STR				= "[Neptune-M]";
		public const String NEPTUNE_SEMI_MAJOR_AXIS_STR		= "[Neptune-D]";
		/* boolean values */
		public const String TRUE_STR						= "[true]";
		public const String FALSE_STR						= "[false]";
		/* other values */
		public const String NAN_STR							= "[NaN]";
		/*
		 * ConstantValue - syntax.
		 */
		public const String PI_SYN							= PI_STR;
		public const String EULER_SYN						= EULER_STR;
		public const String EULER_MASCHERONI_SYN			= EULER_MASCHERONI_STR;
		public const String GOLDEN_RATIO_SYN				= GOLDEN_RATIO_STR;
		public const String PLASTIC_SYN						= PLASTIC_STR;
		public const String EMBREE_TREFETHEN_SYN			= EMBREE_TREFETHEN_STR;
		public const String FEIGENBAUM_DELTA_SYN			= FEIGENBAUM_DELTA_STR;
		public const String FEIGENBAUM_ALFA_SYN				= FEIGENBAUM_ALFA_STR;
		public const String TWIN_PRIME_SYN					= TWIN_PRIME_STR;
		public const String MEISSEL_MERTEENS_SYN			= MEISSEL_MERTEENS_STR;
		public const String BRAUN_TWIN_PRIME_SYN			= BRAUN_TWIN_PRIME_STR;
		public const String BRAUN_PRIME_QUADR_SYN			= BRAUN_PRIME_QUADR_STR;
		public const String BRUIJN_NEWMAN_SYN				= BRUIJN_NEWMAN_STR;
		public const String CATALAN_SYN						= CATALAN_STR;
		public const String LANDAU_RAMANUJAN_SYN			= LANDAU_RAMANUJAN_STR;
		public const String VISWANATH_SYN					= VISWANATH_STR;
		public const String LEGENDRE_SYN					= LEGENDRE_STR;
		public const String RAMANUJAN_SOLDNER_SYN			= RAMANUJAN_SOLDNER_STR;
		public const String ERDOS_BORWEIN_SYN				= ERDOS_BORWEIN_STR;
		public const String BERNSTEIN_SYN					= BERNSTEIN_STR;
		public const String GAUSS_KUZMIN_WIRSING_SYN		= GAUSS_KUZMIN_WIRSING_STR;
		public const String HAFNER_SARNAK_MCCURLEY_SYN		= HAFNER_SARNAK_MCCURLEY_STR;
		public const String GOLOMB_DICKMAN_SYN				= GOLOMB_DICKMAN_STR;
		public const String CAHEN_SYN						= CAHEN_STR;
		public const String LAPLACE_LIMIT_SYN				= LAPLACE_LIMIT_STR;
		public const String ALLADI_GRINSTEAD_SYN			= ALLADI_GRINSTEAD_STR;
		public const String LENGYEL_SYN						= LENGYEL_STR;
		public const String LEVY_SYN						= LEVY_STR;
		public const String APERY_SYN						= APERY_STR;
		public const String MILLS_SYN						= MILLS_STR;
		public const String BACKHOUSE_SYN					= BACKHOUSE_STR;
		public const String PORTER_SYN						= PORTER_STR;
		public const String LIEB_QUARE_ICE_SYN				= LIEB_QUARE_ICE_STR;
		public const String NIVEN_SYN						= NIVEN_STR;
		public const String SIERPINSKI_SYN					= SIERPINSKI_STR;
		public const String KHINCHIN_SYN					= KHINCHIN_STR;
		public const String FRANSEN_ROBINSON_SYN			= FRANSEN_ROBINSON_STR;
		public const String LANDAU_SYN						= LANDAU_STR;
		public const String PARABOLIC_SYN					= PARABOLIC_STR;
		public const String OMEGA_SYN						= OMEGA_STR;
		public const String MRB_SYN							= MRB_STR;
		public const String LI2_SYN							= LI2_STR;
		public const String GOMPERTZ_SYN					= GOMPERTZ_STR;
		/* Physical Constants */
		public const String LIGHT_SPEED_SYN					= LIGHT_SPEED_STR;
		public const String GRAVITATIONAL_CONSTANT_SYN		= GRAVITATIONAL_CONSTANT_STR;
		public const String GRAVIT_ACC_EARTH_SYN			= GRAVIT_ACC_EARTH_STR;
		public const String PLANCK_CONSTANT_SYN				= PLANCK_CONSTANT_STR;
		public const String PLANCK_CONSTANT_REDUCED_SYN		= PLANCK_CONSTANT_REDUCED_STR;
		public const String PLANCK_LENGTH_SYN				= PLANCK_LENGTH_STR;
		public const String PLANCK_MASS_SYN					= PLANCK_MASS_STR;
		public const String PLANCK_TIME_SYN					= PLANCK_TIME_STR;
		/* AstronomicalConstants */
		public const String LIGHT_YEAR_SYN					= LIGHT_YEAR_STR;
		public const String ASTRONOMICAL_UNIT_SYN			= ASTRONOMICAL_UNIT_STR;
		public const String PARSEC_SYN						= PARSEC_STR;
		public const String KILOPARSEC_SYN					= KILOPARSEC_STR;
		public const String EARTH_RADIUS_EQUATORIAL_SYN		= EARTH_RADIUS_EQUATORIAL_STR;
		public const String EARTH_RADIUS_POLAR_SYN			= EARTH_RADIUS_POLAR_STR;
		public const String EARTH_RADIUS_MEAN_SYN			= EARTH_RADIUS_MEAN_STR;
		public const String EARTH_MASS_SYN					= EARTH_MASS_STR;
		public const String EARTH_SEMI_MAJOR_AXIS_SYN		= EARTH_SEMI_MAJOR_AXIS_STR;
		public const String MOON_RADIUS_MEAN_SYN			= MOON_RADIUS_MEAN_STR;
		public const String MOON_MASS_SYN					= MOON_MASS_STR;
		public const String MONN_SEMI_MAJOR_AXIS_SYN		= MONN_SEMI_MAJOR_AXIS_STR;
		public const String SOLAR_RADIUS_SYN				= SOLAR_RADIUS_STR;
		public const String SOLAR_MASS_SYN					= SOLAR_MASS_STR;
		public const String MERCURY_RADIUS_MEAN_SYN			= MERCURY_RADIUS_MEAN_STR;
		public const String MERCURY_MASS_SYN				= MERCURY_MASS_STR;
		public const String MERCURY_SEMI_MAJOR_AXIS_SYN		= MERCURY_SEMI_MAJOR_AXIS_STR;
		public const String VENUS_RADIUS_MEAN_SYN			= VENUS_RADIUS_MEAN_STR;
		public const String VENUS_MASS_SYN					= VENUS_MASS_STR;
		public const String VENUS_SEMI_MAJOR_AXIS_SYN		= VENUS_SEMI_MAJOR_AXIS_STR;
		public const String MARS_RADIUS_MEAN_SYN			= MARS_RADIUS_MEAN_STR;
		public const String MARS_MASS_SYN					= MARS_MASS_STR;
		public const String MARS_SEMI_MAJOR_AXIS_SYN		= MARS_SEMI_MAJOR_AXIS_STR;
		public const String JUPITER_RADIUS_MEAN_SYN			= JUPITER_RADIUS_MEAN_STR;
		public const String JUPITER_MASS_SYN				= JUPITER_MASS_STR;
		public const String JUPITER_SEMI_MAJOR_AXIS_SYN		= JUPITER_SEMI_MAJOR_AXIS_STR;
		public const String SATURN_RADIUS_MEAN_SYN			= SATURN_RADIUS_MEAN_STR;
		public const String SATURN_MASS_SYN					= SATURN_MASS_STR;
		public const String SATURN_SEMI_MAJOR_AXIS_SYN		= SATURN_SEMI_MAJOR_AXIS_STR;
		public const String URANUS_RADIUS_MEAN_SYN			= URANUS_RADIUS_MEAN_STR;
		public const String URANUS_MASS_SYN					= URANUS_MASS_STR;
		public const String URANUS_SEMI_MAJOR_AXIS_SYN		= URANUS_SEMI_MAJOR_AXIS_STR;
		public const String NEPTUNE_RADIUS_MEAN_SYN			= NEPTUNE_RADIUS_MEAN_STR;
		public const String NEPTUNE_MASS_SYN				= NEPTUNE_MASS_STR;
		public const String NEPTUNE_SEMI_MAJOR_AXIS_SYN		= NEPTUNE_SEMI_MAJOR_AXIS_STR;
		/* boolean values */
		public const String TRUE_SYN						= TRUE_STR;
		public const String FALSE_SYN						= FALSE_STR;
		/* other values */
		public const String NAN_SYN							= NAN_STR;
		/*
		 * ConstantValue - tokens description.
		 */
		public const String PI_DESC 						= "Pi, Archimedes' constant or Ludolph's number";
		public const String EULER_DESC 						= "Napier's constant, or Euler's number, base of Natural logarithm";
		public const String EULER_MASCHERONI_DESC			= "Euler-Mascheroni constant";
		public const String GOLDEN_RATIO_DESC				= "Golden ratio";
		public const String PLASTIC_DESC					= "Plastic constant";
		public const String EMBREE_TREFETHEN_DESC			= "Embree-Trefethen constant";
		public const String FEIGENBAUM_DELTA_DESC			= "Feigenbaum constant alfa";
		public const String FEIGENBAUM_ALFA_DESC			= "Feigenbaum constant delta";
		public const String TWIN_PRIME_DESC					= "Twin prime constant";
		public const String MEISSEL_MERTEENS_DESC			= "Meissel-Mertens constant";
		public const String BRAUN_TWIN_PRIME_DESC			= "Brun's constant for twin primes";
		public const String BRAUN_PRIME_QUADR_DESC			= "Brun's constant for prime quadruplets";
		public const String BRUIJN_NEWMAN_DESC				= "de Bruijn-Newman constant";
		public const String CATALAN_DESC					= "Catalan's constant";
		public const String LANDAU_RAMANUJAN_DESC			= "Landau-Ramanujan constant";
		public const String VISWANATH_DESC					= "Viswanath's constant";
		public const String LEGENDRE_DESC					= "Legendre's constant";
		public const String RAMANUJAN_SOLDNER_DESC			= "Ramanujan-Soldner constant";
		public const String ERDOS_BORWEIN_DESC				= "Erdos-Borwein constant";
		public const String BERNSTEIN_DESC					= "Bernstein's constant";
		public const String GAUSS_KUZMIN_WIRSING_DESC		= "Gauss-Kuzmin-Wirsing constant";
		public const String HAFNER_SARNAK_MCCURLEY_DESC		= "Hafner-Sarnak-McCurley constant";
		public const String GOLOMB_DICKMAN_DESC				= "Golomb-Dickman constant";
		public const String CAHEN_DESC						= "Cahen's constant";
		public const String LAPLACE_LIMIT_DESC				= "Laplace limit";
		public const String ALLADI_GRINSTEAD_DESC			= "Alladi-Grinstead constant";
		public const String LENGYEL_DESC					= "Lengyel's constant";
		public const String LEVY_DESC						= "Levy's constant";
		public const String APERY_DESC						= "Apery's constant";
		public const String MILLS_DESC						= "Mills' constant";
		public const String BACKHOUSE_DESC					= "Backhouse's constant";
		public const String PORTER_DESC						= "Porter's constant";
		public const String LIEB_QUARE_ICE_DESC				= "Lieb's square ice constant";
		public const String NIVEN_DESC						= "Niven's constant";
		public const String SIERPINSKI_DESC					= "Sierpinski's constant";
		public const String KHINCHIN_DESC					= "Khinchin's constant";
		public const String FRANSEN_ROBINSON_DESC			= "Fransen-Robinson constant";
		public const String LANDAU_DESC						= "Landau's constant";
		public const String PARABOLIC_DESC					= "Parabolic constant";
		public const String OMEGA_DESC						= "Omega constant";
		public const String MRB_DESC						= "MRB constant";
		public const String LI2_DESC						= "li(2) - Logarithmic integral function at x=2";
		public const String GOMPERTZ_DESC					= "Gompertz constant";
		/* Physical Constants */
		public const String LIGHT_SPEED_DESC				= "<Physical Constant> Light speed in vacuum [m/s] (m=1, s=1)";
		public const String GRAVITATIONAL_CONSTANT_DESC		= "<Physical Constant> Gravitational constant (m=1, kg=1, s=1)]";
		public const String GRAVIT_ACC_EARTH_DESC			= "<Physical Constant> Gravitational acceleration on Earth [m/s^2] (m=1, s=1)";
		public const String PLANCK_CONSTANT_DESC			= "<Physical Constant> Planck constant (m=1, kg=1, s=1)";
		public const String PLANCK_CONSTANT_REDUCED_DESC	= "<Physical Constant> Reduced Planck constant / Dirac constant (m=1, kg=1, s=1)]";
		public const String PLANCK_LENGTH_DESC				= "<Physical Constant> Planck length [m] (m=1)";
		public const String PLANCK_MASS_DESC				= "<Physical Constant> Planck mass [kg] (kg=1)";
		public const String PLANCK_TIME_DESC				= "<Physical Constant> Planck time [s] (s=1)";
		/* Astronomical Constants */
		public const String LIGHT_YEAR_DESC					= "<Astronomical Constant> Light year [m] (m=1)";
		public const String ASTRONOMICAL_UNIT_DESC			= "<Astronomical Constant> Astronomical unit [m] (m=1)";
		public const String PARSEC_DESC						= "<Astronomical Constant> Parsec [m] (m=1)";
		public const String KILOPARSEC_DESC					= "<Astronomical Constant> Kiloparsec [m] (m=1)";
		public const String EARTH_RADIUS_EQUATORIAL_DESC	= "<Astronomical Constant> Earth equatorial radius [m] (m=1)";
		public const String EARTH_RADIUS_POLAR_DESC			= "<Astronomical Constant> Earth polar radius [m] (m=1)";
		public const String EARTH_RADIUS_MEAN_DESC			= "<Astronomical Constant> Earth mean radius (m=1)";
		public const String EARTH_MASS_DESC					= "<Astronomical Constant> Earth mass [kg] (kg=1)";
		public const String EARTH_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Earth-Sun distance - semi major axis [m] (m=1)";
		public const String MOON_RADIUS_MEAN_DESC			= "<Astronomical Constant> Moon mean radius [m] (m=1)";
		public const String MOON_MASS_DESC					= "<Astronomical Constant> Moon mass [kg] (kg=1)";
		public const String MONN_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Moon-Earth distance - semi major axis [m] (m=1)";
		public const String SOLAR_RADIUS_DESC				= "<Astronomical Constant> Solar mean radius [m] (m=1)";
		public const String SOLAR_MASS_DESC					= "<Astronomical Constant> Solar mass [kg] (kg=1)";
		public const String MERCURY_RADIUS_MEAN_DESC		= "<Astronomical Constant> Mercury mean radius [m] (m=1)";
		public const String MERCURY_MASS_DESC				= "<Astronomical Constant> Mercury mass [kg] (kg=1)";
		public const String MERCURY_SEMI_MAJOR_AXIS_DESC	= "<Astronomical Constant> Mercury-Sun distance - semi major axis [m] (m=1)";
		public const String VENUS_RADIUS_MEAN_DESC			= "<Astronomical Constant> Venus mean radius [m] (m=1)";
		public const String VENUS_MASS_DESC					= "<Astronomical Constant> Venus mass [kg] (kg=1)";
		public const String VENUS_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Venus-Sun distance - semi major axis [m] (m=1)";
		public const String MARS_RADIUS_MEAN_DESC			= "<Astronomical Constant> Mars mean radius [m] (m=1)";
		public const String MARS_MASS_DESC					= "<Astronomical Constant> Mars mass [kg] (kg=1)";
		public const String MARS_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Mars-Sun distance - semi major axis [m] (m=1)";
		public const String JUPITER_RADIUS_MEAN_DESC		= "<Astronomical Constant> Jupiter mean radius [m] (m=1)";
		public const String JUPITER_MASS_DESC				= "<Astronomical Constant> Jupiter mass [kg] (kg=1)";
		public const String JUPITER_SEMI_MAJOR_AXIS_DESC	= "<Astronomical Constant> Jupiter-Sun distance - semi major axis [m] (m=1)";
		public const String SATURN_RADIUS_MEAN_DESC			= "<Astronomical Constant> Saturn mean radius [m] (m=1)";
		public const String SATURN_MASS_DESC				= "<Astronomical Constant> Saturn mass [kg] (kg=1)";
		public const String SATURN_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Saturn-Sun distance - semi major axis [m] (m=1)";
		public const String URANUS_RADIUS_MEAN_DESC			= "<Astronomical Constant> Uranus mean radius [m] (m=1)";
		public const String URANUS_MASS_DESC				= "<Astronomical Constant> Uranus mass [kg] (kg=1)";
		public const String URANUS_SEMI_MAJOR_AXIS_DESC		= "<Astronomical Constant> Uranus-Sun distance - semi major axis [m] (m=1)";
		public const String NEPTUNE_RADIUS_MEAN_DESC		= "<Astronomical Constant> Neptune mean radius [m] (m=1)";
		public const String NEPTUNE_MASS_DESC				= "<Astronomical Constant> Neptune mass [kg] (kg=1)";
		public const String NEPTUNE_SEMI_MAJOR_AXIS_DESC	= "<Astronomical Constant> Neptune-Sun distance - semi major axis [m] (m=1)";
		/* boolean values */
		public const String TRUE_DESC						= "Boolean True represented as double, [true] = 1";
		public const String FALSE_DESC						= "Boolean False represented as double, [false] = 0";
		/* other values */
		public const String NAN_DESC						= "Not-a-Number";

		/*
		 * ConstantValue - since.
		 */
		public const String PI_SINCE						= mXparser.NAMEv10;
		public const String EULER_SINCE						= mXparser.NAMEv10;
		public const String EULER_MASCHERONI_SINCE			= mXparser.NAMEv10;
		public const String GOLDEN_RATIO_SINCE				= mXparser.NAMEv10;
		public const String PLASTIC_SINCE					= mXparser.NAMEv10;
		public const String EMBREE_TREFETHEN_SINCE			= mXparser.NAMEv10;
		public const String FEIGENBAUM_DELTA_SINCE			= mXparser.NAMEv10;
		public const String FEIGENBAUM_ALFA_SINCE			= mXparser.NAMEv10;
		public const String TWIN_PRIME_SINCE				= mXparser.NAMEv10;
		public const String MEISSEL_MERTEENS_SINCE			= mXparser.NAMEv10;
		public const String BRAUN_TWIN_PRIME_SINCE			= mXparser.NAMEv10;
		public const String BRAUN_PRIME_QUADR_SINCE			= mXparser.NAMEv10;
		public const String BRUIJN_NEWMAN_SINCE				= mXparser.NAMEv10;
		public const String CATALAN_SINCE					= mXparser.NAMEv10;
		public const String LANDAU_RAMANUJAN_SINCE			= mXparser.NAMEv10;
		public const String VISWANATH_SINCE					= mXparser.NAMEv10;
		public const String LEGENDRE_SINCE					= mXparser.NAMEv10;
		public const String RAMANUJAN_SOLDNER_SINCE			= mXparser.NAMEv10;
		public const String ERDOS_BORWEIN_SINCE				= mXparser.NAMEv10;
		public const String BERNSTEIN_SINCE					= mXparser.NAMEv10;
		public const String GAUSS_KUZMIN_WIRSING_SINCE		= mXparser.NAMEv10;
		public const String HAFNER_SARNAK_MCCURLEY_SINCE	= mXparser.NAMEv10;
		public const String GOLOMB_DICKMAN_SINCE			= mXparser.NAMEv10;
		public const String CAHEN_SINCE						= mXparser.NAMEv10;
		public const String LAPLACE_LIMIT_SINCE				= mXparser.NAMEv10;
		public const String ALLADI_GRINSTEAD_SINCE			= mXparser.NAMEv10;
		public const String LENGYEL_SINCE					= mXparser.NAMEv10;
		public const String LEVY_SINCE						= mXparser.NAMEv10;
		public const String APERY_SINCE						= mXparser.NAMEv10;
		public const String MILLS_SINCE						= mXparser.NAMEv10;
		public const String BACKHOUSE_SINCE					= mXparser.NAMEv10;
		public const String PORTER_SINCE					= mXparser.NAMEv10;
		public const String LIEB_QUARE_ICE_SINCE			= mXparser.NAMEv10;
		public const String NIVEN_SINCE						= mXparser.NAMEv10;
		public const String SIERPINSKI_SINCE				= mXparser.NAMEv10;
		public const String KHINCHIN_SINCE					= mXparser.NAMEv10;
		public const String FRANSEN_ROBINSON_SINCE			= mXparser.NAMEv10;
		public const String LANDAU_SINCE					= mXparser.NAMEv10;
		public const String PARABOLIC_SINCE					= mXparser.NAMEv10;
		public const String OMEGA_SINCE						= mXparser.NAMEv10;
		public const String MRB_SINCE						= mXparser.NAMEv10;
		public const String LI2_SINCE						= mXparser.NAMEv23;
		public const String GOMPERTZ_SINCE					= mXparser.NAMEv23;
		/* Physical Constants */
		public const String LIGHT_SPEED_SINCE				= mXparser.NAMEv40;
		public const String GRAVITATIONAL_CONSTANT_SINCE	= mXparser.NAMEv40;
		public const String GRAVIT_ACC_EARTH_SINCE			= mXparser.NAMEv40;
		public const String PLANCK_CONSTANT_SINCE			= mXparser.NAMEv40;
		public const String PLANCK_CONSTANT_REDUCED_SINCE	= mXparser.NAMEv40;
		public const String PLANCK_LENGTH_SINCE				= mXparser.NAMEv40;
		public const String PLANCK_MASS_SINCE				= mXparser.NAMEv40;
		public const String PLANCK_TIME_SINCE				= mXparser.NAMEv40;
		/* AstronomicalConstants */
		public const String LIGHT_YEAR_SINCE				= mXparser.NAMEv40;
		public const String ASTRONOMICAL_UNIT_SINCE			= mXparser.NAMEv40;
		public const String PARSEC_SINCE					= mXparser.NAMEv40;
		public const String KILOPARSEC_SINCE				= mXparser.NAMEv40;
		public const String EARTH_RADIUS_EQUATORIAL_SINCE	= mXparser.NAMEv40;
		public const String EARTH_RADIUS_POLAR_SINCE		= mXparser.NAMEv40;
		public const String EARTH_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
		public const String EARTH_MASS_SINCE				= mXparser.NAMEv40;
		public const String EARTH_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
		public const String MOON_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
		public const String MOON_MASS_SINCE					= mXparser.NAMEv40;
		public const String MONN_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
		public const String SOLAR_RADIUS_SINCE				= mXparser.NAMEv40;
		public const String SOLAR_MASS_SINCE				= mXparser.NAMEv40;
		public const String MERCURY_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String MERCURY_MASS_SINCE				= mXparser.NAMEv40;
		public const String MERCURY_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		public const String VENUS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
		public const String VENUS_MASS_SINCE				= mXparser.NAMEv40;
		public const String VENUS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
		public const String MARS_RADIUS_MEAN_SINCE			= mXparser.NAMEv40;
		public const String MARS_MASS_SINCE					= mXparser.NAMEv40;
		public const String MARS_SEMI_MAJOR_AXIS_SINCE		= mXparser.NAMEv40;
		public const String JUPITER_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String JUPITER_MASS_SINCE				= mXparser.NAMEv40;
		public const String JUPITER_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		public const String SATURN_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String SATURN_MASS_SINCE				= mXparser.NAMEv40;
		public const String SATURN_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		public const String URANUS_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String URANUS_MASS_SINCE				= mXparser.NAMEv40;
		public const String URANUS_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		public const String NEPTUNE_RADIUS_MEAN_SINCE		= mXparser.NAMEv40;
		public const String NEPTUNE_MASS_SINCE				= mXparser.NAMEv40;
		public const String NEPTUNE_SEMI_MAJOR_AXIS_SINCE	= mXparser.NAMEv40;
		/* boolean values */
		public const String TRUE_SINCE						= mXparser.NAMEv41;
		public const String FALSE_SINCE						= mXparser.NAMEv41;
		/* other values */
		public const String NAN_SINCE						= mXparser.NAMEv41;
	}
}
