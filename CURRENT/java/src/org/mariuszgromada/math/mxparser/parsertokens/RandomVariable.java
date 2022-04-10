/*
 * @(#)RandomVariable.java        5.0.0    2022-04-10
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
 * Random variables - mXparser tokens definition.
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
