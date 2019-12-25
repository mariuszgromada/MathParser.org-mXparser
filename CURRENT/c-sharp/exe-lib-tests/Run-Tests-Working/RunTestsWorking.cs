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


	public class MySumListFunction : FunctionExtensionVariadic
	{
		public double calculate(params double[] parameters)
		{
			if (parameters == null) return Double.NaN;
			if (parameters.Length == 0) return 0;
			double sum = 0;
			foreach (double x in parameters)
				sum += x;
			return sum;
		}
		public FunctionExtensionVariadic clone()
		{
			return this;
		}
	}

	class SignalsExample {
		static void Main(string[] args) {

			/*
			Argument x = new Argument("x = 2");
			Argument y = new Argument("y = 2*x", x);
			Argument z = new Argument("z = y^2", y);
			Expression e1 = new Expression("2*z", z);
			Expression e2 = new Expression("3*z", z);
			Console.WriteLine("01. e1 syntax status = " + e1.getSyntaxStatus());
			Console.WriteLine("02. e2 syntax status = " + e2.getSyntaxStatus());
			e1.checkSyntax();
			e2.checkSyntax();
			*/
			/* now we know systax status and it is kept in expression */
			/*
			Co0nsole.WriteLine("03. e1 syntax status = " + e1.getSyntaxStatus());
			Console.WriteLine("04. e2 syntax status = " + e2.getSyntaxStatus());
			Console.WriteLine("05. e1 value = " + e1.calculate());
			Console.WriteLine("06. e2 value = " + e2.calculate());
			x.setArgumentValue(3);
			*/
			/* just change int te argument value does not affect syntax status */
			/*
			Console.WriteLine("07. e1 syntax status = " + e1.getSyntaxStatus());
			Console.WriteLine("08. e2 syntax status = " + e2.getSyntaxStatus());
			Console.WriteLine("09. e1 value = " + e1.calculate());
			Console.WriteLine("10. e2 value = " + e2.calculate());
			*/
			/* but let's change 'y' definition, not the value */
			//y.setArgumentExpressionString("3*x");
			/* here all elements that depends on 'y' are update to syntax status unknown */
			//Console.WriteLine("11. e1 syntax status = " + e1.getSyntaxStatus());
			//Console.WriteLine("12. e2 syntax status = " + e2.getSyntaxStatus());
			//Console.WriteLine("13. e1 value = " + e1.calculate());
			//Console.WriteLine("14. e2 value = " + e2.calculate());
			/* but after caluclation it syntax status is known again */
			//Console.WriteLine("15. e1 syntax status = " + e1.getSyntaxStatus());
			//Console.WriteLine("16. e2 syntax status = " + e2.getSyntaxStatus());

			//Function sumlist = new Function("suml", new MySumListFunction());
			//Expression e = new Expression("suml(1,2,3,4)", sumlist);
			//Console.WriteLine(e.getExpressionString() + " = " + e.calculate());

			/*
			Expression e1 = new Expression("Pi(10000000)");
			Console.WriteLine(e1.getExpressionString() + " = " + e1.calculate() + "   computing time = " + e1.getComputingTime() + "s");
			Expression e2 = new Expression("if( 0 > 1, Pi(10000000), 1)");
			Console.WriteLine(e2.getExpressionString() + " = " + e2.calculate() + "   computing time = " + e2.getComputingTime() + "s");
			*/
			double a = Double.NaN;
			double b = 0.1;
			double c = 0.1;
			double r = a + b + c;
			Console.WriteLine(r - 0.3);
			Decimal da = new decimal(a);
			Decimal db = new decimal(b);
			Decimal dc = new decimal(c);
			Decimal dr = da + db + dc;
			double rr = Decimal.ToDouble(dr);
			Console.WriteLine(rr - 0.3);
		}
	}

}
