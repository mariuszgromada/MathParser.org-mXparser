using org.mariuszgromada.math.mxparser;
using org.mariuszgromada.math.mxparser.mathcollection;
using System;
using System.Globalization;
using System.IO;
using System.Text;

namespace phelipemartins.caseinsensitivity {
	class CaseInsensitivityTest {
		static void addCaseInsensitiveArguments(Expression e, params Argument[] definedArguments) {
			/*
			 * If no need to add any definition
			 */
			if (e.checkSyntax() == true) return;
			/*
			 * First checking the grammar
			 */
			if (e.checkLexSyntax() != true) return;
			/*
			 * Extracting names of not defined user arguments
			 * i.e. if Volume is defined, and user puts VOLUME
			 * in expression string then VOLUME is returned as
			 * not defined user argument
			 */
			String[] notDefArgsNames = e.getMissingUserDefinedArguments();
			/*
			 * Checking if defined arguments are on the list
			 * of not defined arguments - check is perfomed
			 * to lower case
			 */
			foreach (String notDefArgName in notDefArgsNames) {
				foreach (Argument defArg in definedArguments) {
					if (notDefArgName.ToLower().Equals(defArg.getArgumentName().ToLower())) {
						/*
						 * We are creating new dependet argument, new argument will always
						 * point to the defined argument
						 * it means that there is now need to set the value of dependet argument
						 */
						Argument caseInsensitiveArgument = new Argument(notDefArgName, defArg.getArgumentName(), defArg);
						/*
						 * New argument is added to the expression definition
						 */
						e.addDefinitions(caseInsensitiveArgument);
					}
				}
			}
		}
		static void addCaseInsensitiveFunctions(Expression e, params Function[] definedFunctions) {
			/*
			 * If no need to add any definition
			 */
			if (e.checkSyntax() == true) return;
			/*
			 * First checking the grammar
			 */
			if (e.checkLexSyntax() != true) return;
			/*
			 * Extracting names of not defined user functions
			 * i.e. if HighestVolume is defined, and user puts HIGHESTVOLUME
			 * in expression string then HIGHESTVOLUME is returned as
			 * not defined user argument
			 */
			String[] notDefFunNames = e.getMissingUserDefinedFunctions();
			/*
			 * Checking if defined functions are on the list
			 * of not defined functions - check is perfomed
			 * to lower case
			 */
			foreach (String notDefFunName in notDefFunNames) {
				foreach (Function defFun in definedFunctions) {
					if (notDefFunName.ToLower().Equals(defFun.getFunctionName().ToLower())) {
						/*
						 * We are creating new function, new function will always
						 * point to the defined function, newFun(x1, x2, ..., xn) = defFun(x1, x2, ..., xn)
						 */
						String funExp = defFun.getFunctionName() + "(";
						int nArgs = defFun.getParametersNumber();
						String[] funParamsNames = new String[nArgs];
						for (int i = 0; i < nArgs; i++) {
							if ((i > 0) && (nArgs > 1))
								funExp = funExp + ",";
							String paramName = defFun.getParameterName(i);
							funExp = funExp + paramName;
							funParamsNames[i] = paramName;
						}
						funExp = funExp + ")";
						Function caseInsensitiveFunction = new Function(notDefFunName, funExp, funParamsNames);
						caseInsensitiveFunction.addDefinitions(defFun);
						/*
						 * New function is added to the expression definition
						 */
						e.addDefinitions(caseInsensitiveFunction);
					}
				}
			}
		}
		static void Main(string[] args) {
			/*
			 * Arguments definition
			 */
			//Argument Volume = new Argument("Volume = 5");
			//Argument Mass = new Argument("Mass = 10");
			/*
			 * Expression creation
			 */
			/* Case 1 */
			//Expression e1 = new Expression("Mass / Volume", Volume, Mass);
			//addCaseInsensitiveArguments(e1, Volume, Mass);
			//mXparser.consolePrintln("Case 1: " + e1.getExpressionString() + " = " + e1.calculate());
			/* Case 2 */
			//Expression e2 = new Expression("mAsS / volUME", Volume, Mass);
			//addCaseInsensitiveArguments(e2, Volume, Mass);
			//mXparser.consolePrintln("Case 2: " + e2.getExpressionString() + " = " + e2.calculate());
			/* Case 3 */
			//Mass.setArgumentValue(30);
			//Volume.setArgumentValue(10);
			//mXparser.consolePrintln("Case 3: " + e2.getExpressionString() + " = " + e2.calculate());
			/* Case 4 */
			//Function Dens = new Function("Dens(m, v) = m / v");
			//Expression e3 = new Expression("Dens(mAsS, volUME)", Volume, Mass, Dens);
			//addCaseInsensitiveArguments(e3, Volume, Mass);
			//mXparser.consolePrintln("Case 4: " + e3.getExpressionString() + " = " + e3.calculate());
			/* Case 4 */
			//Expression e4 = new Expression("deNs(mAsS, volUME)", Volume, Mass, Dens);
			//addCaseInsensitiveArguments(e4, Volume, Mass);
			//addCaseInsensitiveFunctions(e4, Dens);
			//mXparser.consolePrintln("Case 5: " + e4.getExpressionString() + " = " + e4.calculate());
			//mXparser.consolePrintln();
			//mXparser.consolePrintln("========================= >>>>>>>>> Verbose mode while calculate()");
			//e4.setVerboseMode();
			//e4.calculate();
			//Function f = new Function("f(x) = x^2");
			//Argument x = new Argument("x = 10");
			//Expression e = new Expression("f(x)", f, x);
			//mXparser.consolePrintln(e.calculate());
			Expression e = new Expression("2_3_4");
			e.checkSyntax();
			mXparser.consolePrintln(e.getErrorMessage());
			mXparser.consolePrintln(String.Format("{0:0}", 1e250));
			mXparser.consolePrintln(NumberTheory.toMixedFractionString(20.0+263.0/353.0));
		}
	}
}
