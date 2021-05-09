import { AstronomicalConstants } from './mathcollection/AstronomicalConstants';
import { BinaryRelations } from './mathcollection/BinaryRelations';
import { BooleanAlgebra } from './mathcollection/BooleanAlgebra';
import { MathConstants } from './mathcollection/MathConstants';
import { MathFunctions } from './mathcollection/MathFunctions';
import { NumberTheory } from './mathcollection/NumberTheory';
import { PhysicalConstants } from './mathcollection/PhysicalConstants';
import { Calculus } from './mathcollection/Calculus';
import { ProbabilityDistributions } from './mathcollection/ProbabilityDistributions';
import { SpecialFunctions } from './mathcollection/SpecialFunctions';
import { Statistics } from './mathcollection/Statistics';
import { Units } from './mathcollection/Units';
import { BinaryRelation } from './parsertokens/BinaryRelation';
import { BitwiseOperator } from './parsertokens/BitwiseOperator';
import { BooleanOperator } from './parsertokens/BooleanOperator';
import { CalculusOperator } from './parsertokens/CalculusOperator';
import { ConstantValue } from './parsertokens/ConstantValue';
import { Function1Arg } from './parsertokens/Function1Arg';
import { Function2Arg } from './parsertokens/Function2Arg';
import { Function3Arg } from './parsertokens/Function3Arg';
import { FunctionVariadic } from './parsertokens/FunctionVariadic';
import { KeyWord } from './parsertokens/KeyWord';
import { Operator } from './parsertokens/Operator';
import { ParserSymbol } from './parsertokens/ParserSymbol';
import { RandomVariable } from './parsertokens/RandomVariable';
import { Token } from './parsertokens/Token';
import { Unit } from './parsertokens/Unit';
import { SyntaxChecker } from './syntaxchecker/SyntaxChecker';
import { PrimitiveElement } from './PrimitiveElement';
import { mXparserConstants } from './mXparserConstants';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';
import { KwTypeComparator } from './Miscellaneous';
import { TokenStackElement } from './Miscellaneous';
import { DescKwLenComparator } from './Miscellaneous';
import { SyntaxStackElement } from './Miscellaneous';
import { KwStrComparator } from './Miscellaneous';
import { IterativeOperatorParameters } from './Miscellaneous';
import { ArgumentParameter } from './Miscellaneous';
import { FunctionParameter } from './Miscellaneous';
import { RecursiveArgument } from './RecursiveArgument';
import { Constant } from './Constant';
import { Function } from './Function';
import { Argument } from './Argument';
import { ExpressionConstants } from './ExpressionConstants';
import { ArgumentConstants } from './ArgumentConstants';
import { FunctionConstants } from './FunctionConstants';

/**
 * Constructor - creates new expression from expression string.
 * 
 * @param      {string} expressionString    definition of the expression
 * @param      {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements     Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
 * 
 * @see    PrimitiveElement
 * @class
 * @extends PrimitiveElement
 */
export class Expression extends PrimitiveElement {

    /**
     * Expression string (for example: "sin(x)+cos(y)")
     */
    expressionString: string;

    /*private*/ description: string;

    /**
     * List of arguments
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    argumentsList: java.util.List<Argument>;

    /**
     * List of user defined functions
     * 
     * @see        Function
     */
    functionsList: java.util.List<Function>;

    /**
     * List of user defined constants
     * 
     * @see        Constant
     */
    constantsList: java.util.List<Constant>;

    /**
     * List of key words known by the parser
     */
    /*private*/ keyWordsList: java.util.List<KeyWord>;

    /**
     * List of expression tokens (words).
     * Token class defines all needed
     * attributes for recognizing the structure of
     * arithmetic expression. This is the key result when
     * initial parsing is finished (tokenizeExpressionString() - method).
     * Token keeps information about:
     * - token type (for example: function, operator, argument, number, etc...)
     * - token identifier within given type (sin, cos, operaotr, etc...)
     * - token value (if token is a number)
     * - token level - key information regarding sequence (order) of further parsing
     */
    /*private*/ initialTokens: java.util.List<Token>;

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
    /*private*/ tokensList: java.util.List<Token>;

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
    relatedExpressionsList: java.util.List<Expression>;

    /**
     * Keeps computing time
     */
    /*private*/ computingTime: number;

    /**
     * if true then new tokenizing is required
     * (the initialTokens list needs to be updated)
     */
    /*private*/ expressionWasModified: boolean;

    /**
     * If recursive mode is on the recursive calls are permitted.
     * It means there will be no null pointer exceptions
     * due to expression, and functions cloning.
     */
    recursiveMode: boolean;

    /**
     * Verbose mode prints processing info
     * calls System.out.print* methods
     */
    /*private*/ verboseMode: boolean;

    /**
     * Internal parameter for calculus expressions
     * to avoid decrease in accuracy.
     */
    disableRounding: boolean;

    static DISABLE_ROUNDING: boolean = true;

    static KEEP_ROUNDING_SETTINGS: boolean = false;

    /**
     * Status of the expression syntax
     * 
     * Please referet to the:
     * - NO_SYNTAX_ERRORS
     * - SYNTAX_ERROR_OR_STATUS_UNKNOWN
     */
    /*private*/ syntaxStatus: boolean;

    /**
     * Message after checking the syntax
     */
    /*private*/ errorMessage: string;

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
    /*private*/ recursionCallPending: boolean;

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
    /*private*/ recursionCallsCounter: number;

    /**
     * Internal indicator for tokenization process
     * if true, then keywords such as constants
     * functions etc.. will not be recognized
     * during tokenization
     */
    /*private*/ parserKeyWordsOnly: boolean;

    /**
     * Indicator whether expression was
     * automatically built for user defined
     * functions purpose
     * 
     * @see Function
     */
    UDFExpression: boolean;

    /**
     * List of parameters provided by the user at run-time
     * 
     * @see Function
     */
    UDFVariadicParamsAtRunTime: java.util.List<number>;

    /**
     * Internal indicator for calculation process
     * ExpressionConstants.Calculate() method
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
    /*private*/ internalClone: boolean;

    /**
     * mXparser options changeset
     * used in checkSyntax() method
     */
    /*private*/ optionsChangesetNumber: number;

    /**
     * Adds related expression
     * The same expression could be added more than once
     * For example when
     * 
     * @param      {Expression} expression          the expression
     */
    addRelatedExpression(expression: Expression) {
        if (expression != null && expression !== this){
            if (!this.relatedExpressionsList.contains(expression))this.relatedExpressionsList.add(expression);
        }
    }

    /**
     * Removes related expression
     * 
     * @param      {Expression} expression          the expression
     */
    removeRelatedExpression(expression: Expression) {
        this.relatedExpressionsList.remove(expression);
    }

    /**
     * Prints related expression list
     */
    showRelatedExpressions() {
        java.lang.System.out.println;
        java.lang.System.out.println$java_lang_Object(this.description + " = " + this.expressionString + ":");
        for(let index140=this.relatedExpressionsList.iterator();index140.hasNext();) {
            let e = index140.next();
            java.lang.System.out.println$java_lang_Object("-> " + e.description + " = " + e.expressionString)
        }
    }

    /**
     * Method return error message after
     * calling checkSyntax() method or
     * calculate().
     * 
     * @return     {string} Error message as string.
     */
    public getErrorMessage(): string {
        return this.errorMessage;
    }

    /**
     * Gets syntax status of the expression.
     * 
     * @return     {boolean} true if there are no syntax errors,
     * false when syntax error was found or
     * syntax status is unknown
     */
    public getSyntaxStatus(): boolean {
        return this.syntaxStatus;
    }

    /**
     * Package level method for passing
     * information about errors identified
     * on the constructors level
     * 
     * @param {boolean} syntaxStatus Syntax status
     * @param {string} errorMessage Error message
     * 
     * @see Function
     */
    setSyntaxStatus(syntaxStatus: boolean, errorMessage: string) {
        this.syntaxStatus = syntaxStatus;
        this.errorMessage = errorMessage;
        this.expressionWasModified = false;
    }

    /**
     * Sets expression status to modified
     * Calls setExpressionModifiedFlag() method
     * to all related expressions.
     */
    setExpressionModifiedFlag() {
        if (this.recursionCallPending === false){
            this.recursionCallPending = true;
            this.recursionCallsCounter = 0;
            this.internalClone = false;
            this.expressionWasModified = true;
            this.syntaxStatus = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
            this.errorMessage = "Syntax status unknown.";
            for(let index141=this.relatedExpressionsList.iterator();index141.hasNext();) {
                let e = index141.next();
                e.setExpressionModifiedFlag()
            }
            this.recursionCallPending = false;
        }
    }

    /**
     * Common variables while expression initializing
     * @private
     */
    /*private*/ expressionInternalVarsInit() {
        this.description = "";
        this.errorMessage = "";
        this.computingTime = 0;
        this.recursionCallPending = false;
        this.recursionCallsCounter = 0;
        this.internalClone = false;
        this.parserKeyWordsOnly = false;
        this.disableRounding = Expression.KEEP_ROUNDING_SETTINGS;
    }

    /**
     * Common elements while expression initializing
     * @private
     */
    /*private*/ expressionInit() {
        this.argumentsList = <any>(new java.util.ArrayList<Argument>());
        this.functionsList = <any>(new java.util.ArrayList<Function>());
        this.constantsList = <any>(new java.util.ArrayList<Constant>());
        this.relatedExpressionsList = <any>(new java.util.ArrayList<Expression>());
        this.setSilentMode();
        this.disableRecursiveMode();
        this.expressionInternalVarsInit();
    }

    public constructor(expressionString?: any, initialTokens?: any, argumentsList?: any, functionsList?: any, constantsList?: any, disableUlpRounding?: any, UDFExpression?: any, UDFVariadicParamsAtRunTime?: any) {
        if(expressionString !== null && expressionString !== undefined) {
            let expStringConst: any = expressionString.constructor;
            if(expStringConst.name.toLowerCase() === 'string') expressionString = <string>expressionString.split(' ').join('');
        }
        if (((typeof expressionString === 'string') || expressionString === null) && ((initialTokens != null && (initialTokens.constructor != null && initialTokens.constructor["__interfaces"] != null && initialTokens.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || initialTokens === null) && ((argumentsList != null && (argumentsList.constructor != null && argumentsList.constructor["__interfaces"] != null && argumentsList.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || argumentsList === null) && ((functionsList != null && (functionsList.constructor != null && functionsList.constructor["__interfaces"] != null && functionsList.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || functionsList === null) && ((constantsList != null && (constantsList.constructor != null && constantsList.constructor["__interfaces"] != null && constantsList.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || constantsList === null) && ((typeof disableUlpRounding === 'boolean') || disableUlpRounding === null) && ((typeof UDFExpression === 'boolean') || UDFExpression === null) && ((UDFVariadicParamsAtRunTime != null && (UDFVariadicParamsAtRunTime.constructor != null && UDFVariadicParamsAtRunTime.constructor["__interfaces"] != null && UDFVariadicParamsAtRunTime.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || UDFVariadicParamsAtRunTime === null)) {
            let __args = arguments;
            super(ExpressionConstants.TYPE_ID);
            if (this.expressionString === undefined) { this.expressionString = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentsList === undefined) { this.argumentsList = null; } 
            if (this.functionsList === undefined) { this.functionsList = null; } 
            if (this.constantsList === undefined) { this.constantsList = null; } 
            if (this.keyWordsList === undefined) { this.keyWordsList = null; } 
            if (this.initialTokens === undefined) { this.initialTokens = null; } 
            if (this.tokensList === undefined) { this.tokensList = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.computingTime === undefined) { this.computingTime = 0; } 
            if (this.expressionWasModified === undefined) { this.expressionWasModified = false; } 
            if (this.recursiveMode === undefined) { this.recursiveMode = false; } 
            if (this.verboseMode === undefined) { this.verboseMode = false; } 
            if (this.disableRounding === undefined) { this.disableRounding = false; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            if (this.recursionCallPending === undefined) { this.recursionCallPending = false; } 
            if (this.recursionCallsCounter === undefined) { this.recursionCallsCounter = 0; } 
            if (this.parserKeyWordsOnly === undefined) { this.parserKeyWordsOnly = false; } 
            if (this.UDFVariadicParamsAtRunTime === undefined) { this.UDFVariadicParamsAtRunTime = null; } 
            if (this.internalClone === undefined) { this.internalClone = false; } 
            this.UDFExpression = false;
            this.optionsChangesetNumber = -1;
            this.FUNCTION = "function";
            this.ARGUMENT = "argument";
            this.UNITCONST = "unit/const";
            this.ERROR = "error";
            this.expressionString = expressionString;
            this.initialTokens = initialTokens;
            this.argumentsList = argumentsList;
            this.functionsList = functionsList;
            this.constantsList = constantsList;
            this.relatedExpressionsList = <any>(new java.util.ArrayList<Expression>());
            this.expressionWasModified = false;
            this.syntaxStatus = ExpressionConstants.NO_SYNTAX_ERRORS;
            this.description = "_internal_";
            this.errorMessage = "";
            this.computingTime = 0;
            this.recursionCallPending = false;
            this.recursionCallsCounter = 0;
            this.internalClone = false;
            this.parserKeyWordsOnly = false;
            this.UDFExpression = UDFExpression;
            this.UDFVariadicParamsAtRunTime = UDFVariadicParamsAtRunTime;
            this.disableRounding = disableUlpRounding;
            this.setSilentMode();
            this.disableRecursiveMode();
        } else if (((typeof expressionString === 'string') || expressionString === null) && ((initialTokens != null && (initialTokens.constructor != null && initialTokens.constructor["__interfaces"] != null && initialTokens.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || initialTokens === null) && ((argumentsList != null && (argumentsList.constructor != null && argumentsList.constructor["__interfaces"] != null && argumentsList.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || argumentsList === null) && ((functionsList != null && (functionsList.constructor != null && functionsList.constructor["__interfaces"] != null && functionsList.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || functionsList === null) && ((typeof constantsList === 'boolean') || constantsList === null) && ((typeof disableUlpRounding === 'boolean') || disableUlpRounding === null) && ((UDFExpression != null && (UDFExpression.constructor != null && UDFExpression.constructor["__interfaces"] != null && UDFExpression.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || UDFExpression === null) && UDFVariadicParamsAtRunTime === undefined) {
            let __args = arguments;
            let argumentsList: any = __args[1];
            let functionsList: any = __args[2];
            let constantsList: any = __args[3];
            let internal: any = __args[4];
            let UDFExpression: any = __args[5];
            let UDFVariadicParamsAtRunTime: any = __args[6];
            super(ExpressionConstants.TYPE_ID);
            if (this.expressionString === undefined) { this.expressionString = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentsList === undefined) { this.argumentsList = null; } 
            if (this.functionsList === undefined) { this.functionsList = null; } 
            if (this.constantsList === undefined) { this.constantsList = null; } 
            if (this.keyWordsList === undefined) { this.keyWordsList = null; } 
            if (this.initialTokens === undefined) { this.initialTokens = null; } 
            if (this.tokensList === undefined) { this.tokensList = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.computingTime === undefined) { this.computingTime = 0; } 
            if (this.expressionWasModified === undefined) { this.expressionWasModified = false; } 
            if (this.recursiveMode === undefined) { this.recursiveMode = false; } 
            if (this.verboseMode === undefined) { this.verboseMode = false; } 
            if (this.disableRounding === undefined) { this.disableRounding = false; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            if (this.recursionCallPending === undefined) { this.recursionCallPending = false; } 
            if (this.recursionCallsCounter === undefined) { this.recursionCallsCounter = 0; } 
            if (this.parserKeyWordsOnly === undefined) { this.parserKeyWordsOnly = false; } 
            if (this.UDFVariadicParamsAtRunTime === undefined) { this.UDFVariadicParamsAtRunTime = null; } 
            if (this.internalClone === undefined) { this.internalClone = false; } 
            this.UDFExpression = false;
            this.optionsChangesetNumber = -1;
            this.FUNCTION = "function";
            this.ARGUMENT = "argument";
            this.UNITCONST = "unit/const";
            this.ERROR = "error";
            this.expressionString = <string>new String(expressionString);
            this.expressionInternalVarsInit();
            this.setSilentMode();
            this.disableRecursiveMode();
            this.argumentsList = argumentsList;
            this.functionsList = functionsList;
            this.constantsList = constantsList;
            this.UDFExpression = UDFExpression;
            this.UDFVariadicParamsAtRunTime = UDFVariadicParamsAtRunTime;
            this.relatedExpressionsList = <any>(new java.util.ArrayList<Expression>());
            this.setExpressionModifiedFlag();
        } else if (((typeof expressionString === 'string') || expressionString === null) && ((initialTokens != null && initialTokens instanceof <any>Array && (initialTokens.length == 0 || initialTokens[0] == null ||(initialTokens[0] != null && initialTokens[0] instanceof <any>PrimitiveElement))) || initialTokens === null) && argumentsList === undefined && functionsList === undefined && constantsList === undefined && disableUlpRounding === undefined && UDFExpression === undefined && UDFVariadicParamsAtRunTime === undefined) {
            let __args = arguments;
            let elements: any[] = __args[1];
            super(ExpressionConstants.TYPE_ID);
            if (this.expressionString === undefined) { this.expressionString = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentsList === undefined) { this.argumentsList = null; } 
            if (this.functionsList === undefined) { this.functionsList = null; } 
            if (this.constantsList === undefined) { this.constantsList = null; } 
            if (this.keyWordsList === undefined) { this.keyWordsList = null; } 
            if (this.initialTokens === undefined) { this.initialTokens = null; } 
            if (this.tokensList === undefined) { this.tokensList = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.computingTime === undefined) { this.computingTime = 0; } 
            if (this.expressionWasModified === undefined) { this.expressionWasModified = false; } 
            if (this.recursiveMode === undefined) { this.recursiveMode = false; } 
            if (this.verboseMode === undefined) { this.verboseMode = false; } 
            if (this.disableRounding === undefined) { this.disableRounding = false; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            if (this.recursionCallPending === undefined) { this.recursionCallPending = false; } 
            if (this.recursionCallsCounter === undefined) { this.recursionCallsCounter = 0; } 
            if (this.parserKeyWordsOnly === undefined) { this.parserKeyWordsOnly = false; } 
            if (this.UDFVariadicParamsAtRunTime === undefined) { this.UDFVariadicParamsAtRunTime = null; } 
            if (this.internalClone === undefined) { this.internalClone = false; } 
            this.UDFExpression = false;
            this.optionsChangesetNumber = -1;
            this.FUNCTION = "function";
            this.ARGUMENT = "argument";
            this.UNITCONST = "unit/const";
            this.ERROR = "error";
            this.expressionInit();
            this.expressionString = <string>new String(expressionString);
            this.setExpressionModifiedFlag();
            this.addDefinitions.apply(this, elements);
        } else if (((typeof expressionString === 'string') || expressionString === null) && ((typeof initialTokens === 'boolean') || initialTokens === null) && argumentsList === undefined && functionsList === undefined && constantsList === undefined && disableUlpRounding === undefined && UDFExpression === undefined && UDFVariadicParamsAtRunTime === undefined) {
            let __args = arguments;
            let parserKeyWordsOnly: any = __args[1];
            super(ExpressionConstants.TYPE_ID);
            if (this.expressionString === undefined) { this.expressionString = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentsList === undefined) { this.argumentsList = null; } 
            if (this.functionsList === undefined) { this.functionsList = null; } 
            if (this.constantsList === undefined) { this.constantsList = null; } 
            if (this.keyWordsList === undefined) { this.keyWordsList = null; } 
            if (this.initialTokens === undefined) { this.initialTokens = null; } 
            if (this.tokensList === undefined) { this.tokensList = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.computingTime === undefined) { this.computingTime = 0; } 
            if (this.expressionWasModified === undefined) { this.expressionWasModified = false; } 
            if (this.recursiveMode === undefined) { this.recursiveMode = false; } 
            if (this.verboseMode === undefined) { this.verboseMode = false; } 
            if (this.disableRounding === undefined) { this.disableRounding = false; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            if (this.recursionCallPending === undefined) { this.recursionCallPending = false; } 
            if (this.recursionCallsCounter === undefined) { this.recursionCallsCounter = 0; } 
            if (this.parserKeyWordsOnly === undefined) { this.parserKeyWordsOnly = false; } 
            if (this.UDFVariadicParamsAtRunTime === undefined) { this.UDFVariadicParamsAtRunTime = null; } 
            if (this.internalClone === undefined) { this.internalClone = false; } 
            this.UDFExpression = false;
            this.optionsChangesetNumber = -1;
            this.FUNCTION = "function";
            this.ARGUMENT = "argument";
            this.UNITCONST = "unit/const";
            this.ERROR = "error";
            this.expressionInit();
            this.expressionString = <string>new String(expressionString);
            this.setExpressionModifiedFlag();
            this.parserKeyWordsOnly = parserKeyWordsOnly;
        } else if (((expressionString != null && expressionString instanceof <any>Array && (expressionString.length == 0 || expressionString[0] == null ||(expressionString[0] != null && expressionString[0] instanceof <any>PrimitiveElement))) || expressionString === null) && initialTokens === undefined && argumentsList === undefined && functionsList === undefined && constantsList === undefined && disableUlpRounding === undefined && UDFExpression === undefined && UDFVariadicParamsAtRunTime === undefined) {
            let __args = arguments;
            let elements: any[] = __args[0];
            super(ExpressionConstants.TYPE_ID);
            if (this.expressionString === undefined) { this.expressionString = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentsList === undefined) { this.argumentsList = null; } 
            if (this.functionsList === undefined) { this.functionsList = null; } 
            if (this.constantsList === undefined) { this.constantsList = null; } 
            if (this.keyWordsList === undefined) { this.keyWordsList = null; } 
            if (this.initialTokens === undefined) { this.initialTokens = null; } 
            if (this.tokensList === undefined) { this.tokensList = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.computingTime === undefined) { this.computingTime = 0; } 
            if (this.expressionWasModified === undefined) { this.expressionWasModified = false; } 
            if (this.recursiveMode === undefined) { this.recursiveMode = false; } 
            if (this.verboseMode === undefined) { this.verboseMode = false; } 
            if (this.disableRounding === undefined) { this.disableRounding = false; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            if (this.recursionCallPending === undefined) { this.recursionCallPending = false; } 
            if (this.recursionCallsCounter === undefined) { this.recursionCallsCounter = 0; } 
            if (this.parserKeyWordsOnly === undefined) { this.parserKeyWordsOnly = false; } 
            if (this.UDFVariadicParamsAtRunTime === undefined) { this.UDFVariadicParamsAtRunTime = null; } 
            if (this.internalClone === undefined) { this.internalClone = false; } 
            this.UDFExpression = false;
            this.optionsChangesetNumber = -1;
            this.FUNCTION = "function";
            this.ARGUMENT = "argument";
            this.UNITCONST = "unit/const";
            this.ERROR = "error";
            this.expressionString = "";
            this.expressionInit();
            this.setExpressionModifiedFlag();
            this.addDefinitions.apply(this, elements);
        } else if (((expressionString != null && expressionString instanceof <any>Expression) || expressionString === null) && initialTokens === undefined && argumentsList === undefined && functionsList === undefined && constantsList === undefined && disableUlpRounding === undefined && UDFExpression === undefined && UDFVariadicParamsAtRunTime === undefined) {
            let __args = arguments;
            let expression: any = __args[0];
            super(ExpressionConstants.TYPE_ID);
            if (this.expressionString === undefined) { this.expressionString = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentsList === undefined) { this.argumentsList = null; } 
            if (this.functionsList === undefined) { this.functionsList = null; } 
            if (this.constantsList === undefined) { this.constantsList = null; } 
            if (this.keyWordsList === undefined) { this.keyWordsList = null; } 
            if (this.initialTokens === undefined) { this.initialTokens = null; } 
            if (this.tokensList === undefined) { this.tokensList = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.computingTime === undefined) { this.computingTime = 0; } 
            if (this.expressionWasModified === undefined) { this.expressionWasModified = false; } 
            if (this.recursiveMode === undefined) { this.recursiveMode = false; } 
            if (this.verboseMode === undefined) { this.verboseMode = false; } 
            if (this.disableRounding === undefined) { this.disableRounding = false; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            if (this.recursionCallPending === undefined) { this.recursionCallPending = false; } 
            if (this.recursionCallsCounter === undefined) { this.recursionCallsCounter = 0; } 
            if (this.parserKeyWordsOnly === undefined) { this.parserKeyWordsOnly = false; } 
            if (this.UDFVariadicParamsAtRunTime === undefined) { this.UDFVariadicParamsAtRunTime = null; } 
            if (this.internalClone === undefined) { this.internalClone = false; } 
            this.UDFExpression = false;
            this.optionsChangesetNumber = -1;
            this.FUNCTION = "function";
            this.ARGUMENT = "argument";
            this.UNITCONST = "unit/const";
            this.ERROR = "error";
            this.expressionString = <string>new String(expression.expressionString);
            this.description = <string>new String(expression.description);
            this.argumentsList = expression.argumentsList;
            this.functionsList = expression.functionsList;
            this.constantsList = expression.constantsList;
            this.keyWordsList = expression.keyWordsList;
            this.relatedExpressionsList = expression.relatedExpressionsList;
            this.computingTime = 0;
            this.expressionWasModified = expression.expressionWasModified;
            this.recursiveMode = expression.recursiveMode;
            this.verboseMode = expression.verboseMode;
            this.syntaxStatus = expression.syntaxStatus;
            this.errorMessage = <string>new String(expression.errorMessage);
            this.recursionCallPending = expression.recursionCallPending;
            this.recursionCallsCounter = expression.recursionCallsCounter;
            this.parserKeyWordsOnly = expression.parserKeyWordsOnly;
            this.disableRounding = expression.disableRounding;
            this.UDFExpression = expression.UDFExpression;
            this.UDFVariadicParamsAtRunTime = expression.UDFVariadicParamsAtRunTime;
            this.internalClone = true;
        } else throw new Error('invalid overload');
    }

    /**
     * Sets (modifies expression) expression string.
     * 
     * @param      {string} expressionString    the expression string
     */
    public setExpressionString(expressionString: string) {
        this.expressionString = expressionString;
        this.setExpressionModifiedFlag();
    }

    /**
     * Returns expression string
     * 
     * @return {string} Expression string definition.
     */
    public getExpressionString(): string {
        return this.expressionString;
    }

    /**
     * Clears expression string
     */
    public clearExpressionString() {
        this.expressionString = "";
        this.setExpressionModifiedFlag();
    }

    /**
     * Sets expression description.
     * 
     * @param      {string} description         the description string
     */
    public setDescription(description: string) {
        this.description = description;
    }

    /**
     * Gets expression description.
     * 
     * @return     {string} String description.
     */
    public getDescription(): string {
        return this.description;
    }

    /**
     * Clears expression description
     */
    public clearDescription() {
        this.description = "";
    }

    /**
     * Enables verbose mode.
     */
    public setVerboseMode() {
        this.verboseMode = true;
    }

    /**
     * Disables verbose mode (default silent mode).
     */
    public setSilentMode() {
        this.verboseMode = false;
    }

    /**
     * Returns verbose mode status.
     * 
     * @return     {boolean} true if verbose mode is on,
     * otherwise returns false.
     */
    public getVerboseMode(): boolean {
        return this.verboseMode;
    }

    /**
     * Sets recursive mode
     */
    setRecursiveMode() {
        this.recursiveMode = true;
    }

    /**
     * Disables recursive mode
     */
    disableRecursiveMode() {
        this.recursiveMode = false;
    }

    /**
     * Gets recursive mode status
     * 
     * @return     {boolean} true if recursive mode is enabled,
     * otherwise returns false.
     */
    public getRecursiveMode(): boolean {
        return this.recursiveMode;
    }

    /**
     * Gets computing time.
     * 
     * @return     {number} computing time in seconds.
     */
    public getComputingTime(): number {
        return this.computingTime;
    }

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions)
     * to the expressions.
     * 
     * @param {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements Elements list (variadic), where Argument, Constant, Function
     * extend the same class PrimitiveElement
     * 
     * @see PrimitiveElement
     */
    public addDefinitions(...elements: PrimitiveElement[]) {
        for(let index142=0; index142 < elements.length; index142++) {
            let e = elements[index142];
            {
                if (e != null){
                    const elementTypeId: number = e.getMyTypeId();
                    if (elementTypeId === ArgumentConstants.TYPE_ID)this.addArguments(<Argument>e); else if (elementTypeId === Constant.TYPE_ID)this.addConstants$org_mariuszgromada_math_mxparser_Constant_A(<Constant>e); else if (elementTypeId === FunctionConstants.TYPE_ID)this.addFunctions(<Function>e); else if (elementTypeId === RecursiveArgument.TYPE_ID_RECURSIVE)this.addArguments(<Argument>e);
                }
            }
        }
    }

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions)
     * to the expressions.
     * 
     * @param {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements Elements list (variadic), where Argument, Constant, Function
     * extend the same class PrimitiveElement
     * 
     * @see PrimitiveElement
     */
    public removeDefinitions(...elements: PrimitiveElement[]) {
        for(let index143=0; index143 < elements.length; index143++) {
            let e = elements[index143];
            {
                if (e != null){
                    const elementTypeId: number = e.getMyTypeId();
                    if (elementTypeId === ArgumentConstants.TYPE_ID)this.removeArguments$org_mariuszgromada_math_mxparser_Argument_A(<Argument>e); else if (elementTypeId === Constant.TYPE_ID)this.removeConstants$org_mariuszgromada_math_mxparser_Constant_A(<Constant>e); else if (elementTypeId === FunctionConstants.TYPE_ID)this.removeFunctions$org_mariuszgromada_math_mxparser_Function_A(<Function>e); else if (elementTypeId === RecursiveArgument.TYPE_ID_RECURSIVE)this.removeArguments$org_mariuszgromada_math_mxparser_Argument_A(<Argument>e);
                }
            }
        }
    }

    /**
     * Adds arguments (variadic) to the expression definition.
     * 
     * @param      {org.mariuszgromada.math.mxparser.Argument[]} arguments           the arguments list
     * (comma separated list)
     * @see        Argument
     * @see        RecursiveArgument
     */
    public addArguments(...__arguments: Argument[]) {
        for(let index144=0; index144 < __arguments.length; index144++) {
            let arg = __arguments[index144];
            {
                if (arg != null){
                    this.argumentsList.add(arg);
                    if (arg.getArgumentBodyType() === ArgumentConstants.BODY_RUNTIME)arg.addRelatedExpression(this);
                }
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Enables to define the arguments (associated with
     * the expression) based on the given arguments names.
     * 
     * @param      {java.lang.String[]} argumentsNames      the arguments names (variadic)
     * comma separated list
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public defineArguments(...argumentsNames: string[]) {
        for(let index145=0; index145 < argumentsNames.length; index145++) {
            let argName = argumentsNames[index145];
            {
                const arg: Argument = new Argument(argName);
                arg.addRelatedExpression(this);
                this.argumentsList.add(arg);
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Enables to define the argument (associated with the expression)
     * based on the argument name and the argument value.
     * 
     * @param      {string} argumentName        the argument name
     * @param      {number} argumentValue       the the argument value
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public defineArgument(argumentName: string, argumentValue: number) {
        const arg: Argument = new Argument(argumentName, argumentValue);
        arg.addRelatedExpression(this);
        this.argumentsList.add(arg);
        this.setExpressionModifiedFlag();
    }

    /**
     * Gets argument index from the expression.
     * 
     * @param      {string} argumentName        the argument name
     * 
     * @return     {number} The argument index if the argument name was found,
     * otherwise returns Argument.NOT_FOUND
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public getArgumentIndex(argumentName: string): number {
        const argumentsNumber: number = this.argumentsList.size();
        if (argumentsNumber > 0){
            let argumentIndex: number = 0;
            let searchResult: number = ExpressionConstants.NOT_FOUND_$LI$();
            while(((argumentIndex < argumentsNumber) && (searchResult === ExpressionConstants.NOT_FOUND_$LI$()))) {{
                if (this.argumentsList.get(argumentIndex).getArgumentName() === argumentName)searchResult = ExpressionConstants.FOUND_$LI$(); else argumentIndex++;
            }};
            if (searchResult === ExpressionConstants.FOUND_$LI$())return argumentIndex; else return ExpressionConstants.NOT_FOUND_$LI$();
        } else return ExpressionConstants.NOT_FOUND_$LI$();
    }

    public getArgument$java_lang_String(argumentName: string): Argument {
        const argumentIndex: number = this.getArgumentIndex(argumentName);
        if (argumentIndex === ExpressionConstants.NOT_FOUND_$LI$())return null; else return this.argumentsList.get(argumentIndex);
    }

    /**
     * Gets argument from the expression.
     * 
     * 
     * @param      {string} argumentName        the argument name
     * 
     * @return     {Argument} The argument if the argument name was found,
     * otherwise returns null.
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public getArgument(argumentName?: any): any {
        if (((typeof argumentName === 'string') || argumentName === null)) {
            return <any>this.getArgument$java_lang_String(argumentName);
        } else if (((typeof argumentName === 'number') || argumentName === null)) {
            return <any>this.getArgument$int(argumentName);
        } else throw new Error('invalid overload');
    }

    public getArgument$int(argumentIndex: number): Argument {
        if ((argumentIndex < 0) || (argumentIndex >= this.argumentsList.size()))return null; else return this.argumentsList.get(argumentIndex);
    }

    /**
     * Gets number of arguments associated with the expression.
     * 
     * @return     {number} The number of arguments (int &gt;= 0)
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public getArgumentsNumber(): number {
        return this.argumentsList.size();
    }

    /**
     * Sets argument value.
     * 
     * @param      {string} argumentName        the argument name
     * @param      {number} argumentValue       the argument value
     */
    public setArgumentValue(argumentName: string, argumentValue: number) {
        const argumentIndex: number = this.getArgumentIndex(argumentName);
        if (argumentIndex !== ExpressionConstants.NOT_FOUND_$LI$())this.argumentsList.get(argumentIndex).setArgumentValue(argumentValue);
    }

    /**
     * Gets argument vale.
     * 
     * @param      {string} argumentName        the argument name
     * 
     * @return     {number} Argument value if argument name was found,
     * otherwise return Double.NaN.
     */
    public getArgumentValue(argumentName: string): number {
        const argumentIndex: number = this.getArgumentIndex(argumentName);
        if (argumentIndex !== ExpressionConstants.NOT_FOUND_$LI$())return this.argumentsList.get(argumentIndex).getArgumentValue(); else return javaemul.internal.DoubleHelper.NaN;
    }

    public removeArguments$java_lang_String_A(...argumentsNames: string[]) {
        for(let index146=0; index146 < argumentsNames.length; index146++) {
            let argumentName = argumentsNames[index146];
            {
                const argumentIndex: number = this.getArgumentIndex(argumentName);
                if (argumentIndex !== ExpressionConstants.NOT_FOUND_$LI$()){
                    const arg: Argument = this.argumentsList.get(argumentIndex);
                    arg.removeRelatedExpression(this);
                    this.argumentsList.remove(argumentIndex);
                }
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Removes first occurrences of the arguments
     * associated with the expression.
     * 
     * @param      {java.lang.String[]} argumentsNames      the arguments names
     * (variadic parameters) comma separated
     * list
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public removeArguments(...argumentsNames: any[]) {
        if (((argumentsNames != null && argumentsNames instanceof <any>Array && (argumentsNames.length == 0 || argumentsNames[0] == null ||(typeof argumentsNames[0] === 'string'))) || argumentsNames === null)) {
            return <any>this.removeArguments$java_lang_String_A(...argumentsNames);
        } else if (((argumentsNames != null && argumentsNames instanceof <any>Array && (argumentsNames.length == 0 || argumentsNames[0] == null ||(argumentsNames[0] != null && argumentsNames[0] instanceof <any>Argument))) || argumentsNames === null)) {
            return <any>this.removeArguments$org_mariuszgromada_math_mxparser_Argument_A(...argumentsNames);
        } else throw new Error('invalid overload');
    }

    public removeArguments$org_mariuszgromada_math_mxparser_Argument_A(...__arguments: Argument[]) {
        for(let index147=0; index147 < __arguments.length; index147++) {
            let argument = __arguments[index147];
            {
                if (argument != null){
                    this.argumentsList.remove(argument);
                    argument.removeRelatedExpression(this);
                }
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Removes all arguments associated with the expression.
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public removeAllArguments() {
        for(let index148=this.argumentsList.iterator();index148.hasNext();) {
            let arg = index148.next();
            arg.removeRelatedExpression(this)
        }
        this.argumentsList.clear();
        this.setExpressionModifiedFlag();
    }

    public addConstants$org_mariuszgromada_math_mxparser_Constant_A(...constants: Constant[]) {
        for(let index149=0; index149 < constants.length; index149++) {
            let constant = constants[index149];
            {
                if (constant != null){
                    this.constantsList.add(constant);
                    constant.addRelatedExpression(this);
                }
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Adds constants (variadic parameters) to the expression definition.
     * 
     * @param      {org.mariuszgromada.math.mxparser.Constant[]} constants           the constants
     * (comma separated list)
     * 
     * @see        Constant
     */
    public addConstants(...constants: any[]) {
        if (((constants != null && constants instanceof <any>Array && (constants.length == 0 || constants[0] == null ||(constants[0] != null && constants[0] instanceof <any>Constant))) || constants === null)) {
            return <any>this.addConstants$org_mariuszgromada_math_mxparser_Constant_A(...constants);
        } else if (((constants != null && (constants.constructor != null && constants.constructor["__interfaces"] != null && constants.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || constants === null)) {
            return <any>this.addConstants$java_util_List(<any>constants);
        } else throw new Error('invalid overload');
    }

    public addConstants$java_util_List(constantsList: java.util.List<Constant>) {
        this.constantsList.addAll(constantsList);
        for(let index150=constantsList.iterator();index150.hasNext();) {
            let c = index150.next();
            c.addRelatedExpression(this)
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Enables to define the constant (associated with
     * the expression) based on the constant name and
     * constant value.
     * 
     * @param      {string} constantName        the constant name
     * @param      {number} constantValue       the constant value
     * 
     * @see        Constant
     */
    public defineConstant(constantName: string, constantValue: number) {
        const c: Constant = new Constant(constantName, constantValue);
        c.addRelatedExpression(this);
        this.constantsList.add(c);
        this.setExpressionModifiedFlag();
    }

    /**
     * Gets constant index associated with the expression.
     * 
     * @param      {string} constantName        the constant name
     * 
     * @return     {number} Constant index if constant name was found,
     * otherwise return Constant.NOT_FOUND.
     * 
     * @see        Constant
     */
    public getConstantIndex(constantName: string): number {
        const constantsNumber: number = this.constantsList.size();
        if (constantsNumber > 0){
            let constantIndex: number = 0;
            let searchResult: number = ExpressionConstants.NOT_FOUND_$LI$();
            while(((constantIndex < constantsNumber) && (searchResult === ExpressionConstants.NOT_FOUND_$LI$()))) {{
                if (this.constantsList.get(constantIndex).getConstantName() === constantName)searchResult = ExpressionConstants.FOUND_$LI$(); else constantIndex++;
            }};
            if (searchResult === ExpressionConstants.FOUND_$LI$())return constantIndex; else return ExpressionConstants.NOT_FOUND_$LI$();
        } else return ExpressionConstants.NOT_FOUND_$LI$();
    }

    public getConstant$java_lang_String(constantName: string): Constant {
        const constantIndex: number = this.getConstantIndex(constantName);
        if (constantIndex === ExpressionConstants.NOT_FOUND_$LI$())return null; else return this.constantsList.get(constantIndex);
    }

    /**
     * Gets constant associated with the expression.
     * 
     * @param      {string} constantName        the constant name
     * 
     * @return     {Constant} Constant if constant name was found,
     * otherwise return null.
     * 
     * @see        Constant
     */
    public getConstant(constantName?: any): any {
        if (((typeof constantName === 'string') || constantName === null)) {
            return <any>this.getConstant$java_lang_String(constantName);
        } else if (((typeof constantName === 'number') || constantName === null)) {
            return <any>this.getConstant$int(constantName);
        } else throw new Error('invalid overload');
    }

    public getConstant$int(constantIndex: number): Constant {
        if ((constantIndex < 0) || (constantIndex >= this.constantsList.size()))return null; else return this.constantsList.get(constantIndex);
    }

    /**
     * Gets number of constants associated with the expression.
     * 
     * @return     {number} number of constants (int &gt;= 0)
     * 
     * @see        Constant
     */
    public getConstantsNumber(): number {
        return this.constantsList.size();
    }

    public removeConstants$java_lang_String_A(...constantsNames: string[]) {
        for(let index151=0; index151 < constantsNames.length; index151++) {
            let constantName = constantsNames[index151];
            {
                const constantIndex: number = this.getConstantIndex(constantName);
                if (constantIndex !== ExpressionConstants.NOT_FOUND_$LI$()){
                    const c: Constant = this.constantsList.get(constantIndex);
                    c.removeRelatedExpression(this);
                    this.constantsList.remove(constantIndex);
                }
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Removes first occurrences of the constants
     * associated with the expression.
     * 
     * @param      {java.lang.String[]} constantsNames      the constants names (variadic parameters)
     * comma separated list
     * 
     * @see        Constant
     */
    public removeConstants(...constantsNames: any[]) {
        if (((constantsNames != null && constantsNames instanceof <any>Array && (constantsNames.length == 0 || constantsNames[0] == null ||(typeof constantsNames[0] === 'string'))) || constantsNames === null)) {
            return <any>this.removeConstants$java_lang_String_A(...constantsNames);
        } else if (((constantsNames != null && constantsNames instanceof <any>Array && (constantsNames.length == 0 || constantsNames[0] == null ||(constantsNames[0] != null && constantsNames[0] instanceof <any>Constant))) || constantsNames === null)) {
            return <any>this.removeConstants$org_mariuszgromada_math_mxparser_Constant_A(...constantsNames);
        } else throw new Error('invalid overload');
    }

    public removeConstants$org_mariuszgromada_math_mxparser_Constant_A(...constants: Constant[]) {
        for(let index152=0; index152 < constants.length; index152++) {
            let constant = constants[index152];
            {
                if (constant != null){
                    this.constantsList.remove(constant);
                    constant.removeRelatedExpression(this);
                    this.setExpressionModifiedFlag();
                }
            }
        }
    }

    /**
     * Removes all constants
     * associated with the expression
     * 
     * @see        Constant
     */
    public removeAllConstants() {
        for(let index153=this.constantsList.iterator();index153.hasNext();) {
            let c = index153.next();
            c.removeRelatedExpression(this)
        }
        this.constantsList.clear();
        this.setExpressionModifiedFlag();
    }

    /**
     * Adds functions (variadic parameters) to the expression definition.
     * 
     * @param      {org.mariuszgromada.math.mxparser.Function[]} functions           the functions
     * (variadic parameters) comma separated list
     * 
     * @see        Function
     */
    public addFunctions(...functions: Function[]) {
        for(let index154=0; index154 < functions.length; index154++) {
            let f = functions[index154];
            {
                if (f != null){
                    this.functionsList.add(f);
                    if (f.getFunctionBodyType() === FunctionConstants.BODY_RUNTIME)f.addRelatedExpression(this);
                }
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Enables to define the function (associated with
     * the expression) based on the function name,
     * function expression string and arguments names (variadic parameters).
     * 
     * @param      {string} functionName                  the function name
     * @param      {string} functionExpressionString      the expression string
     * @param      {java.lang.String[]} argumentsNames                the function arguments names
     * (variadic parameters)
     * comma separated list
     * 
     * @see        Function
     */
    public defineFunction(functionName: string, functionExpressionString: string, ...argumentsNames: string[]) {
        const f: Function = <any>new Function(functionName, functionExpressionString, argumentsNames);
        this.functionsList.add(f);
        f.addRelatedExpression(this);
        this.setExpressionModifiedFlag();
    }

    /**
     * Gets index of function associated with the expression.
     * 
     * @param      {string} functionName        the function name
     * 
     * @return     {number} Function index if function name was found,
     * otherwise returns Function.NOT_FOUND
     * 
     * @see        Function
     */
    public getFunctionIndex(functionName: string): number {
        const functionsNumber: number = this.functionsList.size();
        if (functionsNumber > 0){
            let functionIndex: number = 0;
            let searchResult: number = ExpressionConstants.NOT_FOUND_$LI$();
            while(((functionIndex < functionsNumber) && (searchResult === ExpressionConstants.NOT_FOUND_$LI$()))) {{
                if (this.functionsList.get(functionIndex).getFunctionName() === functionName)searchResult = ExpressionConstants.FOUND_$LI$(); else functionIndex++;
            }};
            if (searchResult === ExpressionConstants.FOUND_$LI$())return functionIndex; else return ExpressionConstants.NOT_FOUND_$LI$();
        } else return ExpressionConstants.NOT_FOUND_$LI$();
    }

    public getFunction$java_lang_String(functionName: string): Function {
        const functionIndex: number = this.getFunctionIndex(functionName);
        if (functionIndex === ExpressionConstants.NOT_FOUND_$LI$())return null; else return this.functionsList.get(functionIndex);
    }

    /**
     * Gets function associated with the expression.
     * 
     * @param      {string} functionName        the function name
     * 
     * @return     {Function} Function if function name was found,
     * otherwise returns null.
     * 
     * @see        Function
     */
    public getFunction(functionName?: any): any {
        if (((typeof functionName === 'string') || functionName === null)) {
            return <any>this.getFunction$java_lang_String(functionName);
        } else if (((typeof functionName === 'number') || functionName === null)) {
            return <any>this.getFunction$int(functionName);
        } else throw new Error('invalid overload');
    }

    public getFunction$int(functionIndex: number): Function {
        if ((functionIndex < 0) || (functionIndex >= this.functionsList.size()))return null; else return this.functionsList.get(functionIndex);
    }

    /**
     * Gets number of functions associated with the expression.
     * 
     * @return     {number} number of functions (int &gt;= 0)
     * 
     * @see        Function
     */
    public getFunctionsNumber(): number {
        return this.functionsList.size();
    }

    public removeFunctions$java_lang_String_A(...functionsNames: string[]) {
        for(let index155=0; index155 < functionsNames.length; index155++) {
            let functionName = functionsNames[index155];
            {
                const functionIndex: number = this.getFunctionIndex(functionName);
                if (functionIndex !== ExpressionConstants.NOT_FOUND_$LI$()){
                    const f: Function = this.functionsList.get(functionIndex);
                    f.removeRelatedExpression(this);
                    this.functionsList.remove(f);
                }
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Removes first occurrences of the functions
     * associated with the expression.
     * 
     * @param      {java.lang.String[]} functionsNames      the functions names (variadic parameters)
     * comma separated list
     * 
     * @see        Function
     */
    public removeFunctions(...functionsNames: any[]) {
        if (((functionsNames != null && functionsNames instanceof <any>Array && (functionsNames.length == 0 || functionsNames[0] == null ||(typeof functionsNames[0] === 'string'))) || functionsNames === null)) {
            return <any>this.removeFunctions$java_lang_String_A(...functionsNames);
        } else if (((functionsNames != null && functionsNames instanceof <any>Array && (functionsNames.length == 0 || functionsNames[0] == null ||(functionsNames[0] != null && functionsNames[0] instanceof <any>Function))) || functionsNames === null)) {
            return <any>this.removeFunctions$org_mariuszgromada_math_mxparser_Function_A(...functionsNames);
        } else throw new Error('invalid overload');
    }

    public removeFunctions$org_mariuszgromada_math_mxparser_Function_A(...functions: Function[]) {
        for(let index156=0; index156 < functions.length; index156++) {
            let __function = functions[index156];
            {
                if (__function != null){
                    __function.removeRelatedExpression(this);
                    this.functionsList.remove(__function);
                }
            }
        }
        this.setExpressionModifiedFlag();
    }

    /**
     * Removes all functions
     * associated with the expression.
     * 
     * @see        Function
     */
    public removeAllFunctions() {
        for(let index157=this.functionsList.iterator();index157.hasNext();) {
            let f = index157.next();
            f.removeRelatedExpression(this)
        }
        this.functionsList.clear();
        this.setExpressionModifiedFlag();
    }

    public setToNumber$int$double$boolean(pos: number, number: number, ulpRound: boolean) {
        const token: Token = this.tokensList.get(pos);
        if ((mXparserConstants.ulpRounding) && (this.disableRounding === false)){
            if (ulpRound){
                if ((/* isNaN */isNaN(number)) || (/* isInfinite */((value) => Number.NEGATIVE_INFINITY === value || Number.POSITIVE_INFINITY === value)(number)))token.tokenValue = number; else {
                    const precision: number = MathFunctions.ulpDecimalDigitsBefore(number);
                    if (precision >= 0)token.tokenValue = MathFunctions.round(number, precision); else token.tokenValue = number;
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

    /**
     * Sets given token to the number type / value.
     * Method should be called only by the SetDecreaseRemove like methods
     * 
     * @param      {number} pos                 the position on which token
     * should be updated to the given number
     * @param      {number} number              the number
     * @param      {boolean} ulpRound            If true, then if {@link mXparser#ulpRounding} = true
     * intelligent ULP rounding is applied.
     * @private
     */
    public setToNumber(pos?: any, number?: any, ulpRound?: any) {
        if (((typeof pos === 'number') || pos === null) && ((typeof number === 'number') || number === null) && ((typeof ulpRound === 'boolean') || ulpRound === null)) {
            return <any>this.setToNumber$int$double$boolean(pos, number, ulpRound);
        } else if (((typeof pos === 'number') || pos === null) && ((typeof number === 'number') || number === null) && ulpRound === undefined) {
            return <any>this.setToNumber$int$double(pos, number);
        } else throw new Error('invalid overload');
    }

    /*private*/ setToNumber$int$double(pos: number, number: number) {
        this.setToNumber$int$double$boolean(pos, number, false);
    }

    public f1SetDecreaseRemove$int$double$boolean(pos: number, result: number, ulpRound: boolean) {
        this.setToNumber$int$double$boolean(pos, result, ulpRound);
        this.tokensList.get(pos).tokenLevel--;
        this.tokensList.remove(pos + 1);
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
     * idx   :  0   1    2    3   4   5
     * token :  1   +   cos   (   0   )
     * level :  0   0    1    2   2   2
     * 
     * Partitions with the highest level will be handled first.
     * In the case presented above, it means, that the parenthesis will be removed
     * 
     * idx   :  0   1    2    3
     * token :  1   +   cos   0
     * level :  0   0    1    2
     * 
     * Next step is to calculate cos(0) = 1
     * 
     * SetDecreaseRemove like methods
     * 
     * 1) Set cos token to 1 (pos=2, result=1):
     * idx   :  0   1    2    3
     * token :  1   +    1    0
     * level :  0   0    1    2
     * 
     * 2) Decrease level (pos=2):
     * idx   :  0   1    2    3
     * token :  1   +    1    0
     * level :  0   0    0    2
     * 
     * 3) Remove no longer needed tokens (pos+1=3):
     * idx   :  0   1    2
     * token :  1   +    1
     * level :  0   0    0
     * 
     * @param      {number} pos                 the position on which token
     * should be updated to the given number
     * @param      {number} result              the number
     * @param      {boolean} ulpRound            If true, then if {@link mXparser#ulpRounding} = true
     * intelligent ULP rounding is applied.
     * @private
     */
    public f1SetDecreaseRemove(pos?: any, result?: any, ulpRound?: any) {
        if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ((typeof ulpRound === 'boolean') || ulpRound === null)) {
            return <any>this.f1SetDecreaseRemove$int$double$boolean(pos, result, ulpRound);
        } else if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ulpRound === undefined) {
            return <any>this.f1SetDecreaseRemove$int$double(pos, result);
        } else throw new Error('invalid overload');
    }

    /*private*/ f1SetDecreaseRemove$int$double(pos: number, result: number) {
        this.f1SetDecreaseRemove$int$double$boolean(pos, result, false);
    }

    public f2SetDecreaseRemove$int$double$boolean(pos: number, result: number, ulpRound: boolean) {
        this.setToNumber$int$double$boolean(pos, result, ulpRound);
        this.tokensList.get(pos).tokenLevel--;
        this.tokensList.remove(pos + 2);
        this.tokensList.remove(pos + 1);
    }

    /**
     * SetDecreaseRemove for 2-args functions
     * 
     * For detailed specification refer to the
     * f1SetDecreaseRemove()
     * 
     * @param      {number} pos                 the position on which token
     * should be updated to the given number
     * @param      {number} result              the number
     * @param      {boolean} ulpRound            If true, then if {@link mXparser#ulpRounding} = true
     * intelligent ULP rounding is applied.
     * @private
     */
    public f2SetDecreaseRemove(pos?: any, result?: any, ulpRound?: any) {
        if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ((typeof ulpRound === 'boolean') || ulpRound === null)) {
            return <any>this.f2SetDecreaseRemove$int$double$boolean(pos, result, ulpRound);
        } else if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ulpRound === undefined) {
            return <any>this.f2SetDecreaseRemove$int$double(pos, result);
        } else throw new Error('invalid overload');
    }

    /*private*/ f2SetDecreaseRemove$int$double(pos: number, result: number) {
        this.f2SetDecreaseRemove$int$double$boolean(pos, result, false);
    }

    public f3SetDecreaseRemove$int$double$boolean(pos: number, result: number, ulpRound: boolean) {
        this.setToNumber$int$double$boolean(pos, result, ulpRound);
        this.tokensList.get(pos).tokenLevel--;
        this.tokensList.remove(pos + 3);
        this.tokensList.remove(pos + 2);
        this.tokensList.remove(pos + 1);
    }

    /**
     * SetDecreaseRemove for 3-args functions
     * 
     * For detailed specification refer to the
     * f1SetDecreaseRemove()
     * 
     * @param      {number} pos                 the position on which token
     * should be updated to the given number
     * @param      {number} result              the number
     * @param      {boolean} ulpRound            If true, then if {@link mXparser#ulpRounding} = true
     * intelligent ULP rounding is applied.
     * @private
     */
    public f3SetDecreaseRemove(pos?: any, result?: any, ulpRound?: any) {
        if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ((typeof ulpRound === 'boolean') || ulpRound === null)) {
            return <any>this.f3SetDecreaseRemove$int$double$boolean(pos, result, ulpRound);
        } else if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ulpRound === undefined) {
            return <any>this.f3SetDecreaseRemove$int$double(pos, result);
        } else throw new Error('invalid overload');
    }

    /*private*/ f3SetDecreaseRemove$int$double(pos: number, result: number) {
        this.f3SetDecreaseRemove$int$double$boolean(pos, result, false);
    }

    public opSetDecreaseRemove$int$double$boolean(pos: number, result: number, ulpRound: boolean) {
        this.setToNumber$int$double$boolean(pos, result, ulpRound);
        this.tokensList.remove(pos + 1);
        this.tokensList.remove(pos - 1);
    }

    /**
     * SetDecreaseRemove for operators
     * 
     * For detailed specification refer to the
     * f1SetDecreaseRemove()
     * 
     * @param      {number} pos                 the position on which token
     * should be updated to the given number
     * @param      {number} result              the number
     * @param      {boolean} ulpRound            If true, then if {@link mXparser#ulpRounding} = true
     * intelligent ULP rounding is applied.
     * @private
     */
    public opSetDecreaseRemove(pos?: any, result?: any, ulpRound?: any) {
        if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ((typeof ulpRound === 'boolean') || ulpRound === null)) {
            return <any>this.opSetDecreaseRemove$int$double$boolean(pos, result, ulpRound);
        } else if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ulpRound === undefined) {
            return <any>this.opSetDecreaseRemove$int$double(pos, result);
        } else throw new Error('invalid overload');
    }

    /*private*/ opSetDecreaseRemove$int$double(pos: number, result: number) {
        this.opSetDecreaseRemove$int$double$boolean(pos, result, false);
    }

    public calcSetDecreaseRemove$int$double$boolean(pos: number, result: number, ulpRound: boolean) {
        this.setToNumber$int$double$boolean(pos, result, ulpRound);
        this.tokensList.get(pos).tokenLevel--;
        const lPos: number = pos + 1;
        let rPos: number = lPos + 1;
        while((!((this.tokensList.get(rPos).tokenTypeId === ParserSymbol.TYPE_ID) && (this.tokensList.get(rPos).tokenId === ParserSymbol.RIGHT_PARENTHESES_ID) && (this.tokensList.get(rPos).tokenLevel === this.tokensList.get(lPos).tokenLevel)))) {rPos++};
        for(let p: number = rPos; p >= lPos; p--) {this.tokensList.remove(p);}
    }

    /**
     * SetDecreaseRemove for calculus operators.
     * 
     * For detailed specification refer to the
     * f1SetDecreaseRemove()
     * 
     * @param      {number} pos                 the position on which token
     * should be updated to the given number
     * @param      {number} result              the number
     * @param      {boolean} ulpRound            If true, then if {@link mXparser#ulpRounding} = true
     * intelligent ULP rounding is applied.
     * @private
     */
    public calcSetDecreaseRemove(pos?: any, result?: any, ulpRound?: any) {
        if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ((typeof ulpRound === 'boolean') || ulpRound === null)) {
            return <any>this.calcSetDecreaseRemove$int$double$boolean(pos, result, ulpRound);
        } else if (((typeof pos === 'number') || pos === null) && ((typeof result === 'number') || result === null) && ulpRound === undefined) {
            return <any>this.calcSetDecreaseRemove$int$double(pos, result);
        } else throw new Error('invalid overload');
    }

    /*private*/ calcSetDecreaseRemove$int$double(pos: number, result: number) {
        this.calcSetDecreaseRemove$int$double$boolean(pos, result, false);
    }

    public variadicSetDecreaseRemove$int$double$int$boolean(pos: number, value: number, length: number, ulpRound: boolean) {
        this.setToNumber$int$double$boolean(pos, value, ulpRound);
        this.tokensList.get(pos).tokenLevel--;
        for(let p: number = pos + length; p > pos; p--) {this.tokensList.remove(p);}
    }

    /**
     * SetDecreaseRemove for special functions.
     * 
     * For detailed specification refer to the
     * f1SetDecreaseRemove()
     * 
     * @param      {number} pos                 the position on which token
     * should be updated to the given number
     * @param      result              the number
     * @param      {number} length              the special function range
     * @param      {boolean} ulpRound            If true, then if {@link mXparser#ulpRounding} = true
     * intelligent ULP rounding is applied.
     * @param {number} value
     * @private
     */
    public variadicSetDecreaseRemove(pos?: any, value?: any, length?: any, ulpRound?: any) {
        if (((typeof pos === 'number') || pos === null) && ((typeof value === 'number') || value === null) && ((typeof length === 'number') || length === null) && ((typeof ulpRound === 'boolean') || ulpRound === null)) {
            return <any>this.variadicSetDecreaseRemove$int$double$int$boolean(pos, value, length, ulpRound);
        } else if (((typeof pos === 'number') || pos === null) && ((typeof value === 'number') || value === null) && ((typeof length === 'number') || length === null) && ulpRound === undefined) {
            return <any>this.variadicSetDecreaseRemove$int$double$int(pos, value, length);
        } else throw new Error('invalid overload');
    }

    /*private*/ variadicSetDecreaseRemove$int$double$int(pos: number, value: number, length: number) {
        this.variadicSetDecreaseRemove$int$double$int$boolean(pos, value, length, false);
    }

    public ifSetRemove$int$double$boolean(pos: number, ifCondition: number, ulpRound: boolean) {
        const lPos: number = pos + 1;
        const ifLevel: number = this.tokensList.get(lPos).tokenLevel;
        let c1Pos: number = lPos + 1;
        while((!((this.tokensList.get(c1Pos).tokenTypeId === ParserSymbol.TYPE_ID) && (this.tokensList.get(c1Pos).tokenId === ParserSymbol.COMMA_ID) && (this.tokensList.get(c1Pos).tokenLevel === ifLevel)))) {c1Pos++};
        let c2Pos: number = c1Pos + 1;
        while((!((this.tokensList.get(c2Pos).tokenTypeId === ParserSymbol.TYPE_ID) && (this.tokensList.get(c2Pos).tokenId === ParserSymbol.COMMA_ID) && (this.tokensList.get(c2Pos).tokenLevel === ifLevel)))) {c2Pos++};
        let rPos: number = c2Pos + 1;
        while((!((this.tokensList.get(rPos).tokenTypeId === ParserSymbol.TYPE_ID) && (this.tokensList.get(rPos).tokenId === ParserSymbol.RIGHT_PARENTHESES_ID) && (this.tokensList.get(rPos).tokenLevel === ifLevel)))) {rPos++};
        if (!/* isNaN */isNaN(ifCondition)){
            if (ifCondition !== 0){
                this.setToNumber$int$double(c2Pos + 1, javaemul.internal.DoubleHelper.NaN);
                this.tokensList.get(c2Pos + 1).tokenLevel = ifLevel;
                this.removeTokens(c2Pos + 2, rPos - 1);
            } else {
                this.setToNumber$int$double(c1Pos + 1, javaemul.internal.DoubleHelper.NaN);
                this.tokensList.get(c1Pos + 1).tokenLevel = ifLevel;
                this.removeTokens(c1Pos + 2, c2Pos - 1);
            }
        } else {
            this.setToNumber$int$double(c1Pos + 1, javaemul.internal.DoubleHelper.NaN);
            this.setToNumber$int$double(c2Pos + 1, javaemul.internal.DoubleHelper.NaN);
            this.tokensList.get(c1Pos + 1).tokenLevel = ifLevel;
            this.tokensList.get(c2Pos + 1).tokenLevel = ifLevel;
            this.removeTokens(c2Pos + 2, rPos - 1);
            this.removeTokens(c1Pos + 2, c2Pos - 1);
        }
        this.setToNumber$int$double$boolean(lPos + 1, ifCondition, ulpRound);
        this.tokensList.get(lPos + 1).tokenLevel = ifLevel;
        this.removeTokens(lPos + 2, c1Pos - 1);
        this.tokensList.get(pos).tokenId = Function3Arg.IF_ID;
    }

    /**
     * If set remove method for the if function.
     * 
     * @param      {number} pos                 the position
     * @param      {number} ifCondition         the result of if condition
     * @param      {boolean} ulpRound            If true, then if {@link mXparser#ulpRounding} = true
     * intelligent ULP rounding is applied.
     * @private
     */
    public ifSetRemove(pos?: any, ifCondition?: any, ulpRound?: any) {
        if (((typeof pos === 'number') || pos === null) && ((typeof ifCondition === 'number') || ifCondition === null) && ((typeof ulpRound === 'boolean') || ulpRound === null)) {
            return <any>this.ifSetRemove$int$double$boolean(pos, ifCondition, ulpRound);
        } else if (((typeof pos === 'number') || pos === null) && ((typeof ifCondition === 'number') || ifCondition === null) && ulpRound === undefined) {
            return <any>this.ifSetRemove$int$double(pos, ifCondition);
        } else throw new Error('invalid overload');
    }

    /*private*/ removeTokens(from: number, to: number) {
        if (from < to){
            for(let p: number = to; p >= from; p--) {this.tokensList.remove(p);}
        } else if (from === to)this.tokensList.remove(from);
    }

    /*private*/ ifSetRemove$int$double(pos: number, ifCondition: number) {
        this.ifSetRemove$int$double$boolean(pos, ifCondition, false);
    }

    /**
     * Creates string tokens list from the subexpression.
     * 
     * @param      {number} startPos            start position (index)
     * @param      {number} endPos              end position   (index)
     * 
     * @return     {*} tokens list representing requested subexpression.
     * @param {*} tokensList
     * @private
     */
    /*private*/ createInitialTokens(startPos: number, endPos: number, tokensList: java.util.List<Token>): java.util.List<Token> {
        const tokens: java.util.List<Token> = <any>(new java.util.ArrayList<Token>());
        let t: Token;
        for(let p: number = startPos; p <= endPos; p++) {{
            t = /* clone */((o: any) => { if (o.clone != undefined) { return (<any>o).clone(); } else { let clone = Object.create(o); for(let p in o) { if (o.hasOwnProperty(p)) clone[p] = o[p]; } return clone; } })(tokensList.get(p));
            tokens.add(t);
        };}
        return tokens;
    }

    /**
     * Return number of functions parameters.
     * 
     * @param      {number} pos                 the function position
     * @return {number}
     * @private
     */
    /*private*/ getParametersNumber(pos: number): number {
        const lPpos: number = pos + 1;
        if (lPpos === this.initialTokens.size())return -1;
        if ((this.initialTokens.get(lPpos).tokenTypeId === ParserSymbol.TYPE_ID) && (this.initialTokens.get(lPpos).tokenId === ParserSymbol.LEFT_PARENTHESES_ID)){
            const tokenLevel: number = this.initialTokens.get(lPpos).tokenLevel;
            let endPos: number = lPpos + 1;
            while((!((this.initialTokens.get(endPos).tokenTypeId === ParserSymbol.TYPE_ID) && (this.initialTokens.get(endPos).tokenId === ParserSymbol.RIGHT_PARENTHESES_ID) && (this.initialTokens.get(endPos).tokenLevel === tokenLevel)))) {endPos++};
            if (endPos === lPpos + 1)return 0;
            let numberOfCommas: number = 0;
            for(let p: number = lPpos; p < endPos; p++) {{
                const token: Token = this.initialTokens.get(p);
                if ((token.tokenTypeId === ParserSymbol.TYPE_ID) && (token.tokenId === ParserSymbol.COMMA_ID) && (token.tokenLevel === tokenLevel))numberOfCommas++;
            };}
            return numberOfCommas + 1;
        } else {
            return -1;
        }
    }

    /**
     * Returns list of the functions parameters.
     * 
     * @param      {number} pos                 the function position
     * @param      {*} tokensList          the tokens list
     * 
     * @return     {*} the list of function parameters
     * 
     * @see        FunctionParameter
     * @private
     */
    /*private*/ getFunctionParameters(pos: number, tokensList: java.util.List<Token>): java.util.List<FunctionParameter> {
        const functionParameters: java.util.List<FunctionParameter> = <any>(new java.util.ArrayList<FunctionParameter>());
        let cPos: number = pos + 2;
        const tokenLevel: number = tokensList.get(pos + 1).tokenLevel;
        let pPos: number = cPos;
        let comma: boolean;
        let paren: boolean;
        let end: boolean = false;
        let paramTkones: java.util.List<Token> = <any>(new java.util.ArrayList<Token>());
        let paramStr: string = "";
        do {{
            const t: Token = tokensList.get(cPos);
            comma = false;
            paren = false;
            if (t.tokenLevel === tokenLevel)if (t.tokenTypeId === ParserSymbol.TYPE_ID){
                if (t.tokenId === ParserSymbol.RIGHT_PARENTHESES_ID)paren = true; else if (t.tokenId === ParserSymbol.COMMA_ID)comma = true;
            }
            if ((paren === true) || (comma === true)){
                if (cPos > pos + 2){
                    functionParameters.add(new FunctionParameter(paramTkones, paramStr, pPos, cPos - 1));
                    paramTkones = <any>(new java.util.ArrayList<Token>());
                    paramStr = "";
                    pPos = cPos + 1;
                }
            } else {
                paramTkones.add(t);
                paramStr = paramStr + t.tokenStr;
            }
            if (paren)end = true; else cPos++;
        }} while((!end));
        return functionParameters;
    }

    /**
     * Gets / returns argument representing given argument name. If
     * argument name exists on the list of known arguments
     * the the initial status of the found argument is remembered, otherwise new
     * argument will be created.
     * 
     * @param      {string} argumentName        the argument name
     * 
     * @return     {ArgumentParameter} Argument parameter representing given argument name:
     * 
     * 
     * @see        ArgumentParameter
     * @see        Argument
     * @private
     */
    /*private*/ getParamArgument(argumentName: string): ArgumentParameter {
        const argParam: ArgumentParameter = new ArgumentParameter();
        argParam.index = this.getArgumentIndex(argumentName);
        argParam.argument = this.getArgument$int(argParam.index);
        argParam.presence = ExpressionConstants.FOUND_$LI$();
        if (argParam.argument == null){
            argParam.argument = new Argument(argumentName);
            this.argumentsList.add(argParam.argument);
            argParam.index = this.argumentsList.size() - 1;
            argParam.presence = ExpressionConstants.NOT_FOUND_$LI$();
        } else {
            argParam.initialValue = argParam.argument.argumentValue;
            argParam.initialType = argParam.argument.argumentType;
            argParam.argument.argumentValue = argParam.argument.getArgumentValue();
            argParam.argument.argumentType = ArgumentConstants.FREE_ARGUMENT;
        }
        return argParam;
    }

    /**
     * Clears argument parameter.
     * 
     * @param      {ArgumentParameter} argParam            the argument parameter.
     * @private
     */
    /*private*/ clearParamArgument(argParam: ArgumentParameter) {
        if (argParam.presence === ExpressionConstants.NOT_FOUND_$LI$())this.argumentsList.remove(argParam.index); else {
            argParam.argument.argumentValue = argParam.initialValue;
            argParam.argument.argumentType = argParam.initialType;
        }
    }

    /**
     * Free Arguments handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ FREE_ARGUMENT(pos: number) {
        const argument: Argument = this.argumentsList.get(this.tokensList.get(pos).tokenId);
        const argumentVerboseMode: boolean = argument.getVerboseMode();
        if (this.verboseMode === true)argument.setVerboseMode();
        this.setToNumber$int$double(pos, argument.getArgumentValue());
        if (argumentVerboseMode === false)argument.setSilentMode();
    }

    /**
     * Dependent Arguments handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ DEPENDENT_ARGUMENT(pos: number) {
        const argument: Argument = this.argumentsList.get(this.tokensList.get(pos).tokenId);
        const argumentVerboseMode: boolean = argument.getVerboseMode();
        if (this.verboseMode === true)argument.setVerboseMode();
        const tokensListSizeBefore: number = this.tokensList.size();
        const tokenBefore: Token = this.tokensList.get(pos);
        const argumentValue: number = argument.getArgumentValue();
        const tokensListSizeAfter: number = this.tokensList.size();
        if (tokensListSizeBefore === tokensListSizeAfter){
            const tokenAfter: Token = this.tokensList.get(pos);
            if ((tokenBefore.tokenTypeId === tokenAfter.tokenTypeId) && (tokenBefore.tokenId === tokenAfter.tokenId)){
                this.setToNumber$int$double(pos, argumentValue);
            }
        }
        if (argumentVerboseMode === false)argument.setSilentMode();
    }

    /**
     * User functions handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ USER_FUNCTION(pos: number) {
        let __function: Function;
        const fun: Function = this.functionsList.get(this.tokensList.get(pos).tokenId);
        if (fun.getRecursiveMode() === true){
            __function = /* clone */((o: any) => { if (o.clone != undefined) { return (<any>o).clone(); } else { let clone = Object.create(o); for(let p in o) { if (o.hasOwnProperty(p)) clone[p] = o[p]; } return clone; } })(fun);
            __function.functionExpression.recursionCallsCounter = this.recursionCallsCounter;
        } else __function = fun;
        __function.functionExpression.UDFVariadicParamsAtRunTime = this.getNumbers(pos);
        const argsNumber: number = __function.getParametersNumber();
        if (__function.isVariadic === false)for(let argIdx: number = 0; argIdx < argsNumber; argIdx++) {__function.setArgumentValue(argIdx, this.tokensList.get(pos + argIdx + 1).tokenValue);}
        const functionVerboseMode: boolean = __function.getVerboseMode();
        if (this.verboseMode === true)__function.setVerboseMode();
        const tokensListSizeBefore: number = this.tokensList.size();
        const tokenBefore: Token = this.tokensList.get(pos);
        let value: number;
        try {
            value = __function.calculate$();
        } catch(soe) {
            value = javaemul.internal.DoubleHelper.NaN;
            this.errorMessage = soe.message;
        }
        const tokensListSizeAfter: number = this.tokensList.size();
        if (tokensListSizeBefore === tokensListSizeAfter){
            const tokenAfter: Token = this.tokensList.get(pos);
            if ((tokenBefore.tokenTypeId === tokenAfter.tokenTypeId) && (tokenBefore.tokenId === tokenAfter.tokenId)){
                this.setToNumber$int$double(pos, value);
                this.tokensList.get(pos).tokenLevel--;
                for(let argIdx: number = argsNumber; argIdx > 0; argIdx--) {this.tokensList.remove(pos + argIdx);}
            }
        }
        if (functionVerboseMode === false)__function.setSilentMode();
    }

    /**
     * User constants handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ USER_CONSTANT(pos: number) {
        const constant: Constant = this.constantsList.get(this.tokensList.get(pos).tokenId);
        this.setToNumber$int$double(pos, constant.getConstantValue());
    }

    /**
     * Recursive arguments handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ RECURSIVE_ARGUMENT(pos: number) {
        const index: number = this.tokensList.get(pos + 1).tokenValue;
        const argument: RecursiveArgument = <RecursiveArgument>this.argumentsList.get(this.tokensList.get(pos).tokenId);
        const argumentVerboseMode: boolean = argument.getVerboseMode();
        if (this.verboseMode === true)argument.setVerboseMode();
        const result: number = argument.getArgumentValue$double(index);
        this.f1SetDecreaseRemove$int$double(pos, result);
        if (argumentVerboseMode === false)argument.setSilentMode();
    }

    /**
     * Constants handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CONSTANT(pos: number) {
        let constValue: number = javaemul.internal.DoubleHelper.NaN;
        switch((this.tokensList.get(pos).tokenId)) {
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
            constValue = PhysicalConstants.LIGHT_SPEED_$LI$();
            break;
        case ConstantValue.GRAVITATIONAL_CONSTANT_ID:
            constValue = PhysicalConstants.GRAVITATIONAL_CONSTANT_$LI$();
            break;
        case ConstantValue.GRAVIT_ACC_EARTH_ID:
            constValue = PhysicalConstants.GRAVIT_ACC_EARTH_$LI$();
            break;
        case ConstantValue.PLANCK_CONSTANT_ID:
            constValue = PhysicalConstants.PLANCK_CONSTANT_$LI$();
            break;
        case ConstantValue.PLANCK_CONSTANT_REDUCED_ID:
            constValue = PhysicalConstants.PLANCK_CONSTANT_REDUCED_$LI$();
            break;
        case ConstantValue.PLANCK_LENGTH_ID:
            constValue = PhysicalConstants.PLANCK_LENGTH_$LI$();
            break;
        case ConstantValue.PLANCK_MASS_ID:
            constValue = PhysicalConstants.PLANCK_MASS_$LI$();
            break;
        case ConstantValue.PLANCK_TIME_ID:
            constValue = PhysicalConstants.PLANCK_TIME_$LI$();
            break;
        case ConstantValue.LIGHT_YEAR_ID:
            constValue = AstronomicalConstants.LIGHT_YEAR_$LI$();
            break;
        case ConstantValue.ASTRONOMICAL_UNIT_ID:
            constValue = AstronomicalConstants.ASTRONOMICAL_UNIT_$LI$();
            break;
        case ConstantValue.PARSEC_ID:
            constValue = AstronomicalConstants.PARSEC_$LI$();
            break;
        case ConstantValue.KILOPARSEC_ID:
            constValue = AstronomicalConstants.KILOPARSEC_$LI$();
            break;
        case ConstantValue.EARTH_RADIUS_EQUATORIAL_ID:
            constValue = AstronomicalConstants.EARTH_RADIUS_EQUATORIAL_$LI$();
            break;
        case ConstantValue.EARTH_RADIUS_POLAR_ID:
            constValue = AstronomicalConstants.EARTH_RADIUS_POLAR_$LI$();
            break;
        case ConstantValue.EARTH_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.EARTH_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.EARTH_MASS_ID:
            constValue = AstronomicalConstants.EARTH_MASS_$LI$();
            break;
        case ConstantValue.EARTH_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.EARTH_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.MOON_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.MOON_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.MOON_MASS_ID:
            constValue = AstronomicalConstants.MOON_MASS_$LI$();
            break;
        case ConstantValue.MONN_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.MONN_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.SOLAR_RADIUS_ID:
            constValue = AstronomicalConstants.SOLAR_RADIUS_$LI$();
            break;
        case ConstantValue.SOLAR_MASS_ID:
            constValue = AstronomicalConstants.SOLAR_MASS_$LI$();
            break;
        case ConstantValue.MERCURY_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.MERCURY_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.MERCURY_MASS_ID:
            constValue = AstronomicalConstants.MERCURY_MASS_$LI$();
            break;
        case ConstantValue.MERCURY_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.MERCURY_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.VENUS_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.VENUS_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.VENUS_MASS_ID:
            constValue = AstronomicalConstants.VENUS_MASS_$LI$();
            break;
        case ConstantValue.VENUS_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.VENUS_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.MARS_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.MARS_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.MARS_MASS_ID:
            constValue = AstronomicalConstants.MARS_MASS_$LI$();
            break;
        case ConstantValue.MARS_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.MARS_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.JUPITER_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.JUPITER_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.JUPITER_MASS_ID:
            constValue = AstronomicalConstants.JUPITER_MASS_$LI$();
            break;
        case ConstantValue.JUPITER_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.JUPITER_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.SATURN_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.SATURN_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.SATURN_MASS_ID:
            constValue = AstronomicalConstants.SATURN_MASS_$LI$();
            break;
        case ConstantValue.SATURN_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.SATURN_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.URANUS_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.URANUS_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.URANUS_MASS_ID:
            constValue = AstronomicalConstants.URANUS_MASS_$LI$();
            break;
        case ConstantValue.URANUS_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.URANUS_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.NEPTUNE_RADIUS_MEAN_ID:
            constValue = AstronomicalConstants.NEPTUNE_RADIUS_MEAN_$LI$();
            break;
        case ConstantValue.NEPTUNE_MASS_ID:
            constValue = AstronomicalConstants.NEPTUNE_MASS_$LI$();
            break;
        case ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_ID:
            constValue = AstronomicalConstants.NEPTUNE_SEMI_MAJOR_AXIS_$LI$();
            break;
        case ConstantValue.TRUE_ID:
            constValue = BooleanAlgebra.TRUE;
            break;
        case ConstantValue.FALSE_ID:
            constValue = BooleanAlgebra.FALSE;
            break;
        case ConstantValue.NAN_ID:
            constValue = MathConstants.NOT_A_NUMBER_$LI$();
            break;
        case ConstantValue.NPAR_ID:
            constValue = this.UDFVariadicParamsAtRunTime.size();
            break;
        }
        this.setToNumber$int$double(pos, constValue);
    }

    /**
     * Constants handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ UNIT(pos: number) {
        let unitValue: number = javaemul.internal.DoubleHelper.NaN;
        switch((this.tokensList.get(pos).tokenId)) {
        case Unit.PERC_ID:
            unitValue = Units.PERC;
            break;
        case Unit.PROMIL_ID:
            unitValue = Units.PROMIL;
            break;
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
        case Unit.METRE_ID:
            unitValue = Units.METRE;
            break;
        case Unit.KILOMETRE_ID:
            unitValue = Units.KILOMETRE_$LI$();
            break;
        case Unit.CENTIMETRE_ID:
            unitValue = Units.CENTIMETRE_$LI$();
            break;
        case Unit.MILLIMETRE_ID:
            unitValue = Units.MILLIMETRE_$LI$();
            break;
        case Unit.INCH_ID:
            unitValue = Units.INCH_$LI$();
            break;
        case Unit.YARD_ID:
            unitValue = Units.YARD_$LI$();
            break;
        case Unit.FEET_ID:
            unitValue = Units.FEET_$LI$();
            break;
        case Unit.MILE_ID:
            unitValue = Units.MILE_$LI$();
            break;
        case Unit.NAUTICAL_MILE_ID:
            unitValue = Units.NAUTICAL_MILE_$LI$();
            break;
        case Unit.METRE2_ID:
            unitValue = Units.METRE2_$LI$();
            break;
        case Unit.CENTIMETRE2_ID:
            unitValue = Units.CENTIMETRE2_$LI$();
            break;
        case Unit.MILLIMETRE2_ID:
            unitValue = Units.MILLIMETRE2_$LI$();
            break;
        case Unit.ARE_ID:
            unitValue = Units.ARE_$LI$();
            break;
        case Unit.HECTARE_ID:
            unitValue = Units.HECTARE_$LI$();
            break;
        case Unit.ACRE_ID:
            unitValue = Units.ACRE_$LI$();
            break;
        case Unit.KILOMETRE2_ID:
            unitValue = Units.KILOMETRE2_$LI$();
            break;
        case Unit.MILLIMETRE3_ID:
            unitValue = Units.MILLIMETRE3_$LI$();
            break;
        case Unit.CENTIMETRE3_ID:
            unitValue = Units.CENTIMETRE3_$LI$();
            break;
        case Unit.METRE3_ID:
            unitValue = Units.METRE3_$LI$();
            break;
        case Unit.KILOMETRE3_ID:
            unitValue = Units.KILOMETRE3_$LI$();
            break;
        case Unit.MILLILITRE_ID:
            unitValue = Units.MILLILITRE_$LI$();
            break;
        case Unit.LITRE_ID:
            unitValue = Units.LITRE_$LI$();
            break;
        case Unit.GALLON_ID:
            unitValue = Units.GALLON_$LI$();
            break;
        case Unit.PINT_ID:
            unitValue = Units.PINT_$LI$();
            break;
        case Unit.SECOND_ID:
            unitValue = Units.SECOND;
            break;
        case Unit.MILLISECOND_ID:
            unitValue = Units.MILLISECOND_$LI$();
            break;
        case Unit.MINUTE_ID:
            unitValue = Units.MINUTE_$LI$();
            break;
        case Unit.HOUR_ID:
            unitValue = Units.HOUR_$LI$();
            break;
        case Unit.DAY_ID:
            unitValue = Units.DAY_$LI$();
            break;
        case Unit.WEEK_ID:
            unitValue = Units.WEEK_$LI$();
            break;
        case Unit.JULIAN_YEAR_ID:
            unitValue = Units.JULIAN_YEAR_$LI$();
            break;
        case Unit.KILOGRAM_ID:
            unitValue = Units.KILOGRAM;
            break;
        case Unit.GRAM_ID:
            unitValue = Units.GRAM_$LI$();
            break;
        case Unit.MILLIGRAM_ID:
            unitValue = Units.MILLIGRAM_$LI$();
            break;
        case Unit.DECAGRAM_ID:
            unitValue = Units.DECAGRAM_$LI$();
            break;
        case Unit.TONNE_ID:
            unitValue = Units.TONNE_$LI$();
            break;
        case Unit.OUNCE_ID:
            unitValue = Units.OUNCE_$LI$();
            break;
        case Unit.POUND_ID:
            unitValue = Units.POUND_$LI$();
            break;
        case Unit.BIT_ID:
            unitValue = Units.BIT;
            break;
        case Unit.KILOBIT_ID:
            unitValue = Units.KILOBIT_$LI$();
            break;
        case Unit.MEGABIT_ID:
            unitValue = Units.MEGABIT_$LI$();
            break;
        case Unit.GIGABIT_ID:
            unitValue = Units.GIGABIT_$LI$();
            break;
        case Unit.TERABIT_ID:
            unitValue = Units.TERABIT_$LI$();
            break;
        case Unit.PETABIT_ID:
            unitValue = Units.PETABIT_$LI$();
            break;
        case Unit.EXABIT_ID:
            unitValue = Units.EXABIT_$LI$();
            break;
        case Unit.ZETTABIT_ID:
            unitValue = Units.ZETTABIT_$LI$();
            break;
        case Unit.YOTTABIT_ID:
            unitValue = Units.YOTTABIT_$LI$();
            break;
        case Unit.BYTE_ID:
            unitValue = Units.BYTE_$LI$();
            break;
        case Unit.KILOBYTE_ID:
            unitValue = Units.KILOBYTE_$LI$();
            break;
        case Unit.MEGABYTE_ID:
            unitValue = Units.MEGABYTE_$LI$();
            break;
        case Unit.GIGABYTE_ID:
            unitValue = Units.GIGABYTE_$LI$();
            break;
        case Unit.TERABYTE_ID:
            unitValue = Units.TERABYTE_$LI$();
            break;
        case Unit.PETABYTE_ID:
            unitValue = Units.PETABYTE_$LI$();
            break;
        case Unit.EXABYTE_ID:
            unitValue = Units.EXABYTE_$LI$();
            break;
        case Unit.ZETTABYTE_ID:
            unitValue = Units.ZETTABYTE_$LI$();
            break;
        case Unit.YOTTABYTE_ID:
            unitValue = Units.YOTTABYTE_$LI$();
            break;
        case Unit.JOULE_ID:
            unitValue = Units.JOULE_$LI$();
            break;
        case Unit.ELECTRONO_VOLT_ID:
            unitValue = Units.ELECTRONO_VOLT_$LI$();
            break;
        case Unit.KILO_ELECTRONO_VOLT_ID:
            unitValue = Units.KILO_ELECTRONO_VOLT_$LI$();
            break;
        case Unit.MEGA_ELECTRONO_VOLT_ID:
            unitValue = Units.MEGA_ELECTRONO_VOLT_$LI$();
            break;
        case Unit.GIGA_ELECTRONO_VOLT_ID:
            unitValue = Units.GIGA_ELECTRONO_VOLT_$LI$();
            break;
        case Unit.TERA_ELECTRONO_VOLT_ID:
            unitValue = Units.TERA_ELECTRONO_VOLT_$LI$();
            break;
        case Unit.METRE_PER_SECOND_ID:
            unitValue = Units.METRE_PER_SECOND_$LI$();
            break;
        case Unit.KILOMETRE_PER_HOUR_ID:
            unitValue = Units.KILOMETRE_PER_HOUR_$LI$();
            break;
        case Unit.MILE_PER_HOUR_ID:
            unitValue = Units.MILE_PER_HOUR_$LI$();
            break;
        case Unit.KNOT_ID:
            unitValue = Units.KNOT_$LI$();
            break;
        case Unit.METRE_PER_SECOND2_ID:
            unitValue = Units.METRE_PER_SECOND2_$LI$();
            break;
        case Unit.KILOMETRE_PER_HOUR2_ID:
            unitValue = Units.KILOMETRE_PER_HOUR2_$LI$();
            break;
        case Unit.MILE_PER_HOUR2_ID:
            unitValue = Units.MILE_PER_HOUR2_$LI$();
            break;
        case Unit.RADIAN_ARC_ID:
            unitValue = Units.RADIAN_ARC;
            break;
        case Unit.DEGREE_ARC_ID:
            unitValue = Units.DEGREE_ARC_$LI$();
            break;
        case Unit.MINUTE_ARC_ID:
            unitValue = Units.MINUTE_ARC_$LI$();
            break;
        case Unit.SECOND_ARC_ID:
            unitValue = Units.SECOND_ARC_$LI$();
            break;
        }
        this.setToNumber$int$double(pos, unitValue);
    }

    /**
     * Random Variables handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ RANDOM_VARIABLE(pos: number) {
        let rndVar: number = javaemul.internal.DoubleHelper.NaN;
        switch((this.tokensList.get(pos).tokenId)) {
        case RandomVariable.UNIFORM_ID:
            rndVar = ProbabilityDistributions.rndUniformContinuous$java_util_Random(ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT_ID:
            rndVar = ProbabilityDistributions.rndInteger$java_util_Random(ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT1_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-10, 10, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT2_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-100, 100, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT3_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-1000, 1000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT4_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-10000, 10000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT5_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-100000, 100000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT6_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-1000000, 1000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT7_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-10000000, 10000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT8_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-100000000, 100000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.INT9_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(-1000000000, 1000000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 2147483646, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_1_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 10, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_2_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 100, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_3_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 1000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_4_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 10000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_5_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 100000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_6_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 1000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_7_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 10000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_8_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 100000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT0_9_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(0, 1000000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 2147483646, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_1_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 10, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_2_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 100, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_3_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 1000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_4_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 10000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_5_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 100000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_6_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 1000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_7_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 10000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_8_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 100000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NAT1_9_ID:
            rndVar = ProbabilityDistributions.rndInteger$int$int$java_util_Random(1, 1000000000, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        case RandomVariable.NOR_ID:
            rndVar = ProbabilityDistributions.rndNormal$double$double$java_util_Random(0.0, 1.0, ProbabilityDistributions.randomGenerator_$LI$());
            break;
        }
        this.setToNumber$int$double(pos, rndVar);
    }

    /**
     * Gets token value
     * @param      {number} tokenIndex          the token index
     * 
     * @return     {number} the token value
     * @private
     */
    /*private*/ getTokenValue(tokenIndex: number): number {
        return this.tokensList.get(tokenIndex).tokenValue;
    }

    /**
     * Tetration handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ TETRATION(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const n: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double$boolean(pos, MathFunctions.tetration(a, n), true);
    }

    /**
     * Power handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ POWER(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double$boolean(pos, MathFunctions.power(a, b), true);
    }

    /**
     * Modulo handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MODULO(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, MathFunctions.mod(a, b));
    }

    /**
     * Division handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ DIVIDE(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        if (this.disableRounding){
            let result: number = javaemul.internal.DoubleHelper.NaN;
            if (b !== 0)result = a / b;
            this.opSetDecreaseRemove$int$double$boolean(pos, result, true);
        } else this.opSetDecreaseRemove$int$double$boolean(pos, MathFunctions.div(a, b), true);
    }

    /**
     * Multiplication handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MULTIPLY(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        if (this.disableRounding)this.opSetDecreaseRemove$int$double$boolean(pos, a * b, true); else this.opSetDecreaseRemove$int$double$boolean(pos, MathFunctions.multiply(a, b), true);
    }

    /**
     * Addition handling.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ PLUS(pos: number) {
        const b: Token = this.tokensList.get(pos + 1);
        if (pos > 0){
            const a: Token = this.tokensList.get(pos - 1);
            if ((a.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID) && (b.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID))if (this.disableRounding)this.opSetDecreaseRemove$int$double$boolean(pos, a.tokenValue + b.tokenValue, true); else this.opSetDecreaseRemove$int$double$boolean(pos, MathFunctions.plus(a.tokenValue, b.tokenValue), true); else if (b.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID){
                this.setToNumber$int$double(pos, b.tokenValue);
                this.tokensList.remove(pos + 1);
            }
        } else if (b.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID){
            this.setToNumber$int$double(pos, b.tokenValue);
            this.tokensList.remove(pos + 1);
        }
    }

    /**
     * Subtraction handling
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MINUS(pos: number) {
        const b: Token = this.tokensList.get(pos + 1);
        if (pos > 0){
            const a: Token = this.tokensList.get(pos - 1);
            if ((a.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID) && (b.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID))if (this.disableRounding)this.opSetDecreaseRemove$int$double$boolean(pos, a.tokenValue - b.tokenValue, true); else this.opSetDecreaseRemove$int$double$boolean(pos, MathFunctions.minus(a.tokenValue, b.tokenValue), true); else if (b.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID){
                this.setToNumber$int$double(pos, -b.tokenValue);
                this.tokensList.remove(pos + 1);
            }
        } else if (b.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID){
            this.setToNumber$int$double(pos, -b.tokenValue);
            this.tokensList.remove(pos + 1);
        }
    }

    /**
     * Logical AND
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ AND(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.and(a, b));
    }

    /**
     * Logical OR
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ OR(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.or(a, b));
    }

    /**
     * Logical NAND
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NAND(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.nand(a, b));
    }

    /**
     * Logical NOR
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NOR(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.nor(a, b));
    }

    /**
     * Logical XOR
     * 
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ XOR(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.xor(a, b));
    }

    /**
     * Logical IMP
     * 
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ IMP(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.imp(a, b));
    }

    /**
     * Logical CIMP
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CIMP(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.cimp(a, b));
    }

    /**
     * Logical NIMP
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NIMP(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.nimp(a, b));
    }

    /**
     * Logical CNIMP
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CNIMP(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.cnimp(a, b));
    }

    /**
     * Logical EQV
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ EQV(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BooleanAlgebra.eqv(a, b));
    }

    /**
     * Logical negation
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NEG(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.setToNumber$int$double(pos, BooleanAlgebra.not(a));
        this.tokensList.remove(pos + 1);
    }

    /**
     * Equality relation.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ EQ(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BinaryRelations.eq(a, b));
    }

    /**
     * Not equals.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NEQ(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BinaryRelations.neq(a, b));
    }

    /**
     * Lower than.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LT(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BinaryRelations.lt(a, b));
    }

    /**
     * Greater than.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ GT(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BinaryRelations.gt(a, b));
    }

    /**
     * Lower or equal.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LEQ(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BinaryRelations.leq(a, b));
    }

    /**
     * Greater or equal
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ GEQ(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        const b: number = this.getTokenValue(pos + 1);
        this.opSetDecreaseRemove$int$double(pos, BinaryRelations.geq(a, b));
    }

    /**
     * Bitwise COMPL
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BITWISE_COMPL(pos: number) {
        const a: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos + 1));
        this.setToNumber$int$double(pos, ~a);
        this.tokensList.remove(pos + 1);
    }

    /**
     * Bitwise AND
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BITWISE_AND(pos: number) {
        const a: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos - 1));
        const b: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos + 1));
        this.opSetDecreaseRemove$int$double(pos, a & b);
    }

    /**
     * Bitwise OR
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BITWISE_OR(pos: number) {
        const a: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos - 1));
        const b: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos + 1));
        this.opSetDecreaseRemove$int$double(pos, a | b);
    }

    /**
     * Bitwise XOR
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BITWISE_XOR(pos: number) {
        const a: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos - 1));
        const b: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos + 1));
        this.opSetDecreaseRemove$int$double(pos, a ^ b);
    }

    /**
     * Bitwise LEFT SHIFT
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BITWISE_LEFT_SHIFT(pos: number) {
        const a: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos - 1));
        const b: number = (<number>this.getTokenValue(pos + 1)|0);
        this.opSetDecreaseRemove$int$double(pos, a << b);
    }

    /**
     * Bitwise RIGHT SHIFT
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BITWISE_RIGHT_SHIFT(pos: number) {
        const a: number = (n => n<0?Math.ceil(n):Math.floor(n))(<number>this.getTokenValue(pos - 1));
        const b: number = (<number>this.getTokenValue(pos + 1)|0);
        this.opSetDecreaseRemove$int$double(pos, a >> b);
    }

    /**
     * Sine function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SIN(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.sin(a));
    }

    /**
     * Cosine / Trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ COS(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.cos(a));
    }

    /**
     * Tangent / Trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ TAN(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.tan(a));
    }

    /**
     * Cotangent / Trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CTAN(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.ctan(a));
    }

    /**
     * Secant / Trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SEC(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.sec(a));
    }

    /**
     * Cosecant / Trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ COSEC(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.cosec(a));
    }

    /**
     * Arcus sine / Inverse trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ASIN(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.asin(a));
    }

    /**
     * Arcus cosine / Inverse trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ACOS(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.acos(a));
    }

    /**
     * Arcus tangent / Inverse trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ATAN(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.atan(a));
    }

    /**
     * Arcus cotangent / Inverse trigonometric functions
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ACTAN(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.actan(a));
    }

    /**
     * Natural logarithm (base e)
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LN(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.ln(a));
    }

    /**
     * Logarithm - base 2
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LOG2(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.log2(a));
    }

    /**
     * Logarithm - base 10
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LOG10(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.log10(a));
    }

    /**
     * Converts degrees to radius
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ RAD(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.rad(a));
    }

    /**
     * Exponential function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ EXP(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.exp(a));
    }

    /**
     * Square root
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SQRT(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.sqrt(a));
    }

    /**
     * Hyperbolic sine
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SINH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.sinh(a));
    }

    /**
     * Hyperbolic cosine
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ COSH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.cosh(a));
    }

    /**
     * Hyperbolic tangent
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ TANH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.tanh(a));
    }

    /**
     * Hyperbolic cotangent
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ COTH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.coth(a));
    }

    /**
     * Hyperbolic secant
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SECH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.sech(a));
    }

    /**
     * Hyperbolic cosecant
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CSCH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.csch(a));
    }

    /**
     * Converts radians to degrees
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ DEG(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.deg(a));
    }

    /**
     * Absolut value
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ABS(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.abs(a));
    }

    /**
     * Signum function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SGN(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.sgn(a));
    }

    /**
     * Floor function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ FLOOR(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.floor(a));
    }

    /**
     * Ceil function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CEIL(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.ceil(a));
    }

    /**
     * Arcus hyperbolic sine
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARSINH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.arsinh(a));
    }

    /**
     * Arcus hyperbolic cosine
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARCOSH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.arcosh(a));
    }

    /**
     * Arcus hyperbolic tangent
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARTANH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.artanh(a));
    }

    /**
     * Arcus hyperbolic cotangent
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARCOTH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.arcoth(a));
    }

    /**
     * Arcus hyperbolic secant
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARSECH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.arsech(a));
    }

    /**
     * Arcus hyperbolic cosecant
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARCSCH(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.arcsch(a));
    }

    /**
     * SA / sinc normalized
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SA(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.sa(a));
    }

    /**
     * Sinc unnormalized
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SINC(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.sinc(a));
    }

    /**
     * Bell numbers
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BELL_NUMBER(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.bellNumber$double(n));
    }

    /**
     * Lucas numbers
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LUCAS_NUMBER(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.lucasNumber$double(n));
    }

    /**
     * Fibonacci numbers
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ FIBONACCI_NUMBER(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.fibonacciNumber$double(n));
    }

    /**
     * Harmonic numbers
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ HARMONIC_NUMBER(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.harmonicNumber$double(n));
    }

    /**
     * Prime test
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ IS_PRIME(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, NumberTheory.primeTest$double(n));
    }

    /**
     * Prime counting
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ PRIME_COUNT(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, NumberTheory.primeCount$double(n));
    }

    /**
     * Exponential integral function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ EXP_INT(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.exponentialIntegralEi(x));
    }

    /**
     * Logarithmic exponential integral function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LOG_INT(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.logarithmicIntegralLi(x));
    }

    /**
     * Offset logarithmic exponential integral function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ OFF_LOG_INT(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.offsetLogarithmicIntegralLi(x));
    }

    /**
     * Factorilal function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ FACT(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        this.setToNumber$int$double(pos, MathFunctions.factorial$double(a));
        this.tokensList.remove(pos - 1);
    }

    /**
     * Percentage
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ PERC(pos: number) {
        const a: number = this.getTokenValue(pos - 1);
        this.setToNumber$int$double(pos, a * Units.PERC);
        this.tokensList.remove(pos - 1);
    }

    /**
     * Negation
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NOT(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, BooleanAlgebra.not(a));
    }

    /**
     * Gauss error function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ GAUSS_ERF(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.erf(x));
    }

    /**
     * Gauss complementary error function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ GAUSS_ERFC(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.erfc(x));
    }

    /**
     * Inverse of Gauss error function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ GAUSS_ERF_INV(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.erfInv(x));
    }

    /**
     * Inverse of Gauss complementary error function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ GAUSS_ERFC_INV(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.erfcInv(x));
    }

    /**
     * Unit in The Last Place
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ULP(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.ulp(x));
    }

    /**
     * Is Not-a-Number
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ISNAN(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        if (/* isNaN */isNaN(x))this.f1SetDecreaseRemove$int$double(pos, BooleanAlgebra.TRUE); else this.f1SetDecreaseRemove$int$double(pos, BooleanAlgebra.FALSE);
    }

    /**
     * Number of digits in base 10
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NDIG10(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, NumberTheory.numberOfDigits$double(x));
    }

    /**
     * Number of prime factors - distinct
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NFACT(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, NumberTheory.numberOfPrimeFactors(n));
    }

    /**
     * Arcuus secant
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARCSEC(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.asec(x));
    }

    /**
     * Arcuus cosecant
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARCCSC(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, MathFunctions.acosec(x));
    }

    /**
     * Gamma special function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ GAMMA(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.gamma(x));
    }

    /**
     * Lambert-W special function, principal branch 0
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LAMBERT_W0(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.lambertW(x, 0));
    }

    /**
     * Lambert-W special function, branch = -1
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LAMBERT_W1(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.lambertW(x, -1));
    }

    /**
     * Signum of Gamma special function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SGN_GAMMA(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.sgnGamma(x));
    }

    /**
     * Log Gamma special function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LOG_GAMMA(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.logGamma(x));
    }

    /**
     * Digamma special function
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ DI_GAMMA(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        this.f1SetDecreaseRemove$int$double(pos, SpecialFunctions.diGamma(x));
    }

    /**
     * User Defined Variadic function param value
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ UDF_PARAM(pos: number) {
        let value: number = javaemul.internal.DoubleHelper.NaN;
        const x: number = this.getTokenValue(pos + 1);
        const npar: number = this.UDFVariadicParamsAtRunTime.size();
        if ((/* isNaN */isNaN(x) === false) && (x !== javaemul.internal.DoubleHelper.POSITIVE_INFINITY) && (x !== javaemul.internal.DoubleHelper.NEGATIVE_INFINITY)){
            const i: number = (<number>MathFunctions.integerPart(x)|0);
            if (i === 0){
                value = npar;
            } else if (Math.abs(i) <= npar){
                if (i >= 1){
                    value = this.UDFVariadicParamsAtRunTime.get(i - 1);
                } else if (i <= -1){
                    value = this.UDFVariadicParamsAtRunTime.get(npar + i);
                }
            }
        }
        this.f1SetDecreaseRemove$int$double(pos, value);
    }

    /**
     * Logarithm
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LOG(pos: number) {
        const b: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.log(a, b));
    }

    /**
     * Creates ArraList<Double> containing function parameters
     * 
     * @param      {number} pos                 the function position
     * 
     * @return     {*} List of function parameters.
     * @private
     */
    /*private*/ getNumbers(pos: number): java.util.List<number> {
        const numbers: java.util.List<number> = <any>(new java.util.ArrayList<number>());
        let pn: number = pos;
        const lastIndex: number = this.tokensList.size() - 1;
        let isNumber: boolean;
        let end: boolean = false;
        do {{
            pn++;
            const t: Token = this.tokensList.get(pn);
            isNumber = false;
            if ((t.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID) && (t.tokenId === ParserSymbol.NUMBER_ID)){
                isNumber = true;
                numbers.add(t.tokenValue);
            }
            if ((pn === lastIndex) || (!isNumber))end = true;
        }} while((end === false));
        return numbers;
    }

    /**
     * Modulo
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MOD(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        const b: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.mod(a, b));
    }

    /**
     * Binomial Coefficient
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BINOM_COEFF(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        const k: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.binomCoeff$double$double(n, k));
    }

    /**
     * Number of permutations
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ PERMUTATIONS(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        const k: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.numberOfPermutations$double$double(n, k));
    }

    /**
     * Beta special function
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BETA(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const y: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, SpecialFunctions.beta(x, y));
    }

    /**
     * Log beta special function
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LOG_BETA(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const y: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, SpecialFunctions.logBeta(x, y));
    }

    /**
     * Bernoulli Number
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BERNOULLI_NUMBER(pos: number) {
        const m: number = this.getTokenValue(pos + 1);
        const n: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.bernoulliNumber$double$double(m, n));
    }

    /**
     * Stirling number of the first kind
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ STIRLING1_NUMBER(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        const k: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.Stirling1Number$double$double(n, k));
    }

    /**
     * Stirling number of the second kind.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ STIRLING2_NUMBER(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        const k: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.Stirling2Number$double$double(n, k));
    }

    /**
     * Worpitzky number.
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ WORPITZKY_NUMBER(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        const k: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.worpitzkyNumber$double$double(n, k));
    }

    /**
     * Euler number
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ EULER_NUMBER(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        const k: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.eulerNumber$double$double(n, k));
    }

    /**
     * Kronecker delta
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ KRONECKER_DELTA(pos: number) {
        const i: number = this.getTokenValue(pos + 1);
        const j: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.kroneckerDelta$double$double(i, j));
    }

    /**
     * Euler polynomial
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ EULER_POLYNOMIAL(pos: number) {
        const m: number = this.getTokenValue(pos + 1);
        const x: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.eulerPolynomial$double$double(m, x));
    }

    /**
     * Harmonic numbers
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ HARMONIC2_NUMBER(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const n: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.harmonicNumber$double$double(x, n));
    }

    /**
     * Decimal rounding
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ROUND(pos: number) {
        const value: number = this.getTokenValue(pos + 1);
        const places: number = (<number>this.getTokenValue(pos + 2)|0);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.round(value, places));
    }

    /**
     * Random number - Uniform Continuous distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ RND_VAR_UNIFORM_CONT(pos: number) {
        const a: number = this.getTokenValue(pos + 1);
        const b: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, ProbabilityDistributions.rndUniformContinuous$double$double$java_util_Random(a, b, ProbabilityDistributions.randomGenerator_$LI$()));
    }

    /**
     * Random number - Uniform Discrete distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ RND_VAR_UNIFORM_DISCR(pos: number) {
        const a: number = (<number>this.getTokenValue(pos + 1)|0);
        const b: number = (<number>this.getTokenValue(pos + 2)|0);
        this.f2SetDecreaseRemove$int$double(pos, ProbabilityDistributions.rndInteger$int$int$java_util_Random(a, b, ProbabilityDistributions.randomGenerator_$LI$()));
    }

    /**
     * Random number - Normal distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ RND_NORMAL(pos: number) {
        const mean: number = this.getTokenValue(pos + 1);
        const stddev: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, ProbabilityDistributions.rndNormal$double$double$java_util_Random(mean, stddev, ProbabilityDistributions.randomGenerator_$LI$()));
    }

    /**
     * Number of digits in given numeral system
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NDIG(pos: number) {
        const number: number = this.getTokenValue(pos + 1);
        const numeralSystemBase: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, NumberTheory.numberOfDigits$double$double(number, numeralSystemBase));
    }

    /**
     * Digit at position - base 10 numeral system
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ DIGIT10(pos: number) {
        const number: number = this.getTokenValue(pos + 1);
        const position: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, NumberTheory.digitAtPosition$double$double(number, position));
    }

    /**
     * Prime factor value
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ FACTVAL(pos: number) {
        const number: number = this.getTokenValue(pos + 1);
        const id: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, NumberTheory.primeFactorValue(number, id));
    }

    /**
     * Prime factor value exponent
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ FACTEXP(pos: number) {
        const number: number = this.getTokenValue(pos + 1);
        const id: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, NumberTheory.primeFactorExponent(number, id));
    }

    /**
     * Nth order root
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ROOT(pos: number) {
        const n: number = this.getTokenValue(pos + 1);
        const x: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, MathFunctions.root(n, x));
    }

    /**
     * Lower incomplete special Gamma function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ INC_GAMMA_LOWER(pos: number) {
        const s: number = this.getTokenValue(pos + 1);
        const x: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, SpecialFunctions.incompleteGammaLower(s, x));
    }

    /**
     * Upper incomplete special Gamma function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ INC_GAMMA_UPPER(pos: number) {
        const s: number = this.getTokenValue(pos + 1);
        const x: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, SpecialFunctions.incompleteGammaUpper(s, x));
    }

    /**
     * Lower regularized special Gamma function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ REG_GAMMA_LOWER(pos: number) {
        const s: number = this.getTokenValue(pos + 1);
        const x: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, SpecialFunctions.regularizedGammaLowerP(s, x));
    }

    /**
     * Lower regularized special Gamma function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ REG_GAMMA_UPPER(pos: number) {
        const s: number = this.getTokenValue(pos + 1);
        const x: number = this.getTokenValue(pos + 2);
        this.f2SetDecreaseRemove$int$double(pos, SpecialFunctions.regularizedGammaUpperQ(s, x));
    }

    /**
     * IF function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ IF_CONDITION(pos: number) {
        const ifParams: java.util.List<FunctionParameter> = this.getFunctionParameters(pos, this.tokensList);
        const ifParam: FunctionParameter = ifParams.get(0);
        const ifExp: Expression = new Expression(ifParam.paramStr, ifParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.KEEP_ROUNDING_SETTINGS, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        if (this.verboseMode === true)ifExp.setVerboseMode();
        this.ifSetRemove$int$double(pos, ifExp.calculate());
    }

    /**
     * IFF function
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ IFF(pos: number) {
        const iffParams: java.util.List<FunctionParameter> = this.getFunctionParameters(pos, this.tokensList);
        let iffParam: FunctionParameter = iffParams.get(0);
        const parametersNumber: number = iffParams.size();
        let trueParamNumber: number;
        let paramNumber: number;
        paramNumber = 1;
        let iffExp: Expression;
        let iffValue: number = 0;
        let iffCon: boolean = true;
        do {{
            iffExp = new Expression(iffParam.paramStr, iffParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.KEEP_ROUNDING_SETTINGS, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            if (this.verboseMode === true)iffExp.setVerboseMode();
            iffCon = true;
            iffValue = iffExp.calculate();
            if ((iffValue === 0) || (/* isNaN */isNaN(iffValue))){
                paramNumber += 2;
                iffCon = false;
                if (paramNumber < parametersNumber)iffParam = iffParams.get(paramNumber - 1);
            }
        }} while(((!iffCon) && (paramNumber < parametersNumber)));
        let from: number;
        let to: number;
        let p: number;
        if (iffCon){
            trueParamNumber = paramNumber + 1;
            from = pos + 1;
            to = iffParams.get(parametersNumber - 1).toIndex + 1;
            this.tokensList.get(from).tokenLevel--;
            this.tokensList.get(to).tokenLevel--;
            if (trueParamNumber < parametersNumber){
                to = iffParams.get(parametersNumber - 1).toIndex;
                from = iffParams.get(trueParamNumber).fromIndex - 1;
                for(p = to; p >= from; p--) {this.tokensList.remove(p);}
            }
            from = iffParams.get(trueParamNumber - 1).fromIndex;
            to = iffParams.get(trueParamNumber - 1).toIndex;
            for(p = from; p <= to; p++) {this.tokensList.get(p).tokenLevel--;}
            to = from - 1;
            from = pos;
            for(p = to; p >= from; p--) {if (p !== pos + 1)this.tokensList.remove(p);;}
        } else {
            to = iffParams.get(parametersNumber - 1).toIndex + 1;
            from = pos + 1;
            for(p = to; p >= from; p--) {this.tokensList.remove(p);}
            this.setToNumber$int$double(pos, javaemul.internal.DoubleHelper.NaN);
            this.tokensList.get(pos).tokenLevel--;
        }
    }

    /**
     * IF
     * Sets tokens to number token
     * 
     * @param {number} pos token index (position)
     * @private
     */
    /*private*/ IF(pos: number) {
        const ifCondition: number = this.tokensList.get(pos + 1).tokenValue;
        const ifTrue: number = this.tokensList.get(pos + 2).tokenValue;
        const ifFalse: number = this.tokensList.get(pos + 3).tokenValue;
        let result: number = ifFalse;
        if (ifCondition !== 0)result = ifTrue;
        if (ifCondition === javaemul.internal.DoubleHelper.NaN)result = javaemul.internal.DoubleHelper.NaN;
        this.f3SetDecreaseRemove$int$double(pos, result);
    }

    /**
     * Characteristic function (a,b)
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CHI(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, MathFunctions.chi(x, a, b));
    }

    /**
     * Characteristic function [a,b]
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CHI_LR(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, MathFunctions.chi_LR(x, a, b));
    }

    /**
     * Characteristic function [a,b)
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CHI_L(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, MathFunctions.chi_L(x, a, b));
    }

    /**
     * Characteristic function (a,b]
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CHI_R(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, MathFunctions.chi_R(x, a, b));
    }

    /**
     * Probability Distribution Function - Uniform Continuous distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ PDF_UNIFORM_CONT(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, ProbabilityDistributions.pdfUniformContinuous(x, a, b));
    }

    /**
     * Cumulative Distribution Function - Uniform Continuous distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CDF_UNIFORM_CONT(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, ProbabilityDistributions.cdfUniformContinuous(x, a, b));
    }

    /**
     * Quantile Function - Uniform Continuous distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ QNT_UNIFORM_CONT(pos: number) {
        const q: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, ProbabilityDistributions.qntUniformContinuous(q, a, b));
    }

    /**
     * Probability Distribution Function - Normal distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ PDF_NORMAL(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const mean: number = this.getTokenValue(pos + 2);
        const stddev: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, ProbabilityDistributions.pdfNormal(x, mean, stddev));
    }

    /**
     * Cumulative Distribution Function - Normal distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CDF_NORMAL(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const mean: number = this.getTokenValue(pos + 2);
        const stddev: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, ProbabilityDistributions.cdfNormal(x, mean, stddev));
    }

    /**
     * Quantile Function - Normal distribution
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ QNT_NORMAL(pos: number) {
        const q: number = this.getTokenValue(pos + 1);
        const mean: number = this.getTokenValue(pos + 2);
        const stddev: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, ProbabilityDistributions.qntNormal(q, mean, stddev));
    }

    /**
     * Digit at position - numeral system with given base
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ DIGIT(pos: number) {
        const number: number = this.getTokenValue(pos + 1);
        const position: number = this.getTokenValue(pos + 2);
        const numeralSystemBase: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, NumberTheory.digitAtPosition$double$double$double(number, position, numeralSystemBase));
    }

    /**
     * Incomplete beta special function
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ INC_BETA(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, SpecialFunctions.incompleteBeta(a, b, x));
    }

    /**
     * Regularized incomplete beta special function
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ REG_BETA(pos: number) {
        const x: number = this.getTokenValue(pos + 1);
        const a: number = this.getTokenValue(pos + 2);
        const b: number = this.getTokenValue(pos + 3);
        this.f3SetDecreaseRemove$int$double(pos, SpecialFunctions.regularizedBeta(a, b, x));
    }

    public updateMissingTokens$java_util_List$java_lang_String$int$int(tokens: java.util.List<Token>, keyWord: string, tokenId: number, tokenTypeId: number) {
        for(let index158=tokens.iterator();index158.hasNext();) {
            let t = index158.next();
            if ((t.tokenTypeId === ConstantValue.NaN) && (t.tokenStr === keyWord)){
                t.keyWord = keyWord;
                t.tokenId = tokenId;
                t.tokenTypeId = tokenTypeId;
            }
        }
    }

    /**
     * Updating missing tokens (i.e. indexes i sum operator). Used when creating
     * internal expressions based on the sublist of tokens.
     * 
     * 
     * @param      {*} tokens              the tokens list
     * @param      {string} keyWord             missing key word
     * @param      {number} tokenId             missing token id
     * @param      {number} tokenTypeId         missing token type id
     * @private
     */
    public updateMissingTokens(tokens?: any, keyWord?: any, tokenId?: any, tokenTypeId?: any) {
        if (((tokens != null && (tokens.constructor != null && tokens.constructor["__interfaces"] != null && tokens.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || tokens === null) && ((typeof keyWord === 'string') || keyWord === null) && ((typeof tokenId === 'number') || tokenId === null) && ((typeof tokenTypeId === 'number') || tokenTypeId === null)) {
            return <any>this.updateMissingTokens$java_util_List$java_lang_String$int$int(tokens, keyWord, tokenId, tokenTypeId);
        } else if (((tokens != null && tokens instanceof <any>ArgumentParameter) || tokens === null) && ((keyWord != null && keyWord instanceof <any>IterativeOperatorParameters) || keyWord === null) && tokenId === undefined && tokenTypeId === undefined) {
            return <any>this.updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(tokens, keyWord);
        } else throw new Error('invalid overload');
    }

    /*private*/ updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(index: ArgumentParameter, iterParams: IterativeOperatorParameters) {
        if (index.presence === ArgumentConstants.NOT_FOUND_$LI$()){
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(iterParams.indexParam.tokens, iterParams.indexParam.paramStr, index.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(iterParams.fromParam.tokens, iterParams.indexParam.paramStr, index.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(iterParams.toParam.tokens, iterParams.indexParam.paramStr, index.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(iterParams.funParam.tokens, iterParams.indexParam.paramStr, index.index, ArgumentConstants.TYPE_ID);
        }
    }

    /**
     * Evaluates ranges 'from', 'to', 'delta' for the iterative operator
     * 
     * @param {ArgumentParameter} index      Index parameter of the iterative operator
     * @param {IterativeOperatorParameters} iterParams     Parameters list of the iterative operator
     * @private
     */
    /*private*/ evalFromToDeltaParameters(index: ArgumentParameter, iterParams: IterativeOperatorParameters) {
        iterParams.fromExp = new Expression(iterParams.fromParam.paramStr, iterParams.fromParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.KEEP_ROUNDING_SETTINGS, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        iterParams.toExp = new Expression(iterParams.toParam.paramStr, iterParams.toParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.KEEP_ROUNDING_SETTINGS, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        iterParams.funExp = new Expression(iterParams.funParam.paramStr, iterParams.funParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        iterParams.deltaExp = null;
        if (this.verboseMode === true){
            iterParams.fromExp.setVerboseMode();
            iterParams.toExp.setVerboseMode();
            iterParams.funExp.setVerboseMode();
        }
        iterParams.from = iterParams.fromExp.calculate();
        iterParams.to = iterParams.toExp.calculate();
        iterParams.delta = 1.0;
        if (iterParams.to < iterParams.from)iterParams.delta = -1.0;
        if (iterParams.withDelta === true){
            iterParams.deltaExp = new Expression(iterParams.deltaParam.paramStr, iterParams.deltaParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            if (index.presence === ArgumentConstants.NOT_FOUND_$LI$()){
                this.updateMissingTokens$java_util_List$java_lang_String$int$int(iterParams.deltaParam.tokens, iterParams.indexParam.paramStr, index.index, ArgumentConstants.TYPE_ID);
            }
            if (this.verboseMode === true)iterParams.deltaExp.setVerboseMode();
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
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SUM(pos: number) {
        const iterParams: IterativeOperatorParameters = new IterativeOperatorParameters(this.getFunctionParameters(pos, this.tokensList));
        const index: ArgumentParameter = this.getParamArgument(iterParams.indexParam.paramStr);
        this.updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(index, iterParams);
        this.evalFromToDeltaParameters(index, iterParams);
        const sigma: number = NumberTheory.sigmaSummation(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
        this.clearParamArgument(index);
        this.calcSetDecreaseRemove$int$double$boolean(pos, sigma, true);
    }

    /**
     * Product operator (SIGMA by)
     * pord(i,m,n,f(i),b) --> prod f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ PROD(pos: number) {
        const iterParams: IterativeOperatorParameters = new IterativeOperatorParameters(this.getFunctionParameters(pos, this.tokensList));
        const index: ArgumentParameter = this.getParamArgument(iterParams.indexParam.paramStr);
        this.updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(index, iterParams);
        this.evalFromToDeltaParameters(index, iterParams);
        const product: number = NumberTheory.piProduct(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
        this.clearParamArgument(index);
        this.calcSetDecreaseRemove$int$double$boolean(pos, product, true);
    }

    /**
     * Minimum value - iterative operator
     * mini(i,m,n,f(i),b) --> min f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MIN(pos: number) {
        const iterParams: IterativeOperatorParameters = new IterativeOperatorParameters(this.getFunctionParameters(pos, this.tokensList));
        const index: ArgumentParameter = this.getParamArgument(iterParams.indexParam.paramStr);
        this.updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(index, iterParams);
        this.evalFromToDeltaParameters(index, iterParams);
        const min: number = NumberTheory.min$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
        this.clearParamArgument(index);
        this.calcSetDecreaseRemove$int$double(pos, min);
    }

    /**
     * Maximum value - iterative operator
     * maxi(i,m,n,f(i),b) --> max f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MAX(pos: number) {
        const iterParams: IterativeOperatorParameters = new IterativeOperatorParameters(this.getFunctionParameters(pos, this.tokensList));
        const index: ArgumentParameter = this.getParamArgument(iterParams.indexParam.paramStr);
        this.updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(index, iterParams);
        this.evalFromToDeltaParameters(index, iterParams);
        const max: number = NumberTheory.max$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
        this.clearParamArgument(index);
        this.calcSetDecreaseRemove$int$double(pos, max);
    }

    /**
     * Average function value - iterative operator
     * avg(i,m,n,f(i),b) --> avg f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ AVG(pos: number) {
        const iterParams: IterativeOperatorParameters = new IterativeOperatorParameters(this.getFunctionParameters(pos, this.tokensList));
        const index: ArgumentParameter = this.getParamArgument(iterParams.indexParam.paramStr);
        this.updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(index, iterParams);
        this.evalFromToDeltaParameters(index, iterParams);
        const avg: number = Statistics.avg$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
        this.clearParamArgument(index);
        this.calcSetDecreaseRemove$int$double$boolean(pos, avg, true);
    }

    /**
     * Variance from sample function values - iterative operator
     * vari(i,m,n,f(i),b) --> var f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ VAR(pos: number) {
        const iterParams: IterativeOperatorParameters = new IterativeOperatorParameters(this.getFunctionParameters(pos, this.tokensList));
        const index: ArgumentParameter = this.getParamArgument(iterParams.indexParam.paramStr);
        this.updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(index, iterParams);
        this.evalFromToDeltaParameters(index, iterParams);
        const __var: number = Statistics.var$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
        this.clearParamArgument(index);
        this.calcSetDecreaseRemove$int$double$boolean(pos, __var, true);
    }

    /**
     * Standard deviation from sample function values - iterative operator
     * stdi(i,m,n,f(i),b) --> std f(i) from i=m to i=n by delta
     * i - index (argument)
     * m, n - numbers or expressions
     * f(i) - function string
     * by delta
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ STD(pos: number) {
        const iterParams: IterativeOperatorParameters = new IterativeOperatorParameters(this.getFunctionParameters(pos, this.tokensList));
        const index: ArgumentParameter = this.getParamArgument(iterParams.indexParam.paramStr);
        this.updateMissingTokens$org_mariuszgromada_math_mxparser_ArgumentParameter$org_mariuszgromada_math_mxparser_IterativeOperatorParameters(index, iterParams);
        this.evalFromToDeltaParameters(index, iterParams);
        const std: number = Statistics.std$org_mariuszgromada_math_mxparser_Expression$org_mariuszgromada_math_mxparser_Argument$double$double$double(iterParams.funExp, index.argument, iterParams.from, iterParams.to, iterParams.delta);
        this.clearParamArgument(index);
        this.calcSetDecreaseRemove$int$double$boolean(pos, std, true);
    }

    /**
     * Function derivative
     * 
     * @param      {number} pos                 the token position
     * @param      {number} derivativeType      the type of derivative (LEFT, RIGHT, ...)
     * @private
     */
    /*private*/ DERIVATIVE(pos: number, derivativeType: number) {
        const derParams: java.util.List<FunctionParameter> = this.getFunctionParameters(pos, this.tokensList);
        const DEF_EPS: number = 1.0E-8;
        const DEF_MAX_STEPS: number = 20;
        const funParam: FunctionParameter = derParams.get(0);
        const xParam: FunctionParameter = derParams.get(1);
        const x: ArgumentParameter = this.getParamArgument(xParam.paramStr);
        if (x.presence === ArgumentConstants.NOT_FOUND_$LI$()){
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(xParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(funParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
        }
        const funExp: Expression = new Expression(funParam.paramStr, funParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        let x0: number = javaemul.internal.DoubleHelper.NaN;
        if ((derParams.size() === 2) || (derParams.size() === 4))x0 = x.argument.getArgumentValue();
        if ((derParams.size() === 3) || (derParams.size() === 5)){
            const x0Param: FunctionParameter = derParams.get(2);
            if (x.presence === ArgumentConstants.NOT_FOUND_$LI$())this.updateMissingTokens$java_util_List$java_lang_String$int$int(x0Param.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            const x0Expr: Expression = new Expression(x0Param.paramStr, x0Param.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            x0 = x0Expr.calculate();
        }
        let eps: number = DEF_EPS;
        let maxSteps: number = DEF_MAX_STEPS;
        if ((derParams.size() === 4) || (derParams.size() === 5)){
            let epsParam: FunctionParameter;
            let maxStepsParam: FunctionParameter;
            if (derParams.size() === 4){
                epsParam = derParams.get(2);
                maxStepsParam = derParams.get(3);
            } else {
                epsParam = derParams.get(3);
                maxStepsParam = derParams.get(4);
            }
            if (x.presence === ArgumentConstants.NOT_FOUND_$LI$()){
                this.updateMissingTokens$java_util_List$java_lang_String$int$int(epsParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
                this.updateMissingTokens$java_util_List$java_lang_String$int$int(maxStepsParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            }
            const epsExpr: Expression = new Expression(epsParam.paramStr, epsParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            const maxStepsExp: Expression = new Expression(maxStepsParam.paramStr, maxStepsParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            eps = epsExpr.calculate();
            maxSteps = (<number>Math.round(maxStepsExp.calculate())|0);
        }
        if (derivativeType === Calculus.GENERAL_DERIVATIVE){
            const general: number = Calculus.derivative(funExp, x.argument, x0, Calculus.GENERAL_DERIVATIVE, eps, maxSteps);
            this.calcSetDecreaseRemove$int$double(pos, general);
        } else if (derivativeType === Calculus.LEFT_DERIVATIVE){
            const left: number = Calculus.derivative(funExp, x.argument, x0, Calculus.LEFT_DERIVATIVE, eps, maxSteps);
            this.calcSetDecreaseRemove$int$double(pos, left);
        } else {
            const right: number = Calculus.derivative(funExp, x.argument, x0, Calculus.RIGHT_DERIVATIVE, eps, maxSteps);
            this.calcSetDecreaseRemove$int$double(pos, right);
        }
        this.clearParamArgument(x);
    }

    /**
     * Function derivative
     * 
     * @param      {number} pos                 the token position
     * @param      {number} derivativeType      the type of derivative (left, right, etc...)
     * @private
     */
    /*private*/ DERIVATIVE_NTH(pos: number, derivativeType: number) {
        const DEF_EPS: number = 1.0E-6;
        const DEF_MAX_STEPS: number = 20;
        const derParams: java.util.List<FunctionParameter> = this.getFunctionParameters(pos, this.tokensList);
        const funParam: FunctionParameter = derParams.get(0);
        const nParam: FunctionParameter = derParams.get(1);
        const xParam: FunctionParameter = derParams.get(2);
        const x: ArgumentParameter = this.getParamArgument(xParam.paramStr);
        if (x.presence === ArgumentConstants.NOT_FOUND_$LI$()){
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(xParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(funParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(nParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
        }
        const funExp: Expression = new Expression(funParam.paramStr, funParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        const nExp: Expression = new Expression(nParam.paramStr, nParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        const n: number = nExp.calculate();
        const x0: number = x.argument.getArgumentValue();
        let eps: number = DEF_EPS;
        let maxSteps: number = DEF_MAX_STEPS;
        if (derParams.size() === 5){
            const epsParam: FunctionParameter = derParams.get(3);
            const maxStepsParam: FunctionParameter = derParams.get(4);
            if (x.presence === ArgumentConstants.NOT_FOUND_$LI$()){
                this.updateMissingTokens$java_util_List$java_lang_String$int$int(epsParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
                this.updateMissingTokens$java_util_List$java_lang_String$int$int(maxStepsParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            }
            const epsExpr: Expression = new Expression(epsParam.paramStr, epsParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            const maxStepsExp: Expression = new Expression(maxStepsParam.paramStr, maxStepsParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            eps = epsExpr.calculate();
            maxSteps = (<number>Math.round(maxStepsExp.calculate())|0);
        }
        if (derivativeType === Calculus.GENERAL_DERIVATIVE){
            const left: number = Calculus.derivativeNth(funExp, n, x.argument, x0, Calculus.LEFT_DERIVATIVE, eps, maxSteps);
            const right: number = Calculus.derivativeNth(funExp, n, x.argument, x0, Calculus.RIGHT_DERIVATIVE, eps, maxSteps);
            this.calcSetDecreaseRemove$int$double(pos, (left + right) / 2.0);
        } else if (derivativeType === Calculus.LEFT_DERIVATIVE){
            const left: number = Calculus.derivativeNth(funExp, n, x.argument, x0, Calculus.LEFT_DERIVATIVE, eps, maxSteps);
            this.calcSetDecreaseRemove$int$double(pos, left);
        } else {
            const right: number = Calculus.derivativeNth(funExp, n, x.argument, x0, Calculus.RIGHT_DERIVATIVE, eps, maxSteps);
            this.calcSetDecreaseRemove$int$double(pos, right);
        }
        this.clearParamArgument(x);
    }

    /**
     * Function integral
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ INTEGRAL(pos: number) {
        const DEF_EPS: number = 1.0E-6;
        const DEF_MAX_STEPS: number = 20;
        const intParams: java.util.List<FunctionParameter> = this.getFunctionParameters(pos, this.tokensList);
        const funParam: FunctionParameter = intParams.get(0);
        const xParam: FunctionParameter = intParams.get(1);
        const aParam: FunctionParameter = intParams.get(2);
        const bParam: FunctionParameter = intParams.get(3);
        const x: ArgumentParameter = this.getParamArgument(xParam.paramStr);
        if (x.presence === ArgumentConstants.NOT_FOUND_$LI$()){
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(xParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(funParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(aParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(bParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
        }
        const funExp: Expression = new Expression(funParam.paramStr, funParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        const aExp: Expression = new Expression(aParam.paramStr, aParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        const bExp: Expression = new Expression(bParam.paramStr, bParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        const eps: number = DEF_EPS;
        const maxSteps: number = DEF_MAX_STEPS;
        this.calcSetDecreaseRemove$int$double(pos, Calculus.integralTrapezoid(funExp, x.argument, aExp.calculate(), bExp.calculate(), eps, maxSteps));
        this.clearParamArgument(x);
    }

    /**
     * Function SOLVE
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ SOLVE(pos: number) {
        const DEF_EPS: number = 1.0E-9;
        const DEF_MAX_STEPS: number = 100;
        const intParams: java.util.List<FunctionParameter> = this.getFunctionParameters(pos, this.tokensList);
        const funParam: FunctionParameter = intParams.get(0);
        const xParam: FunctionParameter = intParams.get(1);
        const aParam: FunctionParameter = intParams.get(2);
        const bParam: FunctionParameter = intParams.get(3);
        const x: ArgumentParameter = this.getParamArgument(xParam.paramStr);
        if (x.presence === ArgumentConstants.NOT_FOUND_$LI$()){
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(xParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(funParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(aParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
            this.updateMissingTokens$java_util_List$java_lang_String$int$int(bParam.tokens, xParam.paramStr, x.index, ArgumentConstants.TYPE_ID);
        }
        const funExp: Expression = new Expression(funParam.paramStr, funParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        const aExp: Expression = new Expression(aParam.paramStr, aParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        const bExp: Expression = new Expression(bParam.paramStr, bParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        const eps: number = DEF_EPS;
        const maxSteps: number = DEF_MAX_STEPS;
        this.calcSetDecreaseRemove$int$double(pos, Calculus.solveBrent(funExp, x.argument, aExp.calculate(), bExp.calculate(), eps, maxSteps));
        this.clearParamArgument(x);
    }

    /**
     * Forward difference operator
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ FORWARD_DIFFERENCE(pos: number) {
        const params: java.util.List<FunctionParameter> = this.getFunctionParameters(pos, this.tokensList);
        const funParam: FunctionParameter = params.get(0);
        const xParam: FunctionParameter = params.get(1);
        const x: ArgumentParameter = this.getParamArgument(xParam.paramStr);
        const funExp: Expression = new Expression(funParam.paramStr, funParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        if (this.verboseMode === true)funExp.setVerboseMode();
        let h: number = 1;
        if (params.size() === 3){
            const hParam: FunctionParameter = params.get(2);
            const hExp: Expression = new Expression(hParam.paramStr, hParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            if (this.verboseMode === true)hExp.setVerboseMode();
            h = hExp.calculate();
        }
        this.calcSetDecreaseRemove$int$double(pos, Calculus.forwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument(funExp, h, x.argument));
        this.clearParamArgument(x);
    }

    /**
     * Backward diffrence operator
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BACKWARD_DIFFERENCE(pos: number) {
        const params: java.util.List<FunctionParameter> = this.getFunctionParameters(pos, this.tokensList);
        const funParam: FunctionParameter = params.get(0);
        const xParam: FunctionParameter = params.get(1);
        const x: ArgumentParameter = this.getParamArgument(xParam.paramStr);
        const funExp: Expression = new Expression(funParam.paramStr, funParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
        if (this.verboseMode === true)funExp.setVerboseMode();
        let h: number = 1;
        if (params.size() === 3){
            const hParam: FunctionParameter = params.get(2);
            const hExp: Expression = new Expression(hParam.paramStr, hParam.tokens, this.argumentsList, this.functionsList, this.constantsList, Expression.DISABLE_ROUNDING, this.UDFExpression, this.UDFVariadicParamsAtRunTime);
            if (this.verboseMode === true)hExp.setVerboseMode();
            h = hExp.calculate();
        }
        this.calcSetDecreaseRemove$int$double(pos, Calculus.backwardDifference$org_mariuszgromada_math_mxparser_Expression$double$org_mariuszgromada_math_mxparser_Argument(funExp, h, x.argument));
        this.clearParamArgument(x);
    }

    /**
     * Minimum variadic
     * Sets tokens to number token
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MIN_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, NumberTheory.min$double_A.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * Maximum variadic
     * Sets tokens to number token
     * 
     * @param {number} pos token index (position)
     * @private
     */
    /*private*/ MAX_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, NumberTheory.max$double_A.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * Sum variadic
     * Sets tokens to number token
     * 
     * @param {number} pos token index (position)
     * @private
     */
    /*private*/ SUM_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int$boolean(pos, NumberTheory.sum.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size(), true);
    }

    /**
     * Sum variadic
     * Sets tokens to number token
     * 
     * @param {number} pos token index (position)
     * @private
     */
    /*private*/ PROD_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int$boolean(pos, NumberTheory.prod.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size(), true);
    }

    /**
     * Average variadic
     * Sets tokens to number token
     * 
     * @param {number} pos token index (position)
     * @private
     */
    /*private*/ AVG_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int$boolean(pos, Statistics.avg$double_A.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size(), true);
    }

    /**
     * Variance variadic
     * Sets tokens to number token
     * 
     * @param {number} pos token index (position)
     * @private
     */
    /*private*/ VAR_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int$boolean(pos, Statistics.var$double_A.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size(), true);
    }

    /**
     * Standard deviation variadic
     * Sets tokens to number token
     * 
     * @param {number} pos token index (position)
     * @private
     */
    /*private*/ STD_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int$boolean(pos, Statistics.std$double_A.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size(), true);
    }

    /**
     * Continued fraction
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CONTINUED_FRACTION(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, MathFunctions.continuedFraction.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * Continued polynomial
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ CONTINUED_POLYNOMIAL(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, MathFunctions.continuedPolynomial$double_A.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * Greates Common Divisor
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ GCD(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, NumberTheory.gcd$double_A.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * Lowest Common Multiply
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ LCM(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, NumberTheory.lcm$double_A.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * Random number from list
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ RND_LIST(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        const n: number = numbers.size();
        const i: number = ProbabilityDistributions.rndIndex$int$java_util_Random(n, ProbabilityDistributions.randomGenerator_$LI$());
        this.variadicSetDecreaseRemove$int$double$int(pos, numbers.get(i), numbers.size());
    }

    /**
     * Coalesce
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ COALESCE(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, MathFunctions.coalesce(mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * OR_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ OR_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, BooleanAlgebra.orVariadic(mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * AND_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ AND_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, BooleanAlgebra.andVariadic(mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * XOR_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ XOR_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, BooleanAlgebra.xorVariadic(mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * ARGMIN_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARGMIN_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, NumberTheory.argmin.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * ARGMAX_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ ARGMAX_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, NumberTheory.argmax.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * MEDIAN_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MEDIAN_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, Statistics.median.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * MODE_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ MODE_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, Statistics.mode.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * BASE_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ BASE_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, NumberTheory.convOthBase2Decimal$double_A(mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * NDIST_VARIADIC
     * 
     * @param      {number} pos                 the token position
     * @private
     */
    /*private*/ NDIST_VARIADIC(pos: number) {
        const numbers: java.util.List<number> = this.getNumbers(pos);
        this.variadicSetDecreaseRemove$int$double$int(pos, NumberTheory.numberOfDistValues.apply(null, mXparserConstants.arrayList2double(numbers)), numbers.size());
    }

    /**
     * Parser symbols
     * Removes comma
     * 
     * @param {number} pos token index (position)
     * @private
     */
    /*private*/ COMMA(pos: number) {
        this.tokensList.remove(pos);
    }

    /**
     * Parser symbols
     * Removes parenthesis
     * 
     * @param {number} lPos    left token index (position)
     * @param {number} rPos    roght token index (position)
     * @private
     */
    /*private*/ PARENTHESES(lPos: number, rPos: number) {
        for(let p: number = lPos; p <= rPos; p++) {this.tokensList.get(p).tokenLevel--;}
        this.tokensList.remove(rPos);
        this.tokensList.remove(lPos);
    }

    /**
     * Checks syntax of the expression string.
     * 
     * @return     {boolean} true if syntax is ok
     */
    public checkLexSyntax(): boolean {
        let syntax: boolean = ExpressionConstants.NO_SYNTAX_ERRORS;
        this.recursionCallsCounter = 0;
        if (this.expressionString.length === 0){
            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
            this.errorMessage = "Empty expression string\n";
            return syntax;
        }
        const syn: SyntaxChecker = new SyntaxChecker(new java.io.ByteArrayInputStream(/* getBytes */(this.expressionString).split('').map(s => s.charCodeAt(0))));
        try {
            syn.checkSyntax();
        } catch(e) {
            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
            this.errorMessage = "lexical error \n\n" + e.message + "\n";
        }
        return syntax;
    }

    public checkSyntax$(): boolean {
        const syntax: boolean = this.checkSyntax$java_lang_String$boolean("[" + this.expressionString + "] ", false);
        return syntax;
    }

    /**
     * Checks syntax of the calculus parameter
     * 
     * @return     {number} true if syntax is ok
     * @param {string} param
     * @private
     */
    /*private*/ checkCalculusParameter(param: string): number {
        let errors: number = 0;
        for(let index159=this.keyWordsList.iterator();index159.hasNext();) {
            let kw = index159.next();
            if (kw.wordTypeId !== ArgumentConstants.TYPE_ID)if (param === kw.wordString)errors++;
        }
        return errors;
    }

    /**
     * Checks if argument given in the function parameter is known
     * in the expression.
     * 
     * @param      {FunctionParameter} param               the function parameter
     * 
     * @return     {boolean} true if argument is known,
     * otherwise returns false.
     * @private
     */
    /*private*/ checkIfKnownArgument(param: FunctionParameter): boolean {
        if (param.tokens.size() > 1)return false;
        const t: Token = param.tokens.get(0);
        if (t.tokenTypeId !== ArgumentConstants.TYPE_ID)return false;
        return true;
    }

    /**
     * Checks if token is uknown
     * 
     * @param      {FunctionParameter} param               the function parameter
     * 
     * @return     {boolean} true if there is only 1 token with unknown type,
     * otherwise returns false.
     * @private
     */
    /*private*/ checkIfUnknownToken(param: FunctionParameter): boolean {
        if (param.tokens.size() > 1)return false;
        const t: Token = param.tokens.get(0);
        if (t.tokenTypeId !== ConstantValue.NaN)return false;
        return true;
    }

    public checkSyntax$java_lang_String$boolean(level: string, functionWithBodyExt: boolean): boolean {
        if ((this.expressionWasModified === false) && (this.syntaxStatus === ExpressionConstants.NO_SYNTAX_ERRORS) && (this.optionsChangesetNumber === mXparserConstants.optionsChangesetNumber)){
            this.errorMessage = level + "already checked - no errors!\n";
            this.recursionCallPending = false;
            return ExpressionConstants.NO_SYNTAX_ERRORS;
        }
        this.optionsChangesetNumber = mXparserConstants.optionsChangesetNumber;
        if (functionWithBodyExt){
            this.syntaxStatus = ExpressionConstants.NO_SYNTAX_ERRORS;
            this.recursionCallPending = false;
            this.expressionWasModified = false;
            this.errorMessage = this.errorMessage + level + "function with extended body - assuming no errors.\n";
            return ExpressionConstants.NO_SYNTAX_ERRORS;
        }
        this.recursionCallPending = true;
        this.errorMessage = level + "checking ...\n";
        let syntax: boolean = ExpressionConstants.NO_SYNTAX_ERRORS;
        if (this.expressionString.length === 0){
            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
            this.errorMessage = this.errorMessage + level + "Empty expression string\n";
            this.syntaxStatus = syntax;
            this.recursionCallPending = false;
            return syntax;
        }
        const testBytes: number[] = this.expressionString.split('').map(s => s.charCodeAt(0));
        const syn: SyntaxChecker = new SyntaxChecker(new java.io.ByteArrayInputStream(testBytes));
        try {
            syn.checkSyntax();
            this.tokenizeExpressionString();
            let kw1: string;
            let kw2: string;
            java.util.Collections.sort<any>(this.keyWordsList, ((funcInst: any) => { if (typeof funcInst == 'function') { return funcInst } return (arg0, arg1) =>  (funcInst['compare'] ? funcInst['compare'] : funcInst) .call(funcInst, arg0, arg1)})(new KwStrComparator()));
            for(let kwId: number = 1; kwId < this.keyWordsList.size(); kwId++) {{
                kw1 = this.keyWordsList.get(kwId - 1).wordString;
                kw2 = this.keyWordsList.get(kwId).wordString;
                if (kw1 === kw2){
                    syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                    this.errorMessage = this.errorMessage + level + "(" + kw1 + ") Duplicated <KEYWORD>.\n";
                }
            };}
            const tokensNumber: number = this.initialTokens.size();
            const syntaxStack: java.util.Stack<SyntaxStackElement> = <any>(new java.util.Stack<SyntaxStackElement>());
            let stackElement: SyntaxStackElement;
            for(let tokenIndex: number = 0; tokenIndex < tokensNumber; tokenIndex++) {{
                const t: Token = this.initialTokens.get(tokenIndex);
                const tokenStr: string = "(" + t.tokenStr + ", " + tokenIndex + ") ";
                if (t.tokenTypeId === ArgumentConstants.TYPE_ID){
                    const arg: Argument = this.getArgument$int(t.tokenId);
                    if (this.getParametersNumber(tokenIndex) >= 0){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<ARGUMENT> was expected.\n";
                    } else if (arg.getArgumentBodyType() === ArgumentConstants.BODY_RUNTIME){
                        if (arg.getArgumentType() === ArgumentConstants.DEPENDENT_ARGUMENT){
                            if ((arg.argumentExpression !== this) && (arg.argumentExpression.recursionCallPending === false)){
                                const syntaxRec: boolean = arg.argumentExpression.checkSyntax$java_lang_String$boolean(level + "-> [" + t.tokenStr + "] = [" + arg.argumentExpression.getExpressionString() + "] ", false);
                                syntax = syntax && syntaxRec;
                                this.errorMessage = this.errorMessage + level + tokenStr + "checking dependent argument ...\n" + arg.argumentExpression.getErrorMessage();
                            }
                        }
                    } else {
                        this.errorMessage = this.errorMessage + level + tokenStr + "argument with extended body - assuming no errors.\n";
                    }
                }
                if (t.tokenTypeId === RecursiveArgument.TYPE_ID_RECURSIVE){
                    const arg: Argument = this.getArgument$int(t.tokenId);
                    if (this.getParametersNumber(tokenIndex) !== 1){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<RECURSIVE_ARGUMENT> expecting 1 parameter.\n";
                    } else if ((arg.argumentExpression !== this) && (arg.argumentExpression.recursionCallPending === false)){
                        const syntaxRec: boolean = arg.argumentExpression.checkSyntax$java_lang_String$boolean(level + "-> [" + t.tokenStr + "] = [" + arg.argumentExpression.getExpressionString() + "] ", false);
                        syntax = syntax && syntaxRec;
                        this.errorMessage = this.errorMessage + level + tokenStr + "checking recursive argument ...\n" + arg.argumentExpression.getErrorMessage();
                    }
                }
                if (t.tokenTypeId === Token.NOT_MATCHED_$LI$()){
                    let calculusToken: boolean = false;
                    for(let index160=syntaxStack.iterator();index160.hasNext();) {
                        let e = index160.next();
                        if (e.tokenStr === t.tokenStr)calculusToken = true;
                    }
                    if (!calculusToken){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "invalid <TOKEN>.\n";
                    }
                }
                if (t.tokenTypeId === FunctionConstants.TYPE_ID){
                    const fun: Function = this.getFunction$int(t.tokenId);
                    fun.checkRecursiveMode();
                    const npar: number = this.getParametersNumber(tokenIndex);
                    const fpar: number = fun.getParametersNumber();
                    if (npar === 0){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<USER_DEFINED_FUNCTION> expecting at least one argument.\n";
                    } else if ((fun.isVariadic === false) && (fpar !== npar)){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<USER_DEFINED_FUNCTION> expecting " + fpar + " arguments.\n";
                    } else if ((fun.functionExpression !== this) && (fun.functionExpression.recursionCallPending === false)){
                        let syntaxRec: boolean;
                        if (fun.getFunctionBodyType() === FunctionConstants.BODY_RUNTIME)syntaxRec = fun.functionExpression.checkSyntax$java_lang_String$boolean(level + "-> [" + t.tokenStr + "] = [" + fun.functionExpression.getExpressionString() + "] ", false); else syntaxRec = fun.functionExpression.checkSyntax$java_lang_String$boolean(level + "-> [" + t.tokenStr + "] = [" + fun.functionExpression.getExpressionString() + "] ", true);
                        syntax = syntax && syntaxRec;
                        if (fun.isVariadic)this.errorMessage = this.errorMessage + level + tokenStr + "checking variadic user defined function ...\n" + fun.functionExpression.getErrorMessage(); else this.errorMessage = this.errorMessage + level + tokenStr + "checking user defined function ...\n" + fun.functionExpression.getErrorMessage();
                    }
                }
                if (t.tokenTypeId === ConstantValue.TYPE_ID){
                    if (this.getParametersNumber(tokenIndex) >= 0){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<CONSTANT> was expected.\n";
                    }
                }
                if (t.tokenTypeId === Constant.TYPE_ID){
                    if (this.getParametersNumber(tokenIndex) >= 0){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<USER_DEFINED_CONSTANT> was expected.\n";
                    }
                }
                if (t.tokenTypeId === Function1Arg.TYPE_ID){
                    if (this.getParametersNumber(tokenIndex) !== 1){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<FUNCTION> expecting 1 argument.\n";
                    }
                }
                if (t.tokenTypeId === Function2Arg.TYPE_ID){
                    if (this.getParametersNumber(tokenIndex) !== 2){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<FUNCTION> expecting 2 arguments.\n";
                    }
                }
                if (t.tokenTypeId === Function3Arg.TYPE_ID){
                    if (this.getParametersNumber(tokenIndex) !== 3){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "<FUNCTION> expecting 3 arguments.\n";
                    }
                }
                if (t.tokenTypeId === CalculusOperator.TYPE_ID){
                    const paramsNumber: number = this.getParametersNumber(tokenIndex);
                    let funParams: java.util.List<FunctionParameter> = null;
                    if (paramsNumber > 0)funParams = this.getFunctionParameters(tokenIndex, this.initialTokens);
                    if ((t.tokenId === CalculusOperator.DER_ID) || (t.tokenId === CalculusOperator.DER_LEFT_ID) || (t.tokenId === CalculusOperator.DER_RIGHT_ID)){
                        if ((paramsNumber < 2) || (paramsNumber > 5)){
                            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                            this.errorMessage = this.errorMessage + level + tokenStr + "<DERIVATIVE> expecting 2 or 3 or 4 or 5 calculus parameters.\n";
                        } else {
                            if ((paramsNumber === 2) || (paramsNumber === 4)){
                                const argParam: FunctionParameter = funParams.get(1);
                                if (this.checkIfKnownArgument(argParam) === false){
                                    syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                    this.errorMessage = this.errorMessage + level + tokenStr + "<DERIVATIVE> argument was expected.\n";
                                }
                            } else {
                                const argParam: FunctionParameter = funParams.get(1);
                                stackElement = new SyntaxStackElement(argParam.paramStr, t.tokenLevel + 1);
                                syntaxStack.push(stackElement);
                                const errors: number = this.checkCalculusParameter(stackElement.tokenStr);
                                if (errors > 0){
                                    syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                    this.errorMessage = this.errorMessage + level + tokenStr + "<DERIVATIVE> Found duplicated key words for calculus parameter (" + stackElement.tokenStr + ", " + errors + ").\n";
                                }
                                if (!this.checkIfKnownArgument(argParam) && !this.checkIfUnknownToken(argParam)){
                                    syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                    this.errorMessage = this.errorMessage + level + tokenStr + "<DERIVATIVE> One token (argument or unknown) was expected.\n";
                                }
                            }
                        }
                    }
                    if (t.tokenId === CalculusOperator.DERN_ID){
                        if ((paramsNumber !== 3) && (paramsNumber !== 5)){
                            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                            this.errorMessage = this.errorMessage + level + tokenStr + "<NTH_DERIVATIVE> expecting 3 or 5 calculus arguments.\n";
                        } else {
                            const argParam: FunctionParameter = funParams.get(2);
                            if (this.checkIfKnownArgument(argParam) === false){
                                syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                this.errorMessage = this.errorMessage + level + tokenStr + "<DERIVATIVE> argument was expected.\n";
                            }
                        }
                    }
                    if ((t.tokenId === CalculusOperator.INT_ID) || (t.tokenId === CalculusOperator.SOLVE_ID)){
                        if (paramsNumber !== 4){
                            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                            this.errorMessage = this.errorMessage + level + tokenStr + "<INTEGRAL/SOLVE> expecting 4 calculus arguments.\n";
                        } else {
                            const argParam: FunctionParameter = funParams.get(1);
                            stackElement = new SyntaxStackElement(argParam.paramStr, t.tokenLevel + 1);
                            syntaxStack.push(stackElement);
                            const errors: number = this.checkCalculusParameter(stackElement.tokenStr);
                            if (errors > 0){
                                syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                this.errorMessage = this.errorMessage + level + tokenStr + "Found duplicated key words for calculus parameter (" + stackElement.tokenStr + ", " + errors + ").\n";
                            }
                            if (!this.checkIfKnownArgument(argParam) && !this.checkIfUnknownToken(argParam)){
                                syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                this.errorMessage = this.errorMessage + level + tokenStr + "One token (argument or unknown) was expected.\n";
                            }
                        }
                    }
                    if ((t.tokenId === CalculusOperator.PROD_ID) || (t.tokenId === CalculusOperator.SUM_ID) || (t.tokenId === CalculusOperator.MIN_ID) || (t.tokenId === CalculusOperator.MAX_ID) || (t.tokenId === CalculusOperator.AVG_ID) || (t.tokenId === CalculusOperator.VAR_ID) || (t.tokenId === CalculusOperator.STD_ID)){
                        if ((paramsNumber !== 4) && (paramsNumber !== 5)){
                            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                            this.errorMessage = this.errorMessage + level + tokenStr + "<ITER_OPERATOR> expecting 4 or 5 calculus arguments.\n";
                        } else {
                            const indexParam: FunctionParameter = funParams.get(0);
                            stackElement = new SyntaxStackElement(indexParam.paramStr, t.tokenLevel + 1);
                            syntaxStack.push(stackElement);
                            const errors: number = this.checkCalculusParameter(stackElement.tokenStr);
                            if (errors > 0){
                                syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                this.errorMessage = this.errorMessage + level + tokenStr + "Found duplicated key words for calculus parameter (" + stackElement.tokenStr + ", " + errors + ").\n";
                            }
                            if (!this.checkIfKnownArgument(indexParam) && !this.checkIfUnknownToken(indexParam)){
                                syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                this.errorMessage = this.errorMessage + level + tokenStr + "One token (argument or unknown) was expected.\n";
                            }
                        }
                    }
                    if ((t.tokenId === CalculusOperator.FORW_DIFF_ID) || (t.tokenId === CalculusOperator.BACKW_DIFF_ID)){
                        if ((paramsNumber !== 2) && (paramsNumber !== 3)){
                            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                            this.errorMessage = this.errorMessage + level + tokenStr + "<DIFF> expecting 2 or 3 arguments.\n";
                        } else {
                            const xParam: FunctionParameter = funParams.get(1);
                            if (this.checkIfKnownArgument(xParam) === false){
                                syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                                this.errorMessage = this.errorMessage + level + tokenStr + "<DIFF> argument was expected.\n";
                            }
                        }
                    }
                }
                if (t.tokenTypeId === FunctionVariadic.TYPE_ID){
                    const paramsNumber: number = this.getParametersNumber(tokenIndex);
                    if (paramsNumber < 1){
                        syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                        this.errorMessage = this.errorMessage + level + tokenStr + "At least one argument was expected.\n";
                    }
                    if (t.tokenId === FunctionVariadic.IFF_ID){
                        if ((paramsNumber % 2 !== 0) || (paramsNumber < 2)){
                            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
                            this.errorMessage = this.errorMessage + level + tokenStr + "Expecting parity number of arguments.\n";
                        }
                    }
                }
                if ((t.tokenTypeId === ParserSymbol.TYPE_ID) && (t.tokenId === ParserSymbol.RIGHT_PARENTHESES_ID)){
                    if (syntaxStack.size() > 0)if (t.tokenLevel === syntaxStack.lastElement().tokenLevel)syntaxStack.pop();
                }
            };}
        } catch(e) {
            syntax = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN;
            this.errorMessage = this.errorMessage + level + "lexical error \n\n" + e.message + "\n";
        }
        if (syntax === ExpressionConstants.NO_SYNTAX_ERRORS){
            this.errorMessage = this.errorMessage + level + "no errors.\n";
            this.expressionWasModified = false;
        } else {
            this.errorMessage = this.errorMessage + level + "errors were found.\n";
            this.expressionWasModified = true;
        }
        this.syntaxStatus = syntax;
        this.recursionCallPending = false;
        return syntax;
    }

    /**
     * Checking the syntax (recursively).
     * 
     * @param      {string} level               string representing the recurssion level.
     * @return     {boolean} true if syntax was correct,
     * otherwise returns false.
     * @param {boolean} functionWithBodyExt
     * @private
     */
    public checkSyntax(level?: any, functionWithBodyExt?: any): any {
        if (((typeof level === 'string') || level === null) && ((typeof functionWithBodyExt === 'boolean') || functionWithBodyExt === null)) {
            return <any>this.checkSyntax$java_lang_String$boolean(level, functionWithBodyExt);
        } else if (level === undefined && functionWithBodyExt === undefined) {
            return <any>this.checkSyntax$();
        } else throw new Error('invalid overload');
    }

    /**
     * Calculates the expression value
     * 
     * @return     {number} The expression value if syntax was ok,
     * otherwise returns Double.NaN.
     */
    public calculate(): number {
        this.computingTime = 0;
        const startTime: number = java.lang.System.currentTimeMillis();
        if (this.verboseMode === true){
            this.printSystemInfo("\n", ExpressionConstants.NO_EXP_STR);
            this.printSystemInfo("\n", ExpressionConstants.WITH_EXP_STR);
            this.printSystemInfo("Starting ...\n", ExpressionConstants.WITH_EXP_STR);
            this.showArguments();
        }
        if ((this.expressionWasModified === true) || (this.syntaxStatus !== ExpressionConstants.NO_SYNTAX_ERRORS)) {
            this.syntaxStatus = this.checkSyntax$();
        }
        if (this.syntaxStatus === ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN){
            this.errorMessage = this.errorMessage + "Problem with expression syntax\n";
            if (this.verboseMode === true)this.printSystemInfo("syntaxStatus == SYNTAX_ERROR_OR_STATUS_UNKNOWN, returning Double.NaN\n", ExpressionConstants.NO_EXP_STR);
            this.recursionCallsCounter = 0;
            return javaemul.internal.DoubleHelper.NaN;
        }
        if ((this.recursionCallsCounter === 0) || (this.internalClone))this.copyInitialTokens();
        if (this.tokensList.size() === 0){
            this.errorMessage = this.errorMessage + "Empty expression\n";
            if (this.verboseMode === true)this.printSystemInfo("tokensList.size() == 0, returning Double.NaN\n", ExpressionConstants.NO_EXP_STR);
            this.recursionCallsCounter = 0;
            return javaemul.internal.DoubleHelper.NaN;
        }
        if (this.recursionCallsCounter >= mXparserConstants.MAX_RECURSION_CALLS_$LI$()){
            this.errorMessage = this.errorMessage + "recursionCallsCounter >= MAX_RECURSION_CALLS\n";
            if (this.verboseMode === true){
                this.printSystemInfo("recursionCallsCounter >= mXparser.MAX_RECURSION_CALLS, returning Double.NaN\n", ExpressionConstants.NO_EXP_STR);
                this.printSystemInfo("recursionCallsCounter = " + this.recursionCallsCounter + "\n", ExpressionConstants.NO_EXP_STR);
                this.printSystemInfo("mXparser.MAX_RECURSION_CALLS = " + mXparserConstants.MAX_RECURSION_CALLS_$LI$() + "\n", ExpressionConstants.NO_EXP_STR);
            }
            this.recursionCallsCounter = 0;
            this.errorMessage = this.errorMessage + "\n[" + this.description + "][" + this.expressionString + "] Maximum recursion calls reached.\n";
            return javaemul.internal.DoubleHelper.NaN;
        }
        this.recursionCallsCounter++;
        let calculusPos: number;
        let ifPos: number;
        let iffPos: number;
        let variadicFunPos: number;
        let depArgPos: number;
        let recArgPos: number;
        let f3ArgPos: number;
        let f2ArgPos: number;
        let f1ArgPos: number;
        let userFunPos: number;
        let plusPos: number;
        let minusPos: number;
        let multiplyPos: number;
        let dividePos: number;
        let powerPos: number;
        let tetrationPos: number;
        let powerNum: number;
        let factPos: number;
        let modPos: number;
        let percPos: number;
        let negPos: number;
        let andGroupPos: number;
        let orGroupPos: number;
        let implGroupPos: number;
        let bolPos: number;
        let eqPos: number;
        let neqPos: number;
        let ltPos: number;
        let gtPos: number;
        let leqPos: number;
        let geqPos: number;
        let commaPos: number;
        let lParPos: number;
        let rParPos: number;
        let bitwisePos: number;
        let bitwiseComplPos: number;
        let token: Token;
        let tokenL: Token;
        let tokenR: Token;
        let argument: Argument;
        let tokensNumber: number;
        let maxPartLevel: number;
        let lPos: number;
        let rPos: number;
        let tokenIndex: number;
        let pos: number;
        let p: number;
        let commas: java.util.List<number> = null;
        let emptyLoopCounter: number = 0;
        if (this.verboseMode === true)this.printSystemInfo("Starting calculation loop\n", ExpressionConstants.WITH_EXP_STR);
        do {{
            if (mXparserConstants.isCurrentCalculationCancelled()){
                this.errorMessage = this.errorMessage + "\nCancel request - finishing";
                return javaemul.internal.DoubleHelper.NaN;
            }
            tokensNumber = this.tokensList.size();
            maxPartLevel = -1;
            lPos = -1;
            rPos = -1;
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
            andGroupPos = -1;
            orGroupPos = -1;
            implGroupPos = -1;
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
            p = -1;
            do {{
                p++;
                token = this.tokensList.get(p);
                if (token.tokenTypeId === CalculusOperator.TYPE_ID)calculusPos = p; else if ((token.tokenTypeId === Function3Arg.TYPE_ID) && (token.tokenId === Function3Arg.IF_CONDITION_ID))ifPos = p; else if ((token.tokenTypeId === FunctionVariadic.TYPE_ID) && (token.tokenId === FunctionVariadic.IFF_ID))iffPos = p;
            }} while(((p < tokensNumber - 1) && (calculusPos < 0) && (ifPos < 0) && (iffPos < 0)));
            if ((calculusPos < 0) && (ifPos < 0) && (iffPos < 0)){
                for(tokenIndex = 0; tokenIndex < tokensNumber; tokenIndex++) {{
                    token = this.tokensList.get(tokenIndex);
                    if (token.tokenLevel > maxPartLevel){
                        maxPartLevel = this.tokensList.get(tokenIndex).tokenLevel;
                        lPos = tokenIndex;
                    }
                    if (token.tokenTypeId === ArgumentConstants.TYPE_ID){
                        argument = this.argumentsList.get(this.tokensList.get(tokenIndex).tokenId);
                        if (argument.argumentType === ArgumentConstants.FREE_ARGUMENT)this.FREE_ARGUMENT(tokenIndex); else depArgPos = tokenIndex;
                    } else if (token.tokenTypeId === ConstantValue.TYPE_ID)this.CONSTANT(tokenIndex); else if (token.tokenTypeId === Unit.TYPE_ID)this.UNIT(tokenIndex); else if (token.tokenTypeId === Constant.TYPE_ID)this.USER_CONSTANT(tokenIndex); else if (token.tokenTypeId === RandomVariable.TYPE_ID)this.RANDOM_VARIABLE(tokenIndex);
                };}
                if (lPos < 0){
                    this.errorMessage = this.errorMessage + "\nInternal error / strange token level - finishing";
                    return javaemul.internal.DoubleHelper.NaN;
                }
                if (depArgPos >= 0){
                    let depArgFound: boolean;
                    do {{
                        depArgFound = false;
                        const currentTokensNumber: number = this.tokensList.size();
                        for(tokenIndex = 0; tokenIndex < currentTokensNumber; tokenIndex++) {{
                            token = this.tokensList.get(tokenIndex);
                            if (token.tokenTypeId === ArgumentConstants.TYPE_ID){
                                argument = this.argumentsList.get(this.tokensList.get(tokenIndex).tokenId);
                                if (argument.argumentType === ArgumentConstants.DEPENDENT_ARGUMENT){
                                    this.DEPENDENT_ARGUMENT(tokenIndex);
                                    depArgFound = true;
                                    break;
                                }
                            }
                        };}
                    }} while((depArgFound));
                } else {
                    tokenIndex = lPos;
                    while(((tokenIndex < tokensNumber) && (maxPartLevel === this.tokensList.get(tokenIndex).tokenLevel))) {tokenIndex++};
                    rPos = tokenIndex - 1;
                    if (this.verboseMode === true){
                        this.printSystemInfo("Parsing (" + lPos + ", " + rPos + ") ", ExpressionConstants.WITH_EXP_STR);
                        this.showParsing(lPos, rPos);
                    }
                    let leftIsNumber: boolean;
                    let rigthIsNumber: boolean;
                    for(pos = lPos; pos <= rPos; pos++) {{
                        leftIsNumber = false;
                        rigthIsNumber = false;
                        token = this.tokensList.get(pos);
                        if (pos - 1 >= 0){
                            tokenL = this.tokensList.get(pos - 1);
                            if (tokenL.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID)leftIsNumber = true;
                        }
                        if (pos + 1 < tokensNumber){
                            tokenR = this.tokensList.get(pos + 1);
                            if (tokenR.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID)rigthIsNumber = true;
                        }
                        if ((token.tokenTypeId === RecursiveArgument.TYPE_ID_RECURSIVE) && (recArgPos < 0))recArgPos = pos; else if ((token.tokenTypeId === FunctionVariadic.TYPE_ID) && (variadicFunPos < 0))variadicFunPos = pos; else if ((token.tokenTypeId === Function3Arg.TYPE_ID) && (f3ArgPos < 0))f3ArgPos = pos; else if ((token.tokenTypeId === Function2Arg.TYPE_ID) && (f2ArgPos < 0))f2ArgPos = pos; else if ((token.tokenTypeId === Function1Arg.TYPE_ID) && (f1ArgPos < 0))f1ArgPos = pos; else if ((token.tokenTypeId === FunctionConstants.TYPE_ID) && (userFunPos < 0))userFunPos = pos; else if (token.tokenTypeId === Operator.TYPE_ID){
                            if ((token.tokenId === Operator.POWER_ID) && (leftIsNumber && rigthIsNumber)){
                                powerPos = pos;
                                powerNum++;
                            } else if ((token.tokenId === Operator.TETRATION_ID) && (leftIsNumber && rigthIsNumber)){
                                tetrationPos = pos;
                            } else if ((token.tokenId === Operator.FACT_ID) && (factPos < 0) && (leftIsNumber)){
                                factPos = pos;
                            } else if ((token.tokenId === Operator.PERC_ID) && (percPos < 0) && (leftIsNumber)){
                                percPos = pos;
                            } else if ((token.tokenId === Operator.MOD_ID) && (modPos < 0) && (leftIsNumber && rigthIsNumber)){
                                modPos = pos;
                            } else if ((token.tokenId === Operator.PLUS_ID) && (plusPos < 0) && (rigthIsNumber))plusPos = pos; else if ((token.tokenId === Operator.MINUS_ID) && (minusPos < 0) && (rigthIsNumber))minusPos = pos; else if ((token.tokenId === Operator.MULTIPLY_ID) && (multiplyPos < 0) && (leftIsNumber && rigthIsNumber))multiplyPos = pos; else if ((token.tokenId === Operator.DIVIDE_ID) && (dividePos < 0) && (leftIsNumber && rigthIsNumber))dividePos = pos;
                        } else if (token.tokenTypeId === BooleanOperator.TYPE_ID){
                            if ((token.tokenId === BooleanOperator.NEG_ID) && (negPos < 0) && (rigthIsNumber))negPos = pos; else if (leftIsNumber && rigthIsNumber){
                                if ((token.tokenId === BooleanOperator.AND_ID || token.tokenId === BooleanOperator.NAND_ID) && (andGroupPos < 0))andGroupPos = pos; else if ((token.tokenId === BooleanOperator.OR_ID || token.tokenId === BooleanOperator.NOR_ID || token.tokenId === BooleanOperator.XOR_ID) && (orGroupPos < 0))orGroupPos = pos; else if ((token.tokenId === BooleanOperator.IMP_ID || token.tokenId === BooleanOperator.CIMP_ID || token.tokenId === BooleanOperator.NIMP_ID || token.tokenId === BooleanOperator.CNIMP_ID || token.tokenId === BooleanOperator.EQV_ID) && (implGroupPos < 0))implGroupPos = pos; else if (bolPos < 0)bolPos = pos;
                            }
                        } else if (token.tokenTypeId === BinaryRelation.TYPE_ID){
                            if ((token.tokenId === BinaryRelation.EQ_ID) && (eqPos < 0) && (leftIsNumber && rigthIsNumber))eqPos = pos; else if ((token.tokenId === BinaryRelation.NEQ_ID) && (neqPos < 0) && (leftIsNumber && rigthIsNumber))neqPos = pos; else if ((token.tokenId === BinaryRelation.LT_ID) && (ltPos < 0) && (leftIsNumber && rigthIsNumber))ltPos = pos; else if ((token.tokenId === BinaryRelation.GT_ID) && (gtPos < 0) && (leftIsNumber && rigthIsNumber))gtPos = pos; else if ((token.tokenId === BinaryRelation.LEQ_ID) && (leqPos < 0) && (leftIsNumber && rigthIsNumber))leqPos = pos; else if ((token.tokenId === BinaryRelation.GEQ_ID) && (geqPos < 0) && (leftIsNumber && rigthIsNumber))geqPos = pos;
                        } else if (token.tokenTypeId === BitwiseOperator.TYPE_ID){
                            if ((token.tokenId === BitwiseOperator.COMPL_ID) && (bitwiseComplPos < 0) && (rigthIsNumber))bitwiseComplPos = pos; else if ((bitwisePos < 0) && (leftIsNumber && rigthIsNumber))bitwisePos = pos;
                        } else if (token.tokenTypeId === ParserSymbol.TYPE_ID){
                            if ((token.tokenId === ParserSymbol.COMMA_ID)){
                                if (commaPos < 0)commas = <any>(new java.util.ArrayList<number>());
                                commas.add(pos);
                                commaPos = pos;
                            } else if ((token.tokenId === ParserSymbol.LEFT_PARENTHESES_ID) && (lParPos < 0))lParPos = pos; else if ((token.tokenId === ParserSymbol.RIGHT_PARENTHESES_ID) && (rParPos < 0))rParPos = pos;
                        }
                    };}
                    if (powerNum > 1){
                        powerPos = -1;
                        p = rPos + 1;
                        do {{
                            p--;
                            token = this.tokensList.get(p);
                            if ((token.tokenTypeId === Operator.TYPE_ID) && (token.tokenId === Operator.POWER_ID))powerPos = p;
                        }} while(((p > lPos) && (powerPos === -1)));
                    }
                }
            }
            if (calculusPos >= 0)this.calculusCalc(calculusPos); else if (ifPos >= 0){
                this.IF_CONDITION(ifPos);
            } else if (iffPos >= 0){
                this.IFF(iffPos);
            } else if (recArgPos >= 0){
                this.RECURSIVE_ARGUMENT(recArgPos);
            } else if (variadicFunPos >= 0)this.variadicFunCalc(variadicFunPos); else if (f3ArgPos >= 0)this.f3ArgCalc(f3ArgPos); else if (f2ArgPos >= 0)this.f2ArgCalc(f2ArgPos); else if (f1ArgPos >= 0)this.f1ArgCalc(f1ArgPos); else if (userFunPos >= 0){
                this.USER_FUNCTION(userFunPos);
            } else if (tetrationPos >= 0){
                this.TETRATION(tetrationPos);
            } else if (powerPos >= 0){
                this.POWER(powerPos);
            } else if (factPos >= 0){
                this.FACT(factPos);
            } else if (percPos >= 0){
                this.PERC(percPos);
            } else if (modPos >= 0){
                this.MODULO(modPos);
            } else if (negPos >= 0){
                this.NEG(negPos);
            } else if (bitwiseComplPos >= 0){
                this.BITWISE_COMPL(bitwiseComplPos);
            } else if ((multiplyPos >= 0) || (dividePos >= 0)){
                if ((multiplyPos >= 0) && (dividePos >= 0))if (multiplyPos <= dividePos)this.MULTIPLY(multiplyPos); else this.DIVIDE(dividePos); else if (multiplyPos >= 0)this.MULTIPLY(multiplyPos); else this.DIVIDE(dividePos);
            } else if ((minusPos >= 0) || (plusPos >= 0)){
                if ((minusPos >= 0) && (plusPos >= 0))if (minusPos <= plusPos)this.MINUS(minusPos); else this.PLUS(plusPos); else if (minusPos >= 0)this.MINUS(minusPos); else this.PLUS(plusPos);
            } else if (neqPos >= 0){
                this.NEQ(neqPos);
            } else if (eqPos >= 0){
                this.EQ(eqPos);
            } else if (ltPos >= 0){
                this.LT(ltPos);
            } else if (gtPos >= 0){
                this.GT(gtPos);
            } else if (leqPos >= 0){
                this.LEQ(leqPos);
            } else if (geqPos >= 0){
                this.GEQ(geqPos);
            } else if (commaPos >= 0){
                for(let i: number = commas.size() - 1; i >= 0; i--) {this.COMMA(commas.get(i));}
            } else if (andGroupPos >= 0)this.bolCalc(andGroupPos); else if (orGroupPos >= 0)this.bolCalc(orGroupPos); else if (implGroupPos >= 0)this.bolCalc(implGroupPos); else if (bolPos >= 0)this.bolCalc(bolPos); else if (bitwisePos >= 0)this.bitwiseCalc(bitwisePos); else if ((lParPos >= 0) && (rParPos > lParPos)){
                this.PARENTHESES(lParPos, rParPos);
            } else if (this.tokensList.size() > 1){
                this.errorMessage = this.errorMessage + "\n[" + this.description + "][" + this.expressionString + "] Fatal error - not know what to do with tokens while calculate().\n";
            }
            if (this.verboseMode === true){
                this.showParsing(0, this.tokensList.size() - 1);
                this.printSystemInfo(" done\n", ExpressionConstants.NO_EXP_STR);
            }
            if (this.tokensList.size() === tokensNumber)emptyLoopCounter++; else emptyLoopCounter = 0;
            if (emptyLoopCounter > 10){
                this.errorMessage = this.errorMessage + "\nInternal error, do not know what to do with the token, probably mXparser bug, please report - finishing";
                return javaemul.internal.DoubleHelper.NaN;
            }
        }} while((this.tokensList.size() > 1));
        if (this.verboseMode === true){
            this.printSystemInfo("Calculated value: " + this.tokensList.get(0).tokenValue + "\n", ExpressionConstants.WITH_EXP_STR);
            this.printSystemInfo("Exiting\n", ExpressionConstants.WITH_EXP_STR);
            this.printSystemInfo("\n", ExpressionConstants.NO_EXP_STR);
        }
        const endTime: number = java.lang.System.currentTimeMillis();
        this.computingTime = (endTime - startTime) / 1000.0;
        this.recursionCallsCounter = 0;
        let result: number = this.tokensList.get(0).tokenValue;
        if (mXparserConstants.almostIntRounding){
            const resultint: number = Math.round(result);
            if (Math.abs(result - resultint) <= BinaryRelations.getEpsilon())result = resultint;
        }
        return result;
    }

    /**
     * Calculates unary function
     * @param {number} pos    token position
     * @private
     */
    /*private*/ f1ArgCalc(pos: number) {
        switch((this.tokensList.get(pos).tokenId)) {
        case Function1Arg.SIN_ID:
            this.SIN(pos);
            break;
        case Function1Arg.COS_ID:
            this.COS(pos);
            break;
        case Function1Arg.TAN_ID:
            this.TAN(pos);
            break;
        case Function1Arg.CTAN_ID:
            this.CTAN(pos);
            break;
        case Function1Arg.SEC_ID:
            this.SEC(pos);
            break;
        case Function1Arg.COSEC_ID:
            this.COSEC(pos);
            break;
        case Function1Arg.ASIN_ID:
            this.ASIN(pos);
            break;
        case Function1Arg.ACOS_ID:
            this.ACOS(pos);
            break;
        case Function1Arg.ATAN_ID:
            this.ATAN(pos);
            break;
        case Function1Arg.ACTAN_ID:
            this.ACTAN(pos);
            break;
        case Function1Arg.LN_ID:
            this.LN(pos);
            break;
        case Function1Arg.LOG2_ID:
            this.LOG2(pos);
            break;
        case Function1Arg.LOG10_ID:
            this.LOG10(pos);
            break;
        case Function1Arg.RAD_ID:
            this.RAD(pos);
            break;
        case Function1Arg.EXP_ID:
            this.EXP(pos);
            break;
        case Function1Arg.SQRT_ID:
            this.SQRT(pos);
            break;
        case Function1Arg.SINH_ID:
            this.SINH(pos);
            break;
        case Function1Arg.COSH_ID:
            this.COSH(pos);
            break;
        case Function1Arg.TANH_ID:
            this.TANH(pos);
            break;
        case Function1Arg.COTH_ID:
            this.COTH(pos);
            break;
        case Function1Arg.SECH_ID:
            this.SECH(pos);
            break;
        case Function1Arg.CSCH_ID:
            this.CSCH(pos);
            break;
        case Function1Arg.DEG_ID:
            this.DEG(pos);
            break;
        case Function1Arg.ABS_ID:
            this.ABS(pos);
            break;
        case Function1Arg.SGN_ID:
            this.SGN(pos);
            break;
        case Function1Arg.FLOOR_ID:
            this.FLOOR(pos);
            break;
        case Function1Arg.CEIL_ID:
            this.CEIL(pos);
            break;
        case Function1Arg.NOT_ID:
            this.NOT(pos);
            break;
        case Function1Arg.ARSINH_ID:
            this.ARSINH(pos);
            break;
        case Function1Arg.ARCOSH_ID:
            this.ARCOSH(pos);
            break;
        case Function1Arg.ARTANH_ID:
            this.ARTANH(pos);
            break;
        case Function1Arg.ARCOTH_ID:
            this.ARCOTH(pos);
            break;
        case Function1Arg.ARSECH_ID:
            this.ARSECH(pos);
            break;
        case Function1Arg.ARCSCH_ID:
            this.ARCSCH(pos);
            break;
        case Function1Arg.SA_ID:
            this.SA(pos);
            break;
        case Function1Arg.SINC_ID:
            this.SINC(pos);
            break;
        case Function1Arg.BELL_NUMBER_ID:
            this.BELL_NUMBER(pos);
            break;
        case Function1Arg.LUCAS_NUMBER_ID:
            this.LUCAS_NUMBER(pos);
            break;
        case Function1Arg.FIBONACCI_NUMBER_ID:
            this.FIBONACCI_NUMBER(pos);
            break;
        case Function1Arg.HARMONIC_NUMBER_ID:
            this.HARMONIC_NUMBER(pos);
            break;
        case Function1Arg.IS_PRIME_ID:
            this.IS_PRIME(pos);
            break;
        case Function1Arg.PRIME_COUNT_ID:
            this.PRIME_COUNT(pos);
            break;
        case Function1Arg.EXP_INT_ID:
            this.EXP_INT(pos);
            break;
        case Function1Arg.LOG_INT_ID:
            this.LOG_INT(pos);
            break;
        case Function1Arg.OFF_LOG_INT_ID:
            this.OFF_LOG_INT(pos);
            break;
        case Function1Arg.GAUSS_ERF_ID:
            this.GAUSS_ERF(pos);
            break;
        case Function1Arg.GAUSS_ERFC_ID:
            this.GAUSS_ERFC(pos);
            break;
        case Function1Arg.GAUSS_ERF_INV_ID:
            this.GAUSS_ERF_INV(pos);
            break;
        case Function1Arg.GAUSS_ERFC_INV_ID:
            this.GAUSS_ERFC_INV(pos);
            break;
        case Function1Arg.ULP_ID:
            this.ULP(pos);
            break;
        case Function1Arg.ISNAN_ID:
            this.ISNAN(pos);
            break;
        case Function1Arg.NDIG10_ID:
            this.NDIG10(pos);
            break;
        case Function1Arg.NFACT_ID:
            this.NFACT(pos);
            break;
        case Function1Arg.ARCSEC_ID:
            this.ARCSEC(pos);
            break;
        case Function1Arg.ARCCSC_ID:
            this.ARCCSC(pos);
            break;
        case Function1Arg.GAMMA_ID:
            this.GAMMA(pos);
            break;
        case Function1Arg.LAMBERT_W0_ID:
            this.LAMBERT_W0(pos);
            break;
        case Function1Arg.LAMBERT_W1_ID:
            this.LAMBERT_W1(pos);
            break;
        case Function1Arg.SGN_GAMMA_ID:
            this.SGN_GAMMA(pos);
            break;
        case Function1Arg.LOG_GAMMA_ID:
            this.LOG_GAMMA(pos);
            break;
        case Function1Arg.DI_GAMMA_ID:
            this.DI_GAMMA(pos);
            break;
        case Function1Arg.PARAM_ID:
            this.UDF_PARAM(pos);
            break;
        }
    }

    /**
     * Calculates binary function
     * @param {number} pos   Token position
     * @private
     */
    /*private*/ f2ArgCalc(pos: number) {
        switch((this.tokensList.get(pos).tokenId)) {
        case Function2Arg.LOG_ID:
            this.LOG(pos);
            break;
        case Function2Arg.MOD_ID:
            this.MOD(pos);
            break;
        case Function2Arg.BINOM_COEFF_ID:
            this.BINOM_COEFF(pos);
            break;
        case Function2Arg.BERNOULLI_NUMBER_ID:
            this.BERNOULLI_NUMBER(pos);
            break;
        case Function2Arg.STIRLING1_NUMBER_ID:
            this.STIRLING1_NUMBER(pos);
            break;
        case Function2Arg.STIRLING2_NUMBER_ID:
            this.STIRLING2_NUMBER(pos);
            break;
        case Function2Arg.WORPITZKY_NUMBER_ID:
            this.WORPITZKY_NUMBER(pos);
            break;
        case Function2Arg.EULER_NUMBER_ID:
            this.EULER_NUMBER(pos);
            break;
        case Function2Arg.KRONECKER_DELTA_ID:
            this.KRONECKER_DELTA(pos);
            break;
        case Function2Arg.EULER_POLYNOMIAL_ID:
            this.EULER_POLYNOMIAL(pos);
            break;
        case Function2Arg.HARMONIC_NUMBER_ID:
            this.HARMONIC2_NUMBER(pos);
            break;
        case Function2Arg.RND_UNIFORM_CONT_ID:
            this.RND_VAR_UNIFORM_CONT(pos);
            break;
        case Function2Arg.RND_UNIFORM_DISCR_ID:
            this.RND_VAR_UNIFORM_DISCR(pos);
            break;
        case Function2Arg.ROUND_ID:
            this.ROUND(pos);
            break;
        case Function2Arg.RND_NORMAL_ID:
            this.RND_NORMAL(pos);
            break;
        case Function2Arg.NDIG_ID:
            this.NDIG(pos);
            break;
        case Function2Arg.DIGIT10_ID:
            this.DIGIT10(pos);
            break;
        case Function2Arg.FACTVAL_ID:
            this.FACTVAL(pos);
            break;
        case Function2Arg.FACTEXP_ID:
            this.FACTEXP(pos);
            break;
        case Function2Arg.ROOT_ID:
            this.ROOT(pos);
            break;
        case Function2Arg.INC_GAMMA_LOWER_ID:
            this.INC_GAMMA_LOWER(pos);
            break;
        case Function2Arg.INC_GAMMA_UPPER_ID:
            this.INC_GAMMA_UPPER(pos);
            break;
        case Function2Arg.REG_GAMMA_LOWER_ID:
            this.REG_GAMMA_LOWER(pos);
            break;
        case Function2Arg.REG_GAMMA_UPPER_ID:
            this.REG_GAMMA_UPPER(pos);
            break;
        case Function2Arg.PERMUTATIONS_ID:
            this.PERMUTATIONS(pos);
            break;
        case Function2Arg.BETA_ID:
            this.BETA(pos);
            break;
        case Function2Arg.LOG_BETA_ID:
            this.LOG_BETA(pos);
            break;
        }
    }

    /**
     * Calculates function with 3 arguments
     * @param {number} pos   Token position
     * @private
     */
    /*private*/ f3ArgCalc(pos: number) {
        switch((this.tokensList.get(pos).tokenId)) {
        case Function3Arg.IF_ID:
            this.IF(pos);
            break;
        case Function3Arg.CHI_ID:
            this.CHI(pos);
            break;
        case Function3Arg.CHI_LR_ID:
            this.CHI_LR(pos);
            break;
        case Function3Arg.CHI_L_ID:
            this.CHI_L(pos);
            break;
        case Function3Arg.CHI_R_ID:
            this.CHI_R(pos);
            break;
        case Function3Arg.PDF_UNIFORM_CONT_ID:
            this.PDF_UNIFORM_CONT(pos);
            break;
        case Function3Arg.CDF_UNIFORM_CONT_ID:
            this.CDF_UNIFORM_CONT(pos);
            break;
        case Function3Arg.QNT_UNIFORM_CONT_ID:
            this.QNT_UNIFORM_CONT(pos);
            break;
        case Function3Arg.PDF_NORMAL_ID:
            this.PDF_NORMAL(pos);
            break;
        case Function3Arg.CDF_NORMAL_ID:
            this.CDF_NORMAL(pos);
            break;
        case Function3Arg.QNT_NORMAL_ID:
            this.QNT_NORMAL(pos);
            break;
        case Function3Arg.DIGIT_ID:
            this.DIGIT(pos);
            break;
        case Function3Arg.INC_BETA_ID:
            this.INC_BETA(pos);
            break;
        case Function3Arg.REG_BETA_ID:
            this.REG_BETA(pos);
            break;
        }
    }

    /**
     * Calculates Variadic function
     * @param {number} pos   Token position
     * @private
     */
    /*private*/ variadicFunCalc(pos: number) {
        switch((this.tokensList.get(pos).tokenId)) {
        case FunctionVariadic.IFF_ID:
            this.IFF(pos);
            break;
        case FunctionVariadic.MIN_ID:
            this.MIN_VARIADIC(pos);
            break;
        case FunctionVariadic.MAX_ID:
            this.MAX_VARIADIC(pos);
            break;
        case FunctionVariadic.SUM_ID:
            this.SUM_VARIADIC(pos);
            break;
        case FunctionVariadic.PROD_ID:
            this.PROD_VARIADIC(pos);
            break;
        case FunctionVariadic.AVG_ID:
            this.AVG_VARIADIC(pos);
            break;
        case FunctionVariadic.VAR_ID:
            this.VAR_VARIADIC(pos);
            break;
        case FunctionVariadic.STD_ID:
            this.STD_VARIADIC(pos);
            break;
        case FunctionVariadic.CONT_FRAC_ID:
            this.CONTINUED_FRACTION(pos);
            break;
        case FunctionVariadic.CONT_POL_ID:
            this.CONTINUED_POLYNOMIAL(pos);
            break;
        case FunctionVariadic.GCD_ID:
            this.GCD(pos);
            break;
        case FunctionVariadic.LCM_ID:
            this.LCM(pos);
            break;
        case FunctionVariadic.RND_LIST_ID:
            this.RND_LIST(pos);
            break;
        case FunctionVariadic.COALESCE_ID:
            this.COALESCE(pos);
            break;
        case FunctionVariadic.OR_ID:
            this.OR_VARIADIC(pos);
            break;
        case FunctionVariadic.AND_ID:
            this.AND_VARIADIC(pos);
            break;
        case FunctionVariadic.XOR_ID:
            this.XOR_VARIADIC(pos);
            break;
        case FunctionVariadic.ARGMIN_ID:
            this.ARGMIN_VARIADIC(pos);
            break;
        case FunctionVariadic.ARGMAX_ID:
            this.ARGMAX_VARIADIC(pos);
            break;
        case FunctionVariadic.MEDIAN_ID:
            this.MEDIAN_VARIADIC(pos);
            break;
        case FunctionVariadic.MODE_ID:
            this.MODE_VARIADIC(pos);
            break;
        case FunctionVariadic.BASE_ID:
            this.BASE_VARIADIC(pos);
            break;
        case FunctionVariadic.NDIST_ID:
            this.NDIST_VARIADIC(pos);
            break;
        }
    }

    /**
     * Calculates calculus operators
     * @param {number} pos
     * @private
     */
    /*private*/ calculusCalc(pos: number) {
        switch((this.tokensList.get(pos).tokenId)) {
        case CalculusOperator.SUM_ID:
            this.SUM(pos);
            break;
        case CalculusOperator.PROD_ID:
            this.PROD(pos);
            break;
        case CalculusOperator.MIN_ID:
            this.MIN(pos);
            break;
        case CalculusOperator.MAX_ID:
            this.MAX(pos);
            break;
        case CalculusOperator.AVG_ID:
            this.AVG(pos);
            break;
        case CalculusOperator.VAR_ID:
            this.VAR(pos);
            break;
        case CalculusOperator.STD_ID:
            this.STD(pos);
            break;
        case CalculusOperator.INT_ID:
            this.INTEGRAL(pos);
            break;
        case CalculusOperator.SOLVE_ID:
            this.SOLVE(pos);
            break;
        case CalculusOperator.DER_ID:
            this.DERIVATIVE(pos, Calculus.GENERAL_DERIVATIVE);
            break;
        case CalculusOperator.DER_LEFT_ID:
            this.DERIVATIVE(pos, Calculus.LEFT_DERIVATIVE);
            break;
        case CalculusOperator.DER_RIGHT_ID:
            this.DERIVATIVE(pos, Calculus.RIGHT_DERIVATIVE);
            break;
        case CalculusOperator.DERN_ID:
            this.DERIVATIVE_NTH(pos, Calculus.GENERAL_DERIVATIVE);
            break;
        case CalculusOperator.FORW_DIFF_ID:
            this.FORWARD_DIFFERENCE(pos);
            break;
        case CalculusOperator.BACKW_DIFF_ID:
            this.BACKWARD_DIFFERENCE(pos);
            break;
        }
    }

    /**
     * Calculates boolean operators
     * @param {number} pos
     * @private
     */
    /*private*/ bolCalc(pos: number) {
        switch((this.tokensList.get(pos).tokenId)) {
        case BooleanOperator.AND_ID:
            this.AND(pos);
            break;
        case BooleanOperator.CIMP_ID:
            this.CIMP(pos);
            break;
        case BooleanOperator.CNIMP_ID:
            this.CNIMP(pos);
            break;
        case BooleanOperator.EQV_ID:
            this.EQV(pos);
            break;
        case BooleanOperator.IMP_ID:
            this.IMP(pos);
            break;
        case BooleanOperator.NAND_ID:
            this.NAND(pos);
            break;
        case BooleanOperator.NIMP_ID:
            this.NIMP(pos);
            break;
        case BooleanOperator.NOR_ID:
            this.NOR(pos);
            break;
        case BooleanOperator.OR_ID:
            this.OR(pos);
            break;
        case BooleanOperator.XOR_ID:
            this.XOR(pos);
            break;
        }
    }

    /**
     * Calculates Bitwise operators
     * @param {number} pos
     * @private
     */
    /*private*/ bitwiseCalc(pos: number) {
        switch((this.tokensList.get(pos).tokenId)) {
        case BitwiseOperator.AND_ID:
            this.BITWISE_AND(pos);
            break;
        case BitwiseOperator.OR_ID:
            this.BITWISE_OR(pos);
            break;
        case BitwiseOperator.XOR_ID:
            this.BITWISE_XOR(pos);
            break;
        case BitwiseOperator.LEFT_SHIFT_ID:
            this.BITWISE_LEFT_SHIFT(pos);
            break;
        case BitwiseOperator.RIGHT_SHIFT_ID:
            this.BITWISE_RIGHT_SHIFT(pos);
            break;
        }
    }

    /**
     * Class level method for adding specific automatic
     * parser keywords relates to User Defined Functions
     * i.e.: par(i), [npar]
     * @private
     */
    /*private*/ addUDFSpecificParserKeyWords() {
        this.addKeyWord(Function1Arg.PARAM_STR, Function1Arg.PARAM_DESC, Function1Arg.PARAM_ID, Function1Arg.PARAM_SYN_$LI$(), Function1Arg.PARAM_SINCE_$LI$(), Function1Arg.TYPE_ID);
        this.addKeyWord(ConstantValue.NPAR_STR, ConstantValue.NPAR_DESC, ConstantValue.NPAR_ID, ConstantValue.NPAR_SYN_$LI$(), ConstantValue.NPAR_SINCE_$LI$(), ConstantValue.TYPE_ID);
    }

    /**
     * Creates parser key words list
     * @private
     */
    /*private*/ addParserKeyWords() {
        this.addKeyWord(Operator.PLUS_STR, Operator.PLUS_DESC, Operator.PLUS_ID, Operator.PLUS_SYN, Operator.PLUS_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(Operator.MINUS_STR, Operator.MINUS_DESC, Operator.MINUS_ID, Operator.MINUS_SYN, Operator.MINUS_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(Operator.MULTIPLY_STR, Operator.MULTIPLY_DESC, Operator.MULTIPLY_ID, Operator.MULTIPLY_SYN, Operator.MULTIPLY_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(Operator.DIVIDE_STR, Operator.DIVIDE_DESC, Operator.DIVIDE_ID, Operator.DIVIDE_SYN, Operator.DIVIDE_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(Operator.POWER_STR, Operator.POWER_DESC, Operator.POWER_ID, Operator.POWER_SYN, Operator.POWER_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(Operator.FACT_STR, Operator.FACT_DESC, Operator.FACT_ID, Operator.FACT_SYN, Operator.FACT_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(Operator.MOD_STR, Operator.MOD_DESC, Operator.MOD_ID, Operator.MOD_SYN, Operator.MOD_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(Operator.PERC_STR, Operator.PERC_DESC, Operator.PERC_ID, Operator.PERC_SYN, Operator.PERC_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(Operator.TETRATION_STR, Operator.TETRATION_DESC, Operator.TETRATION_ID, Operator.TETRATION_SYN, Operator.TETRATION_SINCE_$LI$(), Operator.TYPE_ID);
        this.addKeyWord(BooleanOperator.NEG_STR, BooleanOperator.NEG_DESC, BooleanOperator.NEG_ID, BooleanOperator.NEG_SYN, BooleanOperator.NEG_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.AND_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND_SYN, BooleanOperator.AND_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.AND1_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND1_SYN, BooleanOperator.AND_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.AND2_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND2_SYN, BooleanOperator.AND_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.NAND_STR_$LI$(), BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN_$LI$(), BooleanOperator.NAND_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.NAND1_STR_$LI$(), BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND1_SYN_$LI$(), BooleanOperator.NAND_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.NAND2_STR_$LI$(), BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND2_SYN_$LI$(), BooleanOperator.NAND_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.OR_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR_SYN, BooleanOperator.OR_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.OR1_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR1_SYN, BooleanOperator.OR_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.OR2_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR2_SYN, BooleanOperator.OR_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.NOR_STR_$LI$(), BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN_$LI$(), BooleanOperator.NOR_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.NOR1_STR_$LI$(), BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR1_SYN_$LI$(), BooleanOperator.NOR_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.NOR2_STR_$LI$(), BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR2_SYN_$LI$(), BooleanOperator.NOR_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.XOR_STR, BooleanOperator.XOR_DESC, BooleanOperator.XOR_ID, BooleanOperator.XOR_SYN, BooleanOperator.XOR_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.IMP_STR, BooleanOperator.IMP_DESC, BooleanOperator.IMP_ID, BooleanOperator.IMP_SYN, BooleanOperator.IMP_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.NIMP_STR, BooleanOperator.NIMP_DESC, BooleanOperator.NIMP_ID, BooleanOperator.NIMP_SYN, BooleanOperator.NIMP_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.CIMP_STR, BooleanOperator.CIMP_DESC, BooleanOperator.CIMP_ID, BooleanOperator.CIMP_SYN, BooleanOperator.CIMP_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.CNIMP_STR, BooleanOperator.CNIMP_DESC, BooleanOperator.CNIMP_ID, BooleanOperator.CNIMP_SYN, BooleanOperator.CNIMP_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BooleanOperator.EQV_STR, BooleanOperator.EQV_DESC, BooleanOperator.EQV_ID, BooleanOperator.EQV_SYN, BooleanOperator.EQV_SINCE_$LI$(), BooleanOperator.TYPE_ID);
        this.addKeyWord(BinaryRelation.EQ_STR, BinaryRelation.EQ_DESC, BinaryRelation.EQ_ID, BinaryRelation.EQ_SYN, BinaryRelation.EQ_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        this.addKeyWord(BinaryRelation.EQ1_STR, BinaryRelation.EQ_DESC, BinaryRelation.EQ_ID, BinaryRelation.EQ1_SYN, BinaryRelation.EQ_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        this.addKeyWord(BinaryRelation.NEQ_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ_SYN, BinaryRelation.NEQ_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        this.addKeyWord(BinaryRelation.NEQ1_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ1_SYN, BinaryRelation.NEQ_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        this.addKeyWord(BinaryRelation.NEQ2_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ2_SYN, BinaryRelation.NEQ_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        this.addKeyWord(BinaryRelation.LT_STR, BinaryRelation.LT_DESC, BinaryRelation.LT_ID, BinaryRelation.LT_SYN, BinaryRelation.LT_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        this.addKeyWord(BinaryRelation.GT_STR, BinaryRelation.GT_DESC, BinaryRelation.GT_ID, BinaryRelation.GT_SYN, BinaryRelation.GT_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        this.addKeyWord(BinaryRelation.LEQ_STR, BinaryRelation.LEQ_DESC, BinaryRelation.LEQ_ID, BinaryRelation.LEQ_SYN, BinaryRelation.LEQ_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        this.addKeyWord(BinaryRelation.GEQ_STR, BinaryRelation.GEQ_DESC, BinaryRelation.GEQ_ID, BinaryRelation.GEQ_SYN, BinaryRelation.GEQ_SINCE_$LI$(), BinaryRelation.TYPE_ID);
        if (this.parserKeyWordsOnly === false){
            this.addKeyWord(Function1Arg.SIN_STR, Function1Arg.SIN_DESC, Function1Arg.SIN_ID, Function1Arg.SIN_SYN_$LI$(), Function1Arg.SIN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.COS_STR, Function1Arg.COS_DESC, Function1Arg.COS_ID, Function1Arg.COS_SYN_$LI$(), Function1Arg.COS_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.TAN_STR, Function1Arg.TAN_DESC, Function1Arg.TAN_ID, Function1Arg.TAN_SYN_$LI$(), Function1Arg.TAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.TG_STR, Function1Arg.TAN_DESC, Function1Arg.TAN_ID, Function1Arg.TG_SYN_$LI$(), Function1Arg.TAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.CTAN_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.CTAN_SYN_$LI$(), Function1Arg.CTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.CTG_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.CTG_SYN_$LI$(), Function1Arg.CTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.COT_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.COT_SYN_$LI$(), Function1Arg.CTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SEC_STR, Function1Arg.SEC_DESC, Function1Arg.SEC_ID, Function1Arg.SEC_SYN_$LI$(), Function1Arg.SEC_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.COSEC_STR, Function1Arg.COSEC_DESC, Function1Arg.COSEC_ID, Function1Arg.COSEC_SYN_$LI$(), Function1Arg.COSEC_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.CSC_STR, Function1Arg.COSEC_DESC, Function1Arg.COSEC_ID, Function1Arg.CSC_SYN_$LI$(), Function1Arg.COSEC_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ASIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ASIN_SYN_$LI$(), Function1Arg.ASIN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARSIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ARSIN_SYN_$LI$(), Function1Arg.ASIN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCSIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ARCSIN_SYN_$LI$(), Function1Arg.ASIN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ACOS_SYN_$LI$(), Function1Arg.ACOS_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ARCOS_SYN_$LI$(), Function1Arg.ACOS_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ARCCOS_SYN_$LI$(), Function1Arg.ACOS_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ATAN_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ATAN_SYN_$LI$(), Function1Arg.ATAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCTAN_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ARCTAN_SYN_$LI$(), Function1Arg.ATAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ATG_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ATG_SYN_$LI$(), Function1Arg.ATAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCTG_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ARCTG_SYN_$LI$(), Function1Arg.ATAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACTAN_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACTAN_SYN_$LI$(), Function1Arg.ACTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCTAN_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCTAN_SYN_$LI$(), Function1Arg.ACTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACTG_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACTG_SYN_$LI$(), Function1Arg.ACTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCTG_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCTG_SYN_$LI$(), Function1Arg.ACTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACOT_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACOT_SYN_$LI$(), Function1Arg.ACTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCOT_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCOT_SYN_$LI$(), Function1Arg.ACTAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.LN_STR, Function1Arg.LN_DESC, Function1Arg.LN_ID, Function1Arg.LN_SYN_$LI$(), Function1Arg.LN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.LOG2_STR, Function1Arg.LOG2_DESC, Function1Arg.LOG2_ID, Function1Arg.LOG2_SYN_$LI$(), Function1Arg.LOG2_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.LOG10_STR, Function1Arg.LOG10_DESC, Function1Arg.LOG10_ID, Function1Arg.LOG10_SYN_$LI$(), Function1Arg.LOG10_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.RAD_STR, Function1Arg.RAD_DESC, Function1Arg.RAD_ID, Function1Arg.RAD_SYN_$LI$(), Function1Arg.RAD_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.EXP_STR, Function1Arg.EXP_DESC, Function1Arg.EXP_ID, Function1Arg.EXP_SYN_$LI$(), Function1Arg.EXP_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SQRT_STR, Function1Arg.SQRT_DESC, Function1Arg.SQRT_ID, Function1Arg.SQRT_SYN_$LI$(), Function1Arg.SQRT_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SINH_STR, Function1Arg.SINH_DESC, Function1Arg.SINH_ID, Function1Arg.SINH_SYN_$LI$(), Function1Arg.SINH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.COSH_STR, Function1Arg.COSH_DESC, Function1Arg.COSH_ID, Function1Arg.COSH_SYN_$LI$(), Function1Arg.COSH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.TANH_STR, Function1Arg.TANH_DESC, Function1Arg.TANH_ID, Function1Arg.TANH_SYN_$LI$(), Function1Arg.TANH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.TGH_STR, Function1Arg.TANH_DESC, Function1Arg.TANH_ID, Function1Arg.TGH_SYN_$LI$(), Function1Arg.TANH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.CTANH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.CTANH_SYN_$LI$(), Function1Arg.COTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.COTH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.COTH_SYN_$LI$(), Function1Arg.COTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.CTGH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.CTGH_SYN_$LI$(), Function1Arg.COTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SECH_STR, Function1Arg.SECH_DESC, Function1Arg.SECH_ID, Function1Arg.SECH_SYN_$LI$(), Function1Arg.SECH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.CSCH_STR, Function1Arg.CSCH_DESC, Function1Arg.CSCH_ID, Function1Arg.CSCH_SYN_$LI$(), Function1Arg.CSCH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.COSECH_STR, Function1Arg.CSCH_DESC, Function1Arg.CSCH_ID, Function1Arg.COSECH_SYN_$LI$(), Function1Arg.CSCH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.DEG_STR, Function1Arg.DEG_DESC, Function1Arg.DEG_ID, Function1Arg.DEG_SYN_$LI$(), Function1Arg.DEG_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ABS_STR, Function1Arg.ABS_DESC, Function1Arg.ABS_ID, Function1Arg.ABS_SYN_$LI$(), Function1Arg.ABS_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SGN_STR, Function1Arg.SGN_DESC, Function1Arg.SGN_ID, Function1Arg.SGN_SYN_$LI$(), Function1Arg.SGN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.FLOOR_STR, Function1Arg.FLOOR_DESC, Function1Arg.FLOOR_ID, Function1Arg.FLOOR_SYN_$LI$(), Function1Arg.FLOOR_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.CEIL_STR, Function1Arg.CEIL_DESC, Function1Arg.CEIL_ID, Function1Arg.CEIL_SYN_$LI$(), Function1Arg.CEIL_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.NOT_STR, Function1Arg.NOT_DESC, Function1Arg.NOT_ID, Function1Arg.NOT_SYN_$LI$(), Function1Arg.NOT_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ASINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ASINH_SYN_$LI$(), Function1Arg.ARSINH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARSINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ARSINH_SYN_$LI$(), Function1Arg.ARSINH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCSINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ARCSINH_SYN_$LI$(), Function1Arg.ARSINH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ACOSH_SYN_$LI$(), Function1Arg.ARCOSH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ARCOSH_SYN_$LI$(), Function1Arg.ARCOSH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ARCCOSH_SYN_$LI$(), Function1Arg.ARCOSH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ATANH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ATANH_SYN_$LI$(), Function1Arg.ARTANH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCTANH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ARCTANH_SYN_$LI$(), Function1Arg.ARTANH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ATGH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ATGH_SYN_$LI$(), Function1Arg.ARTANH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCTGH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ARCTGH_SYN_$LI$(), Function1Arg.ARTANH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACTANH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACTANH_SYN_$LI$(), Function1Arg.ARCOTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCTANH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCTANH_SYN_$LI$(), Function1Arg.ARCOTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACOTH_SYN_$LI$(), Function1Arg.ARCOTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCOTH_SYN_$LI$(), Function1Arg.ARCOTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCOTH_SYN_$LI$(), Function1Arg.ARCOTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACTGH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACTGH_SYN_$LI$(), Function1Arg.ARCOTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCTGH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCTGH_SYN_$LI$(), Function1Arg.ARCOTH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ASECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ASECH_SYN_$LI$(), Function1Arg.ARSECH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARSECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ARSECH_SYN_$LI$(), Function1Arg.ARSECH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCSECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ARCSECH_SYN_$LI$(), Function1Arg.ARSECH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ACSCH_SYN_$LI$(), Function1Arg.ARCSCH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCSCH_SYN_$LI$(), Function1Arg.ARCSCH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCCSCH_SYN_$LI$(), Function1Arg.ARCSCH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ACOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ACOSECH_SYN_$LI$(), Function1Arg.ARCSCH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCOSECH_SYN_$LI$(), Function1Arg.ARCSCH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCCOSECH_SYN_$LI$(), Function1Arg.ARCSCH_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SA_STR, Function1Arg.SA_DESC, Function1Arg.SA_ID, Function1Arg.SA_SYN_$LI$(), Function1Arg.SA_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SA1_STR, Function1Arg.SA_DESC, Function1Arg.SA_ID, Function1Arg.SA1_SYN_$LI$(), Function1Arg.SA_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SINC_STR, Function1Arg.SINC_DESC, Function1Arg.SINC_ID, Function1Arg.SINC_SYN_$LI$(), Function1Arg.SINC_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.BELL_NUMBER_STR, Function1Arg.BELL_NUMBER_DESC, Function1Arg.BELL_NUMBER_ID, Function1Arg.BELL_NUMBER_SYN_$LI$(), Function1Arg.BELL_NUMBER_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.FIBONACCI_NUMBER_STR, Function1Arg.FIBONACCI_NUMBER_DESC, Function1Arg.FIBONACCI_NUMBER_ID, Function1Arg.FIBONACCI_NUMBER_SYN_$LI$(), Function1Arg.FIBONACCI_NUMBER_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.LUCAS_NUMBER_STR, Function1Arg.LUCAS_NUMBER_DESC, Function1Arg.LUCAS_NUMBER_ID, Function1Arg.LUCAS_NUMBER_SYN_$LI$(), Function1Arg.LUCAS_NUMBER_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.HARMONIC_NUMBER_STR, Function1Arg.HARMONIC_NUMBER_DESC, Function1Arg.HARMONIC_NUMBER_ID, Function1Arg.HARMONIC_NUMBER_SYN_$LI$(), Function1Arg.HARMONIC_NUMBER_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.IS_PRIME_STR, Function1Arg.IS_PRIME_DESC, Function1Arg.IS_PRIME_ID, Function1Arg.IS_PRIME_SYN_$LI$(), Function1Arg.IS_PRIME_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.PRIME_COUNT_STR, Function1Arg.PRIME_COUNT_DESC, Function1Arg.PRIME_COUNT_ID, Function1Arg.PRIME_COUNT_SYN_$LI$(), Function1Arg.PRIME_COUNT_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.EXP_INT_STR, Function1Arg.EXP_INT_DESC, Function1Arg.EXP_INT_ID, Function1Arg.EXP_INT_SYN_$LI$(), Function1Arg.EXP_INT_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.LOG_INT_STR, Function1Arg.LOG_INT_DESC, Function1Arg.LOG_INT_ID, Function1Arg.LOG_INT_SYN_$LI$(), Function1Arg.LOG_INT_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.OFF_LOG_INT_STR, Function1Arg.OFF_LOG_INT_DESC, Function1Arg.OFF_LOG_INT_ID, Function1Arg.OFF_LOG_INT_SYN_$LI$(), Function1Arg.OFF_LOG_INT_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.GAUSS_ERF_STR, Function1Arg.GAUSS_ERF_DESC, Function1Arg.GAUSS_ERF_ID, Function1Arg.GAUSS_ERF_SYN_$LI$(), Function1Arg.GAUSS_ERF_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.GAUSS_ERFC_STR, Function1Arg.GAUSS_ERFC_DESC, Function1Arg.GAUSS_ERFC_ID, Function1Arg.GAUSS_ERFC_SYN_$LI$(), Function1Arg.GAUSS_ERFC_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.GAUSS_ERF_INV_STR, Function1Arg.GAUSS_ERF_INV_DESC, Function1Arg.GAUSS_ERF_INV_ID, Function1Arg.GAUSS_ERF_INV_SYN_$LI$(), Function1Arg.GAUSS_ERF_INV_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.GAUSS_ERFC_INV_STR, Function1Arg.GAUSS_ERFC_INV_DESC, Function1Arg.GAUSS_ERFC_INV_ID, Function1Arg.GAUSS_ERFC_INV_SYN_$LI$(), Function1Arg.GAUSS_ERFC_INV_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ULP_STR, Function1Arg.ULP_DESC, Function1Arg.ULP_ID, Function1Arg.ULP_SYN_$LI$(), Function1Arg.ULP_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ISNAN_STR, Function1Arg.ISNAN_DESC, Function1Arg.ISNAN_ID, Function1Arg.ISNAN_SYN_$LI$(), Function1Arg.ISNAN_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.NDIG10_STR, Function1Arg.NDIG10_DESC, Function1Arg.NDIG10_ID, Function1Arg.NDIG10_SYN_$LI$(), Function1Arg.NDIG10_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.NFACT_STR, Function1Arg.NFACT_DESC, Function1Arg.NFACT_ID, Function1Arg.NFACT_SYN_$LI$(), Function1Arg.NFACT_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCSEC_STR, Function1Arg.ARCSEC_DESC, Function1Arg.ARCSEC_ID, Function1Arg.ARCSEC_SYN_$LI$(), Function1Arg.ARCSEC_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.ARCCSC_STR, Function1Arg.ARCCSC_DESC, Function1Arg.ARCCSC_ID, Function1Arg.ARCCSC_SYN_$LI$(), Function1Arg.ARCCSC_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.GAMMA_STR, Function1Arg.GAMMA_DESC, Function1Arg.GAMMA_ID, Function1Arg.GAMMA_SYN_$LI$(), Function1Arg.GAMMA_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.LAMBERT_W0_STR, Function1Arg.LAMBERT_W0_DESC, Function1Arg.LAMBERT_W0_ID, Function1Arg.LAMBERT_W0_SYN_$LI$(), Function1Arg.LAMBERT_W0_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.LAMBERT_W1_STR, Function1Arg.LAMBERT_W1_DESC, Function1Arg.LAMBERT_W1_ID, Function1Arg.LAMBERT_W1_SYN_$LI$(), Function1Arg.LAMBERT_W1_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.SGN_GAMMA_STR, Function1Arg.SGN_GAMMA_DESC, Function1Arg.SGN_GAMMA_ID, Function1Arg.SGN_GAMMA_SYN_$LI$(), Function1Arg.SGN_GAMMA_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.LOG_GAMMA_STR, Function1Arg.LOG_GAMMA_DESC, Function1Arg.LOG_GAMMA_ID, Function1Arg.LOG_GAMMA_SYN_$LI$(), Function1Arg.LOG_GAMMA_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function1Arg.DI_GAMMA_STR, Function1Arg.DI_GAMMA_DESC, Function1Arg.DI_GAMMA_ID, Function1Arg.DI_GAMMA_SYN_$LI$(), Function1Arg.DI_GAMMA_SINCE_$LI$(), Function1Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.LOG_STR, Function2Arg.LOG_DESC, Function2Arg.LOG_ID, Function2Arg.LOG_SYN, Function2Arg.LOG_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.MOD_STR, Function2Arg.MOD_DESC, Function2Arg.MOD_ID, Function2Arg.MOD_SYN, Function2Arg.MOD_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.BINOM_COEFF_STR, Function2Arg.BINOM_COEFF_DESC, Function2Arg.BINOM_COEFF_ID, Function2Arg.BINOM_COEFF_SYN, Function2Arg.BINOM_COEFF_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.BINOM_COEFF_NCK_STR, Function2Arg.BINOM_COEFF_DESC, Function2Arg.BINOM_COEFF_ID, Function2Arg.BINOM_COEFF_NCK_SYN_$LI$(), Function2Arg.BINOM_COEFF_NCK_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.BERNOULLI_NUMBER_STR, Function2Arg.BERNOULLI_NUMBER_DESC, Function2Arg.BERNOULLI_NUMBER_ID, Function2Arg.BERNOULLI_NUMBER_SYN, Function2Arg.BERNOULLI_NUMBER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.STIRLING1_NUMBER_STR, Function2Arg.STIRLING1_NUMBER_DESC, Function2Arg.STIRLING1_NUMBER_ID, Function2Arg.STIRLING1_NUMBER_SYN, Function2Arg.STIRLING1_NUMBER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.STIRLING2_NUMBER_STR, Function2Arg.STIRLING2_NUMBER_DESC, Function2Arg.STIRLING2_NUMBER_ID, Function2Arg.STIRLING2_NUMBER_SYN, Function2Arg.STIRLING2_NUMBER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.WORPITZKY_NUMBER_STR, Function2Arg.WORPITZKY_NUMBER_DESC, Function2Arg.WORPITZKY_NUMBER_ID, Function2Arg.WORPITZKY_NUMBER_SYN, Function2Arg.WORPITZKY_NUMBER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.EULER_NUMBER_STR, Function2Arg.EULER_NUMBER_DESC, Function2Arg.EULER_NUMBER_ID, Function2Arg.EULER_NUMBER_SYN, Function2Arg.EULER_NUMBER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.KRONECKER_DELTA_STR, Function2Arg.KRONECKER_DELTA_DESC, Function2Arg.KRONECKER_DELTA_ID, Function2Arg.KRONECKER_DELTA_SYN, Function2Arg.KRONECKER_DELTA_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.EULER_POLYNOMIAL_STR, Function2Arg.EULER_POLYNOMIAL_DESC, Function2Arg.EULER_POLYNOMIAL_ID, Function2Arg.EULER_POLYNOMIAL_SYN, Function2Arg.EULER_POLYNOMIAL_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.HARMONIC_NUMBER_STR, Function2Arg.HARMONIC_NUMBER_DESC, Function2Arg.HARMONIC_NUMBER_ID, Function2Arg.HARMONIC_NUMBER_SYN, Function2Arg.HARMONIC_NUMBER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.RND_UNIFORM_CONT_STR, Function2Arg.RND_UNIFORM_CONT_DESC, Function2Arg.RND_UNIFORM_CONT_ID, Function2Arg.RND_UNIFORM_CONT_SYN, Function2Arg.RND_UNIFORM_CONT_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.RND_UNIFORM_DISCR_STR, Function2Arg.RND_UNIFORM_DISCR_DESC, Function2Arg.RND_UNIFORM_DISCR_ID, Function2Arg.RND_UNIFORM_DISCR_SYN, Function2Arg.RND_UNIFORM_DISCR_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.ROUND_STR, Function2Arg.ROUND_DESC, Function2Arg.ROUND_ID, Function2Arg.ROUND_SYN, Function2Arg.ROUND_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.RND_NORMAL_STR, Function2Arg.RND_NORMAL_DESC, Function2Arg.RND_NORMAL_ID, Function2Arg.RND_NORMAL_SYN, Function2Arg.RND_NORMAL_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.NDIG_STR, Function2Arg.NDIG_DESC, Function2Arg.NDIG_ID, Function2Arg.NDIG_SYN, Function2Arg.NDIG_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.DIGIT10_STR, Function2Arg.DIGIT10_DESC, Function2Arg.DIGIT10_ID, Function2Arg.DIGIT10_SYN, Function2Arg.DIGIT10_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.FACTVAL_STR, Function2Arg.FACTVAL_DESC, Function2Arg.FACTVAL_ID, Function2Arg.FACTVAL_SYN, Function2Arg.FACTVAL_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.FACTEXP_STR, Function2Arg.FACTEXP_DESC, Function2Arg.FACTEXP_ID, Function2Arg.FACTEXP_SYN, Function2Arg.FACTEXP_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.ROOT_STR, Function2Arg.ROOT_DESC, Function2Arg.ROOT_ID, Function2Arg.ROOT_SYN, Function2Arg.ROOT_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.INC_GAMMA_LOWER_STR, Function2Arg.INC_GAMMA_LOWER_DESC, Function2Arg.INC_GAMMA_LOWER_ID, Function2Arg.INC_GAMMA_LOWER_SYN_$LI$(), Function2Arg.INC_GAMMA_LOWER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.INC_GAMMA_UPPER_STR, Function2Arg.INC_GAMMA_UPPER_DESC, Function2Arg.INC_GAMMA_UPPER_ID, Function2Arg.INC_GAMMA_UPPER_SYN_$LI$(), Function2Arg.INC_GAMMA_UPPER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.REG_GAMMA_LOWER_STR, Function2Arg.REG_GAMMA_LOWER_DESC, Function2Arg.REG_GAMMA_LOWER_ID, Function2Arg.REG_GAMMA_LOWER_SYN_$LI$(), Function2Arg.REG_GAMMA_LOWER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.REG_GAMMA_UPPER_STR, Function2Arg.REG_GAMMA_UPPER_DESC, Function2Arg.REG_GAMMA_UPPER_ID, Function2Arg.REG_GAMMA_UPPER_SYN_$LI$(), Function2Arg.REG_GAMMA_UPPER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.REG_GAMMA_LOWER_P_STR, Function2Arg.REG_GAMMA_LOWER_DESC, Function2Arg.REG_GAMMA_LOWER_ID, Function2Arg.REG_GAMMA_LOWER_P_SYN_$LI$(), Function2Arg.REG_GAMMA_LOWER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.REG_GAMMA_UPPER_Q_STR, Function2Arg.REG_GAMMA_UPPER_DESC, Function2Arg.REG_GAMMA_UPPER_ID, Function2Arg.REG_GAMMA_UPPER_Q_SYN_$LI$(), Function2Arg.REG_GAMMA_UPPER_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.PERMUTATIONS_STR, Function2Arg.PERMUTATIONS_DESC, Function2Arg.PERMUTATIONS_ID, Function2Arg.PERMUTATIONS_SYN_$LI$(), Function2Arg.PERMUTATIONS_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.BETA_STR, Function2Arg.BETA_DESC, Function2Arg.BETA_ID, Function2Arg.BETA_SYN_$LI$(), Function2Arg.BETA_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function2Arg.LOG_BETA_STR, Function2Arg.LOG_BETA_DESC, Function2Arg.LOG_BETA_ID, Function2Arg.LOG_BETA_SYN_$LI$(), Function2Arg.LOG_BETA_SINCE_$LI$(), Function2Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.IF_STR, Function3Arg.IF_DESC, Function3Arg.IF_CONDITION_ID, Function3Arg.IF_SYN, Function3Arg.IF_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.CHI_STR, Function3Arg.CHI_DESC, Function3Arg.CHI_ID, Function3Arg.CHI_SYN, Function3Arg.CHI_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.CHI_LR_STR, Function3Arg.CHI_LR_DESC, Function3Arg.CHI_LR_ID, Function3Arg.CHI_LR_SYN, Function3Arg.CHI_LR_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.CHI_L_STR, Function3Arg.CHI_L_DESC, Function3Arg.CHI_L_ID, Function3Arg.CHI_L_SYN, Function3Arg.CHI_L_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.CHI_R_STR, Function3Arg.CHI_R_DESC, Function3Arg.CHI_R_ID, Function3Arg.CHI_R_SYN, Function3Arg.CHI_R_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.PDF_UNIFORM_CONT_STR, Function3Arg.PDF_UNIFORM_CONT_DESC, Function3Arg.PDF_UNIFORM_CONT_ID, Function3Arg.PDF_UNIFORM_CONT_SYN, Function3Arg.PDF_UNIFORM_CONT_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.CDF_UNIFORM_CONT_STR, Function3Arg.CDF_UNIFORM_CONT_DESC, Function3Arg.CDF_UNIFORM_CONT_ID, Function3Arg.CDF_UNIFORM_CONT_SYN, Function3Arg.CDF_UNIFORM_CONT_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.QNT_UNIFORM_CONT_STR, Function3Arg.QNT_UNIFORM_CONT_DESC, Function3Arg.QNT_UNIFORM_CONT_ID, Function3Arg.QNT_UNIFORM_CONT_SYN, Function3Arg.QNT_UNIFORM_CONT_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.PDF_NORMAL_STR, Function3Arg.PDF_NORMAL_DESC, Function3Arg.PDF_NORMAL_ID, Function3Arg.PDF_NORMAL_SYN, Function3Arg.PDF_NORMAL_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.CDF_NORMAL_STR, Function3Arg.CDF_NORMAL_DESC, Function3Arg.CDF_NORMAL_ID, Function3Arg.CDF_NORMAL_SYN, Function3Arg.CDF_NORMAL_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.QNT_NORMAL_STR, Function3Arg.QNT_NORMAL_DESC, Function3Arg.QNT_NORMAL_ID, Function3Arg.QNT_NORMAL_SYN, Function3Arg.QNT_NORMAL_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.DIGIT_STR, Function3Arg.DIGIT_DESC, Function3Arg.DIGIT_ID, Function3Arg.DIGIT_SYN, Function3Arg.DIGIT_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.INC_BETA_STR, Function3Arg.INC_BETA_DESC, Function3Arg.INC_BETA_ID, Function3Arg.INC_BETA_SYN_$LI$(), Function3Arg.INC_BETA_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.REG_BETA_STR, Function3Arg.REG_BETA_DESC, Function3Arg.REG_BETA_ID, Function3Arg.REG_BETA_SYN_$LI$(), Function3Arg.REG_BETA_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(Function3Arg.REG_BETA_I_STR, Function3Arg.REG_BETA_DESC, Function3Arg.REG_BETA_ID, Function3Arg.REG_BETA_I_SYN_$LI$(), Function3Arg.REG_BETA_I_SINCE_$LI$(), Function3Arg.TYPE_ID);
            this.addKeyWord(FunctionVariadic.IFF_STR, FunctionVariadic.IFF_DESC, FunctionVariadic.IFF_ID, FunctionVariadic.IFF_SYN, FunctionVariadic.IFF_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.MIN_STR, FunctionVariadic.MIN_DESC, FunctionVariadic.MIN_ID, FunctionVariadic.MIN_SYN, FunctionVariadic.MIN_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.MAX_STR, FunctionVariadic.MAX_DESC, FunctionVariadic.MAX_ID, FunctionVariadic.MAX_SYN, FunctionVariadic.MAX_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.CONT_FRAC_STR, FunctionVariadic.CONT_FRAC_DESC, FunctionVariadic.CONT_FRAC_ID, FunctionVariadic.CONT_FRAC_SYN, FunctionVariadic.CONT_FRAC_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.CONT_POL_STR, FunctionVariadic.CONT_POL_DESC, FunctionVariadic.CONT_POL_ID, FunctionVariadic.CONT_POL_SYN, FunctionVariadic.CONT_POL_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.GCD_STR, FunctionVariadic.GCD_DESC, FunctionVariadic.GCD_ID, FunctionVariadic.GCD_SYN, FunctionVariadic.GCD_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.LCM_STR, FunctionVariadic.LCM_DESC, FunctionVariadic.LCM_ID, FunctionVariadic.LCM_SYN, FunctionVariadic.LCM_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.SUM_STR, FunctionVariadic.SUM_DESC, FunctionVariadic.SUM_ID, FunctionVariadic.SUM_SYN, FunctionVariadic.SUM_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.PROD_STR, FunctionVariadic.PROD_DESC, FunctionVariadic.PROD_ID, FunctionVariadic.PROD_SYN, FunctionVariadic.PROD_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.AVG_STR, FunctionVariadic.AVG_DESC, FunctionVariadic.AVG_ID, FunctionVariadic.AVG_SYN, FunctionVariadic.AVG_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.VAR_STR, FunctionVariadic.VAR_DESC, FunctionVariadic.VAR_ID, FunctionVariadic.VAR_SYN, FunctionVariadic.VAR_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.STD_STR, FunctionVariadic.STD_DESC, FunctionVariadic.STD_ID, FunctionVariadic.STD_SYN, FunctionVariadic.STD_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.RND_LIST_STR, FunctionVariadic.RND_LIST_DESC, FunctionVariadic.RND_LIST_ID, FunctionVariadic.RND_LIST_SYN, FunctionVariadic.RND_LIST_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.COALESCE_STR, FunctionVariadic.COALESCE_DESC, FunctionVariadic.COALESCE_ID, FunctionVariadic.COALESCE_SYN, FunctionVariadic.COALESCE_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.OR_STR, FunctionVariadic.OR_DESC, FunctionVariadic.OR_ID, FunctionVariadic.OR_SYN, FunctionVariadic.OR_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.AND_STR, FunctionVariadic.AND_DESC, FunctionVariadic.AND_ID, FunctionVariadic.AND_SYN, FunctionVariadic.AND_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.XOR_STR, FunctionVariadic.XOR_DESC, FunctionVariadic.XOR_ID, FunctionVariadic.XOR_SYN, FunctionVariadic.XOR_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.ARGMIN_STR, FunctionVariadic.ARGMIN_DESC, FunctionVariadic.ARGMIN_ID, FunctionVariadic.ARGMIN_SYN, FunctionVariadic.ARGMIN_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.ARGMAX_STR, FunctionVariadic.ARGMAX_DESC, FunctionVariadic.ARGMAX_ID, FunctionVariadic.ARGMAX_SYN, FunctionVariadic.ARGMAX_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.MEDIAN_STR, FunctionVariadic.MEDIAN_DESC, FunctionVariadic.MEDIAN_ID, FunctionVariadic.MEDIAN_SYN, FunctionVariadic.MEDIAN_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.MODE_STR, FunctionVariadic.MODE_DESC, FunctionVariadic.MODE_ID, FunctionVariadic.MODE_SYN, FunctionVariadic.MODE_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.BASE_STR, FunctionVariadic.BASE_DESC, FunctionVariadic.BASE_ID, FunctionVariadic.BASE_SYN, FunctionVariadic.BASE_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(FunctionVariadic.NDIST_STR, FunctionVariadic.NDIST_DESC, FunctionVariadic.NDIST_ID, FunctionVariadic.NDIST_SYN, FunctionVariadic.NDIST_SINCE_$LI$(), FunctionVariadic.TYPE_ID);
            this.addKeyWord(CalculusOperator.SUM_STR, CalculusOperator.SUM_DESC, CalculusOperator.SUM_ID, CalculusOperator.SUM_SYN, CalculusOperator.SUM_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.PROD_STR, CalculusOperator.PROD_DESC, CalculusOperator.PROD_ID, CalculusOperator.PROD_SYN, CalculusOperator.PROD_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.INT_STR, CalculusOperator.INT_DESC, CalculusOperator.INT_ID, CalculusOperator.INT_SYN, CalculusOperator.INT_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.DER_STR, CalculusOperator.DER_DESC, CalculusOperator.DER_ID, CalculusOperator.DER_SYN, CalculusOperator.DER_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.DER_LEFT_STR, CalculusOperator.DER_LEFT_DESC, CalculusOperator.DER_LEFT_ID, CalculusOperator.DER_LEFT_SYN, CalculusOperator.DER_LEFT_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.DER_RIGHT_STR, CalculusOperator.DER_RIGHT_DESC, CalculusOperator.DER_RIGHT_ID, CalculusOperator.DER_RIGHT_SYN, CalculusOperator.DER_RIGHT_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.DERN_STR, CalculusOperator.DERN_DESC, CalculusOperator.DERN_ID, CalculusOperator.DERN_SYN, CalculusOperator.DERN_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.FORW_DIFF_STR, CalculusOperator.FORW_DIFF_DESC, CalculusOperator.FORW_DIFF_ID, CalculusOperator.FORW_DIFF_SYN, CalculusOperator.FORW_DIFF_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.BACKW_DIFF_STR, CalculusOperator.BACKW_DIFF_DESC, CalculusOperator.BACKW_DIFF_ID, CalculusOperator.BACKW_DIFF_SYN, CalculusOperator.BACKW_DIFF_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.AVG_STR, CalculusOperator.AVG_DESC, CalculusOperator.AVG_ID, CalculusOperator.AVG_SYN, CalculusOperator.AVG_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.VAR_STR, CalculusOperator.VAR_DESC, CalculusOperator.VAR_ID, CalculusOperator.VAR_SYN, CalculusOperator.VAR_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.STD_STR, CalculusOperator.STD_DESC, CalculusOperator.STD_ID, CalculusOperator.STD_SYN, CalculusOperator.STD_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.MIN_STR, CalculusOperator.MIN_DESC, CalculusOperator.MIN_ID, CalculusOperator.MIN_SYN, CalculusOperator.MIN_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.MAX_STR, CalculusOperator.MAX_DESC, CalculusOperator.MAX_ID, CalculusOperator.MAX_SYN, CalculusOperator.MAX_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(CalculusOperator.SOLVE_STR, CalculusOperator.SOLVE_DESC, CalculusOperator.SOLVE_ID, CalculusOperator.SOLVE_SYN, CalculusOperator.SOLVE_SINCE_$LI$(), CalculusOperator.TYPE_ID);
            this.addKeyWord(ConstantValue.PI_STR, ConstantValue.PI_DESC, ConstantValue.PI_ID, ConstantValue.PI_SYN_$LI$(), ConstantValue.PI_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.EULER_STR, ConstantValue.EULER_DESC, ConstantValue.EULER_ID, ConstantValue.EULER_SYN_$LI$(), ConstantValue.EULER_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.EULER_MASCHERONI_STR, ConstantValue.EULER_MASCHERONI_DESC, ConstantValue.EULER_MASCHERONI_ID, ConstantValue.EULER_MASCHERONI_SYN_$LI$(), ConstantValue.EULER_MASCHERONI_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.GOLDEN_RATIO_STR, ConstantValue.GOLDEN_RATIO_DESC, ConstantValue.GOLDEN_RATIO_ID, ConstantValue.GOLDEN_RATIO_SYN_$LI$(), ConstantValue.GOLDEN_RATIO_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PLASTIC_STR, ConstantValue.PLASTIC_DESC, ConstantValue.PLASTIC_ID, ConstantValue.PLASTIC_SYN_$LI$(), ConstantValue.PLASTIC_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.EMBREE_TREFETHEN_STR, ConstantValue.EMBREE_TREFETHEN_DESC, ConstantValue.EMBREE_TREFETHEN_ID, ConstantValue.EMBREE_TREFETHEN_SYN_$LI$(), ConstantValue.EMBREE_TREFETHEN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.FEIGENBAUM_DELTA_STR, ConstantValue.FEIGENBAUM_DELTA_DESC, ConstantValue.FEIGENBAUM_DELTA_ID, ConstantValue.FEIGENBAUM_DELTA_SYN_$LI$(), ConstantValue.FEIGENBAUM_DELTA_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.FEIGENBAUM_ALFA_STR, ConstantValue.FEIGENBAUM_ALFA_DESC, ConstantValue.FEIGENBAUM_ALFA_ID, ConstantValue.FEIGENBAUM_ALFA_SYN_$LI$(), ConstantValue.FEIGENBAUM_ALFA_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.TWIN_PRIME_STR, ConstantValue.TWIN_PRIME_DESC, ConstantValue.TWIN_PRIME_ID, ConstantValue.TWIN_PRIME_SYN_$LI$(), ConstantValue.TWIN_PRIME_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MEISSEL_MERTEENS_STR, ConstantValue.MEISSEL_MERTEENS_DESC, ConstantValue.MEISSEL_MERTEENS_ID, ConstantValue.MEISSEL_MERTEENS_SYN_$LI$(), ConstantValue.MEISSEL_MERTEENS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.BRAUN_TWIN_PRIME_STR, ConstantValue.BRAUN_TWIN_PRIME_DESC, ConstantValue.BRAUN_TWIN_PRIME_ID, ConstantValue.BRAUN_TWIN_PRIME_SYN_$LI$(), ConstantValue.BRAUN_TWIN_PRIME_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.BRAUN_PRIME_QUADR_STR, ConstantValue.BRAUN_PRIME_QUADR_DESC, ConstantValue.BRAUN_PRIME_QUADR_ID, ConstantValue.BRAUN_PRIME_QUADR_SYN_$LI$(), ConstantValue.BRAUN_PRIME_QUADR_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.BRUIJN_NEWMAN_STR, ConstantValue.BRUIJN_NEWMAN_DESC, ConstantValue.BRUIJN_NEWMAN_ID, ConstantValue.BRUIJN_NEWMAN_SYN_$LI$(), ConstantValue.BRUIJN_NEWMAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.CATALAN_STR, ConstantValue.CATALAN_DESC, ConstantValue.CATALAN_ID, ConstantValue.CATALAN_SYN_$LI$(), ConstantValue.CATALAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LANDAU_RAMANUJAN_STR, ConstantValue.LANDAU_RAMANUJAN_DESC, ConstantValue.LANDAU_RAMANUJAN_ID, ConstantValue.LANDAU_RAMANUJAN_SYN_$LI$(), ConstantValue.LANDAU_RAMANUJAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.VISWANATH_STR, ConstantValue.VISWANATH_DESC, ConstantValue.VISWANATH_ID, ConstantValue.VISWANATH_SYN_$LI$(), ConstantValue.VISWANATH_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LEGENDRE_STR, ConstantValue.LEGENDRE_DESC, ConstantValue.LEGENDRE_ID, ConstantValue.LEGENDRE_SYN_$LI$(), ConstantValue.LEGENDRE_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.RAMANUJAN_SOLDNER_STR, ConstantValue.RAMANUJAN_SOLDNER_DESC, ConstantValue.RAMANUJAN_SOLDNER_ID, ConstantValue.RAMANUJAN_SOLDNER_SYN_$LI$(), ConstantValue.RAMANUJAN_SOLDNER_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.ERDOS_BORWEIN_STR, ConstantValue.ERDOS_BORWEIN_DESC, ConstantValue.ERDOS_BORWEIN_ID, ConstantValue.ERDOS_BORWEIN_SYN_$LI$(), ConstantValue.ERDOS_BORWEIN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.BERNSTEIN_STR, ConstantValue.BERNSTEIN_DESC, ConstantValue.BERNSTEIN_ID, ConstantValue.BERNSTEIN_SYN_$LI$(), ConstantValue.BERNSTEIN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.GAUSS_KUZMIN_WIRSING_STR, ConstantValue.GAUSS_KUZMIN_WIRSING_DESC, ConstantValue.GAUSS_KUZMIN_WIRSING_ID, ConstantValue.GAUSS_KUZMIN_WIRSING_SYN_$LI$(), ConstantValue.GAUSS_KUZMIN_WIRSING_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.HAFNER_SARNAK_MCCURLEY_STR, ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC, ConstantValue.HAFNER_SARNAK_MCCURLEY_ID, ConstantValue.HAFNER_SARNAK_MCCURLEY_SYN_$LI$(), ConstantValue.HAFNER_SARNAK_MCCURLEY_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.GOLOMB_DICKMAN_STR, ConstantValue.GOLOMB_DICKMAN_DESC, ConstantValue.GOLOMB_DICKMAN_ID, ConstantValue.GOLOMB_DICKMAN_SYN_$LI$(), ConstantValue.GOLOMB_DICKMAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.CAHEN_STR, ConstantValue.CAHEN_DESC, ConstantValue.CAHEN_ID, ConstantValue.CAHEN_SYN_$LI$(), ConstantValue.CAHEN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LAPLACE_LIMIT_STR, ConstantValue.LAPLACE_LIMIT_DESC, ConstantValue.LAPLACE_LIMIT_ID, ConstantValue.LAPLACE_LIMIT_SYN_$LI$(), ConstantValue.LAPLACE_LIMIT_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.ALLADI_GRINSTEAD_STR, ConstantValue.ALLADI_GRINSTEAD_DESC, ConstantValue.ALLADI_GRINSTEAD_ID, ConstantValue.ALLADI_GRINSTEAD_SYN_$LI$(), ConstantValue.ALLADI_GRINSTEAD_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LENGYEL_STR, ConstantValue.LENGYEL_DESC, ConstantValue.LENGYEL_ID, ConstantValue.LENGYEL_SYN_$LI$(), ConstantValue.LENGYEL_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LEVY_STR, ConstantValue.LEVY_DESC, ConstantValue.LEVY_ID, ConstantValue.LEVY_SYN_$LI$(), ConstantValue.LEVY_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.APERY_STR, ConstantValue.APERY_DESC, ConstantValue.APERY_ID, ConstantValue.APERY_SYN_$LI$(), ConstantValue.APERY_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MILLS_STR, ConstantValue.MILLS_DESC, ConstantValue.MILLS_ID, ConstantValue.MILLS_SYN_$LI$(), ConstantValue.MILLS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.BACKHOUSE_STR, ConstantValue.BACKHOUSE_DESC, ConstantValue.BACKHOUSE_ID, ConstantValue.BACKHOUSE_SYN_$LI$(), ConstantValue.BACKHOUSE_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PORTER_STR, ConstantValue.PORTER_DESC, ConstantValue.PORTER_ID, ConstantValue.PORTER_SYN_$LI$(), ConstantValue.PORTER_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LIEB_QUARE_ICE_STR, ConstantValue.LIEB_QUARE_ICE_DESC, ConstantValue.LIEB_QUARE_ICE_ID, ConstantValue.LIEB_QUARE_ICE_SYN_$LI$(), ConstantValue.LIEB_QUARE_ICE_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.NIVEN_STR, ConstantValue.NIVEN_DESC, ConstantValue.NIVEN_ID, ConstantValue.NIVEN_SYN_$LI$(), ConstantValue.NIVEN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.SIERPINSKI_STR, ConstantValue.SIERPINSKI_DESC, ConstantValue.SIERPINSKI_ID, ConstantValue.SIERPINSKI_SYN_$LI$(), ConstantValue.SIERPINSKI_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.KHINCHIN_STR, ConstantValue.KHINCHIN_DESC, ConstantValue.KHINCHIN_ID, ConstantValue.KHINCHIN_SYN_$LI$(), ConstantValue.KHINCHIN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.FRANSEN_ROBINSON_STR, ConstantValue.FRANSEN_ROBINSON_DESC, ConstantValue.FRANSEN_ROBINSON_ID, ConstantValue.FRANSEN_ROBINSON_SYN_$LI$(), ConstantValue.FRANSEN_ROBINSON_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LANDAU_STR, ConstantValue.LANDAU_DESC, ConstantValue.LANDAU_ID, ConstantValue.LANDAU_SYN_$LI$(), ConstantValue.LANDAU_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PARABOLIC_STR, ConstantValue.PARABOLIC_DESC, ConstantValue.PARABOLIC_ID, ConstantValue.PARABOLIC_SYN_$LI$(), ConstantValue.PARABOLIC_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.OMEGA_STR, ConstantValue.OMEGA_DESC, ConstantValue.OMEGA_ID, ConstantValue.OMEGA_SYN_$LI$(), ConstantValue.OMEGA_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MRB_STR, ConstantValue.MRB_DESC, ConstantValue.MRB_ID, ConstantValue.MRB_SYN_$LI$(), ConstantValue.MRB_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LI2_STR, ConstantValue.LI2_DESC, ConstantValue.LI2_ID, ConstantValue.LI2_SYN_$LI$(), ConstantValue.LI2_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.GOMPERTZ_STR, ConstantValue.GOMPERTZ_DESC, ConstantValue.GOMPERTZ_ID, ConstantValue.GOMPERTZ_SYN_$LI$(), ConstantValue.GOMPERTZ_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LIGHT_SPEED_STR, ConstantValue.LIGHT_SPEED_DESC, ConstantValue.LIGHT_SPEED_ID, ConstantValue.LIGHT_SPEED_SYN_$LI$(), ConstantValue.LIGHT_SPEED_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.GRAVITATIONAL_CONSTANT_STR, ConstantValue.GRAVITATIONAL_CONSTANT_DESC, ConstantValue.GRAVITATIONAL_CONSTANT_ID, ConstantValue.GRAVITATIONAL_CONSTANT_SYN_$LI$(), ConstantValue.GRAVITATIONAL_CONSTANT_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.GRAVIT_ACC_EARTH_STR, ConstantValue.GRAVIT_ACC_EARTH_DESC, ConstantValue.GRAVIT_ACC_EARTH_ID, ConstantValue.GRAVIT_ACC_EARTH_SYN_$LI$(), ConstantValue.GRAVIT_ACC_EARTH_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PLANCK_CONSTANT_STR, ConstantValue.PLANCK_CONSTANT_DESC, ConstantValue.PLANCK_CONSTANT_ID, ConstantValue.PLANCK_CONSTANT_SYN_$LI$(), ConstantValue.PLANCK_CONSTANT_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PLANCK_CONSTANT_REDUCED_STR, ConstantValue.PLANCK_CONSTANT_REDUCED_DESC, ConstantValue.PLANCK_CONSTANT_REDUCED_ID, ConstantValue.PLANCK_CONSTANT_REDUCED_SYN_$LI$(), ConstantValue.PLANCK_CONSTANT_REDUCED_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PLANCK_LENGTH_STR, ConstantValue.PLANCK_LENGTH_DESC, ConstantValue.PLANCK_LENGTH_ID, ConstantValue.PLANCK_LENGTH_SYN_$LI$(), ConstantValue.PLANCK_LENGTH_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PLANCK_MASS_STR, ConstantValue.PLANCK_MASS_DESC, ConstantValue.PLANCK_MASS_ID, ConstantValue.PLANCK_MASS_SYN_$LI$(), ConstantValue.PLANCK_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PLANCK_TIME_STR, ConstantValue.PLANCK_TIME_DESC, ConstantValue.PLANCK_TIME_ID, ConstantValue.PLANCK_TIME_SYN_$LI$(), ConstantValue.PLANCK_TIME_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.LIGHT_YEAR_STR, ConstantValue.LIGHT_YEAR_DESC, ConstantValue.LIGHT_YEAR_ID, ConstantValue.LIGHT_YEAR_SYN_$LI$(), ConstantValue.LIGHT_YEAR_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.ASTRONOMICAL_UNIT_STR, ConstantValue.ASTRONOMICAL_UNIT_DESC, ConstantValue.ASTRONOMICAL_UNIT_ID, ConstantValue.ASTRONOMICAL_UNIT_SYN_$LI$(), ConstantValue.ASTRONOMICAL_UNIT_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.PARSEC_STR, ConstantValue.PARSEC_DESC, ConstantValue.PARSEC_ID, ConstantValue.PARSEC_SYN_$LI$(), ConstantValue.PARSEC_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.KILOPARSEC_STR, ConstantValue.KILOPARSEC_DESC, ConstantValue.KILOPARSEC_ID, ConstantValue.KILOPARSEC_SYN_$LI$(), ConstantValue.KILOPARSEC_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.EARTH_RADIUS_EQUATORIAL_STR, ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC, ConstantValue.EARTH_RADIUS_EQUATORIAL_ID, ConstantValue.EARTH_RADIUS_EQUATORIAL_SYN_$LI$(), ConstantValue.EARTH_RADIUS_EQUATORIAL_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.EARTH_RADIUS_POLAR_STR, ConstantValue.EARTH_RADIUS_POLAR_DESC, ConstantValue.EARTH_RADIUS_POLAR_ID, ConstantValue.EARTH_RADIUS_POLAR_SYN_$LI$(), ConstantValue.EARTH_RADIUS_POLAR_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.EARTH_RADIUS_MEAN_STR, ConstantValue.EARTH_RADIUS_MEAN_DESC, ConstantValue.EARTH_RADIUS_MEAN_ID, ConstantValue.EARTH_RADIUS_MEAN_SYN_$LI$(), ConstantValue.EARTH_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.EARTH_MASS_STR, ConstantValue.EARTH_MASS_DESC, ConstantValue.EARTH_MASS_ID, ConstantValue.EARTH_MASS_SYN_$LI$(), ConstantValue.EARTH_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.EARTH_SEMI_MAJOR_AXIS_STR, ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC, ConstantValue.EARTH_SEMI_MAJOR_AXIS_ID, ConstantValue.EARTH_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.EARTH_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MOON_RADIUS_MEAN_STR, ConstantValue.MOON_RADIUS_MEAN_DESC, ConstantValue.MOON_RADIUS_MEAN_ID, ConstantValue.MOON_RADIUS_MEAN_SYN_$LI$(), ConstantValue.MOON_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MOON_MASS_STR, ConstantValue.MOON_MASS_DESC, ConstantValue.MOON_MASS_ID, ConstantValue.MOON_MASS_SYN_$LI$(), ConstantValue.MOON_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MONN_SEMI_MAJOR_AXIS_STR, ConstantValue.MONN_SEMI_MAJOR_AXIS_DESC, ConstantValue.MONN_SEMI_MAJOR_AXIS_ID, ConstantValue.MONN_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.MONN_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.SOLAR_RADIUS_STR, ConstantValue.SOLAR_RADIUS_DESC, ConstantValue.SOLAR_RADIUS_ID, ConstantValue.SOLAR_RADIUS_SYN_$LI$(), ConstantValue.SOLAR_RADIUS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.SOLAR_MASS_STR, ConstantValue.SOLAR_MASS_DESC, ConstantValue.SOLAR_MASS_ID, ConstantValue.SOLAR_MASS_SYN_$LI$(), ConstantValue.SOLAR_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MERCURY_RADIUS_MEAN_STR, ConstantValue.MERCURY_RADIUS_MEAN_DESC, ConstantValue.MERCURY_RADIUS_MEAN_ID, ConstantValue.MERCURY_RADIUS_MEAN_SYN_$LI$(), ConstantValue.MERCURY_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MERCURY_MASS_STR, ConstantValue.MERCURY_MASS_DESC, ConstantValue.MERCURY_MASS_ID, ConstantValue.MERCURY_MASS_SYN_$LI$(), ConstantValue.MERCURY_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MERCURY_SEMI_MAJOR_AXIS_STR, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_ID, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.VENUS_RADIUS_MEAN_STR, ConstantValue.VENUS_RADIUS_MEAN_DESC, ConstantValue.VENUS_RADIUS_MEAN_ID, ConstantValue.VENUS_RADIUS_MEAN_SYN_$LI$(), ConstantValue.VENUS_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.VENUS_MASS_STR, ConstantValue.VENUS_MASS_DESC, ConstantValue.VENUS_MASS_ID, ConstantValue.VENUS_MASS_SYN_$LI$(), ConstantValue.VENUS_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.VENUS_SEMI_MAJOR_AXIS_STR, ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC, ConstantValue.VENUS_SEMI_MAJOR_AXIS_ID, ConstantValue.VENUS_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.VENUS_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MARS_RADIUS_MEAN_STR, ConstantValue.MARS_RADIUS_MEAN_DESC, ConstantValue.MARS_RADIUS_MEAN_ID, ConstantValue.MARS_RADIUS_MEAN_SYN_$LI$(), ConstantValue.MARS_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MARS_MASS_STR, ConstantValue.MARS_MASS_DESC, ConstantValue.MARS_MASS_ID, ConstantValue.MARS_MASS_SYN_$LI$(), ConstantValue.MARS_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.MARS_SEMI_MAJOR_AXIS_STR, ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC, ConstantValue.MARS_SEMI_MAJOR_AXIS_ID, ConstantValue.MARS_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.MARS_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.JUPITER_RADIUS_MEAN_STR, ConstantValue.JUPITER_RADIUS_MEAN_DESC, ConstantValue.JUPITER_RADIUS_MEAN_ID, ConstantValue.JUPITER_RADIUS_MEAN_SYN_$LI$(), ConstantValue.JUPITER_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.JUPITER_MASS_STR, ConstantValue.JUPITER_MASS_DESC, ConstantValue.JUPITER_MASS_ID, ConstantValue.JUPITER_MASS_SYN_$LI$(), ConstantValue.JUPITER_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.JUPITER_SEMI_MAJOR_AXIS_STR, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_ID, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.SATURN_RADIUS_MEAN_STR, ConstantValue.SATURN_RADIUS_MEAN_DESC, ConstantValue.SATURN_RADIUS_MEAN_ID, ConstantValue.SATURN_RADIUS_MEAN_SYN_$LI$(), ConstantValue.SATURN_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.SATURN_MASS_STR, ConstantValue.SATURN_MASS_DESC, ConstantValue.SATURN_MASS_ID, ConstantValue.SATURN_MASS_SYN_$LI$(), ConstantValue.SATURN_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.SATURN_SEMI_MAJOR_AXIS_STR, ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC, ConstantValue.SATURN_SEMI_MAJOR_AXIS_ID, ConstantValue.SATURN_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.SATURN_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.URANUS_RADIUS_MEAN_STR, ConstantValue.URANUS_RADIUS_MEAN_DESC, ConstantValue.URANUS_RADIUS_MEAN_ID, ConstantValue.URANUS_RADIUS_MEAN_SYN_$LI$(), ConstantValue.URANUS_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.URANUS_MASS_STR, ConstantValue.URANUS_MASS_DESC, ConstantValue.URANUS_MASS_ID, ConstantValue.URANUS_MASS_SYN_$LI$(), ConstantValue.URANUS_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.URANUS_SEMI_MAJOR_AXIS_STR, ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC, ConstantValue.URANUS_SEMI_MAJOR_AXIS_ID, ConstantValue.URANUS_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.URANUS_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.NEPTUNE_RADIUS_MEAN_STR, ConstantValue.NEPTUNE_RADIUS_MEAN_DESC, ConstantValue.NEPTUNE_RADIUS_MEAN_ID, ConstantValue.NEPTUNE_RADIUS_MEAN_SYN_$LI$(), ConstantValue.NEPTUNE_RADIUS_MEAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.NEPTUNE_MASS_STR, ConstantValue.NEPTUNE_MASS_DESC, ConstantValue.NEPTUNE_MASS_ID, ConstantValue.NEPTUNE_MASS_SYN_$LI$(), ConstantValue.NEPTUNE_MASS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_STR, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_ID, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SYN_$LI$(), ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.TRUE_STR, ConstantValue.TRUE_DESC, ConstantValue.TRUE_ID, ConstantValue.TRUE_SYN_$LI$(), ConstantValue.TRUE_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.FALSE_STR, ConstantValue.FALSE_DESC, ConstantValue.FALSE_ID, ConstantValue.FALSE_SYN_$LI$(), ConstantValue.FALSE_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(ConstantValue.NAN_STR, ConstantValue.NAN_DESC, ConstantValue.NAN_ID, ConstantValue.NAN_SYN_$LI$(), ConstantValue.NAN_SINCE_$LI$(), ConstantValue.TYPE_ID);
            this.addKeyWord(RandomVariable.UNIFORM_STR, RandomVariable.UNIFORM_DESC, RandomVariable.UNIFORM_ID, RandomVariable.UNIFORM_SYN_$LI$(), RandomVariable.UNIFORM_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT_STR, RandomVariable.INT_DESC, RandomVariable.INT_ID, RandomVariable.INT_SYN_$LI$(), RandomVariable.INT_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT1_STR, RandomVariable.INT1_DESC, RandomVariable.INT1_ID, RandomVariable.INT1_SYN_$LI$(), RandomVariable.INT1_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT2_STR, RandomVariable.INT2_DESC, RandomVariable.INT2_ID, RandomVariable.INT2_SYN_$LI$(), RandomVariable.INT2_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT3_STR, RandomVariable.INT3_DESC, RandomVariable.INT3_ID, RandomVariable.INT3_SYN_$LI$(), RandomVariable.INT3_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT4_STR, RandomVariable.INT4_DESC, RandomVariable.INT4_ID, RandomVariable.INT4_SYN_$LI$(), RandomVariable.INT4_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT5_STR, RandomVariable.INT5_DESC, RandomVariable.INT5_ID, RandomVariable.INT5_SYN_$LI$(), RandomVariable.INT5_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT6_STR, RandomVariable.INT6_DESC, RandomVariable.INT6_ID, RandomVariable.INT6_SYN_$LI$(), RandomVariable.INT6_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT7_STR, RandomVariable.INT7_DESC, RandomVariable.INT7_ID, RandomVariable.INT7_SYN_$LI$(), RandomVariable.INT7_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT8_STR, RandomVariable.INT8_DESC, RandomVariable.INT8_ID, RandomVariable.INT8_SYN_$LI$(), RandomVariable.INT8_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.INT9_STR, RandomVariable.INT9_DESC, RandomVariable.INT9_ID, RandomVariable.INT9_SYN_$LI$(), RandomVariable.INT9_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_STR, RandomVariable.NAT0_DESC, RandomVariable.NAT0_ID, RandomVariable.NAT0_SYN_$LI$(), RandomVariable.NAT0_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_1_STR, RandomVariable.NAT0_1_DESC, RandomVariable.NAT0_1_ID, RandomVariable.NAT0_1_SYN_$LI$(), RandomVariable.NAT0_1_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_2_STR, RandomVariable.NAT0_2_DESC, RandomVariable.NAT0_2_ID, RandomVariable.NAT0_2_SYN_$LI$(), RandomVariable.NAT0_2_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_3_STR, RandomVariable.NAT0_3_DESC, RandomVariable.NAT0_3_ID, RandomVariable.NAT0_3_SYN_$LI$(), RandomVariable.NAT0_3_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_4_STR, RandomVariable.NAT0_4_DESC, RandomVariable.NAT0_4_ID, RandomVariable.NAT0_4_SYN_$LI$(), RandomVariable.NAT0_4_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_5_STR, RandomVariable.NAT0_5_DESC, RandomVariable.NAT0_5_ID, RandomVariable.NAT0_5_SYN_$LI$(), RandomVariable.NAT0_5_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_6_STR, RandomVariable.NAT0_6_DESC, RandomVariable.NAT0_6_ID, RandomVariable.NAT0_6_SYN_$LI$(), RandomVariable.NAT0_6_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_7_STR, RandomVariable.NAT0_7_DESC, RandomVariable.NAT0_7_ID, RandomVariable.NAT0_7_SYN_$LI$(), RandomVariable.NAT0_7_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_8_STR, RandomVariable.NAT0_8_DESC, RandomVariable.NAT0_8_ID, RandomVariable.NAT0_8_SYN_$LI$(), RandomVariable.NAT0_8_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT0_9_STR, RandomVariable.NAT0_9_DESC, RandomVariable.NAT0_9_ID, RandomVariable.NAT0_9_SYN_$LI$(), RandomVariable.NAT0_9_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_STR, RandomVariable.NAT1_DESC, RandomVariable.NAT1_ID, RandomVariable.NAT1_SYN_$LI$(), RandomVariable.NAT1_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_1_STR, RandomVariable.NAT1_1_DESC, RandomVariable.NAT1_1_ID, RandomVariable.NAT1_1_SYN_$LI$(), RandomVariable.NAT1_1_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_2_STR, RandomVariable.NAT1_2_DESC, RandomVariable.NAT1_2_ID, RandomVariable.NAT1_2_SYN_$LI$(), RandomVariable.NAT1_2_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_3_STR, RandomVariable.NAT1_3_DESC, RandomVariable.NAT1_3_ID, RandomVariable.NAT1_3_SYN_$LI$(), RandomVariable.NAT1_3_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_4_STR, RandomVariable.NAT1_4_DESC, RandomVariable.NAT1_4_ID, RandomVariable.NAT1_4_SYN_$LI$(), RandomVariable.NAT1_4_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_5_STR, RandomVariable.NAT1_5_DESC, RandomVariable.NAT1_5_ID, RandomVariable.NAT1_5_SYN_$LI$(), RandomVariable.NAT1_5_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_6_STR, RandomVariable.NAT1_6_DESC, RandomVariable.NAT1_6_ID, RandomVariable.NAT1_6_SYN_$LI$(), RandomVariable.NAT1_6_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_7_STR, RandomVariable.NAT1_7_DESC, RandomVariable.NAT1_7_ID, RandomVariable.NAT1_7_SYN_$LI$(), RandomVariable.NAT1_7_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_8_STR, RandomVariable.NAT1_8_DESC, RandomVariable.NAT1_8_ID, RandomVariable.NAT1_8_SYN_$LI$(), RandomVariable.NAT1_8_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NAT1_9_STR, RandomVariable.NAT1_9_DESC, RandomVariable.NAT1_9_ID, RandomVariable.NAT1_9_SYN_$LI$(), RandomVariable.NAT1_9_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(RandomVariable.NOR_STR, RandomVariable.NOR_DESC, RandomVariable.NOR_ID, RandomVariable.NOR_SYN_$LI$(), RandomVariable.NOR_SINCE_$LI$(), RandomVariable.TYPE_ID);
            this.addKeyWord(BitwiseOperator.COMPL_STR, BitwiseOperator.COMPL_DESC, BitwiseOperator.COMPL_ID, BitwiseOperator.COMPL_SYN, BitwiseOperator.COMPL_SINCE_$LI$(), BitwiseOperator.TYPE_ID);
            this.addKeyWord(BitwiseOperator.AND_STR, BitwiseOperator.AND_DESC, BitwiseOperator.AND_ID, BitwiseOperator.AND_SYN, BitwiseOperator.AND_SINCE_$LI$(), BitwiseOperator.TYPE_ID);
            this.addKeyWord(BitwiseOperator.XOR_STR, BitwiseOperator.XOR_DESC, BitwiseOperator.XOR_ID, BitwiseOperator.XOR_SYN, BitwiseOperator.XOR_SINCE_$LI$(), BitwiseOperator.TYPE_ID);
            this.addKeyWord(BitwiseOperator.OR_STR, BitwiseOperator.OR_DESC, BitwiseOperator.OR_ID, BitwiseOperator.OR_SYN, BitwiseOperator.OR_SINCE_$LI$(), BitwiseOperator.TYPE_ID);
            this.addKeyWord(BitwiseOperator.LEFT_SHIFT_STR, BitwiseOperator.LEFT_SHIFT_DESC, BitwiseOperator.LEFT_SHIFT_ID, BitwiseOperator.LEFT_SHIFT_SYN, BitwiseOperator.LEFT_SHIFT_SINCE_$LI$(), BitwiseOperator.TYPE_ID);
            this.addKeyWord(BitwiseOperator.RIGHT_SHIFT_STR, BitwiseOperator.RIGHT_SHIFT_DESC, BitwiseOperator.RIGHT_SHIFT_ID, BitwiseOperator.RIGHT_SHIFT_SYN, BitwiseOperator.RIGHT_SHIFT_SINCE_$LI$(), BitwiseOperator.TYPE_ID);
            this.addKeyWord(Unit.PERC_STR, Unit.PERC_DESC, Unit.PERC_ID, Unit.PERC_SYN_$LI$(), Unit.PERC_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.PROMIL_STR, Unit.PROMIL_DESC, Unit.PROMIL_ID, Unit.PROMIL_SYN_$LI$(), Unit.PROMIL_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.YOTTA_STR, Unit.YOTTA_DESC, Unit.YOTTA_ID, Unit.YOTTA_SYN_$LI$(), Unit.YOTTA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.YOTTA_SEPT_STR, Unit.YOTTA_DESC, Unit.YOTTA_ID, Unit.YOTTA_SEPT_SYN_$LI$(), Unit.YOTTA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ZETTA_STR, Unit.ZETTA_DESC, Unit.ZETTA_ID, Unit.ZETTA_SYN_$LI$(), Unit.ZETTA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ZETTA_SEXT_STR, Unit.ZETTA_DESC, Unit.ZETTA_ID, Unit.ZETTA_SEXT_SYN_$LI$(), Unit.ZETTA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.EXA_STR, Unit.EXA_DESC, Unit.EXA_ID, Unit.EXA_SYN_$LI$(), Unit.EXA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.EXA_QUINT_STR, Unit.EXA_DESC, Unit.EXA_ID, Unit.EXA_QUINT_SYN_$LI$(), Unit.EXA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.PETA_STR, Unit.PETA_DESC, Unit.PETA_ID, Unit.PETA_SYN_$LI$(), Unit.PETA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.PETA_QUAD_STR, Unit.PETA_DESC, Unit.PETA_ID, Unit.PETA_QUAD_SYN_$LI$(), Unit.PETA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.TERA_STR, Unit.TERA_DESC, Unit.TERA_ID, Unit.TERA_SYN_$LI$(), Unit.TERA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.TERA_TRIL_STR, Unit.TERA_DESC, Unit.TERA_ID, Unit.TERA_TRIL_SYN_$LI$(), Unit.TERA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.GIGA_STR, Unit.GIGA_DESC, Unit.GIGA_ID, Unit.GIGA_SYN_$LI$(), Unit.GIGA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.GIGA_BIL_STR, Unit.GIGA_DESC, Unit.GIGA_ID, Unit.GIGA_BIL_SYN_$LI$(), Unit.GIGA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MEGA_STR, Unit.MEGA_DESC, Unit.MEGA_ID, Unit.MEGA_SYN_$LI$(), Unit.MEGA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MEGA_MIL_STR, Unit.MEGA_DESC, Unit.MEGA_ID, Unit.MEGA_MIL_SYN_$LI$(), Unit.MEGA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILO_STR, Unit.KILO_DESC, Unit.KILO_ID, Unit.KILO_SYN_$LI$(), Unit.KILO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILO_TH_STR, Unit.KILO_DESC, Unit.KILO_ID, Unit.KILO_TH_SYN_$LI$(), Unit.KILO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.HECTO_STR, Unit.HECTO_DESC, Unit.HECTO_ID, Unit.HECTO_SYN_$LI$(), Unit.HECTO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.HECTO_HUND_STR, Unit.HECTO_DESC, Unit.HECTO_ID, Unit.HECTO_HUND_SYN_$LI$(), Unit.HECTO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.DECA_STR, Unit.DECA_DESC, Unit.DECA_ID, Unit.DECA_SYN_$LI$(), Unit.DECA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.DECA_TEN_STR, Unit.DECA_DESC, Unit.DECA_ID, Unit.DECA_TEN_SYN_$LI$(), Unit.DECA_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.DECI_STR, Unit.DECI_DESC, Unit.DECI_ID, Unit.DECI_SYN_$LI$(), Unit.DECI_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.CENTI_STR, Unit.CENTI_DESC, Unit.CENTI_ID, Unit.CENTI_SYN_$LI$(), Unit.CENTI_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILLI_STR, Unit.MILLI_DESC, Unit.MILLI_ID, Unit.MILLI_SYN_$LI$(), Unit.MILLI_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MICRO_STR, Unit.MICRO_DESC, Unit.MICRO_ID, Unit.MICRO_SYN_$LI$(), Unit.MICRO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.NANO_STR, Unit.NANO_DESC, Unit.NANO_ID, Unit.NANO_SYN_$LI$(), Unit.NANO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.PICO_STR, Unit.PICO_DESC, Unit.PICO_ID, Unit.PICO_SYN_$LI$(), Unit.PICO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.FEMTO_STR, Unit.FEMTO_DESC, Unit.FEMTO_ID, Unit.FEMTO_SYN_$LI$(), Unit.FEMTO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ATTO_STR, Unit.ATTO_DESC, Unit.ATTO_ID, Unit.ATTO_SYN_$LI$(), Unit.ATTO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ZEPTO_STR, Unit.ZEPTO_DESC, Unit.ZEPTO_ID, Unit.ZEPTO_SYN_$LI$(), Unit.ZEPTO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.YOCTO_STR, Unit.YOCTO_DESC, Unit.YOCTO_ID, Unit.YOCTO_SYN_$LI$(), Unit.YOCTO_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.METRE_STR, Unit.METRE_DESC, Unit.METRE_ID, Unit.METRE_SYN_$LI$(), Unit.METRE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILOMETRE_STR, Unit.KILOMETRE_DESC, Unit.KILOMETRE_ID, Unit.KILOMETRE_SYN_$LI$(), Unit.KILOMETRE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.CENTIMETRE_STR, Unit.CENTIMETRE_DESC, Unit.CENTIMETRE_ID, Unit.CENTIMETRE_SYN_$LI$(), Unit.CENTIMETRE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILLIMETRE_STR, Unit.MILLIMETRE_DESC, Unit.MILLIMETRE_ID, Unit.MILLIMETRE_SYN_$LI$(), Unit.MILLIMETRE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.INCH_STR, Unit.INCH_DESC, Unit.INCH_ID, Unit.INCH_SYN_$LI$(), Unit.INCH_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.YARD_STR, Unit.YARD_DESC, Unit.YARD_ID, Unit.YARD_SYN_$LI$(), Unit.YARD_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.FEET_STR, Unit.FEET_DESC, Unit.FEET_ID, Unit.FEET_SYN_$LI$(), Unit.FEET_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILE_STR, Unit.MILE_DESC, Unit.MILE_ID, Unit.MILE_SYN_$LI$(), Unit.MILE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.NAUTICAL_MILE_STR, Unit.NAUTICAL_MILE_DESC, Unit.NAUTICAL_MILE_ID, Unit.NAUTICAL_MILE_SYN_$LI$(), Unit.NAUTICAL_MILE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.METRE2_STR, Unit.METRE2_DESC, Unit.METRE2_ID, Unit.METRE2_SYN_$LI$(), Unit.METRE2_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.CENTIMETRE2_STR, Unit.CENTIMETRE2_DESC, Unit.CENTIMETRE2_ID, Unit.CENTIMETRE2_SYN_$LI$(), Unit.CENTIMETRE2_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILLIMETRE2_STR, Unit.MILLIMETRE2_DESC, Unit.MILLIMETRE2_ID, Unit.MILLIMETRE2_SYN_$LI$(), Unit.MILLIMETRE2_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ARE_STR, Unit.ARE_DESC, Unit.ARE_ID, Unit.ARE_SYN_$LI$(), Unit.ARE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.HECTARE_STR, Unit.HECTARE_DESC, Unit.HECTARE_ID, Unit.HECTARE_SYN_$LI$(), Unit.HECTARE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ACRE_STR, Unit.ACRE_DESC, Unit.ACRE_ID, Unit.ACRE_SYN_$LI$(), Unit.ACRE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILOMETRE2_STR, Unit.KILOMETRE2_DESC, Unit.KILOMETRE2_ID, Unit.KILOMETRE2_SYN_$LI$(), Unit.KILOMETRE2_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILLIMETRE3_STR, Unit.MILLIMETRE3_DESC, Unit.MILLIMETRE3_ID, Unit.MILLIMETRE3_SYN_$LI$(), Unit.MILLIMETRE3_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.CENTIMETRE3_STR, Unit.CENTIMETRE3_DESC, Unit.CENTIMETRE3_ID, Unit.CENTIMETRE3_SYN_$LI$(), Unit.CENTIMETRE3_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.METRE3_STR, Unit.METRE3_DESC, Unit.METRE3_ID, Unit.METRE3_SYN_$LI$(), Unit.METRE3_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILOMETRE3_STR, Unit.KILOMETRE3_DESC, Unit.KILOMETRE3_ID, Unit.KILOMETRE3_SYN_$LI$(), Unit.KILOMETRE3_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILLILITRE_STR, Unit.MILLILITRE_DESC, Unit.MILLILITRE_ID, Unit.MILLILITRE_SYN_$LI$(), Unit.MILLILITRE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.LITRE_STR, Unit.LITRE_DESC, Unit.LITRE_ID, Unit.LITRE_SYN_$LI$(), Unit.LITRE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.GALLON_STR, Unit.GALLON_DESC, Unit.GALLON_ID, Unit.GALLON_SYN_$LI$(), Unit.GALLON_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.PINT_STR, Unit.PINT_DESC, Unit.PINT_ID, Unit.PINT_SYN_$LI$(), Unit.PINT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.SECOND_STR, Unit.SECOND_DESC, Unit.SECOND_ID, Unit.SECOND_SYN_$LI$(), Unit.SECOND_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILLISECOND_STR, Unit.MILLISECOND_DESC, Unit.MILLISECOND_ID, Unit.MILLISECOND_SYN_$LI$(), Unit.MILLISECOND_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MINUTE_STR, Unit.MINUTE_DESC, Unit.MINUTE_ID, Unit.MINUTE_SYN_$LI$(), Unit.MINUTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.HOUR_STR, Unit.HOUR_DESC, Unit.HOUR_ID, Unit.HOUR_SYN_$LI$(), Unit.HOUR_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.DAY_STR, Unit.DAY_DESC, Unit.DAY_ID, Unit.DAY_SYN_$LI$(), Unit.DAY_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.WEEK_STR, Unit.WEEK_DESC, Unit.WEEK_ID, Unit.WEEK_SYN_$LI$(), Unit.WEEK_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.JULIAN_YEAR_STR, Unit.JULIAN_YEAR_DESC, Unit.JULIAN_YEAR_ID, Unit.JULIAN_YEAR_SYN_$LI$(), Unit.JULIAN_YEAR_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILOGRAM_STR, Unit.KILOGRAM_DESC, Unit.KILOGRAM_ID, Unit.KILOGRAM_SYN_$LI$(), Unit.KILOGRAM_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.GRAM_STR, Unit.GRAM_DESC, Unit.GRAM_ID, Unit.GRAM_SYN_$LI$(), Unit.GRAM_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILLIGRAM_STR, Unit.MILLIGRAM_DESC, Unit.MILLIGRAM_ID, Unit.MILLIGRAM_SYN_$LI$(), Unit.MILLIGRAM_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.DECAGRAM_STR, Unit.DECAGRAM_DESC, Unit.DECAGRAM_ID, Unit.DECAGRAM_SYN_$LI$(), Unit.DECAGRAM_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.TONNE_STR, Unit.TONNE_DESC, Unit.TONNE_ID, Unit.TONNE_SYN_$LI$(), Unit.TONNE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.OUNCE_STR, Unit.OUNCE_DESC, Unit.OUNCE_ID, Unit.OUNCE_SYN_$LI$(), Unit.OUNCE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.POUND_STR, Unit.POUND_DESC, Unit.POUND_ID, Unit.POUND_SYN_$LI$(), Unit.POUND_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.BIT_STR, Unit.BIT_DESC, Unit.BIT_ID, Unit.BIT_SYN_$LI$(), Unit.BIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILOBIT_STR, Unit.KILOBIT_DESC, Unit.KILOBIT_ID, Unit.KILOBIT_SYN_$LI$(), Unit.KILOBIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MEGABIT_STR, Unit.MEGABIT_DESC, Unit.MEGABIT_ID, Unit.MEGABIT_SYN_$LI$(), Unit.MEGABIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.GIGABIT_STR, Unit.GIGABIT_DESC, Unit.GIGABIT_ID, Unit.GIGABIT_SYN_$LI$(), Unit.GIGABIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.TERABIT_STR, Unit.TERABIT_DESC, Unit.TERABIT_ID, Unit.TERABIT_SYN_$LI$(), Unit.TERABIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.PETABIT_STR, Unit.PETABIT_DESC, Unit.PETABIT_ID, Unit.PETABIT_SYN_$LI$(), Unit.PETABIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.EXABIT_STR, Unit.EXABIT_DESC, Unit.EXABIT_ID, Unit.EXABIT_SYN_$LI$(), Unit.EXABIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ZETTABIT_STR, Unit.ZETTABIT_DESC, Unit.ZETTABIT_ID, Unit.ZETTABIT_SYN_$LI$(), Unit.ZETTABIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.YOTTABIT_STR, Unit.YOTTABIT_DESC, Unit.YOTTABIT_ID, Unit.YOTTABIT_SYN_$LI$(), Unit.YOTTABIT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.BYTE_STR, Unit.BYTE_DESC, Unit.BYTE_ID, Unit.BYTE_SYN_$LI$(), Unit.BYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILOBYTE_STR, Unit.KILOBYTE_DESC, Unit.KILOBYTE_ID, Unit.KILOBYTE_SYN_$LI$(), Unit.KILOBYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MEGABYTE_STR, Unit.MEGABYTE_DESC, Unit.MEGABYTE_ID, Unit.MEGABYTE_SYN_$LI$(), Unit.MEGABYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.GIGABYTE_STR, Unit.GIGABYTE_DESC, Unit.GIGABYTE_ID, Unit.GIGABYTE_SYN_$LI$(), Unit.GIGABYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.TERABYTE_STR, Unit.TERABYTE_DESC, Unit.TERABYTE_ID, Unit.TERABYTE_SYN_$LI$(), Unit.TERABYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.PETABYTE_STR, Unit.PETABYTE_DESC, Unit.PETABYTE_ID, Unit.PETABYTE_SYN_$LI$(), Unit.PETABYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.EXABYTE_STR, Unit.EXABYTE_DESC, Unit.EXABYTE_ID, Unit.EXABYTE_SYN_$LI$(), Unit.EXABYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ZETTABYTE_STR, Unit.ZETTABYTE_DESC, Unit.ZETTABYTE_ID, Unit.ZETTABYTE_SYN_$LI$(), Unit.ZETTABYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.YOTTABYTE_STR, Unit.YOTTABYTE_DESC, Unit.YOTTABYTE_ID, Unit.YOTTABYTE_SYN_$LI$(), Unit.YOTTABYTE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.JOULE_STR, Unit.JOULE_DESC, Unit.JOULE_ID, Unit.JOULE_SYN_$LI$(), Unit.JOULE_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.ELECTRONO_VOLT_STR, Unit.ELECTRONO_VOLT_DESC, Unit.ELECTRONO_VOLT_ID, Unit.ELECTRONO_VOLT_SYN_$LI$(), Unit.ELECTRONO_VOLT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILO_ELECTRONO_VOLT_STR, Unit.KILO_ELECTRONO_VOLT_DESC, Unit.KILO_ELECTRONO_VOLT_ID, Unit.KILO_ELECTRONO_VOLT_SYN_$LI$(), Unit.KILO_ELECTRONO_VOLT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MEGA_ELECTRONO_VOLT_STR, Unit.MEGA_ELECTRONO_VOLT_DESC, Unit.MEGA_ELECTRONO_VOLT_ID, Unit.MEGA_ELECTRONO_VOLT_SYN_$LI$(), Unit.MEGA_ELECTRONO_VOLT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.GIGA_ELECTRONO_VOLT_STR, Unit.GIGA_ELECTRONO_VOLT_DESC, Unit.GIGA_ELECTRONO_VOLT_ID, Unit.GIGA_ELECTRONO_VOLT_SYN_$LI$(), Unit.GIGA_ELECTRONO_VOLT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.TERA_ELECTRONO_VOLT_STR, Unit.TERA_ELECTRONO_VOLT_DESC, Unit.TERA_ELECTRONO_VOLT_ID, Unit.TERA_ELECTRONO_VOLT_SYN_$LI$(), Unit.TERA_ELECTRONO_VOLT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.METRE_PER_SECOND_STR, Unit.METRE_PER_SECOND_DESC, Unit.METRE_PER_SECOND_ID, Unit.METRE_PER_SECOND_SYN_$LI$(), Unit.METRE_PER_SECOND_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILOMETRE_PER_HOUR_STR, Unit.KILOMETRE_PER_HOUR_DESC, Unit.KILOMETRE_PER_HOUR_ID, Unit.KILOMETRE_PER_HOUR_SYN_$LI$(), Unit.KILOMETRE_PER_HOUR_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILE_PER_HOUR_STR, Unit.MILE_PER_HOUR_DESC, Unit.MILE_PER_HOUR_ID, Unit.MILE_PER_HOUR_SYN_$LI$(), Unit.MILE_PER_HOUR_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KNOT_STR, Unit.KNOT_DESC, Unit.KNOT_ID, Unit.KNOT_SYN_$LI$(), Unit.KNOT_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.METRE_PER_SECOND2_STR, Unit.METRE_PER_SECOND2_DESC, Unit.METRE_PER_SECOND2_ID, Unit.METRE_PER_SECOND2_SYN_$LI$(), Unit.METRE_PER_SECOND2_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.KILOMETRE_PER_HOUR2_STR, Unit.KILOMETRE_PER_HOUR2_DESC, Unit.KILOMETRE_PER_HOUR2_ID, Unit.KILOMETRE_PER_HOUR2_SYN_$LI$(), Unit.KILOMETRE_PER_HOUR2_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MILE_PER_HOUR2_STR, Unit.MILE_PER_HOUR2_DESC, Unit.MILE_PER_HOUR2_ID, Unit.MILE_PER_HOUR2_SYN_$LI$(), Unit.MILE_PER_HOUR2_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.RADIAN_ARC_STR, Unit.RADIAN_ARC_DESC, Unit.RADIAN_ARC_ID, Unit.RADIAN_ARC_SYN_$LI$(), Unit.RADIAN_ARC_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.DEGREE_ARC_STR, Unit.DEGREE_ARC_DESC, Unit.DEGREE_ARC_ID, Unit.DEGREE_ARC_SYN_$LI$(), Unit.DEGREE_ARC_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.MINUTE_ARC_STR, Unit.MINUTE_ARC_DESC, Unit.MINUTE_ARC_ID, Unit.MINUTE_ARC_SYN_$LI$(), Unit.MINUTE_ARC_SINCE_$LI$(), Unit.TYPE_ID);
            this.addKeyWord(Unit.SECOND_ARC_STR, Unit.SECOND_ARC_DESC, Unit.SECOND_ARC_ID, Unit.SECOND_ARC_SYN_$LI$(), Unit.SECOND_ARC_SINCE_$LI$(), Unit.TYPE_ID);
            if (this.UDFExpression)this.addUDFSpecificParserKeyWords();
        }
        this.addKeyWord(ParserSymbol.LEFT_PARENTHESES_STR, ParserSymbol.LEFT_PARENTHESES_DESC, ParserSymbol.LEFT_PARENTHESES_ID, ParserSymbol.LEFT_PARENTHESES_SYN, ParserSymbol.LEFT_PARENTHESES_SINCE_$LI$(), ParserSymbol.TYPE_ID);
        this.addKeyWord(ParserSymbol.RIGHT_PARENTHESES_STR, ParserSymbol.RIGHT_PARENTHESES_DESC, ParserSymbol.RIGHT_PARENTHESES_ID, ParserSymbol.RIGHT_PARENTHESES_SYN, ParserSymbol.RIGHT_PARENTHESES_SINCE_$LI$(), ParserSymbol.TYPE_ID);
        this.addKeyWord(ParserSymbol.COMMA_STR, ParserSymbol.COMMA_DESC, ParserSymbol.COMMA_ID, ParserSymbol.COMMA_SYN, ParserSymbol.COMMA_SINCE_$LI$(), ParserSymbol.TYPE_ID);
        this.addKeyWord(ParserSymbol.SEMI_STR, ParserSymbol.SEMI_DESC, ParserSymbol.COMMA_ID, ParserSymbol.SEMI_SYN, ParserSymbol.COMMA_SINCE_$LI$(), ParserSymbol.TYPE_ID);
        this.addKeyWord(ParserSymbol.DECIMAL_REG_EXP_$LI$(), ParserSymbol.NUMBER_REG_DESC, ParserSymbol.NUMBER_ID, ParserSymbol.NUMBER_SYN, ParserSymbol.NUMBER_SINCE_$LI$(), ParserSymbol.NUMBER_TYPE_ID);
        this.addKeyWord(ParserSymbol.BLANK_STR, ParserSymbol.BLANK_DESC, ParserSymbol.BLANK_ID, ParserSymbol.BLANK_SYN, ParserSymbol.BLANK_SINCE_$LI$(), ParserSymbol.TYPE_ID);
    }

    /**
     * Adds arguments key words to the keywords list
     * @private
     */
    /*private*/ addArgumentsKeyWords() {
        const argumentsNumber: number = this.argumentsList.size();
        for(let argumentIndex: number = 0; argumentIndex < argumentsNumber; argumentIndex++) {{
            const arg: Argument = this.argumentsList.get(argumentIndex);
            if (arg.getArgumentType() !== ArgumentConstants.RECURSIVE_ARGUMENT)this.addKeyWord(arg.getArgumentName(), arg.getDescription(), argumentIndex, arg.getArgumentName(), "", ArgumentConstants.TYPE_ID); else this.addKeyWord(arg.getArgumentName(), arg.getDescription(), argumentIndex, arg.getArgumentName() + "(n)", "", RecursiveArgument.TYPE_ID_RECURSIVE);
        };}
    }

    /**
     * Adds functions key words to the keywords list
     * @private
     */
    /*private*/ addFunctionsKeyWords() {
        const functionsNumber: number = this.functionsList.size();
        for(let functionIndex: number = 0; functionIndex < functionsNumber; functionIndex++) {{
            const fun: Function = this.functionsList.get(functionIndex);
            let syntax: string = fun.getFunctionName() + "(";
            const paramsNum: number = fun.getParametersNumber();
            for(let i: number = 0; i < paramsNum; i++) {{
                syntax = syntax + fun.getParameterName(i);
                if ((paramsNum > 1) && (i < paramsNum - 1))syntax = syntax + ",";
            };}
            syntax = syntax + ")";
            this.addKeyWord(fun.getFunctionName(), fun.getDescription(), functionIndex, syntax, "", FunctionConstants.TYPE_ID);
        };}
    }

    /**
     * Adds constants key words to the keywords list
     * @private
     */
    /*private*/ addConstantsKeyWords() {
        const constantsNumber: number = this.constantsList.size();
        for(let constantIndex: number = 0; constantIndex < constantsNumber; constantIndex++) {{
            const c: Constant = this.constantsList.get(constantIndex);
            this.addKeyWord(c.getConstantName(), c.getDescription(), constantIndex, c.getConstantName(), "", Constant.TYPE_ID);
        };}
    }

    /**
     * Final validation of key words
     * @private
     */
    /*private*/ validateParserKeyWords() {
        if (mXparserConstants.overrideBuiltinTokens){
            const userDefinedTokens: java.util.List<string> = <any>(new java.util.ArrayList<string>());
            for(let index161=this.argumentsList.iterator();index161.hasNext();) {
                let arg = index161.next();
                userDefinedTokens.add(arg.getArgumentName())
            }
            for(let index162=this.functionsList.iterator();index162.hasNext();) {
                let fun = index162.next();
                userDefinedTokens.add(fun.getFunctionName())
            }
            for(let index163=this.constantsList.iterator();index163.hasNext();) {
                let cons = index163.next();
                userDefinedTokens.add(cons.getConstantName())
            }
            if (userDefinedTokens.isEmpty())return;
            const keyWordsToOverride: java.util.List<KeyWord> = <any>(new java.util.ArrayList<KeyWord>());
            for(let index164=this.keyWordsList.iterator();index164.hasNext();) {
                let kw = index164.next();
                if (userDefinedTokens.contains(kw.wordString))keyWordsToOverride.add(kw);
            }
            if (keyWordsToOverride.isEmpty())return;
            for(let index165=keyWordsToOverride.iterator();index165.hasNext();) {
                let kw = index165.next();
                this.keyWordsList.remove(kw)
            }
        }
    }

    /**
     * Adds key word to the keyWords list
     * 
     * @param {string} wordString
     * @param {string} wordDescription
     * @param {number} wordId
     * @param {number} wordTypeId
     * @param {string} wordSyntax
     * @param {string} wordSince
     * @private
     */
    /*private*/ addKeyWord(wordString: string, wordDescription: string, wordId: number, wordSyntax: string, wordSince: string, wordTypeId: number) {
        if ((mXparserConstants.tokensToRemove_$LI$().size() > 0) || (mXparserConstants.tokensToModify_$LI$().size() > 0))if ((wordTypeId === Function1Arg.TYPE_ID) || (wordTypeId === Function2Arg.TYPE_ID) || (wordTypeId === Function3Arg.TYPE_ID) || (wordTypeId === FunctionVariadic.TYPE_ID) || (wordTypeId === CalculusOperator.TYPE_ID) || (wordTypeId === ConstantValue.TYPE_ID) || (wordTypeId === RandomVariable.TYPE_ID) || (wordTypeId === Unit.TYPE_ID)){
            if (mXparserConstants.tokensToRemove_$LI$().size() > 0)if (mXparserConstants.tokensToRemove_$LI$().contains(wordString))return;
            if (mXparserConstants.tokensToModify_$LI$().size() > 0){
                for(let index166=mXparserConstants.tokensToModify_$LI$().iterator();index166.hasNext();) {
                    let tm = index166.next();
                    if (tm.currentToken === wordString){
                        wordString = tm.newToken;
                        if (tm.newTokenDescription != null)wordDescription = tm.newTokenDescription;
                        wordSyntax = /* replace */wordSyntax.split(tm.currentToken).join(tm.newToken);
                    }
                }
            }
        }
        this.keyWordsList.add(new KeyWord(wordString, wordDescription, wordId, wordSyntax, wordSince, wordTypeId));
    }

    /**
     * Checks whether unknown token represents number literal
     * provided in different numeral base system, where
     * base is between 1 and 36.
     * 
     * @param {Token} token   The token not know to the parser
     * @private
     */
    /*private*/ checkOtherNumberBases(token: Token) {
        let dotPos: number = 0;
        const tokenStrLength: number = token.tokenStr.length;
        if (tokenStrLength >= 2){
            if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(token.tokenStr.charAt(1)) == '.'.charCodeAt(0))dotPos = 1;
        }
        if ((dotPos === 0) && (tokenStrLength >= 3)){
            if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(token.tokenStr.charAt(2)) == '.'.charCodeAt(0))dotPos = 2;
        }
        if ((dotPos === 0) && (tokenStrLength >= 4)){
            if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(token.tokenStr.charAt(3)) == '.'.charCodeAt(0))dotPos = 3;
        }
        if (dotPos === 0)return;
        const baseInd: string = token.tokenStr.substring(0, dotPos).toLowerCase();
        let numberLiteral: string = "";
        if (tokenStrLength > dotPos + 1)numberLiteral = token.tokenStr.substring(dotPos + 1);
        let numeralSystemBase: number = 0;
        if (baseInd === ("b"))numeralSystemBase = 2; else if (baseInd === ("o"))numeralSystemBase = 8; else if (baseInd === ("h"))numeralSystemBase = 16; else if (baseInd === ("b1"))numeralSystemBase = 1; else if (baseInd === ("b2"))numeralSystemBase = 2; else if (baseInd === ("b3"))numeralSystemBase = 3; else if (baseInd === ("b4"))numeralSystemBase = 4; else if (baseInd === ("b5"))numeralSystemBase = 5; else if (baseInd === ("b6"))numeralSystemBase = 6; else if (baseInd === ("b7"))numeralSystemBase = 7; else if (baseInd === ("b8"))numeralSystemBase = 8; else if (baseInd === ("b9"))numeralSystemBase = 9; else if (baseInd === ("b10"))numeralSystemBase = 10; else if (baseInd === ("b11"))numeralSystemBase = 11; else if (baseInd === ("b12"))numeralSystemBase = 12; else if (baseInd === ("b13"))numeralSystemBase = 13; else if (baseInd === ("b14"))numeralSystemBase = 14; else if (baseInd === ("b15"))numeralSystemBase = 15; else if (baseInd === ("b16"))numeralSystemBase = 16; else if (baseInd === ("b17"))numeralSystemBase = 17; else if (baseInd === ("b18"))numeralSystemBase = 18; else if (baseInd === ("b19"))numeralSystemBase = 19; else if (baseInd === ("b20"))numeralSystemBase = 20; else if (baseInd === ("b21"))numeralSystemBase = 21; else if (baseInd === ("b22"))numeralSystemBase = 22; else if (baseInd === ("b23"))numeralSystemBase = 23; else if (baseInd === ("b24"))numeralSystemBase = 24; else if (baseInd === ("b25"))numeralSystemBase = 25; else if (baseInd === ("b26"))numeralSystemBase = 26; else if (baseInd === ("b27"))numeralSystemBase = 27; else if (baseInd === ("b28"))numeralSystemBase = 28; else if (baseInd === ("b29"))numeralSystemBase = 29; else if (baseInd === ("b30"))numeralSystemBase = 30; else if (baseInd === ("b31"))numeralSystemBase = 31; else if (baseInd === ("b32"))numeralSystemBase = 32; else if (baseInd === ("b33"))numeralSystemBase = 33; else if (baseInd === ("b34"))numeralSystemBase = 34; else if (baseInd === ("b35"))numeralSystemBase = 35; else if (baseInd === ("b36"))numeralSystemBase = 36;
        if ((numeralSystemBase > 0) && (numeralSystemBase <= 36)){
            token.tokenTypeId = ParserSymbol.NUMBER_TYPE_ID;
            token.tokenId = ParserSymbol.NUMBER_ID;
            token.tokenValue = NumberTheory.convOthBase2Decimal$java_lang_String$int(numberLiteral, numeralSystemBase);
        }
    }

    /**
     * Checks whether unknown token represents fraction
     * provided as fraction or mixed fraction
     * 
     * @param {Token} token   The token not know to the parser
     * @private
     */
    /*private*/ checkFraction(token: Token) {
        const tokenStrLength: number = token.tokenStr.length;
        if (tokenStrLength < 3)return;
        if (!mXparserConstants.regexMatch(token.tokenStr, ParserSymbol.FRACTION_$LI$()))return;
        const underscore1stPos: number = token.tokenStr.indexOf('_');
        const underscore2ndPos: number = token.tokenStr.indexOf('_', underscore1stPos + 1);
        let mixedFraction: boolean = false;
        if (underscore2ndPos > 0)mixedFraction = true;
        let fractionValue: number;
        if (mixedFraction){
            const wholeStr: string = token.tokenStr.substring(0, underscore1stPos);
            const numeratorStr: string = token.tokenStr.substring(underscore1stPos + 1, underscore2ndPos);
            const denominatorStr: string = token.tokenStr.substring(underscore2ndPos + 1);
            const whole: number = javaemul.internal.DoubleHelper.parseDouble(wholeStr);
            const numerator: number = javaemul.internal.DoubleHelper.parseDouble(numeratorStr);
            const denominator: number = javaemul.internal.DoubleHelper.parseDouble(denominatorStr);
            if (denominator === 0)fractionValue = javaemul.internal.DoubleHelper.NaN; else {
                fractionValue = whole + numerator / denominator;
            }
        } else {
            const numeratorStr: string = token.tokenStr.substring(0, underscore1stPos);
            const denominatorStr: string = token.tokenStr.substring(underscore1stPos + 1);
            const numerator: number = javaemul.internal.DoubleHelper.parseDouble(numeratorStr);
            const denominator: number = javaemul.internal.DoubleHelper.parseDouble(denominatorStr);
            if (denominator === 0)fractionValue = javaemul.internal.DoubleHelper.NaN; else {
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
     * @param      {string} tokenStr            the token string
     * @param      {KeyWord} keyWord             the key word
     * @private
     */
    /*private*/ addToken(tokenStr: string, keyWord: KeyWord) {
        const token: Token = new Token();
        this.initialTokens.add(token);
        token.tokenStr = tokenStr;
        token.keyWord = keyWord.wordString;
        token.tokenTypeId = keyWord.wordTypeId;
        token.tokenId = keyWord.wordId;
        if (token.tokenTypeId === ArgumentConstants.TYPE_ID)token.tokenValue = this.argumentsList.get(token.tokenId).argumentValue; else if (token.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID){
            token.tokenValue = javaemul.internal.DoubleHelper.valueOf(token.tokenStr);
            token.keyWord = ParserSymbol.NUMBER_STR;
        } else if (token.tokenTypeId === Token.NOT_MATCHED_$LI$()){
            this.checkOtherNumberBases(token);
            if (token.tokenTypeId === Token.NOT_MATCHED_$LI$())this.checkFraction(token);
        }
    }

    /*private*/ isNotSpecialChar(c: string): boolean {
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '+'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '-'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '+'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '*'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '/'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '^'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == ','.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == ';'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '('.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == ')'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '|'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '&'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '='.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '>'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '<'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '~'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '\\'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '#'.charCodeAt(0))return false;
        if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '@'.charCodeAt(0))return false;
        return true;
    }

    /**
     * Tokenizing expression string
     * @private
     */
    /*private*/ tokenizeExpressionString() {
        this.keyWordsList = <any>(new java.util.ArrayList<KeyWord>());
        this.addParserKeyWords();
        this.validateParserKeyWords();
        if (this.parserKeyWordsOnly === false){
            this.addArgumentsKeyWords();
            this.addFunctionsKeyWords();
            this.addConstantsKeyWords();
        }
        java.util.Collections.sort<any>(this.keyWordsList, ((funcInst: any) => { if (typeof funcInst == 'function') { return funcInst } return (arg0, arg1) =>  (funcInst['compare'] ? funcInst['compare'] : funcInst) .call(funcInst, arg0, arg1)})(new DescKwLenComparator()));
        let numberKwId: number = ConstantValue.NaN;
        let plusKwId: number = ConstantValue.NaN;
        let minusKwId: number = ConstantValue.NaN;
        for(let kwId: number = 0; kwId < this.keyWordsList.size(); kwId++) {{
            if (this.keyWordsList.get(kwId).wordTypeId === ParserSymbol.NUMBER_TYPE_ID)numberKwId = kwId;
            if (this.keyWordsList.get(kwId).wordTypeId === Operator.TYPE_ID){
                if (this.keyWordsList.get(kwId).wordId === Operator.PLUS_ID)plusKwId = kwId;
                if (this.keyWordsList.get(kwId).wordId === Operator.MINUS_ID)minusKwId = kwId;
            }
        };}
        this.initialTokens = <any>(new java.util.ArrayList<Token>());
        const expLen: number = this.expressionString.length;
        if (expLen === 0)return;
        let newExpressionString: string = "";
        let c: string;
        let clag1: string = 'a';
        let blankCnt: number = 0;
        let newExpLen: number = 0;
        for(let i: number = 0; i < expLen; i++) {{
            c = this.expressionString.charAt(i);
            if (((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == ' '.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '\n'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '\r'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '\t'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) == '\f'.charCodeAt(0))){
                blankCnt++;
            } else if (blankCnt > 0){
                if (newExpLen > 0){
                    if (this.isNotSpecialChar(clag1))newExpressionString = newExpressionString + " ";
                }
                blankCnt = 0;
            }
            if (blankCnt === 0){
                newExpressionString = newExpressionString + c;
                clag1 = c;
                newExpLen++;
            }
        };}
        if (newExpressionString.length === 0)return;
        let lastPos: number = 0;
        let pos: number = 0;
        let tokenStr: string = "";
        let matchStatusPrev: number = ExpressionConstants.NOT_FOUND_$LI$();
        let matchStatus: number = ExpressionConstants.NOT_FOUND_$LI$();
        let kw: KeyWord = null;
        let sub: string = "";
        let kwStr: string = "";
        let precedingChar: string;
        let followingChar: string;
        let firstChar: string;
        do {{
            let numEnd: number = -1;
            firstChar = newExpressionString.charAt(pos);
            if (((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '+'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '-'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '.'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '0'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '1'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '2'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '3'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '4'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '5'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '6'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '7'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '8'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '9'.charCodeAt(0))){
                for(let i: number = pos; i < newExpressionString.length; i++) {{
                    if (i > pos){
                        c = newExpressionString.charAt(i);
                        if (((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '+'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '-'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '0'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '1'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '2'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '3'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '4'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '5'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '6'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '7'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '8'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '9'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != '.'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != 'e'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(c) != 'E'.charCodeAt(0)))break;
                    }
                    const str: string = newExpressionString.substring(pos, i + 1);
                    if (mXparserConstants.regexMatch(str, ParserSymbol.DECIMAL_REG_EXP_$LI$()))numEnd = i;
                };}
            }
            if (numEnd >= 0)if (pos > 0){
                precedingChar = newExpressionString.charAt(pos - 1);
                if (((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != ' '.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != ','.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != ';'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '|'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '&'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '+'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '-'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '*'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '\\'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '/'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '('.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != ')'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '='.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '>'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '<'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '~'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '^'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '#'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '%'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '@'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '!'.charCodeAt(0)))numEnd = -1;
            }
            if (numEnd >= 0)if (numEnd < newExpressionString.length - 1){
                followingChar = newExpressionString.charAt(numEnd + 1);
                if (((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != ' '.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != ','.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != ';'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '|'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '&'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '+'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '-'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '*'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '\\'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '/'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '('.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != ')'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '='.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '>'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '<'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '~'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '^'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '#'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '%'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '@'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '!'.charCodeAt(0)))numEnd = -1;
            }
            if (numEnd >= 0){
                if ((matchStatusPrev === ExpressionConstants.NOT_FOUND_$LI$()) && (pos > 0)){
                    tokenStr = newExpressionString.substring(lastPos, pos);
                    this.addToken(tokenStr, new KeyWord());
                }
                firstChar = newExpressionString.charAt(pos);
                let leadingOp: boolean = true;
                if (((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '-'.charCodeAt(0)) || ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '+'.charCodeAt(0))){
                    if (this.initialTokens.size() > 0){
                        const lastToken: Token = this.initialTokens.get(this.initialTokens.size() - 1);
                        if (((lastToken.tokenTypeId === Operator.TYPE_ID) && (lastToken.tokenId !== Operator.FACT_ID) && (lastToken.tokenId !== Operator.PERC_ID)) || (lastToken.tokenTypeId === BinaryRelation.TYPE_ID) || (lastToken.tokenTypeId === BooleanOperator.TYPE_ID) || (lastToken.tokenTypeId === BitwiseOperator.TYPE_ID) || ((lastToken.tokenTypeId === ParserSymbol.TYPE_ID) && (lastToken.tokenId === ParserSymbol.LEFT_PARENTHESES_ID)))leadingOp = false; else leadingOp = true;
                    } else leadingOp = false;
                } else leadingOp = false;
                if (leadingOp === true){
                    if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '-'.charCodeAt(0))this.addToken("-", this.keyWordsList.get(minusKwId));
                    if ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(firstChar) == '+'.charCodeAt(0))this.addToken("+", this.keyWordsList.get(plusKwId));
                    pos++;
                }
                tokenStr = newExpressionString.substring(pos, numEnd + 1);
                this.addToken(tokenStr, this.keyWordsList.get(numberKwId));
                pos = numEnd + 1;
                lastPos = pos;
                matchStatus = ExpressionConstants.FOUND_$LI$();
                matchStatusPrev = ExpressionConstants.FOUND_$LI$();
            } else {
                let kwId: number = -1;
                matchStatus = ExpressionConstants.NOT_FOUND_$LI$();
                do {{
                    kwId++;
                    kw = this.keyWordsList.get(kwId);
                    kwStr = kw.wordString;
                    if (pos + kwStr.length <= newExpressionString.length){
                        sub = newExpressionString.substring(pos, pos + kwStr.length);
                        if (sub === kwStr)matchStatus = ExpressionConstants.FOUND_$LI$();
                        if (matchStatus === ExpressionConstants.FOUND_$LI$()){
                            if ((kw.wordTypeId === ArgumentConstants.TYPE_ID) || (kw.wordTypeId === RecursiveArgument.TYPE_ID_RECURSIVE) || (kw.wordTypeId === Function1Arg.TYPE_ID) || (kw.wordTypeId === Function2Arg.TYPE_ID) || (kw.wordTypeId === Function3Arg.TYPE_ID) || (kw.wordTypeId === FunctionVariadic.TYPE_ID) || (kw.wordTypeId === ConstantValue.TYPE_ID) || (kw.wordTypeId === Constant.TYPE_ID) || (kw.wordTypeId === RandomVariable.TYPE_ID) || (kw.wordTypeId === Unit.TYPE_ID) || (kw.wordTypeId === FunctionConstants.TYPE_ID) || (kw.wordTypeId === CalculusOperator.TYPE_ID)){
                                if (pos > 0){
                                    precedingChar = newExpressionString.charAt(pos - 1);
                                    if (((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != ' '.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != ','.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != ';'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '|'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '&'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '+'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '-'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '*'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '\\'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '/'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '('.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != ')'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '='.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '>'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '<'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '~'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '^'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '#'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '%'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '@'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(precedingChar) != '!'.charCodeAt(0)))matchStatus = ExpressionConstants.NOT_FOUND_$LI$();
                                }
                                if ((matchStatus === ExpressionConstants.FOUND_$LI$()) && (pos + kwStr.length < newExpressionString.length)){
                                    followingChar = newExpressionString.charAt(pos + kwStr.length);
                                    if (((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != ' '.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != ','.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != ';'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '|'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '&'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '+'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '-'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '*'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '\\'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '/'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '('.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != ')'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '='.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '>'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '<'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '~'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '^'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '#'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '%'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '@'.charCodeAt(0)) && ((c => c.charCodeAt==null?<any>c:c.charCodeAt(0))(followingChar) != '!'.charCodeAt(0)))matchStatus = ExpressionConstants.NOT_FOUND_$LI$();
                                }
                            }
                        }
                    }
                }} while(((kwId < this.keyWordsList.size() - 1) && (matchStatus === ExpressionConstants.NOT_FOUND_$LI$())));
                if (matchStatus === ExpressionConstants.FOUND_$LI$()){
                    if ((matchStatusPrev === ExpressionConstants.NOT_FOUND_$LI$()) && (pos > 0)){
                        tokenStr = newExpressionString.substring(lastPos, pos);
                        this.addToken(tokenStr, new KeyWord());
                    }
                    matchStatusPrev = ExpressionConstants.FOUND_$LI$();
                    tokenStr = newExpressionString.substring(pos, pos + kwStr.length);
                    if (!((kw.wordTypeId === ParserSymbol.TYPE_ID) && (kw.wordId === ParserSymbol.BLANK_ID)))this.addToken(tokenStr, kw);
                    lastPos = pos + kwStr.length;
                    pos = pos + kwStr.length;
                } else {
                    matchStatusPrev = ExpressionConstants.NOT_FOUND_$LI$();
                    if (pos < newExpressionString.length)pos++;
                }
            }
        }} while((pos < newExpressionString.length));
        if (matchStatus === ExpressionConstants.NOT_FOUND_$LI$()){
            tokenStr = newExpressionString.substring(lastPos, pos);
            this.addToken(tokenStr, new KeyWord());
        }
        this.evaluateTokensLevels();
    }

    /**
     * Evaluates tokens levels
     * @private
     */
    /*private*/ evaluateTokensLevels() {
        let tokenLevel: number = 0;
        const tokenStack: java.util.Stack<TokenStackElement> = <any>(new java.util.Stack<TokenStackElement>());
        let precedingFunction: boolean = false;
        if (this.initialTokens.size() > 0)for(let tokenIndex: number = 0; tokenIndex < this.initialTokens.size(); tokenIndex++) {{
            const token: Token = this.initialTokens.get(tokenIndex);
            if ((token.tokenTypeId === Function1Arg.TYPE_ID) || (token.tokenTypeId === Function2Arg.TYPE_ID) || (token.tokenTypeId === Function3Arg.TYPE_ID) || (token.tokenTypeId === FunctionConstants.TYPE_ID) || (token.tokenTypeId === CalculusOperator.TYPE_ID) || (token.tokenTypeId === RecursiveArgument.TYPE_ID_RECURSIVE) || (token.tokenTypeId === FunctionVariadic.TYPE_ID)){
                tokenLevel++;
                precedingFunction = true;
            } else if ((token.tokenTypeId === ParserSymbol.TYPE_ID) && (token.tokenId === ParserSymbol.LEFT_PARENTHESES_ID)){
                tokenLevel++;
                const stackEl: TokenStackElement = new TokenStackElement();
                stackEl.tokenId = token.tokenId;
                stackEl.tokenIndex = tokenIndex;
                stackEl.tokenLevel = tokenLevel;
                stackEl.tokenTypeId = token.tokenTypeId;
                stackEl.precedingFunction = precedingFunction;
                tokenStack.push(stackEl);
                precedingFunction = false;
            } else precedingFunction = false;
            token.tokenLevel = tokenLevel;
            if ((token.tokenTypeId === ParserSymbol.TYPE_ID) && (token.tokenId === ParserSymbol.RIGHT_PARENTHESES_ID)){
                tokenLevel--;
                if (!tokenStack.isEmpty()){
                    const stackEl: TokenStackElement = tokenStack.pop();
                    if (stackEl.precedingFunction === true)tokenLevel--;
                }
            }
        };}
    }

    /**
     * copy initial tokens lito to tokens list
     * @private
     */
    /*private*/ copyInitialTokens() {
        this.tokensList = <any>(new java.util.ArrayList<Token>());
        for(let index167=this.initialTokens.iterator();index167.hasNext();) {
            let token = index167.next();
            {
                this.tokensList.add(/* clone */((o: any) => { if (o.clone != undefined) { return (<any>o).clone(); } else { let clone = Object.create(o); for(let p in o) { if (o.hasOwnProperty(p)) clone[p] = o[p]; } return clone; } })(token));
            }
        }
    }

    /*private*/ FUNCTION: string;

    /*private*/ ARGUMENT: string;

    /*private*/ UNITCONST: string;

    /*private*/ ERROR: string;

    /**
     * Tokenizes expression string and returns tokens list,
     * including: string, type, level.
     * 
     * @return {*} Copy of initial tokens.
     * 
     * @see Token
     * @see mXparser#consolePrintTokens(List)
     */
    public getCopyOfInitialTokens(): java.util.List<Token> {
        const tokensListCopy: java.util.List<Token> = <any>(new java.util.ArrayList<Token>());
        if (this.expressionString.length === 0)return tokensListCopy;
        this.tokenizeExpressionString();
        if (this.initialTokens.size() === 0)return tokensListCopy;
        let token: Token;
        for(let i: number = 0; i < this.initialTokens.size(); i++) {{
            token = this.initialTokens.get(i);
            if (token.tokenTypeId === Token.NOT_MATCHED_$LI$()){
                if (mXparserConstants.regexMatch(token.tokenStr, ParserSymbol.unitOnlyTokenRegExp_$LI$())){
                    token.looksLike = this.UNITCONST;
                } else if (mXparserConstants.regexMatch(token.tokenStr, ParserSymbol.nameOnlyTokenRegExp)){
                    token.looksLike = this.ARGUMENT;
                    if (i < this.initialTokens.size() - 1){
                        const tokenNext: Token = this.initialTokens.get(i + 1);
                        if ((tokenNext.tokenTypeId === ParserSymbol.TYPE_ID) && (tokenNext.tokenId === ParserSymbol.LEFT_PARENTHESES_ID))token.looksLike = this.FUNCTION;
                    }
                } else {
                    token.looksLike = this.ERROR;
                }
            }
            tokensListCopy.add(/* clone */((o: any) => { if (o.clone != undefined) { return (<any>o).clone(); } else { let clone = Object.create(o); for(let p in o) { if (o.hasOwnProperty(p)) clone[p] = o[p]; } return clone; } })(token));
        };}
        return tokensListCopy;
    }

    /**
     * Returns missing user defined arguments names, i.e.
     * sin(x) + cos(y) where x and y are not defined
     * function will return x and y.
     * 
     * @return {java.lang.String[]} Array of missing user defined arguments names
     * - distinct strings.
     */
    public getMissingUserDefinedArguments(): string[] {
        const tokens: java.util.List<Token> = this.getCopyOfInitialTokens();
        const missingArguments: java.util.List<string> = <any>(new java.util.ArrayList<string>());
        for(let index168=tokens.iterator();index168.hasNext();) {
            let t = index168.next();
            if (t.looksLike === this.ARGUMENT)if (!missingArguments.contains(t.tokenStr))missingArguments.add(t.tokenStr);
        }
        const n: number = missingArguments.size();
        const missArgs: string[] = (s => { let a=[]; while(s-->0) a.push(null); return a; })(n);
        for(let i: number = 0; i < n; i++) {missArgs[i] = missingArguments.get(i);}
        return missArgs;
    }

    /**
     * Returns missing user defined units names, i.e.
     * 2*[w] + [q] where [w] and [q] are not defined
     * function will return [w] and [q].
     * 
     * @return {java.lang.String[]} Array of missing user defined units names
     * - distinct strings.
     */
    public getMissingUserDefinedUnits(): string[] {
        const tokens: java.util.List<Token> = this.getCopyOfInitialTokens();
        const missingUnits: java.util.List<string> = <any>(new java.util.ArrayList<string>());
        for(let index169=tokens.iterator();index169.hasNext();) {
            let t = index169.next();
            if (t.looksLike === this.UNITCONST)if (!missingUnits.contains(t.tokenStr))missingUnits.add(t.tokenStr);
        }
        const n: number = missingUnits.size();
        const missUnits: string[] = (s => { let a=[]; while(s-->0) a.push(null); return a; })(n);
        for(let i: number = 0; i < n; i++) {missUnits[i] = missingUnits.get(i);}
        return missUnits;
    }

    /**
     * Returns missing user defined functions names, i.e.
     * sin(x) + fun(x,y) where fun is not defined
     * function will return fun.
     * 
     * @return {java.lang.String[]} Array of missing user defined functions names
     * - distinct strings.
     */
    public getMissingUserDefinedFunctions(): string[] {
        const tokens: java.util.List<Token> = this.getCopyOfInitialTokens();
        const missingFunctions: java.util.List<string> = <any>(new java.util.ArrayList<string>());
        for(let index170=tokens.iterator();index170.hasNext();) {
            let t = index170.next();
            if (t.looksLike === this.FUNCTION)if (!missingFunctions.contains(t.tokenStr))missingFunctions.add(t.tokenStr);
        }
        const n: number = missingFunctions.size();
        const missFun: string[] = (s => { let a=[]; while(s-->0) a.push(null); return a; })(n);
        for(let i: number = 0; i < n; i++) {missFun[i] = missingFunctions.get(i);}
        return missFun;
    }

    /**
     * Gets initial tokens and returns copied list
     * 
     * @see Function
     * @return {*}
     */
    getInitialTokens(): java.util.List<Token> {
        return this.initialTokens;
    }

    /*private*/ static getLeftSpaces(maxStr: string, str: string): string {
        let spc: string = "";
        for(let i: number = 0; i < maxStr.length - str.length; i++) {spc = spc + " ";}
        return spc + str;
    }

    /*private*/ static getRightSpaces(maxStr: string, str: string): string {
        let spc: string = "";
        for(let i: number = 0; i < maxStr.length - str.length; i++) {spc = " " + spc;}
        return str + spc;
    }

    /**
     * Shows parsing (verbose mode purposes).
     * @param {number} lPos
     * @param {number} rPos
     * @private
     */
    /*private*/ showParsing(lPos: number, rPos: number) {
        mXparserConstants.consolePrint(" ---> ");
        for(let i: number = lPos; i <= rPos; i++) {{
            const token: Token = this.tokensList.get(i);
            if (token.tokenTypeId === ParserSymbol.NUMBER_TYPE_ID)mXparserConstants.consolePrint(token.tokenValue + " "); else mXparserConstants.consolePrint(token.tokenStr + " ");
        };}
        mXparserConstants.consolePrint(" ... ");
    }

    /**
     * shows known keywords
     */
    showKeyWords() {
        const keyWordsNumber: number = this.keyWordsList.size();
        const maxStr: string = "KEY_WORD";
        mXparserConstants.consolePrintln$java_lang_Object("KEY WORDS:");
        mXparserConstants.consolePrintln$java_lang_Object(" -------------------------------------------");
        mXparserConstants.consolePrintln$java_lang_Object("|      IDX | KEY_WORD |       ID |  TYPE_ID |");
        mXparserConstants.consolePrintln$java_lang_Object(" -------------------------------------------");
        for(let keyWordIndex: number = 0; keyWordIndex < keyWordsNumber; keyWordIndex++) {{
            const keyWord: KeyWord = this.keyWordsList.get(keyWordIndex);
            const idxStr: string = Expression.getLeftSpaces(maxStr, /* toString */(''+(keyWordIndex)));
            const wordStr: string = Expression.getLeftSpaces(maxStr, keyWord.wordString);
            const idStr: string = Expression.getLeftSpaces(maxStr, /* toString */(''+(keyWord.wordId)));
            const typeIdStr: string = Expression.getLeftSpaces(maxStr, /* toString */(''+(keyWord.wordTypeId)));
            mXparserConstants.consolePrintln$java_lang_Object("| " + idxStr + " | " + wordStr + " | " + idStr + " | " + typeIdStr + " |");
        };}
        mXparserConstants.consolePrintln$java_lang_Object(" -------------------------------------------");
    }

    public getHelp$(): string {
        return this.getHelp$java_lang_String("");
    }

    public getHelp$java_lang_String(word: string): string {
        this.keyWordsList = <any>(new java.util.ArrayList<KeyWord>());
        let helpStr: string = "Help content: \n\n";
        this.addParserKeyWords();
        this.validateParserKeyWords();
        if (this.parserKeyWordsOnly === false){
            this.addArgumentsKeyWords();
            this.addFunctionsKeyWords();
            this.addConstantsKeyWords();
        }
        helpStr = helpStr + Expression.getLeftSpaces("12345", "#") + "  " + Expression.getRightSpaces("01234567890123456789", "key word") + Expression.getRightSpaces("                        ", "type") + Expression.getRightSpaces("0123456789012345678901234567890123456789012345", "syntax") + Expression.getRightSpaces("012345", "since") + "description\n";
        helpStr = helpStr + Expression.getLeftSpaces("12345", "-") + "  " + Expression.getRightSpaces("01234567890123456789", "--------") + Expression.getRightSpaces("                        ", "----") + Expression.getRightSpaces("0123456789012345678901234567890123456789012345", "------") + Expression.getRightSpaces("012345", "-----") + "-----------\n";
        java.util.Collections.sort<any>(this.keyWordsList, ((funcInst: any) => { if (typeof funcInst == 'function') { return funcInst } return (arg0, arg1) =>  (funcInst['compare'] ? funcInst['compare'] : funcInst) .call(funcInst, arg0, arg1)})(new KwTypeComparator()));
        const keyWordsNumber: number = this.keyWordsList.size();
        let type: string;
        let kw: string;
        let line: string;
        for(let keyWordIndex: number = 0; keyWordIndex < keyWordsNumber; keyWordIndex++) {{
            const keyWord: KeyWord = this.keyWordsList.get(keyWordIndex);
            type = "";
            kw = keyWord.wordString;
            switch((keyWord.wordTypeId)) {
            case ParserSymbol.TYPE_ID:
                type = ParserSymbol.TYPE_DESC;
                break;
            case ParserSymbol.NUMBER_TYPE_ID:
                type = "number";
                kw = "_number_";
                break;
            case Operator.TYPE_ID:
                type = Operator.TYPE_DESC;
                break;
            case BooleanOperator.TYPE_ID:
                type = BooleanOperator.TYPE_DESC;
                break;
            case BinaryRelation.TYPE_ID:
                type = BinaryRelation.TYPE_DESC;
                break;
            case Function1Arg.TYPE_ID:
                type = Function1Arg.TYPE_DESC;
                break;
            case Function2Arg.TYPE_ID:
                type = Function2Arg.TYPE_DESC;
                break;
            case Function3Arg.TYPE_ID:
                type = Function3Arg.TYPE_DESC;
                break;
            case FunctionVariadic.TYPE_ID:
                type = FunctionVariadic.TYPE_DESC;
                break;
            case CalculusOperator.TYPE_ID:
                type = CalculusOperator.TYPE_DESC;
                break;
            case RandomVariable.TYPE_ID:
                type = RandomVariable.TYPE_DESC;
                break;
            case ConstantValue.TYPE_ID:
                type = ConstantValue.TYPE_DESC;
                break;
            case ArgumentConstants.TYPE_ID:
                type = ArgumentConstants.TYPE_DESC;
                break;
            case RecursiveArgument.TYPE_ID_RECURSIVE:
                type = RecursiveArgument.TYPE_DESC_RECURSIVE;
                break;
            case FunctionConstants.TYPE_ID:
                type = FunctionConstants.TYPE_DESC;
                break;
            case Constant.TYPE_ID:
                type = Constant.TYPE_DESC;
                break;
            case Unit.TYPE_ID:
                type = Unit.TYPE_DESC;
                break;
            case BitwiseOperator.TYPE_ID:
                type = BitwiseOperator.TYPE_DESC;
                break;
            }
            line = Expression.getLeftSpaces("12345", /* toString */(''+(keyWordIndex + 1))) + ". " + Expression.getRightSpaces("01234567890123456789", kw) + Expression.getRightSpaces("                        ", "<" + type + ">") + Expression.getRightSpaces("0123456789012345678901234567890123456789012345", keyWord.syntax) + Expression.getRightSpaces("012345", keyWord.since) + keyWord.description + "\n";
            if ((line.toLowerCase().indexOf(word.toLowerCase()) >= 0)){
                helpStr = helpStr + line;
            }
        };}
        return helpStr;
    }

    /**
     * Searching help content.
     * 
     * @param      {string} word                searching key word
     * 
     * @return     {string} The help content.
     */
    public getHelp(word?: any): any {
        if (((typeof word === 'string') || word === null)) {
            return <any>this.getHelp$java_lang_String(word);
        } else if (word === undefined) {
            return <any>this.getHelp$();
        } else throw new Error('invalid overload');
    }

    public getKeyWords$(): java.util.List<KeyWord> {
        return this.getKeyWords$java_lang_String("");
    }

    public getKeyWords$java_lang_String(query: string): java.util.List<KeyWord> {
        this.keyWordsList = <any>(new java.util.ArrayList<KeyWord>());
        const kwyWordsToReturn: java.util.List<KeyWord> = <any>(new java.util.ArrayList<KeyWord>());
        this.addParserKeyWords();
        this.validateParserKeyWords();
        if (this.parserKeyWordsOnly === false){
            this.addArgumentsKeyWords();
            this.addFunctionsKeyWords();
            this.addConstantsKeyWords();
        }
        java.util.Collections.sort<any>(this.keyWordsList, ((funcInst: any) => { if (typeof funcInst == 'function') { return funcInst } return (arg0, arg1) =>  (funcInst['compare'] ? funcInst['compare'] : funcInst) .call(funcInst, arg0, arg1)})(new KwTypeComparator()));
        let line: string;
        for(let index171=this.keyWordsList.iterator();index171.hasNext();) {
            let kw = index171.next();
            {
                line = "str=" + kw.wordString + " desc=" + kw.description + " syn=" + kw.syntax + " sin=" + kw.since + " wid=" + kw.wordId + " tid=" + kw.wordTypeId;
                if ((line.toLowerCase().indexOf(query.toLowerCase()) >= 0))kwyWordsToReturn.add(kw);
            }
        }
        return kwyWordsToReturn;
    }

    /**
     * Returns list of key words known to the parser
     * 
     * @param {string} query Give any string to filter list of key words against this string.
     * User more precise syntax: str=tokenString, desc=tokenDescription,
     * syn=TokenSyntax, sin=tokenSince, wid=wordId, tid=wordTypeId
     * to narrow the result.
     * 
     * @return      {*} List of keywords known to the parser filter against query string.
     * 
     * @see KeyWord
     * @see KeyWord#wordTypeId
     * @see Expression#getHelp(String)
     */
    public getKeyWords(query?: any): any {
        if (((typeof query === 'string') || query === null)) {
            return <any>this.getKeyWords$java_lang_String(query);
        } else if (query === undefined) {
            return <any>this.getKeyWords$();
        } else throw new Error('invalid overload');
    }

    showTokens() {
        Expression.showTokens(this.tokensList);
    }

    static showTokens(tokensList: java.util.List<Token>) {
        const maxStr: string = "TokenTypeId";
        mXparserConstants.consolePrintln$java_lang_Object(" --------------------");
        mXparserConstants.consolePrintln$java_lang_Object("| Expression tokens: |");
        mXparserConstants.consolePrintln$java_lang_Object(" ---------------------------------------------------------------------------------------------------------------");
        mXparserConstants.consolePrintln$java_lang_Object("|    TokenIdx |       Token |        KeyW |     TokenId | TokenTypeId |  TokenLevel |  TokenValue |   LooksLike |");
        mXparserConstants.consolePrintln$java_lang_Object(" ---------------------------------------------------------------------------------------------------------------");
        if (tokensList == null){
            mXparserConstants.consolePrintln$java_lang_Object("NULL tokens list");
            return;
        }
        const tokensNumber: number = tokensList.size();
        for(let tokenIndex: number = 0; tokenIndex < tokensNumber; tokenIndex++) {{
            const tokenIndexStr: string = Expression.getLeftSpaces(maxStr, /* toString */(''+(tokenIndex)));
            const tokenStr: string = Expression.getLeftSpaces(maxStr, tokensList.get(tokenIndex).tokenStr);
            const keyWordStr: string = Expression.getLeftSpaces(maxStr, tokensList.get(tokenIndex).keyWord);
            const tokenIdStr: string = Expression.getLeftSpaces(maxStr, /* toString */(''+(tokensList.get(tokenIndex).tokenId)));
            const tokenTypeIdStr: string = Expression.getLeftSpaces(maxStr, /* toString */(''+(tokensList.get(tokenIndex).tokenTypeId)));
            const tokenLevelStr: string = Expression.getLeftSpaces(maxStr, /* toString */(''+(tokensList.get(tokenIndex).tokenLevel)));
            const tokenValueStr: string = Expression.getLeftSpaces(maxStr, /* toString */(''+(tokensList.get(tokenIndex).tokenValue)));
            const tokenLooksLikeStr: string = Expression.getLeftSpaces(maxStr, tokensList.get(tokenIndex).looksLike);
            mXparserConstants.consolePrintln$java_lang_Object("| " + tokenIndexStr + " | " + tokenStr + " | " + keyWordStr + " | " + tokenIdStr + " | " + tokenTypeIdStr + " | " + tokenLevelStr + " | " + tokenValueStr + " | " + tokenLooksLikeStr + " |");
        };}
        mXparserConstants.consolePrintln$java_lang_Object(" ---------------------------------------------------------------------------------------------------------------");
    }

    /**
     * shows initial tokens
     */
    showInitialTokens() {
        Expression.showTokens(this.initialTokens);
    }

    /*private*/ showArguments() {
        for(let index172=this.argumentsList.iterator();index172.hasNext();) {
            let a = index172.next();
            {
                const vMode: boolean = a.getVerboseMode();
                a.setSilentMode();
                this.printSystemInfo(a.getArgumentName() + " = " + a.getArgumentValue() + "\n", ExpressionConstants.WITH_EXP_STR);
                if (vMode === true)a.setVerboseMode();
            }
        }
    }

    /**
     * 
     * @param {string} info
     * @param {boolean} withExpressionString
     * @private
     */
    /*private*/ printSystemInfo(info: string, withExpressionString: boolean) {
        if (withExpressionString)mXparserConstants.consolePrint("[" + this.description + "][" + this.expressionString + "] " + info); else mXparserConstants.consolePrint(info);
    }

    /**
     * Expression cloning.
     * @return {Expression}
     */
    clone(): Expression {
        const newExp: Expression = new Expression(this);
        if ((this.initialTokens != null) && (this.initialTokens.size() > 0))newExp.initialTokens = this.createInitialTokens(0, this.initialTokens.size() - 1, this.initialTokens);
        return newExp;
    }

    public static create() : Expression {
        return Expression.createWithExpression(null);
    }

    public static createWithExpression(expression : string) : Expression {
        return new Expression(expression !== null ? expression.split(' ').join('') : expression,null,undefined,undefined,undefined,undefined,undefined,undefined);
    }

    public static createWithExpressionAndArgumentValues(expression : string, ...argumentValues : Argument[]) : Expression {
        let retVal: Expression = Expression.create();
        retVal.setExpressionString(expression.split(' ').join(''));
        retVal.addArguments(...argumentValues);
        return retVal;
    }
}
Expression["__class"] = "org.mariuszgromada.math.mxparser.Expression";
var __Function = Function;