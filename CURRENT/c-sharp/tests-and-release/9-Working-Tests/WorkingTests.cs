using org.mariuszgromada.math.mxparser;
using org.mariuszgromada.math.mxparser.mathcollection;
using System.Globalization;
using System;

class WorkingTests
{
    static void Main(string[] args)
    {
        License.iConfirmNonCommercialUse("INFIMA");
        Function f = new Function("f(...) = sum( i, 1, [npar], par(i) )");
        f.setVerboseMode();
        mXparser.consolePrintln(f.calculate(1));
        mXparser.consolePrintln(f.calculate(1, 2));
        mXparser.consolePrintln(f.calculate(1, 2, 3));
        mXparser.consolePrintln(f.calculate(1, 2, 3, 4));
        mXparser.consolePrintln(f.calculate(1, 2, 3, 4, 5));
    }
}