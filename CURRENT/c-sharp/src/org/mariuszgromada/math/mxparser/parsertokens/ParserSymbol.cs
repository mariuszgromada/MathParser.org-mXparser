/*
 * @(#)ParserSymbol.cs        4.1.0    2017-05-14
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
	[CLSCompliant(true)]
	public sealed class ParserSymbol {
		/**
		* ParserSymbol - reg exp patterns.
		*/
		/*
		 * ParserSymbol - reg exp patterns.
		 */
		public const String DIGIT						= "[0-9]";
		public const String DIGIT_B1					= "1";
		public const String DIGIT_B2					= "[01]";
		public const String DIGIT_B3					= "[0-2]";
		public const String DIGIT_B4					= "[0-3]";
		public const String DIGIT_B5					= "[0-4]";
		public const String DIGIT_B6					= "[0-5]";
		public const String DIGIT_B7					= "[0-6]";
		public const String DIGIT_B8					= "[0-7]";
		public const String DIGIT_B9					= "[0-8]";
		public const String DIGIT_B10					= "[0-9]";
		public const String DIGIT_B11					= "[0-9aA]";
		public const String DIGIT_B12					= "[0-9a-bA-B]";
		public const String DIGIT_B13					= "[0-9a-cA-C]";
		public const String DIGIT_B14					= "[0-9a-dA-D]";
		public const String DIGIT_B15					= "[0-9a-eA-E]";
		public const String DIGIT_B16					= "[0-9a-fA-F]";
		public const String DIGIT_B17					= "[0-9a-gA-G]";
		public const String DIGIT_B18					= "[0-9a-hA-H]";
		public const String DIGIT_B19					= "[0-9a-iA-I]";
		public const String DIGIT_B20					= "[0-9a-jA-J]";
		public const String DIGIT_B21					= "[0-9a-kA-K]";
		public const String DIGIT_B22					= "[0-9a-lA-L]";
		public const String DIGIT_B23					= "[0-9a-mA-M]";
		public const String DIGIT_B24					= "[0-9a-nA-N]";
		public const String DIGIT_B25					= "[0-9a-oA-O]";
		public const String DIGIT_B26					= "[0-9a-pA-P]";
		public const String DIGIT_B27					= "[0-9a-qA-Q]";
		public const String DIGIT_B28					= "[0-9a-rA-R]";
		public const String DIGIT_B29					= "[0-9a-sA-S]";
		public const String DIGIT_B30					= "[0-9a-tA-T]";
		public const String DIGIT_B31					= "[0-9a-uA-U]";
		public const String DIGIT_B32					= "[0-9a-vA-V]";
		public const String DIGIT_B33					= "[0-9a-wA-W]";
		public const String DIGIT_B34					= "[0-9a-xA-X]";
		public const String DIGIT_B35					= "[0-9a-yA-Y]";
		public const String DIGIT_B36					= "[0-9a-zA-Z]";
		public const String INTEGER						= DIGIT + "(" + DIGIT + ")*";
		public const String DEC_FRACT					= INTEGER + "\\." + INTEGER;
		public const String DEC_FRACT_OR_INT			= "(" + DEC_FRACT + "|" + INTEGER + ")";
		public const String DECIMAL_REG_EXP				= "[+-]?" + DEC_FRACT_OR_INT + "([eE][+-]?" + INTEGER + ")?";
		public const String BASE1_REG_EXP				= "[+-]?[bB]1\\.(" + DIGIT_B1 + ")*";
		public const String BASE2_REG_EXP				= "[+-]?[bB][2]?\\." + DIGIT_B2 + "(" + DIGIT_B2 + ")*";
		public const String BASE3_REG_EXP				= "[+-]?[bB]3\\." + DIGIT_B3 + "(" + DIGIT_B3 + ")*";
		public const String BASE4_REG_EXP				= "[+-]?[bB]4\\." + DIGIT_B4 + "(" + DIGIT_B4 + ")*";
		public const String BASE5_REG_EXP				= "[+-]?[bB]5\\." + DIGIT_B5 + "(" + DIGIT_B5 + ")*";
		public const String BASE6_REG_EXP				= "[+-]?[bB]6\\." + DIGIT_B6 + "(" + DIGIT_B6 + ")*";
		public const String BASE7_REG_EXP				= "[+-]?[bB]7\\." + DIGIT_B7 + "(" + DIGIT_B7 + ")*";
		public const String BASE8_REG_EXP				= "[+-]?([bB]8|[oO])\\." + DIGIT_B8 + "(" + DIGIT_B8 + ")*";
		public const String BASE9_REG_EXP				= "[+-]?[bB]9\\." + DIGIT_B9 + "(" + DIGIT_B9 + ")*";
		public const String BASE10_REG_EXP				= "[+-]?[bB]10\\." + DIGIT_B10 + "(" + DIGIT_B10 + ")*";
		public const String BASE11_REG_EXP				= "[+-]?[bB]11\\." + DIGIT_B11 + "(" + DIGIT_B11 + ")*";
		public const String BASE12_REG_EXP				= "[+-]?[bB]12\\." + DIGIT_B12 + "(" + DIGIT_B12 + ")*";
		public const String BASE13_REG_EXP				= "[+-]?[bB]13\\." + DIGIT_B13 + "(" + DIGIT_B13 + ")*";
		public const String BASE14_REG_EXP				= "[+-]?[bB]14\\." + DIGIT_B14 + "(" + DIGIT_B14 + ")*";
		public const String BASE15_REG_EXP				= "[+-]?[bB]15\\." + DIGIT_B15 + "(" + DIGIT_B15 + ")*";
		public const String BASE16_REG_EXP				= "[+-]?([bB]16|[hH])\\." + DIGIT_B16 + "(" + DIGIT_B16 + ")*";
		public const String BASE17_REG_EXP				= "[+-]?[bB]17\\." + DIGIT_B17 + "(" + DIGIT_B17 + ")*";
		public const String BASE18_REG_EXP				= "[+-]?[bB]18\\." + DIGIT_B18 + "(" + DIGIT_B18 + ")*";
		public const String BASE19_REG_EXP				= "[+-]?[bB]19\\." + DIGIT_B19 + "(" + DIGIT_B19 + ")*";
		public const String BASE20_REG_EXP				= "[+-]?[bB]20\\." + DIGIT_B20 + "(" + DIGIT_B20 + ")*";
		public const String BASE21_REG_EXP				= "[+-]?[bB]21\\." + DIGIT_B21 + "(" + DIGIT_B21 + ")*";
		public const String BASE22_REG_EXP				= "[+-]?[bB]22\\." + DIGIT_B22 + "(" + DIGIT_B22 + ")*";
		public const String BASE23_REG_EXP				= "[+-]?[bB]23\\." + DIGIT_B23 + "(" + DIGIT_B23 + ")*";
		public const String BASE24_REG_EXP				= "[+-]?[bB]24\\." + DIGIT_B24 + "(" + DIGIT_B24 + ")*";
		public const String BASE25_REG_EXP				= "[+-]?[bB]25\\." + DIGIT_B25 + "(" + DIGIT_B25 + ")*";
		public const String BASE26_REG_EXP				= "[+-]?[bB]26\\." + DIGIT_B26 + "(" + DIGIT_B26 + ")*";
		public const String BASE27_REG_EXP				= "[+-]?[bB]27\\." + DIGIT_B27 + "(" + DIGIT_B27 + ")*";
		public const String BASE28_REG_EXP				= "[+-]?[bB]28\\." + DIGIT_B28 + "(" + DIGIT_B28 + ")*";
		public const String BASE29_REG_EXP				= "[+-]?[bB]29\\." + DIGIT_B29 + "(" + DIGIT_B29 + ")*";
		public const String BASE30_REG_EXP				= "[+-]?[bB]30\\." + DIGIT_B30 + "(" + DIGIT_B30 + ")*";
		public const String BASE31_REG_EXP				= "[+-]?[bB]31\\." + DIGIT_B31 + "(" + DIGIT_B31 + ")*";
		public const String BASE32_REG_EXP				= "[+-]?[bB]32\\." + DIGIT_B32 + "(" + DIGIT_B32 + ")*";
		public const String BASE33_REG_EXP				= "[+-]?[bB]33\\." + DIGIT_B33 + "(" + DIGIT_B33 + ")*";
		public const String BASE34_REG_EXP				= "[+-]?[bB]34\\." + DIGIT_B34 + "(" + DIGIT_B34 + ")*";
		public const String BASE35_REG_EXP				= "[+-]?[bB]35\\." + DIGIT_B35 + "(" + DIGIT_B35 + ")*";
		public const String BASE36_REG_EXP				= "[+-]?[bB]36\\." + DIGIT_B36 + "(" + DIGIT_B36 + ")*";
		public const String nameOnlyTokenRegExp			= "([a-zA-Z_])+([a-zA-Z0-9_])*";
		public const String nameTokenRegExp				= "(\\s)*" + nameOnlyTokenRegExp + "(\\s)*";
		public const String paramsTokenRegeExp			= "(\\s)*\\(" + "(" + nameTokenRegExp + ",(\\s)*)*" + nameTokenRegExp + "\\)(\\s)*";
		public const String constArgDefStrRegExp		= nameTokenRegExp + "=" + "(\\s)*(.)+(\\s)*";
		public const String functionDefStrRegExp		= nameTokenRegExp + paramsTokenRegeExp + "=" + "(\\s)*(.)+(\\s)*";
		public const String function1ArgDefStrRegExp	= nameTokenRegExp + "(\\s)*\\(" + nameTokenRegExp + "(\\s)*\\)(\\s)*" + "=" + "(\\s)*(.)+(\\s)*";

		/**
		 * ParserSymbol - token type id.
		 */
		public const int TYPE_ID							= 20;
		public const String TYPE_DESC						= "Parser Symbol";
		/**
		 * ParserSymbol - tokens id.
		 */
		public const int LEFT_PARENTHESES_ID				= 1;
		public const int RIGHT_PARENTHESES_ID				= 2;
		public const int COMMA_ID							= 3;
		public const int NUMBER_ID							= 1;
		public const int NUMBER_TYPE_ID						= 0;
		/**
		 * ParserSymbol - tokens key words.
		 */
		public const String LEFT_PARENTHESES_STR 			= "(";
		public const String RIGHT_PARENTHESES_STR			= ")";
		public const String COMMA_STR						= ",";
		public const String SEMI_STR						= ";";
		public const String NUMBER_STR						= "_num_";
		/*
		 * ParserSymbol - syntax.
		 */
		public const String LEFT_PARENTHESES_SYN 		= "( ... )";
		public const String RIGHT_PARENTHESES_SYN		= "( ... )";
		public const String COMMA_SYN					= "(a1, ... ,an)";
		public const String SEMI_SYN					= "(a1; ... ;an)";
		public const String NUMBER_SYN					= "1, -2, 001, +001.2e-10, ...";
		/*
		 * ParserSymbol - tokens description.
		 */
		public const String LEFT_PARENTHESES_DESC 		= "Left parentheses";
		public const String RIGHT_PARENTHESES_DESC		= "Right parentheses";
		public const String COMMA_DESC					= "Comma (function parameters)";
		public const String SEMI_DESC					= "Semicolon (function parameters)";
		public const String NUMBER_DESC					= "Decimal number";
		public const String NUMBER_REG_DESC				= "Regullar expression for decimal numbers";
		/*
		 * ParserSymbol - since.
		 */
		public const String LEFT_PARENTHESES_SINCE 		= mXparser.NAMEv10;
		public const String RIGHT_PARENTHESES_SINCE		= mXparser.NAMEv10;
		public const String COMMA_SINCE					= mXparser.NAMEv10;
		public const String SEMI_SINCE					= mXparser.NAMEv10;
		public const String NUMBER_SINCE				= mXparser.NAMEv10;
	}
}