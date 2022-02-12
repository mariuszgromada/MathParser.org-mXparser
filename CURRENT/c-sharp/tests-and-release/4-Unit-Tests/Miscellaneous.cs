/*
 * @(#)Miscellaneous.cs        5.0.0    2022-02-12
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2022 MARIUSZ GROMADA. All rights reserved.
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
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */

using System;
using org.mariuszgromada.math.mxparser.mathcollection;

namespace org.mariuszgromada.math.mxparser.test {

    /**
     * Common tools for unit tests
     */
    internal class TestCommonTools {
        internal static void consolePrintOptionsMxparser(String prefix) {
            mXparser.consolePrintSettings(prefix);
        }

        internal static void consolePrintOptionsExpression(Expression testExp) {
            mXparser.consolePrintln("------------ OPTIONS AFTER ------------");
            mXparser.consolePrintln("getImpliedMultiplicationMode = " + testExp.getImpliedMultiplicationMode());
            mXparser.consolePrintln("getCanonicalExpressionString = " + testExp.getCanonicalExpressionString());
            mXparser.consolePrintSettings();
            mXparser.consolePrintln("getErrorMessage = " + testExp.getErrorMessage());
            mXparser.consolePrintln("checkLexSyntax = " + testExp.checkLexSyntax());
            mXparser.consolePrintln("checkSyntax = " + testExp.checkSyntax());
            mXparser.consolePrintln("getCopyOfInitialTokens = ");
            mXparser.consolePrintTokens(testExp.getCopyOfInitialTokens());
        }

        internal static void consolePrintTestStart(int testId, String testStr, String testType) {
            mXparser.consolePrintln();
            mXparser.consolePrintln("[" + testType +"/" + testId + "] ------------ TEST INIT: " + testStr);
            mXparser.consolePrintln("-- Options before");
            consolePrintOptionsMxparser("---- ");
            mXparser.consolePrint("[" + testType +"/" + testId + "] Starting test: " + testStr + " ...... ");
        }

        internal static void consolePrintTestExprStart(int testId, String testStr) {
            consolePrintTestStart(testId, testStr, "Expr");
        }

        internal static void consolePrintTestExprEnd(double calculatedValue, double expectedValue, bool testResult, Expression testExp) {
            mXparser.consolePrint("Test finished, calculated = " + calculatedValue + " expected = " + expectedValue + " diff = " + MathFunctions.abs(calculatedValue - expectedValue) + " --> result ");
            if (testResult) {
                mXparser.consolePrintln("OK, time = " + testExp.getComputingTime());
            } else {
                mXparser.consolePrintln("ERROR, time = " + testExp.getComputingTime());
                consolePrintOptionsExpression(testExp);
            }
        }

        internal static void consolePrintTestSynEnd(bool receivedSyntax, bool expectedSyntax, bool testResult, Expression testExp) {
            mXparser.consolePrint("Test finished, received = " + receivedSyntax + " expected = " + expectedSyntax + " --> result ");
            if (testResult) {
                mXparser.consolePrintln("OK, time = " + testExp.getComputingTime());
            } else {
                mXparser.consolePrintln("ERROR, time = " + testExp.getComputingTime());
                consolePrintOptionsExpression(testExp);
            }
        }


        internal static void consolePrintTestApiEnd(bool testResult) {
            mXparser.consolePrint("Test finished, result = " + testResult  + " --> result ");
            if (testResult) {
                mXparser.consolePrintln("OK");
            } else {
                mXparser.consolePrintln("ERROR");
            }
        }


        internal static void consolePrintTestSynStart(int testId, String testStr) {
            consolePrintTestStart(testId, testStr, "Syn");
        }

        internal static void consolePrintTestApiStart(int testId, String testDescr) {
            consolePrintTestStart(testId, testDescr, "API");
        }

        internal static void testExprSettingsInit() {
            mXparser.setEpsilonComparison();
            mXparser.setDefaultEpsilon();
            mXparser.enableUlpRounding();
        }
        internal static void testSynSettingsInit() {
            mXparser.setDefaultOptions();
        }
        internal static void testApiSettingsInit() {
            mXparser.setDefaultOptions();
        }
    }


	/**
	 * Example of implementation
	 * FunctionExtension interface
	 * @see FunctionExtension
	 */
	internal class FunExt : FunctionExtension {
		double x;
		double y;
		public FunExt() {
			x = Double.NaN;
			y = Double.NaN;
		}
		public FunExt(double x, double y) {
			this.x = x;
			this.y = y;
		}
		public int getParametersNumber() {
			return 2;
		}
		public void setParameterValue(int parameterIndex, double parameterValue) {
			if (parameterIndex == 0) x = parameterValue;
			if (parameterIndex == 1) y = parameterValue;
		}
		public String getParameterName(int parameterIndex) {
			if (parameterIndex == 0) return "x";
			if (parameterIndex == 1) return "y";
			return "";
		}
		public double calculate() {
			return x * y;
		}
		public FunctionExtension clone() {
			return new FunExt(x, y);
		}
	}
	/**
	 * Example of implementation
	 * FunctionExtensionVariadic interface
	 * @see FunctionExtensionVariadic
	 */
	internal class FunExtVar : FunctionExtensionVariadic {
		public double calculate(params double[] parameters) {
			if (parameters == null) return Double.NaN;
			if (parameters.Length == 0) return Double.NaN;
			double result = 0;
			foreach (double x in parameters)
				result+=x;
			return result;
		}
		public FunctionExtensionVariadic clone() {
			return new FunExtVar();
		}
	}
	/**
	 * Example of implementation
	 * ArgumentExtension interface
	 * @see ArgumentExtension
	 */
	internal class PiMultArgExt : ArgumentExtension {
		private int multiple = 0;
		public double getArgumentValue() {
			multiple++;
			return  MathConstants.PI * multiple;
		}
		public ArgumentExtension clone() {
			return new PiMultArgExt();
		}
	}

}