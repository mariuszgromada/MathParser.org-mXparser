			mXparser - Math Parser Java Android C# .NET (CLS) Library
	  A flexible mathematical expressions parser for JAVA and C# .NET (CLS)

                       *** Donation through PayPal ***
     *** Did you find the software useful? Please consider donation ***
                    *** http://mathparser.org/donate/ ***

                    or purchase the commercial license
           *** https://mathparser.org/order-commercial-license/ ***
                     *** https://payhip.com/INFIMA ***
					
           *** Scalar Scientific Calculator, Charts & Scripts ***					
*** https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite ***
*** https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro ***
                        *** https://scalarmath.org/ ***


v.6.0.0 (2024-05-19): Picon - Translations, New operators

     * Translations: French, German, Italian, Polish, Portuguese, Spanish:
       - https://github.com/mariuszgromada/MathParser.org-mXparser/issues/303
       - https://github.com/mariuszgromada/MathParser.org-mXparser/issues/304
       - https://github.com/mariuszgromada/MathParser.org-mXparser/issues/305
       - https://github.com/mariuszgromada/MathParser.org-mXparser/issues/306
       - https://github.com/mariuszgromada/MathParser.org-mXparser/issues/307
       - https://github.com/mariuszgromada/MathParser.org-mXparser/issues/308

     * New bitwise operators: NAND, NOR, XNOR
       - https://github.com/mariuszgromada/MathParser.org-mXparser/issues/152

     * New operators for division:
       - Used in Central & Eastern Europe ":" : https://github.com/mariuszgromada/MathParser.org-mXparser/issues/318
       - Integer division (quotient): https://github.com/mariuszgromada/MathParser.org-mXparser/issues/285

     * New binaries: .NET8, jdk20, jdk21, jdk22
     * Bugs fixed: #310, #298

v.5.2.1 (2023-03-08): Orion - Performance improvement

     * Performance improvement for calculations in the loop: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/296
     * Claculation Steps Register fix: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/297

v.5.2.0 (2023-01-29): Orion - Improvement and standardization of descriptions and messages.
                      Definition of your own translations. Exporting help in multiple formats.
                      Clones for thread safe.
					  
     * Improvement and standardization of built-in elements description: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/290
     * Improvement and standardization of error messages: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/286
     * Definition of your own translations: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/294
     * Help content in the CSV format: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/277
     * Help content in the HTML format: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/276
     * Help content in the Markdown format: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/275
     * Help content in the JSON format: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/274
     * Clones for thread safe: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/293
     * Bug fixed #291 Euler polynomial function producing wrong results: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/291
     * Bug fixed #292 Implied Multiplication bug when blank character separates: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/292
     * Bug fixed #283 Unnecessary newline at the end in getErrorMessage(): https://github.com/mariuszgromada/MathParser.org-mXparser/issues/283
     * Bug fixed #284 Unnecessary space in function expression string returned by getErrorMessage(): https://github.com/mariuszgromada/MathParser.org-mXparser/issues/284

v.5.1.0 (2022-11-13): Libris - Serialization Support + Additional Probability Distributions
     * Serialization support: #207 https://github.com/mariuszgromada/MathParser.org-mXparser/issues/207
     * F-Snecdecor distribution: #238 https://github.com/mariuszgromada/MathParser.org-mXparser/issues/238

v.5.0.7 (2022-08-21): Fix #271, #269, #268, #266, #265
     * Canonical rounding not working in case of inverse trigonometric functions while degrees mode applied: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/271
     * Sum function endless loops under certain conditions when checking syntax: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/269
     * 0.035%=3.5000000000000005E-4: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/268
     * Mistakes in the examples for the new functions cChi2, pChi2 y qChi2: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/266
     * Tokenization fix in case of Implied Multiplication and known keywords that are functions, but no parameters are provide: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/265

v.5.0.6 (2022-05-31): Fix #263, #262
     * Possible StackOverflow in some recursive functions: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/263
     * Possible OutOfMemory in some functions: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/262

v.5.0.5 (2022-05-29): Fix #261
     * Crash in Java powInt function
     * Tetration special case (base = 1)

v.5.0.4 (2022-05-22): Leonis - a major release: Implied Multiplication, Unicode Math Symbols, Additional Probability Distributions, Calculation Steps Register

     * Implied Multiplication: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/243
     * Unicode Math Symbols: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/249
     * Calculation Steps Register: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/260
     * Student's t-distribution: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/256
     * Chi-Squared Distribution: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/257
     * An Attempt To Fix Expression String: https://github.com/mariuszgromada/MathParser.org-mXparser/issues/254
     * Minor Bug fixing
     * Regression tests refactoring
     * License update: https://github.com/mariuszgromada/MathParser.org-mXparser/blob/master/LICENSE.txt

v.4.4.2 (2020-01-25): Gemoni - bugs fixing

     * #200 System.OutOfMemoryException: Array dimensions exceeded supported range (https://github.com/mariuszgromada/MathParser.org-mXparser/issues/200)
     * #199 cancelCurrentCalculation does not stop for some expressions (https://github.com/mariuszgromada/MathParser.org-mXparser/issues/199)

v.4.4.0 (2020-01-14): Gemoni - API improvement

     * Canonical rounding: Bye bye floating point arithmetic artifacts

	ULP rounding is switched of as a default setting (can be enabled / disabled). As a default canonical rounding is switched on (can be disabled / enabled). New methods:

		- mXparser.enableCanonicalRounding()
		- mXparser.disableCanonicalRounding()
		- mXparser.setCanonicalRounding(boolean)
		- mXparser.checkIfCanonicalRounding

		Example 1

		    Expression e = new Expression("0.1 + 0.1 + 0.1");
    		System.out.println("Pure Java             : 0.1 + 0.1 + 0.1 = " + (0.1 + 0.1 + 0.1));
    		System.out.println("mXparser              : 0.1 + 0.1 + 0.1 = " + e.calculate());
		    mXparser.disableCanonicalRounding();
		    System.out.println("mXparser canonical off: 0.1 + 0.1 + 0.1 = " + e.calculate());
		    ===========
		    Pure Java             : 0.1 + 0.1 + 0.1 = 0.30000000000000004
		    mXparser              : 0.1 + 0.1 + 0.1 = 0.3
		    mXparser canonical off: 0.1 + 0.1 + 0.1 = 0.30000000000000004

		Example 2

		    Expression e = new Expression("(-1/6.2)^(-3)");
		    System.out.println("Pure Java             : (-1/6.2)^(-3) = " + Math.pow(-1/6.2, -3));
		    System.out.println("mXparser              : (-1/6.2)^(-3) = " + e.calculate());
		    mXparser.disableCanonicalRounding();
		    System.out.println("mXparser canonical off: (-1/6.2)^(-3) = " + e.calculate());
			===========
		    Pure Java             : (-1/6.2)^(-3) = -238.32800000000003
		    mXparser              : (-1/6.2)^(-3) = -238.328
		    mXparser canonical off: (-1/6.2)^(-3) = -238.32800000000003

	 * Argument extension - analogy to Function Extension

	Now you can define user arguments implementing your own algorithm in source code.

		Example

			class PiMultArgExt implements ArgumentExtension {
		    	private int multiple = 0;
		    	public double getArgumentValue() {
				    multiple++;
		    		return  MathConstants.PI * multiple;
		    	}
		    	public PiMultArgExt clone() {
				    return new PiMultArgExt();
		    	}
		    }
    
		    Argument x = new Argument("x", new PiMultArgExt());
		    Expression e = new Expression("x/pi", x);
		    System.out.println("1st calc exec: " + e.calculate());
		    System.out.println("2nd calc exec: " + e.calculate());
		    System.out.println("3rd calc exec: " + e.calculate());
		    ===========
		    1st calc exec: 1.0
		    2nd calc exec: 2.0
		    3rd calc exec: 3.0

	* Bugs fixed

		- #168, #18 Exact special trigonometric values
		- #192, #178 Logical operators precedence
		- #172 "x + 4 * - 2"

v.4.3.3 (2019-01-27): Bug fix

	* No Operator between Argumant and Parentheses #170 https://github.com/mariuszgromada/MathParser.org-mXparser/issues/170
												
v.4.3.2 (2019-01-25): Nuget package fix

	* Could not load file or assembly MathParser.org-mXparser #171 https://github.com/mariuszgromada/MathParser.org-mXparser/issues/171

v.4.3.0 (2019-01-19): Caprica - API improvement

	* Cancel ongoing calculation
		- mXparser.cancelCurrentCalculation()
		- mXparser.resetCancelCurrentCalculationFlag();
		
	* Set default options
		- mXparser.setDefaultOptions()
		
	* User defined constants / units
		- constant name can be surrounded by square bracket, i.e. [const]
		- Expression.getMissingUserDefinedUnits()
		
	* Bug fixing
		- #153, #162 Endless Loop
		- #164 PrimeCache out of memory - handling error / exception

v.4.2.0 (2018-07-15): Aquaria - Major release

	* Broader types of decimal number literals

		- No leading zero, i.e.: .2, .312, -.21

	* Fraction as number literals
	
		- 1_2 is recognized as 1/2
		- 2_3_4 is recognized as 2 + 3/4
		- 17_5 is recognized as 17/5
		- Just use Expression e = new Expression("2_3_2 + 1_2")

	* Double to fraction conversion

		- mXparser.toFraction(double value) - double[]
		- mXparser.toMixedFraction(double value) - double[]
		- mXparser.fractionToString(double[] fraction) - String
		- mXparser.toFractionString(double value) - String
		- mXparser.toMixedFractionString(double value) - String

	* Disable / enable almost int rounding

		- mXparser.enableAlmostIntRounding()
		- mXparser.disableAlmostIntRounding()
		- mXparser.checkIfAlmostIntRounding()
		- mXparser.getEpsilon()
		- mXparser.setEpsilon()
		
	* Variadic user defined functions

		- Function f = new Function("f(...) = sum(i, 1, [npar], par(i)^2 )");
		- [npar] - number of available parameters
		- par(i) - parameter value
		- body extended is supported

	* New special functions

		- Gamma(x) - Gamma special function Γ(s)
		- LambW0(x) - Lambert-W special function, principal branch 0, also called the omega function or product logarithm
		- LambW1(x) - Lambert-W special function, branch -1, also called the omega function or product logarithm
		- sgnGamma(x) - Signum of Gamma special function, Γ(s)
		- logGamma(x) - Log Gamma special function, lnΓ(s)
		- diGamma(x) - Digamma function as the logarithmic derivative of the Gamma special function, ψ(x)
		- GammaL(s,x) - Lower incomplete gamma special function, γ(s,x)
		- GammaU(s,x) - Upper incomplete Gamma special function, Γ(s,x)
		- GammaP(s,x), GammaRegL(s,x) - Lower regularized P gamma special function, P(s,x)
		- GammaQ(s,x), GammaRegU(s,x) - Upper regularized Q Gamma special function, Q(s,x)
		- Beta(x,y) - The Beta special function B(x,y), also called the Euler integral of the first kind
		- logBeta(x,y) - The Log Beta special function ln B(x,y), also called the Log Euler integral of the first kind, ln B(x,y)
		- BetaInc(x,a,b) - The incomplete beta special function B(x; a, b), also called the incomplete Euler integral of the first kind
		- BetaI(x,a,b), BetaReg(x,a,b) - The regularized incomplete beta (or regularized beta) special function I(x; a, b), also called the regularized incomplete Euler integral of the first kind
		
	* Degrees / Radians mode for trigonometrix

		- mXparser.setDegreesMode()
		- mXparser.setRadiansMode()
		- mXparser.checkIfDegreesMode()
		- mXparser.checkIfRadiansMode()	

	* New operator - Tetration

		- a^^n is recognized as a^a^a...^a - n times		

	* Bugs fixed

		- Argument.checkSyntax() https://github.com/mariuszgromada/MathParser.org-mXparser/issues/145
		- Endless loop with factorial https://github.com/mariuszgromada/MathParser.org-mXparser/issues/136
		- StringIndexOutOfBoundsException asking for tokens of empty expression https://github.com/mariuszgromada/MathParser.org-mXparser/issues/135
		- Function.checkSyntax() always returns true https://github.com/mariuszgromada/MathParser.org-mXparser/issues/111
		- Syntax for unary complement https://github.com/mariuszgromada/MathParser.org-mXparser/issues/114
		- Iterative operators descending sequence https://github.com/mariuszgromada/MathParser.org-mXparser/issues/119
		- checkSyntax() bug https://github.com/mariuszgromada/MathParser.org-mXparser/issues/80
		- Very very very long processing time of gcd https://github.com/mariuszgromada/MathParser.org-mXparser/issues/91
		- Priorities of "if", "iff" and other calculus operations https://github.com/mariuszgromada/MathParser.org-mXparser/issues/82

	* Other framework support (binaries)

		- .NET Core: 2.0, 2.1
		- .NET Standard: 2.0
		- .NET Framework: 4.7, 4.7.2
		- JAVA: 1.9, 1.10

	* New regression tests - current tests coverage:
	
		- 1155 expression related tests
		- 245 syntax related tests
		- 65 API related tests
		- 20 performance tests
		
https://github.com/mariuszgromada/MathParser.org-mXparser/milestone/2

v.4.1.1 (2017-07-28): Aeries - checkSyntax() bug fixing

	* Fixed: checkSyntax() returns true "already checked no errors" #75
	https://github.com/mariuszgromada/MathParser.org-mXparser/issues/75
					
v.4.1.0 (2017-06-30): Aeries

	* Various numeral systems
	
		- Binary numbers literals
		- Octal numbers literals
		- Hexadecimal numbers literals
		- Number literals with base between 1 and 36
		- base(b, digit1, ..., digitn) function to generate numbers in any given base
		
	* Leading zeros support
	
		- 0001
		- 0001.12e10
		- ...
		
	* Working with digits
	
		- ndig(number, targetBase) function - number of digits - specified numeral system base
		- ndig10(number) function - number of digits - base 10
		- dig(number, targetBase, position) - digit at position - specified numeral system base
		- dig10(number, position) - digit at position - base 10

	* Prime factorization

		- nfact(number) - number of prime factors	
		- factval(number, factorId) - factor value	
		- factexp(number, factorId) - factor exponent
		
	* Not-a-Number
	
		- [NaN] symbol
		- isNaN(x) function
		- coalesce(a1,...,an) function - first non-NaN value

	* Statistics

		- med(a1, a2, ..., an) - sample median
		- mode(a1, a2, ..., an) - sample mode

	* Boolean logic

		- [true] symbol
		- [false] symbol
		- or(a1,...an) - variadic or
		- and(a1,...an) - variadic and
		- xor(a1,...an) - variadic xor
		
	* Other functions
	
		- root(order, number) - root + support for negative numbers and odd-order
		- arcsec(x) - inverse trigonometric secant
		- arccsc(x) - inverse trigonometric cosecant
		- ndist(v1, v2, ... vn) - number of distinct values
		- argmin(v1, v2, ... vn) - index of minimum
		- argmax(v1, v2, ... vn) - index of maximum
		
	* New operator
	
		- % support (i.e. 2%, x%)
		
	* Calculus
	
		- der( f(x), x, x0 ) - alternative syntax for derivative (no need to define x as argument)
		
	* Built-in tokens
	
		- Option to override built-in tokens
		- Possibility to remove built-in tokens
		- Possibility to change built-in token
		- Key words: syntax + since
		- Get key words list

	* Working with expression tokens
		
		- Get missing user defined arguments
		- Get missing user defined functions

	* Bugs fixed

		- Dependent arguments and StackOverflowError #35 (introduction of recursion calls counter)
		- FunctionExtension.calculate #32

	* New regression tests - current tests coverage:
	
		- 829 expression related tests
		- 207 syntax related tests
		- 51 api related tests
		- 20 performance tests
		
	https://github.com/mariuszgromada/MathParser.org-mXparser/milestone/1


v.4.0.0.2 (2017-04-17): Port to various .NET frameworks
					  - .NET Core
					  - .NET Standard
					  - .NET PCL
					  - Xamarin.Android
					  - Xamarin.iOS
					
v.4.0.0 (2017-03-27): Major update
					  - Bitwise Operators
					  - Numbers in scientific notation
					  - Units, Physical & Astronomical Constants,
					  - Equations solving via finding function root
					  - Better tokens handling
					  - Function Extensions - possibility of using your own implementation
					  - Bugs fixed

	* Bitwise Operators
	
		- @~   Bitwise unary complement
		- @&   Bitwise AND
		- @^   Bitwise exclusive OR
		- @|   Bitwise inclusive OR
		- @<<  Signed left shift
		- @>>  Signed right shift
		
	* Numbers in scientific notation

		- 1.2e10
		- 1.2e-10
		- 1.2e+10
		- 1.2E10
		- 1.2E-10
		- 1.2E+10
		- ...
	
	* Units

		- [%]			<Ratio, Fraction> Percentage = 0.01
		- [%%]			<Ratio, Fraction> Promil, Per mille = 0.001
		- [Y]			<Metric prefix> Septillion / Yotta = 10^24
		- [sept]		<Metric prefix> Septillion / Yotta = 10^24
		- [Z]			<Metric prefix> Sextillion / Zetta = 10^21
		- [sext]		<Metric prefix> Sextillion / Zetta = 10^21
		- [E]			<Metric prefix> Quintillion / Exa = 10^18
		- [quint]		<Metric prefix> Quintillion / Exa = 10^18
		- [P]			<Metric prefix> Quadrillion / Peta = 10^15
		- [quad]		<Metric prefix> Quadrillion / Peta = 10^15
		- [T]			<Metric prefix> Trillion / Tera = 10^12
		- [tril]		<Metric prefix> Trillion / Tera = 10^12
		- [G]			<Metric prefix> Billion / Giga = 10^9
		- [bil]			<Metric prefix> Billion / Giga = 10^9
		- [M]			<Metric prefix> Million / Mega = 10^6
		- [mil]			<Metric prefix> Million / Mega = 10^6
		- [k]			<Metric prefix> Thousand / Kilo = 10^3
		- [th]			<Metric prefix> Thousand / Kilo = 10^3
		- [hecto]		<Metric prefix> Hundred / Hecto = 10^2
		- [hund]		<Metric prefix> Hundred / Hecto = 10^2
		- [deca]		<Metric prefix> Ten / Deca = 10
		- [ten]			<Metric prefix> Ten / Deca = 10
		- [deci]		<Metric prefix> Tenth / Deci = 0.1
		- [centi]		<Metric prefix> Hundredth / Centi = 0.01
		- [milli]		<Metric prefix> Thousandth / Milli = 0.001
		- [mic]			<Metric prefix> Millionth / Micro = 10^-6
		- [n]			<Metric prefix> Billionth / Nano = 10^-9
		- [p]			<Metric prefix> Trillionth / Pico = 10^-12
		- [f]			<Metric prefix> Quadrillionth / Femto = 10^-15
		- [a]			<Metric prefix> Quintillionth / Atoo = 10^-18
		- [z]			<Metric prefix> Sextillionth / Zepto = 10^-21
		- [y]			<Metric prefix> Septillionth / Yocto = 10^-24
		- [m]			<Unit of length> Metre / Meter (m=1)
		- [km]			<Unit of length> Kilometre / Kilometer (m=1)
		- [cm]			<Unit of length> Centimetre / Centimeter (m=1)
		- [mm]			<Unit of length> Millimetre / Millimeter (m=1)
		- [inch]		<Unit of length> Inch (m=1)
		- [yd]			<Unit of length> Yard (m=1)
		- [ft]			<Unit of length> Feet (m=1)
		- [mile]		<Unit of length> Mile (m=1)
		- [nmi]			<Unit of length> Nautical mile (m=1)
		- [m2]			<Unit of area> Square metre / Square meter (m=
		- [cm2]			<Unit of area> Square centimetre / Square cent
		- [mm2]			<Unit of area> Square millimetre / Square mill
		- [are]			<Unit of area> Are (m=1)
		- [ha]			<Unit of area> Hectare (m=1)
		- [acre]		<Unit of area> Acre (m=1)
		- [km2]			<Unit of area> Square kilometre / Square kilom
		- [mm3]			<Unit of volume> Cubic millimetre / Cubic mill
		- [cm3]			<Unit of volume> Cubic centimetre / Cubic cent
		- [m3]			<Unit of volume> Cubic metre / Cubic meter (m=
		- [km3]			<Unit of volume> Cubic kilometre / Cubic kilom
		- [ml]			<Unit of volume> Millilitre / Milliliter (m=1)
		- [l]			<Unit of volume> Litre / Liter (m=1)
		- [gall]		<Unit of volume> Gallon (m=1)
		- [pint]		<Unit of volume> Pint (m=1)
		- [s]			<Unit of time> Second (s=1)
		- [ms]			<Unit of time> Millisecond (s=1)
		- [min]			<Unit of time> Minute (s=1)
		- [h]			<Unit of time> Hour (s=1)
		- [day]			<Unit of time> Day (s=1)
		- [week]		<Unit of time> Week (s=1)
		- [yearj]		<Unit of time> Julian year = 365.25 days (s=1)
		- [kg]			<Unit of mass> Kilogram (kg=1)
		- [gr]			<Unit of mass> Gram (kg=1)
		- [mg]			<Unit of mass> Milligram (kg=1)
		- [dag]			<Unit of mass> Decagram (kg=1)
		- [t]			<Unit of mass> Tonne (kg=1)
		- [oz]			<Unit of mass> Ounce (kg=1)
		- [lb]			<Unit of mass> Pound (kg=1)
		- [b]			<Unit of information> Bit (bit=1)
		- [kb]			<Unit of information> Kilobit (bit=1)
		- [Mb]			<Unit of information> Megabit (bit=1)
		- [Gb]			<Unit of information> Gigabit (bit=1)
		- [Tb]			<Unit of information> Terabit (bit=1)
		- [Pb]			<Unit of information> Petabit (bit=1)
		- [Eb]			<Unit of information> Exabit (bit=1)
		- [Zb]			<Unit of information> Zettabit (bit=1)
		- [Yb]			<Unit of information> Yottabit (bit=1)
		- [B]			<Unit of information> Byte (bit=1)
		- [kB]			<Unit of information> Kilobyte (bit=1)
		- [MB]			<Unit of information> Megabyte (bit=1)
		- [GB]			<Unit of information> Gigabyte (bit=1)
		- [TB]			<Unit of information> Terabyte (bit=1)
		- [PB]			<Unit of information> Petabyte (bit=1)
		- [EB]			<Unit of information> Exabyte (bit=1)
		- [ZB]			<Unit of information> Zettabyte (bit=1)
		- [YB]			<Unit of information> Yottabyte (bit=1)
		- [J]			<Unit of energy> Joule (m=1, kg=1, s=1)
		- [eV]			<Unit of energy> Electronovolt (m=1, kg=1, s=1
		- [keV]			<Unit of energy> Kiloelectronovolt (m=1, kg=1,
		- [MeV]			<Unit of energy> Megaelectronovolt (m=1, kg=1,
		- [GeV]			<Unit of energy> Gigaelectronovolt (m=1, kg=1,
		- [TeV]			<Unit of energy> Teraelectronovolt (m=1, kg=1,
		- [m/s]			<Unit of speed> Metre / Meter per second (m=1,
		- [km/h]		<Unit of speed> Kilometre / Kilometer per hour
		- [mi/h]		<Unit of speed> Mile per hour (m=1, s=1)
		- [knot]		<Unit of speed> Knot (m=1, s=1)
		- [m/s2]		<Unit of acceleration> Metre / Meter per squar
		- [km/h2]		<Unit of acceleration> Kilometre / Kilometer p
		- [mi/h2]		<Unit of acceleration> Mile per square hour (m
		- [rad]			<Unit of angle> Radian (rad=1)
		- [deg]			<Unit of angle> Degree of arc (rad=1)
		- [']			<Unit of angle> Minute of arc (rad=1)
		- ['']			<Unit of angle> Second of arc (rad=1)

	* Physical Constants

		- [c]		Light speed in vacuum [m/s] (m=1, s=1)
		- [G.]		Gravitational constant (m=1, kg=1, s=1)]
		- [g]		Gravitational acceleration on Earth [m/s^2] (m=1, s=1)
		- [hP]		Planck constant (m=1, kg=1, s=1)
		- [h-]		Reduced Planck constant / Dirac constant (m=1, kg=1, s=1)]
		- [lP]		Planck length [m] (m=1)
		- [mP]		Planck mass [kg] (kg=1)
		- [tP]		Planck time [s] (s=1)

	* Astronomical Constants
	
		- [ly]				Light year [m] (m=1)
		- [au]				Astronomical unit [m] (m=1)
		- [pc]				Parsec [m] (m=1)
		- [kpc]				Kiloparsec [m] (m=1)
		- [Earth-R-eq]		Earth equatorial radius [m] (m=1)
		- [Earth-R-po]		Earth polar radius [m] (m=1)
		- [Earth-R]			Earth mean radius (m=1)
		- [Earth-M]			Earth mass [kg] (kg=1)
		- [Earth-D]			Earth-Sun distance - semi major axis [m] (m=1)
		- [Moon-R]			Moon mean radius [m] (m=1)
		- [Moon-M]			Moon mass [kg] (kg=1)
		- [Moon-D]			Moon-Earth distance - semi major axis [m] (m=1)
		- [Solar-R]			Solar mean radius [m] (m=1)
		- [Solar-M]			Solar mass [kg] (kg=1)
		- [Mercury-R]		Mercury mean radius [m] (m=1)
		- [Mercury-M]		Mercury mass [kg] (kg=1)
		- [Mercury-D]		Mercury-Sun distance - semi major axis [m] (m=1)
		- [Venus-R]			Venus mean radius [m] (m=1)
		- [Venus-M]			Venus mass [kg] (kg=1)
		- [Venus-D]			Venus-Sun distance - semi major axis [m] (m=1)
		- [Mars-R]			Mars mean radius [m] (m=1)
		- [Mars-M]			Mars mass [kg] (kg=1)
		- [Mars-D]			Mars-Sun distance - semi major axis [m] (m=1)
		- [Jupiter-R]		Jupiter mean radius [m] (m=1)
		- [Jupiter-M]		Jupiter mass [kg] (kg=1)
		- [Jupiter-D]		Jupiter-Sun distance - semi major axis [m] (m=1)
		- [Saturn-R]		Saturn mean radius [m] (m=1)
		- [Saturn-M]		Saturn mass [kg] (kg=1)
		- [Saturn-D]		Saturn-Sun distance - semi major axis [m] (m=1)
		- [Uranus-R]		Uranus mean radius [m] (m=1)
		- [Uranus-M]		Uranus mass [kg] (kg=1)
		- [Uranus-D]		Uranus-Sun distance - semi major axis [m] (m=1)
		- [Neptune-R]		Neptune mean radius [m] (m=1)
		- [Neptune-M]		Neptune mass [kg] (kg=1)
		- [Neptune-D]		Neptune-Sun distance - semi major axis [m] (m=1)
	
	* Equations solving via finding function root
	
	    - solve( f(x), x, a, b ) - solving f(x) = 0
	
	* Function Extensions
	
		- FileExtension interface + new constructor in Function class
	
	* Better tokens handling
	
		- Better handling of invalid / not known tokens
		- Looks like functionality
	
	* Bugs fixed
	
		- Exception thrown by getCopyOfInitialTokens() #21
		- System.format.exception - system.IO.EndOfStreamException #20
		- Expression relating factorial "!" cause the application to hang #17
		- Negative sign missing when is right of operators #16
		- Negative in if statement #12
		- Speed when debugging #11
		- User defined arguments ending in e #10
	
	* New regression tests - current tests coverage:
	
		- 622 expression related tests
		- 114 syntax related tests
		- 30 api related tests
		- 20 performance tests

	
v.3.0.0 (2016-05-16): Major update
					  Random numbers, Probability distributions & Random variables
					  Double precision rounding, ULP rounding, epsilon comparison
					  New special functions
	
	* .NET: since v.3.0.0 dll I started to use different private key for signing.

	* Random numbers - new functions
		- rUni(a, b) - Random number from uniform continuous distribution U(a,b)
		- rUnid(a, b) - Random number from uniform discrete distribution U{a,b}
		- rNor(m, s) - Random number from normal distribution N(m,s)
		- rList(a1, a2, ..., an) - Random number from given list of numbers
		
	* Probability distributions - new functions
		- pUni(x, a, b) - Probability distribution function - Uniform continuous distribution U(a,b)
		- cUni(x, a, b) - Cumulative distribution function - Uniform continuous distribution U(a,b)
		- qUni(q, a, b) - Quantile function (inverse cumulative distribution function) - 
						  Uniform continuous distribution U(a,b)
		- pNor(x, a, b) - Probability distribution function - Normal distribution N(m,s)
		- cNor(x, a, b) - Cumulative distribution function - Normal distribution N(m,s)
		- qNor(q, m, s) - Quantile function (inverse cumulative distribution function) -
						  Normal distribution N(m,s)
		
	* Random variables (predefined) - acting as random constant (no parameters)
	
		- [Uni] - Random variable - Uniform continuous distribution U(0,1)
		
		- [Int] - Random variable - random integer
		- [Int1] - Random variable - random integer - Uniform discrete distribution U{-10^1, 10^1}
		- [Int2] - Random variable - random integer - Uniform discrete distribution U{-10^2, 10^2}
		- [Int3] - Random variable - random integer - Uniform discrete distribution U{-10^3, 10^3}
		- [Int4] - Random variable - random integer - Uniform discrete distribution U{-10^4, 10^4}
		- [Int5] - Random variable - random integer - Uniform discrete distribution U{-10^5, 10^5}
		- [Int6] - Random variable - random integer - Uniform discrete distribution U{-10^6, 10^6}
		- [Int7] - Random variable - random integer - Uniform discrete distribution U{-10^7, 10^7}
		- [Int8] - Random variable - random integer - Uniform discrete distribution U{-10^8, 10^8}
		- [Int9] - Random variable - random integer - Uniform discrete distribution U{-10^9, 10^9}
		
		- [nat] - Random variable - random natural number including 0
		
		- [nat1] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^1}
		- [nat2] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^2}
		- [nat3] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^3}
		- [nat4] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^4}
		- [nat5] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^5}
		- [nat6] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^6}
		- [nat7] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^7}
		- [nat8] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^8}
		- [nat9] - Random variable - random natural number including 0 - Uniform discrete distribution U{0, 10^9}
		
		- [Nat] - Random variable - random natural number
		
		- [Nat1] - Random variable - random natural number - Uniform discrete distribution U{1, 10^1}
		- [Nat2] - Random variable - random natural number - Uniform discrete distribution U{1, 10^2}
		- [Nat3] - Random variable - random natural number - Uniform discrete distribution U{1, 10^3}
		- [Nat4] - Random variable - random natural number - Uniform discrete distribution U{1, 10^4}
		- [Nat5] - Random variable - random natural number - Uniform discrete distribution U{1, 10^5}
		- [Nat6] - Random variable - random natural number - Uniform discrete distribution U{1, 10^6}
		- [Nat7] - Random variable - random natural number - Uniform discrete distribution U{1, 10^7}
		- [Nat8] - Random variable - random natural number - Uniform discrete distribution U{1, 10^8}
		- [Nat9] - Random variable - random natural number - Uniform discrete distribution U{1, 10^9}
		
		- [Nor] - Random variable - Normal distribution N(0,1)
		
	* Double precision rounding
		- round(value, places) - decimal rounding (half-up)
		
	* New special functions
		- erf(x) - Gauss error function
		- erfc(x) - Gauss complementary error function
		- erfInv(x) - Inverse Gauss error function
		- erfcInv(x) - Inverse Gauss complementary error function
		
	* Other functions
		- ulp(x) - Unit in The Last Place
		
	* Binary relations - epsilon+ulp comparison - enabled as default
	  If a rel b then applied epsilon is maximum from epsilon and ulp(b)
	  a eq b if a \in [b-eps; b+eps] inclusive
		- mXparser.setExactComparison()
		- mXparser.setEpsilonComparison()
		- mXparser.setEpsilon(double epsilon)
		- mXparser.setDefaultEpsilon()
		- mXparser.getEpsilon()
		- mXparser.checkIfEpsilonMode()
		- mXparser.checkIfExactMode() 
		
	* Intelligent automatic double ULP rounding - enabled as default
	  Try 0.1 + 0.1 + 0.1 - it will give exact 0.3 :-)
		- mXparser.enableUlpRounding()
		- mXparser.disableUlpRounding()
		- mXparser.checkIfUlpRounding()

	* Parser tokens definition now public in API
		- mxparser.parsertokens.*
		
	* Expression after tokenization now public in API
		- Expression.getCopyOfInitialTokens()
		- mxparser.parsertokens.*
		- mXparser.consolePrintTokens()
		
	* Significant reorganization of code
		- Mainly mathcollection & parser tokens
		
	* Backwards compatibility
		- is preserved for String API, Expression, Function, Argument,
		  Constnat, ...
		- other public API was reorganized (mainly mxparser.mathcollection)
	
	* Bugs fixed
		- bugs related to iterated operators
		
	* Other changes
		- Many new regression tests

v.2.4.0 (2016-02-28): Average, variance and standard deviation.

	* New functions with variadic parameters:
		- mean(a1, a2, ... , an) - sample average
		- var(a1, a2, ... , an) - bias-corrected sample variance
		- std(a1, a2, ... , an) - bias-corrected sample standard deviation
		
	* New iterative operators:
		- mini(i, from, to, f(i), <by>) - minimum from function values
		- maxi(i, from, to, f(i), <by>) - maximum from function values
		- avg(i, from, to, f(i), <by>) - average from function values
		- vari(i, from, to, f(i), <by>) - bias-corrected sample variance from
										  function values
		- stdi(i, from, to, f(i), <by>) - bias-corrected sample standard deviation
										  from function values

	* New regression tests to cover new functions
	* Small code reorganization
	* Added manifest to jar files containg version information
	* .dll files were signed
		 
v.2.3.1 (2016-01-29): Trailing letter 'e' bug fix + some minor changes in the code.
		 
v.2.3.0 (2016-01-17): Prime numbers supported! Multithreading performance tests!
					  New functions: Exponential/Offset/Logarithmic integral!
					  
	* Prime numbers supported:
		- new class PrimesCache in mathcollection
		- MathFunctions extended with prime testes
		- ispr(n) - Prime test function supported in expressions
		- Pi(n) - Prime Counting function supported in expressions
		- mXparser.initPrimesCache() methods (and others) to initialize prime numbers cache
		
	* Some special functions supported
		- Ei(x) - Exponential integral function supported in expressions
		- li(x) - Logarithmic integral function supported in expressions
		- Li(x) - Offset logarithmic integral function supported in expressions
		
	* New constants
		- [G] - Gompertz Constant OEIS A073003 supported in expressions
		- [li2] - li(2) A069284 - supported in expressions

	* Multithreading performance tests
		- Default number of cores taken from the environment
		- Possibility to change number of default threads:
			- PerformanceTests.start(int threadsNum)
			- mXparser.setThreadsNumber(int threadsNumber) 
			
	* New regression tests to cover new functionalities


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