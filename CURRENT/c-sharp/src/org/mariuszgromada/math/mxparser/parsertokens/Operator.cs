/*
 * @(#)Operator.java        4.1.0    2017-05-28
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
	 * Operators - mXparser tokens definition.
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
	public sealed class Operator {
		/*
		 * Operator - token type id.
		 */
		public const int TYPE_ID				= 1;
		public const String TYPE_DESC			= "Operator";
		/*
		 * Operator - tokens id.
		 */
		public const int PLUS_ID				= 1;
		public const int MINUS_ID				= 2;
		public const int MULTIPLY_ID			= 3;
		public const int DIVIDE_ID				= 4;
		public const int POWER_ID				= 5;
		public const int FACT_ID				= 6;
		public const int MOD_ID					= 7;
        public const int PERC_ID                = 8;
        /*
		 * Operator - tokens key words.
		 */
        public const String PLUS_STR 			= "+";
		public const String MINUS_STR 			= "-";
		public const String MULTIPLY_STR 		= "*";
		public const String DIVIDE_STR 			= "/";
		public const String POWER_STR 			= "^";
		public const String FACT_STR 			= "!";
		public const String MOD_STR				= "#";
        public const String PERC_STR			= "%";
		/*
		 * Operator - syntax.
		 */
		public const String PLUS_SYN 			= "a + b";
		public const String MINUS_SYN 			= "a - b";
		public const String MULTIPLY_SYN 		= "a * b";
		public const String DIVIDE_SYN 			= "a / b";
		public const String POWER_SYN 			= "a^b";
		public const String FACT_SYN 			= "n!";
		public const String MOD_SYN				= "a # b";
        public const String PERC_SYN			= "n%";
		/*
		 * Operator - tokens description.
		 */
		public const String PLUS_DESC 			= "Addition";
		public const String MINUS_DESC 			= "Subtraction";
		public const String MULTIPLY_DESC 		= "Nultiplication";
		public const String DIVIDE_DESC 		= "Division";
		public const String POWER_DESC 			= "Exponentiation";
		public const String FACT_DESC			= "Factorial";
		public const String MOD_DESC			= "Modulo function";
        public const String PERC_DESC			= "Percentage";
		/*
		 * Operator - since.
		 */
		public const String PLUS_SINCE 			= mXparser.NAMEv10;
		public const String MINUS_SINCE 		= mXparser.NAMEv10;
		public const String MULTIPLY_SINCE 		= mXparser.NAMEv10;
		public const String DIVIDE_SINCE 		= mXparser.NAMEv10;
		public const String POWER_SINCE 		= mXparser.NAMEv10;
		public const String FACT_SINCE			= mXparser.NAMEv10;
		public const String MOD_SINCE			= mXparser.NAMEv10;
        public const String PERC_SINCE			= mXparser.NAMEv41;
	}
}