/*
 * @(#)FunctionVariadic.cs        4.1.0    2017-06-13
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
	 * Variadic functions (n parameters)- mXparser tokens definition.
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
	public sealed class FunctionVariadic {
		/*
		 * BooleanOperator - token type id.
		 */
		public const int TYPE_ID					= 7;
		public const String TYPE_DESC				= "Variadic Function";
		/*
		 * BooleanOperator - tokens id.
		 */
		public const int IFF_ID						= 1;
		public const int MIN_ID						= 2;
		public const int MAX_ID						= 3;
		public const int CONT_FRAC_ID				= 4;
		public const int CONT_POL_ID				= 5;
		public const int GCD_ID						= 6;
		public const int LCM_ID						= 7;
		public const int SUM_ID						= 8;
		public const int PROD_ID					= 9;
		public const int AVG_ID						= 10;
		public const int VAR_ID						= 11;
		public const int STD_ID						= 12;
		public const int RND_LIST_ID				= 13;
		public const int COALESCE_ID				= 14;
		public const int OR_ID						= 15;
		public const int AND_ID						= 16;
		public const int XOR_ID						= 17;
		public const int ARGMIN_ID					= 18;
		public const int ARGMAX_ID					= 19;
		public const int MEDIAN_ID					= 20;
		public const int MODE_ID					= 21;
		public const int BASE_ID					= 22;
		public const int NDIST_ID					= 23;
		/*
		 * BooleanOperator - tokens key words.
		 */
		public const String IFF_STR 				= "iff";
		public const String MIN_STR					= "min";
		public const String MAX_STR					= "max";
		public const String CONT_FRAC_STR			= "ConFrac";
		public const String CONT_POL_STR			= "ConPol";
		public const String GCD_STR					= "gcd";
		public const String LCM_STR					= "lcm";
		public const String SUM_STR					= "add";
		public const String PROD_STR				= "multi";
		public const String AVG_STR					= "mean";
		public const String VAR_STR					= "var";
		public const String STD_STR					= "std";
		public const String RND_LIST_STR			= "rList";
		public const String COALESCE_STR			= "coalesce";
		public const String OR_STR					= "or";
		public const String AND_STR					= "and";
		public const String XOR_STR					= "xor";
		public const String ARGMIN_STR				= "argmin";
		public const String ARGMAX_STR				= "argmax";
		public const String MEDIAN_STR				= "med";
		public const String MODE_STR				= "mode";
		public const String BASE_STR				= "base";
		public const String NDIST_STR				= "ndist";
		/*
		 * FunctionVariadic - syntax.
		 */
		public const String IFF_SYN 				= "iff( cond-1, expr-1; ... ; cond-n, expr-n )";
		public const String MIN_SYN					= "min(a1, ..., an)";
		public const String MAX_SYN					= "max(a1, ..., an)";
		public const String CONT_FRAC_SYN			= "ConFrac(a1, ..., an)";
		public const String CONT_POL_SYN			= "ConPol(a1, ..., an)";
		public const String GCD_SYN					= "gcd(a1, ..., an)";
		public const String LCM_SYN					= "lcm(a1, ..., an)";
		public const String SUM_SYN					= "add(a1, ..., an)";
		public const String PROD_SYN				= "multi(a1, ..., an)";
		public const String AVG_SYN					= "mean(a1, ..., an)";
		public const String VAR_SYN					= "var(a1, ..., an)";
		public const String STD_SYN					= "std(a1, ..., an)";
		public const String RND_LIST_SYN			= "rList(a1, ..., an)";
		public const String COALESCE_SYN			= "coalesce(a1, ..., an)";
		public const String OR_SYN					= "or(a1, ..., an)";
		public const String AND_SYN					= "and(a1, ..., an)";
		public const String XOR_SYN					= "xor(a1, ..., an)";
		public const String ARGMIN_SYN				= "argmin(a1, ..., an)";
		public const String ARGMAX_SYN				= "argmax(a1, ..., an)";
		public const String MEDIAN_SYN				= "med(a1, ..., an)";
		public const String MODE_SYN				= "mode(a1, ..., an)";
		public const String BASE_SYN				= "base(b, d1, ..., dn)";
		public const String NDIST_SYN				= "ndist(v1, ..., vn)";
		/*
		 * FunctionVariadic - tokens description.
		 */
		public const String IFF_DESC 				= "If function";
		public const String MIN_DESC 				= "Minimum function";
		public const String MAX_DESC 				= "Maximum function";
		public const String CONT_FRAC_DESC			= "Continued fraction";
		public const String CONT_POL_DESC			= "Continued polynomial";
		public const String GCD_DESC				= "Greatest common divisor";
		public const String LCM_DESC				= "Least common multiple";
		public const String SUM_DESC				= "Summation operator";
		public const String PROD_DESC				= "Multiplication";
		public const String AVG_DESC				= "Mean / average value";
		public const String VAR_DESC				= "Bias-corrected sample variance";
		public const String STD_DESC				= "Bias-corrected sample standard deviation";
		public const String RND_LIST_DESC			= "Random number from given list of numbers";
		public const String COALESCE_DESC			= "Returns the first non-NaN value";
		public const String OR_DESC					= "Logical disjunction (OR) - variadic";
		public const String AND_DESC				= "Logical conjunction (AND) - variadic";
		public const String XOR_DESC				= "Exclusive or (XOR) - variadic";
		public const String ARGMIN_DESC				= "Arguments / indices of the minima";
		public const String ARGMAX_DESC				= "Arguments / indices of the maxima";
		public const String MEDIAN_DESC				= "The sample median";
		public const String MODE_DESC				= "Mode - the value that appears most often";
		public const String BASE_DESC				= "Returns number in given numeral system base represented by list of digits";
		public const String NDIST_DESC				= "Number of distinct values";
		/*
		 * FunctionVariadic - since.
		 */
		public const String IFF_SINCE 				= mXparser.NAMEv10;
		public const String MIN_SINCE 				= mXparser.NAMEv10;
		public const String MAX_SINCE 				= mXparser.NAMEv10;
		public const String CONT_FRAC_SINCE			= mXparser.NAMEv10;
		public const String CONT_POL_SINCE			= mXparser.NAMEv10;
		public const String GCD_SINCE				= mXparser.NAMEv10;
		public const String LCM_SINCE				= mXparser.NAMEv10;
		public const String SUM_SINCE				= mXparser.NAMEv24;
		public const String PROD_SINCE				= mXparser.NAMEv24;
		public const String AVG_SINCE				= mXparser.NAMEv24;
		public const String VAR_SINCE				= mXparser.NAMEv24;
		public const String STD_SINCE				= mXparser.NAMEv24;
		public const String RND_LIST_SINCE			= mXparser.NAMEv30;
		public const String COALESCE_SINCE			= mXparser.NAMEv41;
		public const String OR_SINCE				= mXparser.NAMEv41;
		public const String AND_SINCE				= mXparser.NAMEv41;
		public const String XOR_SINCE				= mXparser.NAMEv41;
		public const String ARGMIN_SINCE			= mXparser.NAMEv41;
		public const String ARGMAX_SINCE			= mXparser.NAMEv41;
		public const String MEDIAN_SINCE			= mXparser.NAMEv41;
		public const String MODE_SINCE				= mXparser.NAMEv41;
		public const String BASE_SINCE				= mXparser.NAMEv41;
		public const String NDIST_SINCE				= mXparser.NAMEv41;
	}
}
