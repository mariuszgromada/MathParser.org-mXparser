![mXparser icon](http://mathparser.org/wp-content/uploads/2016/01/MathParser-org-mXparser-logo-java-csharp.jpg)
# mXparser - a super easy, rich and highly flexible mathematical expressions parser (Math Parser) library for JAVA, Android and C# .NET.
**mXparser** is **a highly flexible parser of mathematical expressions provided as text**. Software delivers easy to use API for JAVA and C# .NET. 

# Supported frameworks
- JAVA: 1.5, 1.6, 1.7, 1.8
- Android - tested with mxparser compiled using jdk 1.7
- .NET / MONO: 2.0, 3.0, 3.5, 4.0, 4.5, 4.6 (CLS)

# Main functionalities:
- **basic operators**, i.e.: +, -, *, ^, !
- **[Boolean logic](http://mathparser.org/api/org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.html)** operators i.e.: or, and, xor
- **[binary relations](http://mathparser.org/api/org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.html)** i.e.: =, <, >
- **[math functions](http://mathparser.org/api/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.html)** (large library of 1-arg, 2-arg, 3-arg - functions) i.e.: sin, cos, Stirling numbers, log, inverse functions
- **[constants](http://mathparser.org/api/org/mariuszgromada/math/mxparser/mathcollection/MathConstants.html)** (large library), i.e.: pi, e, golden ratio
- **n-args functions**, i.e.: [greatest common divisor](http://mathparser.org/api/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.html#gcd-int...-)
- **[iterated summation and product operators](http://mathparser.org/api/org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.html#sigmaSummation-org.mariuszgromada.math.mxparser.Expression-org.mariuszgromada.math.mxparser.Argument-double-double-double-)**
- **[differentiation and integration](http://mathparser.org/api/org/mariuszgromada/math/mxparser/mathcollection/NumericalAnalysis.html)**


# High flexibility functionalities
- **[user defined constants](http://mathparser.org/api/org/mariuszgromada/math/mxparser/Constant.html)** and arguments, both free - and dependent on other arguments + possibility of use in functions
- **[user defined functions](http://mathparser.org/api/org/mariuszgromada/math/mxparser/Function.html)** (both free and depended)
- **[user defined recursive arguments](http://mathparser.org/api/org/mariuszgromada/math/mxparser/RecursiveArgument.html)** + simple (controlled) recursion (1 recursive argument)
- **[user defined recursive functions / expressions (any)](http://mathparser.org/api/org/mariuszgromada/math/mxparser/Function.html#getRecursiveMode--)** - complex, many arguments, no limitation 
- **[internal syntax checking](http://mathparser.org/api/org/mariuszgromada/math/mxparser/Expression.html#checkSyntax--)**
- **[internal help](http://mathparser.org/api/org/mariuszgromada/math/mxparser/Expression.html#getHelp--)**
- other useful functionalities, i.e.: [computing time](http://mathparser.org/api/org/mariuszgromada/math/mxparser/Expression.html#getComputingTime--), expression description.

# Project documentation
### - [mXparser - API (english)](http://mathparser.org/api/)
### - [mXparser - WIKI (english)](https://github.com/mariuszgromada/MathParser.org-mXparser/wiki)
### - [mXparser - Tutorial (english)](http://mathspace.pl/mxparser-tutorial/)
### - [MathSpace.pl - site about math with mXparser examples (polish)](http://mathspace.pl/)
### - [MathParser.org - site about mXparser (english)](http://mathparser.org/)

# mXparser in nutshell

#### _[calculator]_ You want simple calculator...
    Expression e = new Expression("2+3");
    e.calculate();
:+1: 

#### _[parenthesis]_ A calculator supporting parenthesis...
    Expression e = new Expression("2+(3-5)^2");
    e.calculate();
:+1: 

#### _[predefined constants]_ You care about predefined constants...
    Expression e = new Expression("2*pi");
    e.calculate();
:+1: 

#### _[your own constants]_ You need to define your own constants...
    Constant tau = new Constant("tau = 2*pi");
    Expression e = new Expression("3*tau", tau);
    e.calculate();
:+1: 

#### _[built-in functions]_ You enjoy using many built-in functions...
    Expression e = new Expression("sin(2*pi)");
    e.calculate();
:+1: 

#### _[not only unary functions]_ You do not limit yourself to unary functions...
    Expression e = new Expression("gcd(2,5,10,30)");
    e.calculate();
:+1: 

#### _[arguments]_ What about user defined arguments...
    Argument x = new Argument("x = 5");
    Expression e = new Expression("sin(x)");
    e.calculate();
:+1: 

#### _[dependent arguments]_ You are considering dependent arguments...
    Argument x = new Argument("x = 5");
    Argument y = new Argument("y = 2*x", x);
    Expression e = new Expression("sin(y)", y);
    e.calculate();
:+1: 

#### _[logic]_ You need to apply some logic...
    Argument x = new Argument("x = 5");
    Expression e = new Expression("if(sin(x) > 5, 1, 0)", x);
    e.calculate();
:+1:

#### _[Boolean algebra]_ Yes, you are right, there is a support for Boolean algebra!
    Expression e = new Expression("5=6");
    e.calculate();
:+1:

#### _[binary relations]_ And for binary relations as well!
    Expression e = new Expression("5 <= 6");
    e.calculate();
:+1:

## mXparser i cool! But this is only the begging, we are just warming up!

#### _[iterated operators]_ You want to play with iterated operators...
    Expression e = new Expression("sum(i, 1, 10, 2*i^2 + pi)");
    e.calculate();
:+1:

#### _[iterated operators]_ You want to iterate differently by not necessarily whole numbes...
    Expression e = new Expression("prod(i, 1, 5, i, 0.5)");
    e.calculate();
:+1:

#### _[iterated operators]_ You want to have more fun with math...
    Argument x = new Argument("x = pi/2");
    Expression e20 = new Expression("sum(n,0,10,(-1)^n*(x^(2*n+1))/(2*n+1)!)", x);
    e.calculate();
:+1:

#### _[calculus - differentiation]_ You still want more fun with calculus operations, i.e. differentiation...
    Argument x = new Argument("x = pi/2");
    Expression e = new Expression("cos(x)-der(sin(x), x)", x);
    e.calculate();
:+1:

#### _[calculus - integrals]_ And definite integrals as well...
    Expression e = new Expression("2*int(sqrt(1-x^2), x, -1, 1)");
    e.calculate();
:+1:

##  mXparser is even cooler! It is time to ask about ...

#### _[user defined functions]_ user defined functions...
    Function f = new Function("f(x,y) = sin(x) + cos(y)");
    f.calculate(1,2);
    Expression e = new Expression("f(1,2) - 10", f);
    e.calculate();
:+1:

#### _[user defined recursive function]_ Recursion is your desire...
    Function f = new Function("f(n) = if( n>0, n*f(n-1), 1)");
    f.calculate()
:+1:

#### _[user defined recursive function]_ Any kind of recursion...
    Function Cnk = new Function("Cnk(n,k) = if(k>0, if(k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)");
    Cnk.calculate()
:+1:

## If anything above matches you then mXparser is a good choce! mXparser is freely distributed under Simplified BSD licence, but still you can give credits to the author, and even donate if you wish :+1: 

#### _[grammar and syntax checking]_ mXparser can interact with end users as it supports syntax checking.
    Expression e = new Expression("2+1/a");
    e.checkSyntax();
    mXparser.consolePrintln(e.getErrorMessage());
    
# Enjoy :-)

Best regards,
*Mariusz Gromada*
