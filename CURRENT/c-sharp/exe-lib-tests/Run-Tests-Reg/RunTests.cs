using org.mariuszgromada.math.mxparser.regressiontesting;
using org.mariuszgromada.math.mxparser;
using System;

namespace mxparser.runtests {
	class RunTestsReg {
		static void Main(string[] args) {
			RunTest.Start("perf");
			mXparser.consolePrintln(".NET CLR version:" + Environment.Version);
            mXparser.consolePrintln(".NET version:" + System.Diagnostics.FileVersionInfo.GetVersionInfo(typeof(int).Assembly.Location).ProductVersion);
			#if PCL
                Console.WriteLine(mXparser.getConsoleOutput());
            #endif
            for( var i = 0.0; i < 25; i+=0.1)
            {
                Console.WriteLine($@"{i}, {org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions.BesselJ(i, 0)}");
            }
        }
    }
}
