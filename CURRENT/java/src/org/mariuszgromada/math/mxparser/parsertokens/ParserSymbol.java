/*
 * @(#)ParserSymbol.java        4.1.0    2017-05-14
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
 * Parser symbols - mXparser tokens definition.
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
public final class ParserSymbol {
	/*
	 * ParserSymbol - reg exp patterns.
	 */
	public static final String DIGIT					= "[0-9]";
	public static final String DIGIT_B1					= "1";
	public static final String DIGIT_B2					= "[01]";
	public static final String DIGIT_B3					= "[0-2]";
	public static final String DIGIT_B4					= "[0-3]";
	public static final String DIGIT_B5					= "[0-4]";
	public static final String DIGIT_B6					= "[0-5]";
	public static final String DIGIT_B7					= "[0-6]";
	public static final String DIGIT_B8					= "[0-7]";
	public static final String DIGIT_B9					= "[0-8]";
	public static final String DIGIT_B10				= "[0-9]";
	public static final String DIGIT_B11				= "[0-9aA]";
	public static final String DIGIT_B12				= "[0-9a-bA-B]";
	public static final String DIGIT_B13				= "[0-9a-cA-C]";
	public static final String DIGIT_B14				= "[0-9a-dA-D]";
	public static final String DIGIT_B15				= "[0-9a-eA-E]";
	public static final String DIGIT_B16				= "[0-9a-fA-F]";
	public static final String DIGIT_B17				= "[0-9a-gA-G]";
	public static final String DIGIT_B18				= "[0-9a-hA-H]";
	public static final String DIGIT_B19				= "[0-9a-iA-I]";
	public static final String DIGIT_B20				= "[0-9a-jA-J]";
	public static final String DIGIT_B21				= "[0-9a-kA-K]";
	public static final String DIGIT_B22				= "[0-9a-lA-L]";
	public static final String DIGIT_B23				= "[0-9a-mA-M]";
	public static final String DIGIT_B24				= "[0-9a-nA-N]";
	public static final String DIGIT_B25				= "[0-9a-oA-O]";
	public static final String DIGIT_B26				= "[0-9a-pA-P]";
	public static final String DIGIT_B27				= "[0-9a-qA-Q]";
	public static final String DIGIT_B28				= "[0-9a-rA-R]";
	public static final String DIGIT_B29				= "[0-9a-sA-S]";
	public static final String DIGIT_B30				= "[0-9a-tA-T]";
	public static final String DIGIT_B31				= "[0-9a-uA-U]";
	public static final String DIGIT_B32				= "[0-9a-vA-V]";
	public static final String DIGIT_B33				= "[0-9a-wA-W]";
	public static final String DIGIT_B34				= "[0-9a-xA-X]";
	public static final String DIGIT_B35				= "[0-9a-yA-Y]";
	public static final String DIGIT_B36				= "[0-9a-zA-Z]";
	public static final String INTEGER					= DIGIT + "(" + DIGIT + ")*";
	public static final String DEC_FRACT				= INTEGER + "\\." + INTEGER;
	public static final String DEC_FRACT_OR_INT			= "(" + DEC_FRACT + "|" + INTEGER + ")";
	public static final String DECIMAL_REG_EXP			= "[+-]?" + DEC_FRACT_OR_INT + "([eE][+-]?" + INTEGER + ")?";
	public static final String BASE1_REG_EXP			= "[+-]?[bB]1\\.(" + DIGIT_B1 + ")*";
	public static final String BASE2_REG_EXP			= "[+-]?[bB][2]?\\." + DIGIT_B2 + "(" + DIGIT_B2 + ")*";
	public static final String BASE3_REG_EXP			= "[+-]?[bB]3\\." + DIGIT_B3 + "(" + DIGIT_B3 + ")*";
	public static final String BASE4_REG_EXP			= "[+-]?[bB]4\\." + DIGIT_B4 + "(" + DIGIT_B4 + ")*";
	public static final String BASE5_REG_EXP			= "[+-]?[bB]5\\." + DIGIT_B5 + "(" + DIGIT_B5 + ")*";
	public static final String BASE6_REG_EXP			= "[+-]?[bB]6\\." + DIGIT_B6 + "(" + DIGIT_B6 + ")*";
	public static final String BASE7_REG_EXP			= "[+-]?[bB]7\\." + DIGIT_B7 + "(" + DIGIT_B7 + ")*";
	public static final String BASE8_REG_EXP			= "[+-]?([bB]8|[oO])\\." + DIGIT_B8 + "(" + DIGIT_B8 + ")*";
	public static final String BASE9_REG_EXP			= "[+-]?[bB]9\\." + DIGIT_B9 + "(" + DIGIT_B9 + ")*";
	public static final String BASE10_REG_EXP			= "[+-]?[bB]10\\." + DIGIT_B10 + "(" + DIGIT_B10 + ")*";
	public static final String BASE11_REG_EXP			= "[+-]?[bB]11\\." + DIGIT_B11 + "(" + DIGIT_B11 + ")*";
	public static final String BASE12_REG_EXP			= "[+-]?[bB]12\\." + DIGIT_B12 + "(" + DIGIT_B12 + ")*";
	public static final String BASE13_REG_EXP			= "[+-]?[bB]13\\." + DIGIT_B13 + "(" + DIGIT_B13 + ")*";
	public static final String BASE14_REG_EXP			= "[+-]?[bB]14\\." + DIGIT_B14 + "(" + DIGIT_B14 + ")*";
	public static final String BASE15_REG_EXP			= "[+-]?[bB]15\\." + DIGIT_B15 + "(" + DIGIT_B15 + ")*";
	public static final String BASE16_REG_EXP			= "[+-]?([bB]16|[hH])\\." + DIGIT_B16 + "(" + DIGIT_B16 + ")*";
	public static final String BASE17_REG_EXP			= "[+-]?[bB]17\\." + DIGIT_B17 + "(" + DIGIT_B17 + ")*";
	public static final String BASE18_REG_EXP			= "[+-]?[bB]18\\." + DIGIT_B18 + "(" + DIGIT_B18 + ")*";
	public static final String BASE19_REG_EXP			= "[+-]?[bB]19\\." + DIGIT_B19 + "(" + DIGIT_B19 + ")*";
	public static final String BASE20_REG_EXP			= "[+-]?[bB]20\\." + DIGIT_B20 + "(" + DIGIT_B20 + ")*";
	public static final String BASE21_REG_EXP			= "[+-]?[bB]21\\." + DIGIT_B21 + "(" + DIGIT_B21 + ")*";
	public static final String BASE22_REG_EXP			= "[+-]?[bB]22\\." + DIGIT_B22 + "(" + DIGIT_B22 + ")*";
	public static final String BASE23_REG_EXP			= "[+-]?[bB]23\\." + DIGIT_B23 + "(" + DIGIT_B23 + ")*";
	public static final String BASE24_REG_EXP			= "[+-]?[bB]24\\." + DIGIT_B24 + "(" + DIGIT_B24 + ")*";
	public static final String BASE25_REG_EXP			= "[+-]?[bB]25\\." + DIGIT_B25 + "(" + DIGIT_B25 + ")*";
	public static final String BASE26_REG_EXP			= "[+-]?[bB]26\\." + DIGIT_B26 + "(" + DIGIT_B26 + ")*";
	public static final String BASE27_REG_EXP			= "[+-]?[bB]27\\." + DIGIT_B27 + "(" + DIGIT_B27 + ")*";
	public static final String BASE28_REG_EXP			= "[+-]?[bB]28\\." + DIGIT_B28 + "(" + DIGIT_B28 + ")*";
	public static final String BASE29_REG_EXP			= "[+-]?[bB]29\\." + DIGIT_B29 + "(" + DIGIT_B29 + ")*";
	public static final String BASE30_REG_EXP			= "[+-]?[bB]30\\." + DIGIT_B30 + "(" + DIGIT_B30 + ")*";
	public static final String BASE31_REG_EXP			= "[+-]?[bB]31\\." + DIGIT_B31 + "(" + DIGIT_B31 + ")*";
	public static final String BASE32_REG_EXP			= "[+-]?[bB]32\\." + DIGIT_B32 + "(" + DIGIT_B32 + ")*";
	public static final String BASE33_REG_EXP			= "[+-]?[bB]33\\." + DIGIT_B33 + "(" + DIGIT_B33 + ")*";
	public static final String BASE34_REG_EXP			= "[+-]?[bB]34\\." + DIGIT_B34 + "(" + DIGIT_B34 + ")*";
	public static final String BASE35_REG_EXP			= "[+-]?[bB]35\\." + DIGIT_B35 + "(" + DIGIT_B35 + ")*";
	public static final String BASE36_REG_EXP			= "[+-]?[bB]36\\." + DIGIT_B36 + "(" + DIGIT_B36 + ")*";
	public static final String nameOnlyTokenRegExp		= "([a-zA-Z_])+([a-zA-Z0-9_])*";
	public static final String nameTokenRegExp			= "(\\s)*" + nameOnlyTokenRegExp + "(\\s)*";
	public static final String paramsTokenRegeExp		= "(\\s)*\\(" + "(" + nameTokenRegExp + ",(\\s)*)*" + nameTokenRegExp + "\\)(\\s)*";
	public static final String constArgDefStrRegExp		= nameTokenRegExp + "=" + "(\\s)*(.)+(\\s)*";
	public static final String functionDefStrRegExp		= nameTokenRegExp + paramsTokenRegeExp + "=" + "(\\s)*(.)+(\\s)*";
	public static final String function1ArgDefStrRegExp = nameTokenRegExp + "(\\s)*\\(" + nameTokenRegExp + "(\\s)*\\)(\\s)*" + "=" + "(\\s)*(.)+(\\s)*";
	/*
	 * ParserSymbol - token type id.
	 */
	public static final int TYPE_ID 						= 20;
	public static final String TYPE_DESC					= "Parser Symbol";
	/*
	 * ParserSymbol - tokens id.
	 */
	public static final int LEFT_PARENTHESES_ID 			= 1;
	public static final int RIGHT_PARENTHESES_ID			= 2;
	public static final int COMMA_ID						= 3;
	public static final int NUMBER_ID						= 1;
	public static final int NUMBER_TYPE_ID					= 0;
	/*
	 * ParserSymbol - tokens key words.
	 */
	public static final String LEFT_PARENTHESES_STR 		= "(";
	public static final String RIGHT_PARENTHESES_STR		= ")";
	public static final String COMMA_STR					= ",";
	public static final String SEMI_STR						= ";";
	public static final String NUMBER_STR					= "_num_";
	/*
	 * ParserSymbol - syntax.
	 */
	public static final String LEFT_PARENTHESES_SYN 		= "( ... )";
	public static final String RIGHT_PARENTHESES_SYN		= "( ... )";
	public static final String COMMA_SYN					= "(a1, ... ,an)";
	public static final String SEMI_SYN						= "(a1; ... ;an)";
	public static final String NUMBER_SYN					= "1, -2, 001, +001.2e-10, b1.111, b2.1001, b3.12021, b16.af12, ...";
	/*
	 * ParserSymbol - tokens description.
	 */
	public static final String LEFT_PARENTHESES_DESC 		= "Left parentheses";
	public static final String RIGHT_PARENTHESES_DESC		= "Right parentheses";
	public static final String COMMA_DESC					= "Comma (function parameters)";
	public static final String SEMI_DESC					= "Semicolon (function parameters)";
	public static final String NUMBER_DESC					= "Decimal number";
	public static final String NUMBER_REG_DESC				= "Regullar expression for decimal numbers";
	/*
	 * ParserSymbol - since.
	 */
	public static final String LEFT_PARENTHESES_SINCE 		= mXparser.NAMEv10;
	public static final String RIGHT_PARENTHESES_SINCE		= mXparser.NAMEv10;
	public static final String COMMA_SINCE					= mXparser.NAMEv10;
	public static final String SEMI_SINCE					= mXparser.NAMEv10;
	public static final String NUMBER_SINCE					= mXparser.NAMEv10;
}
