import { ExpressionConstants } from './ExpressionConstants';

/**
 * FunctionConstants provides constant values used in mXparser frameworks. This helps
 * reduce cyclic dependencies in JavaScript code.
 * 
 * @author <b>Thilo Schaber</b>
 * 
 * @version        1.0.0
 * @class
 */
export class FunctionConstants {
    /**
     * No syntax errors in the function.
    */
    public static NO_SYNTAX_ERRORS: boolean; public static NO_SYNTAX_ERRORS_$LI$(): boolean { if (FunctionConstants.NO_SYNTAX_ERRORS == null) { FunctionConstants.NO_SYNTAX_ERRORS = ExpressionConstants.NO_SYNTAX_ERRORS; } return FunctionConstants.NO_SYNTAX_ERRORS; }

    /**
     * Syntax error in the function or syntax status unknown.
     */
    public static SYNTAX_ERROR_OR_STATUS_UNKNOWN: boolean; public static SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(): boolean { if (FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN == null) { FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN; } return FunctionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN; }

    /**
     * When function was not found
     */
    public static NOT_FOUND: number; public static NOT_FOUND_$LI$(): number { if (FunctionConstants.NOT_FOUND == null) { FunctionConstants.NOT_FOUND = ExpressionConstants.NOT_FOUND_$LI$(); } return FunctionConstants.NOT_FOUND; }

    /**
     * Function type id identifier
     */
    public static TYPE_ID: number = 103;

    public static TYPE_DESC: string = "User defined function";

    /**
     * Function with body based on the expression string.
     * 
     * @see Function#getFunctionBodyType()
     */
    public static BODY_RUNTIME: number = 1;

    /**
     * Function with body based on the extended code.
     * 
     * @see FunctionExtension
     * @see Function#getFunctionBodyType()
     */
    public static BODY_EXTENDED: number = 2;
}