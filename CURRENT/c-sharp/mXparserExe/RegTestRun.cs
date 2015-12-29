using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using org.mariuszgromada.math.mxparser.regressiontesting;

namespace mXparserExe
{
    class RegTestRun
    {
        public static void Main(String[] args)
        {
            //Thread T1 = new Thread(RegTestExpression.Start, 536870912);
            //T1.Start();
            Thread T2 = new Thread(RegTestExpressionV2.Start, 536870912);
            T2.Start();
        }
    }
}
