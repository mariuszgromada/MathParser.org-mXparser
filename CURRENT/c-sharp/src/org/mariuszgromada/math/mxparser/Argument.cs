/*
 * @(#)Argument.cs        6.2.0    2026-11-13
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
	/// <summary>Argument class enables to declare the argument
	/// (variable) which can be used in further processing
	/// (in expressions, functions and dependent / recursive arguments).
	/// <br/><br/>
	///
	/// For example:
	/// <list type="bullet">
	/// <item><description>'x' - argument in expression 'sin(x)'
	/// </description></item><item><description>'x' and 'y' - arguments in expression 'sin(x)+cos(y)'.
	/// </description></item><item><description> 'x=2*t' - dependent argument (dependent from 't') in expression 'cos(x)'
	/// </description></item></list>
	/// <para>
	/// Using Argument class you can define two argument types:
	/// <list type="bullet">
	/// <item><description><b>free argument</b> - when value of argument 'x' is directly given
	/// by a number (for example 'x=5')
	/// </description></item><item><description><b>dependent argument</b> - when value of argument 'x' is given by
	/// expression (for example: 'x=2*a+b' - argument 'x' depends from
	/// argument/constant 'a' and argument/constant 'b' or any other
	/// possible option like function, etc...)
	/// </description></item></list>
	/// </para><para>
	/// When creating an argument you should avoid names reserved as
	/// parser keywords, in general words known in mathematical language
	/// as function names, operators (for example:
	/// sin, cos, +, -, etc...). Please be informed that after associating
	/// the argument with the expression, function or dependent/recursive argument
	/// its name will be recognized by the parser as reserved key word.
	/// It means that it could not be the same as any other key word known
	/// by the parser for this particular expression. Parser is case-sensitive.</para></summary>
	/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
	/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
	/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
	/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
	/// <remarks><para>Author: <b>Mariusz Gromada</b><br/>
	///                 <a href="https://mathparser.org">MathParser.org - mXparser project page</a><br/>
	///                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser">mXparser on GitHub</a><br/>
	///                 <a href="https://payhip.com/INFIMA">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br/>
	///                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br/>
	///                 <a href="https://scalarmath.org/">ScalarMath.org - a powerful math engine and math scripting language</a><br/>
	///                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite">Scalar Lite</a><br/>
	///                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro">Scalar Pro</a><br/>
	///                 <a href="https://mathspace.pl">MathSpace.pl</a><br/></para><para>Version: 6.2.0</para></remarks>
	[CLSCompliant(true), Serializable]
	public class Argument : PrimitiveElement {
        /// <summary>Status of the syntax - no syntax error</summary>
        public const bool NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
        /// <summary>Status of the syntax - syntax error or syntax status unknown</summary>
        public const bool SYNTAX_ERROR = Expression.SYNTAX_ERROR;
        /// <summary>Status of the syntax - syntax error or syntax status unknown</summary>
        /// <remarks><para>Deprecated: Planned to be removed, use <see cref="org.mariuszgromada.math.mxparser.Argument.SYNTAX_ERROR"/> instead</para></remarks>
        [Obsolete("Planned to be removed, use SYNTAX_ERROR instead")]
        public const bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;
        private const bool SYNTAX_STATUS_UNKNOWN = SYNTAX_ERROR;
		/// <summary>Double.NaN as initial value of the argument.</summary>
		public const double ARGUMENT_INITIAL_VALUE = Double.NaN;
		/// <summary>When argument was not found</summary>
		public const int NOT_FOUND = Expression.NOT_FOUND;
		/// <summary>Type indicator for free argument.</summary>
		public const int FREE_ARGUMENT = 1;
		/// <summary>Type indicator for dependent argument.</summary>
		public const int DEPENDENT_ARGUMENT = 2;
		/// <summary>Type indicator for recursive argument.</summary>
		public const int RECURSIVE_ARGUMENT = 3;
		/// <summary>Argument type id for the definition of key words
		/// known by the parser.</summary>
		public const int TYPE_ID = 101;
		public static String TYPE_DESC = ParserSymbol.NA;
		/// <summary>Argument with body based on the value or expression string.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument.getArgumentBodyType()"/>
		public const int BODY_RUNTIME = 1;
		/// <summary>Argument with body based on the extended code.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.ArgumentExtension"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument.getArgumentBodyType()"/>
		public const int BODY_EXTENDED = 2;
		/// <summary>Argument body type.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument.BODY_RUNTIME"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument.BODY_EXTENDED"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument.getArgumentBodyType()"/>
		private int argumentBodyType = BODY_RUNTIME;
		/// <summary>Argument extension (body based in code)</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.ArgumentExtension"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument(string,ArgumentExtension)"/>
		private ArgumentExtension argumentExtension = null;
		/// <summary>Description of the argument.</summary>
		private String description = StringInvariant.EMPTY;
		/// <summary>Argument expression for dependent and recursive
		/// arguments.</summary>
		internal Expression argumentExpression = null;
		/// <summary>Argument name (x, y, arg1, my_argument, etc...)</summary>
		private String argumentName = StringInvariant.EMPTY;
        /// <summary>Syntax status registered on argument definition:
        /// - constructor, set name, ...</summary>
        protected bool syntaxStatusDefinition = SYNTAX_STATUS_UNKNOWN;
		/// <summary>Error Message registered on argument definition:
		/// - constructor, set name, ...</summary>
		private String errorMessageDefinition = StringInvariant.EMPTY;
		/// <summary>Argument type (free, dependent)</summary>
		internal int argumentType = FREE_ARGUMENT;
		/// <summary>Argument value (for free arguments).</summary>
		internal double argumentValue = ARGUMENT_INITIAL_VALUE;
		/// <summary>Index argument.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		protected Argument n = null;
        /// <summary>Internal counter to avoid infinite loops while calculating
        /// expression defined in the way showed by below examples
        ///
        /// Argument x = new Argument("x = 2*x");
        /// x.addDefinitions(x);</summary>
        private int recursionCallsCounter = 0;
		/// <summary>Keeps computing time</summary>
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
		/// <summary>Default constructor - creates argument based on the argument definition string.</summary>
		/// <param name="argumentDefinitionString">Argument definition string, i.e.:
		///                                             <list type="bullet">
		///                                                <item><description>'x' - only argument name
		///                                                </description></item><item><description>'x=5' - argument name and argument value
		///                                                </description></item><item><description>'x=2*5' - argument name and argument value given as simple expression
		///                                                </description></item><item><description>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		///                                             </description></item></list></param>
		/// <param name="elements">Optional parameters (comma separated) such as Arguments, Constants, Functions</param>
		public Argument(String argumentDefinitionString, params PrimitiveElement[] elements) : base(Argument.TYPE_ID) {
            analyzeArgumentDefinitionString(false, false, argumentDefinitionString, elements);
        }
		/// <summary>Default constructor - creates argument based on the argument definition string.</summary>
		/// <param name="argumentDefinitionString">Argument definition string, i.e.:
		///                                             <list type="bullet">
		///                                                <item><description>'x' - only argument name
		///                                                </description></item><item><description>'x=5' - argument name and argument value
		///                                                </description></item><item><description>'x=2*5' - argument name and argument value given as simple expression
		///                                                </description></item><item><description>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		///                                             </description></item></list></param>
		/// <param name="forceDependent">If true parser will try to create dependent argument</param>
		/// <param name="elements">Optional parameters (comma separated) such as Arguments, Constants, Functions</param>
		public Argument(String argumentDefinitionString, bool forceDependent, params PrimitiveElement[] elements) : base(Argument.TYPE_ID) {
            analyzeArgumentDefinitionString(false, forceDependent, argumentDefinitionString, elements);
        }
		/// <summary>Package level  constructor used by RecursiveArgument class</summary>
		/// <param name="isRecursive"></param>
		/// <param name="argumentDefinitionString"></param>
		/// <param name="elements"></param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		internal Argument(bool isRecursive, String argumentDefinitionString, params PrimitiveElement[] elements) : base(Argument.TYPE_ID) {
			analyzeArgumentDefinitionString(isRecursive, false, argumentDefinitionString, elements);
		}
		/// <summary>Argument definition in one string logic</summary>
		/// <param name="isRecursive"></param>
		/// <param name="forceDependent"></param>
		/// <param name="argumentDefinitionString"></param>
		/// <param name="elements"></param>
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
		/// <summary>Constructor - creates free argument.</summary>
		/// <param name="argumentName">the argument name</param>
		/// <param name="argumentValue">the argument value</param>
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
		/// <summary>Constructor for argument definition based on
		/// your own source code - this is via implementation
		/// of ArgumentExtension interface.</summary>
		/// <param name="argumentName">Argument name</param>
		/// <param name="argumentExtension">Your own source code</param>
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
		/// <summary>Constructor - creates dependent argument(with hidden
		/// argument expression).</summary>
		/// <param name="argumentName">the argument name</param>
		/// <param name="argumentExpressionString">the argument expression string</param>
		/// <param name="elements">Optional parameters (comma separated)
		///                                           such as Arguments, Constants, Functions</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.PrimitiveElement"/>
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
		/// <summary>Sets argument description.</summary>
		/// <param name="description">the argument description.</param>
		public void setDescription(String description) {
			if (description == null)
				return;
			this.description = description;
		}
		/// <summary>Gets argument description.</summary>
		/// <returns>The argument description string.</returns>
		public String getDescription() {
			return description;
		}
		/// <summary>Enables argument verbose mode</summary>
		public void setVerboseMode() {
			argumentExpression.setVerboseMode();
		}
		/// <summary>Disables argument verbose mode (sets default silent mode)</summary>
		public void setSilentMode() {
			argumentExpression.setSilentMode();
		}
		/// <summary>Returns verbose mode status</summary>
		/// <returns>true if verbose mode is on,
		///             otherwise returns false.</returns>
		public bool getVerboseMode() {
			return argumentExpression.getVerboseMode();
		}
        /// <summary>Gets recursive mode status</summary>
        /// <returns>true if recursive mode is enabled (RecursiveArgument),
        ///              otherwise returns false</returns>
        /// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
        public bool getRecursiveMode() {
			if (argumentType == RECURSIVE_ARGUMENT)
				return true;
			return false;
		}
		/// <summary>Gets computing time</summary>
		/// <returns>Computing time in seconds.</returns>
		public double getComputingTime() {
            return computingTime;
        }
		/// <summary>Sets (modifies) argument name.
		/// Each expression / function / dependent argument associated
		/// with this argument will be marked as modified
		/// (requires new syntax checking).</summary>
		/// <param name="argumentName">the argument name</param>
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
		/// <summary>Sets argument expression string.
		/// Each expression / function / dependent argument associated
		/// with this argument will be marked as modified
		/// (requires new syntax checking).
		/// If BODY_EXTENDED argument then BODY_RUNTIME is set.</summary>
		/// <param name="argumentExpressionString">the argument expression string</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
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
		/// <summary>Gets argument name</summary>
		/// <returns>the argument name as string</returns>
		public String getArgumentName() {
			return argumentName;
		}
		/// <summary>Gets argument expression string</summary>
		/// <returns>the argument expression string</returns>
		public String getArgumentExpressionString() {
			return argumentExpression.getExpressionString();
		}
		/// <summary>Gets argument type</summary>
		/// <returns>Argument type: Argument.FREE_ARGUMENT,
		///                            Argument.DEPENDENT_ARGUMENT,
		///                            Argument.RECURSIVE_ARGUMENT</returns>
		public int getArgumentType() {
			return argumentType;
		}
		/// <summary>Sets argument value, if DEPENDENT_ARGUMENT then argument type
		/// is set to FREE_ARGUMENT.
		/// If BODY_EXTENDED argument the BODY_RUNTIME argument is set.</summary>
		/// <param name="argumentValue">the value of argument</param>
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
		/// <summary>Returns argument body type: <see cref="org.mariuszgromada.math.mxparser.Argument.BODY_RUNTIME"/> <see cref="org.mariuszgromada.math.mxparser.Argument.BODY_EXTENDED"/></summary>
		/// <returns>Returns argument body type: <see cref="org.mariuszgromada.math.mxparser.Argument.BODY_RUNTIME"/> <see cref="org.mariuszgromada.math.mxparser.Argument.BODY_EXTENDED"/></returns>
		public int getArgumentBodyType() {
			return argumentBodyType;
		}
		/// <summary>Checks argument syntax</summary>
		/// <returns>syntax status: Argument.NO_SYNTAX_ERRORS,
		///            Argument.SYNTAX_ERROR</returns>
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
		/// <summary>Returns error message after checking the syntax</summary>
		/// <returns>Error message as string.</returns>
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
		/// <summary>Gets argument value.</summary>
		/// <returns>direct argument value for free argument,
		///             otherwise returns calculated argument value
		///             based on the argument expression.</returns>
		public double getArgumentValue() {
			return getArgumentValue(null);
		}
		/// <summary>Gets argument value and registers all the calculation steps</summary>
		/// <param name="calcStepsRegister">A collection to store list of calculation steps,
		///                          steps registered as strings.</param>
		/// <returns>direct argument value for free argument,
		///             otherwise returns calculated argument value
		///             based on the argument expression.</returns>
		public double getArgumentValue(CalcStepsRegister calcStepsRegister) {
			return getArgumentValueCoreWithCancel(calcStepsRegister, 0);
		}
		/// <summary>Gets argument value and registers all the calculation steps
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.</para></summary>
		/// <param name="calcStepsRegister">A collection to store list of calculation steps,
		///                          steps registered as strings.</param>
		/// <returns>direct argument value for free argument,
		///             otherwise returns calculated argument value
		///             based on the argument expression.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument.getArgumentValue(CalcStepsRegister)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public double getArgumentValueWithCancel(CalcStepsRegister calcStepsRegister, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (cancelId == 0) return getArgumentValue(calcStepsRegister);
			return getArgumentValueCoreWithCancel(calcStepsRegister, cancelId);
		}

		private double getArgumentValueCoreWithCancel(CalcStepsRegister calcStepsRegister, int cancelId) {
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
			value = argumentExpression.calculateWithCancel(calcStepsRegister, cancelId);
			recursionCallsCounter--;
			computingTime = argumentExpression.computingTime;
			return value;
        }
		/// <summary>Adds user defined elements (such as: Arguments, Constants, Functions)
		/// to the argument expressions.</summary>
		/// <param name="elements">Elements list (variadic - comma separated) of types: Argument, Constant, Function</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.PrimitiveElement"/>
		public void addDefinitions(params PrimitiveElement[] elements) {
			if (elements == null)
				return;
			argumentExpression.addDefinitions(elements);
		}
		/// <summary>Removes user defined elements (such as: Arguments, Constants, Functions)
		/// from the argument expressions.</summary>
		/// <param name="elements">Elements list (variadic - comma separated) of types: Argument, Constant, Function</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.PrimitiveElement"/>
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
		/// <summary>Adds arguments (variadic) to the argument expression definition.</summary>
		/// <param name="arguments">the arguments list
		///                                 (comma separated list)</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void addArguments(params Argument[] arguments) {
			if (arguments == null)
				return;
			argumentExpression.addArguments(arguments);
		}
		/// <summary>Enables to define the arguments (associated with
		/// the argument expression) based on the given arguments names.</summary>
		/// <param name="argumentsNames">the arguments names (variadic)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void defineArguments(params String[] argumentsNames) {
			if (argumentsNames == null)
				return;
			argumentExpression.defineArguments(argumentsNames);
		}
		/// <summary>Enables to define the argument (associated with the argument expression)
		/// based on the argument name and the argument value.</summary>
		/// <param name="argumentName">the argument name</param>
		/// <param name="argumentValue">the argument value</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void defineArgument(String argumentName, double argumentValue) {
			if (argumentName == null)
				return;
			argumentExpression.defineArgument(argumentName, argumentValue);
		}
		/// <summary>Gets argument index from the argument expression.</summary>
		/// <param name="argumentName">the argument name</param>
		/// <returns>The argument index if the argument name was found,
		///             otherwise returns Argument.NOT_FOUND</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public int getArgumentIndex(String argumentName) {
			if (argumentName == null)
				return NOT_FOUND;
			return argumentExpression.getArgumentIndex(argumentName);
		}
		/// <summary>Gets argument from the argument expression.</summary>
		/// <param name="argumentName">the argument name</param>
		/// <returns>The argument if the argument name was found,
		///             otherwise returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public Argument getArgument(String argumentName) {
			if (argumentName == null)
				return null;
			return argumentExpression.getArgument(argumentName);
		}
		/// <summary>Gets argument from the argument expression.</summary>
		/// <param name="argumentIndex">the argument index</param>
		/// <returns>Argument if the argument index is between 0 and
		///             the last available argument index (getArgumentsNumber()-1),
		///             otherwise returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public Argument getArgument(int argumentIndex) {
			if (argumentIndex < 0)
				return null;
			return argumentExpression.getArgument(argumentIndex);
		}
		/// <summary>Gets number of arguments associated with the argument expression.</summary>
		/// <returns>The number of arguments (int &gt;= 0)</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public int getArgumentsNumber() {
			if (argumentType != DEPENDENT_ARGUMENT)
				return 0;
			return argumentExpression.getArgumentsNumber();
		}
		/// <summary>Removes first occurrences of the arguments
		/// associated with the argument expression.</summary>
		/// <param name="argumentsNames">the arguments names
		///                                 (variadic parameters) comma separated
		///                                 list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void removeArguments(params String[] argumentsNames) {
			if (argumentsNames == null)
				return;
			argumentExpression.removeArguments(argumentsNames);
		}
		/// <summary>Removes first occurrences of the arguments
		/// associated with the argument expression.</summary>
		/// <param name="arguments">the arguments (variadic parameters)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void removeArguments(params Argument[] arguments) {
			if (arguments == null)
				return;
			argumentExpression.removeArguments(arguments);
		}
		/// <summary>Removes all arguments associated with the argument expression.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
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
		/// <summary>Adds constants (variadic parameters) to the argument expression definition.</summary>
		/// <param name="constants">the constants
		///                                 (comma separated list)</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void addConstants(params Constant[] constants) {
			if (constants == null)
				return;
			argumentExpression.addConstants(constants);
		}
		/// <summary>Adds constants to the argument expression definition.</summary>
		/// <param name="constantsList">the list of constants</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void addConstants(List<Constant> constantsList) {
			if (constantsList == null)
				return;
			argumentExpression.addConstants(constantsList);
		}
		/// <summary>Enables to define the constant (associated with
		/// the argument expression) based on the constant name and
		/// constant value.</summary>
		/// <param name="constantName">the constant name</param>
		/// <param name="constantValue">the constant value</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void defineConstant(String constantName, double constantValue) {
			if (constantName == null)
				return;
			argumentExpression.defineConstant(constantName, constantValue);
		}
		/// <summary>Gets constant index associated with the argument expression.</summary>
		/// <param name="constantName">the constant name</param>
		/// <returns>Constant index if constant name was found,
		///             otherwise return Constant.NOT_FOUND.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public int getConstantIndex(String constantName) {
			if (constantName == null)
				return NOT_FOUND;
			return argumentExpression.getConstantIndex(constantName);
		}
		/// <summary>Gets constant associated with the argument expression.</summary>
		/// <param name="constantName">the constant name</param>
		/// <returns>Constant if constant name was found,
		///             otherwise return null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public Constant getConstant(String constantName) {
			if (constantName == null)
				return null;
			return argumentExpression.getConstant(constantName);
		}
		/// <summary>Gets constant associated with the argument expression.</summary>
		/// <param name="constantIndex">the constant index</param>
		/// <returns>Constant if the constantIndex is between
		///             0 and the last available constant index
		///             (getConstantsNumber() - 1),
		///             otherwise it returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public Constant getConstant(int constantIndex) {
			if (constantIndex < 0)
				return null;
			return argumentExpression.getConstant(constantIndex);
		}
		/// <summary>Gets number of constants associated with the argument expression.</summary>
		/// <returns>number of constants (int &gt;= 0)</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public int getConstantsNumber() {
			if (argumentType != DEPENDENT_ARGUMENT)
				return 0;
			return argumentExpression.getConstantsNumber();
		}
		/// <summary>Removes first occurrences of the constants
		/// associated with the argument expression.</summary>
		/// <param name="constantsNames">the constants names (variadic parameters)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void removeConstants(params String[] constantsNames) {
			if (constantsNames == null)
				return;
			argumentExpression.removeConstants(constantsNames);
		}
		/// <summary>Removes first occurrences of the constants
		/// associated with the argument expression</summary>
		/// <param name="constants">the constants (variadic parameters)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void removeConstants(params Constant[] constants) {
			if (constants == null)
				return;
			argumentExpression.removeConstants(constants);
		}
		/// <summary>Removes all constants
		/// associated with the argument expression</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
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
		/// <summary>Adds functions (variadic parameters) to the argument expression definition.</summary>
		/// <param name="functions">the functions
		///                                 (variadic parameters) comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void addFunctions(params Function[] functions) {
			if (functions == null)
				return;
			argumentExpression.addFunctions(functions);
		}
		/// <summary>Enables to define the function (associated with
		/// the argument expression) based on the function name,
		/// function expression string and arguments names (variadic parameters).</summary>
		/// <param name="functionName">the function name</param>
		/// <param name="functionExpressionString">the expression string</param>
		/// <param name="argumentsNames">the function arguments names
		///                                           (variadic parameters)
		///                                           comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void defineFunction(String functionName, String  functionExpressionString, params String[] argumentsNames) {
			if (functionName == null || functionExpressionString == null || argumentsNames == null)
				return;
			argumentExpression.defineFunction(functionName, functionExpressionString, argumentsNames);
		}
		/// <summary>Gets index of function associated with the argument expression.</summary>
		/// <param name="functionName">the function name</param>
		/// <returns>Function index if function name was found,
		///             otherwise returns Function.NOT_FOUND</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public int getFunctionIndex(String functionName) {
			if (functionName == null)
				return -1;
			return argumentExpression.getFunctionIndex(functionName);
		}
		/// <summary>Gets function associated with the argument expression.</summary>
		/// <param name="functionName">the function name</param>
		/// <returns>Function if function name was found,
		///             otherwise returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public Function getFunction(String functionName) {
			if (functionName == null)
				return null;
			return argumentExpression.getFunction(functionName);
		}
		/// <summary>Gets function associated with the argument expression.</summary>
		/// <param name="functionIndex">the function index</param>
		/// <returns>Function if function index is between 0 and
		///             the last available function index (getFunctionsNumber()-1),
		///             otherwise returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public Function getFunction(int functionIndex) {
			if (functionIndex < 0)
				return null;
			return argumentExpression.getFunction(functionIndex);
		}
		/// <summary>Gets number of functions associated with the argument expression.</summary>
		/// <returns>number of functions (int &gt;= 0)</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public int getFunctionsNumber() {
			if (argumentType != DEPENDENT_ARGUMENT)
				return 0;
			return argumentExpression.getFunctionsNumber();
		}
		/// <summary>Removes first occurrences of the functions
		/// associated with the argument expression.</summary>
		/// <param name="functionsNames">the functions names (variadic parameters)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void removeFunctions(params String[] functionsNames) {
			if (functionsNames == null)
				return;
			argumentExpression.removeFunctions(functionsNames);
		}
		/// <summary>Removes first occurrences of the functions
		/// associated with the argument expression.</summary>
		/// <param name="functions">the functions (variadic parameters)
		///                                 comma separated list.</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void removeFunctions(params Function[] functions) {
			if (functions == null)
				return;
			argumentExpression.removeFunctions(functions);
		}
		/// <summary>Removes all functions
		/// associated with the argument expression.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void removeAllFunctions() {
			argumentExpression.removeAllFunctions();
		}
		/*=================================================
		 *
		 * Related expressions handling
		 *
		 *=================================================
		 */
		/// <summary>Adds related expression to the argumentExpression</summary>
		/// <param name="expression">the related expression</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
		internal void addRelatedExpression(Expression expression) {
			if (expression == null)
				return;
			argumentExpression.addRelatedExpression(expression);
		}
		/// <summary>Adds related expression form the argumentExpression</summary>
		/// <param name="expression">related expression</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
		internal void removeRelatedExpression(Expression expression) {
			if (expression == null)
				return;
			argumentExpression.removeRelatedExpression(expression);
		}
		/// <summary>Sets expression was modified flag to all related expressions
		/// to the argumentExpression.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
		internal void setExpressionModifiedFlags() {
			argumentExpression.setExpressionModifiedFlag();
		}
		/// <summary>Creates cloned object of this argument.</summary>
		/// <returns>clone of the argument.</returns>
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
		/// <summary>Creates a completely independent 1-1 clone that can be safely used
		/// by a separate thread. If the cloned element contains references
		/// to other elements (e.g. arguments, functions, constants),
		/// then they will also be cloned and the newly created element will
		/// contain references to the corresponding clones.
		/// Important - the API allows you to extract all these clones.</summary>
		/// <returns>Cloned object.</returns>
		public Argument cloneForThreadSafe() {
			CloneCache cloneCache = new CloneCache();
			Argument argumentClone = cloneForThreadSafeInternal(cloneCache);
			cloneCache.addAllAtTheEndElements();
			cloneCache.clearCache();
			return argumentClone;
		}
	
		/// <summary>Gets argument value and registers all the calculation steps
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.</para></summary>
		/// <returns>direct argument value for free argument,
		///             otherwise returns calculated argument value
		///             based on the argument expression.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument.getArgumentValue()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public double getArgumentValueWithCancel(int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (cancelId == 0) return getArgumentValue();
			return getArgumentValueWithCancel((CalcStepsRegister)null, cancelId);
		}
}
}