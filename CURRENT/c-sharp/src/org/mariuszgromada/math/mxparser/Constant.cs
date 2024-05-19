/*
 * @(#)Constant.cs        6.0.0    2024-05-19
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
	 * @version        5.2.0
	 *
	 * @see RecursiveArgument
	 * @see Expression
	 * @see Function
	 * @see Argument
	 *
	 */
	[CLSCompliant(true), Serializable]
	public class Constant : PrimitiveElement {
		/**
		 * When constant could not be found
		 */
		public const int NOT_FOUND = Expression.NOT_FOUND;
		/**
		 * Type identifier for constants
		 */
		public const int TYPE_ID = 104;
		public static String TYPE_DESC = ParserSymbol.NA;
        /**
		 * Status of the syntax - no syntax error
		 */
        public const bool NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
		/**
		 * Status of the syntax - syntax error
		 */
        public const bool SYNTAX_ERROR = Expression.SYNTAX_ERROR;
		/**
		 * Status of the syntax - syntax error
		 *
		 * @deprecated Planned to be removed, use {@link #SYNTAX_ERROR} instead
		 */
        [Obsolete("Planned to be removed, use SYNTAX_ERROR instead")]
        public const bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;
        /**
		 * Name of the constant
		 */
        private String constantName = StringInvariant.EMPTY;
		/**
		 * Constant value
		 */
		private double constantValue = Double.NaN;
		/**
		 * Constant description
		 */
		private String description = StringInvariant.EMPTY;
		/**
		 * Dependent expression list
		 */
		private List<Expression> relatedExpressionsList;
        /**
		 * Status of the expression syntax
		 *
		 * Please referet to the:
		 *    - NO_SYNTAX_ERRORS
		 *    - SYNTAX_ERROR
		 *    - SYNTAX_STATUS_UNKNOWN
		 */
        private bool syntaxStatus;
		/**
		 * Message after checking the syntax
		 */
		private String errorMessage = StringInvariant.EMPTY;
		private static String buildErrorMessageInvalidConstantName(String constantName) {
			return StringModel.buildErrorMessagePatternDoesNotMatchWithExamples(constantName, StringModel.STRING_RESOURCES.INVALID_CONSTANT_NAME, StringInvariant.CONSTANT_NAME_EXAMPLES);
		}
		private static String buildErrorMessageInvalidConstantDefinitionString(String constantDefinitionString) {
			return StringModel.buildErrorMessagePatternDoesNotMatchWithExamples(constantDefinitionString, StringModel.STRING_RESOURCES.INVALID_CONSTANT_DEFINITION, StringInvariant.CONSTANT_DEFINITION_EXAMPLES);
		}
		private void registerNoSyntaxErrorInDefinition() {
			syntaxStatus = NO_SYNTAX_ERRORS;
			this.errorMessage = StringModel.STRING_RESOURCES.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION;
		}
		private void registerSyntaxErrorInDefinition(String errorMessage) {
			syntaxStatus = SYNTAX_ERROR;
			this.errorMessage = errorMessage;
		}
		/**
		 * Constructor - creates constant with a given name and given value
		 *
		 *
		 * @param      constantName        the constant name
		 * @param      constantValue       the constant value
		 */
		public Constant(String constantName, double constantValue) : base(Constant.TYPE_ID) {
			relatedExpressionsList = new List<Expression>();
			if (constantName == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			String constantNameTrim = constantName.Trim();
			if (!StringUtils.regexMatch(constantNameTrim, ParserSymbol.nameOnlyTokenOptBracketsRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidConstantName(constantNameTrim));
				return;
			}
			this.constantName = constantNameTrim;
			this.constantValue = constantValue;
			registerNoSyntaxErrorInDefinition();
		}
		/**
		 * Constructor - creates constant with a given name and given value.
		 * Additionally, description is being set.
		 *
		 * @param      constantName        the constant name
		 * @param      constantValue       the constant value
		 * @param      description         the constant description
		 */
		public Constant(String constantName, double constantValue, String description) : base(Constant.TYPE_ID) {
			relatedExpressionsList = new List<Expression>();
			if (constantName == null || description == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			String constantNameTrim = constantName.Trim();
			if (!StringUtils.regexMatch(constantNameTrim, ParserSymbol.nameOnlyTokenOptBracketsRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidConstantName(constantNameTrim));
				return;
			}
			this.constantName = constantNameTrim;
			this.constantValue = constantValue;
			this.description = description;
			registerNoSyntaxErrorInDefinition();
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
			description = StringInvariant.EMPTY;
			relatedExpressionsList = new List<Expression>();
			if (constantDefinitionString == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			if (elements == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_ELEMENTS_ARE_NULL);
				return;
			}
			String constantDefinitionStringTrim = constantDefinitionString.Trim();
			if (!StringUtils.regexMatch(constantDefinitionStringTrim, ParserSymbol.constUnitgDefStrRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidConstantDefinitionString(constantDefinitionStringTrim));
				return;
			}
			HeadEqBody headEqBody = new HeadEqBody(constantDefinitionStringTrim);
			constantName = headEqBody.headTokens[0].tokenStr;
			Expression bodyExpression = new Expression(headEqBody.bodyStr, elements);
			constantValue = bodyExpression.calculate();
			syntaxStatus = bodyExpression.getSyntaxStatus();
			errorMessage = bodyExpression.getErrorMessage();
        }
		/*
		 * Private constructor used for cloning
		 */	
		private Constant(Constant constantToClone) : base(Constant.TYPE_ID) {
			constantName = constantToClone.constantName;
			constantValue = constantToClone.constantValue;
			description = constantToClone.description;
			syntaxStatus = constantToClone.syntaxStatus;
			errorMessage = constantToClone.errorMessage;
			relatedExpressionsList = new List<Expression>();
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
			if (constantName == null) {
				if (!syntaxStatus)
					registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			String constantNameTrim = constantName.Trim();
			if (this.constantName.Equals(constantNameTrim))
				return;
			if (!StringUtils.regexMatch(constantNameTrim, ParserSymbol.nameOnlyTokenOptBracketsRegExp)) {
				if (!syntaxStatus)
					registerSyntaxErrorInDefinition(buildErrorMessageInvalidConstantName(constantNameTrim));
				return;
			}
			this.constantName = constantNameTrim;
			setExpressionModifiedFlags();
			registerNoSyntaxErrorInDefinition();
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
			if (description == null)
				return;
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
		 *             ConstantValue.SYNTAX_ERROR when syntax error was found or
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
			if (expression == null)
				return;
			if (!relatedExpressionsList.Contains(expression))
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
		internal Constant cloneForThreadSafeInternal(CloneCache cloneCache) {
			Constant constantClone = cloneCache.getConstantClone(this);
			if (constantClone == null) {
				cloneCache.cacheCloneInProgress(this);
				constantClone = new Constant(this);
				cloneCache.clearCloneInProgress(this);
				cloneCache.cacheConstantClone(this, constantClone);
			}
			return constantClone;
		}
        internal Constant cloneForThreadSafeInternal(Expression relatedExpressionThatInitiatedClone, CloneCache cloneCache) {
			Constant constantClone = cloneForThreadSafeInternal(cloneCache);
			constantClone.addRelatedExpression(relatedExpressionThatInitiatedClone);
			return constantClone;
		}
		/**
		 * Creates a completely independent 1-1 clone that can be safely used
		 * by a separate thread. If the cloned element contains references
		 * to other elements (e.g. arguments, functions, constants),
		 * then they will also be cloned and the newly created element will
		 * contain references to the corresponding clones.
		 * Important - the API allows you to extract all these clones.
		 *
		 * @return Cloned object.
		 */
		public Constant cloneForThreadSafe() {
			CloneCache cloneCache = new CloneCache();
			Constant constantClone = cloneForThreadSafeInternal(cloneCache);
			cloneCache.addAllAtTheEndElements();
			cloneCache.clearCache();
			return constantClone;
		}
	}
}