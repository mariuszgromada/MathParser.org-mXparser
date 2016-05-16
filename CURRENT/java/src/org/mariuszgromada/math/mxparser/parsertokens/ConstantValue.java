/*
 * @(#)ConstantValue.java        3.0.0    2016-05-07
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
package org.mariuszgromada.math.mxparser.parsertokens;

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
public final class ConstantValue {
	/*
	 * ConstantValue - token type id.
	 */
	public static final int TYPE_ID 							= 9;
	public static final String TYPE_DESC						= "Constant Value";
	/*
	 * ConstantValue - tokens id.
	 */
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
	public static final int NaN									= -1;
	/*
	 * ConstantValue - tokens key words.
	 */
	public static final String PI_STR 							= "pi";
	public static final String EULER_STR 						= "e";
	public static final String EULER_MASCHERONI_STR				= "[g]";
	public static final String GOLDEN_RATIO_STR					= "[p]";
	public static final String PLASTIC_STR						= "[r]";
	public static final String EMBREE_TREFETHEN_STR				= "[B*]";
	public static final String FEIGENBAUM_DELTA_STR				= "[D]";
	public static final String FEIGENBAUM_ALFA_STR				= "[a]";
	public static final String TWIN_PRIME_STR					= "[C2]";
	public static final String MEISSEL_MERTEENS_STR				= "[M1]";
	public static final String BRAUN_TWIN_PRIME_STR				= "[B2]";
	public static final String BRAUN_PRIME_QUADR_STR			= "[B4]";
	public static final String BRUIJN_NEWMAN_STR				= "[L]";
	public static final String CATALAN_STR						= "[K]";
	public static final String LANDAU_RAMANUJAN_STR				= "[K*]";
	public static final String VISWANATH_STR					= "[K.]";
	public static final String LEGENDRE_STR						= "[B'L]";
	public static final String RAMANUJAN_SOLDNER_STR			= "[m]";
	public static final String ERDOS_BORWEIN_STR				= "[EB]";
	public static final String BERNSTEIN_STR					= "[B]";
	public static final String GAUSS_KUZMIN_WIRSING_STR			= "[l]";
	public static final String HAFNER_SARNAK_MCCURLEY_STR		= "[s]";
	public static final String GOLOMB_DICKMAN_STR				= "[lm]";
	public static final String CAHEN_STR						= "[C]";
	public static final String LAPLACE_LIMIT_STR				= "[Ll]";
	public static final String ALLADI_GRINSTEAD_STR				= "[AG]";
	public static final String LENGYEL_STR						= "[L*]";
	public static final String LEVY_STR							= "[L.]";
	public static final String APERY_STR						= "[Dz3]";
	public static final String MILLS_STR						= "[T]";
	public static final String BACKHOUSE_STR					= "[Bh]";
	public static final String PORTER_STR						= "[Pt]";
	public static final String LIEB_QUARE_ICE_STR				= "[L2]";
	public static final String NIVEN_STR						= "[Nv]";
	public static final String SIERPINSKI_STR					= "[Ks]";
	public static final String KHINCHIN_STR						= "[Kh]";
	public static final String FRANSEN_ROBINSON_STR				= "[F]";
	public static final String LANDAU_STR						= "[La]";
	public static final String PARABOLIC_STR					= "[P2]";
	public static final String OMEGA_STR						= "[O]";
	public static final String MRB_STR							= "[M]";
	public static final String LI2_STR							= "[li2]";
	public static final String GOMPERTZ_STR						= "[G]";
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
	public static final String LI2_DESC							= "(2.3) li(2) - logarithmic integral function at x=2";
	public static final String GOMPERTZ_DESC					= "(2.3) Gompertz constant";
}

