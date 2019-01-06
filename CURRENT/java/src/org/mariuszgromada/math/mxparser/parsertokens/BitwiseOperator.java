/*
 * @(#)BitwiseOperator.java        4.2.0    2018-01-28
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2018 MARIUSZ GROMADA. All rights reserved.
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
 * Bitwise Operators - mXparser tokens definition.
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
 * @version        4.2.0
 */
public final class BitwiseOperator {
	/*
	 * BitwiseOperator - token type id.
	 */
	public static final int TYPE_ID 				= 11;
	public static final String TYPE_DESC			= "Bitwise Operator";
	/*
	 * BitwiseOperator - tokens id.
	 */
	public static final int COMPL_ID				= 1;
	public static final int AND_ID					= 2;
	public static final int XOR_ID					= 3;
	public static final int OR_ID					= 4;
	public static final int LEFT_SHIFT_ID			= 5;
	public static final int RIGHT_SHIFT_ID			= 6;
	/*
	 * BitwiseOperator - tokens key words.
	 */
	public static final String COMPL_STR			= "@~";
	public static final String AND_STR				= "@&";
	public static final String XOR_STR				= "@^";
	public static final String OR_STR				= "@|";
	public static final String LEFT_SHIFT_STR		= "@<<";
	public static final String RIGHT_SHIFT_STR		= "@>>";
	/*
	 * BitwiseOperator - syntax.
	 */
	public static final String COMPL_SYN			= "@~a";
	public static final String AND_SYN				= "a @& b";
	public static final String XOR_SYN				= "a @^ b";
	public static final String OR_SYN				= "a @| b";
	public static final String LEFT_SHIFT_SYN		= "a @<< b";
	public static final String RIGHT_SHIFT_SYN		= "a @>> b";
	/*
	 * BitwiseOperator - tokens description.
	 */
	public static final String COMPL_DESC			= "Bitwise unary complement";
	public static final String AND_DESC				= "Bitwise AND";
	public static final String XOR_DESC				= "Bitwise exclusive OR";
	public static final String OR_DESC				= "Bitwise inclusive OR";
	public static final String LEFT_SHIFT_DESC		= "Signed left shift";
	public static final String RIGHT_SHIFT_DESC		= "Signed right shift";
	/*
	 * BitwiseOperator - tokens since.
	 */
	public static final String COMPL_SINCE			= mXparser.NAMEv40;
	public static final String AND_SINCE			= mXparser.NAMEv40;
	public static final String XOR_SINCE			= mXparser.NAMEv40;
	public static final String OR_SINCE				= mXparser.NAMEv40;
	public static final String LEFT_SHIFT_SINCE		= mXparser.NAMEv40;
	public static final String RIGHT_SHIFT_SINCE	= mXparser.NAMEv40;
}

