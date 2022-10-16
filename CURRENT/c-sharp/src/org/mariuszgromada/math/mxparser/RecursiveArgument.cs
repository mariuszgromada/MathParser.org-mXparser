/*
 * @(#)RecursiveArgument.cs        5.0.4    2022-05-22
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
	 * RecursiveArgument class enables to declare the argument
	 * (variable) which is defined in a recursive way. Such an argument
	 * can be used in further processing in expressions, functions and dependent
	 * or recursive arguments.<br>
	 *
	 * For example:
	 * <ul>
	 * <li>'fib(n) = fin(n-1)+fib(n-2), fib(0) = 0, fib(1) = 1'
	 * <li>'factorial(n) = n*factorial(n-1), factorial(0) = 1'
	 * </ul>
	 * <p>
	 * When creating an argument you should avoid:
	 * <ul>
	 * <li>names reserved as parser keywords, in general words known in mathematical language
	 * as function names, operators (for example:
	 * sin, cos, +, -, etc...). Please be informed that after associating
	 * the argument with the expression, function or dependent/recursive argument
	 * its name will be recognized by the parser as reserved key word.
	 * It means that it could not be the same as any other key word known
	 * by the parser for this particular expression.
	 * <li>defining statements with increasing index: 'a(n) = a(n+1) + ... ', otherwise
	 * you will get Double.NaN
	 * <li>if recursion is not properly defined you will get Double.NaN in the result.
	 * This is due to the recursion counter inside of the recursive argument. Calculating
	 * n-th element requires no more than n recursion steps (usually less than n).
	 * <li>For negative 'n' you will get Double.NaN.
	 *
	 * </ul>
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
	 * @see Argument
	 * @see Expression
	 * @see Function
	 * @see Constant
	 */
	[CLSCompliant(true)]
	public class RecursiveArgument : Argument {
		/**
		 * Type identifier for recursive arguments.
		 */
		public const int TYPE_ID_RECURSIVE			= 102;
		public const String TYPE_DESC_RECURSIVE		= "User defined recursive argument";
		/**
		 * Base values
		 */
		private List<Double> baseValues;
		/**
		 * To avoid never ending loops
		 */
		private int recursiveCounter;
		private int startingIndex;
		/**
		 * Constructor - creates recursive argument.
		 *
		 * @param      argumentName                  the argument name
		 * @param      recursiveExpressionString     the recursive expression string
		 * @param      indexName                     index argument name
		 */
		public RecursiveArgument(String argumentName, String recursiveExpressionString, String indexName)
			: base(argumentName, recursiveExpressionString)
		{
			if (argumentName.Equals(this.getArgumentName())) {
				this.argumentType = RECURSIVE_ARGUMENT;
				baseValues = new List<Double>();
				this.n = new Argument(indexName);
				base.argumentExpression.addArguments(n);
				base.argumentExpression.addArguments(this);
				base.argumentExpression.setDescription(argumentName);
				recursiveCounter = -1;
			}
		}
		/**
		 * Constructor - creates recursive argument.
		 *
		 * @param      argumentName                  the argument name
		 * @param      recursiveExpressionString     the recursive expression string
		 * @param      n                             the index argument
		 * @param      elements                      Optional elements list (variadic - comma
		 *                                           separated) of types: Argument, Constant, Function
		 *
		 * @see        PrimitiveElement
		 * @see        Argument
		 */
		public RecursiveArgument(String argumentName, String recursiveExpressionString, Argument n, params PrimitiveElement[] elements)
			: base(argumentName, recursiveExpressionString)
		{
			if (argumentName.Equals(this.getArgumentName())) {
				this.argumentType = RECURSIVE_ARGUMENT;
				baseValues = new List<Double>();
				this.n = n;
				base.argumentExpression.addArguments(n);
				base.argumentExpression.addArguments(this);
				base.argumentExpression.addDefinitions(elements);
				base.argumentExpression.setDescription(argumentName);
				recursiveCounter = -1;
			}
		}
		/**
		 * Constructor - creates argument based on the argument definition string.
		 *
		 * @param      argumentDefinitionString        Argument definition string, i.e.:
		 *                                             <ul>
		 *                                                <li>'x' - only argument name
		 *                                                <li>'x=5' - argument name and argument value
		 *                                                <li>'x=2*5' - argument name and argument value given as simple expression
		 *                                                <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
		 *                                                <li>'x(n)=x(n-1)+x(n-2)' - for recursive arguments)
		 *                                             </ul>
		 *
		 * @param      elements                       Optional elements list
		 *                                            (variadic - comma separated) of types: Argument,
		 *                                            Constant, Function
		 *
		 * @see    PrimitiveElement
		 * @see    Argument
		 */
		public RecursiveArgument(String argumentDefinitionString, params PrimitiveElement[] elements) : base(argumentDefinitionString)
		{
			if (mXparser.regexMatch(argumentDefinitionString, ParserSymbol.function1ArgDefStrRegExp)) {
				this.argumentType = RECURSIVE_ARGUMENT;
				baseValues = new List<Double>();
				recursiveCounter = -1;
				base.argumentExpression.addArguments(base.n);
				base.argumentExpression.addArguments(this);
				base.argumentExpression.addDefinitions(elements);
				base.argumentExpression.setDescription(argumentDefinitionString);
			}
			else {
				base.argumentExpression = new Expression();
				base.argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentDefinitionString + "] " + "Invalid argument definition (patterns: f(n) = f(n-1) ...  ).");
			}
		}
		/**
		 * Adds base case
		 *
		 * @param      index               the base case index
		 * @param      value               the base case value
		 */
		public void addBaseCase(int index, double value) {
			int recSize = baseValues.Count;
			if (index > recSize-1) {
				/*
				 * Expand base values array if necessary
				 */
				for (int i = recSize; i < index; i++)
					baseValues.Add( Double.NaN );
				baseValues.Add(value);
			} else
				baseValues[index] = value;
		}
		/**
		 * Clears all based cases and stored calculated values
		 */
		public void resetAllCases()
		{
			baseValues.Clear();
			recursiveCounter = -1;
		}
		/**
		 * Gets recursive argument value
		 *
		 * @param      index               the index
		 *
		 * @return     value as double
		 */
		public double getArgumentValue(double index) {
			/*
			 * Remember starting index
			 */
			if (recursiveCounter == -1)
				startingIndex = (int)Math.Round(index);
			int recSize = baseValues.Count;
			int idx = (int)Math.Round(index);
			/*
			 * Count recursive calls
			 */
			recursiveCounter++;
			if ((recursiveCounter <= startingIndex) && (idx <= startingIndex)) {
				/*
				 * if recursive counter is still lower than starting index
				 * and current index is not increasing
				 */
				if ((idx >= 0) && (idx < recSize) && (!Double.IsNaN( baseValues[idx] )) ) {
					/*
					 * decrease recursive counter and return value
					 * if recursive value for the current index was already
					 * calculated and remembered in the base values table
					 */
					recursiveCounter--;
					return baseValues[idx];
				}
				else if (idx >= 0) {
					/*
					 * value is to be calculated by the recursive calls
					 */
					/*
					 * Set n to the current index
					 */
					n.setArgumentValue(idx);
					/*
					 * create new expression
					 */
					Expression newExp = new Expression(
							base.argumentExpression.expressionString
							,base.argumentExpression.argumentsList
							,base.argumentExpression.functionsList
							,base.argumentExpression.constantsList
							,Expression.INTERNAL
							,base.argumentExpression.UDFExpression
							,base.argumentExpression.UDFVariadicParamsAtRunTime);
					newExp.setDescription(base.getArgumentName());
					//newExp.setRecursiveMode();
					if (base.getVerboseMode())
					{
						//System.out.println(super.getVerboseMode() + ", " +super.getArgumentName() + ", " + super.argumentExpression.expressionString + "," + "VERBOSE MODE for recurssion");
						newExp.setVerboseMode();
					}
					/*
					 * perform recursive call
					 */
					double value = newExp.calculate();
					/*
					 * remember calculated in the base values array
					 */
					addBaseCase(idx, value);
					/*
					 * decrease recursive counter and return value
					 */
					recursiveCounter--;
					return value;
				} else {
					/*
					 * decrease recursive counter and
					 * return Double.NaN for negative index call
					 */
					recursiveCounter--;
					return Double.NaN;
				}
			} else {
				/* stop never ending loop
				 * decrease recursive counter and
				 * return Double.NaN
				 */
				recursiveCounter--;
				return Double.NaN;
			}
		}
	}
}