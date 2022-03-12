using System;
using org.mariuszgromada.math.mxparser;

class WorkingTests
{
	static void Main(string[] args)
	{
		Argument x = new Argument("x = 10");
		Expression e = new Expression("1+2*x", x);
		mXparser.consolePrintln(e.getExpressionString() + " = " + e.calculate());
	}
}