/*
 * @(#)Argument.cs        4.3.0   2018-12-12
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

namespace org.mariuszgromada.math.mxparser {

	/// <summary>
	/// Argument class enables to declare the argument
	/// (variable) which can be used in further processing
	/// (in expressions, functions and dependent / recursive arguments).
	/// <para/>
	/// For example:
	/// <list type="bullet">
	/// 	<item>'x' - argument in expression 'sin(x)'</item>
	/// 	<item>'x' and 'y' - arguments in expression 'sin(x)+cos(y)'.</item>
	/// 	<item>'x=2*t' - dependent argument (dependent from 't') in expression 'cos(x)'</item>
	/// </list>
	/// <para/>
	/// Using Argument class you can define two argument types:
	/// <list type="bullet">
	///		<item><b>free argument</b> - when value of argument 'x' is directly given
	/// 	by a number (for example 'x=5')</item>
	/// 	<item><b>dependent argument</b> - when value of argument 'x' is given by
	/// 	expression (for example: 'x=2*a+b' - argument 'x' depends from
	/// 	argument/constant 'a' and argument/constant 'b' or any other
	/// 	possible option like function, etc...)</item>
	/// </list>
	/// </summary>
	/// 
	/// <remarks>
	/// When creating an argument you should avoid names reserved as
	/// parser keywords, in general words known in mathematical language
	/// as function names, operators (for example:
	/// sin, cos, +, -, etc...). Please be informed that after associating
	/// the argument with the expression, function or dependent/recursive argument
	/// its name will be recognized by the parser as reserved key word.
	/// It means that it could not be the same as any other key word known
	/// by the parser for this particular expression. Parser is case sensitive.
	///
	/// <para/>
	/// Authors:<br/>
	/// <b>Mariusz Gromada</b><br/>
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
	/// <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a><br/>
	/// </remarks>
	[CLSCompliant(true)]
	public class Argument : PrimitiveElement {
		
		///<summary>No syntax errors in the dependent argument definition.</summary>
		public const bool NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
		
		/// <summary>Syntax error in the dependent argument definition.</summary>
		public const bool SYNTAX_ERROR_OR_STATUS_UNKNOWN = Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
		
		/// <summary><see cref="Double.NaN"/> as initial value of the argument.</summary>
		public const double ARGUMENT_INITIAL_VALUE = Double.NaN;
		
		/// <summary>When argument was not not found</summary>
		public const int NOT_FOUND = Expression.NOT_FOUND;
		
		/// <summary>Type indicator for free argument.</summary>
		public const int FREE_ARGUMENT = 1;
		
		/// <summary>Type indicator for dependent argument.</summary>
		public const int DEPENDENT_ARGUMENT = 2;
		
		/// <summary>Type indicator for recursive argument.</summary>
		public const int RECURSIVE_ARGUMENT = 3;
		
		/// <summary>Argument type id for the definition of key words
		/// known by the parser.</summary>
		public const int TYPE_ID			= 101;
		public const String TYPE_DESC		= "User defined argument";
		/// <summary>Description of the argument.</summary>
		private String description;
		
		/// <summary>
		/// Argument expression for dependent and recursive
		/// arguments.
		/// </summary>
		internal Expression argumentExpression;
		/// <summary>Argument name (x, y, arg1, my_argument, etc...)</summary>
		private String argumentName;
		/// <summary>Argument type (free, dependent)</summary>
		internal int argumentType;
		/// <summary>Argument value (for free arguments).</summary>
		internal double argumentValue;
		
		/// <summary>Index argument.</summary>
		///
		/// <seealso cref="RecursiveArgument"/>
		
		protected Argument n;
		
		/*=================================================
		 *
		 * Constructors
		 *
		 *=================================================
		 */
		
		/// <summary>Default constructor - creates argument based on the argument definition string.</summary>
		///
		/// <param name="argumentDefinitionString">
		///     Argument definition string, i.e.:
		///     <list type="bullet">
		///        <item>'x' - only argument name</item>
		///        <item>'x=5' - argument name and argument value</item>
		///        <item>'x=2*5' - argument name and argument value given as simple expression</item>
		///        <item>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')</item>
		///     </list>
		/// </param>
		///
		/// <param name="elements">
		///     Optional parameters (comma separated) such as <see cref="Argument">Arguments</see>,
		///     <see cref="Constant">Constants</see>, <see cref="Function">Functions</see>
		/// </param>
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
			setSilentMode();
			description = "";
		}
		
		/// <summary>Default constructor - creates argument based on the argument definition string.</summary>
		///
		/// <param name="argumentDefinitionString">
		///     Argument definition string, i.e.:
		///     <list type="bullet">
		///        <item>'x' - only argument name</item>
		///        <item>'x=5' - argument name and argument value</item>
		///        <item>'x=2*5' - argument name and argument value given as simple expression</item>
		///        <item>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')</item>
		///     </list>
		/// </param>
		///
		/// <param name="forceDependent">If true parser will try to create dependent argument</param>
		/// <param name="elements">
		///     Optional parameters (comma separated) such as <see cref="Argument">Arguments</see>,
		///     <see cref="Constant">Constants</see>, <see cref="Function">Functions</see>
		/// </param>
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
				if (forceDependent == true) {
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
			setSilentMode();
			description = "";
		}
		
		/// <summary>Constructor - creates free argument.</summary>
		///
		/// <param name="argumentName">the argument name</param>
		/// <param name="argumentValue">the argument value</param>
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
			setSilentMode();
			description = "";
		}
		
		/// <summary>
		/// Constructor - creates dependent argument(with hidden
		/// argument expression).
		/// </summary>
		///
		/// <param name="argumentName">the argument name</param>
		/// <param name="argumentExpressionString">the argument expression string</param>
		/// <param name="elements">
		///     Optional parameters (comma separated) such as <see cref="Argument">Arguments</see>,
		///     <see cref="Constant">Constants</see>, <see cref="Function">Functions</see>
		/// </param>
		///
		/// <seealso cref="Expression"/>
		/// <seealso cref="PrimitiveElement"/>
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
			setSilentMode();
			description = "";
		}
		
		/// <summary>Sets argument description.</summary>
		///
		/// <param name="description">the argument description.</param>
		public void setDescription(String description) {
			this.description = description;
		}
		
		/// <summary>Gets argument description.</summary>
		///
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
		///
		/// <returns>true if verbose mode is on, otherwise returns false.</returns>
		public bool getVerboseMode() {
			return argumentExpression.getVerboseMode();
		}
		
		/// <summary>Gets recursive mode status</summary>
		///
		/// <returns>true if recursive mode is enabled, otherwise returns false</returns>
		public bool getRecursiveMode() {
			return argumentExpression.getRecursiveMode();
		}
		
		/// <summary>Gets computing time</summary>
		///
		/// <returns>Computing time in seconds.</returns>
		public double getComputingTime() {
			return argumentExpression.getComputingTime();
		}
		
		/// <summary>
		/// Sets (modifies) argument name.
		/// Each expression / function / dependent argument associated
		/// with this argument will be marked as modified
		/// (requires new syntax checking).
		/// </summary>
		/// 
		/// <param name="argumentName">the argument name</param>
		public void setArgumentName(String argumentName) {
			if ((mXparser.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp))) {
				this.argumentName = argumentName;
				setExpressionModifiedFlags();
			}
			else if (argumentExpression != null)
				argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentName + "] " + "Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
		}
		
		/// <summary>
		/// Sets argument expression string.
		/// Each expression / function / dependent argument associated
		/// with this argument will be marked as modified
		/// (requires new syntax checking).
		/// </summary>
		///
		/// <param name="argumentExpressionString">the argument expression string</param>
		///
		/// <seealso cref="Expression"/>
		public void setArgumentExpressionString(String argumentExpressionString) {
			argumentExpression.setExpressionString(argumentExpressionString);
			if (argumentType == FREE_ARGUMENT)
				argumentType = DEPENDENT_ARGUMENT;
		}
		
		/// <summary>Gets argument name</summary>
		///
		/// <returns>the argument name as string</returns>
		public String getArgumentName() {
			return argumentName;
		}
		
		/// <summary>Gets argument expression string</summary>
		///
		/// <returns>the argument expression string</returns>
		public String getArgumentExpressionString() {
			return argumentExpression.getExpressionString();
		}
		
		/// <summary>Gets argument type</summary>
		///
		/// <returns>
		///     Argument type: <see cref="Argument.FREE_ARGUMENT"/>,
		///     <see cref="Argument.DEPENDENT_ARGUMENT"/>,
		///     <see cref="Argument.RECURSIVE_ARGUMENT"/>
		/// </returns>
		public int getArgumentType() {
			return argumentType;
		}
		
		/// <summary>
		/// Sets argument value, if <see cref="DEPENDENT_ARGUMENT"/> then argument type
		/// is set to <see cref="FREE_ARGUMENT"/>
		/// </summary>
		///
		/// <param name="argumentValue">the value of argument</param>
		public void setArgumentValue(double argumentValue) {
			if (argumentType == DEPENDENT_ARGUMENT) {
				argumentType = FREE_ARGUMENT;
				argumentExpression.setExpressionString("");
			}
			this.argumentValue = argumentValue;
		}
		/*=================================================
		 *
		 * Syntax checking and values calculation
		 *
		 *=================================================
		 */
		
		/// <summary>Checks argument syntax</summary>
		///
		/// <returns>
		///     syntax status: <see cref="NO_SYNTAX_ERRORS"/>,
		///     <see cref="SYNTAX_ERROR_OR_STATUS_UNKNOWN"/>
		/// </returns>
		public bool checkSyntax() {
			if (argumentType == FREE_ARGUMENT)
				return Argument.NO_SYNTAX_ERRORS;
			else
				return argumentExpression.checkSyntax();
		}
		
		/// <summary>Returns error message after checking the syntax</summary>
		///
		/// <returns>Error message as string.</returns>
		public String getErrorMessage() {
			return argumentExpression.getErrorMessage();
		}
		
		/// <summary>Gets argument value.</summary>
		///
		/// <returns>
		///     direct argument value for free argument,
		///     otherwise returns calculated argument value
		///     based on the argument expression.
		/// </returns>
		public double getArgumentValue() {
			if (argumentType == FREE_ARGUMENT)
				return argumentValue;
			else
				return argumentExpression.calculate();
		}
		
		/// <summary>
		/// Adds user defined elements (such as: Arguments, Constants, Functions)
		/// to the argument expressions.
		/// </summary>
		/// 
		/// <param name="elements">
		///     Elements list (variadic - comma separated) of types: <see cref="Argument"/>,
		///     <see cref="Constant"/>, <see cref="Function"/>
		/// </param>
		///
		/// <seealso cref="PrimitiveElement"/>
		public void addDefinitions(params PrimitiveElement[] elements) {
			argumentExpression.addDefinitions(elements);
		}
		
		/// <summary>
		/// Removes user defined elements (such as: Arguments, Constants, Functions)
		/// from the argument expressions.
		/// </summary>
		/// 
		/// <param name="elements">
		///     Elements list (variadic - comma separated) of types:
		///     <see cref="Argument">Arguments</see>, <see cref="Constant">Constants</see>,
		///     <see cref="Function">Functions</see>
		/// </param>
		///
		/// <seealso cref="PrimitiveElement"/>
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
		
		/// <summary>
		/// Adds arguments (variadic) to the argument expression definition.
		/// </summary>
		///
		/// <param name="arguments">the arguments list (comma separated list)</param>
		/// 
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public void addArguments(params Argument[] arguments) {
			argumentExpression.addArguments(arguments);
		}
		
		/// <summary>
		/// Enables to define the arguments (associated with
		/// the argument expression) based on the given arguments names.
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
			argumentExpression.defineArguments(argumentsNames);
		}
		
		/// <summary>
		/// Enables to define the argument (associated with the argument expression)
		/// based on the argument name and the argument value.
		/// </summary>
		///
		/// <param name="argumentName">the argument name</param>
		/// <param name="argumentValue">the the argument value</param>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public void defineArgument(String argumentName, double argumentValue) {
			argumentExpression.defineArgument(argumentName, argumentValue);
		}
		
		/// <summary>Gets argument index from the argument expression.</summary>
		///
		/// <param name="argumentName">the argument name</param>
		///
		/// <returns>
		///     The argument index if the argument name was found,
		///     otherwise returns <see cref="NOT_FOUND"/>
		/// </returns>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public int getArgumentIndex(String argumentName) {
			return argumentExpression.getArgumentIndex(argumentName);
		}
		
		/// <summary>Gets argument from the argument expression.</summary>
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
			return argumentExpression.getArgument(argumentName);
		}
		
		/// <summary>Gets argument from the argument expression.</summary>
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
			return argumentExpression.getArgument(argumentIndex);
		}
		
		/// <summary>Gets number of arguments associated with the argument expression.</summary>
		///
		/// <returns>The number of arguments (int >= 0)</returns>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
		public int getArgumentsNumber() {
			return argumentExpression.getArgumentsNumber();
		}
		
		/// <summary>
		/// Removes first occurrences of the arguments
		/// associated with the argument expression.
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
			argumentExpression.removeArguments(argumentsNames);
		}
		
		/// <summary>
		/// Removes first occurrences of the arguments
		/// associated with the argument expression.
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
			argumentExpression.removeArguments(arguments);
		}
		
		/// <summary> Removes all arguments associated with the argument expression.</summary>
		///
		/// <seealso cref="Argument"/>
		/// <seealso cref="RecursiveArgument"/>
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
		///
		/// <param name="constants">the constants (comma separated list)</param>
		///
		/// <seealso cref="Constant"/>
		public void addConstants(params Constant[] constants) {
			argumentExpression.addConstants(constants);
		}
		
		/// <summary>
		/// Enables to define the constant (associated with
		/// the argument expression) based on the constant name and
		/// constant value.
		/// </summary>
		///
		/// <param name="constantName">the constant name</param>
		/// <param name="constantValue">the constant value</param>
		///
		/// <seealso cref="Constant"/>
		public void defineConstant(String constantName, double constantValue) {
			argumentExpression.defineConstant(constantName, constantValue);
		}
		
		/// <summary>Gets constant index associated with the argument expression.</summary>
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
			return argumentExpression.getConstantIndex(constantName);
		}
		
		/// <summary>Gets constant associated with the argument expression.</summary>
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
			return argumentExpression.getConstant(constantName);
		}
		
		/// <summary>Gets constant associated with the argument expression.</summary>
		///
		/// <param name="constantIndex">the constant index</param>
		///
		/// <returns>
		///     Constant if the <paramref name="constantIndex"/> is between
		///     0 and the last available constant index
		///     (<see cref="getConstantsNumber()"/> - 1),
		///     otherwise it returns null.
		/// </returns>
		///
		/// <seealso cref="Constant"/>
		public Constant getConstant(int constantIndex) {
			return argumentExpression.getConstant(constantIndex);
		}
		
		/// <summary>Gets number of constants associated with the argument expression.</summary>
		///
		/// <returns>number of constants (int >= 0)</returns>
		///
		/// <seealso cref="Constant"/>
		public int getConstantsNumber() {
			return argumentExpression.getConstantsNumber();
		}
		
		/// <summary>
		/// Removes first occurrences of the constants
		/// associated with the argument expression.
		/// </summary>
		///
		/// <param name="constantsNames">
		///     the constants names (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Constant"/>
		public void removeConstants(params String[] constantsNames) {
			argumentExpression.removeConstants(constantsNames);
		}
		
		/// <summary>
		/// Removes first occurrences of the constants
		/// associated with the argument expression
		/// </summary>
		///
		/// <param name="constants">
		///     the constants (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Constant"/>
		public void removeConstants(params Constant[] constants) {
			argumentExpression.removeConstants(constants);
		}
		
		/// <summary>
		/// Removes all constants
		/// associated with the argument expression
		/// </summary>
		///
		/// <seealso cref="Constant"/>
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
		///
		/// <param name="functions">
		///     the functions (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Function"/>
		public void addFunctions(params Function[] functions) {
			argumentExpression.addFunctions(functions);
		}
		
		/// <summary>
		/// Enables to define the function (associated with
		/// the argument expression) based on the function name,
		/// function expression string and arguments names (variadic parameters).
		/// </summary>
		/// 
		/// <param name="functionName">the function name</param>
		/// <param name="functionExpressionString">the expression string</param>
		/// <param name="argumentsNames">
		///     the function arguments names
		///     (variadic parameters) comma separated list
		/// </param>
		///
		/// <seealso cref="Function"/>
		public void defineFunction(String functionName, String  functionExpressionString,
				params String[] argumentsNames) {
			argumentExpression.defineFunction(functionName, functionExpressionString, argumentsNames);
		}
		
		/// <summary>Gets index of function associated with the argument expression.</summary>
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
			return argumentExpression.getFunctionIndex(functionName);
		}
		
		/// <summary>Gets function associated with the argument expression.</summary>
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
			return argumentExpression.getFunction(functionName);
		}
		
		/// <summary>Gets function associated with the argument expression.</summary>
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
			return argumentExpression.getFunction(functionIndex);
		}
		
		/// <summary>Gets number of functions associated with the argument expression.</summary>
		///
		/// <returns>number of functions (int >= 0)</returns>
		///
		/// <seealso cref="Function"/>
		public int getFunctionsNumber() {
			return argumentExpression.getFunctionsNumber();
		}
		
		/// <summary>
		/// Removes first occurrences of the functions
		/// associated with the argument expression.
		/// </summary>
		///
		/// <param name="functionsNames">
		///     the functions names (variadic parameters)
		///     comma separated list
		/// </param>
		///
		/// <seealso cref="Function"/>
		public void removeFunctions(params String[] functionsNames) {
			argumentExpression.removeFunctions(functionsNames);
		}
		
		/// <summary>
		/// Removes first occurrences of the functions
		/// associated with the argument expression.
		/// </summary>
		///
		/// <param name="functions">
		///     the functions (variadic parameters)
		///     comma separated list.
		/// </param>
		///
		/// <seealso cref="Function"/>
		public void removeFunctions(params Function[] functions) {
			argumentExpression.removeFunctions(functions);
		}
		
		/// <summary>
		/// Removes all functions
		/// associated with the argument expression.
		/// </summary>
		///
		/// <seealso cref="Function"/>
		public void removeAllFunctions() {
			argumentExpression.removeAllFunctions();
		}
		/*=================================================
		 *
		 * Related expressions handling
		 *
		 *=================================================
		 */
		
		/// <summary>Adds related expression to the <see cref="argumentExpression"/></summary>
		///
		/// <param name="expression">the related expression</param>
		/// <seealso cref="Expression"/>
		internal void addRelatedExpression(Expression expression) {
			argumentExpression.addRelatedExpression(expression);
		}
		
		/// <summary>Adds related expression form the <see cref="argumentExpression"/></summary>
		///
		/// <param name="expression">related expression</param>
		///
		/// <seealso cref="Expression"/>
		internal void removeRelatedExpression(Expression expression) {
			argumentExpression.removeRelatedExpression(expression);
		}
		
		/// <summary>
		/// Sets expression was modified flag to all related expressions
		/// to the <see cref="argumentExpression"/>.
		/// </summary>
		///
		/// <seealso cref="Expression"/>
		internal void setExpressionModifiedFlags() {
			argumentExpression.setExpressionModifiedFlag();
		}
		
		/// <summary>Creates cloned object of the this argument.''</summary>
		///
		/// <returns>clone of the argument.</returns>
		public Argument clone() {
			Argument newArg = new Argument(this.argumentName);
			newArg.argumentExpression = this.argumentExpression;
			newArg.argumentType = this.argumentType;
			newArg.argumentValue = this.argumentValue;
			newArg.description = this.description;
			newArg.n = this.n;
			return newArg;
		}
	}
}