package org.mariuszgromada.math.mxparser.workingtests;

import org.mariuszgromada.math.mxparser.*;

public class GenerTests {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Function f1 = new Function("f(x,y)=sin(x)+cos(y)");
		Function f2 = new Function("f", "sin(x) + cos(y)", "x", "y");
		mXparser.consolePrintln(f1.calculate(1,2) + " " + f2.calculate(1,2) );
		mXparser.consolePrintln(f1.getFunctionName() + " " +  f1.getFunctionExpressionString() + " " + f1.getParametersNumber());
		mXparser.consolePrintln(f1.getArgument(0).getArgumentName() + " " + f1.getArgument(1).getArgumentName());
		mXparser.consolePrintln(f2.getFunctionName() + " " + f2.getFunctionExpressionString() + " " + f2.getParametersNumber());
		mXparser.consolePrintln(f2.getArgument(0).getArgumentName() + " " + f2.getArgument(1).getArgumentName());
		
		Constant a = new Constant("    ,= 5-sin(20)");
		mXparser.consolePrintln(a.getConstantName() + " = " + a.getConstantValue());
		mXparser.consolePrintln(a.getErrorMessage());
		
	}

}
