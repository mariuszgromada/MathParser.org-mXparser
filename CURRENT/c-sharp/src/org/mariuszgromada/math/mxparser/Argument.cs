/*
 * @(#)Argument.cs        6.0.0    2024-05-19
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
	 * Argument class enables to declare the argument
	 * (variable) which can be used in further processing
	 * (in expressions, functions and dependent / recursive arguments).
	 * <br><br>
	 *
	 * For example:
	 * <ul>
	 * <li>'x' - argument in expression 'sin(x)'
	 * <li>'x' and 'y' - arguments in expression 'sin(x)+cos(y)'.
	 * <li> 'x=2*t' - dependent argument (dependent from 't') in expression 'cos(x)'
	 * </ul>
	 * <p>
	 * Using Argument class you can define two argument types:
	 * <ul>
	 * <li><b>free argument</b> - when value of argument 'x' is directly given
	 * by a number (for example 'x=5')
	 * <li><b>dependent argument</b> - when value of argument 'x' is given by
	 * expression (for example: 'x=2*a+b' - argument 'x' depends from
	 * argument/constant 'a' and argument/constant 'b' or any other
	 * possible option like function, etc...)
	 * </ul>
	 * <p>
	 * When creating an argument you should avoid names reserved as
	 * parser keywords, in general words known in mathematical language
	 * as function names, operators (for example:
	 * sin, cos, +, -, etc...). Please be informed that after associating
	 * the argument with the expression, function or dependent/recursive argument
	 * its name will be recognized by the parser as reserved key word.
	 * It means that it could not be the same as any other key word known
	 * by the parser for this particular expression. Parser is case-sensitive.
	 *
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
	 * @see Constant
	 */
	[CLSCompliant(true), Serializable]
	public class Argument : PrimitiveElement {
        /**
		 * Status of the syntax - no syntax error
		 */
        public const bool NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
        /**
		 * Status of the syntax - syntax error or syntax status unknown
		 */
        public const bool SYNTAX_ERROR = Expression.SYNTAX_ERROR;
        /**
		 * Status of the syntax - syntax error or syntax status unknown
		 *
		 * @deprecated Planned to be removed, use {@link #SYNTAX_ERROR} instead
		 */
        [Obsolete("Planned to be removed, use SYNTAX_ERROR instead")]
        public const bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;
        private const bool SYNTAX_STATUS_UNKNOWN = SYNTAX_ERROR;
		/**
		 * Double.NaN as initial value of the argument.
		 */
		public const double ARGUMENT_INITIAL_VALUE = Double.NaN;
		/**
		 * When argument was not found
		 */
		public const int NOT_FOUND = Expression.NOT_FOUND;
		/**
		 * Type indicator for free argument.
		 */
		public const int FREE_ARGUMENT = 1;
		/**
		 * Type indicator for dependent argument.
		 */
		public const int DEPENDENT_ARGUMENT = 2;
		/**
		 * Type indicator for recursive argument.
		 */
		public const int RECURSIVE_ARGUMENT = 3;
		/**
		 * Argument type id for the definition of key words
		 * known by the parser.
		 */
		public const int TYPE_ID = 101;
		public static String TYPE_DESC = ParserSymbol.NA;
		/**
		 * Argument with body based on the value or expression string.
		 *
		 * @see Argument#getArgumentBodyType()
		 */
		public const int BODY_RUNTIME = 1;
		/**
		 * Argument with body based on the extended code.
		 *
		 * @see ArgumentExtension
		 * @see Argument#getArgumentBodyType()
		 */
		public const int BODY_EXTENDED = 2;
		/**
		 * Argument body type.
		 *
		 * @see Argument#BODY_RUNTIME
		 * @see Argument#BODY_EXTENDED
		 * @see Argument#getArgumentBodyType()
		 */
		private int argumentBodyType = BODY_RUNTIME;
		/**
		 * Argument extension (body based in code)
		 *
		 * @see ArgumentExtension
		 * @see Argument#Argument(String, ArgumentExtension)
		 */
		private ArgumentExtension argumentExtension;
		/**
		 * Description of the argument.
		 */
		private String description = StringInvariant.EMPTY;
		/**
		 * Argument expression for dependent and recursive
		 * arguments.
		 */
		internal Expression argumentExpression;
		/**
		 * Argument name (x, y, arg1, my_argument, etc...)
		 */
		private String argumentName = StringInvariant.EMPTY;
        /**
		 * Syntax status registered on argument definition:
		 * - constructor, set name, ...
		 */
        protected bool syntaxStatusDefinition = SYNTAX_STATUS_UNKNOWN;
		/**
		 * Error Message registered on argument definition:
		 * - constructor, set name, ...
		 */
		private String errorMessageDefinition = StringInvariant.EMPTY;
		/**
		 * Argument type (free, dependent)
		 */
		internal int argumentType = FREE_ARGUMENT;
		/**
		 * Argument value (for free arguments).
		 */
		internal double argumentValue = ARGUMENT_INITIAL_VALUE;
		/**
		 * Index argument.
		 *
		 * @see RecursiveArgument
		 */
		protected Argument n;
        /**
         * Internal counter to avoid infinite loops while calculating
         * expression defined in the way showed by below examples
         *
         * Argument x = new Argument("x = 2*x");
         * x.addDefinitions(x);
         */
        private int recursionCallsCounter = 0;
		/**
		 * Keeps computing time
		 */
		double computingTime = 0;
		// 2 more vs Expression as to reach Expression.calculate()
		// from Argument.getArgumentValue() requires additional steps
		static int MAX_RECURSION_CALLS = mXparser.MAX_RECURSION_CALLS + 2;
		internal static void refreshMaxAllowedRecursionDepth() {
            // 2 more vs Expression as to reach Expression.calculate()
            // from Argument.getArgumentValue() requires additional steps
            MAX_RECURSION_CALLS = mXparser.MAX_RECURSION_CALLS + 2;
		}
        /*=================================================
		 *
		 * Constructors
		 *
		 *=================================================
		 */
        private static String buildErrorMessageInvalidArgumentName(String argumentName) {
			return StringModel.buildErrorMessagePatternDoesNotMatchWithExamples(argumentName, StringModel.STRING_RESOURCES.INVALID_ARGUMENT_NAME, StringInvariant.ARGUMENT_NAME_EXAMPLES);
		}
		private static String buildErrorMessageInvalidArgumentDefinition(String argumentDefinitionString, String argumentDefinitionExamples) {
			return StringModel.buildErrorMessagePatternDoesNotMatchWithExamples(argumentDefinitionString, StringModel.STRING_RESOURCES.INVALID_ARGUMENT_DEFINITION, argumentDefinitionExamples);
		}
		private static String buildErrorMessageInvalidArgumentDefinition(String argumentDefinitionString) {
			return buildErrorMessageInvalidArgumentDefinition(argumentDefinitionString, StringInvariant.ARGUMENT_DEFINITION_EXAMPLES);
		}
		private void registerNoSyntaxErrorInDefinition() {
			syntaxStatusDefinition = NO_SYNTAX_ERRORS;
			errorMessageDefinition = StringModel.STRING_RESOURCES.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION;
			if (argumentExpression == null)
				argumentExpression = new Expression();
		}
		private void registerSyntaxErrorInDefinition(String errorMessage) {
			syntaxStatusDefinition = SYNTAX_ERROR;
			errorMessageDefinition = errorMessage;
			if (argumentExpression == null)
				argumentExpression = new Expression();
		}
		/**
		 * Default constructor - creates argument based on the argument definition string.
		 *
		 * @param      argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 *
		 * @param      elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 */
		public Argument(String argumentDefinitionString, params PrimitiveElement[] elements) : base(Argument.TYPE_ID) {
            analyzeArgumentDefinitionString(false, false, argumentDefinitionString, elements);
        }
		/**
		 * Default constructor - creates argument based on the argument definition string.
		 *
		 * @param      argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                             </ul>
		 *
		 * @param      forceDependent   If true parser will try to create dependent argument
		 * @param      elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
		 */
		public Argument(String argumentDefinitionString, bool forceDependent, params PrimitiveElement[] elements) : base(Argument.TYPE_ID) {
            analyzeArgumentDefinitionString(false, forceDependent, argumentDefinitionString, elements);
        }
		/**
		 * Package level  constructor used by RecursiveArgument class
		 *
		 * @param isRecursive
		 * @param argumentDefinitionString
		 * @param elements
		 *
		 * @see RecursiveArgument
		 */
		internal Argument(bool isRecursive, String argumentDefinitionString, params PrimitiveElement[] elements) : base(Argument.TYPE_ID) {
			analyzeArgumentDefinitionString(isRecursive, false, argumentDefinitionString, elements);
		}
		/**
		 * Argument definition in one string logic
		 *
		 * @param isRecursive
		 * @param forceDependent
		 * @param argumentDefinitionString
		 * @param elements
		 */
		private void analyzeArgumentDefinitionString(bool isRecursive, bool forceDependent, String argumentDefinitionString, params PrimitiveElement[] elements) {
			if (argumentDefinitionString == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			if (elements == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_ELEMENTS_ARE_NULL);
				return;
			}
			String argumentDefinitionStringTrim = argumentDefinitionString.Trim();
			if (StringUtils.regexMatch(argumentDefinitionStringTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				argumentName = argumentDefinitionStringTrim;
				registerNoSyntaxErrorInDefinition();
				return;
			}
			if (StringUtils.regexMatch(argumentDefinitionStringTrim, ParserSymbol.constArgDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(argumentDefinitionStringTrim);
				argumentName = headEqBody.headTokens[0].tokenStr;
				Expression bodyExpr = new Expression(headEqBody.bodyStr);
				bodyExpr.setDescription(StringInvariant.INTERNAL);
				bodyExpr.setForwardErrorMessage(false);
				double bodyValue = bodyExpr.calculate();
				if (!forceDependent && bodyExpr.getSyntaxStatus() == Expression.NO_SYNTAX_ERRORS && !Double.IsNaN(bodyValue)) {
					argumentExpression = new Expression();
					argumentValue = bodyValue;
					argumentType = FREE_ARGUMENT;
				} else {
					argumentExpression = bodyExpr;
					bodyExpr.setForwardErrorMessage(true);
					addDefinitions(elements);
					argumentType = DEPENDENT_ARGUMENT;
				}
				argumentExpression.setDescription(argumentName);
				registerNoSyntaxErrorInDefinition();
				return;
			}
			if (isRecursive)
				if (StringUtils.regexMatch(argumentDefinitionStringTrim, ParserSymbol.function1ArgDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(argumentDefinitionStringTrim);
				argumentName = headEqBody.headTokens[0].tokenStr;
				argumentExpression = new Expression(headEqBody.bodyStr, elements);
				argumentExpression.setDescription(headEqBody.headStr);
				argumentType = DEPENDENT_ARGUMENT;
				n = new Argument(headEqBody.headTokens[2].tokenStr);
				registerNoSyntaxErrorInDefinition();
				return;
			} else {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentDefinition(argumentDefinitionStringTrim, StringInvariant.RECURSIVE_ARGUMENT_DEFINITION_EXAMPLES));
				return;
			}
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentDefinition(argumentDefinitionStringTrim));
		}
		/**
		 * Constructor - creates free argument.
		 *
		 * @param      argumentName   the argument name
		 * @param      argumentValue  the argument value
		 */
		public Argument(String argumentName, double argumentValue) : base(Argument.TYPE_ID) {
			if (argumentName == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			String argumentNameTrim = argumentName.Trim();
			if (!StringUtils.regexMatch(argumentNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentName(argumentNameTrim));
				return;
			}
			this.argumentName = argumentNameTrim;
			this.argumentValue = argumentValue;
			registerNoSyntaxErrorInDefinition();
		}
		/**
		 * Constructor for argument definition based on
		 * your own source code - this is via implementation
		 * of ArgumentExtension interface.
		 *
		 * @param argumentName       Argument name
		 * @param argumentExtension  Your own source code
		 */
		public Argument(String argumentName, ArgumentExtension argumentExtension) : base(Argument.TYPE_ID) {
			if (argumentName == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			if (argumentExtension == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_EXTENSION_IS_NULL);
				return;
			}
			String argumentNameTrim = argumentName.Trim();
			if (!StringUtils.regexMatch(argumentNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentName(argumentNameTrim));
				return;
			}
			this.argumentName = argumentNameTrim;
			this.argumentExtension = argumentExtension;
			argumentBodyType = BODY_EXTENDED;
			registerNoSyntaxErrorInDefinition();
		}
		/**
		 * Constructor - creates dependent argument(with hidden
		 * argument expression).
		 *
		 * @param      argumentName                  the argument name
		 * @param      argumentExpressionString      the argument expression string
		 * @param      elements                      Optional parameters (comma separated)
		 *                                           such as Arguments, Constants, Functions
		 *
		 * @see        Expression
		 * @see        PrimitiveElement
		 */
		public Argument(String argumentName, String argumentExpressionString, params PrimitiveElement[] elements) : base(Argument.TYPE_ID) {
			if (argumentName == null || argumentExpressionString == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			if (elements == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_ELEMENTS_ARE_NULL);
				return;
			}
			String argumentNameTrim = argumentName.Trim();
			if (!StringUtils.regexMatch(argumentNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentName(argumentNameTrim));
				return;
			}
			String argumentExpressionStringTrim = argumentExpressionString.Trim();
			this.argumentName = argumentNameTrim;
			argumentExpression = new Expression(argumentExpressionStringTrim, elements);
			argumentExpression.setDescription(argumentNameTrim);
			argumentType = DEPENDENT_ARGUMENT;
			registerNoSyntaxErrorInDefinition();
		}
		/*
		 * Internal constructor used for cloning 
		 */
		internal Argument(Argument argumentToClone, bool isThreadSafeClone, CloneCache cloneCache) : base(Argument.TYPE_ID) {
			argumentBodyType = argumentToClone.argumentBodyType;
			description = argumentToClone.description;
			argumentName = argumentToClone.argumentName;
			syntaxStatusDefinition = argumentToClone.syntaxStatusDefinition;
			errorMessageDefinition = argumentToClone.errorMessageDefinition;
			argumentType = argumentToClone.argumentType;
			argumentValue = argumentToClone.argumentValue;
			recursionCallsCounter = argumentToClone.recursionCallsCounter;
			computingTime = argumentToClone.computingTime;
			if (argumentToClone.argumentExtension != null)
				argumentExtension = argumentToClone.argumentExtension.clone();

			if (isThreadSafeClone) {
				if (argumentToClone.argumentExpression != null)
					argumentExpression = argumentToClone.argumentExpression.cloneForThreadSafeInternal(cloneCache);
				if (argumentToClone.n != null)
					n = argumentToClone.n.cloneForThreadSafeInternal(cloneCache);
				return;
			}

			argumentExpression = argumentToClone.argumentExpression;
			n = argumentToClone.n;
		}
		/**
		 * Sets argument description.
		 *
		 * @param      description         the argument description.
		 */
		public void setDescription(String description) {
			if (description == null)
				return;
			this.description = description;
		}
		/**
		 * Gets argument description.
		 *
		 * @return     The argument description string.
		 */
		public String getDescription() {
			return description;
		}
		/**
		 * Enables argument verbose mode
		 */
		public void setVerboseMode() {
			argumentExpression.setVerboseMode();
		}
		/**
		 * Disables argument verbose mode (sets default silent mode)
		 */
		public void setSilentMode() {
			argumentExpression.setSilentMode();
		}
		/**
		 * Returns verbose mode status
		 *
		 * @return     true if verbose mode is on,
		 *             otherwise returns false.
		 */
		public bool getVerboseMode() {
			return argumentExpression.getVerboseMode();
		}
        /**
		 * Gets recursive mode status
		 *
		 * @return      true if recursive mode is enabled (RecursiveArgument),
		 *              otherwise returns false
		 */
        public bool getRecursiveMode() {
			if (argumentType == RECURSIVE_ARGUMENT)
				return true;
			return false;
		}
		/**
		 * Gets computing time
		 *
		 * @return     Computing time in seconds.
		 */
		public double getComputingTime() {
            return computingTime;
        }
		/**
		 * Sets (modifies) argument name.
		 * Each expression / function / dependent argument associated
		 * with this argument will be marked as modified
		 * (requires new syntax checking).
		 *
		 * @param      argumentName        the argument name
		 */
		public void setArgumentName(String argumentName) {
			if (argumentName == null) {
				if (!syntaxStatusDefinition)
					registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			String argumentNameTrim = argumentName.Trim();
			if (this.argumentName.Equals(argumentNameTrim))
				return;
			if (!StringUtils.regexMatch(argumentNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
                if (!syntaxStatusDefinition)
                    registerSyntaxErrorInDefinition(buildErrorMessageInvalidArgumentName(argumentNameTrim));
				return;
			}
			this.argumentName = argumentNameTrim;
			setExpressionModifiedFlags();
			registerNoSyntaxErrorInDefinition();
        }
		/**
		 * Sets argument expression string.
		 * Each expression / function / dependent argument associated
		 * with this argument will be marked as modified
		 * (requires new syntax checking).
		 * If BODY_EXTENDED argument then BODY_RUNTIME is set.
		 *
		 * @param      argumentExpressionString      the argument expression string
		 *
		 * @see        Expression
		 */
		public void setArgumentExpressionString(String argumentExpressionString) {
			if (argumentExpressionString == null) {
				if (!syntaxStatusDefinition)
					registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			String argumentExpressionStringTrim = argumentExpressionString.Trim();
			argumentExpression.setExpressionString(argumentExpressionStringTrim);
			argumentType = DEPENDENT_ARGUMENT;
			argumentBodyType = BODY_RUNTIME;
		}
		/**
		 * Gets argument name
		 *
		 * @return     the argument name as string
		 */
		public String getArgumentName() {
			return argumentName;
		}
		/**
		 * Gets argument expression string
		 *
		 * @return the argument expression string
		 */
		public String getArgumentExpressionString() {
			return argumentExpression.getExpressionString();
		}
		/**
		 * Gets argument type
		 *
		 * @return     Argument type: Argument.FREE_ARGUMENT,
		 *                            Argument.DEPENDENT_ARGUMENT,
		 *                            Argument.RECURSIVE_ARGUMENT
		 */
		public int getArgumentType() {
			return argumentType;
		}
		/**
		 * Sets argument value, if DEPENDENT_ARGUMENT then argument type
		 * is set to FREE_ARGUMENT.
		 * If BODY_EXTENDED argument the BODY_RUNTIME argument is set.
		 *
		 * @param  argumentValue       the value of argument
		 */
		public void setArgumentValue(double argumentValue) {
			argumentType = FREE_ARGUMENT;
			argumentBodyType = BODY_RUNTIME;
			this.argumentValue = argumentValue;
		}
		/*=================================================
		 *
		 * Syntax checking and values calculation
		 *
		 *=================================================
		 */
		/**
		 * Returns argument body type: {@link Argument#BODY_RUNTIME} {@link Argument#BODY_EXTENDED}
		 * @return Returns argument body type: {@link Argument#BODY_RUNTIME} {@link Argument#BODY_EXTENDED}
		 */
		public int getArgumentBodyType() {
			return argumentBodyType;
		}
		/**
		 * Checks argument syntax
		 *
		 * @return    syntax status: Argument.NO_SYNTAX_ERRORS,
		 *            Argument.SYNTAX_ERROR
		 */
		public bool checkSyntax() {
			if (!syntaxStatusDefinition)
				return SYNTAX_ERROR;
			if (argumentName.Length == 0)
				return SYNTAX_ERROR;
			if (argumentBodyType == BODY_EXTENDED) {
				if (argumentExtension == null)
					return SYNTAX_ERROR;
				return NO_SYNTAX_ERRORS;
			}
			if (argumentType == FREE_ARGUMENT)
				return NO_SYNTAX_ERRORS;
			return argumentExpression.checkSyntax();
		}
		/**
		 * Returns error message after checking the syntax
		 *
		 * @return     Error message as string.
		 */
		public String getErrorMessage() {
			if (!syntaxStatusDefinition)
				return errorMessageDefinition;
			if (argumentName.Length == 0)
				return errorMessageDefinition;
			if (argumentBodyType == BODY_EXTENDED && argumentExtension == null)
				return errorMessageDefinition;
			if (argumentType == FREE_ARGUMENT)
				return errorMessageDefinition;
			String argumentExpressionErrorMessage = argumentExpression.getErrorMessage();
			if (errorMessageDefinition.Length > 0 && argumentExpressionErrorMessage.Length == 0)
				return errorMessageDefinition;
			return argumentExpressionErrorMessage;
		}
		/**
		 * Gets argument value.
		 *
		 * @return     direct argument value for free argument,
		 *             otherwise returns calculated argument value
		 *             based on the argument expression.
		 */
		public double getArgumentValue() {
			return getArgumentValue(null);
		}
		/**
		 * Gets argument value and registers all the calculation steps
		 *
		 * @param calcStepsRegister A collection to store list of calculation steps,
		 *                          steps registered as strings.
		 *
		 * @return     direct argument value for free argument,
		 *             otherwise returns calculated argument value
		 *             based on the argument expression.
		 */
		public double getArgumentValue(CalcStepsRegister calcStepsRegister) {
			CalcStepsRegister.setUserArgument(calcStepsRegister, this);
			computingTime = 0;

			if (!syntaxStatusDefinition)
				return Double.NaN;

			double value;
			if (argumentBodyType == BODY_EXTENDED) {
                License.checkLicense();
                long startTime = mXparser.currentTimeMillis();
				value = argumentExtension.getArgumentValue();
				computingTime = (mXparser.currentTimeMillis() - startTime)/1000.0;
				return value;
			}

			if (argumentType == FREE_ARGUMENT)
				return argumentValue;

			recursionCallsCounter++;
			if (recursionCallsCounter >= MAX_RECURSION_CALLS) {
				recursionCallsCounter--;
				return Double.NaN;
			}
			value = argumentExpression.calculate(calcStepsRegister);
			recursionCallsCounter--;
			computingTime = argumentExpression.computingTime;
			return value;
        }
		/**
		 * Adds user defined elements (such as: Arguments, Constants, Functions)
		 * to the argument expressions.
		 *
		 * @param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
		 *
		 * @see PrimitiveElement
		 */
		public void addDefinitions(params PrimitiveElement[] elements) {
			if (elements == null)
				return;
			argumentExpression.addDefinitions(elements);
		}
		/**
		 * Removes user defined elements (such as: Arguments, Constants, Functions)
		 * from the argument expressions.
		 *
		 * @param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
		 *
		 * @see PrimitiveElement
		 */
		public void removeDefinitions(params PrimitiveElement[] elements) {
			if (elements == null)
				return;
			argumentExpression.removeDefinitions(elements);
		}
		/*=================================================
		 *
		 * Arguments handling API (the same as in Expression)
		 * (protected argument expression)
		 *
		 *=================================================
		 */
		/**
		 * Adds arguments (variadic) to the argument expression definition.
		 *
		 * @param      arguments           the arguments list
		 *                                 (comma separated list)
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public void addArguments(params Argument[] arguments) {
			if (arguments == null)
				return;
			argumentExpression.addArguments(arguments);
		}
		/**
		 * Enables to define the arguments (associated with
		 * the argument expression) based on the given arguments names.
		 *
		 * @param      argumentsNames      the arguments names (variadic)
		 *                                 comma separated list
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public void defineArguments(params String[] argumentsNames) {
			if (argumentsNames == null)
				return;
			argumentExpression.defineArguments(argumentsNames);
		}
		/**
		 * Enables to define the argument (associated with the argument expression)
		 * based on the argument name and the argument value.
		 *
		 * @param      argumentName        the argument name
		 * @param      argumentValue       the argument value
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public void defineArgument(String argumentName, double argumentValue) {
			if (argumentName == null)
				return;
			argumentExpression.defineArgument(argumentName, argumentValue);
		}
		/**
		 * Gets argument index from the argument expression.
		 *
		 * @param      argumentName        the argument name
		 *
		 * @return     The argument index if the argument name was found,
		 *             otherwise returns Argument.NOT_FOUND
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public int getArgumentIndex(String argumentName) {
			if (argumentName == null)
				return NOT_FOUND;
			return argumentExpression.getArgumentIndex(argumentName);
		}
		/**
		 * Gets argument from the argument expression.
		 *
		 *
		 * @param      argumentName        the argument name
		 *
		 * @return     The argument if the argument name was found,
		 *             otherwise returns null.
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public Argument getArgument(String argumentName) {
			if (argumentName == null)
				return null;
			return argumentExpression.getArgument(argumentName);
		}
		/**
		 * Gets argument from the argument expression.
		 *
		 * @param      argumentIndex       the argument index
		 *
		 * @return     Argument if the argument index is between 0 and
		 *             the last available argument index (getArgumentsNumber()-1),
		 *             otherwise returns null.
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public Argument getArgument(int argumentIndex) {
			if (argumentIndex < 0)
				return null;
			return argumentExpression.getArgument(argumentIndex);
		}
		/**
		 * Gets number of arguments associated with the argument expression.
		 *
		 * @return     The number of arguments (int >= 0)
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public int getArgumentsNumber() {
			if (argumentType != DEPENDENT_ARGUMENT)
				return 0;
			return argumentExpression.getArgumentsNumber();
		}
		/**
		 * Removes first occurrences of the arguments
		 * associated with the argument expression.
		 *
		 * @param      argumentsNames      the arguments names
		 *                                 (variadic parameters) comma separated
		 *                                 list
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public void removeArguments(params String[] argumentsNames) {
			if (argumentsNames == null)
				return;
			argumentExpression.removeArguments(argumentsNames);
		}
		/**
		 * Removes first occurrences of the arguments
		 * associated with the argument expression.
		 *
		 * @param      arguments           the arguments (variadic parameters)
		 *                                 comma separated list
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public void removeArguments(params Argument[] arguments) {
			if (arguments == null)
				return;
			argumentExpression.removeArguments(arguments);
		}
		/**
		 * Removes all arguments associated with the argument expression.
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public void removeAllArguments() {
			argumentExpression.removeAllArguments();
		}
		/*=================================================
		 *
		 * Constants handling API (the same as in Expression)
		 * (protected argument expression)
		 *
		 *=================================================
		 */
		/**
		 * Adds constants (variadic parameters) to the argument expression definition.
		 *
		 * @param      constants           the constants
		 *                                 (comma separated list)
		 *
		 * @see        Constant
		 */
		public void addConstants(params Constant[] constants) {
			if (constants == null)
				return;
			argumentExpression.addConstants(constants);
		}
		/**
		 * Adds constants to the argument expression definition.
		 *
		 * @param      constantsList       the list of constants
		 *
		 * @see        Constant
		 */
		public void addConstants(List<Constant> constantsList) {
			if (constantsList == null)
				return;
			argumentExpression.addConstants(constantsList);
		}
		/**
		 * Enables to define the constant (associated with
		 * the argument expression) based on the constant name and
		 * constant value.
		 *
		 * @param      constantName        the constant name
		 * @param      constantValue       the constant value
		 *
		 * @see        Constant
		 */
		public void defineConstant(String constantName, double constantValue) {
			if (constantName == null)
				return;
			argumentExpression.defineConstant(constantName, constantValue);
		}
		/**
		 * Gets constant index associated with the argument expression.
		 *
		 * @param      constantName        the constant name
		 *
		 * @return     Constant index if constant name was found,
		 *             otherwise return Constant.NOT_FOUND.
		 *
		 * @see        Constant
		 */
		public int getConstantIndex(String constantName) {
			if (constantName == null)
				return NOT_FOUND;
			return argumentExpression.getConstantIndex(constantName);
		}
		/**
		 * Gets constant associated with the argument expression.
		 *
		 * @param      constantName        the constant name
		 *
		 * @return     Constant if constant name was found,
		 *             otherwise return null.
		 *
		 * @see        Constant
		 */
		public Constant getConstant(String constantName) {
			if (constantName == null)
				return null;
			return argumentExpression.getConstant(constantName);
		}
		/**
		 * Gets constant associated with the argument expression.
		 *
		 * @param      constantIndex       the constant index
		 *
		 * @return     Constant if the constantIndex is between
		 *             0 and the last available constant index
		 *             (getConstantsNumber() - 1),
		 *             otherwise it returns null.
		 *
		 * @see        Constant
		 */
		public Constant getConstant(int constantIndex) {
			if (constantIndex < 0)
				return null;
			return argumentExpression.getConstant(constantIndex);
		}
		/**
		 * Gets number of constants associated with the argument expression.
		 *
		 * @return     number of constants (int >= 0)
		 *
		 * @see        Constant
		 */
		public int getConstantsNumber() {
			if (argumentType != DEPENDENT_ARGUMENT)
				return 0;
			return argumentExpression.getConstantsNumber();
		}
		/**
		 * Removes first occurrences of the constants
		 * associated with the argument expression.
		 *
		 * @param      constantsNames      the constants names (variadic parameters)
		 *                                 comma separated list
		 *
		 * @see        Constant
		 */
		public void removeConstants(params String[] constantsNames) {
			if (constantsNames == null)
				return;
			argumentExpression.removeConstants(constantsNames);
		}
		/**
		 * Removes first occurrences of the constants
		 * associated with the argument expression
		 *
		 * @param      constants           the constants (variadic parameters)
		 *                                 comma separated list
		 *
		 * @see        Constant
		 */
		public void removeConstants(params Constant[] constants) {
			if (constants == null)
				return;
			argumentExpression.removeConstants(constants);
		}
		/**
		 * Removes all constants
		 * associated with the argument expression
		 *
		 * @see        Constant
		 */
		public void removeAllConstants() {
			argumentExpression.removeAllConstants();
		}
		/*=================================================
		 *
		 * Functions handling API (the same as in Expression)
		 * (protected argument expression)
		 *
		 *=================================================
		 */
		/**
		 * Adds functions (variadic parameters) to the argument expression definition.
		 *
		 * @param      functions           the functions
		 *                                 (variadic parameters) comma separated list
		 *
		 * @see        Function
		 */
		public void addFunctions(params Function[] functions) {
			if (functions == null)
				return;
			argumentExpression.addFunctions(functions);
		}
		/**
		 * Enables to define the function (associated with
		 * the argument expression) based on the function name,
		 * function expression string and arguments names (variadic parameters).
		 *
		 * @param      functionName                  the function name
		 * @param      functionExpressionString      the expression string
		 * @param      argumentsNames                the function arguments names
		 *                                           (variadic parameters)
		 *                                           comma separated list
		 *
		 * @see        Function
		 */
		public void defineFunction(String functionName, String  functionExpressionString, params String[] argumentsNames) {
			if (functionName == null || functionExpressionString == null || argumentsNames == null)
				return;
			argumentExpression.defineFunction(functionName, functionExpressionString, argumentsNames);
		}
		/**
		 * Gets index of function associated with the argument expression.
		 *
		 * @param      functionName        the function name
		 *
		 * @return     Function index if function name was found,
		 *             otherwise returns Function.NOT_FOUND
		 *
		 * @see        Function
		 */
		public int getFunctionIndex(String functionName) {
			if (functionName == null)
				return -1;
			return argumentExpression.getFunctionIndex(functionName);
		}
		/**
		 * Gets function associated with the argument expression.
		 *
		 * @param      functionName        the function name
		 *
		 * @return     Function if function name was found,
		 *             otherwise returns null.
		 *
		 * @see        Function
		 */
		public Function getFunction(String functionName) {
			if (functionName == null)
				return null;
			return argumentExpression.getFunction(functionName);
		}
		/**
		 * Gets function associated with the argument expression.
		 *
		 * @param      functionIndex the function index
		 *
		 * @return     Function if function index is between 0 and
		 *             the last available function index (getFunctionsNumber()-1),
		 *             otherwise returns null.
		 *
		 * @see        Function
		 */
		public Function getFunction(int functionIndex) {
			if (functionIndex < 0)
				return null;
			return argumentExpression.getFunction(functionIndex);
		}
		/**
		 * Gets number of functions associated with the argument expression.
		 *
		 * @return     number of functions (int >= 0)
		 *
		 * @see        Function
		 */
		public int getFunctionsNumber() {
			if (argumentType != DEPENDENT_ARGUMENT)
				return 0;
			return argumentExpression.getFunctionsNumber();
		}
		/**
		 * Removes first occurrences of the functions
		 * associated with the argument expression.
		 *
		 * @param      functionsNames      the functions names (variadic parameters)
		 *                                 comma separated list
		 *
		 * @see        Function
		 */
		public void removeFunctions(params String[] functionsNames) {
			if (functionsNames == null)
				return;
			argumentExpression.removeFunctions(functionsNames);
		}
		/**
		 * Removes first occurrences of the functions
		 * associated with the argument expression.
		 *
		 * @param      functions           the functions (variadic parameters)
		 *                                 comma separated list.
		 *
		 * @see        Function
		 */
		public void removeFunctions(params Function[] functions) {
			if (functions == null)
				return;
			argumentExpression.removeFunctions(functions);
		}
		/**
		 * Removes all functions
		 * associated with the argument expression.
		 *
		 * @see        Function
		 */
		public void removeAllFunctions() {
			argumentExpression.removeAllFunctions();
		}
		/*=================================================
		 *
		 * Related expressions handling
		 *
		 *=================================================
		 */
		/**
		 * Adds related expression to the argumentExpression
		 *
		 * @param      expression          the related expression
		 * @see        Expression
		 */
		internal void addRelatedExpression(Expression expression) {
			if (expression == null)
				return;
			argumentExpression.addRelatedExpression(expression);
		}
		/**
		 * Adds related expression form the argumentExpression
		 *
		 * @param      expression          related expression
		 *
		 * @see        Expression
		 */
		internal void removeRelatedExpression(Expression expression) {
			if (expression == null)
				return;
			argumentExpression.removeRelatedExpression(expression);
		}
		/**
		 * Sets expression was modified flag to all related expressions
		 * to the argumentExpression.
		 *
		 * @see        Expression
		 */
		internal void setExpressionModifiedFlags() {
			argumentExpression.setExpressionModifiedFlag();
		}
		/**
		 * Creates cloned object of this argument.
		 *
		 * @return     clone of the argument.
		 */
		public Argument clone() {
			return new Argument(this, false, null);
		}
        internal Argument cloneForThreadSafeInternal(CloneCache cloneCache) {
			Argument argumentClone = cloneCache.getArgumentClone(this);
			if (argumentClone == null) {
				cloneCache.cacheCloneInProgress(this);
				argumentClone = new Argument(this, true, cloneCache);
				cloneCache.clearCloneInProgress(this);
				cloneCache.cacheArgumentClone(this, argumentClone);
			}
			return argumentClone;
		}
        internal Argument cloneForThreadSafeInternal(Expression relatedExpressionThatInitiatedClone, CloneCache cloneCache) {
			Argument argumentClone = cloneForThreadSafeInternal(cloneCache);
			argumentClone.addRelatedExpression(relatedExpressionThatInitiatedClone);
			return argumentClone;
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
		public Argument cloneForThreadSafe() {
			CloneCache cloneCache = new CloneCache();
			Argument argumentClone = cloneForThreadSafeInternal(cloneCache);
			cloneCache.addAllAtTheEndElements();
			cloneCache.clearCache();
			return argumentClone;
		}
	}
}