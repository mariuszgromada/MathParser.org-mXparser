import org.mariuszgromada.math.mxparser.*;

public class WorkingTests {

	public static void main(String[] args) {
		/*
		Argument x = new Argument("x = 10");
		Expression e = new Expression("1+2*x", x);
		mXparser.consolePrintln(e.getExpressionString() + " = " + e.calculate());
		*/
		Expression e = new Expression("2pi2√√pi");
		e.setVerboseMode();
		//Expression e = new Expression("sin(pi)∜2∛3√4+∜2∛√4+pi√4");
		//mXparser.consolePrintln(e.calculate());
		//mXparser.consolePrintln(e.getErrorMessage());
		mXparser.consolePrintTokens(e.getCopyOfInitialTokens());
		mXparser.consolePrintHelp("5.0");
	}

}
