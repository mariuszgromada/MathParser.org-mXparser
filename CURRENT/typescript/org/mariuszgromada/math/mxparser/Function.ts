import { ParserSymbol } from './parsertokens/ParserSymbol';
import { Token } from './parsertokens/Token';
import { PrimitiveElement } from './PrimitiveElement';
import { Expression } from './Expression';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';
import { FunctionConstants } from './FunctionConstants';
import { ArgumentConstants } from './ArgumentConstants';
import { ExpressionConstants } from './ExpressionConstants';
import { Constant } from './Constant';
import { HeadEqBody } from './Miscellaneous';
import { Argument } from './Argument';
import { mXparserConstants } from './mXparserConstants';
import { FunctionExtensionVariadic } from './FunctionExtensionVariadic';
import { FunctionExtension } from './FunctionExtension';

/**
 * Constructor - creates function from function name
 * and function expression string.
 * 
 * @param      {string} functionName              the function name
 * @param      {string} functionExpressionString  the function expression string
 * @param      {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements                  Optional elements list (variadic - comma separated) of types: Argument, Constant, Function
 * 
 * @see        PrimitiveElement
 * @see        Expression
 * @class
 * @extends PrimitiveElement
 */
export class Function extends PrimitiveElement {

    public static createWithFunctionDefinition(functionDefinition : string) : Function {
        const newFunction : Function = new Function(null, null, null);
        if (mXparserConstants.regexMatch(functionDefinition, ParserSymbol.functionDefStrRegExp_$LI$())) {
            const headEqBody = new HeadEqBody(functionDefinition);
            newFunction.functionName = headEqBody.headTokens.get(0).tokenStr;
            newFunction.functionExpression = <any>new Expression(headEqBody.bodyStr, null);
            newFunction.functionExpression.setDescription(headEqBody.headStr);
            newFunction.functionExpression.UDFExpression = true;
            newFunction.isVariadic = false;
            if(headEqBody.headTokens.size() > 1) {
                for(let i : number = 1; i < headEqBody.headTokens.size(); i++) {
                    const token = headEqBody.headTokens.get(i);
                    if(token.tokenTypeId !== ParserSymbol.TYPE_ID) {
                        newFunction.functionExpression.addArguments(Argument.createArgumentWithName(token.tokenStr));
                    }
                }
            }
            newFunction.parametersNumber = newFunction.functionExpression.getArgumentsNumber()
                - newFunction.countRecursiveArguments();
            newFunction.setDescription("");
            newFunction.functionBodyType = FunctionConstants.BODY_RUNTIME;
            newFunction.addFunctions(newFunction);
        }
        else if (mXparserConstants.regexMatch(functionDefinition, ParserSymbol.functionVariadicDefStrRegExp_$LI$())) {
            const headEqBody = new HeadEqBody(functionDefinition);
            newFunction.functionName = headEqBody.headTokens.get(0).tokenStr;
            newFunction.functionExpression = <any>new Expression(headEqBody.bodyStr, null);
            newFunction.functionExpression.setDescription(headEqBody.headStr);
            newFunction.functionExpression.UDFExpression = true;
            newFunction.isVariadic = true;
            newFunction.parametersNumber = -1;
            newFunction.setDescription("");
            newFunction.functionBodyType = FunctionConstants.BODY_RUNTIME;
            newFunction.addFunctions(newFunction);
        } 
        else {
            newFunction.functionExpression.setDescription(functionDefinition);
			let errorMessage :string = ""; 
            errorMessage = errorMessage + "\n [" + functionDefinition + "] " +
                "--> pattern not mathes: f(x1,...,xn) = ... reg exp: " +
                ParserSymbol.functionDefStrRegExp;
			newFunction.functionExpression.setSyntaxStatus(ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN, errorMessage);
        }
        return newFunction;
    }
    /**
     * Function body type.
     * 
     * @see Function#BODY_RUNTIME
     * @see Function#BODY_EXTENDED
     * @see Function#getFunctionBodyType()
     */
    /*private*/ functionBodyType: number;

    /**
     * function expression
     */
    functionExpression: Expression;

    /**
     * function name
     */
    /*private*/ functionName: string;

    /**
     * function description
     */
    /*private*/ description: string;

    /**
     * Indicates whether UDF is variadic
     */
    isVariadic: boolean;

    /**
     * The number of function parameters
     */
    /*private*/ parametersNumber: number;

    /**
     * Function extension (body based in code)
     * 
     * @see FunctionExtension
     * @see FunctionExtensionVariadic
     * @see Function#Function(String, FunctionExtension)
     */
    /*private*/ functionExtension: FunctionExtension;

    /**
     * Function extension variadic (body based in code)
     * 
     * @see FunctionExtension
     * @see FunctionExtensionVariadic
     * @see Function#Function(String, FunctionExtension)
     */
    /*private*/ functionExtensionVariadic: FunctionExtensionVariadic;

    public constructor(functionName?: any, functionExpressionString?: any, ...elements: any[]) {
        if(functionExpressionString !== null && functionExpressionString !== undefined && 
            ((typeof functionExpressionString === 'string') || functionExpressionString.constructor.name === 'String')) {
            functionExpressionString = <string>functionExpressionString.split(' ').join('');
        }
        if (((typeof functionName === 'string') || functionName === null) && ((typeof functionExpressionString === 'string') || functionExpressionString === null) && ((elements != null && elements instanceof <any>Array && (elements.length == 0 || elements[0] == null || (elements[0] != null && elements[0] instanceof <any>PrimitiveElement))) || elements === null)) {
            let __args = arguments;
            super(FunctionConstants.TYPE_ID);
            if (this.functionBodyType === undefined) { this.functionBodyType = 0; }
            if (this.functionExpression === undefined) { this.functionExpression = null; }
            if (this.functionName === undefined) { this.functionName = null; }
            if (this.description === undefined) { this.description = null; }
            if (this.isVariadic === undefined) { this.isVariadic = false; }
            if (this.parametersNumber === undefined) { this.parametersNumber = 0; }
            if (this.functionExtension === undefined) { this.functionExtension = null; }
            if (this.functionExtensionVariadic === undefined) { this.functionExtensionVariadic = null; }
            if (functionName !== null && mXparserConstants.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
                this.functionName = functionName;
                this.functionExpression = <any>new Expression(functionExpressionString, elements);
                this.functionExpression.setDescription(functionName);
                this.functionExpression.UDFExpression = true;
                this.isVariadic = false;
                this.parametersNumber = 0;
                this.description = "";
                this.functionBodyType = FunctionConstants.BODY_RUNTIME;
                this.addFunctions(this);
            } else {
                this.parametersNumber = 0;
                this.description = "";
                this.functionExpression = Expression.create();
                this.functionExpression.setSyntaxStatus(FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + functionName + "]Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp_$LI$());
            }
        } else if (((typeof functionName === 'string') || functionName === null) && ((typeof functionExpressionString === 'string') || functionExpressionString === null) && ((elements != null && elements instanceof <any>Array && (elements.length == 0 || elements[0] == null || (typeof elements[0] === 'string'))) || elements === null)) {
            let __args = elements;
            let argumentsNames: any[] = __args;
            super(FunctionConstants.TYPE_ID);
            if (this.functionBodyType === undefined) { this.functionBodyType = 0; }
            if (this.functionExpression === undefined) { this.functionExpression = null; }
            if (this.functionName === undefined) { this.functionName = null; }
            if (this.description === undefined) { this.description = null; }
            if (this.isVariadic === undefined) { this.isVariadic = false; }
            if (this.parametersNumber === undefined) { this.parametersNumber = 0; }
            if (this.functionExtension === undefined) { this.functionExtension = null; }
            if (this.functionExtensionVariadic === undefined) { this.functionExtensionVariadic = null; }
            if (functionName !== null && mXparserConstants.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
                this.functionName = functionName;
                this.functionExpression = Expression.createWithExpression(functionExpressionString);
                this.functionExpression.setDescription(functionName);
                this.functionExpression.UDFExpression = true;
                this.isVariadic = false;
                for (let index197 = 0; index197 < argumentsNames.length; index197++) {
                    let argName = argumentsNames[index197];
                    this.functionExpression.addArguments(new Argument(argName))
                }
                this.parametersNumber = this.functionExpression.getArgumentsNumber() - this.countRecursiveArguments();
                this.description = "";
                this.functionBodyType = FunctionConstants.BODY_RUNTIME;
                this.addFunctions(this);
            } else {
                this.parametersNumber = 0;
                this.description = "";
                this.functionExpression = Expression.create();
                this.functionExpression.setSyntaxStatus(FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + functionName + "]Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp_$LI$());
            }
        } else if (((typeof functionName === 'string') || functionName === null) && ((functionExpressionString != null && functionExpressionString instanceof <any>Array && (functionExpressionString.length == 0 || functionExpressionString[0] == null || (functionExpressionString[0] != null && functionExpressionString[0] instanceof <any>PrimitiveElement))) || functionExpressionString === null) && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let functionDefinitionString: any = __args[0];
            let elements: any[] = __args[1];
            super(FunctionConstants.TYPE_ID);
            if (this.functionBodyType === undefined) { this.functionBodyType = 0; }
            if (this.functionExpression === undefined) { this.functionExpression = null; }
            if (this.functionName === undefined) { this.functionName = null; }
            if (this.description === undefined) { this.description = null; }
            if (this.isVariadic === undefined) { this.isVariadic = false; }
            if (this.parametersNumber === undefined) { this.parametersNumber = 0; }
            if (this.functionExtension === undefined) { this.functionExtension = null; }
            if (this.functionExtensionVariadic === undefined) { this.functionExtensionVariadic = null; }
            this.parametersNumber = 0;
            if (functionDefinitionString !== null &&  mXparserConstants.regexMatch(functionDefinitionString, ParserSymbol.functionDefStrRegExp_$LI$())) {
                const headEqBody: HeadEqBody = new HeadEqBody(functionDefinitionString);
                this.functionName = headEqBody.headTokens.get(0).tokenStr;
                this.functionExpression = Expression.createWithExpression(headEqBody.bodyStr);
                this.functionExpression.setDescription(headEqBody.headStr);
                this.functionExpression.UDFExpression = true;
                this.isVariadic = false;
                if (headEqBody.headTokens.size() > 1) {
                    let t: Token;
                    for (let i: number = 1; i < headEqBody.headTokens.size(); i++) {
                        {
                            t = headEqBody.headTokens.get(i);
                            if (t.tokenTypeId !== ParserSymbol.TYPE_ID) this.functionExpression.addArguments(new Argument(t.tokenStr));
                        };
                    }
                }
                this.parametersNumber = this.functionExpression.getArgumentsNumber() - this.countRecursiveArguments();
                this.description = "";
                this.functionBodyType = FunctionConstants.BODY_RUNTIME;
                this.addFunctions(this);
            } else if (functionDefinitionString !== null &&  mXparserConstants.regexMatch(functionDefinitionString, ParserSymbol.functionVariadicDefStrRegExp_$LI$())) {
                const headEqBody: HeadEqBody = new HeadEqBody(functionDefinitionString);
                this.functionName = headEqBody.headTokens.get(0).tokenStr;
                this.functionExpression = <any>new Expression(headEqBody.bodyStr, elements);
                this.functionExpression.setDescription(headEqBody.headStr);
                this.functionExpression.UDFExpression = true;
                this.isVariadic = true;
                this.parametersNumber = -1;
                this.description = "";
                this.functionBodyType = FunctionConstants.BODY_RUNTIME;
                this.addFunctions(this);
            } else {
                this.functionExpression = new Expression();
                this.functionExpression.setDescription(functionDefinitionString);
                let errorMessage: string = "";
                errorMessage = errorMessage + "\n [" + functionDefinitionString + "] --> pattern not mathes: f(x1,...,xn) = ... reg exp: " + ParserSymbol.functionDefStrRegExp_$LI$();
                this.functionExpression.setSyntaxStatus(ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN, errorMessage);
            }
        } else if (((typeof functionName === 'string') || functionName === null) && ((functionExpressionString != null && (functionExpressionString.constructor != null && functionExpressionString.constructor["__interfaces"] != null && functionExpressionString.constructor["__interfaces"].indexOf("org.mariuszgromada.math.mxparser.FunctionExtension") >= 0)) || functionExpressionString === null) && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let functionExtension: any = __args[1];
            super(FunctionConstants.TYPE_ID);
            if (this.functionBodyType === undefined) { this.functionBodyType = 0; }
            if (this.functionExpression === undefined) { this.functionExpression = null; }
            if (this.functionName === undefined) { this.functionName = null; }
            if (this.description === undefined) { this.description = null; }
            if (this.isVariadic === undefined) { this.isVariadic = false; }
            if (this.parametersNumber === undefined) { this.parametersNumber = 0; }
            if (this.functionExtension === undefined) { this.functionExtension = null; }
            if (this.functionExtensionVariadic === undefined) { this.functionExtensionVariadic = null; }
            if (functionName !== null && mXparserConstants.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
                this.functionName = functionName;
                this.functionExpression = new Expression("{body-ext}");
                this.isVariadic = false;
                this.parametersNumber = functionExtension.getParametersNumber();
                this.description = "";
                this.functionExtension = functionExtension;
                this.functionBodyType = FunctionConstants.BODY_EXTENDED;
            } else {
                this.parametersNumber = 0;
                this.description = "";
                this.functionExpression = new Expression("");
                this.functionExpression.setSyntaxStatus(FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + functionName + "]Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp_$LI$());
            }
        } else if (((typeof functionName === 'string') || functionName === null) && ((functionExpressionString != null && (functionExpressionString.constructor != null && functionExpressionString.constructor["__interfaces"] != null && functionExpressionString.constructor["__interfaces"].indexOf("org.mariuszgromada.math.mxparser.FunctionExtensionVariadic") >= 0)) || functionExpressionString === null) && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let functionExtensionVariadic: any = __args[1];
            super(FunctionConstants.TYPE_ID);
            if (this.functionBodyType === undefined) { this.functionBodyType = 0; }
            if (this.functionExpression === undefined) { this.functionExpression = null; }
            if (this.functionName === undefined) { this.functionName = null; }
            if (this.description === undefined) { this.description = null; }
            if (this.isVariadic === undefined) { this.isVariadic = false; }
            if (this.parametersNumber === undefined) { this.parametersNumber = 0; }
            if (this.functionExtension === undefined) { this.functionExtension = null; }
            if (this.functionExtensionVariadic === undefined) { this.functionExtensionVariadic = null; }
            if (functionName !== null && mXparserConstants.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
                this.functionName = functionName;
                this.functionExpression = new Expression("{body-ext-var}");
                this.isVariadic = true;
                this.parametersNumber = -1;
                this.description = "";
                this.functionExtensionVariadic = functionExtensionVariadic;
                this.functionBodyType = FunctionConstants.BODY_EXTENDED;
            } else {
                this.parametersNumber = 0;
                this.description = "";
                this.functionExpression = new Expression("");
                this.functionExpression.setSyntaxStatus(FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + functionName + "]Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp_$LI$());
            }
        } else if (((functionName != null && functionName instanceof <any>Function) || functionName === null) && functionExpressionString === undefined && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let __function: any = __args[0];
            super(FunctionConstants.TYPE_ID);
            if (this.functionBodyType === undefined) { this.functionBodyType = 0; }
            if (this.functionExpression === undefined) { this.functionExpression = null; }
            if (this.functionName === undefined) { this.functionName = null; }
            if (this.description === undefined) { this.description = null; }
            if (this.isVariadic === undefined) { this.isVariadic = false; }
            if (this.parametersNumber === undefined) { this.parametersNumber = 0; }
            if (this.functionExtension === undefined) { this.functionExtension = null; }
            if (this.functionExtensionVariadic === undefined) { this.functionExtensionVariadic = null; }
            this.functionName = __function.functionName;
            this.description = __function.description;
            this.parametersNumber = __function.parametersNumber;
            this.functionExpression = /* clone */((o: any) => { if (o.clone != undefined) { return (<any>o).clone(); } else { let clone = Object.create(o); for (let p in o) { if (o.hasOwnProperty(p)) clone[p] = o[p]; } return clone; } })(__function.functionExpression);
            this.functionBodyType = __function.functionBodyType;
            this.isVariadic = __function.isVariadic;
            if (this.functionBodyType === FunctionConstants.BODY_EXTENDED) {
                if (__function.functionExtension != null) this.functionExtension = /* clone */((o: any) => { if (o.clone != undefined) { return (<any>o).clone(); } else { let clone = Object.create(o); for (let p in o) { if (o.hasOwnProperty(p)) clone[p] = o[p]; } return clone; } })(__function.functionExtension);
                if (__function.functionExtensionVariadic != null) this.functionExtensionVariadic = /* clone */((o: any) => { if (o.clone != undefined) { return (<any>o).clone(); } else { let clone = Object.create(o); for (let p in o) { if (o.hasOwnProperty(p)) clone[p] = o[p]; } return clone; } })(__function.functionExtensionVariadic);
            }
        } else throw new Error('invalid overload');
    }

    /**
     * Constructor for function definition in natural math language,
     * for instance providing on string "f(x,y) = sin(x) + cos(x)"
     * is enough to define function "f" with parameters "x and y"
     * and function body "sin(x) + cos(x)".
     * 
     * @param {string} functionDefinitionString      Function definition in the form
     * of one String, ie "f(x,y) = sin(x) + cos(x)"
     * @param {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements                      Optional elements list (variadic - comma separated)
     * of types: Argument, Constant, Function
     * 
     * @see    PrimitiveElement
     */
    public setFunction(functionDefinitionString: string, ...elements: PrimitiveElement[]) {
        this.parametersNumber = 0;
        if (mXparserConstants.regexMatch(functionDefinitionString, ParserSymbol.functionDefStrRegExp_$LI$())) {
            const headEqBody: HeadEqBody = new HeadEqBody(functionDefinitionString);
            this.functionName = headEqBody.headTokens.get(0).tokenStr;
            this.functionExpression = <any>new Expression(headEqBody.bodyStr, elements);
            this.functionExpression.setDescription(headEqBody.headStr);
            this.functionExpression.UDFExpression = true;
            this.isVariadic = false;
            if (headEqBody.headTokens.size() > 1) {
                let t: Token;
                for (let i: number = 1; i < headEqBody.headTokens.size(); i++) {
                    {
                        t = headEqBody.headTokens.get(i);
                        if (t.tokenTypeId !== ParserSymbol.TYPE_ID) this.functionExpression.addArguments(new Argument(t.tokenStr));
                    };
                }
            }
            this.parametersNumber = this.functionExpression.getArgumentsNumber() - this.countRecursiveArguments();
            this.description = "";
            this.functionBodyType = FunctionConstants.BODY_RUNTIME;
            this.addFunctions(this);
        } else if (mXparserConstants.regexMatch(functionDefinitionString, ParserSymbol.functionVariadicDefStrRegExp_$LI$())) {
            const headEqBody: HeadEqBody = new HeadEqBody(functionDefinitionString);
            this.functionName = headEqBody.headTokens.get(0).tokenStr;
            this.functionExpression = <any>new Expression(headEqBody.bodyStr, elements);
            this.functionExpression.setDescription(headEqBody.headStr);
            this.functionExpression.UDFExpression = true;
            this.isVariadic = true;
            this.parametersNumber = -1;
            this.description = "";
            this.functionBodyType = FunctionConstants.BODY_RUNTIME;
            this.addFunctions(this);
        } else {
            this.functionExpression = new Expression();
            this.functionExpression.setDescription(functionDefinitionString);
            let errorMessage: string = "";
            errorMessage = errorMessage + "\n [" + functionDefinitionString + "] --> pattern not mathes: f(x1,...,xn) = ... reg exp: " + ParserSymbol.functionDefStrRegExp_$LI$();
            this.functionExpression.setSyntaxStatus(ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN, errorMessage);
        }
    }

    /**
     * Sets function description.
     * 
     * @param      {string} description         the function description
     */
    public setDescription(description: string) {
        this.description = description;
    }

    /**
     * Gets function description
     * 
     * @return     {string} Function description as string
     */
    public getDescription(): string {
        return this.description;
    }

    /**
     * Gets function name.
     * 
     * @return     {string} Function name as string.
     */
    public getFunctionName(): string {
        return this.functionName;
    }

    /**
     * Gets function expression string
     * 
     * @return     {string} Function expression as string.
     */
    public getFunctionExpressionString(): string {
        return this.functionExpression.getExpressionString();
    }

    /**
     * Sets function name.
     * 
     * @param      {string} functionName        the function name
     */
    public setFunctionName(functionName: string) {
        if (mXparserConstants.regexMatch(functionName, ParserSymbol.nameOnlyTokenRegExp)) {
            this.functionName = functionName;
            this.setExpressionModifiedFlags();
        } else this.functionExpression.setSyntaxStatus(FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + functionName + "]Invalid function name, pattern not matches: " + ParserSymbol.nameTokenRegExp_$LI$());
    }

    /**
     * Sets value of function argument (function parameter).
     * 
     * @param      {number} argumentIndex   the argument index (in accordance to
     * arguments declaration sequence)
     * @param      {number} argumentValue   the argument value
     */
    public setArgumentValue(argumentIndex: number, argumentValue: number) {
        if (this.isVariadic === false) if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) this.functionExpression.argumentsList.get(argumentIndex).argumentValue = argumentValue; else if (this.isVariadic === false) this.functionExtension.setParameterValue(argumentIndex, argumentValue);
    }

    /**
     * Returns function body type: {@link Function#BODY_RUNTIME} {@link Function#BODY_EXTENDED}
     * @return {number} Returns function body type: {@link Function#BODY_RUNTIME} {@link Function#BODY_EXTENDED}
     */
    public getFunctionBodyType(): number {
        return this.functionBodyType;
    }

    /**
     * Checks function syntax
     * 
     * @return     {boolean} syntax status: FunctionConstants.NO_SYNTAX_ERRORS,
     * FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN
     */
    public checkSyntax(): boolean {
        let syntaxStatus: boolean = FunctionConstants.NO_SYNTAX_ERRORS_$LI$();
        if (this.functionBodyType !== FunctionConstants.BODY_EXTENDED) syntaxStatus = this.functionExpression.checkSyntax$();
        this.checkRecursiveMode();
        return syntaxStatus;
    }

    /**
     * Returns error message after checking the syntax.
     * 
     * @return     {string} Error message as string.
     */
    public getErrorMessage(): string {
        return this.functionExpression.getErrorMessage();
    }

    /**
     * clone method
     * @return {Function}
     */
    clone(): Function {
        const newFunction: Function = new Function(null,null, null);
        newFunction.functionName = this.functionName;
        newFunction.description = this.description;
        newFunction.parametersNumber = this.parametersNumber;
        newFunction.functionExpression = this.functionExpression.clone();
        newFunction.functionBodyType = this.functionBodyType;
        newFunction.isVariadic = this.isVariadic;
        if(this.functionBodyType === FunctionConstants.BODY_EXTENDED) {
            if(this.functionExtension !== null) newFunction.functionExtension = this.functionExtension.clone();
            if(this.functionExtensionVariadic !== null) newFunction.functionExtensionVariadic = this.functionExtensionVariadic.clone();
        }
        return newFunction;
    }

    public calculate$(): number {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.calculate(); else if (this.isVariadic === false) return this.functionExtension.calculate(); else {
            const paramsList: java.util.List<number> = this.functionExpression.UDFVariadicParamsAtRunTime;
            if (paramsList != null) {
                const n: number = paramsList.size();
                const parameters: number[] = (s => { let a = []; while (s-- > 0) a.push(0); return a; })(n);
                for (let i: number = 0; i < n; i++) { parameters[i] = paramsList.get(i); }
                return (o => o.calculate.apply(o, parameters))(this.functionExtensionVariadic);
            } else return javaemul.internal.DoubleHelper.NaN;
        }
    }

    public calculate$double_A(...parameters: number[]): number {
        if (parameters.length > 0) {
            this.functionExpression.UDFVariadicParamsAtRunTime = <any>(new java.util.ArrayList<number>());
            for (let index198 = 0; index198 < parameters.length; index198++) {
                let x = parameters[index198];
                this.functionExpression.UDFVariadicParamsAtRunTime.add(x)
            }
        } else return javaemul.internal.DoubleHelper.NaN;
        if (this.isVariadic) {
            if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.calculate(); else return (o => o.calculate.apply(o, parameters))(this.functionExtensionVariadic);
        } else if (parameters.length === this.getParametersNumber()) {
            if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
                for (let p: number = 0; p < parameters.length; p++) { this.setArgumentValue(p, parameters[p]); }
                return this.functionExpression.calculate();
            } else {
                for (let p: number = 0; p < parameters.length; p++) { this.functionExtension.setParameterValue(p, parameters[p]); }
                return this.functionExtension.calculate();
            }
        } else {
            this.functionExpression.setSyntaxStatus(FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + this.functionName + "] incorrect number of function parameters (expecting " + this.getParametersNumber() + ", provided " + parameters.length + ")!");
            return javaemul.internal.DoubleHelper.NaN;
        }
    }

    /**
     * Calculates function value
     * 
     * @param      {double[]} parameters              the function parameters values (as doubles)
     * 
     * @return     {number} function value as double.
     */
    public calculate(...parameters: any[]): any {
        if (((parameters != null && parameters instanceof <any>Array && (parameters.length == 0 || parameters[0] == null || (typeof parameters[0] === 'number'))) || parameters === null)) {
            return <any>this.calculate$double_A(...parameters);
        } else if (((parameters != null && parameters instanceof <any>Array && (parameters.length == 0 || parameters[0] == null || (parameters[0] != null && parameters[0] instanceof <any>Argument))) || parameters === null)) {
            return <any>this.calculate$org_mariuszgromada_math_mxparser_Argument_A(...parameters);
        } else if (parameters === undefined || parameters.length === 0) {
            return <any>this.calculate$();
        } else throw new Error('invalid overload');
    }

    public calculate$org_mariuszgromada_math_mxparser_Argument_A(...__arguments: Argument[]): number {
        let parameters: number[];
        if (__arguments.length > 0) {
            this.functionExpression.UDFVariadicParamsAtRunTime = <any>(new java.util.ArrayList<number>());
            parameters = (s => { let a = []; while (s-- > 0) a.push(0); return a; })(__arguments.length);
            let x: number;
            for (let i: number = 0; i < __arguments.length; i++) {
                {
                    x = __arguments[i].getArgumentValue();
                    this.functionExpression.UDFVariadicParamsAtRunTime.add(x);
                    parameters[i] = x;
                };
            }
        } else return javaemul.internal.DoubleHelper.NaN;
        if (this.isVariadic) {
            if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.calculate(); else return (o => o.calculate.apply(o, parameters))(this.functionExtensionVariadic);
        } else if (__arguments.length === this.getParametersNumber()) {
            if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
                for (let p: number = 0; p < __arguments.length; p++) { this.setArgumentValue(p, __arguments[p].getArgumentValue()); }
                return this.functionExpression.calculate();
            } else {
                for (let p: number = 0; p < __arguments.length; p++) { this.functionExtension.setParameterValue(p, __arguments[p].getArgumentValue()); }
                return this.functionExtension.calculate();
            }
        } else {
            this.functionExpression.setSyntaxStatus(FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + this.functionName + "] incorrect number of function parameters (expecting " + this.getParametersNumber() + ", provided " + __arguments.length + ")!");
            return javaemul.internal.DoubleHelper.NaN;
        }
    }

    /**
     * Adds user defined elements (such as: Arguments, Constants, Functions)
     * to the function expressions.
     * 
     * @param {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements Elements list (variadic), where Argument, Constant, Function
     * extend the same class PrimitiveElement
     * 
     * @see PrimitiveElement
     */
    public addDefinitions(...elements: PrimitiveElement[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.addDefinitions.apply(o, elements))(this.functionExpression);
    }

    /**
     * Removes user defined elements (such as: Arguments, Constants, Functions)
     * from the function expressions.
     * 
     * @param {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements Elements list (variadic), where Argument, Constant, Function
     * extend the same class PrimitiveElement
     * 
     * @see PrimitiveElement
     */
    public removeDefinitions(...elements: PrimitiveElement[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.removeDefinitions.apply(o, elements))(this.functionExpression);
    }

    /*private*/ countRecursiveArguments(): number {
        let numOfRecursiveArguments: number = 0;
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) for (let index199 = this.functionExpression.argumentsList.iterator(); index199.hasNext();) {
            let argument = index199.next();
            if (argument.getArgumentType() === ArgumentConstants.RECURSIVE_ARGUMENT) numOfRecursiveArguments++;
        }
        return numOfRecursiveArguments;
    }

    /**
     * Adds arguments (variadic) to the function expression definition.
     * 
     * @param      {org.mariuszgromada.math.mxparser.Argument[]} arguments           the arguments list
     * (comma separated list)
     * @see        Argument
     * @see        RecursiveArgument
     */
    public addArguments(...__arguments: Argument[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
            (o => o.addArguments.apply(o, __arguments))(this.functionExpression);
            this.parametersNumber = this.functionExpression.getArgumentsNumber() - this.countRecursiveArguments();
        }
    }

    /**
     * Enables to define the arguments (associated with
     * the function expression) based on the given arguments names.
     * 
     * @param      {java.lang.String[]} argumentsNames      the arguments names (variadic)
     * comma separated list
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public defineArguments(...argumentsNames: string[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
            (o => o.defineArguments.apply(o, argumentsNames))(this.functionExpression);
            this.parametersNumber = this.functionExpression.getArgumentsNumber() - this.countRecursiveArguments();
        }
    }

    /**
     * Enables to define the argument (associated with the function expression)
     * based on the argument name and the argument value.
     * 
     * @param      {string} argumentName        the argument name
     * @param      {number} argumentValue       the the argument value
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public defineArgument(argumentName: string, argumentValue: number) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
            this.functionExpression.defineArgument(argumentName, argumentValue);
            this.parametersNumber = this.functionExpression.getArgumentsNumber() - this.countRecursiveArguments();
        }
    }

    /**
     * Gets argument index from the function expression.
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
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getArgumentIndex(argumentName); else return -1;
    }

    public getArgument$java_lang_String(argumentName: string): Argument {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getArgument$java_lang_String(argumentName); else return null;
    }

    /**
     * Gets argument from the function expression.
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
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getArgument$int(argumentIndex); else return null;
    }

    /**
     * Gets number of parameters associated with the function expression.
     * 
     * @return     {number} The number of function parameters (int &gt;= 0)
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public getParametersNumber(): number {
        if (this.isVariadic === false) return this.parametersNumber; else {
            if (this.functionExpression.UDFVariadicParamsAtRunTime != null) return this.functionExpression.UDFVariadicParamsAtRunTime.size(); else return -1;
        }
    }

    /**
     * Set parameters number.
     * 
     * @param      {number} parametersNumber    the number of function parameters (default = number of arguments
     * (less number might be specified).
     */
    public setParametersNumber(parametersNumber: number) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
            this.parametersNumber = parametersNumber;
            this.functionExpression.setExpressionModifiedFlag();
        }
    }

    /**
     * Gets user defined function parameter name
     * 
     * @param {number} parameterIndex  Parameter index between 0 and n-1
     * @return {string} If parameter exists returns parameters name, otherwise empty string is returned.
     */
    public getParameterName(parameterIndex: number): string {
        if (parameterIndex < 0) return "";
        if (parameterIndex >= this.parametersNumber) return "";
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.getArgument$int(parameterIndex).getArgumentName();
        if (this.functionBodyType === FunctionConstants.BODY_EXTENDED) return this.functionExtension.getParameterName(parameterIndex);
        return "";
    }

    /**
     * Gets number of arguments associated with the function expression.
     * 
     * @return     {number} The number of arguments (int &gt;= 0)
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public getArgumentsNumber(): number {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getArgumentsNumber(); else return 0;
    }

    public removeArguments$java_lang_String_A(...argumentsNames: string[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
            (o => o.removeArguments.apply(o, argumentsNames))(this.functionExpression);
            this.parametersNumber = this.functionExpression.getArgumentsNumber() - this.countRecursiveArguments();
        }
    }

    /**
     * Removes first occurrences of the arguments
     * associated with the function expression.
     * 
     * @param      {java.lang.String[]} argumentsNames      the arguments names
     * (variadic parameters) comma separated
     * list
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public removeArguments(...argumentsNames: any[]) {
        if (((argumentsNames != null && argumentsNames instanceof <any>Array && (argumentsNames.length == 0 || argumentsNames[0] == null || (typeof argumentsNames[0] === 'string'))) || argumentsNames === null)) {
            return <any>this.removeArguments$java_lang_String_A(...argumentsNames);
        } else if (((argumentsNames != null && argumentsNames instanceof <any>Array && (argumentsNames.length == 0 || argumentsNames[0] == null || (argumentsNames[0] != null && argumentsNames[0] instanceof <any>Argument))) || argumentsNames === null)) {
            return <any>this.removeArguments$org_mariuszgromada_math_mxparser_Argument_A(...argumentsNames);
        } else throw new Error('invalid overload');
    }

    public removeArguments$org_mariuszgromada_math_mxparser_Argument_A(...__arguments: Argument[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
            (o => o.removeArguments.apply(o, __arguments))(this.functionExpression);
            this.parametersNumber = this.functionExpression.getArgumentsNumber() - this.countRecursiveArguments();
        }
    }

    /**
     * Removes all arguments associated with the function expression.
     * 
     * @see        Argument
     * @see        RecursiveArgument
     */
    public removeAllArguments() {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
            this.functionExpression.removeAllArguments();
            this.parametersNumber = 0;
        }
    }

    public addConstants$org_mariuszgromada_math_mxparser_Constant_A(...constants: Constant[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.addConstants.apply(o, constants))(this.functionExpression);
    }

    /**
     * Adds constants (variadic parameters) to the function expression definition.
     * 
     * @param      {org.mariuszgromada.math.mxparser.Constant[]} constants           the constants
     * (comma separated list)
     * 
     * @see        Constant
     */
    public addConstants(...constants: any[]) {
        if (((constants != null && constants instanceof <any>Array && (constants.length == 0 || constants[0] == null || (constants[0] != null && constants[0] instanceof <any>Constant))) || constants === null)) {
            return <any>this.addConstants$org_mariuszgromada_math_mxparser_Constant_A(...constants);
        } else if (((constants != null && (constants.constructor != null && constants.constructor["__interfaces"] != null && constants.constructor["__interfaces"].indexOf("java.util.List") >= 0)) || constants === null)) {
            return <any>this.addConstants$java_util_List(<any>constants);
        } else throw new Error('invalid overload');
    }

    public addConstants$java_util_List(constantsList: java.util.List<Constant>) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) this.functionExpression.addConstants$java_util_List(constantsList);
    }

    /**
     * Enables to define the constant (associated with
     * the function expression) based on the constant name and
     * constant value.
     * 
     * @param      {string} constantName        the constant name
     * @param      {number} constantValue       the constant value
     * 
     * @see        Constant
     */
    public defineConstant(constantName: string, constantValue: number) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) this.functionExpression.defineConstant(constantName, constantValue);
    }

    /**
     * Gets constant index associated with the function expression.
     * 
     * @param      {string} constantName        the constant name
     * 
     * @return     {number} Constant index if constant name was found,
     * otherwise return Constant.NOT_FOUND.
     * 
     * @see        Constant
     */
    public getConstantIndex(constantName: string): number {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getConstantIndex(constantName); else return -1;
    }

    public getConstant$java_lang_String(constantName: string): Constant {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getConstant$java_lang_String(constantName); else return null;
    }

    /**
     * Gets constant associated with the function expression.
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
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getConstant$int(constantIndex); else return null;
    }

    /**
     * Gets number of constants associated with the function expression.
     * 
     * @return     {number} number of constants (int &gt;= 0)
     * 
     * @see        Constant
     */
    public getConstantsNumber(): number {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getConstantsNumber(); else return 0;
    }

    public removeConstants$java_lang_String_A(...constantsNames: string[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.removeConstants.apply(o, constantsNames))(this.functionExpression);
    }

    /**
     * Removes first occurrences of the constants
     * associated with the function expression.
     * 
     * @param      {java.lang.String[]} constantsNames      the constants names (variadic parameters)
     * comma separated list
     * 
     * @see        Constant
     */
    public removeConstants(...constantsNames: any[]) {
        if (((constantsNames != null && constantsNames instanceof <any>Array && (constantsNames.length == 0 || constantsNames[0] == null || (typeof constantsNames[0] === 'string'))) || constantsNames === null)) {
            return <any>this.removeConstants$java_lang_String_A(...constantsNames);
        } else if (((constantsNames != null && constantsNames instanceof <any>Array && (constantsNames.length == 0 || constantsNames[0] == null || (constantsNames[0] != null && constantsNames[0] instanceof <any>Constant))) || constantsNames === null)) {
            return <any>this.removeConstants$org_mariuszgromada_math_mxparser_Constant_A(...constantsNames);
        } else throw new Error('invalid overload');
    }

    public removeConstants$org_mariuszgromada_math_mxparser_Constant_A(...constants: Constant[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.removeConstants.apply(o, constants))(this.functionExpression);
    }

    /**
     * Removes all constants
     * associated with the function expression
     * 
     * @see        Constant
     */
    public removeAllConstants() {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) this.functionExpression.removeAllConstants();
    }

    /**
     * Adds functions (variadic parameters) to the function expression definition.
     * 
     * @param      {org.mariuszgromada.math.mxparser.Function[]} functions           the functions
     * (variadic parameters) comma separated list
     * 
     * @see        Function
     */
    public addFunctions(...functions: Function[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.addFunctions.apply(o, functions))(this.functionExpression);
    }

    /**
     * Enables to define the function (associated with
     * the function expression) based on the function name,
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
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.defineFunction.apply(o, [functionName, functionExpressionString].concat(<any[]>argumentsNames)))(this.functionExpression);
    }

    /**
     * Gets index of function associated with the function expression.
     * 
     * @param      {string} functionName        the function name
     * 
     * @return     {number} Function index if function name was found,
     * otherwise returns FunctionConstants.NOT_FOUND
     * 
     * @see        Function
     */
    public getFunctionIndex(functionName: string): number {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getFunctionIndex(functionName); else return -1;
    }

    public getFunction$java_lang_String(functionName: string): Function {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getFunction$java_lang_String(functionName); else return null;
    }

    /**
     * Gets function associated with the function expression.
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
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getFunction$int(functionIndex); else return null;
    }

    /**
     * Gets number of functions associated with the function expression.
     * 
     * @return     {number} number of functions (int &gt;= 0)
     * 
     * @see        Function
     */
    public getFunctionsNumber(): number {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) return this.functionExpression.getFunctionsNumber(); else return 0;
    }

    public removeFunctions$java_lang_String_A(...functionsNames: string[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.removeFunctions.apply(o, functionsNames))(this.functionExpression);
    }

    /**
     * Removes first occurrences of the functions
     * associated with the function expression.
     * 
     * @param      {java.lang.String[]} functionsNames      the functions names (variadic parameters)
     * comma separated list
     * 
     * @see        Function
     */
    public removeFunctions(...functionsNames: any[]) {
        if (((functionsNames != null && functionsNames instanceof <any>Array && (functionsNames.length == 0 || functionsNames[0] == null || (typeof functionsNames[0] === 'string'))) || functionsNames === null)) {
            return <any>this.removeFunctions$java_lang_String_A(...functionsNames);
        } else if (((functionsNames != null && functionsNames instanceof <any>Array && (functionsNames.length == 0 || functionsNames[0] == null || (functionsNames[0] != null && functionsNames[0] instanceof <any>Function))) || functionsNames === null)) {
            return <any>this.removeFunctions$org_mariuszgromada_math_mxparser_Function_A(...functionsNames);
        } else throw new Error('invalid overload');
    }

    public removeFunctions$org_mariuszgromada_math_mxparser_Function_A(...functions: Function[]) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) (o => o.removeFunctions.apply(o, functions))(this.functionExpression);
    }

    /**
     * Removes all functions
     * associated with the function expression.
     * 
     * @see        Function
     */
    public removeAllFunctions() {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) this.functionExpression.removeAllFunctions();
    }

    /**
     * Enables verbose function mode
     */
    public setVerboseMode() {
        this.functionExpression.setVerboseMode();
    }

    /**
     * Disables function verbose mode (sets default silent mode)
     */
    public setSilentMode() {
        this.functionExpression.setSilentMode();
    }

    /**
     * Returns verbose mode status
     * 
     * @return     {boolean} true if verbose mode is on,
     * otherwise returns false
     */
    public getVerboseMode(): boolean {
        return this.functionExpression.getVerboseMode();
    }

    /**
     * Checks whether function name appears in function body
     * if yes the recursive mode is being set
     */
    checkRecursiveMode() {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) {
            const functionExpressionTokens: java.util.List<Token> = this.functionExpression.getInitialTokens();
            this.functionExpression.disableRecursiveMode();
            if (functionExpressionTokens != null) for (let index200 = functionExpressionTokens.iterator(); index200.hasNext();) {
                let t = index200.next();
                if (t.tokenStr === this.functionName) {
                    this.functionExpression.setRecursiveMode();
                    break;
                }
            }
        }
    }

    /**
     * Gets recursive mode status
     * 
     * @return     {boolean} true if recursive mode is enabled,
     * otherwise returns false
     */
    public getRecursiveMode(): boolean {
        return this.functionExpression.getRecursiveMode();
    }

    /**
     * Gets computing time
     * 
     * @return     {number} computing time in seconds.
     */
    public getComputingTime(): number {
        return this.functionExpression.getComputingTime();
    }

    /**
     * Adds related expression.
     * 
     * @param      {Expression} expression          the related expression
     */
    addRelatedExpression(expression: Expression) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) this.functionExpression.addRelatedExpression(expression);
    }

    /**
     * Removes related expression.
     * 
     * @param      {Expression} expression          the related expression
     */
    removeRelatedExpression(expression: Expression) {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) this.functionExpression.removeRelatedExpression(expression);
    }

    /**
     * Set expression modified flags in the related expressions.
     */
    setExpressionModifiedFlags() {
        if (this.functionBodyType === FunctionConstants.BODY_RUNTIME) this.functionExpression.setExpressionModifiedFlag();
    }
}
Function["__class"] = "org.mariuszgromada.math.mxparser.Function";
var __Function = Function;