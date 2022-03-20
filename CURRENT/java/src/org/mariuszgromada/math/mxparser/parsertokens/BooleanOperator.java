/*
 * @(#)BooleanOperator.java        5.0.0    2022-03-20
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
 * Boolean Operators - mXparser tokens definition.
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
public final class BooleanOperator {
	/*
	 * BooleanOperator - token type id.
	 */
	public static final int TYPE_ID 				= 2;
	public static final String TYPE_DESC			= "Boolean Operator";
	/*
	 * BooleanOperator - tokens id.
	 */
	public static final int AND_ID					= 1;
	public static final int NAND_ID					= 2;
	public static final int OR_ID					= 3;
	public static final int NOR_ID					= 4;
	public static final int XOR_ID					= 5;
	public static final int IMP_ID					= 6;
	public static final int CIMP_ID					= 7;
	public static final int NIMP_ID					= 8;
	public static final int CNIMP_ID				= 9;
	public static final int EQV_ID					= 10;
	public static final int NEG_ID					= 11;
	/*
	 * BooleanOperator - tokens key words.
	 */
	public static final String NEG_STR				= "~";
	public static final String NEG_STR_UNI_1		= "¬";
	public static final String AND_STR				= "&";
	public static final String AND_STR_UNI_1		= "∧";
	public static final String AND1_STR				= "&&";
	public static final String AND2_STR				= "/\\";
	public static final String NAND_STR				= NEG_STR + AND_STR;
	public static final String NAND1_STR			= NEG_STR + AND1_STR;
	public static final String NAND2_STR			= NEG_STR + AND2_STR;
	public static final String NAND_STR_UNI_1		= NEG_STR + AND_STR_UNI_1;
	public static final String NAND_STR_UNI_2		= NEG_STR_UNI_1 + AND_STR;
	public static final String NAND_STR_UNI_3		= NEG_STR_UNI_1 + AND1_STR;
	public static final String NAND_STR_UNI_4		= NEG_STR_UNI_1 + AND2_STR;
	public static final String NAND_STR_UNI_5		= NEG_STR_UNI_1 + AND_STR_UNI_1;
	public static final String NAND_STR_UNI_6		= "⊼";
	public static final String OR_STR				= "|";
	public static final String OR_STR_UNI_1			= "∨";
	public static final String OR1_STR				= "||";
	public static final String OR2_STR				= "\\/";
	public static final String NOR_STR				= NEG_STR + OR_STR;
	public static final String NOR1_STR				= NEG_STR + OR1_STR;
	public static final String NOR2_STR				= NEG_STR + OR2_STR;
	public static final String NOR_STR_UNI_1		= NEG_STR + OR_STR_UNI_1;
	public static final String NOR_STR_UNI_2		= NEG_STR_UNI_1 + OR_STR;
	public static final String NOR_STR_UNI_3		= NEG_STR_UNI_1 + OR1_STR;
	public static final String NOR_STR_UNI_4		= NEG_STR_UNI_1 + OR2_STR;
	public static final String NOR_STR_UNI_5		= NEG_STR_UNI_1 + OR_STR_UNI_1;
	public static final String NOR_STR_UNI_6		= "⊽";
	public static final String XOR_STR				= "(+)";
	public static final String XOR_STR_UNI_1		= "⊻";
	public static final String IMP_STR				= "-->";
	public static final String IMP_STR_UNI_1		= "⇒";
	public static final String CIMP_STR				= "<--";
	public static final String CIMP_STR_UNI_1		= "⇐";
	public static final String NIMP_STR				= "-/>";
	public static final String NIMP_STR_UNI_1		= "⇏";
	public static final String CNIMP_STR			= "</-";
	public static final String CNIMP_STR_UNI_1		= "⇍";
	public static final String EQV_STR				= "<->";
	public static final String EQV_STR_UNI_1		= "⇔";
	/*
	 * BooleanOperator - syntax.
	 */
	public static final String NEG_SYN				= SyntaxStringBuilder.unaryLeftBooleanOperator(NEG_STR);
	public static final String NEG_SYN_UNI_1		= SyntaxStringBuilder.unaryLeftBooleanOperator(NEG_STR_UNI_1);
	public static final String AND_SYN				= SyntaxStringBuilder.binaryBooleanOperator(AND_STR);
	public static final String AND1_SYN				= SyntaxStringBuilder.binaryBooleanOperator(AND1_STR);
	public static final String AND2_SYN				= SyntaxStringBuilder.binaryBooleanOperator(AND2_STR);
	public static final String AND_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(AND_STR_UNI_1);
	public static final String NAND_SYN				= SyntaxStringBuilder.binaryBooleanOperator(NAND_STR);
	public static final String NAND1_SYN			= SyntaxStringBuilder.binaryBooleanOperator(NAND1_STR);
	public static final String NAND2_SYN			= SyntaxStringBuilder.binaryBooleanOperator(NAND2_STR);
	public static final String NAND_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(NAND_STR_UNI_1);
	public static final String NAND_SYN_UNI_2		= SyntaxStringBuilder.binaryBooleanOperator(NAND_STR_UNI_2);
	public static final String NAND_SYN_UNI_3		= SyntaxStringBuilder.binaryBooleanOperator(NAND_STR_UNI_3);
	public static final String NAND_SYN_UNI_4		= SyntaxStringBuilder.binaryBooleanOperator(NAND_STR_UNI_4);
	public static final String NAND_SYN_UNI_5		= SyntaxStringBuilder.binaryBooleanOperator(NAND_STR_UNI_5);
	public static final String NAND_SYN_UNI_6		= SyntaxStringBuilder.binaryBooleanOperator(NAND_STR_UNI_6);
	public static final String OR_SYN				= SyntaxStringBuilder.binaryBooleanOperator(OR_STR);
	public static final String OR1_SYN				= SyntaxStringBuilder.binaryBooleanOperator(OR1_STR);
	public static final String OR2_SYN				= SyntaxStringBuilder.binaryBooleanOperator(OR2_STR);
	public static final String OR_SYN_UNI_1			= SyntaxStringBuilder.binaryBooleanOperator(OR_STR_UNI_1);
	public static final String NOR_SYN				= SyntaxStringBuilder.binaryBooleanOperator(NOR_STR);
	public static final String NOR1_SYN				= SyntaxStringBuilder.binaryBooleanOperator(NOR1_STR);
	public static final String NOR2_SYN				= SyntaxStringBuilder.binaryBooleanOperator(NOR2_STR);
	public static final String NOR_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(NOR_STR_UNI_1);
	public static final String NOR_SYN_UNI_2		= SyntaxStringBuilder.binaryBooleanOperator(NOR_STR_UNI_2);
	public static final String NOR_SYN_UNI_3		= SyntaxStringBuilder.binaryBooleanOperator(NOR_STR_UNI_3);
	public static final String NOR_SYN_UNI_4		= SyntaxStringBuilder.binaryBooleanOperator(NOR_STR_UNI_4);
	public static final String NOR_SYN_UNI_5		= SyntaxStringBuilder.binaryBooleanOperator(NOR_STR_UNI_5);
	public static final String NOR_SYN_UNI_6		= SyntaxStringBuilder.binaryBooleanOperator(NOR_STR_UNI_6);
	public static final String XOR_SYN				= SyntaxStringBuilder.binaryBooleanOperator(XOR_STR);
	public static final String XOR_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(XOR_STR_UNI_1);
	public static final String IMP_SYN				= SyntaxStringBuilder.binaryBooleanOperator(IMP_STR);
	public static final String IMP_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(IMP_STR_UNI_1);
	public static final String CIMP_SYN				= SyntaxStringBuilder.binaryBooleanOperator(CIMP_STR);
	public static final String CIMP_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(CIMP_STR_UNI_1);
	public static final String NIMP_SYN				= SyntaxStringBuilder.binaryBooleanOperator(NIMP_STR);
	public static final String NIMP_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(NIMP_STR_UNI_1);
	public static final String CNIMP_SYN			= SyntaxStringBuilder.binaryBooleanOperator(CNIMP_STR);
	public static final String CNIMP_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(CNIMP_STR_UNI_1);
	public static final String EQV_SYN				= SyntaxStringBuilder.binaryBooleanOperator(EQV_STR);
	public static final String EQV_SYN_UNI_1		= SyntaxStringBuilder.binaryBooleanOperator(EQV_STR_UNI_1);
	/*
	 * BooleanOperator - tokens description.
	 */
	public static final String AND_DESC				= "Logical conjunction (AND)";
	public static final String OR_DESC				= "Logical disjunction (OR)";
	public static final String NEG_DESC				= "Negation";
	public static final String NAND_DESC			= "NAND - Sheffer stroke";
	public static final String NOR_DESC				= "Logical NOR";
	public static final String XOR_DESC				= "Exclusive or (XOR)";
	public static final String IMP_DESC				= "Implication (IMP)";
	public static final String CIMP_DESC			= "Converse implication (CIMP)";
	public static final String NIMP_DESC			= "Material nonimplication (NIMP)";
	public static final String CNIMP_DESC			= "Converse nonimplication (CNIMP)";
	public static final String EQV_DESC				= "Logical biconditional (EQV)";
	/*
	 * BooleanOperator - since.
	 */
	public static final String AND_SINCE			= mXparser.NAMEv10;
	public static final String AND_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String OR_SINCE				= mXparser.NAMEv10;
	public static final String OR_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String NEG_SINCE			= mXparser.NAMEv10;
	public static final String NEG_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String NAND_SINCE			= mXparser.NAMEv10;
	public static final String NAND_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String NAND_SINCE_UNI_2		= mXparser.NAMEv50;
	public static final String NAND_SINCE_UNI_3		= mXparser.NAMEv50;
	public static final String NAND_SINCE_UNI_4		= mXparser.NAMEv50;
	public static final String NAND_SINCE_UNI_5		= mXparser.NAMEv50;
	public static final String NAND_SINCE_UNI_6		= mXparser.NAMEv50;
	public static final String NOR_SINCE			= mXparser.NAMEv10;
	public static final String NOR_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String NOR_SINCE_UNI_2		= mXparser.NAMEv50;
	public static final String NOR_SINCE_UNI_3		= mXparser.NAMEv50;
	public static final String NOR_SINCE_UNI_4		= mXparser.NAMEv50;
	public static final String NOR_SINCE_UNI_5		= mXparser.NAMEv50;
	public static final String NOR_SINCE_UNI_6		= mXparser.NAMEv50;
	public static final String XOR_SINCE			= mXparser.NAMEv10;
	public static final String XOR_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String IMP_SINCE			= mXparser.NAMEv10;
	public static final String IMP_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String CIMP_SINCE			= mXparser.NAMEv10;
	public static final String CIMP_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String NIMP_SINCE			= mXparser.NAMEv10;
	public static final String NIMP_SINCE_UNI_1		= mXparser.NAMEv50;
	public static final String CNIMP_SINCE			= mXparser.NAMEv10;
	public static final String CNIMP_SINCE_UNI_1	= mXparser.NAMEv50;
	public static final String EQV_SINCE			= mXparser.NAMEv10;
	public static final String EQV_SINCE_UNI_1		= mXparser.NAMEv50;
}
