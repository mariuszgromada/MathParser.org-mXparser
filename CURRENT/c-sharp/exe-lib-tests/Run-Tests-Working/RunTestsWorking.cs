using org.mariuszgromada.math.mxparser;
using System;


namespace phelipemartins.caseinsensitivity {
	class FunctionDeclarationPerfTests {
		static Function fs = new Function("f(x1,x2,x3,x4)=sin(x1)+cos(x2)+x3^2+x4");
		public double FromStatic(params double[] parameters)
		{
			return fs.calculate(parameters);
		}
		public static double TestAlwaysNew(int n)
		{
			double r = 0;
			double start = mXparser.currentTimeMillis();
			for (int x1 = 1; x1 <= n; x1++)
			{
				for (int x2 = 1; x2 <= n; x2++)
					for (int x3 = 1; x3 <= n; x3++)
						for (int x4 = 1; x4 <= n; x4++)
						{
							Function f = new Function("f(x1,x2,x3,x4)=sin(x1)+cos(x2)+x3^2+x4");
							r += f.calculate(x1, x2, x3, x4);
						}
			}
			double end = mXparser.currentTimeMillis();
			Console.WriteLine("--> always new calc result: " + r);
			return  end - start;
		}
		public static double FromPrecomplied(int n)
		{
			double r = 0;
			Function f = new Function("f(x1,x2,x3,x4)=sin(x1)+cos(x2)+x3^2+x4");
			double start = mXparser.currentTimeMillis();
			for (int x1 = 1; x1 <= n; x1++)
			{
				for (int x2 = 1; x2 <= n; x2++)
					for (int x3 = 1; x3 <= n; x3++)
						for (int x4 = 1; x4 <= n; x4++)
						{
							r += f.calculate(x1, x2, x3, x4);
						}
			}
			double end = mXparser.currentTimeMillis();
			Console.WriteLine("--> pre-compiled calc result: " + r);
			return  end - start;
		}
		public static double FromPrecompliedOtherConstr(int n)
		{
			double r = 0;
			Function f = new Function("f(x1,x2,x3,x4)=sin(x1)+cos(x2)+x3^2+x4");
			Argument ax1 = f.getArgument("x1");
			Argument ax2 = f.getArgument("x2");
			Argument ax3 = f.getArgument("x3");
			Argument ax4 = f.getArgument("x4");
			double start = mXparser.currentTimeMillis();
			for (int x1 = 1; x1 <= n; x1++)
			{
				ax1.setArgumentValue(x1);
				for (int x2 = 1; x2 <= n; x2++)
				{
					ax2.setArgumentValue(x2);
					for (int x3 = 1; x3 <= n; x3++)
					{
						ax3.setArgumentValue(x3);
						for (int x4 = 1; x4 <= n; x4++)
						{
							ax4.setArgumentValue(x4);
							r += f.calculate();
						}
					}
				}
			}
			double end = mXparser.currentTimeMillis();
			Console.WriteLine("--> pre-compiled other constr calc result: " + r);
			return  end - start;
		}
		public static void PrintResult(String name, int n, double time)
		{
			int niter = n * n * n * n;
			Console.WriteLine(name + " : " + time + " ms " + (n*n*n*n) + " iterations " + (int)((1000.0 / time) * niter) + "/s");
		}
		static void Main(string[] args) {
			/*
			int n = 20;
			double timeFromPrecomplied = FromPrecomplied(n);
			timeFromPrecomplied = FromPrecomplied(n);
			timeFromPrecomplied = FromPrecomplied(n);
			timeFromPrecomplied = FromPrecomplied(n);
			timeFromPrecomplied = FromPrecomplied(n);
			timeFromPrecomplied = FromPrecomplied(n);
			double timeFromPrecompliedOtherCOnstr = FromPrecompliedOtherConstr(n);
			timeFromPrecompliedOtherCOnstr = FromPrecompliedOtherConstr(n);
			timeFromPrecompliedOtherCOnstr = FromPrecompliedOtherConstr(n);
			timeFromPrecompliedOtherCOnstr = FromPrecompliedOtherConstr(n);
			timeFromPrecompliedOtherCOnstr = FromPrecompliedOtherConstr(n);
			timeFromPrecompliedOtherCOnstr = FromPrecompliedOtherConstr(n);
			PrintResult("Pre-compiled ", n, timeFromPrecomplied);
			PrintResult("Pre-compiled other constr ", n, timeFromPrecompliedOtherCOnstr);
			*/
			Argument x = new Argument("x = 2");
			Function f = new Function("f", "sin(x)", "x");
			Expression e = new Expression("   der( int(f(t), t, 0, x), x) -  f(x   )   ", f, x);
			mXparser.consolePrintTokens(e.getCopyOfInitialTokens());
		}
	}
}
