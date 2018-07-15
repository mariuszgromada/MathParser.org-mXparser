/*
 * @(#)Expression.java        4.2.0   2018-07-15
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

import java.io.ByteArrayInputStream;
import java.util.List;
import java.util.ArrayList;
import java.util.Stack;

import org.mariuszgromada.math.mxparser.mathcollection.AstronomicalConstants;
import org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations;
import org.mariuszgromada.math.mxparser.mathcollection.BooleanAlgebra;
import org.mariuszgromada.math.mxparser.mathcollection.MathConstants;
import org.mariuszgromada.math.mxparser.mathcollection.MathFunctions;
import org.mariuszgromada.math.mxparser.mathcollection.NumberTheory;
import org.mariuszgromada.math.mxparser.mathcollection.PhysicalConstants;
import org.mariuszgromada.math.mxparser.mathcollection.Calculus;
import org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions;
import org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions;
import org.mariuszgromada.math.mxparser.mathcollection.Statistics;
import org.mariuszgromada.math.mxparser.mathcollection.Units;
import org.mariuszgromada.math.mxparser.parsertokens.BinaryRelation;
import org.mariuszgromada.math.mxparser.parsertokens.BitwiseOperator;
import org.mariuszgromada.math.mxparser.parsertokens.BooleanOperator;
import org.mariuszgromada.math.mxparser.parsertokens.CalculusOperator;
import org.mariuszgromada.math.mxparser.parsertokens.ConstantValue;
import org.mariuszgromada.math.mxparser.parsertokens.Function1Arg;
import org.mariuszgromada.math.mxparser.parsertokens.Function2Arg;
import org.mariuszgromada.math.mxparser.parsertokens.Function3Arg;
import org.mariuszgromada.math.mxparser.parsertokens.FunctionVariadic;
import org.mariuszgromada.math.mxparser.parsertokens.KeyWord;
import org.mariuszgromada.math.mxparser.parsertokens.Operator;
import org.mariuszgromada.math.mxparser.parsertokens.ParserSymbol;
import org.mariuszgromada.math.mxparser.parsertokens.RandomVariable;
import org.mariuszgromada.math.mxparser.parsertokens.Token;
import org.mariuszgromada.math.mxparser.parsertokens.Unit;
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
 * @version        4.2.0
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
	List<Argument> argumentsList;
	/**
	 * List of user defined functions
	 *
	 * @see        Function
	 */
	List<Function> functionsList;
	/**
	 * List of user defined constants
	 *
	 * @see        Constant
	 */
	List<Constant> constantsList;
	/**
	 * List of key words known by the parser
	 */
	private List<KeyWord> keyWordsList;
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
	private List<Token> initialTokens;
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
	private List<Token> tokensList;
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
	List<Expression> relatedExpressionsList;
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
	 * Internal counter to avoid infinite loops while calculating
	 * expression defined in the way shown by below examples
	 *
	 * Argument x = new Argument("x = 2*y");
	 * Argument y = new Argument("y = 2*x");
	 * x.addDefinitions(y);
	 * y.addDefinitions(x);
	 *
	 * Function f = new Function("f(x) = 2*g(x)");
	 * Function g = new Function("g(x) = 2*f(x)");
	 * f.addDefinitions(g);
	 * g.addDefinitions(f);
	 */
	private int recursionCallsCounter;
	/**
	 * Internal indicator for tokenization process
	 * if true, then keywords such as constants
	 * functions etc.. will not be recognized
	 * during tokenization
	 */
	private boolean parserKeyWordsOnly;
	/**
	 * Indicator whether expression was
	 * automatically built for user defined
	 * functions purpose
	 *
	 * @see Function
	 */
	boolean UDFExpression = false;
	/**
	 * List of parameters provided by the user at run-time
	 *
	 * @see Function
	 */
	List<Double> UDFVariadicParamsAtRunTime;
	/**
	 * Internal indicator for calculation process
	 * Expression.Calculate() method
	 * It show whether to build again tokens list
	 * if clone - build again
	 * if not clone - build only at the beginning
	 *
	 * Indicator helps to solve the problem with
	 * above definitions
	 *
	 * Function f = new Function("f(x) = 2*g(x)");
	 * Function g = new Function("g(x) = 2*f(x)");
	 * f.addDefinitions(g);
	 * g.addDefinitions(f);
	 */
	private boolean internalClone;
	/**
	 * mXparser options changeset
	 * used in checkSyntax() method
	 */
	private int optionsChangesetNumber = -1;
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
		this.expressionWasModified = false;
	}
	/**
	 * Sets expression status to modified
	 * Calls setExpressionModifiedFlag() method
	 * to all related expressions.
	 */
	void setExpressionModifiedFlag() {
		if (recursionCallPending == false) {
			recursionCallPending = true;
			recursionCallsCounter = 0;
			internalClone = false;
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
		recursionCallsCounter = 0;
		internalClone = false;
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
	Expression(String expressionString, List<Token> initialTokens, List<Argument> argumentsList,
			List<Function> functionsList, List<Constant> constantsList, boolean disableUlpRounding,
			boolean UDFExpression, List<Double> UDFVariadicParamsAtRunTime) {
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
		recursionCallsCounter = 0;
		internalClone = false;
		parserKeyWordsOnly = false;
		this.UDFExpression = UDFExpression;
		this.UDFVariadicParamsAtRunTime = UDFVariadicParamsAtRunTime;
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
	Expression(String expressionString, List<Argument> argumentsList,
			List<Function> functionsList, List<Constant> constantsList
			,boolean internal, boolean UDFExpression, List<Double> UDFVariadicParamsAtRunTime) {
		this.expressionString = new String(expressionString);
		expressionInternalVarsInit();
		setSilentMode();
		disableRecursiveMode();
		this.argumentsList = argumentsList;
		this.functionsList = functionsList;
		this.constantsList = constantsList;
		this.UDFExpression = UDFExpression;
		this.UDFVariadicParamsAtRunTime = UDFVariadicParamsAtRunTime;
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
		recursionCallsCounter = expression.recursionCallsCounter;
		parserKeyWordsOnly = expression.parserKeyWordsOnly;
		disableUlpRounding = expression.disableUlpRounding;
		UDFExpression = expression.UDFExpression;
		UDFVariadicParamsAtRunTime = expression.UDFVariadicParamsAtRunTime;
		internalClone = true;
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
	public void addConstants( List<Constant> constantsList) {
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
				if (f.getFunctionBodyType() == Function.BODY_RUNTIME)
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
		if ( !Double.isNaN(ifCondition) ) {
			if (ifCondition != 0) {
				setToNumber(c2Pos+1, Double.NaN);
				tokensList.get(c2Pos+1).tokenLevel = ifLevel;
				removeTokens(c2Pos+2, rPos-1);
			} else {
				setToNumber(c1Pos+1, Double.NaN);
				tokensList.get(c1Pos+1).tokenLevel = ifLevel;
				removeTokens(c1Pos+2, c2Pos-1);
			}
		} else {
			setToNumber(c1Pos+1, Double.NaN);
			setToNumber(c2Pos+1, Double.NaN);
			tokensList.get(c1Pos+1).tokenLevel = ifLevel;
			tokensList.get(c2Pos+1).tokenLevel = ifLevel;
			removeTokens(c2Pos+2, rPos-1);
			removeTokens(c1Pos+2, c2Pos-1);
		}
		setToNumber(lPos+1, ifCondition, ulpRound);
		tokensList.get(lPos+1).tokenLevel = ifLevel;
		removeTokens(lPos+2, c1Pos-1);
		tokensList.get(pos).tokenId = Function3Arg.IF_ID;
	}
	private void removeTokens(int from, int to) {
		if (from < to) {
			for (int p = to; p >= from; p--)
				tokensList.remove(p);
		} else if (from == to)
			tokensList.remove(from);
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
	private List<Token> createInitialTokens(int startPos,
			int endPos,
			List<Token> tokensList) {
		List<Token> tokens = new ArrayList<Token>();
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
	private List<FunctionParameter> getFunctionParameters(int pos, List<Token> tokensList) {
		List<FunctionParameter> functionParameters = new ArrayList<FunctionParameter>();
		int cPos = pos+2;
		int tokenLevel = tokensList.get(pos+1).tokenLevel;
		int pPos = cPos;
		boolean comma;
		boolean paren;
		boolean end = false;
		List<Token> paramTkones = new ArrayList<Token>();
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
	 * Free Arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	private void FREE_ARGUMENT(int pos) {
		Argument argument = argumentsList.get( tokensList.get(pos).tokenId);
		boolean argumentVerboseMode = argument.getVerboseMode();
		if (verboseMode == true)
			argument.setVerboseMode();
		setToNumber(pos, argument.getArgumentValue());
		if (argumentVerboseMode == false)
			argument.setSilentMode();
	}
	/**
	 * Dependent Arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	private void DEPENDENT_ARGUMENT(int pos) {
		Argument argument = argumentsList.get( tokensList.get(pos).tokenId);
		boolean argumentVerboseMode = argument.getVerboseMode();
		if (verboseMode == true)
			argument.setVerboseMode();
		/*
		 * Handling possible recursive calls that can change
		 * the structure of the tokens list, i.e.
		 *
		 * Argument x = new Argument("x = 2*y");
		 * Argument y = new Argument("y = 2*x");
		 * x.addDefinitions(y);
		 * y.addDefinitions(x);
		 * x.getArgumentValue();
		 */
		int tokensListSizeBefore = tokensList.size();
		Token tokenBefore = tokensList.get(pos);
		double argumentValue = argument.getArgumentValue();
		int tokensListSizeAfter = tokensList.size();
		if (tokensListSizeBefore == tokensListSizeAfter) {
			Token tokenAfter = tokensList.get(pos);
			if ( (tokenBefore.tokenTypeId == tokenAfter.tokenTypeId) && (tokenBefore.tokenId == tokenAfter.tokenId)	) {
				setToNumber(pos, argumentValue);
			}
		}
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
		if (fun.getRecursiveMode() == true) {
			function = fun.clone();
			function.functionExpression.recursionCallsCounter = recursionCallsCounter;
		} else
			function = fun;
		function.functionExpression.UDFVariadicParamsAtRunTime = getNumbers(pos);
		int argsNumber = function.getParametersNumber();
		if (function.isVariadic == false)
			for (int argIdx = 0; argIdx < argsNumber; argIdx++)
				function.setArgumentValue(argIdx, tokensList.get(pos + argIdx + 1).tokenValue);
		boolean functionVerboseMode = function.getVerboseMode();
		if (verboseMode == true)
			function.setVerboseMode();
		/*
		 * Handling possible recursive calls that can change
		 * the structure of the tokens list, i.e.
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 */
		int tokensListSizeBefore = tokensList.size();
		Token tokenBefore = tokensList.get(pos);
		double value;
		try {
			value = function.calculate();
		} catch(StackOverflowError soe){
			value = Double.NaN;
			errorMessage = soe.getMessage();
		}
		int tokensListSizeAfter = tokensList.size();
		if (tokensListSizeBefore == tokensListSizeAfter) {
			Token tokenAfter = tokensList.get(pos);
			if ( (tokenBefore.tokenTypeId == tokenAfter.tokenTypeId) && (tokenBefore.tokenId == tokenAfter.tokenId)	) {
				setToNumber(pos, value);
				tokensList.get(pos).tokenLevel--;
				for (int argIdx = argsNumber; argIdx > 0 ; argIdx--)
					tokensList.remove(pos+argIdx);
			}
		}
		if (functionVerboseMode == false)
			function.setSilentMode();
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
	 * Constants handling.
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
		case ConstantValue.LIGHT_SPEED_ID:
			constValue = PhysicalConstants.LIGHT_SPEED;
			break;
		case ConstantValue.GRAVITATIONAL_CONSTANT_ID:
			constValue = PhysicalConstants.GRAVITATIONAL_CONSTANT;
			break;
		case ConstantValue.GRAVIT_ACC_EARTH_ID:
			constValue = PhysicalConstants.GRAVIT_ACC_EARTH;
			break;
		case ConstantValue.PLANCK_CONSTANT_ID:
			constValue = PhysicalConstants.PLANCK_CONSTANT;
			break;
		case ConstantValue.PLANCK_CONSTANT_REDUCED_ID:
			constValue = PhysicalConstants.PLANCK_CONSTANT_REDUCED;
			break;
		case ConstantValue.PLANCK_LENGTH_ID:
			constValue = PhysicalConstants.PLANCK_LENGTH;
			break;
		case ConstantValue.PLANCK_MASS_ID:
			constValue = PhysicalConstants.PLANCK_MASS;
			break;
		case ConstantValue.PLANCK_TIME_ID:
			constValue = PhysicalConstants.PLANCK_TIME;
			break;
		case ConstantValue.LIGHT_YEAR_ID:
			constValue = AstronomicalConstants.LIGHT_YEAR;
			break;
		case ConstantValue.ASTRONOMICAL_UNIT_ID:
			constValue = AstronomicalConstants.ASTRONOMICAL_UNIT;
			break;
		case ConstantValue.PARSEC_ID:
			constValue = AstronomicalConstants.PARSEC;
			break;
		case ConstantValue.KILOPARSEC_ID:
			constValue = AstronomicalConstants.KILOPARSEC;
			break;
		case ConstantValue.EARTH_RADIUS_EQUATORIAL_ID:
			constValue = AstronomicalConstants.EARTH_RADIUS_EQUATORIAL;
			break;
		case ConstantValue.EARTH_RADIUS_POLAR_ID:
			constValue = AstronomicalConstants.EARTH_RADIUS_POLAR;
			break;
		case ConstantValue.EARTH_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.EARTH_RADIUS_MEAN;
			break;
		case ConstantValue.EARTH_MASS_ID:
			constValue = AstronomicalConstants.EARTH_MASS;
			break;
		case ConstantValue.EARTH_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.EARTH_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.MOON_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.MOON_RADIUS_MEAN;
			break;
		case ConstantValue.MOON_MASS_ID:
			constValue = AstronomicalConstants.MOON_MASS;
			break;
		case ConstantValue.MONN_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.MONN_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.SOLAR_RADIUS_ID:
			constValue = AstronomicalConstants.SOLAR_RADIUS;
			break;
		case ConstantValue.SOLAR_MASS_ID:
			constValue = AstronomicalConstants.SOLAR_MASS;
			break;
		case ConstantValue.MERCURY_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.MERCURY_RADIUS_MEAN;
			break;
		case ConstantValue.MERCURY_MASS_ID:
			constValue = AstronomicalConstants.MERCURY_MASS;
			break;
		case ConstantValue.MERCURY_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.MERCURY_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.VENUS_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.VENUS_RADIUS_MEAN;
			break;
		case ConstantValue.VENUS_MASS_ID:
			constValue = AstronomicalConstants.VENUS_MASS;
			break;
		case ConstantValue.VENUS_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.VENUS_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.MARS_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.MARS_RADIUS_MEAN;
			break;
		case ConstantValue.MARS_MASS_ID:
			constValue = AstronomicalConstants.MARS_MASS;
			break;
		case ConstantValue.MARS_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.MARS_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.JUPITER_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.JUPITER_RADIUS_MEAN;
			break;
		case ConstantValue.JUPITER_MASS_ID:
			constValue = AstronomicalConstants.JUPITER_MASS;
			break;
		case ConstantValue.JUPITER_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.JUPITER_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.SATURN_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.SATURN_RADIUS_MEAN;
			break;
		case ConstantValue.SATURN_MASS_ID:
			constValue = AstronomicalConstants.SATURN_MASS;
			break;
		case ConstantValue.SATURN_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.SATURN_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.URANUS_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.URANUS_RADIUS_MEAN;
			break;
		case ConstantValue.URANUS_MASS_ID:
			constValue = AstronomicalConstants.URANUS_MASS;
			break;
		case ConstantValue.URANUS_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.URANUS_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.NEPTUNE_RADIUS_MEAN_ID:
			constValue = AstronomicalConstants.NEPTUNE_RADIUS_MEAN;
			break;
		case ConstantValue.NEPTUNE_MASS_ID:
			constValue = AstronomicalConstants.NEPTUNE_MASS;
			break;
		case ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_ID:
			constValue = AstronomicalConstants.NEPTUNE_SEMI_MAJOR_AXIS;
			break;
		case ConstantValue.TRUE_ID:
			constValue = BooleanAlgebra.TRUE;
			break;
		case ConstantValue.FALSE_ID:
			constValue = BooleanAlgebra.FALSE;
			break;
		case ConstantValue.NAN_ID:
			constValue = MathConstants.NOT_A_NUMBER;
			break;
		case ConstantValue.NPAR_ID:
			constValue = UDFVariadicParamsAtRunTime.size();
			break;
		}
		setToNumber(pos, constValue);
	}
	/**
	 * Constants handling.
	 *
	 * @param      pos                 the token position
	 */
	private void UNIT(int pos) {
		double unitValue = Double.NaN;
		switch (tokensList.get(pos).tokenId) {
		/* Ratio, Fraction */
		case Unit.PERC_ID:
			unitValue = Units.PERC;
			break;
		case Unit.PROMIL_ID:
			unitValue = Units.PROMIL;
			break;
			/* Metric prefixes */
		case Unit.YOTTA_ID:
			unitValue = Units.YOTTA;
			break;
		case Unit.ZETTA_ID:
			unitValue = Units.ZETTA;
			break;
		case Unit.EXA_ID:
			unitValue = Units.EXA;
			break;
		case Unit.PETA_ID:
			unitValue = Units.PETA;
			break;
		case Unit.TERA_ID:
			unitValue = Units.TERA;
			break;
		case Unit.GIGA_ID:
			unitValue = Units.GIGA;
			break;
		case Unit.MEGA_ID:
			unitValue = Units.MEGA;
			break;
		case Unit.KILO_ID:
			unitValue = Units.KILO;
			break;
		case Unit.HECTO_ID:
			unitValue = Units.HECTO;
			break;
		case Unit.DECA_ID:
			unitValue = Units.DECA;
			break;
		case Unit.DECI_ID:
			unitValue = Units.DECI;
			break;
		case Unit.CENTI_ID:
			unitValue = Units.CENTI;
			break;
		case Unit.MILLI_ID:
			unitValue = Units.MILLI;
			break;
		case Unit.MICRO_ID:
			unitValue = Units.MICRO;
			break;
		case Unit.NANO_ID:
			unitValue = Units.NANO;
			break;
		case Unit.PICO_ID:
			unitValue = Units.PICO;
			break;
		case Unit.FEMTO_ID:
			unitValue = Units.FEMTO;
			break;
		case Unit.ATTO_ID:
			unitValue = Units.ATTO;
			break;
		case Unit.ZEPTO_ID:
			unitValue = Units.ZEPTO;
			break;
		case Unit.YOCTO_ID:
			unitValue = Units.YOCTO;
			break;
			/* Units of length / distance */
		case Unit.METRE_ID:
			unitValue = Units.METRE;
			break;
		case Unit.KILOMETRE_ID:
			unitValue = Units.KILOMETRE;
			break;
		case Unit.CENTIMETRE_ID:
			unitValue = Units.CENTIMETRE;
			break;
		case Unit.MILLIMETRE_ID:
			unitValue = Units.MILLIMETRE;
			break;
		case Unit.INCH_ID:
			unitValue = Units.INCH;
			break;
		case Unit.YARD_ID:
			unitValue = Units.YARD;
			break;
		case Unit.FEET_ID:
			unitValue = Units.FEET;
			break;
		case Unit.MILE_ID:
			unitValue = Units.MILE;
			break;
		case Unit.NAUTICAL_MILE_ID:
			unitValue = Units.NAUTICAL_MILE;
			break;
			/* Units of area */
		case Unit.METRE2_ID:
			unitValue = Units.METRE2;
			break;
		case Unit.CENTIMETRE2_ID:
			unitValue = Units.CENTIMETRE2;
			break;
		case Unit.MILLIMETRE2_ID:
			unitValue = Units.MILLIMETRE2;
			break;
		case Unit.ARE_ID:
			unitValue = Units.ARE;
			break;
		case Unit.HECTARE_ID:
			unitValue = Units.HECTARE;
			break;
		case Unit.ACRE_ID:
			unitValue = Units.ACRE;
			break;
		case Unit.KILOMETRE2_ID:
			unitValue = Units.KILOMETRE2;
			break;
			/* Units of volume */
		case Unit.MILLIMETRE3_ID:
			unitValue = Units.MILLIMETRE3;
			break;
		case Unit.CENTIMETRE3_ID:
			unitValue = Units.CENTIMETRE3;
			break;
		case Unit.METRE3_ID:
			unitValue = Units.METRE3;
			break;
		case Unit.KILOMETRE3_ID:
			unitValue = Units.KILOMETRE3;
			break;
		case Unit.MILLILITRE_ID:
			unitValue = Units.MILLILITRE;
			break;
		case Unit.LITRE_ID:
			unitValue = Units.LITRE;
			break;
		case Unit.GALLON_ID:
			unitValue = Units.GALLON;
			break;
		case Unit.PINT_ID:
			unitValue = Units.PINT;
			break;
			/* Units of time */
		case Unit.SECOND_ID:
			unitValue = Units.SECOND;
			break;
		case Unit.MILLISECOND_ID:
			unitValue = Units.MILLISECOND;
			break;
		case Unit.MINUTE_ID:
			unitValue = Units.MINUTE;
			break;
		case Unit.HOUR_ID:
			unitValue = Units.HOUR;
			break;
		case Unit.DAY_ID:
			unitValue = Units.DAY;
			break;
		case Unit.WEEK_ID:
			unitValue = Units.WEEK;
			break;
		case Unit.JULIAN_YEAR_ID:
			unitValue = Units.JULIAN_YEAR;
			break;
			/* Units of mass */
		case Unit.KILOGRAM_ID:
			unitValue = Units.KILOGRAM;
			break;
		case Unit.GRAM_ID:
			unitValue = Units.GRAM;
			break;
		case Unit.MILLIGRAM_ID:
			unitValue = Units.MILLIGRAM;
			break;
		case Unit.DECAGRAM_ID:
			unitValue = Units.DECAGRAM;
			break;
		case Unit.TONNE_ID:
			unitValue = Units.TONNE;
			break;
		case Unit.OUNCE_ID:
			unitValue = Units.OUNCE;
			break;
		case Unit.POUND_ID:
			unitValue = Units.POUND;
			break;
			/* Units of information */
		case Unit.BIT_ID:
			unitValue = Units.BIT;
			break;
		case Unit.KILOBIT_ID:
			unitValue = Units.KILOBIT;
			break;
		case Unit.MEGABIT_ID:
			unitValue = Units.MEGABIT;
			break;
		case Unit.GIGABIT_ID:
			unitValue = Units.GIGABIT;
			break;
		case Unit.TERABIT_ID:
			unitValue = Units.TERABIT;
			break;
		case Unit.PETABIT_ID:
			unitValue = Units.PETABIT;
			break;
		case Unit.EXABIT_ID:
			unitValue = Units.EXABIT;
			break;
		case Unit.ZETTABIT_ID:
			unitValue = Units.ZETTABIT;
			break;
		case Unit.YOTTABIT_ID:
			unitValue = Units.YOTTABIT;
			break;
		case Unit.BYTE_ID:
			unitValue = Units.BYTE;
			break;
		case Unit.KILOBYTE_ID:
			unitValue = Units.KILOBYTE;
			break;
		case Unit.MEGABYTE_ID:
			unitValue = Units.MEGABYTE;
			break;
		case Unit.GIGABYTE_ID:
			unitValue = Units.GIGABYTE;
			break;
		case Unit.TERABYTE_ID:
			unitValue = Units.TERABYTE;
			break;
		case Unit.PETABYTE_ID:
			unitValue = Units.PETABYTE;
			break;
		case Unit.EXABYTE_ID:
			unitValue = Units.EXABYTE;
			break;
		case Unit.ZETTABYTE_ID:
			unitValue = Units.ZETTABYTE;
			break;
		case Unit.YOTTABYTE_ID:
			unitValue = Units.YOTTABYTE;
			break;
			/* Units of energy */
		case Unit.JOULE_ID:
			unitValue = Units.JOULE;
			break;
		case Unit.ELECTRONO_VOLT_ID:
			unitValue = Units.ELECTRONO_VOLT;
			break;
		case Unit.KILO_ELECTRONO_VOLT_ID:
			unitValue = Units.KILO_ELECTRONO_VOLT;
			break;
		case Unit.MEGA_ELECTRONO_VOLT_ID:
			unitValue = Units.MEGA_ELECTRONO_VOLT;
			break;
		case Unit.GIGA_ELECTRONO_VOLT_ID:
			unitValue = Units.GIGA_ELECTRONO_VOLT;
			break;
		case Unit.TERA_ELECTRONO_VOLT_ID:
			unitValue = Units.TERA_ELECTRONO_VOLT;
			break;
			/* Units of speed */
		case Unit.METRE_PER_SECOND_ID:
			unitValue = Units.METRE_PER_SECOND;
			break;
		case Unit.KILOMETRE_PER_HOUR_ID:
			unitValue = Units.KILOMETRE_PER_HOUR;
			break;
		case Unit.MILE_PER_HOUR_ID:
			unitValue = Units.MILE_PER_HOUR;
			break;
		case Unit.KNOT_ID:
			unitValue = Units.KNOT;
			break;
			/* Units of acceleration */
		case Unit.METRE_PER_SECOND2_ID:
			unitValue = Units.METRE_PER_SECOND2;
			break;
		case Unit.KILOMETRE_PER_HOUR2_ID:
			unitValue = Units.KILOMETRE_PER_HOUR2;
			break;
		case Unit.MILE_PER_HOUR2_ID:
			unitValue = Units.MILE_PER_HOUR2;
			break;
			/* Units of angle */
		case Unit.RADIAN_ARC_ID:
			unitValue = Units.RADIAN_ARC;
			break;
		case Unit.DEGREE_ARC_ID:
			unitValue = Units.DEGREE_ARC;
			break;
		case Unit.MINUTE_ARC_ID:
			unitValue = Units.MINUTE_ARC;
			break;
		case Unit.SECOND_ARC_ID:
			unitValue = Units.SECOND_ARC;
			break;
		}
		setToNumber(pos, unitValue);
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
	 * Tetration handling.
	 *
	 * @param      pos                 the token position
	 */
	private void TETRATION(int pos) {
		double a = getTokenValue(pos-1);
		double n = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, MathFunctions.tetration(a, n), true);
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
	 * Bitwise COMPL
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_COMPL(int pos) {
		long a = (long)getTokenValue(pos+1);
		setToNumber(pos, ~a);
		tokensList.remove(pos+1);
	}
	/**
	 * Bitwise AND
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_AND(int pos) {
		long a = (long)getTokenValue(pos-1);
		long b = (long)getTokenValue(pos+1);
		opSetDecreaseRemove(pos, a & b);
	}
	/**
	 * Bitwise OR
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_OR(int pos) {
		long a = (long)getTokenValue(pos-1);
		long b = (long)getTokenValue(pos+1);
		opSetDecreaseRemove(pos, a | b);
	}
	/**
	 * Bitwise XOR
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_XOR(int pos) {
		long a = (long)getTokenValue(pos-1);
		long b = (long)getTokenValue(pos+1);
		opSetDecreaseRemove(pos, a ^ b);
	}
	/**
	 * Bitwise LEFT SHIFT
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_LEFT_SHIFT(int pos) {
		long a = (long)getTokenValue(pos-1);
		int b = (int)getTokenValue(pos+1);
		opSetDecreaseRemove(pos, a << b);
	}
	/**
	 * Bitwise RIGHT SHIFT
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_RIGHT_SHIFT(int pos) {
		long a = (long)getTokenValue(pos-1);
		int b = (int)getTokenValue(pos+1);
		opSetDecreaseRemove(pos, a >> b);
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
	 * Converts radians to degrees
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
	 * Percentage
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void PERC(int pos) {
		double a = getTokenValue(pos-1);
		setToNumber(pos, a * Units.PERC);
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
	 * Is Not-a-Number
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ISNAN(int pos) {
		double x = getTokenValue(pos+1);
		if (Double.isNaN(x))
			f1SetDecreaseRemove(pos, BooleanAlgebra.TRUE);
		else
			f1SetDecreaseRemove(pos, BooleanAlgebra.FALSE);
	}
	/**
	 * Number of digits in base 10
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void NDIG10(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, NumberTheory.numberOfDigits(x) );
	}
	/**
	 * Number of prime factors - distinct
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void NFACT(int pos) {
		double n = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, NumberTheory.numberOfPrimeFactors(n) );
	}
	/**
	 * Arcuus secant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ARCSEC(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.asec(x) );
	}
	/**
	 * Arcuus cosecant
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void ARCCSC(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, MathFunctions.acosec(x) );
	}
	/**
	 * Gamma special function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void GAMMA(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.gamma(x) );
	}
	/**
	 * Lambert-W special function, principal branch 0
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void LAMBERT_W0(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.lambertW(x, 0) );
	}
	/**
	 * Lambert-W special function, branch = -1
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void LAMBERT_W1(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.lambertW(x, -1) );
	}
	/**
	 * Signum of Gamma special function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void SGN_GAMMA(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.sgnGamma(x) );
	}
	/**
	 * Log Gamma special function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void LOG_GAMMA(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.logGamma(x) );
	}
	/**
	 * Digamma special function
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void DI_GAMMA(int pos) {
		double x = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, SpecialFunctions.diGamma(x) );
	}
	/**
	 * User Defined Variadic function param value
	 * Sets tokens to number token
	 *
	 * @param      pos                 the token position
	 */
	private void UDF_PARAM(int pos) {
		double value = Double.NaN;
		double x = getTokenValue(pos+1);
		int npar = UDFVariadicParamsAtRunTime.size();
		if ( (Double.isNaN(x) == false ) && (x != Double.POSITIVE_INFINITY) && (x != Double.NEGATIVE_INFINITY) ) {
			int i = (int)MathFunctions.integerPart(x);
			if (i == 0) {
				value = npar;
			} else if (Math.abs(i) <= npar) {
				if (i >= 1) {
					value = UDFVariadicParamsAtRunTime.get(i - 1);
				} else if (i <= -1) {
					value = UDFVariadicParamsAtRunTime.get(npar + i);
				}
			}
		}
		f1SetDecreaseRemove(pos, value );
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
	private List<Double> getNumbers(int pos) {
		List<Double> numbers = new ArrayList<Double>();
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
		double n = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.binomCoeff(n, k) );
	}
	/**
	 * Number of permutations
	 *
	 * @param      pos                 the token position
	 */
	private void PERMUTATIONS(int pos) {
		double n = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.numberOfPermutations(n, k) );
	}
	/**
	 * Beta special function
	 * @param      pos                 the token position
	 */
	private void BETA(int pos) {
		double x = getTokenValue(pos+1);
		double y = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, SpecialFunctions.beta(x, y) );
	}
	/**
	 * Log beta special function
	 * @param      pos                 the token position
	 */
	private void LOG_BETA(int pos) {
		double x = getTokenValue(pos+1);
		double y = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, SpecialFunctions.logBeta(x, y) );
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
		f2SetDecreaseRemove(pos, MathFunctions.Stirling1Number(n, k) );
	}
	/**
	 * Stirling number of the second kind.
	 *
	 * @param      pos                 the token position
	 */
	private void STIRLING2_NUMBER(int pos) {
		double n = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.Stirling2Number(n, k) );
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
	 * Number of digits in given numeral system
	 *
	 * @param      pos                 the token position
	 */
	private void NDIG(int pos) {
		double number = getTokenValue(pos+1);
		double numeralSystemBase = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, NumberTheory.numberOfDigits(number, numeralSystemBase) );
	}
	/**
	 * Digit at position - base 10 numeral system
	 *
	 * @param      pos                 the token position
	 */
	private void DIGIT10(int pos) {
		double number = getTokenValue(pos+1);
		double position = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, NumberTheory.digitAtPosition(number, position) );
	}
	/**
	 * Prime factor value
	 *
	 * @param      pos                 the token position
	 */
	private void FACTVAL(int pos) {
		double number = getTokenValue(pos+1);
		double id = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, NumberTheory.primeFactorValue(number, id) );
	}
	/**
	 * Prime factor value exponent
	 *
	 * @param      pos                 the token position
	 */
	private void FACTEXP(int pos) {
		double number = getTokenValue(pos+1);
		double id = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, NumberTheory.primeFactorExponent(number, id) );
	}
	/**
	 * Nth order root
	 *
	 * @param      pos                 the token position
	 */
	private void ROOT(int pos) {
		double n = getTokenValue(pos+1);
		double x = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, MathFunctions.root(n, x) );
	}
	/**
	 * Lower incomplete special Gamma function
	 *
	 * @param      pos                 the token position
	 */
	private void INC_GAMMA_LOWER(int pos) {
		double s = getTokenValue(pos+1);
		double x = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, SpecialFunctions.incompleteGammaLower(s, x) );
	}
	/**
	 * Upper incomplete special Gamma function
	 *
	 * @param      pos                 the token position
	 */
	private void INC_GAMMA_UPPER(int pos) {
		double s = getTokenValue(pos+1);
		double x = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, SpecialFunctions.incompleteGammaUpper(s, x) );
	}
	/**
	 * Lower regularized special Gamma function
	 *
	 * @param      pos                 the token position
	 */
	private void REG_GAMMA_LOWER(int pos) {
		double s = getTokenValue(pos+1);
		double x = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, SpecialFunctions.regularizedGammaLowerP(s, x) );
	}
	/**
	 * Lower regularized special Gamma function
	 *
	 * @param      pos                 the token position
	 */
	private void REG_GAMMA_UPPER(int pos) {
		double s = getTokenValue(pos+1);
		double x = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, SpecialFunctions.regularizedGammaUpperQ(s, x) );
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
		 * The goal is to avoid calculation
		 * of not needed part of IF function
		 * Example: If(1=1, 2, sin(3) ) - here sin(3) does not
		 * require to be calculated.
		 */
		List<FunctionParameter> ifParams = getFunctionParameters(pos, tokensList);
		FunctionParameter ifParam = ifParams.get(0);
		Expression ifExp = new Expression(ifParam.paramStr, ifParam.tokens, argumentsList, functionsList, constantsList, KEEP_ULP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<FunctionParameter> iffParams = getFunctionParameters(pos, tokensList);
		FunctionParameter iffParam = iffParams.get(0);
		int parametersNumber = iffParams.size();
		int trueParamNumber;
		int paramNumber;
		paramNumber = 1;
		Expression iffExp;
		double iffValue = 0;
		boolean iffCon = true;
		do {
			iffExp = new Expression(iffParam.paramStr, iffParam.tokens, argumentsList, functionsList, constantsList, KEEP_ULP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
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
	private void CHI(int pos) {
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
	private void CHI_LR(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, MathFunctions.chi_LR(x, a, b) );
	}
	/**
	 * Characteristic function [a,b)
	 *
	 * @param      pos                 the token position
	 */
	private void CHI_L(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, MathFunctions.chi_L(x, a, b) );
	}
	/**
	 * Characteristic function (a,b]
	 *
	 * @param      pos                 the token position
	 */
	private void CHI_R(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, MathFunctions.chi_R(x, a, b) );
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
	 * Digit at position - numeral system with given base
	 *
	 * @param      pos                 the token position
	 */
	private void DIGIT(int pos) {
		double number = getTokenValue(pos+1);
		double position = getTokenValue(pos+2);
		double numeralSystemBase = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, NumberTheory.digitAtPosition(number, position, numeralSystemBase) );
	}
	/**
	 * Incomplete beta special function
	 * @param      pos                 the token position
	 */
	private void INC_BETA(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, SpecialFunctions.incompleteBeta(a, b, x) );
	}
	/**
	 * Regularized incomplete beta special function
	 * @param      pos                 the token position
	 */
	private void REG_BETA(int pos) {
		double x = getTokenValue(pos+1);
		double a = getTokenValue(pos+2);
		double b = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, SpecialFunctions.regularizedBeta(a, b, x) );
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
	private void updateMissingTokens(List<Token> tokens, String keyWord, int tokenId, int tokenTypeId) {
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
		iterParams.fromExp = new Expression(iterParams.fromParam.paramStr, iterParams.fromParam.tokens, argumentsList, functionsList, constantsList, KEEP_ULP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
		iterParams.toExp = new Expression(iterParams.toParam.paramStr, iterParams.toParam.tokens, argumentsList, functionsList, constantsList, KEEP_ULP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
		iterParams.funExp = new Expression(iterParams.funParam.paramStr, iterParams.funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
			iterParams.deltaExp = new Expression(iterParams.deltaParam.paramStr, iterParams.deltaParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		/*
		 * 2 params - der( f(x), x )
		 * 3 params - der( f(x), x, x0 )
		 * 4 params - der( f(x), x, eps, maxsteps )
		 * 5 params - der( f(x), x, x0, eps, maxsteps )
		 */
		List<FunctionParameter> derParams = getFunctionParameters(pos, tokensList);
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
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		double x0 = Double.NaN;
		/*
		 * der( f(x), x )
		 * der( f(x), x, eps, maxsteps )
		 */
		if ( (derParams.size() == 2) || (derParams.size() == 4) )
			x0 = x.argument.getArgumentValue();
		/*
		 * der( f(x), x, x0 )
		 * der( f(x), x, x0, eps, maxsteps )
		 */
		if ( (derParams.size() == 3) || (derParams.size() == 5) ) {
			FunctionParameter x0Param = derParams.get(2);
			if (x.presence == Argument.NOT_FOUND)
				updateMissingTokens(x0Param.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			Expression x0Expr = new Expression(x0Param.paramStr, x0Param.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			x0 = x0Expr.calculate();
		}
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		/*
		 * der( f(x), x, eps, maxsteps )
		 * der( f(x), x, x0, eps, maxsteps )
		 */
		if ( (derParams.size() == 4) || (derParams.size() == 5) ) {
			FunctionParameter epsParam;
			FunctionParameter maxStepsParam;
			if (derParams.size() == 4) {
				epsParam = derParams.get(2);
				maxStepsParam = derParams.get(3);
			} else {
				epsParam = derParams.get(3);
				maxStepsParam = derParams.get(4);
			}
			if (x.presence == Argument.NOT_FOUND) {
				updateMissingTokens(epsParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
				updateMissingTokens(maxStepsParam.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			}
			Expression epsExpr = new Expression(epsParam.paramStr, epsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			Expression maxStepsExp = new Expression(maxStepsParam.paramStr, maxStepsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<FunctionParameter> derParams = getFunctionParameters(pos, tokensList);
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
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression nExp = new Expression(nParam.paramStr, nParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
			Expression epsExpr = new Expression(epsParam.paramStr, epsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			Expression maxStepsExp = new Expression(maxStepsParam.paramStr, maxStepsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<FunctionParameter> intParams = getFunctionParameters(pos, tokensList);
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
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression aExp = new Expression(aParam.paramStr, aParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression bExp = new Expression(bParam.paramStr, bParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		calcSetDecreaseRemove(pos, Calculus.integralTrapezoid(funExp, x.argument, aExp.calculate(), bExp.calculate(), eps, maxSteps) );
		clearParamArgument(x);
	}
	/**
	 * Function SOLVE
	 *
	 * @param      pos                 the token position
	 */
	private void SOLVE(int pos) {
		/**
		 * Default epsilon
		 */
		final double DEF_EPS		= 1E-9;
		/*
		 * Default max number of steps
		 */
		final int DEF_MAX_STEPS		= 100;
		List<FunctionParameter> intParams = getFunctionParameters(pos, tokensList);
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
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression aExp = new Expression(aParam.paramStr, aParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression bExp = new Expression(bParam.paramStr, bParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		calcSetDecreaseRemove(pos, Calculus.solveBrent(funExp, x.argument, aExp.calculate(), bExp.calculate(), eps, maxSteps) );
		clearParamArgument(x);
	}
	/**
	 * Forward difference operator
	 *
	 * @param      pos                 the token position
	 */
	private void FORWARD_DIFFERENCE(int pos) {
		List<FunctionParameter> params = getFunctionParameters(pos, tokensList);
		FunctionParameter funParam = params.get(0);
		FunctionParameter xParam = params.get(1);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		if (verboseMode == true)
			funExp.setVerboseMode();
		double h = 1;
		if (params.size() == 3) {
			FunctionParameter hParam = params.get(2);
			Expression hExp = new Expression(hParam.paramStr, hParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<FunctionParameter> params = getFunctionParameters(pos, tokensList);
		FunctionParameter funParam = params.get(0);
		FunctionParameter xParam = params.get(1);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		if (verboseMode == true)
			funExp.setVerboseMode();
		double h = 1;
		if (params.size() == 3) {
			FunctionParameter hParam = params.get(2);
			Expression hExp = new Expression(hParam.paramStr, hParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ULP_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.min( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Maximum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void MAX_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.max( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Sum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void SUM_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.sum( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Sum variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void PROD_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.prod( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Average variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void AVG_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, Statistics.avg( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Variance variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void VAR_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, Statistics.var( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Standard deviation variadic
	 * Sets tokens to number token
	 *
	 * @param pos token index (position)
	 */
	private void STD_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, Statistics.std( mXparser.arrayList2double(numbers) ), numbers.size(), true);
	}
	/**
	 * Continued fraction
	 *
	 * @param      pos                 the token position
	 */
	private void CONTINUED_FRACTION(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, MathFunctions.continuedFraction( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Continued polynomial
	 *
	 * @param      pos                 the token position
	 */
	private void CONTINUED_POLYNOMIAL(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, MathFunctions.continuedPolynomial( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Greates Common Divisor
	 *
	 * @param      pos                 the token position
	 */
	private void GCD(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.gcd( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Lowest Common Multiply
	 *
	 * @param      pos                 the token position
	 */
	private void LCM(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.lcm( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * Random number from list
	 *
	 * @param      pos                 the token position
	 */
	private void RND_LIST(int pos) {
		List<Double> numbers = getNumbers(pos);
		int n = numbers.size();
		int i = ProbabilityDistributions.rndIndex(n, ProbabilityDistributions.randomGenerator);
		variadicSetDecreaseRemove(pos, numbers.get(i), numbers.size() );
	}
	/**
	 * Coalesce
	 *
	 * @param      pos                 the token position
	 */
	private void COALESCE(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, MathFunctions.coalesce( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * OR_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void OR_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, BooleanAlgebra.orVariadic( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * AND_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void AND_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, BooleanAlgebra.andVariadic( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * XOR_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void XOR_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, BooleanAlgebra.xorVariadic( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * ARGMIN_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void ARGMIN_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.argmin( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * ARGMAX_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void ARGMAX_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.argmax( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * MEDIAN_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void MEDIAN_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, Statistics.median( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * MODE_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void MODE_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, Statistics.mode( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * BASE_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void BASE_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.convOthBase2Decimal( mXparser.arrayList2double(numbers) ), numbers.size() );
	}
	/**
	 * NDIST_VARIADIC
	 *
	 * @param      pos                 the token position
	 */
	private void NDIST_VARIADIC(int pos) {
		List<Double> numbers = getNumbers(pos);
		variadicSetDecreaseRemove(pos, NumberTheory.numberOfDistValues( mXparser.arrayList2double(numbers) ), numbers.size() );
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
	public boolean checkLexSyntax() {
		boolean syntax = NO_SYNTAX_ERRORS;
		recursionCallsCounter = 0;
		if (expressionString.length() == 0) {
	    	syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
			errorMessage = "Empty expression string\n";
			return syntax;
		}
		SyntaxChecker syn = new SyntaxChecker(new ByteArrayInputStream(expressionString.getBytes()));
	    try {
	        syn.checkSyntax();
	    } catch (Exception e) {
	    	syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
			errorMessage = "lexical error \n\n" + e.getMessage() + "\n";
	    }
		return syntax;
	}
	/**
	 * Checks syntax of the expression string.
	 *
	 * @return     true if syntax is ok
	 */
	public boolean checkSyntax() {
		boolean syntax = checkSyntax("[" + expressionString + "] ", false);
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
	private boolean checkSyntax(String level, boolean functionWithBodyExt) {
		if ( (expressionWasModified == false) && (syntaxStatus == NO_SYNTAX_ERRORS) && (optionsChangesetNumber == mXparser.optionsChangesetNumber) ) {
			errorMessage = level + "already checked - no errors!\n";
			recursionCallPending = false;
			return NO_SYNTAX_ERRORS;
		}
		optionsChangesetNumber = mXparser.optionsChangesetNumber;
		if (functionWithBodyExt) {
			syntaxStatus = NO_SYNTAX_ERRORS;
			recursionCallPending = false;
			expressionWasModified = false;
			errorMessage = errorMessage + level + "function with extended body - assuming no errors.\n";
			return NO_SYNTAX_ERRORS;
		}
		recursionCallPending = true;
		errorMessage = level +"checking ...\n";
		boolean syntax = NO_SYNTAX_ERRORS;
		if (expressionString.length() == 0) {
	    	syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
			errorMessage = errorMessage + level + "Empty expression string\n";
			syntaxStatus = syntax;
			recursionCallPending = false;
			return syntax;
		}
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
								boolean syntaxRec = arg.argumentExpression.checkSyntax(level + "-> " + "[" + t.tokenStr + "] = [" + arg.argumentExpression.getExpressionString() + "] ", false);
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
							boolean syntaxRec = arg.argumentExpression.checkSyntax(level + "-> " + "[" + t.tokenStr + "] = [" + arg.argumentExpression.getExpressionString() + "] ", false);
							syntax = syntax && syntaxRec;
							errorMessage = errorMessage + level + tokenStr + "checking recursive argument ...\n" + arg.argumentExpression.getErrorMessage();
						}
				}
				/*
				 * Check syntax for "NOT RECOGNIZED" token
				 */
				if (t.tokenTypeId == Token.NOT_MATCHED) {
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
					int npar = getParametersNumber(tokenIndex);
					if (npar == 0) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<USER_DEFINED_FUNCTION> expecting at least one argument.\n";
					} else if ( (fun.isVariadic == false) && ( fun.getParametersNumber() != npar ) ) {
						syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
						errorMessage = errorMessage + level + tokenStr + "<USER_DEFINED_FUNCTION> expecting " + npar + " arguments.\n";
					} else
						if ( (fun.functionExpression != this) && (fun.functionExpression.recursionCallPending == false) ) {
							boolean syntaxRec;
							if (fun.getFunctionBodyType() == Function.BODY_RUNTIME)
								syntaxRec = fun.functionExpression.checkSyntax(level + "-> " + "[" + t.tokenStr + "] = [" + fun.functionExpression.getExpressionString() + "] ", false);
							else
								syntaxRec = fun.functionExpression.checkSyntax(level + "-> " + "[" + t.tokenStr + "] = [" + fun.functionExpression.getExpressionString() + "] ", true);
							syntax = syntax && syntaxRec;
							if (fun.isVariadic)
								errorMessage = errorMessage + level + tokenStr + "checking variadic user defined function ...\n" + fun.functionExpression.getErrorMessage();
							else
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
					List<FunctionParameter> funParams = null;
					if (paramsNumber > 0)
						funParams = getFunctionParameters(tokenIndex, initialTokens);
					if ( (t.tokenId == CalculusOperator.DER_ID) || (t.tokenId == CalculusOperator.DER_LEFT_ID) || (t.tokenId == CalculusOperator.DER_RIGHT_ID) )  {
						if ( (paramsNumber < 2) || (paramsNumber > 5) ) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "<DERIVATIVE> expecting 2 or 3 or 4 or 5 calculus parameters.\n";
						} else {
							if ( (paramsNumber == 2) || (paramsNumber == 4) ) {
								FunctionParameter argParam = funParams.get(1);
								if ( checkIfKnownArgument(argParam) == false) {
									syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
									errorMessage = errorMessage + level + tokenStr + "<DERIVATIVE> argument was expected.\n";
								}
							} else {
								FunctionParameter argParam = funParams.get(1);
								stackElement = new SyntaxStackElement(argParam.paramStr, t.tokenLevel+1);
								syntaxStack.push(stackElement);
								int errors = checkCalculusParameter(stackElement.tokenStr);
								if (errors > 0) {
									syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
									errorMessage = errorMessage + level + tokenStr + "<DERIVATIVE> Found duplicated key words for calculus parameter " + "(" + stackElement.tokenStr + ", " + errors + ").\n";
								}
								if ( !checkIfKnownArgument(argParam) && !checkIfUnknownToken(argParam) ) {
									syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
									errorMessage = errorMessage + level + tokenStr + "<DERIVATIVE> One token (argument or unknown) was expected.\n";
								}
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
					if (	(t.tokenId == CalculusOperator.INT_ID) ||
							(t.tokenId == CalculusOperator.SOLVE_ID)	) {
						if (paramsNumber !=4) {
							syntax = SYNTAX_ERROR_OR_STATUS_UNKNOWN;
							errorMessage = errorMessage + level + tokenStr + "<INTEGRAL/SOLVE> expecting 4 calculus arguments.\n";
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
		if ( syntaxStatus == SYNTAX_ERROR_OR_STATUS_UNKNOWN) {
			/*
			 * Recursive counter to avoid infinite loops in expressions
			 * created in they way shown in below examples
			 *
			 * Argument x = new Argument("x = 2*y");
			 * Argument y = new Argument("y = 2*x");
			 * x.addDefinitions(y);
			 * y.addDefinitions(x);
			 *
			 * Function f = new Function("f(x) = 2*g(x)");
			 * Function g = new Function("g(x) = 2*f(x)");
			 * f.addDefinitions(g);
			 * g.addDefinitions(f);
			 *
			 */
			recursionCallsCounter = 0;
			return Double.NaN;
		}
		/*
		 * Building initial tokens only if this is first recursion call
		 * or we have expression clone, helps to solve problem with
		 * definitions similar to the below example
		 *
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 */
		if ( (recursionCallsCounter == 0) || (internalClone) )
			copyInitialTokens();
		/*
		 * if nothing to calculate return Double.NaN
		 */
		if (tokensList.size() == 0) {
			recursionCallsCounter = 0;
			return Double.NaN;
		}
		/*
		 * Incrementing recursive counter to avoid infinite loops in expressions
		 * created in they way shown in below examples
		 *
		 * Argument x = new Argument("x = 2*y");
		 * Argument y = new Argument("y = 2*x");
		 * x.addDefinitions(y);
		 * y.addDefinitions(x);
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 *
		 */
		if (recursionCallsCounter >= mXparser.MAX_RECURSION_CALLS) {
			recursionCallsCounter = 0;
			this.errorMessage = errorMessage + "\n" + "[" + description + "][" + expressionString + "] " + "Maximum recursion calls reached.\n";
			return Double.NaN;
		}
		recursionCallsCounter++;
		/*
		 * position for particular tokens types
		 */
		int calculusPos;
		int ifPos;
		int iffPos;
		int variadicFunPos;
		int depArgPos;
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
		int tetrationPos;
		int powerNum;
		int factPos;
		int modPos;
		int percPos;
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
		int bitwisePos;
		int bitwiseComplPos;
		Token token;
		Token tokenL;
		Token tokenR;
		Argument argument;
		int tokensNumber;
		int maxPartLevel;
		int lPos;
		int rPos;
		int tokenIndex;
		int pos;
		int p;
		List<Integer> commas = null;
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
			depArgPos = -1;
			f3ArgPos = -1;
			f2ArgPos = -1;
			f1ArgPos = -1;
			userFunPos = -1;
			plusPos = -1;
			minusPos = -1;
			multiplyPos = -1;
			dividePos = -1;
			powerPos = -1;
			tetrationPos = -1;
			factPos = -1;
			modPos = -1;
			percPos = -1;
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
			bitwisePos = -1;
			bitwiseComplPos = -1;
			tokensNumber = tokensList.size();
			/* calculus or if or iff operations ... */
			p = -1;
			do {
				p++;
				token = tokensList.get(p);
				if (token.tokenTypeId == CalculusOperator.TYPE_ID) calculusPos = p;
				else if ( (token.tokenTypeId == Function3Arg.TYPE_ID) && (token.tokenId == Function3Arg.IF_CONDITION_ID) ) ifPos = p;
				else if ( (token.tokenTypeId == FunctionVariadic.TYPE_ID) && (token.tokenId == FunctionVariadic.IFF_ID) ) iffPos = p;
			} while ( (p < tokensNumber-1 ) && (calculusPos < 0) && (ifPos < 0) && (iffPos < 0) );
			if ( (calculusPos < 0) && (ifPos < 0) && (iffPos < 0) ){
				/* Find start index of the tokens with the highest level */
				for (tokenIndex = 0; tokenIndex < tokensNumber; tokenIndex++) {
					token = tokensList.get(tokenIndex);
					if (token.tokenLevel > maxPartLevel) {
						maxPartLevel = tokensList.get(tokenIndex).tokenLevel;
						lPos = tokenIndex;
					}
					if (token.tokenTypeId == Argument.TYPE_ID) {
						argument = argumentsList.get( tokensList.get(tokenIndex).tokenId );
						/*
						 * Only free arguments can be directly
						 * replaced with numbers. This is in order to
						 * avoid tokensList change in possible
						 * recursive calls from dependent arguments
						 * as dependent arguments will not work
						 * on argument clones. Here we are also checking
						 * if there is dependent argument in expression.
						 */
						if (argument.argumentType == Argument.FREE_ARGUMENT)
							FREE_ARGUMENT(tokenIndex);
						else
							depArgPos = tokenIndex;
					} else if (token.tokenTypeId == ConstantValue.TYPE_ID)
						CONSTANT(tokenIndex);
					else if (token.tokenTypeId == Unit.TYPE_ID)
						UNIT(tokenIndex);
					else if (token.tokenTypeId == Constant.TYPE_ID)
						USER_CONSTANT(tokenIndex);
					else if (token.tokenTypeId == RandomVariable.TYPE_ID)
						RANDOM_VARIABLE(tokenIndex);
				}
				/*
				 * If dependent argument was found then dependent arguments
				 * in the tokensList need to replaced one after another in
				 * separate loops as tokensList might change in some other
				 * call done in possible recursive call.
				 *
				 * Argument x = new Argument("x = 2*y");
				 * Argument y = new Argument("y = 2*x");
				 * x.addDefinitions(y);
				 * y.addDefinitions(x);
				 */
				if (depArgPos >= 0) {
					boolean depArgFound;
					do {
						depArgFound = false;
						int currentTokensNumber = tokensList.size();
						for (tokenIndex = 0; tokenIndex < currentTokensNumber; tokenIndex++) {
							token = tokensList.get(tokenIndex);
							if (token.tokenTypeId == Argument.TYPE_ID) {
								argument = argumentsList.get( tokensList.get(tokenIndex).tokenId );
								if (argument.argumentType == Argument.DEPENDENT_ARGUMENT) {
									DEPENDENT_ARGUMENT(tokenIndex);
									depArgFound = true;
									break;
								}
							}
						}
					} while (depArgFound);
				} else {
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
					boolean leftIsNumber;
					boolean rigthIsNumber;
					for (pos = lPos; pos <= rPos; pos++) {
						leftIsNumber = false;
						rigthIsNumber = false;
						token = tokensList.get(pos);
						if (pos-1 >= 0) {
							tokenL = tokensList.get(pos-1);
							if (tokenL.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) leftIsNumber = true;
						}
						if (pos+1 < tokensNumber) {
							tokenR = tokensList.get(pos+1);
							if (tokenR.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) rigthIsNumber = true;
						}
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
							if ( (token.tokenId == Operator.POWER_ID) && (leftIsNumber && rigthIsNumber) ) {
								powerPos = pos;
								powerNum++;
							} else
							if ( (token.tokenId == Operator.TETRATION_ID) && (leftIsNumber && rigthIsNumber) ) {
								tetrationPos = pos;
							} else
							if ( (token.tokenId == Operator.FACT_ID) && (factPos < 0) && (leftIsNumber)) {
								factPos = pos;
							} else
							if ( (token.tokenId == Operator.PERC_ID) && (percPos < 0) && (leftIsNumber)) {
								percPos = pos;
							} else
							if ( (token.tokenId == Operator.MOD_ID) && (modPos < 0) && (leftIsNumber && rigthIsNumber)) {
								modPos = pos;
							} else
							if ( (token.tokenId == Operator.PLUS_ID)  && (plusPos < 0) && (leftIsNumber && rigthIsNumber))
								plusPos = pos;
							else
							if ( (token.tokenId == Operator.MINUS_ID)  && (minusPos < 0) && (rigthIsNumber))
								minusPos = pos;
							else
							if ( (token.tokenId == Operator.MULTIPLY_ID) && (multiplyPos < 0) && (leftIsNumber && rigthIsNumber))
								multiplyPos = pos;
							else
							if ( (token.tokenId == Operator.DIVIDE_ID) && (dividePos < 0) && (leftIsNumber && rigthIsNumber))
								dividePos = pos;
						} else
						if ( (token.tokenTypeId == BooleanOperator.TYPE_ID) && (token.tokenId == BooleanOperator.NEG_ID) && (negPos < 0) && (rigthIsNumber)) {
							negPos = pos;
						} else
						if ( (token.tokenTypeId == BooleanOperator.TYPE_ID) && (bolPos < 0) && (leftIsNumber && rigthIsNumber)) {
							bolPos = pos;
						} else
						if (token.tokenTypeId == BinaryRelation.TYPE_ID) {
							if ( (token.tokenId == BinaryRelation.EQ_ID) && (eqPos < 0) && (leftIsNumber && rigthIsNumber))
								eqPos = pos;
							else
							if ( (token.tokenId == BinaryRelation.NEQ_ID) && (neqPos < 0) && (leftIsNumber && rigthIsNumber))
								neqPos = pos;
							else
							if ( (token.tokenId == BinaryRelation.LT_ID) && (ltPos < 0) && (leftIsNumber && rigthIsNumber))
								ltPos = pos;
							else
							if ( (token.tokenId == BinaryRelation.GT_ID) && (gtPos < 0) && (leftIsNumber && rigthIsNumber))
								gtPos = pos;
							else
							if ( (token.tokenId == BinaryRelation.LEQ_ID) && (leqPos < 0) && (leftIsNumber && rigthIsNumber))
								leqPos = pos;
							else
							if ( (token.tokenId == BinaryRelation.GEQ_ID) && (geqPos < 0) && (leftIsNumber && rigthIsNumber))
								geqPos = pos;
						} else
						if (token.tokenTypeId == BitwiseOperator.TYPE_ID) {
							if ((token.tokenId == BitwiseOperator.COMPL_ID) && (bitwiseComplPos < 0) && (rigthIsNumber))
								bitwiseComplPos = pos;
							else
							if ((bitwisePos < 0) && (leftIsNumber && rigthIsNumber))
								bitwisePos = pos;
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
			}
			/* calculus operations */
			if (calculusPos >= 0) calculusCalc(calculusPos);
			else
			if (ifPos >= 0) {
				IF_CONDITION(ifPos);
			} else
			if (iffPos >= 0) {
				IFF(iffPos);
			} else	/* ... arguments ... */
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
			if (tetrationPos >= 0) {
				TETRATION(tetrationPos);
			} else
			if (powerPos >= 0) {
				POWER(powerPos);
			} else
			if (factPos >= 0) {
				FACT(factPos);
			} else
			if (percPos >= 0) {
				PERC(percPos);
			} else
			if (modPos >= 0) {
				MODULO(modPos);
			} else
			if (negPos >= 0) {
				NEG(negPos);
			} else
			if (bitwiseComplPos >= 0) {
				BITWISE_COMPL(bitwiseComplPos);
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
			/* ... bitwise operators  ... */
			if (bitwisePos >= 0) bitwiseCalc(bitwisePos);
			else
			if ( (lParPos >= 0) && (rParPos > lParPos) ) {
				PARENTHESES(lParPos,rParPos);
			} else if (tokensList.size() > 1) {
				this.errorMessage = errorMessage + "\n" + "[" + description + "][" + expressionString + "] " + "Fatal error - not know what to do with tokens while calculate().\n";
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
		recursionCallsCounter = 0;
		double result = tokensList.get(0).tokenValue;
		if (mXparser.almostIntRounding) {
			double resultint = Math.round(result);
			if ( Math.abs(result-resultint) <= BinaryRelations.getEpsilon() )
				result = resultint;
		}
		return result;
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
		case Function1Arg.ISNAN_ID: ISNAN(pos); break;
		case Function1Arg.NDIG10_ID: NDIG10(pos); break;
		case Function1Arg.NFACT_ID: NFACT(pos); break;
		case Function1Arg.ARCSEC_ID: ARCSEC(pos); break;
		case Function1Arg.ARCCSC_ID: ARCCSC(pos); break;
		case Function1Arg.GAMMA_ID: GAMMA(pos); break;
		case Function1Arg.LAMBERT_W0_ID: LAMBERT_W0(pos); break;
		case Function1Arg.LAMBERT_W1_ID: LAMBERT_W1(pos); break;
		case Function1Arg.SGN_GAMMA_ID: SGN_GAMMA(pos); break;
		case Function1Arg.LOG_GAMMA_ID: LOG_GAMMA(pos); break;
		case Function1Arg.DI_GAMMA_ID: DI_GAMMA(pos); break;
		case Function1Arg.PARAM_ID: UDF_PARAM(pos); break;
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
		case Function2Arg.NDIG_ID: NDIG(pos); break;
		case Function2Arg.DIGIT10_ID: DIGIT10(pos); break;
		case Function2Arg.FACTVAL_ID: FACTVAL(pos); break;
		case Function2Arg.FACTEXP_ID: FACTEXP(pos); break;
		case Function2Arg.ROOT_ID: ROOT(pos); break;
		case Function2Arg.INC_GAMMA_LOWER_ID: INC_GAMMA_LOWER(pos); break;
		case Function2Arg.INC_GAMMA_UPPER_ID: INC_GAMMA_UPPER(pos); break;
		case Function2Arg.REG_GAMMA_LOWER_ID: REG_GAMMA_LOWER(pos); break;
		case Function2Arg.REG_GAMMA_UPPER_ID: REG_GAMMA_UPPER(pos); break;
		case Function2Arg.PERMUTATIONS_ID: PERMUTATIONS(pos); break;
		case Function2Arg.BETA_ID: BETA(pos); break;
		case Function2Arg.LOG_BETA_ID: LOG_BETA(pos); break;
		}
	}
	/**
	 * Calculates function with 3 arguments
	 * @param pos   Token position
	 */
	private void f3ArgCalc(int pos) {
		switch (tokensList.get(pos).tokenId) {
		case Function3Arg.IF_ID: IF(pos); break;
		case Function3Arg.CHI_ID: CHI(pos); break;
		case Function3Arg.CHI_LR_ID: CHI_LR(pos); break;
		case Function3Arg.CHI_L_ID: CHI_L(pos); break;
		case Function3Arg.CHI_R_ID: CHI_R(pos); break;
		case Function3Arg.PDF_UNIFORM_CONT_ID: PDF_UNIFORM_CONT(pos); break;
		case Function3Arg.CDF_UNIFORM_CONT_ID: CDF_UNIFORM_CONT(pos); break;
		case Function3Arg.QNT_UNIFORM_CONT_ID: QNT_UNIFORM_CONT(pos); break;
		case Function3Arg.PDF_NORMAL_ID: PDF_NORMAL(pos); break;
		case Function3Arg.CDF_NORMAL_ID: CDF_NORMAL(pos); break;
		case Function3Arg.QNT_NORMAL_ID: QNT_NORMAL(pos); break;
		case Function3Arg.DIGIT_ID: DIGIT(pos); break;
		case Function3Arg.INC_BETA_ID: INC_BETA(pos); break;
		case Function3Arg.REG_BETA_ID: REG_BETA(pos); break;
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
		case FunctionVariadic.COALESCE_ID: COALESCE(pos); break;
		case FunctionVariadic.OR_ID: OR_VARIADIC(pos); break;
		case FunctionVariadic.AND_ID: AND_VARIADIC(pos); break;
		case FunctionVariadic.XOR_ID: XOR_VARIADIC(pos); break;
		case FunctionVariadic.ARGMIN_ID: ARGMIN_VARIADIC(pos); break;
		case FunctionVariadic.ARGMAX_ID: ARGMAX_VARIADIC(pos); break;
		case FunctionVariadic.MEDIAN_ID: MEDIAN_VARIADIC(pos); break;
		case FunctionVariadic.MODE_ID: MODE_VARIADIC(pos); break;
		case FunctionVariadic.BASE_ID: BASE_VARIADIC(pos); break;
		case FunctionVariadic.NDIST_ID: NDIST_VARIADIC(pos); break;
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
		case CalculusOperator.SOLVE_ID: SOLVE(pos); break;
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
	/**
	 * Calculates Bitwise operators
	 * @param pos
	 */
	private void bitwiseCalc(int pos) {
		switch (tokensList.get(pos).tokenId) {
		case BitwiseOperator.AND_ID: BITWISE_AND(pos); break;
		case BitwiseOperator.OR_ID: BITWISE_OR(pos); break;
		case BitwiseOperator.XOR_ID: BITWISE_XOR(pos); break;
		case BitwiseOperator.LEFT_SHIFT_ID: BITWISE_LEFT_SHIFT(pos); break;
		case BitwiseOperator.RIGHT_SHIFT_ID: BITWISE_RIGHT_SHIFT(pos); break;
		}
	}
	/*=================================================
	 *
	 * Parser methods
	 *
	 *=================================================
	 */
	/**
	 * Class level method for adding specific automatic
	 * parser keywords relates to User Defined Functions
	 * i.e.: par(i), [npar]
	 */
	private void addUDFSpecificParserKeyWords() {
		addKeyWord(Function1Arg.PARAM_STR, Function1Arg.PARAM_DESC, Function1Arg.PARAM_ID, Function1Arg.PARAM_SYN, Function1Arg.PARAM_SINCE, Function1Arg.TYPE_ID);
		addKeyWord(ConstantValue.NPAR_STR, ConstantValue.NPAR_DESC, ConstantValue.NPAR_ID, ConstantValue.NPAR_SYN, ConstantValue.NPAR_SINCE, ConstantValue.TYPE_ID);
	}
	/**
	 * Creates parser key words list
	 */
	private void addParserKeyWords() {
		/*
		 * Operators key words
		 */
		addKeyWord(Operator.PLUS_STR, Operator.PLUS_DESC, Operator.PLUS_ID, Operator.PLUS_SYN, Operator.PLUS_SINCE, Operator.TYPE_ID);
		addKeyWord(Operator.MINUS_STR, Operator.MINUS_DESC, Operator.MINUS_ID, Operator.MINUS_SYN, Operator.MINUS_SINCE, Operator.TYPE_ID);
		addKeyWord(Operator.MULTIPLY_STR, Operator.MULTIPLY_DESC, Operator.MULTIPLY_ID, Operator.MULTIPLY_SYN, Operator.MULTIPLY_SINCE, Operator.TYPE_ID);
		addKeyWord(Operator.DIVIDE_STR, Operator.DIVIDE_DESC, Operator.DIVIDE_ID, Operator.DIVIDE_SYN, Operator.DIVIDE_SINCE, Operator.TYPE_ID);
		addKeyWord(Operator.POWER_STR, Operator.POWER_DESC, Operator.POWER_ID, Operator.POWER_SYN, Operator.POWER_SINCE, Operator.TYPE_ID);
		addKeyWord(Operator.FACT_STR, Operator.FACT_DESC, Operator.FACT_ID, Operator.FACT_SYN, Operator.FACT_SINCE, Operator.TYPE_ID);
		addKeyWord(Operator.MOD_STR, Operator.MOD_DESC, Operator.MOD_ID, Operator.MOD_SYN, Operator.MOD_SINCE, Operator.TYPE_ID);
		addKeyWord(Operator.PERC_STR, Operator.PERC_DESC, Operator.PERC_ID, Operator.PERC_SYN, Operator.PERC_SINCE, Operator.TYPE_ID);
		addKeyWord(Operator.TETRATION_STR, Operator.TETRATION_DESC, Operator.TETRATION_ID, Operator.TETRATION_SYN, Operator.TETRATION_SINCE, Operator.TYPE_ID);
		/*
		 * Boolean operators key words
		 */
		addKeyWord(BooleanOperator.NEG_STR, BooleanOperator.NEG_DESC, BooleanOperator.NEG_ID, BooleanOperator.NEG_SYN, BooleanOperator.NEG_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.AND_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND_SYN, BooleanOperator.AND_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.AND1_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND1_SYN, BooleanOperator.AND_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.AND2_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND2_SYN, BooleanOperator.AND_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NAND_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN, BooleanOperator.NAND_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NAND1_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND1_SYN, BooleanOperator.NAND_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NAND2_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND2_SYN, BooleanOperator.NAND_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.OR_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR_SYN, BooleanOperator.OR_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.OR1_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR1_SYN, BooleanOperator.OR_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.OR2_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR2_SYN, BooleanOperator.OR_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NOR_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN, BooleanOperator.NOR_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NOR1_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR1_SYN, BooleanOperator.NOR_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NOR2_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR2_SYN, BooleanOperator.NOR_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.XOR_STR, BooleanOperator.XOR_DESC, BooleanOperator.XOR_ID, BooleanOperator.XOR_SYN, BooleanOperator.XOR_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.IMP_STR, BooleanOperator.IMP_DESC, BooleanOperator.IMP_ID, BooleanOperator.IMP_SYN, BooleanOperator.IMP_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.NIMP_STR, BooleanOperator.NIMP_DESC, BooleanOperator.NIMP_ID, BooleanOperator.NIMP_SYN, BooleanOperator.NIMP_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.CIMP_STR, BooleanOperator.CIMP_DESC, BooleanOperator.CIMP_ID, BooleanOperator.CIMP_SYN, BooleanOperator.CIMP_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.CNIMP_STR, BooleanOperator.CNIMP_DESC, BooleanOperator.CNIMP_ID, BooleanOperator.CNIMP_SYN, BooleanOperator.CNIMP_SINCE, BooleanOperator.TYPE_ID);
		addKeyWord(BooleanOperator.EQV_STR, BooleanOperator.EQV_DESC, BooleanOperator.EQV_ID, BooleanOperator.EQV_SYN, BooleanOperator.EQV_SINCE, BooleanOperator.TYPE_ID);
		/*
		 * Binary relations key words
		 */
		addKeyWord(BinaryRelation.EQ_STR, BinaryRelation.EQ_DESC, BinaryRelation.EQ_ID, BinaryRelation.EQ_SYN, BinaryRelation.EQ_SINCE, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.EQ1_STR, BinaryRelation.EQ_DESC, BinaryRelation.EQ_ID, BinaryRelation.EQ1_SYN, BinaryRelation.EQ_SINCE, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.NEQ_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ_SYN, BinaryRelation.NEQ_SINCE, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.NEQ1_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ1_SYN, BinaryRelation.NEQ_SINCE, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.NEQ2_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ2_SYN, BinaryRelation.NEQ_SINCE, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.LT_STR, BinaryRelation.LT_DESC, BinaryRelation.LT_ID, BinaryRelation.LT_SYN, BinaryRelation.LT_SINCE, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.GT_STR, BinaryRelation.GT_DESC, BinaryRelation.GT_ID, BinaryRelation.GT_SYN, BinaryRelation.GT_SINCE, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.LEQ_STR, BinaryRelation.LEQ_DESC, BinaryRelation.LEQ_ID, BinaryRelation.LEQ_SYN, BinaryRelation.LEQ_SINCE, BinaryRelation.TYPE_ID);
		addKeyWord(BinaryRelation.GEQ_STR, BinaryRelation.GEQ_DESC, BinaryRelation.GEQ_ID, BinaryRelation.GEQ_SYN, BinaryRelation.GEQ_SINCE, BinaryRelation.TYPE_ID);
		if (parserKeyWordsOnly == false) {
			/*
			 * 1 arg functions key words
			 */
			addKeyWord(Function1Arg.SIN_STR, Function1Arg.SIN_DESC, Function1Arg.SIN_ID, Function1Arg.SIN_SYN, Function1Arg.SIN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COS_STR, Function1Arg.COS_DESC, Function1Arg.COS_ID, Function1Arg.COS_SYN, Function1Arg.COS_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.TAN_STR, Function1Arg.TAN_DESC, Function1Arg.TAN_ID, Function1Arg.TAN_SYN, Function1Arg.TAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.TG_STR, Function1Arg.TAN_DESC, Function1Arg.TAN_ID, Function1Arg.TG_SYN, Function1Arg.TAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CTAN_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.CTAN_SYN, Function1Arg.CTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CTG_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.CTG_SYN, Function1Arg.CTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COT_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.COT_SYN, Function1Arg.CTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SEC_STR, Function1Arg.SEC_DESC, Function1Arg.SEC_ID, Function1Arg.SEC_SYN, Function1Arg.SEC_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COSEC_STR, Function1Arg.COSEC_DESC, Function1Arg.COSEC_ID, Function1Arg.COSEC_SYN, Function1Arg.COSEC_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CSC_STR, Function1Arg.COSEC_DESC, Function1Arg.COSEC_ID, Function1Arg.CSC_SYN, Function1Arg.COSEC_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ASIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ASIN_SYN, Function1Arg.ASIN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARSIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ARSIN_SYN, Function1Arg.ASIN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ARCSIN_SYN, Function1Arg.ASIN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ACOS_SYN, Function1Arg.ACOS_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ARCOS_SYN, Function1Arg.ACOS_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ARCCOS_SYN, Function1Arg.ACOS_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ATAN_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ATAN_SYN, Function1Arg.ATAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCTAN_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ARCTAN_SYN, Function1Arg.ATAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ATG_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ATG_SYN, Function1Arg.ATAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCTG_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ARCTG_SYN, Function1Arg.ATAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACTAN_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACTAN_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCTAN_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCTAN_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACTG_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACTG_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCTG_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCTG_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOT_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACOT_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOT_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCOT_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LN_STR, Function1Arg.LN_DESC, Function1Arg.LN_ID, Function1Arg.LN_SYN, Function1Arg.LN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LOG2_STR, Function1Arg.LOG2_DESC, Function1Arg.LOG2_ID, Function1Arg.LOG2_SYN, Function1Arg.LOG2_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LOG10_STR, Function1Arg.LOG10_DESC, Function1Arg.LOG10_ID, Function1Arg.LOG10_SYN, Function1Arg.LOG10_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.RAD_STR, Function1Arg.RAD_DESC, Function1Arg.RAD_ID, Function1Arg.RAD_SYN, Function1Arg.RAD_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.EXP_STR, Function1Arg.EXP_DESC, Function1Arg.EXP_ID, Function1Arg.EXP_SYN, Function1Arg.EXP_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SQRT_STR, Function1Arg.SQRT_DESC, Function1Arg.SQRT_ID, Function1Arg.SQRT_SYN, Function1Arg.SQRT_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SINH_STR, Function1Arg.SINH_DESC, Function1Arg.SINH_ID, Function1Arg.SINH_SYN, Function1Arg.SINH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COSH_STR, Function1Arg.COSH_DESC, Function1Arg.COSH_ID, Function1Arg.COSH_SYN, Function1Arg.COSH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.TANH_STR, Function1Arg.TANH_DESC, Function1Arg.TANH_ID, Function1Arg.TANH_SYN, Function1Arg.TANH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.TGH_STR, Function1Arg.TANH_DESC, Function1Arg.TANH_ID, Function1Arg.TGH_SYN, Function1Arg.TANH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CTANH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.CTANH_SYN, Function1Arg.COTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COTH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.COTH_SYN, Function1Arg.COTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CTGH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.CTGH_SYN, Function1Arg.COTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SECH_STR, Function1Arg.SECH_DESC, Function1Arg.SECH_ID, Function1Arg.SECH_SYN, Function1Arg.SECH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CSCH_STR, Function1Arg.CSCH_DESC, Function1Arg.CSCH_ID, Function1Arg.CSCH_SYN, Function1Arg.CSCH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.COSECH_STR, Function1Arg.CSCH_DESC, Function1Arg.CSCH_ID, Function1Arg.COSECH_SYN, Function1Arg.CSCH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.DEG_STR, Function1Arg.DEG_DESC, Function1Arg.DEG_ID, Function1Arg.DEG_SYN, Function1Arg.DEG_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ABS_STR, Function1Arg.ABS_DESC, Function1Arg.ABS_ID, Function1Arg.ABS_SYN, Function1Arg.ABS_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SGN_STR, Function1Arg.SGN_DESC, Function1Arg.SGN_ID, Function1Arg.SGN_SYN, Function1Arg.SGN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.FLOOR_STR, Function1Arg.FLOOR_DESC, Function1Arg.FLOOR_ID, Function1Arg.FLOOR_SYN, Function1Arg.FLOOR_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.CEIL_STR, Function1Arg.CEIL_DESC, Function1Arg.CEIL_ID, Function1Arg.CEIL_SYN, Function1Arg.CEIL_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.NOT_STR, Function1Arg.NOT_DESC, Function1Arg.NOT_ID, Function1Arg.NOT_SYN, Function1Arg.NOT_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ASINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ASINH_SYN, Function1Arg.ARSINH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARSINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ARSINH_SYN, Function1Arg.ARSINH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ARCSINH_SYN, Function1Arg.ARSINH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ACOSH_SYN, Function1Arg.ARCOSH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ARCOSH_SYN, Function1Arg.ARCOSH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ARCCOSH_SYN, Function1Arg.ARCOSH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ATANH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ATANH_SYN, Function1Arg.ARTANH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCTANH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ARCTANH_SYN, Function1Arg.ARTANH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ATGH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ATGH_SYN, Function1Arg.ARTANH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCTGH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ARCTGH_SYN, Function1Arg.ARTANH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACTANH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACTANH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCTANH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCTANH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACOTH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCOTH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCOTH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACTGH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACTGH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCTGH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCTGH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ASECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ASECH_SYN, Function1Arg.ARSECH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARSECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ARSECH_SYN, Function1Arg.ARSECH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ARCSECH_SYN, Function1Arg.ARSECH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ACSCH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCSCH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCCSCH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ACOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ACOSECH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCOSECH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCCOSECH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SA_STR, Function1Arg.SA_DESC, Function1Arg.SA_ID, Function1Arg.SA_SYN, Function1Arg.SA_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SA1_STR, Function1Arg.SA_DESC, Function1Arg.SA_ID, Function1Arg.SA1_SYN, Function1Arg.SA_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SINC_STR, Function1Arg.SINC_DESC, Function1Arg.SINC_ID, Function1Arg.SINC_SYN, Function1Arg.SINC_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.BELL_NUMBER_STR, Function1Arg.BELL_NUMBER_DESC, Function1Arg.BELL_NUMBER_ID, Function1Arg.BELL_NUMBER_SYN, Function1Arg.BELL_NUMBER_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.FIBONACCI_NUMBER_STR, Function1Arg.FIBONACCI_NUMBER_DESC, Function1Arg.FIBONACCI_NUMBER_ID, Function1Arg.FIBONACCI_NUMBER_SYN, Function1Arg.FIBONACCI_NUMBER_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LUCAS_NUMBER_STR, Function1Arg.LUCAS_NUMBER_DESC, Function1Arg.LUCAS_NUMBER_ID, Function1Arg.LUCAS_NUMBER_SYN, Function1Arg.LUCAS_NUMBER_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.HARMONIC_NUMBER_STR, Function1Arg.HARMONIC_NUMBER_DESC, Function1Arg.HARMONIC_NUMBER_ID, Function1Arg.HARMONIC_NUMBER_SYN, Function1Arg.HARMONIC_NUMBER_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.IS_PRIME_STR, Function1Arg.IS_PRIME_DESC, Function1Arg.IS_PRIME_ID, Function1Arg.IS_PRIME_SYN, Function1Arg.IS_PRIME_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.PRIME_COUNT_STR, Function1Arg.PRIME_COUNT_DESC, Function1Arg.PRIME_COUNT_ID, Function1Arg.PRIME_COUNT_SYN, Function1Arg.PRIME_COUNT_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.EXP_INT_STR, Function1Arg.EXP_INT_DESC, Function1Arg.EXP_INT_ID, Function1Arg.EXP_INT_SYN, Function1Arg.EXP_INT_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LOG_INT_STR, Function1Arg.LOG_INT_DESC, Function1Arg.LOG_INT_ID, Function1Arg.LOG_INT_SYN, Function1Arg.LOG_INT_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.OFF_LOG_INT_STR, Function1Arg.OFF_LOG_INT_DESC, Function1Arg.OFF_LOG_INT_ID, Function1Arg.OFF_LOG_INT_SYN, Function1Arg.OFF_LOG_INT_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAUSS_ERF_STR, Function1Arg.GAUSS_ERF_DESC, Function1Arg.GAUSS_ERF_ID, Function1Arg.GAUSS_ERF_SYN, Function1Arg.GAUSS_ERF_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAUSS_ERFC_STR, Function1Arg.GAUSS_ERFC_DESC, Function1Arg.GAUSS_ERFC_ID, Function1Arg.GAUSS_ERFC_SYN, Function1Arg.GAUSS_ERFC_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAUSS_ERF_INV_STR, Function1Arg.GAUSS_ERF_INV_DESC, Function1Arg.GAUSS_ERF_INV_ID, Function1Arg.GAUSS_ERF_INV_SYN, Function1Arg.GAUSS_ERF_INV_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAUSS_ERFC_INV_STR, Function1Arg.GAUSS_ERFC_INV_DESC, Function1Arg.GAUSS_ERFC_INV_ID, Function1Arg.GAUSS_ERFC_INV_SYN, Function1Arg.GAUSS_ERFC_INV_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ULP_STR, Function1Arg.ULP_DESC, Function1Arg.ULP_ID, Function1Arg.ULP_SYN, Function1Arg.ULP_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ISNAN_STR, Function1Arg.ISNAN_DESC, Function1Arg.ISNAN_ID, Function1Arg.ISNAN_SYN, Function1Arg.ISNAN_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.NDIG10_STR, Function1Arg.NDIG10_DESC, Function1Arg.NDIG10_ID, Function1Arg.NDIG10_SYN, Function1Arg.NDIG10_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.NFACT_STR, Function1Arg.NFACT_DESC, Function1Arg.NFACT_ID, Function1Arg.NFACT_SYN, Function1Arg.NFACT_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCSEC_STR, Function1Arg.ARCSEC_DESC, Function1Arg.ARCSEC_ID, Function1Arg.ARCSEC_SYN, Function1Arg.ARCSEC_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.ARCCSC_STR, Function1Arg.ARCCSC_DESC, Function1Arg.ARCCSC_ID, Function1Arg.ARCCSC_SYN, Function1Arg.ARCCSC_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.GAMMA_STR, Function1Arg.GAMMA_DESC, Function1Arg.GAMMA_ID, Function1Arg.GAMMA_SYN, Function1Arg.GAMMA_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LAMBERT_W0_STR, Function1Arg.LAMBERT_W0_DESC, Function1Arg.LAMBERT_W0_ID, Function1Arg.LAMBERT_W0_SYN, Function1Arg.LAMBERT_W0_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LAMBERT_W1_STR, Function1Arg.LAMBERT_W1_DESC, Function1Arg.LAMBERT_W1_ID, Function1Arg.LAMBERT_W1_SYN, Function1Arg.LAMBERT_W1_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.SGN_GAMMA_STR, Function1Arg.SGN_GAMMA_DESC, Function1Arg.SGN_GAMMA_ID, Function1Arg.SGN_GAMMA_SYN, Function1Arg.SGN_GAMMA_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.LOG_GAMMA_STR, Function1Arg.LOG_GAMMA_DESC, Function1Arg.LOG_GAMMA_ID, Function1Arg.LOG_GAMMA_SYN, Function1Arg.LOG_GAMMA_SINCE, Function1Arg.TYPE_ID);
			addKeyWord(Function1Arg.DI_GAMMA_STR, Function1Arg.DI_GAMMA_DESC, Function1Arg.DI_GAMMA_ID, Function1Arg.DI_GAMMA_SYN, Function1Arg.DI_GAMMA_SINCE, Function1Arg.TYPE_ID);
			/*
			 * 2 args functions key words
			 */
			addKeyWord(Function2Arg.LOG_STR, Function2Arg.LOG_DESC, Function2Arg.LOG_ID, Function2Arg.LOG_SYN, Function2Arg.LOG_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.MOD_STR, Function2Arg.MOD_DESC, Function2Arg.MOD_ID, Function2Arg.MOD_SYN, Function2Arg.MOD_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.BINOM_COEFF_STR, Function2Arg.BINOM_COEFF_DESC, Function2Arg.BINOM_COEFF_ID, Function2Arg.BINOM_COEFF_SYN, Function2Arg.BINOM_COEFF_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.BINOM_COEFF_NCK_STR, Function2Arg.BINOM_COEFF_DESC, Function2Arg.BINOM_COEFF_ID, Function2Arg.BINOM_COEFF_NCK_SYN, Function2Arg.BINOM_COEFF_NCK_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.BERNOULLI_NUMBER_STR, Function2Arg.BERNOULLI_NUMBER_DESC, Function2Arg.BERNOULLI_NUMBER_ID, Function2Arg.BERNOULLI_NUMBER_SYN, Function2Arg.BERNOULLI_NUMBER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.STIRLING1_NUMBER_STR, Function2Arg.STIRLING1_NUMBER_DESC, Function2Arg.STIRLING1_NUMBER_ID, Function2Arg.STIRLING1_NUMBER_SYN, Function2Arg.STIRLING1_NUMBER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.STIRLING2_NUMBER_STR, Function2Arg.STIRLING2_NUMBER_DESC, Function2Arg.STIRLING2_NUMBER_ID, Function2Arg.STIRLING2_NUMBER_SYN, Function2Arg.STIRLING2_NUMBER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.WORPITZKY_NUMBER_STR, Function2Arg.WORPITZKY_NUMBER_DESC, Function2Arg.WORPITZKY_NUMBER_ID, Function2Arg.WORPITZKY_NUMBER_SYN, Function2Arg.WORPITZKY_NUMBER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.EULER_NUMBER_STR, Function2Arg.EULER_NUMBER_DESC, Function2Arg.EULER_NUMBER_ID, Function2Arg.EULER_NUMBER_SYN, Function2Arg.EULER_NUMBER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.KRONECKER_DELTA_STR, Function2Arg.KRONECKER_DELTA_DESC, Function2Arg.KRONECKER_DELTA_ID, Function2Arg.KRONECKER_DELTA_SYN, Function2Arg.KRONECKER_DELTA_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.EULER_POLYNOMIAL_STR, Function2Arg.EULER_POLYNOMIAL_DESC, Function2Arg.EULER_POLYNOMIAL_ID, Function2Arg.EULER_POLYNOMIAL_SYN, Function2Arg.EULER_POLYNOMIAL_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.HARMONIC_NUMBER_STR, Function2Arg.HARMONIC_NUMBER_DESC, Function2Arg.HARMONIC_NUMBER_ID, Function2Arg.HARMONIC_NUMBER_SYN, Function2Arg.HARMONIC_NUMBER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.RND_UNIFORM_CONT_STR, Function2Arg.RND_UNIFORM_CONT_DESC, Function2Arg.RND_UNIFORM_CONT_ID, Function2Arg.RND_UNIFORM_CONT_SYN, Function2Arg.RND_UNIFORM_CONT_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.RND_UNIFORM_DISCR_STR, Function2Arg.RND_UNIFORM_DISCR_DESC, Function2Arg.RND_UNIFORM_DISCR_ID, Function2Arg.RND_UNIFORM_DISCR_SYN, Function2Arg.RND_UNIFORM_DISCR_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.ROUND_STR, Function2Arg.ROUND_DESC, Function2Arg.ROUND_ID, Function2Arg.ROUND_SYN, Function2Arg.ROUND_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.RND_NORMAL_STR, Function2Arg.RND_NORMAL_DESC, Function2Arg.RND_NORMAL_ID, Function2Arg.RND_NORMAL_SYN, Function2Arg.RND_NORMAL_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.NDIG_STR, Function2Arg.NDIG_DESC, Function2Arg.NDIG_ID, Function2Arg.NDIG_SYN, Function2Arg.NDIG_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.DIGIT10_STR, Function2Arg.DIGIT10_DESC, Function2Arg.DIGIT10_ID, Function2Arg.DIGIT10_SYN, Function2Arg.DIGIT10_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.FACTVAL_STR, Function2Arg.FACTVAL_DESC, Function2Arg.FACTVAL_ID, Function2Arg.FACTVAL_SYN, Function2Arg.FACTVAL_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.FACTEXP_STR, Function2Arg.FACTEXP_DESC, Function2Arg.FACTEXP_ID, Function2Arg.FACTEXP_SYN, Function2Arg.FACTEXP_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.ROOT_STR, Function2Arg.ROOT_DESC, Function2Arg.ROOT_ID, Function2Arg.ROOT_SYN, Function2Arg.ROOT_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.INC_GAMMA_LOWER_STR, Function2Arg.INC_GAMMA_LOWER_DESC, Function2Arg.INC_GAMMA_LOWER_ID, Function2Arg.INC_GAMMA_LOWER_SYN, Function2Arg.INC_GAMMA_LOWER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.INC_GAMMA_UPPER_STR, Function2Arg.INC_GAMMA_UPPER_DESC, Function2Arg.INC_GAMMA_UPPER_ID, Function2Arg.INC_GAMMA_UPPER_SYN, Function2Arg.INC_GAMMA_UPPER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.REG_GAMMA_LOWER_STR, Function2Arg.REG_GAMMA_LOWER_DESC, Function2Arg.REG_GAMMA_LOWER_ID, Function2Arg.REG_GAMMA_LOWER_SYN, Function2Arg.REG_GAMMA_LOWER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.REG_GAMMA_UPPER_STR, Function2Arg.REG_GAMMA_UPPER_DESC, Function2Arg.REG_GAMMA_UPPER_ID, Function2Arg.REG_GAMMA_UPPER_SYN, Function2Arg.REG_GAMMA_UPPER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.REG_GAMMA_LOWER_P_STR, Function2Arg.REG_GAMMA_LOWER_DESC, Function2Arg.REG_GAMMA_LOWER_ID, Function2Arg.REG_GAMMA_LOWER_P_SYN, Function2Arg.REG_GAMMA_LOWER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.REG_GAMMA_UPPER_Q_STR, Function2Arg.REG_GAMMA_UPPER_DESC, Function2Arg.REG_GAMMA_UPPER_ID, Function2Arg.REG_GAMMA_UPPER_Q_SYN, Function2Arg.REG_GAMMA_UPPER_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.PERMUTATIONS_STR, Function2Arg.PERMUTATIONS_DESC, Function2Arg.PERMUTATIONS_ID, Function2Arg.PERMUTATIONS_SYN, Function2Arg.PERMUTATIONS_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.BETA_STR, Function2Arg.BETA_DESC, Function2Arg.BETA_ID, Function2Arg.BETA_SYN, Function2Arg.BETA_SINCE, Function2Arg.TYPE_ID);
			addKeyWord(Function2Arg.LOG_BETA_STR, Function2Arg.LOG_BETA_DESC, Function2Arg.LOG_BETA_ID, Function2Arg.LOG_BETA_SYN, Function2Arg.LOG_BETA_SINCE, Function2Arg.TYPE_ID);
						/*
			 * 3 args functions key words
			 */
			addKeyWord(Function3Arg.IF_STR, Function3Arg.IF_DESC, Function3Arg.IF_CONDITION_ID, Function3Arg.IF_SYN, Function3Arg.IF_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CHI_STR, Function3Arg.CHI_DESC, Function3Arg.CHI_ID, Function3Arg.CHI_SYN, Function3Arg.CHI_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CHI_LR_STR, Function3Arg.CHI_LR_DESC, Function3Arg.CHI_LR_ID, Function3Arg.CHI_LR_SYN, Function3Arg.CHI_LR_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CHI_L_STR, Function3Arg.CHI_L_DESC, Function3Arg.CHI_L_ID, Function3Arg.CHI_L_SYN, Function3Arg.CHI_L_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CHI_R_STR, Function3Arg.CHI_R_DESC, Function3Arg.CHI_R_ID, Function3Arg.CHI_R_SYN, Function3Arg.CHI_R_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.PDF_UNIFORM_CONT_STR, Function3Arg.PDF_UNIFORM_CONT_DESC, Function3Arg.PDF_UNIFORM_CONT_ID, Function3Arg.PDF_UNIFORM_CONT_SYN, Function3Arg.PDF_UNIFORM_CONT_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CDF_UNIFORM_CONT_STR, Function3Arg.CDF_UNIFORM_CONT_DESC, Function3Arg.CDF_UNIFORM_CONT_ID, Function3Arg.CDF_UNIFORM_CONT_SYN, Function3Arg.CDF_UNIFORM_CONT_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.QNT_UNIFORM_CONT_STR, Function3Arg.QNT_UNIFORM_CONT_DESC, Function3Arg.QNT_UNIFORM_CONT_ID, Function3Arg.QNT_UNIFORM_CONT_SYN, Function3Arg.QNT_UNIFORM_CONT_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.PDF_NORMAL_STR, Function3Arg.PDF_NORMAL_DESC, Function3Arg.PDF_NORMAL_ID, Function3Arg.PDF_NORMAL_SYN, Function3Arg.PDF_NORMAL_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.CDF_NORMAL_STR, Function3Arg.CDF_NORMAL_DESC, Function3Arg.CDF_NORMAL_ID, Function3Arg.CDF_NORMAL_SYN, Function3Arg.CDF_NORMAL_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.QNT_NORMAL_STR, Function3Arg.QNT_NORMAL_DESC, Function3Arg.QNT_NORMAL_ID, Function3Arg.QNT_NORMAL_SYN, Function3Arg.QNT_NORMAL_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.DIGIT_STR, Function3Arg.DIGIT_DESC, Function3Arg.DIGIT_ID, Function3Arg.DIGIT_SYN, Function3Arg.DIGIT_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.INC_BETA_STR, Function3Arg.INC_BETA_DESC, Function3Arg.INC_BETA_ID, Function3Arg.INC_BETA_SYN, Function3Arg.INC_BETA_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.REG_BETA_STR, Function3Arg.REG_BETA_DESC, Function3Arg.REG_BETA_ID, Function3Arg.REG_BETA_SYN, Function3Arg.REG_BETA_SINCE, Function3Arg.TYPE_ID);
			addKeyWord(Function3Arg.REG_BETA_I_STR, Function3Arg.REG_BETA_DESC, Function3Arg.REG_BETA_ID, Function3Arg.REG_BETA_I_SYN, Function3Arg.REG_BETA_I_SINCE, Function3Arg.TYPE_ID);
			/*
			 * Variadic functions as key words
			 */
			addKeyWord(FunctionVariadic.IFF_STR, FunctionVariadic.IFF_DESC, FunctionVariadic.IFF_ID, FunctionVariadic.IFF_SYN, FunctionVariadic.IFF_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.MIN_STR, FunctionVariadic.MIN_DESC, FunctionVariadic.MIN_ID, FunctionVariadic.MIN_SYN, FunctionVariadic.MIN_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.MAX_STR, FunctionVariadic.MAX_DESC, FunctionVariadic.MAX_ID, FunctionVariadic.MAX_SYN, FunctionVariadic.MAX_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.CONT_FRAC_STR, FunctionVariadic.CONT_FRAC_DESC, FunctionVariadic.CONT_FRAC_ID, FunctionVariadic.CONT_FRAC_SYN, FunctionVariadic.CONT_FRAC_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.CONT_POL_STR, FunctionVariadic.CONT_POL_DESC, FunctionVariadic.CONT_POL_ID, FunctionVariadic.CONT_POL_SYN, FunctionVariadic.CONT_POL_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.GCD_STR, FunctionVariadic.GCD_DESC, FunctionVariadic.GCD_ID, FunctionVariadic.GCD_SYN, FunctionVariadic.GCD_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.LCM_STR, FunctionVariadic.LCM_DESC, FunctionVariadic.LCM_ID, FunctionVariadic.LCM_SYN, FunctionVariadic.LCM_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.SUM_STR, FunctionVariadic.SUM_DESC, FunctionVariadic.SUM_ID, FunctionVariadic.SUM_SYN, FunctionVariadic.SUM_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.PROD_STR, FunctionVariadic.PROD_DESC, FunctionVariadic.PROD_ID, FunctionVariadic.PROD_SYN, FunctionVariadic.PROD_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.AVG_STR, FunctionVariadic.AVG_DESC, FunctionVariadic.AVG_ID, FunctionVariadic.AVG_SYN, FunctionVariadic.AVG_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.VAR_STR, FunctionVariadic.VAR_DESC, FunctionVariadic.VAR_ID, FunctionVariadic.VAR_SYN, FunctionVariadic.VAR_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.STD_STR, FunctionVariadic.STD_DESC, FunctionVariadic.STD_ID, FunctionVariadic.STD_SYN, FunctionVariadic.STD_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.RND_LIST_STR, FunctionVariadic.RND_LIST_DESC, FunctionVariadic.RND_LIST_ID, FunctionVariadic.RND_LIST_SYN, FunctionVariadic.RND_LIST_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.COALESCE_STR, FunctionVariadic.COALESCE_DESC, FunctionVariadic.COALESCE_ID, FunctionVariadic.COALESCE_SYN, FunctionVariadic.COALESCE_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.OR_STR, FunctionVariadic.OR_DESC, FunctionVariadic.OR_ID, FunctionVariadic.OR_SYN, FunctionVariadic.OR_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.AND_STR, FunctionVariadic.AND_DESC, FunctionVariadic.AND_ID, FunctionVariadic.AND_SYN, FunctionVariadic.AND_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.XOR_STR, FunctionVariadic.XOR_DESC, FunctionVariadic.XOR_ID, FunctionVariadic.XOR_SYN, FunctionVariadic.XOR_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.ARGMIN_STR, FunctionVariadic.ARGMIN_DESC, FunctionVariadic.ARGMIN_ID, FunctionVariadic.ARGMIN_SYN, FunctionVariadic.ARGMIN_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.ARGMAX_STR, FunctionVariadic.ARGMAX_DESC, FunctionVariadic.ARGMAX_ID, FunctionVariadic.ARGMAX_SYN, FunctionVariadic.ARGMAX_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.MEDIAN_STR, FunctionVariadic.MEDIAN_DESC, FunctionVariadic.MEDIAN_ID, FunctionVariadic.MEDIAN_SYN, FunctionVariadic.MEDIAN_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.MODE_STR, FunctionVariadic.MODE_DESC, FunctionVariadic.MODE_ID, FunctionVariadic.MODE_SYN, FunctionVariadic.MODE_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.BASE_STR, FunctionVariadic.BASE_DESC, FunctionVariadic.BASE_ID, FunctionVariadic.BASE_SYN, FunctionVariadic.BASE_SINCE, FunctionVariadic.TYPE_ID);
			addKeyWord(FunctionVariadic.NDIST_STR, FunctionVariadic.NDIST_DESC, FunctionVariadic.NDIST_ID, FunctionVariadic.NDIST_SYN, FunctionVariadic.NDIST_SINCE, FunctionVariadic.TYPE_ID);
			/*
			 * Calculus key words
			 */
			addKeyWord(CalculusOperator.SUM_STR, CalculusOperator.SUM_DESC, CalculusOperator.SUM_ID, CalculusOperator.SUM_SYN, CalculusOperator.SUM_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.PROD_STR, CalculusOperator.PROD_DESC, CalculusOperator.PROD_ID, CalculusOperator.PROD_SYN, CalculusOperator.PROD_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.INT_STR, CalculusOperator.INT_DESC, CalculusOperator.INT_ID, CalculusOperator.INT_SYN, CalculusOperator.INT_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.DER_STR, CalculusOperator.DER_DESC, CalculusOperator.DER_ID, CalculusOperator.DER_SYN, CalculusOperator.DER_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.DER_LEFT_STR, CalculusOperator.DER_LEFT_DESC, CalculusOperator.DER_LEFT_ID, CalculusOperator.DER_LEFT_SYN, CalculusOperator.DER_LEFT_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.DER_RIGHT_STR, CalculusOperator.DER_RIGHT_DESC, CalculusOperator.DER_RIGHT_ID, CalculusOperator.DER_RIGHT_SYN, CalculusOperator.DER_RIGHT_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.DERN_STR, CalculusOperator.DERN_DESC, CalculusOperator.DERN_ID, CalculusOperator.DERN_SYN, CalculusOperator.DERN_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.FORW_DIFF_STR, CalculusOperator.FORW_DIFF_DESC, CalculusOperator.FORW_DIFF_ID, CalculusOperator.FORW_DIFF_SYN, CalculusOperator.FORW_DIFF_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.BACKW_DIFF_STR, CalculusOperator.BACKW_DIFF_DESC, CalculusOperator.BACKW_DIFF_ID, CalculusOperator.BACKW_DIFF_SYN, CalculusOperator.BACKW_DIFF_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.AVG_STR, CalculusOperator.AVG_DESC, CalculusOperator.AVG_ID, CalculusOperator.AVG_SYN, CalculusOperator.AVG_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.VAR_STR, CalculusOperator.VAR_DESC, CalculusOperator.VAR_ID, CalculusOperator.VAR_SYN, CalculusOperator.VAR_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.STD_STR, CalculusOperator.STD_DESC, CalculusOperator.STD_ID, CalculusOperator.STD_SYN, CalculusOperator.STD_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.MIN_STR, CalculusOperator.MIN_DESC, CalculusOperator.MIN_ID, CalculusOperator.MIN_SYN, CalculusOperator.MIN_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.MAX_STR, CalculusOperator.MAX_DESC, CalculusOperator.MAX_ID, CalculusOperator.MAX_SYN, CalculusOperator.MAX_SINCE, CalculusOperator.TYPE_ID);
			addKeyWord(CalculusOperator.SOLVE_STR, CalculusOperator.SOLVE_DESC, CalculusOperator.SOLVE_ID, CalculusOperator.SOLVE_SYN, CalculusOperator.SOLVE_SINCE, CalculusOperator.TYPE_ID);
			/*
			 * Constants key words
			 */
			addKeyWord(ConstantValue.PI_STR, ConstantValue.PI_DESC, ConstantValue.PI_ID, ConstantValue.PI_SYN, ConstantValue.PI_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EULER_STR, ConstantValue.EULER_DESC, ConstantValue.EULER_ID, ConstantValue.EULER_SYN, ConstantValue.EULER_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EULER_MASCHERONI_STR, ConstantValue.EULER_MASCHERONI_DESC, ConstantValue.EULER_MASCHERONI_ID, ConstantValue.EULER_MASCHERONI_SYN, ConstantValue.EULER_MASCHERONI_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GOLDEN_RATIO_STR, ConstantValue.GOLDEN_RATIO_DESC, ConstantValue.GOLDEN_RATIO_ID, ConstantValue.GOLDEN_RATIO_SYN, ConstantValue.GOLDEN_RATIO_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PLASTIC_STR, ConstantValue.PLASTIC_DESC, ConstantValue.PLASTIC_ID, ConstantValue.PLASTIC_SYN, ConstantValue.PLASTIC_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EMBREE_TREFETHEN_STR, ConstantValue.EMBREE_TREFETHEN_DESC, ConstantValue.EMBREE_TREFETHEN_ID, ConstantValue.EMBREE_TREFETHEN_SYN, ConstantValue.EMBREE_TREFETHEN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.FEIGENBAUM_DELTA_STR, ConstantValue.FEIGENBAUM_DELTA_DESC, ConstantValue.FEIGENBAUM_DELTA_ID, ConstantValue.FEIGENBAUM_DELTA_SYN, ConstantValue.FEIGENBAUM_DELTA_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.FEIGENBAUM_ALFA_STR, ConstantValue.FEIGENBAUM_ALFA_DESC, ConstantValue.FEIGENBAUM_ALFA_ID, ConstantValue.FEIGENBAUM_ALFA_SYN, ConstantValue.FEIGENBAUM_ALFA_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.TWIN_PRIME_STR, ConstantValue.TWIN_PRIME_DESC, ConstantValue.TWIN_PRIME_ID, ConstantValue.TWIN_PRIME_SYN, ConstantValue.TWIN_PRIME_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MEISSEL_MERTEENS_STR, ConstantValue.MEISSEL_MERTEENS_DESC, ConstantValue.MEISSEL_MERTEENS_ID, ConstantValue.MEISSEL_MERTEENS_SYN, ConstantValue.MEISSEL_MERTEENS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BRAUN_TWIN_PRIME_STR, ConstantValue.BRAUN_TWIN_PRIME_DESC, ConstantValue.BRAUN_TWIN_PRIME_ID, ConstantValue.BRAUN_TWIN_PRIME_SYN, ConstantValue.BRAUN_TWIN_PRIME_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BRAUN_PRIME_QUADR_STR, ConstantValue.BRAUN_PRIME_QUADR_DESC, ConstantValue.BRAUN_PRIME_QUADR_ID, ConstantValue.BRAUN_PRIME_QUADR_SYN, ConstantValue.BRAUN_PRIME_QUADR_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BRUIJN_NEWMAN_STR, ConstantValue.BRUIJN_NEWMAN_DESC, ConstantValue.BRUIJN_NEWMAN_ID, ConstantValue.BRUIJN_NEWMAN_SYN, ConstantValue.BRUIJN_NEWMAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.CATALAN_STR, ConstantValue.CATALAN_DESC, ConstantValue.CATALAN_ID, ConstantValue.CATALAN_SYN, ConstantValue.CATALAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LANDAU_RAMANUJAN_STR, ConstantValue.LANDAU_RAMANUJAN_DESC, ConstantValue.LANDAU_RAMANUJAN_ID, ConstantValue.LANDAU_RAMANUJAN_SYN, ConstantValue.LANDAU_RAMANUJAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.VISWANATH_STR, ConstantValue.VISWANATH_DESC, ConstantValue.VISWANATH_ID, ConstantValue.VISWANATH_SYN, ConstantValue.VISWANATH_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LEGENDRE_STR, ConstantValue.LEGENDRE_DESC, ConstantValue.LEGENDRE_ID, ConstantValue.LEGENDRE_SYN, ConstantValue.LEGENDRE_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.RAMANUJAN_SOLDNER_STR, ConstantValue.RAMANUJAN_SOLDNER_DESC, ConstantValue.RAMANUJAN_SOLDNER_ID, ConstantValue.RAMANUJAN_SOLDNER_SYN, ConstantValue.RAMANUJAN_SOLDNER_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.ERDOS_BORWEIN_STR, ConstantValue.ERDOS_BORWEIN_DESC, ConstantValue.ERDOS_BORWEIN_ID, ConstantValue.ERDOS_BORWEIN_SYN, ConstantValue.ERDOS_BORWEIN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BERNSTEIN_STR, ConstantValue.BERNSTEIN_DESC, ConstantValue.BERNSTEIN_ID, ConstantValue.BERNSTEIN_SYN, ConstantValue.BERNSTEIN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GAUSS_KUZMIN_WIRSING_STR, ConstantValue.GAUSS_KUZMIN_WIRSING_DESC, ConstantValue.GAUSS_KUZMIN_WIRSING_ID, ConstantValue.GAUSS_KUZMIN_WIRSING_SYN, ConstantValue.GAUSS_KUZMIN_WIRSING_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.HAFNER_SARNAK_MCCURLEY_STR, ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC, ConstantValue.HAFNER_SARNAK_MCCURLEY_ID, ConstantValue.HAFNER_SARNAK_MCCURLEY_SYN, ConstantValue.HAFNER_SARNAK_MCCURLEY_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GOLOMB_DICKMAN_STR, ConstantValue.GOLOMB_DICKMAN_DESC, ConstantValue.GOLOMB_DICKMAN_ID, ConstantValue.GOLOMB_DICKMAN_SYN, ConstantValue.GOLOMB_DICKMAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.CAHEN_STR, ConstantValue.CAHEN_DESC, ConstantValue.CAHEN_ID, ConstantValue.CAHEN_SYN, ConstantValue.CAHEN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LAPLACE_LIMIT_STR, ConstantValue.LAPLACE_LIMIT_DESC, ConstantValue.LAPLACE_LIMIT_ID, ConstantValue.LAPLACE_LIMIT_SYN, ConstantValue.LAPLACE_LIMIT_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.ALLADI_GRINSTEAD_STR, ConstantValue.ALLADI_GRINSTEAD_DESC, ConstantValue.ALLADI_GRINSTEAD_ID, ConstantValue.ALLADI_GRINSTEAD_SYN, ConstantValue.ALLADI_GRINSTEAD_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LENGYEL_STR, ConstantValue.LENGYEL_DESC, ConstantValue.LENGYEL_ID, ConstantValue.LENGYEL_SYN, ConstantValue.LENGYEL_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LEVY_STR, ConstantValue.LEVY_DESC, ConstantValue.LEVY_ID, ConstantValue.LEVY_SYN, ConstantValue.LEVY_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.APERY_STR, ConstantValue.APERY_DESC, ConstantValue.APERY_ID, ConstantValue.APERY_SYN, ConstantValue.APERY_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MILLS_STR, ConstantValue.MILLS_DESC, ConstantValue.MILLS_ID, ConstantValue.MILLS_SYN, ConstantValue.MILLS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.BACKHOUSE_STR, ConstantValue.BACKHOUSE_DESC, ConstantValue.BACKHOUSE_ID, ConstantValue.BACKHOUSE_SYN, ConstantValue.BACKHOUSE_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PORTER_STR, ConstantValue.PORTER_DESC, ConstantValue.PORTER_ID, ConstantValue.PORTER_SYN, ConstantValue.PORTER_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LIEB_QUARE_ICE_STR, ConstantValue.LIEB_QUARE_ICE_DESC, ConstantValue.LIEB_QUARE_ICE_ID, ConstantValue.LIEB_QUARE_ICE_SYN, ConstantValue.LIEB_QUARE_ICE_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.NIVEN_STR, ConstantValue.NIVEN_DESC, ConstantValue.NIVEN_ID, ConstantValue.NIVEN_SYN, ConstantValue.NIVEN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.SIERPINSKI_STR, ConstantValue.SIERPINSKI_DESC, ConstantValue.SIERPINSKI_ID, ConstantValue.SIERPINSKI_SYN, ConstantValue.SIERPINSKI_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.KHINCHIN_STR, ConstantValue.KHINCHIN_DESC, ConstantValue.KHINCHIN_ID, ConstantValue.KHINCHIN_SYN, ConstantValue.KHINCHIN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.FRANSEN_ROBINSON_STR, ConstantValue.FRANSEN_ROBINSON_DESC, ConstantValue.FRANSEN_ROBINSON_ID, ConstantValue.FRANSEN_ROBINSON_SYN, ConstantValue.FRANSEN_ROBINSON_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LANDAU_STR, ConstantValue.LANDAU_DESC, ConstantValue.LANDAU_ID, ConstantValue.LANDAU_SYN, ConstantValue.LANDAU_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PARABOLIC_STR, ConstantValue.PARABOLIC_DESC, ConstantValue.PARABOLIC_ID, ConstantValue.PARABOLIC_SYN, ConstantValue.PARABOLIC_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.OMEGA_STR, ConstantValue.OMEGA_DESC, ConstantValue.OMEGA_ID, ConstantValue.OMEGA_SYN, ConstantValue.OMEGA_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MRB_STR, ConstantValue.MRB_DESC, ConstantValue.MRB_ID, ConstantValue.MRB_SYN, ConstantValue.MRB_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.LI2_STR, ConstantValue.LI2_DESC, ConstantValue.LI2_ID, ConstantValue.LI2_SYN, ConstantValue.LI2_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GOMPERTZ_STR, ConstantValue.GOMPERTZ_DESC, ConstantValue.GOMPERTZ_ID, ConstantValue.GOMPERTZ_SYN, ConstantValue.GOMPERTZ_SINCE, ConstantValue.TYPE_ID);
			/* Physical Constants */
			addKeyWord(ConstantValue.LIGHT_SPEED_STR, ConstantValue.LIGHT_SPEED_DESC, ConstantValue.LIGHT_SPEED_ID, ConstantValue.LIGHT_SPEED_SYN, ConstantValue.LIGHT_SPEED_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GRAVITATIONAL_CONSTANT_STR, ConstantValue.GRAVITATIONAL_CONSTANT_DESC, ConstantValue.GRAVITATIONAL_CONSTANT_ID, ConstantValue.GRAVITATIONAL_CONSTANT_SYN, ConstantValue.GRAVITATIONAL_CONSTANT_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.GRAVIT_ACC_EARTH_STR, ConstantValue.GRAVIT_ACC_EARTH_DESC, ConstantValue.GRAVIT_ACC_EARTH_ID, ConstantValue.GRAVIT_ACC_EARTH_SYN, ConstantValue.GRAVIT_ACC_EARTH_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PLANCK_CONSTANT_STR, ConstantValue.PLANCK_CONSTANT_DESC, ConstantValue.PLANCK_CONSTANT_ID, ConstantValue.PLANCK_CONSTANT_SYN, ConstantValue.PLANCK_CONSTANT_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PLANCK_CONSTANT_REDUCED_STR, ConstantValue.PLANCK_CONSTANT_REDUCED_DESC, ConstantValue.PLANCK_CONSTANT_REDUCED_ID, ConstantValue.PLANCK_CONSTANT_REDUCED_SYN, ConstantValue.PLANCK_CONSTANT_REDUCED_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PLANCK_LENGTH_STR, ConstantValue.PLANCK_LENGTH_DESC, ConstantValue.PLANCK_LENGTH_ID, ConstantValue.PLANCK_LENGTH_SYN, ConstantValue.PLANCK_LENGTH_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PLANCK_MASS_STR, ConstantValue.PLANCK_MASS_DESC, ConstantValue.PLANCK_MASS_ID, ConstantValue.PLANCK_MASS_SYN, ConstantValue.PLANCK_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PLANCK_TIME_STR, ConstantValue.PLANCK_TIME_DESC, ConstantValue.PLANCK_TIME_ID, ConstantValue.PLANCK_TIME_SYN, ConstantValue.PLANCK_TIME_SINCE, ConstantValue.TYPE_ID);
			/* Astronomical Constants */
			addKeyWord(ConstantValue.LIGHT_YEAR_STR, ConstantValue.LIGHT_YEAR_DESC, ConstantValue.LIGHT_YEAR_ID, ConstantValue.LIGHT_YEAR_SYN, ConstantValue.LIGHT_YEAR_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.ASTRONOMICAL_UNIT_STR, ConstantValue.ASTRONOMICAL_UNIT_DESC, ConstantValue.ASTRONOMICAL_UNIT_ID, ConstantValue.ASTRONOMICAL_UNIT_SYN, ConstantValue.ASTRONOMICAL_UNIT_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.PARSEC_STR, ConstantValue.PARSEC_DESC, ConstantValue.PARSEC_ID, ConstantValue.PARSEC_SYN, ConstantValue.PARSEC_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.KILOPARSEC_STR, ConstantValue.KILOPARSEC_DESC, ConstantValue.KILOPARSEC_ID, ConstantValue.KILOPARSEC_SYN, ConstantValue.KILOPARSEC_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EARTH_RADIUS_EQUATORIAL_STR, ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC, ConstantValue.EARTH_RADIUS_EQUATORIAL_ID, ConstantValue.EARTH_RADIUS_EQUATORIAL_SYN, ConstantValue.EARTH_RADIUS_EQUATORIAL_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EARTH_RADIUS_POLAR_STR, ConstantValue.EARTH_RADIUS_POLAR_DESC, ConstantValue.EARTH_RADIUS_POLAR_ID, ConstantValue.EARTH_RADIUS_POLAR_SYN, ConstantValue.EARTH_RADIUS_POLAR_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EARTH_RADIUS_MEAN_STR, ConstantValue.EARTH_RADIUS_MEAN_DESC, ConstantValue.EARTH_RADIUS_MEAN_ID, ConstantValue.EARTH_RADIUS_MEAN_SYN, ConstantValue.EARTH_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EARTH_MASS_STR, ConstantValue.EARTH_MASS_DESC, ConstantValue.EARTH_MASS_ID, ConstantValue.EARTH_MASS_SYN, ConstantValue.EARTH_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.EARTH_SEMI_MAJOR_AXIS_STR, ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC, ConstantValue.EARTH_SEMI_MAJOR_AXIS_ID, ConstantValue.EARTH_SEMI_MAJOR_AXIS_SYN, ConstantValue.EARTH_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MOON_RADIUS_MEAN_STR, ConstantValue.MOON_RADIUS_MEAN_DESC, ConstantValue.MOON_RADIUS_MEAN_ID, ConstantValue.MOON_RADIUS_MEAN_SYN, ConstantValue.MOON_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MOON_MASS_STR, ConstantValue.MOON_MASS_DESC, ConstantValue.MOON_MASS_ID, ConstantValue.MOON_MASS_SYN, ConstantValue.MOON_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MONN_SEMI_MAJOR_AXIS_STR, ConstantValue.MONN_SEMI_MAJOR_AXIS_DESC, ConstantValue.MONN_SEMI_MAJOR_AXIS_ID, ConstantValue.MONN_SEMI_MAJOR_AXIS_SYN, ConstantValue.MONN_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.SOLAR_RADIUS_STR, ConstantValue.SOLAR_RADIUS_DESC, ConstantValue.SOLAR_RADIUS_ID, ConstantValue.SOLAR_RADIUS_SYN, ConstantValue.SOLAR_RADIUS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.SOLAR_MASS_STR, ConstantValue.SOLAR_MASS_DESC, ConstantValue.SOLAR_MASS_ID, ConstantValue.SOLAR_MASS_SYN, ConstantValue.SOLAR_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MERCURY_RADIUS_MEAN_STR, ConstantValue.MERCURY_RADIUS_MEAN_DESC, ConstantValue.MERCURY_RADIUS_MEAN_ID, ConstantValue.MERCURY_RADIUS_MEAN_SYN, ConstantValue.MERCURY_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MERCURY_MASS_STR, ConstantValue.MERCURY_MASS_DESC, ConstantValue.MERCURY_MASS_ID, ConstantValue.MERCURY_MASS_SYN, ConstantValue.MERCURY_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MERCURY_SEMI_MAJOR_AXIS_STR, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_ID, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SYN, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.VENUS_RADIUS_MEAN_STR, ConstantValue.VENUS_RADIUS_MEAN_DESC, ConstantValue.VENUS_RADIUS_MEAN_ID, ConstantValue.VENUS_RADIUS_MEAN_SYN, ConstantValue.VENUS_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.VENUS_MASS_STR, ConstantValue.VENUS_MASS_DESC, ConstantValue.VENUS_MASS_ID, ConstantValue.VENUS_MASS_SYN, ConstantValue.VENUS_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.VENUS_SEMI_MAJOR_AXIS_STR, ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC, ConstantValue.VENUS_SEMI_MAJOR_AXIS_ID, ConstantValue.VENUS_SEMI_MAJOR_AXIS_SYN, ConstantValue.VENUS_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MARS_RADIUS_MEAN_STR, ConstantValue.MARS_RADIUS_MEAN_DESC, ConstantValue.MARS_RADIUS_MEAN_ID, ConstantValue.MARS_RADIUS_MEAN_SYN, ConstantValue.MARS_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MARS_MASS_STR, ConstantValue.MARS_MASS_DESC, ConstantValue.MARS_MASS_ID, ConstantValue.MARS_MASS_SYN, ConstantValue.MARS_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.MARS_SEMI_MAJOR_AXIS_STR, ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC, ConstantValue.MARS_SEMI_MAJOR_AXIS_ID, ConstantValue.MARS_SEMI_MAJOR_AXIS_SYN, ConstantValue.MARS_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.JUPITER_RADIUS_MEAN_STR, ConstantValue.JUPITER_RADIUS_MEAN_DESC, ConstantValue.JUPITER_RADIUS_MEAN_ID, ConstantValue.JUPITER_RADIUS_MEAN_SYN, ConstantValue.JUPITER_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.JUPITER_MASS_STR, ConstantValue.JUPITER_MASS_DESC, ConstantValue.JUPITER_MASS_ID, ConstantValue.JUPITER_MASS_SYN, ConstantValue.JUPITER_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.JUPITER_SEMI_MAJOR_AXIS_STR, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_ID, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SYN, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.SATURN_RADIUS_MEAN_STR, ConstantValue.SATURN_RADIUS_MEAN_DESC, ConstantValue.SATURN_RADIUS_MEAN_ID, ConstantValue.SATURN_RADIUS_MEAN_SYN, ConstantValue.SATURN_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.SATURN_MASS_STR, ConstantValue.SATURN_MASS_DESC, ConstantValue.SATURN_MASS_ID, ConstantValue.SATURN_MASS_SYN, ConstantValue.SATURN_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.SATURN_SEMI_MAJOR_AXIS_STR, ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC, ConstantValue.SATURN_SEMI_MAJOR_AXIS_ID, ConstantValue.SATURN_SEMI_MAJOR_AXIS_SYN, ConstantValue.SATURN_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.URANUS_RADIUS_MEAN_STR, ConstantValue.URANUS_RADIUS_MEAN_DESC, ConstantValue.URANUS_RADIUS_MEAN_ID, ConstantValue.URANUS_RADIUS_MEAN_SYN, ConstantValue.URANUS_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.URANUS_MASS_STR, ConstantValue.URANUS_MASS_DESC, ConstantValue.URANUS_MASS_ID, ConstantValue.URANUS_MASS_SYN, ConstantValue.URANUS_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.URANUS_SEMI_MAJOR_AXIS_STR, ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC, ConstantValue.URANUS_SEMI_MAJOR_AXIS_ID, ConstantValue.URANUS_SEMI_MAJOR_AXIS_SYN, ConstantValue.URANUS_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.NEPTUNE_RADIUS_MEAN_STR, ConstantValue.NEPTUNE_RADIUS_MEAN_DESC, ConstantValue.NEPTUNE_RADIUS_MEAN_ID, ConstantValue.NEPTUNE_RADIUS_MEAN_SYN, ConstantValue.NEPTUNE_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.NEPTUNE_MASS_STR, ConstantValue.NEPTUNE_MASS_DESC, ConstantValue.NEPTUNE_MASS_ID, ConstantValue.NEPTUNE_MASS_SYN, ConstantValue.NEPTUNE_MASS_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_STR, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_ID, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SYN, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID);
			/* boolean */
			addKeyWord(ConstantValue.TRUE_STR, ConstantValue.TRUE_DESC, ConstantValue.TRUE_ID, ConstantValue.TRUE_SYN, ConstantValue.TRUE_SINCE, ConstantValue.TYPE_ID);
			addKeyWord(ConstantValue.FALSE_STR, ConstantValue.FALSE_DESC, ConstantValue.FALSE_ID, ConstantValue.FALSE_SYN, ConstantValue.FALSE_SINCE, ConstantValue.TYPE_ID);
			/* other */
			addKeyWord(ConstantValue.NAN_STR, ConstantValue.NAN_DESC, ConstantValue.NAN_ID, ConstantValue.NAN_SYN, ConstantValue.NAN_SINCE, ConstantValue.TYPE_ID);
			/*
			 * Random variables
			 */
			addKeyWord(RandomVariable.UNIFORM_STR, RandomVariable.UNIFORM_DESC, RandomVariable.UNIFORM_ID, RandomVariable.UNIFORM_SYN, RandomVariable.UNIFORM_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT_STR, RandomVariable.INT_DESC, RandomVariable.INT_ID, RandomVariable.INT_SYN, RandomVariable.INT_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT1_STR, RandomVariable.INT1_DESC, RandomVariable.INT1_ID, RandomVariable.INT1_SYN, RandomVariable.INT1_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT2_STR, RandomVariable.INT2_DESC, RandomVariable.INT2_ID, RandomVariable.INT2_SYN, RandomVariable.INT2_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT3_STR, RandomVariable.INT3_DESC, RandomVariable.INT3_ID, RandomVariable.INT3_SYN, RandomVariable.INT3_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT4_STR, RandomVariable.INT4_DESC, RandomVariable.INT4_ID, RandomVariable.INT4_SYN, RandomVariable.INT4_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT5_STR, RandomVariable.INT5_DESC, RandomVariable.INT5_ID, RandomVariable.INT5_SYN, RandomVariable.INT5_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT6_STR, RandomVariable.INT6_DESC, RandomVariable.INT6_ID, RandomVariable.INT6_SYN, RandomVariable.INT6_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT7_STR, RandomVariable.INT7_DESC, RandomVariable.INT7_ID, RandomVariable.INT7_SYN, RandomVariable.INT7_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT8_STR, RandomVariable.INT8_DESC, RandomVariable.INT8_ID, RandomVariable.INT8_SYN, RandomVariable.INT8_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.INT9_STR, RandomVariable.INT9_DESC, RandomVariable.INT9_ID, RandomVariable.INT9_SYN, RandomVariable.INT9_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_STR, RandomVariable.NAT0_DESC, RandomVariable.NAT0_ID, RandomVariable.NAT0_SYN, RandomVariable.NAT0_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_1_STR, RandomVariable.NAT0_1_DESC, RandomVariable.NAT0_1_ID, RandomVariable.NAT0_1_SYN, RandomVariable.NAT0_1_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_2_STR, RandomVariable.NAT0_2_DESC, RandomVariable.NAT0_2_ID, RandomVariable.NAT0_2_SYN, RandomVariable.NAT0_2_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_3_STR, RandomVariable.NAT0_3_DESC, RandomVariable.NAT0_3_ID, RandomVariable.NAT0_3_SYN, RandomVariable.NAT0_3_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_4_STR, RandomVariable.NAT0_4_DESC, RandomVariable.NAT0_4_ID, RandomVariable.NAT0_4_SYN, RandomVariable.NAT0_4_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_5_STR, RandomVariable.NAT0_5_DESC, RandomVariable.NAT0_5_ID, RandomVariable.NAT0_5_SYN, RandomVariable.NAT0_5_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_6_STR, RandomVariable.NAT0_6_DESC, RandomVariable.NAT0_6_ID, RandomVariable.NAT0_6_SYN, RandomVariable.NAT0_6_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_7_STR, RandomVariable.NAT0_7_DESC, RandomVariable.NAT0_7_ID, RandomVariable.NAT0_7_SYN, RandomVariable.NAT0_7_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_8_STR, RandomVariable.NAT0_8_DESC, RandomVariable.NAT0_8_ID, RandomVariable.NAT0_8_SYN, RandomVariable.NAT0_8_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT0_9_STR, RandomVariable.NAT0_9_DESC, RandomVariable.NAT0_9_ID, RandomVariable.NAT0_9_SYN, RandomVariable.NAT0_9_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_STR, RandomVariable.NAT1_DESC, RandomVariable.NAT1_ID, RandomVariable.NAT1_SYN, RandomVariable.NAT1_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_1_STR, RandomVariable.NAT1_1_DESC, RandomVariable.NAT1_1_ID, RandomVariable.NAT1_1_SYN, RandomVariable.NAT1_1_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_2_STR, RandomVariable.NAT1_2_DESC, RandomVariable.NAT1_2_ID, RandomVariable.NAT1_2_SYN, RandomVariable.NAT1_2_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_3_STR, RandomVariable.NAT1_3_DESC, RandomVariable.NAT1_3_ID, RandomVariable.NAT1_3_SYN, RandomVariable.NAT1_3_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_4_STR, RandomVariable.NAT1_4_DESC, RandomVariable.NAT1_4_ID, RandomVariable.NAT1_4_SYN, RandomVariable.NAT1_4_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_5_STR, RandomVariable.NAT1_5_DESC, RandomVariable.NAT1_5_ID, RandomVariable.NAT1_5_SYN, RandomVariable.NAT1_5_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_6_STR, RandomVariable.NAT1_6_DESC, RandomVariable.NAT1_6_ID, RandomVariable.NAT1_6_SYN, RandomVariable.NAT1_6_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_7_STR, RandomVariable.NAT1_7_DESC, RandomVariable.NAT1_7_ID, RandomVariable.NAT1_7_SYN, RandomVariable.NAT1_7_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_8_STR, RandomVariable.NAT1_8_DESC, RandomVariable.NAT1_8_ID, RandomVariable.NAT1_8_SYN, RandomVariable.NAT1_8_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NAT1_9_STR, RandomVariable.NAT1_9_DESC, RandomVariable.NAT1_9_ID, RandomVariable.NAT1_9_SYN, RandomVariable.NAT1_9_SINCE, RandomVariable.TYPE_ID);
			addKeyWord(RandomVariable.NOR_STR, RandomVariable.NOR_DESC, RandomVariable.NOR_ID, RandomVariable.NOR_SYN, RandomVariable.NOR_SINCE, RandomVariable.TYPE_ID);
			/*
			 * BiteWise Operators
			 */
			addKeyWord(BitwiseOperator.COMPL_STR, BitwiseOperator.COMPL_DESC, BitwiseOperator.COMPL_ID, BitwiseOperator.COMPL_SYN, BitwiseOperator.COMPL_SINCE, BitwiseOperator.TYPE_ID);
			addKeyWord(BitwiseOperator.AND_STR, BitwiseOperator.AND_DESC, BitwiseOperator.AND_ID, BitwiseOperator.AND_SYN, BitwiseOperator.AND_SINCE, BitwiseOperator.TYPE_ID);
			addKeyWord(BitwiseOperator.XOR_STR, BitwiseOperator.XOR_DESC, BitwiseOperator.XOR_ID, BitwiseOperator.XOR_SYN, BitwiseOperator.XOR_SINCE, BitwiseOperator.TYPE_ID);
			addKeyWord(BitwiseOperator.OR_STR, BitwiseOperator.OR_DESC, BitwiseOperator.OR_ID, BitwiseOperator.OR_SYN, BitwiseOperator.OR_SINCE, BitwiseOperator.TYPE_ID);
			addKeyWord(BitwiseOperator.LEFT_SHIFT_STR, BitwiseOperator.LEFT_SHIFT_DESC, BitwiseOperator.LEFT_SHIFT_ID, BitwiseOperator.LEFT_SHIFT_SYN, BitwiseOperator.LEFT_SHIFT_SINCE, BitwiseOperator.TYPE_ID);
			addKeyWord(BitwiseOperator.RIGHT_SHIFT_STR, BitwiseOperator.RIGHT_SHIFT_DESC, BitwiseOperator.RIGHT_SHIFT_ID, BitwiseOperator.RIGHT_SHIFT_SYN, BitwiseOperator.RIGHT_SHIFT_SINCE, BitwiseOperator.TYPE_ID);
			/*
			 * Units
			 */
			addKeyWord(Unit.PERC_STR, Unit.PERC_DESC, Unit.PERC_ID, Unit.PERC_SYN, Unit.PERC_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.PROMIL_STR, Unit.PROMIL_DESC, Unit.PROMIL_ID, Unit.PROMIL_SYN, Unit.PROMIL_SINCE, Unit.TYPE_ID);
			/* Metric prefixes */
			addKeyWord(Unit.YOTTA_STR, Unit.YOTTA_DESC, Unit.YOTTA_ID, Unit.YOTTA_SYN, Unit.YOTTA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.YOTTA_SEPT_STR, Unit.YOTTA_DESC, Unit.YOTTA_ID, Unit.YOTTA_SEPT_SYN, Unit.YOTTA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ZETTA_STR, Unit.ZETTA_DESC, Unit.ZETTA_ID, Unit.ZETTA_SYN, Unit.ZETTA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ZETTA_SEXT_STR, Unit.ZETTA_DESC, Unit.ZETTA_ID, Unit.ZETTA_SEXT_SYN, Unit.ZETTA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.EXA_STR, Unit.EXA_DESC, Unit.EXA_ID, Unit.EXA_SYN, Unit.EXA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.EXA_QUINT_STR, Unit.EXA_DESC, Unit.EXA_ID, Unit.EXA_QUINT_SYN, Unit.EXA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.PETA_STR, Unit.PETA_DESC, Unit.PETA_ID, Unit.PETA_SYN, Unit.PETA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.PETA_QUAD_STR, Unit.PETA_DESC, Unit.PETA_ID, Unit.PETA_QUAD_SYN, Unit.PETA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.TERA_STR, Unit.TERA_DESC, Unit.TERA_ID, Unit.TERA_SYN, Unit.TERA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.TERA_TRIL_STR, Unit.TERA_DESC, Unit.TERA_ID, Unit.TERA_TRIL_SYN, Unit.TERA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.GIGA_STR, Unit.GIGA_DESC, Unit.GIGA_ID, Unit.GIGA_SYN, Unit.GIGA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.GIGA_BIL_STR, Unit.GIGA_DESC, Unit.GIGA_ID, Unit.GIGA_BIL_SYN, Unit.GIGA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MEGA_STR, Unit.MEGA_DESC, Unit.MEGA_ID, Unit.MEGA_SYN, Unit.MEGA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MEGA_MIL_STR, Unit.MEGA_DESC, Unit.MEGA_ID, Unit.MEGA_MIL_SYN, Unit.MEGA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILO_STR, Unit.KILO_DESC, Unit.KILO_ID, Unit.KILO_SYN, Unit.KILO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILO_TH_STR, Unit.KILO_DESC, Unit.KILO_ID, Unit.KILO_TH_SYN, Unit.KILO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.HECTO_STR, Unit.HECTO_DESC, Unit.HECTO_ID, Unit.HECTO_SYN, Unit.HECTO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.HECTO_HUND_STR, Unit.HECTO_DESC, Unit.HECTO_ID, Unit.HECTO_HUND_SYN, Unit.HECTO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.DECA_STR, Unit.DECA_DESC, Unit.DECA_ID, Unit.DECA_SYN, Unit.DECA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.DECA_TEN_STR, Unit.DECA_DESC, Unit.DECA_ID, Unit.DECA_TEN_SYN, Unit.DECA_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.DECI_STR, Unit.DECI_DESC, Unit.DECI_ID, Unit.DECI_SYN, Unit.DECI_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.CENTI_STR, Unit.CENTI_DESC, Unit.CENTI_ID, Unit.CENTI_SYN, Unit.CENTI_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILLI_STR, Unit.MILLI_DESC, Unit.MILLI_ID, Unit.MILLI_SYN, Unit.MILLI_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MICRO_STR, Unit.MICRO_DESC, Unit.MICRO_ID, Unit.MICRO_SYN, Unit.MICRO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.NANO_STR, Unit.NANO_DESC, Unit.NANO_ID, Unit.NANO_SYN, Unit.NANO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.PICO_STR, Unit.PICO_DESC, Unit.PICO_ID, Unit.PICO_SYN, Unit.PICO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.FEMTO_STR, Unit.FEMTO_DESC, Unit.FEMTO_ID, Unit.FEMTO_SYN, Unit.FEMTO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ATTO_STR, Unit.ATTO_DESC, Unit.ATTO_ID, Unit.ATTO_SYN, Unit.ATTO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ZEPTO_STR, Unit.ZEPTO_DESC, Unit.ZEPTO_ID, Unit.ZEPTO_SYN, Unit.ZEPTO_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.YOCTO_STR, Unit.YOCTO_DESC, Unit.YOCTO_ID, Unit.YOCTO_SYN, Unit.YOCTO_SINCE, Unit.TYPE_ID);
			/* Units of length / distance */
			addKeyWord(Unit.METRE_STR, Unit.METRE_DESC, Unit.METRE_ID, Unit.METRE_SYN, Unit.METRE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILOMETRE_STR, Unit.KILOMETRE_DESC, Unit.KILOMETRE_ID, Unit.KILOMETRE_SYN, Unit.KILOMETRE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.CENTIMETRE_STR, Unit.CENTIMETRE_DESC, Unit.CENTIMETRE_ID, Unit.CENTIMETRE_SYN, Unit.CENTIMETRE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILLIMETRE_STR, Unit.MILLIMETRE_DESC, Unit.MILLIMETRE_ID, Unit.MILLIMETRE_SYN, Unit.MILLIMETRE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.INCH_STR, Unit.INCH_DESC, Unit.INCH_ID, Unit.INCH_SYN, Unit.INCH_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.YARD_STR, Unit.YARD_DESC, Unit.YARD_ID, Unit.YARD_SYN, Unit.YARD_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.FEET_STR, Unit.FEET_DESC, Unit.FEET_ID, Unit.FEET_SYN, Unit.FEET_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILE_STR, Unit.MILE_DESC, Unit.MILE_ID, Unit.MILE_SYN, Unit.MILE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.NAUTICAL_MILE_STR, Unit.NAUTICAL_MILE_DESC, Unit.NAUTICAL_MILE_ID, Unit.NAUTICAL_MILE_SYN, Unit.NAUTICAL_MILE_SINCE, Unit.TYPE_ID);
			/* Units of area */
			addKeyWord(Unit.METRE2_STR, Unit.METRE2_DESC, Unit.METRE2_ID, Unit.METRE2_SYN, Unit.METRE2_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.CENTIMETRE2_STR, Unit.CENTIMETRE2_DESC, Unit.CENTIMETRE2_ID, Unit.CENTIMETRE2_SYN, Unit.CENTIMETRE2_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILLIMETRE2_STR, Unit.MILLIMETRE2_DESC, Unit.MILLIMETRE2_ID, Unit.MILLIMETRE2_SYN, Unit.MILLIMETRE2_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ARE_STR, Unit.ARE_DESC, Unit.ARE_ID, Unit.ARE_SYN, Unit.ARE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.HECTARE_STR, Unit.HECTARE_DESC, Unit.HECTARE_ID, Unit.HECTARE_SYN, Unit.HECTARE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ACRE_STR, Unit.ACRE_DESC, Unit.ACRE_ID, Unit.ACRE_SYN, Unit.ACRE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILOMETRE2_STR, Unit.KILOMETRE2_DESC, Unit.KILOMETRE2_ID, Unit.KILOMETRE2_SYN, Unit.KILOMETRE2_SINCE, Unit.TYPE_ID);
			/* Units of volume */
			addKeyWord(Unit.MILLIMETRE3_STR, Unit.MILLIMETRE3_DESC, Unit.MILLIMETRE3_ID, Unit.MILLIMETRE3_SYN, Unit.MILLIMETRE3_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.CENTIMETRE3_STR, Unit.CENTIMETRE3_DESC, Unit.CENTIMETRE3_ID, Unit.CENTIMETRE3_SYN, Unit.CENTIMETRE3_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.METRE3_STR, Unit.METRE3_DESC, Unit.METRE3_ID, Unit.METRE3_SYN, Unit.METRE3_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILOMETRE3_STR, Unit.KILOMETRE3_DESC, Unit.KILOMETRE3_ID, Unit.KILOMETRE3_SYN, Unit.KILOMETRE3_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILLILITRE_STR, Unit.MILLILITRE_DESC, Unit.MILLILITRE_ID, Unit.MILLILITRE_SYN, Unit.MILLILITRE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.LITRE_STR, Unit.LITRE_DESC, Unit.LITRE_ID, Unit.LITRE_SYN, Unit.LITRE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.GALLON_STR, Unit.GALLON_DESC, Unit.GALLON_ID, Unit.GALLON_SYN, Unit.GALLON_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.PINT_STR, Unit.PINT_DESC, Unit.PINT_ID, Unit.PINT_SYN, Unit.PINT_SINCE, Unit.TYPE_ID);
			/* Units of time */
			addKeyWord(Unit.SECOND_STR, Unit.SECOND_DESC, Unit.SECOND_ID, Unit.SECOND_SYN, Unit.SECOND_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILLISECOND_STR, Unit.MILLISECOND_DESC, Unit.MILLISECOND_ID, Unit.MILLISECOND_SYN, Unit.MILLISECOND_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MINUTE_STR, Unit.MINUTE_DESC, Unit.MINUTE_ID, Unit.MINUTE_SYN, Unit.MINUTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.HOUR_STR, Unit.HOUR_DESC, Unit.HOUR_ID, Unit.HOUR_SYN, Unit.HOUR_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.DAY_STR, Unit.DAY_DESC, Unit.DAY_ID, Unit.DAY_SYN, Unit.DAY_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.WEEK_STR, Unit.WEEK_DESC, Unit.WEEK_ID, Unit.WEEK_SYN, Unit.WEEK_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.JULIAN_YEAR_STR, Unit.JULIAN_YEAR_DESC, Unit.JULIAN_YEAR_ID, Unit.JULIAN_YEAR_SYN, Unit.JULIAN_YEAR_SINCE, Unit.TYPE_ID);
			/* Units of mass */
			addKeyWord(Unit.KILOGRAM_STR, Unit.KILOGRAM_DESC, Unit.KILOGRAM_ID, Unit.KILOGRAM_SYN, Unit.KILOGRAM_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.GRAM_STR, Unit.GRAM_DESC, Unit.GRAM_ID, Unit.GRAM_SYN, Unit.GRAM_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILLIGRAM_STR, Unit.MILLIGRAM_DESC, Unit.MILLIGRAM_ID, Unit.MILLIGRAM_SYN, Unit.MILLIGRAM_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.DECAGRAM_STR, Unit.DECAGRAM_DESC, Unit.DECAGRAM_ID, Unit.DECAGRAM_SYN, Unit.DECAGRAM_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.TONNE_STR, Unit.TONNE_DESC, Unit.TONNE_ID, Unit.TONNE_SYN, Unit.TONNE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.OUNCE_STR, Unit.OUNCE_DESC, Unit.OUNCE_ID, Unit.OUNCE_SYN, Unit.OUNCE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.POUND_STR, Unit.POUND_DESC, Unit.POUND_ID, Unit.POUND_SYN, Unit.POUND_SINCE, Unit.TYPE_ID);
			/* Units of information */
			addKeyWord(Unit.BIT_STR, Unit.BIT_DESC, Unit.BIT_ID, Unit.BIT_SYN, Unit.BIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILOBIT_STR, Unit.KILOBIT_DESC, Unit.KILOBIT_ID, Unit.KILOBIT_SYN, Unit.KILOBIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MEGABIT_STR, Unit.MEGABIT_DESC, Unit.MEGABIT_ID, Unit.MEGABIT_SYN, Unit.MEGABIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.GIGABIT_STR, Unit.GIGABIT_DESC, Unit.GIGABIT_ID, Unit.GIGABIT_SYN, Unit.GIGABIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.TERABIT_STR, Unit.TERABIT_DESC, Unit.TERABIT_ID, Unit.TERABIT_SYN, Unit.TERABIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.PETABIT_STR, Unit.PETABIT_DESC, Unit.PETABIT_ID, Unit.PETABIT_SYN, Unit.PETABIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.EXABIT_STR, Unit.EXABIT_DESC, Unit.EXABIT_ID, Unit.EXABIT_SYN, Unit.EXABIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ZETTABIT_STR, Unit.ZETTABIT_DESC, Unit.ZETTABIT_ID, Unit.ZETTABIT_SYN, Unit.ZETTABIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.YOTTABIT_STR, Unit.YOTTABIT_DESC, Unit.YOTTABIT_ID, Unit.YOTTABIT_SYN, Unit.YOTTABIT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.BYTE_STR, Unit.BYTE_DESC, Unit.BYTE_ID, Unit.BYTE_SYN, Unit.BYTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILOBYTE_STR, Unit.KILOBYTE_DESC, Unit.KILOBYTE_ID, Unit.KILOBYTE_SYN, Unit.KILOBYTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MEGABYTE_STR, Unit.MEGABYTE_DESC, Unit.MEGABYTE_ID, Unit.MEGABYTE_SYN, Unit.MEGABYTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.GIGABYTE_STR, Unit.GIGABYTE_DESC, Unit.GIGABYTE_ID, Unit.GIGABYTE_SYN, Unit.GIGABYTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.TERABYTE_STR, Unit.TERABYTE_DESC, Unit.TERABYTE_ID, Unit.TERABYTE_SYN, Unit.TERABYTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.PETABYTE_STR, Unit.PETABYTE_DESC, Unit.PETABYTE_ID, Unit.PETABYTE_SYN, Unit.PETABYTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.EXABYTE_STR, Unit.EXABYTE_DESC, Unit.EXABYTE_ID, Unit.EXABYTE_SYN, Unit.EXABYTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ZETTABYTE_STR, Unit.ZETTABYTE_DESC, Unit.ZETTABYTE_ID, Unit.ZETTABYTE_SYN, Unit.ZETTABYTE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.YOTTABYTE_STR, Unit.YOTTABYTE_DESC, Unit.YOTTABYTE_ID, Unit.YOTTABYTE_SYN, Unit.YOTTABYTE_SINCE, Unit.TYPE_ID);
			/* Units of energy */
			addKeyWord(Unit.JOULE_STR, Unit.JOULE_DESC, Unit.JOULE_ID, Unit.JOULE_SYN, Unit.JOULE_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.ELECTRONO_VOLT_STR, Unit.ELECTRONO_VOLT_DESC, Unit.ELECTRONO_VOLT_ID, Unit.ELECTRONO_VOLT_SYN, Unit.ELECTRONO_VOLT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILO_ELECTRONO_VOLT_STR, Unit.KILO_ELECTRONO_VOLT_DESC, Unit.KILO_ELECTRONO_VOLT_ID, Unit.KILO_ELECTRONO_VOLT_SYN, Unit.KILO_ELECTRONO_VOLT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MEGA_ELECTRONO_VOLT_STR, Unit.MEGA_ELECTRONO_VOLT_DESC, Unit.MEGA_ELECTRONO_VOLT_ID, Unit.MEGA_ELECTRONO_VOLT_SYN, Unit.MEGA_ELECTRONO_VOLT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.GIGA_ELECTRONO_VOLT_STR, Unit.GIGA_ELECTRONO_VOLT_DESC, Unit.GIGA_ELECTRONO_VOLT_ID, Unit.GIGA_ELECTRONO_VOLT_SYN, Unit.GIGA_ELECTRONO_VOLT_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.TERA_ELECTRONO_VOLT_STR, Unit.TERA_ELECTRONO_VOLT_DESC, Unit.TERA_ELECTRONO_VOLT_ID, Unit.TERA_ELECTRONO_VOLT_SYN, Unit.TERA_ELECTRONO_VOLT_SINCE, Unit.TYPE_ID);
			/* Units of speed */
			addKeyWord(Unit.METRE_PER_SECOND_STR, Unit.METRE_PER_SECOND_DESC, Unit.METRE_PER_SECOND_ID, Unit.METRE_PER_SECOND_SYN, Unit.METRE_PER_SECOND_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILOMETRE_PER_HOUR_STR, Unit.KILOMETRE_PER_HOUR_DESC, Unit.KILOMETRE_PER_HOUR_ID, Unit.KILOMETRE_PER_HOUR_SYN, Unit.KILOMETRE_PER_HOUR_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILE_PER_HOUR_STR, Unit.MILE_PER_HOUR_DESC, Unit.MILE_PER_HOUR_ID, Unit.MILE_PER_HOUR_SYN, Unit.MILE_PER_HOUR_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KNOT_STR, Unit.KNOT_DESC, Unit.KNOT_ID, Unit.KNOT_SYN, Unit.KNOT_SINCE, Unit.TYPE_ID);
			/* Units of acceleration */
			addKeyWord(Unit.METRE_PER_SECOND2_STR, Unit.METRE_PER_SECOND2_DESC, Unit.METRE_PER_SECOND2_ID, Unit.METRE_PER_SECOND2_SYN, Unit.METRE_PER_SECOND2_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.KILOMETRE_PER_HOUR2_STR, Unit.KILOMETRE_PER_HOUR2_DESC, Unit.KILOMETRE_PER_HOUR2_ID, Unit.KILOMETRE_PER_HOUR2_SYN, Unit.KILOMETRE_PER_HOUR2_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MILE_PER_HOUR2_STR, Unit.MILE_PER_HOUR2_DESC, Unit.MILE_PER_HOUR2_ID, Unit.MILE_PER_HOUR2_SYN, Unit.MILE_PER_HOUR2_SINCE, Unit.TYPE_ID);
			/* Units of angle */
			addKeyWord(Unit.RADIAN_ARC_STR, Unit.RADIAN_ARC_DESC, Unit.RADIAN_ARC_ID, Unit.RADIAN_ARC_SYN, Unit.RADIAN_ARC_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.DEGREE_ARC_STR, Unit.DEGREE_ARC_DESC, Unit.DEGREE_ARC_ID, Unit.DEGREE_ARC_SYN, Unit.DEGREE_ARC_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.MINUTE_ARC_STR, Unit.MINUTE_ARC_DESC, Unit.MINUTE_ARC_ID, Unit.MINUTE_ARC_SYN, Unit.MINUTE_ARC_SINCE, Unit.TYPE_ID);
			addKeyWord(Unit.SECOND_ARC_STR, Unit.SECOND_ARC_DESC, Unit.SECOND_ARC_ID, Unit.SECOND_ARC_SYN, Unit.SECOND_ARC_SINCE, Unit.TYPE_ID);
			/* User Defined Function specific parser keywords */
			if (UDFExpression) addUDFSpecificParserKeyWords();
		}
		/*
		 * Other parser symbols key words
		 */
		addKeyWord(ParserSymbol.LEFT_PARENTHESES_STR, ParserSymbol.LEFT_PARENTHESES_DESC, ParserSymbol.LEFT_PARENTHESES_ID, ParserSymbol.LEFT_PARENTHESES_SYN, ParserSymbol.LEFT_PARENTHESES_SINCE, ParserSymbol.TYPE_ID);
		addKeyWord(ParserSymbol.RIGHT_PARENTHESES_STR, ParserSymbol.RIGHT_PARENTHESES_DESC, ParserSymbol.RIGHT_PARENTHESES_ID, ParserSymbol.RIGHT_PARENTHESES_SYN, ParserSymbol.RIGHT_PARENTHESES_SINCE, ParserSymbol.TYPE_ID);
		addKeyWord(ParserSymbol.COMMA_STR, ParserSymbol.COMMA_DESC, ParserSymbol.COMMA_ID, ParserSymbol.COMMA_SYN, ParserSymbol.COMMA_SINCE, ParserSymbol.TYPE_ID);
		addKeyWord(ParserSymbol.SEMI_STR, ParserSymbol.SEMI_DESC, ParserSymbol.COMMA_ID, ParserSymbol.SEMI_SYN, ParserSymbol.COMMA_SINCE, ParserSymbol.TYPE_ID);
		addKeyWord(ParserSymbol.DECIMAL_REG_EXP, ParserSymbol.NUMBER_REG_DESC, ParserSymbol.NUMBER_ID, ParserSymbol.NUMBER_SYN, ParserSymbol.NUMBER_SINCE, ParserSymbol.NUMBER_TYPE_ID);
		addKeyWord(ParserSymbol.BLANK_STR, ParserSymbol.BLANK_DESC, ParserSymbol.BLANK_ID, ParserSymbol.BLANK_SYN, ParserSymbol.BLANK_SINCE, ParserSymbol.TYPE_ID);
	}
	/**
	 * Adds arguments key words to the keywords list
	 */
	private void addArgumentsKeyWords() {
		int argumentsNumber = argumentsList.size();
		for (int argumentIndex = 0; argumentIndex<argumentsNumber; argumentIndex++) {
			Argument arg = argumentsList.get(argumentIndex);
			if (arg.getArgumentType() != Argument.RECURSIVE_ARGUMENT)
				addKeyWord(arg.getArgumentName(),arg.getDescription(), argumentIndex, arg.getArgumentName(), "", Argument.TYPE_ID);
			else
				addKeyWord(arg.getArgumentName(),arg.getDescription(), argumentIndex, arg.getArgumentName() + "(n)", "", RecursiveArgument.TYPE_ID_RECURSIVE);
		}
	}
	/**
	 * Adds functions key words to the keywords list
	 */
	private void addFunctionsKeyWords() {
		int functionsNumber = functionsList.size();
		for (int functionIndex = 0; functionIndex<functionsNumber; functionIndex++) {
			Function fun = functionsList.get(functionIndex);
			String syntax = fun.getFunctionName() + "(";
			int paramsNum = fun.getParametersNumber();
			for (int i = 0; i < paramsNum; i++) {
				syntax = syntax + fun.getParameterName(i);
				if ( (paramsNum > 1) && (i < paramsNum - 1) )
					syntax = syntax + ",";
			}
			syntax = syntax + ")";
			addKeyWord(fun.getFunctionName(), fun.getDescription(), functionIndex, syntax, "", Function.TYPE_ID);
		}
	}
	/**
	 * Adds constants key words to the keywords list
	 */
	private void addConstantsKeyWords() {
		int constantsNumber = constantsList.size();
		for (int constantIndex = 0; constantIndex < constantsNumber; constantIndex++) {
			Constant c = constantsList.get(constantIndex);
			addKeyWord(c.getConstantName(), c.getDescription(), constantIndex, c.getConstantName(), "", Constant.TYPE_ID);
		}
	}
	/**
	 * Final validation of key words
	 */
	private void validateParserKeyWords() {
		if (mXparser.overrideBuiltinTokens) {
			/*
			 * Building list of user defined tokens
			 */
			List<String> userDefinedTokens = new ArrayList<String>();
			for (Argument arg : argumentsList)
				userDefinedTokens.add( arg.getArgumentName() );
			for (Function fun : functionsList)
				userDefinedTokens.add( fun.getFunctionName() );
			for (Constant cons : constantsList)
				userDefinedTokens.add( cons.getConstantName() );
			/*
			 * If no user defined tokens then exit
			 */
			if (userDefinedTokens.isEmpty()) return;
			/*
			 * Building list of built-in tokens to remove
			 */
			List<KeyWord> keyWordsToOverride = new ArrayList<KeyWord>();
			for (KeyWord kw : keyWordsList)
				if (userDefinedTokens.contains(kw.wordString))
					keyWordsToOverride.add(kw);
			/*
			 * If nothing to remove then exit
			 */
			if (keyWordsToOverride.isEmpty()) return;
			/*
			 * Performing final override
			 */
			for (KeyWord kw : keyWordsToOverride)
				keyWordsList.remove(kw);
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
	private void addKeyWord(String wordString, String wordDescription, int wordId, String wordSyntax, String wordSince, int wordTypeId) {
		if ( (mXparser.tokensToRemove.size() > 0) || (mXparser.tokensToModify.size() > 0) )
			if (	(wordTypeId == Function1Arg.TYPE_ID) ||
					(wordTypeId == Function2Arg.TYPE_ID) ||
					(wordTypeId == Function3Arg.TYPE_ID) ||
					(wordTypeId == FunctionVariadic.TYPE_ID) ||
					(wordTypeId == CalculusOperator.TYPE_ID) ||
					(wordTypeId == ConstantValue.TYPE_ID) ||
					(wordTypeId == RandomVariable.TYPE_ID) ||
					(wordTypeId == Unit.TYPE_ID)	) {
				if (mXparser.tokensToRemove.size() > 0)
					if (mXparser.tokensToRemove.contains(wordString)) return;
				if (mXparser.tokensToModify.size() > 0) {
					for (TokenModification tm :	mXparser.tokensToModify)
						if (tm.currentToken.equals(wordString)) {
							wordString = tm.newToken;
							if (tm.newTokenDescription != null)
								wordDescription = tm.newTokenDescription;
							wordSyntax = wordSyntax.replace(tm.currentToken, tm.newToken);
						}
				}
			}
		keyWordsList.add(new KeyWord(wordString, wordDescription, wordId, wordSyntax, wordSince, wordTypeId));
	}
	/**
	 * Checks whether unknown token represents number literal
	 * provided in different numeral base system, where
	 * base is between 1 and 36.
	 *
	 * @param token   The token not know to the parser
	 */
	private void checkOtherNumberBases(Token token) {
		int dotPos = 0;
		int tokenStrLength = token.tokenStr.length();
		/* find dot position */
		if (tokenStrLength >= 2) {
			if ( token.tokenStr.charAt(1) == '.' )
				dotPos = 1;
		}
		if ( (dotPos == 0) && (tokenStrLength >= 3) ) {
			if ( token.tokenStr.charAt(2) == '.' )
				dotPos = 2;
		}
		if ( (dotPos == 0) && (tokenStrLength >= 4) ) {
			if ( token.tokenStr.charAt(3) == '.' )
				dotPos = 3;
		}
		if (dotPos == 0) return;
		/* check if there is base indicator */
		String baseInd = token.tokenStr.substring(0, dotPos).toLowerCase();
		String numberLiteral = "";
		if (tokenStrLength > dotPos+1) numberLiteral = token.tokenStr.substring(dotPos+1);
		int numeralSystemBase = 0;
		/* evaluate numeral system base */
		if ( baseInd.equals("b") ) numeralSystemBase = 2;
		else if ( baseInd.equals("o") ) numeralSystemBase = 8;
		else if ( baseInd.equals("h") ) numeralSystemBase = 16;
		else if ( baseInd.equals("b1") ) numeralSystemBase = 1;
		else if ( baseInd.equals("b2") ) numeralSystemBase = 2;
		else if ( baseInd.equals("b3") ) numeralSystemBase = 3;
		else if ( baseInd.equals("b4") ) numeralSystemBase = 4;
		else if ( baseInd.equals("b5") ) numeralSystemBase = 5;
		else if ( baseInd.equals("b6") ) numeralSystemBase = 6;
		else if ( baseInd.equals("b7") ) numeralSystemBase = 7;
		else if ( baseInd.equals("b8") ) numeralSystemBase = 8;
		else if ( baseInd.equals("b9") ) numeralSystemBase = 9;
		else if ( baseInd.equals("b10") ) numeralSystemBase = 10;
		else if ( baseInd.equals("b11") ) numeralSystemBase = 11;
		else if ( baseInd.equals("b12") ) numeralSystemBase = 12;
		else if ( baseInd.equals("b13") ) numeralSystemBase = 13;
		else if ( baseInd.equals("b14") ) numeralSystemBase = 14;
		else if ( baseInd.equals("b15") ) numeralSystemBase = 15;
		else if ( baseInd.equals("b16") ) numeralSystemBase = 16;
		else if ( baseInd.equals("b17") ) numeralSystemBase = 17;
		else if ( baseInd.equals("b18") ) numeralSystemBase = 18;
		else if ( baseInd.equals("b19") ) numeralSystemBase = 19;
		else if ( baseInd.equals("b20") ) numeralSystemBase = 20;
		else if ( baseInd.equals("b21") ) numeralSystemBase = 21;
		else if ( baseInd.equals("b22") ) numeralSystemBase = 22;
		else if ( baseInd.equals("b23") ) numeralSystemBase = 23;
		else if ( baseInd.equals("b24") ) numeralSystemBase = 24;
		else if ( baseInd.equals("b25") ) numeralSystemBase = 25;
		else if ( baseInd.equals("b26") ) numeralSystemBase = 26;
		else if ( baseInd.equals("b27") ) numeralSystemBase = 27;
		else if ( baseInd.equals("b28") ) numeralSystemBase = 28;
		else if ( baseInd.equals("b29") ) numeralSystemBase = 29;
		else if ( baseInd.equals("b30") ) numeralSystemBase = 30;
		else if ( baseInd.equals("b31") ) numeralSystemBase = 31;
		else if ( baseInd.equals("b32") ) numeralSystemBase = 32;
		else if ( baseInd.equals("b33") ) numeralSystemBase = 33;
		else if ( baseInd.equals("b34") ) numeralSystemBase = 34;
		else if ( baseInd.equals("b35") ) numeralSystemBase = 35;
		else if ( baseInd.equals("b36") ) numeralSystemBase = 36;
		/* if base was found, perform conversion */
		if ( (numeralSystemBase > 0) && (numeralSystemBase <= 36) ) {
			token.tokenTypeId = ParserSymbol.NUMBER_TYPE_ID;
			token.tokenId = ParserSymbol.NUMBER_ID;
			token.tokenValue = NumberTheory.convOthBase2Decimal(numberLiteral, numeralSystemBase);
		}
	}
	/**
	 * Checks whether unknown token represents fraction
	 * provided as fraction or mixed fraction
	 *
	 * @param token   The token not know to the parser
	 */
	private void checkFraction(Token token) {
		int tokenStrLength = token.tokenStr.length();
		if (tokenStrLength < 3) return;
		if (!mXparser.regexMatch(token.tokenStr, ParserSymbol.FRACTION)) return;
		int underscore1stPos = token.tokenStr.indexOf('_');
		int underscore2ndPos = token.tokenStr.indexOf('_', underscore1stPos + 1);
		boolean mixedFraction = false;
		if (underscore2ndPos > 0)
			mixedFraction = true;
		double fractionValue;
		if (mixedFraction) {
			String wholeStr = token.tokenStr.substring(0, underscore1stPos);
			String numeratorStr = token.tokenStr.substring(underscore1stPos + 1, underscore2ndPos);
			String denominatorStr = token.tokenStr.substring(underscore2ndPos + 1);
			double whole = Double.parseDouble(wholeStr);
			double numerator = Double.parseDouble(numeratorStr);
			double denominator = Double.parseDouble(denominatorStr);
			if (denominator == 0)
				fractionValue = Double.NaN;
			else {
				fractionValue = whole + numerator / denominator;
			}
		} else {
			String numeratorStr = token.tokenStr.substring(0, underscore1stPos);
			String denominatorStr = token.tokenStr.substring(underscore1stPos + 1);
			double numerator = Double.parseDouble(numeratorStr);
			double denominator = Double.parseDouble(denominatorStr);
			if (denominator == 0)
				fractionValue = Double.NaN;
			else {
				fractionValue = numerator / denominator;
			}
		}
		token.tokenTypeId = ParserSymbol.NUMBER_TYPE_ID;
		token.tokenId = ParserSymbol.NUMBER_ID;
		token.tokenValue = fractionValue;
	}
	/**
	 * Adds expression token
	 * Method is called by the tokenExpressionString()
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
		token.tokenTypeId = keyWord.wordTypeId;
		token.tokenId = keyWord.wordId;
		if (token.tokenTypeId == Argument.TYPE_ID)
			token.tokenValue = argumentsList.get(token.tokenId).argumentValue;
		else if (token.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
				token.tokenValue = Double.valueOf(token.tokenStr);
				token.keyWord = ParserSymbol.NUMBER_STR;
		} else if (token.tokenTypeId == Token.NOT_MATCHED) {
			checkOtherNumberBases(token);
			if (token.tokenTypeId == Token.NOT_MATCHED)
				checkFraction(token);
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
		validateParserKeyWords();
		if (parserKeyWordsOnly == false) {
			addArgumentsKeyWords();
			addFunctionsKeyWords();
			addConstantsKeyWords();
		}
		java.util.Collections.sort(keyWordsList, new DescKwLenComparator());
		/*
		 * Evaluate position after sorting for the following keywords types
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
		initialTokens = new ArrayList<Token>();
		int expLen = expressionString.length();
		if (expLen == 0) return;
		/*
		 * Clearing expression string from spaces
		 */
		String newExpressionString = "";
		char c;
		int blankCnt = 0;
		int newExpLen = 0;
		for (int i = 0; i < expLen; i++) {
			c = expressionString.charAt(i);
			if ( (c == ' ') || (c == '\n') || (c == '\r') || (c == '\t') || (c == '\f') ) {
				blankCnt++;
			} else if (blankCnt > 0) {
				if (newExpLen > 0) newExpressionString = newExpressionString + " ";
				blankCnt = 0;
			}
			if (blankCnt == 0) {
				newExpressionString = newExpressionString + c;
				newExpLen++;
			}
		}
		/*
		 * words list and tokens list
		 */
		if (newExpressionString.length() == 0) return;
		int lastPos = 0; /* position of the key word previously added*/
		int pos = 0; /* current position */
		String tokenStr = "";
		int matchStatusPrev = NOT_FOUND; /* unknown key word (previous) */
		int matchStatus = NOT_FOUND; /* unknown key word (current) */
		KeyWord kw = null;
		String sub = "";
		String kwStr = "";
		char precedingChar;
		char followingChar;
		char firstChar;
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
			/*
			 * Number has to start with digit or dot
			 */
			firstChar = newExpressionString.charAt(pos);
			if (	(firstChar == '+') ||
					(firstChar == '-') ||
					(firstChar == '.') ||
					(firstChar == '0') ||
					(firstChar == '1') ||
					(firstChar == '2') ||
					(firstChar == '3') ||
					(firstChar == '4') ||
					(firstChar == '5') ||
					(firstChar == '6') ||
					(firstChar == '7') ||
					(firstChar == '8') ||
					(firstChar == '9')	) {
				for (int i = pos; i < newExpressionString.length(); i++) {
					/*
					 * Escaping if encountering char that can not
					 * be included in number
					 */
					if (i > pos) {
						c = newExpressionString.charAt(i);
						if (	(c != '+') &&
								(c != '-') &&
								(c != '0') &&
								(c != '1') &&
								(c != '2') &&
								(c != '3') &&
								(c != '4') &&
								(c != '5') &&
								(c != '6') &&
								(c != '7') &&
								(c != '8') &&
								(c != '9') &&
								(c != '.') &&
								(c != 'e') &&
								(c != 'E') ) break;
					}
					/*
					 * Checking if substring represents number
					 */
					String str = newExpressionString.substring(pos, i+1);
					if ( mXparser.regexMatch(str, ParserSymbol.DECIMAL_REG_EXP) )
						numEnd = i;
				}
			}
			/*
			 * If number was found
			 */
			if (numEnd >= 0)
				if (pos > 0) {
					precedingChar = newExpressionString.charAt(pos-1);
					if (
							( precedingChar != ' ' ) &&
							( precedingChar != ',' ) &&
							( precedingChar != ';' ) &&
							( precedingChar != '|' ) &&
							( precedingChar != '&' ) &&
							( precedingChar != '+' ) &&
							( precedingChar != '-' ) &&
							( precedingChar != '*' ) &&
							( precedingChar != '\\' ) &&
							( precedingChar != '/' ) &&
							( precedingChar != '(' ) &&
							( precedingChar != ')' ) &&
							( precedingChar != '=' ) &&
							( precedingChar != '>' ) &&
							( precedingChar != '<' ) &&
							( precedingChar != '~' ) &&
							( precedingChar != '^' ) &&
							( precedingChar != '#' ) &&
							( precedingChar != '%' ) &&
							( precedingChar != '@' ) &&
							( precedingChar != '!' )	)
						numEnd = -1;
				}
			if (numEnd >= 0)
				if (numEnd < newExpressionString.length()-1) {
					followingChar = newExpressionString.charAt(numEnd+1);
					if (
							( followingChar != ' ' ) &&
							( followingChar != ',' ) &&
							( followingChar != ';' ) &&
							( followingChar != '|' ) &&
							( followingChar != '&' ) &&
							( followingChar != '+' ) &&
							( followingChar != '-' ) &&
							( followingChar != '*' ) &&
							( followingChar != '\\' ) &&
							( followingChar != '/' ) &&
							( followingChar != '(' ) &&
							( followingChar != ')' ) &&
							( followingChar != '=' ) &&
							( followingChar != '>' ) &&
							( followingChar != '<' ) &&
							( followingChar != '~' ) &&
							( followingChar != '^' ) &&
							( followingChar != '#' ) &&
							( followingChar != '%' ) &&
							( followingChar != '@' ) &&
							( followingChar != '!' )	)
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
				firstChar = newExpressionString.charAt(pos);
				boolean leadingOp = true;
				if ( (firstChar == '-') || (firstChar == '+') ) {
					if (initialTokens.size() > 0) {
						Token lastToken = initialTokens.get(initialTokens.size()-1);
						if (	((lastToken.tokenTypeId == Operator.TYPE_ID) && (lastToken.tokenId != Operator.FACT_ID) && (lastToken.tokenId != Operator.PERC_ID)) ||
								(lastToken.tokenTypeId == BinaryRelation.TYPE_ID) ||
								(lastToken.tokenTypeId == BooleanOperator.TYPE_ID) ||
								(lastToken.tokenTypeId == BitwiseOperator.TYPE_ID) ||
								((lastToken.tokenTypeId == ParserSymbol.TYPE_ID) && (lastToken.tokenId == ParserSymbol.LEFT_PARENTHESES_ID) ))
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
					if (firstChar == '-')
						addToken("-", keyWordsList.get(minusKwId));
					if (firstChar == '+')
						addToken("+", keyWordsList.get(plusKwId));
					pos++;
				}
				/*
				 * Add found number to the tokens list
				 */
				tokenStr = newExpressionString.substring(pos, numEnd+1);
				addToken(tokenStr, keyWordsList.get(numberKwId));
				/*
				 * change current position (just after the number ends)
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
				 * If there is no number which starts with current position
				 * Check for known key words
				 */
				int kwId = -1;
				matchStatus = NOT_FOUND;
				do {
					kwId++;
					kw = keyWordsList.get(kwId);
					kwStr = kw.wordString;
					if (pos + kwStr.length() <= newExpressionString.length()) {
						sub = newExpressionString.substring(pos, pos + kwStr.length() );
						if (sub.equals(kwStr))
							matchStatus = FOUND;
						/*
						 * If key word is known by the parser
						 */
						if (matchStatus == FOUND) {
							/*
							 * If key word is in the form of identifier
							 * then check preceding and following characters
							 */
							if (	(kw.wordTypeId == Argument.TYPE_ID) ||
									(kw.wordTypeId == RecursiveArgument.TYPE_ID_RECURSIVE) ||
									(kw.wordTypeId == Function1Arg.TYPE_ID) ||
									(kw.wordTypeId == Function2Arg.TYPE_ID) ||
									(kw.wordTypeId == Function3Arg.TYPE_ID) ||
									(kw.wordTypeId == FunctionVariadic.TYPE_ID) ||
									(kw.wordTypeId == ConstantValue.TYPE_ID) ||
									(kw.wordTypeId == Constant.TYPE_ID) ||
									(kw.wordTypeId == RandomVariable.TYPE_ID) ||
									(kw.wordTypeId == Unit.TYPE_ID) ||
									(kw.wordTypeId == Function.TYPE_ID) ||
									(kw.wordTypeId == CalculusOperator.TYPE_ID)	) {
								/*
								 * Checking preceding character
								 */
								if (pos > 0) {
									precedingChar = newExpressionString.charAt(pos-1);
									if (
											( precedingChar != ' ' ) &&
											( precedingChar != ',' ) &&
											( precedingChar != ';' ) &&
											( precedingChar != '|' ) &&
											( precedingChar != '&' ) &&
											( precedingChar != '+' ) &&
											( precedingChar != '-' ) &&
											( precedingChar != '*' ) &&
											( precedingChar != '\\' ) &&
											( precedingChar != '/' ) &&
											( precedingChar != '(' ) &&
											( precedingChar != ')' ) &&
											( precedingChar != '=' ) &&
											( precedingChar != '>' ) &&
											( precedingChar != '<' ) &&
											( precedingChar != '~' ) &&
											( precedingChar != '^' ) &&
											( precedingChar != '#' ) &&
											( precedingChar != '%' ) &&
											( precedingChar != '@' ) &&
											( precedingChar != '!' ) ) matchStatus = NOT_FOUND;
								}
								/*
								 * Checking following character
								 */
								if ( (matchStatus == FOUND) && ( pos + kwStr.length() < newExpressionString.length() ) ) {
									followingChar = newExpressionString.charAt(pos + kwStr.length());
									if (
											( followingChar != ' ' ) &&
											( followingChar != ',' ) &&
											( followingChar != ';' ) &&
											( followingChar != '|' ) &&
											( followingChar != '&' ) &&
											( followingChar != '+' ) &&
											( followingChar != '-' ) &&
											( followingChar != '*' ) &&
											( followingChar != '\\' ) &&
											( followingChar != '/' ) &&
											( followingChar != '(' ) &&
											( followingChar != ')' ) &&
											( followingChar != '=' ) &&
											( followingChar != '>' ) &&
											( followingChar != '<' ) &&
											( followingChar != '~' ) &&
											( followingChar != '^' ) &&
											( followingChar != '#' ) &&
											( followingChar != '%' ) &&
											( followingChar != '@' ) &&
											( followingChar != '!' ) ) matchStatus = NOT_FOUND;
								}
							}
						}
					}
				} while ( (kwId < keyWordsList.size()-1) && (matchStatus == NOT_FOUND) );
				/*
				 * If key word known by the parser was found
				 */
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
					if ( !( (kw.wordTypeId == ParserSymbol.TYPE_ID) && (kw.wordId == ParserSymbol.BLANK_ID) ) )
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
					if (!tokenStack.isEmpty()) {
						TokenStackElement stackEl = tokenStack.pop();
						if (stackEl.precedingFunction == true)
							tokenLevel--;
					}
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
	private final String FUNCTION = "function";
	private final String ARGUMENT = "argument";
	private final String ERROR    = "error";
	/**
	 * Tokenizes expression string and returns tokens list,
	 * including: string, type, level.
	 *
	 * @return Copy of initial tokens.
	 *
	 * @see Token
	 * @see mXparser#consolePrintTokens(List)
	 */
	public List<Token> getCopyOfInitialTokens() {
		List<Token> tokensListCopy = new ArrayList<Token>();
		if (expressionString.length() == 0) return tokensListCopy;
		tokenizeExpressionString();
		if (initialTokens.size() == 0) return tokensListCopy;
		Token token;
		for (int i = 0; i < initialTokens.size(); i++) {
			token =  initialTokens.get(i);
			if (token.tokenTypeId == Token.NOT_MATCHED) {
				if (mXparser.regexMatch(token.tokenStr, ParserSymbol.nameOnlyTokenRegExp)) {
					token.looksLike = ARGUMENT;
					if (i < initialTokens.size()-1) {
						Token tokenNext = initialTokens.get(i+1);
						if ( (tokenNext.tokenTypeId == ParserSymbol.TYPE_ID) && (tokenNext.tokenId == ParserSymbol.LEFT_PARENTHESES_ID) )
							token.looksLike = FUNCTION;
					}
				} else {
					token.looksLike = ERROR;
				}
			}
			tokensListCopy.add(token.clone());
		}
		return tokensListCopy;
	}
	/**
	 * Returns missing user defined arguments names, i.e.
	 * sin(x) + cos(y) where x and y are not defined
	 * function will return x and y.
	 *
	 * @return Array of missing user defined arguments names
	 * - distinct strings.
	 */
	public String[] getMissingUserDefinedArguments() {
		List<Token> tokens = getCopyOfInitialTokens();
		List<String> missingArguments = new ArrayList<String>();
		for (Token t : tokens)
			if ( t.looksLike.equals(ARGUMENT) )
				if ( !missingArguments.contains(t.tokenStr) )
					missingArguments.add(t.tokenStr);
		int n = missingArguments.size();
		String[] missArgs = new String[n];
		for (int i = 0; i < n; i++)
			missArgs[i] = missingArguments.get(i);
		return missArgs;
	}
	/**
	 * Returns missing user defined functions names, i.e.
	 * sin(x) + fun(x,y) where fun is not defined
	 * function will return fun.
	 *
	 * @return Array of missing user defined functions names
	 * - distinct strings.
	 */
	public String[] getMissingUserDefinedFunctions() {
		List<Token> tokens = getCopyOfInitialTokens();
		List<String> missingFunctions = new ArrayList<String>();
		for (Token t : tokens)
			if ( t.looksLike.equals(FUNCTION) )
				if ( !missingFunctions.contains(t.tokenStr) )
					missingFunctions.add(t.tokenStr);
		int n = missingFunctions.size();
		String[] missFun = new String[n];
		for (int i = 0; i < n; i++)
			missFun[i] = missingFunctions.get(i);
		return missFun;
	}
	/**
	 * Gets initial tokens and returns copied list
	 *
	 * @see Function
	 */
	List<Token> getInitialTokens() {
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
		validateParserKeyWords();
		if (parserKeyWordsOnly == false) {
			addArgumentsKeyWords();
			addFunctionsKeyWords();
			addConstantsKeyWords();
		}
		helpStr = helpStr + getLeftSpaces("12345","#") + "  " +
		getRightSpaces("01234567890123456789", "key word") + getRightSpaces("                        ","type")
		+ getRightSpaces("0123456789012345678901234567890123456789012345", "syntax") + getRightSpaces("012345", "since") +  "description" + "\n";
		helpStr = helpStr + getLeftSpaces("12345","-") + "  " +
		getRightSpaces("01234567890123456789", "--------") + getRightSpaces("                        ","----")
		+ getRightSpaces("0123456789012345678901234567890123456789012345", "------") + getRightSpaces("012345", "-----") +  "-----------" + "\n";

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
				case RecursiveArgument.TYPE_ID_RECURSIVE: type = RecursiveArgument.TYPE_DESC_RECURSIVE; break;
				case Function.TYPE_ID: type = Function.TYPE_DESC; break;
				case Constant.TYPE_ID: type = Constant.TYPE_DESC; break;
				case Unit.TYPE_ID: type = Unit.TYPE_DESC; break;
				case BitwiseOperator.TYPE_ID: type = BitwiseOperator.TYPE_DESC; break;
			}
			line = getLeftSpaces("12345",Integer.toString(keyWordIndex+1)) + ". " +
			getRightSpaces("01234567890123456789", kw) + getRightSpaces("                        ","<" + type + ">")
			+ getRightSpaces("0123456789012345678901234567890123456789012345", keyWord.syntax) + getRightSpaces("012345", keyWord.since) +  keyWord.description + "\n";
			if ( (line.toLowerCase().indexOf(word.toLowerCase()) >= 0) ){
				helpStr = helpStr + line;
			}
		}
		return helpStr;
	}
	/**
	 * Returns list of key words known to the parser
	 *
	 * @return      List of keywords known to the parser.
	 *
	 * @see KeyWord
	 * @see KeyWord#wordTypeId
	 * @see Expression#getHelp()
	 */
	public List<KeyWord> getKeyWords() {
		return getKeyWords("");
	}
	/**
	 * Returns list of key words known to the parser
	 *
	 * @param query Give any string to filter list of key words against this string.
	 *              User more precise syntax: str=tokenString, desc=tokenDescription,
	 *              syn=TokenSyntax, sin=tokenSince, wid=wordId, tid=wordTypeId
	 *              to narrow the result.
	 *
	 * @return      List of keywords known to the parser filter against query string.
	 *
	 * @see KeyWord
	 * @see KeyWord#wordTypeId
	 * @see Expression#getHelp(String)
	 */
	public List<KeyWord> getKeyWords(String query) {
		keyWordsList = new ArrayList<KeyWord>();
		List<KeyWord> kwyWordsToReturn = new ArrayList<KeyWord>();
		addParserKeyWords();
		validateParserKeyWords();
		if (parserKeyWordsOnly == false) {
			addArgumentsKeyWords();
			addFunctionsKeyWords();
			addConstantsKeyWords();
		}
		java.util.Collections.sort(keyWordsList, new KwTypeComparator() );
		String line;
		for (KeyWord kw : keyWordsList) {
			line = 	"str=" + kw.wordString + " " +
					"desc=" + kw.description + " " +
					"syn=" + kw.syntax + " " +
					"sin=" + kw.since + " " +
					"wid=" + kw.wordId + " " +
					"tid=" + kw.wordTypeId
					;
			if ( (line.toLowerCase().indexOf(query.toLowerCase()) >= 0) )
				kwyWordsToReturn.add(kw);
		}
		return kwyWordsToReturn;
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
	static final void showTokens(List<Token> tokensList) {
		String maxStr = "TokenTypeId";
		mXparser.consolePrintln(" --------------------");
		mXparser.consolePrintln("| Expression tokens: |");
		mXparser.consolePrintln(" ---------------------------------------------------------------------------------------------------------------");
		mXparser.consolePrintln("|    TokenIdx |       Token |        KeyW |     TokenId | TokenTypeId |  TokenLevel |  TokenValue |   LooksLike |");
		mXparser.consolePrintln(" ---------------------------------------------------------------------------------------------------------------");
		if (tokensList == null) {
			mXparser.consolePrintln("NULL tokens list");
			return;
		}
		int tokensNumber = tokensList.size();
		for (int tokenIndex=0; tokenIndex < tokensNumber; tokenIndex++){
			String tokenIndexStr = getLeftSpaces(maxStr, Integer.toString(tokenIndex) );
			String tokenStr = getLeftSpaces(maxStr, tokensList.get(tokenIndex).tokenStr );
			String keyWordStr = getLeftSpaces(maxStr, tokensList.get(tokenIndex).keyWord );
			String tokenIdStr = getLeftSpaces(maxStr, Integer.toString(tokensList.get(tokenIndex).tokenId) );
			String tokenTypeIdStr = getLeftSpaces(maxStr, Integer.toString(tokensList.get(tokenIndex).tokenTypeId) );
			String tokenLevelStr = getLeftSpaces(maxStr, Integer.toString(tokensList.get(tokenIndex).tokenLevel) );
			String tokenValueStr = getLeftSpaces(maxStr, Double.toString(tokensList.get(tokenIndex).tokenValue) );
			String tokenLooksLikeStr = getLeftSpaces(maxStr, tokensList.get(tokenIndex).looksLike );
			mXparser.consolePrintln(	"| " + tokenIndexStr +
								" | " + tokenStr +
								" | " + keyWordStr +
								" | " + tokenIdStr +
								" | " + tokenTypeIdStr +
								" | " + tokenLevelStr +
								" | " + tokenValueStr +
								" | " + tokenLooksLikeStr + " |");
		}
		mXparser.consolePrintln(" ---------------------------------------------------------------------------------------------------------------");
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