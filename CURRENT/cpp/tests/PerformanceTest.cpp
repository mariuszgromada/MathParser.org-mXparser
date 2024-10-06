/*
 * @(#)PerformanceTest.cpp        6.1.0    2024-10-06
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

#include "Miscellaneous.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/Constant.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/Function.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Math.hpp"
#include <catch2/catch_test_macros.hpp>
#include <catch2/internal/catch_assertion_handler.hpp>
#include <catch2/internal/catch_decomposer.hpp>
#include <catch2/internal/catch_preprocessor_internal_stringify.hpp>
#include <memory>
#include <thread>
#include <vector>

using namespace org::mariuszgromada::math::mxparser;
using namespace org::mariuszgromada::math::mxparser::mathcollection;
using namespace org::mariuszgromada::math::mxparser::parsertokens;
using namespace org::mariuszgromada::math::mxparser::wrapper;

/**
 * Default number of iterations
 */
static constexpr int BASE_ITER_NUM = 10000000;


/**
 * Package level class to keep
 * performance test result/
 */
class PerformanceTestResult {
public:
	Long startTime = 0;
	Long endTime = 0;;
	int iterNum = 0;;
	double computingTimeSec = 0;;
	Long iterPerSec = 0;;
	int Id = 0;;
	int threadsNum = 0;;
	StringPtr description;
	StringPtr exprStr;
	bool isClosed = false;

	explicit PerformanceTestResult(int threadsNum) {
		this->threadsNum = threadsNum;
	}

	void testInit() {
		startTime = SystemUtils::currentTimeMillis();
	}

	void testClose() {
		endTime = SystemUtils::currentTimeMillis();
		computingTimeSec = static_cast<double>(endTime - startTime)/1000.0;
		iterPerSec = static_cast<long>(Math::round(iterNum / computingTimeSec));
		isClosed = true;
		mXparser::consolePrintln(S("") + "(threads = " + threadsNum + ") test - " + Id + "; " + exprStr + "; " + iterPerSec + "; " + computingTimeSec + "; " + iterNum + "; " + description);
	}
};

using PerformanceTestResultPtr = std::shared_ptr<PerformanceTestResult>;

inline PerformanceTestResultPtr new_PerformanceTestResult(int threadsNum) {
	return std::make_shared<PerformanceTestResult>(threadsNum);
}

/**
 * Multithreading abstract implementation of test
 */
class TestThread {
protected:
	/**
	 * Number of iterations for a single thread.
	 */
	int iterNum;
	/**
	 * Test parameters.
	 */
	PerformanceTestResultPtr test;

public:
	virtual ~TestThread() = default;
	/**
	 * Default constructor - creates parameters
	 * for a single test thread
	 *
	 * @param test         Test parameters
	 */
	explicit TestThread(const PerformanceTestResultPtr &test) {
		this->test = test;
		this->iterNum = test->iterNum/test->threadsNum;
	}
	/**
	 * Test scenario implementation
	 */
	virtual void testScenario() = 0;
	/**
	 * Test scenario execution
	 */
	void run () {
		testScenario();
	}
};

using TestThreadPtr = std::shared_ptr<TestThread>;

/**
 * Multithreading implementation of class for
 * Performance test: Simple calculations
 */
class TestSimpleCalcThread : public TestThread {
public:
	explicit TestSimpleCalcThread(const PerformanceTestResultPtr &test) : TestThread(test) {}
	
	void testScenario() override {
		ExpressionPtr e = new_Expression(test->exprStr);
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			e->calculate();
		}
	}
};
inline TestThreadPtr new_TestSimpleCalcThread(const PerformanceTestResultPtr &test) {
	return std::make_shared<TestSimpleCalcThread>(test);
}

/**
 * Multithreading implementation of class for
 * Performance test: Simple calculations - addition with
 * argument. ExpressionPtr created once, containing argument
 * 'x'. Iteration: argument value is being modified
 * (increased), then expression is recalculated
 */
class Test011Thread : public TestThread {
public:
	explicit Test011Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		ArgumentPtr x = new_Argument(UTF("x"));
		ExpressionPtr e = new_Expression(test->exprStr, x);
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			x->setArgumentValue(i);
			e->calculate();
		}
	}
};
inline TestThreadPtr new_Test011Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test011Thread>(test);
}

/**
 * Multithreading implementation of class for
 * Performance test: User defined function f(x,y)=3x+4y.
 * ExpressionPtr &FunctionPtr created once, containing argument 'x'.
 * Iteration: argument value is being modified (increased),
 * then expression is recalculated
 */
class Test012Thread : public TestThread {
public:
	explicit Test012Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		ArgumentPtr x = new_Argument(UTF("x"));
		ArgumentPtr y = new_Argument(UTF("y"));
		FunctionPtr f = new_Function(UTF("f(x,y)=3*x+4*y"));
		ExpressionPtr e = new_Expression(test->exprStr, f, x, y);
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			x->setArgumentValue(i);
			y->setArgumentValue(i);
			e->calculate();
		}
	}
};
inline TestThreadPtr new_Test012Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test012Thread>(test);
}

/**
 * Multithreading implementation of class for
 * Performance test: Creating constants: Iteration:
 * ConstantPtr c = new_Constant("c", 5)
 */
class Test013Thread : public TestThread {
public:
	explicit Test013Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		ConstantPtr c = new_Constant(UTF("c"), 5);
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			c = new_Constant(UTF("c"), 5);
		}
		c->getConstantValue();
	}
};
inline TestThreadPtr new_Test013Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test013Thread>(test);
}

/**
 * Multithreading implementation of class for
 * Performance test: Creating constants: Iteration:
 * ConstantPtr c = new_Constant("c=5")
 */
class Test014Thread : public TestThread {
public:
	explicit Test014Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		ConstantPtr c = new_Constant(UTF("c"), 5);
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			c = new_Constant(UTF("c=5"));
		}
		c->getConstantValue();
	}
};
inline TestThreadPtr new_Test014Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test014Thread>(test);
}


/**
 * Multithreading implementation of class for
 * Performance test: Creating arguments: Iteration:
 * ArgumentPtr x = new_Argument("x", 5)
 */
class Test015Thread : public TestThread {
public:
	explicit Test015Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		ArgumentPtr x = new_Argument(UTF("x"), 2);
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			x = new_Argument(UTF("x"), 5);
		}
		x->getArgumentValue();
	}
};
inline TestThreadPtr new_Test015Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test015Thread>(test);
}

/**
 * Multithreading implementation of class for
 * Performance test: Creating arguments: Iteration:
 * ArgumentPtr x = new_Argument("x = 5")
 */
class Test016Thread : public TestThread {
public:
	explicit Test016Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		ArgumentPtr x = new_Argument(UTF("x"), 2);
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			x = new_Argument(UTF("x=5"));
		}
		x->getArgumentValue();
	}
};
inline TestThreadPtr new_Test016Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test016Thread>(test);
}

/**
 * Multithreading implementation of class for
 * Performance test: Creating functions: Iteration:
 * FunctionPtr f = new_Function("f", "x+y", "x", "y")
 */
class Test017Thread : public TestThread {
public:
	explicit Test017Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		FunctionPtr f = new_Function(UTF("f"), UTF("x"), UTF("x"));
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			f = new_Function(UTF("f"), UTF("x+y"), UTF("x"), UTF("y"));
		}
		f->calculate(1);
	}
};
inline TestThreadPtr new_Test017Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test017Thread>(test);
}


/**
 * Multithreading implementation of class for
 * Performance test: Creating functions: Iteration:
 * FunctionPtr f = new_Function("f(x,y)=x+y")
 */
class Test018Thread : public TestThread {
public:
	explicit Test018Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		FunctionPtr f = new_Function(UTF("f"), UTF("x"), UTF("x"));
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			f = new_Function(UTF("f(x,y)=x+y"));
		}
		f->calculate(1, 2);
	}
};
inline TestThreadPtr new_Test018Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test018Thread>(test);
}

/**
 * Multithreading implementation of class for
 * Performance test: Creating expressions: Iteration:
 * ExpressionPtr e = new_Expression("sin(2+(3*4)^2)/10")
 */
class Test019Thread : public TestThread {
public:
	explicit Test019Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		ExpressionPtr e = new_Expression("");
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			e = new_Expression(UTF("sin(2+(3*4)^2)/10"));
		}
		e->calculate();
	}
};
inline TestThreadPtr new_Test019Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test019Thread>(test);
}

/**
 * Multithreading implementation of class for
 * Performance test: Creating expressions:
 * ExpressionPtr e = new_Expression("")
 * Iteration:
 * e->setExpressionString(sin(2+(3*4)^2)/10);
 * e->checkSyntax();
 */
class Test020Thread : public TestThread {
public:
	explicit Test020Thread(const PerformanceTestResultPtr &test) : TestThread(test) {}

	void testScenario() override {
		ExpressionPtr e = new_Expression("");
		for (int i = 0; i <= iterNum; i++) {
			if (mXparser::isCurrentCalculationCancelled()) break;
			e->setExpressionString(UTF("sin(2+(3*4)^2)/10"));
			e->checkSyntax();
		}
	}
};
inline TestThreadPtr new_Test020Thread(const PerformanceTestResultPtr &test) {
	return std::make_shared<Test020Thread>(test);
}

/**
 * Creates threads, executes them, then wait till
 * each thread is finished
 *
 * @param test         Test definition
 * @param classId      Class id specifying the implementation of test scenario
 */
static void createRunJoinThreads(const PerformanceTestResultPtr &test, int classId) {
	test->testInit();
	std::thread* threads = new std::thread[test->threadsNum];
	TestThreadPtr* runners = new TestThreadPtr[test->threadsNum];

	for (int threadId = 0; threadId < test->threadsNum; threadId++) {
		switch (classId) {
		case 0:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 1:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 2:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 3:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 4:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 5:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 6:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 7:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 8:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 9:  runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 10: runners[threadId] = new_TestSimpleCalcThread(test); break;
		case 11: runners[threadId] = new_Test011Thread(test); break;
		case 12: runners[threadId] = new_Test012Thread(test); break;
		case 13: runners[threadId] = new_Test013Thread(test); break;
		case 14: runners[threadId] = new_Test014Thread(test); break;
		case 15: runners[threadId] = new_Test015Thread(test); break;
		case 16: runners[threadId] = new_Test016Thread(test); break;
		case 17: runners[threadId] = new_Test017Thread(test); break;
		case 18: runners[threadId] = new_Test018Thread(test); break;
		case 19: runners[threadId] = new_Test019Thread(test); break;
		case 20: runners[threadId] = new_Test020Thread(test); break;
		}
		threads[threadId] = std::thread(&TestThread::run, runners[threadId]);
	}
	for (int threadId = 0; threadId < test->threadsNum; threadId++) {
		if (threads[threadId].joinable()) threads[threadId].join();
	}

	test->testClose();
	delete[] threads;
	delete[] runners;
}

/**
 * Performance test: Simple calculations - addition.
 * ExpressionPtr created once. Iteration: repeatedly
 * recalculated same expression.
 *
 * @param test
 * @param testId
 */
static void test000(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - addition. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2+3"));
	createRunJoinThreads(test, 0);
}
/**
 * Performance test: Simple calculations - multiplication.
 * ExpressionPtr created once. Iteration: repeatedly recalculated
 * same expression.
 *
 * @param test
 * @param testId
 */
static void test001(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - multiplication. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2*3"));
	createRunJoinThreads(test, 1);
}
/**
 * Performance test: Simple calculations - division. Expression
 * created once. Iteration: repeatedly recalculated same
 * expression.
 *
 * @param test
 * @param testId
 */
static void test002(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - division. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2/3"));
	createRunJoinThreads(test, 2);
}
/**
 * Performance test: Simple calculations - power. Expression
 * created once. Iteration: repeatedly recalculated same
 * expression.
 *
 * @param test
 * @param testId
 */
static void test003(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - power. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2^3"));
	createRunJoinThreads(test, 3);
}
/**
 * Performance test: Simple calculations - sinus. Expression
 * created once. Iteration: repeatedly recalculated same
 * expression.
 *
 * @param test
 * @param testId
 */
static void test004(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - sinus. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("sin(3)"));
	createRunJoinThreads(test, 4);
}
/**
 * Performance test: Simple calculations - 2 additions.
 * ExpressionPtr created once. Iteration: repeatedly recalculated
 * same expression.
 *
 * @param test
 * @param testId
 */
static void test005(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - 2 additions. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2+3+4"));
	createRunJoinThreads(test, 5);
}
/**
 * Performance test: Simple calculations - 3 additions.
 * ExpressionPtr created once. Iteration: repeatedly
 * recalculated same expression.
 *
 * @param test
 * @param testId
 */
static void test006(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - 3 additions. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2+3+4+5"));
	createRunJoinThreads(test, 6);
}
/**
 * Performance test: Simple calculations - 3 additions +
 * 1 parenthesis. ExpressionPtr created once. Iteration:
 * repeatedly recalculated same expression.
 *
 * @param test
 * @param testId
 */
static void test007(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - 3 additions + 1 parenthesis. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2+(3+4)+5"));
	createRunJoinThreads(test, 7);
}
/**
 * Performance test: Simple calculations - 3 additions +
 * 2 brackets. ExpressionPtr created once. Iteration:
 * repeatedly recalculated same expression.
 *
 * @param test
 * @param testId
 */
static void test008(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - 3 additions + 2 brackets. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("(2+3)+(4+5)"));
	createRunJoinThreads(test, 8);
}
/**
 * Performance test: Simple calculations - 3 additions + 2
 * brackets. ExpressionPtr created once. Iteration:
 * repeatedly recalculated same expression.
 *
 * @param test
 * @param testId
 */
static void test009(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - 3 additions + 2 brackets. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2+(3+(4+5))"));
	createRunJoinThreads(test, 9);
}
/**
 * Performance test: Combination of different operations.
 * ExpressionPtr created once. Iteration: repeatedly
 * recalculated same expression.
 *
 * @param test
 * @param testId
 */
static void test010(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Combination of different operations. ExpressionPtr created once. Iteration: repeatedly recalculated same expression."));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("sin(2+(3*4)^2)/10"));
	createRunJoinThreads(test, 10);
}
/**
 * Performance test: Simple calculations - addition with
 * argument. ExpressionPtr created once, containing argument
 * 'x'. Iteration: argument value is being modified
 * (increased), then expression is recalculated
 *
 * @param test
 * @param testId
 */
static void test011(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Simple calculations - addition with argument. ExpressionPtr created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated"));
	test->iterNum = BASE_ITER_NUM;
	test->exprStr = S(UTF("2+x"));
	createRunJoinThreads(test, 11);
}
/**
 * Performance test: User defined function f(x,y)=3x+4y.
 * ExpressionPtr &FunctionPtr created once, containing argument 'x'.
 * Iteration: argument value is being modified (increased),
 * then expression is recalculated
 *
 * @param test
 * @param testId
 */
static void test012(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("User defined function f(x,y)=3*x+4*y. ExpressionPtr & FunctionPtr created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated"));
	test->iterNum = BASE_ITER_NUM / 10;
	test->exprStr = S(UTF("3*f(x,y)-(2*x+3*y)"));
	createRunJoinThreads(test, 12);
}
/**
 * Performance test: Creating constants: Iteration:
 * ConstantPtr c = new_Constant("c", 5)
 *
 * @param test
 * @param testId
 */
static void test013(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Creating constants: Iteration: ConstantPtr c = new_Constant(\"c\", 5)"));
	test->iterNum = BASE_ITER_NUM / 20;
	test->exprStr = S(UTF("ConstantPtr c = new_Constant(\"c\", 5)"));
	createRunJoinThreads(test, 13);
}
/**
 * Performance test: Creating constants: Iteration:
 * ConstantPtr c = new_Constant("c=5")
 *
 * @param test
 * @param testId
 */
static void test014(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Creating constants: Iteration: ConstantPtr c = new_Constant(\"c=5\")"));
	test->iterNum = BASE_ITER_NUM / 200;
	test->exprStr = S(UTF("ConstantPtr c = new_Constant(\"c=5\")"));
	createRunJoinThreads(test, 14);
}
/**
 * Performance test: Creating arguments: Iteration:
 * ArgumentPtr x = new_Argument("x", 5)
 *
 * @param test
 * @param testId
 */
static void test015(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Creating arguments: Iteration: ArgumentPtr x = new_Argument(\"x\", 5)"));
	test->iterNum = BASE_ITER_NUM / 20;
	test->exprStr = S(UTF("ArgumentPtr x = new_Argument(\"x\", 5)"));
	createRunJoinThreads(test, 15);
}
/**
 * Performance test: Creating arguments: Iteration:
 * ArgumentPtr x = new_Argument("x", 5)
 *
 * @param test
 * @param testId
 */
static void test016(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Creating arguments: Iteration: ArgumentPtr x = new_Argument(\"x=5\")"));
	test->iterNum = BASE_ITER_NUM / 200;
	test->exprStr = S(UTF("ArgumentPtr x = new_Argument(\"x=5\")"));
	createRunJoinThreads(test, 16);
}
/**
 * Performance test: Creating functions: Iteration:
 * FunctionPtr f = new_Function("f", "x+y", "x", "y")
 *
 * @param test
 * @param testId
 */
static void test017(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Creating functions: Iteration: FunctionPtr f = new_Function(\"f\", \"x+y\", \"x\", \"y\")"));
	test->iterNum = BASE_ITER_NUM / 20;
	test->exprStr = S(UTF("FunctionPtr f = new_Function(\"f\", \"x+y\", \"x\", \"y\")"));
	createRunJoinThreads(test, 17);
}
/**
 * Performance test: Creating functions: Iteration:
 * FunctionPtr f = new_Function("f(x,y)=x+y")
 *
 * @param test
 * @param testId
 */
static void test018(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Creating functions: Iteration: FunctionPtr f = new_Function(\"f(x,y)=x+y\")"));
	test->iterNum = BASE_ITER_NUM / 200;
	test->exprStr = S(UTF("FunctionPtr f = new_Function(\"f(x,y)=x+y\")"));
	createRunJoinThreads(test, 18);
}
/**
 * Performance test: Creating expressions: Iteration:
 * ExpressionPtr e = new_Expression("sin(2+(3*4)^2)/10")
 *
 * @param test
 * @param testId
 */
static void test019(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Creating expressions: Iteration: ExpressionPtr e = new_Expression(\"sin(2+(3*4)^2)/10\")"));
	test->iterNum = BASE_ITER_NUM / 20;
	test->exprStr = S(UTF("ExpressionPtr e = new_Expression(\"sin(2+(3*4)^2)/10\")"));
	createRunJoinThreads(test, 19);
}
/**
 * Performance test: Creating expressions + checking syntax:
 * Iteration:
 * ExpressionPtr e = new_Expression("sin(2+(3*4)^2)/10")
 *
 * @param test
 * @param testId
 */
static void test020(const PerformanceTestResultPtr &test, int testId) {
	test->Id = testId;
	test->description = S(UTF("Creating expressions + checking syntax: Iteration: ExpressionPtr e = new_Expression(\"sin(2+(3*4)^2)/10\")"));
	test->iterNum = BASE_ITER_NUM / 100;
	test->exprStr = S(UTF("ExpressionPtr e = new_Expression(\"sin(2+(3*4)^2)/10\")"));
	createRunJoinThreads(test, 20);
}

/**
 * Performance test definition & result
 */
PerformanceTestResultPtr tests[21];

/**
 * Starts mXparser performance tests. List of performed tests:
 *
 * <ul>
 * <li>00. Simple calculations - addition. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>01. Simple calculations - multiplication. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>02. Simple calculations - division. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>03. Simple calculations - power. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>04. Simple calculations - sinus. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>05. Simple calculations - 2 additions. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>06. Simple calculations - 3 additions. ExpressionPtr created once. Iteration: repeatedlyrecalculated same expression.
 * <li>07. Simple calculations - 3 additions + 1 parenthesis. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>08. Simple calculations - 3 additions + 2 brackets. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>09. Simple calculations - 3 additions + 2 brackets. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>10. Combination of different operations. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>11. Simple calculations - addition with argument. ExpressionPtr created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
 * <li>12. User defined function f(x,y)=3x+4y. ExpressionPtr FunctionPtr created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
 * <li>13. Creating constants: Iteration: ConstantPtr c = new_Constant("c", 5)
 * <li>14. Creating constants: Iteration: ConstantPtr c = new_Constant("c=5")
 * <li>15. Creating arguments: Iteration: ArgumentPtr x = new_Argument("x", 5)
 * <li>16. Creating arguments: Iteration: ArgumentPtr x = new_Argument("x=5")
 * <li>17. Creating functions: Iteration: FunctionPtr f = new_Function("f", "x+y", "x", "y")
 * <li>18. Creating functions: Iteration: FunctionPtr f = new_Function("f(x,y)=x+y")
 * <li>19. Creating expressions: Iteration: ExpressionPtr e = new_Expression("sin(2+(3*4)^2)/10")
 * <li>20. Creating expressions + checking syntax: Iteration: ExpressionPtr e = new_Expression("sin(2+(3*4)^2)/10")
 * </ul>
 *
 * @param  threadsNum   Number of threads
 * @return Number of tests that were not performed.
 */
static int startPerformanceTests(int threadsNum) {
	mXparser::disableUlpRounding();
	mXparser::disableAlmostIntRounding();
	mXparser::disableCanonicalRounding();
	if (threadsNum <= 0) threadsNum = mXparser::getThreadsNumber();
	int testId = -1;
	int lastTestId = 20;
	tests[++testId] = new_PerformanceTestResult(threadsNum); test000(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test001(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test002(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test003(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test004(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test005(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test006(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test007(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test008(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test009(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test010(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test011(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test012(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test013(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test014(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test015(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test016(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test017(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test018(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test019(tests[testId], testId);
	tests[++testId] = new_PerformanceTestResult(threadsNum); test020(tests[testId], testId);
	return lastTestId - testId;
}
/**
 * Starts mXparser performance tests - number of threads given by the
 * mXparser::getThreadsNumber()
 *
 * List of performed tests:
 *
 * <ul>
 * <li>00. Simple calculations - addition. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>01. Simple calculations - multiplication. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>02. Simple calculations - division. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>03. Simple calculations - power. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>04. Simple calculations - sinus. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>05. Simple calculations - 2 additions. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>06. Simple calculations - 3 additions. ExpressionPtr created once. Iteration: repeatedlyrecalculated same expression.
 * <li>07. Simple calculations - 3 additions + 1 parenthesis. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>08. Simple calculations - 3 additions + 2 brackets. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>09. Simple calculations - 3 additions + 2 brackets. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>10. Combination of different operations. ExpressionPtr created once. Iteration: repeatedly recalculated same expression.
 * <li>11. Simple calculations - addition with argument. ExpressionPtr created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
 * <li>12. User defined function f(x,y)=3x+4y. ExpressionPtr FunctionPtr created once, containing argument 'x'. Iteration: argument value is being modified (increased), then expression is recalculated
 * <li>13. Creating constants: Iteration: ConstantPtr c = new_Constant("c", 5)
 * <li>14. Creating constants: Iteration: ConstantPtr c = new_Constant("c=5")
 * <li>15. Creating arguments: Iteration: ArgumentPtr x = new_Argument("x", 5)
 * <li>16. Creating arguments: Iteration: ArgumentPtr x = new_Argument("x=5")
 * <li>17. Creating functions: Iteration: FunctionPtr f = new_Function("f", "x+y", "x", "y")
 * <li>18. Creating functions: Iteration: FunctionPtr f = new_Function("f(x,y)=x+y")
 * <li>19. Creating expressions: Iteration: ExpressionPtr e = new_Expression("sin(2+(3*4)^2)/10")
 * <li>20. Creating expressions + checking syntax: Iteration: ExpressionPtr e = new_Expression("sin(2+(3*4)^2)/10")
 * </ul>
 *
 * @see mXparser#getThreadsNumber()
 * @see mXparser#setThreadsNumber(int)
 *
 * @return Number of tests that were not performed.
 */


TEST_CASE("testPerformance", "[Performance]") {
	License::iConfirmNonCommercialUse("INFIMA");
	startPerformanceTests(mXparser::getThreadsNumber());
	bool testResult = true;
	for (const PerformanceTestResultPtr &ptr : tests) {
		if (!ptr->isClosed) {
			testResult = false;
			mXparser::consolePrintln(S("test = ") + ptr->Id + "isClosed = " + ptr->isClosed);
			break;
		}
	}
	CHECK(testResult);
}