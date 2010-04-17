/*
 * @(#)RecursiveArgument.cs        1.0    2010-02-20
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
     * RecursiveArgument class enables to declare the argument
     * (variable) which is defined in a recursive way. Such an argument 
     * can be used in further processing in expressions, functions and dependent
     * or recursive arguments.<br>
     * 
     * For example:
     * <ul>
     * <li>'fib(n) = fin(n-1)+fib(n-2), fib(0) = 0, fib(1) = 1'
     * <li>'factorial(n) = n*factorial(n-1), factorial(0) = 1'
     * <p>
     * When creating an argument you should avoid:
     * <ul>
     * <li>names reserved as parser keywords, in general words known in mathematical language
     * as function names, operators (for example:
     * sin, cos, +, -, etc...). Please be informed that after associating 
     * the argument with the expression, function or dependent/recursive argument
     * its name will be recognized by the parser as reserved key word.
     * It means that it could not be the same as any other key word known
     * by the parser for this particular expression.
     * <li>defining statements with increasing index: 'a(n) = a(n+1) + ... ', otherwise
     * you will get Double.NaN
     * <li>if recursion is not properly defined you will get Double.NaN in the result.
     * This is due to the recursion counter inside of the recursive argument. Calculating 
     * n-th element requires no more than n recursion steps (usually less than n).
     * <li>For negative 'n' you will get Double.NaN. 
     * 
     * </ul>
     * @author         <b>Mariusz Gromada</b><br/>
     *                 <a href="mailto:mariusz.gromada@gmail.com">mariusz.gromada@gmail.com</a><br>
     *                 <a href="http://multifraktal.net/">http://multifraktal.net/</a><br>
     *                 <a href="http://mxparser.sourceforge.net/">http://mxparser.sourceforge.net/</a><br>
     *                         
     * @version        1.0
     * 
     * @see Argument
     * @see Expression
     * @see Function
     * @see Constant
     */
    public class RecursiveArgument : Argument {

	    /**
	     * Type identifier for recursive arguments.
	     */	
	    internal const int TYPE_ID = 102;	
    	
	    /**
	     * Base values
	     */	
	    private List<Double> baseValues;
    	
	    /**
	     * Index argument.
	     */	
	    private Argument n;
    	
    	
	    /**
	     * To avoid never ending loops
	     */
	    private int recursiveCounter;
	    private int startingIndex;
    	
    	
	    /**
	     * Constructor - creates recursive argument.
	     * 
	     * @param      argumentName                  the argument name
	     * @param      recursiveExpressionString     the recursive expression string
	     * @param      n                             the index argument
	     */
        public RecursiveArgument(String argumentName, String recursiveExpressionString, Argument n)
            : base(argumentName, recursiveExpressionString)
        {
  			
		    
    		
		    this.argumentType = RECURSIVE_ARGUMENT;
		    baseValues = new List<Double>();
		    this.n = n;
		    base.argumentExpression.addArguments(n);
            base.argumentExpression.addArguments(this);
            base.argumentExpression.setDescription(argumentName);
		    recursiveCounter = -1;
    		
	    }
    	
	    /**
	     * Adds base case
	     * 
	     * @param      index               the base case index
	     * @param      value               the base case value
	     */	
	    public void addBaseCase(int index, double value) {
    		
		    int recSize = baseValues.Count;
    		
		    if (index > recSize-1) {
			    /*
			     * Expand base values array if necessary 
			     */
			    for (int i = recSize; i < index; i++)
				    baseValues.Add( Double.NaN );
    			
			    baseValues.Add(value);
    			
		    } else
			    baseValues[index] = value;
    		
	    }
    	
    		
	    /**
	     * Gets recursive argument value
	     * 
	     * @param      index               the index
	     *   
	     * @return     value as double
	     */	
	    public double getArgumentValue(double index) {
    		
		    /*
		     * Remember starting index
		     */
		    if (recursiveCounter == -1)
			    startingIndex = (int)Math.Round(index);
    		
		    int recSize = baseValues.Count;
		    int idx = (int)Math.Round(index);
    		
		    /*
		     * Count recursive calls
		     */
		    recursiveCounter++;
    		
    		
		    if ((recursiveCounter <= startingIndex) && (idx <= startingIndex)) {
    			
			    /*
			     * if recursive counter is still lower than starting index
			     * and current index is not increasing
			     */
			    if ((idx >= 0) && (idx < recSize) && (!Double.IsNaN( baseValues[idx] )) ) {
    						
				    /*
				     * decrease recursive counter and return value
				     * if recursive value for the current index was already 
				     * calculated and remembered in the base values table
				     */
				    recursiveCounter--;			
				    return baseValues[idx];
    				
			    }
			    else if (idx >= 0) {
    			
				    /*
				     * value is to be calculated by the recursive calls
				     */
    				
				    /*
				     * Set n to the current index
				     */
				    n.setArgumentValue(idx);
    				
				    /*
				     * create new expression
				     */
				    Expression newExp = new Expression(
						    base.argumentExpression.expressionString
                            , base.argumentExpression.argumentsList
                            , base.argumentExpression.functionsList
                            , base.argumentExpression.constantsList
						    ,Expression.INTERNAL);

                    newExp.setDescription(base.getArgumentName());
				    //newExp.setRecursiveMode();

                    if (base.getVerboseMode() == true)
				    {
					    //System.out.println(super.getVerboseMode() + ", " +super.getArgumentName() + ", " + super.argumentExpression.expressionString + "," + "VERBOSE MODE for recurssion");
					    newExp.setVerboseMode();
				    }
    							
				    /*
				     * perform recursive call 
				     */
				    double value = newExp.calculate();
    				
				    /*
				     * remember calculated in the base values array
				     */
				    addBaseCase(idx, value);
    	
				    /*
				     * decrease recursive counter and return value
				     */
				    recursiveCounter--;			
				    return value;
    				
			    } else {
    				
				    /* 
				     * decrease recursive counter and
				     * return Double.NaN for negative index call
				     */
				    recursiveCounter--;			
				    return Double.NaN;
			    }
    		
		    } else {
    			
			    /* stop never ending loop
			     * decrease recursive counter and
			     * return Double.NaN
			     */
			    recursiveCounter--;
			    return Double.NaN;
    			
		    }
    		
	    }	
    		
    }

}