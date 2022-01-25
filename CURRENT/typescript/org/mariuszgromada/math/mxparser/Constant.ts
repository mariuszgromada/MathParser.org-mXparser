import { ParserSymbol } from './parsertokens/ParserSymbol';
import { PrimitiveElement } from './PrimitiveElement';
import { Expression } from './Expression';
import { ExpressionConstants } from './ExpressionConstants';
import { java } from 'j4ts/j4ts';
import { HeadEqBody } from './Miscellaneous';
import { mXparserConstants } from './mXparserConstants';

/**
 * Constructor - creates constant with a given name and given value.
 * Additionally description is being set.
 * 
 * @param      {string} constantName        the constant name
 * @param      {number} constantValue       the constant value
 * @param      {string} description         the constant description
 * @class
 * @extends PrimitiveElement
 */
export class Constant extends PrimitiveElement {
    /**
     * When constant could not be found
     */
    public static NOT_FOUND: number; public static NOT_FOUND_$LI$(): number { if (Constant.NOT_FOUND == null) { Constant.NOT_FOUND = ExpressionConstants.NOT_FOUND_$LI$(); }  return Constant.NOT_FOUND; }

    /**
     * Type identifier for constants
     */
    public static TYPE_ID: number = 104;

    public static TYPE_DESC: string = "User defined constant";

    /**
     * Status of the Expression syntax
     */
    public static NO_SYNTAX_ERRORS: boolean; public static NO_SYNTAX_ERRORS_$LI$(): boolean { if (Constant.NO_SYNTAX_ERRORS == null) { Constant.NO_SYNTAX_ERRORS = ExpressionConstants.NO_SYNTAX_ERRORS; }  return Constant.NO_SYNTAX_ERRORS; }

    public static SYNTAX_ERROR_OR_STATUS_UNKNOWN: boolean; public static SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(): boolean { if (Constant.SYNTAX_ERROR_OR_STATUS_UNKNOWN == null) { Constant.SYNTAX_ERROR_OR_STATUS_UNKNOWN = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN; }  return Constant.SYNTAX_ERROR_OR_STATUS_UNKNOWN; }

    static NO_SYNTAX_ERROR_MSG: string = "Constant - no syntax errors.";

    /**
     * Name of the constant
     */
    /*private*/ constantName: string;

    /**
     * COnstant value
     */
    /*private*/ constantValue: number;

    /**
     * Constant description
     */
    /*private*/ description: string;

    /**
     * Dependent expression list
     */
    /*private*/ relatedExpressionsList: java.util.List<Expression>;

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

    public constructor(constantName?: any, constantValue?: any, description?: any) {
        if (((typeof constantName === 'string') || constantName === null) && ((typeof constantValue === 'number') || constantValue === null) && ((typeof description === 'string') || description === null)) {
            let __args = arguments;
            super(Constant.TYPE_ID);
            if (this.constantName === undefined) { this.constantName = null; } 
            if (this.constantValue === undefined) { this.constantValue = 0; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            this.relatedExpressionsList = <any>(new java.util.ArrayList<Expression>());
            if (mXparserConstants.regexMatch(constantName, ParserSymbol.nameOnlyTokenOptBracketsRegExp_$LI$())){
                this.constantName = constantName;
                this.constantValue = constantValue;
                this.description = description;
                this.syntaxStatus = Constant.NO_SYNTAX_ERRORS_$LI$();
                this.errorMessage = Constant.NO_SYNTAX_ERROR_MSG;
            } else {
                this.syntaxStatus = Constant.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$();
                this.errorMessage = "[" + constantName + "] --> invalid constant name, pattern not mathes: " + ParserSymbol.nameOnlyTokenOptBracketsRegExp_$LI$();
            }
        } else if (((typeof constantName === 'string') || constantName === null) && ((constantValue != null && constantValue instanceof <any>Array && (constantValue.length == 0 || constantValue[0] == null ||(constantValue[0] != null && constantValue[0] instanceof <any>PrimitiveElement))) || constantValue === null) && description === undefined) {
            let __args = arguments;
            let constantDefinitionString: any = __args[0];
            let elements: any[] = __args[1];
            super(Constant.TYPE_ID);
            if (this.constantName === undefined) { this.constantName = null; } 
            if (this.constantValue === undefined) { this.constantValue = 0; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            this.description = "";
            this.syntaxStatus = Constant.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$();
            this.relatedExpressionsList = <any>(new java.util.ArrayList<Expression>());
            if (mXparserConstants.regexMatch(constantDefinitionString, ParserSymbol.constUnitgDefStrRegExp_$LI$())){
                const headEqBody: HeadEqBody = new HeadEqBody(constantDefinitionString);
                this.constantName = headEqBody.headTokens.get(0).tokenStr;
                const bodyExpression: Expression = <any>new (__Function.prototype.bind.apply(Expression, [null, headEqBody.bodyStr].concat(<any[]>elements)));
                this.constantValue = bodyExpression.calculate();
                this.syntaxStatus = bodyExpression.getSyntaxStatus();
                this.errorMessage = bodyExpression.getErrorMessage();
            } else this.errorMessage = "[" + constantDefinitionString + "] --> pattern not mathes: " + ParserSymbol.constUnitgDefStrRegExp_$LI$();
        } else if (((typeof constantName === 'string') || constantName === null) && ((typeof constantValue === 'number') || constantValue === null) && description === undefined) {
            let __args = arguments;
            super(Constant.TYPE_ID);
            if (this.constantName === undefined) { this.constantName = null; } 
            if (this.constantValue === undefined) { this.constantValue = 0; } 
            if (this.description === undefined) { this.description = null; } 
            if (this.relatedExpressionsList === undefined) { this.relatedExpressionsList = null; } 
            if (this.syntaxStatus === undefined) { this.syntaxStatus = false; } 
            if (this.errorMessage === undefined) { this.errorMessage = null; } 
            this.relatedExpressionsList = <any>(new java.util.ArrayList<Expression>());
            if (mXparserConstants.regexMatch(constantName, ParserSymbol.nameOnlyTokenOptBracketsRegExp_$LI$())){
                this.constantName = constantName;
                this.constantValue = constantValue;
                this.description = "";
                this.syntaxStatus = Constant.NO_SYNTAX_ERRORS_$LI$();
                this.errorMessage = Constant.NO_SYNTAX_ERROR_MSG;
            } else {
                this.syntaxStatus = Constant.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$();
                this.errorMessage = "[" + constantName + "] --> invalid constant name, pattern not mathes: " + ParserSymbol.nameOnlyTokenOptBracketsRegExp_$LI$();
            }
        } else throw new Error('invalid overload');
    }

    /**
     * Gets constant name
     * 
     * @return     {string} the constant name as string.
     */
    public getConstantName(): string {
        return this.constantName;
    }

    /**
     * Sets constant name. If constant is associated with any expression
     * then this operation will set modified flag to each related expression.
     * 
     * @param      {string} constantName        the constant name
     */
    public setConstantName(constantName: string) {
        if (mXparserConstants.regexMatch(constantName, ParserSymbol.nameOnlyTokenOptBracketsRegExp_$LI$())){
            this.constantName = constantName;
            this.setExpressionModifiedFlags();
        } else {
            this.syntaxStatus = Constant.SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$();
            this.errorMessage = "[" + constantName + "] --> invalid constant name, pattern not mathes: " + ParserSymbol.nameOnlyTokenOptBracketsRegExp_$LI$();
        }
    }

    /**
     * Sets constant value
     * @param {number} constantValue   constant value
     */
    public setConstantValue(constantValue: number) {
        this.constantValue = constantValue;
    }

    /**
     * Gets constant value.
     * 
     * @return     {number} constant value as double
     */
    public getConstantValue(): number {
        return this.constantValue;
    }

    /**
     * Gets constant description.
     * 
     * @return     {string} constant description as string.
     */
    public getDescription(): string {
        return this.description;
    }

    /**
     * Sets constant description.
     * 
     * @param      {string} description         the constant description
     */
    public setDescription(description: string) {
        this.description = description;
    }

    /**
     * Method return error message after
     * 
     * @return     {string} Error message as string.
     */
    public getErrorMessage(): string {
        return this.errorMessage;
    }

    /**
     * Gets syntax status of the expression.
     * 
     * @return     {boolean} Constant.NO_SYNTAX_ERRORS if there are no syntax errors,
     * Const.SYNTAX_ERROR_OR_STATUS_UNKNOWN when syntax error was found or
     * syntax status is unknown
     */
    public getSyntaxStatus(): boolean {
        return this.syntaxStatus;
    }

    /**
     * Adds related expression.
     * 
     * @param      {Expression} expression          the related expression.
     */
    addRelatedExpression(expression: Expression) {
        if (expression != null)if (!this.relatedExpressionsList.contains(expression))this.relatedExpressionsList.add(expression);
    }

    /**
     * Removes related expression.
     * 
     * @param      {Expression} expression          the related expression.
     */
    removeRelatedExpression(expression: Expression) {
        if (expression != null)this.relatedExpressionsList.remove(expression);
    }

    /**
     * Sets expression modified flag to each related expression.
     */
    setExpressionModifiedFlags() {
        for(let index121=this.relatedExpressionsList.iterator();index121.hasNext();) {
            let e = index121.next();
            e.setExpressionModifiedFlag()
        }
    }
}
Constant["__class"] = "org.mariuszgromada.math.mxparser.Constant";
var __Function = Function;