/*
 * @(#)mXparser.cpp        6.2.0    2026-11-13
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
#include "org/mariuszgromada/math/mxparser/Function.hpp"
#include "org/mariuszgromada/math/mxparser/Constant.hpp"
#include "org/mariuszgromada/math/mxparser/RecursiveArgument.hpp"
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
#include <stdexcept>
#include <thread>

namespace org::mariuszgromada::math::mxparser {
	using namespace org::mariuszgromada::math::mxparser::parsertokens;
	using namespace org::mariuszgromada::math::mxparser::miscellaneous;
	using namespace org::mariuszgromada::math::mxparser::mathcollection;

	namespace {
		// One private registry per loaded library image. Explicit C++17 initialization.
		struct AtomicCancellationWord { std::atomic<std::uint32_t> value{std::uint32_t{0}}; };
		AtomicCancellationWord cancellations[1024];
		AtomicCancellationWord reservations[1024];

		class CancellationRegistry final {
		public:
			// The facade validates a positive ID before this bitmap-only read.
			static bool isCancelled(int id) {
				return (cancellations[id >> 5].value.load() & (std::uint32_t{1} << (id & 31))) != 0;
			}
			static void cancel(int id) { validate(id); update(cancellations, id, true); }
			static void reset(int id) { validate(id); update(cancellations, id, false); }
			static int acquire() {
				for (int word = 0; word < 1024; word++) {
					std::uint32_t previous = reservations[word].value.load();
					while (true) {
						std::uint32_t available = ~previous;
						if (word == 0) available &= ~std::uint32_t{1};
						if (available == 0) break;
						int bit = numberOfTrailingZeros(available);
						std::uint32_t mask = std::uint32_t{1} << bit;
						if (reservations[word].value.compare_exchange_strong(previous, previous | mask)) {
							int id = (word << 5) + bit;
							reset(id);
							return id;
						}
						previous = reservations[word].value.load();
					}
				}
				throw std::logic_error("No cancellation token ID available");
			}
			static bool reserve(int id) {
				validate(id);
				int word = id >> 5;
				std::uint32_t mask = std::uint32_t{1} << (id & 31);
				std::uint32_t previous = reservations[word].value.load();
				while (true) {
					if ((previous & mask) != 0) return false;
					if (reservations[word].value.compare_exchange_strong(previous, previous | mask)) {
						reset(id);
						return true;
					}
					previous = reservations[word].value.load();
				}
			}
			static void release(int id) {
				validate(id);
				std::uint32_t mask = std::uint32_t{1} << (id & 31);
				if ((reservations[id >> 5].value.load() & mask) == 0)
					throw std::logic_error("Cancellation token ID is not reserved");
				reset(id);
				update(reservations, id, false);
			}
		private:
			static void validate(int id) {
				if (id < 1 || id > mXparser::MAX_CANCELLATION_TOKEN_ID)
					throw std::invalid_argument("cancelId out of range");
			}
			static void update(AtomicCancellationWord (&words)[1024], int id, bool set) {
				int word = id >> 5;
				std::uint32_t mask = std::uint32_t{1} << (id & 31);
				std::uint32_t previous = words[word].value.load();
				while (true) {
					std::uint32_t next = set ? previous | mask : previous & ~mask;
					if (words[word].value.compare_exchange_strong(previous, next)) return;
					previous = words[word].value.load();
				}
			}
			static int numberOfTrailingZeros(std::uint32_t value) {
				int bit = 0;
				while ((value & std::uint32_t{1}) == 0) { bit++; value >>= 1; }
				return bit;
			}
		};
	}

	API_VISIBLE bool mXparser::isWarmedUpBeforeConcurrentUse = false;
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
	API_VISIBLE std::atomic<bool> mXparser::cancelCurrentCalculationFlag{false};
	API_VISIBLE bool mXparser::selectBestMatchingLanguage = true;

	API_VISIBLE PrimesCachePtr mXparser::primesCache = nullptr;

	/**
	 * \brief Empty expression for general help purposes.
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
	API_VISIBLE StringPtr mXparser::NAMEv61 = nullptr;

	STATIC_VARS_INITI_CPP(mXparser,
		STATIC_VARS_INITI_DEPENDENCY(StringUtils);
		STATIC_VARS_INITI_DEPENDENCY(License);

		VERSION = StringUtils::toString(VERSION_MAJOR) + UTF(".") +
		StringUtils::toString(VERSION_MINOR) + UTF(".") + StringUtils::toString(VERSION_PATCH);
		VERSION_CODE_NAME = S(UTF("Sagitara"));
		VERSION_NAME = VERSION + UTF(" ") + VERSION_CODE_NAME;

		/*
		 * Framework used to compile mXparser
		 */
		BUIT_FOR = S(UTF("C++"));

		/*
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
		NAMEv61 = S(UTF("6.1"));

		CONSOLE_PREFIX = UTF("[mXparser-v.") + VERSION + UTF("] ");
		CONSOLE_OUTPUT_PREFIX = CONSOLE_PREFIX;
	);


	API_VISIBLE bool mXparser::checkIfWarmedUpBeforeConcurrentUse() {
		return isWarmedUpBeforeConcurrentUse;
	}

	API_VISIBLE bool mXparser::warmUpBeforeConcurrentUse() {
		if (isWarmedUpBeforeConcurrentUse) return true;
		StringPtr a = nullptr;
		StringPtr c = nullptr;
		StringPtr e = nullptr;
		StringPtr f = nullptr;
		StringPtr r = nullptr;
		StringResourcesPtr sr = nullptr;
		bool isWarmedUpBeforeConcurrentUseLocal = false;
		try {
			sr = StringModel::getStringResources();
			c = Constant::TYPE_DESC;
			a = Argument::TYPE_DESC;
			f = Function::TYPE_DESC;
			e = Expression::TYPE_DESC;
			r = RecursiveArgument::TYPE_DESC_RECURSIVE;
			isWarmedUpBeforeConcurrentUseLocal = true;
		} catch (std::exception &err) {
			StringUtils::errorPrintln(StringInvariant::WARM_UP_BEFORE_CONCURRENT_USE_COLON_SPACE + S(typeid(e).name()) + StringInvariant::SPACE + StringUtils::trimNotNull(S(err.what())) + StringInvariant::NEW_LINE);
			isWarmedUpBeforeConcurrentUse = false;
			return false;
		} catch (...) {
			StringUtils::errorPrintln(StringInvariant::WARM_UP_BEFORE_CONCURRENT_USE_COLON_SPACE + "Error/Exception" + StringInvariant::NEW_LINE);
			isWarmedUpBeforeConcurrentUse = false;
			return false;
		}
		if (a == nullptr) {
			StringUtils::errorPrintln(StringInvariant::WARM_UP_BEFORE_CONCURRENT_USE_CLASS_MESSAGE + "Argument" + StringInvariant::NEW_LINE);
			isWarmedUpBeforeConcurrentUseLocal = false;
		}
		if (c == nullptr) {
			StringUtils::errorPrintln(StringInvariant::WARM_UP_BEFORE_CONCURRENT_USE_CLASS_MESSAGE + "Constant" + StringInvariant::NEW_LINE);
			isWarmedUpBeforeConcurrentUseLocal = false;
		}
		if (e == nullptr) {
			StringUtils::errorPrintln(StringInvariant::WARM_UP_BEFORE_CONCURRENT_USE_CLASS_MESSAGE + "Expression" + StringInvariant::NEW_LINE);
			isWarmedUpBeforeConcurrentUseLocal = false;
		}
		if (f == nullptr) {
			StringUtils::errorPrintln(StringInvariant::WARM_UP_BEFORE_CONCURRENT_USE_CLASS_MESSAGE + "Function" + StringInvariant::NEW_LINE);
			isWarmedUpBeforeConcurrentUseLocal = false;
		}
		if (r == nullptr) {
			StringUtils::errorPrintln(StringInvariant::WARM_UP_BEFORE_CONCURRENT_USE_CLASS_MESSAGE + "RecursiveArgument" + StringInvariant::NEW_LINE);
			isWarmedUpBeforeConcurrentUseLocal = false;
		}
		if (sr == nullptr) {
			StringUtils::errorPrintln(StringInvariant::WARM_UP_BEFORE_CONCURRENT_USE_CLASS_MESSAGE + "StringModel" + StringInvariant::NEW_LINE);
			isWarmedUpBeforeConcurrentUseLocal = false;
		}
		isWarmedUpBeforeConcurrentUse = isWarmedUpBeforeConcurrentUseLocal;
		return isWarmedUpBeforeConcurrentUse;
	}

	API_VISIBLE void mXparser::refreshHelp() {
		HELP_EXPRESSION = new_Expression();
	}

	API_VISIBLE void mXparser::initPrimesCache() {
		primesCache = new_PrimesCache();
	}

	API_VISIBLE void mXparser::initPrimesCache(int mximumNumberInCache) {
		primesCache = new_PrimesCache(mximumNumberInCache);
	}

	API_VISIBLE void mXparser::initPrimesCache(const PrimesCachePtr &primesCache) {
		mXparser::primesCache = primesCache;
	}

	API_VISIBLE bool mXparser::isInitPrimesCacheSuccessful() {
		if (primesCache == nullptr) return false;
		LOCK(primesCache);
		return primesCache->isInitSuccessful();
	}

	API_VISIBLE void mXparser::setNoPrimesCache() {
		primesCache = nullptr;
	}

	API_VISIBLE int mXparser::getMaxNumInPrimesCache() {
		if (primesCache != nullptr) {
			LOCK(primesCache);
			return primesCache->getMaxNumInCache();
		} else
			return PRIMES_CACHE_NOT_INITIALIZED;
	}

	API_VISIBLE int mXparser::getThreadsNumber() {
		return THREADS_NUMBER;
	}

	API_VISIBLE void mXparser::setDefaultThreadsNumber() {
		THREADS_NUMBER = static_cast<int>(std::thread::hardware_concurrency());
	}

	API_VISIBLE void mXparser::setThreadsNumber(int threadsNumber) {
		if (threadsNumber > 0) THREADS_NUMBER = threadsNumber;
	}

	// @Deprecated
	API_VISIBLE double mXparser::getFunctionValue(const ExpressionPtr &f, const ArgumentPtr &x, double x0) {
		return MathFunctions::getFunctionValue(f, x, x0);
	}

	API_VISIBLE ArrayPtr<double> mXparser::arrayList2double(const ListPtr<double> &numbers) {
		if (numbers == nullptr)
			return nullptr;
		int size = numbers->size();
		ArrayPtr<double> newNumbers = new_double(size);
		for (int i = 0; i < size; i++)
			(*newNumbers)(i) = numbers->get(i);
		return newNumbers;
	}

	// @Deprecated
	API_VISIBLE ArrayPtr<double> mXparser::getFunctionValues(const ExpressionPtr &f, const ArgumentPtr &index, double from,
	                                             double to, double delta) {
		return MathFunctions::getFunctionValues(f, index, from, to, delta);
	}

	API_VISIBLE void mXparser::setRandomGenerator(const RandomPtr &randomGenerator) {
		if (randomGenerator != nullptr) ProbabilityDistributions::randomGenerator = randomGenerator;
	}

	API_VISIBLE void mXparser::setExactComparison() {
		BinaryRelations::setExactComparison();
	}

	API_VISIBLE void mXparser::setEpsilonComparison() {
		BinaryRelations::setEpsilonComparison();
	}

	API_VISIBLE void mXparser::setEpsilon(double epsilon) {
		BinaryRelations::setEpsilon(epsilon);
	}

	API_VISIBLE void mXparser::setDefaultEpsilon() {
		BinaryRelations::setDefaultEpsilon();
	}

	API_VISIBLE double mXparser::getEpsilon() {
		return BinaryRelations::getEpsilon();
	}

	API_VISIBLE bool mXparser::checkIfEpsilonMode() {
		return BinaryRelations::checkIfEpsilonMode();
	}

	API_VISIBLE bool mXparser::checkIfExactMode() {
		return BinaryRelations::checkIfExactMode();
	}

	API_VISIBLE void mXparser::enableUlpRounding() {
		ulpRounding = true;
	}

	API_VISIBLE void mXparser::disableUlpRounding() {
		ulpRounding = false;
	}

	API_VISIBLE void mXparser::setUlpRounding(bool ulpRoundingState) {
		ulpRounding = ulpRoundingState;
	}

	API_VISIBLE bool mXparser::checkIfUlpRounding() {
		return ulpRounding;
	}

	API_VISIBLE void mXparser::enableCanonicalRounding() {
		canonicalRounding = true;
	}

	API_VISIBLE void mXparser::disableCanonicalRounding() {
		canonicalRounding = false;
	}

	API_VISIBLE void mXparser::setCanonicalRounding(bool canonicalRoundingState) {
		canonicalRounding = canonicalRoundingState;
	}

	API_VISIBLE bool mXparser::checkIfCanonicalRounding() {
		return canonicalRounding;
	}

	API_VISIBLE void mXparser::enableAlmostIntRounding() {
		almostIntRounding = true;
	}

	API_VISIBLE void mXparser::disableAlmostIntRounding() {
		almostIntRounding = false;
	}
	API_VISIBLE void mXparser::setAlmostIntRounding(bool almostIntRoundingState) {
		almostIntRounding = almostIntRoundingState;
	}

	API_VISIBLE bool mXparser::checkIfAlmostIntRounding() {
		return almostIntRounding;
	}
	API_VISIBLE void mXparser::enableSpecialCases() {
		SpecialValue::specialCasesDisabled = false;
	}
	API_VISIBLE void mXparser::disableSpecialCases() {
		SpecialValue::specialCasesDisabled = true;
	}
	API_VISIBLE void mXparser::setSpecialCases(bool specialCasesState) {
		SpecialValue::specialCasesDisabled = !specialCasesState;
	}
	API_VISIBLE bool mXparser::checkIfSpecialCases() {
		return !SpecialValue::specialCasesDisabled;
	}
	API_VISIBLE void mXparser::setMaxAllowedRecursionDepth(int maxAllowedRecursionDepth) {
		MAX_RECURSION_CALLS = maxAllowedRecursionDepth;
		Argument::refreshMaxAllowedRecursionDepth();
	}
	API_VISIBLE void mXparser::setDefaultMaxAllowedRecursionDepth() {
		MAX_RECURSION_CALLS = DEFAULT_MAX_RECURSION_CALLS;
		Argument::refreshMaxAllowedRecursionDepth();
	}
	API_VISIBLE int mXparser::getMaxAllowedRecursionDepth() {
		return MAX_RECURSION_CALLS;
	}

	API_VISIBLE void mXparser::setRadiansMode() {
		degreesMode = false;
	}

	API_VISIBLE void mXparser::setDegreesMode() {
		degreesMode = true;
	}

	API_VISIBLE bool mXparser::checkIfRadiansMode() {
		return !degreesMode;
	}

	API_VISIBLE bool mXparser::checkIfDegreesMode() {
		return degreesMode;
	}

	API_VISIBLE void mXparser::enableImpliedMultiplicationMode() {
		impliedMultiplicationMode = true;
		HELP_EXPRESSION->enableImpliedMultiplicationMode();
	}

	API_VISIBLE void mXparser::disableImpliedMultiplicationMode() {
		impliedMultiplicationMode = false;
		HELP_EXPRESSION->disableImpliedMultiplicationMode();
	}

	API_VISIBLE bool mXparser::checkIfImpliedMultiplicationMode() {
		return impliedMultiplicationMode;
	}

	API_VISIBLE void mXparser::enableUnicodeBuiltinKeyWordsMode() {
		unicodeKeyWordsEnabled = true;
		HELP_EXPRESSION->enableUnicodeBuiltinKeyWordsMode();
	}

	API_VISIBLE void mXparser::disableUnicodeBuiltinKeyWordsMode() {
		unicodeKeyWordsEnabled = false;
		HELP_EXPRESSION->disableUnicodeBuiltinKeyWordsMode();
	}

	API_VISIBLE bool mXparser::checkIfUnicodeBuiltinKeyWordsMode() {
		return unicodeKeyWordsEnabled;
	}

	API_VISIBLE void mXparser::enableAttemptToFixExpStrMode() {
		attemptToFixExpStrEnabled = true;
	}

	API_VISIBLE void mXparser::disableAttemptToFixExpStrMode() {
		attemptToFixExpStrEnabled = false;
	}

	API_VISIBLE bool mXparser::checkIfAttemptToFixExpStrMode() {
		return attemptToFixExpStrEnabled;
	}

	API_VISIBLE void mXparser::enableSelectBestMatchingLanguage() {
		selectBestMatchingLanguage = true;
		StringModel::setDefaultStringResources();
	}

	API_VISIBLE void mXparser::disableSelectBestMatchingLanguage() {
		selectBestMatchingLanguage = false;
		StringModel::setDefaultEnglishStringResources();
	}

	API_VISIBLE bool mXparser::checkIfSelectBestMatchingLanguage() {
		return selectBestMatchingLanguage;
	}

	API_VISIBLE void mXparser::changeLanguageTo(const StringPtr &language) {
		StringModel::setStringResources(StringResources::bestMatchingLanguage(language));
	}


	API_VISIBLE void mXparser::changeLanguageToBestMatching() {
		StringModel::forceDefaultStringResources();
	}

	API_VISIBLE void mXparser::setToFractionInitSearchSize(Long n) {
		NumberTheory::setToFractionInitSearchSize(n);
	}

	Long mXparser::getToFractionInitSearchSize() {
		return NumberTheory::getToFractionInitSearchSize();
	}

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

	API_VISIBLE void mXparser::unremoveBuiltinTokens(const ListPtr<StringPtr> &tokens) {
		if (tokens == nullptr) return;
		if (tokens->isEmpty()) return;
		if (tokensToRemove->isEmpty()) return;
		LOCK(tokensToRemove);
		for (const StringPtr& token : *tokens)
			if (token != nullptr)
				tokensToRemove->removeByPtrDeref(token);

		optionsChangesetNumber++;
	}

	API_VISIBLE void mXparser::unremoveAllBuiltinTokens() {
		LOCK(tokensToRemove);
		tokensToRemove->clear();
		optionsChangesetNumber++;
	}

	ArrayPtr<StringPtr> mXparser::getBuiltinTokensToRemove() {
		LOCK(tokensToRemove);
		int tokensNum = tokensToRemove->size();
		ArrayPtr<StringPtr> tokensToRemoveArray = new_Array<StringPtr>(tokensNum);
		for (int i = 0; i < tokensNum; i++)
			(*tokensToRemoveArray)(i) = tokensToRemove->getRef(i);
		return tokensToRemoveArray;
	}

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

	API_VISIBLE void mXparser::unmodifyBuiltinTokens(const ListPtr<StringPtr> &currentOrNewTokens) {
		if (currentOrNewTokens == nullptr) return;
		if (currentOrNewTokens->isEmpty()) return;
		if (tokensToModify->isEmpty()) return;
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

	API_VISIBLE void mXparser::unmodifyAllBuiltinTokens() {
		LOCK(tokensToModify);
		tokensToModify->clear();
		optionsChangesetNumber++;
	}

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

	API_VISIBLE void mXparser::setToOverrideBuiltinTokens() {
		overrideBuiltinTokens = true;
		optionsChangesetNumber++;
	}

	API_VISIBLE void mXparser::setNotToOverrideBuiltinTokens() {
		overrideBuiltinTokens = false;
		optionsChangesetNumber++;
	}

	API_VISIBLE bool mXparser::checkIfsetToOverrideBuiltinTokens() {
		return overrideBuiltinTokens;
	}

	API_VISIBLE void mXparser::setDefaultOptions() {
		enableUlpRounding();
		enableCanonicalRounding();
		enableAlmostIntRounding();
		setDefaultMaxAllowedRecursionDepth();
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

	// @Deprecated
	API_VISIBLE StringPtr mXparser::getTokenTypeDescription(int tokenTypeId) {
		return parsertokens::Token::getTokenTypeDescription(tokenTypeId);
	}

	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToHexString(int number) {
		return StringUtils::numberToHexString(number);
	}

	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToHexString(Long number) {
		return StringUtils::numberToHexString(number);
	}

	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToHexString(double number) {
		return StringUtils::numberToHexString(number);
	}

	// @Deprecated
	API_VISIBLE StringPtr mXparser::hexString2AsciiString(const StringPtr &hexString) {
		return StringUtils::hexString2AsciiString(hexString);
	}

	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToAsciiString(int number) {
		return StringUtils::numberToAsciiString(number);
	}

	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToAsciiString(Long number) {
		return StringUtils::numberToAsciiString(number);
	}

	// @Deprecated
	API_VISIBLE StringPtr mXparser::numberToAsciiString(double number) {
		return StringUtils::numberToAsciiString(number);
	}

	API_VISIBLE double mXparser::convOthBase2Decimal(const StringPtr &numberLiteral, int numeralSystemBase) {
		return NumberTheory::convOthBase2Decimal(numberLiteral, numeralSystemBase);
	}

	API_VISIBLE double mXparser::convOthBase2Decimal(const StringPtr &numberLiteral) {
		return NumberTheory::convOthBase2Decimal(numberLiteral);
	}

	API_VISIBLE double mXparser::convOthBase2Decimal(int numeralSystemBase, const ListPtr<int> &digits) {
		return NumberTheory::convOthBase2Decimal(numeralSystemBase, digits);
	}

	API_VISIBLE double mXparser::convOthBase2Decimal(double numeralSystemBase, const ListPtr<double> &digits) {
		return NumberTheory::convOthBase2Decimal(numeralSystemBase, digits);
	}

	API_VISIBLE StringPtr mXparser::convDecimal2OthBase(double decimalNumber, int numeralSystemBase) {
		return NumberTheory::convDecimal2OthBase(decimalNumber, numeralSystemBase);
	}

	API_VISIBLE StringPtr mXparser::convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format) {
		return NumberTheory::convDecimal2OthBase(decimalNumber, numeralSystemBase, format);
	}

	API_VISIBLE ArrayPtr<double> mXparser::toFraction(double value) {
		return NumberTheory::toFraction(value);
	}

	API_VISIBLE ArrayPtr<double> mXparser::toMixedFraction(double value) {
		return NumberTheory::toMixedFraction(value);
	}

	API_VISIBLE StringPtr mXparser::fractionToString(const ArrayPtr<double> &fraction) {
		return NumberTheory::fractionToString(fraction);
	}

	API_VISIBLE StringPtr mXparser::toFractionString(double value) {
		return NumberTheory::toFractionString(value);
	}

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

	API_VISIBLE void mXparser::consolePrintln(const ArrayPtr<StringPtr> &stringArray) {
		if (stringArray == nullptr) {
			consolePrintln("null");
			return;
		}
		for (const StringPtr& s : *stringArray)
			consolePrintln(s);
	}

	API_VISIBLE void mXparser::consolePrintln(const ListPtr<StringPtr> &stringList) {
		if (stringList == nullptr) {
			consolePrintln("null");
			return;
		}
		for (const StringPtr& s : *stringList)
			consolePrintln(s);
	}

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
		if (prefix == nullptr)
			throw std::invalid_argument("Native mXparser.consolePrintSettings requires non-null prefix");
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

	API_VISIBLE void mXparser::resetConsoleOutput() {
		LOCK(CONSOLE_OUTPUT);
		CONSOLE_OUTPUT->clear();
		CONSOLE_ROW_NUMBER = 1;
	}

	API_VISIBLE void mXparser::setDefaultConsolePrefix() {
		CONSOLE_PREFIX = UTF("[mXparser-v.") + VERSION + UTF("] ");
	}

	API_VISIBLE void mXparser::setDefaultConsoleOutputPrefix() {
		CONSOLE_OUTPUT_PREFIX = UTF("[mXparser-v.") + VERSION + UTF("] ");
	}

	API_VISIBLE void mXparser::setConsolePrefix(const StringPtr &consolePrefix) {
		CONSOLE_PREFIX = consolePrefix;
	}

	API_VISIBLE void mXparser::setConsoleOutputPrefix(const StringPtr &consoleOutputPrefix) {
		CONSOLE_OUTPUT_PREFIX = consoleOutputPrefix;
	}

	API_VISIBLE StringPtr mXparser::getConsoleOutput() {
		LOCK(HELP_EXPRESSION);
		return CONSOLE_OUTPUT->toString();
	}

	API_VISIBLE StringPtr mXparser::getHelp() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelp();
	}

	API_VISIBLE StringPtr mXparser::getHelp(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelp(query);
	}

	API_VISIBLE StringPtr mXparser::getHelp(bool addHeader, bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelp(addHeader, addCaption, caption);
	}

	API_VISIBLE StringPtr mXparser::getHelp(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelp(query, addHeader, addCaption, caption);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsCsv() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsCsv();
	}

	API_VISIBLE StringPtr mXparser::getHelpAsCsv(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsCsv(query);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsCsv(const StringPtr &quote, const StringPtr &delimiter, bool addHeader) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsCsv(quote, delimiter, addHeader);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsCsv(const StringPtr &query, const StringPtr &quote, const StringPtr &delimiter,
	                                 bool addHeader) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsCsv(query, quote, delimiter, addHeader);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsHtmlTable() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsHtmlTable();
	}

	API_VISIBLE StringPtr mXparser::getHelpAsHtmlTable(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsHtmlTable(query);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption,
	                                       const StringPtr &cssClass) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsHtmlTable(addHeader, addCaption, addFigure, caption, cssClass);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsHtmlTable(const StringPtr &query, bool addHeader, bool addCaption, bool addFigure,
	                                       const StringPtr &caption, const StringPtr &cssClass) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsHtmlTable(query, addHeader, addCaption, addFigure, caption, cssClass);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsMarkdownTable() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsMarkdownTable();
	}

	API_VISIBLE StringPtr mXparser::getHelpAsMarkdownTable(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsMarkdownTable(query);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsMarkdownTable(bool addHeader, bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsMarkdownTable(addHeader, addCaption, caption);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsMarkdownTable(const StringPtr &query, bool addHeader, bool addCaption,
	                                           const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsMarkdownTable(query, addHeader, addCaption, caption);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsJson() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsJson();
	}

	API_VISIBLE StringPtr mXparser::getHelpAsJson(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsJson(query);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsJson(bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsJson(addCaption, caption);
	}

	API_VISIBLE StringPtr mXparser::getHelpAsJson(const StringPtr &query, bool addCaption, const StringPtr &caption) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getHelpAsJson(query, addCaption, caption);
	}

	API_VISIBLE void mXparser::consolePrintHelp() {
		consolePrintln(getHelp());
	}

	API_VISIBLE void mXparser::consolePrintHelp(const StringPtr &query) {
		consolePrintln(getHelp(query));
	}

	API_VISIBLE ListPtr<KeyWordPtr> mXparser::getKeyWords() {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getKeyWords();
	}

	API_VISIBLE ListPtr<KeyWordPtr> mXparser::getKeyWords(const StringPtr &query) {
		LOCK(HELP_EXPRESSION);
		return HELP_EXPRESSION->getKeyWords(query);
	}

	// @Deprecated
	API_VISIBLE bool mXparser::regexMatch(const StringPtr &str, const StringPtr &pattern) {
		return StringUtils::regexMatch(str, pattern);
	}

	API_VISIBLE void mXparser::consolePrintTokens(const ListPtr<TokenPtr> &tokens) {
		Expression::showTokens(tokens);
	}

	API_VISIBLE void mXparser::consolePrint(const ListPtr<TokenPtr> &tokens) {
		mXparser::consolePrintTokens(tokens);
	}

	API_VISIBLE void mXparser::consolePrintln(const ListPtr<TokenPtr> &tokens) {
		mXparser::consolePrintTokens(tokens);
		mXparser::consolePrintln();
	}

	API_VISIBLE void mXparser::consolePrintLicense() {
		License::consolePrintLicense();
	}

	API_VISIBLE StringPtr mXparser::getLicense() {
		return LICENSE;
	}

	API_VISIBLE void mXparser::wait(int timeMillis) {
		std::this_thread::sleep_for(std::chrono::milliseconds(timeMillis));
	}

	API_VISIBLE void mXparser::cancelCurrentCalculation() {
		cancelCurrentCalculationFlag = true;
	}

	API_VISIBLE void mXparser::resetCancelCurrentCalculationFlag() {
		cancelCurrentCalculationFlag = false;
	}

	API_VISIBLE bool mXparser::isCurrentCalculationCancelled() {
		return cancelCurrentCalculationFlag;
	}

	API_VISIBLE bool mXparser::isCalculationCancelled(int cancelId) {
		if (cancelId == 0) return cancelCurrentCalculationFlag.load();
		if (cancelId < 0 || cancelId > MAX_CANCELLATION_TOKEN_ID) throw std::invalid_argument("cancelId out of range");
		return cancelCurrentCalculationFlag.load() || CancellationRegistry::isCancelled(cancelId);
	}

	API_VISIBLE void mXparser::cancelCalculation(int cancelId) {
		if (cancelId == 0) { cancelCurrentCalculation(); return; }
		CancellationRegistry::cancel(cancelId);
	}

	API_VISIBLE void mXparser::resetCalculationCancellation(int cancelId) {
		if (cancelId == 0) { resetCancelCurrentCalculationFlag(); return; }
		CancellationRegistry::reset(cancelId);
	}

	API_VISIBLE int mXparser::acquireCancellationTokenId() {
		return CancellationRegistry::acquire();
	}

	API_VISIBLE bool mXparser::reserveCancellationTokenId(int cancelId) {
		return CancellationRegistry::reserve(cancelId);
	}

	API_VISIBLE void mXparser::releaseCancellationTokenId(int cancelId) {
		CancellationRegistry::release(cancelId);
	}
} // org::mariuszgromada::math::mxparser
