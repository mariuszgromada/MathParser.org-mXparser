/*
 * @(#)SyntaxCheckerConstants.hpp        6.1.0    2024-10-06
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use and commercial
 * use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE
 * include:
 *
 * 1. Non-commercial open-source software.
 * 2. Non-commercial mobile applications.
 * 3. Non-commercial desktop software.
 * 4. Non-commercial web applications/solutions.
 * 5. Non-commercial use in research, scholarly and educational context.
 *
 * The above list is non-exhaustive and illustrative only.
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
 * The above list is non-exhaustive and illustrative only.
 *
 * IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE
 * APPROPRIATE LICENSE FROM "INFIMA" ONLINE STORE, STORE ADDRESS:
 *
 * 1. https://mathparser.org/order-commercial-license
 * 2. https://payhip.com/infima
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms,
 * with or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain the unmodified content of
 *    the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,
 *    the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including the
 *    definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the
 *    NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call is used only internally for logging purposes, and
 *    there is no connection with other external services, and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow
 *     you to download, install, and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT, and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the test environments conditions
 *     and not for profit generation.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all terms and
 *     conditions below, and you have acknowledged and understood the
 *     following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive
 *     license with the following rights:
 *  3. The license is granted only to you, the person or entity that made
 *     the purchase, identified and confirmed by the data provided during
 *     the purchase.
 *  4. If you purchased a license in the "ONE-TIME PURCHASE" model, the
 *     license is granted only for the PRODUCT version specified in the
 *     purchase. The upgrade policy gives you additional rights, described
 *     in the dedicated section below.
 *  5. If you purchased a license in the "SUBSCRIPTION" model, you may
 *     install and use any version of the PRODUCT during the subscription
 *     validity period.
 *  6. If you purchased a "SINGLE LICENSE" you may install and use the
 *     PRODUCT on/from one workstation that is located/accessible at/from
 *     any of your premises.
 *  7. Additional copies of the PRODUCT may be installed and used on/from
 *     more than one workstation, limited to the number of workstations
 *     purchased per order.
 *  8. If you purchased a "SITE LICENSE", the PRODUCT may be installed
 *     and used on/from all workstations located/accessible at/from any
 *     of your premises.
 *  9. You may incorporate the unmodified PRODUCT into your own products
 *     and software.
 * 10. If you purchased a license with the "SOURCE CODE" option, you may
 *     modify the PRODUCT's source code and incorporate the modified source
 *     code into your own products and/or software.
 * 11. Provided that the license validity period has not expired, you may
 *     distribute your product and/or software with the incorporated
 *     PRODUCT royalty-free.
 * 12. You may make copies of the PRODUCT for backup and archival purposes.
 * 13. Any form of redistribution requires confirmation and signature of
 *     the COMMERCIAL USE by successfully calling the method:
 *        License.iConfirmCommercialUse(...)
 *     The method call is used only internally for logging purposes, and
 *     there is no connection with other external services, and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to
 *     you in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies/users of your final product
 * (delivered to your end-users) is not limited.
 *
 * Below are some examples to help you select the right license size:
 *
 * Example 1: Single Workstation License
 * Only one developer works on the development of your application. You do
 * not use separate environments for testing, meaning you design, create,
 * test, and compile your final application on one environment. In this
 * case, you need a license for a single workstation.
 *
 * Example 2: Up to 5 Workstations License
 * Two developers are working on the development of your application.
 * Additionally, one tester conducts tests in a separate environment.
 * You use three workstations in total, so you need a license for up to
 * five workstations.
 *
 * Example 3: Up to 20 Workstations License
 * Ten developers are working on the development of your application.
 * Additionally, five testers conduct tests in separate environments.
 * You use fifteen workstations in total, so you need a license for
 * up to twenty workstations.
 *
 * Example 4: Site License
 * Several dozen developers and testers work on the development of your
 * application using multiple environments. You have a large,
 * multi-disciplinary team involved in creating your solution. As your team
 * is growing and you want to avoid licensing limitations, the best choice
 * would be a site license.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install
 *    all releases specified in the [PATCH] version (e.g., 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.
 *
 * CONTACT
 *
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://mathparser.org/order-commercial-license
 * - online store: https://payhip.com/infima
 */

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_SYNTAXCHECKER_SYNTAXCHECKERCONSTANTS_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_SYNTAXCHECKER_SYNTAXCHECKERCONSTANTS_H

/**
 * Token literal values and constants.
 * Generated by org.javacc.parser.OtherFilesGenCPP#start()
 */

#include "org/mariuszgromada/math/mxparser/syntaxchecker/JavaCC.hpp"

namespace org::mariuszgromada::math::mxparser::syntaxchecker {
	/** End of File. */
	const int _EOF = 0;
	/** RegularExpression Id. */
	const int WHITESPACE = 5;
	/** RegularExpression Id. */
	const int LETTER = 6;
	/** RegularExpression Id. */
	const int DIGIT = 7;
	/** RegularExpression Id. */
	const int DIGIT_B1 = 8;
	/** RegularExpression Id. */
	const int DIGIT_B2 = 9;
	/** RegularExpression Id. */
	const int DIGIT_B3 = 10;
	/** RegularExpression Id. */
	const int DIGIT_B4 = 11;
	/** RegularExpression Id. */
	const int DIGIT_B5 = 12;
	/** RegularExpression Id. */
	const int DIGIT_B6 = 13;
	/** RegularExpression Id. */
	const int DIGIT_B7 = 14;
	/** RegularExpression Id. */
	const int DIGIT_B8 = 15;
	/** RegularExpression Id. */
	const int DIGIT_B9 = 16;
	/** RegularExpression Id. */
	const int DIGIT_B10 = 17;
	/** RegularExpression Id. */
	const int DIGIT_B11 = 18;
	/** RegularExpression Id. */
	const int DIGIT_B12 = 19;
	/** RegularExpression Id. */
	const int DIGIT_B13 = 20;
	/** RegularExpression Id. */
	const int DIGIT_B14 = 21;
	/** RegularExpression Id. */
	const int DIGIT_B15 = 22;
	/** RegularExpression Id. */
	const int DIGIT_B16 = 23;
	/** RegularExpression Id. */
	const int DIGIT_B17 = 24;
	/** RegularExpression Id. */
	const int DIGIT_B18 = 25;
	/** RegularExpression Id. */
	const int DIGIT_B19 = 26;
	/** RegularExpression Id. */
	const int DIGIT_B20 = 27;
	/** RegularExpression Id. */
	const int DIGIT_B21 = 28;
	/** RegularExpression Id. */
	const int DIGIT_B22 = 29;
	/** RegularExpression Id. */
	const int DIGIT_B23 = 30;
	/** RegularExpression Id. */
	const int DIGIT_B24 = 31;
	/** RegularExpression Id. */
	const int DIGIT_B25 = 32;
	/** RegularExpression Id. */
	const int DIGIT_B26 = 33;
	/** RegularExpression Id. */
	const int DIGIT_B27 = 34;
	/** RegularExpression Id. */
	const int DIGIT_B28 = 35;
	/** RegularExpression Id. */
	const int DIGIT_B29 = 36;
	/** RegularExpression Id. */
	const int DIGIT_B30 = 37;
	/** RegularExpression Id. */
	const int DIGIT_B31 = 38;
	/** RegularExpression Id. */
	const int DIGIT_B32 = 39;
	/** RegularExpression Id. */
	const int DIGIT_B33 = 40;
	/** RegularExpression Id. */
	const int DIGIT_B34 = 41;
	/** RegularExpression Id. */
	const int DIGIT_B35 = 42;
	/** RegularExpression Id. */
	const int DIGIT_B36 = 43;
	/** RegularExpression Id. */
	const int LETTERS = 44;
	/** RegularExpression Id. */
	const int INTEGER = 45;
	/** RegularExpression Id. */
	const int DEC_FRACT = 46;
	/** RegularExpression Id. */
	const int DEC_FRACT_OR_INT = 47;
	/** RegularExpression Id. */
	const int DECIMAL_NUMBER = 48;
	/** RegularExpression Id. */
	const int BASE1 = 49;
	/** RegularExpression Id. */
	const int BASE2 = 50;
	/** RegularExpression Id. */
	const int BASE3 = 51;
	/** RegularExpression Id. */
	const int BASE4 = 52;
	/** RegularExpression Id. */
	const int BASE5 = 53;
	/** RegularExpression Id. */
	const int BASE6 = 54;
	/** RegularExpression Id. */
	const int BASE7 = 55;
	/** RegularExpression Id. */
	const int BASE8 = 56;
	/** RegularExpression Id. */
	const int BASE9 = 57;
	/** RegularExpression Id. */
	const int BASE10 = 58;
	/** RegularExpression Id. */
	const int BASE11 = 59;
	/** RegularExpression Id. */
	const int BASE12 = 60;
	/** RegularExpression Id. */
	const int BASE13 = 61;
	/** RegularExpression Id. */
	const int BASE14 = 62;
	/** RegularExpression Id. */
	const int BASE15 = 63;
	/** RegularExpression Id. */
	const int BASE16 = 64;
	/** RegularExpression Id. */
	const int BASE17 = 65;
	/** RegularExpression Id. */
	const int BASE18 = 66;
	/** RegularExpression Id. */
	const int BASE19 = 67;
	/** RegularExpression Id. */
	const int BASE20 = 68;
	/** RegularExpression Id. */
	const int BASE21 = 69;
	/** RegularExpression Id. */
	const int BASE22 = 70;
	/** RegularExpression Id. */
	const int BASE23 = 71;
	/** RegularExpression Id. */
	const int BASE24 = 72;
	/** RegularExpression Id. */
	const int BASE25 = 73;
	/** RegularExpression Id. */
	const int BASE26 = 74;
	/** RegularExpression Id. */
	const int BASE27 = 75;
	/** RegularExpression Id. */
	const int BASE28 = 76;
	/** RegularExpression Id. */
	const int BASE29 = 77;
	/** RegularExpression Id. */
	const int BASE30 = 78;
	/** RegularExpression Id. */
	const int BASE31 = 79;
	/** RegularExpression Id. */
	const int BASE32 = 80;
	/** RegularExpression Id. */
	const int BASE33 = 81;
	/** RegularExpression Id. */
	const int BASE34 = 82;
	/** RegularExpression Id. */
	const int BASE35 = 83;
	/** RegularExpression Id. */
	const int BASE36 = 84;
	/** RegularExpression Id. */
	const int BINARY = 85;
	/** RegularExpression Id. */
	const int OCTAL = 86;
	/** RegularExpression Id. */
	const int HEXADECIMAL = 87;
	/** RegularExpression Id. */
	const int FRACTION = 88;
	/** RegularExpression Id. */
	const int LEFT_PAR = 89;
	/** RegularExpression Id. */
	const int RIGHT_PAR = 90;
	/** RegularExpression Id. */
	const int COMMA = 91;
	/** RegularExpression Id. */
	const int SEMICOLON = 92;
	/** RegularExpression Id. */
	const int PLUS = 93;
	/** RegularExpression Id. */
	const int MINUS = 94;
	/** RegularExpression Id. */
	const int MULTIPLY = 95;
	/** RegularExpression Id. */
	const int DIV = 96;
	/** RegularExpression Id. */
	const int POWER = 97;
	/** RegularExpression Id. */
	const int TETRATION = 98;
	/** RegularExpression Id. */
	const int MODULO = 99;
	/** RegularExpression Id. */
	const int FACTORIAL = 100;
	/** RegularExpression Id. */
	const int PERCENTAGE = 101;
	/** RegularExpression Id. */
	const int EQ = 102;
	/** RegularExpression Id. */
	const int NEQ = 103;
	/** RegularExpression Id. */
	const int LT = 104;
	/** RegularExpression Id. */
	const int LEQ = 105;
	/** RegularExpression Id. */
	const int GT = 106;
	/** RegularExpression Id. */
	const int GEQ = 107;
	/** RegularExpression Id. */
	const int OR = 108;
	/** RegularExpression Id. */
	const int AND = 109;
	/** RegularExpression Id. */
	const int NOT = 110;
	/** RegularExpression Id. */
	const int UNICODE_ROOT = 111;
	/** RegularExpression Id. */
	const int BITNOT = 112;
	/** RegularExpression Id. */
	const int IMP = 113;
	/** RegularExpression Id. */
	const int CIMP = 114;
	/** RegularExpression Id. */
	const int NIMP = 115;
	/** RegularExpression Id. */
	const int CNIMP = 116;
	/** RegularExpression Id. */
	const int NAND = 117;
	/** RegularExpression Id. */
	const int EQV = 118;
	/** RegularExpression Id. */
	const int NOR = 119;
	/** RegularExpression Id. */
	const int BITWISE = 120;
	/** RegularExpression Id. */
	const int XOR = 121;
	/** RegularExpression Id. */
	const int IDENTIFIER = 122;
	/** RegularExpression Id. */
	const int LEFT_OR_RIGHT_DER = 123;
	/** RegularExpression Id. */
	const int UNICODE_NAME = 124;
	/** RegularExpression Id. */
	const int OTHER_CHAR = 125;
	/** RegularExpression Id. */
	const int INVALID_TOKEN = 130;
	/** RegularExpression Id. */
	const int UNEXPECTED_CHAR = 131;

	/** Lexical state. */
	const int DEFAULT = 0;

	/** Literal token values. */
	static const JJChar tokenImage_arr_0[] =
			{0x3c, 0x45, 0x4f, 0x46, 0x3e, 0};
	static const JJChar tokenImage_arr_1[] =
			{0x22, 0x20, 0x22, 0};
	static const JJChar tokenImage_arr_2[] =
			{0x22, 0x9, 0x22, 0};
	static const JJChar tokenImage_arr_3[] =
			{0x22, 0xa, 0x22, 0};
	static const JJChar tokenImage_arr_4[] =
			{0x22, 0xd, 0x22, 0};
	static const JJChar tokenImage_arr_5[] =
			{0x22, 0x3c, 0x57, 0x48, 0x49, 0x54, 0x45, 0x53, 0x50, 0x41, 0x43, 0x45, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_6[] =
			{0x22, 0x3c, 0x4c, 0x45, 0x54, 0x54, 0x45, 0x52, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_7[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_8[] =
			{0x22, 0x31, 0x22, 0};
	static const JJChar tokenImage_arr_9[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_10[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x33, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_11[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x34, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_12[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x35, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_13[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x36, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_14[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x37, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_15[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x38, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_16[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x39, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_17[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x30, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_18[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x31, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_19[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x32, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_20[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x33, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_21[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x34, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_22[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x35, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_23[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x36, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_24[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x37, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_25[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x38, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_26[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x31, 0x39, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_27[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x30, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_28[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x31, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_29[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x32, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_30[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x33, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_31[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x34, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_32[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x35, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_33[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x36, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_34[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x37, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_35[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x38, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_36[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x32, 0x39, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_37[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x33, 0x30, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_38[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x33, 0x31, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_39[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x33, 0x32, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_40[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x33, 0x33, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_41[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x33, 0x34, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_42[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x33, 0x35, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_43[] =
			{0x22, 0x3c, 0x44, 0x49, 0x47, 0x49, 0x54, 0x5f, 0x42, 0x33, 0x36, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_44[] =
			{0x22, 0x3c, 0x4c, 0x45, 0x54, 0x54, 0x45, 0x52, 0x53, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_45[] =
			{0x22, 0x3c, 0x49, 0x4e, 0x54, 0x45, 0x47, 0x45, 0x52, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_46[] =
			{0x22, 0x3c, 0x44, 0x45, 0x43, 0x5f, 0x46, 0x52, 0x41, 0x43, 0x54, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_47[] =
	{
		0x22, 0x3c, 0x44, 0x45, 0x43, 0x5f, 0x46, 0x52, 0x41, 0x43, 0x54, 0x5f, 0x4f, 0x52, 0x5f, 0x49, 0x4e, 0x54,
		0x3e, 0x22, 0
	};
	static const JJChar tokenImage_arr_48[] =
			{0x22, 0x3c, 0x44, 0x45, 0x43, 0x49, 0x4d, 0x41, 0x4c, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_49[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_50[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_51[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x33, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_52[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x34, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_53[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x35, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_54[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x36, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_55[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x37, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_56[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x38, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_57[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x39, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_58[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x30, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_59[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x31, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_60[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x32, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_61[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x33, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_62[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x34, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_63[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x35, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_64[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x36, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_65[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x37, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_66[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x38, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_67[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x31, 0x39, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_68[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x30, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_69[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x31, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_70[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x32, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_71[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x33, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_72[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x34, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_73[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x35, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_74[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x36, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_75[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x37, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_76[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x38, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_77[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x32, 0x39, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_78[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x33, 0x30, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_79[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x33, 0x31, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_80[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x33, 0x32, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_81[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x33, 0x33, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_82[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x33, 0x34, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_83[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x33, 0x35, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_84[] =
			{0x22, 0x3c, 0x42, 0x41, 0x53, 0x45, 0x33, 0x36, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_85[] =
			{0x22, 0x3c, 0x42, 0x49, 0x4e, 0x41, 0x52, 0x59, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_86[] =
			{0x22, 0x3c, 0x4f, 0x43, 0x54, 0x41, 0x4c, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_87[] =
			{0x22, 0x3c, 0x48, 0x45, 0x58, 0x41, 0x44, 0x45, 0x43, 0x49, 0x4d, 0x41, 0x4c, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_88[] =
			{0x22, 0x3c, 0x46, 0x52, 0x41, 0x43, 0x54, 0x49, 0x4f, 0x4e, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_89[] =
			{0x22, 0x28, 0x22, 0};
	static const JJChar tokenImage_arr_90[] =
			{0x22, 0x29, 0x22, 0};
	static const JJChar tokenImage_arr_91[] =
			{0x22, 0x2c, 0x22, 0};
	static const JJChar tokenImage_arr_92[] =
			{0x22, 0x3b, 0x22, 0};
	static const JJChar tokenImage_arr_93[] =
			{0x22, 0x2b, 0x22, 0};
	static const JJChar tokenImage_arr_94[] =
			{0x22, 0x2d, 0x22, 0};
	static const JJChar tokenImage_arr_95[] =
			{0x22, 0x3c, 0x4d, 0x55, 0x4c, 0x54, 0x49, 0x50, 0x4c, 0x59, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_96[] =
			{0x22, 0x3c, 0x44, 0x49, 0x56, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_97[] =
			{0x22, 0x5e, 0x22, 0};
	static const JJChar tokenImage_arr_98[] =
			{0x22, 0x5e, 0x5e, 0x22, 0};
	static const JJChar tokenImage_arr_99[] =
			{0x22, 0x23, 0x22, 0};
	static const JJChar tokenImage_arr_100[] =
			{0x22, 0x21, 0x22, 0};
	static const JJChar tokenImage_arr_101[] =
			{0x22, 0x25, 0x22, 0};
	static const JJChar tokenImage_arr_102[] =
			{0x22, 0x3c, 0x45, 0x51, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_103[] =
			{0x22, 0x3c, 0x4e, 0x45, 0x51, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_104[] =
			{0x22, 0x3c, 0x22, 0};
	static const JJChar tokenImage_arr_105[] =
			{0x22, 0x3c, 0x4c, 0x45, 0x51, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_106[] =
			{0x22, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_107[] =
			{0x22, 0x3c, 0x47, 0x45, 0x51, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_108[] =
			{0x22, 0x3c, 0x4f, 0x52, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_109[] =
			{0x22, 0x3c, 0x41, 0x4e, 0x44, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_110[] =
			{0x22, 0x3c, 0x4e, 0x4f, 0x54, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_111[] =
			{0x22, 0x3c, 0x55, 0x4e, 0x49, 0x43, 0x4f, 0x44, 0x45, 0x5f, 0x52, 0x4f, 0x4f, 0x54, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_112[] =
			{0x22, 0x40, 0x7e, 0x22, 0};
	static const JJChar tokenImage_arr_113[] =
			{0x22, 0x3c, 0x49, 0x4d, 0x50, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_114[] =
			{0x22, 0x3c, 0x43, 0x49, 0x4d, 0x50, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_115[] =
			{0x22, 0x3c, 0x4e, 0x49, 0x4d, 0x50, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_116[] =
			{0x22, 0x3c, 0x43, 0x4e, 0x49, 0x4d, 0x50, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_117[] =
			{0x22, 0x3c, 0x4e, 0x41, 0x4e, 0x44, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_118[] =
			{0x22, 0x3c, 0x45, 0x51, 0x56, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_119[] =
			{0x22, 0x3c, 0x4e, 0x4f, 0x52, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_120[] =
			{0x22, 0x3c, 0x42, 0x49, 0x54, 0x57, 0x49, 0x53, 0x45, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_121[] =
			{0x22, 0x3c, 0x58, 0x4f, 0x52, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_122[] =
			{0x22, 0x3c, 0x49, 0x44, 0x45, 0x4e, 0x54, 0x49, 0x46, 0x49, 0x45, 0x52, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_123[] =
	{
		0x22, 0x3c, 0x4c, 0x45, 0x46, 0x54, 0x5f, 0x4f, 0x52, 0x5f, 0x52, 0x49, 0x47, 0x48, 0x54, 0x5f, 0x44, 0x45,
		0x52, 0x3e, 0x22, 0
	};
	static const JJChar tokenImage_arr_124[] =
			{0x22, 0x3c, 0x55, 0x4e, 0x49, 0x43, 0x4f, 0x44, 0x45, 0x5f, 0x4e, 0x41, 0x4d, 0x45, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_125[] =
			{0x22, 0x3c, 0x4f, 0x54, 0x48, 0x45, 0x52, 0x5f, 0x43, 0x48, 0x41, 0x52, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_126[] =
			{0x22, 0x5b, 0x25, 0x5d, 0x22, 0};
	static const JJChar tokenImage_arr_127[] =
			{0x22, 0x5b, 0x25, 0x25, 0x5d, 0x22, 0};
	static const JJChar tokenImage_arr_128[] =
			{0x22, 0x5b, 0x22, 0};
	static const JJChar tokenImage_arr_129[] =
			{0x22, 0x5d, 0x22, 0};
	static const JJChar tokenImage_arr_130[] =
			{0x22, 0x3c, 0x49, 0x4e, 0x56, 0x41, 0x4c, 0x49, 0x44, 0x5f, 0x54, 0x4f, 0x4b, 0x45, 0x4e, 0x3e, 0x22, 0};
	static const JJChar tokenImage_arr_131[] =
	{
		0x22, 0x3c, 0x55, 0x4e, 0x45, 0x58, 0x50, 0x45, 0x43, 0x54, 0x45, 0x44, 0x5f, 0x43, 0x48, 0x41, 0x52, 0x3e,
		0x22, 0
	};
	static const JJChar *const tokenImage[] = {
		tokenImage_arr_0,
		tokenImage_arr_1,
		tokenImage_arr_2,
		tokenImage_arr_3,
		tokenImage_arr_4,
		tokenImage_arr_5,
		tokenImage_arr_6,
		tokenImage_arr_7,
		tokenImage_arr_8,
		tokenImage_arr_9,
		tokenImage_arr_10,
		tokenImage_arr_11,
		tokenImage_arr_12,
		tokenImage_arr_13,
		tokenImage_arr_14,
		tokenImage_arr_15,
		tokenImage_arr_16,
		tokenImage_arr_17,
		tokenImage_arr_18,
		tokenImage_arr_19,
		tokenImage_arr_20,
		tokenImage_arr_21,
		tokenImage_arr_22,
		tokenImage_arr_23,
		tokenImage_arr_24,
		tokenImage_arr_25,
		tokenImage_arr_26,
		tokenImage_arr_27,
		tokenImage_arr_28,
		tokenImage_arr_29,
		tokenImage_arr_30,
		tokenImage_arr_31,
		tokenImage_arr_32,
		tokenImage_arr_33,
		tokenImage_arr_34,
		tokenImage_arr_35,
		tokenImage_arr_36,
		tokenImage_arr_37,
		tokenImage_arr_38,
		tokenImage_arr_39,
		tokenImage_arr_40,
		tokenImage_arr_41,
		tokenImage_arr_42,
		tokenImage_arr_43,
		tokenImage_arr_44,
		tokenImage_arr_45,
		tokenImage_arr_46,
		tokenImage_arr_47,
		tokenImage_arr_48,
		tokenImage_arr_49,
		tokenImage_arr_50,
		tokenImage_arr_51,
		tokenImage_arr_52,
		tokenImage_arr_53,
		tokenImage_arr_54,
		tokenImage_arr_55,
		tokenImage_arr_56,
		tokenImage_arr_57,
		tokenImage_arr_58,
		tokenImage_arr_59,
		tokenImage_arr_60,
		tokenImage_arr_61,
		tokenImage_arr_62,
		tokenImage_arr_63,
		tokenImage_arr_64,
		tokenImage_arr_65,
		tokenImage_arr_66,
		tokenImage_arr_67,
		tokenImage_arr_68,
		tokenImage_arr_69,
		tokenImage_arr_70,
		tokenImage_arr_71,
		tokenImage_arr_72,
		tokenImage_arr_73,
		tokenImage_arr_74,
		tokenImage_arr_75,
		tokenImage_arr_76,
		tokenImage_arr_77,
		tokenImage_arr_78,
		tokenImage_arr_79,
		tokenImage_arr_80,
		tokenImage_arr_81,
		tokenImage_arr_82,
		tokenImage_arr_83,
		tokenImage_arr_84,
		tokenImage_arr_85,
		tokenImage_arr_86,
		tokenImage_arr_87,
		tokenImage_arr_88,
		tokenImage_arr_89,
		tokenImage_arr_90,
		tokenImage_arr_91,
		tokenImage_arr_92,
		tokenImage_arr_93,
		tokenImage_arr_94,
		tokenImage_arr_95,
		tokenImage_arr_96,
		tokenImage_arr_97,
		tokenImage_arr_98,
		tokenImage_arr_99,
		tokenImage_arr_100,
		tokenImage_arr_101,
		tokenImage_arr_102,
		tokenImage_arr_103,
		tokenImage_arr_104,
		tokenImage_arr_105,
		tokenImage_arr_106,
		tokenImage_arr_107,
		tokenImage_arr_108,
		tokenImage_arr_109,
		tokenImage_arr_110,
		tokenImage_arr_111,
		tokenImage_arr_112,
		tokenImage_arr_113,
		tokenImage_arr_114,
		tokenImage_arr_115,
		tokenImage_arr_116,
		tokenImage_arr_117,
		tokenImage_arr_118,
		tokenImage_arr_119,
		tokenImage_arr_120,
		tokenImage_arr_121,
		tokenImage_arr_122,
		tokenImage_arr_123,
		tokenImage_arr_124,
		tokenImage_arr_125,
		tokenImage_arr_126,
		tokenImage_arr_127,
		tokenImage_arr_128,
		tokenImage_arr_129,
		tokenImage_arr_130,
		tokenImage_arr_131,
	};
} // namespace org::mariuszgromada::math::mxparser::syntaxchecker

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_SYNTAXCHECKER_SYNTAXCHECKERCONSTANTS_H

/* Generated By:JavaCC: Do not edit this line. ParseException.h Version 7.0 */
/* JavaCCOptions:STATIC=false,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */