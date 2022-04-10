/*
 * @(#)BooleanOperator.java        5.0.0    2022-04-10
 *
 * Copyright 2010 - 2022 MARIUSZ GROMADA. All rights reserved.
 *
 * PRODUCT: MathParser.org-mXparser
 * LICENSE: DUAL LICENSE
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE SOFTWARE, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * MARIUSZ GROMADA provides MathParser.org-mXparser SOFTWARE under the
 * DUAL LICENSE model designed to meet the needs of both Non-Commercial Use
 * as well as Commercial Use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. NON-COMMERCIAL USE examples:
 *
 * 1. Free Open-Source Software ("FOSS").
 * 2. Non-commercial use in research, scholarly and education.
 *
 * COMMERCIAL USE means any use or activity where a fee is charged or the
 * purpose is the sale of a good or service, or the use or activity is
 * intended to produce a profit. COMMERCIAL USE examples:
 *
 * 1. OEMs (Original Equipment Manufacturers).
 * 2. ISVs (Independent Software Vendors).
 * 3. VARs (Value Added Resellers).
 * 4. Other distributors that combine and distribute commercially licensed
 *    software.
 *
 * IN CASE YOU WANT TO USE THE SOFTWARE COMMERCIALLY, YOU MUST PURCHASE
 * THE APPROPRIATE LICENSE FROM "INFIMA IWONA GLOWACKA-GROMADA", ONLINE
 * STORE ADDRESS: HTTPS://PAYHIP.COM/INFIMA
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms, with
 * or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE in the documentation and/or other
 *    materials provided with the distribution, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, MARIUSZ GROMADA allows you to
 *     download, install and use up to three copies of the PRODUCT to perform
 *     integration tests, confirm the quality of the PRODUCT and its
 *     suitability. The testing period should be limited to one month. Tests
 *     should take place via test environments. The purpose of the tests must
 *     not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA IWONA GLOWACKA-GROMADA"
 *     (online store address: https://payhip.com/INFIMA), you comply with all
 *     below terms and conditions, and you have acknowledged and understood the
 *     following DISCLAIMER, MARIUSZ GROMADA grants you a nonexclusive license
 *     including the following rights:
 *  3. In case you purchased a "Single License" You can install and use the
 *     PRODUCT from one workstation.
 *  4. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number of
 *     copies purchased as per order.
 *  5. In case you purchased a "Site License", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
 *  6. You may incorporate the unmodified PRODUCT into your own products and
 *     software.
 *  7. If you purchased a license with the "Source Code" option, you may modify
 *     the PRODUCT's source code and incorporate the modified source code into
 *     your own products and / or software.
 *  8. You may distribute your product and / or software with the incorporated
 *     PRODUCT royalty-free.
 *  9. You may make copies of the PRODUCT for backup and archival purposes.
 * 10. MARIUSZ GROMADA reserves all rights not expressly granted to you in
 *     this agreement.
 *
 * CONTACT
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://payhip.com/INFIMA
 *
 * DISCLAIMER
 *
 * THIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL MATHPARSER.ORG MARIUSZ GROMADA OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE SOFTWARE AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING OFFICIAL
 * POLICIES, EITHER EXPRESSED OR IMPLIED, OF MARIUSZ GROMADA.
 */
package org.mariuszgromada.math.mxparser.parsertokens;

import org.mariuszgromada.math.mxparser.mXparser;
/**
 * Boolean Operators - mXparser tokens definition.
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="https://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="https://payhip.com/INFIMA" target="_blank">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br>
 *                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br>
 *                 <a href="https://scalarmath.org/" target="_blank">ScalarMath.org - a powerful math engine and math scripting language</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Lite</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
 *                 <a href="https://mathspace.pl" target="_blank">MathSpace.pl</a><br>
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
