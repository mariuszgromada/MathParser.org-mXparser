/*
 * @(#)CalculusOperator.cs        4.0.0    2016-03-26
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
	 * Calculus Operators - mXparser tokens definition.
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
	 * @version        4.0.0
	 */
	[CLSCompliant(true)]
	public sealed class CalculusOperator {
		/*
		 * CalculusOperator - token type id.
		 */
		public const int TYPE_ID					= 8;
		public const String TYPE_DESC				= "Calculus Operator";
		/*
		 * CalculusOperator - tokens id.
		 */
		public const int SUM_ID						= 1;
		public const int PROD_ID					= 3;
		public const int INT_ID						= 5;
		public const int DER_ID						= 6;
		public const int DER_LEFT_ID				= 7;
		public const int DER_RIGHT_ID				= 8;
		public const int DERN_ID					= 9;
		public const int FORW_DIFF_ID				= 10;
		public const int BACKW_DIFF_ID				= 11;
		public const int AVG_ID						= 12;
		public const int VAR_ID						= 13;
		public const int STD_ID						= 14;
		public const int MIN_ID						= 15;
		public const int MAX_ID						= 16;
		public const int SOLVE_ID					= 17;
		/*
		 * CalculusOperator - tokens key words.
		 */
		public const String SUM_STR					= "sum";
		public const String PROD_STR				= "prod";
		public const String INT_STR					= "int";
		public const String DER_STR					= "der";
		public const String DER_LEFT_STR			= "der-";
		public const String DER_RIGHT_STR			= "der+";
		public const String DERN_STR				= "dern";
		public const String FORW_DIFF_STR			= "diff";
		public const String BACKW_DIFF_STR			= "difb";
		public const String AVG_STR					= "avg";
		public const String VAR_STR					= "vari";
		public const String STD_STR					= "stdi";
		public const String MIN_STR					= "mini";
		public const String MAX_STR					= "maxi";
		public const String SOLVE_STR				= "solve";
		/*
		 * CalculusOperator - tokens description.
		 */
		public const String SUM_DESC				= "summation operator (SIGMA) sum(i, from, to, f(i,...))";
		public const String PROD_DESC				= "product operator (PI) prod(i, from, to, f(i,...))";
		public const String INT_DESC				= "definite integral operator ( int(f(x,...), x, a, b) )";
		public const String DER_DESC				= "derivative operator ( der(f(x,...), x) ) ";
		public const String DER_LEFT_DESC			= "left derivative operator ( der-(f(x,...), x) ) ";
		public const String DER_RIGHT_DESC			= "right derivative operator ( der+(f(x,...), x) ) ";
		public const String DERN_DESC				= "n-th derivative operator ( dern(f(x,...), x) ) ";
		public const String FORW_DIFF_DESC			= "forward difference operator";
		public const String BACKW_DIFF_DESC			= "backward difference operator";
		public const String AVG_DESC				= "(2.4) Average operator avg(i, from, to, f(i,...))";
		public const String VAR_DESC				= "(2.4) Bias-corrected sample variance operator vari(i, from, to, f(i,...))";
		public const String STD_DESC				= "(2.4) Bias-corrected sample standard deviation operator stdi(i, from, to, f(i,...))";
		public const String MIN_DESC				= "(2.4) Minimum value mini(i, from, to, f(i,...))";
		public const String MAX_DESC				= "(2.4) Maximum value maxi(i, from, to, f(i,...))";
		public const String SOLVE_DESC				= "(4.0) f(x) = 0 equation solving, function root finding: solve( f(x,...), x, a, b )";
	}
}
