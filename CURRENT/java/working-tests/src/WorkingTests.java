import org.mariuszgromada.math.mxparser.*;

public class WorkingTests {

	public static void main(String[] args) {
		Argument x = new Argument("x = 10");
		Expression e = new Expression("1+2*x", x);
		mXparser.consolePrintln(e.getExpressionString() + " = " + e.calculate());
	}

}