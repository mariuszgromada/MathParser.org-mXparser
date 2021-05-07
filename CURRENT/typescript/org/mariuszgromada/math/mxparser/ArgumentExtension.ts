/**
 * ArgumentExtension provides interface for argument algorithm definition.
 * Argument can be interpreted as function with no (zero) parameters.
 * In this case algorithm definition is based on source code using
 * JAVA (for JAVA / Android) or .NET. If implemented Argument Extension
 * object can be further used while Argument object
 * construction, which means it can extend mXparser math collection.
 * mXparser extension with your own implementation can be achieved
 * by implementing ArgumentExtension interface, creating an ArgumentExtension
 * object, creating Argument object based on ArgumentExtension, adding Argument
 * object to Expression / mXparser definition.
 * 
 * @author         <b>Mariusz Gromada</b><br>
 * <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 * <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 * 
 * @version        4.4.0
 * 
 * @see Argument
 * @class
 */
export interface ArgumentExtension {
    /**
     * Actual algorithm implementation.
     * 
     * @return {number} Argument Extension value.
     */
    getArgumentValue(): number;

    /**
     * Cloning in case of usage in Expression
     * with recursive statements.
     * 
     * @return {*} Returns ArgumentExtension object that was cloned.
     * 
     * @see Expression#getRecursiveMode()
     */
    clone(): ArgumentExtension;
}