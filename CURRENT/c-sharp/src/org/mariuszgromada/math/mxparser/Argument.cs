/*
 * @(#)Argument.cs        5.0.4    2022-05-22
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2022-05-22
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2022 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use as well as
 * commercial use.
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
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call takes place only internally for logging purposes and
 *    there is no connection with other external services and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, AUTHOR & PUBLISHER allow you
 *     to download, install and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the conditions of test
 *     environments. The purpose of the tests must not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all below terms and
 *     conditions, and you have acknowledged and understood the following
 *     DISCLAIMER, AUTHOR & PUBLISHER grant you a nonexclusive license
 *     including the following rights:
 *  3. The license has been granted only to you, i.e., the person or entity
 *     that made the purchase, who is identified and confirmed by the data
 *     provided during the purchase.
 *  4. In case you purchased a license in the "ONE-TIME PURCHASE" model,
 *     the license has been granted only for the PRODUCT version specified
 *     in the purchase. The upgrade policy gives you additional rights and
 *     is described in the dedicated section below.
 *  5. In case you purchased a license in the "SUBSCRIPTION" model, you can
 *     install and use any version of the PRODUCT, but only during the
 *     subscription validity period.
 *  6. In case you purchased a "SINGLE LICENSE" you can install and use the
 *     PRODUCT from one workstation.
 *  7. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number
 *     of workstations purchased as per order.
 *  8. In case you purchased a "SITE LICENSE ", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
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
 *     The method call takes place only internally for logging purposes and
 *     there is no connection with other external services and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. AUTHOR & PUBLISHER reserve all rights not expressly granted to you
 *     in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned the
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies of your final product
 * (delivered to your end-users) is not limited.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g.: 5.0), you can freely install
 *    all the various releases specified in the [PATCH] version (e.g.: 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for [MAJOR].[MINOR] version (e.g.: 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g.: 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
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
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF AUTHOR OR PUBLISHER.
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
	 * by the parser for this particular expression. Parser is case sensitive.
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
	 * @version        5.0.3
	 *
	 * @see RecursiveArgument
	 * @see Expression
	 * @see Function
	 * @see Constant
	 */
	[CLSCompliant(true)]
	public class Argument : PrimitiveElement {
		/**
		 * No syntax errors in the dependent argument definition.
		 */
		public const bool NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
		/**
		 * Syntax error in the dependent argument definition.
		 */
		public const bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
		/**
		 * Double.NaN as initial value of the argument.
		 */
		public const double ARGUMENT_INITIAL_VALUE = Double.NaN;
		/**
		 * When argument was not not found
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
		public const int TYPE_ID			= 101;
		public const String TYPE_DESC		= "User defined argument";
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
		private int argumentBodyType;
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
		private String description;
		/**
		 * Argument expression for dependent and recursive
		 * arguments.
		 */
		internal Expression argumentExpression;
		/**
		 * Argument name (x, y, arg1, my_argument, etc...)
		 */
		private String argumentName;
		/**
		 * Argument type (free, dependent)
		 */
		internal int argumentType;
		/**
		 * Argument value (for free arguments).
		 */
		internal double argumentValue;
		/**
		 * Index argument.
		 *
		 * @see RecursiveArgument
		 */
		protected Argument n;
		/*=================================================
		 *
		 * Constructors
		 *
		 *=================================================
		 */
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
		public Argument(String argumentDefinitionString, params PrimitiveElement[] elements) : base(Argument.TYPE_ID)
		{
			if (mXparser.regexMatch(argumentDefinitionString, ParserSymbol.nameOnlyTokenRegExp)) {
				argumentName = argumentDefinitionString;
				argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentType = FREE_ARGUMENT;
				argumentExpression = new Expression(elements);
			}
			else if (mXparser.regexMatch(argumentDefinitionString, ParserSymbol.constArgDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(argumentDefinitionString);
				argumentName = headEqBody.headTokens[0].tokenStr;
				Expression bodyExpr = new Expression(headEqBody.bodyStr);
				double bodyValue = bodyExpr.calculate();
				if ((bodyExpr.getSyntaxStatus() == Expression.NO_SYNTAX_ERRORS) && (bodyValue != Double.NaN)) {
					argumentExpression = new Expression();
					argumentValue = bodyValue;
					argumentType = FREE_ARGUMENT;
				}
				else {
					argumentExpression = bodyExpr;
					addDefinitions(elements);
					argumentType = DEPENDENT_ARGUMENT;
				}
			}
			else if (mXparser.regexMatch(argumentDefinitionString, ParserSymbol.functionDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(argumentDefinitionString);
				argumentName = headEqBody.headTokens[0].tokenStr;
				argumentExpression = new Expression(headEqBody.bodyStr, elements);
				argumentExpression.setDescription(headEqBody.headStr);
				argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentType = DEPENDENT_ARGUMENT;
				n = new Argument(headEqBody.headTokens[2].tokenStr);
			}
			else {
				argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentType = FREE_ARGUMENT;
				argumentExpression = new Expression();
				argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentDefinitionString + "] " + "Invalid argument definition (patterns: 'x', 'x=5', 'x=5+3/2', 'x=2*y').");
			}
			argumentBodyType = BODY_RUNTIME;
			setSilentMode();
			description = "";
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
		public Argument(String argumentDefinitionString, bool forceDependent, params PrimitiveElement[] elements)  : base(Argument.TYPE_ID) {
			if ( mXparser.regexMatch(argumentDefinitionString, ParserSymbol.nameOnlyTokenRegExp) ) {
				argumentName = argumentDefinitionString;
				argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentType = FREE_ARGUMENT;
				argumentExpression = new Expression(elements);
			} else if ( mXparser.regexMatch(argumentDefinitionString, ParserSymbol.constArgDefStrRegExp) ) {
				HeadEqBody headEqBody = new HeadEqBody(argumentDefinitionString);
				argumentName = headEqBody.headTokens[0].tokenStr;
				Expression bodyExpr = new Expression(headEqBody.bodyStr);
				if (forceDependent) {
					argumentExpression = bodyExpr;
					addDefinitions(elements);
					argumentType = DEPENDENT_ARGUMENT;
				} else {
					double bodyValue = bodyExpr.calculate();
					if ( (bodyExpr.getSyntaxStatus() == Expression.NO_SYNTAX_ERRORS) && (bodyValue != Double.NaN) ) {
						argumentExpression = new Expression();
						argumentValue = bodyValue;
						argumentType = FREE_ARGUMENT;
					} else {
						argumentExpression = bodyExpr;
						addDefinitions(elements);
						argumentType = DEPENDENT_ARGUMENT;
					}
				}
			} else if ( mXparser.regexMatch(argumentDefinitionString, ParserSymbol.functionDefStrRegExp) ) {
				HeadEqBody headEqBody = new HeadEqBody(argumentDefinitionString);
				argumentName = headEqBody.headTokens[0].tokenStr;
				argumentExpression = new Expression(headEqBody.bodyStr, elements);
				argumentExpression.setDescription(headEqBody.headStr);
				argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentType = DEPENDENT_ARGUMENT;
				n = new Argument(headEqBody.headTokens[2].tokenStr);
			} else {
				argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentType = FREE_ARGUMENT;
				argumentExpression = new Expression();
				argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentDefinitionString + "] " + "Invalid argument definition (patterns: 'x', 'x=5', 'x=5+3/2', 'x=2*y').");
			}
			argumentBodyType = BODY_RUNTIME;
			setSilentMode();
			description = "";
		}
		/**
		 * Constructor - creates free argument.
		 *
		 * @param      argumentName   the argument name
		 * @param      argumentValue  the argument value
		 */
		public Argument(String argumentName, double argumentValue) : base(Argument.TYPE_ID) {
			argumentExpression = new Expression();
			if (mXparser.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp)) {
				this.argumentName = "" + argumentName;
				this.argumentValue = argumentValue;
				argumentType = FREE_ARGUMENT;
			}
			else {
				this.argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentName + "] " + "Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
			}
			argumentBodyType = BODY_RUNTIME;
			setSilentMode();
			description = "";
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
			argumentExpression = new Expression();
			if (mXparser.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp)) {
				this.argumentName = "" + argumentName;
				this.argumentExtension = argumentExtension;
				argumentType = FREE_ARGUMENT;
				argumentBodyType = BODY_EXTENDED;
			}
			else {
				this.argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentName + "] " + "Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
				argumentBodyType = BODY_RUNTIME;
			}
			setSilentMode();
			description = "";
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
			if (mXparser.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp)) {
				this.argumentName="" + argumentName;
				argumentValue=ARGUMENT_INITIAL_VALUE;
				argumentExpression = new Expression(argumentExpressionString, elements);
				argumentExpression.setDescription(argumentName);
				argumentType = DEPENDENT_ARGUMENT;
			}
			else {
				this.argumentValue = ARGUMENT_INITIAL_VALUE;
				argumentExpression = new Expression();
				argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentName + "] " + "Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
			}
			argumentBodyType = BODY_RUNTIME;
			setSilentMode();
			description = "";
		}
		/**
		 * Sets argument description.
		 *
		 * @param      description         the argument description.
		 */
		public void setDescription(String description) {
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
		 * @return      true if recursive mode is enabled,
		 *              otherwise returns false
		 */
		public bool getRecursiveMode() {
			return argumentExpression.getRecursiveMode();
		}
		/**
		 * Gets computing time
		 *
		 * @return     Computing time in seconds.
		 */
		public double getComputingTime() {
			return argumentExpression.getComputingTime();
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
			if ((mXparser.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp))) {
				this.argumentName = argumentName;
				setExpressionModifiedFlags();
			}
			else if (argumentExpression != null)
				argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentName + "] " + "Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
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
			argumentExpression.setExpressionString(argumentExpressionString);
			if (argumentType == FREE_ARGUMENT)
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
			if (argumentType == DEPENDENT_ARGUMENT) {
				argumentType = FREE_ARGUMENT;
				argumentExpression.setExpressionString("");
			}
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
		 *            Argument.SYNTAX_ERROR_OR_STATUS_UNKNOWN
		 */
		public bool checkSyntax() {
			if (argumentBodyType == BODY_EXTENDED) return Argument.NO_SYNTAX_ERRORS;
			if (argumentType == FREE_ARGUMENT)
				return Argument.NO_SYNTAX_ERRORS;
			else
				return argumentExpression.checkSyntax();
		}
		/**
		 * Returns error message after checking the syntax
		 *
		 * @return     Error message as string.
		 */
		public String getErrorMessage() {
			return argumentExpression.getErrorMessage();
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
			if (argumentBodyType == BODY_EXTENDED)
				return argumentExtension.getArgumentValue();
			if (argumentType == FREE_ARGUMENT)
				return argumentValue;
			else
				return argumentExpression.calculate(calcStepsRegister);
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
			argumentExpression.defineArguments(argumentsNames);
		}
		/**
		 * Enables to define the argument (associated with the argument expression)
		 * based on the argument name and the argument value.
		 *
		 * @param      argumentName        the argument name
		 * @param      argumentValue       the the argument value
		 *
		 * @see        Argument
		 * @see        RecursiveArgument
		 */
		public void defineArgument(String argumentName, double argumentValue) {
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
			argumentExpression.addConstants(constants);
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
		public void defineFunction(String functionName, String  functionExpressionString,
				params String[] argumentsNames) {
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
		 * Creates cloned object of the this argument.''
		 *
		 * @return     clone of the argument.
		 */
		public Argument clone() {
			Argument newArg = new Argument(this.argumentName);
			newArg.argumentExpression = this.argumentExpression;
			newArg.argumentType = this.argumentType;
			newArg.argumentBodyType = this.argumentBodyType;
			newArg.argumentValue = this.argumentValue;
			newArg.description = this.description;
			newArg.n = this.n;
			if (this.argumentExtension != null) newArg.argumentExtension = argumentExtension.clone();
			else newArg.argumentExtension = null;
			return newArg;
		}
	}
}