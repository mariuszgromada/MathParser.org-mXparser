                 mXparser - Math Parser Java C# Library beta
         A flexible mathematical expressions parser for JAVA and C# .NET

1.0.1 - Fixed BAG BIG Problem with evaluation without parenthesis - ID: 2985722 
http://sourceforge.net/tracker/index.php?func=detail&aid=2985722&group_id=300839&atid=1268726
1.0.2 - Fixed bug in user defined function related to RecursiveArguments
1.0.3:
   - Fixed bug during indirect recursion (infinite loops while syntax checking)
   - Some minor modification of code making it more portable across platforms

 You may use this software under the condition of Simplified BSD License:

Copyright 2015 MARIUSZ GROMADA. All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are
permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice, this list of
      conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice, this list
      of conditions and the following disclaimer in the documentation and/or other materials
      provided with the distribution.

THIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA ``AS IS'' AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL MARIUSZ GROMADA OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those of the
authors and should not be interpreted as representing official policies, either expressed
or implied, of MARIUSZ GROMADA.

If you have any questions/bugs feel free to contact:

    Mariusz Gromada
    mariusz.gromada@mathspace.pl
    http://mathspace.pl/
    http://mxparser.sourceforge.net/

mXparser tutorial:
doc/tutorial.html

mXparser API:
doc/index.html

If you would like to run some regression testing just hit commands listed below:

JAVA:
java -Xss515m -cp mxparser.jar org.mariuszgromada.math.mxparser.Tutorial
java -Xss515m -cp mxparser.jar org.mariuszgromada.math.mxparser.regressiontesting.RegTestExpression
java -Xss515m -cp mxparser.jar org.mariuszgromada.math.mxparser.regressiontesting.RegTestExpressionAPI
java -Xss515m -cp mxparser.jar org.mariuszgromada.math.mxparser.regressiontesting.RegTestSyntax

C#:
[Reflection.Assembly]::LoadFile("...path\to\mxparser.dll")
[org.mariuszgromada.math.mxparser.Tutorial]::Start(0)
[org.mariuszgromada.math.mxparser.regressiontesting.RegTestExpression]::Main(0)
[org.mariuszgromada.math.mxparser.regressiontesting.RegTestExpressionAPI]::Start(0)
[org.mariuszgromada.math.mxparser.regressiontesting.RegTestSyntax]::Start(0)