/*
 * @(#)Function.cs        6.2.0    2026-11-13
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
	/// <summary>Function class provides possibility to define user functions.
	/// Functions can be used in further processing by any expression,
	/// dependent or recursive argument, function, etc... For expamle:
	///
	/// <list type="bullet">
	/// <item><description>'f(x) = sin(x)'
	/// </description></item><item><description>'g(x,y) = sin(x)+cos(y)'
	/// </description></item><item><description>'h(x,y = f(x)+g(y,x)'
	/// </description></item><item><description>in general 'f(x1,x2,...,xn)' where x1,...,xn are arguments
	/// </description></item></list>
	///
	/// <para>
	/// When creating a function you should avoid names reserved as
	/// parser keywords, in general words known in mathematical language
	/// as function names, operators (for example:
	/// sin, cos, +, -, pi, e, etc...). Please be informed that after associating
	/// the constant with the expression, function or dependent/recursive argument
	/// its name will be recognized by the parser as reserved key word.
	/// It means that it could not be the same as any other key word known
	/// by the parser for this particular expression.</para></summary>
	/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
	/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
	/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
	/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
	/// <seealso cref="org.mariuszgromada.math.mxparser.FunctionExtension"/>
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
	public class Function : PrimitiveElement {
        /// <summary>Status of the syntax - no syntax error</summary>
        public const bool NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
        /// <summary>Status of the syntax - syntax error or syntax status unknown.</summary>
        public const bool SYNTAX_ERROR = Expression.SYNTAX_ERROR;
		/// <summary>Status of the syntax - syntax error or syntax status unknown</summary>
		/// <remarks><para>Deprecated: Planned to be removed, use <see cref="org.mariuszgromada.math.mxparser.Function.SYNTAX_ERROR"/> instead</para></remarks>
		[Obsolete("Planned to be removed, use SYNTAX_ERROR instead")]
		public const bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;
        private const bool SYNTAX_STATUS_UNKNOWN = SYNTAX_ERROR;
        /// <summary>When function was not found</summary>
        public const int NOT_FOUND = Expression.NOT_FOUND;
		/// <summary>Function type id identifier</summary>
		public const int TYPE_ID = 103;
		public static String TYPE_DESC = ParserSymbol.NA;
        /// <summary>Function with body based on the expression string.</summary>
        /// <seealso cref="org.mariuszgromada.math.mxparser.Function.getFunctionBodyType()"/>
        public const int BODY_RUNTIME = 1;
		/// <summary>Function with body based on the extended code.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.FunctionExtension"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function.getFunctionBodyType()"/>
		public const int BODY_EXTENDED = 2;
		/// <summary>Function body type.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function.BODY_RUNTIME"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function.BODY_EXTENDED"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function.getFunctionBodyType()"/>
		private int functionBodyType = BODY_RUNTIME;
		/// <summary>function expression</summary>
		internal Expression functionExpression;
		/// <summary>function name</summary>
		private String functionName = StringInvariant.EMPTY;
        /// <summary>Syntax status registered on argument definition:
        /// - constructor, set name, ...</summary>
        private bool syntaxStatusDefinition = SYNTAX_STATUS_UNKNOWN;
        /// <summary>Error Message registered on function definition:
        /// - constructor, set name, ...</summary>
        private String errorMessageDefinition = StringInvariant.EMPTY;
        /// <summary>function description</summary>
		private String description = StringInvariant.EMPTY;
		/// <summary>Indicates whether UDF is variadic</summary>
		internal bool isVariadic = false;
		/// <summary>The number of function parameters</summary>
		private int parametersNumber = 0;
		/// <summary>Function extension (body based in code)</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.FunctionExtension"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.FunctionExtensionVariadic"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function(string,FunctionExtension)"/>
		private FunctionExtension functionExtension;
		/// <summary>Function extension variadic (body based in code)</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.FunctionExtension"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.FunctionExtensionVariadic"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function(string,FunctionExtension)"/>
		private FunctionExtensionVariadic functionExtensionVariadic;
        /// <summary>Keeps computing time</summary>
        double computingTime = 0;
        private bool thisAlreadyAdded = false;
        /*=================================================
		 *
		 * Constructors
		 *
		 *=================================================
		 */
        private static String buildErrorMessageInvalidFunctionName(String functionName) {
			return StringModel.buildErrorMessagePatternDoesNotMatchWithExamples(functionName, StringModel.STRING_RESOURCES.INVALID_FUNCTION_NAME, StringInvariant.FUNCTION_NAME_EXAMPLES);
		}
		private static String buildErrorMessageInvalidFunctionDefinitionString(String functionDefinitionString) {
			return StringModel.buildErrorMessagePatternDoesNotMatchWithExamples(functionDefinitionString, StringModel.STRING_RESOURCES.INVALID_FUNCTION_DEFINITION, StringInvariant.FUNCTION_DEFINITION_EXAMPLES);
		}
		private static String buildErrorMessageIncorrectNumberOfFunctionParameters(String functionName, int expectedNumberOfParameters, int providedNumberOfParameters) {
			return StringModel.buildErrorMessageIncorrectNumberOfParameters(functionName, StringModel.STRING_RESOURCES.INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS, expectedNumberOfParameters, providedNumberOfParameters);
		}
		private void registerNoSyntaxErrorInDefinition() {
			syntaxStatusDefinition = NO_SYNTAX_ERRORS;
			errorMessageDefinition = StringModel.STRING_RESOURCES.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION;
			if (!thisAlreadyAdded) {
				addFunctions(this);
				thisAlreadyAdded = true;
			}
		}
		private void registerSyntaxErrorInDefinition(String errorMessage) {
			syntaxStatusDefinition = SYNTAX_ERROR;
			errorMessageDefinition = errorMessage;
			functionExpression = new Expression(StringInvariant.EMPTY);
		}
		/// <summary>Constructor - creates function from function name
		/// and function expression string.</summary>
		/// <param name="functionName">the function name</param>
		/// <param name="functionExpressionString">the function expression string</param>
		/// <param name="elements">Optional elements list (variadic - comma separated) of types: Argument, Constant, Function</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.PrimitiveElement"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
		public Function(String functionName, String functionExpressionString, params PrimitiveElement[] elements) : base(Function.TYPE_ID) {
			if (functionName == null || functionExpressionString == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			if (elements == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_ELEMENTS_ARE_NULL);
				return;
			}
			String functionNameTrim = functionName.Trim();
			if (!StringUtils.regexMatch(functionNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
				return;
			}
			String functionExpressionStringTrim = functionExpressionString.Trim();
			this.functionName = functionNameTrim;
			functionExpression = new Expression(functionExpressionStringTrim, elements);
			functionExpression.setDescription(functionNameTrim);
			functionExpression.UDFExpression = true;
			registerNoSyntaxErrorInDefinition();
		}
		/// <summary>Constructor - creates function from function name,
		/// function expression string and argument names.</summary>
		/// <param name="functionName">the function name</param>
		/// <param name="functionExpressionString">the function expression string</param>
		/// <param name="argumentsNames">the arguments names (variadic parameters)
		///                                       comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Expression"/>
		public Function(String functionName, String functionExpressionString ,params String[] argumentsNames ) : base(Function.TYPE_ID) {
			if (functionName == null || functionExpressionString == null || argumentsNames == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			String functionNameTrim = functionName.Trim();
			if (!StringUtils.regexMatch(functionNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
				return;
			}
			String functionExpressionStringTrim = functionExpressionString.Trim();
			this.functionName = functionNameTrim;
			functionExpression = new Expression(functionExpressionStringTrim);
			functionExpression.setDescription(functionNameTrim);
			functionExpression.UDFExpression = true;
			foreach (String argName in argumentsNames)
				functionExpression.addArguments(new Argument(argName));
			parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
			registerNoSyntaxErrorInDefinition();
		}
		private void addHeadTokensArguments(List<Token> headTokens) {
			if (headTokens.Count <= 1)
				return;
			for (int i = 1; i < headTokens.Count; i++) {
				Token t = headTokens[i];
				if (t.tokenTypeId != ParserSymbol.TYPE_ID)
					functionExpression.addArguments(new Argument(t.tokenStr));
			}
		}
		/// <summary>Constructor for function definition in natural math language,
		/// for instance providing on string "f(x,y) = sin(x) + cos(x)"
		/// is enough to define function "f" with parameters "x and y"
		/// and function body "sin(x) + cos(x)".</summary>
		/// <param name="functionDefinitionString">Function definition in the form
		///                                      of one String, ie "f(x,y) = sin(x) + cos(x)"</param>
		/// <param name="elements">Optional elements list (variadic - comma separated)
		///                                      of types: Argument, Constant, Function</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.PrimitiveElement"/>
		public Function(String functionDefinitionString, params PrimitiveElement[] elements) : base(Function.TYPE_ID) {
			parametersNumber = 0;
			if (functionDefinitionString == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			if (elements == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_ELEMENTS_ARE_NULL);
				return;
			}
			String functionDefinitionStringTrim = functionDefinitionString.Trim();
			if (StringUtils.regexMatch(functionDefinitionStringTrim, ParserSymbol.functionDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(functionDefinitionStringTrim);
				functionName = headEqBody.headTokens[0].tokenStr;
				functionExpression = new Expression(headEqBody.bodyStr, elements);
				functionExpression.setDescription(headEqBody.headStr);
				functionExpression.UDFExpression = true;
				addHeadTokensArguments(headEqBody.headTokens);
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
				registerNoSyntaxErrorInDefinition();
				return;
			}
			if (StringUtils.regexMatch(functionDefinitionStringTrim, ParserSymbol.functionVariadicDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(functionDefinitionStringTrim);
				functionName = headEqBody.headTokens[0].tokenStr;
				functionExpression = new Expression(headEqBody.bodyStr, elements);
				functionExpression.setDescription(headEqBody.headStr);
				functionExpression.UDFExpression = true;
				isVariadic = true;
				parametersNumber = -1;
				registerNoSyntaxErrorInDefinition();
				return;
			}
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionDefinitionString(functionDefinitionStringTrim));
		}
		/// <summary>Constructor for function definition based on
		/// your own source code - this is via implementation
		/// of FunctionExtension interface.</summary>
		/// <param name="functionName">Function name</param>
		/// <param name="functionExtension">Your own source code</param>
		public Function(String functionName, FunctionExtension functionExtension) : base(Function.TYPE_ID) {
			if (functionName == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			if (functionExtension == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_EXTENSION_IS_NULL);
				return;
			}
			String functionNameTrim = functionName.Trim();
			if (!StringUtils.regexMatch(functionNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
				return;
			}
			this.functionName = functionNameTrim;
			functionExpression = new Expression(StringInvariant.BODY_EXTENDED);
			functionExpression.setDescription(functionNameTrim);
			parametersNumber = functionExtension.getParametersNumber();
			this.functionExtension = functionExtension;
			functionBodyType = BODY_EXTENDED;
			registerNoSyntaxErrorInDefinition();
		}
		/// <summary>Constructor for function definition based on
		/// your own source code - this is via implementation
		/// of FunctionExtensionVariadic interface.</summary>
		/// <param name="functionName">Function name</param>
		/// <param name="functionExtensionVariadic">Your own source code</param>
		public Function(String functionName, FunctionExtensionVariadic functionExtensionVariadic) : base(Function.TYPE_ID) {
			if (functionName == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			if (functionExtensionVariadic == null) {
				registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_EXTENSION_IS_NULL);
				return;
			}
			String functionNameTrim = functionName.Trim();
			if (!StringUtils.regexMatch(functionNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
				return;
			}
			this.functionName = functionNameTrim;
			functionExpression = new Expression(StringInvariant.BODY_EXTENDED_VARIADIC);
			functionExpression.setDescription(functionNameTrim);
			isVariadic = true;
			parametersNumber = -1;
			this.functionExtensionVariadic = functionExtensionVariadic;
			functionBodyType = BODY_EXTENDED;
			registerNoSyntaxErrorInDefinition();
		}
        /// <summary>Private constructor used for function cloning.</summary>
        /// <remarks><para>Parameter <c>functionToClone</c>: the function, which is going
        ///                                 to be cloned.</para></remarks>
        private Function(Function functionToClone, bool isThreadSafeClone, CloneCache cloneCache) : base(Function.TYPE_ID) {
			functionBodyType = functionToClone.functionBodyType;
			functionName = functionToClone.functionName;
			syntaxStatusDefinition = functionToClone.syntaxStatusDefinition;
			errorMessageDefinition = functionToClone.errorMessageDefinition;
			description = functionToClone.description;
			isVariadic = functionToClone.isVariadic;
			parametersNumber = functionToClone.parametersNumber;
			computingTime = functionToClone.computingTime;
			thisAlreadyAdded = functionToClone.thisAlreadyAdded;

			if (functionToClone.functionExtension != null)
				functionExtension = functionToClone.functionExtension.clone();
			if (functionToClone.functionExtensionVariadic != null)
				functionExtensionVariadic = functionToClone.functionExtensionVariadic.clone();

			if (isThreadSafeClone) {
				functionExpression = functionToClone.functionExpression.cloneForThreadSafeInternal(cloneCache);
				return;
			}

			functionExpression = functionToClone.functionExpression.clone();
		}
		/// <summary>Constructor for function definition in natural math language,
		/// for instance providing on string "f(x,y) = sin(x) + cos(x)"
		/// is enough to define function "f" with parameters "x and y"
		/// and function body "sin(x) + cos(x)".</summary>
		/// <param name="functionDefinitionString">Function definition in the form
		///                                      of one String, ie "f(x,y) = sin(x) + cos(x)"</param>
		/// <param name="elements">Optional elements list (variadic - comma separated)
		///                                      of types: Argument, Constant, Function</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.PrimitiveElement"/>
		/// <remarks><para>Deprecated: Planned to be removed, use <see cref="org.mariuszgromada.math.mxparser.Function.addFunctions(Function[])"/>, <see cref="org.mariuszgromada.math.mxparser.Function.addDefinitions(PrimitiveElement[])"/> instead</para></remarks>
		[Obsolete]
		public void setFunction(String functionDefinitionString, params PrimitiveElement[] elements) {
			if (StringUtils.regexMatch(functionDefinitionString, ParserSymbol.functionDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(functionDefinitionString);
				this.functionName = headEqBody.headTokens[0].tokenStr;
				functionExpression = new Expression(headEqBody.bodyStr, elements);
				functionExpression.setDescription(headEqBody.headStr);
				functionExpression.UDFExpression = true;
				isVariadic = false;
				addHeadTokensArguments(headEqBody.headTokens);
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
				description = StringInvariant.EMPTY;
				functionBodyType = BODY_RUNTIME;
				thisAlreadyAdded = functionExpression.getFunction(functionName) == this;
				registerNoSyntaxErrorInDefinition();
				return;
			}
			if (StringUtils.regexMatch(functionDefinitionString, ParserSymbol.functionVariadicDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(functionDefinitionString);
				this.functionName = headEqBody.headTokens[0].tokenStr;
				functionExpression = new Expression(headEqBody.bodyStr, elements);
				functionExpression.setDescription(headEqBody.headStr);
				functionExpression.UDFExpression = true;
				isVariadic = true;
				parametersNumber = -1;
				description = StringInvariant.EMPTY;
				functionBodyType = BODY_RUNTIME;
				thisAlreadyAdded = functionExpression.getFunction(functionName) == this;
				registerNoSyntaxErrorInDefinition();
				return;
			}
			registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionDefinitionString(functionDefinitionString));
		}
		/// <summary>Sets function description.</summary>
		/// <param name="description">the function description</param>
		public void setDescription(String description) {
			if (description == null)
				return;
			this.description = description;
		}
		/// <summary>Gets function description</summary>
		/// <returns>Function description as string</returns>
		public String getDescription() {
			return description;
		}
		/// <summary>Gets function name.</summary>
		/// <returns>Function name as string.</returns>
		public String getFunctionName() {
			return functionName;
		}
		/// <summary>Gets function expression string</summary>
		/// <returns>Function expression as string.</returns>
		public String getFunctionExpressionString() {
			return functionExpression.getExpressionString();
		}
		/// <summary>Sets function name.</summary>
		/// <param name="functionName">the function name</param>
		public void setFunctionName(String functionName) {
			if (functionName == null) {
				if (!syntaxStatusDefinition)
					registerSyntaxErrorInDefinition(StringModel.STRING_RESOURCES.PROVIDED_STRING_IS_NULL);
				return;
			}
			String functionNameTrim = functionName.Trim();
			if (this.functionName.Equals(functionNameTrim))
				return;
			if (!StringUtils.regexMatch(functionNameTrim, ParserSymbol.nameOnlyTokenRegExp)) {
				if (!syntaxStatusDefinition)
					registerSyntaxErrorInDefinition(buildErrorMessageInvalidFunctionName(functionName));
				return;
			}
			this.functionName = functionNameTrim;
			registerNoSyntaxErrorInDefinition();
			setExpressionModifiedFlags();
			registerNoSyntaxErrorInDefinition();
        }
		/// <summary>Sets value of function argument (function parameter).</summary>
		/// <param name="argumentIndex">the argument index (in accordance to
		///                             arguments declaration sequence)</param>
		/// <param name="argumentValue">the argument value</param>
		public void setArgumentValue(int argumentIndex, double argumentValue) {
			if (argumentIndex < 0 || argumentIndex >= parametersNumber)
				return;
			if (isVariadic)
				return;
			if (functionBodyType == BODY_RUNTIME)
				functionExpression.argumentsList[argumentIndex].argumentValue = argumentValue;
			else
				functionExtension.setParameterValue(argumentIndex, argumentValue);
		}
		/// <summary>Returns function body type: <see cref="org.mariuszgromada.math.mxparser.Function.BODY_RUNTIME"/> <see cref="org.mariuszgromada.math.mxparser.Function.BODY_EXTENDED"/></summary>
		/// <returns>Returns function body type: <see cref="org.mariuszgromada.math.mxparser.Function.BODY_RUNTIME"/> <see cref="org.mariuszgromada.math.mxparser.Function.BODY_EXTENDED"/></returns>
		public int getFunctionBodyType() {
			return functionBodyType;
		}
		/// <summary>Checks function syntax</summary>
		/// <returns>syntax status: Function.NO_SYNTAX_ERRORS,
		///                            Function.SYNTAX_ERROR</returns>
		public bool checkSyntax() {
			if (!syntaxStatusDefinition)
				return SYNTAX_ERROR;
			if (functionName.Length == 0)
				return SYNTAX_ERROR;
			if (functionBodyType == BODY_EXTENDED) {
				if (!isVariadic && functionExtension == null)
					return SYNTAX_ERROR;
				if (isVariadic && functionExtensionVariadic == null)
					return SYNTAX_ERROR;
				return NO_SYNTAX_ERRORS;
			}
			bool syntaxStatus = functionExpression.checkSyntax();
			checkRecursiveMode();
			return syntaxStatus;
		}
		/// <summary>Returns error message after checking the syntax.</summary>
		/// <returns>Error message as string.</returns>
		public String getErrorMessage() {
			if (!syntaxStatusDefinition)
				return errorMessageDefinition;
			if (functionName.Length == 0)
				return errorMessageDefinition;
			if (functionBodyType == BODY_EXTENDED) {
				if (!isVariadic && functionExtension == null)
					return errorMessageDefinition;
				if (isVariadic && functionExtensionVariadic == null)
					return errorMessageDefinition;
			}
			String functionExpressionErrorMessage = functionExpression.getErrorMessage();
			if (errorMessageDefinition.Length > 0 && functionExpressionErrorMessage.Length == 0)
				return errorMessageDefinition;
			return functionExpressionErrorMessage;
		}
		/// <summary>clone method</summary>
		internal Function clone() {
            return new Function(this, false, null);
        }
		/// <summary>Calculates function value</summary>
		/// <returns>Function value as double.</returns>
		public double calculate() {
			return calculate((CalcStepsRegister) null);
		}
		/// <summary>Calculates function value and registers all the calculation steps</summary>
		/// <param name="calcStepsRegister">A collection to store list of calculation steps,
		///                          steps registered as strings.</param>
		/// <returns>Function value as double.</returns>
		public double calculate(CalcStepsRegister calcStepsRegister) {
			return calculateCoreWithCancel(calcStepsRegister, 0);
		}
		/// <summary>Calculates function value and registers all the calculation steps
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.</para></summary>
		/// <param name="calcStepsRegister">A collection to store list of calculation steps,
		///                          steps registered as strings.</param>
		/// <returns>Function value as double.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function.calculate(CalcStepsRegister)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public double calculateWithCancel(CalcStepsRegister calcStepsRegister, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (cancelId == 0) return calculate(calcStepsRegister);
			return calculateCoreWithCancel(calcStepsRegister, cancelId);
		}

		private double calculateCoreWithCancel(CalcStepsRegister calcStepsRegister, int cancelId) {
			CalcStepsRegister.setUserFunction(calcStepsRegister, this);
			computingTime = 0;
			if (!syntaxStatusDefinition)
				return Double.NaN;
			double value = Double.NaN;
			if (functionBodyType == BODY_RUNTIME) {
				value = functionExpression.calculateWithCancel(calcStepsRegister, cancelId);
				computingTime = functionExpression.computingTime;
				return value;
			}
            License.checkLicense();
            long startTime = mXparser.currentTimeMillis();
			if (!isVariadic) {
				value = functionExtension.calculate();
				computingTime = (mXparser.currentTimeMillis() - startTime)/1000.0;
				return value;
			}
			List<Double> paramsList = functionExpression.UDFVariadicParamsAtRunTime;
			if (paramsList != null) {
				int n = paramsList.Count;
				double[] parameters = new double[n];
				for (int i = 0; i < n; i++)
					parameters[i] = paramsList[i];
				value = functionExtensionVariadic.calculate(parameters);
			}
			computingTime = (mXparser.currentTimeMillis() - startTime)/1000.0;
			return value;
		}
		/// <summary>Calculates function value</summary>
		/// <param name="parameters">the function parameters values (as doubles)</param>
		/// <returns>function value as double.</returns>
		public double calculate(params double[] parameters) {
			return calculateCoreWithCancel(parameters, 0);
		}
		/// <summary>Calculates function value
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// Array parameters are fixed arrays, not token-bearing varargs.</para></summary>
		/// <param name="parameters">the function parameters values (as doubles)</param>
		/// <returns>function value as double.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function.calculate(double[])"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public double calculateWithCancel(double[] parameters, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (cancelId == 0) return calculate(parameters);
			return calculateCoreWithCancel(parameters, cancelId);
		}

		private double calculateCoreWithCancel(double[] parameters, int cancelId) {
			computingTime = 0;
			if (!syntaxStatusDefinition)
				return Double.NaN;
			if (parameters == null)
				return Double.NaN;
			if (parameters.Length == 0)
				return Double.NaN;

			long startTime = mXparser.currentTimeMillis();
			functionExpression.UDFVariadicParamsAtRunTime = new List<Double>();
			foreach (double x in parameters)
				functionExpression.UDFVariadicParamsAtRunTime.Add(x);

			double value = Double.NaN;
			if (isVariadic) {
				if (functionBodyType == BODY_RUNTIME) {
					value =  functionExpression.calculateWithCancel(cancelId);
					computingTime = functionExpression.computingTime;
					return value;
				}
				value = functionExtensionVariadic.calculate(parameters);
				computingTime = (mXparser.currentTimeMillis() - startTime)/1000.0;
				return value;
			}

			if (parameters.Length != this.getParametersNumber()) {
				functionExpression.setSyntaxStatus(SYNTAX_ERROR, buildErrorMessageIncorrectNumberOfFunctionParameters(functionName, getParametersNumber(), parameters.Length));
				return Double.NaN;
			}

			if (functionBodyType == BODY_RUNTIME) {
				for (int p = 0; p < parameters.Length; p++)
					setArgumentValue(p, parameters[p]);
				value = functionExpression.calculateWithCancel(cancelId);
				computingTime = functionExpression.computingTime;
				return value;
			}

			for (int p = 0; p < parameters.Length; p++)
				functionExtension.setParameterValue(p, parameters[p]);

			value = functionExtension.calculate();
			computingTime = (mXparser.currentTimeMillis() - startTime)/1000.0;
			return value;
		}
		/// <summary>Calculates function value</summary>
		/// <param name="arguments">function parameters (as Arguments)</param>
		/// <returns>function value as double</returns>
		public double calculate(params Argument[] arguments) {
			return calculateCoreWithCancel(arguments, 0);
		}
		/// <summary>Calculates function value
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.
		/// Array parameters are fixed arrays, not token-bearing varargs.</para></summary>
		/// <param name="arguments">function parameters (as Arguments)</param>
		/// <returns>function value as double</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function.calculate(Argument[])"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public double calculateWithCancel(Argument[] arguments, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (cancelId == 0) return calculate(arguments);
			return calculateCoreWithCancel(arguments, cancelId);
		}

		private double calculateCoreWithCancel(Argument[] arguments, int cancelId) {
			computingTime = 0;
			if (!syntaxStatusDefinition)
				return Double.NaN;
			if (arguments == null)
				return Double.NaN;
			if (arguments.Length == 0)
				return Double.NaN;

			long startTime = mXparser.currentTimeMillis();
			double[] parameters;
			functionExpression.UDFVariadicParamsAtRunTime = new List<Double>();
			parameters = new double[arguments.Length];
			double x;
			for (int i = 0; i < arguments.Length; i++) {
				x = arguments[i].getArgumentValueWithCancel(cancelId);
				functionExpression.UDFVariadicParamsAtRunTime.Add(x);
				parameters[i] = x;
			}

			double value = Double.NaN;
			if (isVariadic) {
				if (functionBodyType == BODY_RUNTIME) {
					value = functionExpression.calculateWithCancel(cancelId);
					computingTime = functionExpression.computingTime;
					return value;
				}
				value = functionExtensionVariadic.calculate(parameters);
				computingTime = (mXparser.currentTimeMillis() - startTime)/1000.0;
				return value;
			}

			if (arguments.Length != this.getParametersNumber()) {
				functionExpression.setSyntaxStatus(SYNTAX_ERROR, buildErrorMessageIncorrectNumberOfFunctionParameters(functionName, getParametersNumber(), arguments.Length));
				return Double.NaN;
			}

			if (functionBodyType == BODY_RUNTIME) {
				for (int p = 0; p < arguments.Length; p++)
					setArgumentValue(p, arguments[p].getArgumentValueWithCancel(cancelId));
				value = functionExpression.calculateWithCancel(cancelId);
				computingTime = functionExpression.computingTime;
				return value;
			}
			for (int p = 0; p < arguments.Length; p++)
				functionExtension.setParameterValue(p, arguments[p].getArgumentValueWithCancel(cancelId));

			value = functionExtension.calculate();
			computingTime = (mXparser.currentTimeMillis() - startTime)/1000.0;
			return value;
		}
		/// <summary>Adds user defined elements (such as: Arguments, Constants, Functions)
		/// to the function expressions.</summary>
		/// <param name="elements">Elements list (variadic), where Argument, Constant, Function
		///                 extend the same class PrimitiveElement</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.PrimitiveElement"/>
		public void addDefinitions(params PrimitiveElement[] elements) {
			if (elements == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addDefinitions(elements);
		}
		/// <summary>Removes user defined elements (such as: Arguments, Constants, Functions)
		/// from the function expressions.</summary>
		/// <param name="elements">Elements list (variadic), where Argument, Constant, Function
		///                 extend the same class PrimitiveElement</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.PrimitiveElement"/>
		public void removeDefinitions(params PrimitiveElement[] elements) {
			if (elements == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeDefinitions(elements);
		}
		/*=================================================
		 *
		 * Arguments handling API (the same as in Expression)
		 * (protected argument expression)
		 *
		 *=================================================
		 */
		private int countRecursiveArguments() {
			if (functionBodyType != Function.BODY_RUNTIME)
				return 0;
			int numOfRecursiveArguments = 0;
			foreach (Argument argument in functionExpression.argumentsList)
				if (argument.getArgumentType() == Argument.RECURSIVE_ARGUMENT) numOfRecursiveArguments++;
			return numOfRecursiveArguments;
		}
		/// <summary>Adds arguments (variadic) to the function expression definition.</summary>
		/// <param name="arguments">the arguments list
		///                                 (comma separated list)</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void addArguments(params Argument[] arguments) {
			if (arguments == null)
				return;
			if (functionBodyType != Function.BODY_RUNTIME)
				return;
			functionExpression.addArguments(arguments);
			//parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
		}
		/// <summary>Enables to define the arguments (associated with
		/// the function expression) based on the given arguments names.</summary>
		/// <param name="argumentsNames">the arguments names (variadic)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void defineArguments(params String[] argumentsNames) {
			if (argumentsNames == null)
				return;
			if (functionBodyType != Function.BODY_RUNTIME)
				return;
			functionExpression.defineArguments(argumentsNames);
			parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
		}
		/// <summary>Enables to define the argument (associated with the function expression)
		/// based on the argument name and the argument value.</summary>
		/// <param name="argumentName">the argument name</param>
		/// <param name="argumentValue">the argument value</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void defineArgument(String argumentName, double argumentValue) {
			if (argumentName == null)
				return;
			if (functionBodyType != Function.BODY_RUNTIME)
				return;
			functionExpression.defineArgument(argumentName, argumentValue);
			parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
		}
		/// <summary>Gets argument index from the function expression.</summary>
		/// <param name="argumentName">the argument name</param>
		/// <returns>The argument index if the argument name was found,
		///             otherwise returns Argument.NOT_FOUND</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public int getArgumentIndex(String argumentName) {
			if (argumentName == null)
				return -1;
			if (functionBodyType != Function.BODY_RUNTIME)
                return -1;
            return functionExpression.getArgumentIndex(argumentName);
		}
		/// <summary>Gets argument from the function expression.</summary>
		/// <param name="argumentName">the argument name</param>
		/// <returns>The argument if the argument name was found,
		///             otherwise returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public Argument getArgument(String argumentName) {
			if (argumentName == null)
				return null;
			if (functionBodyType != Function.BODY_RUNTIME)
                return null;
            return functionExpression.getArgument(argumentName);
		}
		/// <summary>Gets argument from the function expression.</summary>
		/// <param name="argumentIndex">the argument index</param>
		/// <returns>Argument if the argument index is between 0 and
		///             the last available argument index (getArgumentsNumber()-1),
		///             otherwise returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public Argument getArgument(int argumentIndex) {
			if (argumentIndex < 0)
				return null;
			if (functionBodyType != Function.BODY_RUNTIME)
                return null;
            return functionExpression.getArgument(argumentIndex);
		}
		/// <summary>Gets number of parameters associated with the function expression.</summary>
		/// <returns>The number of function parameters (int &gt;= 0)</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public int getParametersNumber() {
			if (!isVariadic)
				return parametersNumber;
			if (functionExpression.UDFVariadicParamsAtRunTime == null)
                return -1;
            return functionExpression.UDFVariadicParamsAtRunTime.Count;
		}
        /// <summary>Set parameters number.</summary>
        /// <param name="parametersNumber">the number of function parameters (default = number of arguments
        ///                                 (lower number might be specified).</param>
        public void setParametersNumber(int parametersNumber) {
			if (parametersNumber < 0)
				return;
			if (functionBodyType != Function.BODY_RUNTIME)
				return;
			this.parametersNumber = parametersNumber;
			functionExpression.setExpressionModifiedFlag();
		}
		/// <summary>Gets user defined function parameter name</summary>
		/// <param name="parameterIndex">Parameter index between 0 and n-1</param>
		/// <returns>If parameter exists returns parameters name, otherwise empty string is returned.</returns>
		public String getParameterName(int parameterIndex) {
			if (parameterIndex < 0) return StringInvariant.EMPTY;
			if (parameterIndex >= parametersNumber) return StringInvariant.EMPTY;
			if (functionBodyType == BODY_RUNTIME) {
				Argument x = getArgument(parameterIndex);
				if (x == null)
					return StringInvariant.EMPTY;
				return x.getArgumentName();
			}
			if (functionBodyType == BODY_EXTENDED) return this.functionExtension.getParameterName(parameterIndex);
			return StringInvariant.EMPTY;
		}
		/// <summary>Gets number of arguments associated with the function expression.</summary>
		/// <returns>The number of arguments (int &gt;= 0)</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public int getArgumentsNumber() {
			if (functionBodyType != Function.BODY_RUNTIME)
                return 0;
            return functionExpression.getArgumentsNumber();
		}
		/// <summary>Removes first occurrences of the arguments
		/// associated with the function expression.</summary>
		/// <param name="argumentsNames">the arguments names
		///                                 (variadic parameters) comma separated
		///                                 list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void removeArguments(params String[] argumentsNames) {
			if (argumentsNames == null)
				return;
			if (functionBodyType != Function.BODY_RUNTIME)
				return;
			functionExpression.removeArguments(argumentsNames);
			parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
		}
		/// <summary>Removes first occurrences of the arguments
		/// associated with the function expression.</summary>
		/// <param name="arguments">the arguments (variadic parameters)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void removeArguments(params Argument[] arguments) {
			if (arguments == null)
				return;
			if (functionBodyType != Function.BODY_RUNTIME)
				return;
			functionExpression.removeArguments(arguments);
			parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
		}
		/// <summary>Removes all arguments associated with the function expression.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Argument"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.RecursiveArgument"/>
		public void removeAllArguments() {
			if (functionBodyType != Function.BODY_RUNTIME)
				return;
			functionExpression.removeAllArguments();
			parametersNumber = 0;
		}
		/*=================================================
		 *
		 * Constants handling API (the same as in Expression)
		 * (protected argument expression)
		 *
		 *=================================================
		 */
		/// <summary>Adds constants (variadic parameters) to the function expression definition.</summary>
		/// <param name="constants">the constants
		///                                 (comma separated list)</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void addConstants(params Constant[] constants) {
			if (constants == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addConstants(constants);
		}
		/// <summary>Adds constants to the function expression definition.</summary>
		/// <param name="constantsList">the list of constants</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void addConstants(List<Constant> constantsList) {
			if (constantsList == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addConstants(constantsList);
		}
		/// <summary>Enables to define the constant (associated with
		/// the function expression) based on the constant name and
		/// constant value.</summary>
		/// <param name="constantName">the constant name</param>
		/// <param name="constantValue">the constant value</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void defineConstant(String constantName, double constantValue) {
			if (constantName == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.defineConstant(constantName, constantValue);
		}
		/// <summary>Gets constant index associated with the function expression.</summary>
		/// <param name="constantName">the constant name</param>
		/// <returns>Constant index if constant name was found,
		///             otherwise return Constant.NOT_FOUND.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public int getConstantIndex(String constantName) {
			if (constantName == null)
				return -1;
			if (functionBodyType != Function.BODY_RUNTIME)
                return -1;
            return functionExpression.getConstantIndex(constantName);
		}
		/// <summary>Gets constant associated with the function expression.</summary>
		/// <param name="constantName">the constant name</param>
		/// <returns>Constant if constant name was found,
		///             otherwise return null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public Constant getConstant(String constantName) {
			if (constantName == null)
				return null;
			if (functionBodyType != Function.BODY_RUNTIME)
                return null;
            return functionExpression.getConstant(constantName);
		}
		/// <summary>Gets constant associated with the function expression.</summary>
		/// <param name="constantIndex">the constant index</param>
		/// <returns>Constant if the constantIndex is between
		///             0 and the last available constant index
		///             (getConstantsNumber() - 1),
		///             otherwise it returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public Constant getConstant(int constantIndex) {
			if (constantIndex < 0)
				return null;
			if (functionBodyType != Function.BODY_RUNTIME)
                return null;
            return functionExpression.getConstant(constantIndex);
		}
		/// <summary>Gets number of constants associated with the function expression.</summary>
		/// <returns>number of constants (int &gt;= 0)</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public int getConstantsNumber() {
			if (functionBodyType != Function.BODY_RUNTIME)
                return 0;
            return functionExpression.getConstantsNumber();
		}
		/// <summary>Removes first occurrences of the constants
		/// associated with the function expression.</summary>
		/// <param name="constantsNames">the constants names (variadic parameters)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void removeConstants(params String[] constantsNames) {
			if (constantsNames == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeConstants(constantsNames);
		}
		/// <summary>Removes first occurrences of the constants
		/// associated with the function expression</summary>
		/// <param name="constants">the constants (variadic parameters)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void removeConstants(params Constant[] constants) {
			if (constants == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeConstants(constants);
		}
		/// <summary>Removes all constants
		/// associated with the function expression</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Constant"/>
		public void removeAllConstants() {
            if (functionBodyType == Function.BODY_RUNTIME)
                functionExpression.removeAllConstants();
		}
		/*=================================================
		 *
		 * Functions handling API (the same as in Expression)
		 * (protected argument expression)
		 *
		 *=================================================
		 */
		/// <summary>Adds functions (variadic parameters) to the function expression definition.</summary>
		/// <param name="functions">the functions
		///                                 (variadic parameters) comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void addFunctions(params Function[] functions) {
			if (functions == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addFunctions(functions);
		}
		/// <summary>Enables to define the function (associated with
		/// the function expression) based on the function name,
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
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.defineFunction(functionName, functionExpressionString, argumentsNames);
		}
		/// <summary>Gets index of function associated with the function expression.</summary>
		/// <param name="functionName">the function name</param>
		/// <returns>Function index if function name was found,
		///             otherwise returns Function.NOT_FOUND</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public int getFunctionIndex(String functionName) {
			if (functionName == null)
				return -1;
			if (functionBodyType != Function.BODY_RUNTIME)
                return -1;
            return functionExpression.getFunctionIndex(functionName);
		}
		/// <summary>Gets function associated with the function expression.</summary>
		/// <param name="functionName">the function name</param>
		/// <returns>Function if function name was found,
		///             otherwise returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public Function getFunction(String functionName) {
			if (functionName == null)
				return null;
			if (functionBodyType != Function.BODY_RUNTIME)
                return null;
            return functionExpression.getFunction(functionName);
		}
		/// <summary>Gets function associated with the function expression.</summary>
		/// <param name="functionIndex">the function index</param>
		/// <returns>Function if function index is between 0 and
		///             the last available function index (getFunctionsNumber()-1),
		///             otherwise returns null.</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public Function getFunction(int functionIndex) {
			if (functionIndex < 0)
				return null;
			if (functionBodyType != Function.BODY_RUNTIME)
                return null;
            return functionExpression.getFunction(functionIndex);
		}
		/// <summary>Gets number of functions associated with the function expression.</summary>
		/// <returns>number of functions (int &gt;= 0)</returns>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public int getFunctionsNumber() {
			if (functionBodyType != Function.BODY_RUNTIME)
				return 0;
			int recursiveThisCorrection = 0;
			foreach (Function f in functionExpression.functionsList)
				if (this == f)
					recursiveThisCorrection++;
			return functionExpression.getFunctionsNumber() - recursiveThisCorrection;
		}
		/// <summary>Removes first occurrences of the functions
		/// associated with the function expression.</summary>
		/// <param name="functionsNames">the functions names (variadic parameters)
		///                                 comma separated list</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void removeFunctions(params String[] functionsNames) {
			if (functionsNames == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeFunctions(functionsNames);
		}
		/// <summary>Removes first occurrences of the functions
		/// associated with the function expression.</summary>
		/// <param name="functions">the functions (variadic parameters)
		///                                 comma separated list.</param>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void removeFunctions(params Function[] functions) {
			if (functions == null)
				return;
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeFunctions(functions);
		}
		/// <summary>Removes all functions
		/// associated with the function expression.</summary>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function"/>
		public void removeAllFunctions() {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeAllFunctions();
		}
		/*
		 * ---------------------------------------------
		 */
		/// <summary>Enables verbose function mode</summary>
		public void setVerboseMode() {
			functionExpression.setVerboseMode();
		}
		/// <summary>Disables function verbose mode (sets default silent mode)</summary>
		public void setSilentMode() {
			functionExpression.setSilentMode();
		}
		/// <summary>Returns verbose mode status</summary>
		/// <returns>true if verbose mode is on,
		///             otherwise returns false</returns>
		public bool getVerboseMode() {
			return functionExpression.getVerboseMode();
		}
		/// <summary>Checks whether function name appears in function body
		/// if yes the recursive mode is being set</summary>
		internal void checkRecursiveMode() {
			if (functionBodyType != Function.BODY_RUNTIME)
				return;
			if (functionExpression.initialTokens == null)
				return;
			functionExpression.disableRecursiveMode();
			foreach (Token t in functionExpression.initialTokens)
				if (t.tokenStr.Equals(functionName)) {
					functionExpression.setRecursiveMode();
					break;
				}
		}
		/// <summary>Gets recursive mode status</summary>
		/// <returns>true if recursive mode is enabled,
		///             otherwise returns false</returns>
		public bool getRecursiveMode() {
			return functionExpression.getRecursiveMode();
		}
		/// <summary>Gets computing time</summary>
		/// <returns>computing time in seconds.</returns>
		public double getComputingTime() {
			return computingTime;

        }
		/// <summary>Adds related expression.</summary>
		/// <param name="expression">the related expression</param>
		internal void addRelatedExpression(Expression expression) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addRelatedExpression(expression);
		}
		/// <summary>Removes related expression.</summary>
		/// <param name="expression">the related expression</param>
		internal void removeRelatedExpression(Expression expression) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeRelatedExpression(expression);
		}
		/// <summary>Set expression modified flags in the related expressions.</summary>
		internal void setExpressionModifiedFlags() {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.setExpressionModifiedFlag();
		}
        internal Function cloneForThreadSafeInternal(CloneCache cloneCache) {
			Function functionClone = cloneCache.getFunctionClone(this);
			if (functionClone == null) {
				cloneCache.cacheCloneInProgress(this);
				functionClone = new Function(this, true, cloneCache);
				cloneCache.clearCloneInProgress(this);
				cloneCache.cacheFunctionClone(this, functionClone);
			}
			//functionClone.addFunctions(functionClone);
			return functionClone;
		}
        internal Function cloneForThreadSafeInternal(Expression relatedExpressionThatInitiatedClone, CloneCache cloneCache) {
			Function functionClone = cloneForThreadSafeInternal(cloneCache);
			functionClone.addRelatedExpression(relatedExpressionThatInitiatedClone);
			return functionClone;
		}
		/// <summary>Creates a completely independent 1-1 clone that can be safely used
		/// by a separate thread. If the cloned element contains references
		/// to other elements (e.g. arguments, functions, constants),
		/// then they will also be cloned and the newly created element will
		/// contain references to the corresponding clones.
		/// Important - the API allows you to extract all these clones.</summary>
		/// <returns>Cloned object.</returns>
		public Function cloneForThreadSafe() {
			CloneCache cloneCache = new CloneCache();
			Function functionClone = cloneForThreadSafeInternal(cloneCache);
			cloneCache.addAllAtTheEndElements();
			cloneCache.clearCache();
			return functionClone;
		}
	
		/// <summary>Calculates function value and registers all the calculation steps
		///
		/// <para>Cancellation is cooperative at the existing checks only. ID 0 uses global
		/// cancellation; positive IDs combine the global signal with the domain signal.
		/// This method does not clear either signal. Cached values and fast returns
		/// may complete normally despite a pending signal. Separate IDs do not make
		/// a shared mutable expression graph safe for concurrent calculations.</para></summary>
		/// <returns>Function value as double.</returns>
		/// <param name="cancelId">cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID</param>
		/// <exception cref="System.ArgumentOutOfRangeException">if cancelId is outside the supported range</exception>
		/// <seealso cref="org.mariuszgromada.math.mxparser.Function.calculate()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.cancelCalculation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.resetCalculationCancellation(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.acquireCancellationTokenId()"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.reserveCancellationTokenId(int)"/>
		/// <seealso cref="org.mariuszgromada.math.mxparser.mXparser.releaseCancellationTokenId(int)"/>
		/// <remarks><para>Since: 6.2.0</para></remarks>
		public double calculateWithCancel(int cancelId) {
			if (cancelId < 0 || cancelId > mXparser.MAX_CANCELLATION_TOKEN_ID)
				throw new ArgumentOutOfRangeException("cancelId", "cancelId out of range");
			if (cancelId == 0) return calculate();
			return calculateWithCancel((CalcStepsRegister)null, cancelId);
		}
}
}