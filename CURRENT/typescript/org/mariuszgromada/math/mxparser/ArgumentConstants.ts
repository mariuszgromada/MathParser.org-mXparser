import { javaemul } from 'j4ts/j4ts';
import { ExpressionConstants } from './ExpressionConstants';

/**
 * ArgumentConstants provides constant values used in mXparser frameworks. This helps
 * reduce cyclic dependencies in JavaScript code.
 * 
 * @author <b>Thilo Schaber</b>
 * 
 * @version        1.0.0
 * @class
 */
export class ArgumentConstants {
    /**
         * No syntax errors in the dependent argument definition.
         */
    public static NO_SYNTAX_ERRORS: boolean; public static NO_SYNTAX_ERRORS_$LI$(): boolean { if (ArgumentConstants.NO_SYNTAX_ERRORS == null) { ArgumentConstants.NO_SYNTAX_ERRORS = ExpressionConstants.NO_SYNTAX_ERRORS; } return ArgumentConstants.NO_SYNTAX_ERRORS; }

    /**
     * Syntax error in the dependent argument definition.
     */
    public static SYNTAX_ERROR_OR_STATUS_UNKNOWN: boolean; public static SYNTAX_ERROR_OR_STATUS_UNKNOWN_$LI$(): boolean { if (ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN == null) { ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN = ExpressionConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN; } return ArgumentConstants.SYNTAX_ERROR_OR_STATUS_UNKNOWN; }

    /**
     * Double.NaN as initial value of the argument.
     */
    public static ARGUMENT_INITIAL_VALUE: number; public static ARGUMENT_INITIAL_VALUE_$LI$(): number { if (ArgumentConstants.ARGUMENT_INITIAL_VALUE == null) { ArgumentConstants.ARGUMENT_INITIAL_VALUE = javaemul.internal.DoubleHelper.NaN; } return ArgumentConstants.ARGUMENT_INITIAL_VALUE; }

    /**
     * When argument was not not found
     */
    public static NOT_FOUND: number; public static NOT_FOUND_$LI$(): number { if (ArgumentConstants.NOT_FOUND == null) { ArgumentConstants.NOT_FOUND = ExpressionConstants.NOT_FOUND_$LI$(); } return ArgumentConstants.NOT_FOUND; }

    /**
     * Type indicator for free argument.
     */
    public static FREE_ARGUMENT: number = 1;

    /**
     * Type indicator for dependent argument.
     */
    public static DEPENDENT_ARGUMENT: number = 2;

    /**
     * Type indicator for recursive argument.
     */
    public static RECURSIVE_ARGUMENT: number = 3;

    /**
     * ArgumentConstants type id for the definition of key words
     * known by the parser.
     */
    public static TYPE_ID: number = 101;

    public static TYPE_DESC: string = "User defined argument";

    /**
     * ArgumentConstants with body based on the value or expression string.
     * 
     * @see ArgumentConstants#getArgumentBodyType()
     */
    public static BODY_RUNTIME: number = 1;
}