/*
 * @(#)Constant.cs        5.0.0    2022-04-10
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
using org.mariuszgromada.math.mxparser.parsertokens;
using System;
using System.Collections.Generic;

namespace org.mariuszgromada.math.mxparser {
	/**
	 * Constant class provides ability to declare constants.
	 * Constants can be used in further processing by any expression,
	 * dependent or recursive argument, function, etc...
	 * <p>
	 * When creating a constant you should avoid names reserved as
	 * parser keywords, in general words known in mathematical language
	 * as function names, operators (for example:
	 * sin, cos, +, -, pi, e, etc...). Please be informed that after associating
	 * the constant with the expression, function or dependent/recursive argument
	 * its name will be recognized by the parser as reserved key word.
	 * It means that it could not be the same as any other key word known
	 * by the parser for this particular expression.
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
	 *
	 * @see RecursiveArgument
	 * @see Expression
	 * @see Function
	 * @see Argument
	 *
	 */
	[CLSCompliant(true)]
	public class Constant : PrimitiveElement {
		/**
		 * When constant could not be found
		 */
		public const int NOT_FOUND = Expression.NOT_FOUND;
		/**
		 * Type identifier for constants
		 */
		public const int TYPE_ID			= 104;
		public const String TYPE_DESC		= "User defined constant";
		/**
		 * Status of the Expression syntax
		 */
		public const bool NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
		public const bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
		private const String NO_SYNTAX_ERROR_MSG = "Constant - no syntax errors.";
		/**
		 * Name of the constant
		 */
		private String constantName;
		/**
		 * COnstant value
		 */
		private double constantValue;
		/**
		 * Constant description
		 */
		private String description;
		/**
		 * Dependent expression list
		 */
		private List<Expression> relatedExpressionsList;
		/**
		 * Status of the expression syntax
		 *
		 * Please referet to the:
		 *    - NO_SYNTAX_ERRORS
		 *    - SYNTAX_ERROR_OR_STATUS_UNKNOWN
		 */
		private bool syntaxStatus;
		/**
		 * Message after checking the syntax
		 */
		private String errorMessage;
		/**
		 * Constructor - creates constant with a given name and given value
		 *
		 *
		 * @param      constantName        the constant name
		 * @param      constantValue       the constant value
		 */
		public Constant(String constantName, double constantValue) : base(Constant.TYPE_ID) {
			relatedExpressionsList = new List<Expression>();
			if (mXparser.regexMatch(constantName, ParserSymbol.nameOnlyTokenOptBracketsRegExp)) {
				this.constantName = constantName;
				this.constantValue = constantValue;
				description = "";
				syntaxStatus = NO_SYNTAX_ERRORS;
				errorMessage = NO_SYNTAX_ERROR_MSG;
			} else {
				syntaxStatus = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
				errorMessage = "[" + constantName + "] " + "--> invalid constant name, pattern not mathes: " + ParserSymbol.nameTokenRegExp; ;
			}
		}
		/**
		 * Constructor - creates constant with a given name and given value.
		 * Additionally description is being set.
		 *
		 * @param      constantName        the constant name
		 * @param      constantValue       the constant value
		 * @param      description         the constant description
		 */
		public Constant(String constantName, double constantValue, String description) : base(Constant.TYPE_ID) {
			relatedExpressionsList = new List<Expression>();
			if (mXparser.regexMatch(constantName, ParserSymbol.nameOnlyTokenOptBracketsRegExp)) {
				this.constantName = constantName;
				this.constantValue = constantValue;
				this.description = description;
				syntaxStatus = NO_SYNTAX_ERRORS;
				errorMessage = NO_SYNTAX_ERROR_MSG;
			}
			else {
				syntaxStatus = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
				errorMessage = "[" + constantName + "] " + "--> invalid constant name, pattern not mathes: " + ParserSymbol.nameTokenRegExp; ;
			}
		}
		/**
		 * Constructor for function definition in natural math language,
		 * for instance providing on string "f(x,y) = sin(x) + cos(x)"
		 * is enough to define function "f" with parameters "x and y"
		 * and function body "sin(x) + cos(x)".
		 *
		 * @param constantDefinitionString      Constant definition in the form
		 *                                      of one String, ie "c = 2" or "c = 2*sin(pi/3)"
		 * @param      elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 */
		public Constant(String constantDefinitionString, params PrimitiveElement[] elements) : base(Constant.TYPE_ID) {
			description = "";
			syntaxStatus = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
			relatedExpressionsList = new List<Expression>();
			if (mXparser.regexMatch(constantDefinitionString, ParserSymbol.constUnitgDefStrRegExp))
			{
				HeadEqBody headEqBody = new HeadEqBody(constantDefinitionString);
				constantName = headEqBody.headTokens[0].tokenStr;
				Expression bodyExpression = new Expression(headEqBody.bodyStr, elements);
				constantValue = bodyExpression.calculate();
				syntaxStatus = bodyExpression.getSyntaxStatus();
				errorMessage = bodyExpression.getErrorMessage();
			}
			else errorMessage = "[" + constantDefinitionString + "] " + "--> pattern not mathes: " + ParserSymbol.constArgDefStrRegExp;
		}
		/**
		 * Gets constant name
		 *
		 * @return     the constant name as string.
		 */
		public String getConstantName() {
			return constantName;
		}
		/**
		 * Sets constant name. If constant is associated with any expression
		 * then this operation will set modified flag to each related expression.
		 *
		 * @param      constantName        the constant name
		 */
		public void setConstantName(String constantName) {
			if (mXparser.regexMatch(constantName, ParserSymbol.nameOnlyTokenOptBracketsRegExp)) {
				this.constantName = constantName;
				setExpressionModifiedFlags();
			}
			else {
				syntaxStatus = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
				errorMessage = "[" + constantName + "] " + "--> invalid constant name, pattern not mathes: " + ParserSymbol.nameTokenRegExp; ;
			}
		}
		/**
		 * Sets constant value
		 * @param value   constant value
		 */
		public void setConstantValue(double constantValue) {
			this.constantValue = constantValue;
		}
		/**
		 * Gets constant value.
		 *
		 * @return     constant value as double
		 */
		public double getConstantValue() {
			return constantValue;
		}
		/**
		 * Gets constant description.
		 *
		 * @return     constant description as string.
		 */
		public String getDescription() {
			return description;
		}
		/**
		 * Sets constant description.
		 *
		 * @param      description         the constant description
		 */
		public void setDescription(String description) {
			this.description = description;
		}
		/**
		 * Method return error message after
		 *
		 * @return     Error message as string.
		 */
		public String getErrorMessage() {
			return errorMessage;
		}
		/**
		 * Gets syntax status of the expression.
		 *
		 * @return     Constant.NO_SYNTAX_ERRORS if there are no syntax errors,
		 *             ConstantValue.SYNTAX_ERROR_OR_STATUS_UNKNOWN when syntax error was found or
		 *             syntax status is unknown
		 */
		public bool getSyntaxStatus() {
			return this.syntaxStatus;
		}
		/**
		 * Adds related expression.
		 *
		 * @param      expression          the related expression.
		 */
		internal void addRelatedExpression(Expression expression) {
			if (expression != null)
				if ( !relatedExpressionsList.Contains(expression) )
					relatedExpressionsList.Add(expression);
		}
		/**
		 * Removes related expression.
		 *
		 * @param      expression          the related expression.
		 */
		internal void removeRelatedExpression(Expression expression) {
			if (expression != null)
				relatedExpressionsList.Remove(expression);
		}
		/**
		 * Sets expression modified flag to each related expression.
		 */
		void setExpressionModifiedFlags() {
			foreach (Expression e in relatedExpressionsList)
				e.setExpressionModifiedFlag();
		}
	}
}