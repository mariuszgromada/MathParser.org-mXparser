/*
 * @(#)Expression.java        3.0.0    2016-05-07
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2016 MARIUSZ GROMADA. All rights reserved.
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

import java.io.ByteArrayInputStream;
import java.util.ArrayList;
import java.util.Stack;

import org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations;
import org.mariuszgromada.math.mxparser.mathcollection.BooleanAlgebra;
import org.mariuszgromada.math.mxparser.mathcollection.MathConstants;
import org.mariuszgromada.math.mxparser.mathcollection.MathFunctions;
import org.mariuszgromada.math.mxparser.mathcollection.NumberTheory;
import org.mariuszgromada.math.mxparser.mathcollection.Calculus;
import org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions;
import org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions;
import org.mariuszgromada.math.mxparser.mathcollection.Statistics;
import org.mariuszgromada.math.mxparser.parsertokens.BinaryRelation;
import org.mariuszgromada.math.mxparser.parsertokens.BooleanOperator;
import org.mariuszgromada.math.mxparser.parsertokens.CalculusOperator;
import org.mariuszgromada.math.mxparser.parsertokens.ConstantValue;
import org.mariuszgromada.math.mxparser.parsertokens.Function1Arg;
import org.mariuszgromada.math.mxparser.parsertokens.Function2Arg;
import org.mariuszgromada.math.mxparser.parsertokens.Function3Arg;
import org.mariuszgromada.math.mxparser.parsertokens.FunctionVariadic;
import org.mariuszgromada.math.mxparser.parsertokens.Operator;
import org.mariuszgromada.math.mxparser.parsertokens.ParserSymbol;
import org.mariuszgromada.math.mxparser.parsertokens.RandomVariable;
import org.mariuszgromada.math.mxparser.parsertokens.Token;
import org.mariuszgromada.math.mxparser.syntaxchecker.SyntaxChecker;
/**
 * Expression - base class for real expressions definition.
 *
 * Examples:
 * <ul>
 * <li>'1+2'
 * <li>'sin(x)+1'
 * <li>'asin(3*x)^10-log(4,8)'
 * <li>in general 'f(x1,x2,...,xn)' where x1,...,xn are real
 * arguments
 * </ul>
 * <p>
 * Class provides easy way to define multivariate arithmetic expression.
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
 * @version        3.0.0
 *
 * @see            Argument
 * @see            RecursiveArgument
 * @see            Constant
 * @see            Function
 */
public class Expression {
	/**
	 * FOUND / NOT_FOUND
	 * used for matching purposes
	 */
	static final int NOT_FOUND = mXparser.NOT_FOUND;
	static final int FOUND = mXparser.FOUND;
	/**
	 * Marker for internal processing
	 */
	static final boolean INTERNAL = true;
	/**
	 * For verbose mode purposes
	 */
	private static final boolean WITH_EXP_STR = true;
	private static final boolean NO_EXP_STR = false;
	/**
	 * Status of the Expression syntax
	 */
	public static final boolean NO_SYNTAX_ERRORS = true;
	public static final boolean SYNTAX_ERROR_OR_STATUS_UNKNOWN = false;
	/**
	 * Expression string (for example: "sin(x)+cos(y)")
	 */
	String expressionString;
	private String description;
	/**
	 * List of arguments
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	ArrayList<Argument> argumentsList;
	/**
	 * List of user defined functions
	 *
	 * @see        Function
	 */
	ArrayList<Function> functionsList;
	/**
	 * List of user defined constants
	 *
	 * @see        Constant
	 */
	ArrayList<Constant> constantsList;
	/**
	 * List of key words known by the parser
	 */
	private ArrayList<KeyWord> keyWordsList;
	/**
	 * List of expression tokens (words).
	 * Token class defines all needed
	 * attributes for recognizing the structure of
	 * arithmetic expression. This is the key result when
	 * initial parsing is finished (tokenizeExpressionString() - method).
	 * Token keeps information about:
	 *    - token type (for example: function, operator, argument, number, etc...)
	 *    - token identifier within given type (sin, cos, operaotr, etc...)
	 *    - token value (if token is a number)
	 *    - token level - key information regarding sequence (order) of further parsing
	 */
	private ArrayList<Token> initialTokens;
	/**
	 * the initialTokens list keeps unchanged information about
	 * found tokens.
	 *
	 * While parsing the tokensList is used. The tokensList is the same
	 * as initialTokens list at the beginning of the calculation process.
	 * Each math operation changes tokens list - it means that
	 * tokens are parameters when performing math operation
	 * and the result is also presented as token (usually as a number token)
	 * At the end of the calculation the tokensList should contain only one
	 * element - the result of all calculations.
	 */
	private ArrayList<Token> tokensList;
	/**
	 * List of related expressions, for example when
	 * user defined function is used in the expression
	 * or dependent argument was defined. Modification of
	 * function expression calls the method expression modified
	 * flag method to all related expressions.
	 *
	 * Related expression usually are used for
	 * - dependent arguments
	 * - recursive arguments
	 * - user functions
	 */
	ArrayList<Expression> relatedExpressionsList;
	/**
	 * Keeps computing time
	 */
	private double computingTime;
	/**
	 * if true then new tokenizing is required
	 * (the initialTokens list needs to be updated)
	 */
	private boolean expressionWasModified;
	/**
	 * If recursive mode is on the recursive calls are permitted.
	 * It means there will be no null pointer exceptions
	 * due to expression, and functions cloning.
	 */
	boolean recursiveMode;
	/**
	 * Verbose mode prints processing info
	 * calls System.out.print* methods
	 */
	private boolean verboseMode;
	/**
	 * Internal parameter for calculus expressions
	 * to avoid decrease in accuracy.
	 */
	boolean disableUlpRounding;
	static final boolean DISABLE_ULP_ROUNDING = true;
	static final boolean KEEP_ULP_ROUNDING_SETTINGS = false;
	/**
	 * Status of the expression syntax
	 *
	 * Please referet to the:
	 *    - NO_SYNTAX_ERRORS
	 *    - SYNTAX_ERROR_OR_STATUS_UNKNOWN
	 */
	private boolean syntaxStatus;
	/**
	 * Message after checking the syntax
	 */
	private String errorMessage;
	/**
	 * Flag used internally to mark started recursion
	 * call on the current object, necessary to
	 * avoid infinite loops while recursive syntax
	 * checking (i.e. f -> g and g -> f)
	 * or marking modified flags on the expressions
	 * related to this expression.
	 *
	 * @see setExpressionModifiedFlag()
	 * @see checkSyntax()
	 */
	private boolean recursionCallPending;
	/**
	 * Internal indicator for tokenization process
	 * if true, then keywords such as constants
	 * functions etc.. will not be recognized
	 * during tokenization
	 */
	private boolean parserKeyWordsOnly;
	/*=================================================
	 *
	 * Related expressions handling
	 *
	 *=================================================
	 */
	/**
	 * Adds related expression
	 * The same expression could be added more than once
	 * For example when
	 *
	 * @param      expression          the expression
	 */
	void addRelatedExpression(Expression expression) {
		if (expression != null && expression != this) {
			if (!relatedExpressionsList.contains(expression))
				relatedExpressionsList.add(expression);
		}
	}
	/**
	 * Removes related expression
	 *
	 * @param      expression          the expression
	 */
	void removeRelatedExpression(Expression expression) {
		relatedExpressionsList.remove(expression);
	}
	/**
	 * Prints related expression list
	 */
	void showRelatedExpressions() {
		mXparser.consolePrintln();
		mXparser.consolePrintln(this.description + " = " + this.expressionString + ":");
		for (Expression e : relatedExpressionsList)
			mXparser.consolePrintln("-> " + e.description + " = " + e.expressionString);
	}
	/**
	 * Method return error message after
	 * calling checkSyntax() method or
	 * calculate().
	 *
	 * @return     Error message as string.
	 */
	public String getErrorMessage() {
		return errorMessage;
	}
	/**
	 * Gets syntax status of the expression.
	 *
	 * @return     true if there are no syntax errors,
	 *             false when syntax error was found or
	 *             syntax status is unknown
	 */
	public boolean getSyntaxStatus() {
		return this.syntaxStatus;
	}
	/**
	 * Package level method for passing
	 * information about errors identified
	 * on the constructors level
	 *
	 * @param syntaxStatus Syntax status
	 * @param errorMessage Error message
	 *
	 * @see Function
	 */
	void setSyntaxStatus(boolean syntaxStatus, String errorMessage) {
		this.syntaxStatus = syntaxStatus;
		this.errorMessage = errorMessage;
	}
	/**
	 * Sets expression status to modified
	 * Calls setExpressionModifiedFlag() method
	 * to all related expressions.
	 */
	void setExpressionModifiedFlag() {
		if (recursionCallPending == false) {
			recursionCallPending = true;
			expressionWasModified = true;
			syntaxStatus = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
			errorMessage = "Syntax status unknown.";
			for (Expression e : relatedExpressionsList)
				e.setExpressionModifiedFlag();
			recursionCallPending = false;
		}
	}
	/**
	 * Common variables while expression initializing
	 */
	private void expressionInternalVarsInit() {
		description = "";
		errorMessage = "";
		computingTime = 0;
		recursionCallPending = false;
		parserKeyWordsOnly = false;
		disableUlpRounding = KEEP_ULP_ROUNDING_SETTINGS;
	}
	/**
	 * Common elements while expression initializing
	 */
	private void expressionInit() {
		/*
		 * New lists
		 */
		argumentsList = new ArrayList<Argument>();
		functionsList = new ArrayList<Function>();
		constantsList = new ArrayList<Constant>();
		relatedExpressionsList = new ArrayList<Expression>();
		/*
		 * Empty description
		 * Silent mode
		 * No recursive mode
		 */
		setSilentMode();
		disableRecursiveMode();
		expressionInternalVarsInit();
	}
	/*=================================================
	 *
	 * Constructors
	 *
	 *=================================================
	 */
	/**
	 * Default constructor - empty expression
	 *
	 * @param  elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 *
	 * @see    PrimitiveElement
	 */
	public Expression(PrimitiveElement...elements) {
		expressionString = "";
		expressionInit();
		setExpressionModifiedFlag();
		addDefinitions(elements);
	}
	/**
	 * Constructor - creates new expression from expression string.
	 *
	 * @param      expressionString    definition of the expression
	 * @param      elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
	 *
	 * @see    PrimitiveElement
	 *
	 */
	public Expression(String expressionString, PrimitiveElement...elements) {
		expressionInit();
		this.expressionString = new String(expressionString);
		setExpressionModifiedFlag();
		addDefinitions(elements);
	}
	/**
	 * Constructor - creates new expression from expression string.
	 * @param expressionString    definition of the expression
	 * @param parserKeyWordsOnly  if true then all keywords such as functions,
	 *                            constants, arguments will not be recognized.
	 */
	Expression(String expressionString, boolean parserKeyWordsOnly) {
		expressionInit();
		this.expressionString = new String(expressionString);
		setExpressionModifiedFlag();
		this.parserKeyWordsOnly = parserKeyWordsOnly;
	}
	/**
	 * Package level constructor - creates new expression from subexpression
	 * (sublist of the tokens list), arguments list, functions list and
	 * constants list (used by the internal calculus operations, etc...).
	 *
	 * @param      expressionString    the expression string
	 * @param      initialTokens       the tokens list (starting point - no tokenizing,
	 *                                 no syntax checking)
	 * @param      argumentsList       the arguments list
	 * @param      functionsList       the functions list
	 * @param      constantsList       the constants list
	 */
	Expression(String expressionString, ArrayList<Token> initialTokens, ArrayList<Argument> argumentsList,
			ArrayList<Function> functionsList, ArrayList<Constant> constantsList, boolean disableUlpRounding) {
		this.expressionString = expressionString;
		this.initialTokens = initialTokens;
		this.argumentsList = argumentsList;
		this.functionsList = functionsList;
		this.constantsList = constantsList;
		relatedExpressionsList = new ArrayList<Expression>();
		expressionWasModified = false;
		syntaxStatus = NO_SYNTAX_ERRORS;
		description = "_internal_";
		errorMessage = "";
		computingTime = 0;
		recursionCallPending = false;
		parserKeyWordsOnly = false;
		this.disableUlpRounding = disableUlpRounding;
		setSilentMode();
		disableRecursiveMode();
	}
	/**
	 * Package level constructor - creates new expression from expression string,
	 * arguments list, functions list and constants list (used by the
	 * RecursiveArgument class).
	 *
	 * No related expressions at the beginning.
	 *
	 * @param      expressionString    the expression string
	 * @param      argumentsList       the arguments list
	 * @param      functionsList       the functions list
	 * @param      constantsList       the constants list
	 * @param      internal            the marker for internal processing
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 * @see        Function
	 * @see        Constant
	 */
	Expression(String expressionString, ArrayList<Argument> argumentsList,
			ArrayList<Function> functionsList, ArrayList<Constant> constantsList
			,boolean internal) {
		this.expressionString = new String(expressionString);
		expressionInternalVarsInit();
		setSilentMode();
		disableRecursiveMode();
		this.argumentsList = argumentsList;
		this.functionsList = functionsList;
		this.constantsList = constantsList;
		relatedExpressionsList = new ArrayList<Expression>();
		setExpressionModifiedFlag();
	}
	/**
	 * Private constructor - expression cloning.
	 *
	 * @param      expression          the base expression
	 */
	private Expression(Expression expression) {
		expressionString = new String(expression.expressionString);
		description = new String(expression.description);
		argumentsList = expression.argumentsList;
		functionsList = expression.functionsList;
		constantsList = expression.constantsList;
		keyWordsList = expression.keyWordsList;
		relatedExpressionsList = expression.relatedExpressionsList;
		computingTime = 0;
		expressionWasModified = expression.expressionWasModified;
		recursiveMode = expression.recursiveMode;
		verboseMode = expression.verboseMode;
		syntaxStatus = expression.syntaxStatus;
		errorMessage = new String(expression.errorMessage);
		recursionCallPending = expression.recursionCallPending;
		parserKeyWordsOnly = expression.parserKeyWordsOnly;
		disableUlpRounding = expression.disableUlpRounding;
	}
	/**
	 * Sets (modifies expression) expression string.
	 *
	 * @param      expressionString    the expression string
	 */
	public void setExpressionString(String expressionString) {
		this.expressionString = expressionString;
		setExpressionModifiedFlag();
	}
	/**
	 * Returns expression string
	 *
	 * @return Expression string definition.
	 */
	public String getExpressionString() {
		return expressionString;
	}
	/**
	 * Clears expression string
	 */
	public void clearExpressionString() {
		this.expressionString = "";
		setExpressionModifiedFlag();
	}
	/**
	 * Sets expression description.
	 *
	 * @param      description         the description string
	 */
	public void setDescription(String description) {
		this.description = description;
	}
	/**
	 * Gets expression description.
	 *
	 * @return     String description.
	 */
	public String getDescription() {
		return description;
	}
	/**
	 * Clears expression description
	 */
	public void clearDescription() {
		this.description = "";
	}
	/**
	 * Enables verbose mode.
	 */
	public void setVerboseMode() {
		verboseMode = true;
	}
	/**
	 * Disables verbose mode (default silent mode).
	 */
	public void setSilentMode() {
		verboseMode = false;
	}
	/**
	 * Returns verbose mode status.
	 *
	 * @return     true if verbose mode is on,
	 *             otherwise returns false.
	 */
	public boolean getVerboseMode() {
		return verboseMode;
	}
	/**
	 * Sets recursive mode
	 */
	void setRecursiveMode() {
		recursiveMode = true;
	}
	/**
	 * Disables recursive mode
	 */
	void disableRecursiveMode() {
		recursiveMode = false;
	}
	/**
	 * Gets recursive mode status
	 *
	 * @return     true if recursive mode is enabled,
	 *             otherwise returns false.
	 */
	public boolean getRecursiveMode() {
		return recursiveMode;
	}
	/**
	 * Gets computing time.
	 *
	 * @return     computing time in seconds.
	 */
	public double getComputingTime() {
		return computingTime;
	}
	/**
	 * Adds user defined elements (such as: Arguments, Constants, Functions)
	 * to the expressions.
	 *
	 * @param elements Elements list (variadic), where Argument, Constant, Function
	 *                 extend the same class PrimitiveElement
	 *
	 * @see PrimitiveElement
	 */
	public void addDefinitions(PrimitiveElement... elements) {
		for (PrimitiveElement e : elements) {
			int elementTypeId = e.getMyTypeId();
			if (e != null) {
				if (elementTypeId == Argument.TYPE_ID) addArguments((Argument)e);
				else if (elementTypeId == Constant.TYPE_ID) addConstants((Constant)e);
				else if (elementTypeId == Function.TYPE_ID) addFunctions((Function)e);
                else if (elementTypeId == RecursiveArgument.TYPE_ID_RECURSIVE) addArguments((Argument)e);
			}
		}
	}
	/**
	 * Removes user defined elements (such as: Arguments, Constants, Functions)
	 * to the expressions.
	 *
	 * @param elements Elements list (variadic), where Argument, Constant, Function
	 *                 extend the same class PrimitiveElement
	 *
	 * @see PrimitiveElement
	 */
	public void removeDefinitions(PrimitiveElement... elements) {
		for (PrimitiveElement e : elements) {
			int elementTypeId = e.getMyTypeId();
			if (e != null) {
				if (elementTypeId == Argument.TYPE_ID) removeArguments((Argument)e);
				else if (elementTypeId == Constant.TYPE_ID) removeConstants((Constant)e);
				else if (elementTypeId == Function.TYPE_ID) removeFunctions((Function)e);
                else if (elementTypeId == RecursiveArgument.TYPE_ID_RECURSIVE) removeArguments((Argument)e);
			}
		}
	}
	/*=================================================
	 *
	 * Arguments handling API
	 *
	 *=================================================
	 */
	/**
	 * Adds arguments (variadic) to the expression definition.
	 *
	 * @param      arguments           the arguments list
	 *                                 (comma separated list)
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	public void addArguments(Argument... arguments) {
		for (Argument arg : arguments) {
			if (arg != null) {
				argumentsList.add(arg);
				arg.addRelatedExpression(this);
			}
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Enables to define the arguments (associated with
	 * the expression) based on the given arguments names.
	 *
	 * @param      argumentsNames      the arguments names (variadic)
	 *                                 comma separated list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	public void defineArguments(String... argumentsNames) {
		for (String argName : argumentsNames) {
			Argument arg = new Argument(argName);
			arg.addRelatedExpression(this);
			argumentsList.add(arg);
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Enables to define the argument (associated with the expression)
	 * based on the argument name and the argument value.
	 *
	 * @param      argumentName        the argument name
	 * @param      argumentValue       the the argument value
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	public void defineArgument(String argumentName, double argumentValue) {
		Argument arg = new Argument(argumentName, argumentValue);
		arg.addRelatedExpression(this);
		argumentsList.add(arg);
		setExpressionModifiedFlag();
	}
	/**
	 * Gets argument index from the expression.
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
		int argumentsNumber = argumentsList.size();
		if (argumentsNumber > 0) {
			int argumentIndex = 0;
			int searchResult = NOT_FOUND;
			while ((argumentIndex < argumentsNumber)&&(searchResult == NOT_FOUND)) {
				if (argumentsList.get(argumentIndex).getArgumentName().equals(argumentName))
					searchResult = FOUND;
				else
					argumentIndex++;
			}
			if (searchResult == FOUND)
				return argumentIndex;
			else
				return NOT_FOUND;
		} else
			return NOT_FOUND;
	}
	/**
	 * Gets argument from the expression.
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
		int argumentIndex = getArgumentIndex(argumentName);
		if (argumentIndex == NOT_FOUND)
			return null;
		else
			return argumentsList.get(argumentIndex);
	}
	/**
	 * Gets argument from the expression.
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
		if ( (argumentIndex < 0) || (argumentIndex >= argumentsList.size()) )
			return null;
		else
			return argumentsList.get(argumentIndex);
	}
	/**
	 * Gets number of arguments associated with the expression.
	 *
	 * @return     The number of arguments (int &gt;= 0)
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	public int getArgumentsNumber() {
		return argumentsList.size();
	}
	/**
	 * Sets argument value.
	 *
	 * @param      argumentName        the argument name
	 * @param      argumentValue       the argument value
	 */
	public void setArgumentValue(String argumentName, double argumentValue) {
		int argumentIndex = getArgumentIndex(argumentName);
		if (argumentIndex != NOT_FOUND)
			argumentsList.get(argumentIndex).setArgumentValue(argumentValue);
	}
	/**
	 * Gets argument vale.
	 *
	 * @param      argumentName        the argument name
	 *
	 * @return     Argument value if argument name was found,
	 *             otherwise return Double.NaN.
	 */
	public double getArgumentValue(String argumentName) {
		int argumentIndex = getArgumentIndex(argumentName);
		if (argumentIndex != NOT_FOUND)
			return argumentsList.get(argumentIndex).getArgumentValue();
		else
			return Double.NaN;
	}
	/**
	 * Removes first occurrences of the arguments
	 * associated with the expression.
	 *
	 * @param      argumentsNames      the arguments names
	 *                                 (variadic parameters) comma separated
	 *                                 list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	public void removeArguments(String... argumentsNames) {
		for (String argumentName : argumentsNames) {
			int argumentIndex = getArgumentIndex(argumentName);
			if (argumentIndex != NOT_FOUND) {
				Argument arg = argumentsList.get(argumentIndex);
				arg.removeRelatedExpression(this);
				argumentsList.remove(argumentIndex);
			}
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Removes first occurrences of the arguments
	 * associated with the expression.
	 *
	 * @param      arguments           the arguments (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	public void removeArguments(Argument... arguments) {
		for (Argument argument : arguments) {
			if (argument != null) {
				argumentsList.remove(argument);
				argument.removeRelatedExpression(this);
			}
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Removes all arguments associated with the expression.
	 *
	 * @see        Argument
	 * @see        RecursiveArgument
	 */
	public void removeAllArguments() {
		for (Argument arg : argumentsList)
			arg.removeRelatedExpression(this);
		argumentsList.clear();
		setExpressionModifiedFlag();
	}
	/*=================================================
	 *
	 * Constants handling API
	 *
	 *=================================================
	 */
	/**
	 * Adds constants (variadic parameters) to the expression definition.
	 *
	 * @param      constants           the constants
	 *                                 (comma separated list)
	 *
	 * @see        Constant
	 */
	public void addConstants(Constant... constants) {
		for (Constant constant : constants) {
			if (constant != null) {
				constantsList.add(constant);
				constant.addRelatedExpression(this);
			}
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Adds constants to the expression definition.
	 *
	 * @param      constantsList       the list of constants
	 *
	 * @see        Constant
	 */
	public void addConstants( ArrayList<Constant> constantsList) {
		this.constantsList.addAll( constantsList );
		for (Constant c : constantsList)
			c.addRelatedExpression(this);
		setExpressionModifiedFlag();
	}
	/**
	 * Enables to define the constant (associated with
	 * the expression) based on the constant name and
	 * constant value.
	 *
	 * @param      constantName        the constant name
	 * @param      constantValue       the constant value
	 *
	 * @see        Constant
	 */
	public void defineConstant(String constantName, double constantValue) {
		Constant c = new Constant(constantName, constantValue);
		c.addRelatedExpression(this);
		constantsList.add(c);
		setExpressionModifiedFlag();
	}
	/**
	 * Gets constant index associated with the expression.
	 *
	 * @param      constantName        the constant name
	 *
	 * @return     Constant index if constant name was found,
	 *             otherwise return Constant.NOT_FOUND.
	 *
	 * @see        Constant
	 */
	public int getConstantIndex(String constantName) {
		int constantsNumber = constantsList.size();
		if (constantsNumber > 0) {
			int constantIndex = 0;
			int searchResult = NOT_FOUND;
			while ((constantIndex < constantsNumber)&&(searchResult == NOT_FOUND)) {
				if (constantsList.get(constantIndex).getConstantName().equals(constantName))
					searchResult = FOUND;
				else
					constantIndex++;
			}
			if (searchResult == FOUND)
				return constantIndex;
			else
				return NOT_FOUND;
		} else
			return NOT_FOUND;
	}
	/**
	 * Gets constant associated with the expression.
	 *
	 * @param      constantName        the constant name
	 *
	 * @return     Constant if constant name was found,
	 *             otherwise return null.
	 *
	 * @see        Constant
	 */
	public Constant getConstant(String constantName) {
		int constantIndex = getConstantIndex(constantName);
		if (constantIndex == NOT_FOUND)
			return null;
		else
			return constantsList.get(constantIndex);
	}
	/**
	 * Gets constant associated with the expression.
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
		if ( (constantIndex < 0) || (constantIndex >= constantsList.size()) )
			return null;
		else
			return constantsList.get(constantIndex);
	}
	/**
	 * Gets number of constants associated with the expression.
	 *
	 * @return     number of constants (int &gt;= 0)
	 *
	 * @see        Constant
	 */
	public int getConstantsNumber() {
		return constantsList.size();
	}
	/**
	 * Removes first occurrences of the constants
	 * associated with the expression.
	 *
	 * @param      constantsNames      the constants names (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Constant
	 */
	public void removeConstants(String... constantsNames) {
		for (String constantName : constantsNames) {
			int constantIndex = getConstantIndex(constantName);
			if (constantIndex != NOT_FOUND) {
				Constant c = constantsList.get(constantIndex);
				c.removeRelatedExpression(this);
				constantsList.remove( constantIndex );
			}
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Removes first occurrences of the constants
	 * associated with the expression
	 *
	 * @param      constants           the constants (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Constant
	 */
	public void removeConstants(Constant... constants) {
		for (Constant constant : constants) {
			if (constant != null) {
				constantsList.remove(constant);
				constant.removeRelatedExpression(this);
				setExpressionModifiedFlag();
			}
		}
	}
	/**
	 * Removes all constants
	 * associated with the expression
	 *
	 * @see        Constant
	 */
	public void removeAllConstants() {
		for (Constant c : constantsList)
			c.removeRelatedExpression(this);
		constantsList.clear();
		setExpressionModifiedFlag();
	}
	/*=================================================
	 *
	 * Functions handling API
	 *
	 *=================================================
	 */
	/**
	 * Adds functions (variadic parameters) to the expression definition.
	 *
	 * @param      functions           the functions
	 *                                 (variadic parameters) comma separated list
	 *
	 * @see        Function
	 */
	public void addFunctions(Function... functions) {
		for (Function f : functions) {
			if (f != null) {
				functionsList.add(f);
				f.addRelatedExpression(this);
			}
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Enables to define the function (associated with
	 * the expression) based on the function name,
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
		Function f = new Function(functionName, functionExpressionString, argumentsNames);
		functionsList.add(f);
		f.addRelatedExpression(this);
		setExpressionModifiedFlag();
	}
	/**
	 * Gets index of function associated with the expression.
	 *
	 * @param      functionName        the function name
	 *
	 * @return     Function index if function name was found,
	 *             otherwise returns Function.NOT_FOUND
	 *
	 * @see        Function
	 */
	public int getFunctionIndex(String functionName) {
		int functionsNumber = functionsList.size();
		if (functionsNumber > 0) {
			int functionIndex = 0;
			int searchResult = NOT_FOUND;
			while ((functionIndex < functionsNumber)
					&& (searchResult == NOT_FOUND)) {
				if (functionsList.get(functionIndex).getFunctionName().
						equals(functionName))
					searchResult = FOUND;
				else
					functionIndex++;
			}
			if (searchResult == FOUND)
				return functionIndex;
			else
				return NOT_FOUND;
		} else
			return NOT_FOUND;
	}
	/**
	 * Gets function associated with the expression.
	 *
	 * @param      functionName        the function name
	 *
	 * @return     Function if function name was found,
	 *             otherwise returns null.
	 *
	 * @see        Function
	 */
	public Function getFunction(String functionName) {
		int functionIndex = getFunctionIndex(functionName);
		if (functionIndex == NOT_FOUND)
			return null;
		else
			return functionsList.get(functionIndex);
	}
	/**
	 * Gets function associated with the expression.
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
		if ( (functionIndex < 0) || (functionIndex >= functionsList.size()) )
			return null;
		else
			return functionsList.get(functionIndex);
	}
	/**
	 * Gets number of functions associated with the expression.
	 *
	 * @return     number of functions (int &gt;= 0)
	 *
	 * @see        Function
	 */
	public int getFunctionsNumber() {
		return functionsList.size();
	}
	/**
	 * Removes first occurrences of the functions
	 * associated with the expression.
	 *
	 * @param      functionsNames      the functions names (variadic parameters)
	 *                                 comma separated list
	 *
	 * @see        Function
	 */
	public void removeFunctions(String... functionsNames) {
		for (String functionName : functionsNames) {
			int functionIndex = getFunctionIndex(functionName);
			if (functionIndex != NOT_FOUND) {
				Function f = functionsList.get(functionIndex);
				f.removeRelatedExpression(this);
				functionsList.remove(f);
			}
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Removes first occurrences of the functions
	 * associated with the expression.
	 *
	 * @param      functions           the functions (variadic parameters)
	 *                                 comma separated list.
	 *
	 * @see        Function
	 */
	public void removeFunctions(Function... functions) {
		for (Function function : functions) {
			if (function != null) {
				function.removeRelatedExpression(this);
				functionsList.remove(function);
			}
		}
		setExpressionModifiedFlag();
	}
	/**
	 * Removes all functions
	 * associated with the expression.
	 *
	 * @see        Function
	 */
	public void removeAllFunctions() {
		for (Function f : functionsList)
			f.removeRelatedExpression(this);
		functionsList.clear();
		setExpressionModifiedFlag();
	}
	/*=================================================
	 *
	 * Common methods (supporting calculations)
	 *
	 *=================================================
	 */
	/**
	 * Sets given token to the number type / value.
	 * Method should be called only by the SetDecreaseRemove like methods
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      number              the number
	 * @param      ulpRound            If true, then if {@link mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	private void setToNumber(int pos, double number, boolean ulpRound) {
		Token token = tokensList.get(pos);
		if ( (mXparser.ulpRounding) && (disableUlpRounding == false) ){
			if (ulpRound) {
				if ( (Double.isNaN(number) ) || (Double.isInfinite(number)) )
					token.tokenValue = number;
				else {
					int precision = MathFunctions.ulpDecimalDigitsBefore(number);
					if (precision >= 0)
						token.tokenValue = MathFunctions.round(number, precision);
					else
						token.tokenValue = number;
				}
			} else {
				token.tokenValue = number;
			}
		} else {
			token.tokenValue = number;
		}
		token.tokenTypeId = ParserSymbol.NUMBER_TYPE_ID;
		token.tokenId = ParserSymbol.NUMBER_ID;
		token.keyWord = ParserSymbol.NUMBER_STR;
	}
	private void setToNumber(int pos, double number) {
		setToNumber(pos, number, false);
	}
	/**
	 * SetDecreaseRemove for 1 arg functions
	 *
	 * SetDecreaseRemove like methods are called by the methods
	 * calculating values of the unary operation, binary relations
	 * and functions.
	 *
	 * 3 things are done by this type of methods
	 * 1) Set token type to number type / value
	 * 2) Decrease level of the token
	 * 3) Remove no longer needed tokens
	 *
	 * For example:
	 *
	 * Expression string: 1+cos(0)
	 * will be tokened as follows:
	 *
	 *   idx   :  0   1    2    3   4   5
	 *   token :  1   +   cos   (   0   )
	 *   level :  0   0    1    2   2   2
	 *
	 * Partitions with the highest level will be handled first.
	 * In the case presented above, it means, that the parenthesis will be removed
	 *
	 *   idx   :  0   1    2    3
	 *   token :  1   +   cos   0
	 *   level :  0   0    1    2
	 *
	 * Next step is to calculate cos(0) = 1
	 *
	 * SetDecreaseRemove like methods
	 *
	 * 1) Set cos token to 1 (pos=2, result=1):
 	 *   idx   :  0   1    2    3
	 *   token :  1   +    1    0
	 *   level :  0   0    1    2
	 *
	 * 2) Decrease level (pos=2):
 	 *   idx   :  0   1    2    3
	 *   token :  1   +    1    0
	 *   level :  0   0    0    2
	 *
	 * 3) Remove no longer needed tokens (pos+1=3):
 	 *   idx   :  0   1    2
	 *   token :  1   +    1
	 *   level :  0   0    0
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {@link mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	private void f1SetDecreaseRemove(int pos, double result, boolean ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList.get(pos).tokenLevel--;
		tokensList.remove(pos+1);
	}
	private void f1SetDecreaseRemove(int pos, double result) {
		f1SetDecreaseRemove(pos, result, false);
	}
	/**
	 * SetDecreaseRemove for 2-args functions
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {@link mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	private void f2SetDecreaseRemove(int pos, double result, boolean ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList.get(pos).tokenLevel--;
		tokensList.remove(pos+2);
		tokensList.remove(pos+1);
	}
	private void f2SetDecreaseRemove(int pos, double result) {
		f2SetDecreaseRemove(pos, result, false);
	}
	/**
	 * SetDecreaseRemove for 3-args functions
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {@link mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	private void f3SetDecreaseRemove(int pos, double result, boolean ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList.get(pos).tokenLevel--;
		tokensList.remove(pos+3);
		tokensList.remove(pos+2);
		tokensList.remove(pos+1);
	}
	private void f3SetDecreaseRemove(int pos, double result) {
		f3SetDecreaseRemove(pos, result, false);
	}
	/**
	 * SetDecreaseRemove for operators
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {@link mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	private void opSetDecreaseRemove(int pos, double result, boolean ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList.remove(pos+1);
		tokensList.remove(pos-1);
	}
	private void opSetDecreaseRemove(int pos, double result) {
		opSetDecreaseRemove(pos, result, false);
	}
	/**
	 * SetDecreaseRemove for calculus operators.
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      ulpRound            If true, then if {@link mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	private void calcSetDecreaseRemove(int pos, double result, boolean ulpRound) {
		setToNumber(pos, result, ulpRound);
		tokensList.get(pos).tokenLevel--;
		/*
		 * left parenthesis position
		 */
		int lPos = pos+1;
		/*
		 * Evaluate right parenthesis position
		 */
		int rPos = lPos+1;
		while (	!(	( tokensList.get(rPos).tokenTypeId == ParserSymbol.TYPE_ID )
			&&	( tokensList.get(rPos).tokenId == ParserSymbol.RIGHT_PARENTHESES_ID )
			&&	( tokensList.get(rPos).tokenLevel ==  tokensList.get(lPos).tokenLevel)	)	)
			rPos++;
		for (int p = rPos; p >= lPos; p--)
			tokensList.remove(p);
	}
	private void calcSetDecreaseRemove(int pos, double result) {
		calcSetDecreaseRemove(pos, result, false);
	}
	/**
	 * SetDecreaseRemove for special functions.
	 *
	 * For detailed specification refer to the
	 *    f1SetDecreaseRemove()
	 *
	 * @param      pos                 the position on which token
	 *                                 should be updated to the given number
	 * @param      result              the number
	 * @param      length              the special function range
	 * @param      ulpRound            If true, then if {@link mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	private void variadicSetDecreaseRemove(int pos, double value, int length, boolean ulpRound) {
		setToNumber(pos, value, ulpRound);
		tokensList.get(pos).tokenLevel--;
		for (int p = pos + length; p > pos; p--)
			tokensList.remove(p);
	}
	private void variadicSetDecreaseRemove(int pos, double value, int length) {
		variadicSetDecreaseRemove(pos, value, length, false);
	}
	/**
	 * If set remove method for the if function.
	 *
	 * @param      pos                 the position
	 * @param      ifCondition         the result of if condition
	 * @param      ulpRound            If true, then if {@link mXparser#ulpRounding} = true
	 *                                 intelligent ULP rounding is applied.
	 */
	private void ifSetRemove(int pos, double ifCondition, boolean ulpRound) {
		/*
		 * left parethesis position
		 */
		int lPos = pos+1;
		int ifLevel =  tokensList.get(lPos).tokenLevel;
		/*
		 * Evaluate 1 comma position on the same level
		 */
		int c1Pos = lPos+1;
		while (	!(	( tokensList.get(c1Pos).tokenTypeId == ParserSymbol.TYPE_ID )
			&&	( tokensList.get(c1Pos).tokenId == ParserSymbol.COMMA_ID )
			&&	( tokensList.get(c1Pos).tokenLevel ==  ifLevel)	)	)
			c1Pos++;
		/*
		 * Evaluate 2 comma position on the same level
		 */
		int c2Pos = c1Pos+1;
		while (	!(	( tokensList.get(c2Pos).tokenTypeId == ParserSymbol.TYPE_ID )
			&&	( tokensList.get(c2Pos).tokenId == ParserSymbol.COMMA_ID )
			&&	( tokensList.get(c2Pos).tokenLevel ==  ifLevel)	)	)
			c2Pos++;
		/*
		 * Evaluate right parenthesis position
		 */
		int rPos = c2Pos+1;
		while (	!(	( tokensList.get(rPos).tokenTypeId == ParserSymbol.TYPE_ID )
			&&	( tokensList.get(rPos).tokenId == ParserSymbol.RIGHT_PARENTHESES_ID )
			&&	( tokensList.get(rPos).tokenLevel ==  ifLevel)	)	)
			rPos++;
		int from;
		int to;
		if ( !Double.isNaN(ifCondition) ) {
			if (ifCondition != 0) {
				setToNumber(c2Pos+1, Double.NaN);
				tokensList.get(c2Pos+1).tokenLevel = ifLevel;
				from = c2Pos+2;
				to = rPos-1;
			} else {
				setToNumber(c1Pos+1, Double.NaN);
				tokensList.get(c1Pos+1).tokenLevel = ifLevel;
				from = c1Pos+2;
				to = c2Pos-1;
			}
			if (from < to)
				for (int p = to; p >= from; p--)
					tokensList.remove(p);
		} else {
			setToNumber(c1Pos+1, Double.NaN);
			setToNumber(c2Pos+1, Double.NaN);
			tokensList.get(c1Pos+1).tokenLevel = ifLevel;
			tokensList.get(c2Pos+1).tokenLevel = ifLevel;
			from = c2Pos+2;
			to = rPos-1;
			if (from < to)
				for (int p = to; p >= from; p--)
					tokensList.remove(p);
			from = c1Pos+2;
			to = c2Pos-1;
			if (from < to)
				for (int p = to; p >= from; p--)
					tokensList.remove(p);
		}
		setToNumber(lPos+1, ifCondition, ulpRound);
		tokensList.get(lPos+1).tokenLevel = ifLevel;
		from = lPos+2;
		to = c1Pos-1;
		if (from < to)
			for (int p = to; p >= from; p--)
				tokensList.remove(p);
		tokensList.get(pos).tokenId = Function3Arg.IF_ID;
	}
	private void ifSetRemove(int pos, double ifCondition) {
		ifSetRemove(pos, ifCondition, false);
	}
	/**
	 * Creates string tokens list from the subexpression.
	 *
	 * @param      startPos            start position (index)
	 * @param      endPos              end position   (index)
	 *
	 * @return     tokens list representing requested subexpression.
	 */
	private ArrayList<Token> createInitialTokens(int startPos,
			int endPos,
			ArrayList<Token> tokensList) {
		ArrayList<Token> tokens = new ArrayList<Token>();
		Token t;
		for (int p = startPos; p<= endPos; p++) {
			t = tokensList.get(p).clone();
			tokens.add(t);
		}
		return tokens;
	}
 	/**
	 * Return number of functions parameters.
	 *
	 * @param      pos                 the function position
	 */
	private int getParametersNumber(int pos) {
		int lPpos = pos+1;
		if (lPpos == initialTokens.size())
			return -1;
		if ( (initialTokens.get(lPpos).tokenTypeId == ParserSymbol.TYPE_ID) && (initialTokens.get(lPpos).tokenId == ParserSymbol.LEFT_PARENTHESES_ID) ) {
			int tokenLevel = initialTokens.get(lPpos).tokenLevel;
			/*
			 * Evaluate right parenthesis position
			 */
			int endPos = lPpos+1;
			while (	!(	( initialTokens.get(endPos).tokenTypeId == ParserSymbol.TYPE_ID )
				&&	( initialTokens.get(endPos).tokenId == ParserSymbol.RIGHT_PARENTHESES_ID )
				&&	( initialTokens.get(endPos).tokenLevel ==  tokenLevel)	)	)
				endPos++;
			if (endPos == lPpos + 1)
				return 0;
			/*
			 * Evaluate number of parameters by
			 * counting number of ',' between parenthesis
			 */
			int numberOfCommas = 0;
			for (int p = lPpos; p < endPos; p++) {
				Token token = initialTokens.get(p);
				if ( (token.tokenTypeId == ParserSymbol.TYPE_ID) && (token.tokenId == ParserSymbol.COMMA_ID) && (token.tokenLevel == tokenLevel) )
					numberOfCommas++;
			}
			return numberOfCommas + 1;
		} else {
			return -1;
		}
	}
	/**
	 * Returns list of the functions parameters.
	 *
	 * @param      pos                 the function position
	 * @param      tokensList          the tokens list
	 *
	 * @return     the list of function parameters
	 *
	 * @see        FunctionParameter
	 */
	private ArrayList<FunctionParameter> getFunctionParameters(int pos, ArrayList<Token> tokensList) {
		ArrayList<FunctionParameter> functionParameters = new ArrayList<FunctionParameter>();
		int cPos = pos+2;
		int tokenLevel = tokensList.get(pos+1).tokenLevel;
		int pPos = cPos;
		boolean comma;
		boolean paren;
		boolean end = false;
		ArrayList<Token> paramTkones = new ArrayList<Token>();
		String paramStr = "";
		do {
			Token t = tokensList.get(cPos);
			comma = false;
			paren = false;
			if (t.tokenLevel == tokenLevel)
				if (t.tokenTypeId == ParserSymbol.TYPE_ID) {
					if (t.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID)
						paren = true;
					else
						if (t.tokenId == ParserSymbol.COMMA_ID)
							comma = true;
				}
			if ( (paren == true) || (comma == true) ) {
				if (cPos > pos + 2) {
					functionParameters.add( new FunctionParameter(paramTkones, paramStr, pPos, cPos-1 ) );
					paramTkones = new ArrayList<Token>();
					paramStr = "";
					pPos = cPos+1;
				}
			} else {
				paramTkones.add(t);
				paramStr = paramStr + t.tokenStr;
			}
			if (paren)
				end = true;
			else
				cPos++;
		} while (!end);
		return functionParameters;
	}
	/**
	 * Gets / returns argument representing given argument name. If
	 * argument name exists on the list of known arguments
	 * the the initial status of the found argument is remembered, otherwise new
	 * argument will be created.
	 *
	 * @param      argumentName        the argument name
	 *
	 * @return     Argument parameter representing given argument name:
	 *
	 *
	 * @see        ArgumentParameter
	 * @see        Argument
	 */
	private ArgumentParameter getParamArgument(String argumentName) {
		ArgumentParameter argParam = new ArgumentParameter();
		argParam.index = getArgumentIndex(argumentName);
		argParam.argument = getArgument(argParam.index);
		argParam.presence = FOUND;
		if (argParam.argument == null) {
			argParam.argument = new Argument(argumentName);
			argumentsList.add(argParam.argument);
			argParam.index = argumentsList.size()-1;
			argParam.presence = NOT_FOUND;
		} else {
			argParam.initialValue = argParam.argument.argumentValue;
			argParam.initialType = argParam.argument.argumentType;
			argParam.argument.argumentValue = argParam.argument.getArgumentValue();
			argParam.argument.argumentType = Argument.FREE_ARGUMENT;
		}
		return argParam;
	}
	/**
	 * Clears argument parameter.
	 *
	 * @param      argParam            the argument parameter.
	 */
	private void clearParamArgument(ArgumentParameter argParam) {
		if (argParam.presence == NOT_FOUND)
			argumentsList.remove(argParam.index);
		else {
			argParam.argument.argumentValue = argParam.initialValue;
			argParam.argument.argumentType = argParam.initialType;
		}
	}
	/*=================================================
	 *
	 * Math implementations
	 *
	 *=================================================
	 */
	/**
	 * Arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	private void ARGUMENT(int pos) {
		Argument argument = argumentsList.get( tokensList.get(pos).tokenId);
		boolean argumentVerboseMode = argument.getVerboseMode();
		if (verboseMode == true)
			argument.setVerboseMode();
		setToNumber(pos,argument.getArgumentValue());
		if (argumentVerboseMode == false)
			argument.setSilentMode();
	}
	/**
	 * User functions handling.
	 *
	 * @param      pos                 the token position
	 */
	private void USER_FUNCTION(int pos) {
		Function function;
		Function fun = functionsList.get( tokensList.get(pos).tokenId );
		if (fun.getRecursiveMode() == true)
			function = fun.clone();
		else
			function = fun;
		int argsNumber = function.getParametersNumber();
		for (int argIdx = 0; argIdx < argsNumber; argIdx++)
			function.setArgumentValue(argIdx, tokensList.get(pos + argIdx + 1).tokenValue);
		boolean functionVerboseMode = function.getVerboseMode();
		if (verboseMode == true)
			function.setVerboseMode();
		double value;
		try {
			value = function.calculate();
		} catch(StackOverflowError soe){
			value = Double.NaN;
			errorMessage = soe.getMessage();
		}
		setToNumber(pos, value);
		tokensList.get(pos).tokenLevel--;
		if (functionVerboseMode == false)
			function.setSilentMode();
		for (int argIdx = argsNumber; argIdx > 0 ; argIdx--)
			tokensList.remove(pos+argIdx);
	}
	/**
	 * User constants handling.
	 *
	 * @param      pos                 the token position
	 */
	private void USER_CONSTANT(int pos) {
		Constant constant = constantsList.get( tokensList.get(pos).tokenId );
		setToNumber(pos, constant.getConstantValue());
	}
	/**
	 * Recursive arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	private void RECURSIVE_ARGUMENT(int pos) {
		double index = tokensList.get(pos+1).tokenValue;
		RecursiveArgument argument = (RecursiveArgument)argumentsList.get( tokensList.get(pos).tokenId );
		boolean argumentVerboseMode = argument.getVerboseMode();
		if (verboseMode == true)
			argument.setVerboseMode();
		double result = argument.getArgumentValue(index);
		f1SetDecreaseRemove(pos, result);
		if (argumentVerboseMode == false)
			argument.setSilentMode();
	}
	/**
	 * COnstants handling handling.
	 *
	 * @param      pos                 the token position
	 */
	private void CONSTANT(int pos) {
		double constValue = Double.NaN;
		switch (tokensList.get(pos).tokenId) {
		case ConstantValue.PI_ID:
			constValue = MathConstants.PI;
			break;
		case ConstantValue.EULER_ID:
			constValue = MathConstants.E;
			break;
		case ConstantValue.EULER_MASCHERONI_ID:
			constValue = MathConstants.EULER_MASCHERONI;
			break;
		case ConstantValue.GOLDEN_RATIO_ID:
			constValue = MathConstants.GOLDEN_RATIO;
			break;
		case ConstantValue.PLASTIC_ID:
			constValue = MathConstants.PLASTIC;
			break;
		case ConstantValue.EMBREE_TREFETHEN_ID:
			constValue = MathConstants.EMBREE_TREFETHEN;
			break;
		case ConstantValue.FEIGENBAUM_DELTA_ID:
			constValue = MathConstants.FEIGENBAUM_DELTA;
			break;
		case ConstantValue.FEIGENBAUM_ALFA_ID:
			constValue = MathConstants.FEIGENBAUM_ALFA;
			break;
		case ConstantValue.TWIN_PRIME_ID:
			constValue = MathConstants.TWIN_PRIME;
			break;
		case ConstantValue.MEISSEL_MERTEENS_ID:
			constValue = MathConstants.MEISSEL_MERTEENS;
			break;
		case ConstantValue.BRAUN_TWIN_PRIME_ID:
			constValue = MathConstants.BRAUN_TWIN_PRIME;
			break;
		case ConstantValue.BRAUN_PRIME_QUADR_ID:
			constValue = MathConstants.BRAUN_PRIME_QUADR;
			break;
		case ConstantValue.BRUIJN_NEWMAN_ID:
			constValue = MathConstants.BRUIJN_NEWMAN;
			break;
		case ConstantValue.CATALAN_ID:
			constValue = MathConstants.CATALAN;
			break;
		case ConstantValue.LANDAU_RAMANUJAN_ID:
			constValue = MathConstants.LANDAU_RAMANUJAN;
			break;
		case ConstantValue.VISWANATH_ID:
			constValue = MathConstants.VISWANATH;
			break;
		case ConstantValue.LEGENDRE_ID:
			constValue = MathConstants.LEGENDRE;
			break;
		case ConstantValue.RAMANUJAN_SOLDNER_ID:
			constValue = MathConstants.RAMANUJAN_SOLDNER;
			break;
		case ConstantValue.ERDOS_BORWEIN_ID:
			constValue = MathConstants.ERDOS_BORWEIN;
			break;
		case ConstantValue.BERNSTEIN_ID:
			constValue = MathConstants.BERNSTEIN;
			break;
		case ConstantValue.GAUSS_KUZMIN_WIRSING_ID:
			constValue = MathConstants.GAUSS_KUZMIN_WIRSING;
			break;
		case ConstantValue.HAFNER_SARNAK_MCCURLEY_ID:
			constValue = MathConstants.HAFNER_SARNAK_MCCURLEY;
			break;
		case ConstantValue.GOLOMB_DICKMAN_ID:
			constValue = MathConstants.GOLOMB_DICKMAN;
			break;
		case ConstantValue.CAHEN_ID:
			constValue = MathConstants.CAHEN;
			break;
		case ConstantValue.LAPLACE_LIMIT_ID:
			constValue = MathConstants.LAPLACE_LIMIT;
			break;
		case ConstantValue.ALLADI_GRINSTEAD_ID:
			constValue = MathConstants.ALLADI_GRINSTEAD;
			break;
		case ConstantValue.LENGYEL_ID:
			constValue = MathConstants.LENGYEL;
			break;
		case ConstantValue.LEVY_ID:
			constValue = MathConstants.LEVY;
			break;
		case ConstantValue.APERY_ID:
			constValue = MathConstants.APERY;
			break;
		case ConstantValue.MILLS_ID:
			constValue = MathConstants.MILLS;
			break;
		case ConstantValue.BACKHOUSE_ID:
			constValue = MathConstants.BACKHOUSE;
			break;
		case ConstantValue.PORTER_ID:
			constValue = MathConstants.PORTER;
			break;
		case ConstantValue.LIEB_QUARE_ICE_ID:
			constValue = MathConstants.LIEB_QUARE_ICE;
			break;
		case ConstantValue.NIVEN_ID:
			constValue = MathConstants.NIVEN;
			break;
		case ConstantValue.SIERPINSKI_ID:
			constValue = MathConstants.SIERPINSKI;
			break;
		case ConstantValue.KHINCHIN_ID:
			constValue = MathConstants.KHINCHIN;
			break;
		case ConstantValue.FRANSEN_ROBINSON_ID:
			constValue = MathConstants.FRANSEN_ROBINSON;
			break;
		case ConstantValue.LANDAU_ID:
			constValue = MathConstants.LANDAU;
			break;
		case ConstantValue.PARABOLIC_ID:
			constValue = MathConstants.PARABOLIC;
			break;
		case ConstantValue.OMEGA_ID:
			constValue = MathConstants.OMEGA;
			break;
		case ConstantValue.MRB_ID:
			constValue = MathConstants.MRB;
			break;
		case ConstantValue.LI2_ID:
			constValue = MathConstants.LI2;
			break;
		case ConstantValue.GOMPERTZ_ID:
			constValue = MathConstants.GOMPERTZ;
			break;
		}
		setToNumber(pos, constValue);
	}
	/**
	 * Random Variables handling.
	 *
	 * @param      pos                 the token position
	 */
	private void RANDOM_VARIABLE(int pos) {
		double rndVar = Double.NaN;
		switch (tokensList.get(pos).tokenId) {
		case RandomVariable.UNIFORM_ID:
			rndVar = ProbabilityDistributions.rndUniformContinuous(ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT_ID:
			rndVar = ProbabilityDistributions.rndInteger(ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT1_ID:
			rndVar = ProbabilityDistributions.rndInteger(-10, 10, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT2_ID:
			rndVar = ProbabilityDistributions.rndInteger(-100, 100, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT3_ID:
			rndVar = ProbabilityDistributions.rndInteger(-1000, 1000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT4_ID:
			rndVar = ProbabilityDistributions.rndInteger(-10000, 10000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT5_ID:
			rndVar = ProbabilityDistributions.rndInteger(-100000, 100000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT6_ID:
			rndVar = ProbabilityDistributions.rndInteger(-1000000, 1000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT7_ID:
			rndVar = ProbabilityDistributions.rndInteger(-10000000, 10000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT8_ID:
			rndVar = ProbabilityDistributions.rndInteger(-100000000, 100000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.INT9_ID:
			rndVar = ProbabilityDistributions.rndInteger(-1000000000, 1000000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 2147483646, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_1_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 10, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_2_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 100, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_3_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 1000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_4_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 10000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_5_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 100000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_6_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 1000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_7_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 10000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_8_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 100000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT0_9_ID:
			rndVar = ProbabilityDistributions.rndInteger(0, 1000000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 2147483646, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_1_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 10, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_2_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 100, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_3_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 1000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_4_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 10000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_5_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 100000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_6_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 1000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_7_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 10000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_8_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 100000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NAT1_9_ID:
			rndVar = ProbabilityDistributions.rndInteger(1, 1000000000, ProbabilityDistributions.randomGenerator);
			break;
		case RandomVariable.NOR_ID:
			rndVar = ProbabilityDistributions.rndNormal(0.0, 1.0, ProbabilityDistributions.randomGenerator);
			break;
		}
		setToNumber(pos, rndVar);
	}
	/**
	 * Gets token value
	 * @param      tokenIndex          the token index
	 *
	 * @return     the token value
	 */
	private double getTokenValue(int tokenIndex) {
		return tokensList.get(tokenIndex).tokenValue;
	}
	/**
	 * Power handling.
	 *
	 * @param      pos                 the token position
	 */
	private void POWER(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, MathFunctions.power(a, b), true);
	}
	/**
	 * Modulo handling.
	 *
	 * @param      pos                 the token position
	 */
	private void MODULO(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, MathFunctions.mod(a, b) );
	}
	/**
	 * Division handling.
	 *
	 * @param      pos                 the token position
	 */
	private void DIVIDE(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, MathFunctions.div(a, b), true);
	}
	/**
	 * Multiplication handling.
	 *
	 * @param      pos                 the token position
	 */
	private void MULTIPLY(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, a * b, true);
	}
	/**
	 * Addition handling.
	 *
	 * @param      pos                 the token position
	 */
	private void PLUS(int pos) {
		Token b = tokensList.get(pos+1);
		if (pos>0) {
			Token a = tokensList.get(pos-1);
			if ( (a.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) && (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID))
				opSetDecreaseRemove(pos, a.tokenValue + b.tokenValue, true);
			else if (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
				setToNumber(pos,b.tokenValue);
				tokensList.remove(pos+1);
			}
		}
		else
			if (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
				setToNumber(pos,b.tokenValue);
				tokensList.remove(pos+1);
			}
	}
	/**
	 * Subtraction handling
	 *
	 * @param      pos                 the token position
	 */
	private void MINUS(int pos) {
		Token b = tokensList.get(pos+1);
		if (pos>0) {
			Token a = tokensList.get(pos-1);
			if ( (a.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) && (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID))
				opSetDecreaseRemove(pos, a.tokenValue - b.tokenValue, true);
			else if (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
				setToNumber(pos,-b.tokenValue);
				tokensList.remove(pos+1);
			}
		}
		else
			if (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
				setToNumber(pos,-b.tokenValue);
				tokensList.remove(pos+1);
			}
	}
	/**
	 * Logical AND
	 *
	 * @param      pos                 the token position
	 */
	private void AND(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.and(a, b) );
	}
	/**
	 * Logical OR
	 *
	 * @param      pos                 the token position
	 */
	private void OR(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.or(a, b) );
	}
	/**
	 * Logical NAND
	 *
	 * @param      pos                 the token position
	 */
	private void NAND(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.nand(a, b) );
	}
	/**
	 * Logical NOR
	 *
	 * @param      pos                 the token position
	 */
	private void NOR(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.nor(a, b) );
	}
	/**
	 * Logical XOR
	 *
	 *
	 * @param      pos                 the token position
	 */
	private void XOR(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.xor(a, b) );
	}
	/**
	 * Logical IMP
	 *
	 *
	 * @param      pos                 the token position
	 */
	private void IMP(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.imp(a, b) );
	}
	/**
	 * Logical CIMP
	 *
	 * @param      pos                 the token position
	 */
	private void CIMP(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.cimp(a, b) );
	}
	/**
	 * Logical NIMP
	 *
	 * @param      pos                 the token position
	 */
	private void NIMP(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.nimp(a, b) );
	}
	/**
	 * Logical CNIMP
	 *
	 * @param      pos                 the token position
	 */
	private void CNIMP(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.cnimp(a, b) );
	}
	/**
	 * Logical EQV
	 *
	 * @param      pos                 the token position
	 */
	private void EQV(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BooleanAlgebra.eqv(a, b) );
	}
	/**
	 * Logical negation
	 *
	 * @param      pos                 the token position
	 */
	private void NEG(int pos) {
		double a = getTokenValue(pos+1);
		setToNumber(pos, BooleanAlgebra.not(a) );
		tokensList.remove(pos+1);
	}
	/**
	 * Equality relation.
	 *
	 * @param      pos                 the token position
	 */
	private void EQ(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BinaryRelations.eq(a, b) );
	}
	/**
	 * Not equals.
	 *
	 * @param      pos                 the token position
	 */
	private void NEQ(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BinaryRelations.neq(a, b) );
	}
	/**
	 * Lower than.
	 *
	 * @param      pos                 the token position
	 */
	private void LT(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BinaryRelations.lt(a, b) );
	}
	/**
	 * Greater than.
	 *
	 * @param      pos                 the token position
	 */
	private void GT(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BinaryRelations.gt(a, b) );
	}
	/**
	 * Lower or equal.
	 *
	 * @param      pos                 the token position
	 */
	private void LEQ(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BinaryRelations.leq(a, b) );
	}
	/**
	 * Greater or equal
	 *
	 * @param      pos                 the token position
	 */
	private void GEQ(int pos) {
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BinaryRelations.geq(a, b) );
	}
	/**
	 * Sine function
	 *
	 * @param      pos                 the token position
	 */
	private void SIN(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.sin(a) );
	}
	/**
	 * Cosine / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void COS(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.cos(a) );
	}
	/**
	 * Tangent / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void TAN(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.tan(a) );
	}
	/**
	 * Cotangent / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void CTAN(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.ctan(a) );
	}
	/**
	 * Secant / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void SEC(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.sec(a) );
	}
	/**
	 * Cosecant / Trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void COSEC(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.cosec(a) );
	}
	/**
	 * Arcus sine / Inverse trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ASIN(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.asin(a) );
	}
	/**
	 * Arcus cosine / Inverse trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ACOS(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.acos(a) );
	}
	/**
	 * Arcus tangent / Inverse trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ATAN(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.atan(a) );
	}
	/**
	 * Arcus cotangent / Inverse trigonometric functions
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ACTAN(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.actan(a) );
	}
	/**
	 * Natural logarithm (base e)
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void LN(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.ln(a) );
	}
	/**
	 * Logarithm - base 2
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void LOG2(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.log2(a) );
	}
	/**
	 * Logarithm - base 10
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void LOG10(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.log10(a) );
	}
	/**
	 * Converts degrees to radius
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void RAD(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.rad(a) );
	}
	/**
	 * Exponential function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void EXP(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.exp(a) );
	}
	/**
	 * Square root
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void SQRT(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.sqrt(a) );
	}
	/**
	 * Hyperbolic sine
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void SINH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.sinh(a) );
	}
	/**
	 * Hyperbolic cosine
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void COSH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.cosh(a) );
	}
	/**
	 * Hyperbolic tangent
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void TANH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.tanh(a) );
	}
	/**
	 * Hyperbolic cotangent
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void COTH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.coth(a) );
	}
	/**
	 * Hyperbolic secant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void SECH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.sech(a) );
	}
	/**
	 * Hyperbolic cosecant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void CSCH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.csch(a) );
	}
	/**
	 * Converts radius to degrees
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void DEG(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.deg(a) );
	}
	/**
	 * Absolut value
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ABS(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.abs(a) );
	}
	/**
	 * Signum function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void SGN(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.sgn(a) );
	}
	/**
	 * Floor function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void FLOOR(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.floor(a) );
	}
	/**
	 * Ceil function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void CEIL(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.ceil(a) );
	}
	/**
	 * Arcus hyperbolic sine
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ARSINH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.arsinh(a) );
	}
	/**
	 * Arcus hyperbolic cosine
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ARCOSH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.arcosh(a) );
	}
	/**
	 * Arcus hyperbolic tangent
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ARTANH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.artanh(a) );
	}
	/**
	 * Arcus hyperbolic cotangent
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ARCOTH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.arcoth(a) );
	}
	/**
	 * Arcus hyperbolic secant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ARSECH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.arsech(a) );
	}
	/**
	 * Arcus hyperbolic cosecant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ARCSCH(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.arcsch(a) );
	}
	/**
	 * SA / sinc normalized
	 *
	 * @param      pos                 the token position
	 */
	private void SA(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.sa(a) );
	}
	/**
	 * Sinc unnormalized
	 *
	 * @param      pos                 the token position
	 */
	private void SINC(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.sinc(a) );
	}
	/**
	 * Bell numbers
	 *
	 * @param      pos                 the token position
	 */
	private void BELL_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.bellNumber(n) );
	}
	/**
	 * Lucas numbers
	 *
	 * @param      pos                 the token position
	 */
	private void LUCAS_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.lucasNumber(n) );
	}
	/**
	 * Fibonacci numbers
	 *
	 * @param      pos                 the token position
	 */
	private void FIBONACCI_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.fibonacciNumber(n) );
	}
	/**
	 * Harmonic numbers
	 *
	 * @param      pos                 the token position
	 */
	private void HARMONIC_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.harmonicNumber(n) );
	}
	/**
	 * Prime test
	 *
	 * @param      pos                 the token position
	 */
	private void IS_PRIME(int pos) {
		double n = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, NumberTheory.primeTest(n) );
	}
	/**
	 * Prime counting
	 *
	 * @param      pos                 the token position
	 */
	private void PRIME_COUNT(int pos) {
		double n = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, NumberTheory.primeCount(n) );
	}
	/**
	 * Exponential integral function
	 *
	 * @param      pos                 the token position
	 */
	private void EXP_INT(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.exponentialIntegralEi(x) );
	}
	/**
	 * Logarithmic exponential integral function
	 *
	 * @param      pos                 the token position
	 */
	private void LOG_INT(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.logarithmicIntegralLi(x) );
	}
	/**
	 * Offset logarithmic exponential integral function
	 *
	 * @param      pos                 the token position
	 */
	private void OFF_LOG_INT(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.offsetLogarithmicIntegralLi(x) );
	}
	/**
	 * Factorilal function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void FACT(int pos) {
		double a = getTokenValue(pos-1);
		setToNumber(pos, MathFunctions.factorial(a));
		tokensList.remove(pos-1);
	}
	/**
	 * Negation
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void NOT(int pos) {
		double a = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, BooleanAlgebra.not(a) );
	}
	/**
	 * Gauss error function
	 *
	 * @param      pos                 the token position
	 */
	private void GAUSS_ERF(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.erf(x) );
	}
	/**
	 * Gauss complementary error function
	 *
	 * @param      pos                 the token position
	 */
	private void GAUSS_ERFC(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.erfc(x) );
	}
	/**
	 * Inverse of Gauss error function
	 *
	 * @param      pos                 the token position
	 */
	private void GAUSS_ERF_INV(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.erfInv(x) );
	}
	/**
	 * Inverse of Gauss complementary error function
	 *
	 * @param      pos                 the token position
	 */
	private void GAUSS_ERFC_INV(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.erfcInv(x) );
	}
	/**
	 * Unit in The Last Place
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ULP(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.ulp(x) );
	}
	/**
	 * Logarithm
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void LOG(int pos) {
		double b = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.log(a, b) );
	}
	/**
	 * Creates ArraList<Double> containing function parameters
	 *
	 * @param      pos                 the function position
	 *
	 * @return     List of function parameters.
	 */
	private ArrayList<Double> getNumbers(int pos) {
		ArrayList<Double> numbers = new ArrayList<Double>();
		int pn = pos;
		int lastIndex = tokensList.size() - 1;
		boolean isNumber;
		boolean end = false;
		do {
			pn++;
			Token t = tokensList.get(pn);
			isNumber = false;
			if ( (t.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) && (t.tokenId == ParserSymbol.NUMBER_ID) ) {
				isNumber = true;
				numbers.add(t.tokenValue);
			}
			if ( (pn == lastIndex) || (!isNumber) )
				end = true;
		} while ( end == false );
		return numbers;
	}
	/**
	 * Modulo
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void MOD(int pos) {
		double a = getTokenValue(pos+1);
		double b = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.mod(a, b) );
	}
	/**
	 * Binomial Coefficient
	 *
	 * @param      pos                 the token position
	 */
	private void BINOM_COEFF(int pos) {
		double a = getTokenValue(pos+1);
		double b = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.binomCoeff(a,b) );
	}
	/**
	 * Bernoulli Number
	 *
	 * @param      pos                 the token position
	 */
	private void BERNOULLI_NUMBER(int pos) {
		double m = getTokenValue(pos+1);
		double n = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.bernoulliNumber(m, n) );
	}
	/**
	 * Stirling number of the first kind
	 *
	 * @param      pos                 the token position
	 */
	private void STIRLING1_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.Srirling1Number(n, k) );
	}
	/**
	 * Stirling number of the second kind.
	 *
	 * @param      pos                 the token position
	 */
	private void STIRLING2_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.Srirling2Number(n, k) );
	}
	/**
	 * Worpitzky number.
	 *
	 * @param      pos                 the token position
	 */
	private void WORPITZKY_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.worpitzkyNumber(n, k) );
	}
	/**
	 * Euler number
	 *
	 * @param      pos                 the token position
	 */
	private void EULER_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.eulerNumber(n, k) );
	}
	/**
	 * Kronecker delta
	 *
	 * @param      pos                 the token position
	 */
	private void KRONECKER_DELTA(int pos) {
		double i = getTokenValue(pos+1);
		double j = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.kroneckerDelta(i, j) );
	}
	/**
	 * Euler polynomial
	 *
	 * @param      pos                 the token position
	 */
	private void EULER_POLYNOMIAL(int pos) {
		double m = getTokenValue(pos+1);
		double x = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.eulerPolynomial(m, x) );
	}
	/**
	 * Harmonic numbers
	 *
	 * @param      pos                 the token position
	 */
	private void HARMONIC2_NUMBER(int pos) {
		double x = getTokenValue(pos+1);
		double n = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.harmonicNumber(x, n) );
	}
	/**
	 * Decimal rounding
	 *
	 * @param      pos                 the token position
	 */
	private void ROUND(int pos) {
		double value = getTokenValue(pos+1);
		int places = (int)getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.round(value, places) );
	}
	/**
	 * Random number - Uniform Continuous distribution
	 *
	 * @param      pos                 the token position
	 */
	private void RND_VAR_UNIFORM_CONT(int pos) {
		double a = getTokenValue(pos+1);
		double b = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.rndUniformContinuous(a, b, ProbabilityDistributions.randomGenerator) );
	}
	/**
	 * Random number - Uniform Discrete distribution
	 *
	 * @param      pos                 the token position
	 */
	private void RND_VAR_UNIFORM_DISCR(int pos) {
		int a = (int)getTokenValue(pos+1);
		int b = (int)getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.rndInteger(a, b, ProbabilityDistributions.randomGenerator) );
	}
	/**
	 * Random number - Normal distribution
	 *
	 * @param      pos                 the token position
	 */
	private void RND_NORMAL(int pos) {
		double mean = getTokenValue(pos+1);
		double stddev = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.rndNormal(mean, stddev, ProbabilityDistributions.randomGenerator) );
	}
	/**
	 * IF function
	 *
	 * @param      pos                 the token position
	 */
	private void IF_CONDITION(int pos) {
		/*
		 * Get condition string
		 * 1st parameter
		 */
		ArrayList<FunctionParameter> ifParams = getFunctionParameters(pos, tokensList);
		FunctionParameter ifParam = ifParams.get(0);
		Expression ifExp = new Expression(ifParam.paramStr, ifParam.tokens, argumentsList, functionsList, constantsList, KEEP_ULP_ROUNDING_SETTINGS);
		if (verboseMode == true)
			ifExp.setVerboseMode();
		ifSetRemove(pos, ifExp.calculate());
	}
	/**
	 * IFF function
	 *
	 * @param      pos                 the token position
	 */
	private void IFF(int pos) {
		/*
		 * Get condition string
		 * 1st parameter
		 */
		ArrayList<FunctionParameter> iffParams = getFunctionParameters(pos, tokensList);
		FunctionParameter iffParam = iffParams.get(0);
		int parametersNumber = iffParams.size();
		int trueParamNumber;
		int paramNumber;
		paramNumber = 1;
		Expression iffExp;
		double iffValue = 0;
		boolean iffCon = true;
		do {
			iffExp = new Expression(iffParam.paramStr, iffParam.tokens, argumentsList, functionsList, constantsList, KEEP_ULP_ROUNDING_SETTINGS);
			if (verboseMode == true)
				iffExp.setVerboseMode();
			iffCon = true;
			iffValue = iffExp.calculate();
			if ( (iffValue == 0) || (Double.isNaN(iffValue)) ) {
					paramNumber += 2;
					iffCon = false;
					if (paramNumber < parametersNumber)
						iffParam = iffParams.get(paramNumber-1);
			}
		} while ( (!iffCon) && (paramNumber < parametersNumber) );
		int from;
		int to;
		int p;
		if (iffCon) {
			trueParamNumber = paramNumber+1;
			from = pos+1;
			to = iffParams.get(parametersNumber-1).toIndex+1;
			tokensList.get(from).tokenLevel--;
			tokensList.get(to).tokenLevel--;
			if (trueParamNumber < parametersNumber) {
				to = iffParams.get(parametersNumber-1).toIndex;
				from = iffParams.get(trueParamNumber).fromIndex-1;
				for (p = to; p >= from; p--)
					tokensList.remove(p);
			}
			from = iffParams.get(trueParamNumber-1).fromIndex;
			to = iffParams.get(trueParamNumber-1).toIndex;
			for (p = from; p <= to; p++)
				tokensList.get(p).tokenLevel--;
			to = from-1;
			from = pos;
			for (p = to; p >= from; p--)
				if (p != pos + 1)
				tokensList.remove(p);
		} else {
			to = iffParams.get(parametersNumber-1).toIndex+1;
			from = pos+1;
			for (p = to; p >= from; p--)
				tokensList.remove(p);
			setToNumber(pos, Double.NaN);
			tokensList.get(pos).tokenLevel--;
		}
	}
	/**
	 * IF
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void IF(int pos) {
		double ifCondition = tokensList.get(pos+1).tokenValue;
		double ifTrue = tokensList.get(pos+2).tokenValue;
		double ifFalse = tokensList.get(pos+3).tokenValue;
		double result = ifFalse;
		if (ifCondition != 0)
			result = ifTrue;
		if (ifCondition == Double.NaN)
			result = Double.NaN;
		f3SetDecreaseRemove(pos, result );
	}
	/**
	 * Characteristic function (a,b)
	 *
	 * @param      pos                 the token position
	 */
	private void CHI_ab(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, MathFunctions.chi(x, a, b) );
	}
	/**
	 * Characteristic function [a,b]
	 *
	 * @param      pos                 the token position
	 */
	private void CHI_AB(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, MathFunctions.CHi_LR(x, a, b) );
	}
	/**
	 * Characteristic function [a,b)
	 *
	 * @param      pos                 the token position
	 */
	private void CHI_Ab(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, MathFunctions.Chi_L(x, a, b) );
	}
	/**
	 * Characteristic function (a,b]
	 *
	 * @param      pos                 the token position
	 */
	private void CHI_aB(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, MathFunctions.cHi_R(x, a, b) );
	}
	/**
	 * Probability Distribution Function - Uniform Continuous distribution
	 *
	 * @param      pos                 the token position
	 */
	private void PDF_UNIFORM_CONT(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.pdfUniformContinuous(x, a, b) );
	}
	/**
	 * Cumulative Distribution Function - Uniform Continuous distribution
	 *
	 * @param      pos                 the token position
	 */
	private void CDF_UNIFORM_CONT(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.cdfUniformContinuous(x, a, b) );
	}
	/**
	 * Quantile Function - Uniform Continuous distribution
	 *
	 * @param      pos                 the token position
	 */
	private void QNT_UNIFORM_CONT(int pos) {
		double q = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.qntUniformContinuous(q, a, b) );
	}
	/**
	 * Probability Distribution Function - Normal distribution
	 *
	 * @param      pos                 the token position
	 */
	private void PDF_NORMAL(int pos) {
		double x = getTokenValue(pos+1);
		double mean = getTokenValue(pos+2);
		double stddev = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.pdfNormal(x, mean, stddev) );
	}
	/**
	 * Cumulative Distribution Function - Normal distribution
	 *
	 * @param      pos                 the token position
	 */
	private void CDF_NORMAL(int pos) {
		double x = getTokenValue(pos+1);
		double mean = getTokenValue(pos+2);
		double stddev = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.cdfNormal(x, mean, stddev) );
	}
	/**
	 * Quantile Function - Normal distribution
	 *
	 * @param      pos                 the token position
	 */
	private void QNT_NORMAL(int pos) {
		double q = getTokenValue(pos+1);
		double mean = getTokenValue(pos+2);
		double stddev = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.qntNormal(q, mean, stddev) );
	}
	/**
	 * Updating missing tokens (i.e. indexes i sum operator). Used when creating
	 * internal expressions based on the sublist of tokens.
	 *
	 *
	 * @param      tokens              the tokens list
	 * @param      keyWord             missing key word
	 * @param      tokenId             missing token id
	 * @param      tokenTypeId         missing token type id
	 */
	private void updateMissingTokens(ArrayList<Token> tokens, String keyWord, int tokenId, int tokenTypeId) {
		for (Token t : tokens)
			if ( (t.tokenTypeId == ConstantValue.NaN) && (t.tokenStr.equals(keyWord))) {
				t.keyWord = keyWord;
				t.tokenId = tokenId;
				t.tokenTypeId = tokenTypeId;
			}
	}
	/**
	 * Update missing tokens in expression related
	 * to iterative operators.
	 *
	 * @param index      Index parameter of the iterative operator
	 * @param iterParams     Parameters list of the iterative operator
	 */
	private void updateMissingTokens(ArgumentParameter index, IterativeOperatorParameters iterParams) {
		if (index.presence == Argument.NOT_FOUND) {
			updateMissingTokens(iterParams.indexParam.tokens, iterParams.indexParam.paramStr, index.index, Argument.TYPE_ID );
			updateMissingTokens(iterParams.fromParam.tokens, iterParams.indexParam.paramStr, index.index, Argument.TYPE_ID );
			updateMissingTokens(iterParams.toParam.tokens, iterParams.indexParam.paramStr, index.index, Argument.TYPE_ID );
			updateMissingTokens(iterParams.funParam.tokens, iterParams.indexParam.paramStr, index.index, Argument.TYPE_ID );
		}
	}
	/**
	 * Evaluates ranges 'from', 'to', 'delta' for the iterative operator
	 *
	 * @param index      Index parameter of the iterative operator
	 * @param iterParams     Parameters list of the iterative operator
	 */
	private void evalFromToDeltaParameters(ArgumentParameter index, IterativeOperatorParameters iterParams) {
		/*
		 * Create from, to, fun expression
		 * based on the from string
		 *    expressions will use the same arguments list
		 *    as used in the main expression (this.argumentsList)
		 */
		iterParams.fromExp = new Expression(iterParams.fromParam.paramStr, iterParams.fromParam.tokens, argumentsList, functionsList, constantsList, KEEP_ULP_ROUNDING_SETTINGS);
		iterParams.toExp = new Expression(iterParams.toParam.paramStr, iterParams.toParam.tokens, argumentsList, functionsList, constantsList, KEEP_ULP_ROUNDING_SETTINGS);
		iterParams.funExp = new Expression(iterParams.funParam.paramStr, iterParams.funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		iterParams.deltaExp = null;
		if (verboseMode == true) {
			iterParams.fromExp.setVerboseMode();
			iterParams.toExp.setVerboseMode();
			iterParams.funExp.setVerboseMode();
		}
		/*
		 * Evaluate range
		 */
		iterParams.from = iterParams.fromExp.calculate();
		iterParams.to = iterParams.toExp.calculate();
		iterParams.delta = 1.0;
		if (iterParams.to < iterParams.from) iterParams.delta = -1.0;
		if (iterParams.withDelta == true) {
			iterParams.deltaExp = new Expression(iterParams.deltaParam.paramStr, iterParams.deltaParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
			if (index.presence == Argument.NOT_FOUND) {
				updateMissingTokens(iterParams.deltaParam.tokens, iterParams.indexParam.paramStr, index.index, Argument.TYPE_ID );
			}
			if (verboseMode == true)
				iterParams.deltaExp.setVerboseMode();
			iterParams.delta = iterParams.deltaExp.calculate();
		}
	}
	/**
	 * Summation operator (SIGMA by)
     * sum(i,m,n,f(i),b) --> sum f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     *
	 * @param      pos                 the token position
	 */
	private void SUM(int pos) {
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( getFunctionParameters(pos, tokensList) );
		ArgumentParameter index = getParamArgument(iterParams.indexParam.paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double sigma = NumberTheory.sigmaSummation(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, sigma, true);
	}
	/**
	 * Product operator (SIGMA by)
     * pord(i,m,n,f(i),b) --> prod f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     *
	 * @param      pos                 the token position
	 */
	private void PROD(int pos) {
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( getFunctionParameters(pos, tokensList) );
		ArgumentParameter index = getParamArgument(iterParams.indexParam.paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double product = NumberTheory.piProduct(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, product, true);
	}
	/**
	 * Minimum value - iterative operator
     * mini(i,m,n,f(i),b) --> min f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     *
	 * @param      pos                 the token position
	 */
	private void MIN(int pos) {
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( getFunctionParameters(pos, tokensList) );
		ArgumentParameter index = getParamArgument(iterParams.indexParam.paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double min = NumberTheory.min(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, min);
	}
	/**
	 * Maximum value - iterative operator
     * maxi(i,m,n,f(i),b) --> max f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     *
	 * @param      pos                 the token position
	 */
	private void MAX(int pos) {
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( getFunctionParameters(pos, tokensList) );
		ArgumentParameter index = getParamArgument(iterParams.indexParam.paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double max = NumberTheory.max(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, max);
	}
	/**
	 * Average function value - iterative operator
     * avg(i,m,n,f(i),b) --> avg f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     *
	 * @param      pos                 the token position
	 */
	private void AVG(int pos) {
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( getFunctionParameters(pos, tokensList) );
		ArgumentParameter index = getParamArgument(iterParams.indexParam.paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double avg = Statistics.avg(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, avg, true);
	}
	/**
	 * Variance from sample function values - iterative operator
     * vari(i,m,n,f(i),b) --> var f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     *
	 * @param      pos                 the token position
	 */
	private void VAR(int pos) {
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( getFunctionParameters(pos, tokensList) );
		ArgumentParameter index = getParamArgument(iterParams.indexParam.paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double var = Statistics.var(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, var, true);
	}
	/**
	 * Standard deviation from sample function values - iterative operator
     * stdi(i,m,n,f(i),b) --> std f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     *
	 * @param      pos                 the token position
	 */
	private void STD(int pos) {
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( getFunctionParameters(pos, tokensList) );
		ArgumentParameter index = getParamArgument(iterParams.indexParam.paramStr);
		updateMissingTokens(index, iterParams);
		evalFromToDeltaParameters(index, iterParams);
		double std = Statistics.std(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
		clearParamArgument(index);
		calcSetDecreaseRemove(pos, std, true);
	}
	/**
	 * Function derivative
	 *
	 * @param      pos                 the token position
	 * @param      derivativeType      the type of derivative (LEFT, RIGHT, ...)
	 */
	private void DERIVATIVE(int pos, int derivativeType) {
		ArrayList<FunctionParameter> derParams = getFunctionParameters(pos, tokensList);
		/*
		 * Default epsilon
		 */
		final double DEF_EPS		= 1E-8;
		/*
		 * Default max number of steps
		 */
		final int DEF_MAX_STEPS		= 20;
		/*
		 * Get internal function strinng
		 * 1th - parameter
		 */
		FunctionParameter funParam = derParams.get(0);
		/*
		 * Get argument
		 * 2nd - parameter
		 */
		FunctionParameter xParam = derParams.get(1);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		if (x.presence == Argument.NOT_FOUND) {
			updateMissingTokens(xParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			updateMissingTokens(funParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
		}
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		double x0 = x.argument.getArgumentValue();
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		if (derParams.size() == 4) {
			FunctionParameter epsParam = derParams.get(2);
			FunctionParameter maxStepsParam = derParams.get(3);
			if (x.presence == Argument.NOT_FOUND) {
				updateMissingTokens(epsParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
				updateMissingTokens(maxStepsParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			}
			Expression epsExpr = new Expression(epsParam.paramStr, epsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
			Expression maxStepsExp = new Expression(maxStepsParam.paramStr, maxStepsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
			eps = epsExpr.calculate();
			maxSteps = (int)Math.round(maxStepsExp.calculate());
		}
		if (derivativeType == Calculus.GENERAL_DERIVATIVE) {
			double general = Calculus.derivative(funExp, x.argument, x0, Calculus.GENERAL_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, general);
		} else if (derivativeType == Calculus.LEFT_DERIVATIVE) {
			double left = Calculus.derivative(funExp, x.argument, x0, Calculus.LEFT_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, left);
		} else {
			double right = Calculus.derivative(funExp, x.argument, x0, Calculus.RIGHT_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, right);
		}
		clearParamArgument(x);
	}
	/**
	 * Function derivative
	 *
	 * @param      pos                 the token position
	 * @param      derivativeType      the type of derivative (left, right, etc...)
	 */
	private void DERIVATIVE_NTH(int pos, int derivativeType) {
		final double DEF_EPS		= 1E-6;
		/*
		 * Default max number of steps
		 */
		final int DEF_MAX_STEPS		= 20;
		ArrayList<FunctionParameter> derParams = getFunctionParameters(pos, tokensList);
		/*
		 * Get internal function strinng
		 * 1st - parameter
		 */
		FunctionParameter funParam = derParams.get(0);
		/*
		 * Get n-th
		 * 2nd - parameter
		 */
		FunctionParameter nParam = derParams.get(1);
		/*
		 * Get argument
		 * 3rd - parameter
		 */
		FunctionParameter xParam = derParams.get(2);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		if (x.presence == Argument.NOT_FOUND) {
			updateMissingTokens(xParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			updateMissingTokens(funParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			updateMissingTokens(nParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
		}
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		Expression nExp = new Expression(nParam.paramStr, nParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		double n = nExp.calculate();
		double x0 = x.argument.getArgumentValue();
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		if (derParams.size() == 5) {
			FunctionParameter epsParam = derParams.get(3);
			FunctionParameter maxStepsParam = derParams.get(4);
			if (x.presence == Argument.NOT_FOUND) {
				updateMissingTokens(epsParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
				updateMissingTokens(maxStepsParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			}
			Expression epsExpr = new Expression(epsParam.paramStr, epsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
			Expression maxStepsExp = new Expression(maxStepsParam.paramStr, maxStepsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
			eps = epsExpr.calculate();
			maxSteps = (int)Math.round(maxStepsExp.calculate());
		}
		if (derivativeType == Calculus.GENERAL_DERIVATIVE) {
			double left = Calculus.derivativeNth(funExp, n, x.argument, x0, Calculus.LEFT_DERIVATIVE, eps, maxSteps);
			double right = Calculus.derivativeNth(funExp, n, x.argument, x0, Calculus.RIGHT_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, (left + right) / 2.0);
		} else if (derivativeType == Calculus.LEFT_DERIVATIVE) {
			double left = Calculus.derivativeNth(funExp, n, x.argument, x0, Calculus.LEFT_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, left);
		} else {
			double right = Calculus.derivativeNth(funExp, n, x.argument, x0, Calculus.RIGHT_DERIVATIVE, eps, maxSteps);
			calcSetDecreaseRemove(pos, right);
		}
		clearParamArgument(x);
	}
	/**
	 * Function integral
	 *
	 * @param      pos                 the token position
	 */
	private void INTEGRAL(int pos) {
		/**
		 * Default epsilon
		 */
		final double DEF_EPS		= 1E-6;
		/*
		 * Default max number of steps
		 */
		final int DEF_MAX_STEPS		= 20;
		ArrayList<FunctionParameter> intParams = getFunctionParameters(pos, tokensList);
		/*
		 * Get internal function strinng
		 * 1th - parameter
		 */
		FunctionParameter funParam = intParams.get(0);
		/*
		 * Get argument
		 * 2nd - parameter
		 */
		FunctionParameter xParam = intParams.get(1);
		/*
		 * Get <a,b>
		 * 2nd - parameter
		 */
		FunctionParameter aParam = intParams.get(2);
		FunctionParameter bParam = intParams.get(3);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		if (x.presence == Argument.NOT_FOUND) {
			updateMissingTokens(xParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			updateMissingTokens(funParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			updateMissingTokens(aParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			updateMissingTokens(bParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
		}
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		Expression aExp = new Expression(aParam.paramStr, aParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		Expression bExp = new Expression(bParam.paramStr, bParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		calcSetDecreaseRemove(pos, Calculus.integralTrapezoid(funExp, x.argument, aExp.calculate(), bExp.calculate(), eps, maxSteps) );
		clearParamArgument(x);
	}
	/**
	 * Forward difference operator
	 *
	 * @param      pos                 the token position
	 */
	private void FORWARD_DIFFERENCE(int pos) {
		ArrayList<FunctionParameter> params = getFunctionParameters(pos, tokensList);
		FunctionParameter funParam = params.get(0);
		FunctionParameter xParam = params.get(1);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		if (verboseMode == true)
			funExp.setVerboseMode();
		double h = 1;
		if (params.size() == 3) {
			FunctionParameter hParam = params.get(2);
			Expression hExp = new Expression(hParam.paramStr, hParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
			if (verboseMode == true)
				hExp.setVerboseMode();
			h = hExp.calculate();
		}
		calcSetDecreaseRemove(pos, Calculus.forwardDifference(funExp, h, x.argument) );
		clearParamArgument(x);
	}
	/**
	 * Backward diffrence operator
	 *
	 * @param      pos                 the token position
	 */
	private void BACKWARD_DIFFERENCE(int pos) {
		ArrayList<FunctionParameter> params = getFunctionParameters(pos, tokensList);
		FunctionParameter funParam = params.get(0);
		FunctionParameter xParam = params.get(1);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
		if (verboseMode == true)
			funExp.setVerboseMode();
		double h = 1;
		if (params.size() == 3) {
			FunctionParameter hParam = params.get(2);
			Expression hExp = new Expression(hParam.paramStr, hParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING);
			if (verboseMode == true)
				hExp.setVerboseMode();
			h = hExp.calculate();
		}
		calcSetDecreaseRemove(pos, Calculus.backwardDifference(funExp, h, x.argument) );
		clearParamArgument(x);
	}
	/**
	 * Minimum variadic
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void MIN_VARIADIC(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.min( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Maximum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void MAX_VARIADIC(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.max( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Sum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void SUM_VARIADIC(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.sum( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Sum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void PROD_VARIADIC(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.prod( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Average variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void AVG_VARIADIC(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, Statistics.avg( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Variance variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void VAR_VARIADIC(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, Statistics.var( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Standard deviation variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void STD_VARIADIC(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, Statistics.std( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Continued fraction
	 *
	 * @param      pos                 the token position
	 */
	private void CONTINUED_FRACTION(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, MathFunctions.continuedFraction( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Continued polynomial
	 *
	 * @param      pos                 the token position
	 */
	private void CONTINUED_POLYNOMIAL(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, MathFunctions.continuedPolynomial( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Greates Common Divisor
	 *
	 * @param      pos                 the token position
	 */
	private void GCD(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.gcd( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Lowest Common Multiply
	 *
	 * @param      pos                 the token position
	 */
	private void LCM(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.lcm( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Random number from list
	 *
	 * @param      pos                 the token position
	 */
	private void RND_LIST(int pos) {
		ArrayList<Double> numbers = getNumbers(pos);
		int n = numbers.size();
		int i = ProbabilityDistributions.rndIndex(n, ProbabilityDistributions.randomGenerator);
		variadicSetDecreaseRemove(pos, numbers.get(i), numbers.size() );
	}
	/**
	 * Parser symbols
	 * Removes comma
	 *
	 * @param pos token index (position)
	 */
	private void COMMA(int pos) {
		tokensList.remove(pos);
	}
	/**
	 * Parser symbols
	 * Removes parenthesis
	 *
	 * @param lPos    left token index (position)
	 * @param rPos    roght token index (position)
	 */
	private void PARENTHESES(int lPos, int rPos) {
		for (int p = lPos; p <= rPos; p++)
			tokensList.get(p).tokenLevel--;
		tokensList.remove(rPos);
		tokensList.remove(lPos);
	}
	/*=================================================
	 *
	 * Syntax checking and calculate() method
	 *
	 *=================================================
	 */
	/**
	 * Checks syntax of the expression string.
	 *
	 * @return     true if syntax is ok
	 */
	public boolean checkSyntax() {
		boolean syntax = checkSyntax("[" + expressionString + "] ");
		return syntax;
	}
	/**
	 * Checks syntax of the calculus parameter
	 *
	 * @return     true if syntax is ok
	 */
	private int checkCalculusParameter(String param) {
		int errors = 0;
		for (KeyWord kw : keyWordsList)
			if (kw.wordTypeId != Argument.TYPE_ID)
				if ( param.equals(kw.wordString) )
					errors++;
		return errors;
	}
	/**
	 * Checks if argument given in the function parameter is known
	 * in the expression.
	 *
	 * @param      param               the function parameter
	 *
	 * @return     true if argument is known,
	 *             otherwise returns false.
	 */
	private boolean checkIfKnownArgument(FunctionParameter param) {
		if (param.tokens.size() > 1)
			return false;
		Token t = param.tokens.get(0);
		if (t.tokenTypeId != Argument.TYPE_ID)
			return false;
		return true;
	}
	/**
	 * Checks if token is uknown
	 *
	 * @param      param               the function parameter
	 *
	 * @return     true if there is only 1 token with unknown type,
	 *             otherwise returns false.
	 */
	private boolean checkIfUnknownToken(FunctionParameter param) {
		if (param.tokens.size() > 1)
			return false;
		Token t = param.tokens.get(0);
		if (t.tokenTypeId != ConstantValue.NaN)
			return false;
		return true;
	}
	/**
	 * Checking the syntax (recursively).
	 *
	 * @param      level               string representing the recurssion level.
	 * @return     true if syntax was correct,
	 *             otherwise returns false.
	 */
	private boolean checkSyntax(String level) {
		if ( (expressionWasModified == false) && (syntaxStatus == NO_SYNTAX_ERRORS) ) {
			errorMessage = level + "already checked - no errors!\n";
			recursionCallPending = false;
			return NO_SYNTAX_ERRORS;
		}
		recursionCallPending = true;
		errorMessage = level +"checking ...\n";
		boolean syntax = NO_SYNTAX_ERRORS;
		SyntaxChecker syn = new SyntaxChecker(new ByteArrayInputStream(expressionString.getBytes()));
	    try {
	        syn.checkSyntax();
	        /*
	         * IF there are no lex error
	         */
			tokenizeExpressionString();
			/*
			 * Duplicated tokens?
			 */
			String kw1;
			String kw2;
			java.util.Collections.sort(keyWordsList, new KwStrComparator() );
			for (int kwId = 1; kwId < keyWordsList.size(); kwId++) {
				kw1 = keyWordsList.get(kwId-1).wordString;
				kw2 = keyWordsList.get(kwId).wordString;
				if ( kw1.equals(kw2) ) {
					syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
					errorMessage = errorMessage + level + "(" + kw1 + ") Duplicated <KEYWORD>.\n";
				}
			}
			int tokensNumber = initialTokens.size();
			Stack<SyntaxStackElement> syntaxStack = new Stack<SyntaxStackElement>();
			SyntaxStackElement stackElement;
			for (int tokenIndex = 0; tokenIndex < tokensNumber; tokenIndex++ ) {
				Token t = initialTokens.get(tokenIndex);
				String tokenStr = "(" + t.tokenStr +", " + tokenIndex + ") ";
				/*
				 * Check syntax for "ARGUMENT" token
				 */
				if (t.tokenTypeId == Argument.TYPE_ID) {
					Argument arg = getArgument(t.tokenId);
					if ( arg.getArgumentType() == Argument.DEPENDENT_ARGUMENT ) {
						if (getParametersNumber(tokenIndex) >= 0 ) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "<ARGUMENT> was expected.\n";
						} else
							if ( (arg.argumentExpression != this) && (arg.argumentExpression.recursionCallPending == false) ) {
								boolean syntaxRec = arg.argumentExpression.checkSyntax(level + "-> " + "[" + t.tokenStr + "] = [" + arg.argumentExpression.getExpressionString() + "] ");
								syntax = syntax && syntaxRec;
								errorMessage = errorMessage + level + tokenStr + "checking dependent argument ...\n" + arg.argumentExpression.getErrorMessage();
							}
					}
				}
				/*
				 * Check syntax for "RECURSIVE ARGUMENT" token
				 */
				if (t.tokenTypeId == RecursiveArgument.TYPE_ID_RECURSIVE) {
					Argument arg = getArgument(t.tokenId);
					if (getParametersNumber(tokenIndex) != 1 ) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<RECURSIVE_ARGUMENT> expecting 1 parameter.\n";
					} else
						if ( (arg.argumentExpression != this) && (arg.argumentExpression.recursionCallPending == false) ) {
							boolean syntaxRec = arg.argumentExpression.checkSyntax(level + "-> " + "[" + t.tokenStr + "] = [" + arg.argumentExpression.getExpressionString() + "] ");
							syntax = syntax && syntaxRec;
							errorMessage = errorMessage + level + tokenStr + "checking recursive argument ...\n" + arg.argumentExpression.getErrorMessage();
						}
				}
				/*
				 * Check syntax for "NOT RECOGNIZED" token
				 */
				if (t.tokenTypeId == ConstantValue.NaN) {
					boolean calculusToken = false;
					for (SyntaxStackElement e : syntaxStack)
						if ( e.tokenStr.equals(t.tokenStr) )
							calculusToken = true;
					if (!calculusToken) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "invalid <TOKEN>.\n";
					}
				}
				/*
				 * Check syntax for "USER DEFINED FUNCTION" token
				 */
				if (t.tokenTypeId == Function.TYPE_ID) {
					Function fun = getFunction(t.tokenId);
					fun.checkRecursiveMode();
					if ( fun.getParametersNumber() != getParametersNumber(tokenIndex) ) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<USER_DEFINED_FUNCTION> expecting " + fun.getParametersNumber() + " arguments.\n";
					} else
						if ( (fun.functionExpression != this) && (fun.functionExpression.recursionCallPending == false) ) {
							boolean syntaxRec = fun.functionExpression.checkSyntax(level + "-> " + "[" + t.tokenStr + "] = [" + fun.functionExpression.getExpressionString() + "] ");
							syntax = syntax && syntaxRec;
							errorMessage = errorMessage + level + tokenStr + "checking user defined function ...\n" + fun.functionExpression.getErrorMessage();
						}
				}
				/*
				 * Check syntax for "CONSTANT" token
				 */
				if (t.tokenTypeId == ConstantValue.TYPE_ID) {
					if ( getParametersNumber(tokenIndex) >= 0 ) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<CONSTANT> was expected.\n";
					}
				}
				/*
				 * Check syntax for "USER DEFINED CONSTANT" token
				 */
				if (t.tokenTypeId == Constant.TYPE_ID) {
					if ( getParametersNumber(tokenIndex) >= 0 ) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<USER_DEFINED_CONSTANT> was expected.\n";
					}
				}
				/*
				 * Check syntax for "UNARY FUNCTION" token
				 */
				if (t.tokenTypeId == Function1Arg.TYPE_ID) {
					if ( getParametersNumber(tokenIndex) != 1 ) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<FUNCTION> expecting 1 argument.\n";
					}
				}
				/*
				 * Check syntax for "BINARY FUNCTION" token
				 */
				if (t.tokenTypeId == Function2Arg.TYPE_ID) {
					if ( getParametersNumber(tokenIndex) != 2 ) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<FUNCTION> expecting 2 arguments.\n";
					}
				}
				/*
				 * Check syntax for "3 args FUNCTION" token
				 */
				if (t.tokenTypeId == Function3Arg.TYPE_ID) {
					if ( getParametersNumber(tokenIndex) != 3 ) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<FUNCTION> expecting 3 arguments.\n";
					}
				}
				/*
				 * Check syntax for "CALCULUS OPERATOR" token
				 */
				if (t.tokenTypeId == CalculusOperator.TYPE_ID) {
					int paramsNumber = getParametersNumber(tokenIndex);
					ArrayList<FunctionParameter> funParams = null;
					if (paramsNumber > 0)
						funParams = getFunctionParameters(tokenIndex, initialTokens);
					if ( (t.tokenId == CalculusOperator.DER_ID) || (t.tokenId == CalculusOperator.DER_LEFT_ID) || (t.tokenId == CalculusOperator.DER_RIGHT_ID) )  {
						if ( (paramsNumber !=2) && (paramsNumber != 4) ) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "<DERIVATIVE> expecting 2 or 4 calculus arguments.\n";
						} else {
							FunctionParameter argParam = funParams.get(1);
							if ( checkIfKnownArgument(argParam) == false) {
								syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
								errorMessage = errorMessage + level + tokenStr + "<DERIVATIVE> argument was expected.\n";
							}
						}
					}
					if (t.tokenId == CalculusOperator.DERN_ID) {
						if ( (paramsNumber !=3) && (paramsNumber != 5) ) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "<NTH_DERIVATIVE> expecting 3 or 5 calculus arguments.\n";
						} else {
							FunctionParameter argParam = funParams.get(2);
							if ( checkIfKnownArgument(argParam) == false) {
								syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
								errorMessage = errorMessage + level + tokenStr + "<DERIVATIVE> argument was expected.\n";
							}
						}
					}
					if (t.tokenId == CalculusOperator.INT_ID) {
						if (paramsNumber !=4) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "<INTEGRAL> expecting 4 calculus arguments.\n";
						} else {
							FunctionParameter argParam = funParams.get(1);
							stackElement = new SyntaxStackElement(argParam.paramStr, t.tokenLevel+1);
							syntaxStack.push(stackElement);
							int errors = checkCalculusParameter(stackElement.tokenStr);
							if (errors > 0) {
								syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
								errorMessage = errorMessage + level + tokenStr + "Found duplicated key words for calculus parameter " + "(" + stackElement.tokenStr + ", " + errors + ").\n";
							}
							if ( !checkIfKnownArgument(argParam) && !checkIfUnknownToken(argParam) ) {
								syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
								errorMessage = errorMessage + level + tokenStr + "One token (argument or unknown) was expected.\n";
							}
						}
					}
					if ( 	(t.tokenId == CalculusOperator.PROD_ID) ||
							(t.tokenId == CalculusOperator.SUM_ID)  ||
							(t.tokenId == CalculusOperator.MIN_ID)  ||
							(t.tokenId == CalculusOperator.MAX_ID)  ||
							(t.tokenId == CalculusOperator.AVG_ID)  ||
							(t.tokenId == CalculusOperator.VAR_ID)  ||
							(t.tokenId == CalculusOperator.STD_ID)
															) {
						if ( (paramsNumber != 4) && (paramsNumber != 5) ) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "<ITER_OPERATOR> expecting 4 or 5 calculus arguments.\n";
						} else {
							FunctionParameter indexParam = funParams.get(0);
							stackElement = new SyntaxStackElement(indexParam.paramStr, t.tokenLevel+1);
							syntaxStack.push(stackElement);
							int errors = checkCalculusParameter(stackElement.tokenStr);
							if (errors > 0) {
								syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
								errorMessage = errorMessage + level + tokenStr + "Found duplicated key words for calculus parameter " + "(" + stackElement.tokenStr + ", " + errors + ").\n";
							}
							if ( !checkIfKnownArgument(indexParam) && !checkIfUnknownToken(indexParam) ) {
								syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
								errorMessage = errorMessage + level + tokenStr + "One token (argument or unknown) was expected.\n";
							}
						}
					}
					if ( (t.tokenId == CalculusOperator.FORW_DIFF_ID) || (t.tokenId == CalculusOperator.BACKW_DIFF_ID) ) {
						if ( (paramsNumber != 2) && (paramsNumber != 3) ) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "<DIFF> expecting 2 or 3 arguments.\n";
						} else {
							FunctionParameter xParam = funParams.get(1);
							if ( checkIfKnownArgument(xParam) == false) {
								syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
								errorMessage = errorMessage + level + tokenStr + "<DIFF> argument was expected.\n";
							}
						}
					}
				}
				/*
				 * Check syntax for "VARIADIC FUNCTION" token
				 */
				if (t.tokenTypeId == FunctionVariadic.TYPE_ID) {
					int paramsNumber = getParametersNumber(tokenIndex);
					if (paramsNumber < 1) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "At least one argument was expected.\n";
					}
					if (t.tokenId == FunctionVariadic.IFF_ID) {
						if ( (paramsNumber % 2 != 0) || (paramsNumber < 2) ) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "Expecting parity number of arguments.\n";
						}
					}
				}
				if ( (t.tokenTypeId == ParserSymbol.TYPE_ID) && (t.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID) ) {
					if ( syntaxStack.size() > 0 )
						if (t.tokenLevel == syntaxStack.lastElement().tokenLevel )
							syntaxStack.pop();
				}
			}
	    } catch (Exception e) {
	    	syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
			errorMessage =  errorMessage + level + "lexical error \n\n" + e.getMessage() + "\n";
	    }
		if (syntax == NO_SYNTAX_ERRORS) {
			errorMessage = errorMessage + level + "no errors.\n";
			expressionWasModified = false;
		} else {
			errorMessage = errorMessage + level + "errors were found.\n";
			expressionWasModified = true;
		}
		syntaxStatus = syntax;
		recursionCallPending = false;
		return syntax;
	}
	/**
	 * Calculates the expression value
	 *
	 * @return     The expression value if syntax was ok,
	 *             otherwise returns Double.NaN.
	 */
	public double calculate() {
		computingTime = 0;
		long startTime = System.currentTimeMillis();
		if (verboseMode == true) {
			printSystemInfo("\n", NO_EXP_STR);
			printSystemInfo("\n", WITH_EXP_STR);
			printSystemInfo("Starting ...\n", WITH_EXP_STR);
			showArguments();
		}
		/*
		 * check expression syntax and
		 * evaluate expression string tokens
		 *
		 */
		if ( (expressionWasModified == true) || (syntaxStatus != NO_SYNTAX_ERRORS) )
				syntaxStatus = checkSyntax();
		if ( syntaxStatus == SYNTAX_ERROR_OR_STATUS_UNKNOWN)
			return Double.NaN;
		copyInitialTokens();
		/*
		 * if nothing to calculate return Double.NaN
		 */
		if (tokensList.size() == 0)
				return Double.NaN;
		/*
		 * position for particular tokens types
		 */
		int calculusPos;
		int ifPos;
		int iffPos;
		int variadicFunPos;
		int recArgPos;
		int f3ArgPos;
		int f2ArgPos;
		int f1ArgPos;
		int userFunPos;
		int plusPos;
		int minusPos;
		int multiplyPos;
		int dividePos;
		int powerPos;
		int powerNum;
		int factPos;
		int modPos;
		int negPos;
		int bolPos;
		int eqPos;
		int neqPos;
		int ltPos;
		int gtPos;
		int leqPos;
		int geqPos;
		int commaPos;
		int lParPos;
		int rParPos;
		Token token;
		int tokensNumber;
		int maxPartLevel;
		int lPos;
		int rPos;
		int tokenIndex;
		int pos;
		int p;
		ArrayList<Integer> commas = null;
		/* While exist token which needs to bee evaluated */
		do {
			tokensNumber = tokensList.size();
			maxPartLevel = -1;
			lPos = -1;
			rPos = -1;
			/*
			 * initializing tokens types positions
			 */
			calculusPos = -1;
			ifPos = -1;
			iffPos = -1;
			variadicFunPos = -1;
			recArgPos = -1;
			f3ArgPos = -1;
			f2ArgPos = -1;
			f1ArgPos = -1;
			userFunPos = -1;
			plusPos = -1;
			minusPos = -1;
			multiplyPos = -1;
			dividePos = -1;
			powerPos = -1;
			factPos = -1;
			modPos = -1;
			powerNum = 0;
			negPos = -1;
			bolPos = -1;
			eqPos = -1;
			neqPos = -1;
			ltPos = -1;
			gtPos = -1;
			leqPos = -1;
			geqPos = -1;
			commaPos = -1;
			lParPos = -1;
			rParPos = -1;
			tokensNumber = tokensList.size();
			/* calculus operations ... */
			p = -1;
			do {
				p++;
				token = tokensList.get(p);
				if (token.tokenTypeId == CalculusOperator.TYPE_ID)
					calculusPos = p;
			} while ( (p < tokensNumber-1 ) && (calculusPos < 0) );
			/* if operations ... */
			if (calculusPos < 0) {
				p = -1;
				do {
					p++;
					token = tokensList.get(p);
					if ( (token.tokenTypeId == Function3Arg.TYPE_ID) && (token.tokenId == Function3Arg.IF_CONDITION_ID) )
						ifPos = p;
				} while ( (p < tokensNumber-1 ) && (ifPos < 0) );
			}
			/* iff operations ... */
			if ( (calculusPos < 0) && (ifPos < 0) ) {
				p = -1;
				do {
					p++;
					token = tokensList.get(p);
					if ( (token.tokenTypeId == FunctionVariadic.TYPE_ID) && (token.tokenId == FunctionVariadic.IFF_ID) )
						iffPos = p;
				} while ( (p < tokensNumber-1 ) && (iffPos < 0 ) );
			}
			if ( (calculusPos < 0) && (ifPos < 0) && (iffPos < 0) ){
				/* Find start index of the tokens with the highest level */
				for (tokenIndex=0; tokenIndex<tokensNumber; tokenIndex++) {
					token = tokensList.get(tokenIndex);
					if (token.tokenLevel > maxPartLevel) {
						maxPartLevel = tokensList.get(tokenIndex).tokenLevel;
						lPos = tokenIndex;
					}
					if (token.tokenTypeId == Argument.TYPE_ID)
						ARGUMENT(tokenIndex);
					else if (token.tokenTypeId == ConstantValue.TYPE_ID)
						CONSTANT(tokenIndex);
					else if (token.tokenTypeId == Constant.TYPE_ID)
						USER_CONSTANT(tokenIndex);
					else if (token.tokenTypeId == RandomVariable.TYPE_ID)
						RANDOM_VARIABLE(tokenIndex);
				}
				tokenIndex = lPos;
				/* Find end index of the tokens with the highest level */
				while ( (tokenIndex < tokensNumber) && (maxPartLevel == tokensList.get(tokenIndex).tokenLevel ) )
					tokenIndex++;
				rPos = tokenIndex - 1;
				if (verboseMode == true) {
					printSystemInfo("Parsing (" + lPos + ", " + rPos + ") ", WITH_EXP_STR);
					showParsing(lPos,rPos);
				}
				/* if no calculus operations were found
				 * check for other tokens
				 */
				for (pos = lPos; pos <= rPos; pos++) {
					token = tokensList.get(pos);
					if ((token.tokenTypeId == RecursiveArgument.TYPE_ID_RECURSIVE) && (recArgPos < 0))
						recArgPos = pos;
					else
					if ((token.tokenTypeId == FunctionVariadic.TYPE_ID) && (variadicFunPos < 0))
						variadicFunPos = pos;
					else
					if ((token.tokenTypeId == Function3Arg.TYPE_ID) && (f3ArgPos < 0))
						f3ArgPos = pos;
					else
					if ((token.tokenTypeId == Function2Arg.TYPE_ID) && (f2ArgPos < 0))
						f2ArgPos = pos;
					else
					if ((token.tokenTypeId == Function1Arg.TYPE_ID) && (f1ArgPos < 0))
						f1ArgPos = pos;
					else
					if ((token.tokenTypeId == Function.TYPE_ID) && (userFunPos < 0))
						userFunPos = pos;
					else
					if (token.tokenTypeId == Operator.TYPE_ID) {
						if (token.tokenId == Operator.POWER_ID) {
							powerPos = pos;
							powerNum++;
						} else
						if ( (token.tokenId == Operator.FACT_ID) && (factPos < 0) ) {
							factPos = pos;
						} else
						if ( (token.tokenId == Operator.MOD_ID) && (modPos < 0) ) {
							modPos = pos;
						} else
						if ( (token.tokenId == Operator.PLUS_ID)  && (plusPos < 0))
							plusPos = pos;
						else
						if ( (token.tokenId == Operator.MINUS_ID)  && (minusPos < 0))
							minusPos = pos;
						else
						if ( (token.tokenId == Operator.MULTIPLY_ID) && (multiplyPos < 0))
							multiplyPos = pos;
						else
						if ( (token.tokenId == Operator.DIVIDE_ID) && (dividePos < 0))
							dividePos = pos;
					} else
					if ( (token.tokenTypeId == BooleanOperator.TYPE_ID) && (token.tokenId == BooleanOperator.NEG_ID) && (negPos < 0) ) {
						negPos = pos;
					} else
					if ( (token.tokenTypeId == BooleanOperator.TYPE_ID) && (bolPos < 0) ) {
						bolPos = pos;
					} else
					if (token.tokenTypeId == BinaryRelation.TYPE_ID) {
						if ( (token.tokenId == BinaryRelation.EQ_ID) && (eqPos < 0) )
							eqPos = pos;
						else
						if ( (token.tokenId == BinaryRelation.NEQ_ID) && (neqPos < 0))
							neqPos = pos;
						else
						if ( (token.tokenId == BinaryRelation.LT_ID) && (ltPos < 0))
							ltPos = pos;
						else
						if ( (token.tokenId == BinaryRelation.GT_ID) && (gtPos < 0))
							gtPos = pos;
						else
						if ( (token.tokenId == BinaryRelation.LEQ_ID) && (leqPos < 0))
							leqPos = pos;
						else
						if ( (token.tokenId == BinaryRelation.GEQ_ID) && (geqPos < 0))
							geqPos = pos;
					} else
					if (token.tokenTypeId == ParserSymbol.TYPE_ID) {
						if ( (token.tokenId == ParserSymbol.COMMA_ID) ) {
							if (commaPos < 0)
								commas = new ArrayList<Integer>();
							commas.add(pos);
							commaPos = pos;
						} else
						if ( (token.tokenId == ParserSymbol.LEFT_PARENTHESES_ID) && (lParPos < 0) )
							lParPos = pos;
						else
						if ( (token.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID) && (rParPos < 0) )
							rParPos = pos;
					}
				}
				/*
				 * powering should be done using backwards sequence
				 */
				if (powerNum > 1) {
					powerPos = -1;
					p = rPos+1;
					do {
						p--;
						token = tokensList.get(p);
						if ( (token.tokenTypeId == Operator.TYPE_ID) && (token.tokenId == Operator.POWER_ID) )
							powerPos = p;
					} while ( (p>lPos) && (powerPos == -1) );
				}
			}
			/* calculus operations */
			if (calculusPos >= 0) calculusCalc(calculusPos);
			else
			if (ifPos >= 0) {
				IF_CONDITION(ifPos);
			} else
			if (iffPos >= 0) {
				IFF(iffPos);
			} else				/* ... arguments ... */
			/* ... recursive arguments ... */
			if (recArgPos >= 0) {
				RECURSIVE_ARGUMENT(recArgPos);
			} else
			/* ... variadic functions  ... */
			if (variadicFunPos >= 0) variadicFunCalc(variadicFunPos);
			else
			/* ... 3-args functions  ... */
			if (f3ArgPos >= 0) f3ArgCalc(f3ArgPos);
			else
			/* ... 2-args functions  ... */
			if (f2ArgPos >= 0) f2ArgCalc(f2ArgPos);
			else
			/* ... 1-arg functions  ... */
			if (f1ArgPos >= 0) f1ArgCalc(f1ArgPos);
			else
			/* ... user functions  ... */
			if (userFunPos >= 0) {
				USER_FUNCTION(userFunPos);
			} else
			/* ... powering  ... */
			if (powerPos >= 0) {
				POWER(powerPos);
			} else
			if (factPos >= 0) {
				FACT(factPos);
			} else
			if (modPos >= 0) {
				MODULO(modPos);
			} else
			if (negPos >= 0) {
				NEG(negPos);
			} else
			/* ... arithmetical operators  ... */
			if ( (multiplyPos >= 0) || (dividePos >= 0) ) {
				if ( (multiplyPos >= 0) && (dividePos >= 0) )
					if (multiplyPos <= dividePos)
						MULTIPLY(multiplyPos);
					else
						DIVIDE(dividePos);
				else
					if (multiplyPos >= 0)
						MULTIPLY(multiplyPos);
					else
						DIVIDE(dividePos);
			} else
			if ( (minusPos >= 0) || (plusPos >= 0) ) {
				if ( (minusPos >= 0) && (plusPos >= 0) )
					if (minusPos <= plusPos)
						MINUS(minusPos);
					else
						PLUS(plusPos);
				else
					if (minusPos >= 0)
						MINUS(minusPos);
					else
						PLUS(plusPos);
			} else
			if (neqPos >= 0) {
				NEQ(neqPos);
			} else
			/* ... binary relations ... */
			if (eqPos >= 0) {
				EQ(eqPos);
			} else
			if (ltPos >= 0) {
				LT(ltPos);
			} else
			if (gtPos >= 0) {
				GT(gtPos);
			} else
			if (leqPos >= 0) {
				LEQ(leqPos);
			} else
			if (geqPos >= 0) {
				GEQ(geqPos);
			} else
			if (commaPos >= 0) {
				for (int i = commas.size()-1; i >= 0; i--)
					COMMA( commas.get(i) );
			} else
			/* ... logical operators  ... */
			if (bolPos >= 0) bolCalc(bolPos);
			else
			if ( (lParPos >= 0) && (rParPos > lParPos) ) {
				PARENTHESES(lParPos,rParPos);
			} else if (tokensList.size() > 1) {
				this.errorMessage = errorMessage + "\n" + "[" + description + "][" + expressionString + "] " + "Fatal error - not know what to do with tokens while calculate().";
			}
			if (verboseMode == true) {
				showParsing(0,tokensList.size()-1);
				printSystemInfo(" done\n", NO_EXP_STR);
			}
		} while (tokensList.size() > 1);
		if (verboseMode == true) {
			printSystemInfo("Calculated value: " + tokensList.get(0).tokenValue + "\n", WITH_EXP_STR);
			printSystemInfo("Exiting\n", WITH_EXP_STR);
			printSystemInfo("\n", NO_EXP_STR);
		}
		long endTime = System.currentTimeMillis();
		computingTime = (endTime - startTime)/1000.0;
		return tokensList.get(0).tokenValue;
	}
	/**
	 * Calculates unary function
	 * @param pos    token position
	 */
	private void f1ArgCalc(int pos) {
		switch (tokensList.get(pos).tokenId) {
		case Function1Arg.SIN_ID: SIN(pos); break;
		case Function1Arg.COS_ID: COS(pos); break;
		case Function1Arg.TAN_ID: TAN(pos); break;
		case Function1Arg.CTAN_ID: CTAN(pos); break;
		case Function1Arg.SEC_ID: SEC(pos); break;
		case Function1Arg.COSEC_ID: COSEC(pos); break;
		case Function1Arg.ASIN_ID: ASIN(pos); break;
		case Function1Arg.ACOS_ID: ACOS(pos); break;
		case Function1Arg.ATAN_ID: ATAN(pos); break;
		case Function1Arg.ACTAN_ID: ACTAN(pos); break;
		case Function1Arg.LN_ID: LN(pos); break;
		case Function1Arg.LOG2_ID: LOG2(pos); break;
		case Function1Arg.LOG10_ID: LOG10(pos); break;
		case Function1Arg.RAD_ID: RAD(pos); break;
		case Function1Arg.EXP_ID: EXP(pos); break;
		case Function1Arg.SQRT_ID: SQRT(pos); break;
		case Function1Arg.SINH_ID: SINH(pos); break;
		case Function1Arg.COSH_ID: COSH(pos); break;
		case Function1Arg.TANH_ID: TANH(pos); break;
		case Function1Arg.COTH_ID: COTH(pos); break;
		case Function1Arg.SECH_ID: SECH(pos); break;
		case Function1Arg.CSCH_ID: CSCH(pos); break;
		case Function1Arg.DEG_ID: DEG(pos); break;
		case Function1Arg.ABS_ID: ABS(pos); break;
		case Function1Arg.SGN_ID: SGN(pos); break;
		case Function1Arg.FLOOR_ID: FLOOR(pos); break;
		case Function1Arg.CEIL_ID: CEIL(pos); break;
		case Function1Arg.NOT_ID: NOT(pos); break;
		case Function1Arg.ARSINH_ID: ARSINH(pos); break;
		case Function1Arg.ARCOSH_ID: ARCOSH(pos); break;
		case Function1Arg.ARTANH_ID: ARTANH(pos); break;
		case Function1Arg.ARCOTH_ID: ARCOTH(pos); break;
		case Function1Arg.ARSECH_ID: ARSECH(pos); break;
		case Function1Arg.ARCSCH_ID: ARCSCH(pos); break;
		case Function1Arg.SA_ID: SA(pos); break;
		case Function1Arg.SINC_ID: SINC(pos); break;
		case Function1Arg.BELL_NUMBER_ID: BELL_NUMBER(pos); break;
		case Function1Arg.LUCAS_NUMBER_ID: LUCAS_NUMBER(pos); break;
		case Function1Arg.FIBONACCI_NUMBER_ID: FIBONACCI_NUMBER(pos); break;
		case Function1Arg.HARMONIC_NUMBER_ID: HARMONIC_NUMBER(pos); break;
		case Function1Arg.IS_PRIME_ID: IS_PRIME(pos); break;
		case Function1Arg.PRIME_COUNT_ID: PRIME_COUNT(pos); break;
		case Function1Arg.EXP_INT_ID: EXP_INT(pos); break;
		case Function1Arg.LOG_INT_ID: LOG_INT(pos); break;
		case Function1Arg.OFF_LOG_INT_ID: OFF_LOG_INT(pos); break;
		case Function1Arg.GAUSS_ERF_ID: GAUSS_ERF(pos); break;
		case Function1Arg.GAUSS_ERFC_ID: GAUSS_ERFC(pos); break;
		case Function1Arg.GAUSS_ERF_INV_ID: GAUSS_ERF_INV(pos); break;
		case Function1Arg.GAUSS_ERFC_INV_ID: GAUSS_ERFC_INV(pos); break;
		case Function1Arg.ULP_ID: ULP(pos); break;
		}
	}
	/**
	 * Calculates binary function
	 * @param pos   Token position
	 */
	private void f2ArgCalc(int pos) {
		switch (tokensList.get(pos).tokenId) {
		case Function2Arg.LOG_ID: LOG(pos); break;
		case Function2Arg.MOD_ID: MOD(pos); break;
		case Function2Arg.BINOM_COEFF_ID: BINOM_COEFF(pos); break;
		case Function2Arg.BERNOULLI_NUMBER_ID: BERNOULLI_NUMBER(pos); break;
		case Function2Arg.STIRLING1_NUMBER_ID: STIRLING1_NUMBER(pos); break;
		case Function2Arg.STIRLING2_NUMBER_ID: STIRLING2_NUMBER(pos); break;
		case Function2Arg.WORPITZKY_NUMBER_ID: WORPITZKY_NUMBER(pos); break;
		case Function2Arg.EULER_NUMBER_ID: EULER_NUMBER(pos); break;
		case Function2Arg.KRONECKER_DELTA_ID: KRONECKER_DELTA(pos); break;
		case Function2Arg.EULER_POLYNOMIAL_ID: EULER_POLYNOMIAL(pos); break;
		case Function2Arg.HARMONIC_NUMBER_ID: HARMONIC2_NUMBER(pos); break;
		case Function2Arg.RND_UNIFORM_CONT_ID: RND_VAR_UNIFORM_CONT(pos); break;
		case Function2Arg.RND_UNIFORM_DISCR_ID: RND_VAR_UNIFORM_DISCR(pos); break;
		case Function2Arg.ROUND_ID: ROUND(pos); break;
		case Function2Arg.RND_NORMAL_ID: RND_NORMAL(pos); break;
		}
	}
	/**
	 * Calculates function with 3 arguments
	 * @param pos   Token position
	 */
	private void f3ArgCalc(int pos) {
		switch (tokensList.get(pos).tokenId) {
		case Function3Arg.IF_ID: IF(pos); break;
		case Function3Arg.CHI_ab_ID: CHI_ab(pos); break;
		case Function3Arg.CHI_AB_ID: CHI_AB(pos); break;
		case Function3Arg.CHI_Ab_ID: CHI_Ab(pos); break;
		case Function3Arg.CHI_aB_ID: CHI_aB(pos); break;
		case Function3Arg.PDF_UNIFORM_CONT_ID: PDF_UNIFORM_CONT(pos); break;
		case Function3Arg.CDF_UNIFORM_CONT_ID: CDF_UNIFORM_CONT(pos); break;
		case Function3Arg.QNT_UNIFORM_CONT_ID: QNT_UNIFORM_CONT(pos); break;
		case Function3Arg.PDF_NORMAL_ID: PDF_NORMAL(pos); break;
		case Function3Arg.CDF_NORMAL_ID: CDF_NORMAL(pos); break;
		case Function3Arg.QNT_NORMAL_ID: QNT_NORMAL(pos); break;
		}
	}
	/**
	 * Calculates Variadic function
	 * @param pos   Token position
	 */
	private void variadicFunCalc(int pos) {
		switch (tokensList.get(pos).tokenId) {
		case FunctionVariadic.IFF_ID: IFF(pos); break;
		case FunctionVariadic.MIN_ID: MIN_VARIADIC(pos); break;
		case FunctionVariadic.MAX_ID: MAX_VARIADIC(pos); break;
		case FunctionVariadic.SUM_ID: SUM_VARIADIC(pos); break;
		case FunctionVariadic.PROD_ID: PROD_VARIADIC(pos); break;
		case FunctionVariadic.AVG_ID: AVG_VARIADIC(pos); break;
		case FunctionVariadic.VAR_ID: VAR_VARIADIC(pos); break;
		case FunctionVariadic.STD_ID: STD_VARIADIC(pos); break;
		case FunctionVariadic.CONT_FRAC_ID: CONTINUED_FRACTION(pos); break;
		case FunctionVariadic.CONT_POL_ID: CONTINUED_POLYNOMIAL(pos); break;
		case FunctionVariadic.GCD_ID: GCD(pos); break;
		case FunctionVariadic.LCM_ID: LCM(pos); break;
		case FunctionVariadic.RND_LIST_ID: RND_LIST(pos); break;
		}
	}
	/**
	 * Calculates calculus operators
	 * @param pos
	 */
	private void calculusCalc(int pos) {
		switch (tokensList.get(pos).tokenId) {
		case CalculusOperator.SUM_ID: SUM(pos); break;
		case CalculusOperator.PROD_ID: PROD(pos); break;
		case CalculusOperator.MIN_ID: MIN(pos); break;
		case CalculusOperator.MAX_ID: MAX(pos); break;
		case CalculusOperator.AVG_ID: AVG(pos); break;
		case CalculusOperator.VAR_ID: VAR(pos); break;
		case CalculusOperator.STD_ID: STD(pos); break;
		case CalculusOperator.INT_ID: INTEGRAL(pos); break;
		case CalculusOperator.DER_ID: DERIVATIVE(pos, Calculus.GENERAL_DERIVATIVE); break;
		case CalculusOperator.DER_LEFT_ID: DERIVATIVE(pos, Calculus.LEFT_DERIVATIVE); break;
		case CalculusOperator.DER_RIGHT_ID: DERIVATIVE(pos, Calculus.RIGHT_DERIVATIVE); break;
		case CalculusOperator.DERN_ID: DERIVATIVE_NTH(pos, Calculus.GENERAL_DERIVATIVE); break;
		case CalculusOperator.FORW_DIFF_ID: FORWARD_DIFFERENCE(pos); break;
		case CalculusOperator.BACKW_DIFF_ID: BACKWARD_DIFFERENCE(pos); break;
		}
	}
	/**
	 * Calculates boolean operators
	 * @param pos
	 */
	private void bolCalc(int pos) {
		switch (tokensList.get(pos).tokenId) {
		case BooleanOperator.AND_ID: AND(pos); break;
		case BooleanOperator.CIMP_ID: CIMP(pos); break;
		case BooleanOperator.CNIMP_ID: CNIMP(pos); break;
		case BooleanOperator.EQV_ID: EQV(pos); break;
		case BooleanOperator.IMP_ID: IMP(pos); break;
		case BooleanOperator.NAND_ID: NAND(pos); break;
		case BooleanOperator.NIMP_ID: NIMP(pos); break;
		case BooleanOperator.NOR_ID: NOR(pos); break;
		case BooleanOperator.OR_ID: OR(pos); break;
		case BooleanOperator.XOR_ID: XOR(pos); break;
		}
	}
	/*=================================================
	 *
	 * Parser methods
	 *
	 *=================================================
	 */
	/**
	 * Creates parseres key words list
	 */
	private void addParserKeyWords() {
		/*
		 * Operators key words
		 */
		addKeyWord(Operator.PLUS_STR, Operator.PLUS_DESC, Operator.PLUS_ID, Operator.TYPE_ID);
		addKeyWord(Operator.MINUS_STR, Operator.MINUS_DESC, Operator.MINUS_ID, Operator.TYPE_ID);
		addKeyWord(Operator.MULTIPLY_STR, Operator.MULTIPLY_DESC, Operator.MULTIPLY_ID, Operator.TYPE_ID);
		addKeyWord(Operator.DIVIDE_STR, Operator.DIVIDE_DESC, Operator.DIVIDE_ID, Operator.TYPE_ID);
		addKeyWord(Operator.POWER_STR, Operator.POWER_DESC, Operator.POWER_ID, Operator.TYPE_ID);
		addKeyWord(Operator.FACT_STR, Operator.FACT_DESC, Operator.FACT_ID, Operator.TYPE_ID);
		addKeyWord(Operator.MOD_STR, Operator.MOD_DESC, Operator.MOD_ID, Operator.TYPE_ID);
		/*
		 * Boolean operators key words
		 */
		addKeyWord(BooleanOperator.AND_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.AND1_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.AND2_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NAND_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NAND1_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NAND2_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.OR_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.OR1_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.OR2_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NOR_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NOR1_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NOR2_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.XOR_STR, BooleanOperator.XOR_DESC, BooleanOperator.XOR_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.IMP_STR, BooleanOperator.IMP_DESC, BooleanOperator.IMP_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NIMP_STR, BooleanOperator.NIMP_DESC, BooleanOperator.NIMP_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.CIMP_STR, BooleanOperator.CIMP_DESC, BooleanOperator.CIMP_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.CNIMP_STR, BooleanOperator.CNIMP_DESC, BooleanOperator.CNIMP_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.EQV_STR, BooleanOperator.EQV_DESC, BooleanOperator.EQV_ID, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NEG_STR, BooleanOperator.NEG_DESC, BooleanOperator.NEG_ID, BooleanOperator.TYPE_ID);
		/*
		 * Binary relations key words
		 */
		addKeyWord(BinaryRelation.EQ_STR, BinaryRelation.EQ_DESC, BinaryRelation.EQ_ID, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.EQ1_STR, BinaryRelation.EQ_DESC, BinaryRelation.EQ_ID, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.NEQ_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.NEQ1_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.NEQ2_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.LT_STR, BinaryRelation.LT_DESC, BinaryRelation.LT_ID, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.GT_STR, BinaryRelation.GT_DESC, BinaryRelation.GT_ID, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.LEQ_STR, BinaryRelation.LEQ_DESC, BinaryRelation.LEQ_ID, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.GEQ_STR, BinaryRelation.GEQ_DESC, BinaryRelation.GEQ_ID, BinaryRelation.TYPE_ID);
		if (parserKeyWordsOnly == false) {
			/*
			 * 1 arg functions key words
			 */
			addKeyWord(Function1Arg.SIN_STR, Function1Arg.SIN_DESC, Function1Arg.SIN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COS_STR, Function1Arg.COS_DESC, Function1Arg.COS_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.TAN_STR, Function1Arg.TAN_DESC, Function1Arg.TAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.TG_STR, Function1Arg.TAN_DESC, Function1Arg.TAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CTAN_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CTG_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COT_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SEC_STR, Function1Arg.SEC_DESC, Function1Arg.SEC_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COSEC_STR, Function1Arg.COSEC_DESC, Function1Arg.COSEC_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CSC_STR, Function1Arg.COSEC_DESC, Function1Arg.COSEC_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ASIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARSIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ATAN_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCTAN_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ATG_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCTG_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACTAN_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCTAN_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACTG_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCTG_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOT_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOT_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LN_STR, Function1Arg.LN_DESC, Function1Arg.LN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LOG2_STR, Function1Arg.LOG2_DESC, Function1Arg.LOG2_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LOG10_STR, Function1Arg.LOG10_DESC, Function1Arg.LOG10_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.RAD_STR, Function1Arg.RAD_DESC, Function1Arg.RAD_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.EXP_STR, Function1Arg.EXP_DESC, Function1Arg.EXP_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SQRT_STR, Function1Arg.SQRT_DESC, Function1Arg.SQRT_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SINH_STR, Function1Arg.SINH_DESC, Function1Arg.SINH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COSH_STR, Function1Arg.COSH_DESC, Function1Arg.COSH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.TANH_STR, Function1Arg.TANH_DESC, Function1Arg.TANH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.TGH_STR, Function1Arg.TANH_DESC, Function1Arg.TANH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CTANH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COTH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CTGH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SECH_STR, Function1Arg.SECH_DESC, Function1Arg.SECH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CSCH_STR, Function1Arg.CSCH_DESC, Function1Arg.CSCH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COSECH_STR, Function1Arg.CSCH_DESC, Function1Arg.CSCH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.DEG_STR, Function1Arg.DEG_DESC, Function1Arg.DEG_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ABS_STR, Function1Arg.ABS_DESC, Function1Arg.ABS_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SGN_STR, Function1Arg.SGN_DESC, Function1Arg.SGN_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.FLOOR_STR, Function1Arg.FLOOR_DESC, Function1Arg.FLOOR_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CEIL_STR, Function1Arg.CEIL_DESC, Function1Arg.CEIL_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.NOT_STR, Function1Arg.NOT_DESC, Function1Arg.NOT_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ASINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARSINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ATANH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCTANH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ATGH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCTGH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACTANH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCTANH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACTGH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCTGH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ASECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARSECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SA_STR, Function1Arg.SA_DESC, Function1Arg.SA_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SA1_STR, Function1Arg.SA_DESC, Function1Arg.SA_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SINC_STR, Function1Arg.SINC_DESC, Function1Arg.SINC_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.BELL_NUMBER_STR, Function1Arg.BELL_NUMBER_DESC, Function1Arg.BELL_NUMBER_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.FIBONACCI_NUMBER_STR, Function1Arg.FIBONACCI_NUMBER_DESC, Function1Arg.FIBONACCI_NUMBER_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LUCAS_NUMBER_STR, Function1Arg.LUCAS_NUMBER_DESC, Function1Arg.LUCAS_NUMBER_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.HARMONIC_NUMBER_STR, Function1Arg.HARMONIC_NUMBER_DESC, Function1Arg.HARMONIC_NUMBER_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.IS_PRIME_STR, Function1Arg.IS_PRIME_DESC, Function1Arg.IS_PRIME_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.PRIME_COUNT_STR, Function1Arg.PRIME_COUNT_DESC, Function1Arg.PRIME_COUNT_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.EXP_INT_STR, Function1Arg.EXP_INT_DESC, Function1Arg.EXP_INT_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LOG_INT_STR, Function1Arg.LOG_INT_DESC, Function1Arg.LOG_INT_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.OFF_LOG_INT_STR, Function1Arg.OFF_LOG_INT_DESC, Function1Arg.OFF_LOG_INT_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAUSS_ERF_STR, Function1Arg.GAUSS_ERF_DESC, Function1Arg.GAUSS_ERF_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAUSS_ERFC_STR, Function1Arg.GAUSS_ERFC_DESC, Function1Arg.GAUSS_ERFC_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAUSS_ERF_INV_STR, Function1Arg.GAUSS_ERF_INV_DESC, Function1Arg.GAUSS_ERF_INV_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAUSS_ERFC_INV_STR, Function1Arg.GAUSS_ERFC_INV_DESC, Function1Arg.GAUSS_ERFC_INV_ID, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ULP_STR, Function1Arg.ULP_DESC, Function1Arg.ULP_ID, Function1Arg.TYPE_ID);
			/*
			 * 2 args functions key words
			 */
			addKeyWord(Function2Arg.LOG_STR, Function2Arg.LOG_DESC, Function2Arg.LOG_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.MOD_STR, Function2Arg.MOD_DESC, Function2Arg.MOD_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.BINOM_COEFF_STR, Function2Arg.BINOM_COEFF_DESC, Function2Arg.BINOM_COEFF_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.BERNOULLI_NUMBER_STR, Function2Arg.BERNOULLI_NUMBER_DESC, Function2Arg.BERNOULLI_NUMBER_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.STIRLING1_NUMBER_STR, Function2Arg.STIRLING1_NUMBER_DESC, Function2Arg.STIRLING1_NUMBER_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.STIRLING2_NUMBER_STR, Function2Arg.STIRLING2_NUMBER_DESC, Function2Arg.STIRLING2_NUMBER_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.WORPITZKY_NUMBER_STR, Function2Arg.WORPITZKY_NUMBER_DESC, Function2Arg.WORPITZKY_NUMBER_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.EULER_NUMBER_STR, Function2Arg.EULER_NUMBER_DESC, Function2Arg.EULER_NUMBER_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.KRONECKER_DELTA_STR, Function2Arg.KRONECKER_DELTA_DESC, Function2Arg.KRONECKER_DELTA_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.EULER_POLYNOMIAL_STR, Function2Arg.EULER_POLYNOMIAL_DESC, Function2Arg.EULER_POLYNOMIAL_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.HARMONIC_NUMBER_STR, Function2Arg.HARMONIC_NUMBER_DESC, Function2Arg.HARMONIC_NUMBER_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.RND_UNIFORM_CONT_STR, Function2Arg.RND_UNIFORM_CONT_DESC, Function2Arg.RND_UNIFORM_CONT_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.RND_UNIFORM_DISCR_STR, Function2Arg.RND_UNIFORM_DISCR_DESC, Function2Arg.RND_UNIFORM_DISCR_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.ROUND_STR, Function2Arg.ROUND_DESC, Function2Arg.ROUND_ID, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.RND_NORMAL_STR, Function2Arg.RND_NORMAL_DESC, Function2Arg.RND_NORMAL_ID, Function2Arg.TYPE_ID);
			/*
			 * 3 args functions key words
			 */
			addKeyWord(Function3Arg.IF_STR, Function3Arg.IF_DESC, Function3Arg.IF_CONDITION_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CHI_ab_STR, Function3Arg.CHI_ab_DESC, Function3Arg.CHI_ab_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CHI_AB_STR, Function3Arg.CHI_AB_DESC, Function3Arg.CHI_AB_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CHI_Ab_STR, Function3Arg.CHI_Ab_DESC, Function3Arg.CHI_Ab_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CHI_aB_STR, Function3Arg.CHI_aB_DESC, Function3Arg.CHI_aB_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.PDF_UNIFORM_CONT_STR, Function3Arg.PDF_UNIFORM_CONT_DESC, Function3Arg.PDF_UNIFORM_CONT_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CDF_UNIFORM_CONT_STR, Function3Arg.CDF_UNIFORM_CONT_DESC, Function3Arg.CDF_UNIFORM_CONT_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.QNT_UNIFORM_CONT_STR, Function3Arg.QNT_UNIFORM_CONT_DESC, Function3Arg.QNT_UNIFORM_CONT_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.PDF_NORMAL_STR, Function3Arg.PDF_NORMAL_DESC, Function3Arg.PDF_NORMAL_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CDF_NORMAL_STR, Function3Arg.CDF_NORMAL_DESC, Function3Arg.CDF_NORMAL_ID, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.QNT_NORMAL_STR, Function3Arg.QNT_NORMAL_DESC, Function3Arg.QNT_NORMAL_ID, Function3Arg.TYPE_ID);
			/*
			 * Variadic functions as key words
			 */
			addKeyWord(FunctionVariadic.IFF_STR, FunctionVariadic.IFF_DESC, FunctionVariadic.IFF_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.MIN_STR, FunctionVariadic.MIN_DESC, FunctionVariadic.MIN_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.MAX_STR, FunctionVariadic.MAX_DESC, FunctionVariadic.MAX_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.CONT_FRAC_STR, FunctionVariadic.CONT_FRAC_DESC, FunctionVariadic.CONT_FRAC_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.CONT_POL_STR, FunctionVariadic.CONT_POL_DESC, FunctionVariadic.CONT_POL_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.GCD_STR, FunctionVariadic.GCD_DESC, FunctionVariadic.GCD_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.LCM_STR, FunctionVariadic.LCM_DESC, FunctionVariadic.LCM_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.SUM_STR, FunctionVariadic.SUM_DESC, FunctionVariadic.SUM_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.PROD_STR, FunctionVariadic.PROD_DESC, FunctionVariadic.PROD_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.AVG_STR, FunctionVariadic.AVG_DESC, FunctionVariadic.AVG_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.VAR_STR, FunctionVariadic.VAR_DESC, FunctionVariadic.VAR_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.STD_STR, FunctionVariadic.STD_DESC, FunctionVariadic.STD_ID, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.RND_LIST_STR, FunctionVariadic.RND_LIST_DESC, FunctionVariadic.RND_LIST_ID, FunctionVariadic.TYPE_ID);
			/*
			 * Calculus key words
			 */
			addKeyWord(CalculusOperator.SUM_STR, CalculusOperator.SUM_DESC, CalculusOperator.SUM_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.PROD_STR, CalculusOperator.PROD_DESC, CalculusOperator.PROD_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.INT_STR, CalculusOperator.INT_DESC, CalculusOperator.INT_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.DER_STR, CalculusOperator.DER_DESC, CalculusOperator.DER_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.DER_LEFT_STR, CalculusOperator.DER_LEFT_DESC, CalculusOperator.DER_LEFT_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.DER_RIGHT_STR, CalculusOperator.DER_RIGHT_DESC, CalculusOperator.DER_RIGHT_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.DERN_STR, CalculusOperator.DERN_DESC, CalculusOperator.DERN_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.FORW_DIFF_STR, CalculusOperator.FORW_DIFF_DESC, CalculusOperator.FORW_DIFF_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.BACKW_DIFF_STR, CalculusOperator.BACKW_DIFF_DESC, CalculusOperator.BACKW_DIFF_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.AVG_STR, CalculusOperator.AVG_DESC, CalculusOperator.AVG_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.VAR_STR, CalculusOperator.VAR_DESC, CalculusOperator.VAR_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.STD_STR, CalculusOperator.STD_DESC, CalculusOperator.STD_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.MIN_STR, CalculusOperator.MIN_DESC, CalculusOperator.MIN_ID, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.MAX_STR, CalculusOperator.MAX_DESC, CalculusOperator.MAX_ID, CalculusOperator.TYPE_ID);
			/*
			 * Constants key words
			 */
			addKeyWord(ConstantValue.PI_STR, ConstantValue.PI_DESC, ConstantValue.PI_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EULER_STR, ConstantValue.EULER_DESC, ConstantValue.EULER_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EULER_MASCHERONI_STR, ConstantValue.EULER_MASCHERONI_DESC, ConstantValue.EULER_MASCHERONI_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GOLDEN_RATIO_STR, ConstantValue.GOLDEN_RATIO_DESC, ConstantValue.GOLDEN_RATIO_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PLASTIC_STR, ConstantValue.PLASTIC_DESC, ConstantValue.PLASTIC_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EMBREE_TREFETHEN_STR, ConstantValue.EMBREE_TREFETHEN_DESC, ConstantValue.EMBREE_TREFETHEN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.FEIGENBAUM_DELTA_STR, ConstantValue.FEIGENBAUM_DELTA_DESC, ConstantValue.FEIGENBAUM_DELTA_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.FEIGENBAUM_ALFA_STR, ConstantValue.FEIGENBAUM_ALFA_DESC, ConstantValue.FEIGENBAUM_ALFA_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.TWIN_PRIME_STR, ConstantValue.TWIN_PRIME_DESC, ConstantValue.TWIN_PRIME_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MEISSEL_MERTEENS_STR, ConstantValue.MEISSEL_MERTEENS_DESC, ConstantValue.MEISSEL_MERTEENS_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BRAUN_TWIN_PRIME_STR, ConstantValue.BRAUN_TWIN_PRIME_DESC, ConstantValue.BRAUN_TWIN_PRIME_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BRAUN_PRIME_QUADR_STR, ConstantValue.BRAUN_PRIME_QUADR_DESC, ConstantValue.BRAUN_PRIME_QUADR_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BRUIJN_NEWMAN_STR, ConstantValue.BRUIJN_NEWMAN_DESC, ConstantValue.BRUIJN_NEWMAN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.CATALAN_STR, ConstantValue.CATALAN_DESC, ConstantValue.CATALAN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LANDAU_RAMANUJAN_STR, ConstantValue.LANDAU_RAMANUJAN_DESC, ConstantValue.LANDAU_RAMANUJAN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.VISWANATH_STR, ConstantValue.VISWANATH_DESC, ConstantValue.VISWANATH_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LEGENDRE_STR, ConstantValue.LEGENDRE_DESC, ConstantValue.LEGENDRE_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.RAMANUJAN_SOLDNER_STR, ConstantValue.RAMANUJAN_SOLDNER_DESC, ConstantValue.RAMANUJAN_SOLDNER_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.ERDOS_BORWEIN_STR, ConstantValue.ERDOS_BORWEIN_DESC, ConstantValue.ERDOS_BORWEIN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BERNSTEIN_STR, ConstantValue.BERNSTEIN_DESC, ConstantValue.BERNSTEIN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GAUSS_KUZMIN_WIRSING_STR, ConstantValue.GAUSS_KUZMIN_WIRSING_DESC, ConstantValue.GAUSS_KUZMIN_WIRSING_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.HAFNER_SARNAK_MCCURLEY_STR, ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC, ConstantValue.HAFNER_SARNAK_MCCURLEY_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GOLOMB_DICKMAN_STR, ConstantValue.GOLOMB_DICKMAN_DESC, ConstantValue.GOLOMB_DICKMAN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.CAHEN_STR, ConstantValue.CAHEN_DESC, ConstantValue.CAHEN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LAPLACE_LIMIT_STR, ConstantValue.LAPLACE_LIMIT_DESC, ConstantValue.LAPLACE_LIMIT_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.ALLADI_GRINSTEAD_STR, ConstantValue.ALLADI_GRINSTEAD_DESC, ConstantValue.ALLADI_GRINSTEAD_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LENGYEL_STR, ConstantValue.LENGYEL_DESC, ConstantValue.LENGYEL_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LEVY_STR, ConstantValue.LEVY_DESC, ConstantValue.LEVY_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.APERY_STR, ConstantValue.APERY_DESC, ConstantValue.APERY_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MILLS_STR, ConstantValue.MILLS_DESC, ConstantValue.MILLS_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BACKHOUSE_STR, ConstantValue.BACKHOUSE_DESC, ConstantValue.BACKHOUSE_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PORTER_STR, ConstantValue.PORTER_DESC, ConstantValue.PORTER_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LIEB_QUARE_ICE_STR, ConstantValue.LIEB_QUARE_ICE_DESC, ConstantValue.LIEB_QUARE_ICE_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.NIVEN_STR, ConstantValue.NIVEN_DESC, ConstantValue.NIVEN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.SIERPINSKI_STR, ConstantValue.SIERPINSKI_DESC, ConstantValue.SIERPINSKI_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.KHINCHIN_STR, ConstantValue.KHINCHIN_DESC, ConstantValue.KHINCHIN_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.FRANSEN_ROBINSON_STR, ConstantValue.FRANSEN_ROBINSON_DESC, ConstantValue.FRANSEN_ROBINSON_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LANDAU_STR, ConstantValue.LANDAU_DESC, ConstantValue.LANDAU_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PARABOLIC_STR, ConstantValue.PARABOLIC_DESC, ConstantValue.PARABOLIC_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.OMEGA_STR, ConstantValue.OMEGA_DESC, ConstantValue.OMEGA_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MRB_STR, ConstantValue.MRB_DESC, ConstantValue.MRB_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LI2_STR, ConstantValue.LI2_DESC, ConstantValue.LI2_ID, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GOMPERTZ_STR, ConstantValue.GOMPERTZ_DESC, ConstantValue.GOMPERTZ_ID, ConstantValue.TYPE_ID);
			/*
			 * Random variables
			 */
			addKeyWord(RandomVariable.UNIFORM_STR, RandomVariable.UNIFORM_DESC, RandomVariable.UNIFORM_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT_STR, RandomVariable.INT_DESC, RandomVariable.INT_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT1_STR, RandomVariable.INT1_DESC, RandomVariable.INT1_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT2_STR, RandomVariable.INT2_DESC, RandomVariable.INT2_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT3_STR, RandomVariable.INT3_DESC, RandomVariable.INT3_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT4_STR, RandomVariable.INT4_DESC, RandomVariable.INT4_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT5_STR, RandomVariable.INT5_DESC, RandomVariable.INT5_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT6_STR, RandomVariable.INT6_DESC, RandomVariable.INT6_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT7_STR, RandomVariable.INT7_DESC, RandomVariable.INT7_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT8_STR, RandomVariable.INT8_DESC, RandomVariable.INT8_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT9_STR, RandomVariable.INT9_DESC, RandomVariable.INT9_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_STR, RandomVariable.NAT0_DESC, RandomVariable.NAT0_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_1_STR, RandomVariable.NAT0_1_DESC, RandomVariable.NAT0_1_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_2_STR, RandomVariable.NAT0_2_DESC, RandomVariable.NAT0_2_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_3_STR, RandomVariable.NAT0_3_DESC, RandomVariable.NAT0_3_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_4_STR, RandomVariable.NAT0_4_DESC, RandomVariable.NAT0_4_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_5_STR, RandomVariable.NAT0_5_DESC, RandomVariable.NAT0_5_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_6_STR, RandomVariable.NAT0_6_DESC, RandomVariable.NAT0_6_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_7_STR, RandomVariable.NAT0_7_DESC, RandomVariable.NAT0_7_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_8_STR, RandomVariable.NAT0_8_DESC, RandomVariable.NAT0_8_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_9_STR, RandomVariable.NAT0_9_DESC, RandomVariable.NAT0_9_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_STR, RandomVariable.NAT1_DESC, RandomVariable.NAT1_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_1_STR, RandomVariable.NAT1_1_DESC, RandomVariable.NAT1_1_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_2_STR, RandomVariable.NAT1_2_DESC, RandomVariable.NAT1_2_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_3_STR, RandomVariable.NAT1_3_DESC, RandomVariable.NAT1_3_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_4_STR, RandomVariable.NAT1_4_DESC, RandomVariable.NAT1_4_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_5_STR, RandomVariable.NAT1_5_DESC, RandomVariable.NAT1_5_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_6_STR, RandomVariable.NAT1_6_DESC, RandomVariable.NAT1_6_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_7_STR, RandomVariable.NAT1_7_DESC, RandomVariable.NAT1_7_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_8_STR, RandomVariable.NAT1_8_DESC, RandomVariable.NAT1_8_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_9_STR, RandomVariable.NAT1_9_DESC, RandomVariable.NAT1_9_ID, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NOR_STR, RandomVariable.NOR_DESC, RandomVariable.NOR_ID, RandomVariable.TYPE_ID);
		}
		/*
		 * Other parser symbols key words
		 */
		addKeyWord(ParserSymbol.LEFT_PARENTHESES_STR, ParserSymbol.LEFT_PARENTHESES_DESC, ParserSymbol.LEFT_PARENTHESES_ID, ParserSymbol.TYPE_ID);
		addKeyWord(ParserSymbol.RIGHT_PARENTHESES_STR, ParserSymbol.RIGHT_PARENTHESES_DESC, ParserSymbol.RIGHT_PARENTHESES_ID, ParserSymbol.TYPE_ID);
		addKeyWord(ParserSymbol.COMMA_STR, ParserSymbol.COMMA_DESC, ParserSymbol.COMMA_ID, ParserSymbol.TYPE_ID);
		addKeyWord(ParserSymbol.SEMI_STR, ParserSymbol.SEMI_DESC, ParserSymbol.COMMA_ID, ParserSymbol.TYPE_ID);
		addKeyWord(ParserSymbol.NUMBER_REG_EXP, ParserSymbol.NUMBER_REG_DESC, ParserSymbol.NUMBER_ID, ParserSymbol.NUMBER_TYPE_ID);
	}
	/**
	 * Adds arguments key words to the keywords list
	 */
	private void addArgumentsKeyWords() {
		int argumentsNumber = argumentsList.size();
		for (int argumentIndex = 0; argumentIndex<argumentsNumber; argumentIndex++) {
			Argument arg = argumentsList.get(argumentIndex);
			if (arg.getArgumentType() != Argument.RECURSIVE_ARGUMENT)
				addKeyWord(arg.getArgumentName(),arg.getDescription(), argumentIndex,Argument.TYPE_ID);
			else
				addKeyWord(arg.getArgumentName(),arg.getDescription(), argumentIndex,RecursiveArgument.TYPE_ID_RECURSIVE);
		}
	}
	/**
	 * Adds functions key words to the keywords list
	 */
	private void addFunctionsKeyWords() {
		int functionsNumber = functionsList.size();
		for (int functionIndex = 0; functionIndex<functionsNumber; functionIndex++) {
			Function fun = functionsList.get(functionIndex);
			addKeyWord(fun.getFunctionName(),fun.getDescription(), functionIndex,Function.TYPE_ID);
		}
	}
	/**
	 * Adds constants key words to the keywords list
	 */
	private void addConstantsKeyWords() {
		int constantsNumber = constantsList.size();
		for (int constantIndex = 0; constantIndex < constantsNumber; constantIndex++) {
			Constant c = constantsList.get(constantIndex);
			addKeyWord(c.getConstantName(), c.getDescription(), constantIndex, Constant.TYPE_ID);
		}
	}
	/**
	 * Adds key word to the keyWords list
	 *
	 * @param wordString
	 * @param wordDescription
	 * @param wordId
	 * @param wordTypeId
	 */
	private void addKeyWord(String wordString, String wordDescription, int wordId, int wordTypeId) {
		keyWordsList.add(new KeyWord(wordString, wordDescription, wordId, wordTypeId));
	}
	/**
	 * Adds expression token
	 * Method is caleld by the tokenExpressionString()
	 * while parsing string expression
	 *
	 * @param      tokenStr            the token string
	 * @param      keyWord             the key word
	 */
	private void addToken(String tokenStr, KeyWord keyWord) {
		Token token = new Token();
		initialTokens.add(token);
		token.tokenStr = tokenStr;
		token.keyWord = keyWord.wordString;
		token.tokenId = keyWord.wordId;
		token.tokenTypeId = keyWord.wordTypeId;
		if (token.tokenTypeId == Argument.TYPE_ID)
			token.tokenValue = argumentsList.get(token.tokenId).argumentValue;
		else
			if (token.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
				token.tokenValue = Double.valueOf(token.tokenStr);
				token.keyWord = ParserSymbol.NUMBER_STR;
			}
	}
	/**
	 * Tokenizing expression string
	 */
	private void tokenizeExpressionString() {
		/*
		 * Add parser and argument key words
		 */
		keyWordsList = new ArrayList<KeyWord>();
		addParserKeyWords();
		if (parserKeyWordsOnly == false) {
			addArgumentsKeyWords();
			addFunctionsKeyWords();
			addConstantsKeyWords();
		}
		java.util.Collections.sort(keyWordsList, new DescKwLenComparator());
		/*
		 * Evaluate position after soritng for the following kwywords types
		 *    number
		 *    plus operator
		 *    minus operator
		 *
		 * Above mentioned information is required
		 * when distinguishing between numbers (regexp) and operators
		 *
		 * For example
		 *
		 * 1-2 : two numbers and one operator, but -2 is also a valid number
		 * (-2)+3 : two number and one operator
		 */
		int numberKwId = ConstantValue.NaN;
		int plusKwId = ConstantValue.NaN;
		int minusKwId = ConstantValue.NaN;
		for (int kwId = 0; kwId < keyWordsList.size(); kwId++) {
			if ( keyWordsList.get(kwId).wordTypeId == ParserSymbol.NUMBER_TYPE_ID)
				numberKwId = kwId;
			if ( keyWordsList.get(kwId).wordTypeId == Operator.TYPE_ID) {
				if (keyWordsList.get(kwId).wordId == Operator.PLUS_ID)
					plusKwId = kwId;
				if (keyWordsList.get(kwId).wordId == Operator.MINUS_ID)
					minusKwId = kwId;
			}
		}
		/*
		 * Clearing expression string from spaces
		 */
		String newExpressionString = "";
		char c;
		if (expressionString.length() > 0) {
			for (int i = 0; i < expressionString.length(); i++) {
				c = expressionString.charAt(i);
				if ( (c != ' ') && (c != '\n') && (c != '\r') && (c != '\t') && (c != '\f') ) newExpressionString = newExpressionString + c;
			}
		}
		/*
		 * words list and tokens list
		 */
		initialTokens = new ArrayList<Token>();
		int lastPos = 0; /* position of the key word previously added*/
		int pos = 0; /* current position */
		String tokenStr = "";
		int matchStatusPrev = NOT_FOUND; /* unknown key word (previous) */
		int matchStatus = NOT_FOUND; /* unknown key word (current) */
		/*
		 * Check all available positions in the expression tokens list
		 */
		do {
			/*
			 * 1st step
			 *
			 * compare with the regExp for real numbers
			 * find the longest word which could be matched
			 * with the given regExp
			 */
			int numEnd = -1;
			for (int i=pos; i<newExpressionString.length(); i++) {
				String str = newExpressionString.substring(pos, i+1);
				if ( mXparser.regexMatch(str, ParserSymbol.NUMBER_REG_EXP) ){
					numEnd = i;
				}
			}
			/*
			 * If number was found
			 */
			if (numEnd >= 0)
				if (pos > 0) {
					c = newExpressionString.charAt(pos-1);
					if (
							( c != ',' ) &&
							( c != ';' ) &&
							( c != '|' ) &&
							( c != '&' ) &&
							( c != '+' ) &&
							( c != '-' ) &&
							( c != '*' ) &&
							( c != '\\' ) &&
							( c != '/' ) &&
							( c != '%' ) &&
							( c != '(' ) &&
							( c != ')' ) &&
							( c != '=' ) &&
							( c != '>' ) &&
							( c != '<' ) &&
							( c != '~' ) &&
							( c != '^' ) &&
							( c != '!' )	)
						numEnd = -1;
				}
			if (numEnd >= 0) {
				/*
				 * If preceding word was unknown
				 *
				 * For example:
				 *    'abc-2'
				 *
				 *   number starts with '-', preceding word 'abc'
				 *   is not known by the parser
				 */
				if ( (matchStatusPrev == NOT_FOUND) && (pos > 0) ) {
					/*
					 * add preceding word to the list of tokens
					 * as unknown key word word
					 */
					tokenStr = newExpressionString.substring(lastPos, pos);
					addToken(tokenStr, new KeyWord());
				}
				/*
				 * Check leading operators ('-' or '+')
				 *
				 * For example:
				 *    '2-1' :  1(num) -(op) 2(num) = 1(num)
				 *    -1+2  : -1(num) +(op) 2(num) = 1(num)
				 */
				char fc = newExpressionString.charAt(pos);
				boolean leadingOp = true;
				if ( (fc == '-') || (fc == '+') ) {
					if (initialTokens.size() > 0) {
						Token lastToken = initialTokens.get(initialTokens.size()-1);
						if (	(lastToken.tokenTypeId == Operator.TYPE_ID) ||
								( (lastToken.tokenTypeId == ParserSymbol.TYPE_ID) && (lastToken.tokenId == ParserSymbol.LEFT_PARENTHESES_ID) ))
							leadingOp = false;
						 else leadingOp = true;
					} else leadingOp = false;
				} else leadingOp = false;
				/*
				 * If leading operator was found
				 */
				if (leadingOp == true) {
					/*
					 * Add leading operator to the tokens list
					 */
					if ( fc == '-')
						addToken("-", keyWordsList.get(minusKwId));
					if ( fc == '+')
						addToken("+", keyWordsList.get(plusKwId));
					pos++;
				}
				/*
				 * Add found number to the tokens list
				 */
				tokenStr = newExpressionString.substring(pos, numEnd+1);
				addToken(tokenStr, keyWordsList.get(numberKwId));
				/*
				 * change current position (just after the numeber ends)
				 */
				pos = numEnd+1;
				lastPos = pos;
				/*
				 * Mark match status indicators
				 */
				matchStatus = FOUND;
				matchStatusPrev = FOUND;
			} else {
			/*
			 * If there is no number wich starts with current position
			 */
				/*
				 * Check for known key words
				 */
				int kwId = -1;
				matchStatus = NOT_FOUND;
				KeyWord kw;
				String sub = "";
				String kwStr = "";
				do {
					kwId++;
					kw = keyWordsList.get(kwId);
					kwStr = kw.wordString;
					if (pos + kwStr.length() <= newExpressionString.length()) {
						sub = newExpressionString.substring(pos, pos + kwStr.length() );
						if (sub.equals(kwStr))
							matchStatus = FOUND;
					}
				} while ( (kwId < keyWordsList.size()-1) && (matchStatus == NOT_FOUND) );
				/*
				 * If key word is known by the parser
				 */
				if (matchStatus == FOUND)
					if (
							(kw.wordTypeId == Argument.TYPE_ID) ||
							(kw.wordTypeId == RecursiveArgument.TYPE_ID_RECURSIVE) ||
							(kw.wordTypeId == Function1Arg.TYPE_ID) ||
							(kw.wordTypeId == Function2Arg.TYPE_ID) ||
							(kw.wordTypeId == Function3Arg.TYPE_ID) ||
							(kw.wordTypeId == ConstantValue.TYPE_ID) ||
							(kw.wordTypeId == Constant.TYPE_ID) ||
							(kw.wordTypeId == Function.TYPE_ID) ||
							(kw.wordTypeId == CalculusOperator.TYPE_ID)	)
						if ( pos + kwStr.length() < newExpressionString.length() ) {
							c = newExpressionString.charAt(pos + kwStr.length());
							if (
									( c != ',' ) &&
									( c != ';' ) &&
									( c != '|' ) &&
									( c != '&' ) &&
									( c != '+' ) &&
									( c != '-' ) &&
									( c != '*' ) &&
									( c != '\\' ) &&
									( c != '/' ) &&
									( c != '%' ) &&
									( c != '(' ) &&
									( c != ')' ) &&
									( c != '=' ) &&
									( c != '>' ) &&
									( c != '<' ) &&
									( c != '~' ) &&
									( c != '^' ) &&
									( c != '!' )	)
								matchStatus = NOT_FOUND;
						}
				if (matchStatus == FOUND) {
					/*
					 * if preceding word was not known by the parser
					 */
					if ( (matchStatusPrev == NOT_FOUND) && (pos > 0) ) {
						/*
						 * Add preceding word to the tokens list
						 * as unknown key word
						 */
						tokenStr = newExpressionString.substring(lastPos, pos);
						addToken(tokenStr, new KeyWord());
					}
					matchStatusPrev = FOUND;
					/*
					 * Add current (known by the parser)
					 * key word to the tokens list
					 */
					tokenStr = newExpressionString.substring(pos, pos+kwStr.length());
					addToken(tokenStr, kw);
					/*
					 * Remember position where last added word ends + 1
					 */
					lastPos = pos+kwStr.length();
					/*
					 * Change current position;
					 */
					pos = pos + kwStr.length();
				} else {
					/*
					 * Update preceding word indicator
					 */
					matchStatusPrev = NOT_FOUND;
					/*
					 * Increment position if possible
					 */
					if (pos < newExpressionString.length())
						pos++;
				}
			}
		/*
		 * while there is still something to analyse
		 */
		} while (pos < newExpressionString.length());
		/*
		 * If key word was not known by the parser
		 * and end with the string end
		 * it needs to be added to the tokens list
		 * as unknown key word
		 */
		if (matchStatus == NOT_FOUND) {
			tokenStr = newExpressionString.substring(lastPos, pos);
			addToken(tokenStr, new KeyWord());
		}
		/*
		 * Evaluate tokens levels
		 *
		 * token level identifies the sequance of parsing
		 */
		evaluateTokensLevels();
	}
	/**
	 * Evaluates tokens levels
	 */
	private void evaluateTokensLevels() {
		int tokenLevel = 0;
		Stack<TokenStackElement> tokenStack =  new Stack<TokenStackElement>();
		boolean precedingFunction = false;
		if (initialTokens.size() > 0)
			for (int tokenIndex = 0; tokenIndex < initialTokens.size(); tokenIndex++) {
				Token token = initialTokens.get(tokenIndex);
				if (	( token.tokenTypeId == Function1Arg.TYPE_ID ) ||
						( token.tokenTypeId == Function2Arg.TYPE_ID ) ||
						( token.tokenTypeId == Function3Arg.TYPE_ID )	||
						( token.tokenTypeId == Function.TYPE_ID )	||
						( token.tokenTypeId == CalculusOperator.TYPE_ID ) ||
						( token.tokenTypeId == RecursiveArgument.TYPE_ID_RECURSIVE ) ||
						( token.tokenTypeId == FunctionVariadic.TYPE_ID )
						) {
					tokenLevel++;
					precedingFunction = true;
				} else
				if ((token.tokenTypeId == ParserSymbol.TYPE_ID) && (token.tokenId == ParserSymbol.LEFT_PARENTHESES_ID)) {
					tokenLevel++;
					TokenStackElement stackEl = new TokenStackElement();
					stackEl.tokenId = token.tokenId;
					stackEl.tokenIndex = tokenIndex;
					stackEl.tokenLevel = tokenLevel;
					stackEl.tokenTypeId = token.tokenTypeId;
					stackEl.precedingFunction = precedingFunction;
					tokenStack.push(stackEl);
					precedingFunction = false;
				} else
					precedingFunction = false;
				token.tokenLevel = tokenLevel;
				if ((token.tokenTypeId == ParserSymbol.TYPE_ID) && (token.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID)) {
					tokenLevel--;
					TokenStackElement stackEl = tokenStack.pop();
					if (stackEl.precedingFunction == true)
						tokenLevel--;
				}
			}
	}
	/**
	 * copy initial tokens lito to tokens list
	 */
	private void copyInitialTokens() {
		tokensList = new ArrayList<Token>();
		for (Token token : initialTokens) {
			tokensList.add(token.clone());
		}
	}
	/**
	 * Tokenizes expression string and returns tokens list,
	 * including: string, type, level.
	 * 
	 * @return Copy of initial tokens.
	 *
	 * @see Token
	 * @see mXparser#consolePrintTokens(ArrayList)
	 */
	public ArrayList<Token> getCopyOfInitialTokens() {
		tokenizeExpressionString();
		ArrayList<Token> tokensListCopy = new ArrayList<Token>();
		for (Token token : initialTokens)
			tokensListCopy.add(token.clone());
		return tokensListCopy;
	}
	/**
	 * Gets initial tokens and returns copied list
	 *
	 * @see Function
	 */
	ArrayList<Token> getInitialTokens() {
		return initialTokens;
	}
	/*
	 * Text adjusting.
	 */
	private static final String getLeftSpaces(String maxStr, String str) {
		String spc = "";
		for (int i=0; i<maxStr.length() - str.length(); i++)
			spc = spc + " ";
		return spc + str;
	}
	/*
	 * Text adjusting.
	 */
	private static final String getRightSpaces(String maxStr, String str) {
		String spc = "";
		for (int i=0; i<maxStr.length() - str.length(); i++)
			spc = " " + spc;
		return str + spc;
	}
	/**
	 * Shows parsing (verbose mode purposes).
	 *
	 */
	private void showParsing(int lPos, int rPos) {
		mXparser.consolePrint(" ---> ");
		for (int i=lPos; i<=rPos; i++) {
			Token token = tokensList.get(i);
			if (token.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID)
				mXparser.consolePrint(token.tokenValue + " ");
			else
				mXparser.consolePrint(token.tokenStr + " ");
		}
		mXparser.consolePrint(" ... ");
	}
	/**
	 * shows known keywords
	 */
	void showKeyWords() {
		int keyWordsNumber = keyWordsList.size();
		String maxStr = "KEY_WORD";
		mXparser.consolePrintln("KEY WORDS:");
		mXparser.consolePrintln(" -------------------------------------------");
		mXparser.consolePrintln("|      IDX | KEY_WORD |       ID |  TYPE_ID |");
		mXparser.consolePrintln(" -------------------------------------------");
		for (int keyWordIndex=0; keyWordIndex<keyWordsNumber; keyWordIndex++){
			KeyWord keyWord = keyWordsList.get(keyWordIndex);
			String idxStr = getLeftSpaces(maxStr, Integer.toString(keyWordIndex));
			String wordStr = getLeftSpaces(maxStr, keyWord.wordString);
			String idStr = getLeftSpaces(maxStr, Integer.toString(keyWord.wordId));
			String typeIdStr = getLeftSpaces(maxStr, Integer.toString(keyWord.wordTypeId));
			mXparser.consolePrintln("| " + idxStr+ " | " + wordStr + " | " + idStr + " | " + typeIdStr + " |");
		}
		mXparser.consolePrintln(" -------------------------------------------");
	}
	/**
	 * Gets help content.
	 *
	 * @return     The help content.
	 */
	public String getHelp() {
		return getHelp("");
	}
	/**
	 * Searching help content.
	 *
	 * @param      word                searching key word
	 *
	 * @return     The help content.
	 */
	public String getHelp(String word) {
		keyWordsList = new ArrayList<KeyWord>();
		String helpStr = "Help content: \n\n";
		addParserKeyWords();
		if (parserKeyWordsOnly == false) {
			addArgumentsKeyWords();
			addFunctionsKeyWords();
			addConstantsKeyWords();
		}
		java.util.Collections.sort(keyWordsList, new KwTypeComparator() );
		int keyWordsNumber = keyWordsList.size();
		String type, kw;
		String line;
		for (int keyWordIndex=0; keyWordIndex<keyWordsNumber; keyWordIndex++){
			KeyWord keyWord = keyWordsList.get(keyWordIndex);
			type = "";
			kw = keyWord.wordString;
			switch (keyWord.wordTypeId) {
			case ParserSymbol.TYPE_ID: type = ParserSymbol.TYPE_DESC; break;
			case ParserSymbol.NUMBER_TYPE_ID: type = "number"; kw = "_number_"; break;
			case Operator.TYPE_ID: type = Operator.TYPE_DESC; break;
			case BooleanOperator.TYPE_ID: type = BooleanOperator.TYPE_DESC; break;
			case BinaryRelation.TYPE_ID: type = BinaryRelation.TYPE_DESC; break;
			case Function1Arg.TYPE_ID: type = Function1Arg.TYPE_DESC; break;
			case Function2Arg.TYPE_ID: type = Function2Arg.TYPE_DESC; break;
			case Function3Arg.TYPE_ID: type = Function3Arg.TYPE_DESC; break;
			case FunctionVariadic.TYPE_ID: type = FunctionVariadic.TYPE_DESC; break;
			case CalculusOperator.TYPE_ID: type = CalculusOperator.TYPE_DESC; break;
			case RandomVariable.TYPE_ID: type = RandomVariable.TYPE_DESC; break;
			case ConstantValue.TYPE_ID: type = ConstantValue.TYPE_DESC; break;
			case Argument.TYPE_ID: type = Argument.TYPE_DESC; break;
			case RecursiveArgument.TYPE_ID_RECURSIVE: type = RecursiveArgument.TYPE_DESC; break;
			case Function.TYPE_ID: type = Function.TYPE_DESC; break;
			case Constant.TYPE_ID: type = Constant.TYPE_DESC; break;
			}
			line = getLeftSpaces("12345",Integer.toString(keyWordIndex+1)) + ". " +
			getRightSpaces("0123456789", kw) + getRightSpaces("                        ","<" + type + ">") + keyWord.description + "\n";
			if ( (line.toLowerCase().indexOf(word.toLowerCase()) >= 0) ){
				helpStr = helpStr + line;
			}
		}
		return helpStr;
	}
	/*
	 * shows tokens
	 */
	void showTokens() {
		showTokens(tokensList);
	}
	/*
	 * show tokens
	 */
	static final void showTokens(ArrayList<Token> tokensList) {
		String maxStr = "TokenTypeId";
		int tokensNumber = tokensList.size();
		mXparser.consolePrintln(" --------------------");
		mXparser.consolePrintln("| Expression tokens: |");
		mXparser.consolePrintln(" -------------------------------------------------------------------------------------------------");
		mXparser.consolePrintln("|    TokenIdx |       Token |        KeyW |     TokenId | TokenTypeId |  TokenLevel |  TokenValue |");
		mXparser.consolePrintln(" -------------------------------------------------------------------------------------------------");
		for (int tokenIndex=0; tokenIndex < tokensNumber; tokenIndex++){
			String tokenIndexStr = getLeftSpaces(maxStr, Integer.toString(tokenIndex) );
			String tokenStr = getLeftSpaces(maxStr, tokensList.get(tokenIndex).tokenStr );
			String keyWordStr = getLeftSpaces(maxStr, tokensList.get(tokenIndex).keyWord );
			String tokenIdStr = getLeftSpaces(maxStr, Integer.toString(tokensList.get(tokenIndex).tokenId) );
			String tokenTypeIdStr = getLeftSpaces(maxStr, Integer.toString(tokensList.get(tokenIndex).tokenTypeId) );
			String tokenLevelStr = getLeftSpaces(maxStr, Integer.toString(tokensList.get(tokenIndex).tokenLevel) );
			String tokenValueStr = getLeftSpaces(maxStr, Double.toString(tokensList.get(tokenIndex).tokenValue) );
			mXparser.consolePrintln(	"| " + tokenIndexStr +
								" | " + tokenStr +
								" | " + keyWordStr +
								" | " + tokenIdStr +
								" | " + tokenTypeIdStr +
								" | " + tokenLevelStr +
								" | " + tokenValueStr + " |");
		}
		mXparser.consolePrintln(" -------------------------------------------------------------------------------------------------");
	}
	/**
	 * shows initial tokens
	 */
	void showInitialTokens() {
		showTokens(initialTokens);
	}
	/*
	 * show arguments
	 */
	private void showArguments() {
		for (Argument a : argumentsList) {
			boolean vMode = a.getVerboseMode();
			a.setSilentMode();
			printSystemInfo(a.getArgumentName() + " = " + a.getArgumentValue() + "\n", WITH_EXP_STR);
			if (vMode == true)
				a.setVerboseMode();
		}
	}
	/**
	 *
	 * @param info
	 * @param withExpressionString
	 */
	private void printSystemInfo(String info, boolean withExpressionString) {
		if (withExpressionString)
			mXparser.consolePrint( /*"[" + this +  "]" +  */ "[" + description + "]" + "[" + expressionString + "] " + info);
		else
			mXparser.consolePrint(/*"[" + this +  "]" + */ info);
	}
	/**
	 * Gets license info
	 *
	 * @return     License info as string.
	 */
	public String getLicense() {
		return mXparser.LICENSE;
	}
	/**
	 * Expression cloning.
	 */
	@Override
	protected Expression clone() {
		Expression newExp = new Expression(this);
		if ( (initialTokens != null) && (initialTokens.size() > 0) )
			newExp.initialTokens = createInitialTokens(0, initialTokens.size()-1, initialTokens);
		return newExp;
	}
}