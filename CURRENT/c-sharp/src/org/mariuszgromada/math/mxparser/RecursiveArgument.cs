/*
 * @(#)RecursiveArgument.cs        4.2.0    2018-02-03
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2019 MARIUSZ GROMADA. All rights reserved.
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
 *     mariuszgromada.org@gmail.com
 *     http://mathparser.org
 *     http://mathspace.pl
 *     http://janetsudoku.mariuszgromada.org
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser
 *     http://mxparser.sourceforge.net
 *     http://bitbucket.org/mariuszgromada/mxparser
 *     http://mxparser.codeplex.com
 *     http://github.com/mariuszgromada/Janet-Sudoku
 *     http://janetsudoku.codeplex.com
 *     http://sourceforge.net/projects/janetsudoku
 *     http://bitbucket.org/mariuszgromada/janet-sudoku
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://scalarmath.org/
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
using org.mariuszgromada.math.mxparser.parsertokens;
using System;
using System.Collections.Generic;

namespace org.mariuszgromada.math.mxparser {
	/// <summary>
	/// RecursiveArgument class enables to declare the argument
	/// (variable) which is defined in a recursive way. Such an argument
	/// can be used in further processing in expressions, functions and dependent
	/// or recursive arguments.
	/// <para/>
	/// For example:
	/// <list type="bullet">
	///     <item>'fib(n) = fin(n-1)+fib(n-2), fib(0) = 0, fib(1) = 1'</item>
	///     <item>'factorial(n) = n*factorial(n-1), factorial(0) = 1'</item>
	/// </list>
	/// </summary>
	/// <remarks>
	/// When creating an argument you should avoid:
	/// <list type="bullet">
	///     <item>
	///         names reserved as parser keywords, in general words known in mathematical language
	///         as function names, operators (for example:
	///         sin, cos, +, -, etc...). Please be informed that after associating
	///         the argument with the expression, function or dependent/recursive argument
	///         its name will be recognized by the parser as reserved key word.
	///         It means that it could not be the same as any other key word known
	///         by the parser for this particular expression.
	///     </item>
	///     <item>
	///         defining statements with increasing index: 'a(n) = a(n+1) + ... ', otherwise
	///         you will get <see cref="Double.NaN"/>
	///     </item>
	///     <item>
	///         if recursion is not properly defined you will get <see cref="Double.NaN"/> in the result.
	///         This is due to the recursion counter inside of the recursive argument. Calculating
	///         n-th element requires no more than n recursion steps (usually less than n).
	///     </item>
	///     <item>For negative 'n' you will get <see cref="Double.NaN"/>.</item>
	/// </list>
	/// <para/>
	/// Author: <b>Mariusz Gromada</b><br/>
	/// <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br/>
	/// <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br/>
	/// <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br/>
	/// <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br/>
	/// <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br/>
	/// <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br/>
	/// <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br/>
	/// <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br/>
	/// <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br/>
	/// <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br/>
	/// <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br/>
	/// <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br/>
	/// <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br/>
	/// <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br/>
	/// <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a>
	/// <para/>
	/// Version: 4.2.0
	/// </remarks>
	/// 
	/// <seealso cref="Argument"/>
	/// <seealso cref="Expression"/>
	/// <seealso cref="Function"/>
	/// <seealso cref="Constant"/>
	[CLSCompliant(true)]
	public class RecursiveArgument : Argument {
		/// <summary>Type identifier for recursive arguments.</summary>
		public const int TYPE_ID_RECURSIVE			= 102;
		public const String TYPE_DESC_RECURSIVE		= "User defined recursive argument";
		/// <summary>Base values</summary>
		private List<Double> baseValues;
		/// <summary>To avoid never ending loops</summary>
		private int recursiveCounter;
		private int startingIndex;
		/// <summary>Constructor - creates recursive argument.</summary>
		///
		/// <param name="argumentName">the argument name</param>
		/// <param name="recursiveExpressionString">the recursive expression string</param>
		/// <param name="indexName">index argument name</param>
		public RecursiveArgument(String argumentName, String recursiveExpressionString, String indexName)
			: base(argumentName, recursiveExpressionString)
		{
			if (argumentName.Equals(this.getArgumentName())) {
				this.argumentType = RECURSIVE_ARGUMENT;
				baseValues = new List<Double>();
				this.n = new Argument(indexName);
				base.argumentExpression.addArguments(n);
				base.argumentExpression.addArguments(this);
				base.argumentExpression.setDescription(argumentName);
				recursiveCounter = -1;
			}
		}
		/// <summary>Constructor - creates recursive argument.</summary>
		///
		/// <param name="argumentName">the argument name</param>
		/// <param name="recursiveExpressionString">the recursive expression string</param>
		/// <param name="n">the index argument</param>
		/// <param name="elements">
		///     Optional elements list (variadic - comma
		///     separated) of types: <see cref="Argument"/>,
		///     <see cref="Constant"/>, <see cref="Function"/>
		/// </param>
		/// 
		/// <seealso cref="PrimitiveElement"/>
		/// <seealso cref="Argument"/>
		public RecursiveArgument(String argumentName, String recursiveExpressionString, Argument n, params PrimitiveElement[] elements)
			: base(argumentName, recursiveExpressionString)
		{
			if (argumentName.Equals(this.getArgumentName())) {
				this.argumentType = RECURSIVE_ARGUMENT;
				baseValues = new List<Double>();
				this.n = n;
				base.argumentExpression.addArguments(n);
				base.argumentExpression.addArguments(this);
				base.argumentExpression.addDefinitions(elements);
				base.argumentExpression.setDescription(argumentName);
				recursiveCounter = -1;
			}
		}
		/// <summary>Constructor - creates argument based on the argument definition string.</summary>
		///
		/// <param name="argumentDefinitionString">
		///     Argument definition string, i.e.:
		///     <list type="bullet">
		///        <item>'x' - only argument name</item>
		///        <item>'x=5' - argument name and argument value</item>
		///        <item>'x=2*5' - argument name and argument value given as simple expression</item>
		///        <item>'x=2*y' - argument name and argument expression (dependent argument 'x' on argument 'y')</item>
		///        <item>'x(n)=x(n-1)+x(n-2)' - for recursive arguments)</item>
		///     </list>
		/// </param>
		/// 
		/// <param name="elements">
		///     Optional elements list
		///     (variadic - comma separated) of types: <see cref="Argument"/>,
		///     <see cref="Constant"/>, <see cref="Function"/>
		/// </param>
		///
		/// <seealso cref="PrimitiveElement"/>
		/// <seealso cref="Argument"/>
		public RecursiveArgument(String argumentDefinitionString, params PrimitiveElement[] elements) : base(argumentDefinitionString)
		{
			if (mXparser.regexMatch(argumentDefinitionString, ParserSymbol.function1ArgDefStrRegExp)) {
				this.argumentType = RECURSIVE_ARGUMENT;
				baseValues = new List<Double>();
				recursiveCounter = -1;
				base.argumentExpression.addArguments(base.n);
				base.argumentExpression.addArguments(this);
				base.argumentExpression.addDefinitions(elements);
				base.argumentExpression.setDescription(argumentDefinitionString);
			}
			else {
				base.argumentExpression = new Expression();
				base.argumentExpression.setSyntaxStatus(SYNTAX_ERROR_OR_STATUS_UNKNOWN, "[" + argumentDefinitionString + "] " + "Invalid argument definition (patterns: f(n) = f(n-1) ...  ).");
			}
		}
		/// <summary>Adds base case</summary>
		///
		/// <param name="index">the base case index</param>
		/// <param name="value">the base case value</param>
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
		/// <summary>Clears all based cases and stored calculated values</summary>
		public void resetAllCases()
		{
			baseValues.Clear();
			recursiveCounter = -1;
		}
		/// <summary>Gets recursive argument value</summary>
		///
		/// <param name="index">the index</param>
		///
		/// <returns>value as double</returns>
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
							,base.argumentExpression.argumentsList
							,base.argumentExpression.functionsList
							,base.argumentExpression.constantsList
							,Expression.INTERNAL
							,base.argumentExpression.UDFExpression
							,base.argumentExpression.UDFVariadicParamsAtRunTime);
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