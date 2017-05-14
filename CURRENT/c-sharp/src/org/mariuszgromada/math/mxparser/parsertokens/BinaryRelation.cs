/*
 * @(#)BinaryRelation.cs        4.1.0    2017-05-13
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
	 * Binary Relations - mXparser tokens definition.
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
	public sealed class BinaryRelation {
		/*
		 * BinaryRelation - token type id.
		 */
		public const int TYPE_ID				= 3;
		public const String TYPE_DESC			= "Binary Relation";
		/*
		 * BinaryRelation - tokens id.
		 */
		public const int EQ_ID					= 1;
		public const int NEQ_ID					= 2;
		public const int LT_ID					= 3;
		public const int GT_ID					= 4;
		public const int LEQ_ID					= 5;
		public const int GEQ_ID					= 6;
		/*
		 * BinaryRelation - tokens key words.
		 */
		public const String EQ_STR 				= "=";
		public const String EQ1_STR 			= "==";
		public const String NEQ_STR 			= "<>";
		public const String NEQ1_STR 			= "~=";
		public const String NEQ2_STR 			= "!=";
		public const String LT_STR 				= "<";
		public const String GT_STR 				= ">";
		public const String LEQ_STR 			= "<=";
		public const String GEQ_STR 			= ">=";
		/*
		 * BinaryRelation - syntax.
		 */
		public const String EQ_SYN 				= "a = b";
		public const String EQ1_SYN 			= "a == b";
		public const String NEQ_SYN 			= "a <> b";
		public const String NEQ1_SYN 			= "a ~= b";
		public const String NEQ2_SYN 			= "a != b";
		public const String LT_SYN 				= "a < b";
		public const String GT_SYN 				= "a > b";
		public const String LEQ_SYN 			= "a <= b";
		public const String GEQ_SYN 			= "a >= b";
		/*
		 * BinaryRelation - tokens description.
		 */
		public const String EQ_DESC 			= "Equality";
		public const String NEQ_DESC			= "Inequation";
		public const String LT_DESC 			= "Lower than";
		public const String GT_DESC 			= "Greater than";
		public const String LEQ_DESC 			= "Lower or equal";
		public const String GEQ_DESC 			= "Greater or equal";
		/*
		 * BinaryRelation - since.
		 */
		public const String EQ_SINCE			= mXparser.NAMEv10;
		public const String NEQ_SINCE			= mXparser.NAMEv10;
		public const String LT_SINCE 			= mXparser.NAMEv10;
		public const String GT_SINCE			= mXparser.NAMEv10;
		public const String LEQ_SINCE 			= mXparser.NAMEv10;
		public const String GEQ_SINCE 			= mXparser.NAMEv10;
	}
}