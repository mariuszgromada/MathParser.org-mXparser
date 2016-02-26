package org.mariuszgromada.math.mxparser.workingtests;

import org.mariuszgromada.math.mxparser.mXparser;

import org.mariuszgromada.math.mxparser.*;

public class WorkingTests {

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

		/*
		Function fibb = new Function("fib(n) = if(n>1, fib(n-1) + fib(n-2), if(n = 1, 1, 0))");
		mXparser.consolePrintln(fibb.getErrorMessage());
		mXparser.consolePrintln(fibb.calculate(10));
		mXparser.consolePrintln(fibb.getErrorMessage());
		*/

		//mXparser.consolePrintln( mXparser.LICENSE );

		/*
		 * Using help
		 */
		//Expression e = new Expression();
		//mXparser.consolePrintln(e.getHelp());

		/*
		 * Full line searching
		 */
		//Expression e = new Expression();
		//mXparser.consolePrintln(e.getHelp("sine"));
		//Expression e = new Expression();
		//mXparser.consolePrintln(e.getHelp("inver"));

		//Expression e = new Expression("2+1");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//e.setExpressionString("2-1");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		/* operators */
		//Expression e = new Expression("2-(32-4)/(23+(4)/(5))-(2-4)*(4+6-98.2)+4");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		/* power function */
		//Expression e = new Expression("2^3+2^(-3)+2^3^(-4)");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());


		/*
		 * Relations
		 */
		//Expression e = new Expression("2=3");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("2<3");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("(2=3) | (2<3)");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("(2=3) & (2<3)");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		/* 1 arg functions */

		//Expression e = new Expression("sin(2)-cos(3)");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		/* 2 args functions */

		//Expression e = new Expression("min(3,4) + max(-2,-1)");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		/* binomial coefficient */
		//Expression e = new Expression("C(10,5)");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		/* 3 args functions */

		/* conditions */
		//Expression e = new Expression("if(2<3, 1, 0)");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("if(3<2, 1, if(1=1, 5, 0) )");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("gcd(4,2,8,20)");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("iff( 1>2, 1, 3<2, 2, 5>3, 3, 7 < 3, 4 )");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("iff( 1>2, 1; 3<2, 2; 5>3, 3; 7 < 3, 4 )");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());


		/*
		Argument x = new Argument("x = 1");
		Argument y = new Argument("y = 2*pi");
		Argument z = new Argument("z", 3);
		Argument n = new Argument("n", 4);

		Expression e = new Expression("n*( sin(x+y)-cos(y/z) )", x, y, z, n);
		mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());

		x.setArgumentValue(0);
		z.setArgumentValue(4);
		mXparser.consolePrintln("Res 2: " + e.getExpressionString() + " = " + e.calculate());

		x.setArgumentValue(5);
		mXparser.consolePrintln("Res 3: " + x.getArgumentName() + " = " + x.getArgumentValue());
		*/

		/*
		Argument x = new Argument("x");
		Argument y = new Argument("y = x^2", x);

		x.setArgumentValue(1);
		mXparser.consolePrintln("Res 1: " + y.getArgumentName() + " = " + y.getArgumentValue());

		x.setArgumentValue(2);
		mXparser.consolePrintln("Res 2: " + y.getArgumentName() + " = " + y.getArgumentValue());

		x.setArgumentValue(3);
		mXparser.consolePrintln("Res 3: " + y.getArgumentName() + " = " + y.getArgumentValue());

		Expression e = new Expression("x*y", x, y);
		mXparser.consolePrintln("Res 4: " + e.getExpressionString() + " = " + e.calculate());
		*/

		//Expression e1 = new Expression("sum(i, 1, 10, 2*i)");
		///mXparser.consolePrintln("Res 1: " + e1.getExpressionString() + " = " + e1.calculate());

		/* Iteration can be done by not necessarily whole increment */
		//Expression e2= new Expression("sum(i, 1, 10, i, 0.5)");
		//mXparser.consolePrintln("Res 2: " + e2.getExpressionString() + " = " + e2.calculate());


		/*
		 * Product operator SIGMA
		 * prod(index, from, to, expr)
		 * prod(index, from, to, expr, by)
		 */

		/* factorial */
		//Expression e1 = new Expression("prod(i, 1, 5, i)");
		//mXparser.consolePrintln("Res 1: " +  e1.getExpressionString() + " = " + e1.calculate());

		/* Iteration can be done by not necessarily whole increment */
		/* Here different form of 10! */
		//Expression e2 = new Expression("prod(i, 1, 5, 2*i, 0.5)");
		//mXparser.consolePrintln("Res 2: " + e2.getExpressionString() + " = " + e2.calculate());

		/* Approximation sin(x) by Taylor series
		 */
		//Argument x = new Argument("x = 2*pi");
		//Argument n = new Argument("n = 3");
		//Expression e = new Expression("sin(x) - sum(k, 0, n, (-1)^k*(x^(2*k+1))/(2*k+1)! )", x, n);
		//mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());

		/* Increasing polynomial order ... */
		//n.setArgumentValue(5);
		//mXparser.consolePrintln("Res 2: " + e.getExpressionString() + " = " + e.calculate());

		/* Increasing polynomial order ... */
		//n.setArgumentValue(10);
		//mXparser.consolePrintln("Res 3: " + e.getExpressionString() + " = " + e.calculate());

		/* Increasing polynomial order ... */
		//n.setArgumentValue(20);
		//mXparser.consolePrintln("Res 4: " + e.getExpressionString() + " = " + e.calculate());

		/* Checking other point closer to '0' */
		//x.setArgumentValue(2);
		//mXparser.consolePrintln("Res 5: " + e.getExpressionString() + " = " + e.calculate());

		//x.setArgumentValue(5);
		//mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e20.getExpressionString() + " = " + e20.calculate());
		//x.setArgumentValue(10);
		//mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e20.getExpressionString() + " = " + e20.calculate());
		/*
		 * calculating pi by integral of
		 * sqrt(1-x^2) from -1 to 1
		 * using simple summation operator
		 */

		//Argument d = new Argument("d",0.1);
		//Expression e = new Expression("2 * sum(x, -1, 1, d*sqrt(1-x^2), d)", d);
		//mXparser.consolePrintln("Res 1: d = " + d.getArgumentValue() + ", " + e.getExpressionString() + " = " + e.calculate());
		//d.setArgumentValue(0.01);
		//mXparser.consolePrintln("Res 2: d = " + d.getArgumentValue() + ", " + e.getExpressionString() + " = " + e.calculate());

		//Argument x = new Argument("x = 1");
		//Expression e = new Expression("cos(x) - der(sin(x), x)", x);
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Argument x = new Argument("x = 0");
		//Expression e1 = new Expression("der-(abs(x), x)", x);
		//Expression e2 = new Expression("der+(abs(x), x)", x);

		//mXparser.consolePrintln("Res 1: " + e1.getExpressionString() + " = " + e1.calculate());
		//mXparser.consolePrintln("Res 2: " + e2.getExpressionString() + " = " + e2.calculate());

		//Argument x = new Argument("x = 1");

		/* Derivative from Taylor series approximation of sin(x)*/
		//Expression e = new Expression("cos(x) - der( sum(k,0,10,(-1)^k*(x^(2*k+1))/(2*k+1)!), x)", x);
		//mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());

		//x.setArgumentValue(2);
		//mXparser.consolePrintln("Res 2: " + e.getExpressionString() + " = " + e.calculate());

		//x.setArgumentValue(3);
		//mXparser.consolePrintln("Res 3: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("2 * int( sqrt(1-x^2), x, -1, 1 )");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression("pi+e");
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//Expression e = new Expression();
		//mXparser.consolePrintln(e.getHelp("constant"));

		//Function f = new Function("f", "x^2", "x");
		//Expression e = new Expression("f(2)", f);
		//mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Res 2: f(5) = " + f.calculate(5));

		//Function f = new Function("f(x) = x^2");
		//Expression e = new Expression("f(2)", f);
		//mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Res 2: f(5) = " + f.calculate(5));


		//Function f = new Function("f(a, b, c) = a+b+c");
		//Expression e = new Expression("f(1,2,3)", f);
		//mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Res 2: f(1,2,3) = " + f.calculate(1,2,3));

		//Function g = new Function("g(x) = 2*x");
		//Function f = new Function("f(x) = g(x)^2", g);

		//mXparser.consolePrintln("Res 1: g(1) = " + g.calculate(1));
		//mXparser.consolePrintln("Res 2: f(1) = " + f.calculate(1));

		//Constant a = new Constant("a", 5);
		//Constant b = new Constant("b = 10");
		//Expression e = new Expression("a+b", a, b);
		//mXparser.consolePrintln(a.getConstantName() + " = " + a.getConstantValue());
		//mXparser.consolePrintln(b.getConstantName() + " = " + b.getConstantValue());
		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());

		//RecursiveArgument fib = new RecursiveArgument("fib(n) = fib(n-1) + fib(n-2)");
		//fib.addBaseCase(0, 0);
		//fib.addBaseCase(1, 1);
		//Expression e = new Expression("fib(10)", fib);

		//mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Res 2: fib(11) = " + fib.getArgumentValue(11));
		//Function fib = new Function("fib(n) = if( n>1, fib(n-1)+fib(n-2), if(n > 0, 1, 0) )");
		//Expression e = new Expression("fib(10)", fib);

		//mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Res 2: fib(11) = " + fib.calculate(11));

		//Function Cnk = new Function("Cnk(n,k) = if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)");
		//Expression e = new Expression("Cnk(10,3) - C(10,3)", Cnk);

		//mXparser.consolePrintln("Res 1: " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Res 2: Cnk(10,3) = " + Cnk.calculate(10,3));

		/*
		 * Chebyshev polynomials definition using
		 * recursive functions
		 */
		//Function T = new Function("T(n,x) = if(n>1, 2*x*T(n-1,x)-T(n-2,x), if(n>0, x, 1) )");
		//Argument k = new Argument("k = 5");
		//Argument x = new Argument("x = 2");
		//Expression e = new Expression("T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2", T, k, x);
		//mXparser.consolePrintln("Res : " + e.getExpressionString() + " = " + e.calculate());

		//Constant a = new Constant("a", 0.001);
		//Function s = new Function("s(x) =  if( abs(x) < a, x, 2*s(x/2)*c(x/2) )", a);
		//Function c = new Function("c(x) =  if( abs(x) < a, 1, c(x/2)^2-s(x/2)^2 )", a);
		//s.addDefinitions(c);
		//c.addDefinitions(s);

		//Expression e1 = new Expression("sin(5)-s(5)", s);
		//Expression e2 = new Expression("cos(5)-c(5)", c);

		//mXparser.consolePrintln("Res 1: " + e1.getExpressionString() + " = " + e1.calculate());
		//mXparser.consolePrintln("Res 2: " + e2.getExpressionString() + " = " + e2.calculate());

		//Function f = new Function("f(x) = x^2");
		//Expression e = new Expression("f(2)+(2+3)^2", f);
		//e.setDescription("Example - verbose mode");
		//e.setVerboseMode();

		//mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());
		//Function fib = new Function("fib(n) = if( n>1, fib(n-1)+fib(n-2), if(n > 0, 1, 0) )");
		//Expression e = new Expression("fib(10) + 20/sin(x)", fib);
		//mXparser.consolePrintln("1st trial of syntax checking.");
		//e.checkSyntax();
		//mXparser.consolePrintln(e.getErrorMessage());
		//Argument x = new Argument("x = 2");
		//e.addDefinitions(x);
		//mXparser.consolePrintln("2nd trial of syntax checking.");
		//e.checkSyntax();
		//mXparser.consolePrintln(e.getErrorMessage());

		//Expression e = new Expression("sum(i, 1, 1000000, 1)");
		//mXparser.consolePrintln("Res : " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Computing time = " + e.getComputingTime() + " s.");

		/* Function */
		//Function f = new Function("f(x) = sin(x)");

		/* Antiderivative */
		//Function F = new Function("F(x) = int(f(t), t, 0, x)", f);

		/* function = derivative ( antiderivative ) */
		//Argument x = new Argument("x = pi");
		//Expression e = new Expression("f(x) - der(F(x), x)", x, f, F);
		//mXparser.consolePrintln("Res : " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Computing time = " + e.getComputingTime() + " s.");

		//Expression e = new Expression("3+2/4");
		//e.setVerboseMode();
	    //e.calculate();
		//System.out.println("aaaaaaaaaaaaaaaaaaaa");
		//System.out.println(mXparser.getConsoleOutput());
		//mXparser.resetConsoleOutput();
		//System.out.println("aaaaaaaaaaaaaaaaaaaa");
		//System.out.println(mXparser.getConsoleOutput());
		/*
			abs( Ei(-1)  / (0.219383934395520274 * 10^0 ) )
			abs( Ei(-4)  / (0.377935240984890648 * 10^-2 ) )
			abs( Ei(-8)  / (0.376656228439249018 * 10^-4 ) )
			abs( Ei(-11) / (0.140030030424744178 * 10^-5 ) )
			abs( Ei(-16) / (0.664048724944104278 * 10^-8 ) )
			abs( Ei(-21) / (0.345320126714675627 * 10^-10 ) )
			abs( Ei(-26) / (0.189468588567497824 * 10^-12 ) )
			abs( Ei(-31) / (0.107676703861623826 * 10^-14 ) )
			abs( Ei(-36) / (0.627333900976224159 * 10^-17 ) )
			abs( Ei(-41) / (0.372316677645997772 * 10^-19 ) )
			abs( Ei(-46) / (0.224153175974429975 * 10^-21 ) )
			abs( Ei(-50) / (0.378326402955045902 * 10^-23 ) )

			abs( Ei(1)  / (0.189511781635593676 * 10^1 ) )
			abs( Ei(4)  / (0.196308744700562200 * 10^2 ) )
			abs( Ei(6)  / (0.859897621424392048 * 10^2 ) )
			abs( Ei(8)  / (0.440379899534838269 * 10^3 ) )
			abs( Ei(11) / (0.607140637409861151 * 10^4 ) )
			abs( Ei(16) / (0.595560998670837002 * 10^6 ) )
			abs( Ei(21) / (0.661271863554849213 * 10^8 ) )
			abs( Ei(26) / (0.784294099189818637 * 10^10 ) )
			abs( Ei(31) / (0.969455575968393966 * 10^12 ) )
			abs( Ei(36) / (0.123285207991209769 * 10^15 ) )
			abs( Ei(41) / (0.160066491432450411 * 10^17 ) )
			abs( Ei(46) / (0.211134238864782419 * 10^19 ) )
			abs( Ei(50) / (0.105856368971316910 * 10^21 ) )
		*/
		//int primes = 0;
		//for (int i = 0; i < 10000000; i++)
		//	if ( NumberTheory.primeTest(i) == true) primes++;
		//mXparser.initPrimesCache(2);
		/*
		Expression e = new Expression(
			"abs( Ei(-1)  / (0.219383934395520274 * 10^0 ) ) + " +
			"abs( Ei(-4)  / (0.377935240984890648 * 10^-2 ) ) + " +
			"abs( Ei(-6)  / (0.360082452162658659 * 10^-3 ) ) + " +
			"abs( Ei(-8)  / (0.376656228439249018 * 10^-4 ) ) + " +
			"abs( Ei(-11) / (0.140030030424744178 * 10^-5 ) ) + " +
			"abs( Ei(-16) / (0.664048724944104278 * 10^-8 ) ) + " +
			"abs( Ei(-21) / (0.345320126714675627 * 10^-10 ) ) + " +
			"abs( Ei(-26) / (0.189468588567497824 * 10^-12 ) ) + " +
			"abs( Ei(-31) / (0.107676703861623826 * 10^-14 ) ) + " +
			"abs( Ei(-36) / (0.627333900976224159 * 10^-17 ) ) + " +
			"abs( Ei(-41) / (0.372316677645997772 * 10^-19 ) ) + " +
			"abs( Ei(-46) / (0.224153175974429975 * 10^-21 ) ) + " +
			"abs( Ei(-50) / (0.378326402955045902 * 10^-23 ) ) + " +
			"abs( Ei(1)  / (0.189511781635593676 * 10^1 ) ) + " +
			"abs( Ei(4)  / (0.196308744700562200 * 10^2 ) ) + " +
			"abs( Ei(6)  / (0.859897621424392048 * 10^2 ) ) + " +
			"abs( Ei(8)  / (0.440379899534838269 * 10^3 ) ) + " +
			"abs( Ei(11) / (0.607140637409861151 * 10^4 ) ) + " +
			"abs( Ei(16) / (0.595560998670837002 * 10^6 ) ) + " +
			"abs( Ei(21) / (0.661271863554849213 * 10^8 ) ) + " +
			"abs( Ei(26) / (0.784294099189818637 * 10^10 ) ) + " +
			"abs( Ei(31) / (0.969455575968393966 * 10^12 ) ) + " +
			"abs( Ei(36) / (0.123285207991209769 * 10^15 ) ) + " +
			"abs( Ei(41) / (0.160066491432450411 * 10^17 ) ) + " +
			"abs( Ei(46) / (0.211134238864782419 * 10^19 ) ) + " +
			"abs( Ei(50) / (0.105856368971316910 * 10^21 ) ) - 26"
			);
			*/
		//for (Argument x = new Argument("x = -51"); x.getArgumentValue() <= 51; x.setArgumentValue(x.getArgumentValue()+0.1) ) {
		//	Expression e = new Expression("Ei(x)", x);
		//	System.out.println(x.getArgumentValue() + ";" + e.calculate());
		//}
		//Argument x = new Argument("x = 100000000");
		//Expression e = new Expression("( ( x / ln(x) ) * sum(k, 0, 20, k! / ln(x)^k ) ) / li(x)", x);
		//mXparser.consolePrintln(e.calculate() + " " + e.getComputingTime() + " s. " + e.getErrorMessage());
		//mXparser.consolePrintln(MathFunctions.primeCount(10000000));
		//Constant n = new Constant("n = 110000000");
		//Constant Pi = new Constant("a = Pi(n)", n);
		//Constant Li = new Constant("b = Li(n)", n);
		//Expression e = new Expression("abs(a-b)/a", Pi, Li);
		//mXparser.consolePrintln(e.calculate() + " " + e.getComputingTime() + " s. ");
		//System.out.println(mXparser.getHelp());

		//Expression e1 = new Expression("ispr(5)");
		//Expression e2 = new Expression("ispr(9)");

		//mXparser.consolePrintln("Res 1: " + e1.getExpressionString() + " = " + e1.calculate());
		//mXparser.consolePrintln("Res 2: " + e2.getExpressionString() + " = " + e2.calculate());

		//Expression e = new Expression("Pi(10000000)");

		//mXparser.consolePrintln("Res : " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Time: " + e.getComputingTime() + " s.");

		/* Primes cache initialization */
		//mXparser.initPrimesCache(10000000);
		//mXparser.consolePrintln("Primes cache init time: " + mXparser.primesCache.getComputingTime());

		/* Expression definition */
		//Expression e = new Expression("Pi(10000000)");

		/* Calculation and result output */
		//mXparser.consolePrintln("Res : " + e.getExpressionString() + " = " + e.calculate());
		//mXparser.consolePrintln("Time: " + e.getComputingTime() + " s.");

		/* Primes cache was initialized in the previous example
		 * and it will be used in the following calculations.
		 *
		 * We are going to estimate the number of primes Pi(n)
		 * using offset logarithmic function Li(n)
		 */
		//Expression e = new Expression("Pi(10000000) / Li(10000000)");

		/* Calculation and result output */
		//mXparser.consolePrintln("Res : " + e.getExpressionString() + " = " + e.calculate());
		/*
		Function Size = new Function("Siz(n) = ceil( ( -1 + sqrt(1 + 4*n) )/2 )");
		Function ElBefore = new Function("ElBefor(n) = Siz(n) * ( Siz(n) - 1 )", Size);
		Function ItemNrInGrBig = new Function("ItemNrInGrBig(n) = n - ElBefor(n)", ElBefore);
		Function GrBefore = new Function("GrBefor(n) = 2 * ( Siz(n) - 1 )", Size);
		Function SubGrNr = new Function("SubGrNr(n) = ceil( ItemNrInGrBig(n) / Siz(n) )", Size, ItemNrInGrBig);
		Function GrNr = new Function("GrNr(n) = GrBefor(n) + SubGrNr(n)", GrBefore, SubGrNr);
		Function ItemNrInGr = new Function("ItemNrInGr(n) = ( ItemNrInGrBig(n) - 1 ) % Size(n) ", ItemNrInGrBig, Size);
		Function Dir = new Function("Dir(n) = ( GrNr(n) - 1 ) % 4", GrNr);
		Function dx = new Function("dx(n) = iff( Dir(n) = 0, 1; Dir(n) = 1, 0; Dir(n) = 2, -1; Dir(n) = 3, 0)", Dir);
		Function dy = new Function("dy(n) = iff( Dir(n) = 0, 0; Dir(n) = 1, 1; Dir(n) = 2, 0; Dir(n) = 3, -1)", Dir);
		Function x = new Function("x(n) = if( n > 1, sum(i, 1, n-1, dx(i) ), 0)", dx);
		Function y = new Function("y(n) = if( n > 1, sum(i, 1, n-1, dy(i) ), 0)", dy);
		*/
		//Function f = new Function("Fefe(n) = 10");
		//System.out.println(f.getFunctionName());
		//x.setVerboseMode();
		//System.out.println(x.calculate(3));

		//Function f = new Function("Fefe(n) = 10");
		//System.out.println(f.getFunctionName());


		/*
		Function f = new Function("f(n) = 5*n");
		for (int n = 1; n < 100; n++) {
			System.out.println(x.calculate(f.calculate(n)) + ", " + y.calculate(f.calculate(n)));
		}
		*/
		/*
		Function f = new Function("f(x) = x^2");
		Expression e = new Expression("f(2)+(2+3)^2", f);
		e.setDescription("Example - verbose mode");
		e.setVerboseMode();

		mXparser.consolePrintln("Res: " + e.getExpressionString() + " = " + e.calculate());
*/

		/* Function and expression definition */
		//Function fib = new Function("fib(n) = if( n>1, fib(n-1)+fib(n-2), if(n > 0, 1, 0) )");
		//Expression e = new Expression("fib(10) + 20/sin(x)", fib);

		/* 1st trial of syntax checking. */
		//mXparser.consolePrintln("1st trial of syntax checking.");
		//e.checkSyntax();
		//mXparser.consolePrintln(e.getErrorMessage());

		/* Definition modification */
		//Argument x = new Argument("x = 2");
		//e.addDefinitions(x);

		/* 1st trial of syntax checking. */
		//mXparser.consolePrintln("2nd trial of syntax checking.");
		//e.checkSyntax();
		//mXparser.consolePrintln(e.getErrorMessage());

		/*
		Function Size = new Function("Size(n) = ceil( ( -1 + sqrt(1 + 4*n) )/2 )");
		Function ElBefore = new Function("ElBefore(n) = Size(n) * ( Size(n) - 1 )", Size);
		Function ItemNrInGrBig = new Function("ItemNrInGrBig(n) = n - ElBefore(n)", ElBefore);
		Function GrBefore = new Function("GrBefore(n) = 2 * ( Size(n) - 1 )", Size);
		Function SubGrNr = new Function("SubGrNr(n) = ceil( ItemNrInGrBig(n) / Size(n) )", Size, ItemNrInGrBig);
		Function GrNr = new Function("GrNr(n) = GrBefore(n) + SubGrNr(n)", GrBefore, SubGrNr);
		Function ItemNrInGr = new Function("ItemNrInGr(n) = ( ItemNrInGrBig(n) - 1 ) % Sizee(n) ", ItemNrInGrBig, Size);
		Function Dir = new Function("Dir(n) = ( GrNr(n) - 1 ) % 4", GrNr);
		Function dx = new Function("dx(n) = iff( Dir(n) = 0, 1; Dir(n) = 1, 0; Dir(n) = 2, -1; Dir(n) = 3, 0)", Dir);
		Function dy = new Function("dy(n) = iff( Dir(n) = 0, 0; Dir(n) = 1, 1; Dir(n) = 2, 0; Dir(n) = 3, -1)", Dir);
		RecursiveArgument x = new RecursiveArgument("x(n) = x(n-1) + dx(n-1)", dx);
		RecursiveArgument y = new RecursiveArgument("y(n) = y(n-1) + dy(n-1)", dy);
		x.addBaseCase(1, 0);
		y.addBaseCase(1, 0);
		Function xx = new Function("x(n) = if( n > 1, sum(i, 1, n-1, dx(i) ), 0)", dx);
		Function yy = new Function("y(n) = if( n > 1, sum(i, 1, n-1, dy(i) ), 0)", dy);

		mXparser.consolePrintln(x.getArgumentValue(300) + ", " + x.getComputingTime());
		mXparser.consolePrintln(xx.calculate(300) + ", " + xx.getComputingTime());
		*/
		Function V = new Function("V(n,k) = n! / (n-k)!");
		Function B = new Function("B(n,k) = V(n,k) * Stirl2(n,k)", V);
		int n = 6;
		for (int k = 0; k <= n+1; k++)
			mXparser.consolePrintln("B(" + n + "," + k + ") = " + B.calculate(n,k) );
	}
}
