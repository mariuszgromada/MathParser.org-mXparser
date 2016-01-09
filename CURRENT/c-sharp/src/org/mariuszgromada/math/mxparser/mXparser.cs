/*
 * @(#)mXparser.cs        2.2.0    2016-01-09
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2016 MARIUSZ GROMADA. All rights reserved.
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
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser/
 *     http://mxparser.sourceforge.net/
 *     http://bitbucket.org/mariuszgromada/mxparser/
 *     http://mxparser.codeplex.com/
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Globalization;

[assembly: CLSCompliant(true)]
namespace org.mariuszgromada.math.mxparser {
	/**
	 * mXparser class provides usefull methods when parsing, calculating or
	 * parameters transforming.
	 *
	 * @author         <b>Mariusz Gromada</b><br/>
	 *                 <a href="mailto:mariusz.gromada@mathspace.pl">mariusz.gromada@mathspace.pl</a><br>
	 *                 <a href="http://mathspace.pl/" target="_blank">MathSpace.pl</a><br>
	 *                 <a href="http://mathparser.org/" target="_blank">MathParser.org - mXparser project page</a><br>
	 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
	 *                 <a href="http://mariuszgromada.github.io/MathParser.org-mXparser/" target="_blank">mXparser on GitHub pages</a><br>
	 *                 <a href="http://mxparser.sourceforge.net/" target="_blank">mXparser on SourceForge/</a><br>
	 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser/" target="_blank">mXparser on Bitbucket/</a><br>
	 *                 <a href="http://mxparser.codeplex.com/" target="_blank">mXparser on CodePlex/</a><br>
	 *
	 * @version        2.2.0
	 *
	 * @see RecursiveArgument
	 * @see Expression
	 * @see Function
	 * @see Constant
	 */
	[CLSCompliant(true)]
	public sealed class mXparser {
		/**
		 * mXparser version
		 */
		internal const String VERSION = "2.2.0";
		/**
		 * FOUND / NOT_FOUND
		 * used for matching purposes
		 */
		internal const int NOT_FOUND = -1;
		internal const int FOUND = 0;
		/**
		 * Console output string  for below methods
		 *
		 * @see mXparser.#consolePrintln(Object)
		 * @see mXparser.#consolePrint(Object)
		 */
		private static String CONSOLE_OUTPUT = "";

		private static readonly DateTime Jan1st1970 = new DateTime
			(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
		public static long currentTimeMillis()
		{
			return (long)(DateTime.UtcNow - Jan1st1970).TotalMilliseconds;
		}
		/**
		 * Calculates function f(x0) (given as expression) assigning Argument x = x0;
		 *
		 *
		 * @param      f                   the expression
		 * @param      x                   the argument
		 * @param      x0                  the argument value
		 *
		 * @return     f.calculate()
		 *
		 * @see        Expression
		 */
		public static double getFunctionValue(Expression f, Argument x, double x0) {
			x.setArgumentValue(x0);
			return f.calculate();
		}
		/**
		 * Converts List<Double> to double[]
		 *
		 * @param      numbers             the numbers list
		 *
		 * @return     numbers array
		 */
		public static double[] arraList2double(List<Double> numbers) {
			if (numbers == null)
				return null;
			int size = numbers.Count;
			double[] newNumbers = new double[size];
			for (int i = 0; i < size; i++)
				newNumbers[i] = numbers[i];
			return newNumbers;
		}
		/**
		 * Converts integer number to hex string (plain text)
		 *
		 * @param number   Integer number
		 * @return         Hex string (i.e. FF23)
		 */
		public static String numberToHexString(int number) {
			return number.ToString("X");
		}
		/**
		 * Converts long number to hex string (plain text)
		 *
		 * @param number   Long number
		 * @return         Hex string (i.e. FF23)
		 */
		public static String numberToHexString(long number) {
			return number.ToString("X");
		}
		/**
		 * Converts (long)double number to hex string (plain text)
		 *
		 * @param number   Double number
		 * @return         Hex string (i.e. FF23)
		 */
		public static String numberToHexString(double number) {
			return numberToHexString((long)number);
		}
		/**
		 * Converts hex string into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex string.
		 *
		 * @param hexString   Hex string (i.e. 48656C6C6F)
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 */
		public static String hexString2AsciiString(String hexString) {
			String hexByteStr;
			int hexByteInt;
			String asciiString = "";
			for (int i = 0; i < hexString.Length; i += 2) {
				hexByteStr = hexString.Substring(i, 2);
				hexByteInt = int.Parse(hexByteStr, NumberStyles.HexNumber);
				asciiString = asciiString + (char)hexByteInt;
			}
			return asciiString;
		}
		/**
		 * Converts number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number
		 *
		 * @param number   Integer number (i.e. 310939249775 = '48656C6C6F')
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 */
		public static String numberToAsciiString(int number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/**
		 * Converts number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number
		 *
		 * @param number   Long number (i.e. 310939249775 = '48656C6C6F')
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 */
		public static String numberToAsciiString(long number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/**
		 * Converts (long)double number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number casted to long type.
		 *
		 * @param number   Double number (i.e. 310939249775 = '48656C6C6F')
		 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
		 */
		public static String numberToAsciiString(double number) {
			return hexString2AsciiString(numberToHexString(number));
		}
		/**
		 * Prints object.toString to the Console + new line
		 *
		 * @param o    Object to print
		 */
		public static void consolePrintln(Object o) {
			Console.WriteLine(o);
			CONSOLE_OUTPUT = CONSOLE_OUTPUT + o + "\n";
		}
		/**
		 * Prints new line to the Console, no new line
		 *
		 */
		public static void consolePrintln() {
			Console.WriteLine();
			CONSOLE_OUTPUT = CONSOLE_OUTPUT + "\n";
		}
		/**
		 * Prints object.toString to the Console, no new line
		 *
		 * @param o    Object to print
		 */
		public static void consolePrint(Object o) {
			Console.Write(o);
			CONSOLE_OUTPUT = CONSOLE_OUTPUT + o;
		}
		/**
		 * Resets console output string, console output
		 * string is being built by consolePrintln(), consolePrint().
		 *
		 * @see mXparser.#consolePrint(Object)
		 * @see mXparser.#consolePrintln(Object)
		 * @see mXparser.#consolePrintln();
		 * @see mXparser.#resetConsoleOutput();
		 */
		public static void resetConsoleOutput() {
			CONSOLE_OUTPUT = "";
		}
		/**
		 * Returns console output string, console output string
		 * is being built by consolePrintln(), consolePrint().
		 *
		 * @return Console output string
		 *
		 * @see mXparser.#consolePrint(Object)
		 * @see mXparser.#consolePrintln(Object)
		 * @see mXparser.#consolePrintln();
		 * @see mXparser.#resetConsoleOutput();
		 */
		public static String getConsoleOutput() {
			return CONSOLE_OUTPUT;
		}
		/**
		 * Function used to introduce some compatibility
		 * between JAVA and C# while regexp matching.
		 *
		 * @param str         String
		 * @param pattern     Pattern (regexp)
		 *
		 * @return            True if pattern matches entirely, False otherwise
		 */
		internal static bool regexMatch(String str, String pattern){
			return Regex.IsMatch(str, "^(" + pattern + ")$");
		}
		/**
		 * License info.
		 */
		public const String LICENSE =
			"                      mXparser - version " + VERSION + "\n" +
			"         A flexible mathematical eXpressions parser for C#.\n" +
			"                   (port from mXparser for JAVA)\n" +
			"\n" +
			"You may use this software under the condition of Simplified BSD License:\n" +
			"\n" +
			"Copyright 2010-2015 MARIUSZ GROMADA. All rights reserved.\n" +
			"\n" +
			"Redistribution and use in source and binary forms, with or without modification, are\n" +
			"permitted provided that the following conditions are met:\n" +
			"\n" +
			"   1. Redistributions of source code must retain the above copyright notice, this list of\n" +
			"      conditions and the following disclaimer.\n" +
			"\n" +
			"   2. Redistributions in binary form must reproduce the above copyright notice, this list\n" +
			"      of conditions and the following disclaimer in the documentation and/or other materials\n" +
			"      provided with the distribution.\n" +
			"\n" +
			"THIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA ``AS IS'' AND ANY EXPRESS OR IMPLIED\n" +
			"WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND\n" +
			"FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL MARIUSZ GROMADA OR\n" +
			"CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR\n" +
			"CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR\n" +
			"SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON\n" +
			"ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING\n" +
			"NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF\n" +
			"ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n" +
			"\n" +
			"The views and conclusions contained in the software and documentation are those of the\n" +
			"authors and should not be interpreted as representing official policies, either expressed\n" +
			"or implied, of MARIUSZ GROMADA.\n" +
			"\n" +
			"If you have any questions/bugs feel free to contact:\n" +
			"\n" +
			"    Mariusz Gromada\n" +
			"    mariusz.gromada@mathspace.pl\n" +
			"    http://mathspace.plt/\n" +
			"    http://mathparser.org/\n" +
			"    http://github.com/mariuszgromada/MathParser.org-mXparser\n" +
			"    http://mariuszgromada.github.io/MathParser.org-mXparser/\n" +
			"    http://mxparser.sourceforge.net/\n"
			;
		public static void wait(int n) {
			long t0, t1;
			t0 = DateTime.Now.Millisecond;
			do {
				t1 = DateTime.Now.Millisecond;
			} while (t1 - t0 < 1000);
		}
	}
	/*=================================================
	 *
	 * Package level classes and interfaces
	 *
	 *=================================================
	 */
	/**
	 * Package level class for retriving calculus parameters
	 * Holds params number and partameter string
	 */
	internal class FunctionParameter
	{
		/**
		 *
		 */
		internal List<Token> tokens;
		/**
		 *
		 */
		internal String paramStr;
		internal int fromIndex;
		internal int toIndex;
		/**
		 *
		 * @param paramStr
		 * @param parametersNumber
		 */
		internal FunctionParameter(List<Token> tokens,
				String paramStr,
				int fromIndex,
				int toIndex)
		{
			this.tokens = tokens;
			this.paramStr = paramStr;
			this.fromIndex = fromIndex;
			this.toIndex = toIndex;
		}
	}
	/**
	 * Package level class
	 *
	 */
	internal class ArgumentParameter
	{
		internal Argument argument;
		internal double initialValue;
		internal int initialType;
		internal int presence;
		internal int index;
		internal ArgumentParameter()
		{
			argument = null;
			initialValue = Double.NaN;
			initialType = Const.NaN;
			presence = Expression.NOT_FOUND;
		}
	}
	/**
	 * Base class prepresenting key words knwon by the parsere
	 */
	internal class KeyWord
	{
		internal String wordString;
		internal int wordId;
		internal int wordTypeId;
		internal String description;
		internal KeyWord()
		{
			wordString = "";
			wordId = Const.NaN;
			wordTypeId = Const.NaN;
			description = "";
		}
		/**
		 * Constructor - creates key words form wordStrin wordId
		 * and wordTypId
		 *
		 * @param wordString   the word string (refere to below interfaces)
		 * @param wordId       the word identifier (refere to below interfaces)
		 * @param wordTypeId   the word type (refere to below interfaces)
		 */
		internal KeyWord(String wordString, int wordId, int wordTypeId)
		{
			this.wordString = wordString;
			this.wordId = wordId;
			this.wordTypeId = wordTypeId;
		}
		internal KeyWord(String wordString, String description, int wordId, int wordTypeId)
		{
			this.wordString = wordString;
			this.wordId = wordId;
			this.wordTypeId = wordTypeId;
			this.description = description;
		}
	}
	/**
	 * Internal token class
	 * which is used with stack while
	 * evaluation of tokens levels
	 */
	internal class TokenStackElement
	{
		internal int tokenIndex;
		internal int tokenId;
		internal int tokenTypeId;
		internal int tokenLevel;
		internal bool precedingFunction;
	}
	internal class SyntaxStackElement
	{
		internal String tokenStr;
		internal int tokenLevel;
		internal SyntaxStackElement(String tokenStr, int tokenLevel)
		{
			this.tokenStr = tokenStr;
			this.tokenLevel = tokenLevel;
		}
	}
	/**
	 * Token - base class for tokens definition
	 */
	internal class Token {
		/**
		 * String token
		 */
		internal String tokenStr;
		/**
		 * Key word string (if matched)
		 *
		 * Please refer to below interfaces
		 *    Operator
		 *    Function1Arg
		 *    Function2Arg
		 *    Function3Arg
		 *    BinaryRelation
		 *    Const
		 *    ParserSymbol
		 */
		internal String keyWord;
		/**
		 * Partition identifier
		 *
		 * Please refer to below interfaces
		 *    Operator
		 *    Function1Arg
		 *    Function2Arg
		 *    Function3Arg
		 *    BinaryRelation
		 *    Const
		 *    ParserSymbol
		 */
		internal int tokenId;
		/**
		 * Partition type
		 *
		 * Please refer to below interfaces
		 *    Operator
		 *    Function1Arg
		 *    Function2Arg
		 *    Function3Arg
		 *    BinaryRelation
		 *    Const
		 *    ParserSymbol
		 */
		internal int tokenTypeId;
		/**
		 * Partition level
		 */
		internal int tokenLevel;
		/**
		 * Partition value if number
		 */
		internal double tokenValue;
		/**
		 * Default constructor
		 */
		internal Token() {
			tokenStr = "";
			keyWord = "";
			tokenId = Const.NaN;
			tokenTypeId = Const.NaN;
			tokenLevel = Const.NaN;
			tokenValue = Double.NaN;
		}
		public Token clone() {
			Token token = new Token();
			token.keyWord = keyWord;
			token.tokenStr = tokenStr;
			token.tokenId = tokenId;
			token.tokenLevel = tokenLevel;
			token.tokenTypeId = tokenTypeId;
			token.tokenValue = tokenValue;
			return token;
		}
	}
	/*
	 * ---------------------------------------------------------
	 * Comparators for sorting
	 * ---------------------------------------------------------
	 */
	/**
	 * Comparator for key word list sorting by key word string.
	 * This king of sorting is used while checking the syntax
	 * (duplicated key word error)
	 */
	class KwStrComparator : IComparer<KeyWord>
	{
		/**
		 *
		 */
		public int Compare(KeyWord kw1, KeyWord kw2)
		{
			String s1 = kw1.wordString;
			String s2 = kw2.wordString;
			return s1.CompareTo(s2);
		}
	}
	/**
	 * Comparator for key word list sorting by
	 * descending key word length
	 * .
	 * This king of sorting is used while tokenizing
	 * (best match)
	 */
	class DescKwLenComparator : IComparer<KeyWord>
	{
		/**
		 *
		 */
		public int Compare(KeyWord kw1, KeyWord kw2)
		{
			int l1 = kw1.wordString.Length;
			int l2 = kw2.wordString.Length;
			return l2 - l1;
		}
	}
	/**
	 * Comparator for key word list sorting by
	 * type of the key word
	 *
	 */
	class KwTypeComparator : IComparer<KeyWord>
	{
		/**
		 *
		 */
		public int Compare(KeyWord kw1, KeyWord kw2)
		{
			int t1 = kw1.wordTypeId * 1000 + kw1.wordId;
			int t2 = kw2.wordTypeId * 1000 + kw2.wordId;
			return t1 - t2;
		}
	}
	/*
	 * ---------------------------------------------------------
	 * Grouping constants by interfaces
	 * ---------------------------------------------------------
	 */
	/**
	 * ParserSymbol
	 *
	 * Identifiers and strings (words) definition.
	 * Used mailny by the addParserKeywords()
	 */
	internal sealed class ParserSymbol
	{
		internal const String Digits = "([0-9]+)";
		internal const String HexDigits = "(([0-9]|[A-F])+)";
		internal const String Exp = "[eE][+-]?" + Digits;
		internal const String fpRegex =
				("[\\x00-\\x20]*" +  // Optional leading "whitespace"
				"[+-]?(" + // Optional sign character
				"NaN|" +           // "NaN" string
				"Infinity|" +      // "Infinity" string
				"(((" + Digits + "(\\.)?(" + Digits + "?)(" + Exp + ")?)|" +
				"(\\.(" + Digits + ")(" + Exp + ")?)|" +
				"((" +
				// 0[xX] HexDigits ._opt BinaryExponent FloatTypeSuffix_opt
				"(0[xX]" + HexDigits + "(\\.)?)|" +
				// 0[xX] HexDigits_opt . HexDigits BinaryExponent FloatTypeSuffix_opt
				"(0[xX]" + HexDigits + "?(\\.)" + HexDigits + ")" +
				")[pP][+-]?" + Digits + "))" +
				"[fFdD]?))" +
				"[\\x00-\\x20]*");
		internal const String NOT_NUM = "[^0-9.-]";
		internal const String TWO_DOT = "[0-9]*[.][0-9]*[.][0-9]*";
		internal const String TWO_MIN = "[0-9]*[-][0-9]*[-][0-9]*";
		internal const String REAL = "^([-]|[.]|[-.]|[0-9])[0-9]*[.]*[0-9]+$";
		internal const String INTEGER = "^([-])[0-9]+$";
		internal const String NUMBER = fpRegex;
		internal const String nameOnlyTokenRegExp = "([a-zA-Z_])+([a-zA-Z0-9_])*";
		internal const String nameTokenRegExp = "(\\s)*" + nameOnlyTokenRegExp + "(\\s)*";
		internal const String paramsTokenRegeExp = "(\\s)*\\(" + "(" + nameTokenRegExp + ",(\\s)*)*" + nameTokenRegExp + "\\)(\\s)*";
		internal const String constArgDefStrRegExp = nameTokenRegExp + "=" + "(\\s)*(.)+(\\s)*";
		internal const String functionDefStrRegExp = nameTokenRegExp + paramsTokenRegeExp + "=" + "(\\s)*(.)+(\\s)*";
		internal const String function1ArgDefStrRegExp = nameTokenRegExp + "(\\s)*\\(" + nameTokenRegExp + "(\\s)*\\)(\\s)*" + "=" + "(\\s)*(.)+(\\s)*";
		internal const int TYPE_ID = 11;
		internal const int LEFT_PARENTHESES_ID = 1;
		internal const int RIGHT_PARENTHESES_ID = 2;
		internal const int COMMA_ID = 3;
		internal const int NUMBER_ID = 1;
		internal const int NUMBER_TYPE_ID = 0;
		internal const String LEFT_PARENTHESES_STR = "(";
		internal const String RIGHT_PARENTHESES_STR = ")";
		internal const String COMMA_STR = ",";
		internal const String SEMI_STR = ";";
		internal const String NUMBER_STR = "_num_";
		internal const String NUMBER_REG_EXP = NUMBER;
		internal const String LEFT_PARENTHESES_DESC = "left parentheses";
		internal const String RIGHT_PARENTHESES_DESC = "right parentheses";
		internal const String COMMA_DESC = "comma (function parameters)";
		internal const String SEMI_DESC = "semicolon (function parameters)";
		internal const String NUMBER_DESC = "decimal number";
		internal const String NUMBER_REG_DESC = "regullar expression for decimal numbers";
	}
	/**
	 * Operator
	 *
	 * Identifiers and strings (words) definition.
	 * Used mailny by the addParserKeywords()
	 */
	internal sealed class Operator
	{
		internal const int TYPE_ID = 1;
		internal const int PLUS_ID = 1;
		internal const int MINUS_ID = 2;
		internal const int MULTIPLY_ID = 3;
		internal const int DIVIDE_ID = 4;
		internal const int POWER_ID = 5;
		internal const int FACT_ID = 6;
		internal const int MOD_ID = 7;
		internal const String PLUS_STR = "+";
		internal const String MINUS_STR = "-";
		internal const String MULTIPLY_STR = "*";
		internal const String DIVIDE_STR = "/";
		internal const String POWER_STR = "^";
		internal const String FACT_STR = "!";
		internal const String MOD_STR = "%";
		internal const String PLUS_DESC = "addition";
		internal const String MINUS_DESC = "subtraction";
		internal const String MULTIPLY_DESC = "multiplication";
		internal const String DIVIDE_DESC = "division";
		internal const String POWER_DESC = "exponentiation";
		internal const String FACT_DESC = "factorial";
		internal const String MOD_DESC = "modulo function";
	}
	internal sealed class BooleanOperator
	{
		internal const int TYPE_ID = 2;
		internal const int AND_ID = 1;
		internal const int NAND_ID = 2;
		internal const int OR_ID = 3;
		internal const int NOR_ID = 4;
		internal const int XOR_ID = 5;
		internal const int IMP_ID = 6;
		internal const int CIMP_ID = 7;
		internal const int NIMP_ID = 8;
		internal const int CNIMP_ID = 9;
		internal const int EQV_ID = 10;
		internal const int NEG_ID = 11;
		internal const String NEG_STR = "~";
		internal const String AND_STR = "&";
		internal const String AND1_STR = "&&";
		internal const String AND2_STR = "/\\";
		internal const String NAND_STR = NEG_STR + AND_STR;
		internal const String NAND1_STR = NEG_STR + AND1_STR;
		internal const String NAND2_STR = NEG_STR + AND2_STR;
		internal const String OR_STR = "|";
		internal const String OR1_STR = "||";
		internal const String OR2_STR = "\\/";
		internal const String NOR_STR = NEG_STR + OR_STR;
		internal const String NOR1_STR = NEG_STR + OR1_STR;
		internal const String NOR2_STR = NEG_STR + OR2_STR;
		internal const String XOR_STR = "(+)";
		internal const String IMP_STR = "->";
		internal const String CIMP_STR = "<-";
		internal const String NIMP_STR = "-/>";
		internal const String CNIMP_STR = "</-";
		internal const String EQV_STR = "<->";
		internal const String AND_DESC = "logical conjunction (AND)";
		internal const String OR_DESC = "logical disjunction (OR)";
		internal const String NEG_DESC = "negation";
		internal const String NAND_DESC = "NAND - Sheffer stroke";
		internal const String NOR_DESC = "logical NOR";
		internal const String XOR_DESC = "exclusive or (XOR)";
		internal const String IMP_DESC = "implication (IMP)";
		internal const String CIMP_DESC = "converse implication (CIMP)";
		internal const String NIMP_DESC = "material nonimplication (NIMP)";
		internal const String CNIMP_DESC = "converse nonimplication (CNIMP)";
		internal const String EQV_DESC = "logical biconditional (EQV)";
	}
	/**
	 * BinaryRelation
	 *
	 * Identifiers and strings (words) definition.
	 * Used mailny by the addParserKeywords()
	 */
	internal sealed class BinaryRelation
	{
		internal const int TYPE_ID = 3;
		internal const int EQ_ID = 1;
		internal const int NEQ_ID = 2;
		internal const int LT_ID = 3;
		internal const int GT_ID = 4;
		internal const int LEQ_ID = 5;
		internal const int GEQ_ID = 6;
		internal const String EQ_STR = "=";
		internal const String EQ1_STR = "==";
		internal const String NEQ_STR = "<>";
		internal const String NEQ1_STR = "~=";
		internal const String NEQ2_STR = "!=";
		internal const String LT_STR = "<";
		internal const String GT_STR = ">";
		internal const String LEQ_STR = "<=";
		internal const String GEQ_STR = ">=";
		internal const String EQ_DESC = "equality";
		internal const String NEQ_DESC = "inequation";
		internal const String LT_DESC = "lower than";
		internal const String GT_DESC = "greater than";
		internal const String LEQ_DESC = "lower or equal";
		internal const String GEQ_DESC = "greater or equal";
	}
	/**
	 * Function1Arg
	 *
	 * Identifiers and strings (words) definition.
	 * Used mailny by the addParserKeywords()
	 */
	internal sealed class Function1Arg
	{
		internal const int TYPE_ID = 4;
		internal const int SIN_ID = 1;
		internal const int COS_ID = 2;
		internal const int TAN_ID = 3;
		internal const int CTAN_ID = 4;
		internal const int SEC_ID = 5;
		internal const int COSEC_ID = 6;
		internal const int ASIN_ID = 7;
		internal const int ACOS_ID = 8;
		internal const int ATAN_ID = 9;
		internal const int ACTAN_ID = 10;
		internal const int LN_ID = 11;
		internal const int LOG2_ID = 12;
		internal const int LOG10_ID = 13;
		internal const int RAD_ID = 14;
		internal const int EXP_ID = 15;
		internal const int SQRT_ID = 16;
		internal const int SINH_ID = 17;
		internal const int COSH_ID = 18;
		internal const int TANH_ID = 19;
		internal const int COTH_ID = 20;
		internal const int SECH_ID = 21;
		internal const int CSCH_ID = 22;
		internal const int DEG_ID = 23;
		internal const int ABS_ID = 24;
		internal const int SGN_ID = 25;
		internal const int FLOOR_ID = 26;
		internal const int CEIL_ID = 27;
		internal const int NOT_ID = 29;
		internal const int ARSINH_ID = 30;
		internal const int ARCOSH_ID = 31;
		internal const int ARTANH_ID = 32;
		internal const int ARCOTH_ID = 33;
		internal const int ARSECH_ID = 34;
		internal const int ARCSCH_ID = 35;
		internal const int SA_ID = 36;
		internal const int SINC_ID = 37;
		internal const int BELL_NUMBER_ID = 38;
		internal const int LUCAS_NUMBER_ID = 39;
		internal const int FIBONACCI_NUMBER_ID = 40;
		internal const int HARMONIC_NUMBER_ID = 41;
		internal const String SIN_STR = "sin";
		internal const String COS_STR = "cos";
		internal const String TAN_STR = "tan";
		internal const String TG_STR = "tg";
		internal const String CTAN_STR = "ctan";
		internal const String CTG_STR = "ctg";
		internal const String COT_STR = "cot";
		internal const String SEC_STR = "sec";
		internal const String COSEC_STR = "cosec";
		internal const String CSC_STR = "csc";
		internal const String ASIN_STR = "asin";
		internal const String ARSIN_STR = "arsin";
		internal const String ARCSIN_STR = "arcsin";
		internal const String ACOS_STR = "acos";
		internal const String ARCOS_STR = "arcos";
		internal const String ARCCOS_STR = "arccos";
		internal const String ATAN_STR = "atan";
		internal const String ARCTAN_STR = "arctan";
		internal const String ATG_STR = "atg";
		internal const String ARCTG_STR = "arctg";
		internal const String ACTAN_STR = "actan";
		internal const String ARCCTAN_STR = "arcctan";
		internal const String ACTG_STR = "actg";
		internal const String ARCCTG_STR = "arcctg";
		internal const String ACOT_STR = "acot";
		internal const String ARCCOT_STR = "arccot";
		internal const String LN_STR = "ln";
		internal const String LOG2_STR = "log2";
		internal const String LOG10_STR = "log10";
		internal const String RAD_STR = "rad";
		internal const String EXP_STR = "exp";
		internal const String SQRT_STR = "sqrt";
		internal const String SINH_STR = "sinh";
		internal const String COSH_STR = "cosh";
		internal const String TANH_STR = "tanh";
		internal const String TGH_STR = "tgh";
		internal const String CTANH_STR = "ctanh";
		internal const String COTH_STR = "coth";
		internal const String CTGH_STR = "ctgh";
		internal const String SECH_STR = "sech";
		internal const String CSCH_STR = "csch";
		internal const String COSECH_STR = "cosech";
		internal const String DEG_STR = "deg";
		internal const String ABS_STR = "abs";
		internal const String SGN_STR = "sgn";
		internal const String FLOOR_STR = "floor";
		internal const String CEIL_STR = "ceil";
		internal const String NOT_STR = "not";
		internal const String ASINH_STR = "asinh";
		internal const String ARSINH_STR = "arsinh";
		internal const String ARCSINH_STR = "arcsinh";
		internal const String ACOSH_STR = "acosh";
		internal const String ARCOSH_STR = "arcosh";
		internal const String ARCCOSH_STR = "arccosh";
		internal const String ATANH_STR = "atanh";
		internal const String ARCTANH_STR = "arctanh";
		internal const String ATGH_STR = "atgh";
		internal const String ARCTGH_STR = "arctgh";
		internal const String ACTANH_STR = "actanh";
		internal const String ARCCTANH_STR = "arcctanh";
		internal const String ACOTH_STR = "acoth";
		internal const String ARCOTH_STR = "arcoth";
		internal const String ARCCOTH_STR = "arccoth";
		internal const String ACTGH_STR = "actgh";
		internal const String ARCCTGH_STR = "arcctgh";
		internal const String ASECH_STR = "asech";
		internal const String ARSECH_STR = "arsech";
		internal const String ARCSECH_STR = "arcsech";
		internal const String ACSCH_STR = "acsch";
		internal const String ARCSCH_STR = "arcsch";
		internal const String ARCCSCH_STR = "arccsch";
		internal const String ACOSECH_STR = "acosech";
		internal const String ARCOSECH_STR = "arcosech";
		internal const String ARCCOSECH_STR = "arccosech";
		internal const String SA_STR = "sinc";
		internal const String SA1_STR = "Sa";
		internal const String SINC_STR = "Sinc";
		internal const String BELL_NUMBER_STR = "Bell";
		internal const String LUCAS_NUMBER_STR = "Luc";
		internal const String FIBONACCI_NUMBER_STR = "Fib";
		internal const String HARMONIC_NUMBER_STR = "harm";
		internal const String SIN_DESC = "trigonometric sine function";
		internal const String COS_DESC = "trigonometric cosine function";
		internal const String TAN_DESC = "trigonometric tangent function";
		internal const String CTAN_DESC = "trigonometric cotangent function";
		internal const String SEC_DESC = "trigonometric secant function";
		internal const String COSEC_DESC = "trigonometric cosecant function";
		internal const String ASIN_DESC = "inverse trigonometric sine function";
		internal const String ACOS_DESC = "inverse trigonometric cosine function";
		internal const String ATAN_DESC = "inverse trigonometric tangent function";
		internal const String ACTAN_DESC = "inverse trigonometric cotangent function";
		internal const String LN_DESC = "natural logarithm function (base e)";
		internal const String LOG2_DESC = "binary logarithm function (base 2)";
		internal const String LOG10_DESC = "common logarithm function (base 10)";
		internal const String RAD_DESC = "degrees to radians function";
		internal const String EXP_DESC = "exponential function";
		internal const String SQRT_DESC = "squre root function";
		internal const String SINH_DESC = "hyperbolic sine function";
		internal const String COSH_DESC = "hyperbolic cosine function";
		internal const String TANH_DESC = "hyperbolic tangent function";
		internal const String COTH_DESC = "hyperbolic cotangent function";
		internal const String SECH_DESC = "hyperbolic secant function";
		internal const String CSCH_DESC = "hyperbolic cosecant function";
		internal const String DEG_DESC = "radians to degrees function";
		internal const String ABS_DESC = "absolut value function";
		internal const String SGN_DESC = "signum function";
		internal const String FLOOR_DESC = "floor function";
		internal const String CEIL_DESC = "ceiling function";
		internal const String NOT_DESC = "negation function";
		internal const String ARSINH_DESC = "inverse hyperbolic sine function";
		internal const String ARCOSH_DESC = "inverse hyperbolic cosine function";
		internal const String ARTANH_DESC = "inverse hyperbolic tangent function";
		internal const String ARCOTH_DESC = "inverse hyperbolic cotangent function";
		internal const String ARSECH_DESC = "inverse hyperbolic secant function";
		internal const String ARCSCH_DESC = "inverse hyperbolic cosecant function";
		internal const String SA_DESC = "sinc function (normalized)";
		internal const String SINC_DESC = "sinc function (unnormalized)";
		internal const String BELL_NUMBER_DESC = "Bell number";
		internal const String LUCAS_NUMBER_DESC = "Lucas number";
		internal const String FIBONACCI_NUMBER_DESC = "Fionacci number";
		internal const String HARMONIC_NUMBER_DESC = "Harmonic number";
	}
	/**
	 * Function2Arg
	 *
	 * Identifiers and strings (words) definition.
	 * Used mailny by the addParserKeywords()
	 */
	internal sealed class Function2Arg
	{
		internal const int TYPE_ID = 5;
		internal const int LOG_ID = 1;
		internal const int MOD_ID = 2;
		internal const int BINOM_COEFF_ID = 3;
		internal const int BERNOULLI_NUMBER_ID = 4;
		internal const int STIRLING1_NUMBER_ID = 5;
		internal const int STIRLING2_NUMBER_ID = 6;
		internal const int WORPITZKY_NUMBER_ID = 7;
		internal const int EULER_NUMBER_ID = 8;
		internal const int KRONECKER_DELTA_ID = 9;
		internal const int EULER_POLYNOMIAL_ID = 10;
		internal const int HARMONIC_NUMBER_ID = 11;
		internal const String LOG_STR = "log";
		internal const String MOD_STR = "mod";
		internal const String BINOM_COEFF_STR = "C";
		internal const String BERNOULLI_NUMBER_STR = "Bern";
		internal const String STIRLING1_NUMBER_STR = "Stirl1";
		internal const String STIRLING2_NUMBER_STR = "Stirl2";
		internal const String WORPITZKY_NUMBER_STR = "Worp";
		internal const String EULER_NUMBER_STR = "Euler";
		internal const String KRONECKER_DELTA_STR = "KDelta";
		internal const String EULER_POLYNOMIAL_STR = "EulerPol";
		internal const String HARMONIC_NUMBER_STR = "Harm";
		internal const String LOG_DESC = "logarithm function";
		internal const String MOD_DESC = "modulo function";
		internal const String BINOM_COEFF_DESC = "binomial coefficient function";
		internal const String BERNOULLI_NUMBER_DESC = "Bernoulli numbers";
		internal const String STIRLING1_NUMBER_DESC = "Stirling numbers of the first kind";
		internal const String STIRLING2_NUMBER_DESC = "Stirling numbers of the second kind";
		internal const String WORPITZKY_NUMBER_DESC = "Worpitzky number";
		internal const String EULER_NUMBER_DESC = "Euler number";
		internal const String KRONECKER_DELTA_DESC = "Kronecker delta";
		internal const String EULER_POLYNOMIAL_DESC = "EulerPol";
		internal const String HARMONIC_NUMBER_DESC = "Harmonic number";
	}
	/**
	 * Function3Arg
	 *
	 * Identifiers and strings (words) definition.
	 * Used mailny by the addParserKeywords()
	 */
	internal sealed class Function3Arg
	{
		internal const int TYPE_ID = 6;
		internal const int IF_CONDITION_ID = 1;
		internal const int IF_ID = 2;
		internal const int CHI_ab_ID = 3;
		internal const int CHI_AB_ID = 4;
		internal const int CHI_Ab_ID = 5;
		internal const int CHI_aB_ID = 6;
		internal const String IF_STR = "if";
		internal const String CHI_ab_STR = "chi";
		internal const String CHI_AB_STR = "CHi";
		internal const String CHI_Ab_STR = "Chi";
		internal const String CHI_aB_STR = "cHi";
		internal const String IF_DESC = "if function ( if(con; if_true; if_false) )";
		internal const String CHI_ab_DESC = "Characteristic function for x in (a;b) - chi(x; a; b)";
		internal const String CHI_AB_DESC = "Characteristic function for x in [a;b] - CHi(x; a; b)";
		internal const String CHI_Ab_DESC = "Characteristic function for x in [a;b) - Chi(x; a; b)";
		internal const String CHI_aB_DESC = "Characteristic function for x in (a;b] - cHi(x; a; b)";
	}
	internal sealed class SpecialFunction
	{
		internal const int TYPE_ID = 7;
		internal const int IFF_ID = 1;
		internal const int MIN_ID = 2;
		internal const int MAX_ID = 3;
		internal const int CONT_FRAC_ID = 4;
		internal const int CONT_POL_ID = 5;
		internal const int GCD_ID
			= 6;
		internal const int LCM_ID = 7;
		internal const String IFF_STR = "iff";
		internal const String MIN_STR = "min";
		internal const String MAX_STR = "max";
		internal const String CONT_FRAC_STR = "ConFrac";
		internal const String CONT_POL_STR = "ConPol";
		internal const String GCD_STR = "gcd";
		internal const String LCM_STR = "lcm";
		internal const String IFF_DESC = "if function ( iff(con_1; if_true_1_exp; ...; con_n; if_true_n_exp) )";
		internal const String MIN_DESC = "minimum function: min(a;b;c;...)";
		internal const String MAX_DESC = "maximum function: max(a;b;c;...)";
		internal const String CONT_FRAC_DESC = "Continued fraction: ConFrac(a;b;c;...)";
		internal const String CONT_POL_DESC = "Continued polynomial: ConPol(a;b;c;...)";
		internal const String GCD_DESC = "Greatest common divisor: gcd(a;b;c;...)";
		internal const String LCM_DESC = "Least common multiple: lcm(a;b;c;...)";
	}
	/**
	 * Calculus
	 *
	 * Identifiers and strings (words) definition.
	 * Used mailny by the addParserKeywords()
	 */
	internal sealed class Calculus
	{
		internal const int TYPE_ID = 8;
		internal const int SUM_ID = 1;
		internal const int PROD_ID = 3;
		internal const int INT_ID = 5;
		internal const int DER_ID = 6;
		internal const int DER_LEFT_ID = 7;
		internal const int DER_RIGHT_ID = 8;
		internal const int DERN_ID = 9;
		internal const int FORW_DIFF_ID = 10;
		internal const int BACKW_DIFF_ID = 11;
		internal const String SUM_STR = "sum";
		internal const String PROD_STR = "prod";
		internal const String INT_STR = "int";
		internal const String DER_STR = "der";
		internal const String DER_LEFT_STR = "der-";
		internal const String DER_RIGHT_STR = "der+";
		internal const String DERN_STR = "dern";
		internal const String FORW_DIFF_STR = "diff";
		internal const String BACKW_DIFF_STR = "difb";
		internal const String SUM_DESC = "summation operator (SIGMA) sum(i; from; to; f(i;...))";
		internal const String PROD_DESC = "product operator (PI) prod(i; from; to; f(i;...))";
		internal const String INT_DESC = "definite integral operator ( int(f(x;...); x; a; b) )";
		internal const String DER_DESC = "derivative operator ( der(f(x;...); x) ) ";
		internal const String DER_LEFT_DESC = "left derivative operator ( der-(f(x;...); x) ) ";
		internal const String DER_RIGHT_DESC = "right derivative operator ( der+(f(x;...); x) ) ";
		internal const String DERN_DESC = "n-th derivative operator ( dern(f(x;...); x) ) ";
		internal const String FORW_DIFF_DESC = "forward difference operator";
		internal const String BACKW_DIFF_DESC = "backward difference operator";
	}
	/**
	 * Const
	 *
	 * Identifiers and strings (words) definition.
	 * Used mailny by the addParserKeywords()
	 */
	internal sealed class Const
	{
		internal const int TYPE_ID = 10;
		internal const int PI_ID = 1;
		internal const int EULER_ID = 2;
		internal const int EULER_MASCHERONI_ID = 3;
		internal const int GOLDEN_RATIO_ID = 4;
		internal const int PLASTIC_ID = 5;
		internal const int EMBREE_TREFETHEN_ID = 6;
		internal const int FEIGENBAUM_DELTA_ID = 7;
		internal const int FEIGENBAUM_ALFA_ID = 8;
		internal const int TWIN_PRIME_ID = 9;
		internal const int MEISSEL_MERTEENS_ID = 10;
		internal const int BRAUN_TWIN_PRIME_ID = 11;
		internal const int BRAUN_PRIME_QUADR_ID = 12;
		internal const int BRUIJN_NEWMAN_ID = 13;
		internal const int CATALAN_ID = 14;
		internal const int LANDAU_RAMANUJAN_ID = 15;
		internal const int VISWANATH_ID = 16;
		internal const int LEGENDRE_ID = 17;
		internal const int RAMANUJAN_SOLDNER_ID = 18;
		internal const int ERDOS_BORWEIN_ID = 19;
		internal const int BERNSTEIN_ID = 20;
		internal const int GAUSS_KUZMIN_WIRSING_ID = 21;
		internal const int HAFNER_SARNAK_MCCURLEY_ID = 22;
		internal const int GOLOMB_DICKMAN_ID = 23;
		internal const int CAHEN_ID = 24;
		internal const int LAPLACE_LIMIT_ID = 25;
		internal const int ALLADI_GRINSTEAD_ID = 26;
		internal const int LENGYEL_ID = 27;
		internal const int LEVY_ID = 28;
		internal const int APERY_ID = 29;
		internal const int MILLS_ID = 30;
		internal const int BACKHOUSE_ID = 31;
		internal const int PORTER_ID = 32;
		internal const int LIEB_QUARE_ICE_ID = 33;
		internal const int NIVEN_ID = 34;
		internal const int SIERPINSKI_ID = 35;
		internal const int KHINCHIN_ID = 36;
		internal const int FRANSEN_ROBINSON_ID = 37;
		internal const int LANDAU_ID = 38;
		internal const int PARABOLIC_ID = 39;
		internal const int OMEGA_ID = 40;
		internal const int MRB_ID = 41;
		internal const int NaN = -1;
		internal const String PI_STR = "pi";
		internal const String EULER_STR = "e";
		internal const String EULER_MASCHERONI_STR = "[g]";
		internal const String GOLDEN_RATIO_STR = "[p]";
		internal const String PLASTIC_STR = "[r]";
		internal const String EMBREE_TREFETHEN_STR = "[B*]";
		internal const String FEIGENBAUM_DELTA_STR = "[D]";
		internal const String FEIGENBAUM_ALFA_STR = "[a]";
		internal const String TWIN_PRIME_STR = "[C2]";
		internal const String MEISSEL_MERTEENS_STR = "[M1]";
		internal const String BRAUN_TWIN_PRIME_STR = "[B2]";
		internal const String BRAUN_PRIME_QUADR_STR = "[B4]";
		internal const String BRUIJN_NEWMAN_STR = "[L]";
		internal const String CATALAN_STR = "[K]";
		internal const String LANDAU_RAMANUJAN_STR = "[K*]";
		internal const String VISWANATH_STR = "[K.]";
		internal const String LEGENDRE_STR = "[B'L]";
		internal const String RAMANUJAN_SOLDNER_STR = "[m]";
		internal const String ERDOS_BORWEIN_STR = "[EB]";
		internal const String BERNSTEIN_STR = "[B]";
		internal const String GAUSS_KUZMIN_WIRSING_STR = "[l]";
		internal const String HAFNER_SARNAK_MCCURLEY_STR = "[s]";
		internal const String GOLOMB_DICKMAN_STR = "[lm]";
		internal const String CAHEN_STR = "[C]";
		internal const String LAPLACE_LIMIT_STR = "[Ll]";
		internal const String ALLADI_GRINSTEAD_STR = "[AG]";
		internal const String LENGYEL_STR = "[L*]";
		internal const String LEVY_STR = "[L.]";
		internal const String APERY_STR = "[Dz3]";
		internal const String MILLS_STR = "[T]";
		internal const String BACKHOUSE_STR = "[Bh]";
		internal const String PORTER_STR = "[Pt]";
		internal const String LIEB_QUARE_ICE_STR = "[L2]";
		internal const String NIVEN_STR = "[Nv]";
		internal const String SIERPINSKI_STR = "[Ks]";
		internal const String KHINCHIN_STR = "[Kh]";
		internal const String FRANSEN_ROBINSON_STR = "[F]";
		internal const String LANDAU_STR = "[La]";
		internal const String PARABOLIC_STR = "[P2]";
		internal const String OMEGA_STR = "[O]";
		internal const String MRB_STR = "[M]";
		internal const String PI_DESC = "Pi, Archimedes' constant or Ludolph's number";
		internal const String EULER_DESC = "Napier's constant, or Euler's number, base of Natural logarithm";
		internal const String EULER_MASCHERONI_DESC = "Euler-Mascheroni constant";
		internal const String GOLDEN_RATIO_DESC = "Golden ratio";
		internal const String PLASTIC_DESC = "Plastic constant";
		internal const String EMBREE_TREFETHEN_DESC = "Embree-Trefethen constant";
		internal const String FEIGENBAUM_DELTA_DESC = "Feigenbaum constant alfa";
		internal const String FEIGENBAUM_ALFA_DESC = "Feigenbaum constant delta";
		internal const String TWIN_PRIME_DESC = "Twin prime constant";
		internal const String MEISSEL_MERTEENS_DESC = "Meissel-Mertens constant";
		internal const String BRAUN_TWIN_PRIME_DESC = "Brun's constant for twin primes";
		internal const String BRAUN_PRIME_QUADR_DESC = "Brun's constant for prime quadruplets";
		internal const String BRUIJN_NEWMAN_DESC = "de Bruijn-Newman constant";
		internal const String CATALAN_DESC = "Catalan's constant";
		internal const String LANDAU_RAMANUJAN_DESC = "Landau-Ramanujan constant";
		internal const String VISWANATH_DESC = "Viswanath's constant";
		internal const String LEGENDRE_DESC = "Legendre's constant";
		internal const String RAMANUJAN_SOLDNER_DESC = "Ramanujan-Soldner constant";
		internal const String ERDOS_BORWEIN_DESC = "Erdos-Borwein constant";
		internal const String BERNSTEIN_DESC = "Bernstein's constant";
		internal const String GAUSS_KUZMIN_WIRSING_DESC = "Gauss-Kuzmin-Wirsing constant";
		internal const String HAFNER_SARNAK_MCCURLEY_DESC = "Hafner-Sarnak-McCurley constant";
		internal const String GOLOMB_DICKMAN_DESC = "Golomb-Dickman constant";
		internal const String CAHEN_DESC = "Cahen's constant";
		internal const String LAPLACE_LIMIT_DESC = "Laplace limit";
		internal const String ALLADI_GRINSTEAD_DESC = "Alladi-Grinstead constant";
		internal const String LENGYEL_DESC = "Lengyel's constant";
		internal const String LEVY_DESC = "Levy's constant";
		internal const String APERY_DESC = "Apery's constant";
		internal const String MILLS_DESC = "Mills' constant";
		internal const String BACKHOUSE_DESC = "Backhouse's constant";
		internal const String PORTER_DESC = "Porter's constant";
		internal const String LIEB_QUARE_ICE_DESC = "Lieb's square ice constant";
		internal const String NIVEN_DESC = "Niven's constant";
		internal const String SIERPINSKI_DESC = "Sierpinski's constant";
		internal const String KHINCHIN_DESC = "Khinchin's constant";
		internal const String FRANSEN_ROBINSON_DESC = "Fransen-Robinson constant";
		internal const String LANDAU_DESC = "Landau's constant";
		internal const String PARABOLIC_DESC = "Parabolic constant";
		internal const String OMEGA_DESC = "Omega constant";
		internal const String MRB_DESC = "MRB constant";
	}
	/*
	 * Package level class to be used
	 * while function, argument, constant definition
	 * using only one string, ie:
	 * Function "f(x,y) = sin(x) + cos(y)"
	 * Constant "a = 5/20"
	 */
	internal class HeadEqBody {
		internal String headStr;
		internal String bodyStr;
		internal int eqPos;
		internal List<Token> headTokens;
		internal bool definitionError;
		internal HeadEqBody(String definitionString) {
			char c;
			eqPos = 0;
			int matchStatus = mXparser.NOT_FOUND;
			definitionError = false;
			do {
				c = definitionString[eqPos];
				if (c == '=') matchStatus = mXparser.FOUND;
				else eqPos++;
			} while ((eqPos < definitionString.Length) && (matchStatus == mXparser.NOT_FOUND));
			if ((matchStatus == mXparser.FOUND) && (eqPos > 0) && (eqPos <= definitionString.Length - 2)) {
				headStr = definitionString.Substring(0, eqPos);
				bodyStr = definitionString.Substring(eqPos + 1);
				Expression headExpression = new Expression(headStr);
				headTokens = headExpression.getCopyOfInitialTokens();
			}
			else {
				definitionError = true;
				headStr = "";
				bodyStr = "";
				headTokens = null;
				eqPos = -1;
			}
		}
	}
}
