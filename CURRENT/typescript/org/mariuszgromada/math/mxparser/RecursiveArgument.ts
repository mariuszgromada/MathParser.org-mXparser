import { ParserSymbol } from './parsertokens/ParserSymbol';
import { Argument } from './Argument';
import { java } from 'j4ts/j4ts';
import { javaemul } from 'j4ts/j4ts';
import { Expression } from './Expression';
import { PrimitiveElement } from './PrimitiveElement';
import { ArgumentConstants } from './ArgumentConstants';
import { ExpressionConstants } from './ExpressionConstants';

/**
 * Constructor - creates recursive argument.
 * 
 * @param      {string} argumentName                  the argument name
 * @param      {string} recursiveExpressionString     the recursive expression string
 * @param      {Argument} n                             the index argument
 * @param      {org.mariuszgromada.math.mxparser.PrimitiveElement[]} elements                      Optional elements list (variadic - comma
 * separated) of types: Argument, Constant, Function
 * 
 * @see        PrimitiveElement
 * @see        Argument
 * @class
 * @extends Argument
 */
export class RecursiveArgument extends Argument {
    /**
     * Type identifier for recursive arguments.
     */
    public static TYPE_ID_RECURSIVE: number = 102;

    public static TYPE_DESC_RECURSIVE: string = "User defined recursive argument";

    /**
     * Base values
     */
    /*private*/ baseValues: java.util.List<number>;

    /**
     * To avoid never ending loops
     */
    /*private*/ recursiveCounter: number;

    /*private*/ startingIndex: number;

    public constructor(argumentName?: any, recursiveExpressionString?: any, n?: any, ...elements: any[]) {
        if (((typeof argumentName === 'string') || argumentName === null) && ((typeof recursiveExpressionString === 'string') || recursiveExpressionString === null) && ((n != null && n instanceof <any>Argument) || n === null) && ((elements != null && elements instanceof <any>Array && (elements.length == 0 || elements[0] == null ||(elements[0] != null && elements[0] instanceof <any>PrimitiveElement))) || elements === null)) {
            let __args = arguments;
            super(argumentName, recursiveExpressionString);
            if (this.baseValues === undefined) { this.baseValues = null; } 
            if (this.recursiveCounter === undefined) { this.recursiveCounter = 0; } 
            if (this.startingIndex === undefined) { this.startingIndex = 0; } 
            if (argumentName === this.getArgumentName()){
                this.argumentType = ArgumentConstants.RECURSIVE_ARGUMENT;
                this.baseValues = <any>(new java.util.ArrayList<number>());
                this.n = n;
                this.argumentExpression.addArguments(n);
                this.argumentExpression.addArguments(this);
                (o => o.addDefinitions.apply(o, elements))(this.argumentExpression);
                this.argumentExpression.setDescription(argumentName);
                this.recursiveCounter = -1;
            }
        } else if (((typeof argumentName === 'string') || argumentName === null) && ((typeof recursiveExpressionString === 'string') || recursiveExpressionString === null) && ((typeof n === 'string') || n === null) && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let indexName: any = __args[2];
            super(argumentName, recursiveExpressionString);
            if (this.baseValues === undefined) { this.baseValues = null; } 
            if (this.recursiveCounter === undefined) { this.recursiveCounter = 0; } 
            if (this.startingIndex === undefined) { this.startingIndex = 0; } 
            if (argumentName === this.getArgumentName()){
                this.argumentType = ArgumentConstants.RECURSIVE_ARGUMENT;
                this.baseValues = <any>(new java.util.ArrayList<number>());
                this.n = new Argument(indexName);
                this.argumentExpression.addArguments(this.n);
                this.argumentExpression.addArguments(this);
                this.argumentExpression.setDescription(argumentName);
                this.recursiveCounter = -1;
            }
        } else if (((typeof argumentName === 'string') || argumentName === null) && ((recursiveExpressionString != null && recursiveExpressionString instanceof <any>Array && (recursiveExpressionString.length == 0 || recursiveExpressionString[0] == null ||(recursiveExpressionString[0] != null && recursiveExpressionString[0] instanceof <any>PrimitiveElement))) || recursiveExpressionString === null) && n === undefined && elements === undefined || elements.length === 0) {
            let __args = arguments;
            let argumentDefinitionString: any = __args[0];
            let elements: any[] = __args[1];
            super(argumentDefinitionString);
            if (this.baseValues === undefined) { this.baseValues = null; } 
            if (this.recursiveCounter === undefined) { this.recursiveCounter = 0; } 
            if (this.startingIndex === undefined) { this.startingIndex = 0; } 
            if (java.util.regex.Pattern.matches(argumentDefinitionString, ParserSymbol.function1ArgDefStrRegExp_$LI$())){
                this.argumentType = ArgumentConstants.RECURSIVE_ARGUMENT;
                this.baseValues = <any>(new java.util.ArrayList<number>());
                this.recursiveCounter = -1;
                this.argumentExpression.addArguments(this.n);
                this.argumentExpression.addArguments(this);
                (o => o.addDefinitions.apply(o, elements))(this.argumentExpression);
                this.argumentExpression.setDescription(argumentDefinitionString);
            } else {
                this.argumentExpression = new Expression();
                this.argumentExpression.setSyntaxStatus(ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(), "[" + argumentDefinitionString + "] Invalid argument definition (patterns: f(n) = f(n-1) ...  ).");
            }
        } else throw new Error('invalid overload');
    }

    /**
     * Adds base case
     * 
     * @param      {number} index               the base case index
     * @param      {number} value               the base case value
     */
    public addBaseCase(index: number, value: number) {
        const recSize: number = this.baseValues.size();
        if (index > recSize - 1){
            for(let i: number = recSize; i < index; i++) {this.baseValues.add(javaemul.internal.DoubleHelper.NaN);}
            this.baseValues.add(value);
        } else this.baseValues.set(index, value);
    }

    /**
     * Clears all based cases and stored calculated values
     */
    public resetAllCases() {
        this.baseValues.clear();
        this.recursiveCounter = -1;
    }

    public getArgumentValue$double(index: number): number {
        if (this.recursiveCounter === -1)this.startingIndex = (<number>Math.round(index)|0);
        const recSize: number = this.baseValues.size();
        const idx: number = (<number>Math.round(index)|0);
        this.recursiveCounter++;
        if ((this.recursiveCounter <= this.startingIndex) && (idx <= this.startingIndex)){
            if ((idx >= 0) && (idx < recSize) && (!/* isNaN */isNaN(/* doubleValue */this.baseValues.get(idx)))){
                this.recursiveCounter--;
                return /* doubleValue */this.baseValues.get(idx);
            } else if (idx >= 0){
                this.n.setArgumentValue(idx);
                const newExp: Expression = new Expression(this.argumentExpression.expressionString, null,
                    this.argumentExpression.argumentsList, this.argumentExpression.functionsList, this.argumentExpression.constantsList,
                    ExpressionConstants.INTERNAL, this.argumentExpression.UDFExpression, this.argumentExpression.UDFVariadicParamsAtRunTime);
                newExp.setDescription(super.getArgumentName());
                newExp.setExpressionModifiedFlag();
                if (super.getVerboseMode() === true)newExp.setVerboseMode();
                const value: number = newExp.calculate();
                this.addBaseCase(idx, value);
                this.recursiveCounter--;
                return value;
            } else {
                this.recursiveCounter--;
                return javaemul.internal.DoubleHelper.NaN;
            }
        } else {
            this.recursiveCounter--;
            return javaemul.internal.DoubleHelper.NaN;
        }
    }

    /**
     * Gets recursive argument value
     * 
     * @param      {number} index               the index
     * 
     * @return     {number} value as double
     */
    public getArgumentValue(index?: any): any {
        if (((typeof index === 'number') || index === null)) {
            return <any>this.getArgumentValue$double(index);
        } else if (index === undefined) {
            return super.getArgumentValue();
        } else throw new Error('invalid overload');
    }
}
RecursiveArgument["__class"] = "org.mariuszgromada.math.mxparser.RecursiveArgument";