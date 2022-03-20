/*
 * @(#)Operator.java        5.0.0    2022-03-20
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2022 MARIUSZ GROMADA. All rights reserved.
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
 *     http://scalarmath.org/
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser.parsertokens;

import org.mariuszgromada.math.mxparser.mXparser;
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
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
 *                 <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a><br>
 *
 * @version        5.0.0
 */
public final class Operator {
	/*
	 * Operator - token type id.
	 */
	public static final int TYPE_ID 				= 1;
	public static final String TYPE_DESC			= "Operator";
	/*
	 * Operator - tokens id.
	 */
	public static final int PLUS_ID 				= 1;
	public static final int MINUS_ID 				= 2;
	public static final int MULTIPLY_ID 			= 3;
	public static final int DIVIDE_ID 				= 4;
	public static final int POWER_ID 				= 5;
	public static final int FACT_ID					= 6;
	public static final int MOD_ID					= 7;
	public static final int PERC_ID					= 8;
	public static final int TETRATION_ID			= 9;
	public static final int SQUARE_ROOT_ID			= 10;
	public static final int CUBE_ROOT_ID			= 11;
	public static final int FOURTH_ROOT_ID			= 12;
	/*
	 * Operator - tokens key words.
	 */
	public static final String PLUS_STR 			= "+";
	public static final String MINUS_STR 			= "-";
	public static final String MULTIPLY_STR 		= "*";
	public static final String MULTIPLY_STR_UNI_1	= "×";
	public static final String MULTIPLY_STR_UNI_2	= "⨉";
	public static final String MULTIPLY_STR_UNI_3	= "∙";
	public static final String DIVIDE_STR 			= "/";
	public static final String DIVIDE_STR_UNI_1		= "÷";
	public static final String POWER_STR 			= "^";
	public static final String FACT_STR 			= "!";
	public static final String MOD_STR				= "#";
	public static final String PERC_STR				= "%";
	public static final String TETRATION_STR		= "^^";
	public static final String SQUARE_ROOT_STR		= "√";
	public static final String CUBE_ROOT_STR		= "∛";
	public static final String FOURTH_ROOT_STR		= "∜";
	/*
	 * Operator - syntax.
	 */
	public static final String PLUS_SYN 			= SyntaxStringBuilder.binaryOperator(PLUS_STR);
	public static final String MINUS_SYN 			= SyntaxStringBuilder.binaryOperator(MINUS_STR);
	public static final String MULTIPLY_SYN 		= SyntaxStringBuilder.binaryOperator(MULTIPLY_STR);
	public static final String MULTIPLY_SYN_UNI_1	= SyntaxStringBuilder.binaryOperator(MULTIPLY_STR_UNI_1);
	public static final String MULTIPLY_SYN_UNI_2	= SyntaxStringBuilder.binaryOperator(MULTIPLY_STR_UNI_2);
	public static final String MULTIPLY_SYN_UNI_3	= SyntaxStringBuilder.binaryOperator(MULTIPLY_STR_UNI_3);
	public static final String DIVIDE_SYN 			= SyntaxStringBuilder.binaryOperator(DIVIDE_STR);
	public static final String DIVIDE_SYN_UNI_1		= SyntaxStringBuilder.binaryOperator(DIVIDE_STR_UNI_1);
	public static final String POWER_SYN 			= SyntaxStringBuilder.binaryOperatorNoSpace(POWER_STR);
	public static final String FACT_SYN 			= SyntaxStringBuilder.unaryRightOperator(FACT_STR);
	public static final String MOD_SYN				= SyntaxStringBuilder.binaryOperator(MOD_STR);
	public static final String PERC_SYN				= SyntaxStringBuilder.unaryRightOperator(PERC_STR);
	public static final String TETRATION_SYN		= SyntaxStringBuilder.binaryOperatorNoSpace(TETRATION_STR);
	public static final String SQUARE_ROOT_SYN		= SyntaxStringBuilder.unaryLeftOperator(SQUARE_ROOT_STR);
	public static final String CUBE_ROOT_SYN		= SyntaxStringBuilder.unaryLeftOperator(CUBE_ROOT_STR);
	public static final String FOURTH_ROOT_SYN		= SyntaxStringBuilder.unaryLeftOperator(FOURTH_ROOT_STR);
	/*
	 * Operator - tokens description.
	 */
	public static final String PLUS_DESC 			= "Addition";
	public static final String MINUS_DESC 			= "Subtraction";
	public static final String MULTIPLY_DESC 		= "Multiplication";
	public static final String DIVIDE_DESC 			= "Division";
	public static final String POWER_DESC 			= "Exponentiation";
	public static final String FACT_DESC			= "Factorial";
	public static final String MOD_DESC				= "Modulo function";
	public static final String PERC_DESC			= "Percentage";
	public static final String TETRATION_DESC		= "Tetration (hyper-4, power tower, exponential tower)";
	public static final String SQUARE_ROOT_DESC		= "Square root function represented as unary left operator";
	public static final String CUBE_ROOT_DESC		= "Cube root function represented as unary left operator";
	public static final String FOURTH_ROOT_DESC		= "Fourth root function represented as unary left operator";
	/*
	 * Operator - since.
	 */
	public static final String PLUS_SINCE 			= mXparser.NAMEv10;
	public static final String MINUS_SINCE 			= mXparser.NAMEv10;
	public static final String MULTIPLY_SINCE 		= mXparser.NAMEv10;
	public static final String MULTIPLY_SINCE_UNI_1	= mXparser.NAMEv50;
	public static final String MULTIPLY_SINCE_UNI_2	= mXparser.NAMEv50;
	public static final String MULTIPLY_SINCE_UNI_3	= mXparser.NAMEv50;
	public static final String DIVIDE_SINCE 		= mXparser.NAMEv10;
	public static final String DIVIDE_SINCE_UNI_1	= mXparser.NAMEv50;
	public static final String POWER_SINCE 			= mXparser.NAMEv10;
	public static final String FACT_SINCE			= mXparser.NAMEv10;
	public static final String MOD_SINCE			= mXparser.NAMEv10;
	public static final String PERC_SINCE			= mXparser.NAMEv41;
	public static final String TETRATION_SINCE		= mXparser.NAMEv42;
	public static final String SQUARE_ROOT_SINCE	= mXparser.NAMEv50;
	public static final String CUBE_ROOT_SINCE		= mXparser.NAMEv50;
	public static final String FOURTH_ROOT_SINCE	= mXparser.NAMEv50;
}
