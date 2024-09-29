/*
 * @(#)Tutorial.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/Tutorial.hpp"

namespace org::mariuszgromada::math::mxparser {
	std::string Tutorial::highlight(const std::string &str) {
		return "------ >>>>>>> " + str;
	}

	void Tutorial::start() {
		/*
		 * Tutorial for the mXparser version 5.0
		 * Mariusz Gromada    2022-01-23
		 */
		mXparser_consolePrintln(highlight("Tutorial for the mXparser version 5.0 - Mariusz Gromada - 2022-01-23"));


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
		mXparser_consolePrintln(highlight("Start from the license"));
		mXparser_consolePrintln(mXparser::LICENSE);


		/*
		 * Using help
		 */
		mXparser_consolePrintln(highlight("Using help"));
		ExpressionPtr e = new_Expression();
		mXparser_consolePrintln(e->getHelp());

		/*
		 * Full line searching
		 */
		mXparser_consolePrintln(highlight("Full line searching"));
		mXparser::consolePrintln();
		mXparser_consolePrintln(e->getHelp("sine"));


		mXparser::consolePrintln();
		mXparser_consolePrintln(e->getHelp("inver"));

		/*
		 * Simple expression
		 */
		mXparser_consolePrintln(highlight("Simple expression"));
		ExpressionPtr e1 = new_Expression("2+1");
		mXparser_consolePrintln(e1->getExpressionString() + " = " + e1->calculate());

		e1->setExpressionString("2-1");
		mXparser_consolePrintln(e1->getExpressionString() + " = " + e1->calculate());


		/* operators */
		mXparser_consolePrintln(highlight("operators"));
		ExpressionPtr e2 = new_Expression("2-(32-4)/(23+(4)/(5))-(2-4)*(4+6-98.2)+4");
		mXparser_consolePrintln(e2->getExpressionString() + " = " + e2->calculate());

		/* power function */
		mXparser_consolePrintln(highlight("power function"));
		ExpressionPtr e3 = new_Expression("2^3+2^(-3)+2^3^(-4)");
		mXparser_consolePrintln(e3->getExpressionString() + " = " + e3->calculate());

		/*
		 * Relations
		 */
		mXparser_consolePrintln(highlight("Relations"));
		ExpressionPtr e4 = new_Expression("2=3");
		mXparser_consolePrintln(e4->getExpressionString() + " = " + e4->calculate());

		ExpressionPtr e5 = new_Expression("2<3");
		mXparser_consolePrintln(e5->getExpressionString() + " = " + e5->calculate());

		ExpressionPtr e6 = new_Expression("(2=3) | (2<3)");
		mXparser_consolePrintln(e6->getExpressionString() + " = " + e6->calculate());

		ExpressionPtr e7 = new_Expression("(2=3) & (2<3)");
		mXparser_consolePrintln(e7->getExpressionString() + " = " + e7->calculate());

		/* 1 arg functions */
		mXparser_consolePrintln(highlight("1 arg functions"));
		ExpressionPtr e8 = new_Expression("sin(2)-cos(3)");
		mXparser_consolePrintln(e8->getExpressionString() + " = " + e8->calculate());

		/* 2 args functions */
		mXparser_consolePrintln(highlight("2 args functions"));
		ExpressionPtr e9 = new_Expression("min(3,4) + max(-2,-1)");
		mXparser_consolePrintln(e9->getExpressionString() + " = " + e9->calculate());

		/* binomial coefficient */
		mXparser_consolePrintln(highlight("binomial coefficient"));
		ExpressionPtr e10 = new_Expression("C(10,5)");
		mXparser_consolePrintln(e10->getExpressionString() + " = " + e10->calculate());

		/* 3 args functions */
		mXparser_consolePrintln(highlight("3 args function"));

		/* conditions */
		mXparser_consolePrintln(highlight("conditions"));
		ExpressionPtr e11 = new_Expression("if(2<3,1,0)");
		mXparser_consolePrintln(e11->getExpressionString() + " = " + e11->calculate());

		ExpressionPtr e12 = new_Expression("if(3<2,1,0)");
		mXparser_consolePrintln(e12->getExpressionString() + " = " + e12->calculate());

		ExpressionPtr e13 = new_Expression("if(3<2, 1, if(1=1, 5, 0) )");
		mXparser_consolePrintln(e13->getExpressionString() + " = " + e13->calculate());

		/*
		 * Free Arguments
		 */
		mXparser_consolePrintln(highlight("Free Arguments"));
		ArgumentPtr x = new_Argument("x = 1");
		ArgumentPtr y = new_Argument("y = 2");
		ArgumentPtr z = new_Argument("z", 3);
		ArgumentPtr n = new_Argument("n", 4);

		ExpressionPtr e14 = new_Expression("sin(x+y)-cos(y/z)", x, y, z);
		mXparser_consolePrintln(e14->getExpressionString() + " = " + e14->calculate());

		ExpressionPtr e15 = new_Expression("if(x>y, x-z, if(y<z, sin(x+y), cos(z)) )", x, y, z);
		mXparser_consolePrintln(e15->getExpressionString() + " = " + e15->calculate());

		x->setArgumentValue(5);
		mXparser_consolePrintln(x->getArgumentName() + " = " + x->getArgumentValue());
		/*
		 * Dependent arguments
		 */
		mXparser_consolePrintln(highlight("Dependent arguments"));
		y = new_Argument("y", "2*x+5", x);
		mXparser_consolePrintln(y->getArgumentName() + " = " + y->getArgumentValue());

		y = new_Argument("y = 2*x+5", x);
		mXparser_consolePrintln(y->getArgumentName() + " = " + y->getArgumentValue());

		y = new_Argument("y", "sin(y)-z", y, z);
		mXparser_consolePrintln(y->getArgumentName() + " = " + y->getArgumentValue());


		/* syntax checking */
		mXparser_consolePrintln(highlight("syntax checking"));
		y->setArgumentExpressionString("n*sin(y)-z");
		bool ySyntax = y->checkSyntax();
		mXparser_consolePrintln(
			y->getArgumentName() + " = ... \n syntax = " + ySyntax + "\n message = \n" + y->getErrorMessage());

		y->addDefinitions(n);
		ySyntax = y->checkSyntax();
		mXparser_consolePrintln(
			y->getArgumentName() + " = ... \n syntax = " + ySyntax + "\n message = \n" + y->getErrorMessage());
		mXparser_consolePrintln(y->getArgumentName() + " = " + y->getArgumentValue());
		/*
		 * the same methods could be called
		 * for the expression syntax checking
		 *
		 */

		/*
		 * Complex expressions
		 */
		mXparser_consolePrintln(highlight("Complex expressions"));

		/*
		 * Summation operator SIGMA
		 * sum(index, from, to, expr)
		 * sum(index, from, to, expr, by)
		 *
		 */
		mXparser_consolePrintln(highlight("Summation operator SIGMA"));

		ExpressionPtr e16 = new_Expression("sum(i, 1, 10, i)");
		mXparser_consolePrintln(e16->getExpressionString() + " = " + e16->calculate());

		ExpressionPtr e17 = new_Expression("sum(i, 1, 10, 2*i, 0.5)");
		mXparser_consolePrintln(e17->getExpressionString() + " = " + e17->calculate());


		/*
		 * Product operator PI PROD
		 * prod(index, from, to, expr)
		 * prod(index, from, to, expr, by)
		 */
		mXparser_consolePrintln(highlight("Product operator PI PROD"));

		/* factorial */
		mXparser_consolePrintln(highlight("factorial"));

		ExpressionPtr e18 = new_Expression("prod(i, 1, 5, i)");
		mXparser_consolePrintln(e18->getExpressionString() + " = " + e18->calculate());

		ExpressionPtr e19 = new_Expression("prod(i, 1, 5, 2*i, 0.5)");
		mXparser_consolePrintln(e19->getExpressionString() + " = " + e19->calculate());

		/* Approximation sin(x) by Taylor series
		 * ! - factorial
		 */
		mXparser_consolePrintln(highlight("Approximation sin(x) by Taylor series"));

		ExpressionPtr e20 = new_Expression("sin(x)-sum(n,0,20,(-1)^n*(x^(2*n+1))/(2*n+1)!)", x);

		x->setArgumentValue(1);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e20->getExpressionString() + " = " + e20->calculate());
		x->setArgumentValue(5);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e20->getExpressionString() + " = " + e20->calculate());
		x->setArgumentValue(10);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e20->getExpressionString() + " = " + e20->calculate());

		/*
		 * calculating pi by integral of
		 * sqrt(1-x^2) from -1 to 1
		 * using simple summation operator
		 */
		mXparser_consolePrintln(highlight("calculating pi by integral"));

		ArgumentPtr d = new_Argument("d", 0.1);
		ExpressionPtr e21 = new_Expression("2*sum(x, -1, 1, d*sqrt(1-x^2), d)", d);
		mXparser_consolePrintln(
			"d = " + d->getArgumentValue() + ", " + e21->getExpressionString() + " = " + e21->calculate());
		d->setArgumentValue(0.01);
		mXparser_consolePrintln(
			"d = " + d->getArgumentValue() + ", " + e21->getExpressionString() + " = " + e21->calculate());


		/*
		 * Derivatives
		 *
		 * der( f(x,...), x) - general
		 * der+( f(x,...), x) - right
		 * der-( f(x,...), x) - left
		 */
		mXparser_consolePrintln(highlight("Derivatives"));

		/* cos(x) as derivative from sin(x) */
		mXparser_consolePrintln(highlight("cos(x) as derivative from sin(x)"));

		ExpressionPtr e22 = new_Expression("cos(x)-der(sin(x), x)", x);
		mXparser_consolePrintln(e22->getExpressionString() + " = " + e22->calculate());

		/* left and right derivative from |x| */
		mXparser_consolePrintln(highlight("left and right derivative from |x|"));

		x->setArgumentValue(0);
		ExpressionPtr e23 = new_Expression("der-(abs(x), x)", x);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e23->getExpressionString() + " = " + e23->calculate());
		ExpressionPtr e24 = new_Expression("der+(abs(x), x)", x);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e24->getExpressionString() + " = " + e24->calculate());

		/* derivative from sin(x) as Taylor series (approximation) */
		mXparser_consolePrintln(highlight("derivative from sin(x) as Taylor series (approximation)"));

		x->setArgumentValue(1);

		ExpressionPtr e25 = new_Expression("cos(x)-der(sum(n,0,20,(-1)^n*(x^(2*n+1))/(2*n+1)!), x)", x);

		x->setArgumentValue(1);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e25->getExpressionString() + " = " + e25->calculate());
		x->setArgumentValue(5);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e25->getExpressionString() + " = " + e25->calculate());
		x->setArgumentValue(10);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e25->getExpressionString() + " = " + e25->calculate());

		/*
		 * Integral
		 * int(f(x,...), x, a, b)
		 */
		mXparser_consolePrintln(highlight("Integral"));

		/* calculating PI value */
		mXparser_consolePrintln(highlight("calculating PI value"));

		ExpressionPtr e26 = new_Expression("2 * int(sqrt(1-x^2), x, -1, 1)");
		mXparser_consolePrintln(e26->getExpressionString() + " = " + e26->calculate());


		/*
		 * Parser constants
		 */
		mXparser_consolePrintln(highlight("Parser constants"));

		ExpressionPtr e27 = new_Expression("pi");
		mXparser_consolePrintln(e27->getExpressionString() + " = " + e27->calculate());
		ExpressionPtr e28 = new_Expression("e");
		mXparser_consolePrintln(e28->getExpressionString() + " = " + e28->calculate());

		/* and many many more ...  */

		/*
		 * USER DEFINED FUNCTIONS
		 * f(x,y) = sin(x+y)
		 * f(a,b,c,d,...) = ....
		 */
		mXparser_consolePrintln(highlight("USER DEFINED FUNCTIONS"));

		FunctionPtr f = new_Function("f", "x^2", "x");
		ExpressionPtr e29 = new_Expression("f(2)");
		e29->addDefinitions(f);
		mXparser_consolePrintln(e29->getExpressionString() + " = " + e29->calculate());


		/*
		 * Please be informed that sequence of
		 * arguments names is important. In the below exampe
		 * a - 1st argument of f
		 * b - 2nd argument of f
		 * c - 3rd argument of f
		 *
		 * In the expressions f will be c alled as f( . , . , . )
		 */
		f = new_Function("f(a,b,c) = a + b + c");
		ExpressionPtr e30 = new_Expression("f(1, 2, 3)");
		e30->addDefinitions(f);
		mXparser_consolePrintln(e30->getExpressionString() + " = " + e30->calculate());


		/*
		 * Using functions in functions
		 */
		mXparser_consolePrintln(highlight("Using functions in functions"));

		f = new_Function("f", "x^2", "x");
		FunctionPtr g = new_Function("g", "f(x)^2", "x");
		g->addDefinitions(f);
		mXparser_consolePrintln("g(2) = " + g->calculate(2));

		ExpressionPtr e31 = new_Expression("f(x)+g(2*x)", x);
		e31->addDefinitions(f, g);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e31->getExpressionString() + " = " + e31->calculate());

		x->setArgumentValue(2);
		ExpressionPtr e32 = new_Expression("der(g(x),x)", x);
		e32->addDefinitions(g);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e32->getExpressionString() + " = " + e32->calculate());

		/*
		 * Fundamental theorem of calculus
		 * if F(x) = int_a^x f(t) dt
		 * then F'(x) = f(x)
		 */
		mXparser_consolePrintln(highlight("Fundamental theorem of calculus"));

		f = new_Function("f", "sin(x)", "x");
		FunctionPtr F = new_Function("F", "int(f(t), t, 0, x)", "x");
		F->addDefinitions(f);
		ExpressionPtr e33 = new_Expression("f(x) - der(F(x),x)", x);
		e33->addDefinitions(f, F);
		mXparser_consolePrintln(
			"x = " + x->getArgumentValue() + ", " + e33->getExpressionString() + " = " + e33->calculate() +
			", computing time : " + e33->getComputingTime() + " s.");

		/*
		 * Simple (fast) recursion
		 * Only one index n >= 0, n integer
		 */
		mXparser_consolePrintln(highlight("Simple (fast) recursion"));


		/* Fibonacci numbers with add base cases method*/
		mXparser_consolePrintln(highlight("Fibonacci numbers with add base cases method"));

		n = new_Argument("n");
		RecursiveArgumentPtr fib1 = new_RecursiveArgument("fib1", "fib1(n-1)+fib1(n-2)", n);
		fib1->addBaseCase(0, 0);
		fib1->addBaseCase(1, 1);

		mXparser_consolePrintln("fib1: ");
		for (int i = 0; i <= 10; i++)
			mXparser_consolePrint(fib1->getArgumentValue(i) + ", ");
		mXparser::consolePrintln();

		/* Fibonacci numbers with if statement*/
		mXparser_consolePrintln(highlight("Fibonacci numbers with if statement"));
		RecursiveArgumentPtr fib2 = new_RecursiveArgument("fib2(n) = if( n>1, fib2(n-1)+fib2(n-2), if(n=1,1,0) )");
		mXparser_consolePrintln("fib2: ");
		for (int i = 0; i <= 10; i++)
			mXparser_consolePrint(fib2->getArgumentValue(i) + ", ");
		mXparser::consolePrintln();

		ExpressionPtr e34 = new_Expression("sum(i, 0, 10, fib1(i))", fib1);
		mXparser_consolePrintln(e34->getExpressionString() + " = " + e34->calculate() +
			", computing time : " + e34->getComputingTime() + " s.");

		ExpressionPtr e35 = new_Expression("sum(i, 0, 10, fib2(i))", fib2);
		mXparser_consolePrintln(e35->getExpressionString() + " = " + e35->calculate() +
			", computing time : " + e35->getComputingTime() + " s.");


		/*
		 * Complex recursion (slow)
		 * any definition
		 *
		 *
		 */
		mXparser_consolePrintln(highlight("Complex recursion "));

		/* Fibonacci numbers using complex recursion */
		mXparser_consolePrintln(highlight("Fibonacci numbers using complex recursion"));

		FunctionPtr fib3 = new_Function("fib3", "if(n>1, fib3(n-1)+fib3(n-2), if(n>0,1,0))", "n");
		mXparser_consolePrintln("fib2: ");
		for (int i = 0; i <= 10; i++)
			mXparser_consolePrint(fib3->calculate(i) + ", ");
		mXparser::consolePrintln();

		ExpressionPtr e36 = new_Expression("sum(i, 0, 10, fib3(i))");
		e36->addDefinitions(fib3);
		mXparser_consolePrintln(e36->getExpressionString() + " = " + e36->calculate() +
			", computing time : " + e36->getComputingTime() + " s.");

		/*
		 * Chebyshev polynomials definition using
		 * recursive functions
		 */
		mXparser_consolePrintln(highlight("Chebyshev polynomials definition using"));

		FunctionPtr T = new_Function("T(n,x) = if(n>1, 2*x*T(n-1,x)-T(n-2,x), if(n>0, x, 1) )");
		ArgumentPtr k = new_Argument("k", 5);
		ExpressionPtr e37 = new_Expression("T(k,x) - ( (x + sqrt(x^2-1))^k + (x - sqrt(x^2-1))^k)/2", k, x);
		e37->addDefinitions(T);
		mXparser_consolePrintln(e37->getExpressionString() + " = " + e37->calculate() +
			", computing time : " + e37->getComputingTime() + " s.");


		/*
		 * Binomial coefficient using complex recursion
		 */
		mXparser_consolePrintln(highlight("Binomial coefficient using complex recursion"));

		FunctionPtr Cnk = new_Function("Cnk", "if( k>0, if( k<n, Cnk(n-1,k-1)+Cnk(n-1,k), 1), 1)", "n", "k");

		ExpressionPtr e38 = new_Expression("C(10,5) - Cnk(10,5)");
		e38->addDefinitions(Cnk);

		mXparser_consolePrintln(e38->getExpressionString() + " = " + e38->calculate() +
			", computing time : " + e38->getComputingTime() + " s.");

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
		mXparser_consolePrintln(highlight("User defined constants"));

		ConstantPtr a = new_Constant("a", 5);
		ConstantPtr b = new_Constant("b = 10");
		ConstantPtr c = new_Constant("c = a + b", a, b);

		ExpressionPtr e39 = new_Expression("a+b+c");
		e39->addDefinitions(a, b, c);

		/*
		 * For example in verbose mode
		 * computing
		 */
		mXparser_consolePrintln(highlight("verbose mode"));

		e39->setVerboseMode();
		e39->checkSyntax();
		mXparser::consolePrintln();
		mXparser_consolePrintln(e39->getErrorMessage());
		mXparser_consolePrintln(e39->getExpressionString() + " = " + e39->calculate() +
			", computing time : " + e39->getComputingTime() + " s.");


		/*
		 * There are much more other features in the mXparser API.
		 * Please refer to the API specifications.
		 *
		 * Please be aware that this is the version 1.0 of the parser
		 * - I am pretty sure you will find some bugs - if so please send me
		 * more info: mariusz.gromada@mathspace.pl
		 */
	}
} // namespace org::mariuszgromada::math::mxparser

