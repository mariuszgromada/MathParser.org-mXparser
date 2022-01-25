/**
 * FunctionExtension provides interface for function algorithm definition.
 * In this case algorithm definition is based on source code using
 * JAVA (for JAVA / Android) or .NET. If implemented Function Extension
 * object can be further used while Function object
 * construction, which means it can extend mXparser math collection.
 * mXparser extension with your own implementation can be achieved
 * by implementing FunctionExtension interface, creating an FunctionExtension
 * object, creating Function object based on FunctionExtension, adding Function
 * object to Expression / mXparser definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.1.0
 * 
 * @see Function
 * @class
 */
export interface FunctionExtension {
    /**
     * Gets parameters number.
     * 
     * @return {number} Returns parameters number.
     */
    getParametersNumber(): number;

    /**
     * Sets value of function parameter
     * 
     * @param {number} parameterIndex    - parameter index (from 0 to n-1)
     * @param {number} parameterValue    - parameter value
     */
    setParameterValue(parameterIndex: number, parameterValue: number);

    /**
     * Gets parameter name
     * 
     * @param {number} parameterIndex    - parameter index (from 0 to n-1)
     * @return {string} Returns parameter name
     */
    getParameterName(parameterIndex: number): string;

    /**
     * Actual algorithm implementation.
     * 
     * @return {number} Function Extension value.
     */
    calculate(): number;

    /**
     * Cloning in case of usage in Expression
     * with recursive statements.
     * 
     * @return {*} Returns FunctionExtension object that was cloned.
     * 
     * @see Expression#getRecursiveMode()
     */
    clone(): FunctionExtension;
}