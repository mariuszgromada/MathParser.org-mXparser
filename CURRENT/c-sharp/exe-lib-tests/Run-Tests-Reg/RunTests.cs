using org.mariuszgromada.math.mxparser.regressiontesting;
using org.mariuszgromada.math.mxparser;
using System;

namespace mxparser.runtests {
	class RunTestsReg {
		static void Main(string[] args) {
			RunTest.Start("api");
			RunTest.Start("syn");
			RunTest.Start("reg");
			/*
			mXparser.disableUlpRounding();
			mXparser.disableAlmostIntRounding();
			var from = new Function("from(n) = if( n == 0, 0, n*pi - pi/2)");
			var to = new Function("to(n) = if( n == 0, pi/2, n*pi + pi/2)");
			var f1 = new Function("f(b,n) = solve( x*tan(x) - b, x, from(n), to(n) )", from, to);
			var r1 = f1.calculate(double.Parse("2,3185969205494762E-06"), 0);

			mXparser.consolePrintln(r1);
			*/
			mXparser.consolePrintln(".NET CLR version:" + Environment.Version);
            mXparser.consolePrintln(".NET version:" + System.Diagnostics.FileVersionInfo.GetVersionInfo(typeof(int).Assembly.Location).ProductVersion);
			#if PCL
                Console.WriteLine(mXparser.getConsoleOutput());
            #endif
        }
    }
}
