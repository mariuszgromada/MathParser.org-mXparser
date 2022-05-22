import org.mariuszgromada.math.mxparser.*;
import org.mariuszgromada.math.mxparser.mathcollection.MathConstants;
import org.mariuszgromada.math.mxparser.mathcollection.NumberTheory;
import org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions;
import org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions;
import org.mariuszgromada.math.mxparser.parsertokens.KeyWord;
import org.mariuszgromada.math.mxparser.parsertokens.Token;

import java.util.ArrayList;
import java.util.List;
import java.io.*;

public class WorkingTests {

	public static String stringRepeat(String s, int n) {
		String o = "";
		for (int i = 0; i < n; i++) { o = o + s; }
		return o;
	}
	public static void main(String[] args) {
		mXparser.consolePrintLicense();
	}
}