/*
 * @(#)Function.cs        4.3.0   2018-12-12
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2019 MARIUSZ GROMADA. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY <MARIUSZ GROMADA> ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of MARIUSZ GROMADA.
 *
 * If you have any questions/bugs feel free to contact:
 *
 *     Mariusz Gromada
 *     mariuszgromada.org@gmail.com
 *     http://mathparser.org
 *     http://mathspace.pl
 *     http://janetsudoku.mariuszgromada.org
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser
 *     http://mxparser.sourceforge.net
 *     http://bitbucket.org/mariuszgromada/mxparser
 *     http://mxparser.codeplex.com
 *     http://github.com/mariuszgromada/Janet-Sudoku
 *     http://janetsudoku.codeplex.com
 *     http://sourceforge.net/projects/janetsudoku
 *     http://bitbucket.org/mariuszgromada/janet-sudoku
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://scalarmath.org/
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
using org.mariuszgromada.math.mxparser.parsertokens;
using System;
using System.Collections.Generic;

namespace org.mariuszgromada.math.mxparser {
	/// <summary>
	/// Function class provides possibility to define user functions.
	/// Functions can be used in further processing by any expression,
	/// dependent or recursive argument, function, etc... For expamle:
	///
	/// <list type="bullet">
	/// <item>'f(x) = sin(x)'</item>
	/// <item>'g(x,y) = sin(x)+cos(y)'</item>
	/// <item>'h(x,y = f(x)+g(y,x)'</item>
	/// <item>in general 'f(x1,x2,...,xn)' where x1,...,xn are arguments</item>
	/// </list>
	/// </summary>
	///
	/// <remarks>
	/// When creating a function you should avoid names reserved as
	/// parser keywords, in general words known in mathematical language
	/// as function names, operators (for example:
	/// sin, cos, +, -, pi, e, etc...). Please be informed that after associating
	/// the constant with the expression, function or dependent/recursive argument
	/// its name will be recognized by the parser as reserved key word.
	/// It means that it could not be the same as any other key word known
	/// by the parser for this particular expression.
	/// <para/>
	/// Author: <b>Mariusz Gromada</b><br/>
	/// <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br/>
	/// <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br/>
	/// <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br/>
	/// <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br/>
	/// <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br/>
	/// <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br/>
	/// <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br/>
	/// <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br/>
	/// <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br/>
	/// <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br/>
	/// <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br/>
	/// <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br/>
	/// <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br/>
	/// <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br/>
	/// <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a>
	/// <para/>
	/// Version: 4.3.0
	/// </remarks>
	/// <seealso cref="RecursiveArgument"/>
	/// <seealso cref="Expression"/>
	/// <seealso cref="Argument"/>
	/// <seealso cref="Constant"/>
	/// <seealso cref="FunctionExtension"/>
	///
	[CLSCompliant(true)]
	public class Function : PrimitiveElement {
		/// <summary>No syntax errors in the function.</summary>
		public const bool NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
		/// <summary>Syntax error in the function or syntax status unknown.</summary>
		public const bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
		/// <summary>When function was not found</summary>
		public const int NOT_FOUND = Expression.NOT_FOUND;
		/// <summary>Function type id identifier</summary>
		public const int TYPE_ID			= 103;
		public const String TYPE_DESC		= "User defined function";
		/// <summary>Function with body based on the expression string.</summary>
		///
		/// <seealso cref="Function.getFunctionBodyType()"/>
		public const int BODY_RUNTIME = 1;
		/// <summary>Function with body based on the extended code.</summary>
		///
		/// <seealso cref="FunctionExtension"/>
		/// <seealso cref="Function.getFunctionBodyType()"/>
		public const int BODY_EXTENDED = 2;
		/// <summary>Function body type.</summary>
		///
		/// <seealso cref="Function.BODY_RUNTIME"/>
		/// <seealso cref="Function.BODY_EXTENDED"/>
		/// <seealso cref="Function.getFunctionBodyType()"/>
		private int functionBodyType;
		/// <summary>function expression</summary>
		internal Expression functionExpression;
		/// <summary>function name</summary>
		private String functionName;
		/// <summary>function description</summary>
		private String description;
		/// <summary>Indicates whether UDF is variadic</summary>
		internal bool isVariadic;
		/// <summary>The number of function parameters</summary>
		private int parametersNumber;
		/// <summary>Function extension (body based in code)</summary>
		///
		/// <seealso cref="FunctionExtension"/>
		/// <seealso cref="FunctionExtensionVariadic"/>
		/// <seealso cref="Function.Function(String, FunctionExtension)"/>
		private FunctionExtension functionExtension;
		/// <summary>Function extension variadic (body based in code)</summary>
		///
		/// <seealso cref="FunctionExtension"/>
		/// <seealso cref="FunctionExtensionVariadic"/>
		/// <seealso cref="Function.Function(String, FunctionExtension)"/>
		private FunctionExtensionVariadic functionExtensionVariadic;
		/*=================================================
		 *
		 * Constructors
		 *
		 *=================================================
		 */
		/// <summary>
		/// Constructor - creates function from function name
		/// and function expression string.
		/// </summary>
		///
		/// <param name="functionName">the function name</param>
		/// <param name="functionExpressionString">the function expression string</param>
		/// <param name="elements">
		///     Optional elements list (variadic - comma separated)
		///     of types: <see cref="Argument"/>, <see cref="Constant"/>,
		///     <see cref="Function"/>
		/// </param>
		///
		/// <seealso cref="PrimitiveElement"/>
		/// <seealso cref="Expression"/>
		public Function(String functionName
						,String  functionExpressionString, params PrimitiveElement[] elements) : base(Function.TYPE_ID) {
			if (mXparser.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
				this.functionName = functionName;
				functionExpression = new Expression(functionExpressionString, elements);
				functionExpression.setDescription(functionName);
				functionExpression.UDFExpression = true;
				isVariadic = false;
				parametersNumber = 0;
				description = "";
				functionBodyType = BODY_RUNTIME;
				addFunctions(this);
			}
			else {
				parametersNumber = 0;
				description = "";
				functionExpression = new Expression("");
				functionExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + functionName + "]" + "Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp);
			}
		}
		/// <summary>
		/// Constructor - creates function from function name,
		/// function expression string and argument names.
		/// </summary>
		///
		/// <param name="functionName">the function name</param>
		/// <param name="functionExpressionString">the function expression string</param>
		/// <param name="argumentsNames">
		///     the arguments names (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Expression"/>
		public Function(String functionName
						,String  functionExpressionString
						,params String[] argumentsNames ) : base(Function.TYPE_ID) {
			if (mXparser.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
				this.functionName = functionName;
				functionExpression = new Expression(functionExpressionString);
				functionExpression.setDescription(functionName);
				functionExpression.UDFExpression = true;
				isVariadic = false;
				foreach (String argName in argumentsNames)
					functionExpression.addArguments(new Argument(argName));
				parametersNumber = argumentsNames.Length - countRecursiveArguments();
				description = "";
				functionBodyType = BODY_RUNTIME;
				addFunctions(this);
			}
			else {
				parametersNumber = 0;
				description = "";
				functionExpression = new Expression("");
				functionExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + functionName + "]" + "Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp);
			}
		}
		/// <summary>
		/// Constructor for function definition in natural math language,
		/// for instance providing on string "f(x,y) = sin(x) + cos(x)"
		/// is enough to define function "f" with parameters "x and y"
		/// and function body "sin(x) + cos(x)".
		/// </summary>
		/// <param name="functionDefinitionString">
		///     Function definition in the form
		///     of one String, ie "f(x,y) = sin(x) + cos(x)"
		/// </param>
		/// <param name="elements">
		///     Optional elements list (variadic - comma separated)
		///     of types: <see cref="Argument"/>, <see cref="Constant"/>,
		///     <see cref="Function"/>
		/// </param>
		/// 
		/// <seealso cref="PrimitiveElement"/>
		public Function(String functionDefinitionString, params PrimitiveElement[] elements) : base(Function.TYPE_ID) {
			parametersNumber = 0;
			if (mXparser.regexMatch(functionDefinitionString, ParserSymbol.functionDefStrRegExp)) {
				HeadEqBody headEqBody = new HeadEqBody(functionDefinitionString);
				this.functionName = headEqBody.headTokens[0].tokenStr;
				functionExpression = new Expression(headEqBody.bodyStr, elements);
				functionExpression.setDescription(headEqBody.headStr);
				functionExpression.UDFExpression = true;
				isVariadic = false;
				if (headEqBody.headTokens.Count > 1) {
					Token t;
					for (int i = 1; i < headEqBody.headTokens.Count; i++) {
						t = headEqBody.headTokens[i];
						if (t.tokenTypeId != ParserSymbol.TYPE_ID)
							functionExpression.addArguments(new Argument(t.tokenStr));
					}
				}
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
				description = "";
				functionBodyType = BODY_RUNTIME;
				addFunctions(this);
			} else if ( mXparser.regexMatch(functionDefinitionString, ParserSymbol.functionVariadicDefStrRegExp) ) {
				HeadEqBody headEqBody = new HeadEqBody(functionDefinitionString);
				this.functionName = headEqBody.headTokens[0].tokenStr;
				functionExpression = new Expression(headEqBody.bodyStr, elements);
				functionExpression.setDescription(headEqBody.headStr);
				functionExpression.UDFExpression = true;
				isVariadic = true;
				parametersNumber = -1;
				description = "";
				functionBodyType = BODY_RUNTIME;
				addFunctions(this);
			} else {
				functionExpression = new Expression();
				functionExpression.setDescription(functionDefinitionString);
				String errorMessage = ""; errorMessage = errorMessage + "\n [" + functionDefinitionString + "] " + "--> pattern not mathes: f(x1,...,xn) = ... reg exp: " + ParserSymbol.functionDefStrRegExp;
				functionExpression.setSyntaxStatus(Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN, errorMessage);
			}
		}
		/// <summary>
		/// Constructor for function definition based on
		/// your own source code - this is via implementation
		/// of <see cref="FunctionExtension"/> interface.
		/// </summary>
		///
		/// <param name="functionName">Function name</param>
		/// <param name="functionExtension">Your own source code</param>
		public Function(String functionName, FunctionExtension functionExtension) : base(Function.TYPE_ID) {
			if (mXparser.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
				this.functionName = functionName;
				functionExpression = new Expression("{body-ext}");
				isVariadic = false;
				parametersNumber = functionExtension.getParametersNumber();
				description = "";
				this.functionExtension = functionExtension;
				functionBodyType = BODY_EXTENDED;
			} else {
				parametersNumber = 0;
				description = "";
				functionExpression = new Expression("");
				functionExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + functionName + "]" + "Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp);
			}
		}
		/// <summary>
		/// Constructor for function definition based on
		/// your own source code - this is via implementation
		/// of <see cref="FunctionExtensionVariadic"/> interface.
		/// </summary>
		///
		/// <param name="functionName">Function name</param>
		/// <param name="functionExtension">Your own source code</param>
		public Function(String functionName, FunctionExtensionVariadic functionExtensionVariadic) : base(Function.TYPE_ID) {
			if ( mXparser.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp) ) {
				this.functionName = functionName;
				functionExpression = new Expression("{body-ext-var}");
				isVariadic = true;
				parametersNumber = -1;
				description = "";
				this.functionExtensionVariadic = functionExtensionVariadic;
				functionBodyType = BODY_EXTENDED;
			} else {
				parametersNumber = 0;
				description = "";
				functionExpression = new Expression("");
				functionExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + functionName + "]" + "Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp);
			}
		}
		/// <summary>Private constructor used for function cloning.</summary>
		///
		/// <param name="function">
		///     the function, which is going
		///     to be cloned.
		/// </param>
		private Function(Function function) : base(Function.TYPE_ID) {
			functionName = function.functionName;
			description = function.description;
			parametersNumber = function.parametersNumber;
			functionExpression = function.functionExpression.clone();
			functionBodyType = function.functionBodyType;
			isVariadic = function.isVariadic;
			if (functionBodyType == BODY_EXTENDED) {
				if (function.functionExtension != null) functionExtension = function.functionExtension.clone();
				if (function.functionExtensionVariadic != null) functionExtensionVariadic = function.functionExtensionVariadic.clone();
			}
		}
		/// <summary>
		/// Constructor for function definition in natural math language,
		/// for instance providing on string "f(x,y) = sin(x) + cos(x)"
		/// is enough to define function "f" with parameters "x and y"
		/// and function body "sin(x) + cos(x)".
		/// </summary>
		///
		/// <param name="functionDefinitionString">
		///     Function definition in the form
		///     of one String, ie "f(x,y) = sin(x) + cos(x)"
		/// </param>
		/// <param name="elements">
		///     Optional elements list (variadic - comma separated)
		///     of types: <see cref="Argument"/>, <see cref="Constant"/>,
		///     <see cref="Function"/>
		/// </param>
		/// 
		/// <seealso cref="PrimitiveElement"/>
		///
		public void setFunction(String functionDefinitionString, params PrimitiveElement[] elements) {
			parametersNumber = 0;
			if ( mXparser.regexMatch(functionDefinitionString, ParserSymbol.functionDefStrRegExp) ) {
				HeadEqBody headEqBody = new HeadEqBody(functionDefinitionString);
				this.functionName = headEqBody.headTokens[0].tokenStr;
				functionExpression = new Expression(headEqBody.bodyStr, elements);
				functionExpression.setDescription(headEqBody.headStr);
				functionExpression.UDFExpression = true;
				isVariadic = false;
				if (headEqBody.headTokens.Count > 1) {
					Token t;
					for (int i = 1; i < headEqBody.headTokens.Count; i++) {
						t = headEqBody.headTokens[i];
						if (t.tokenTypeId != ParserSymbol.TYPE_ID)
							functionExpression.addArguments(new Argument(t.tokenStr));
					}
				}
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
				description = "";
				functionBodyType = BODY_RUNTIME;
				addFunctions(this);
			} else if ( mXparser.regexMatch(functionDefinitionString, ParserSymbol.functionVariadicDefStrRegExp) ) {
				HeadEqBody headEqBody = new HeadEqBody(functionDefinitionString);
				this.functionName = headEqBody.headTokens[0].tokenStr;
				functionExpression = new Expression(headEqBody.bodyStr, elements);
				functionExpression.setDescription(headEqBody.headStr);
				functionExpression.UDFExpression = true;
				isVariadic = true;
				parametersNumber = -1;
				description = "";
				functionBodyType = BODY_RUNTIME;
				addFunctions(this);
			} else {
				functionExpression = new Expression();
				functionExpression.setDescription(functionDefinitionString);
				String errorMessage = ""; errorMessage = errorMessage + "\n [" + functionDefinitionString + "] " + "--> pattern not mathes: f(x1,...,xn) = ... reg exp: " + ParserSymbol.functionDefStrRegExp;
				functionExpression.setSyntaxStatus(Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN, errorMessage);
			}
		}
		/// <summary>Sets function description.</summary>
		///
		/// <param name="description">the function description</param>
		public void setDescription(String description) {
			this.description = description;
		}
		/// <summary>Gets function description</summary>
		///
		/// <returns>Function description as string</returns>
		public String getDescription() {
			return description;
		}
		/// <summary>Gets function name.</summary>
		///
		/// <returns>Function name as string.</returns>
		public String getFunctionName() {
			return functionName;
		}
		/// <summary>Gets function expression string</summary>
		///
		/// <returns>Function expression as string.</returns>
		public String getFunctionExpressionString() {
			return functionExpression.getExpressionString();
		}
		/// <summary>Sets function name.</summary>
		///
		/// <param name="functionName">the function name</param>
		public void setFunctionName(String functionName) {
			if (mXparser.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
				this.functionName = functionName;
				setExpressionModifiedFlags();
			}
			else functionExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + functionName + "]" + "Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp);
		}
		/// <summary>Sets value of function argument (function parameter).</summary>
		///
		/// <param name="argumentIndex">
		///     the argument index (in accordance to
		///     arguments declaration sequence)
		/// </param>
		/// <param name="argumentValue">the argument value</param>
		public void setArgumentValue(int argumentIndex, double argumentValue) {
			if (isVariadic == false)
				if (functionBodyType == BODY_RUNTIME)
					functionExpression.argumentsList[argumentIndex].argumentValue = argumentValue;
				else if (isVariadic == false)
					functionExtension.setParameterValue(argumentIndex, argumentValue);
		}
		/// <summary>Returns function body type: <see cref="Function.BODY_RUNTIME"/> <see cref="Function.BODY_EXTENDED"/></summary>
		/// 
		/// <returns>Returns function body type: <see cref="Function.BODY_RUNTIME"/> <see cref="Function.BODY_EXTENDED"/></returns>
		public int getFunctionBodyType() {
			return functionBodyType;
		}
		/// <summary>Checks function syntax</summary>
		///
		/// <returns>
		///     syntax status: <see cref="Function.NO_SYNTAX_ERRORS"/>,
		///     <see cref="Function.SYNTAX_ERROR_OR_STATUS_UNKNOWN"/>
		/// </returns>
		public bool checkSyntax() {
			bool syntaxStatus = Function.NO_SYNTAX_ERRORS;
			if (functionBodyType != BODY_EXTENDED)
				syntaxStatus = functionExpression.checkSyntax();
			checkRecursiveMode();
			return syntaxStatus;
		}
		/// <summary>Returns error message after checking the syntax.</summary>
		///
		/// <returns>Error message as string.</returns>
		public String getErrorMessage() {
			return functionExpression.getErrorMessage();
		}
		/// <summary>clone method</summary>
		internal Function clone() {
			Function newFunction = new Function(this);
			return newFunction;
		}
		/// <summary>Calculates function value</summary>
		///
		/// <returns>Function value as double.</returns>
		public double calculate() {
			if (functionBodyType == BODY_RUNTIME)
				return functionExpression.calculate();
			else
				if (isVariadic == false)
					return functionExtension.calculate();
				else {
					List<Double> paramsList = functionExpression.UDFVariadicParamsAtRunTime;
					if (paramsList != null) {
						int n = paramsList.Count;
						double[] parameters = new double[n];
						for (int i = 0; i < n; i++)
							parameters[i] = paramsList[i];
						return functionExtensionVariadic.calculate(parameters);
					} else return Double.NaN;
				}
		}
		/// <summary>Calculates function value</summary>
		///
		/// <param name="parameters">the function parameters values (as doubles)</param>
		///
		/// <returns>function value as double.</returns>
		public double calculate(params double[] parameters) {
			if (parameters.Length > 0) {
				functionExpression.UDFVariadicParamsAtRunTime = new List<Double>();
				foreach (double x in parameters)
					functionExpression.UDFVariadicParamsAtRunTime.Add(x);
			} else return Double.NaN;
			if (isVariadic) {
				if (functionBodyType == BODY_RUNTIME)
					return functionExpression.calculate();
				else
					return functionExtensionVariadic.calculate(parameters);
			} else if (parameters.Length == this.getParametersNumber()) {
				if (functionBodyType == BODY_RUNTIME) {
					for (int p = 0; p < parameters.Length; p++)
						setArgumentValue(p, parameters[p]);
					return functionExpression.calculate();
				} else {
					for (int p = 0; p < parameters.Length; p++)
						functionExtension.setParameterValue(p, parameters[p]);
					return functionExtension.calculate();
				}
			}
			else {
				this.functionExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + functionName + "] incorrect number of function parameters (expecting " + getParametersNumber() + ", provided " + parameters.Length + ")!");
				return Double.NaN;
			}
		}
		/// <summary>Calculates function value</summary>
		///
		/// <param name="arguments">
		///     ]function parameters (as 
		///     <see cref="Argument">Arguments</see>)
		/// </param>
		///
		/// <returns>function value as double</returns>
		public double calculate(params Argument[] arguments) {
			double[] parameters;
			if (arguments.Length > 0) {
				functionExpression.UDFVariadicParamsAtRunTime = new List<Double>();
				parameters = new double[arguments.Length];
				double x;
				for (int i = 0; i < arguments.Length; i++) {
					x = arguments[i].getArgumentValue();
					functionExpression.UDFVariadicParamsAtRunTime.Add(x);
					parameters[i] = x;
				}
			} else return Double.NaN;
			if (isVariadic) {
				if (functionBodyType == BODY_RUNTIME)
					return functionExpression.calculate();
				else
					return functionExtensionVariadic.calculate(parameters);
			} else if (arguments.Length == this.getParametersNumber()) {
				if (functionBodyType == BODY_RUNTIME) {
					for (int p = 0; p < arguments.Length; p++)
						setArgumentValue(p, arguments[p].getArgumentValue());
					return functionExpression.calculate();
				} else {
					for (int p = 0; p < arguments.Length; p++)
						functionExtension.setParameterValue(p, arguments[p].getArgumentValue());
					return functionExtension.calculate();
				}
			}
			else {
				this.functionExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + functionName + "] incorrect number of function parameters (expecting " + getParametersNumber() + ", provided " + arguments.Length + ")!");
				return Double.NaN;
			}
		}
		/// <summary>
		/// Adds user defined elements (such as: <see cref="Argument">Arguments</see>, 
		/// <see cref="Constant">Constants</see>, <see cref="Function">Functions</see>)
		/// to the function expressions.
		/// </summary>
		///
		/// <param name="elements">
		///     Elements list (variadic), where <see cref="Argument"/>,
		///     <see cref="Constant"/>, <see cref="Function"/>
		///     extend the same class <see cref="PrimitiveElement"/>
		/// </param>
		///
		/// <seealso cref="PrimitiveElement"/>
		public void addDefinitions(params PrimitiveElement[] elements) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addDefinitions(elements);
		}
		/// <summary>
		/// Removes user defined elements (such as: <see cref="Argument">Arguments</see>,
		/// <see cref="Constant">Constants</see>, <see cref="Function">Functions</see>)
		/// from the function expressions.
		/// </summary>
		///
		/// <param name="elements">
		///     Elements list (variadic), where <see cref="Argument"/>,
		///     <see cref="Constant"/>, <see cref="Function"/>
		///     extend the same class <see cref="PrimitiveElement"/>
		/// </param>
		///
		/// <seealso cref="PrimitiveElement"/>
		public void removeDefinitions(params PrimitiveElement[] elements) {
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
			int numOfRecursiveArguments = 0;
			if (functionBodyType == Function.BODY_RUNTIME)
				foreach (Argument argument in functionExpression.argumentsList)
					if (argument.getArgumentType() == Argument.RECURSIVE_ARGUMENT) numOfRecursiveArguments++;
			return numOfRecursiveArguments;
		}
		/// <summary>Adds arguments (variadic) to the function expression definition.</summary>
		///
		/// <param name="arguments">
		///     the arguments list
		///     (comma separated list)
		/// </param>
		/// 
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public void addArguments(params Argument[] arguments) {
			if (functionBodyType == Function.BODY_RUNTIME) {
				functionExpression.addArguments(arguments);
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
			}
		}
		/// <summary>
		/// Enables to define the arguments (associated with
		/// the function expression) based on the given arguments names.
		/// </summary>
		///
		/// <param name="argumentsNames">
		///     the arguments names (variadic)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public void defineArguments(params String[] argumentsNames) {
			if (functionBodyType == Function.BODY_RUNTIME) {
				functionExpression.defineArguments(argumentsNames);
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
			}
		}
		/// <summary>
		/// Enables to define the argument (associated with the function expression)
		/// based on the argument name and the argument value.
		/// </summary>
		/// 
		/// <param name="argumentName">the argument name</param>
		/// <param name="argumentValue">the the argument value</param>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public void defineArgument(String argumentName, double argumentValue) {
			if (functionBodyType == Function.BODY_RUNTIME) {
				functionExpression.defineArgument(argumentName, argumentValue);
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
			}
		}
		/// <summary>Gets argument index from the function expression.</summary>
		///
		/// <param name="argumentName">the argument name</param>
		///
		/// <returns>
		///     The argument index if the argument name was found,
		///     otherwise returns <see cref="Argument.NOT_FOUND"/>
		/// </returns>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public int getArgumentIndex(String argumentName) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getArgumentIndex(argumentName);
			else
				return -1;
		}
		/// <summary>Gets argument from the function expression</summary>
		///
		/// <param name="argumentName">the argument name</param>
		///
		/// <returns>
		///     The argument if the argument name was found,
		///     otherwise returns null.
		/// </returns>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public Argument getArgument(String argumentName) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getArgument(argumentName);
			else
				return null;
		}
		/// <summary>Gets argument from the function expression.</summary>
		///
		/// <param name="argumentIndex">the argument index</param>
		///
		/// <returns>
		///     Argument if the argument index is between 0 and
		///     the last available argument index (<see cref="getArgumentsNumber()"/>-1),
		///     otherwise returns null.
		/// </returns>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public Argument getArgument(int argumentIndex) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getArgument(argumentIndex);
			else
				return null;
		}
		/// <summary>Gets number of parameters associated with the function expression.</summary>
		///
		/// <returns>The number of function parameters (int &gt;= 0)</returns>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public int getParametersNumber() {
			if (isVariadic == false)
				return parametersNumber;
			else {
				if (functionExpression.UDFVariadicParamsAtRunTime != null)
					return functionExpression.UDFVariadicParamsAtRunTime.Count;
				else
					return -1;
			}
		}
		/// <summary>Set parameters number.</summary>
		///
		/// <param name="parametersNumber">
		///     the number of function parameters (default = number of arguments
		///     (less number might be specified).
		/// </param>
		public void setParametersNumber(int parametersNumber) {
			if (functionBodyType == Function.BODY_RUNTIME) {
				this.parametersNumber = parametersNumber;
				functionExpression.setExpressionModifiedFlag();
			}
		}
		/// <summary>Gets user defined function parameter name</summary>
		///
		/// <param name="parameterIndex">Parameter index between 0 and n-1</param>
		/// 
		/// <returns>If parameter exists returns parameters name, otherwise empty string is returned.</returns>
		public String getParameterName(int parameterIndex) {
			if (parameterIndex < 0) return "";
			if (parameterIndex >= parametersNumber) return "";
			if (functionBodyType == BODY_RUNTIME) return getArgument(parameterIndex).getArgumentName();
			if (functionBodyType == BODY_EXTENDED) return this.functionExtension.getParameterName(parameterIndex);
			return "";
		}
		/// <summary>Gets number of arguments associated with the function expression.</summary>
		///
		/// <returns>The number of arguments (int &gt;= 0)</returns>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public int getArgumentsNumber() {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getArgumentsNumber();
			else
				return 0;
		}
		/// <summary>
		/// Removes first occurrences of the arguments
		/// associated with the function expression.
		/// </summary>
		///
		/// <param name="argumentsNames">
		///     the arguments names
		///     (variadic parameters) comma separated list
		/// </param>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public void removeArguments(params String[] argumentsNames) {
			if (functionBodyType == Function.BODY_RUNTIME) {
				functionExpression.removeArguments(argumentsNames);
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
			}
		}
		/// <summary>
		/// Removes first occurrences of the arguments
		/// associated with the function expression.
		/// </summary>
		///
		/// <param name="arguments">
		///     the arguments (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public void removeArguments(params Argument[] arguments) {
			if (functionBodyType == Function.BODY_RUNTIME) {
				functionExpression.removeArguments(arguments);
				parametersNumber = functionExpression.getArgumentsNumber() - countRecursiveArguments();
			}
		}
		/// <summary>Removes all arguments associated with the function expression.</summary>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public void removeAllArguments() {
			if (functionBodyType == Function.BODY_RUNTIME) {
				functionExpression.removeAllArguments();
				parametersNumber = 0;
			}
		}
		/*=================================================
		 *
		 * Constants handling API (the same as in Expression)
		 * (protected argument expression)
		 *
		 *=================================================
		 */
		/// <summary>Adds constants (variadic parameters) to the function expression definition.</summary>
		///
		/// <param name="constants">
		///     the constants
		///     (comma separated list)
		/// </param>
		///
		/// <seealso cref="Constant"/>
		public void addConstants(params Constant[] constants) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addConstants(constants);
		}
		/// <summary>
		/// Enables to define the constant (associated with
		/// the function expression) based on the constant name and
		/// constant value.
		/// </summary>
		///
		/// <param name="constantName">the constant name</param>
		/// <param name="constantValue">the constant value</param>
		///
		/// <seealso cref="Constant"/>
		public void defineConstant(String constantName, double constantValue) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.defineConstant(constantName, constantValue);
		}
		/// <summary>Gets constant index associated with the function expression.</summary>
		///
		/// <param name="constantName">the constant name</param>
		///
		/// <returns>
		///     Constant index if constant name was found,
		///     otherwise return <see cref="Constant.NOT_FOUND"/>.
		/// </returns>
		///
		/// <seealso cref="Constant"/>
		public int getConstantIndex(String constantName) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getConstantIndex(constantName);
			else
				return -1;
		}
		/// <summary>Gets constant associated with the function expression.</summary>
		///
		/// <param name="constantName">the constant name</param>
		///
		/// <returns>
		///     Constant if constant name was found,
		///     otherwise return null.
		/// </returns>
		///
		/// <seealso cref="Constant"/>
		public Constant getConstant(String constantName) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getConstant(constantName);
			else
				return null;
		}
		/// <summary>Gets constant associated with the function expression.</summary>
		///
		/// <param name="constantIndex">the constant index</param>
		///
		/// <returns>
		///     Constant if the constantIndex is between
		///     0 and the last available constant index
		///     (<see cref="getConstantsNumber()"/> - 1),
		///     otherwise it returns null.
		/// </returns>
		///
		/// <seealso cref="Constant"/>
		public Constant getConstant(int constantIndex) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getConstant(constantIndex);
			else
				return null;
		}
		/// <summary>Gets number of constants associated with the function expression.</summary>
		///
		/// <returns>number of constants (int &gt;= 0)</returns>
		///
		/// <seealso cref="Constant"/>
		public int getConstantsNumber() {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getConstantsNumber();
			else
				return 0;
		}
		/// <summary>
		/// Removes first occurrences of the constants
		/// associated with the function expression.
		/// </summary>
		///
		/// <param name="constantsNames">
		///     the constants names (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Constant"/>
		public void removeConstants(params String[] constantsNames) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeConstants(constantsNames);
		}
		/// <summary>
		/// Removes first occurrences of the constants
		/// associated with the function expression
		/// </summary>
		///
		/// <param name="constants">
		///     the constants (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Constant"/>
		public void removeConstants(params Constant[] constants) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeConstants(constants);
		}
		/// <summary>
		/// Removes all constants
		/// associated with the function expression
		/// </summary>
		///
		/// <seealso cref="Constant"/>
		public void removeAllConstants() {
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
		///
		/// <param name="functions">
		///     the functions
		///     (variadic parameters) comma separated list
		/// </param>
		///
		/// <seealso cref="Function"/>
		public void addFunctions(params Function[] functions) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addFunctions(functions);
		}
		/// <summary>
		/// Enables to define the function (associated with
		/// the function expression) based on the function name,
		/// function expression string and arguments names (variadic parameters).
		/// </summary>
		///
		/// <param name="functionName">the function name</param>
		/// <param name="functionExpressionString">the expression string</param>
		/// <param name="argumentsNames">
		///     the function arguments names
		///     (variadic parameters)
		///     comma separated list
		/// </param>
		/// 
		/// <seealso cref="Function"/>
		public void defineFunction(String functionName, String  functionExpressionString,
				params String[] argumentsNames) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.defineFunction(functionName, functionExpressionString, argumentsNames);
		}
		/// <summary>Gets index of function associated with the function expression.</summary>
		///
		/// <param name="functionName">the function name</param>
		///
		/// <returns>
		///     Function index if function name was found,
		///     otherwise returns <see cref="Function.NOT_FOUND"/>
		/// </returns>
		///
		/// <seealso cref="Function"/>
		public int getFunctionIndex(String functionName) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getFunctionIndex(functionName);
			else
				return -1;
		}
		/// <summary>Gets function associated with the function expression.</summary>
		///
		/// <param name="functionName">the function name</param>
		///
		/// <returns>
		///     Function if function name was found,
		///     otherwise returns null.
		/// </returns>
		///
		/// <seealso cref="Function"/>
		public Function getFunction(String functionName) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getFunction(functionName);
			else
				return null;
		}
		/// <summary>Gets function associated with the function expression.</summary>
		///
		/// <param name="functionIndex">the function index</param>
		///
		/// <returns>
		///     Function if function index is between 0 and
		///     the last available function index (<see cref="getFunctionsNumber()"/>-1),
		///     otherwise returns null.
		/// </returns>
		///
		/// <seealso cref="Function"/>
		public Function getFunction(int functionIndex) {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getFunction(functionIndex);
			else
				return null;
		}
		/// <summary>Gets number of functions associated with the function expression.</summary>
		///
		/// <returns>number of functions (int &gt;= 0)</returns>
		///
		/// <seealso cref="Function"/>
		public int getFunctionsNumber() {
			if (functionBodyType == Function.BODY_RUNTIME)
				return functionExpression.getFunctionsNumber();
			else
				return 0;
		}
		/// <summary>
		/// Removes first occurrences of the functions
		/// associated with the function expression.
		/// </summary>
		///
		/// <param name="functionsNames">
		///     the functions names (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Function"/>
		public void removeFunctions(params String[] functionsNames) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeFunctions(functionsNames);
		}
		/// <summary>
		/// Removes first occurrences of the functions
		/// associated with the function expression.
		/// </summary>
		///
		/// <param name="functions">
		///     the functions (variadic parameters)
		///     comma separated list.
		/// </param>
		///
		/// <seealso cref="Function"/>
		public void removeFunctions(params Function[] functions) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.removeFunctions(functions);
		}
		/// <summary>
		/// Removes all functions
		/// associated with the function expression.
		/// </summary>
		///
		/// <seealso cref="Function"/>
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
		/// Disables function verbose mode (sets default silent mode)
		public void setSilentMode() {
			functionExpression.setSilentMode();
		}
		/// <summary>Returns verbose mode status</summary>
		///
		/// <returns>
		///     true if verbose mode is on,
		///     otherwise returns false
		/// </returns>
		public bool getVerboseMode() {
			return functionExpression.getVerboseMode();
		}
		/// <summary>
		/// Checks whether function name appears in function body
		/// if yes the recursive mode is being set
		/// </summary>
		internal void checkRecursiveMode() {
			if (functionBodyType == Function.BODY_RUNTIME) {
				List<Token> functionExpressionTokens = functionExpression.getInitialTokens();
				functionExpression.disableRecursiveMode();
				if (functionExpressionTokens != null)
					foreach (Token t in functionExpressionTokens)
						if (t.tokenStr.Equals(functionName)) {
							functionExpression.setRecursiveMode();
							break;
						}
			}
		}
		/// <summary>Gets recursive mode status</summary>
		///
		/// <returns>
		///     true if recursive mode is enabled,
		///     otherwise returns false
		/// </returns>
		///
		public bool getRecursiveMode() {
			return functionExpression.getRecursiveMode();
		}
		/// <summary>Gets computing time</summary>
		///
		/// <returns>computing time in seconds.</returns>
		public double getComputingTime() {
			return functionExpression.getComputingTime();
		}
		/// <summary>Adds related expression.</summary>
		///
		/// <param name="expression">the related expression</param>
		internal void addRelatedExpression(Expression expression) {
			if (functionBodyType == Function.BODY_RUNTIME)
				functionExpression.addRelatedExpression(expression);
		}
		/// <summary>Removes related expression.</summary>
		///
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
	}
}