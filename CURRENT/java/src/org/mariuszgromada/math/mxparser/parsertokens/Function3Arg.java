/*
 * @(#)Function3Arg.java        3.0.0    2016-05-07
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
 * Functions with 3 arguments - mXparser tokens definition.
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
public final class Function3Arg {
	/*
	 * 3-args Function - token type id.
	 */
	public static final int TYPE_ID 						= 6;
	public static final String TYPE_DESC					= "3-args Function";
	/*
	 * 3-args Function - tokens id.
	 */
	public static final int IF_CONDITION_ID					= 1;
	public static final int IF_ID 							= 2;
	public static final int CHI_ab_ID						= 3;
	public static final int CHI_AB_ID						= 4;
	public static final int CHI_Ab_ID						= 5;
	public static final int CHI_aB_ID						= 6;
	public static final int PDF_UNIFORM_CONT_ID				= 7;
	public static final int CDF_UNIFORM_CONT_ID				= 8;
	public static final int QNT_UNIFORM_CONT_ID				= 9;
	public static final int PDF_NORMAL_ID					= 10;
	public static final int CDF_NORMAL_ID					= 11;
	public static final int QNT_NORMAL_ID					= 12;
	/*
	 * 3-args Function - tokens key words.
	 */
	public static final String IF_STR 						= "if";
	public static final String CHI_ab_STR					= "chi";
	public static final String CHI_AB_STR					= "CHi";
	public static final String CHI_Ab_STR					= "Chi";
	public static final String CHI_aB_STR					= "cHi";
	public static final String PDF_UNIFORM_CONT_STR			= "pUni";
	public static final String CDF_UNIFORM_CONT_STR			= "cUni";
	public static final String QNT_UNIFORM_CONT_STR			= "qUni";
	public static final String PDF_NORMAL_STR				= "pNor";
	public static final String CDF_NORMAL_STR				= "cNor";
	public static final String QNT_NORMAL_STR				= "qNor";
	/*
	 * 3-args Function - tokens description.
	 */
	public static final String IF_DESC 						= "if function ( if(con, if_true, if_false) )";
	public static final String CHI_ab_DESC					= "Characteristic function for x in (a,b) - chi(x, a, b)";
	public static final String CHI_AB_DESC					= "Characteristic function for x in [a,b] - CHi(x, a, b)";
	public static final String CHI_Ab_DESC					= "Characteristic function for x in [a,b) - Chi(x, a, b)";
	public static final String CHI_aB_DESC					= "Characteristic function for x in (a,b] - cHi(x, a, b)";
	public static final String PDF_UNIFORM_CONT_DESC		= "(3.0) Probability distribution function - Uniform continuous distribution U(a,b), usage example: 2 * pUni(x, 2, 10)";
	public static final String CDF_UNIFORM_CONT_DESC		= "(3.0) Cumulative distribution function - Uniform continuous distribution U(a,b), usage example: 2 * cUni(x, 2, 10)";
	public static final String QNT_UNIFORM_CONT_DESC		= "(3.0) Quantile function (inverse cumulative distribution function) - Uniform continuous distribution U(a,b), usage example: 2 * qUni(q, 2, 10)";
	public static final String PDF_NORMAL_DESC				= "(3.0) Probability distribution function - Normal distribution N(m,s) m - mean, s - stddev, usage example: 2 * pNor(x, 1, 2)";
	public static final String CDF_NORMAL_DESC				= "(3.0) Cumulative distribution function - Normal distribution N(m,s) m - mean, s - stddev, usage example: 2 * cNor(x, 1, 2)";
	public static final String QNT_NORMAL_DESC				= "(3.0) Quantile function (inverse cumulative distribution function) - Normal distribution N(m,s) m - mean, s - stddev, usage example: 2 * qNor(q, 1, 2)";
}

