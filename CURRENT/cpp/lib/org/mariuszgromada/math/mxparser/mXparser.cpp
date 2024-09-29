/*
 * @(#)mXparser.cpp        6.1.0    2024-09-24
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

#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/PrimesCache.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialValue.hpp"
#include "org/mariuszgromada/math/mxparser/Miscellaneous.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Token.hpp"
#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/SystemUtils.hpp"
#include <chrono>
#include <mutex>
#include <thread>

namespace org::mariuszgromada::math::mxparser {
	using namespace org::mariuszgromada::math::mxparser::parsertokens;
	using namespace org::mariuszgromada::math::mxparser::miscellaneous;
	using namespace org::mariuszgromada::math::mxparser::mathcollection;


	API_VISIBLE StringBuilderPtr mXparser::CONSOLE_OUTPUT = new_StringBuilder();
	API_VISIBLE StringPtr mXparser::CONSOLE_PREFIX = nullptr;
	API_VISIBLE StringPtr mXparser::CONSOLE_OUTPUT_PREFIX = nullptr;
	API_VISIBLE int mXparser::CONSOLE_ROW_NUMBER = 1;
	API_VISIBLE int mXparser::THREADS_NUMBER = static_cast<int>(std::thread::hardware_concurrency());
	API_VISIBLE bool mXparser::ulpRounding = false;
	API_VISIBLE bool mXparser::canonicalRounding = true;
	API_VISIBLE bool mXparser::almostIntRounding = true;
	API_VISIBLE int mXparser::MAX_RECURSION_CALLS = DEFAULT_MAX_RECURSION_CALLS;
	API_VISIBLE ListPtr<StringPtr> mXparser::tokensToRemove = new_List<StringPtr>();
	API_VISIBLE ListPtr<TokenModificationPtr> mXparser::tokensToModify = new_List<TokenModificationPtr>();
	API_VISIBLE bool mXparser::degreesMode = false;
	API_VISIBLE bool mXparser::overrideBuiltinTokens = false;
	API_VISIBLE bool mXparser::impliedMultiplicationMode = true;
	API_VISIBLE bool mXparser::unicodeKeyWordsEnabled = true;
	API_VISIBLE bool mXparser::attemptToFixExpStrEnabled = true;
	API_VISIBLE int mXparser::optionsChangesetNumber = 0;
	API_VISIBLE bool mXparser::cancelCurrentCalculationFlag = false;
	API_VISIBLE bool mXparser::selectBestMatchingLanguage = true;

	API_VISIBLE PrimesCachePtr mXparser::primesCache = nullptr;

	/**
	 * Empty expression for general help purposes.
	 */
	API_VISIBLE ExpressionPtr mXparser::HELP_EXPRESSION = new_Expression();

	API_VISIBLE StringPtr mXparser::VERSION = nullptr;
	API_VISIBLE StringPtr mXparser::VERSION_CODE_NAME = nullptr;
	API_VISIBLE StringPtr mXparser::VERSION_NAME = nullptr;
	API_VISIBLE StringPtr mXparser::BUIT_FOR = nullptr;
	API_VISIBLE StringPtr mXparser::LICENSE = nullptr;

	API_VISIBLE StringPtr mXparser::NAMEv10 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv20 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv23 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv24 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv30 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv40 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv41 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv42 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv43 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv44 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv50 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv51 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv52 = nullptr;
	API_VISIBLE StringPtr mXparser::NAMEv60 = nullptr;

	STATIC_VARS_INITI_CPP(mXparser,
		STATIC_VARS_INITI_DEPENDENCY(StringUtils);
		STATIC_VARS_INITI_DEPENDENCY(License);

		VERSION = StringUtils::toString(VERSION_MAJOR) + UTF(".") +
		StringUtils::toString(VERSION_MINOR) + UTF(".") + StringUtils::toString(VERSION_PATCH);
		VERSION_CODE_NAME = S(UTF("Sagitara"));
		VERSION_NAME = VERSION + UTF(" ") + VERSION_CODE_NAME;

		/**
		 * Framework used to compile mXparser
		 */
		BUIT_FOR = S(UTF("C++"));

		/**
		 * The terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT.
		 */
		LICENSE =
			UTF("mXparser - version ") + VERSION + UTF("\n")
			+ License::MATHPARSERORG_MXPARSER_DUAL_LICENSE_AGREEMENT;

		/*
		 * mXparser version names
		 */
		NAMEv10 = S(UTF("1.0"));
		NAMEv20 = S(UTF("2.0"));
		NAMEv23 = S(UTF("2.3"));
		NAMEv24 = S(UTF("2.4"));
		NAMEv30 = S(UTF("3.0"));
		NAMEv40 = S(UTF("4.0"));
		NAMEv41 = S(UTF("4.1"));
		NAMEv42 = S(UTF("4.2"));
		NAMEv43 = S(UTF("4.3"));
		NAMEv44 = S(UTF("4.4"));
		NAMEv50 = S(UTF("5.0"));
		NAMEv51 = S(UTF("5.1"));
		NAMEv52 = S(UTF("5.2"));
		NAMEv60 = S(UTF("6.0"));

		CONSOLE_PREFIX = UTF("[mXparser-v.") + VERSION + UTF("] ");
		CONSOLE_OUTPUT_PREFIX = CONSOLE_PREFIX;
	);

	API_VISIBLE void mXparser::refreshHelp() {
		HELP_EXPRESSION = new_Expression();
	}

	/**
	 * Initialization of prime numbers cache.
	 * Cache size according to {PrimesCache#DEFAULT_MAX_NUM_IN_CACHE}
	 * @see PrimesCache
	 */
	API_VISIBLE void mXparser::initPrimesCache() {
		primesCache = new_PrimesCache();
	}

	/**
	 * Initialization of prime numbers cache.
	 * @param mximumNumberInCache The maximum integer number that
	 *                            will be stored in cache.
	 * @see PrimesCache
	 */
	API_VISIBLE void mXparser::initPrimesCache(int mximumNumberInCache) {
		primesCache = new_PrimesCache(mximumNumberInCache);
	}

	/**
	 * Initialization of prime numbers cache.
	 * @param primesCache The primes cache object
	 * @see PrimesCache
	 */
	API_VISIBLE void mXparser::initPrimesCache(const PrimesCachePtr &primesCache) {
		mXparser::primesCache = primesCache;
	}

	/**
	 * Returns true in case when primes cache initialization was successful,
	 * otherwise returns false.
	 *
	 * @return Returns true in case when primes cache initialization was successful,
	 * otherwise returns false.
	 */
	API_VISIBLE bool mXparser::isInitPrimesCacheSuccessful() {
		if (primesCache == nullptr) return false;
		LOCK(primesCache);
		return primesCache->isInitSuccessful();
	}

	/**
	 * Sets {mXparser#primesCache} to nullptr
	 */
	API_VISIBLE void mXparser::setNoPrimesCache() {
		primesCache = nullptr;
	}

	/**
	 * Returns maximum integer number in primes cache
	 * @return If primes cache was initialized then maximum number in
	 * primes cache, otherwise {mXparser#PRIMES_CACHE_NOT_INITIALIZED}
	 */
	API_VISIBLE int mXparser::getMaxNumInPrimesCache() {
		if (primesCache != nullptr) {
			LOCK(primesCache);
			return primesCache->getMaxNumInCache();
		} else
			return PRIMES_CACHE_NOT_INITIALIZED;
	}

	/**
	 * Gets maximum threads number
	 *
	 * @return Threads number.
	 */
	API_VISIBLE int mXparser::getThreadsNumber() {
		return THREADS_NUMBER;
	}

	/**
	 * Sets default threads number
	 */
	API_VISIBLE void mXparser::setDefaultThreadsNumber() {
		THREADS_NUMBER = static_cast<int>(std::thread::hardware_concurrency());
	}

	/**
	 * Sets threads number
	 *
	 * @param threadsNumber  Thread number.
	 */
	API_VISIBLE void mXparser::setThreadsNumber(int threadsNumber) {
		if (threadsNumber > 0) THREADS_NUMBER = threadsNumber;
	}

	/**
	 * Calculates function f(x0) (given as expression) assigning Argument x = x0;
	 *
	 *
	 * @param      f                   the expression
	 * @param      x                   the argument
	 * @param      x0                  the argument value
	 *
	 * @return     f->calculate()
	 *
	 * @see        Expression
	 *
	 * @deprecated Planned to be removed, use {MathFunctions#getFunctionValue(Expression, Argument, double)} instead
	 */
	// @Deprecated
	API_VISIBLE double mXparser::getFunctionValue(const ExpressionPtr &f, const ArgumentPtr &x, double x0) {
		return MathFunctions::getFunctionValue(f, x, x0);
	}

	/**
	 * Converts List of double to double[]
	 *
	 * @param      numbers             the numbers list
	 *
	 * @return     numbers array
	 */
	API_VISIBLE ArrayPtr<double> mXparser::arrayList2double(const ListPtr<double> &numbers) {
		if (numbers == nullptr)
			return nullptr;
		int size = numbers->size();
		ArrayPtr<double> newNumbers = new_double(size);
		for (int i = 0; i < size; i++)
			(*newNumbers)(i) = numbers->get(i);
		return newNumbers;
	}

	/**
	 * Returns array of double values of the function f(i)
	 * calculated on the range: i = from to i = to by step = delta
	 *
	 * @param f            Function expression
	 * @param index        Index argument
	 * @param from         'from' value
	 * @param to           'to' value
	 * @param delta        'delta' step definition
	 * @return             Array of function values
	 *
	 * @deprecated Planned to be removed, use {MathFunctions#getFunctionValues(Expression, Argument, double, double, double)} instead
	 */
	// @Deprecated
	API_VISIBLE ArrayPtr<double> mXparser::getFunctionValues(const ExpressionPtr &f, const ArgumentPtr &index, double from,
	                                             double to, double delta) {
		return MathFunctions::getFunctionValues(f, index, from, to, delta);
	}

	/**
	 * Modifies random generator used by the ProbabilityDistributions class.
	 *
	 * @param randomGenerator      Random generator.
	 * @see ProbabilityDistributions
	 * @see ProbabilityDistributions#randomGenerator
	 */
	API_VISIBLE void mXparser::setRandomGenerator(const RandomPtr &randomGenerator) {
		if (randomGenerator != nullptr) ProbabilityDistributions::randomGenerator = randomGenerator;
	}

	/**
	 * Sets comparison mode to EXACT.
	 * @see BinaryRelations
	 */
	API_VISIBLE void mXparser::setExactComparison() {
		BinaryRelations::setExactComparison();
	}

	/**
	 * Sets comparison mode to EPSILON.
	 * @see BinaryRelations
	 * @see #setEpsilon(double)
	 */
	API_VISIBLE void mXparser::setEpsilonComparison() {
		BinaryRelations::setEpsilonComparison();
	}

	/**
	 * Sets epsilon value used in the EPSILON comparison mode and
	 * the almost integer rounding mode.
	 *
	 * @param epsilon   Epsilon value (grater than 0).
	 *
	 * @see #setEpsilonComparison()
	 * @see #enableAlmostIntRounding()
	 * @see BinaryRelations
	 */
	API_VISIBLE void mXparser::setEpsilon(double epsilon) {
		BinaryRelations::setEpsilon(epsilon);
	}

	/**
	 * Sets default epsilon value.
	 *
	 * @see #setEpsilonComparison()
	 * @see #enableAlmostIntRounding()
	 * @see BinaryRelations#DEFAULT_COMPARISON_EPSILON
	 * @see BinaryRelations
	 */
	API_VISIBLE void mXparser::setDefaultEpsilon() {
		BinaryRelations::setDefaultEpsilon();
	}

	/**
	 * Returns current epsilon value.
	 * @return  Returns current epsilon value.
	 *
	 * @see #setEpsilonComparison()
	 * @see #enableAlmostIntRounding()
	 * @see BinaryRelations
	 */
	API_VISIBLE double mXparser::getEpsilon() {
		return BinaryRelations::getEpsilon();
	}

	/**
	 * Checks if epsilon comparison mode is active;
	 * @return  True if epsilon mode is active, otherwise returns false.
	 * @see #setEpsilonComparison()
	 * @see #setExactComparison()
	 * @see #enableAlmostIntRounding()
	 * @see BinaryRelations
	 */
	API_VISIBLE bool mXparser::checkIfEpsilonMode() {
		return BinaryRelations::checkIfEpsilonMode();
	}

	/**
	 * Checks if exact comparison mode is active;
	 * @return  True if exact mode is active, otherwise returns false.
	 * @see #setEpsilonComparison()
	 * @see #setExactComparison()
	 * @see BinaryRelations
	 */
	API_VISIBLE bool mXparser::checkIfExactMode() {
		return BinaryRelations::checkIfExactMode();
	}

	/**
	 * Enables ULP rounding.
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent ULP rounding
	 * to minimize misleading results. By default, this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Using this mode 0.1 + 0.1 + 0.1 = 0.3
	 */
	API_VISIBLE void mXparser::enableUlpRounding() {
		ulpRounding = true;
	}

	/**
	 * Disables ULP rounding.
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent ULP rounding
	 * to minimize misleading results. By default this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
	 */
	API_VISIBLE void mXparser::disableUlpRounding() {
		ulpRounding = false;
	}

	/**
	 * Enables / disables ULP rounding.
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent ULP rounding
	 * to minimize misleading results. By default this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
	 *
	 * @param ulpRoundingState    True to enable, false to disable
	 */
	API_VISIBLE void mXparser::setUlpRounding(bool ulpRoundingState) {
		ulpRounding = ulpRoundingState;
	}

	/**
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent ULP rounding
	 * to minimize misleading results. By default this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Using this mode 0.1 + 0.1 + 0.1 = 0.3
	 *
	 * @return True if ULP rounding is enabled, otherwise false.
	 */
	API_VISIBLE bool mXparser::checkIfUlpRounding() {
		return ulpRounding;
	}

	/**
	 * Enables canonical rounding.
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent canonical rounding
	 * to minimize misleading results. By default, this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Using this mode 2.5 - 2.2 = 0.3
	 */
	API_VISIBLE void mXparser::enableCanonicalRounding() {
		canonicalRounding = true;
	}

	/**
	 * Disables canonical rounding.
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent canonical rounding
	 * to minimize misleading results. By default, this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Using this mode 2.5 - 2.2 = 0.3
	 */
	API_VISIBLE void mXparser::disableCanonicalRounding() {
		canonicalRounding = false;
	}

	/**
	 * Enables / disables canonical rounding.
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent ULP rounding
	 * to minimize misleading results. By default, this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
	 *
	 * @param canonicalRoundingState    True to enable, false to disable
	 */
	API_VISIBLE void mXparser::setCanonicalRounding(bool canonicalRoundingState) {
		canonicalRounding = canonicalRoundingState;
	}

	/**
	 * Double floating-point precision arithmetic causes
	 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
	 * additionally doubles are having a lot of advantages
	 * providing flexible number representation regardless of
	 * number size. mXparser is fully based on double numbers
	 * and that is why is providing intelligent canonical rounding
	 * to minimize misleading results. By default, this option is
	 * enabled resulting in automatic rounding only in some cases.
	 * Using this mode 2.5 - 2.2 = 0.3
	 *
	 * @return True if Canonical rounding is enabled, otherwise false.
	 */
	API_VISIBLE bool mXparser::checkIfCanonicalRounding() {
		return canonicalRounding;
	}

	/**
	 * Enables almost integer rounding option causing
	 * rounding final calculation result to precise integer
	 * if and only if result is very close to integer.
	 * Very close condition depends on epsilon.
	 *
	 * @see mXparser#setEpsilon(double)
	 * @see mXparser#getEpsilon()
	 * @see Expression#calculate()
	 */
	API_VISIBLE void mXparser::enableAlmostIntRounding() {
		almostIntRounding = true;
	}

	/**
	 * Disables almost integer rounding option causing
	 * rounding final calculation result to precise integer
	 * if and only if result is very close to integer.
	 * Very close condition depends on epsilon.
	 *
	 * @see mXparser#setEpsilon(double)
	 * @see mXparser#getEpsilon()
	 * @see Expression#calculate()
	 */
	API_VISIBLE void mXparser::disableAlmostIntRounding() {
		almostIntRounding = false;
	}
	/**
	 * Enables / disables almost integer rounding option causing
	 * rounding final calculation result to precise integer
	 * if and only if result is very close to integer.
	 * Very close condition depends on epsilon.
	 *
	 * @param almostIntRoundingState    True to enable, false to disable
	 */
	API_VISIBLE void mXparser::setAlmostIntRounding(bool almostIntRoundingState) {
		almostIntRounding = almostIntRoundingState;
	}

	/**
	 * Returns state of almost integer rounding option causing
	 * rounding final calculation result to precise integer
	 * if and only if result is very close to integer.
	 * Very close condition depends on epsilon.
	 *
	 * @return true if option enabled, false otherwise
	 *
	 * @see mXparser#setEpsilon(double)
	 * @see mXparser#getEpsilon()
	 * @see Expression#calculate()
	 */
	API_VISIBLE bool mXparser::checkIfAlmostIntRounding() {
		return almostIntRounding;
	}
	/**
	 * Enables special case recognition options, e.g. tan(pi/2) = NaN.
	 * Default behaviour is 'enableSpecialCases'.
	 */
	API_VISIBLE void mXparser::enableSpecialCases() {
		SpecialValue::specialCasesDisabled = false;
	}
	/**
	 * Disables special case recognition options, e.g. tan(pi/2) will return value
	 * according to the standard math library implementation.
	 * Default behaviour is 'enableSpecialCases'.
	 */
	API_VISIBLE void mXparser::disableSpecialCases() {
		SpecialValue::specialCasesDisabled = true;
	}
	/**
	 * Enables special case recognition options, e.g. tan(pi/2) = NaN or
	 * disables special case recognition options, e.g. tan(pi/2) will return value
	 * according to the standard math library implementation.
	 * Default behaviour is 'enableSpecialCases'.
	 *
	 * @param specialCasesState   true to enable, false to disable.
	 */
	API_VISIBLE void mXparser::setSpecialCases(bool specialCasesState) {
		SpecialValue::specialCasesDisabled = !specialCasesState;
	}
	/**
	 * Checks if special case recognition is enabled.
	 * @return true in case if special case recognition is enabled, otherwise false.
	 */
	API_VISIBLE bool mXparser::checkIfSpecialCases() {
		return !SpecialValue::specialCasesDisabled;
	}
	/**
	 * Internal limit to aAPI_VISIBLE void mXparser::infinite loops while calculating
	 * expression defined in the way shown by below examples.
	 *
	 * Argument x = new_Argument("x = 2*y");
	 * Argument y = new_Argument("y = 2*x");
	 * x->addDefinitions(y);
	 * y->addDefinitions(x);
	 *
	 * Function f = new_Function("f(x) = 2*g(x)");
	 * Function g = new_Function("g(x) = 2*f(x)");
	 * f->addDefinitions(g);
	 * g->addDefinitions(f);
	 *
	 * Currently, does not affect properly defined recursive mode.
	 *
	 * @param maxAllowedRecursionDepth  Maximum number of allowed recursion calls
	 */
	API_VISIBLE void mXparser::setMaxAllowedRecursionDepth(int maxAllowedRecursionDepth) {
		MAX_RECURSION_CALLS = maxAllowedRecursionDepth;
		Argument::refreshMaxAllowedRecursionDepth();
	}

	/**
	 * Internal limit to aAPI_VISIBLE void mXparser::infinite loops while calculating
	 * expression defined in the way shown by below examples.
	 *
	 * Argument x = new_Argument("x = 2*y");
	 * Argument y = new_Argument("y = 2*x");
	 * x->addDefinitions(y);
	 * y->addDefinitions(x);
	 *
	 * Function f = new_Function("f(x) = 2*g(x)");
	 * Function g = new_Function("g(x) = 2*f(x)");
	 * f->addDefinitions(g);
	 * g->addDefinitions(f);
	 *
	 * Currently, does not affect properly defined recursive mode.
	 *
	 * @return Max allowed recursion calls
	 */
	API_VISIBLE int mXparser::getMaxAllowedRecursionDepth() {
		return MAX_RECURSION_CALLS;
	}

	/**
	 * Set mXparser to operate in radians mode for
	 * trigonometric functions
	 */
	API_VISIBLE void mXparser::setRadiansMode() {
		degreesMode = false;
	}

	/**
	 * Set mXparser to operate in degrees mode for
	 * trigonometric functions
	 */
	API_VISIBLE void mXparser::setDegreesMode() {
		degreesMode = true;
	}

	/**
	 * Checks whether mXparser operates in radians mode for
	 * trigonometric functions.
	 *
	 * @return true - if radians mode, false - otherwise
	 */
	API_VISIBLE bool mXparser::checkIfRadiansMode() {
		return !degreesMode;
	}

	/**
	 * Checks whether mXparser operates in degrees mode for
	 * trigonometric functions.
	 *
	 * @return true - if degrees mode, false - otherwise
	 */
	API_VISIBLE bool mXparser::checkIfDegreesMode() {
		return degreesMode;
	}

	/**
	 * Sets implied multiplication
	 */
	API_VISIBLE void mXparser::enableImpliedMultiplicationMode() {
		impliedMultiplicationMode = true;
		HELP_EXPRESSION->enableImpliedMultiplicationMode();
	}

	/**
	 * Disables implied multiplication
	 */
	API_VISIBLE void mXparser::disableImpliedMultiplicationMode() {
		impliedMultiplicationMode = false;
		HELP_EXPRESSION->disableImpliedMultiplicationMode();
	}

	/**
	 * Gets implied multiplication status
	 *
	 * @return     true if implied multiplication is enabled,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool mXparser::checkIfImpliedMultiplicationMode() {
		return impliedMultiplicationMode;
	}

	/**
	 * Enables unicode built-in parser keywords, this flag
	 * informs the parser that built-in unicode keywords
	 * are supported and will be recognized as functions or
	 * operators.
	 */
	API_VISIBLE void mXparser::enableUnicodeBuiltinKeyWordsMode() {
		unicodeKeyWordsEnabled = true;
		HELP_EXPRESSION->enableUnicodeBuiltinKeyWordsMode();
	}

	/**
	 * Disables unicode built-in parser keywords, this flag
	 * informs the parser that built-in unicode keywords
	 * are not supported and will not be recognized as functions or
	 * operators.
	 */
	API_VISIBLE void mXparser::disableUnicodeBuiltinKeyWordsMode() {
		unicodeKeyWordsEnabled = false;
		HELP_EXPRESSION->disableUnicodeBuiltinKeyWordsMode();
	}

	/**
	 * Gets unicode built-in parser keywords mode
	 *
	 * @return     true if unicode built-in parser keywords is enabled,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool mXparser::checkIfUnicodeBuiltinKeyWordsMode() {
		return unicodeKeyWordsEnabled;
	}

	/**
	 * Enables attempt to fix the expression String.
	 * For example, situations such as:
	 * "++" change to "+",
	 * "+-" changed to "-"
	 * "-+" changed to "-"
	 * "--" changed to "+"
	 */
	API_VISIBLE void mXparser::enableAttemptToFixExpStrMode() {
		attemptToFixExpStrEnabled = true;
	}

	/**
	 * Disables attempt to fix the expression String.
	 * For example, situations such as:
	 * "++" change to "+",
	 * "+-" changed to "-"
	 * "-+" changed to "-"
	 * "--" changed to "+"
	 */
	API_VISIBLE void mXparser::disableAttemptToFixExpStrMode() {
		attemptToFixExpStrEnabled = false;
	}

	/**
	 * Gets attempt to fix expression string mode
	 *
	 * @return     true attempt to fix expression string mode is enabled,
	 *             otherwise returns false.
	 */
	API_VISIBLE bool mXparser::checkIfAttemptToFixExpStrMode() {
		return attemptToFixExpStrEnabled;
	}

	/**
	 * Option that enables selection of best matching language based on the current OS locale.
	 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
	 * If OS language is not supported, then English is selected.
	 *
	 * @see StringModel
	 * @see StringResources
	 * @see StringResources#bestMatchingLanguage()
	 */
	API_VISIBLE void mXparser::enableSelectBestMatchingLanguage() {
		selectBestMatchingLanguage = true;
		StringModel::setDefaultStringResources();
	}

	/**
	 * Disables mode of selection of best matching language based on the current OS locale.
	 * Returns to the English language.
	 *
	 * @see StringModel
	 * @see StringResources
	 * @see StringResources#bestMatchingLanguage()
	 */
	API_VISIBLE void mXparser::disableSelectBestMatchingLanguage() {
		selectBestMatchingLanguage = false;
		StringModel::setDefaultEnglishStringResources();
	}

	/**
	 * Checks if mode of selection of best matching language based on the current OS locale is enabled.
	 *
	 * @return   True if mode of selection of best matching language is enabled, otherwise false.
	 *
	 * @see StringModel
	 * @see StringResources
	 * @see StringResources#bestMatchingLanguage()
	 */
	API_VISIBLE bool mXparser::checkIfSelectBestMatchingLanguage() {
		return selectBestMatchingLanguage;
	}

	/**
	 * Changes language to the one that best matches provided language code.
	 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
	 * If language code does not belong to the supported language codes
	 * English language is selected.
	 *
	 * @param language     Supported language codes: en, fr, de, it, pl, pt, es.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringResources
	 * @see StringResources#bestMatchingLanguage(String)
	 */
	API_VISIBLE void mXparser::changeLanguageTo(const StringPtr &language) {
		StringModel::setStringResources(StringResources::bestMatchingLanguage(language));
	}


	/**
	 * Changes language to the one that best matches current OS locale.
	 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
	 * If OS language is not supported, then English is selected.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringResources
	 * @see StringResources#bestMatchingLanguage()
	 */
	API_VISIBLE void mXparser::changeLanguageToBestMatching() {
		StringModel::forceDefaultStringResources();
	}

	/**
	 * Sets initial search size for the toFraction method
	 *
	 * @param n initial search size, has to be non-zero positive.
	 * @see NumberTheory#toFraction(double)
	 */
	API_VISIBLE void mXparser::setToFractionInitSearchSize(Long n) {
		NumberTheory::setToFractionInitSearchSize(n);
	}

	/**
	 * Gets initial search size used by the toFraction method
	 *
	 * @return initial search size used by the toFraction method
	 * @see NumberTheory#toFraction(double)
	 */
	Long mXparser::getToFractionInitSearchSize() {
		return NumberTheory::getToFractionInitSearchSize();
	}

	/**
	 * Removes built-in tokens form the list of tokens recognized by the parsers.
	 * Procedure affects only tokens classified to built-in functions, built-in
	 * constants, built-in units, built-in random variables.
	 *
	 * @param tokens  List of tokens to remove.
	 */
	API_VISIBLE void mXparser::removeBuiltinTokens(const ListPtr<StringPtr> &tokens) {
		if (tokens == nullptr) return;
		LOCK(tokensToRemove);
		for (const StringPtr& token : *tokens)
			if (token != nullptr)
				if (!token->empty())
					if (!tokensToRemove->containsByPtrDeref(token))
						tokensToRemove->add(token);
		optionsChangesetNumber++;
	}

	/**
	 * Un-marks tokens previously marked to be removed.
	 * @param tokens List of tokens to un-mark.
	 */
	API_VISIBLE void mXparser::unremoveBuiltinTokens(const ListPtr<StringPtr> &tokens) {
		if (tokens == nullptr) return;
		if (tokens->size() == 0) return;
		if (tokensToRemove->size() == 0) return;
		LOCK(tokensToRemove);
		for (const StringPtr& token : *tokens)
			if (token != nullptr)
				tokensToRemove->removeByPtrDeref(token);

		optionsChangesetNumber++;
	}

	/**
	 * Un-marks all tokens previously marked to be removed.
	 */
	API_VISIBLE void mXparser::unremoveAllBuiltinTokens() {
		LOCK(tokensToRemove);
		tokensToRemove->clear();
		optionsChangesetNumber++;
	}

	/**
	 * Returns current list of tokens marked to be removed.
	 * @return Current list of tokens marked to be removed
	 */
	ArrayPtr<StringPtr> mXparser::getBuiltinTokensToRemove() {
		LOCK(tokensToRemove);
		int tokensNum = tokensToRemove->size();
		ArrayPtr<StringPtr> tokensToRemoveArray = new_Array<StringPtr>(tokensNum);
		for (int i = 0; i < tokensNum; i++)
			(*tokensToRemoveArray)(i) = tokensToRemove->getRef(i);
		return tokensToRemoveArray;
	}

	/**
	 * Method to change definition of built-in token - more precisely
	 * using this method allows to modify token string recognized by the parser
	 * (i.e. sin(x) to sinus(x)).
	 * Procedure affects only tokens classified to built-in functions, built-in
	 * constants, built-in units, built-in random variables.
	 * @param currentToken     Current token name
	 * @param newToken         New token name
	 */
	API_VISIBLE void mXparser::modifyBuiltinToken(const StringPtr &currentToken, const StringPtr &newToken) {
		if (currentToken == nullptr) return;
		if (currentToken->empty()) return;
		if (newToken == nullptr) return;
		if (newToken->empty()) return;
		LOCK(tokensToModify);
		for (const TokenModificationPtr& tm : *tokensToModify)
			if (*tm->currentToken == *currentToken) return;
		TokenModificationPtr tma = new_TokenModification();
		tma->currentToken = currentToken;
		tma->newToken = newToken;
		tma->newTokenDescription = nullptr;
		tokensToModify->add(tma);
		optionsChangesetNumber++;
	}

	/**
	 * Method to change definition of built-in token - more precisely
	 * using this method allows to modify token string recognized by the parser
	 * (i.e. sin(x) to sinus(x)).
	 * Procedure affects only tokens classified to built-in functions, built-in
	 * constants, built-in units, built-in random variables.
	 * @param currentToken          Current token name
	 * @param newToken              New token name
	 * @param newTokenDescription   New token description (if nullptr the previous one will be used)
	 */
	API_VISIBLE void mXparser::modifyBuiltinToken(const StringPtr &currentToken, const StringPtr &newToken,
	                                  const StringPtr &newTokenDescription) {
		if (currentToken == nullptr) return;
		if (currentToken->empty()) return;
		if (newToken == nullptr) return;
		if (newToken->empty()) return;
		LOCK(tokensToModify);
		for (const TokenModificationPtr& tm : *tokensToModify)
			if (*tm->currentToken == *currentToken) return;
		TokenModificationPtr tma = new_TokenModification();
		tma->currentToken = currentToken;
		tma->newToken = newToken;
		tma->newTokenDescription = newTokenDescription;
		tokensToModify->add(tma);
		optionsChangesetNumber++;
	}

	/**
	 * Un-marks tokens previously marked to be modified.
	 * @param currentOrNewTokens   List of tokens to be un-marked (current or modified).
	 */
	API_VISIBLE void mXparser::unmodifyBuiltinTokens(const ListPtr<StringPtr> &currentOrNewTokens) {
		if (currentOrNewTokens == nullptr) return;
		if (currentOrNewTokens->size() == 0) return;
		if (tokensToModify->size() == 0) return;
		LOCK(tokensToModify);
		ListPtr<TokenModificationPtr> toRemove = new_List<TokenModificationPtr>();
		for (const StringPtr& token: *currentOrNewTokens)
			if (token != nullptr)
				if (!token->empty()) {
					for (const TokenModificationPtr& tm : *tokensToModify)
						if ((*token == *tm->currentToken) || (*token == *tm->newToken)) toRemove->add(tm);
				}
		for (const TokenModificationPtr& tm : *toRemove)
			tokensToModify->remove(tm);
		optionsChangesetNumber++;
	}

	/**
	 * Un-marks all tokens previously marked to be modified.
	 */
	API_VISIBLE void mXparser::unmodifyAllBuiltinTokens() {
		LOCK(tokensToModify);
		tokensToModify->clear();
		optionsChangesetNumber++;
	}

	/**
	 * Return details on tokens marked to be modified.
	 * @return String(i, 0) - current token, String(i, 1) - new token,
	 *                        String(i, 2) - new token description.
	 */
	ArrayPtr<StringPtr> mXparser::getBuiltinTokensToModify() {
		LOCK(tokensToModify);
		int tokensNum = tokensToModify->size();
		ArrayPtr<StringPtr> tokensToModifyArray = new_Array<StringPtr>(tokensNum, 3);
		for (int i = 0; i < tokensNum; i++) {
			const TokenModificationPtr& tm = tokensToModify->getRef(i);
			(*tokensToModifyArray)(i, 0) = tm->currentToken;
			(*tokensToModifyArray)(i, 1) = tm->newToken;
			(*tokensToModifyArray)(i, 2) = tm->newTokenDescription;
		}
		return tokensToModifyArray;
	}

	/**
	 * Sets mXparser to override built-in tokens
	 * by user defined tokens.
	 */
	API_VISIBLE void mXparser::setToOverrideBuiltinTokens() {
		overrideBuiltinTokens = true;
		optionsChangesetNumber++;
	}

	/**
	 * Sets mXparser not to override built-in tokens
	 * by user defined tokens.
	 */
	API_VISIBLE void mXparser::setNotToOverrideBuiltinTokens() {
		overrideBuiltinTokens = false;
		optionsChangesetNumber++;
	}

	/**
	 * Checks whether mXparser is set to override built-in tokens.
	 *
	 * @return True if mXparser is set to override built-in tokens by
	 *         user defined tokens, otherwise false.
	 */
	API_VISIBLE bool mXparser::checkIfsetToOverrideBuiltinTokens() {
		return overrideBuiltinTokens;
	}

	/**
	 * Sets default mXparser options
	 *
	 */
	API_VISIBLE void mXparser::setDefaultOptions() {
		enableUlpRounding();
		enableAlmostIntRounding();
		setMaxAllowedRecursionDepth(DEFAULT_MAX_RECURSION_CALLS);
		setNotToOverrideBuiltinTokens();
		unmodifyAllBuiltinTokens();
		setRadiansMode();
		resetCancelCurrentCalculationFlag();
		setDefaultEpsilon();
		setEpsilonComparison();
		setToFractionInitSearchSize(NumberTheory::DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE);
		enableImpliedMultiplicationMode();
		enableUnicodeBuiltinKeyWordsMode();
		enableAttemptToFixExpStrMode();
		enableSelectBestMatchingLanguage();
		optionsChangesetNumber++;
	}

	/**
	 * Returns token type description.
	 *
	 * @param tokenTypeId Token type id
	 * @return StringPtr representing token type description.
	 *
	 * @deprecated Planned to be removed, use {Token#getTokenTypeDescription(int)} instead
	 */
	// @Deprecated
	API_VISIBLE StringPtr mXparser::getTokenTypeDescription(int tokenTypeId) {
		return parsertokens::Token::getTokenTypeDescription(tokenTypeId);
	}

	/**
	 * Converts integer number to hex string (plain text)
	 *
	 * @param number   Integer number
	 * @return         Hex string (i.e. FF23)
	 *
	 * @deprecated Planned to be removed, use {StringUtils#numberToHexString(int)} instead
	 */
	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToHexString(int number) {
		return StringUtils::numberToHexString(number);
	}

	/**
	 * Converts Long number to hex string (plain text)
	 *
	 * @param number   Long number
	 * @return         Hex string (i.e. FF23)
	 *
	 * @deprecated Planned to be removed, use {StringUtils#numberToHexString(Long)} instead
	 */
	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToHexString(Long number) {
		return StringUtils::numberToHexString(number);
	}

	/**
	 * Converts (Long)double number to hex string (plain text)
	 *
	 * @param number   Double number
	 * @return         Hex string (i.e. FF23)
	 *
	 * @deprecated Planned to be removed, use {StringUtils#numberToHexString(double)} instead
	 */
	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToHexString(double number) {
		return StringUtils::numberToHexString(number);
	}

	/**
	 * Converts hex string into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex string.
	 *
	 * @param hexString   Hex string (i.e. 48656C6C6F)
	 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
	 *
	 * @deprecated Planned to be removed, use {StringUtils#hexString2AsciiString(String)} instead
	 */
	// @Deprecated
	API_VISIBLE StringPtr mXparser::hexString2AsciiString(const StringPtr &hexString) {
		return StringUtils::hexString2AsciiString(hexString);
	}

	/**
	 * Converts number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number
	 *
	 * @param number   Integer number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
	 *
	 * @deprecated Planned to be removed, use {StringUtils#numberToAsciiString(int)} instead
	 */
	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToAsciiString(int number) {
		return StringUtils::numberToAsciiString(number);
	}

	/**
	 * Converts number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number
	 *
	 * @param number   Long number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
	 *
	 * @deprecated Planned to be removed, use {StringUtils#numberToAsciiString(Long)} instead
	 */
	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToAsciiString(Long number) {
		return StringUtils::numberToAsciiString(number);
	}

	/**
	 * Converts (Long)double number into ASCII string, where each letter is
	 * represented by two hex digits (byte) from the hex representation
	 * of the original number cast to Long type.
	 *
	 * @param number   Double number (i.e. 310939249775 = '48656C6C6F')
	 * @return         ASCII string (i.e. '48656C6C6F' = 'Hello')
	 *
	 * @deprecated Planned to be removed, use {StringUtils#numberToAsciiString(double)} instead
	 */
	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToAsciiString(double number) {
		return StringUtils::numberToAsciiString(number);
	}

	/**
	 * Other base (base between 1 and 36) number literal conversion to decimal number.
	 *
	 * @param numberLiteral    Number literal in given numeral system with base between
	 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
	 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
	 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
	 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
	 * @param numeralSystemBase             Numeral system base, between 1 and 36
	 * @return                 Decimal number after conversion. If conversion was not
	 *                         possible the Double::NaN is returned.
	 */
	API_VISIBLE double mXparser::convOthBase2Decimal(const StringPtr &numberLiteral, int numeralSystemBase) {
		return NumberTheory::convOthBase2Decimal(numberLiteral, numeralSystemBase);
	}

	/**
	 * Other base (base between 1 and 36) number literal conversion to decimal number.
	 * Base specification included in number literal.
	 *
	 * Examples: 2 for b2.1001 or b.1001, 1 for b1.111, 23 for b23.123afg
	 * 16 for b16.123acdf or h.123acdf.
	 *
	 * @param numberLiteral Number literal string.
	 *
	 * Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
	 * b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26.
	 * b27. b28. b29. b30. b31. b32. b33. b34. b35. b36.
	 *
	 * Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C,
	 * 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P,
	 * 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
	 *
	 * @return     Decimal number after conversion. If conversion was not
	 *             possible the Double::NaN is returned.
	 */
	API_VISIBLE double mXparser::convOthBase2Decimal(const StringPtr &numberLiteral) {
		return NumberTheory::convOthBase2Decimal(numberLiteral);
	}

	/**
	 * Other base to decimal conversion.
	 *
	 * @param numeralSystemBase   Numeral system base has to be above 0.
	 * @param digits              List of digits
	 * @return                    Number after conversion. If conversion is not possible then
	 *                            Double::NaN is returned.
	 */
	API_VISIBLE double mXparser::convOthBase2Decimal(int numeralSystemBase, const ListPtr<int> &digits) {
		return NumberTheory::convOthBase2Decimal(numeralSystemBase, digits);
	}

	/**
	 * Other base to decimal conversion.
	 *
	 * @param numeralSystemBase   Numeral system base has to be above 0.
	 * @param digits              List of digits
	 * @return                    Number after conversion. If conversion is not possible then
	 *                            Double::NaN is returned.
	 */
	API_VISIBLE double mXparser::convOthBase2Decimal(double numeralSystemBase, const ListPtr<double> &digits) {
		return NumberTheory::convOthBase2Decimal(numeralSystemBase, digits);
	}

	/**
	 * Decimal number to other numeral system conversion with base
	 * between 1 and 36.
	 *
	 * @param decimalNumber    Decimal number
	 * @param numeralSystemBase       Numeral system base between 1 and 36
	 * @return           Number literal representing decimal number in
	 *                   given numeral system. Digits
	 *                   0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8,
	 *                   9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G,
	 *                   17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O,
	 *                   25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W,
	 *                   33:X, 34:Y, 35:Z. If conversion was not possible
	 *                   the "NaN" string is returned.
	 */
	API_VISIBLE StringPtr mXparser::convDecimal2OthBase(double decimalNumber, int numeralSystemBase) {
		return NumberTheory::convDecimal2OthBase(decimalNumber, numeralSystemBase);
	}

	/**
	 * Decimal number to other numeral system conversion with base
	 * between 1 and 36.
	 *
	 * @param decimalNumber    Decimal number
	 * @param numeralSystemBase       Numeral system base between 1 and 36
	 * @param format     If 1 then always bxx-> is used, i.e. b1. or b16.
	 *                   If 2 then for binary b. is used, for octal o. is used,
	 *                   for hexadecimal h. is used, otherwise bxx-> is used
	 *                   where xx is the numeral system base specification.
	 *
	 * @return           Number literal representing decimal number in
	 *                   given numeral system.
	 *
	 * Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
	 * b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26.
	 * b27. b28. b29. b30. b31. b32. b33. b34. b35. b36.
	 *
	 * Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C,
	 * 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P,
	 * 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
	 *
	 * If conversion was not possible the "NaN" string is returned.
	 */
	API_VISIBLE StringPtr mXparser::convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format) {
		return NumberTheory::convDecimal2OthBase(decimalNumber, numeralSystemBase, format);
	}

	/**
	 * Converts double value to its fraction representation.
	 *
	 * @param value Value to be converted
	 *
	 * @return Array representing fraction. Sign at index 0,
	 * numerator at index 1, denominator at index 2.
	 * If conversion is not possible then Double::NaN is
	 * assigned to all the fields.
	 */
	API_VISIBLE ArrayPtr<double> mXparser::toFraction(double value) {
		return NumberTheory::toFraction(value);
	}

	/**
	 * Converts double value to its mixed fraction representation.
	 *
	 * @param value Value to be converted
	 *
	 * @return Array representing fraction.
	 * Sign at index 0, whole number at index 1,
	 * numerator at index 2, denominator at index 3.
	 * If conversion is not possible then Double::NaN is
	 * assigned to both numerator and denominator.
	 */
	API_VISIBLE ArrayPtr<double> mXparser::toMixedFraction(double value) {
		return NumberTheory::toMixedFraction(value);
	}

	/**
	 * Converts array representing fraction to fraction string representation.
	 *
	 * @param fraction    Array representing fraction (including mix fractions)
	 * @return  StringPtr representation of fraction.
	 *
	 * @see NumberTheory#toFraction(double)
	 * @see NumberTheory#toMixedFraction(double)
	 */
	API_VISIBLE StringPtr mXparser::fractionToString(const ArrayPtr<double> &fraction) {
		return NumberTheory::fractionToString(fraction);
	}

	/**
	 * Converts number to its fraction string representation.
	 *
	 * @param value   Given number
	 * @return  StringPtr representation of fraction.
	 *
	 * @see NumberTheory#toFraction(double)
	 * @see NumberTheory#fractionToString(double[])
	 */
	API_VISIBLE StringPtr mXparser::toFractionString(double value) {
		return NumberTheory::toFractionString(value);
	}

	/**
	 * Converts number to its mixed fraction string representation.
	 *
	 * @param value   Given number
	 * @return  StringPtr representation of fraction.
	 *
	 * @see NumberTheory#toMixedFraction(double)
	 * @see NumberTheory#fractionToString(double[])
	 */
	API_VISIBLE StringPtr mXparser::toMixedFractionString(double value) {
		return NumberTheory::toMixedFractionString(value);
	}

	API_VISIBLE void mXparser::initConsoleOutput() {
		if (CONSOLE_ROW_NUMBER == 1 && CONSOLE_OUTPUT->length() == 0) {
			StringUtils::consolePrint(CONSOLE_PREFIX);
			CONSOLE_OUTPUT->clear();
			CONSOLE_OUTPUT->append(CONSOLE_OUTPUT_PREFIX);
		}
	}

	/**
	 * Prints array of strings
	 *
	 * @param stringArray  array of strinfs
	 */
	API_VISIBLE void mXparser::consolePrintln(const ArrayPtr<StringPtr> &stringArray) {
		if (stringArray == nullptr) {
			consolePrintln("null");
			return;
		}
		for (const StringPtr& s : *stringArray)
			consolePrintln(s);
	}

	/**
	 * Prints array of strings
	 *
	 * @param stringList  array of strinfs
	 */
	API_VISIBLE void mXparser::consolePrintln(const ListPtr<StringPtr> &stringList) {
		if (stringList == nullptr) {
			consolePrintln("null");
			return;
		}
		for (const StringPtr& s : *stringList)
			consolePrintln(s);
	}

	/**
	 * Prints new line to the Console, no new line
	 *
	 */
	API_VISIBLE void mXparser::consolePrintln() {
		LOCK(CONSOLE_OUTPUT);
		initConsoleOutput();
		StringUtils::consolePrintln();
		CONSOLE_ROW_NUMBER++;
		StringUtils::consolePrint(CONSOLE_PREFIX);
		CONSOLE_OUTPUT->append(StringInvariant::NEW_LINE);
		CONSOLE_OUTPUT->append(CONSOLE_OUTPUT_PREFIX);
	}

	API_VISIBLE void mXparser::consolePrintStr(const StringPtr &str) {
		LOCK(CONSOLE_OUTPUT);
		initConsoleOutput();
		StringUtils::consolePrint(str);
		CONSOLE_OUTPUT->append(str);
	}

	API_VISIBLE void mXparser::consolePrintlnStr(const StringPtr &str) {
		LOCK(CONSOLE_OUTPUT);
		initConsoleOutput();
		StringUtils::consolePrintln(str);
		CONSOLE_ROW_NUMBER++;
		StringUtils::consolePrint(CONSOLE_PREFIX);
		CONSOLE_OUTPUT->append(str);
		CONSOLE_OUTPUT->append(StringInvariant::NEW_LINE);
		CONSOLE_OUTPUT->append(CONSOLE_OUTPUT_PREFIX);
	}

	API_VISIBLE void mXparser::consolePrintSettings(const StringPtr &prefix) {
		mXparser::consolePrintln(prefix + UTF("mXparser::VERSION = ") + VERSION);
		mXparser::consolePrintln(prefix + UTF("mXparser::BUIT_FOR = ") + BUIT_FOR);
		mXparser::consolePrintln(
			prefix + UTF("checkIfCanonicalRounding = ") + StringUtils::toString(mXparser::checkIfCanonicalRounding()));
		mXparser::consolePrintln(
			prefix + UTF("checkIfAlmostIntRounding = ") + StringUtils::toString(mXparser::checkIfAlmostIntRounding()));
		mXparser::consolePrintln(
			prefix + UTF("checkIfUlpRounding = ") + StringUtils::toString(mXparser::checkIfUlpRounding()));
		mXparser::consolePrintln(
			prefix + UTF("checkIfRadiansMode = ") + StringUtils::toString(mXparser::checkIfRadiansMode()));
		mXparser::consolePrintln(
			prefix + UTF("checkIfDegreesMode = ") + StringUtils::toString(mXparser::checkIfDegreesMode()));
		mXparser::consolePrintln(
			prefix + UTF("checkIfExactMode = ") + StringUtils::toString(mXparser::checkIfExactMode()));
		mXparser::consolePrintln(
			prefix + UTF("checkIfEpsilonMode = ") + StringUtils::toString(mXparser::checkIfEpsilonMode()));
		mXparser::consolePrintln(prefix + UTF("getEpsilon = ") + StringUtils::toString(mXparser::getEpsilon()));
		mXparser::consolePrintln(
			prefix + UTF("getMaxAllowedRecursionDepth = ") + StringUtils::toString(
				mXparser::getMaxAllowedRecursionDepth()));
		mXparser::consolePrintln(
			prefix + UTF("getMaxNumInPrimesCache = ") + StringUtils::toString(mXparser::getMaxNumInPrimesCache()));
		mXparser::consolePrintln(
			prefix + UTF("getToFractionInitSearchSize = ") + StringUtils::toString(
				mXparser::getToFractionInitSearchSize()));
		mXparser::consolePrintln(
			prefix + UTF("checkIfsetToOverrideBuiltinTokens = ") + StringUtils::toString(
				mXparser::checkIfsetToOverrideBuiltinTokens()));
		mXparser::consolePrintln(prefix + UTF("BUILD_CMAKE_CXX_COMPILER = ") + SystemUtils::BUILD_CMAKE_CXX_COMPILER);
		mXparser::consolePrintln(prefix + UTF("BUILD_CMAKE_MAKE_PROGRAM = ") + SystemUtils::BUILD_CMAKE_MAKE_PROGRAM);
		mXparser::consolePrintln(prefix + UTF("BUILD_CMAKE_HOST_SYSTEM_NAME = ") + SystemUtils::BUILD_CMAKE_HOST_SYSTEM_NAME);
		mXparser::consolePrintln(prefix + UTF("BUILD_CMAKE_SYSTEM_VERSION = ") + SystemUtils::BUILD_CMAKE_SYSTEM_VERSION);
		mXparser::consolePrintln(prefix + UTF("BUILD_CMAKE_CXX_FLAGS_RELEASE = ") + SystemUtils::BUILD_CMAKE_CXX_FLAGS_RELEASE);
		mXparser::consolePrintln(prefix + UTF("BUILD_CMAKE_ENV_SPECIFIC_CONFIG = ") + SystemUtils::BUILD_CMAKE_ENV_SPECIFIC_CONFIG);
		mXparser::consolePrintln(prefix + UTF("BUILD_CMAKE_CXX_COMPILER_LINKER_ID = ") + SystemUtils::BUILD_CMAKE_CXX_COMPILER_LINKER_ID);
		mXparser::consolePrintln(prefix + UTF("BUILD_CMAKE_MSVC = ") + SystemUtils::BUILD_CMAKE_MSVC);
	}

	API_VISIBLE void mXparser::consolePrintSettings() {
		consolePrintSettings(StringInvariant::EMPTY);
	}

	/**
	 * Resets console output string, console output
	 * string is being built by consolePrintln(), consolePrint().
	 *
	 * @see mXparser#consolePrint(Object)
	 * @see mXparser#consolePrintln(Object)
	 * @see mXparser#consolePrintln()
	 * @see mXparser#resetConsoleOutput()
	 */
	API_VISIBLE void mXparser::resetConsoleOutput() {
		LOCK(CONSOLE_OUTPUT);
		CONSOLE_OUTPUT->clear();
		CONSOLE_ROW_NUMBER = 1;
	}

	/**
	 * Sets default console prefix->
	 */
	API_VISIBLE void mXparser::setDefaultConsolePrefix() {
		CONSOLE_PREFIX = UTF("[mXparser-v.") + VERSION + UTF("] ");
	}

	/**
	 * Sets default console output string prefix->
	 */
	API_VISIBLE void mXparser::setDefaultConsoleOutputPrefix() {
		CONSOLE_OUTPUT_PREFIX = UTF("[mXparser-v.") + VERSION + UTF("] ");
	}

	/**
	 * Sets console prefix->
	 *
	 * @param consolePrefix StringPtr containing console prefix definition.
	 */
	API_VISIBLE void mXparser::setConsolePrefix(const StringPtr &consolePrefix) {
		CONSOLE_PREFIX = consolePrefix;
	}

	/**
	 * Sets console output string prefix->
	 *
	 * @param consoleOutputPrefix StringPtr containing console output prefix definition.
	 */
	API_VISIBLE void mXparser::setConsoleOutputPrefix(const StringPtr &consoleOutputPrefix) {
		CONSOLE_OUTPUT_PREFIX = consoleOutputPrefix;
	}

	/**
	 * Returns console output string, console output string
	 * is being built by consolePrintln(), consolePrint().
	 *
	 * @return Console output string
	 *
	 * @see mXparser#consolePrint(Object)
	 * @see mXparser#consolePrintln(Object)
	 * @see mXparser#consolePrintln()
	 * @see mXparser#resetConsoleOutput()
	 */
	API_VISIBLE StringPtr mXparser::getConsoleOutput() {
		LOCK(HELP_EXPRESSION);
		return CONSOLE_OUTPUT->toString();
	}

	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help.
	 */
	API_VISIBLE StringPtr mXparser::getHelp() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelp();
	}

	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help.
	 */
	API_VISIBLE StringPtr mXparser::getHelp(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelp(query);
	}

	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, any string other than ""
	 * will replace the standard caption with the one specified by the user.
	 *
	 * @return One string value containing all the help.
	 */
	API_VISIBLE StringPtr mXparser::getHelp(bool addHeader, bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelp(addHeader, addCaption, caption);
	}

	/**
	 * Returns detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, any string other than ""
	 *
	 * @return One string value containing all the help.
	 */
	API_VISIBLE StringPtr mXparser::getHelp(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelp(query, addHeader, addCaption, caption);
	}

	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsCsv() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsCsv();
	}

	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsCsv(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsCsv(query);
	}

	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param quote Text qualifier.
	 * @param delimiter Delimiter.
	 * @param addHeader Indicator whether to add a header.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsCsv(const StringPtr &quote, const StringPtr &delimiter, bool addHeader) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsCsv(quote, delimiter, addHeader);
	}

	/**
	 * Returns (as CSV) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param quote Text qualifier.
	 * @param delimiter Delimiter.
	 * @param addHeader Indicator whether to add a header.
	 *
	 * @return One string value in CSV format containing all the help.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsCsv(const StringPtr &query, const StringPtr &quote, const StringPtr &delimiter,
	                                 bool addHeader) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsCsv(query, quote, delimiter, addHeader);
	}

	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. StringPtr in HTML table format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsHtmlTable() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsHtmlTable();
	}

	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help. StringPtr in HTML table format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsHtmlTable(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsHtmlTable(query);
	}

	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param addFigure Indicator whether to add a FIGURE tag.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 * @param cssClass If CSS class is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in HTML table format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption,
	                                       const StringPtr &cssClass) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsHtmlTable(addHeader, addCaption, addFigure, caption, cssClass);
	}

	/**
	 * Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param addFigure Indicator whether to add a FIGURE tag.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 * @param cssClass If CSS class is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in HTML table format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsHtmlTable(const StringPtr &query, bool addHeader, bool addCaption, bool addFigure,
	                                       const StringPtr &caption, const StringPtr &cssClass) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsHtmlTable(query, addHeader, addCaption, addFigure, caption, cssClass);
	}

	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. StringPtr in Markdown table format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsMarkdownTable() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsMarkdownTable();
	}

	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.

	 * @return One string value containing all the help. StringPtr in Markdown table format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsMarkdownTable(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsMarkdownTable(query);
	}

	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in Markdown table format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsMarkdownTable(bool addHeader, bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsMarkdownTable(addHeader, addCaption, caption);
	}

	/**
	 * Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addHeader Indicator whether to add a header.
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in Markdown table format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsMarkdownTable(const StringPtr &query, bool addHeader, bool addCaption,
	                                           const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsMarkdownTable(query, addHeader, addCaption, caption);
	}

	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 *
	 * @return One string value containing all the help. StringPtr in Json format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsJson() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsJson();
	}

	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return One string value containing all the help. StringPtr in Json format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsJson(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsJson(query);
	}

	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 *
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in Json format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsJson(bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsJson(addCaption, caption);
	}

	/**
	 * Returns (as Json) detailed user help on the syntax of mathematical expressions.
	 * Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @param addCaption Indicator whether to add caption.
	 * @param caption If a non-standard caption is to be added, use any string other than "".
	 *
	 * @return One string value containing all the help. StringPtr in Json format.
	 */
	API_VISIBLE StringPtr mXparser::getHelpAsJson(const StringPtr &query, bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsJson(query, addCaption, caption);
	}

	/**
	 * Prints all help content.
	 */
	API_VISIBLE void mXparser::consolePrintHelp() {
		consolePrintln(getHelp());
	}

	/**
	 * Prints filtered help content. Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 */
	API_VISIBLE void mXparser::consolePrintHelp(const StringPtr &query) {
		consolePrintln(getHelp(query));
	}

	/**
	 * Returns list of keywords known to the parser
	 *
	 * @return      List of keywords known to the parser.
	 *
	 * @see KeyWord
	 * @see KeyWord#wordTypeId
	 * @see mXparser#getHelp()
	 */
	API_VISIBLE ListPtr<KeyWordPtr> mXparser::getKeyWords() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getKeyWords();
	}

	/**
	 * Returns list of keywords known to the parser. Allows simple and advanced searches.
	 *
	 * @param query For a simple search, simply enter a word (e.g.: "sine").
	 * Advanced search is also possible, please use one of the tags below:
	 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
	 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
	 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
	 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
	 * Only one tag can be used per search.
	 *
	 * @return      List of keywords known to the parser filter against query string.
	 *
	 * @see KeyWord
	 * @see KeyWord#wordTypeId
	 * @see mXparser#getHelp(String)
	 */
	API_VISIBLE ListPtr<KeyWordPtr> mXparser::getKeyWords(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getKeyWords(query);
	}

	/**
	 * Function used to introduce some compatibility
	 * between JAVA and C# while regexp matching.
	 *
	 * @param str         String
	 * @param pattern     Pattern (regexp)
	 *
	 * @return            True if pattern matches entirely, False otherwise
	 *
	 * @deprecated Planned to be removed, use {StringUtils#regexMatch(String, String)} instead
	 */
	// @Deprecated
	API_VISIBLE bool mXparser::regexMatch(const StringPtr &str, const StringPtr &pattern) {
		return StringUtils::regexMatch(str, pattern);
	}

	/**
	 * Prints tokens to the console.
	 * @param tokens   Tokens list.
	 *
	 * @see Expression#getCopyOfInitialTokens()
	 * @see Token
	 */
	API_VISIBLE void mXparser::consolePrintTokens(const ListPtr<TokenPtr> &tokens) {
		Expression::showTokens(tokens);
	}

	/**
	 * Prints tokens to the console.
	 * @param tokens   Tokens list.
	 *
	 * @see Expression#getCopyOfInitialTokens()
	 * @see Token
	 */
	API_VISIBLE void mXparser::consolePrint(const ListPtr<TokenPtr> &tokens) {
		mXparser::consolePrintTokens(tokens);
	}

	/**
	 * Prints tokens to the console.
	 * @param tokens   Tokens list.
	 *
	 * @see Expression#getCopyOfInitialTokens()
	 * @see Token
	 */
	API_VISIBLE void mXparser::consolePrintln(const ListPtr<TokenPtr> &tokens) {
		mXparser::consolePrintTokens(tokens);
		mXparser::consolePrintln();
	}

	/**
	 * Prints to the console the terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT
	 */
	API_VISIBLE void mXparser::consolePrintLicense() {
		License::consolePrintLicense();
	}

	/**
	 * Gets license info
	 *
	 * @return     license info as string
	 */
	API_VISIBLE StringPtr mXparser::getLicense() {
		return LICENSE;
	}

	/**
	 * Waits given number of milliseconds
	 *
	 * @param timeMillis Number of milliseconds
	 */
	API_VISIBLE void mXparser::wait(int timeMillis) {
		std::this_thread::sleep_for(std::chrono::milliseconds(timeMillis));
	}

	/**
	 * Method give a signal to other methods to cancel current calculation. This is a flag,
	 * remember to reset this flag after process is cancelled and you are going to start
	 * new calculation process.
	 */
	API_VISIBLE void mXparser::cancelCurrentCalculation() {
		cancelCurrentCalculationFlag = true;
	}

	/**
	 * Resets a flag giving signal to the engine to cancel current calculation.
	 *
	 * {cancelCurrentCalculation()}
	 */
	API_VISIBLE void mXparser::resetCancelCurrentCalculationFlag() {
		cancelCurrentCalculationFlag = false;
	}

	/**
	 * Check whether a flag to cancel current calculation process is set.
	 *
	 * {cancelCurrentCalculation()}
	 * {resetCancelCurrentCalculationFlag()}
	 *
	 * @return true in case cancel calculation flag is active,
	 *        otherwise false
	 */
	API_VISIBLE bool mXparser::isCurrentCalculationCancelled() {
		return cancelCurrentCalculationFlag;
	}
} // org::mariuszgromada::math::mxparser