using org.mariuszgromada.math.mxparser.regressiontesting;
using org.mariuszgromada.math.mxparser;
using System;

namespace mxparser.runtests {
	class RunTestsReg {
		static void Main(string[] args) {
			RunTest.Start("api");
			mXparser.consolePrintln(".NET CLR version:" + Environment.Version);
            mXparser.consolePrintln(".NET version:" + System.Diagnostics.FileVersionInfo.GetVersionInfo(typeof(int).Assembly.Location).ProductVersion);
			#if PCL
                Console.WriteLine(mXparser.getConsoleOutput());
            #endif
        }
    }
}
