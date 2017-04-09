using org.mariuszgromada.math.mxparser.regressiontesting;
using org.mariuszgromada.math.mxparser;
using System;

namespace mxparser.runtests {
	class RunTestsReg {
		static void Main(string[] args) {
			RunTest.Start("reg");
			Console.WriteLine(mXparser.getConsoleOutput());
		}
	}
}
