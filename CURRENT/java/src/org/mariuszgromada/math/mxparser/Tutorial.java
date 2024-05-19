/*
 * @(#)Tutorial.java        6.0.0    2024-05-19
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use and commercial
 * use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE
 * include:
 *
 * 1. Non-commercial open-source software.
 * 2. Non-commercial mobile applications.
 * 3. Non-commercial desktop software.
 * 4. Non-commercial web applications/solutions.
 * 5. Non-commercial use in research, scholarly and educational context.
 *
 * The above list is non-exhaustive and illustrative only.
 *
 * COMMERCIAL USE means any use or activity where a fee is charged or the
 * purpose is the sale of a good or service, or the use or activity is
 * intended to produce a profit. COMMERCIAL USE examples:
 *
 * 1. OEMs (Original Equipment Manufacturers).
 * 2. ISVs (Independent Software Vendors).
 * 3. VARs (Value Added Resellers).
 * 4. Other distributors that combine and distribute commercially licensed
 *    software.
 *
 * The above list is non-exhaustive and illustrative only.
 *
 * IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE
 * APPROPRIATE LICENSE FROM "INFIMA" ONLINE STORE, STORE ADDRESS:
 *
 * 1. https://mathparser.org/order-commercial-license
 * 2. https://payhip.com/infima
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms,
 * with or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain the unmodified content of
 *    the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,
 *    the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including the
 *    definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the
 *    NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call is used only internally for logging purposes, and
 *    there is no connection with other external services, and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow
 *     you to download, install, and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT, and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the test environments conditions
 *     and not for profit generation.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all terms and
 *     conditions below, and you have acknowledged and understood the
 *     following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive
 *     license with the following rights:
 *  3. The license is granted only to you, the person or entity that made
 *     the purchase, identified and confirmed by the data provided during
 *     the purchase.
 *  4. If you purchased a license in the "ONE-TIME PURCHASE" model, the
 *     license is granted only for the PRODUCT version specified in the
 *     purchase. The upgrade policy gives you additional rights, described
 *     in the dedicated section below.
 *  5. If you purchased a license in the "SUBSCRIPTION" model, you may
 *     install and use any version of the PRODUCT during the subscription
 *     validity period.
 *  6. If you purchased a "SINGLE LICENSE" you may install and use the
 *     PRODUCT on/from one workstation that is located/accessible at/from
 *     any of your premises.
 *  7. Additional copies of the PRODUCT may be installed and used on/from
 *     more than one workstation, limited to the number of workstations
 *     purchased per order.
 *  8. If you purchased a "SITE LICENSE", the PRODUCT may be installed
 *     and used on/from all workstations located/accessible at/from any
 *     of your premises.
 *  9. You may incorporate the unmodified PRODUCT into your own products
 *     and software.
 * 10. If you purchased a license with the "SOURCE CODE" option, you may
 *     modify the PRODUCT's source code and incorporate the modified source
 *     code into your own products and/or software.
 * 11. Provided that the license validity period has not expired, you may
 *     distribute your product and/or software with the incorporated
 *     PRODUCT royalty-free.
 * 12. You may make copies of the PRODUCT for backup and archival purposes.
 * 13. Any form of redistribution requires confirmation and signature of
 *     the COMMERCIAL USE by successfully calling the method:
 *        License.iConfirmCommercialUse(...)
 *     The method call is used only internally for logging purposes, and
 *     there is no connection with other external services, and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to
 *     you in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies/users of your final product
 * (delivered to your end-users) is not limited.
 *
 * Below are some examples to help you select the right license size:
 *
 * Example 1: Single Workstation License
 * Only one developer works on the development of your application. You do
 * not use separate environments for testing, meaning you design, create,
 * test, and compile your final application on one environment. In this
 * case, you need a license for a single workstation.
 *
 * Example 2: Up to 5 Workstations License
 * Two developers are working on the development of your application.
 * Additionally, one tester conducts tests in a separate environment.
 * You use three workstations in total, so you need a license for up to
 * five workstations.
 *
 * Example 3: Up to 20 Workstations License
 * Ten developers are working on the development of your application.
 * Additionally, five testers conduct tests in separate environments.
 * You use fifteen workstations in total, so you need a license for
 * up to twenty workstations.
 *
 * Example 4: Site License
 * Several dozen developers and testers work on the development of your
 * application using multiple environments. You have a large,
 * multi-disciplinary team involved in creating your solution. As your team
 * is growing and you want to avoid licensing limitations, the best choice
 * would be a site license.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install
 *    all releases specified in the [PATCH] version (e.g., 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.
 *
 * CONTACT
 *
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://mathparser.org/order-commercial-license
 * - online store: https://payhip.com/infima
 */
package org.mariuszgromada.math.mxparser;

/**
 * Tutorial class.
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="https://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="https://payhip.com/INFIMA" target="_blank">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br>
 *                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br>
 *                 <a href="https://scalarmath.org/" target="_blank">ScalarMath.org - a powerful math engine and math scripting language</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Lite</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
 *                 <a href="https://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *
 * @version        5.0.0
 *
 * @see RecursiveArgument
 * @see Expression
 * @see Function
 * @see Constant
 */
public class Tutorial {

	private static String highlight(String str) {
		return "------ >>>>>>> " + str;
	}

	public static void main(String[] args) {

		/*
		 * Tutorial for the mXparser version 5.0
		 * Mariusz Gromada    2022-01-23
		 */
		mXparser.consolePrintln(highlight("Tutorial for the mXparser version 5.0 - Mariusz Gromada - 2022-01-23"));


		/*
		 * Simple & complex arithmetic expressions, large math functions collection
		 * User defined arguments, functions, constants
		 * Calculus operations (i.e. differentiation, integration)
		 * Summation and product operations
		 * User defined recursive functions
		 * Boolean operators
		 * and many more...
		 *
		 */

		/*
		 * Start from the license
		 */
		mXparser.consolePrintln(highlight("Start from the license"));
		mXparser.consolePrintln( mXparser.LICENSE );


		/*
		 * Using help
		 */
		mXparser.consolePrintln(highlight("Using help"));
		Expression e = new Expression();
		mXparser.consolePrintln(e.getHelp());

		/*
		 * Full line searching
		 */
		mXparser.consolePrintln(highlight("Full line searching"));
		mXparser.consolePrintln();
		mXparser.consolePrintln(e.getHelp("sine"));


		mXparser.consolePrintln();
		mXparser.consolePrintln(e.getHelp("inver"));

		/*
		 * Simple expression
		 */
		mXparser.consolePrintln(highlight("Simple expression"));
		Expression e1 = new Expression("2+1");
		mXparser.consolePrintln(e1.getExpressionString() + " = " + e1.calculate());

		e1.setExpressionString("2-1");
		mXparser.consolePrintln(e1.getExpressionString() + " = " + e1.calculate());



		/* operators */
		mXparser.consolePrintln(highlight("operators"));
		Expression e2 = new Expression("2-(32-4)/(23+(4)/(5))-(2-4)*(4+6-98.2)+4");
		mXparser.consolePrintln(e2.getExpressionString() + " = " + e2.calculate());

		/* power function */
		mXparser.consolePrintln(highlight("power function"));
		Expression e3 = new Expression("2^3+2^(-3)+2^3^(-4)");
		mXparser.consolePrintln(e3.getExpressionString() + " = " + e3.calculate());

		/*
		 * Relations
		 */
		mXparser.consolePrintln(highlight("Relations"));
		Expression e4 = new Expression("2=3");
		mXparser.consolePrintln(e4.getExpressionString() + " = " + e4.calculate());

		Expression e5 = new Expression("2<3");
		mXparser.consolePrintln(e5.getExpressionString() + " = " + e5.calculate());

		Expression e6 = new Expression("(2=3) | (2<3)");
		mXparser.consolePrintln(e6.getExpressionString() + " = " + e6.calculate());

		Expression e7 = new Expression("(2=3) & (2<3)");
		mXparser.consolePrintln(e7.getExpressionString() + " = " + e7.calculate());

		/* 1 arg functions */
		mXparser.consolePrintln(highlight("1 arg functions"));
		Expression e8 = new Expression("sin(2)-cos(3)");
		mXparser.consolePrintln(e8.getExpressionString() + " = " + e8.calculate());

		/* 2 args functions */
		mXparser.consolePrintln(highlight("2 args functions"));
		Expression e9 = new Expression("min(3,4) + max(-2,-1)");
		mXparser.consolePrintln(e9.getExpressionString() + " = " + e9.calculate());

		/* binomial coefficient */
		mXparser.consolePrintln(highlight("binomial coefficient"));
		Expression e10 = new Expression("C(10,5)");
		mXparser.consolePrintln(e10.getExpressionString() + " = " + e10.calculate());

		/* 3 args functions */
		mXparser.consolePrintln(highlight("3 args function"));

		/* conditions */
		mXparser.consolePrintln(highlight("conditions"));
		Expression e11 = new Expression("if(2<3,1,0)");
		mXparser.consolePrintln(e11.getExpressionString() + " = " + e11.calculate());

		Expression e12 = new Expression("if(3<2,1,0)");
		mXparser.consolePrintln(e12.getExpressionString() + " = " + e12.calculate());

		Expression e13 = new Expression("if(3<2, 1, if(1=1, 5, 0) )");
		mXparser.consolePrintln(e13.getExpressionString() + " = " + e13.calculate());

		/*
		 * Free Arguments
		 */
		mXparser.consolePrintln(highlight("Free Arguments"));
		Argument x = new Argument("x = 1");
		Argument y = new Argument("y = 2");
		Argument z = new Argument("z", 3);
		Argument n = new Argument("n", 4);

		Expression e14 = new Expression("sin(x+y)-cos(y/z)", x, y, z);
		mXparser.consolePrintln(e14.getExpressionString() + " = " + e14.calculate());

		Expression e15 = new Expression("if(x>y, x-z, if(y<z, sin(x+y), cos(z)) )", x, y, z);
		mXparser.consolePrintln(e15.getExpressionString() + " = " + e15.calculate());

		x.setArgumentValue(5);
		mXparser.consolePrintln(x.getArgumentName() + " = " + x.getArgumentValue());
		/*
		 * Dependent arguments
		 */
		mXparser.consolePrintln(highlight("Dependent arguments"));
		y = new Argument("y","2*x+5", x);
		mXparser.consolePrintln(y.getArgumentName() + " = " + y.getArgumentValue());

		y = new Argument("y = 2*x+5", x);
		mXparser.consolePrintln(y.getArgumentName() + " = " + y.getArgumentValue());

		y = new Argument("y","sin(y)-z", y, z);
		mXparser.consolePrintln(y.getArgumentName() + " = " + y.getArgumentValue());


		/* syntax checking */
		mXparser.consolePrintln(highlight("syntax checking"));
		y.setArgumentExpressionString("n*sin(y)-z");
		mXparser.consolePrintln(y.getArgumentName() + " = ... \n syntax = " + y.checkSyntax() + "\n message = \n" + y.getErrorMessage());

		y.addDefinitions(n);
		mXparser.consolePrintln(y.getArgumentName() + " = ... \n syntax = " + y.checkSyntax() + "\n message = \n" + y.getErrorMessage());
		mXparser.consolePrintln(y.getArgumentName() + " = " + y.getArgumentValue());
		/*
		 * the same methods could be called
		 * for the expression syntax checking
		 *
		 */

		/*
		 * Complex expressions
		 */
		mXparser.consolePrintln(highlight("Complex expressions"));

		/*
		 * Summation operator SIGMA
		 * sum(index, from, to, expr)
		 * sum(index, from, to, expr, by)
		 *
		 */
		mXparser.consolePrintln(highlight("Summation operator SIGMA"));

		Expression e16 = new Expression("sum(i, 1, 10, i)");
		mXparser.consolePrintln(e16.getExpressionString() + " = " + e16.calculate());

		Expression e17 = new Expression("sum(i, 1, 10, 2*i, 0.5)");
		mXparser.consolePrintln(e17.getExpressionString() + " = " + e17.calculate());


		/*
		 * Product operator PI PROD
		 * prod(index, from, to, expr)
		 * prod(index, from, to, expr, by)
		 */
		mXparser.consolePrintln(highlight("Product operator PI PROD"));

		/* factorial */
		mXparser.consolePrintln(highlight("factorial"));

		Expression e18 = new Expression("prod(i, 1, 5, i)");
		mXparser.consolePrintln(e18.getExpressionString() + " = " + e18.calculate());

		Expression e19 = new Expression("prod(i, 1, 5, 2*i, 0.5)");
		mXparser.consolePrintln(e19.getExpressionString() + " = " + e19.calculate());

		/* Approximation sin(x) by Taylor series
		 * ! - factorial
		 */
		mXparser.consolePrintln(highlight("Approximation sin(x) by Taylor series"));

		Expression e20 = new Expression("sin(x)-sum(n,0,20,(-1)^n*(x^(2*n+1))/(2*n+1)!)", x);

		x.setArgumentValue(1);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e20.getExpressionString() + " = " + e20.calculate());
		x.setArgumentValue(5);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e20.getExpressionString() + " = " + e20.calculate());
		x.setArgumentValue(10);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e20.getExpressionString() + " = " + e20.calculate());

		/*
		 * calculating pi by integral of
		 * sqrt(1-x^2) from -1 to 1
		 * using simple summation operator
		 */
		mXparser.consolePrintln(highlight("calculating pi by integral"));

		Argument d = new Argument("d",0.1);
		Expression e21 = new Expression("2*sum(x, -1, 1, d*sqrt(1-x^2), d)", d);
		mXparser.consolePrintln("d = " + d.getArgumentValue() + ", " + e21.getExpressionString() + " = " + e21.calculate());
		d.setArgumentValue(0.01);
		mXparser.consolePrintln("d = " + d.getArgumentValue() + ", " + e21.getExpressionString() + " = " + e21.calculate());


		/*
		 * Derivatives
		 *
		 * der( f(x,...), x) - general
		 * der+( f(x,...), x) - right
		 * der-( f(x,...), x) - left
		 */
		mXparser.consolePrintln(highlight("Derivatives"));

		/* cos(x) as derivative from sin(x) */
		mXparser.consolePrintln(highlight("cos(x) as derivative from sin(x)"));

		Expression e22 = new Expression("cos(x)-der(sin(x), x)", x);
		mXparser.consolePrintln(e22.getExpressionString() + " = " + e22.calculate());

		/* left and right derivative from |x| */
		mXparser.consolePrintln(highlight("left and right derivative from |x|"));

		x.setArgumentValue(0);
		Expression e23 = new Expression("der-(abs(x), x)", x);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e23.getExpressionString() + " = " + e23.calculate());
		Expression e24 = new Expression("der+(abs(x), x)", x);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e24.getExpressionString() + " = " + e24.calculate());

		/* derivative from sin(x) as Taylor series (approximation) */
		mXparser.consolePrintln(highlight("derivative from sin(x) as Taylor series (approximation)"));

		x.setArgumentValue(1);

		Expression e25 = new Expression("cos(x)-der(sum(n,0,20,(-1)^n*(x^(2*n+1))/(2*n+1)!), x)", x);

		x.setArgumentValue(1);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e25.getExpressionString() + " = " + e25.calculate());
		x.setArgumentValue(5);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e25.getExpressionString() + " = " + e25.calculate());
		x.setArgumentValue(10);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e25.getExpressionString() + " = " + e25.calculate());

		/*
		 * Integral
		 * int(f(x,...), x, a, b)
		 */
		mXparser.consolePrintln(highlight("Integral"));

		/* calculating PI value */
		mXparser.consolePrintln(highlight("calculating PI value"));

		Expression e26 = new Expression("2 * int(sqrt(1-x^2), x, -1, 1)");
		mXparser.consolePrintln(e26.getExpressionString() + " = " + e26.calculate());


		/*
		 * Parser constants
		 */
		mXparser.consolePrintln(highlight("Parser constants"));

		Expression e27 = new Expression("pi");
		mXparser.consolePrintln(e27.getExpressionString() + " = " + e27.calculate());
		Expression e28 = new Expression("e");
		mXparser.consolePrintln(e28.getExpressionString() + " = " + e28.calculate());

		/* and many many more ...  */

		/*
		 * USER DEFINED FUNCTIONS
		 * f(x,y) = sin(x+y)
		 * f(a,b,c,d,...) = ....
		 */
		mXparser.consolePrintln(highlight("USER DEFINED FUNCTIONS"));

		Function f = new Function("f", "x^2", "x");
		Expression e29 = new Expression("f(2)");
		e29.addDefinitions(f);
		mXparser.consolePrintln(e29.getExpressionString() + " = " + e29.calculate());


		/*
		 * Please be informed that sequence of
		 * arguments names is important. In the below exampe
		 * a - 1st argument of f
		 * b - 2nd argument of f
		 * c - 3rd argument of f
		 *
		 * In the expressions f will be c alled as f( . , . , . )
		 */
		f = new Function("f(a,b,c) = a + b + c");
		Expression e30 = new Expression("f(1, 2, 3)");
		e30.addDefinitions(f);
		mXparser.consolePrintln(e30.getExpressionString() + " = " + e30.calculate());


		/*
		 * Using functions in functions
		 */
		mXparser.consolePrintln(highlight("Using functions in functions"));

		f = new Function("f", "x^2", "x");
		Function g = new Function("g", "f(x)^2", "x");
		g.addDefinitions(f);
		mXparser.consolePrintln("g(2) = " + g.calculate(2));

		Expression e31 = new Expression("f(x)+g(2*x)", x);
		e31.addDefinitions(f, g);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e31.getExpressionString() + " = " + e31.calculate());

		x.setArgumentValue(2);
		Expression e32 = new Expression("der(g(x),x)", x);
		e32.addDefinitions(g);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e32.getExpressionString() + " = " + e32.calculate());

		/*
		 * Fundamental theorem of calculus
		 * if F(x) = int_a^x f(t) dt
		 * then F'(x) = f(x)
		 */
		mXparser.consolePrintln(highlight("Fundamental theorem of calculus"));

		f = new Function("f", "sin(x)", "x");
		Function F = new Function("F", "int(f(t), t, 0, x)", "x");
		F.addDefinitions(f);
		Expression e33 = new Expression("f(x) - der(F(x),x)", x);
		e33.addDefinitions(f, F);
		mXparser.consolePrintln("x = " + x.getArgumentValue() + ", " + e33.getExpressionString() + " = " + e33.calculate() +
				", computing time : " + e33.getComputingTime() + " s.");

		/*
		 * Simple (fast) recursion
		 * Only one index n >= 0, n integer
		 */
		mXparser.consolePrintln(highlight("Simple (fast) recursion"));


		/* Fibonacci numbers with add base cases method*/
		mXparser.consolePrintln(highlight("Fibonacci numbers with add base cases method"));

		n = new Argument("n");
		RecursiveArgument fib1 = new RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
		fib1.addBaseCase(0, 0);
		fib1.addBaseCase(1, 1);

		mXparser.consolePrintln("fib1: ");
		for (int i = 0; i <= 10; i++ )
			mXparser.consolePrint(fib1.getArgumentValue(i) + ", ");
		mXparser.consolePrintln();

		/* Fibonacci numbers with if statement*/
		mXparser.consolePrintln(highlight("Fibonacci numbers with if statement"));
		RecursiveArgument fib2 = new RecursiveArgument("fib2(n) = if( n>1, fib2(n-1)+fib2(n-2), if(n=1,1,0) )");
		mXparser.consolePrintln("fib2: ");
		for (int i = 0; i <= 10; i++ )
			mXparser.consolePrint(fib2.getArgumentValue(i) + ", ");
		mXparser.consolePrintln();

		Expression e34 = new Expression("sum(i, 0, 10, fib1(i))", fib1);
		mXparser.consolePrintln(e34.getExpressionString() + " = " + e34.calculate() +
				", computing time : " + e34.getComputingTime() + " s.");

		Expression e35 = new Expression("sum(i, 0, 10, fib2(i))", fib2);
		mXparser.consolePrintln(e35.getExpressionString() + " = " + e35.calculate() +
				", computing time : " + e35.getComputingTime() + " s.");


		/*
		 * Complex recursion (slow)
		 * any definition
		 *
		 *
		 */
		mXparser.consolePrintln(highlight("Complex recursion "));

		/* Fibonacci numbers using complex recursion */
		mXparser.consolePrintln(highlight("Fibonacci numbers using complex recursion"));

		Function fib3 = new Function("fib3","if(n>1, fib3(n-1)+fib3(n-2), if(n>0,1,0))", "n");
		mXparser.consolePrintln("fib2: ");
		for (int i = 0; i <= 10; i++ )
			mXparser.consolePrint(fib3.calculate(i) + ", ");
		mXparser.consolePrintln();

		Expression e36 = new Expression("sum(i, 0, 10, fib3(i))");
		e36.addDefinitions(fib3);
		mXparser.consolePrintln(e36.getExpressionString() + " = " + e36.calculate() +
				", computing time : " + e36.getComputingTime() + " s.");

		/*
		 * Chebyshev polynomials definition using
		 * recursive functions
		 */
		mXparser.consolePrintln(highlight("Chebyshev polynomials definition using"));

		Function T = new Function("T(n,x) = if(n>1, 2*x*T(n-1,x)-T(n-2,x), if(n>0, x, 1) )");
		Argument k = new Argument("k", 5);
		Expression e37 = new Expression("T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2", k, x);
		e37.addDefinitions(T);
		mXparser.consolePrintln(e37.getExpressionString() + " = " + e37.calculate() +
				", computing time : " + e37.getComputingTime() + " s.");


		/*
		 * Binomial coefficient using complex recursion
		 */
		mXparser.consolePrintln(highlight("Binomial coefficient using complex recursion"));

		Function Cnk = new Function("Cnk","if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)","n", "k");

		Expression e38 = new Expression("C(10,5) - Cnk(10,5)");
		e38.addDefinitions(Cnk);

		mXparser.consolePrintln(e38.getExpressionString() + " = " + e38.calculate() +
				", computing time : " + e38.getComputingTime() + " s.");

		/*
		 * Differences between simple and complex recursion
		 *
		 * Simple:
		 *
		 * Advantages
		 *    1) fast
		 *    2) remembers what was previously calculated
		 *    3) calculations are done in a controlled way
		 *         - recursion counter (each recursion step increases
		 *           recursion counter, for calculating n-th recursion
		 *           value maximum n recursion steps are needed
		 *         - no negative indexes
		 *    4) add base value method
		 *
		 * Disadvantages
		 *    1) limited to one index argument (positive integer index argument)
		 *
		 * Complex recursion
		 *
		 * Advantages
		 *    1) flexible - no limitations
		 *
		 * Disadvantages
		 *    1) slow
		 *    2) no add base values method
		 */

		/*
		 * User defined constants
		 */
		mXparser.consolePrintln(highlight("User defined constants"));

		Constant a = new Constant("a", 5);
		Constant b = new Constant("b = 10");
		Constant c = new Constant("c = a + b", a, b);

		Expression e39 = new Expression("a+b+c");
		e39.addDefinitions(a, b, c);

		/*
		 * For example in verbose mode
		 * computing
		 */
		mXparser.consolePrintln(highlight("verbose mode"));

		e39.setVerboseMode();
		e39.checkSyntax();
		mXparser.consolePrintln();
		mXparser.consolePrintln(e39.getErrorMessage());
		mXparser.consolePrintln(e39.getExpressionString() + " = " + e39.calculate() +
				", computing time : " + e39.getComputingTime() + " s.");


		/*
		 * There are much more other features in the mXparser API.
		 * Please refer to the API specifications.
		 *
		 * Please be aware that this is the version 1.0 of the parser
		 * - I am pretty sure you will find some bugs - if so please send me
		 * more info: mariusz.gromada@mathspace.pl
		 */

	}

}