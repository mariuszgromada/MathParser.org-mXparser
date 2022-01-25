import { ParserSymbol } from './parsertokens/ParserSymbol';
import { PrimitiveElement } from './PrimitiveElement';
import { Expression } from './Expression';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';
import { HeadEqBody } from './Miscellaneous';
import { Function } from './Function';
import { Constant } from './Constant';
import { mXparserConstants } from './mXparserConstants';
import { ArgumentExtension } from './ArgumentExtension';
import { ArgumentConstants } from './ArgumentConstants';
import { ExpressionConstants } from './ExpressionConstants';

/**
 * Default constructor - creates argument based on the argument definition string.
 * 
 * @param      {string} argumentDefinitionString        Argument definition string, i.e.:
 * <ul>
 * <li>'x' - only argument name
 * <li>'x=5' - argument name and argument value
 * <li>'x=2*5' - argument name and argument value given as simple expression
 * <li>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')
 * </ul>
 * 
 * @param      {boolean} forceDependent   If true parser will try to create dependent argument
 * @param      {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements   Optional parameters (comma separated) such as Arguments, Constants, Functions
 * @class
 * @extends PrimitiveElement
 */
export class Argument extends PrimitiveElement {

    /**
     * Argument with body based on the extended code.
     * 
     * @see ArgumentExtension
     * @see Argument#getArgumentBodyType()
     */
    public static BODY_EXTENDED: number = 2;

    public static createArgumentWithExpression(argumentExpression: string) : Argument {
        return Argument.createArgumentWithExpressionArgumentAndValue(argumentExpression, null, null);
    }

    public static createArgumentWithName(argumentName: string) : Argument {
        return Argument.createArgumentWithExpressionArgumentAndValue(null, argumentName, null);
    }

    public static createArgumentWithNameAndValue(argumentName: string, argumentValue: number) : Argument {
        return Argument.createArgumentWithExpressionArgumentAndValue(null, argumentName, argumentValue);
    }

    private static createArgumentWithExpressionArgumentAndValue(argumentExpression: string, argumentName: string, argumentValue: number) : Argument {
        let x : Argument = new Argument(null, null, null);
        if(argumentExpression !== null) {
            x.setArgumentExpressionString(argumentExpression);
        } else if(argumentName !== null && argumentValue !== null) {
            x.setArgumentName(argumentName);
            x.setArgumentValue(argumentValue);
        } else if(argumentName !== null && argumentValue === null) {
            x.setArgumentName(argumentName);
        }
        x.argumentType = ArgumentConstants.FREE_ARGUMENT;
        return x;
    }

    /**
     * Argument body type.
     * 
     * @see Argument#BODY_RUNTIME
     * @see Argument#BODY_EXTENDED
     * @see Argument#getArgumentBodyType()
     */
    /*private*/ argumentBodyType: number;

    /**
     * Argument extension (body based in code)
     * 
     * @see ArgumentExtension
     * @see Argument#Argument(String, ArgumentExtension)
     */
    /*private*/ argumentExtension: ArgumentExtension;

    /**
     * Description of the argument.
     */
    /*private*/ description: string;

    /**
     * Argument expression for dependent and recursive
     * arguments.
     */
    argumentExpression: Expression;

    /**
     * Argument name (x, y, arg1, my_argument, etc...)
     */
    /*private*/ argumentName: string;

    /**
     * Argument type (free, dependent)
     */
    argumentType: number;

    /**
     * Argument value (for free arguments).
     */
    argumentValue: number;

    /**
     * Index argument.
     * 
     * @see RecursiveArgument
     */
    n: Argument;

    public constructor(argumentName?: any, argumentExpressionString?: any, ...elements: any[]) {
        if (((typeof argumentName === 'string') || argumentName === null) && ((typeof argumentExpressionString === 'string') || argumentExpressionString === null) && ((elements != null && elements instanceof <any>Array && (elements.length == 0 || elements[0] == null ||(elements[0] != null && elements[0] instanceof <any>PrimitiveElement))) || elements === null)) {
            let __args = arguments;
            super(ArgumentConstants.TYPE_ID);
            if (this.argumentBodyType === undefined) { this.argumentBodyType = 0; } 
            if (this.argumentExtension === undefined) { this.argumentExtension = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentExpression === undefined) { this.argumentExpression = null; } 
            if (this.argumentName === undefined) { this.argumentName = null; } 
            if (this.argumentType === undefined) { this.argumentType = 0; } 
            if (this.argumentValue === undefined) { this.argumentValue = 0; } 
            if (this.n === undefined) { this.n = null; } 
            if (argumentName !== null && mXparserConstants.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp)){
                this.argumentName = argumentName;
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentExpression = <any>new Expression(argumentExpressionString,elements);
                this.argumentExpression.setDescription(argumentName);
                this.argumentType = ArgumentConstants.DEPENDENT_ARGUMENT;
            } else {
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentExpression = Expression.create();
                this.argumentExpression.setSyntaxStatus(ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + argumentName + "] Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
            }
            this.argumentBodyType = ArgumentConstants.BODY_RUNTIME;
            this.setSilentMode();
            this.description = "";
        } else if (((typeof argumentName === 'string') || argumentName === null) && ((typeof argumentExpressionString === 'boolean') || argumentExpressionString === null) && ((elements != null && elements instanceof <any>Array && (elements.length == 0 || elements[0] == null ||(elements[0] != null && elements[0] instanceof <any>PrimitiveElement))) || elements === null)) {
            let __args = arguments;
            let argumentDefinitionString: any = __args[0];
            let forceDependent: any = __args[1];
            super(ArgumentConstants.TYPE_ID);
            if (this.argumentBodyType === undefined) { this.argumentBodyType = 0; } 
            if (this.argumentExtension === undefined) { this.argumentExtension = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentExpression === undefined) { this.argumentExpression = null; } 
            if (this.argumentName === undefined) { this.argumentName = null; } 
            if (this.argumentType === undefined) { this.argumentType = 0; } 
            if (this.argumentValue === undefined) { this.argumentValue = 0; } 
            if (this.n === undefined) { this.n = null; } 
            if (mXparserConstants.regexMatch(argumentDefinitionString, ParserSymbol.nameOnlyTokenRegExp)){
                this.argumentName = argumentDefinitionString;
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentType = ArgumentConstants.FREE_ARGUMENT;
                this.argumentExpression = <any>new Expression(null, elements);
            } else if (mXparserConstants.regexMatch(argumentDefinitionString, ParserSymbol.constArgDefStrRegExp_$LI$())){
                const headEqBody: HeadEqBody = new HeadEqBody(argumentDefinitionString);
                this.argumentName = headEqBody.headTokens.get(0).tokenStr;
                const bodyExpr: Expression = new Expression(headEqBody.bodyStr);
                if (forceDependent === true){
                    this.argumentExpression = bodyExpr;
                    this.addDefinitions.apply(this, elements);
                    this.argumentType = ArgumentConstants.DEPENDENT_ARGUMENT;
                } else {
                    const bodyValue: number = bodyExpr.calculate();
                    if ((bodyExpr.getSyntaxStatus() === ExpressionConstants.NO_SYNTAX_ERRORS) && (bodyValue !== javaemul.internal.DoubleHelper.NaN)){
                        this.argumentExpression = new Expression();
                        this.argumentValue = bodyValue;
                        this.argumentType = ArgumentConstants.FREE_ARGUMENT;
                    } else {
                        this.argumentExpression = bodyExpr;
                        this.addDefinitions.apply(this, elements);
                        this.argumentType = ArgumentConstants.DEPENDENT_ARGUMENT;
                    }
                }
            } else if (mXparserConstants.regexMatch(argumentDefinitionString, ParserSymbol.functionDefStrRegExp_$LI$())){
                const headEqBody: HeadEqBody = new HeadEqBody(argumentDefinitionString);
                this.argumentName = headEqBody.headTokens.get(0).tokenStr;
                this.argumentExpression = <any>new Expression(headEqBody.bodyStr, elements);
                this.argumentExpression.setDescription(headEqBody.headStr);
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentType = ArgumentConstants.DEPENDENT_ARGUMENT;
                this.n = new Argument(headEqBody.headTokens.get(2).tokenStr);
            } else {
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentType = ArgumentConstants.FREE_ARGUMENT;
                this.argumentExpression = new Expression();
                this.argumentExpression.setSyntaxStatus(ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + argumentDefinitionString + "] Invalid argument definition (patterns: \'x\', \'x=5\', \'x=5+3/2\', \'x=2*y\').");
            }
            this.argumentBodyType = ArgumentConstants.BODY_RUNTIME;
            this.setSilentMode();
            this.description = "";
        } else if (((typeof argumentName === 'string') || argumentName === null) && ((argumentExpressionString != null && argumentExpressionString instanceof <any>Array && (argumentExpressionString.length == 0 || argumentExpressionString[0] == null ||(argumentExpressionString[0] != null && argumentExpressionString[0] instanceof <any>PrimitiveElement))) || argumentExpressionString === null) && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let argumentDefinitionString: any = __args[0];
            let elements: any[] = __args[1];
            super(ArgumentConstants.TYPE_ID);
            if (this.argumentBodyType === undefined) { this.argumentBodyType = 0; } 
            if (this.argumentExtension === undefined) { this.argumentExtension = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentExpression === undefined) { this.argumentExpression = null; } 
            if (this.argumentName === undefined) { this.argumentName = null; } 
            if (this.argumentType === undefined) { this.argumentType = 0; } 
            if (this.argumentValue === undefined) { this.argumentValue = 0; } 
            if (this.n === undefined) { this.n = null; } 
            if (mXparserConstants.regexMatch(argumentDefinitionString, ParserSymbol.nameOnlyTokenRegExp)){
                this.argumentName = argumentDefinitionString;
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentType = ArgumentConstants.FREE_ARGUMENT;
                this.argumentExpression = <any>new Expression(null, elements);
            } else if (mXparserConstants.regexMatch(argumentDefinitionString, ParserSymbol.constArgDefStrRegExp_$LI$())){
                const headEqBody: HeadEqBody = new HeadEqBody(argumentDefinitionString);
                this.argumentName = headEqBody.headTokens.get(0).tokenStr;
                const bodyExpr: Expression = new Expression(headEqBody.bodyStr);
                const bodyValue: number = bodyExpr.calculate();
                if ((bodyExpr.getSyntaxStatus() === ExpressionConstants.NO_SYNTAX_ERRORS) && (bodyValue !== javaemul.internal.DoubleHelper.NaN)){
                    this.argumentExpression = new Expression();
                    this.argumentValue = bodyValue;
                    this.argumentType = ArgumentConstants.FREE_ARGUMENT;
                } else {
                    this.argumentExpression = bodyExpr;
                    this.addDefinitions.apply(this, elements);
                    this.argumentType = ArgumentConstants.DEPENDENT_ARGUMENT;
                }
            } else if (mXparserConstants.regexMatch(argumentDefinitionString, ParserSymbol.functionDefStrRegExp_$LI$())){
                const headEqBody: HeadEqBody = new HeadEqBody(argumentDefinitionString);
                this.argumentName = headEqBody.headTokens.get(0).tokenStr;
                this.argumentExpression = <any>new Expression(headEqBody.bodyStr, elements);
                this.argumentExpression.setDescription(headEqBody.headStr);
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentType = ArgumentConstants.DEPENDENT_ARGUMENT;
                this.n = new Argument(headEqBody.headTokens.get(2).tokenStr);
            } else {
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentType = ArgumentConstants.FREE_ARGUMENT;
                this.argumentExpression = new Expression();
                this.argumentExpression.setSyntaxStatus(ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + argumentDefinitionString + "] Invalid argument definition (patterns: \'x\', \'x=5\', \'x=5+3/2\', \'x=2*y\').");
            }
            this.argumentBodyType = ArgumentConstants.BODY_RUNTIME;
            this.setSilentMode();
            this.description = "";
        } else if (((typeof argumentName === 'string') || argumentName === null) && ((argumentExpressionString != null && (argumentExpressionString.constructor != null && argumentExpressionString.constructor["__interfaces"] != null && argumentExpressionString.constructor["__interfaces"].indexOf("org.mariuszgromada.math.mxparser.ArgumentExtension") >= 0)) || argumentExpressionString === null) && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let argumentExtension: any = __args[1];
            super(ArgumentConstants.TYPE_ID);
            if (this.argumentBodyType === undefined) { this.argumentBodyType = 0; } 
            if (this.argumentExtension === undefined) { this.argumentExtension = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentExpression === undefined) { this.argumentExpression = null; } 
            if (this.argumentName === undefined) { this.argumentName = null; } 
            if (this.argumentType === undefined) { this.argumentType = 0; } 
            if (this.argumentValue === undefined) { this.argumentValue = 0; } 
            if (this.n === undefined) { this.n = null; } 
            this.argumentExpression = new Expression();
            if (mXparserConstants.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp)){
                this.argumentName = argumentName;
                this.argumentExtension = argumentExtension;
                this.argumentType = ArgumentConstants.FREE_ARGUMENT;
                this.argumentBodyType = Argument.BODY_EXTENDED;
            } else {
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentExpression.setSyntaxStatus(ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + argumentName + "] Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
                this.argumentBodyType = ArgumentConstants.BODY_RUNTIME;
            }
            this.setSilentMode();
            this.description = "";
        } else if (((typeof argumentName === 'string') || argumentName === null) && ((typeof argumentExpressionString === 'number') || argumentExpressionString === null) && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let argumentValue: any = __args[1];
            super(ArgumentConstants.TYPE_ID);
            if (this.argumentBodyType === undefined) { this.argumentBodyType = 0; } 
            if (this.argumentExtension === undefined) { this.argumentExtension = null; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.argumentExpression === undefined) { this.argumentExpression = null; } 
            if (this.argumentName === undefined) { this.argumentName = null; } 
            if (this.argumentType === undefined) { this.argumentType = 0; } 
            if (this.argumentValue === undefined) { this.argumentValue = 0; } 
            if (this.n === undefined) { this.n = null; } 
            this.argumentExpression = new Expression();
            if (mXparserConstants.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp)){
                this.argumentName = argumentName;
                this.argumentValue = argumentValue;
                this.argumentType = ArgumentConstants.FREE_ARGUMENT;
            } else {
                this.argumentValue = ArgumentConstants.ARGUMENT_INITIAL_VALUE_$LI$();
                this.argumentExpression.setSyntaxStatus(ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + argumentName + "] Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
            }
            this.argumentBodyType = ArgumentConstants.BODY_RUNTIME;
            this.setSilentMode();
            this.description = "";
        } else throw new Error('invalid overload');
    }

    /**
     * Sets argument description.
     * 
     * @param      {string} description         the argument description.
     */
    public setDescription(description: string) {
        this.description = description;
    }

    /**
     * Gets argument description.
     * 
     * @return     {string} The argument description string.
     */
    public getDescription(): string {
        return this.description;
    }

    /**
     * Enables argument verbose mode
     */
    public setVerboseMode() {
        this.argumentExpression.setVerboseMode();
    }

    /**
     * Disables argument verbose mode (sets default silent mode)
     */
    public setSilentMode() {
        this.argumentExpression.setSilentMode();
    }

    /**
     * Returns verbose mode status
     * 
     * @return     {boolean} true if verbose mode is on,
     * otherwise returns false.
     */
    public getVerboseMode(): boolean {
        return this.argumentExpression.getVerboseMode();
    }

    /**
     * Gets recursive mode status
     * 
     * @return      {boolean} true if recursive mode is enabled,
     * otherwise returns false
     */
    public getRecursiveMode(): boolean {
        return this.argumentExpression.getRecursiveMode();
    }

    /**
     * Gets computing time
     * 
     * @return     {number} Computing time in seconds.
     */
    public getComputingTime(): number {
        return this.argumentExpression.getComputingTime();
    }

    /**
     * Sets (modifies) argument name.
     * Each expression / function / dependent argument associated
     * with this argument will be marked as modified
     * (requires new syntax checking).
     * 
     * @param      {string} argumentName        the argument name
     */
    public setArgumentName(argumentName: string) {
        if (mXparserConstants.regexMatch(argumentName, ParserSymbol.nameOnlyTokenRegExp)){
            this.argumentName = argumentName;
            this.setExpressionModifiedFlags();
        } else if (this.argumentExpression != null)this.argumentExpression.setSyntaxStatus(ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + argumentName + "] Invalid argument name, pattern not match: " + ParserSymbol.nameOnlyTokenRegExp);
    }

    /**
     * Sets argument expression string.
     * Each expression / function / dependent argument associated
     * with this argument will be marked as modified
     * (requires new syntax checking).
     * If BODY_EXTENDED argument then BODY_RUNTIME is set.
     * 
     * @param      {string} argumentExpressionString      the argument expression string
     * 
     * @see        Expression
     */
    public setArgumentExpressionString(argumentExpressionString: string) {
        this.argumentExpression.setExpressionString(argumentExpressionString);
        if (this.argumentType === ArgumentConstants.FREE_ARGUMENT)this.argumentType = ArgumentConstants.DEPENDENT_ARGUMENT;
        this.argumentBodyType = ArgumentConstants.BODY_RUNTIME;
    }

    /**
     * Gets argument name
     * 
     * @return     {string} the argument name as string
     */
    public getArgumentName(): string {
        return this.argumentName;
    }

    /**
     * Gets argument expression string
     * 
     * @return {string} the argument expression string
     */
    public getArgumentExpressionString(): string {
        return this.argumentExpression.getExpressionString();
    }

    /**
     * Gets argument type
     * 
     * @return     {number} Argument type: ArgumentConstants.FREE_ARGUMENT,
     * ArgumentConstants.DEPENDENT_ARGUMENT,
     * ArgumentConstants.RECURSIVE_ARGUMENT
     */
    public getArgumentType(): number {
        return this.argumentType;
    }

    /**
     * Sets argument value, if DEPENDENT_ARGUMENT then argument type
     * is set to FREE_ARGUMENT.
     * If BODY_EXTENDED argument the BODY_RUNTIME argument is set.
     * 
     * @param  {number} argumentValue       the value of argument
     */
    public setArgumentValue(argumentValue: number) {
        if (this.argumentType === ArgumentConstants.DEPENDENT_ARGUMENT){
            this.argumentType = ArgumentConstants.FREE_ARGUMENT;
            this.argumentExpression.setExpressionString("");
        }
        this.argumentBodyType = ArgumentConstants.BODY_RUNTIME;
        this.argumentValue = argumentValue;
    }

    /**
     * Returns argument body type: {@link Argument#BODY_RUNTIME} {@link Argument#BODY_EXTENDED}
     * @return {number} Returns argument body type: {@link Argument#BODY_RUNTIME} {@link Argument#BODY_EXTENDED}
     */
    public getArgumentBodyType(): number {
        return this.argumentBodyType;
    }

    /**
     * Checks argument syntax
     * 
     * @return    {boolean} syntax status: ArgumentConstants.NO_SYNTAX_ERRORS,
     * ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN
     */
    public checkSyntax(): boolean {
        if (this.argumentBodyType === Argument.BODY_EXTENDED)return ArgumentConstants.NO_SYNTAX_ERRORS_$LI$();
        if (this.argumentType === ArgumentConstants.FREE_ARGUMENT)return ArgumentConstants.NO_SYNTAX_ERRORS_$LI$(); else return this.argumentExpression.checkSyntax$();
    }

    /**
     * Returns error message after checking the syntax
     * 
     * @return     {string} Error message as string.
     */
    public getErrorMessage(): string {
        return this.argumentExpression.getErrorMessage();
    }

    /**
     * Gets argument value.
     * 
     * @return     {number} direct argument value for free argument,
     * otherwise returns calculated argument value
     * based on the argument expression.
     */
    public getArgumentValue(): number {
        if (this.argumentBodyType === Argument.BODY_EXTENDED)return this.argumentExtension.getArgumentValue();
        if (this.argumentType === ArgumentConstants.FREE_ARGUMENT)return this.argumentValue; else return this.argumentExpression.calculate();
    }

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions)
     * to the argument expressions.
     * 
     * @param {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
     * 
     * @see PrimitiveElement
     */
    public addDefinitions(...elements: PrimitiveElement[]) {
        (o => o.addDefinitions.apply(o, elements))(this.argumentExpression);
    }

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions)
     * from the argument expressions.
     * 
     * @param {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements Elements list (variadic - comma separated) of types: Argument, Constant, Function
     * 
     * @see PrimitiveElement
     */
    public removeDefinitions(...elements: PrimitiveElement[]) {
        (o => o.removeDefinitions.apply(o, elements))(this.argumentExpression);
    }

    /**
     * Adds arguments (variadic) to the argument expression definition.
     * 
     * @param      {org.mariuszgromada.math.mxparser.Argument[]} arguments           the arguments list
     * (comma separated list)
     * @see        Argument
     * @see        RecursiveArgument
     */
    public addArguments(...__arguments: Argument[]) {
        (o => o.addArguments.apply(o, __arguments))(this.argumentExpression);
    }

    /**
     * Enables to define the arguments (associated with
     * the argument expression) based on the given arguments names.
     * 
     * @param      {java.lang.String[]} argumentsNames      the arguments names (variadic)
     * comma separated list
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public defineArguments(...argumentsNames: string[]) {
        (o => o.defineArguments.apply(o, argumentsNames))(this.argumentExpression);
    }

    /**
     * Enables to define the argument (associated with the argument expression)
     * based on the argument name and the argument value.
     * 
     * @param      {string} argumentName        the argument name
     * @param      {number} argumentValue       the the argument value
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public defineArgument(argumentName: string, argumentValue: number) {
        this.argumentExpression.defineArgument(argumentName, argumentValue);
    }

    /**
     * Gets argument index from the argument expression.
     * 
     * @param      {string} argumentName        the argument name
     * 
     * @return     {number} The argument index if the argument name was found,
     * otherwise returns ArgumentConstants.NOT_FOUND
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public getArgumentIndex(argumentName: string): number {
        return this.argumentExpression.getArgumentIndex(argumentName);
    }

    public getArgument$java_lang_String(argumentName: string): Argument {
        return this.argumentExpression.getArgument$java_lang_String(argumentName);
    }

    /**
     * Gets argument from the argument expression.
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
        return this.argumentExpression.getArgument$int(argumentIndex);
    }

    /**
     * Gets number of arguments associated with the argument expression.
     * 
     * @return     {number} The number of arguments (int &gt;= 0)
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public getArgumentsNumber(): number {
        return this.argumentExpression.getArgumentsNumber();
    }

    public removeArguments$java_lang_String_A(...argumentsNames: string[]) {
        (o => o.removeArguments.apply(o, argumentsNames))(this.argumentExpression);
    }

    /**
     * Removes first occurrences of the arguments
     * associated with the argument expression.
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
        (o => o.removeArguments.apply(o, __arguments))(this.argumentExpression);
    }

    /**
     * Removes all arguments associated with the argument expression.
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public removeAllArguments() {
        this.argumentExpression.removeAllArguments();
    }

    public addConstants$org_mariuszgromada_math_mxparser_Constant_A(...constants: Constant[]) {
        (o => o.addConstants.apply(o, constants))(this.argumentExpression);
    }

    /**
     * Adds constants (variadic parameters) to the argument expression definition.
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
        this.argumentExpression.addConstants$java_util_List(constantsList);
    }

    /**
     * Enables to define the constant (associated with
     * the argument expression) based on the constant name and
     * constant value.
     * 
     * @param      {string} constantName        the constant name
     * @param      {number} constantValue       the constant value
     * 
     * @see        Constant
     */
    public defineConstant(constantName: string, constantValue: number) {
        this.argumentExpression.defineConstant(constantName, constantValue);
    }

    /**
     * Gets constant index associated with the argument expression.
     * 
     * @param      {string} constantName        the constant name
     * 
     * @return     {number} Constant index if constant name was found,
     * otherwise return Constant.NOT_FOUND.
     * 
     * @see        Constant
     */
    public getConstantIndex(constantName: string): number {
        return this.argumentExpression.getConstantIndex(constantName);
    }

    public getConstant$java_lang_String(constantName: string): Constant {
        return this.argumentExpression.getConstant$java_lang_String(constantName);
    }

    /**
     * Gets constant associated with the argument expression.
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
        return this.argumentExpression.getConstant$int(constantIndex);
    }

    /**
     * Gets number of constants associated with the argument expression.
     * 
     * @return     {number} number of constants (int &gt;= 0)
     * 
     * @see        Constant
     */
    public getConstantsNumber(): number {
        return this.argumentExpression.getConstantsNumber();
    }

    public removeConstants$java_lang_String_A(...constantsNames: string[]) {
        (o => o.removeConstants.apply(o, constantsNames))(this.argumentExpression);
    }

    /**
     * Removes first occurrences of the constants
     * associated with the argument expression.
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
        (o => o.removeConstants.apply(o, constants))(this.argumentExpression);
    }

    /**
     * Removes all constants
     * associated with the argument expression
     * 
     * @see        Constant
     */
    public removeAllConstants() {
        this.argumentExpression.removeAllConstants();
    }

    /**
     * Adds functions (variadic parameters) to the argument expression definition.
     * 
     * @param      {org.mariuszgromada.math.mxparser.Function[]} functions           the functions
     * (variadic parameters) comma separated list
     * 
     * @see        Function
     */
    public addFunctions(...functions: Function[]) {
        (o => o.addFunctions.apply(o, functions))(this.argumentExpression);
    }

    /**
     * Enables to define the function (associated with
     * the argument expression) based on the function name,
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
        (o => o.defineFunction.apply(o, [functionName, functionExpressionString].concat(<any[]>argumentsNames)))(this.argumentExpression);
    }

    /**
     * Gets index of function associated with the argument expression.
     * 
     * @param      {string} functionName        the function name
     * 
     * @return     {number} Function index if function name was found,
     * otherwise returns Function.NOT_FOUND
     * 
     * @see        Function
     */
    public getFunctionIndex(functionName: string): number {
        return this.argumentExpression.getFunctionIndex(functionName);
    }

    public getFunction$java_lang_String(functionName: string): Function {
        return this.argumentExpression.getFunction$java_lang_String(functionName);
    }

    /**
     * Gets function associated with the argument expression.
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
        return this.argumentExpression.getFunction$int(functionIndex);
    }

    /**
     * Gets number of functions associated with the argument expression.
     * 
     * @return     {number} number of functions (int &gt;= 0)
     * 
     * @see        Function
     */
    public getFunctionsNumber(): number {
        return this.argumentExpression.getFunctionsNumber();
    }

    public removeFunctions$java_lang_String_A(...functionsNames: string[]) {
        (o => o.removeFunctions.apply(o, functionsNames))(this.argumentExpression);
    }

    /**
     * Removes first occurrences of the functions
     * associated with the argument expression.
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
        (o => o.removeFunctions.apply(o, functions))(this.argumentExpression);
    }

    /**
     * Removes all functions
     * associated with the argument expression.
     * 
     * @see        Function
     */
    public removeAllFunctions() {
        this.argumentExpression.removeAllFunctions();
    }

    /**
     * Adds related expression to the argumentExpression
     * 
     * @param      {Expression} expression          the related expression
     * @see        Expression
     */
    addRelatedExpression(expression: Expression) {
        this.argumentExpression.addRelatedExpression(expression);
    }

    /**
     * Adds related expression form the argumentExpression
     * 
     * @param      {Expression} expression          related expression
     * 
     * @see        Expression
     */
    removeRelatedExpression(expression: Expression) {
        this.argumentExpression.removeRelatedExpression(expression);
    }

    /**
     * Sets expression was modified flag to all related expressions
     * to the argumentExpression.
     * 
     * @see        Expression
     */
    setExpressionModifiedFlags() {
        this.argumentExpression.setExpressionModifiedFlag();
    }

    /**
     * Creates cloned object of the this argument.''
     * 
     * @return     {Argument} clone of the argument.
     */
    public clone(): Argument {
        const newArg: Argument = new Argument(this.argumentName);
        newArg.argumentExpression = this.argumentExpression;
        newArg.argumentType = this.argumentType;
        newArg.argumentBodyType = this.argumentBodyType;
        newArg.argumentValue = this.argumentValue;
        newArg.description = this.description;
        newArg.n = this.n;
        if (this.argumentExtension != null)newArg.argumentExtension = /* clone */((o: any) => { if (o.clone != undefined) { return (<any>o).clone(); } else { let clone = Object.create(o); for(let p in o) { if (o.hasOwnProperty(p)) clone[p] = o[p]; } return clone; } })(this.argumentExtension); else newArg.argumentExtension = null;
        return newArg;
    }
}
Argument["__class"] = "org.mariuszgromada.math.mxparser.Argument";
var __Function = Function;