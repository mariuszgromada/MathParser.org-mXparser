/*
 * @(#)PrimitiveElement.java        2.0.0    2015-12-29
 * 
 * You may use this software under the condition of "Simplified BSD License"
 * 
 * Copyright 2010-2015 MARIUSZ GROMADA. All rights reserved.
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
 *     mariusz.gromada@mathspace.pl
 *     http://mathspace.pl/
 *     http://mathparser.org/
 *     http://github.com/mariuszgromada/mXparser/
 *     http://mariuszgromada.github.io/mXparser/
 *     http://mxparser.sourceforge.net/
 * 
 *                              Asked if he believes in one God, a mathematician answered: 
 *                              "Yes, up to isomorphism."  
 */ 


package org.mariuszgromada.math.mxparser;

/**
 * Class used for connecting all basic elements such as: Argument, Constant,
 * Function. Class not used by the end user.
 * 
 * 
 * @author         <b>Mariusz Gromada</b><br/>
 *                 <a href="mailto:mariusz.gromada@mathspace.pl">mariusz.gromada@mathspace.pl</a><br>
 *                 <a href="http://mathspace.pl/" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org/" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/mXparser/" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mariuszgromada.github.io/mXparser/" target="_blank">mXparser on GitHub pages</a><br>
 *                 <a href="http://mxparser.sourceforge.net/" target="_blank">mXparser on SourceForge/</a><br>
 *                         
 * @version        2.0.0
 *
 * @see            Argument
 * @see            Constant
 * @see            Function
 * @see            RecursiveArgument
 * @see            Expression.addDefinitions()
 * @see            Expression.removeDefinitions()
 */
public class PrimitiveElement {
	
	/**
	 * Element type id
	 * 
	 * @see     Argument.TYPE_ID
	 * @see     Constant.TYPE_ID
	 * @see     Function.TYPE_ID
	 */
	private int myTypeId;
	
	
	/**
	 * Default constructor setting element type id
	 * 
	 * @param typeId     Element type id
	 * 
	 * @see     Argument.TYPE_ID
	 * @see     Constant.TYPE_ID
	 * @see     Function.TYPE_ID
	 */
	public PrimitiveElement(int typeId) {
		myTypeId = typeId;
	}

	
	/**
	 * Returns element type id
	 * 
	 * @return  Element type id as int Function.TYPE_ID, Argument.TYPE_ID, Function.TYPE_ID 
	 * 
	 * @see     Argument.TYPE_ID
	 * @see     Constant.TYPE_ID
	 * @see     Function.TYPE_ID
	 * 
	 */
	public int getMyTypeId() {
		return myTypeId;
	}
	
}
