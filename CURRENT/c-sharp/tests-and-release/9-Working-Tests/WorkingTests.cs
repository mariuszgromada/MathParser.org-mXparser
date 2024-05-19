using org.mariuszgromada.math.mxparser;

class WorkingTests
{
    static void Main(string[] args)
    {
        License.iConfirmNonCommercialUse("INFIMA");
        Expression e = new Expression("3+2");
        double v = e.calculate();
        mXparser.consolePrintln(v);
    }
}