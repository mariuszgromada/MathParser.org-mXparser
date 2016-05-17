/*
 * @(#)FunctionVariadic.java        3.0.0    2016-05-07
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
 * @version        3.0.0
 */
public final class FunctionVariadic {
	/*
	 * BooleanOperator - token type id.
	 */
	public static final int TYPE_ID 					= 7;
	public static final String TYPE_DESC				= "Variadic Function";
	/*
	 * BooleanOperator - tokens id.
	 */
	public static final int IFF_ID 						= 1;
	public static final int MIN_ID 						= 2;
	public static final int MAX_ID 						= 3;
	public static final int CONT_FRAC_ID				= 4;
	public static final int CONT_POL_ID					= 5;
	public static final int GCD_ID						= 6;
	public static final int LCM_ID						= 7;
	public static final int SUM_ID						= 8;
	public static final int PROD_ID						= 9;
	public static final int AVG_ID						= 10;
	public static final int VAR_ID						= 11;
	public static final int STD_ID						= 12;
	public static final int RND_LIST_ID					= 13;
	/*
	 * BooleanOperator - tokens key words.
	 */
	public static final String IFF_STR 					= "iff";
	public static final String MIN_STR					= "min";
	public static final String MAX_STR					= "max";
	public static final String CONT_FRAC_STR			= "ConFrac";
	public static final String CONT_POL_STR				= "ConPol";
	public static final String GCD_STR					= "gcd";
	public static final String LCM_STR					= "lcm";
	public static final String SUM_STR					= "add";
	public static final String PROD_STR					= "multi";
	public static final String AVG_STR					= "mean";
	public static final String VAR_STR					= "var";
	public static final String STD_STR					= "std";
	public static final String RND_LIST_STR				= "rList";
	/*
	 * BooleanOperator - tokens description.
	 */
	public static final String IFF_DESC 				= "if function ( iff(con_1, if_true_1_exp, ..., con_n, if_true_n_exp) )";
	public static final String MIN_DESC 				= "Minimum function: min(a,b,c,...)";
	public static final String MAX_DESC 				= "Maximum function: max(a,b,c,...)";
	public static final String CONT_FRAC_DESC			= "Continued fraction: ConFrac(a,b,c,...)";
	public static final String CONT_POL_DESC			= "Continued polynomial: ConPol(a,b,c,...)";
	public static final String GCD_DESC					= "Greatest common divisor: gcd(a,b,c,...)";
	public static final String LCM_DESC					= "Least common multiple: lcm(a,b,c,...)";
	public static final String SUM_DESC					= "(2.4) Summation operator add(a1,a2,a3,...,an)";
	public static final String PROD_DESC				= "(2.4) Multiplication multi(a1,a2,a3,...,an)";
	public static final String AVG_DESC					= "(2.4) Mean / average value mean(a1,a2,a3,...,an)";
	public static final String VAR_DESC					= "(2.4) Bias-corrected sample variance var(a1,a2,a3,...,an)";
	public static final String STD_DESC					= "(2.4) Bias-corrected sample standard deviation std(a1,a2,a3,...,an)";
	public static final String RND_LIST_DESC			= "(3.0) Random number from given list of numbers rList(a1,a2,a3,...,an)";
}

