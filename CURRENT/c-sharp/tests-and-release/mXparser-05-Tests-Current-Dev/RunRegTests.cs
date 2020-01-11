using System;

namespace org.mariuszgromada.math.mxparser.regressiontesting {
	class RunRegTests {
		static void Main(string[] args) {
			//RunTest.Start("syn");
			//RunTest.Start("api");
			RunTest.Start("reg");
#if !NETCOREAPP1_0
			mXparser.consolePrintln(".NET CLR version:" + Environment.Version);
            mXparser.consolePrintln(".NET version:" + System.Diagnostics.FileVersionInfo.GetVersionInfo(typeof(int).Assembly.Location).ProductVersion);
#endif
			if (mXparser.BUIT_FOR.Contains("Stand 1.0") || mXparser.BUIT_FOR.Contains("Stand 1.1") || mXparser.BUIT_FOR.Contains("Stand 1.2") || mXparser.BUIT_FOR.Contains("PCL"))
				Console.WriteLine(mXparser.getConsoleOutput());
		}
	}
}