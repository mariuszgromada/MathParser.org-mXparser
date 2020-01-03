using org.mariuszgromada.math.mxparser.regressiontesting;
using org.mariuszgromada.math.mxparser;
using System;
using System.Globalization;
using org.mariuszgromada.math.mxparser.mathcollection;

namespace mxparser.runtests {
	class RunTestsReg {
		static void Main(string[] args) {
			//RunTest.Start("reg");
			//RunTest.Start("syn");
			//RunTest.Start("api");
			Expression e = new Expression("1/(1/6.2)");
			mXparser.disableUlpRounding();
			mXparser.disableCanonicalRounding();
			mXparser.consolePrintln(e.calculate());
			mXparser.enableCanonicalRounding();
			mXparser.consolePrintln(e.calculate());
			/*
			mXparser.disableUlpRounding();
			mXparser.disableAlmostIntRounding();
			var from = new Function("from(n) = if( n == 0, 0, n*pi - pi/2)");
			var to = new Function("to(n) = if( n == 0, pi/2, n*pi + pi/2)");
			var f1 = new Function("f(b,n) = solve( x*tan(x) - b, x, from(n), to(n) )", from, to);
			var r1 = f1.calculate(double.Parse("2,3185969205494762E-06"), 0);

			mXparser.consolePrintln(r1);
			*/

			//double a = 0.1;
			//double b = 0.1;
			//double c = 0.1;
			//double r = a + b + c;
			//Console.WriteLine(r - 0.3);
			//double rr = MathFunctions.canonicalRound(r);
			//Console.WriteLine(rr - 0.3);
			//double pi1 = 4 * MathConstants.PI;
			//double pi2 = MathFunctions.canonicalRound(pi1);
			//Console.WriteLine(pi1);
			//Console.WriteLine(pi2);
			//Console.WriteLine(pi1-pi2);

			//mXparser.disableCanonicalRounding();
			//mXparser.disableCanonicalRounding();
			//mXparser.disableCanonicalRounding();
			//byte[] bx = { 202, 154, 153, 187, 57, 151, 248, 63 };
			//double x = BitConverter.ToDouble(bx, 0);
			//mXparser.consolePrintln("x = " + x + ", lambW0 = " + SpecialFunctions.lambertW(x, 0));
			//Expression e = new Expression("int( LambW0(2 * cot(x)^2) * sec(x)^2, x, 0.2, pi-0.2 ) - 4*sqrt(pi)");
			//byte[] bx = { 135, 239, 95, 142, 221, 119, 2, 64 };

			//Argument x = new Argument("x");
			//x.setArgumentValue(BitConverter.ToDouble(bx, 0));
			//mXparser.consolePrintln(x.getArgumentValue() - 2.30852805357239);
			//Expression et = new Expression("LambW0(1.65233918159948)");
			//Console.WriteLine(et.calculate());
			//mXparser.consolePrintln(mXparser.getFunctionValue(et, x, x.getArgumentValue()));
			//Expression e = new Expression("int( LambW0(2 * cot(x)^2) * sec(x)^2, x, 0.001182, pi-0.008 ) - 4*sqrt(pi)");
			//Console.WriteLine(e.calculate());
			//Argument x = new Argument("x = 001182");
			//Expression e = new Expression("LambW0(2 * cot(x)^2) * sec(x)^2", x);
			/*
			mXparser.enableCanonicalRounding();
			Function f = new Function("f(x) = LambW0(2 * cot(x)^2) * sec(x)^2");
			Function f1 = new Function("f1(x) = (2 * cot(x)^2)");
			Function f2 = new Function("f1(x) = LambW0(2 * cot(x)^2)");

			for (double x = 0.001182; x <= MathConstants.PI - 0.008; x += 0.000005)
			{
				double fv = f.calculate(x);
				if (Double.IsNaN(fv) || Double.IsInfinity(fv))
					Console.WriteLine(x + "\t" + fv + "\t" + f1.calculate(x) + "\t" + f2.calculate(x));
			}
			*/

			mXparser.consolePrintln(".NET CLR version:" + Environment.Version);
            mXparser.consolePrintln(".NET version:" + System.Diagnostics.FileVersionInfo.GetVersionInfo(typeof(int).Assembly.Location).ProductVersion);
			#if PCL
                Console.WriteLine(mXparser.getConsoleOutput());
            #endif
        }
    }
}
