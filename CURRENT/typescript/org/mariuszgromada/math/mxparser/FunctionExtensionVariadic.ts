/**
 * FunctionExtensionVariadic similarly to FunctionExtension
 * provides interface for function algorithm definition.
 * FunctionExtension is used for user defined functions with
 * fixed number of parameters, where FunctionExtensionVariadic
 * is used for user defined function with variadic number of
 * parameters. Algorithm definition is based on source code using
 * JAVA (for JAVA / Android) or .NET. If implemented Function Extension
 * object can be further used while Function object
 * construction, which means it can extend mXparser math collection.
 * mXparser extension with your own implementation can be achieved
 * by implementing FunctionExtensionVariadic interface,
 * creating FunctionExtensionVariadic object, creating Function object
 * based on FunctionExtensionVariadic, adding Function
 * object to Expression / mXparser definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.2.0
 * 
 * @see FunctionExtension
 * @see Function
 * @class
 */
export interface FunctionExtensionVariadic {
    /**
     * Actual algorithm implementation.
     * @param {double[]} parameters Variadic list of parameters
     * 
     * @return {number} Function Extension value.
     */
    calculate(...parameters: number[]): number;

    /**
     * Cloning in case of usage in Expression
     * with recursive statements.
     * 
     * @return {*} Returns FunctionExtension object that was cloned.
     * 
     * @see Expression#getRecursiveMode()
     */
    clone(): FunctionExtensionVariadic;
}