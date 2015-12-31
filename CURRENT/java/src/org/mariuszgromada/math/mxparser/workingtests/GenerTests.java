package org.mariuszgromada.math.mxparser.workingtests;

import org.mariuszgromada.math.mxparser.*;

public class GenerTests {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		/*
		Function f1 = new Function("a(x,y)=sin(x)+cos(y)");
		mXparser.consolePrintln(f1.getErrorMessage());
		mXparser.consolePrintln(f1.calculate(1,2));
		mXparser.consolePrintln(f1.getErrorMessage());
		*/
		
		//Argument x = new Argument("x(y)=5*y");
		//Argument y = new Argument("y=10");
		//x.addArguments(y);
		//mXparser.consolePrintln(x.getArgumentValue() + " " + x.getErrorMessage());
		
		
		//Constant a = new Constant("    1a= 5-sin(20)");
		//mXparser.consolePrintln(a.getConstantName() + " = " + a.getConstantValue());
		//mXparser.consolePrintln(a.getErrorMessage());
		
		
		/*
		Function f = new Function("f(n)=if(n>0, n*f(n-1), 1)");
		mXparser.consolePrintln(f.calculate(5) + " " + f.getRecursiveMode());
		Function Cnk = new Function("Cnk","if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)","n", "k");
		Expression e = new Expression("Cnk(10,4)");
		e.addFunctions(Cnk);
		mXparser.consolePrintln(e.calculate() + " " + e.getErrorMessage());
		
		
		Expression ee = new Expression("2+x");
		Argument x = new Argument("x");
		ee.addDefinitions(x);
        long start =  System.currentTimeMillis();
  
        for (int i=0; i<1000000; i++) {
        	x.setArgumentValue(i);
        	ee.calculate();
        }
        long end = System.currentTimeMillis();

		mXparser.consolePrintln(ee.getExpressionString() + " czas: " + (end-start)/1000.0 + " s.");
		*/
		
		/*
		RecursiveArgument fib2 = new RecursiveArgument("fib(n)= fib(n-1)+fib(n-2)");
		mXparser.consolePrintln(fib2.getErrorMessage());
		
		fib2.addBaseCase(0, 0);
		fib2.addBaseCase(1, 1);
		
		mXparser.consolePrintln(fib2.getArgumentValue(0));
		mXparser.consolePrintln(fib2.getArgumentValue(1));
		mXparser.consolePrintln(fib2.getArgumentValue(2));
		mXparser.consolePrintln(fib2.getArgumentValue(3));
		mXparser.consolePrintln(fib2.getArgumentValue(4));
		mXparser.consolePrintln(fib2.getArgumentValue(5));
		mXparser.consolePrintln(fib2.getArgumentValue(6));
		mXparser.consolePrintln(fib2.getArgumentValue(7));
		mXparser.consolePrintln(fib2.getArgumentValue(8));
		mXparser.consolePrintln(fib2.getArgumentValue(9));
		mXparser.consolePrintln(fib2.getArgumentValue(10));
		 */
		Function fibb = new Function("fib(n) = if(n>1, fib(n-1) + fib(n-2), if(n = 1, 1, 0))");
		mXparser.consolePrintln(fibb.getErrorMessage());
		mXparser.consolePrintln(fibb.calculate(10));
		mXparser.consolePrintln(fibb.getErrorMessage());

		
		
	}

}
