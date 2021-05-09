import { mXparserConstants } from './mXparserConstants';

/**
 * ExpressionConstants provides constant values used in mXparser frameworks. This helps
 * reduce cyclic dependencies in JavaScript code.
 * 
 * @author <b>Thilo Schaber</b>
 * 
 * @version        1.0.0
 * @class
 */
export class ExpressionConstants {
    /**
     * Expression type id
     */
    public static TYPE_ID: number = 100;

    public static TYPE_DESC: string = "User defined expression";

    /**
     * FOUND / NOT_FOUND
     * used for matching purposes
     */
    public static NOT_FOUND: number; public static NOT_FOUND_$LI$(): number { if (ExpressionConstants.NOT_FOUND == null) { ExpressionConstants.NOT_FOUND = mXparserConstants.NOT_FOUND; } return ExpressionConstants.NOT_FOUND; }

    public static FOUND: number; public static FOUND_$LI$(): number { if (ExpressionConstants.FOUND == null) { ExpressionConstants.FOUND = mXparserConstants.FOUND; } return ExpressionConstants.FOUND; }

    /**
     * Marker for internal processing
     */
    public static INTERNAL: boolean = true;

    /**
     * For verbose mode purposes
     */
    public static WITH_EXP_STR: boolean = true;

    public static NO_EXP_STR: boolean = false;

    /**
     * Status of the Expression syntax
     */
    public static NO_SYNTAX_ERRORS: boolean = true;

    public static SYNTAX_ERROR_OR_STATUS_UNKNOWN: boolean = false;
}