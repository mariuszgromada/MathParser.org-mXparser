/*
 * @(#)Token.java        6.1.0    2024-10-14
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
package org.mariuszgromada.math.mxparser.parsertokens;

import org.mariuszgromada.math.mxparser.*;

import java.io.Serializable;
/**
 * Token recognized by mXparser after string tokenization process.
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
 * @version        6.1.0
 */
public class Token implements Serializable {
	private static final int serialClassID = 92;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);

	/**
	 * Indicator that token was not matched
	 */
	public static final int NOT_MATCHED = KeyWord.NO_DEFINITION;
	/**
	 * String token
	 */
	public String tokenStr;
	/**
	 * Key word string (if matched)
	 */
	public String keyWord;
	/**
	 * Token identifier
	 */
	public int tokenId;
	/**
	 * Token type
	 */
	public int tokenTypeId;
	/**
	 * Token level
	 */
	public int tokenLevel;
	/**
	 * Token value if number
	 */
	public double tokenValue;
	/**
	 * If token was not matched then
	 * looksLike functionality is trying asses
	 * the kind of token
	 */
	public String looksLike;
	/**
	 * Verification if the token is a left unary operator.
	 *
	 * @return true in case token is unary left operator,
	 * otherwise returns false
	 */
	public static boolean isUnaryLeftOperator(Token token) {
		if (token.tokenTypeId == Operator.TYPE_ID) {
			if (token.tokenId == Operator.SQUARE_ROOT_ID) return true;
			if (token.tokenId == Operator.CUBE_ROOT_ID) return true;
			if (token.tokenId == Operator.FOURTH_ROOT_ID) return true;
		}
		if (token.tokenTypeId == BooleanOperator.TYPE_ID) {
			if (token.tokenId == BooleanOperator.NEG_ID) return true;
		}
		if (token.tokenTypeId == BitwiseOperator.TYPE_ID) {
			if (token.tokenId == BitwiseOperator.COMPL_ID) return true;
		}
		return false;
	}
	public boolean isUnaryLeftOperator() { return isUnaryLeftOperator(this); }
	/**
	 * Verification if the token is a right unary operator.
	 *
	 * @return true in case token is unary right operator,
	 * otherwise returns false
	 */
	public static boolean isUnaryRightOperator(Token token) {
		if (token.tokenTypeId == Operator.TYPE_ID) {
			if (token.tokenId == Operator.FACT_ID) return true;
			if (token.tokenId == Operator.PERC_ID) return true;
		}
		return false;
	}
	public boolean isUnaryRightOperator() { return isUnaryRightOperator(this); }
	/**
	 * Verification if the token is a left parenthesis.
	 *
	 * @return true in case token is a left parenthesis,
	 * otherwise returns false
	 */
	public static boolean isLeftParenthesis(Token token) {
		return token.tokenTypeId == ParserSymbol.TYPE_ID && token.tokenId == ParserSymbol.LEFT_PARENTHESES_ID;
	}
	public boolean isLeftParenthesis() { return isLeftParenthesis(this); }
	/**
	 * Verification if the token is a right parenthesis.
	 *
	 * @return true in case token is a right parenthesis,
	 * otherwise returns false
	 */
	public static boolean isRightParenthesis(Token token) {
		return token.tokenTypeId == ParserSymbol.TYPE_ID && token.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID;
	}
	public boolean isRightParenthesis() { return isRightParenthesis(this); }
	/**
	 * Verification if the token is an identifier.
	 *
	 * @return true in case token is an identifier,
	 * otherwise returns false
	 */
	public static boolean isIdentifier(Token token) {
		return token.tokenTypeId == Constant.TYPE_ID ||
				token.tokenTypeId == ConstantValue.TYPE_ID ||
				token.tokenTypeId == Unit.TYPE_ID ||
				token.tokenTypeId == Argument.TYPE_ID;
	}
	public boolean isIdentifier() { return isIdentifier(this); }
	/**
	 * Verification if the token is a binary operator.
	 *
	 * @return true in case token is a binary operator,
	 * otherwise returns false
	 */
	public static boolean isBinaryOperator(Token token) {
		if (isUnaryLeftOperator(token)) return false;
		if (isUnaryRightOperator(token)) return false;
		if (token.tokenTypeId == BinaryRelation.TYPE_ID) return true;
		if (token.tokenTypeId == BitwiseOperator.TYPE_ID) return true;
		if (token.tokenTypeId == BooleanOperator.TYPE_ID) return true;
		if (token.tokenTypeId == Operator.TYPE_ID) {
			return token.tokenId != Operator.SQUARE_ROOT_ID
					&& token.tokenId != Operator.CUBE_ROOT_ID
					&& token.tokenId != Operator.FOURTH_ROOT_ID
					&& token.tokenId != Operator.FACT_ID
					&& token.tokenId != Operator.PERC_ID;
		}
		return false;
	}
	public boolean isBinaryOperator() { return isBinaryOperator(this); }
	/**
	 * Verification if the token is a parameter separator.
	 *
	 * @return true in case token is a parameter separator,
	 * otherwise returns false
	 */
	public static boolean isParameterSeparator(Token token) {
		return token.tokenTypeId == ParserSymbol.TYPE_ID && token.tokenId == ParserSymbol.COMMA_ID;
	}
	public boolean isParameterSeparator() { return isParameterSeparator(this); }
	/**
	 * Verification if the token is a number.
	 *
	 * @return true in case token is a number,
	 * otherwise returns false
	 */
	public static boolean isNumber(Token token) {
		return token.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID && token.tokenId == ParserSymbol.NUMBER_ID;
	}
	public boolean isNumber() { return isNumber(this); }
	/**
	 * Verification if the token is represented by a special name in the form [...].
	 *
	 * @return true in case token is represented by a special name in the form [...],
	 * otherwise returns false
	 */
	public static boolean isSpecialTokenName(Token token) {
		if (token.tokenStr.length() == 0) return false;
		return token.tokenStr.charAt(0) == '[';
	}
	public boolean isSpecialTokenName() { return isSpecialTokenName(this); }
	/**
	 * Verification if the token represents unicode root operator
	 *
	 * @return true in case token represents unicode root operator
	 * otherwise returns false
	 */
	public static boolean isUnicodeRootOperator(Token token) {
		if (token.tokenTypeId == Operator.TYPE_ID) {
			if (token.tokenId == Operator.SQUARE_ROOT_ID) return true;
			if (token.tokenId == Operator.CUBE_ROOT_ID) return true;
			if (token.tokenId == Operator.FOURTH_ROOT_ID) return true;
		}
		return false;
	}
	public boolean isUnicodeRootOperator() { return isUnicodeRootOperator(this); }
	/**
	 * Creates token representing multiplication operator.
	 *
	 * @return token representing multiplication operator.
	 */
	public static Token makeMultiplyToken() {
		Token multiplyToken = new Token();
		multiplyToken.tokenTypeId = Operator.TYPE_ID;
		multiplyToken.tokenId = Operator.MULTIPLY_ID;
		multiplyToken.tokenStr = Operator.MULTIPLY_STR;
		return multiplyToken;
	}
	/**
	 * Returns token type description.
	 *
	 * @param tokenTypeId Token type id
	 * @return String representing token type description.
	 */
	public static String getTokenTypeDescription(int tokenTypeId) {
		switch (tokenTypeId) {
			case ParserSymbol.TYPE_ID: return ParserSymbol.TYPE_DESC;
			case ParserSymbol.NUMBER_TYPE_ID: return StringModel.getStringResources().NUMBER;
			case Operator.TYPE_ID: return Operator.TYPE_DESC;
			case BooleanOperator.TYPE_ID: return BooleanOperator.TYPE_DESC;
			case BinaryRelation.TYPE_ID: return BinaryRelation.TYPE_DESC;
			case Function1Arg.TYPE_ID: return Function1Arg.TYPE_DESC;
			case Function2Arg.TYPE_ID: return Function2Arg.TYPE_DESC;
			case Function3Arg.TYPE_ID: return Function3Arg.TYPE_DESC;
			case FunctionVariadic.TYPE_ID: return FunctionVariadic.TYPE_DESC;
			case CalculusOperator.TYPE_ID: return CalculusOperator.TYPE_DESC;
			case RandomVariable.TYPE_ID: return RandomVariable.TYPE_DESC;
			case ConstantValue.TYPE_ID: return ConstantValue.TYPE_DESC;
			case Argument.TYPE_ID: return Argument.TYPE_DESC;
			case RecursiveArgument.TYPE_ID_RECURSIVE: return RecursiveArgument.TYPE_DESC_RECURSIVE;
			case Function.TYPE_ID: return Function.TYPE_DESC;
			case Constant.TYPE_ID: return Constant.TYPE_DESC;
			case Unit.TYPE_ID: return Unit.TYPE_DESC;
			case BitwiseOperator.TYPE_ID: return BitwiseOperator.TYPE_DESC;
		}
		return "";
	}
	/**
	 * Default constructor
	 */
	public Token() {
		tokenStr = ParserSymbol.EMPTY;
		keyWord = ParserSymbol.EMPTY;
		tokenId = NOT_MATCHED;
		tokenTypeId = NOT_MATCHED;
		tokenLevel = -1;
		tokenValue = Double.NaN;
		looksLike = ParserSymbol.EMPTY;
	}
	/**
	 * Token cloning.
	 */
	public static Token clone(Token token) {
		Token tokenClone = new Token();
		tokenClone.keyWord = token.keyWord;
		tokenClone.tokenStr = token.tokenStr;
		tokenClone.tokenId = token.tokenId;
		tokenClone.tokenLevel = token.tokenLevel;
		tokenClone.tokenTypeId = token.tokenTypeId;
		tokenClone.tokenValue = token.tokenValue;
		tokenClone.looksLike = token.looksLike;
		return tokenClone;
	}
	public Token clone() { return clone(this); }
}