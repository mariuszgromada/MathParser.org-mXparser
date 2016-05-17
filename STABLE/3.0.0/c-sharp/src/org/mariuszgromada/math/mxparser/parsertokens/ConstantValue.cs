/*
 * @(#)ConstantValue.cs        3.0.0    2016-05-07
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2016 MARIUSZ GROMADA. All rights reserved.
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
	 * @version        3.0.0
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
		public const int NaN								= -1;
		/*
		 * ConstantValue - tokens key words.
		 */
		public const String PI_STR 							= "pi";
		public const String EULER_STR 						= "e";
		public const String EULER_MASCHERONI_STR			= "[g]";
		public const String GOLDEN_RATIO_STR				= "[p]";
		public const String PLASTIC_STR						= "[r]";
		public const String EMBREE_TREFETHEN_STR			= "[B*]";
		public const String FEIGENBAUM_DELTA_STR			= "[D]";
		public const String FEIGENBAUM_ALFA_STR				= "[a]";
		public const String TWIN_PRIME_STR					= "[C2]";
		public const String MEISSEL_MERTEENS_STR			= "[M1]";
		public const String BRAUN_TWIN_PRIME_STR			= "[B2]";
		public const String BRAUN_PRIME_QUADR_STR			= "[B4]";
		public const String BRUIJN_NEWMAN_STR				= "[L]";
		public const String CATALAN_STR						= "[K]";
		public const String LANDAU_RAMANUJAN_STR			= "[K*]";
		public const String VISWANATH_STR					= "[K.]";
		public const String LEGENDRE_STR					= "[B'L]";
		public const String RAMANUJAN_SOLDNER_STR			= "[m]";
		public const String ERDOS_BORWEIN_STR				= "[EB]";
		public const String BERNSTEIN_STR					= "[B]";
		public const String GAUSS_KUZMIN_WIRSING_STR		= "[l]";
		public const String HAFNER_SARNAK_MCCURLEY_STR		= "[s]";
		public const String GOLOMB_DICKMAN_STR				= "[lm]";
		public const String CAHEN_STR						= "[C]";
		public const String LAPLACE_LIMIT_STR				= "[Ll]";
		public const String ALLADI_GRINSTEAD_STR			= "[AG]";
		public const String LENGYEL_STR						= "[L*]";
		public const String LEVY_STR						= "[L.]";
		public const String APERY_STR						= "[Dz3]";
		public const String MILLS_STR						= "[T]";
		public const String BACKHOUSE_STR					= "[Bh]";
		public const String PORTER_STR						= "[Pt]";
		public const String LIEB_QUARE_ICE_STR				= "[L2]";
		public const String NIVEN_STR						= "[Nv]";
		public const String SIERPINSKI_STR					= "[Ks]";
		public const String KHINCHIN_STR					= "[Kh]";
		public const String FRANSEN_ROBINSON_STR			= "[F]";
		public const String LANDAU_STR						= "[La]";
		public const String PARABOLIC_STR					= "[P2]";
		public const String OMEGA_STR						= "[O]";
		public const String MRB_STR							= "[M]";
		public const String LI2_STR							= "[li2]";
		public const String GOMPERTZ_STR					= "[G]";
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
		public const String LI2_DESC						= "(2.3) li(2) - logarithmic integral function at x=2";
		public const String GOMPERTZ_DESC					= "(2.3) Gompertz constant";
	}
}
