using org.mariuszgromada.math.mxparser;
using System;
using System.Collections.Generic;

namespace SignalsExample
{

	public class SignalFunction : FunctionExtension
	{
		private List<double> signals; /* this is a store for the signals */
		private int index; /* this is a function parameter */

		public SignalFunction()
		{
			signals = new List<double>();
		}

		public void addSignal(double v)
		{
			signals.Add(v);
		}

		public double calculate()
		{
			if (index <= 0)
			{
				int i = signals.Count - (-index + 1);
				if ( (i >= 0) && (i < signals.Count))
					return signals[i];
				else
					return Double.NaN;
			} else return Double.NaN;
		}

		public FunctionExtension clone()
		{
			SignalFunction sf = new SignalFunction();

			foreach (double v in signals)
				sf.addSignal(v);

			sf.index = this.index;

			return sf;
		}

		public string getParameterName(int parameterIndex)
		{
			if (parameterIndex == 0) return "index";
			return "";
		}

		public int getParametersNumber()
		{
			return 1; /* only one param - index*/
		}

		public void setParameterValue(int parameterIndex, double parameterValue)
		{
			if (parameterIndex == 0) index = (int)parameterValue;
		}
	}

	class SignalsExample {
		static void Main(string[] args) {
			SignalFunction sf = new SignalFunction();
			Function v = new Function("v", sf);
			Expression e = new Expression("v(0) + v(-1) + v(-2)", v);
			sf.addSignal(1);
			sf.addSignal(2);
			sf.addSignal(3);
			mXparser.consolePrintln(e.calculate());
			sf.addSignal(4);
			mXparser.consolePrintln(e.calculate());
			sf.addSignal(5);
			mXparser.consolePrintln(e.calculate());
			/* now last n signals average */
			Function f = new Function("f(n) = sum(i, 0, n-1, v(-i) ) / n", v);
			mXparser.consolePrintln(f.calculate(1));
			mXparser.consolePrintln(f.calculate(2));
			mXparser.consolePrintln(f.calculate(3));
			mXparser.consolePrintln(f.calculate(4));
			mXparser.consolePrintln(f.calculate(5));
		}
	}

}
