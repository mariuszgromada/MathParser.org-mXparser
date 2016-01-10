            mXparser - Math Parser Java Android C# .NET (CLS) Library beta
         A flexible mathematical expressions parser for JAVA and C# .NET (CLS)

v.2.2.0 (2016-01-10): Android is coming!
    * mXparser_jdk1.7.jar - tested with Android !!!
	    - all regression tests passed
		
    * New public methods in the mXparser class
	    - static String getConsoleOutput() - returns as string output
		  produced by mXparser.consolePrin/ln() methods. Using this method
		  you can capture the output to the string variable.
		- static void resetConsoleOutput() - resets the string
		  representing console output
		- Added CONSOLE/PREFIX & CONSOLUE_OUTPUT_STRING/PREFIX + configuration
		
	* Method modified in mXparser class
	    - consolePrintln()
		- consolePrintln(Object o)
		- consolePrint(Object o)
	    Above methods are outputing also to string representing
		console output.
		
	* New RunTest method in regressiontesting, method executes 
	  specified scenario according to below params:
	    - reg - Expression regression tests
		- api - mXparser API regression tests
		- syn - Syntax checking regression tests
		- perf - Performance tests
		
    * Code clean-up
	    - blank lines
		- trailing white spaces
		- src folders structure for c-sharp is now the same as in java
		 
v.2.1.1-1 (2016-01-07): 
    * Binaries for java: 1.5, 1.6, 1.7, 1.8
	* Binaries for .NET: 2.0, 3.0, 3.5, 4.0, 4.5, 4.6
		 
v.2.1.1 (2016-01-04): 
    * fixed bug w min/max function
		 
v.2.1.0 (2016-01-02): 
    * New static methods in class mxparser
        - mXparser.numberToHexString(number) + overloads: int, long, double
        - mXparser.hexString2AsciiString(String hexString)
        - mXparser.numberToAsciiString(number) + overloads: int, long, double
		- additional regression tests for the above methods
		
	* Hello World examples of how to use mXparser binary library (manual includes:
	  projects, code, screenshots) for:
	    - JAVA (project done in Eclipse Mars 1)
		- C# (project done in Visual Studio 2015)
		- Visual Basic (project done in Visual Studio 2015)
		- C++/CLI (project done in Visual Studio 2015)
		- F# (project done in Visual Studio 2015)

v.2.0.0 (2015-12-31): Major update of the library providing more intuitive and
much simpler to use API, no changes to the MathCollection.

    * Methods removed: setRecursiveMode(), disableRecursiveMode()
        - No need to manually mark recursive mode, mXparser is recognizing this
		   mode automatically.
        - New handy and super easy (natural to use) constructors:

    * Constructors for user defined arguments (Argument / RecursiveArgument
	  classes), user defined constant (Constant class), user defined functions
	  (Function class).

    Sample code:

       Constant c = new Constant("c=5");
       Constant c = new Constant("c=5+2");
       Argument x = new Argument("x=5");
       Constant c = new Constant("c=5+x", x);
       Argument y = new Argument("y=2*x", x);
       RecursiveArgument f = new RecursiveArgument("f(n)=n*f(n-1)");
       Function f = new Function("f(x,y)=sin(x)+y");
       Function f = new Function("f(n)=if( n>0, n*f(n-1), 1)");
	   
	   
    * New methods: addDefinitions(PrimitiveElement... elements),
	  removeDefinitions(PrimitiveElement... elements)

    * New class PrimitiveElement introduced only to simplify constructors of
	  arguments, constants, functions and expressions.

	* Classes Argument, RecursiveArgument, Constant, Functions inherits now
	  from PrimitiveElement class, it means you can call one method for
	  adding / removing definitions by passing comma separated list of elements
	  that can be different type (supported types: Argument, RecursiveArgument,
	  Constant, Function).

	* Method addArguments(), addConstants(), addFunctions(),removeArguments(),
	  removeConstants(), removeFunctions() are still public, but this will
	  change in the future.

	Sample code:

       Constant c = new Constant("c=5");
       Argument x = new Argument("x=10/2");
       Expression e = new Expression("c+x");
       e.addDefinitions(x,c);
	   
    * Modified constructors for classes Argument, RecursiveArgument, Constant,
	  Function

    * Constructors relying on directly given argument / constant / function
	  name are now checking given name according to the predefined regular
	  expression (the name must start with letters, and then
	  digits / underscores/ letters are allowed).

	* Constructors removed – all constructors relying on ArrayList/List
	  of arguments, constants, functions or on varidic type Argument, Constant,
	  Function were substituted based on comma separated prams list of
	  PrimitiveElement type, where Argument, Constant, Functions
	  extend / inherit PrimitiveElement).
	  
    * C# library is now Common Language Specification Compliant, it means
	  mXparser is available right now to many other .NET languages
	  (providing exactly the same API), including:

       - C#
       - Visual Basic .NET
       - C++/CLI
       - F#
	   
    * Other changes

       - New extended list of regression tests (to cover new methods,
	     constructors, etc...)
	   - Implemented Performance Tests
       - Source code converted from cp150 to UTF-8
       - Source code reorganization (some part of package level code of the
	     Expression class was moved to the mXparser class)
       - Some bugs fixed (for sure there are others)
	   
v.1.0.3 (2015-12-15):
    * Fixed bug during indirect recursion (infinite loops while syntax checking)
	  Some minor modification of code making it more portable across platforms

v.1.0.2 (2015-12-06):
    * Fixed bug in user defined function related to RecursiveArguments
	
v.1.0.1 (2010-04-17):
    * Fixed BAG BIG Problem with evaluation without parenthesis
	  ID: 2985722http://sourceforge.net/tracker/index.php?func=detail&aid=2985722&group_id=300839&atid=1268726
	  
v.1.0.0 (2010-02-01):
    * Initial release

 You may use this software under the condition of Simplified BSD License:

Copyright 2010-2016 MARIUSZ GROMADA. All rights reserved.

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
    http://mathparser.org/
    http://github.com/mariuszgromada/MathParser.org-mXparser
    http://mariuszgromada.github.io/MathParser.org-mXparser/
    http://mxparser.sourceforge.net/
    http://bitbucket.org/mariuszgromada/mxparser/
    http://mxparser.codeplex.com/

mXparser tutorial:
doc/tutorial.html

mXparser API:
doc/index.html

If you would like to run some regression testing just hit commands listed below:

JAVA:
java -cp mxparser.jar org.mariuszgromada.math.mxparser.Tutorial
java -cp mxparser.jar org.mariuszgromada.math.mxparser.regressiontesting.RunTest reg
java -cp mxparser.jar org.mariuszgromada.math.mxparser.regressiontesting.RunTest api
java -cp mxparser.jar org.mariuszgromada.math.mxparser.regressiontesting.RunTest syn
java -cp mxparser.jar org.mariuszgromada.math.mxparser.regressiontesting.RunTest perf
java -cp mxparser.jar org.mariuszgromada.math.mxparser.regressiontesting.RunTest reg api syn perf

C# (using PowerShell):
[Reflection.Assembly]::LoadFile("full\exact\path\to\mxparser.dll")
[org.mariuszgromada.math.mxparser.Tutorial]::Start()
[org.mariuszgromada.math.mxparser.regressiontesting.RunTest]::Start("reg")
[org.mariuszgromada.math.mxparser.regressiontesting.RunTest]::Start("api")
[org.mariuszgromada.math.mxparser.regressiontesting.RunTest]::Start("syn")
[org.mariuszgromada.math.mxparser.regressiontesting.RunTest]::Start("perf")