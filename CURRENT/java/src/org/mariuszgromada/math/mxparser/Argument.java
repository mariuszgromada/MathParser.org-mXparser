/*
 * @(#)Argument.java        4.2.0    2018-07-15
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2018 MARIUSZ GROMADA. All rights reserved.
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
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser;

import java.util.List;
import org.mariuszgromada.math.mxparser.parsertokens.ParserSymbol;
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
 *                 <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 *                 <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br>
 *                 <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br>
 *                 <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br>
 *                 <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br>
 *                 <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br>
 *                 <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br>
 *
 * @version        4.2.0
 *
 * @see RecursiveArgument
 * @see Expression
 * @see Function
 * @see Constant
 */
public class Argument extends PrimitiveElement {
	/**
	 * No syntax errors in the dependent argument definition.
	 */
	public static final boolean NO_SYNTAX_ERRORS = Expression.NO_SYNTAX_ERRORS;
	/**
	 * Syntax error in the dependent argument definition.
	 */
	public static final boolean SYNTAX_ERROR_OR_STATUS_UNKNOWN = Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
	/**
	 * Double.NaN as initial value of the argument.
	 */
	public static final double ARGUMENT_INITIAL_VALUE = Double.NaN;
	/**
	 * When argument was not not found
	 */
	public static final int NOT_FOUND = Expression.NOT_FOUND;
	/**
	 * Type indicator for free argument.
	 */
	public static final int FREE_ARGUMENT = 1;
	/**
	 * Type indicator for dependent argument.
	 */
	public static final int DEPENDENT_ARGUMENT = 2;
	/**
	 * Type indicator for recursive argument.
	 */
	public static final int RECURSIVE_ARGUMENT = 3;
	/**
	 * Argument type id for the definition of key words
	 * known by the parser.
	 */
	public static final int TYPE_ID		= 101;
	public static final String TYPE_DESC	= "User defined argument";
	/**
	 * Description of the argument.
	 */
	private String description;
	/**
	 * Argument expression for dependent and recursive
	 * arguments.
	 */
	Expression argumentExpression;
	/**
	 * Argument name (x, y, arg1, my_argument, etc...)
	 */
	private String argumentName;
	/**
	 * Argument type (free, dependent)
	 */
	int argumentType;
	/**
	 * Argument value (for free arguments).
	 */
	double argumentValue;
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
	public Argument(String argumentDefinitionString, PrimitiveElement...elements) {
		super(Argument.TYPE_ID);
		if ( mXparser.regexMatch(argumentDefinitionString, ParserSymbol.nameOnlyTokenRegExp) ) {
			argumentName = argumentDefinitionString;
			argumentValue = ARGUMENT_INITIAL_VALUE;
			argumentType = FREE_ARGUMENT;
			argumentExpression = new Expression(elements);
		} else if ( mXparser.regexMatch(argumentDefinitionString, ParserSymbol.constArgDefStrRegExp) ) {
			HeadEqBody headEqBody = new HeadEqBody(argumentDefinitionString);
			argumentName = headEqBody.headTokens.get(0).tokenStr;
			Expression bodyExpr = new Expression(headEqBody.bodyStr);
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
		} else if ( mXparser.regexMatch(argumentDefinitionString, ParserSymbol.functionDefStrRegExp) ) {
			HeadEqBody headEqBody = new HeadEqBody(argumentDefinitionString);
			argumentName = headEqBody.headTokens.get(0).tokenStr;
			argumentExpression = new Expression(headEqBody.bodyStr, elements);
			argumentExpression.setDescription(headEqBody.headStr);
			argumentValue = ARGUMENT_INITIAL_VALUE;
			argumentType = DEPENDENT_ARGUMENT;
			n = new Argument(headEqBody.headTokens.get(2).tokenStr);
		} else {
			argumentValue = ARGUMENT_INITIAL_VALUE;
			argumentType = FREE_ARGUMENT;
			argumentExpression = new Expression();
			argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentDefinitionString + "] " + "Invalid argument definition (patterns: 'x', 'x=5', 'x=5+3/2', 'x=2*y').");
		}
		setSilentMode();
		description = "";
	}
	/**
	 * Constructor - creates free argument.
	 *
	 * @param      argumentName   the argument name
	 * @param      argumentValue  the argument value
	 */
	public Argument(String argumentName, double argumentValue) {
		super(Argument.TYPE_ID);
		argumentExpression = new Expression();
		if ( mXparser.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp) ) {
			this.argumentName=new String(argumentName);
			this.argumentValue=argumentValue;
			argumentType = FREE_ARGUMENT;
		} else {
			this.argumentValue = ARGUMENT_INITIAL_VALUE;
			argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentName + "] " + "Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
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
	public Argument(String argumentName, String argumentExpressionString, PrimitiveElement... elements) {
		super(Argument.TYPE_ID);
		if ( mXparser.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp) ) {
			this.argumentName=new String(argumentName);
			argumentValue=ARGUMENT_INITIAL_VALUE;
			argumentExpression = new Expression(argumentExpressionString, elements);
			argumentExpression.setDescription(argumentName);
			argumentType = DEPENDENT_ARGUMENT;
		} else {
			this.argumentValue = ARGUMENT_INITIAL_VALUE;
			argumentExpression = new Expression();
			argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentName + "] " + "Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
		}
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
	public boolean getVerboseMode() {
		return argumentExpression.getVerboseMode();
	}
	/**
	 * Gets recursive mode status
	 *
	 * @return      true if recursive mode is enabled,
	 *              otherwise returns false
	 */
	public boolean getRecursiveMode() {
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
		if ( mXparser.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp) ) {
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
	 *
	 * @param      argumentExpressionString      the argument expression string
	 *
	 * @see        Expression
	 */
	public void setArgumentExpressionString(String argumentExpressionString) {
		argumentExpression.setExpressionString(argumentExpressionString);
		if (argumentType == FREE_ARGUMENT)
			argumentType = DEPENDENT_ARGUMENT;
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
	 * Sets argument value
	 *
	 * @param  argumentValue       the value of argument
	 */
	public void setArgumentValue(double argumentValue) {
		this.argumentValue = argumentValue;
	}
	/*=================================================
	 *
	 * Syntax checking and values calculation
	 *
	 *=================================================
	 */
	/**
	 * Checks argument syntax
	 *
	 * @return    syntax status: Argument.NO_SYNTAX_ERRORS,
	 *            Argument.SYNTAX_ERROR_OR_STATUS_UNKNOWN
	 */
	public boolean checkSyntax() {
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
		if (argumentType == FREE_ARGUMENT)
			return argumentValue;
		else
			return argumentExpression.calculate();
	}
	/**
	 * Adds user defined elements (such as: Arguments, Constants, Functions)
	 * to the argument expressions.
	 *
	 * @param elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
	 *
	 * @see PrimitiveElement
	 */
	public void addDefinitions(PrimitiveElement... elements) {
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
	public void removeDefinitions(PrimitiveElement... elements) {
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
	public void addArguments(Argument... arguments) {
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
	public void defineArguments(String... argumentsNames) {
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
	 * @return     The number of arguments (int &gt;= 0)
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
	public void removeArguments(String... argumentsNames) {
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
	public void removeArguments(Argument... arguments) {
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
	public void addConstants(Constant... constants) {
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
	 * @return     number of constants (int &gt;= 0)
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
	public void removeConstants(String... constantsNames) {
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
	public void removeConstants(Constant... constants) {
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
	public void addFunctions(Function... functions) {
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
			String... argumentsNames) {
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
	 * @return     number of functions (int &gt;= 0)
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
	public void removeFunctions(String... functionsNames) {
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
	public void removeFunctions(Function... functions) {
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
	void addRelatedExpression(Expression expression) {
		argumentExpression.addRelatedExpression(expression);
	}
	/**
	 * Adds related expression form the argumentExpression
	 *
	 * @param      expression          related expression
	 *
	 * @see        Expression
	 */
	void removeRelatedExpression(Expression expression) {
		argumentExpression.removeRelatedExpression(expression);
	}
	/**
	 * Sets expression was modified flag to all related expressions
	 * to the argumentExpression.
	 *
	 * @see        Expression
	 */
	void setExpressionModifiedFlags() {
		argumentExpression.setExpressionModifiedFlag();
	}
	/**
	 * Creates cloned object of the this argument.''
	 *
	 * @return     clone of the argument.
	 */
	@Override
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