/*
 * @(#)BinaryRelations.cs        1.0    2010-02-20
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

namespace org.mariuszgromada.math.mxparser.mathcollection {

    /**
     * BinaryRelations - class for dealing with binary relations on integers or doubles. 
     * 
     * @author         <b>Mariusz Gromada</b><br/>
     *                 <a href="mailto:mariusz.gromada@gmail.com">mariusz.gromada@gmail.com</a><br>
     *                 <a href="http://multifraktal.net/">http://multifraktal.net/</a><br>
     *                 <a href="http://mxparser.sourceforge.net/">http://mxparser.sourceforge.net/</a><br>
     *                         
     * @version        1.0
     */
    public sealed class BinaryRelations {
        
	    /**
	     * Equality relation.
	     * 
	     * @param      a                   the a number (a = b)
	     * @param      b                   the b number (a = b)
	     * 
	     * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	     *             else if a = b return 1,
	     *             otherwise return 0.
	     */
	    public static double eq(double a, double b) {
    		
		    double result = 0;
    		
		    if ( a == b )
			    result = 1;
            
		    if ( ( Double.IsNaN(a) ) || ( Double.IsNaN(b) ) )
			    result = Double.NaN;
    			
		    return result;

	    }

	    /**
	     * Inequality relation.
	     * 
	     * @param      a                   the a number (a <> b)
	     * @param      b                   the b number (a <> b)
	     * 
	     * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	     *             else if a <> b return 1,
	     *             otherwise return 0.
	     */
	    public static double neq(double a, double b) {
    	
		    double result = 0;
    		
		    if ( a != b )
			    result = 1;

		    if ( ( Double.IsNaN(a) ) || ( Double.IsNaN(b) ) )
			    result = Double.NaN;	
    		
		    return result;

	    }

	    /**
	     * Lower than relation.
	     * 
	     * @param      a                   the a number (a < b)
	     * @param      b                   the b number (a < b)
	     * 
	     * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	     *             else if a < b return 1,
	     *             otherwise return 0.
	     */
	    public static double lt(double a, double b) {
    	
		    double result = 0;
    		
		    if ( a < b )
			    result = 1;
    		
		    if ( ( Double.IsNaN(a) ) || ( Double.IsNaN(b) ) )
			    result = Double.NaN;
    		
		    return result;

	    }
    	
	    /**
	     * Greater than relation.
	     * 
	     * @param      a                   the a number (a > b)
	     * @param      b                   the b number (a > b)
	     * 
	     * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	     *             else if a > b return 1,
	     *             otherwise return 0.
	     */		
	    public static double gt(double a, double b) {
    	
		    double result = 0;
    		
		    if ( a > b )
			    result = 1;

		    if ( ( Double.IsNaN(a) ) || ( Double.IsNaN(b) ) )
			    result = Double.NaN;	
    		
		    return result;

	    }
    	
    		
	    /**
	     * Lower or equal relation.
	     * 
	     * @param      a                   the a number (a <= b)
	     * @param      b                   the b number (a <= b)
	     * 
	     * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	     *             else if a <= b return 1,
	     *             otherwise return 0.
	     */
	    public static double leq(double a, double b) {

		    double result = 0;
    		
		    if ( a <= b )
			    result = 1;
    		
		    if ( ( Double.IsNaN(a) ) || ( Double.IsNaN(b) ) )
			    result = Double.NaN;
    		
		    return result;

	    }
    			
	    /**
	     * Greater or equal relation.
	     * 
	     * @param      a                   the a number (a >= b)
	     * @param      b                   the b number (a >= b)
	     * 
	     * @return     if a = Double.NaN or b = Double.NaN return Double.NaN,
	     *             else if a >= b return 1,
	     *             otherwise return 0.
	     */
	    public static double geq(double a, double b) {
    	
		    double result = 0;
    		
		    if ( a >= b )
			    result = 1;

		    if ( ( Double.IsNaN(a) ) || ( Double.IsNaN(b) ) )
			    result = Double.NaN;
    			
		    return result;

	    }
    	
    	
    }

}