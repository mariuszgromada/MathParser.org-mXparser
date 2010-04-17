/*
 * @(#)Constant.cs        1.0    2010-02-20
 * 
 * You may use this software under the condition of "Simplified BSD License"
 * 
 * Copyright 2010 MARIUSZ GROMADA. All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 * 
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 * 
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY <MARIUSZ GROMADA> ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of MARIUSZ GROMADA.
 * 
 * If you have any questions/bugs feel free to contact:
 * 
 *     Mariusz Gromada
 *     mariusz.gromada@gmail.com
 *     http://multifraktal.net/
 *     http://mxparser.sourceforge.net/
 * 
 *                              Asked if he believes in one God, a mathematician answered: 
 *                              "Yes, up to isomorphism."  
 */

using System;
using System.Collections.Generic;

namespace org.mariuszgromada.math.mxparser {



    /**
     * Constant class provides ability to declare constants.
     * Constants can be used in further processing by any expression,
     * dependent or recursive argument, function, etc...
     * <p>
     * When creating a constant you should avoid names reserved as
     * parser keywords, in general words known in mathematical language
     * as function names, operators (for example:
     * sin, cos, +, -, pi, e, etc...). Please be informed that after associating 
     * the constant with the expression, function or dependent/recursive argument
     * its name will be recognized by the parser as reserved key word.
     * It means that it could not be the same as any other key word known
     * by the parser for this particular expression.
     * 
     * @author         <b>Mariusz Gromada</b><br/>
     *                 <a href="mailto:mariusz.gromada@gmail.com">mariusz.gromada@gmail.com</a><br>
     *                 <a href="http://multifraktal.net/">http://multifraktal.net/</a><br>
     *                 <a href="http://mxparser.sourceforge.net/">http://mxparser.sourceforge.net/</a><br>
     *                         
     * @version        1.0
     * 
     * @see RecursiveArgument
     * @see Expression
     * @see Function
     * @see Argument
     *
     */
    public class Constant {
    	
	    /**
	     * When constant could not be found
	     */
	    public const int NOT_FOUND = Expression.NOT_FOUND;
    	
	    /**
	     * Type identifier for constants
	     */
        internal const int TYPE_ID = 104;
    	
	    /**
	     * Name of the constant
	     */
	    private String constantName;
    	
	    /**
	     * COnstant value
	     */
	    private double constantValue;
    	
	    /**
	     * Constant description
	     */
	    private String description;
    	
	    /**
	     * Dependent expression list
	     */
	    private List<Expression> relatedExpressionsList;	
    	

	    /**
	     * Constructor - creates constant with a given name and given value
	     * 
	     * 
	     * @param      constantName        the constant name
	     * @param      constantValue       the constant value
	     */
	    public Constant(String constantName
					    ,double constantValue) {
    		
		    this.constantName = constantName;
		    this.constantValue = constantValue;
		    description = "";
		    relatedExpressionsList = new List<Expression>();
    		
	    }
    	
	    /**
	     * Constructor - creates constant with a given name and given value.
	     * Additionally description is being set. 
	     * 
	     * @param      constantName        the constant name
	     * @param      constantValue       the constant value
	     * @param      description         the constant description
	     */	
	    public Constant(String constantName
			    ,double constantValue
			    ,String description) {
    		
		    this.constantName = constantName;
		    this.constantValue = constantValue;
		    this.description = description;
		    relatedExpressionsList = new List<Expression>();
    		
	    }

    	
	    /**
	     * Gets constant name
	     * 
	     * @return     the constant name as string.
	     */
	    public String getConstantName() {
    		
		    return constantName;
    		
	    }
    	
	    /**
	     * Sets constant name. If constant is associated with any expression
	     * then this operation will set modified flag to each related expression.
	     * 
	     * @param      constantName        the constant name
	     */
	    public void setConstantName(String constantName) {
    		
		    this.constantName = constantName;
		    setExpressionModifiedFlags();
    		
	    }
    	
    	
	    /**
	     * Gets constant value.
	     * 
	     * @return     constant value as double
	     */
	    public double getConstantValue() {
    		
		    return constantValue;
    		
	    }
    		
    	
	    /**
	     * Gets constant description.
	     * 
	     * @return     constant description as string.
	     */
	    public String getDescription() {
    		
		    return description;
    		
	    }
    	
	    /**
	     * Sets constant description.
	     * 
	     * @param      description         the constant description
	     */
	    public void setDescription(String description) {
    		
		    this.description = description;
    		
	    }
    	
    	
	    /**
	     * Adds related expression.
	     * 
	     * @param      expression          the related expression.
	     */
	    internal void addRelatedExpression(Expression expression) {
    		
		    if (expression != null)
			    if ( !relatedExpressionsList.Contains(expression) )
				    relatedExpressionsList.Add(expression);
    		
	    }
    	
	    /**
	     * Removes related expression.
	     * 
	     * @param      expression          the related expression.
	     */
	    internal void removeRelatedExpression(Expression expression) {
    		
		    if (expression != null)
			    relatedExpressionsList.Remove(expression);
    		
	    }
    	
    	
	    /**
	     * Sets expression modified flag to each related expression.
	     */
	    void setExpressionModifiedFlags() {
    		
		    foreach (Expression e in relatedExpressionsList)
			    e.setExpressionModifiedFlag();
    		
	    }
    	
	    /**
	     * Gets license info
	     * 
	     * @return     license info as string.
	     */
	    public String getLicense() {
    		
		    return Expression.LICENSE;
    		
	    }		
    	
    }

}