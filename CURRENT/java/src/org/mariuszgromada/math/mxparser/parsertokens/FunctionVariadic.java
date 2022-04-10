/*
 * @(#)FunctionVariadic.java        5.0.0    2022-04-10
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
 * Variadic functions (n parameters)- mXparser tokens definition.
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
public final class FunctionVariadic {
	/*
	 * FunctionVariadic - token type id.
	 */
	public static final int TYPE_ID 					= 7;
	public static final String TYPE_DESC				= "Variadic Function";
	/*
	 * FunctionVariadic - tokens id.
	 */
	public static final int IFF_ID 						= 1;
	public static final int MIN_ID 						= 2;
	public static final int MAX_ID 						= 3;
	public static final int CONT_FRAC_ID				= 4;
	public static final int CONT_POL_ID					= 5;
	public static final int GCD_ID						= 6;
	public static final int LCM_ID						= 7;
	public static final int SUM_ID						= 8;
	public static final int PROD_ID						= 9;
	public static final int AVG_ID						= 10;
	public static final int VAR_ID						= 11;
	public static final int STD_ID						= 12;
	public static final int RND_LIST_ID					= 13;
	public static final int COALESCE_ID					= 14;
	public static final int OR_ID						= 15;
	public static final int AND_ID						= 16;
	public static final int XOR_ID						= 17;
	public static final int ARGMIN_ID					= 18;
	public static final int ARGMAX_ID					= 19;
	public static final int MEDIAN_ID					= 20;
	public static final int MODE_ID						= 21;
	public static final int BASE_ID						= 22;
	public static final int NDIST_ID					= 23;
	/*
	 * FunctionVariadic - tokens key words.
	 */
	public static final String IFF_STR 					= "iff";
	public static final String MIN_STR					= "min";
	public static final String MAX_STR					= "max";
	public static final String CONT_FRAC_STR			= "ConFrac";
	public static final String CONT_POL_STR				= "ConPol";
	public static final String GCD_STR					= "gcd";
	public static final String LCM_STR					= "lcm";
	public static final String SUM_STR					= "add";
	public static final String PROD_STR					= "multi";
	public static final String AVG_STR					= "mean";
	public static final String VAR_STR					= "var";
	public static final String STD_STR					= "std";
	public static final String RND_LIST_STR				= "rList";
	public static final String COALESCE_STR				= "coalesce";
	public static final String OR_STR					= "or";
	public static final String AND_STR					= "and";
	public static final String XOR_STR					= "xor";
	public static final String ARGMIN_STR				= "argmin";
	public static final String ARGMAX_STR				= "argmax";
	public static final String MEDIAN_STR				= "med";
	public static final String MODE_STR					= "mode";
	public static final String BASE_STR					= "base";
	public static final String NDIST_STR				= "ndist";
	/*
	 * FunctionVariadic - syntax.
	 */
	public static final String IFF_SYN 					= SyntaxStringBuilder.functionVariadicCond(IFF_STR);
	public static final String MIN_SYN					= SyntaxStringBuilder.functionVariadicA(MIN_STR);
	public static final String MAX_SYN					= SyntaxStringBuilder.functionVariadicA(MAX_STR);
	public static final String CONT_FRAC_SYN			= SyntaxStringBuilder.functionVariadicA(CONT_FRAC_STR);
	public static final String CONT_POL_SYN				= SyntaxStringBuilder.functionVariadicA(CONT_POL_STR);
	public static final String GCD_SYN					= SyntaxStringBuilder.functionVariadicA(GCD_STR);
	public static final String LCM_SYN					= SyntaxStringBuilder.functionVariadicA(LCM_STR);
	public static final String SUM_SYN					= SyntaxStringBuilder.functionVariadicA(SUM_STR);
	public static final String PROD_SYN					= SyntaxStringBuilder.functionVariadicA(PROD_STR);
	public static final String AVG_SYN					= SyntaxStringBuilder.functionVariadicA(AVG_STR);
	public static final String VAR_SYN					= SyntaxStringBuilder.functionVariadicA(VAR_STR);
	public static final String STD_SYN					= SyntaxStringBuilder.functionVariadicA(STD_STR);
	public static final String RND_LIST_SYN				= SyntaxStringBuilder.functionVariadicA(RND_LIST_STR);
	public static final String COALESCE_SYN				= SyntaxStringBuilder.functionVariadicA(COALESCE_STR);
	public static final String OR_SYN					= SyntaxStringBuilder.functionVariadicA(OR_STR);
	public static final String AND_SYN					= SyntaxStringBuilder.functionVariadicA(AND_STR);
	public static final String XOR_SYN					= SyntaxStringBuilder.functionVariadicA(XOR_STR);
	public static final String ARGMIN_SYN				= SyntaxStringBuilder.functionVariadicA(ARGMIN_STR);
	public static final String ARGMAX_SYN				= SyntaxStringBuilder.functionVariadicA(ARGMAX_STR);
	public static final String MEDIAN_SYN				= SyntaxStringBuilder.functionVariadicA(MEDIAN_STR);
	public static final String MODE_SYN					= SyntaxStringBuilder.functionVariadicA(MODE_STR);
	public static final String BASE_SYN					= SyntaxStringBuilder.functionVariadicBD(BASE_STR);
	public static final String NDIST_SYN				= SyntaxStringBuilder.functionVariadicV(NDIST_STR);
	/*
	 * FunctionVariadic - tokens description.
	 */
	public static final String IFF_DESC 				= "If function";
	public static final String MIN_DESC 				= "Minimum function";
	public static final String MAX_DESC 				= "Maximum function";
	public static final String CONT_FRAC_DESC			= "Continued fraction";
	public static final String CONT_POL_DESC			= "Continued polynomial";
	public static final String GCD_DESC					= "Greatest common divisor";
	public static final String LCM_DESC					= "Least common multiple";
	public static final String SUM_DESC					= "Summation operator";
	public static final String PROD_DESC				= "Multiplication";
	public static final String AVG_DESC					= "Mean / average value";
	public static final String VAR_DESC					= "Bias-corrected sample variance";
	public static final String STD_DESC					= "Bias-corrected sample standard deviation";
	public static final String RND_LIST_DESC			= "Random number from given list of numbers";
	public static final String COALESCE_DESC			= "Returns the first non-NaN value";
	public static final String OR_DESC					= "Logical disjunction (OR) - variadic";
	public static final String AND_DESC					= "Logical conjunction (AND) - variadic";
	public static final String XOR_DESC					= "Exclusive or (XOR) - variadic";
	public static final String ARGMIN_DESC				= "Arguments / indices of the minima";
	public static final String ARGMAX_DESC				= "Arguments / indices of the maxima";
	public static final String MEDIAN_DESC				= "The sample median";
	public static final String MODE_DESC				= "Mode - the value that appears most often";
	public static final String BASE_DESC				= "Returns number in given numeral system base represented by list of digits";
	public static final String NDIST_DESC				= "Number of distinct values";
	/*
	 * FunctionVariadic - since.
	 */
	public static final String IFF_SINCE 				= mXparser.NAMEv10;
	public static final String MIN_SINCE 				= mXparser.NAMEv10;
	public static final String MAX_SINCE 				= mXparser.NAMEv10;
	public static final String CONT_FRAC_SINCE			= mXparser.NAMEv10;
	public static final String CONT_POL_SINCE			= mXparser.NAMEv10;
	public static final String GCD_SINCE				= mXparser.NAMEv10;
	public static final String LCM_SINCE				= mXparser.NAMEv10;
	public static final String SUM_SINCE				= mXparser.NAMEv24;
	public static final String PROD_SINCE				= mXparser.NAMEv24;
	public static final String AVG_SINCE				= mXparser.NAMEv24;
	public static final String VAR_SINCE				= mXparser.NAMEv24;
	public static final String STD_SINCE				= mXparser.NAMEv24;
	public static final String RND_LIST_SINCE			= mXparser.NAMEv30;
	public static final String COALESCE_SINCE			= mXparser.NAMEv41;
	public static final String OR_SINCE					= mXparser.NAMEv41;
	public static final String AND_SINCE				= mXparser.NAMEv41;
	public static final String XOR_SINCE				= mXparser.NAMEv41;
	public static final String ARGMIN_SINCE				= mXparser.NAMEv41;
	public static final String ARGMAX_SINCE				= mXparser.NAMEv41;
	public static final String MEDIAN_SINCE				= mXparser.NAMEv41;
	public static final String MODE_SINCE				= mXparser.NAMEv41;
	public static final String BASE_SINCE				= mXparser.NAMEv41;
	public static final String NDIST_SINCE				= mXparser.NAMEv41;
}

