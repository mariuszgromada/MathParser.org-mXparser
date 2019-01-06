/*
 * @(#)RandomVariable.java        4.1.0    2017-05-14
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
 * Random variables - mXparser tokens definition.
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
 * @version        4.1.0
 */
public final class RandomVariable {
	/*
	 * RandomVariable - token type id.
	 */
	public static final int TYPE_ID 						= 10;
	public static final String TYPE_DESC					= "Random Variable";
	/*
	 * RandomVariable - tokens id.
	 */
	public static final int UNIFORM_ID 						= 1;
	public static final int INT_ID 							= 2;
	public static final int INT1_ID 						= 3;
	public static final int INT2_ID 						= 4;
	public static final int INT3_ID 						= 5;
	public static final int INT4_ID 						= 6;
	public static final int INT5_ID 						= 7;
	public static final int INT6_ID 						= 8;
	public static final int INT7_ID 						= 9;
	public static final int INT8_ID 						= 10;
	public static final int INT9_ID 						= 11;
	public static final int NAT0_ID 						= 12;
	public static final int NAT0_1_ID 						= 13;
	public static final int NAT0_2_ID 						= 14;
	public static final int NAT0_3_ID 						= 15;
	public static final int NAT0_4_ID 						= 16;
	public static final int NAT0_5_ID 						= 17;
	public static final int NAT0_6_ID 						= 18;
	public static final int NAT0_7_ID 						= 19;
	public static final int NAT0_8_ID 						= 20;
	public static final int NAT0_9_ID 						= 21;
	public static final int NAT1_ID 						= 22;
	public static final int NAT1_1_ID 						= 23;
	public static final int NAT1_2_ID 						= 24;
	public static final int NAT1_3_ID 						= 25;
	public static final int NAT1_4_ID 						= 26;
	public static final int NAT1_5_ID 						= 27;
	public static final int NAT1_6_ID 						= 28;
	public static final int NAT1_7_ID 						= 29;
	public static final int NAT1_8_ID 						= 30;
	public static final int NAT1_9_ID 						= 31;
	public static final int NOR_ID							= 32;
	/*
	 * RandomVariable - tokens key words.
	 */
	public static final String UNIFORM_STR 					= "[Uni]";
	public static final String INT_STR 						= "[Int]";
	public static final String INT1_STR 					= "[Int1]";
	public static final String INT2_STR 					= "[Int2]";
	public static final String INT3_STR 					= "[Int3]";
	public static final String INT4_STR 					= "[Int4]";
	public static final String INT5_STR 					= "[Int5]";
	public static final String INT6_STR 					= "[Int6]";
	public static final String INT7_STR 					= "[Int7]";
	public static final String INT8_STR 					= "[Int8]";
	public static final String INT9_STR 					= "[Int9]";
	public static final String NAT0_STR 					= "[nat]";
	public static final String NAT0_1_STR 					= "[nat1]";
	public static final String NAT0_2_STR 					= "[nat2]";
	public static final String NAT0_3_STR 					= "[nat3]";
	public static final String NAT0_4_STR 					= "[nat4]";
	public static final String NAT0_5_STR 					= "[nat5]";
	public static final String NAT0_6_STR 					= "[nat6]";
	public static final String NAT0_7_STR 					= "[nat7]";
	public static final String NAT0_8_STR 					= "[nat8]";
	public static final String NAT0_9_STR 					= "[nat9]";
	public static final String NAT1_STR 					= "[Nat]";
	public static final String NAT1_1_STR 					= "[Nat1]";
	public static final String NAT1_2_STR 					= "[Nat2]";
	public static final String NAT1_3_STR 					= "[Nat3]";
	public static final String NAT1_4_STR 					= "[Nat4]";
	public static final String NAT1_5_STR 					= "[Nat5]";
	public static final String NAT1_6_STR 					= "[Nat6]";
	public static final String NAT1_7_STR 					= "[Nat7]";
	public static final String NAT1_8_STR 					= "[Nat8]";
	public static final String NAT1_9_STR 					= "[Nat9]";
	public static final String NOR_STR						= "[Nor]";
	/*
	 * RandomVariable - syntax.
	 */
	public static final String UNIFORM_SYN					= UNIFORM_STR;
	public static final String INT_SYN						= INT_STR;
	public static final String INT1_SYN						= INT1_STR;
	public static final String INT2_SYN						= INT2_STR;
	public static final String INT3_SYN						= INT3_STR;
	public static final String INT4_SYN						= INT4_STR;
	public static final String INT5_SYN						= INT5_STR;
	public static final String INT6_SYN						= INT6_STR;
	public static final String INT7_SYN						= INT7_STR;
	public static final String INT8_SYN						= INT8_STR;
	public static final String INT9_SYN						= INT9_STR;
	public static final String NAT0_SYN						= NAT0_STR;
	public static final String NAT0_1_SYN					= NAT0_1_STR;
	public static final String NAT0_2_SYN					= NAT0_2_STR;
	public static final String NAT0_3_SYN					= NAT0_3_STR;
	public static final String NAT0_4_SYN					= NAT0_4_STR;
	public static final String NAT0_5_SYN					= NAT0_5_STR;
	public static final String NAT0_6_SYN					= NAT0_6_STR;
	public static final String NAT0_7_SYN					= NAT0_7_STR;
	public static final String NAT0_8_SYN					= NAT0_8_STR;
	public static final String NAT0_9_SYN					= NAT0_9_STR;
	public static final String NAT1_SYN						= NAT1_STR;
	public static final String NAT1_1_SYN					= NAT1_1_STR;
	public static final String NAT1_2_SYN					= NAT1_2_STR;
	public static final String NAT1_3_SYN					= NAT1_3_STR;
	public static final String NAT1_4_SYN					= NAT1_4_STR;
	public static final String NAT1_5_SYN					= NAT1_5_STR;
	public static final String NAT1_6_SYN					= NAT1_6_STR;
	public static final String NAT1_7_SYN					= NAT1_7_STR;
	public static final String NAT1_8_SYN					= NAT1_8_STR;
	public static final String NAT1_9_SYN					= NAT1_9_STR;
	public static final String NOR_SYN						= NOR_STR;
	/*
	 * RandomVariable - tokens description.
	 */
	public static final String UNIFORM_DESC					= "Random variable - Uniform continuous distribution U(0,1)";
	public static final String INT_DESC 					= "Random variable - random integer";
	public static final String INT1_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^1, 10^1}";
	public static final String INT2_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^2, 10^2}";
	public static final String INT3_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^3, 10^3}";
	public static final String INT4_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^4, 10^4}";
	public static final String INT5_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^5, 10^5}";
	public static final String INT6_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^6, 10^6}";
	public static final String INT7_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^7, 10^7}";
	public static final String INT8_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^8, 10^8}";
	public static final String INT9_DESC 					= "Random variable - random integer - Uniform discrete distribution U{-10^9, 10^9}";
	public static final String NAT0_DESC 					= "Random variable - random natural number including 0";
	public static final String NAT0_1_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^1}";
	public static final String NAT0_2_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^2}";
	public static final String NAT0_3_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^3}";
	public static final String NAT0_4_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^4}";
	public static final String NAT0_5_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^5}";
	public static final String NAT0_6_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^6}";
	public static final String NAT0_7_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^7}";
	public static final String NAT0_8_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^8}";
	public static final String NAT0_9_DESC 					= "Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^9}";
	public static final String NAT1_DESC 					= "Random variable - random natural number";
	public static final String NAT1_1_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^1}";
	public static final String NAT1_2_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^2}";
	public static final String NAT1_3_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^3}";
	public static final String NAT1_4_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^4}";
	public static final String NAT1_5_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^5}";
	public static final String NAT1_6_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^6}";
	public static final String NAT1_7_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^7}";
	public static final String NAT1_8_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^8}";
	public static final String NAT1_9_DESC 					= "Random variable - random natural number - Uniform discrete distribution U{1, 10^9}";
	public static final String NOR_DESC 					= "Random variable - Normal distribution N(0,1)";
	/*
	 * RandomVariable - since.
	 */
	public static final String UNIFORM_SINCE				= mXparser.NAMEv30;
	public static final String INT_SINCE					= mXparser.NAMEv30;
	public static final String INT1_SINCE					= mXparser.NAMEv30;
	public static final String INT2_SINCE					= mXparser.NAMEv30;
	public static final String INT3_SINCE					= mXparser.NAMEv30;
	public static final String INT4_SINCE					= mXparser.NAMEv30;
	public static final String INT5_SINCE					= mXparser.NAMEv30;
	public static final String INT6_SINCE					= mXparser.NAMEv30;
	public static final String INT7_SINCE					= mXparser.NAMEv30;
	public static final String INT8_SINCE					= mXparser.NAMEv30;
	public static final String INT9_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_1_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_2_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_3_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_4_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_5_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_6_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_7_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_8_SINCE					= mXparser.NAMEv30;
	public static final String NAT0_9_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_1_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_2_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_3_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_4_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_5_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_6_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_7_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_8_SINCE					= mXparser.NAMEv30;
	public static final String NAT1_9_SINCE					= mXparser.NAMEv30;
	public static final String NOR_SINCE					= mXparser.NAMEv30;
}
