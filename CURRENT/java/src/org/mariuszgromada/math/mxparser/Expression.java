/*
 * @(#)Expression.java        6.0.0    2024-05-19
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
package org.mariuszgromada.math.mxparser;

import java.io.ByteArrayInputStream;
import java.io.Serializable;
import java.util.*;

import org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations;
import org.mariuszgromada.math.mxparser.mathcollection.BooleanAlgebra;
import org.mariuszgromada.math.mxparser.mathcollection.MathConstants;
import org.mariuszgromada.math.mxparser.mathcollection.MathFunctions;
import org.mariuszgromada.math.mxparser.mathcollection.NumberTheory;
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
 * Expression - base class for real expression definition.
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
 *                 <a href="https://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="https://payhip.com/INFIMA" target="_blank">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br>
 *                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br>
 *                 <a href="https://scalarmath.org/" target="_blank">ScalarMath.org - a powerful math engine and math scripting language</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Lite</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
 *                 <a href="https://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *
 * @version        6.0.0
 *
 * @see            Argument
 * @see            RecursiveArgument
 * @see            Constant
 * @see            Function
 */
public class Expression extends PrimitiveElement implements Serializable {
	private static final int serialClassID = 6;
	private static final long serialVersionUID = SerializationUtils.getSerialVersionUID(serialClassID);
	/**
	 * Expression type id
	 */
	public static final int TYPE_ID = 100;
	public static String TYPE_DESC = ParserSymbol.NA;
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
	 * Status of the syntax - no syntax error
	 */
	public static final boolean NO_SYNTAX_ERRORS = true;
	/**
	 * Status of the syntax - syntax error or syntax status unknown
	 */
	public static final boolean SYNTAX_ERROR = false;
	/**
	 * Status of the syntax - syntax error or syntax status unknown
	 *
	 * @deprecated Planned to be removed, use {@link #SYNTAX_ERROR} instead
	 */
	@Deprecated
	public static final boolean SYNTAX_ERROR_OR_STATUS_UNKNOWN = SYNTAX_ERROR;
	private static final boolean SYNTAX_STATUS_UNKNOWN = false;
	/**
	 * Expression string (for example: "sin(x)+cos(y)")
	 */
	String expressionString = StringInvariant.EMPTY;
	/**
	 * Expression string after attempt to clean
	 */
	private String expressionStringCleaned = StringInvariant.EMPTY;
	/**
	 * Expression description
	 */
	private String description = StringInvariant.EMPTY;
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
	 * List of keywords known by the parser
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
	List<Token> initialTokens;
	private CompilationDetails initialCompilationDetails;
	/**
	 * List of string tokens that should not be considered
	 * while seeking for optional implied multiplication.
	 *
	 * Example: sum( x2y, 1, 10, 2*x2y)
	 *
	 * Here x2y should always stay as x2y
	 */
	private Set<String> neverParseForImpliedMultiplication;
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
	private CompilationDetails compilationDetails;
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
	double computingTime;
	/**
	 * if true then new tokenizing is required
	 * (the initialTokens list needs to be updated)
	 */
	boolean expressionWasModified;
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
	 * Implied multiplication mode
	 */
	private boolean impliedMultiplicationMode = mXparser.impliedMultiplicationMode;
	/**
	 * Fires an error when impliedMultiplicationMode is on
	 * and there is a missing multiplication operator
	 */
	private boolean impliedMultiplicationError = false;
	/**
	 * Internal parameter for calculus expressions
	 * to avoid decrease in accuracy.
	 */
	boolean disableRounding;
	static final boolean DISABLE_ROUNDING = true;
	static final boolean KEEP_ROUNDING_SETTINGS = false;
	/**
	 * Status of the expression syntax
	 *
	 * Please referet to the:
	 *    - NO_SYNTAX_ERRORS
	 *    - SYNTAX_ERROR
	 *    - SYNTAX_STATUS_UNKNOWN
	 */
	private boolean syntaxStatus;
	private boolean isFullyCompiled;
	/**
	 * Message after checking the syntax
	 */
	private String errorMessage;
	/**
	 * Optional message from calculate method
	 */
	private String errorMessageCalculate;
	private static int ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH = mXparser.ERROR_MESSAGE_MAXIMUM_LENGTH / 5;
	/**
	 * Log used internally to mark started recursion
	 * call on the current object, necessary to
	 * avoid infinite loops while recursive syntax
	 * checking (i.e. f to g and g to f)
	 * or marking modified flags on the expressions
	 * related to this expression.
	 *
	 * @see #setExpressionModifiedFlag()
	 * @see #checkSyntax()
	 */
	private boolean recursionCallPending;
	/**
	 * Internal counter to avoid infinite loops while calculating
	 * expression defined in the way showed by below examples
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
	 * functions etc... will not be recognized
	 * during tokenization
	 */
	private boolean parserKeyWordsOnly;
	/**
	 * Internal indicator informing hte parser
	 * that unicode know keywords are enabled
	 * and will be recognized by the parser
	 * as built-in functions or operators
	 */
	private boolean unicodeKeyWordsEnabled = mXparser.unicodeKeyWordsEnabled;
	/**
	 * Internal indicator informing the parser
	 * whether to try to fix the expression String.
	 * For example, situations such as:
	 * "++" change to "+",
	 * "+-" changed tro "-"
	 * "-+" changed tro "-"
	 * "--" changed tro "+"
	 */
	private boolean attemptToFixExpStrEnabled = mXparser.attemptToFixExpStrEnabled;
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
	 * It shows whether to build again tokens list
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
	 * An indicator of whether an error message
	 * should be passed from the current expression
	 * to the expression that called it.
	 */
	private boolean forwardErrorMessage = true;
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
		if (expression == null || expression == this)
			return;
		if (!relatedExpressionsList.contains(expression))
			relatedExpressionsList.add(expression);
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
		mXparser.consolePrintln(description + StringInvariant.SPACE_EQUAL_SPACE + expressionString + StringInvariant.COLON);
		for (Expression e : relatedExpressionsList)
			mXparser.consolePrintln(StringInvariant.RIGHT_ARROW_SPACE + e.description + StringInvariant.SPACE_EQUAL_SPACE + e.expressionString);
	}
	/**
	 * Method return error message after
	 * calling checkSyntax() method or
	 * calculate().
	 *
	 * @return     Error message as string.
	 */
	public String getErrorMessage() {
		return StringUtils.cleanNewLineAtTheEnd(errorMessage);
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
		markAsNotFullyCompiled();
	}
	void markAsNotFullyCompiled() {
		isFullyCompiled = false;
		initialCompilationDetails = null;
	}
	/**
	 * Sets expression status to modified
	 * Calls setExpressionModifiedFlag() method
	 * to all related expressions.
	 */
	void setExpressionModifiedFlag() {
		if (recursionCallPending)
			return;
		recursionCallPending = true;
		recursionCallsCounter = 0;
		internalClone = false;
		expressionWasModified = true;
		syntaxStatus = SYNTAX_STATUS_UNKNOWN;
		markAsNotFullyCompiled();
		errorMessage = StringInvariant.EMPTY;
		for (Expression e : relatedExpressionsList)
			e.setExpressionModifiedFlag();
		recursionCallPending = false;
	}
	/**
	 * Common variables while expression initializing
	 */
	private void expressionInternalVarsInit() {
		description = StringInvariant.EMPTY;
		errorMessage = StringInvariant.EMPTY;
		errorMessageCalculate = StringInvariant.EMPTY;
		computingTime = 0;
		recursionCallPending = false;
		recursionCallsCounter = 0;
		internalClone = false;
		forwardErrorMessage = true;
		parserKeyWordsOnly = false;
		verboseMode = false;
		syntaxStatus = false;
		isFullyCompiled = false;
		impliedMultiplicationMode = mXparser.impliedMultiplicationMode;
		unicodeKeyWordsEnabled = mXparser.unicodeKeyWordsEnabled;
		attemptToFixExpStrEnabled = mXparser.attemptToFixExpStrEnabled;
		disableRounding = KEEP_ROUNDING_SETTINGS;
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
		super(Expression.TYPE_ID);
		expressionString = StringInvariant.EMPTY;
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
		super(Expression.TYPE_ID);
		expressionInit();
		this.expressionString = expressionString;
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
		super(Expression.TYPE_ID);
		expressionInit();
		this.expressionString = expressionString;
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
	Expression(
			String expressionString
			,List<Token> initialTokens
			,List<Argument> argumentsList
			,List<Function> functionsList
			,List<Constant> constantsList
			,boolean disableUlpRounding
			,boolean UDFExpression
			,List<Double> UDFVariadicParamsAtRunTime
	) {
		super(Expression.TYPE_ID);
		this.expressionString = expressionString;
		this.initialTokens = initialTokens;
		this.argumentsList = argumentsList;
		this.functionsList = functionsList;
		this.constantsList = constantsList;
		relatedExpressionsList = new ArrayList<Expression>();
		expressionWasModified = false;
		syntaxStatus = NO_SYNTAX_ERRORS;
		isFullyCompiled = false;
		description = StringInvariant.INTERNAL;
		errorMessage = StringInvariant.EMPTY;
		errorMessageCalculate = StringInvariant.EMPTY;
		computingTime = 0;
		recursionCallPending = false;
		recursionCallsCounter = 0;
		internalClone = false;
		forwardErrorMessage = true;
		parserKeyWordsOnly = false;
		verboseMode = false;
		impliedMultiplicationMode = mXparser.impliedMultiplicationMode;
		unicodeKeyWordsEnabled = mXparser.unicodeKeyWordsEnabled;
		attemptToFixExpStrEnabled = mXparser.attemptToFixExpStrEnabled;
		this.UDFExpression = UDFExpression;
		this.UDFVariadicParamsAtRunTime = UDFVariadicParamsAtRunTime;
		this.disableRounding = disableUlpRounding;
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
		super(Expression.TYPE_ID);
		this.expressionString = expressionString;
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
	/*
	 * Private constructor - expression cloning.
	 */
	private Expression(Expression expressionToClone, boolean isThreadSafeClone, CloneCache cloneCache) {
		super(Expression.TYPE_ID);

		expressionString = expressionToClone.expressionString;
		expressionStringCleaned = expressionToClone.expressionStringCleaned;
		description = expressionToClone.description;
		computingTime = expressionToClone.computingTime;
		expressionWasModified = expressionToClone.expressionWasModified;
		recursiveMode = expressionToClone.recursiveMode;
		verboseMode = expressionToClone.verboseMode;
		impliedMultiplicationMode = expressionToClone.impliedMultiplicationMode;
		impliedMultiplicationError = expressionToClone.impliedMultiplicationError;
		disableRounding = expressionToClone.disableRounding;
		syntaxStatus = expressionToClone.syntaxStatus;
		isFullyCompiled = expressionToClone.isFullyCompiled;
		errorMessage = expressionToClone.errorMessage;
		errorMessageCalculate = expressionToClone.errorMessageCalculate;
		recursionCallPending = expressionToClone.recursionCallPending;
		recursionCallsCounter = expressionToClone.recursionCallsCounter;
		parserKeyWordsOnly = expressionToClone.parserKeyWordsOnly;
		unicodeKeyWordsEnabled = expressionToClone.unicodeKeyWordsEnabled;
		attemptToFixExpStrEnabled = expressionToClone.attemptToFixExpStrEnabled;
		UDFExpression = expressionToClone.UDFExpression;
		forwardErrorMessage = expressionToClone.forwardErrorMessage;
		optionsChangesetNumber = expressionToClone.optionsChangesetNumber;
		keyWordsList = expressionToClone.keyWordsList;
		UDFVariadicParamsAtRunTime = expressionToClone.UDFVariadicParamsAtRunTime;
		neverParseForImpliedMultiplication = expressionToClone.neverParseForImpliedMultiplication;

		if (isThreadSafeClone) {
			internalClone = expressionToClone.internalClone;
			relatedExpressionsList = new ArrayList<Expression>();
			argumentsList = ExpressionUtils.cloneForThreadSafeArgumenstList(this, expressionToClone.argumentsList, cloneCache);
			functionsList = ExpressionUtils.cloneForThreadSafeFunctionsList(this, expressionToClone.functionsList, cloneCache);
			constantsList = ExpressionUtils.cloneForThreadSafeConstantsList(this, expressionToClone.constantsList, cloneCache);
			return;
		}

		internalClone = true;
		argumentsList = expressionToClone.argumentsList;
		functionsList = expressionToClone.functionsList;
		constantsList = expressionToClone.constantsList;
		relatedExpressionsList = expressionToClone.relatedExpressionsList;
	}
	/**
	 * Sets (modifies expression) expression string.
	 *
	 * @param      expressionString    the expression string
	 */
	public void setExpressionString(String expressionString) {
		this.expressionString = expressionString;
		expressionStringCleaned = StringInvariant.EMPTY;
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
	 * Returns expression string
	 *
	 * @return Expression string definition.
	 */
	public String getCanonicalExpressionString() {
		StringBuilder canonicalExpression = new StringBuilder(1000);
		for (Token t : getCopyOfInitialTokens())
			canonicalExpression.append(t.tokenStr);
		return canonicalExpression.toString();
	}
	/**
	 * Clears expression string
	 */
	public void clearExpressionString() {
		expressionString = StringInvariant.EMPTY;
		expressionStringCleaned = StringInvariant.EMPTY;
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
		this.description = StringInvariant.EMPTY;
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
	 * Sets implied multiplication
	 */
	public void enableImpliedMultiplicationMode() {
		if (impliedMultiplicationMode) return;
		impliedMultiplicationMode = true;
		setExpressionModifiedFlag();
	}
	/**
	 * Disables implied multiplication
	 */
	public void disableImpliedMultiplicationMode() {
		if (!impliedMultiplicationMode) return;
		impliedMultiplicationMode = false;
		setExpressionModifiedFlag();
	}
	/**
	 * Gets implied multiplication status
	 *
	 * @return     true if implied multiplication is enabled,
	 *             otherwise returns false.
	 */
	public boolean checkIfImpliedMultiplicationMode() {
		return impliedMultiplicationMode;
	}
	/**
	 * Enables unicode built-in parser keywords, this flag
	 * informs the parser that built-in unicode keywords
	 * are supported and will be recognized as functions or
	 * operators.
	 */
	public void enableUnicodeBuiltinKeyWordsMode() {
		if (unicodeKeyWordsEnabled) return;
		unicodeKeyWordsEnabled = true;
		setExpressionModifiedFlag();
	}
	/**
	 * Disables unicode built-in parser keywords, this flag
	 * informs the parser that built-in unicode keywords
	 * are not supported and will not be recognized as functions or
	 * operators.
	 */
	public void disableUnicodeBuiltinKeyWordsMode() {
		if (!unicodeKeyWordsEnabled) return;
		unicodeKeyWordsEnabled = false;
		setExpressionModifiedFlag();
	}
	/**
	 * Gets unicode built-in parser keywords mode
	 *
	 * @return     true if unicode built-in parser keywords is enabled,
	 *             otherwise returns false.
	 */
	public boolean checkIfUnicodeBuiltinKeyWordsMode() {
		return unicodeKeyWordsEnabled;
	}
	/**
	 * Enables attempt to fix the expression String.
	 * For example, situations such as:
	 * "++" change to "+",
	 * "+-" changed to "-"
	 * "-+" changed to "-"
	 * "--" changed to "+"
	 */
	public void enableAttemptToFixExpStrMode() {
		if (attemptToFixExpStrEnabled) return;
		attemptToFixExpStrEnabled = true;
		setExpressionModifiedFlag();
	}
	/**
	 * Disables attempt to fix the expression String.
	 * For example, situations such as:
	 * "++" change to "+",
	 * "+-" changed to "-"
	 * "-+" changed to "-"
	 * "--" changed ro "+"
	 */
	public void disableAttemptToFixExpStrMode() {
		if (!attemptToFixExpStrEnabled) return;
		attemptToFixExpStrEnabled = false;
		setExpressionModifiedFlag();
	}
	/**
	 * Gets attempt to fix expression string mode
	 *
	 * @return     true attempt to fix expression string mode is enabled,
	 *             otherwise returns false.
	 */
	public boolean checkIfAttemptToFixExpStrMode() {
		return attemptToFixExpStrEnabled;
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
	 * An indicator of whether an error message
	 * should be passed from the current expression
	 * to the expression that called it.
	 *
	 * @param forward If true then message is being forwarded.
	 */
	void setForwardErrorMessage(boolean forward) {
		if (forward == forwardErrorMessage)
			return;
		errorMessage = StringInvariant.EMPTY;
		errorMessageCalculate = StringInvariant.EMPTY;
		forwardErrorMessage = forward;
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
			if (e == null) continue;
			switch (e.getMyTypeId()) {
				case Argument.TYPE_ID:
				case RecursiveArgument.TYPE_ID_RECURSIVE:
					addArguments((Argument)e);
					break;
				case Constant.TYPE_ID:
					addConstants((Constant)e);
					break;
				case Function.TYPE_ID:
					addFunctions((Function)e);
					break;
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
			if (e == null) continue;
			switch (e.getMyTypeId()) {
				case Argument.TYPE_ID:
				case RecursiveArgument.TYPE_ID_RECURSIVE:
					removeArguments((Argument)e);
					break;
				case Constant.TYPE_ID:
					removeConstants((Constant)e);
					break;
				case Function.TYPE_ID:
					removeFunctions((Function)e);
					break;
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
			if (arg == null) continue;
			argumentsList.add(arg);
			if (arg.getArgumentBodyType() == Argument.BODY_RUNTIME)
				arg.addRelatedExpression(this);
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
	 * @param      argumentValue       the argument value
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
		if (argumentsNumber == 0)
			return NOT_FOUND;

		for (int argumentIndex = 0; argumentIndex < argumentsNumber; argumentIndex++)
			if (argumentsList.get(argumentIndex).getArgumentName().equals(argumentName))
				return argumentIndex;

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
		if (argumentIndex < 0 || argumentIndex >= argumentsList.size())
			return null;
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
		if (argumentIndex == NOT_FOUND)
			return Double.NaN;
		return argumentsList.get(argumentIndex).getArgumentValue();
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
			if (argumentIndex == NOT_FOUND)
				continue;
			Argument arg = argumentsList.get(argumentIndex);
			arg.removeRelatedExpression(this);
			argumentsList.remove(argumentIndex);
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
			if (argument == null)
				continue;
			argumentsList.remove(argument);
			argument.removeRelatedExpression(this);
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
			if (constant == null)
				continue;
			constantsList.add(constant);
			constant.addRelatedExpression(this);
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
	public void addConstants(List<Constant> constantsList) {
		for (Constant c : constantsList) {
			this.constantsList.add(c);
			c.addRelatedExpression(this);
		}
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
		if (constantsNumber == 0)
			return NOT_FOUND;

		for (int constantIndex = 0; constantIndex < constantsNumber; constantIndex++)
			if (constantsList.get(constantIndex).getConstantName().equals(constantName))
				return constantIndex;

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
		if (constantIndex < 0 || constantIndex >= constantsList.size())
			return null;
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
			if (constantIndex == NOT_FOUND)
				continue;
			Constant c = constantsList.get(constantIndex);
			c.removeRelatedExpression(this);
			constantsList.remove(constantIndex);
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
			if (constant == null)
				continue;
			constantsList.remove(constant);
			constant.removeRelatedExpression(this);
			setExpressionModifiedFlag();
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
			if (f == null)
				continue;
			functionsList.add(f);
			if (f.getFunctionBodyType() == Function.BODY_RUNTIME)
				f.addRelatedExpression(this);
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
		if (functionsNumber == 0)
			return NOT_FOUND;

		for (int functionIndex = 0; functionIndex < functionsNumber; functionIndex++)
			if (functionsList.get(functionIndex).getFunctionName().equals(functionName))
				return functionIndex;

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
		if (functionIndex < 0 || functionIndex >= functionsList.size())
			return null;
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
			if (functionIndex == NOT_FOUND)
				continue;
			Function f = functionsList.get(functionIndex);
			f.removeRelatedExpression(this);
			functionsList.remove(f);
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
			if (function == null)
				continue;
			function.removeRelatedExpression(this);
			functionsList.remove(function);
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
		token.tokenTypeId = ParserSymbol.NUMBER_TYPE_ID;
		token.tokenId = ParserSymbol.NUMBER_ID;
		token.keyWord = ParserSymbol.NUMBER_STR;

		if (!mXparser.ulpRounding || disableRounding || !ulpRound) {
			token.tokenValue = number;
			return;
		}

		if (Double.isNaN(number) || Double.isInfinite(number)) {
			token.tokenValue = number;
			return;
		}

		int precision = MathFunctions.ulpDecimalDigitsBefore(number);
		if (precision >= 0)
			token.tokenValue = MathFunctions.round(number, precision);
		else
			token.tokenValue = number;
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
		while ( !(tokensList.get(rPos).tokenTypeId == ParserSymbol.TYPE_ID
				&& tokensList.get(rPos).tokenId == ParserSymbol.RIGHT_PARENTHESES_ID
				&& tokensList.get(rPos).tokenLevel ==  tokensList.get(lPos).tokenLevel) )
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
	 * @param      value              the number
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
		while ( !(tokensList.get(c1Pos).tokenTypeId == ParserSymbol.TYPE_ID
				&& tokensList.get(c1Pos).tokenId == ParserSymbol.COMMA_ID
				&& tokensList.get(c1Pos).tokenLevel ==  ifLevel) )
			c1Pos++;
		/*
		 * Evaluate 2 comma position on the same level
		 */
		int c2Pos = c1Pos+1;
		while (	!(tokensList.get(c2Pos).tokenTypeId == ParserSymbol.TYPE_ID
				&& tokensList.get(c2Pos).tokenId == ParserSymbol.COMMA_ID
				&& tokensList.get(c2Pos).tokenLevel ==  ifLevel) )
			c2Pos++;
		/*
		 * Evaluate right parenthesis position
		 */
		int rPos = c2Pos+1;
		while (	!(tokensList.get(rPos).tokenTypeId == ParserSymbol.TYPE_ID
				&& tokensList.get(rPos).tokenId == ParserSymbol.RIGHT_PARENTHESES_ID
				&& tokensList.get(rPos).tokenLevel ==  ifLevel) )
			rPos++;
		if (!Double.isNaN(ifCondition)) {
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
	private List<Token> createInitialTokens(int startPos, int endPos, List<Token> tokensList) {
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
		if (initialTokens.get(lPpos).tokenTypeId != ParserSymbol.TYPE_ID || initialTokens.get(lPpos).tokenId != ParserSymbol.LEFT_PARENTHESES_ID)
			return -1;

		int tokenLevel = initialTokens.get(lPpos).tokenLevel;
		/*
		 * Evaluate right parenthesis position
		 */
		int endPos = lPpos+1;
		while (	!(initialTokens.get(endPos).tokenTypeId == ParserSymbol.TYPE_ID
				&& initialTokens.get(endPos).tokenId == ParserSymbol.RIGHT_PARENTHESES_ID
				&& initialTokens.get(endPos).tokenLevel ==  tokenLevel) )
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
			if (token.tokenTypeId == ParserSymbol.TYPE_ID && token.tokenId == ParserSymbol.COMMA_ID && token.tokenLevel == tokenLevel)
				numberOfCommas++;
		}
		return numberOfCommas + 1;
	}
	/**
	 * Gets / returns argument representing given argument name. If
	 * argument name exists on the list of known arguments
	 * the initial status of the found argument is remembered, otherwise new
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
			return argParam;
		}
		argParam.initialValue = argParam.argument.argumentValue;
		argParam.initialType = argParam.argument.argumentType;
		argParam.argument.argumentValue = argParam.argument.getArgumentValue();
		argParam.argument.argumentType = Argument.FREE_ARGUMENT;
		return argParam;
	}
	/**
	 * Clears argument parameter.
	 *
	 * @param      argParam            the argument parameter.
	 */
	private void clearParamArgument(ArgumentParameter argParam) {
		if (argParam.presence == NOT_FOUND) {
			argumentsList.remove(argParam.index);
			return;
		}
		argParam.argument.argumentValue = argParam.initialValue;
		argParam.argument.argumentType = argParam.initialType;
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.FREE_ARGUMENT, pos);
		Argument argument = argumentsList.get( tokensList.get(pos).tokenId);
		boolean argumentVerboseMode = argument.getVerboseMode();
		if (verboseMode)
			argument.setVerboseMode();
		setToNumber(pos, argument.getArgumentValue());
		if (!argumentVerboseMode)
			argument.setSilentMode();
	}
	/**
	 * Dependent Arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	private void DEPENDENT_ARGUMENT(int pos, CalcStepsRegister calcStepsRegister) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.DEPENDENT_ARGUMENT, pos);
		Argument argument = argumentsList.get( tokensList.get(pos).tokenId);
		boolean argumentVerboseMode = argument.getVerboseMode();
		if (verboseMode)
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
		double argumentValue = argument.getArgumentValue(calcStepsRegister);
		if (forwardErrorMessage && this != argument.argumentExpression) {
			errorMessageCalculate = StringUtils.stringConcatenateMaxLength(errorMessageCalculate, argument.argumentExpression.errorMessageCalculate, ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH);
			errorMessage = StringUtils.stringConcatenateMaxLength(errorMessage, argument.argumentExpression.errorMessageCalculate, mXparser.ERROR_MESSAGE_MAXIMUM_LENGTH);
		}
		int tokensListSizeAfter = tokensList.size();
		if (tokensListSizeBefore == tokensListSizeAfter) {
			Token tokenAfter = tokensList.get(pos);
			if ( (tokenBefore.tokenTypeId == tokenAfter.tokenTypeId) && (tokenBefore.tokenId == tokenAfter.tokenId)	) {
				setToNumber(pos, argumentValue);
			}
		}
		if (!argumentVerboseMode)
			argument.setSilentMode();
	}
	/**
	 * User functions handling.
	 *
	 * @param      pos                 the token position
	 */
	private void USER_FUNCTION(int pos, CalcStepsRegister calcStepsRegister) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.USER_FUNCTION, pos);
		Function function;
		Function fun = functionsList.get( tokensList.get(pos).tokenId );
		if (fun.getRecursiveMode()) {
			function = fun.clone();
			function.functionExpression.recursionCallsCounter = recursionCallsCounter;
		} else
			function = fun;
		function.functionExpression.UDFVariadicParamsAtRunTime = getNumbers(pos);
		int argsNumber = function.getParametersNumber();
		if (!function.isVariadic)
			for (int argIdx = 0; argIdx < argsNumber; argIdx++)
				function.setArgumentValue(argIdx, tokensList.get(pos + argIdx + 1).tokenValue);
		boolean functionVerboseMode = function.getVerboseMode();
		if (verboseMode)
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
			value = function.calculate(calcStepsRegister);
		} catch (StackOverflowError soe) {
			value = Double.NaN;
			errorMessage = StringUtils.trimNotNull(soe.getMessage());
		}
		if (forwardErrorMessage && this != function.functionExpression) {
			errorMessageCalculate = StringUtils.stringConcatenateMaxLength(errorMessageCalculate, function.functionExpression.errorMessageCalculate, ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH);
			errorMessage = StringUtils.stringConcatenateMaxLength(errorMessage, function.functionExpression.errorMessageCalculate, mXparser.ERROR_MESSAGE_MAXIMUM_LENGTH);
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
		if (!functionVerboseMode)
			function.setSilentMode();
	}
	/**
	 * User constants handling.
	 *
	 * @param      pos                 the token position
	 */
	private void USER_CONSTANT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.USER_CONSTANT, pos);
		Constant constant = constantsList.get( tokensList.get(pos).tokenId );
		setToNumber(pos, constant.getConstantValue());
	}
	/**
	 * Recursive arguments handling.
	 *
	 * @param      pos                 the token position
	 */
	private void RECURSIVE_ARGUMENT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.RECURSIVE_ARGUMENT, pos);
		double index = tokensList.get(pos+1).tokenValue;
		RecursiveArgument argument = (RecursiveArgument)argumentsList.get( tokensList.get(pos).tokenId );
		boolean argumentVerboseMode = argument.getVerboseMode();
		if (verboseMode)
			argument.setVerboseMode();
		double result = argument.getArgumentValue(index);
		if (forwardErrorMessage && this != argument.argumentExpression) {
			errorMessageCalculate = StringUtils.stringConcatenateMaxLength(errorMessageCalculate, argument.argumentExpression.errorMessageCalculate, ERROR_MESSAGE_CALCULATE_MAXIMUM_LENGTH);
			errorMessage = StringUtils.stringConcatenateMaxLength(errorMessage, argument.argumentExpression.errorMessageCalculate, mXparser.ERROR_MESSAGE_MAXIMUM_LENGTH);
		}
		f1SetDecreaseRemove(pos, result);
		if (!argumentVerboseMode)
			argument.setSilentMode();
	}
	/**
	 * Constants handling.
	 *
	 * @param      pos                 the token position
	 */
	private void CONSTANT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.CONSTANT, pos);
		double constValue = Double.NaN;
		int constantValueId = tokensList.get(pos).tokenId;
		if (constantValueId == ConstantValue.NPAR_ID)
			constValue = UDFVariadicParamsAtRunTime.size();
		else
			constValue = MathConstants.getConstantValue(constantValueId);
		setToNumber(pos, constValue);
	}
	/**
	 * Constants handling.
	 *
	 * @param      pos                 the token position
	 */
	private void UNIT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.UNIT, pos);
		setToNumber(pos, Units.getUnitValue(tokensList.get(pos).tokenId));
	}
	/**
	 * Random Variables handling.
	 *
	 * @param      pos                 the token position
	 */
	private void RANDOM_VARIABLE(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.RANDOM_VARIABLE, pos);
		setToNumber(pos, ProbabilityDistributions.getRandomVariableValue(tokensList.get(pos).tokenId));
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.TETRATION, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.POWER, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.MODULO, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.DIVIDE, pos);
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		if (disableRounding) {
			double result = Double.NaN;
			if (b != 0) result = a / b;
			opSetDecreaseRemove(pos, result, true);
		}
		else opSetDecreaseRemove(pos, MathFunctions.div(a, b), true);
	}
	/**
	 * Integer division handling.
	 *
	 * @param      pos                 the token position
	 */
	private void DIVIDE_QUOTIENT(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.DIVIDE_QUOTIENT, pos);
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, MathFunctions.divQuotient(a, b), true);
	}
	/**
	 * Multiplication handling.
	 *
	 * @param      pos                 the token position
	 */
	private void MULTIPLY(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.MULTIPLY, pos);
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		if (disableRounding) opSetDecreaseRemove(pos, a * b, true);
		else opSetDecreaseRemove(pos, MathFunctions.multiply(a, b), true);
	}
	/**
	 * Addition handling.
	 *
	 * @param      pos                 the token position
	 */
	private void PLUS(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.PLUS, pos);
		Token b = tokensList.get(pos+1);

		if (pos == 0) {
			if (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
				setToNumber(pos,b.tokenValue);
				tokensList.remove(pos+1);
			}
			return;
		}

		Token a = tokensList.get(pos-1);
		if (a.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID && b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID)
			if (disableRounding) opSetDecreaseRemove(pos, a.tokenValue + b.tokenValue, true);
			else opSetDecreaseRemove(pos, MathFunctions.plus(a.tokenValue, b.tokenValue), true);
		else if (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.MINUS, pos);
		Token b = tokensList.get(pos+1);

		if (pos == 0) {
			if (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
				setToNumber(pos,-b.tokenValue);
				tokensList.remove(pos+1);
			}
			return;
		}

		Token a = tokensList.get(pos-1);
		if (a.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID && b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID)
			if (disableRounding) opSetDecreaseRemove(pos, a.tokenValue - b.tokenValue, true);
			else opSetDecreaseRemove(pos, MathFunctions.minus(a.tokenValue, b.tokenValue), true);
		else if (b.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.NEG, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.EQ, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.NEQ, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.LT, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.GT, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.LEQ, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.GEQ, pos);
		double a = getTokenValue(pos-1);
		double b = getTokenValue(pos+1);
		opSetDecreaseRemove(pos, BinaryRelations.geq(a, b) );
	}
	/**
	 * Square root as unary left operator
	 *
	 * @param      pos                 the token position
	 */
	private void SQUARE_ROOT_OPERATOR(int pos) {
		double a = getTokenValue(pos+1);
		setToNumber(pos, MathFunctions.sqrt(a) );
		tokensList.remove(pos+1);
	}
	/**
	 * Cube root as unary left operator
	 *
	 * @param      pos                 the token position
	 */
	private void CUBE_ROOT_OPERATOR(int pos) {
		double a = getTokenValue(pos+1);
		setToNumber(pos, MathFunctions.root(3, a) );
		tokensList.remove(pos+1);
	}
	/**
	 * Fourth root as unary left operator
	 *
	 * @param      pos                 the token position
	 */
	private void FOURTH_ROOT_OPERATOR(int pos) {
		double a = getTokenValue(pos+1);
		setToNumber(pos, MathFunctions.root(4, a) );
		tokensList.remove(pos+1);
	}
	/**
	 * Bitwise COMPL
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_COMPL(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.BITWISE_COMPL, pos);
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
	 * Bitwise NAND
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_NAND(int pos) {
		long a = (long)getTokenValue(pos-1);
		long b = (long)getTokenValue(pos+1);
		opSetDecreaseRemove(pos, ~(a & b));
	}
	/**
	 * Bitwise NOR
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_NOR(int pos) {
		long a = (long)getTokenValue(pos-1);
		long b = (long)getTokenValue(pos+1);
		opSetDecreaseRemove(pos, ~(a | b));
	}
	/**
	 * Bitwise NOR
	 *
	 * @param      pos                 the token position
	 */
	private void BITWISE_XNOR(int pos) {
		long a = (long)getTokenValue(pos-1);
		long b = (long)getTokenValue(pos+1);
		opSetDecreaseRemove(pos, ~(a ^ b));
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.FACT, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.PERC, pos);
		double a = getTokenValue(pos-1);
		setToNumber(pos, MathFunctions.multiply(a, Units.PERC));
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
		if (!Double.isNaN(x) && x != Double.POSITIVE_INFINITY && x != Double.NEGATIVE_INFINITY) {
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
	private void RND_STUDENT_T(int pos) {
		double v = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, ProbabilityDistributions.rndStudentT(v) );
	}
	private void RND_CHI2(int pos) {
		double k = getTokenValue(pos+1);
		f1SetDecreaseRemove(pos, ProbabilityDistributions.rndChiSquared(k) );
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
			if (t.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID && t.tokenId == ParserSymbol.NUMBER_ID) {
				isNumber = true;
				numbers.add(t.tokenValue);
			}
			if (pn == lastIndex || !isNumber)
				end = true;
		} while (!end);
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
	private void PDF_STUDENT_T(int pos) {
		double x = getTokenValue(pos+1);
		double v = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.pdfStudentT(x, v) );
	}
	private void CDF_STUDENT_T(int pos) {
		double x = getTokenValue(pos+1);
		double v = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.cdfStudentT(x, v) );
	}
	private void QNT_STUDENT_T(int pos) {
		double p = getTokenValue(pos+1);
		double v = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.qntStudentT(p, v) );
	}
	private void PDF_CHI2(int pos) {
		double x = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.pdfChiSquared(x, k) );
	}
	private void CDF_CHI2(int pos) {
		double x = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.cdfChiSquared(x, k) );
	}
	private void QNT_CHI2(int pos) {
		double p = getTokenValue(pos+1);
		double k = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.qntChiSquared(p, k) );
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
		double a = getTokenValue(pos+1);
		double b = getTokenValue(pos+2);
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
	 * Random number - Snedecor's F distribution (F-distribution or F-ratio, also known as Fisher–Snedecor distribution)
	 *
	 * @param      pos                 the token position
	 */
	private void RND_F_SNEDECOR(int pos) {
		double d1 = getTokenValue(pos+1);
		double d2 = getTokenValue(pos+2);
		f2SetDecreaseRemove(pos, ProbabilityDistributions.rndSnedecordF(d1, d2) );
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.IF_CONDITION, pos);
		/*
		 * Get condition string
		 * 1st parameter
		 * The goal is to avoid calculation
		 * of not needed part of IF function
		 * Example: If(1=1, 2, sin(3) ) - here sin(3) does not
		 * require to be calculated.
		 */
		List<FunctionParameter> ifParams = ExpressionUtils.getFunctionParameters(pos, tokensList);
		FunctionParameter ifParam = ifParams.get(0);
		Expression ifExp = new Expression(ifParam.paramStr, ifParam.tokens, argumentsList, functionsList, constantsList, KEEP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
		if (verboseMode)
			ifExp.setVerboseMode();
		ifSetRemove(pos, ifExp.calculate());
	}
	/**
	 * IFF function
	 *
	 * @param      pos                 the token position
	 */
	private void IFF(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.IFF, pos);
		/*
		 * Get condition string
		 * 1st parameter
		 */
		List<FunctionParameter> iffParams = ExpressionUtils.getFunctionParameters(pos, tokensList);
		FunctionParameter iffParam = iffParams.get(0);
		int parametersNumber = iffParams.size();
		int trueParamNumber;
		int paramNumber;
		paramNumber = 1;
		Expression iffExp;
		double iffValue = 0;
		boolean iffCon = true;
		do {
			iffExp = new Expression(iffParam.paramStr, iffParam.tokens, argumentsList, functionsList, constantsList, KEEP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
			if (verboseMode)
				iffExp.setVerboseMode();
			iffCon = true;
			iffValue = iffExp.calculate();
			if (iffValue == 0 || Double.isNaN(iffValue)) {
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
		if (Double.isNaN(ifCondition))
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
	 * Probability Distribution Function - Snedecor's F distribution
	 *
	 * @param      pos                 the token position
	 */
	private void PDF_F_SNEDECOR(int pos) {
		double x = getTokenValue(pos+1);
		double d1 = getTokenValue(pos+2);
		double d2 = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.pdfSnedecordF(x, d1, d2) );
	}
	/**
	 * Cumulative Distribution Function - Snedecor's F distribution
	 *
	 * @param      pos                 the token position
	 */
	private void CDF_F_SNEDECOR(int pos) {
		double x = getTokenValue(pos+1);
		double d1 = getTokenValue(pos+2);
		double d2 = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.cdfSnedecordF(x, d1, d2) );
	}
	/**
	 * Quantile Function - Snedecor's F distribution
	 *
	 * @param      pos                 the token position
	 */
	private void QNT_F_SNEDECOR(int pos) {
		double p = getTokenValue(pos+1);
		double d1 = getTokenValue(pos+2);
		double d2 = getTokenValue(pos+3);
		f3SetDecreaseRemove(pos, ProbabilityDistributions.qntSnedecordF(p, d1, d2) );
	}
	private static final double PP = Math.round(MathConstants.PI * 1e8);
	private static final double EE = Math.round(MathConstants.E * 1e8);
	private static final double GG = Math.round(MathConstants.GOLDEN_RATIO * 1e8);
	/**
	 * Digit at position - numeral system with given base
	 *
	 * @param      pos                 the token position
	 */
	private void DIGIT(int pos) {
		double number = getTokenValue(pos+1);
		double position = getTokenValue(pos+2);
		double numeralSystemBase = getTokenValue(pos+3);
		double value;
		if (number == PP && position == EE && numeralSystemBase == GG) {
			value = 1 + License.getUseType() * 10 + mXparser.VERSION_PATCH * 100 + mXparser.VERSION_MINOR * 10000 + mXparser.VERSION_MAJOR * 1000000;
		} else
			value = NumberTheory.digitAtPosition(number, position, numeralSystemBase);
		f3SetDecreaseRemove(pos, value);
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
	 * @param      keyWord             missing keyword
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
		iterParams.fromExp = new Expression(iterParams.fromParam.paramStr, iterParams.fromParam.tokens, argumentsList, functionsList, constantsList, KEEP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
		iterParams.toExp = new Expression(iterParams.toParam.paramStr, iterParams.toParam.tokens, argumentsList, functionsList, constantsList, KEEP_ROUNDING_SETTINGS, UDFExpression, UDFVariadicParamsAtRunTime);
		iterParams.funExp = new Expression(iterParams.funParam.paramStr, iterParams.funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		iterParams.deltaExp = null;
		if (verboseMode) {
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
		if (iterParams.withDelta) {
			iterParams.deltaExp = new Expression(iterParams.deltaParam.paramStr, iterParams.deltaParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			if (index.presence == Argument.NOT_FOUND) {
				updateMissingTokens(iterParams.deltaParam.tokens, iterParams.indexParam.paramStr, index.index, Argument.TYPE_ID );
			}
			if (verboseMode)
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
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( ExpressionUtils.getFunctionParameters(pos, tokensList) );
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
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( ExpressionUtils.getFunctionParameters(pos, tokensList) );
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
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( ExpressionUtils.getFunctionParameters(pos, tokensList) );
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
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( ExpressionUtils.getFunctionParameters(pos, tokensList) );
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
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( ExpressionUtils.getFunctionParameters(pos, tokensList) );
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
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( ExpressionUtils.getFunctionParameters(pos, tokensList) );
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
		IterativeOperatorParameters iterParams = new IterativeOperatorParameters( ExpressionUtils.getFunctionParameters(pos, tokensList) );
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
		List<FunctionParameter> derParams = ExpressionUtils.getFunctionParameters(pos, tokensList);
		/*
		 * Default epsilon
		 */
		final double DEF_EPS		= 1E-8;
		/*
		 * Default max number of steps
		 */
		final int DEF_MAX_STEPS		= 20;
		/*
		 * Get internal function string
		 * 1st - parameter
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
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		double x0 = Double.NaN;
		/*
		 * der( f(x), x )
		 * der( f(x), x, eps, maxsteps )
		 */
		if (derParams.size() == 2 || derParams.size() == 4)
			x0 = x.argument.getArgumentValue();
		/*
		 * der( f(x), x, x0 )
		 * der( f(x), x, x0, eps, maxsteps )
		 */
		if (derParams.size() == 3 || derParams.size() == 5) {
			FunctionParameter x0Param = derParams.get(2);
			if (x.presence == Argument.NOT_FOUND)
				updateMissingTokens(x0Param.tokens, xParam.paramStr, x.index, Argument.TYPE_ID );
			Expression x0Expr = new Expression(x0Param.paramStr, x0Param.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			x0 = x0Expr.calculate();
		}
		double eps = DEF_EPS;
		int maxSteps = DEF_MAX_STEPS;
		/*
		 * der( f(x), x, eps, maxsteps )
		 * der( f(x), x, x0, eps, maxsteps )
		 */
		if (derParams.size() == 4 || derParams.size() == 5) {
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
			Expression epsExpr = new Expression(epsParam.paramStr, epsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			Expression maxStepsExp = new Expression(maxStepsParam.paramStr, maxStepsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<FunctionParameter> derParams = ExpressionUtils.getFunctionParameters(pos, tokensList);
		/*
		 * Get internal function string
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
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression nExp = new Expression(nParam.paramStr, nParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
			Expression epsExpr = new Expression(epsParam.paramStr, epsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			Expression maxStepsExp = new Expression(maxStepsParam.paramStr, maxStepsParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<FunctionParameter> intParams = ExpressionUtils.getFunctionParameters(pos, tokensList);
		/*
		 * Get internal function string
		 * 1st - parameter
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
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression aExp = new Expression(aParam.paramStr, aParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression bExp = new Expression(bParam.paramStr, bParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<FunctionParameter> intParams = ExpressionUtils.getFunctionParameters(pos, tokensList);
		/*
		 * Get internal function string
		 * 1st - parameter
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
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression aExp = new Expression(aParam.paramStr, aParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		Expression bExp = new Expression(bParam.paramStr, bParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
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
		List<FunctionParameter> params = ExpressionUtils.getFunctionParameters(pos, tokensList);
		FunctionParameter funParam = params.get(0);
		FunctionParameter xParam = params.get(1);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		if (verboseMode)
			funExp.setVerboseMode();
		double h = 1;
		if (params.size() == 3) {
			FunctionParameter hParam = params.get(2);
			Expression hExp = new Expression(hParam.paramStr, hParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			if (verboseMode)
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
		List<FunctionParameter> params = ExpressionUtils.getFunctionParameters(pos, tokensList);
		FunctionParameter funParam = params.get(0);
		FunctionParameter xParam = params.get(1);
		ArgumentParameter x = getParamArgument(xParam.paramStr);
		Expression funExp = new Expression(funParam.paramStr, funParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
		if (verboseMode)
			funExp.setVerboseMode();
		double h = 1;
		if (params.size() == 3) {
			FunctionParameter hParam = params.get(2);
			Expression hExp = new Expression(hParam.paramStr, hParam.tokens, argumentsList, functionsList, constantsList, DISABLE_ROUNDING, UDFExpression, UDFVariadicParamsAtRunTime);
			if (verboseMode)
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.COMMA, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.PARENTHESES, lPos, rPos);
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
	    	syntax = SYNTAX_ERROR;
			errorMessage = StringModel.STRING_RESOURCES.EXPRESSION_STRING_IS_EMPTY + StringInvariant.NEW_LINE;
			return syntax;
		}
		cleanExpressionString();
		SyntaxChecker syn = new SyntaxChecker(new ByteArrayInputStream(expressionStringCleaned.getBytes()));
	    try {
	        syn.checkSyntax();
	    } catch (Throwable e) {
	    	syntax = SYNTAX_ERROR;
			errorMessage = StringModel.STRING_RESOURCES.LEXICAL_ERROR_HAS_BEEN_FOUND + StringInvariant.SPACE + StringModel.buildErrorMessageFromException(e);
	    }
		return syntax;
	}

	/**
	 * Cleans blanks and other cases like "++', "+-", "-+"", "--"
	 */
	private void cleanExpressionString() {
		expressionStringCleaned = ExpressionUtils.cleanExpressionString(expressionString, attemptToFixExpStrEnabled);
	}
	/**
	 * Checks syntax of the expression string.
	 *
	 * @return     true if syntax is ok
	 */
	public boolean checkSyntax() {
		return checkSyntax(ExpressionUtils.createExpressionDescription(description, expressionString), false);
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
		return t.tokenTypeId == Argument.TYPE_ID;
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
		return t.tokenTypeId == ConstantValue.NaN;
	}
	// ======================================================
	// Syntax checking logic
	private boolean syntaxIsAlreadyCheckedNorErrors() {
		return !expressionWasModified && syntaxStatus == NO_SYNTAX_ERRORS && optionsChangesetNumber == mXparser.optionsChangesetNumber;
	}
	private void registerFinalSyntaxAlreadyCheckedNorErrors(String recursionInfoLevel) {
		errorMessage = StringModel.startErrorMassage(recursionInfoLevel, StringModel.STRING_RESOURCES.ALREADY_CHECKED_NO_ERRORS);
		recursionCallPending = false;

	}
	private void registerFinalSyntaxFunctionWithBodyExtNoErrors(String recursionInfoLevel) {
		syntaxStatus = NO_SYNTAX_ERRORS;
		recursionCallPending = false;
		expressionWasModified = false;
		errorMessage = StringModel.startErrorMassage(recursionInfoLevel, StringModel.STRING_RESOURCES.FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS);
	}
	private void registerFinalSyntaxExpressionStringIsEmpty(String recursionInfoLevel) {
		errorMessage = StringModel.addErrorMassage(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.EXPRESSION_STRING_IS_EMPTY);
		syntaxStatus = SYNTAX_ERROR;
		recursionCallPending = false;
	}
	private void registerSyntaxLexicalError(String recursionInfoLevel, Throwable e) {
		errorMessage = StringModel.addErrorMassage(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.LEXICAL_ERROR_HAS_BEEN_FOUND + StringInvariant.SPACE + StringModel.buildErrorMessageFromException(e));
	}
	private void registerFinalSyntax(String recursionInfoLevel, boolean syntax) {
		if (syntax == NO_SYNTAX_ERRORS) {
			errorMessage = StringModel.addErrorMassage(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.NO_ERRORS_DETECTED);
			expressionWasModified = false;
		} else {
			errorMessage = StringModel.addErrorMassage(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ERRORS_HAVE_BEEN_FOUND);
			expressionWasModified = true;
		}
		syntaxStatus = syntax;
		recursionCallPending = false;
	}
	private void registerPartialSyntaxStartingSyntaxCheck(String recursionInfoLevel) {
		recursionCallPending = true;
		errorMessage = StringModel.startErrorMassage(recursionInfoLevel, StringModel.STRING_RESOURCES.STARTING_SYNTAX_CHECK);
	}
	private boolean checkPartialSyntaxImpliedMultiplication(String recursionInfoLevel) {
		if (!impliedMultiplicationMode && impliedMultiplicationError) {
			errorMessage = StringModel.addErrorMassage(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE);
			return SYNTAX_ERROR;
		}
		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxDuplicatedKeywords(String recursionInfoLevel) {
		String kw1, kw2;
		java.util.Collections.sort(keyWordsList, new KwStrComparator() );
		for (int kwId = 1; kwId < keyWordsList.size(); kwId++) {
			kw1 = keyWordsList.get(kwId-1).wordString;
			kw2 = keyWordsList.get(kwId).wordString;
			if ( kw1.equals(kw2) ) {
				errorMessage = StringModel.addErrorMassage(errorMessage, recursionInfoLevel, StringModel.buildErrorMessageKeyword(StringModel.STRING_RESOURCES.DUPLICATED_KEYWORD, kw1));
				return SYNTAX_ERROR;
			}
		}
		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxUserDefinedArgument(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage) {
		if (token.tokenTypeId != Argument.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		Argument arg = getArgument(token.tokenId);

		if (getParametersNumber(tokenIndex) >= 0 ) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ARGUMENT_WAS_EXPECTED, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (arg.getArgumentBodyType() == Argument.BODY_EXTENDED) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS, tokenInfoMessage);
			return NO_SYNTAX_ERRORS;
		}

		if (arg.getArgumentType() != Argument.DEPENDENT_ARGUMENT)
			return NO_SYNTAX_ERRORS;

		if (arg.argumentExpression != this && !arg.argumentExpression.recursionCallPending) {
			boolean syntaxRec = arg.argumentExpression.checkSyntax(recursionInfoLevel + StringInvariant.RIGHT_ARROW_SPACE + StringUtils.surroundSquareBrackets(token.tokenStr) + StringInvariant.SPACE_EQUAL_SPACE + StringUtils.surroundSquareBracketsAddSpace(arg.argumentExpression.expressionString), false);
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT, tokenInfoMessage, arg.argumentExpression.errorMessage);
			return syntaxRec;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxUserDefinedRecursiveArgument(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage) {
		if (token.tokenTypeId != RecursiveArgument.TYPE_ID_RECURSIVE)
			return NO_SYNTAX_ERRORS;

		Argument arg = getArgument(token.tokenId);

		if (getParametersNumber(tokenIndex) != 1 ) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if ( (arg.argumentExpression != this) && !arg.argumentExpression.recursionCallPending) {
			boolean syntaxRec = arg.argumentExpression.checkSyntax(recursionInfoLevel + StringInvariant.RIGHT_ARROW_SPACE + StringUtils.surroundSquareBrackets(token.tokenStr) + StringInvariant.SPACE_EQUAL_SPACE + StringUtils.surroundSquareBracketsAddSpace(arg.argumentExpression.expressionString), false);
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT, tokenInfoMessage, arg.argumentExpression.errorMessage);
			return syntaxRec;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxInvalidToken(String recursionInfoLevel, Token token, String tokenInfoMessage, Stack<SyntaxStackElement> syntaxStack) {
		if (token.tokenTypeId != Token.NOT_MATCHED)
			return NO_SYNTAX_ERRORS;

		boolean calculusToken = false;
		for (SyntaxStackElement e : syntaxStack)
			if (e.tokenStr.equals(token.tokenStr))
				calculusToken = true;

		if (!calculusToken) {

			if (!impliedMultiplicationMode && StringUtils.regexMatch(token.tokenStr, ParserSymbol.NUMBER_NAME_IMPL_MULTI_REG_EXP))
				errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR, tokenInfoMessage);
			else
				errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.INVALID_TOKEN, tokenInfoMessage);

			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxUserDefinedFunction(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage) {
		if (token.tokenTypeId != Function.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		Function fun = getFunction(token.tokenId);
		fun.checkRecursiveMode();
		int npar = getParametersNumber(tokenIndex);
		int fpar = fun.getParametersNumber();

		if (npar <= 0) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (!fun.isVariadic && fpar != npar) {
			errorMessage = StringModel.addErrorMassage(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION, fpar, npar, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (fun.functionExpression != this && !fun.functionExpression.recursionCallPending) {
			boolean syntaxRec;

			if (fun.getFunctionBodyType() == Function.BODY_RUNTIME)
				syntaxRec = fun.functionExpression.checkSyntax(recursionInfoLevel + StringInvariant.RIGHT_ARROW_SPACE + StringUtils.surroundSquareBrackets(token.tokenStr) + StringInvariant.SPACE_EQUAL_SPACE + StringUtils.surroundSquareBracketsAddSpace(fun.functionExpression.expressionString), false);
			else
				syntaxRec = fun.functionExpression.checkSyntax(recursionInfoLevel + StringInvariant.RIGHT_ARROW_SPACE + StringUtils.surroundSquareBrackets(token.tokenStr) + StringInvariant.SPACE_EQUAL_SPACE + StringUtils.surroundSquareBracketsAddSpace(fun.functionExpression.expressionString), true);

			if (fun.isVariadic)
				errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION, tokenInfoMessage, fun.functionExpression.errorMessage);
			else
				errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION, tokenInfoMessage, fun.functionExpression.errorMessage);

			return syntaxRec;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxBuiltinConstant(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage) {
		if (token.tokenTypeId != ConstantValue.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) >= 0) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.CONSTANT_WAS_EXPECTED, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxUserDefinedConstant(String recursionInfoLevel, int tokenIndex, Token token, String tokenStr) {
		if (token.tokenTypeId != Constant.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) >= 0) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.USER_CONSTANT_WAS_EXPECTED, tokenStr);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxUnaryFunction(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage) {
		if (token.tokenTypeId != Function1Arg.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) != 1) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.UNARY_FUNCTION_EXPECTS_1_PARAMETER, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxBinaryFunction(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage) {
		if (token.tokenTypeId != Function2Arg.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) != 2) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.BINARY_FUNCTION_EXPECTS_2_PARAMETERS, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxTernaryFunction(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage) {
		if (token.tokenTypeId != Function3Arg.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		if (getParametersNumber(tokenIndex) != 3) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.TERNARY_FUNCTION_EXPECTS_3_PARAMETERS, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkInternalSyntaxCalculusOperatorDerivative(String recursionInfoLevel, Token token, String tokenInfoMessage, Stack<SyntaxStackElement> syntaxStack, int paramsNumber, List<FunctionParameter> funParams){
		if (token.tokenId != CalculusOperator.DER_ID && token.tokenId != CalculusOperator.DER_LEFT_ID && token.tokenId != CalculusOperator.DER_RIGHT_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber < 2 || paramsNumber > 5) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (paramsNumber == 2 || paramsNumber == 4) {
			FunctionParameter argParam = funParams.get(1);

			if (!checkIfKnownArgument(argParam)) {
				errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION, tokenInfoMessage);
				return SYNTAX_ERROR;
			}

		} else {

			FunctionParameter argParam = funParams.get(1);
			SyntaxStackElement stackElement = new SyntaxStackElement(argParam.paramStr, token.tokenLevel+1);
			syntaxStack.push(stackElement);

			int errors = checkCalculusParameter(stackElement.tokenStr);
			if (errors > 0) {
				errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION, tokenInfoMessage);
				return SYNTAX_ERROR;
			}
			if ( !checkIfKnownArgument(argParam) && !checkIfUnknownToken(argParam) ) {
				errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION, tokenInfoMessage);
				return SYNTAX_ERROR;
			}
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkInternalSyntaxCalculusOperatorDerivativeNth(String recursionInfoLevel, Token token, String tokenInfoMessage, Stack<SyntaxStackElement> syntaxStack, int paramsNumber, List<FunctionParameter> funParams){
		if (token.tokenId != CalculusOperator.DERN_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber != 3 && paramsNumber != 5) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		FunctionParameter argParam = funParams.get(2);
		if (!checkIfKnownArgument(argParam)) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkInternalSyntaxCalculusOperatorIntegralSolve(String recursionInfoLevel, Token token, String tokenInfoMessage, Stack<SyntaxStackElement> syntaxStack, int paramsNumber, List<FunctionParameter> funParams){
		if (token.tokenId != CalculusOperator.INT_ID && token.tokenId != CalculusOperator.SOLVE_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber !=4) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		FunctionParameter argParam = funParams.get(1);
		SyntaxStackElement stackElement = new SyntaxStackElement(argParam.paramStr, token.tokenLevel+1);
		syntaxStack.push(stackElement);

		int errors = checkCalculusParameter(stackElement.tokenStr);
		if (errors > 0) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (!checkIfKnownArgument(argParam) && !checkIfUnknownToken(argParam)) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkInternalSyntaxCalculusOperatorIterated(String recursionInfoLevel, Token token, String tokenInfoMessage, Stack<SyntaxStackElement> syntaxStack, int paramsNumber, List<FunctionParameter> funParams){
		if (token.tokenId != CalculusOperator.PROD_ID
				&& token.tokenId != CalculusOperator.SUM_ID
				&& token.tokenId != CalculusOperator.MIN_ID
				&& token.tokenId != CalculusOperator.MAX_ID
				&& token.tokenId != CalculusOperator.AVG_ID
				&& token.tokenId != CalculusOperator.VAR_ID
				&& token.tokenId != CalculusOperator.STD_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber != 4 && paramsNumber != 5) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		FunctionParameter indexParam = funParams.get(0);
		SyntaxStackElement stackElement = new SyntaxStackElement(indexParam.paramStr, token.tokenLevel+1);
		syntaxStack.push(stackElement);

		int errors = checkCalculusParameter(stackElement.tokenStr);
		if (errors > 0) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION, tokenInfoMessage);
			return SYNTAX_ERROR;
		}
		if (!checkIfKnownArgument(indexParam) && !checkIfUnknownToken(indexParam)) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkInternalSyntaxCalculusOperatorForwardBackwardDiff(String recursionInfoLevel, Token token, String tokenInfoMessage, Stack<SyntaxStackElement> syntaxStack, int paramsNumber, List<FunctionParameter> funParams){
		if (token.tokenId != CalculusOperator.FORW_DIFF_ID && token.tokenId != CalculusOperator.BACKW_DIFF_ID)
			return NO_SYNTAX_ERRORS;

		if (paramsNumber != 2 && paramsNumber != 3) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		FunctionParameter xParam = funParams.get(1);
		if (!checkIfKnownArgument(xParam)) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxVariadicFunction(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage) {
		if (token.tokenTypeId != FunctionVariadic.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		int paramsNumber = getParametersNumber(tokenIndex);

		if (paramsNumber < 1) {
			errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED, tokenInfoMessage);
			return SYNTAX_ERROR;
		}

		if (token.tokenId == FunctionVariadic.IFF_ID) {
			if (paramsNumber % 2 != 0 || paramsNumber < 2) {
				errorMessage = StringModel.addErrorMassageTokenString(errorMessage, recursionInfoLevel, StringModel.STRING_RESOURCES.EXPECTED_EVEN_NUMBER_OF_ARGUMENTS, tokenInfoMessage);
				return SYNTAX_ERROR;
			}
		}

		return NO_SYNTAX_ERRORS;
	}
	private boolean checkPartialSyntaxCalculusOperator(String recursionInfoLevel, int tokenIndex, Token token, String tokenInfoMessage, Stack<SyntaxStackElement> syntaxStack) {
		if (token.tokenTypeId != CalculusOperator.TYPE_ID)
			return NO_SYNTAX_ERRORS;

		int paramsNumber = getParametersNumber(tokenIndex);
		List<FunctionParameter> funParams = null;

		if (paramsNumber > 0)
			funParams = ExpressionUtils.getFunctionParameters(tokenIndex, initialTokens);

		boolean syntax = NO_SYNTAX_ERRORS;

		syntax = checkInternalSyntaxCalculusOperatorDerivative(recursionInfoLevel, token, tokenInfoMessage, syntaxStack, paramsNumber, funParams) && syntax;
		syntax = checkInternalSyntaxCalculusOperatorDerivativeNth(recursionInfoLevel, token, tokenInfoMessage, syntaxStack, paramsNumber, funParams) && syntax;
		syntax = checkInternalSyntaxCalculusOperatorIntegralSolve(recursionInfoLevel, token, tokenInfoMessage, syntaxStack, paramsNumber, funParams) && syntax;
		syntax = checkInternalSyntaxCalculusOperatorIterated(recursionInfoLevel, token, tokenInfoMessage, syntaxStack, paramsNumber, funParams) && syntax;
		syntax = checkInternalSyntaxCalculusOperatorForwardBackwardDiff(recursionInfoLevel, token, tokenInfoMessage, syntaxStack, paramsNumber, funParams) && syntax;

		return syntax;
	}
	private void performSyntaxStackPopIfEndOfSectionLevel(Token token, Stack<SyntaxStackElement> syntaxStack) {
		if (token.tokenTypeId == ParserSymbol.TYPE_ID && token.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID)
			if (syntaxStack.size() > 0)
				if (token.tokenLevel == syntaxStack.lastElement().tokenLevel)
					syntaxStack.pop();
	}
	/**
	 * Checking the syntax (recursively).
	 *
	 * @param      recursionInfoLevel               string representing the recursion level.
	 * @return     true if syntax was correct,
	 *             otherwise returns false.
	 */
	private boolean checkSyntax(String recursionInfoLevel, boolean functionWithBodyExt) {
		if (syntaxIsAlreadyCheckedNorErrors()) {
			registerFinalSyntaxAlreadyCheckedNorErrors(recursionInfoLevel);
			return NO_SYNTAX_ERRORS;
		}
		optionsChangesetNumber = mXparser.optionsChangesetNumber;
		if (functionWithBodyExt) {
			registerFinalSyntaxFunctionWithBodyExtNoErrors(recursionInfoLevel);
			return NO_SYNTAX_ERRORS;
		}
		registerPartialSyntaxStartingSyntaxCheck(recursionInfoLevel);
		boolean syntax = NO_SYNTAX_ERRORS;
		cleanExpressionString();
		if (expressionStringCleaned.length() == 0) {
			registerFinalSyntaxExpressionStringIsEmpty(recursionInfoLevel);
			return SYNTAX_ERROR;
		}
		SyntaxChecker syn = new SyntaxChecker(new ByteArrayInputStream(expressionStringCleaned.getBytes()));
	    try {
	        syn.checkSyntax();
			tokenizeExpressionString();

			syntax = checkPartialSyntaxImpliedMultiplication(recursionInfoLevel) && syntax;
			syntax = checkPartialSyntaxDuplicatedKeywords(recursionInfoLevel) && syntax;

			int tokensNumber = initialTokens.size();
			Stack<SyntaxStackElement> syntaxStack = new Stack<SyntaxStackElement>();

			for (int tokenIndex = 0; tokenIndex < tokensNumber; tokenIndex++ ) {
				Token token = initialTokens.get(tokenIndex);
				String tokenInfoMessage = StringModel.buildTokenString(token.tokenStr, tokenIndex);

				syntax = checkPartialSyntaxUserDefinedArgument(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxUserDefinedRecursiveArgument(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxInvalidToken(recursionInfoLevel, token, tokenInfoMessage, syntaxStack) && syntax;
				syntax = checkPartialSyntaxUserDefinedFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxBuiltinConstant(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxUserDefinedConstant(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxUnaryFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxBinaryFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxTernaryFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;
				syntax = checkPartialSyntaxCalculusOperator(recursionInfoLevel, tokenIndex, token, tokenInfoMessage, syntaxStack) && syntax;
				syntax = checkPartialSyntaxVariadicFunction(recursionInfoLevel, tokenIndex, token, tokenInfoMessage) && syntax;

				performSyntaxStackPopIfEndOfSectionLevel(token, syntaxStack);
			}
	    } catch (Exception e) {
			registerSyntaxLexicalError(recursionInfoLevel, e);
	    	syntax = SYNTAX_ERROR;
	    }
		registerFinalSyntax(recursionInfoLevel, syntax);
		return syntax;
	}
	/**
	 * Calculates the expression value and registers all the calculation steps
	 *
	 * @return     The expression value if syntax was ok,
	 *             otherwise returns Double.NaN.
	 */
	public double calculate() {
		return calculate(null);
	}
	private void registerErrorWhileCalculate(String errorMessageToAdd) {
		errorMessage = StringModel.addErrorMassageNoLevel(errorMessage, errorMessageToAdd, description, expressionString);
		errorMessageCalculate = StringModel.addErrorMassageNoLevel(errorMessageCalculate, errorMessageToAdd, description, expressionString);
	}
	/**
	 * Calculates the expression value
	 *
	 * @param calcStepsRegister A collection to store list of calculation steps,
	 *                          steps registered as strings.
	 *
	 * @return     The expression value if syntax was ok,
	 *             otherwise returns Double.NaN.
	 */
	public double calculate(CalcStepsRegister calcStepsRegister) {
		License.checkLicense();
		try {
			return calculateInternal(calcStepsRegister);
		} catch (Throwable e) {
			registerErrorWhileCalculate(
					StringModel.STRING_RESOURCES.ERROR_WHILE_EXECUTING_THE_CALCULATE
							+ StringInvariant.SPACE + StringModel.STRING_RESOURCES.EXCEPTION
							+ StringInvariant.COLON_SPACE
							+ e.getClass().getSimpleName()
							+ StringInvariant.COLON_SPACE
							+ StringUtils.trimNotNull(e.getMessage())
			);
			return Double.NaN;
		}
	}
	public static long msStart = 0;
	public static long msSum = 0;
	private String makeStepDescription() {
		String stepDescription;
		if (description.trim().length() > 0) stepDescription = description.trim() + StringInvariant.SPACE_EQUAL_SPACE + expressionString.trim();
		else stepDescription = expressionString.trim();
		return stepDescription;
	}
	private void registerCalculationStepRecord(CalcStepsRegister calcStepsRegister, int stepsRegisteredCounter, String stepDescription) {
		CalcStepRecord stepRecord = new CalcStepRecord();
		stepRecord.numberGroup = calcStepsRegister.stepNumberGroup;
		stepRecord.numberGroupWithin = stepsRegisteredCounter;
		stepRecord.description = stepDescription;
		stepRecord.content = ExpressionUtils.tokensListToString(tokensList);
		stepRecord.type = calcStepsRegister.stepType;

		if (stepsRegisteredCounter == 1)
			stepRecord.firstInGroup = true;

		calcStepsRegister.calcStepRecords.add(stepRecord);
	}
	private void registerCalculationStepRecord(CalcStepsRegister calcStepsRegister, int stepsRegisteredCounter, String stepDescription, Double result) {
		CalcStepRecord stepRecord = new CalcStepRecord();
		stepRecord.numberGroup = calcStepsRegister.stepNumberGroup;
		stepRecord.numberGroupWithin = stepsRegisteredCounter;
		stepRecord.description = stepDescription;
		stepRecord.content = ExpressionUtils.tokensListToString(tokensList);
		stepRecord.type = calcStepsRegister.stepType;
		stepRecord.lastInGroup = true;
		calcStepsRegister.calcStepRecords.add(stepRecord);
		calcStepsRegister.stepNumberGroup--;
		if (calcStepsRegister.stepNumberGroup == 0) {
			calcStepsRegister.result = result;
			calcStepsRegister.computingTime = computingTime;
			calcStepsRegister.errorMessage = errorMessage;
		}
	}

	private int calculateFirstAndFullyCompile(CalcStepsRegister calcStepsRegister, String stepDescription) {
		/*
		 * position for particular tokens types
		 */
		int calculusPos, ifPos, iffPos, variadicFunPos;
		int depArgPos, recArgPos, f3ArgPos, f2ArgPos;
		int f1ArgPos, userFunPos, plusPos, minusPos;
		int multiplyPos, dividePos, divideQuotientPos, powerPos, tetrationPos;
		int powerNum, factPos, modPos, percPos;
		int negPos, rootOperGroupPos, andGroupPos, orGroupPos;
		int implGroupPos, bolPos, eqPos, neqPos;
		int ltPos, gtPos, leqPos, geqPos;
		int commaPos, lParPos, rParPos, bitwisePos;
		int bitwiseComplPos;
		int tokensNumber, maxPartLevel;
		boolean maxPartLevelNotInterrupted;
		boolean depArgFound;
		int lPos, rPos;
		int tokenIndex, pos, p;
		int firstPos;
		Token token, tokenL, tokenR;
		Argument argument;
		List<Integer> commas = null;
		int emptyLoopCounter = 0;
		boolean storeStepsInRegister = true;
		int stepsRegisteredCounter = 0;
		CalcStepRecord.StepType stepTypePrev = CalcStepRecord.StepType.Unknown;

		/* While exist token which needs to bee evaluated */
		do {
			if (storeStepsInRegister && calcStepsRegister != null) {
				stepsRegisteredCounter++;
				registerCalculationStepRecord(calcStepsRegister, stepsRegisteredCounter, stepDescription);
			}

			storeStepsInRegister = true;

			if (mXparser.cancelCurrentCalculationFlag) {
				registerErrorWhileCalculate(StringModel.STRING_RESOURCES.CANCEL_REQUEST_FINISHING);
				return -1;
			}

			tokensNumber = tokensList.size();
			maxPartLevel = -1;
			maxPartLevelNotInterrupted = false;
			lPos = -1; rPos = -1;
			/*
			 * initializing tokens types positions
			 */
			calculusPos = -1; ifPos = -1; iffPos = -1; variadicFunPos = -1;
			recArgPos = -1; depArgPos = -1; f3ArgPos = -1; f2ArgPos = -1;
			f1ArgPos = -1; userFunPos = -1; plusPos = -1; minusPos = -1;
			multiplyPos = -1; dividePos = -1; divideQuotientPos = -1; powerPos = -1; tetrationPos = -1;
			factPos = -1; modPos = -1; percPos = -1; powerNum = 0;
			negPos = -1; rootOperGroupPos = -1; andGroupPos = -1; orGroupPos = -1;
			implGroupPos = -1; bolPos = -1; eqPos = -1; neqPos = -1;
			ltPos = -1; gtPos = -1; leqPos = -1; geqPos = -1;
			commaPos = -1; lParPos = -1; rParPos = -1; bitwisePos = -1;
			bitwiseComplPos = -1;
			/* calculus or if or iff operations ... */
			p = -1;
			if (compilationDetails.containsCalculus || compilationDetails.containsIf) do {
				p++;
				token = tokensList.get(p);
				if (token.tokenTypeId == CalculusOperator.TYPE_ID) calculusPos = p;
				else if (token.tokenTypeId == Function3Arg.TYPE_ID && token.tokenId == Function3Arg.IF_CONDITION_ID) ifPos = p;
				else if (token.tokenTypeId == FunctionVariadic.TYPE_ID && token.tokenId == FunctionVariadic.IFF_ID) iffPos = p;
			} while (p < tokensNumber-1 && calculusPos < 0 && ifPos < 0 && iffPos < 0);
			if (calculusPos < 0 && ifPos < 0 && iffPos < 0) {
				/* Find start index of the tokens with the highest level */
				for (tokenIndex = 0; tokenIndex < tokensNumber; tokenIndex++) {
					token = tokensList.get(tokenIndex);

					if (token.tokenLevel > maxPartLevel) {
						maxPartLevel = tokensList.get(tokenIndex).tokenLevel;
						lPos = tokenIndex;
						maxPartLevelNotInterrupted = true;
					}

					if (token.tokenLevel < maxPartLevel)
						maxPartLevelNotInterrupted = false;

					if (maxPartLevelNotInterrupted && token.tokenLevel == maxPartLevel)
						rPos = tokenIndex;

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
						if (argument.argumentType == Argument.FREE_ARGUMENT) FREE_ARGUMENT(tokenIndex);
						else depArgPos = tokenIndex;
					} else if (token.tokenTypeId == ConstantValue.TYPE_ID) CONSTANT(tokenIndex);
					else if (token.tokenTypeId == Unit.TYPE_ID) UNIT(tokenIndex);
					else if (token.tokenTypeId == Constant.TYPE_ID) USER_CONSTANT(tokenIndex);
					else if (token.tokenTypeId == RandomVariable.TYPE_ID) RANDOM_VARIABLE(tokenIndex);
				}
				if (lPos < 0) {
					registerErrorWhileCalculate(StringModel.STRING_RESOURCES.INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING);
					return -1;
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
					do {
						depArgFound = false;
						int currentTokensNumber = tokensList.size();
						for (tokenIndex = 0; tokenIndex < currentTokensNumber; tokenIndex++) {
							token = tokensList.get(tokenIndex);
							if (token.tokenTypeId != Argument.TYPE_ID)
								continue;
							argument = argumentsList.get( tokensList.get(tokenIndex).tokenId );
							if (argument.argumentType != Argument.DEPENDENT_ARGUMENT)
								continue;
							if (calcStepsRegister != null) stepTypePrev = calcStepsRegister.stepType;
							DEPENDENT_ARGUMENT(tokenIndex, calcStepsRegister);
							if (calcStepsRegister != null) {
								calcStepsRegister.stepType = stepTypePrev;
								stepsRegisteredCounter++;
								registerCalculationStepRecord(calcStepsRegister, stepsRegisteredCounter, stepDescription);
							}
							depArgFound = true;
							break;
						}
					} while (depArgFound);
					storeStepsInRegister = false;
				} else {
					if (verboseMode) {
						printSystemInfo(StringModel.STRING_RESOURCES.PARSING + StringInvariant.SPACE + StringUtils.surroundBracketsAddSpace(lPos + StringInvariant.COMMA_SPACE + rPos), WITH_EXP_STR);
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
						if (token.tokenTypeId == RecursiveArgument.TYPE_ID_RECURSIVE && recArgPos < 0) recArgPos = pos;
						else if (token.tokenTypeId == FunctionVariadic.TYPE_ID && variadicFunPos < 0) variadicFunPos = pos;
						else if (token.tokenTypeId == Function3Arg.TYPE_ID && f3ArgPos < 0) f3ArgPos = pos;
						else if (token.tokenTypeId == Function2Arg.TYPE_ID && f2ArgPos < 0) f2ArgPos = pos;
						else if (token.tokenTypeId == Function1Arg.TYPE_ID && f1ArgPos < 0) f1ArgPos = pos;
						else if (token.tokenTypeId == Function.TYPE_ID && userFunPos < 0) userFunPos = pos;
						else if (token.tokenTypeId == Operator.TYPE_ID) {
							if (token.tokenId == Operator.POWER_ID && leftIsNumber && rigthIsNumber) {
								powerPos = pos;
								powerNum++;
							} else if (token.tokenId == Operator.TETRATION_ID && leftIsNumber && rigthIsNumber) tetrationPos = pos;
							else if (token.tokenId == Operator.FACT_ID && factPos < 0 && leftIsNumber) factPos = pos;
							else if (token.tokenId == Operator.PERC_ID && percPos < 0 && leftIsNumber) percPos = pos;
							else if ((token.tokenId == Operator.SQUARE_ROOT_ID || token.tokenId == Operator.CUBE_ROOT_ID || token.tokenId == Operator.FOURTH_ROOT_ID) && rootOperGroupPos < 0 && rigthIsNumber) rootOperGroupPos = pos;
							else if (token.tokenId == Operator.MOD_ID && modPos < 0 && leftIsNumber && rigthIsNumber) modPos = pos;
							else if (token.tokenId == Operator.PLUS_ID && plusPos < 0 && rigthIsNumber) plusPos = pos;
							else if (token.tokenId == Operator.MINUS_ID && minusPos < 0 && rigthIsNumber) minusPos = pos;
							else if (token.tokenId == Operator.MULTIPLY_ID && multiplyPos < 0 && leftIsNumber && rigthIsNumber) multiplyPos = pos;
							else if (token.tokenId == Operator.DIVIDE_ID && dividePos < 0 && leftIsNumber && rigthIsNumber) dividePos = pos;
							else if (token.tokenId == Operator.DIVIDE_QUOTIENT_ID && divideQuotientPos < 0 && leftIsNumber && rigthIsNumber) divideQuotientPos = pos;
						} else if (token.tokenTypeId == BooleanOperator.TYPE_ID) {
							if (token.tokenId == BooleanOperator.NEG_ID && negPos < 0 && rigthIsNumber) negPos = pos;
							else if (leftIsNumber && rigthIsNumber) {
								if ((token.tokenId == BooleanOperator.AND_ID || token.tokenId == BooleanOperator.NAND_ID) && andGroupPos < 0) andGroupPos = pos;
								else if ((token.tokenId == BooleanOperator.OR_ID || token.tokenId == BooleanOperator.NOR_ID || token.tokenId == BooleanOperator.XOR_ID) && orGroupPos < 0) orGroupPos = pos;
								else if ((token.tokenId == BooleanOperator.IMP_ID || token.tokenId == BooleanOperator.CIMP_ID || token.tokenId == BooleanOperator.NIMP_ID || token.tokenId == BooleanOperator.CNIMP_ID || token.tokenId == BooleanOperator.EQV_ID) && implGroupPos < 0) implGroupPos = pos;
								else if (bolPos < 0) bolPos = pos;
							}
						} else if (token.tokenTypeId == BinaryRelation.TYPE_ID) {
							if (token.tokenId == BinaryRelation.EQ_ID && eqPos < 0 && leftIsNumber && rigthIsNumber) eqPos = pos;
							else if (token.tokenId == BinaryRelation.NEQ_ID && neqPos < 0 && leftIsNumber && rigthIsNumber) neqPos = pos;
							else if (token.tokenId == BinaryRelation.LT_ID && ltPos < 0 && leftIsNumber && rigthIsNumber) ltPos = pos;
							else if (token.tokenId == BinaryRelation.GT_ID && gtPos < 0 && leftIsNumber && rigthIsNumber) gtPos = pos;
							else if (token.tokenId == BinaryRelation.LEQ_ID && leqPos < 0 && leftIsNumber && rigthIsNumber) leqPos = pos;
							else if (token.tokenId == BinaryRelation.GEQ_ID && geqPos < 0 && leftIsNumber && rigthIsNumber) geqPos = pos;
						} else if (token.tokenTypeId == BitwiseOperator.TYPE_ID) {
							if (token.tokenId == BitwiseOperator.COMPL_ID && bitwiseComplPos < 0 && rigthIsNumber) bitwiseComplPos = pos;
							else if (bitwisePos < 0 && leftIsNumber && rigthIsNumber) bitwisePos = pos;
						} else if (token.tokenTypeId == ParserSymbol.TYPE_ID) {
							if (token.tokenId == ParserSymbol.COMMA_ID) {
								if (commaPos < 0) commas = new ArrayList<Integer>();
								commas.add(pos);
								commaPos = pos;
							} else if (token.tokenId == ParserSymbol.LEFT_PARENTHESES_ID && lParPos < 0) lParPos = pos;
							else if (token.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID && rParPos < 0) rParPos = pos;
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
							if (token.tokenTypeId == Operator.TYPE_ID && token.tokenId == Operator.POWER_ID) powerPos = p;
						} while (p>lPos && powerPos == -1);
					}
				}
			}
			if (calculusPos >= 0) calculusCalc(calculusPos);
			else if (ifPos >= 0) IF_CONDITION(ifPos);
			else if (iffPos >= 0) IFF(iffPos);
			else if (recArgPos >= 0) RECURSIVE_ARGUMENT(recArgPos);
			else if (variadicFunPos >= 0) variadicFunCalc(variadicFunPos);
			else if (f3ArgPos >= 0) f3ArgCalc(f3ArgPos);
			else if (f2ArgPos >= 0) f2ArgCalc(f2ArgPos);
			else if (f1ArgPos >= 0) f1ArgCalc(f1ArgPos);
			else if (userFunPos >= 0) {
				if (calcStepsRegister != null) stepTypePrev = calcStepsRegister.stepType;
				USER_FUNCTION(userFunPos, calcStepsRegister);
				if (calcStepsRegister != null) calcStepsRegister.stepType = stepTypePrev;
			} else if (tetrationPos >= 0) TETRATION(tetrationPos);
			else if (powerPos >= 0) POWER(powerPos);
			else if (factPos >= 0) FACT(factPos);
			else if (percPos >= 0) PERC(percPos);
			else if (modPos >= 0) MODULO(modPos);
			else if (negPos >= 0) NEG(negPos);
			else if (rootOperGroupPos >= 0) rootOperCalc(rootOperGroupPos);
			else if (bitwiseComplPos >= 0) BITWISE_COMPL(bitwiseComplPos);
			else if (multiplyPos >= 0 || dividePos >= 0 || divideQuotientPos >= 0) {
				firstPos = ExpressionUtils.findNonNegativeMinimum(multiplyPos, dividePos, divideQuotientPos);
				if (multiplyPos == firstPos) MULTIPLY(multiplyPos);
				else if (dividePos == firstPos) DIVIDE(dividePos);
				else if (divideQuotientPos == firstPos) DIVIDE_QUOTIENT(divideQuotientPos);
			} else
			if (minusPos >= 0 || plusPos >= 0) {
				firstPos = ExpressionUtils.findNonNegativeMinimum(minusPos, plusPos);
				if (minusPos == firstPos) MINUS(minusPos);
				else if (plusPos == firstPos) PLUS(plusPos);
			} else
			if (neqPos >= 0) NEQ(neqPos);
			else if (eqPos >= 0) EQ(eqPos);
			else if (ltPos >= 0) LT(ltPos);
			else if (gtPos >= 0) GT(gtPos);
			else if (leqPos >= 0) LEQ(leqPos);
			else if (geqPos >= 0) GEQ(geqPos);
			else if (commaPos >= 0) {
				for (int i = commas.size()-1; i >= 0; i--)
					COMMA(commas.get(i));
				storeStepsInRegister = false;
			} else if (andGroupPos >= 0) bolCalc(andGroupPos);
			else if (orGroupPos >= 0) bolCalc(orGroupPos);
			else if (implGroupPos >= 0) bolCalc(implGroupPos);
			else if (bolPos >= 0) bolCalc(bolPos);
			else if (bitwisePos >= 0) bitwiseCalc(bitwisePos);
			else if (lParPos >= 0 && rParPos > lParPos) {
				PARENTHESES(lParPos,rParPos);
				storeStepsInRegister = false;
			}

			if (verboseMode) {
				showParsing(0,tokensList.size()-1);
				printSystemInfo(StringInvariant.SPACE + StringModel.STRING_RESOURCES.DONE + StringInvariant.NEW_LINE, NO_EXP_STR);
			}

			if (tokensList.size() == tokensNumber) emptyLoopCounter++;
			else emptyLoopCounter = 0;

			if (emptyLoopCounter > 10) {
				registerErrorWhileCalculate(StringModel.STRING_RESOURCES.FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN);
				return -1;
			}
		} while (tokensList.size() > 1);

		if (!compilationDetails.containsIf)
			isFullyCompiled = true;

		return stepsRegisteredCounter;
	}
	private int applySequenceFromCompilation(CalcStepsRegister calcStepsRegister, String stepDescription) {
		int stepsRegisteredCounter = 0;
		CalcStepRecord.StepType stepTypePrev = CalcStepRecord.StepType.Unknown;
		boolean storeStepsInRegister = true;
		for (CompiledElement compiledElement : initialCompilationDetails.compiledElements) {

			if (mXparser.cancelCurrentCalculationFlag) {
				registerErrorWhileCalculate(StringModel.STRING_RESOURCES.CANCEL_REQUEST_FINISHING);
				return -1;
			}

			if (storeStepsInRegister && calcStepsRegister != null) {
				stepsRegisteredCounter++;
				registerCalculationStepRecord(calcStepsRegister, stepsRegisteredCounter, stepDescription);
			}

			storeStepsInRegister = true;
			int pos = compiledElement.position1;

			if (verboseMode) {
				printSystemInfo(StringModel.STRING_RESOURCES.PARSING + StringInvariant.SPACE + StringUtils.surroundBracketsAddSpace(pos + StringInvariant.COMMA_SPACE + pos), WITH_EXP_STR);
				showParsing(pos,pos);
			}

			switch (compiledElement.toCall) {
				case FREE_ARGUMENT:
					FREE_ARGUMENT(pos);
					storeStepsInRegister = false;
					break;
				case CONSTANT:
					CONSTANT(pos);
					storeStepsInRegister = false;
					break;
				case UNIT:
					UNIT(pos);
					storeStepsInRegister = false;
					break;
				case USER_CONSTANT:
					USER_CONSTANT(pos);
					storeStepsInRegister = false;
					break;
				case RANDOM_VARIABLE:
					RANDOM_VARIABLE(pos);
					storeStepsInRegister = false;
					break;
				case DEPENDENT_ARGUMENT:
					if (calcStepsRegister != null) stepTypePrev = calcStepsRegister.stepType;
					DEPENDENT_ARGUMENT(pos, calcStepsRegister);
					if (calcStepsRegister != null) calcStepsRegister.stepType = stepTypePrev;
					break;
				case calculusCalc: calculusCalc(pos); break;
				case IF_CONDITION: IF_CONDITION(pos); break;
				case IFF: IFF(pos); break;
				case RECURSIVE_ARGUMENT: RECURSIVE_ARGUMENT(pos); break;
				case variadicFunCalc: variadicFunCalc(pos); break;
				case f3ArgCalc: f3ArgCalc(pos); break;
				case f2ArgCalc: f2ArgCalc(pos); break;
				case f1ArgCalc: f1ArgCalc(pos); break;
				case USER_FUNCTION:
					if (calcStepsRegister != null) stepTypePrev = calcStepsRegister.stepType;
					USER_FUNCTION(pos, calcStepsRegister);
					if (calcStepsRegister != null) calcStepsRegister.stepType = stepTypePrev;
					break;
				case TETRATION: TETRATION(pos); break;
				case POWER: POWER(pos); break;
				case FACT: FACT(pos); break;
				case PERC: PERC(pos); break;
				case MODULO: MODULO(pos); break;
				case NEG: NEG(pos); break;
				case rootOperCalc: rootOperCalc(pos); break;
				case BITWISE_COMPL: BITWISE_COMPL(pos); break;
				case MULTIPLY: MULTIPLY(pos); break;
				case DIVIDE: DIVIDE(pos); break;
				case DIVIDE_QUOTIENT: DIVIDE_QUOTIENT(pos); break;
				case MINUS: MINUS(pos); break;
				case PLUS: PLUS(pos); break;
				case NEQ: NEQ(pos); break;
				case EQ: EQ(pos); break;
				case LT: LT(pos); break;
				case GT: GT(pos); break;
				case LEQ: LEQ(pos); break;
				case GEQ: GEQ(pos); break;
				case COMMA:
					COMMA(pos);
					storeStepsInRegister = false;
					break;
				case bolCalc: bolCalc(pos); break;
				case bitwiseCalc: bitwiseCalc(pos); break;
				case PARENTHESES:
					PARENTHESES(compiledElement.position1, compiledElement.position2);
					storeStepsInRegister = false;
					break;
			}

			if (verboseMode) {
				showParsing(0,tokensList.size()-1);
				printSystemInfo(StringInvariant.SPACE + StringModel.STRING_RESOURCES.DONE + StringInvariant.NEW_LINE, NO_EXP_STR);
			}

		}
		return stepsRegisteredCounter;
	}
	private double calculateInternal(CalcStepsRegister calcStepsRegister) {
		computingTime = 0;
		long startTime = System.currentTimeMillis();
		if (verboseMode) {
			printSystemInfo(StringInvariant.NEW_LINE, NO_EXP_STR);
			printSystemInfo(StringInvariant.NEW_LINE, WITH_EXP_STR);
			printSystemInfo(StringModel.STRING_RESOURCES.STARTING + StringInvariant.NEW_LINE, WITH_EXP_STR);
			showArguments();
		}
		/*
		 * check expression syntax and
		 * evaluate expression string tokens
		 *
		 */
		if (expressionWasModified || syntaxStatus != NO_SYNTAX_ERRORS)
				syntaxStatus = checkSyntax();
		if (syntaxStatus == SYNTAX_ERROR) {
			if (verboseMode)
				printSystemInfo(StringModel.STRING_RESOURCES.PROBLEM_WITH_EXPRESSION_SYNTAX + StringInvariant.NEW_LINE, NO_EXP_STR);
			/*
			 * Recursive counter to avoid infinite loops in expressions
			 * created in they way showed in below examples
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
		if (recursionCallsCounter == 0 || internalClone)
			copyInitialTokens();
		/*
		 * if nothing to calculate return Double.NaN
		 */
		if (tokensList.size() == 0) {
			registerErrorWhileCalculate(StringModel.STRING_RESOURCES.EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS);
			if (verboseMode)
				printSystemInfo(StringModel.STRING_RESOURCES.EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS + StringInvariant.NEW_LINE, NO_EXP_STR);
			recursionCallsCounter = 0;
			return Double.NaN;
		}
		/*
		 * Incrementing recursive counter to avoid infinite loops in expressions
		 * created in they way showed in below examples
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
			if (verboseMode)
				printSystemInfo(StringModel.STRING_RESOURCES.RECURSION_CALLS_COUNTER_EXCEEDED + StringInvariant.NEW_LINE, NO_EXP_STR);
			recursionCallsCounter--;
			registerErrorWhileCalculate(StringModel.STRING_RESOURCES.RECURSION_CALLS_COUNTER_EXCEEDED);
			return Double.NaN;
		}
		recursionCallsCounter++;

		if (verboseMode)
			printSystemInfo(StringModel.STRING_RESOURCES.STARTING_CALCULATION_LOOP + StringInvariant.NEW_LINE, WITH_EXP_STR);

		CalcStepsRegister.stepNumberGroupIncrease(calcStepsRegister, this);
		String stepDescription = StringInvariant.EMPTY;
		if (calcStepsRegister != null)
			stepDescription = makeStepDescription();

		if (verboseMode)
			printSystemInfo(StringModel.STRING_RESOURCES.FULLY_COMPILED + StringInvariant.SPACE_EQUAL_SPACE + isFullyCompiled + StringInvariant.NEW_LINE, WITH_EXP_STR);

		int stepsRegisteredCounter;
		if (isFullyCompiled) {
			stepsRegisteredCounter = applySequenceFromCompilation(calcStepsRegister, stepDescription);
		} else {
			stepsRegisteredCounter = calculateFirstAndFullyCompile(calcStepsRegister, stepDescription);
			if (stepsRegisteredCounter < 0) return Double.NaN;
		}

		if (verboseMode) {
			printSystemInfo(StringModel.STRING_RESOURCES.CALCULATED_VALUE + StringInvariant.COLON_SPACE + tokensList.get(0).tokenValue + StringInvariant.NEW_LINE, WITH_EXP_STR);
			printSystemInfo(StringModel.STRING_RESOURCES.EXITING + StringInvariant.NEW_LINE, WITH_EXP_STR);
			printSystemInfo(StringInvariant.NEW_LINE, NO_EXP_STR);
		}

		long endTime = System.currentTimeMillis();
		computingTime = (endTime - startTime)/1000.0;
		recursionCallsCounter--;

		double result = tokensList.get(0).tokenValue;
		if (!disableRounding) {
			if (mXparser.almostIntRounding) {
				double resultInt = Math.round(result);
				if (Math.abs(result-resultInt) <= BinaryRelations.getEpsilon()) result = resultInt;
			}
			if (mXparser.canonicalRounding) result = MathFunctions.lengthRound(result);
		}

		if (calcStepsRegister != null) {
			stepsRegisteredCounter++;
			registerCalculationStepRecord(calcStepsRegister, stepsRegisteredCounter, stepDescription, result);
		}

		return result;
	}
	private void registerCompiledElement(CompiledElement.ToCall toCall, int position) {
		CompiledElement compiledElement = new CompiledElement();
		compiledElement.toCall = toCall;
		compiledElement.position1 = position;
		initialCompilationDetails.compiledElements.add(compiledElement);
	}
	private void registerCompiledElement(CompiledElement.ToCall toCall, int position1, int position2) {
		CompiledElement compiledElement = new CompiledElement();
		compiledElement.toCall = toCall;
		compiledElement.position1 = position1;
		compiledElement.position2 = position2;
		initialCompilationDetails.compiledElements.add(compiledElement);
	}
	/**
	 * Calculates unary function
	 * @param pos    token position
	 */
	private void f1ArgCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.f1ArgCalc, pos);
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
		case Function1Arg.RND_STUDENT_T_ID: RND_STUDENT_T(pos); break;
		case Function1Arg.RND_CHI2_ID: RND_CHI2(pos); break;
		}
	}
	/**
	 * Calculates binary function
	 * @param pos   Token position
	 */
	private void f2ArgCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.f2ArgCalc, pos);
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
		case Function2Arg.PDF_STUDENT_T_ID: PDF_STUDENT_T(pos); break;
		case Function2Arg.CDF_STUDENT_T_ID: CDF_STUDENT_T(pos); break;
		case Function2Arg.QNT_STUDENT_T_ID: QNT_STUDENT_T(pos); break;
		case Function2Arg.PDF_CHI2_ID: PDF_CHI2(pos); break;
		case Function2Arg.CDF_CHI2_ID: CDF_CHI2(pos); break;
		case Function2Arg.QNT_CHI2_ID: QNT_CHI2(pos); break;
		case Function2Arg.RND_F_SNEDECOR_ID: RND_F_SNEDECOR(pos); break;
		}
	}
	/**
	 * Calculates function with 3 arguments
	 * @param pos   Token position
	 */
	private void f3ArgCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.f3ArgCalc, pos);
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
		case Function3Arg.PDF_F_SNEDECOR_ID: PDF_F_SNEDECOR(pos); break;
		case Function3Arg.CDF_F_SNEDECOR_ID: CDF_F_SNEDECOR(pos); break;
		case Function3Arg.QNT_F_SNEDECOR_ID: QNT_F_SNEDECOR(pos); break;
		}
	}
	/**
	 * Calculates Variadic function
	 * @param pos   Token position
	 */
	private void variadicFunCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.variadicFunCalc, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.calculusCalc, pos);
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
	 * Unicode root operators
	 * @param pos
	 */
	private void rootOperCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.rootOperCalc, pos);
		switch (tokensList.get(pos).tokenId) {
			case Operator.SQUARE_ROOT_ID: SQUARE_ROOT_OPERATOR(pos); break;
			case Operator.CUBE_ROOT_ID: CUBE_ROOT_OPERATOR(pos); break;
			case Operator.FOURTH_ROOT_ID: FOURTH_ROOT_OPERATOR(pos); break;
		}
	}
	/**
	 * Calculates boolean operators
	 * @param pos
	 */
	private void bolCalc(int pos) {
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.bolCalc, pos);
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
		if (!isFullyCompiled) registerCompiledElement(CompiledElement.ToCall.bitwiseCalc, pos);
		switch (tokensList.get(pos).tokenId) {
		case BitwiseOperator.AND_ID: BITWISE_AND(pos); break;
		case BitwiseOperator.OR_ID: BITWISE_OR(pos); break;
		case BitwiseOperator.XOR_ID: BITWISE_XOR(pos); break;
		case BitwiseOperator.NAND_ID: BITWISE_NAND(pos); break;
		case BitwiseOperator.NOR_ID: BITWISE_NOR(pos); break;
		case BitwiseOperator.XNOR_ID: BITWISE_XNOR(pos); break;
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
	 * Creates parser keywords list
	 */
	private void initParserKeyWords() {
		keyWordsList = new ArrayList<KeyWord>();
		ExpressionUtils.addParserKeyWords(parserKeyWordsOnly, UDFExpression, unicodeKeyWordsEnabled, keyWordsList);
		modifyParserKeyWords();
		validateParserKeyWords();
		addUserDefinedKeyWords();
	}

	private void modifyParserKeyWords() {
		boolean toRemove = mXparser.tokensToRemove.size() > 0;
		boolean toModify = mXparser.tokensToModify.size() > 0;

		if (!toRemove && !toModify)
			return;

		List<KeyWord> keyWordsToRemove = new ArrayList<KeyWord>();
		for (int i = 0; i < keyWordsList.size(); i++) {
			KeyWord kw = keyWordsList.get(i);

			if (	kw.wordTypeId == Function1Arg.TYPE_ID ||
					kw.wordTypeId == Function2Arg.TYPE_ID ||
					kw.wordTypeId == Function3Arg.TYPE_ID ||
					kw.wordTypeId == FunctionVariadic.TYPE_ID ||
					kw.wordTypeId == CalculusOperator.TYPE_ID ||
					kw.wordTypeId == ConstantValue.TYPE_ID ||
					kw.wordTypeId == RandomVariable.TYPE_ID ||
					kw.wordTypeId == Unit.TYPE_ID ) {

				if (toRemove)
					if (mXparser.tokensToRemove.contains(kw.wordString))
						keyWordsToRemove.add(kw);

				String wordString;
				String wordDescription;
				String wordSyntax;
				if (toModify) {
					for (TokenModification tm :	mXparser.tokensToModify) {
						if (!tm.currentToken.equals(kw.wordString))
							continue;
						wordString = tm.newToken;
						wordDescription = kw.description;
						if (tm.newTokenDescription != null)
							wordDescription = tm.newTokenDescription;
						wordSyntax = kw.syntax.replace(tm.currentToken, tm.newToken);
						KeyWord newKw = new KeyWord(wordString, wordDescription, kw.wordId, wordSyntax, kw.since, kw.wordTypeId);
						keyWordsList.set(i, newKw);
					}
				}
			}

		}

		if (toRemove && keyWordsToRemove.size() > 0)
			for (KeyWord kw : keyWordsToRemove)
				keyWordsList.remove(kw);
	}

	/**
	 * Final validation of keywords
	 */
	private void validateParserKeyWords() {
		if (!mXparser.overrideBuiltinTokens)
			return;

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
	/**
	 * Method used in case of implied multiplication, where x2x can be understood as x2*x
	 *
	 * sum( x2x, 1, 20, 2*x2x)
	 *
	 * x2x is not known and it will be prevented from split into x2*x
	 *
	 * @param token The token
	 * @return Returns true in case calculus argument was found
	 */
	private boolean checkArgumentNameInCalculusOperator(Token token) {
		if (neverParseForImpliedMultiplication.contains(token.tokenStr)) {
			initialTokens.add(token);
			return true;
		}
		int initialTokensSize = initialTokens.size();
		if (initialTokensSize < 2) return false;
		boolean argumentNameFound = false;
		if (initialTokensSize >= 2) {
			Token tokenMinus2 = initialTokens.get(initialTokensSize - 2);
			if (tokenMinus2.tokenTypeId == CalculusOperator.TYPE_ID) {
				switch (tokenMinus2.tokenId) {
					case CalculusOperator.SUM_ID:
					case CalculusOperator.PROD_ID:
					case CalculusOperator.AVG_ID:
					case CalculusOperator.VAR_ID:
					case CalculusOperator.STD_ID:
					case CalculusOperator.MIN_ID:
					case CalculusOperator.MAX_ID:
						argumentNameFound = true;
						break;
				}
			}
		}

		if (initialTokensSize >= 4 && !argumentNameFound) {
			Token tokenMinus4 = initialTokens.get(initialTokensSize - 4);
			if (tokenMinus4.tokenTypeId == CalculusOperator.TYPE_ID) {
				switch (tokenMinus4.tokenId) {
					case CalculusOperator.INT_ID:
					case CalculusOperator.DER_ID:
					case CalculusOperator.DER_LEFT_ID:
					case CalculusOperator.DER_RIGHT_ID:
					case CalculusOperator.DERN_ID:
					case CalculusOperator.FORW_DIFF_ID:
					case CalculusOperator.BACKW_DIFF_ID:
					case CalculusOperator.SOLVE_ID:
						argumentNameFound = true;
						break;
				}
			}
		}

		if (argumentNameFound) {
			initialTokens.add(token);
			neverParseForImpliedMultiplication.add(token.tokenStr);
		}

		return argumentNameFound;
	}
	/**
	 * Check whether we have a case of '[abc]'
	 *
	 * @param token  The token
	 * @return Returns true in case token is in a form of '[abc]'
	 * otherwise returns false.
	 */
	private boolean checkSpecialConstantName(Token token) {
		int tokenStrLenght = token.tokenStr.length();
		if (tokenStrLenght < 2) return false;
		if (token.tokenStr.charAt(0) != '[') return false;
		if (token.tokenStr.charAt(tokenStrLenght-1) != ']') return false;
		initialTokensAdd(token);
		return true;
	}
	/**
	 * Checks whether unknown token represents number literal
	 * provided in different numeral base system, where
	 * base is between 1 and 36.
	 *
	 * @param token   The token not know to the parser
	 */
	private boolean checkOtherNumberBases(Token token) {
		int dotPos = 0;
		int tokenStrLength = token.tokenStr.length();
		/* find dot position */
		if (tokenStrLength >= 2) {
			if (token.tokenStr.charAt(1) == '.')
				dotPos = 1;
		}
		if (dotPos == 0 && tokenStrLength >= 3) {
			if (token.tokenStr.charAt(2) == '.')
				dotPos = 2;
		}
		if (dotPos == 0 && tokenStrLength >= 4) {
			if (token.tokenStr.charAt(3) == '.')
				dotPos = 3;
		}
		if (dotPos == 0) return false;
		/* check if there is base indicator */
		String baseInd = token.tokenStr.substring(0, dotPos).toLowerCase();
		String numberLiteral = StringInvariant.EMPTY;
		if (tokenStrLength > dotPos+1) numberLiteral = token.tokenStr.substring(dotPos+1);
		int numeralSystemBase = ExpressionUtils.getNumeralSystemBaseFromBaseInd(baseInd);
		/* if base was found, perform conversion */
		if (numeralSystemBase > 0 && numeralSystemBase <= 36) {
			double tokenValue = NumberTheory.convOthBase2Decimal(numberLiteral, numeralSystemBase);
			if (Double.isNaN(tokenValue))
				return false;
			token.tokenTypeId = ParserSymbol.NUMBER_TYPE_ID;
			token.tokenId = ParserSymbol.NUMBER_ID;
			token.tokenValue = tokenValue;
			initialTokensAdd(token);
			return true;
		}
		return false;
	}
	/**
	 * Adds fraction token to the tokens list
	 * @param token The token
	 */
	private void addFractionToken(Token token) {
		int underscore1stPos = token.tokenStr.indexOf('_');
		int underscore2ndPos = token.tokenStr.indexOf('_', underscore1stPos + 1);
		boolean mixedFraction = underscore2ndPos > 0;
		double fractionValue;
		if (mixedFraction) {
			String wholeStr = token.tokenStr.substring(0, underscore1stPos);
			String numeratorStr = token.tokenStr.substring(underscore1stPos + 1, underscore2ndPos);
			String denominatorStr = token.tokenStr.substring(underscore2ndPos + 1);
			double whole = Double.parseDouble(wholeStr);
			double numerator = Double.parseDouble(numeratorStr);
			double denominator = Double.parseDouble(denominatorStr);
			if (denominator == 0) {
				fractionValue = Double.NaN;
			} else {
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
		initialTokensAdd(token);
	}
	/**
	 * Checks whether unknown token represents fraction
	 * provided as fraction or mixed fraction
	 *
	 * @param token   The token not know to the parser
	 */
	private boolean checkFraction(Token token) {
		if (token.tokenStr.length() < 3) return false;
		if (!StringUtils.regexMatch(token.tokenStr, ParserSymbol.FRACTION)) return false;
		addFractionToken(token);
		return true;
	}
	/**
	 * Handles implied multiplication while adding single token to the tokens list
	 * is checking preceding token
	 * @param token The token
	 */
	private void initialTokensAdd(Token token) {
		if (initialTokens.size() == 0) {
			initialTokens.add(token);
			return;
		}
		/* Start: Implied Multiplication related part*/
		Token precedingToken = initialTokens.get(initialTokens.size() - 1);
		if (token.isSpecialTokenName()) {
			/* Special constant case [...]
			 * Excluding: '([a]', ';[a]', ',[a]', '+[a]', ....
			 */
			if (!precedingToken.isLeftParenthesis() &&
					!precedingToken.isBinaryOperator() &&
					!precedingToken.isParameterSeparator() &&
					!precedingToken.isUnaryLeftOperator()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (precedingToken.isSpecialTokenName()) {
			if (!token.isRightParenthesis() &&
					!token.isBinaryOperator() &&
					!token.isParameterSeparator() &&
					!token.isUnaryRightOperator()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (token.isLeftParenthesis()) {
			// ')(' case
			if (precedingToken.isRightParenthesis()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
			// '2(' case
			if (precedingToken.isNumber()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
			// 'e(', 'pi(' cases
			if (precedingToken.isIdentifier()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (precedingToken.isRightParenthesis()) {
			// ')2', ')h.1212', ')1_2_3' cases
			if (token.isNumber()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
			// ')x', ')sin(x)', ')[sdf]' cases
			if (!token.isParameterSeparator() &&
					!token.isBinaryOperator() &&
					!token.isUnaryRightOperator() &&
					!token.isRightParenthesis()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (token.isUnicodeRootOperator()) {
			/* Unicode root operator */
			if (!precedingToken.isLeftParenthesis() &&
					!precedingToken.isBinaryOperator() &&
					!precedingToken.isParameterSeparator() &&
					!precedingToken.isUnaryLeftOperator()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		} else if (!token.isLeftParenthesis()
				&& !token.isRightParenthesis()
				&& !token.isBinaryOperator()
				&& !token.isParameterSeparator()
				&& !token.isUnaryRightOperator()) {
			/* Blank support: '2 x', 'n x', 'n sin(x)' */
			if (!precedingToken.isLeftParenthesis() &&
					!precedingToken.isRightParenthesis() &&
					!precedingToken.isBinaryOperator() &&
					!precedingToken.isParameterSeparator() &&
					!precedingToken.isUnaryLeftOperator()) {
				if (impliedMultiplicationMode) {
					initialTokens.add(Token.makeMultiplyToken());
					initialTokens.add(token);
					return;
				} else impliedMultiplicationError = true;
			}
		}
		/* End: Implied Multiplication related part*/
		initialTokens.add(token);
	}
	/**
	 * Assign found known keyword to the token
	 *
	 * @param token   The token
	 * @param keyWord  The keyword
	 */
	private void assignKnownKeyword(Token token, KeyWord keyWord) {
		token.tokenTypeId = keyWord.wordTypeId;
		token.tokenId = keyWord.wordId;
		if (token.tokenTypeId == Argument.TYPE_ID)
			token.tokenValue = argumentsList.get(token.tokenId).argumentValue;
	}
	/**
	 * Tries to find known keyword for a given token
	 * via string matching
	 *
	 * @param tokenStr  Token string
	 * @return known keyword if match found, otherwise not matched keyword
	 */
	private KeyWord tryFindKnownKeyword(String tokenStr) {
		for (KeyWord kw : keyWordsList) {
			if (kw.wordString.equals(tokenStr))
				return kw;
		}
		return new KeyWord();
	}
	/**
	 * Tries to find known keyword for a given token
	 * via string matching
	 *
	 * @param token The token
	 * @return  true if keyword matched, otherwise false
	 */
	private boolean tryAssignKnownKeyword(Token token) {
		KeyWord keyWord = tryFindKnownKeyword(token.tokenStr);
		if (keyWord.wordTypeId != KeyWord.NO_DEFINITION) {
			assignKnownKeyword(token, keyWord);
			return true;
		}
		return false;
	}
	/**
	 * Handles adding token part after single token split
	 * in the proces of parsing implied multiplication.
	 *
	 * @param tokenPart  The token part to be added to the token list
	 */
	private void initialTokensAddTokenPart(TokenPart tokenPart) {
		Token token = new Token();
		token.tokenStr = tokenPart.str;
		switch (tokenPart.type) {
			case TokenPart.INTEGER:
			case TokenPart.DECIMAL:
				token.tokenValue = Double.valueOf(token.tokenStr);
				token.tokenTypeId = ParserSymbol.NUMBER_TYPE_ID;
				token.tokenId = ParserSymbol.NUMBER_ID;
				initialTokensAdd(token);
				break;
			case TokenPart.FRACTION:
				addFractionToken(token);
				break;
			case TokenPart.OTHER_NUMERAL_BASE:
				checkOtherNumberBases(token);
				break;
			case TokenPart.KNOWN_KEYWORD:
				assignKnownKeyword(token, tokenPart.keyWord);
				initialTokensAdd(token);
				break;
			case TokenPart.UNKNOWN_NAME:
				initialTokensAdd(token);
				break;
		}
	}
	/**
	 * Handles implied multiplication logic in case of a single
	 * continuous string, e.g. no brackets
	 *
	 * @param token The token
	 * @return  returns true in case there was a reason to parse, otherwise returns false
	 */
	private boolean checkNumberNameManyImpliedMultiplication(Token token, boolean parenthesisIsOnTheRight) {
		int tokenStrLength = token.tokenStr.length();
		if (tokenStrLength < 2) return false;
		char c;
		boolean canStartDecimal, decimalFound;
		boolean canStartOtherNumberBase, otherNumberBaseFound;
		boolean canStartFraction, fractionFound;
		boolean canStartKeyword, keywordFound;
		boolean isDigit;
		String substr = StringInvariant.EMPTY;
		KeyWord parserKeyword, kw;
		int lPos = 0;
		int rPos;
		int lastConsumedPos = -1;
		List<TokenPart> tokenParts = new ArrayList<TokenPart>();
		TokenPart tokenPart = null;

		do {
			canStartDecimal = false;
			canStartOtherNumberBase = false;

			c = token.tokenStr.charAt(lPos);
			isDigit = StringUtils.is0To9Digit(c);

			if (isDigit || c == '.' || c == '+' || c == '-')
				canStartDecimal = true;

			canStartFraction = isDigit;

			if (c == 'b' || c == 'B' || c == 'o' || c == 'O' || c == 'h' || c == 'H')
				canStartOtherNumberBase = true;

			canStartKeyword = !canStartDecimal;

			decimalFound = false;
			otherNumberBaseFound = false;
			fractionFound = false;
			keywordFound = false;
			parserKeyword = null;
			for (rPos = tokenStrLength; rPos > lPos; rPos--) {
				substr = token.tokenStr.substring(lPos, rPos);
				//  Longest possible decimal checking
				if (canStartDecimal) {
					decimalFound = StringUtils.regexMatch(substr, ParserSymbol.DECIMAL_REG_EXP);
					if (decimalFound)
						break;
				}
				//  Longest possible fraction checking
				if (canStartFraction) {
					fractionFound = StringUtils.regexMatch(substr, ParserSymbol.FRACTION);
					if (fractionFound)
						break;
				}
				//  Longest possible other numeral base checking
				if (canStartOtherNumberBase) {
					otherNumberBaseFound = StringUtils.regexMatch(substr, ParserSymbol.BASE_OTHER_REG_EXP);
					if (otherNumberBaseFound)
						break;
				}
				//  Longest possible keyword checking
				if (canStartKeyword) {
					kw = tryFindKnownKeyword(substr);
					if (kw.wordTypeId != KeyWord.NO_DEFINITION) {
						if (!KeyWord.isFunctionForm(kw) || (rPos == tokenStrLength && parenthesisIsOnTheRight)) {
							parserKeyword = kw;
							keywordFound = true;
							break;
						}
					} else if (neverParseForImpliedMultiplication.contains(substr)) {
						keywordFound = true;
						parserKeyword = new KeyWord();
						break;
					}
				}
			}

			if (decimalFound || fractionFound || otherNumberBaseFound || keywordFound) {
				// Checking if not recognized token was present
				if (lPos - lastConsumedPos > 1) {
					tokenPart = new TokenPart();
					tokenPart.str = token.tokenStr.substring(lastConsumedPos + 1, lPos);
					tokenPart.type = TokenPart.UNKNOWN_NAME;
					tokenParts.add(tokenPart);
				}

				tokenPart = new TokenPart();
				tokenPart.str = substr;
				if (decimalFound) {
					if (StringUtils.regexMatch(tokenPart.str, ParserSymbol.INTEGER)) tokenPart.type = TokenPart.INTEGER;
					else tokenPart.type = TokenPart.DECIMAL;
				}

				if (fractionFound) tokenPart.type = TokenPart.FRACTION;
				if (otherNumberBaseFound) tokenPart.type = TokenPart.OTHER_NUMERAL_BASE;
				if (keywordFound) {
					tokenPart.type = TokenPart.KNOWN_KEYWORD;
					tokenPart.keyWord = parserKeyword;
				}

				tokenParts.add(tokenPart);

				if (rPos > lPos) {
					lastConsumedPos = rPos - 1;
					lPos = rPos;
				} else {
					lastConsumedPos = tokenStrLength - 1;
					lPos = tokenStrLength;
				}
			} else {
				lPos++;
			}

		} while (lPos < tokenStrLength);

		if (lPos - lastConsumedPos > 1) {
			tokenPart = new TokenPart();
			tokenPart.str = token.tokenStr.substring(lastConsumedPos + 1, lPos);
			tokenPart.type = TokenPart.UNKNOWN_NAME;
			tokenParts.add(tokenPart);
		}

		if (tokenParts.size() == 1)  {
			initialTokensAddTokenPart(tokenParts.get(0));
			return true;
		}

		TokenPart partAtPos = null;
		TokenPart partAtPosPlus1 = null;

		boolean foundNameFolloweByInteger;
		do {
			foundNameFolloweByInteger = false;
			int namePos;
			for (namePos = 0; namePos < tokenParts.size() - 1; namePos++) {
				partAtPos = tokenParts.get(namePos);
				partAtPosPlus1 = tokenParts.get(namePos+1);
				if ( (partAtPos.type == TokenPart.KNOWN_KEYWORD || partAtPos.type == TokenPart.UNKNOWN_NAME)
						&& partAtPosPlus1.type == TokenPart.INTEGER ) {
					foundNameFolloweByInteger = true;
					break;
				}
			}
			if (foundNameFolloweByInteger) {
				partAtPos.str = partAtPos.str + partAtPosPlus1.str;
				partAtPos.type = TokenPart.UNKNOWN_NAME;
				partAtPos.keyWord = null;
				tokenParts.remove(namePos+1);
			}
		} while (foundNameFolloweByInteger);

		if (tokenParts.size() == 1)  {
			initialTokensAddTokenPart(tokenParts.get(0));
			return true;
		}

		for (int i = 0; i < tokenParts.size(); i++) {
			if (i > 0) initialTokens.add(Token.makeMultiplyToken());
			initialTokensAddTokenPart(tokenParts.get(i));
		}

		return true;
	}
	/**
	 * Adds expression token
	 * Method is called by the tokenExpressionString()
	 * while parsing string expression
	 *
	 * @param      tokenStr            the token string
	 * @param      keyWord             the keyword
	 */
	private void addToken(String tokenStr, KeyWord keyWord, boolean parenthesisIsOnTheRight) {
		Token token = new Token();
		token.tokenStr = tokenStr;
		token.keyWord = keyWord.wordString;
		token.tokenTypeId = keyWord.wordTypeId;
		token.tokenId = keyWord.wordId;
		if (token.tokenTypeId != Token.NOT_MATCHED)
			initialTokensAdd(token);
		if (token.tokenTypeId == Argument.TYPE_ID) {
			token.tokenValue = argumentsList.get(token.tokenId).argumentValue;
		} else if (token.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID) {
			token.tokenValue = Double.parseDouble(token.tokenStr);
			token.keyWord = ParserSymbol.NUMBER_STR;
		} else if (token.tokenTypeId == Token.NOT_MATCHED) {
			boolean alternativeMatchFound = checkArgumentNameInCalculusOperator(token);
			if (!alternativeMatchFound) alternativeMatchFound = checkSpecialConstantName(token);
			if (!alternativeMatchFound) alternativeMatchFound = checkOtherNumberBases(token);
			if (!alternativeMatchFound) alternativeMatchFound = checkFraction(token);
			if (impliedMultiplicationMode && !alternativeMatchFound) alternativeMatchFound = checkNumberNameManyImpliedMultiplication(token, parenthesisIsOnTheRight);
			if (!alternativeMatchFound) initialTokensAdd(token);
		}
	}
	private void addToken(String tokenStr, KeyWord keyWord) {
		addToken(tokenStr, keyWord, false);
	}

	private void addUserDefinedKeyWords() {
		if (parserKeyWordsOnly)
			return;
		ExpressionUtils.addArgumentsKeyWords(argumentsList, keyWordsList);
		ExpressionUtils.addFunctionsKeyWords(functionsList, keyWordsList);
		ExpressionUtils.addConstantsKeyWords(constantsList, keyWordsList);
	}

	/**
	 * Tokenizing expression string
	 */
	private void tokenizeExpressionString() {
        impliedMultiplicationError = false;
		/*
		 * Add parser and argument keywords
		 */
		initParserKeyWords();
		java.util.Collections.sort(keyWordsList, new DescKwLenComparator());
		/*
		 * Evaluate position after sorting for the following keywords types
		 *    number
		 *    plus operator
		 *    minus operator
		 *
		 * Above-mentioned information is required
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
			if ( keyWordsList.get(kwId).wordTypeId == ParserSymbol.NUMBER_TYPE_ID) numberKwId = kwId;
			if ( keyWordsList.get(kwId).wordTypeId == Operator.TYPE_ID) {
				if (keyWordsList.get(kwId).wordId == Operator.PLUS_ID) plusKwId = kwId;
				if (keyWordsList.get(kwId).wordId == Operator.MINUS_ID) minusKwId = kwId;
			}
		}
		initialTokens = new ArrayList<Token>();
		neverParseForImpliedMultiplication = new HashSet<String>();
		int expLen = expressionString.length();
		if (expLen == 0) return;
		/*
		 * Clearing expression string from spaces
		 */
		if (syntaxStatus == SYNTAX_ERROR || syntaxStatus == SYNTAX_STATUS_UNKNOWN) cleanExpressionString();
		String newExpressionString = expressionStringCleaned;
		/*
		 * words list and tokens list
		 */
		if (newExpressionString.length() == 0) return;
		int lastPos = 0; /* position of the keyword previously added*/
		int pos = 0; /* current position */
		String tokenStr = StringInvariant.EMPTY;
		boolean matchFoundPrev = false; /* unknown keyword (previous) */
		boolean matchFound = false; /* unknown keyword (current) */
		KeyWord kw = null;
		String sub = StringInvariant.EMPTY;
		String kwStr = StringInvariant.EMPTY;
		char precedingChar;
		char followingChar;
		char firstChar;
		char c;
		boolean specialConstFound = false;
		String specialConstStr = StringInvariant.EMPTY;
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
			if (	firstChar == '+' ||
					firstChar == '-' ||
					firstChar == '.' ||
					StringUtils.is0To9Digit(firstChar)	) {
				for (int i = pos; i < newExpressionString.length(); i++) {
					/*
					 * Escaping if encountering char that can not
					 * be included in number
					 */
					if (i > pos) {
						c = newExpressionString.charAt(i);
						if (	c != '+' &&
								c != '-' &&
								!StringUtils.is0To9Digit(c) &&
								c != '.' &&
								c != 'e' &&
								c != 'E' ) break;
					}
					/*
					 * Checking if substring represents number
					 */
					String str = newExpressionString.substring(pos, i+1);
					if (StringUtils.regexMatch(str, ParserSymbol.DECIMAL_REG_EXP))  numEnd = i;
				}
			}
			/*
			 * If number was found
			 */
			if (numEnd >= 0)
				if (pos > 0) {
					precedingChar = newExpressionString.charAt(pos-1);
					if (!StringUtils.canBeSeparatingChar(precedingChar)) numEnd = -1;
				}
			if (numEnd >= 0)
				if (numEnd < newExpressionString.length()-1) {
					followingChar = newExpressionString.charAt(numEnd+1);
					if (!StringUtils.canBeSeparatingChar(followingChar)) numEnd = -1;
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
				if (!matchFoundPrev && pos > 0) {
					/*
					 * add preceding word to the list of tokens
					 * as unknown keyword word
					 */
					tokenStr = newExpressionString.substring(lastPos, pos);
					addToken(tokenStr, new KeyWord(), StringUtils.charIsLeftParenthesis(newExpressionString, pos));
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
				if (firstChar == '-' || firstChar == '+') {
					if (initialTokens.size() > 0) {
						Token lastToken = initialTokens.get(initialTokens.size()-1);
						if (	(lastToken.tokenTypeId == Operator.TYPE_ID && lastToken.tokenId != Operator.FACT_ID && lastToken.tokenId != Operator.PERC_ID) ||
								lastToken.tokenTypeId == BinaryRelation.TYPE_ID ||
								lastToken.tokenTypeId == BooleanOperator.TYPE_ID ||
								lastToken.tokenTypeId == BitwiseOperator.TYPE_ID ||
								(lastToken.tokenTypeId == ParserSymbol.TYPE_ID && lastToken.tokenId == ParserSymbol.LEFT_PARENTHESES_ID))
							leadingOp = false;
						 else leadingOp = true;
					} else leadingOp = false;
				} else leadingOp = false;
				/*
				 * If leading operator was found
				 */
				if (leadingOp) {
					/*
					 * Add leading operator to the tokens list
					 */
					if (firstChar == '-') addToken("-", keyWordsList.get(minusKwId));
					if (firstChar == '+') addToken("+", keyWordsList.get(plusKwId));
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
				matchFound = true;
				matchFoundPrev = true;
			} else {
				/*
				 * If there is no number which starts with current position
				 * Check for known keywords
				 */
				int kwId = -1;
				matchFound = false;
				firstChar = newExpressionString.charAt(pos);
				do {
					kwId++;
					kw = keyWordsList.get(kwId);
					kwStr = kw.wordString;
					if (pos + kwStr.length() <= newExpressionString.length()) {
						sub = newExpressionString.substring(pos, pos + kwStr.length() );
						if (sub.equals(kwStr))
							matchFound = true;
						/*
						 * If keyword is known by the parser
						 * and keyword is not a special keyword of the form [...]
						 */
						if (matchFound && firstChar != '[') {
							/*
							 * If keyword is in the form of identifier
							 * then check preceding and following characters
							 */
							if (	kw.wordTypeId == Argument.TYPE_ID ||
									kw.wordTypeId == RecursiveArgument.TYPE_ID_RECURSIVE ||
									kw.wordTypeId == Function1Arg.TYPE_ID ||
									kw.wordTypeId == Function2Arg.TYPE_ID ||
									kw.wordTypeId == Function3Arg.TYPE_ID ||
									kw.wordTypeId == FunctionVariadic.TYPE_ID ||
									kw.wordTypeId == ConstantValue.TYPE_ID ||
									kw.wordTypeId == Constant.TYPE_ID ||
									kw.wordTypeId == RandomVariable.TYPE_ID ||
									kw.wordTypeId == Unit.TYPE_ID ||
									kw.wordTypeId == Function.TYPE_ID ||
									kw.wordTypeId == CalculusOperator.TYPE_ID	) {
								/*
								 * Checking preceding character
								 */
								if (pos > 0) {
									precedingChar = newExpressionString.charAt(pos-1);
									if (!StringUtils.canBeSeparatingChar(precedingChar)) matchFound = false;
								}
								/*
								 * Checking following character
								 */
								if (matchFound && pos + kwStr.length() < newExpressionString.length()) {
									followingChar = newExpressionString.charAt(pos + kwStr.length());
									if (!StringUtils.canBeSeparatingChar(followingChar)) matchFound = false;
								}
							}
						}
					}
				} while (kwId < keyWordsList.size()-1 && !matchFound);

				/*
				 * If keyword was unknown to the parser
				 * but it might be a special constant keyword in the for [...]
				 */
				specialConstFound = false;
				if (!matchFound) {
					if (firstChar == '[') {
						for (int i = pos+1; i < newExpressionString.length(); i++) {
							/*
							 * Escaping if encountering char ']'
							 */
							c = newExpressionString.charAt(i);
							if	(c == ']')  {
								specialConstFound = true;
								specialConstStr = newExpressionString.substring(pos, i+1);
								break;
							}
						}
					}
				}

				/*
				 * If keyword known by the parser was found
				 */
				if (matchFound || specialConstFound) {
					/*
					 * if preceding word was not known by the parser
					 */
					if (!matchFoundPrev && pos > 0) {
						/*
						 * Add preceding word to the tokens list
						 * as unknown keyword
						 */
						tokenStr = newExpressionString.substring(lastPos, pos);
						addToken(tokenStr, new KeyWord(), StringUtils.charIsLeftParenthesis(newExpressionString, pos));
					}
					matchFoundPrev = true;
					/*
					 * Add current (known by the parser or special constant)
					 * keyword to the tokens list
					 */
					if (matchFound) {
						tokenStr = newExpressionString.substring(pos, pos+kwStr.length());
						if ( !(kw.wordTypeId == ParserSymbol.TYPE_ID && kw.wordId == ParserSymbol.BLANK_ID) ) {
							addToken(tokenStr, kw);
						}
					} else {
						tokenStr = specialConstStr;
						addToken(tokenStr, new KeyWord());
					}
					/*
					 * Remember position where last added word ends + 1
					 */
					lastPos = pos+tokenStr.length();
					/*
					 * Change current position;
					 */
					pos = pos + tokenStr.length();
				} else {
					/*
					 * Update preceding word indicator
					 */
					matchFoundPrev = false;
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
		 * If keyword was not known by the parser
		 * and end with the string end
		 * it needs to be added to the tokens list
		 * as unknown keyword
		 */
		if (!matchFound) {
			tokenStr = newExpressionString.substring(lastPos, pos);
			addToken(tokenStr, new KeyWord(), StringUtils.charIsLeftParenthesis(newExpressionString, pos));
		}
		/*
		 * Evaluate tokens levels
		 *
		 * token level identifies the sequence of parsing
		 */
		ExpressionUtils.evaluateTokensLevels(initialTokens);
	}

	/**
	 * copy initial tokens list to tokens list and prepares initial compilation details
	 */
	private void copyInitialTokens() {
		boolean prepareInitialTokensListInfo = false;
		if (initialCompilationDetails == null) {
			initialCompilationDetails = new CompilationDetails();
			initialCompilationDetails.compiledElements = new ArrayList<CompiledElement>();
			prepareInitialTokensListInfo = true;
		}

		tokensList = new ArrayList<Token>();

		if (prepareInitialTokensListInfo) {
			for (Token token : initialTokens) {
				tokensList.add(token.clone());
				if (token.tokenTypeId == CalculusOperator.TYPE_ID)
					initialCompilationDetails.containsCalculus = true;
				else if (token.tokenTypeId == Function3Arg.TYPE_ID && token.tokenId == Function3Arg.IF_CONDITION_ID)
					initialCompilationDetails.containsIf = true;
				else if (token.tokenTypeId == FunctionVariadic.TYPE_ID && token.tokenId == FunctionVariadic.IFF_ID)
					initialCompilationDetails.containsIf = true;
			}
		} else {
			for (Token token : initialTokens)
				tokensList.add(token.clone());
		}

		if (compilationDetails == null)
			compilationDetails = new CompilationDetails();

		compilationDetails.containsCalculus = initialCompilationDetails.containsCalculus;
		compilationDetails.containsIf = initialCompilationDetails.containsIf;
		compilationDetails.compiledElements = initialCompilationDetails.compiledElements;
	}
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
		tokenizeExpressionString();
		return ExpressionUtils.getCopyOfInitialTokens(expressionString, initialTokens);
	}
	/**
	 * Prints to the console copy of initial tokens. Presents how
	 * expression string is interpreted by the parser.
	 *
	 * @see #getCopyOfInitialTokens()
	 */
	public void consolePrintCopyOfInitialTokens() {
		mXparser.consolePrintTokens(getCopyOfInitialTokens());
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
		return ExpressionUtils.getMissingUserDefinedArguments(getCopyOfInitialTokens());
	}
	/**
	 * Returns missing user defined units names, i.e.
	 * 2*[w] + [q] where [w] and [q] are not defined
	 * function will return [w] and [q].
	 *
	 * @return Array of missing user defined units names
	 * - distinct strings.
	 */
	public String[] getMissingUserDefinedUnits() {
		return ExpressionUtils.getMissingUserDefinedUnits(getCopyOfInitialTokens());
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
		return ExpressionUtils.getMissingUserDefinedFunctions(getCopyOfInitialTokens());
	}
	/**
	 * Gets initial tokens and returns copied list
	 *
	 * @see Function
	 */
	List<Token> getInitialTokens() {
		return initialTokens;
	}
	/**
	 * Shows parsing (verbose mode purposes).
	 *
	 */
	private void showParsing(int lPos, int rPos) {
		ExpressionUtils.showParsing(lPos, rPos, tokensList);
	}
	/**
	 * shows known keywords
	 */
	void showKeyWords() {
		ExpressionUtils.showKeyWords(keyWordsList);
	}
	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help.
	 */
	public String getHelp() {
		return getHelp(StringInvariant.EMPTY);
	}
	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help.
	 */
	public String getHelp(String query) {
		initParserKeyWords();
		return ExpressionUtils.getHelp(query, keyWordsList);
	}
	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, any string other than ""
	 * will replace the standard caption with the one specified by the user.
	 *
	 * @return One string value containing all the help.
	 */
	public String getHelp(boolean addHeader, boolean addCaption, String caption) {
		initParserKeyWords();
		return ExpressionUtils.getHelp(StringInvariant.EMPTY, keyWordsList, addHeader, addCaption, caption);
	}
	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, any string other than ""
	 *
	 * @return One string value containing all the help.
	 */
	public String getHelp(String query, boolean addHeader, boolean addCaption, String caption) {
		initParserKeyWords();
		return ExpressionUtils.getHelp(query, keyWordsList, addHeader, addCaption, caption);
	}
	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	public String getHelpAsCsv() {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsCsv(keyWordsList, StringInvariant.QUOTE, StringInvariant.SEMICOLON, true, StringInvariant.EMPTY);
	}
	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	public String getHelpAsCsv(String query) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsCsv(keyWordsList, StringInvariant.QUOTE, StringInvariant.SEMICOLON, true, query);
	}
	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param quote Text qualifier.
	 * @param delimiter Delimiter.
	 * @param addHeader Indicator whether to add a header.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	public String getHelpAsCsv(String quote, String delimiter, boolean addHeader) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsCsv(keyWordsList, quote, delimiter, addHeader, StringInvariant.EMPTY);
	}
	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param quote Text qualifier.
	 * @param delimiter Delimiter.
	 * @param addHeader Indicator whether to add a header.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	public String getHelpAsCsv(String query, String quote, String delimiter, boolean addHeader) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsCsv(keyWordsList, quote, delimiter, addHeader, query);
	}
	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. String in HTML table format.
	 */
	public String getHelpAsHtmlTable() {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsHtmlTable(keyWordsList, true, StringInvariant.EMPTY);
	}
	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help. String in HTML table format.
	 */
	public String getHelpAsHtmlTable(String query) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsHtmlTable(keyWordsList, true, query);
	}
	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param addFigure Indicator whether to add a FIGURE tag.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 * @param cssClass If CSS class is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. String in HTML table format.
	 */
	public String getHelpAsHtmlTable(boolean addHeader, boolean addCaption, boolean addFigure, String caption, String cssClass) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsHtmlTable(keyWordsList, addHeader, addCaption, addFigure, StringInvariant.EMPTY, caption, cssClass);
	}
	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param addFigure Indicator whether to add a FIGURE tag.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 * @param cssClass If CSS class is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. String in HTML table format.
	 */
	public String getHelpAsHtmlTable(String query, boolean addHeader, boolean addCaption, boolean addFigure, String caption, String cssClass) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsHtmlTable(keyWordsList, addHeader, addCaption, addFigure, query, caption, cssClass);
	}
	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. String in Markdown table format.
	 */
	public String getHelpAsMarkdownTable() {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsMarkdownTable(keyWordsList, StringInvariant.EMPTY);
	}
	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.

	 * @return One string value containing all the help. String in Markdown table format.
	 */
	public String getHelpAsMarkdownTable(String query) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsMarkdownTable(keyWordsList, query);
	}
	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. String in Markdown table format.
	 */
	public String getHelpAsMarkdownTable(boolean addHeader, boolean addCaption, String caption) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsMarkdownTable(keyWordsList, addHeader, addCaption, StringInvariant.EMPTY, caption);
	}
	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. String in Markdown table format.
	 */
	public String getHelpAsMarkdownTable(String query, boolean addHeader, boolean addCaption, String caption) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsMarkdownTable(keyWordsList, addHeader, addCaption, query, caption);
	}
	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. String in Json format.
	 */
	public String getHelpAsJson() {
		return getHelpAsJson(StringInvariant.EMPTY);
	}
	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help. String in Json format.
	 */
	public String getHelpAsJson(String query) {
		return getHelpAsJson(query, true, StringInvariant.EMPTY);
	}
	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. String in Json format.
	 */
	public String getHelpAsJson(boolean addCaption, String caption) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsJson(keyWordsList, addCaption, StringInvariant.EMPTY, caption);
	}
	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. String in Json format.
	 */
	public String getHelpAsJson(String query, boolean addCaption, String caption) {
		initParserKeyWords();
		return ExpressionUtils.getHelpAsJson(keyWordsList, addCaption, query, caption);
	}
	/**
	 * Returns list of keywords known to the parser
	 *
	 * @return      List of keywords known to the parser.
	 *
	 * @see KeyWord
	 * @see KeyWord#wordTypeId
	 * @see Expression#getHelp()
	 */
	public List<KeyWord> getKeyWords() {
		return getKeyWords(StringInvariant.EMPTY);
	}
	/**
	 * Returns list of keywords known to the parser. Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return      List of keywords known to the parser filter against query string.
	 *
	 * @see KeyWord
	 * @see KeyWord#wordTypeId
	 * @see Expression#getHelp(String)
	 */
	public List<KeyWord> getKeyWords(String query) {
		initParserKeyWords();
		return ExpressionUtils.getKeyWords(query, keyWordsList);
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
	static void showTokens(List<Token> tokensList) {
		ExpressionUtils.showTokens(tokensList);
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
			printSystemInfo(a.getArgumentName() + StringInvariant.SPACE_EQUAL_SPACE + a.getArgumentValue() + StringInvariant.NEW_LINE, WITH_EXP_STR);
			if (vMode)
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
			mXparser.consolePrint(StringUtils.surroundSquareBrackets(description) + StringUtils.surroundSquareBracketsAddSpace(expressionString) + info);
		else
			mXparser.consolePrint(info);
	}
	/**
	 * Expression cloning.
	 */
	@Override
	protected Expression clone() {
		Expression newExp = new Expression(this, false, null);
		if (initialTokens != null && initialTokens.size() > 0) {
			newExp.initialTokens = createInitialTokens(0, initialTokens.size() - 1, initialTokens);
			newExp.initialCompilationDetails = initialCompilationDetails;
		}
		return newExp;
	}
	Expression cloneForThreadSafeInternal(CloneCache cloneCache) {
		Expression expressionClone = cloneCache.getExpressionClone(this);
		if (expressionClone == null) {
			cloneCache.cacheCloneInProgress(this);
			expressionClone = new Expression(this, true, cloneCache);
			if (initialTokens != null && initialTokens.size() > 0) {
				expressionClone.initialTokens = createInitialTokens(0, initialTokens.size() - 1, initialTokens);
				expressionClone.initialCompilationDetails = initialCompilationDetails;
			}
			cloneCache.clearCloneInProgress(this);
			cloneCache.cacheExpressionClone(this, expressionClone);
		}
		return expressionClone;
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
	public Expression cloneForThreadSafe() {
		CloneCache cloneCache = new CloneCache();
		Expression expressionClone = cloneForThreadSafeInternal(cloneCache);
		cloneCache.addAllAtTheEndElements();
		cloneCache.clearCache();
		return expressionClone;
	}
}