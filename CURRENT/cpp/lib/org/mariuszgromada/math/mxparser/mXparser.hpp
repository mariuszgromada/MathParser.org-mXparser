/*
 * @(#)mXparser.hpp        6.2.0    2026-11-13
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_MXPARSER_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_MXPARSER_H

#include <atomic>
#include <stdexcept>
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/License.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Integer.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/StringBuilder.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"

namespace org::mariuszgromada::math::mxparser {

	class API_VISIBLE Expression;

	USING_FRIENDS_NAMESPACES;

	class API_VISIBLE mXparser {
		friend struct CancellationTestAccess;
		ADD_FRIENDS_OF(mXparser);

	public:
		/**
		 * \brief Maximum cancellation domain ID; 0 selects global cancellation.
		 * \since 6.2.0
		 */
		static constexpr int MAX_CANCELLATION_TOKEN_ID = 32767;

		/**
		 * \brief Reads the current global signal OR the specified domain signal, not an operation completion status.
		 * <p>An ID denotes an operation domain, not a thread. Multiple independent graphs
		 * may share an ID deliberately. Signals remain set until reset or release;
		 * calculation never resets them. Cached values and paths without an existing
		 * check can complete normally despite a signal. A query does not prove that
		 * a particular invocation stopped or establish the cause of its result.
		 * <p>Reset or release only after all workers and controllers (including timers
		 * and callbacks) have finished. Raw IDs have no ABA or owner authentication
		 * protection: a delayed old controller can affect a later user of the number.
		 * Registry atomics do not make a shared mutable expression graph thread-safe.
		 * Separate WASM modules have separate registries; synchronous single-thread
		 * WASM cannot run a timer controller during calculation. Cross-worker signalling
		 * requires a separately verified shared-memory runtime.
		 * \param cancelId domain in 0..MAX_CANCELLATION_TOKEN_ID; 0 means global cancellation
		 * \return true if global cancellation or the specified domain signal is set; false otherwise
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mXparser::MAX_CANCELLATION_TOKEN_ID
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static bool isCalculationCancelled(int cancelId);

		/**
		 * \brief Atomically sets the sticky signal for this domain; ID 0 sets the global signal. A controller thread may call this while another thread calculates. The worker reacts only at an existing cancellation check.
		 * <p>An ID denotes an operation domain, not a thread. Multiple independent graphs
		 * may share an ID deliberately. Signals remain set until reset or release;
		 * calculation never resets them. Cached values and paths without an existing
		 * check can complete normally despite a signal. A query does not prove that
		 * a particular invocation stopped or establish the cause of its result.
		 * <p>Reset or release only after all workers and controllers (including timers
		 * and callbacks) have finished. Raw IDs have no ABA or owner authentication
		 * protection: a delayed old controller can affect a later user of the number.
		 * Registry atomics do not make a shared mutable expression graph thread-safe.
		 * Separate WASM modules have separate registries; synchronous single-thread
		 * WASM cannot run a timer controller during calculation. Cross-worker signalling
		 * requires a separately verified shared-memory runtime.
		 * \param cancelId domain in 0..MAX_CANCELLATION_TOKEN_ID; 0 means global cancellation
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mXparser::MAX_CANCELLATION_TOKEN_ID
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static void cancelCalculation(int cancelId);

		/**
		 * \brief Atomically clears only the specified signal. ID 0 clears only global cancellation, retaining all individual signals and reservations.
		 * <p>An ID denotes an operation domain, not a thread. Multiple independent graphs
		 * may share an ID deliberately. Signals remain set until reset or release;
		 * calculation never resets them. Cached values and paths without an existing
		 * check can complete normally despite a signal. A query does not prove that
		 * a particular invocation stopped or establish the cause of its result.
		 * <p>Reset or release only after all workers and controllers (including timers
		 * and callbacks) have finished. Raw IDs have no ABA or owner authentication
		 * protection: a delayed old controller can affect a later user of the number.
		 * Registry atomics do not make a shared mutable expression graph thread-safe.
		 * Separate WASM modules have separate registries; synchronous single-thread
		 * WASM cannot run a timer controller during calculation. Cross-worker signalling
		 * requires a separately verified shared-memory runtime.
		 * \param cancelId domain in 0..MAX_CANCELLATION_TOKEN_ID; 0 means global cancellation
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mXparser::MAX_CANCELLATION_TOKEN_ID
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static void resetCalculationCancellation(int cancelId);

		/**
		 * \brief Atomically reserves a positive free ID, clears its previous signal, then publishes that ID. Never returns 0.
		 * <p>An ID denotes an operation domain, not a thread. Multiple independent graphs
		 * may share an ID deliberately. Signals remain set until reset or release;
		 * calculation never resets them. Cached values and paths without an existing
		 * check can complete normally despite a signal. A query does not prove that
		 * a particular invocation stopped or establish the cause of its result.
		 * <p>Reset or release only after all workers and controllers (including timers
		 * and callbacks) have finished. Raw IDs have no ABA or owner authentication
		 * protection: a delayed old controller can affect a later user of the number.
		 * Registry atomics do not make a shared mutable expression graph thread-safe.
		 * Separate WASM modules have separate registries; synchronous single-thread
		 * WASM cannot run a timer controller during calculation. Cross-worker signalling
		 * requires a separately verified shared-memory runtime.
		 * \return a reserved, initially clear ID in 1..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mXparser::MAX_CANCELLATION_TOKEN_ID
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::logic_error if all positive IDs are reserved
		 */
		static int acquireCancellationTokenId();

		/**
		 * \brief Atomically reserves a manually selected positive ID. Success clears its previous signal before publishing success; failure leaves the owner signal unchanged. Reserve manual IDs before using them alongside acquire.
		 * <p>An ID denotes an operation domain, not a thread. Multiple independent graphs
		 * may share an ID deliberately. Signals remain set until reset or release;
		 * calculation never resets them. Cached values and paths without an existing
		 * check can complete normally despite a signal. A query does not prove that
		 * a particular invocation stopped or establish the cause of its result.
		 * <p>Reset or release only after all workers and controllers (including timers
		 * and callbacks) have finished. Raw IDs have no ABA or owner authentication
		 * protection: a delayed old controller can affect a later user of the number.
		 * Registry atomics do not make a shared mutable expression graph thread-safe.
		 * Separate WASM modules have separate registries; synchronous single-thread
		 * WASM cannot run a timer controller during calculation. Cross-worker signalling
		 * requires a separately verified shared-memory runtime.
		 * \param cancelId domain in 1..MAX_CANCELLATION_TOKEN_ID; 0 is not reservable
		 * \return true if the ID was reserved by this call; false if already reserved
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mXparser::MAX_CANCELLATION_TOKEN_ID
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static bool reserveCancellationTokenId(int cancelId);

		/**
		 * \brief Clears the signal before returning a reserved positive ID to the allocator. An unreserved ID is rejected before clearing its signal; use reset for an unreserved manual domain.
		 * <p>An ID denotes an operation domain, not a thread. Multiple independent graphs
		 * may share an ID deliberately. Signals remain set until reset or release;
		 * calculation never resets them. Cached values and paths without an existing
		 * check can complete normally despite a signal. A query does not prove that
		 * a particular invocation stopped or establish the cause of its result.
		 * <p>Reset or release only after all workers and controllers (including timers
		 * and callbacks) have finished. Raw IDs have no ABA or owner authentication
		 * protection: a delayed old controller can affect a later user of the number.
		 * Registry atomics do not make a shared mutable expression graph thread-safe.
		 * Separate WASM modules have separate registries; synchronous single-thread
		 * WASM cannot run a timer controller during calculation. Cross-worker signalling
		 * requires a separately verified shared-memory runtime.
		 * \param cancelId domain in 1..MAX_CANCELLATION_TOKEN_ID; 0 is not reservable
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mXparser::MAX_CANCELLATION_TOKEN_ID
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 * \exception std::logic_error if cancelId is not reserved
		 */
		static void releaseCancellationTokenId(int cancelId);

		mXparser() = delete;

		// ***********************************************************

		static constexpr int VERSION_MAJOR = MXPARSER_BUILD_PROJECT_VERSION_MAJOR;
		static constexpr int VERSION_MINOR = MXPARSER_BUILD_PROJECT_VERSION_MINOR;
		static constexpr int VERSION_PATCH = MXPARSER_BUILD_PROJECT_VERSION_PATCH;

		// ***********************************************************

		static StringPtr VERSION;
		static StringPtr VERSION_CODE_NAME;
		static StringPtr VERSION_NAME;

		// ***********************************************************

		/**
		 * \brief Framework used to compile mXparser
		 */
		static StringPtr BUIT_FOR;

		// ***********************************************************

		/**
		 * \brief Checks whether the library has already been warmed up before concurrent use
		 * \return True if the warm-up was completed successfully, false otherwise.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::warmUpBeforeConcurrentUse()
		 */
		static bool checkIfWarmedUpBeforeConcurrentUse();
		/**
		 * \brief Performs a deterministic, single-threaded warm-up of the core mXparser classes
		 * before concurrent use.
		 * \return True if the warm-up was completed successfully, false otherwise.
		 */
		static bool warmUpBeforeConcurrentUse();

		// ***********************************************************

		/**
		 * \brief Prime numbers cache
		 */
		static PrimesCachePtr primesCache;
		static constexpr int PRIMES_CACHE_NOT_INITIALIZED = -1;
		/**
		 * \brief Initialization of prime numbers cache.
		 * Cache size according to \ref org::mariuszgromada::math::mxparser::mathcollection::PrimesCache::DEFAULT_MAX_NUM_IN_CACHE
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::PrimesCache
		 */
		static void initPrimesCache();
		/**
		 * \brief Initialization of prime numbers cache.
		 * \param mximumNumberInCache The maximum integer number that
		 *                            will be stored in cache.
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::PrimesCache
		 */
		static void initPrimesCache(int mximumNumberInCache);
		/**
		 * \brief Initialization of prime numbers cache.
		 * \param primesCache The primes cache object
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::PrimesCache
		 */
		static void initPrimesCache(const PrimesCachePtr &primesCache);
		/**
		 * \brief Returns true in case when primes cache initialization was successful,
		 * otherwise returns false.
		 * \return Returns true in case when primes cache initialization was successful,
		 * otherwise returns false.
		 */
		static bool isInitPrimesCacheSuccessful();
		/**
		 * \brief Sets \ref org::mariuszgromada::math::mxparser::mXparser::primesCache to null
		 */
		static void setNoPrimesCache();
		/**
		 * \brief Returns maximum integer number in primes cache
		 * \return If primes cache was initialized then maximum number in
		 * primes cache, otherwise \ref org::mariuszgromada::math::mxparser::mXparser::PRIMES_CACHE_NOT_INITIALIZED
		 */
		static int getMaxNumInPrimesCache();

		// ***********************************************************

		/**
		 * \brief Gets maximum threads number
		 * \return Threads number.
		 */
		static int getThreadsNumber();
		/**
		 * \brief Sets default threads number
		 */
		static void setDefaultThreadsNumber();
		/**
		 * \brief Sets threads number
		 * \param threadsNumber  Thread number.
		 */
		static void setThreadsNumber(int threadsNumber);

		// ***********************************************************

		// @Deprecated
		/**
		 * \brief Calculates function f(x0) (given as expression) assigning Argument x = x0;
		 * \param f                   the expression
		 * \param x                   the argument
		 * \param x0                  the argument value
		 * \return f.calculate()
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::getFunctionValue(const ExpressionPtr &,const ArgumentPtr &,double) instead
		 */
		static double getFunctionValue(const ExpressionPtr &f, const ArgumentPtr &x, double x0);
		/**
		 * \brief Returns array of double values of the function f(i)
		 * calculated on the range: i = from to i = to by step = delta
		 * \param f            Function expression
		 * \param index        Index argument
		 * \param from         'from' value
		 * \param to           'to' value
		 * \param delta        'delta' step definition
		 * \return Array of function values
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::getFunctionValues(const ExpressionPtr &,const ArgumentPtr &,double,double,double) instead
		 */
		static ArrayPtr<double> getFunctionValues(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);

		// ***********************************************************

		/**
		 * \brief Converts List of double to double[]
		 * \param numbers             the numbers list
		 * \return numbers array
		 */
		static ArrayPtr<double> arrayList2double(const ListPtr<double> &numbers);
		// @Deprecated
		/**
		 * \brief Modifies random generator used by the ProbabilityDistributions class.
		 * \param randomGenerator      Random generator.
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::ProbabilityDistributions
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::ProbabilityDistributions::randomGenerator
		 */
		static void setRandomGenerator(const RandomPtr &randomGenerator);

		// ***********************************************************

		/**
		 * \brief Sets comparison mode to EXACT.
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations
		 */
		static void setExactComparison();
		/**
		 * \brief Sets comparison mode to EPSILON.
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilon(double)
		 */
		static void setEpsilonComparison();
		/**
		 * \brief Sets epsilon value used in the EPSILON comparison mode and
		 * the almost integer rounding mode.
		 * \param epsilon   Epsilon value (grater than 0).
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilonComparison()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::enableAlmostIntRounding()
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations
		 */
		static void setEpsilon(double epsilon);
		/**
		 * \brief Sets default epsilon value.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilonComparison()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::enableAlmostIntRounding()
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations::DEFAULT_COMPARISON_EPSILON
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations
		 */
		static void setDefaultEpsilon();
		/**
		 * \brief Returns current epsilon value.
		 * \return Returns current epsilon value.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilonComparison()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::enableAlmostIntRounding()
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations
		 */
		static double getEpsilon();
		/**
		 * \brief Checks if epsilon comparison mode is active;
		 * \return True if epsilon mode is active, otherwise returns false.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilonComparison()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setExactComparison()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::enableAlmostIntRounding()
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations
		 */
		static bool checkIfEpsilonMode();
		/**
		 * \brief Checks if exact comparison mode is active;
		 * \return True if exact mode is active, otherwise returns false.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilonComparison()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setExactComparison()
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations
		 */
		static bool checkIfExactMode();

		// ***********************************************************

		/**
		 * \brief Enables ULP rounding.
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
		static void enableUlpRounding();
		/**
		 * \brief Disables ULP rounding.
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
		static void disableUlpRounding();
		/**
		 * \brief Enables / disables ULP rounding.
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent ULP rounding
		 * to minimize misleading results. By default this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
		 * \param ulpRoundingState    True to enable, false to disable
		 */
		static void setUlpRounding(bool ulpRoundingState);
		/**
		 * \brief Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent ULP rounding
		 * to minimize misleading results. By default this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Using this mode 0.1 + 0.1 + 0.1 = 0.3
		 * \return True if ULP rounding is enabled, otherwise false.
		 */
		static bool checkIfUlpRounding();

		// ***********************************************************

		/**
		 * \brief Enables canonical rounding.
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
		static void enableCanonicalRounding();
		/**
		 * \brief Disables canonical rounding.
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
		static void disableCanonicalRounding();
		/**
		 * \brief Enables / disables canonical rounding.
		 * Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent ULP rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Disabling this mode 0.1 + 0.1 + 0.1 will be slightly different from 0.3.
		 * \param canonicalRoundingState    True to enable, false to disable
		 */
		static void setCanonicalRounding(bool canonicalRoundingState);
		/**
		 * \brief Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is slightly different from 0.3,
		 * additionally doubles are having a lot of advantages
		 * providing flexible number representation regardless of
		 * number size. mXparser is fully based on double numbers
		 * and that is why is providing intelligent canonical rounding
		 * to minimize misleading results. By default, this option is
		 * enabled resulting in automatic rounding only in some cases.
		 * Using this mode 2.5 - 2.2 = 0.3
		 * \return True if Canonical rounding is enabled, otherwise false.
		 */
		static bool checkIfCanonicalRounding();

		// ***********************************************************

		/**
		 * \brief Enables almost integer rounding option causing
		 * rounding final calculation result to precise integer
		 * if and only if result is very close to integer.
		 * Very close condition depends on epsilon.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilon(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getEpsilon()
		 * \sa org::mariuszgromada::math::mxparser::Expression::calculate()
		 */
		static void enableAlmostIntRounding();
		/**
		 * \brief Disables almost integer rounding option causing
		 * rounding final calculation result to precise integer
		 * if and only if result is very close to integer.
		 * Very close condition depends on epsilon.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilon(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getEpsilon()
		 * \sa org::mariuszgromada::math::mxparser::Expression::calculate()
		 */
		static void disableAlmostIntRounding();
		/**
		 * \brief Enables / disables almost integer rounding option causing
		 * rounding final calculation result to precise integer
		 * if and only if result is very close to integer.
		 * Very close condition depends on epsilon.
		 * \param almostIntRoundingState    True to enable, false to disable
		 */
		static void setAlmostIntRounding(bool almostIntRoundingState);
		/**
		 * \brief Returns state of almost integer rounding option causing
		 * rounding final calculation result to precise integer
		 * if and only if result is very close to integer.
		 * Very close condition depends on epsilon.
		 * \return true if option enabled, false otherwise
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setEpsilon(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getEpsilon()
		 * \sa org::mariuszgromada::math::mxparser::Expression::calculate()
		 */
		static bool checkIfAlmostIntRounding();

		// ***********************************************************

		/**
		 * \brief Enables special case recognition options, e.g. tan(pi/2) = NaN.
		 * Default behaviour is 'enableSpecialCases'.
		 */
		static void enableSpecialCases();
		/**
		 * \brief Disables special case recognition options, e.g. tan(pi/2) will return value
		 * according to the standard math library implementation.
		 * Default behaviour is 'enableSpecialCases'.
		 */
		static void disableSpecialCases();
		/**
		 * \brief Enables special case recognition options, e.g. tan(pi/2) = NaN or
		 * disables special case recognition options, e.g. tan(pi/2) will return value
		 * according to the standard math library implementation.
		 * Default behaviour is 'enableSpecialCases'.
		 * \param specialCasesState   true to enable, false to disable.
		 */
		static void setSpecialCases(bool specialCasesState);
		/**
		 * \brief Checks if special case recognition is enabled.
		 * \return true in case if special case recognition is enabled, otherwise false.
		 */
		static bool checkIfSpecialCases();

		// ***********************************************************

		/**
		 * \brief Internal limit to avoid infinite loops while calculating
		 * expression defined in the way shown by below examples.
		 *
		 * Argument x = new Argument("x = 2*y");
		 * Argument y = new Argument("y = 2*x");
		 * x.addDefinitions(y);
		 * y.addDefinitions(x);
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 * \param maxAllowedRecursionDepth  Maximum number of allowed recursion calls
		 */
		static void setMaxAllowedRecursionDepth(int maxAllowedRecursionDepth);
		/**
		 * \brief Internal default limit to avoid infinite loops while calculating
		 * expression defined in the way shown by below examples.
		 *
		 * Argument x = new Argument("x = 2*y");
		 * Argument y = new Argument("y = 2*x");
		 * x.addDefinitions(y);
		 * y.addDefinitions(x);
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 */
		static void setDefaultMaxAllowedRecursionDepth();
		/**
		 * \brief Internal limit to avoid infinite loops while calculating
		 * expression defined in the way shown by below examples.
		 *
		 * Argument x = new Argument("x = 2*y");
		 * Argument y = new Argument("y = 2*x");
		 * x.addDefinitions(y);
		 * y.addDefinitions(x);
		 *
		 * Function f = new Function("f(x) = 2*g(x)");
		 * Function g = new Function("g(x) = 2*f(x)");
		 * f.addDefinitions(g);
		 * g.addDefinitions(f);
		 *
		 * Currently, does not affect properly defined recursive mode.
		 * \return Max allowed recursion calls
		 */
		static int getMaxAllowedRecursionDepth();

		// ***********************************************************

		/**
		 * \brief Set mXparser to operate in radians mode for
		 * trigonometric functions
		 */
		static void setRadiansMode();
		/**
		 * \brief Set mXparser to operate in degrees mode for
		 * trigonometric functions
		 */
		static void setDegreesMode();
		/**
		 * \brief Checks whether mXparser operates in radians mode for
		 * trigonometric functions.
		 * \return true - if radians mode, false - otherwise
		 */
		static bool checkIfRadiansMode();
		/**
		 * \brief Checks whether mXparser operates in degrees mode for
		 * trigonometric functions.
		 * \return true - if degrees mode, false - otherwise
		 */
		static bool checkIfDegreesMode();

		// ***********************************************************

		/**
		 * \brief Sets implied multiplication
		 */
		static void enableImpliedMultiplicationMode();
		/**
		 * \brief Disables implied multiplication
		 */
		static void disableImpliedMultiplicationMode();
		/**
		 * \brief Gets implied multiplication status
		 * \return true if implied multiplication is enabled,
		 *             otherwise returns false.
		 */
		static bool checkIfImpliedMultiplicationMode();

		// ***********************************************************

		/**
		 * \brief Enables unicode built-in parser keywords, this flag
		 * informs the parser that built-in unicode keywords
		 * are supported and will be recognized as functions or
		 * operators.
		 */
		static void enableUnicodeBuiltinKeyWordsMode();
		/**
		 * \brief Disables unicode built-in parser keywords, this flag
		 * informs the parser that built-in unicode keywords
		 * are not supported and will not be recognized as functions or
		 * operators.
		 */
		static void disableUnicodeBuiltinKeyWordsMode();
		/**
		 * \brief Gets unicode built-in parser keywords mode
		 * \return true if unicode built-in parser keywords is enabled,
		 *             otherwise returns false.
		 */
		static bool checkIfUnicodeBuiltinKeyWordsMode();

		// ***********************************************************

		/**
		 * \brief Enables attempt to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed to "+"
		 */
		static void enableAttemptToFixExpStrMode();
		/**
		 * \brief Disables attempt to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed to "+"
		 */
		static void disableAttemptToFixExpStrMode();
		/**
		 * \brief Gets attempt to fix expression string mode
		 * \return true attempt to fix expression string mode is enabled,
		 *             otherwise returns false.
		 */
		static bool checkIfAttemptToFixExpStrMode();

		// ***********************************************************

		/**
		 * \brief Option that enables selection of best matching language based on the current OS locale.
		 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
		 * If OS language is not supported, then English is selected.
		 * \sa org::mariuszgromada::math::mxparser::StringModel
		 * \sa org::mariuszgromada::math::mxparser::StringResources
		 * \sa org::mariuszgromada::math::mxparser::StringResources::bestMatchingLanguage()
		 */
		static void enableSelectBestMatchingLanguage();
		/**
		 * \brief Disables mode of selection of best matching language based on the current OS locale.
		 * Returns to the English language.
		 * \sa org::mariuszgromada::math::mxparser::StringModel
		 * \sa org::mariuszgromada::math::mxparser::StringResources
		 * \sa org::mariuszgromada::math::mxparser::StringResources::bestMatchingLanguage()
		 */
		static void disableSelectBestMatchingLanguage();
		/**
		 * \brief Checks if mode of selection of best matching language based on the current OS locale is enabled.
		 * \return True if mode of selection of best matching language is enabled, otherwise false.
		 * \sa org::mariuszgromada::math::mxparser::StringModel
		 * \sa org::mariuszgromada::math::mxparser::StringResources
		 * \sa org::mariuszgromada::math::mxparser::StringResources::bestMatchingLanguage()
		 */
		static bool checkIfSelectBestMatchingLanguage();

		// ***********************************************************

		/**
		 * \brief Changes language to the one that best matches provided language code.
		 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
		 * If language code does not belong to the supported language codes
		 * English language is selected.
		 * \param language     Supported language codes: en, fr, de, it, pl, pt, es.
		 * \sa org::mariuszgromada::math::mxparser::StringModel
		 * \sa org::mariuszgromada::math::mxparser::StringModel::setStringResources(const StringResourcesPtr &)
		 * \sa org::mariuszgromada::math::mxparser::StringResources
		 * \sa org::mariuszgromada::math::mxparser::StringResources::bestMatchingLanguage(const StringPtr &)
		 */
		static void changeLanguageTo(const StringPtr &language);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::changeLanguageTo(const StringPtr &)
		 */
		static void changeLanguageTo(const String &language) { changeLanguageTo(S(language)); }
		/**
		 * \brief Changes language to the one that best matches provided language code.
		 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
		 * If language code does not belong to the supported language codes
		 * English language is selected.
		 * \param locale     Supported language codes: en, fr, de, it, pl, pt, es.
		 * \sa org::mariuszgromada::math::mxparser::StringModel
		 * \sa org::mariuszgromada::math::mxparser::StringModel::setStringResources(const StringResourcesPtr &)
		 * \sa org::mariuszgromada::math::mxparser::StringResources
		 * \sa org::mariuszgromada::math::mxparser::StringResources::bestMatchingLanguage(const StringPtr &)
		 */
		static void changeLanguageTo(const char *locale) { changeLanguageTo(S(locale)); }
		/**
		 * \brief Changes language to the one that best matches current OS locale.
		 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
		 * If OS language is not supported, then English is selected.
		 * \sa org::mariuszgromada::math::mxparser::StringModel
		 * \sa org::mariuszgromada::math::mxparser::StringModel::setStringResources(const StringResourcesPtr &)
		 * \sa org::mariuszgromada::math::mxparser::StringResources
		 * \sa org::mariuszgromada::math::mxparser::StringResources::bestMatchingLanguage()
		 */
		static void changeLanguageToBestMatching();

		// ***********************************************************

		/**
		 * \brief Sets initial search size for the toFraction method
		 * \param n initial search size, has to be non-zero positive.
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::NumberTheory::toFraction(double)
		 */
		static void setToFractionInitSearchSize(Long n);
		/**
		 * \brief Gets initial search size used by the toFraction method
		 * \return initial search size used by the toFraction method
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::NumberTheory::toFraction(double)
		 */
		static Long getToFractionInitSearchSize();

		// ***********************************************************

		/**
		 * \brief Removes built-in tokens form the list of tokens recognized by the parsers.
		 * Procedure affects only tokens classified to built-in functions, built-in
		 * constants, built-in units, built-in random variables.
		 * \param tokens  List of tokens to remove.
		 * \tparam Strings Types of the forwarded arguments.
		 */
		template<typename... Strings>
		static void removeBuiltinTokens(Strings &&... tokens) {
			VariadicProcessorString vp;
			vp.processArgs(FORWARD_STRING(tokens)...);
			removeBuiltinTokens(vp.paramsString);
		}

		/**
		 * \brief Removes built-in tokens form the list of tokens recognized by the parsers.
		 * Procedure affects only tokens classified to built-in functions, built-in
		 * constants, built-in units, built-in random variables.
		 * \param tokens  List of tokens to remove.
		 */
		static void removeBuiltinTokens(const ListPtr<StringPtr> &tokens);

		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::removeBuiltinTokens(const ListPtr< StringPtr > &)
		 */
		static void removeBuiltinTokens(ListPtr<StringPtr> &tokens) {
			removeBuiltinTokens(CONST_LIST_STRING(tokens));
		}

		// ***********************************************************

		/**
		 * \brief Un-marks tokens previously marked to be removed.
		 * \param tokens List of tokens to un-mark.
		 * \tparam Strings Types of the forwarded arguments.
		 */
		template<typename... Strings>
		static void unremoveBuiltinTokens(Strings &&... tokens) {
			VariadicProcessorString vp;
			vp.processArgs(FORWARD_STRING(tokens)...);
			unremoveBuiltinTokens(vp.paramsString);
		}
		/**
		 * \brief Un-marks tokens previously marked to be removed.
		 * \param tokens List of tokens to un-mark.
		 */
		static void unremoveBuiltinTokens(const ListPtr<StringPtr> &tokens);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::unremoveBuiltinTokens(const ListPtr< StringPtr > &)
		 */
		static void unremoveBuiltinTokens(ListPtr<StringPtr> &tokens) { unremoveBuiltinTokens(CONST_LIST_STRING(tokens)); }
		/**
		 * \brief Un-marks all tokens previously marked to be removed.
		 */
		static void unremoveAllBuiltinTokens();
		/**
		 * \brief Returns current list of tokens marked to be removed.
		 * \return Current list of tokens marked to be removed
		 */
		static ArrayPtr<StringPtr> getBuiltinTokensToRemove();

		// ***********************************************************

		/**
		 * \brief Method to change definition of built-in token - more precisely
		 * using this method allows to modify token string recognized by the parser
		 * (i.e. sin(x) to sinus(x)).
		 * Procedure affects only tokens classified to built-in functions, built-in
		 * constants, built-in units, built-in random variables.
		 * \param currentToken     Current token name
		 * \param newToken         New token name
		 */
		static void modifyBuiltinToken(const StringPtr &currentToken, const StringPtr &newToken);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::modifyBuiltinToken(const StringPtr &,const StringPtr &)
		 */
		static void modifyBuiltinToken(const String &currentToken, const String &newToken) { modifyBuiltinToken(S(currentToken), S(newToken)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::modifyBuiltinToken(const StringPtr &,const StringPtr &)
		 */
		static void modifyBuiltinToken(const std::string &currentToken, const std::string &newToken) { modifyBuiltinToken(S(currentToken), S(newToken)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::modifyBuiltinToken(const StringPtr &,const StringPtr &)
		 */
		static void modifyBuiltinToken(const Char* currentToken, const Char* newToken) { modifyBuiltinToken(S(currentToken), S(newToken)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::modifyBuiltinToken(const StringPtr &,const StringPtr &)
		 */
		static void modifyBuiltinToken(const char* currentToken, const char* newToken) { modifyBuiltinToken(S(currentToken), S(newToken)); }
		/**
		 * \brief Method to change definition of built-in token - more precisely
		 * using this method allows to modify token string recognized by the parser
		 * (i.e. sin(x) to sinus(x)).
		 * Procedure affects only tokens classified to built-in functions, built-in
		 * constants, built-in units, built-in random variables.
		 * \param currentToken          Current token name
		 * \param newToken              New token name
		 * \param newTokenDescription   New token description (if null the previous one will be used)
		 */
		static void modifyBuiltinToken(const StringPtr &currentToken, const StringPtr &newToken, const StringPtr &newTokenDescription);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::modifyBuiltinToken(const StringPtr &,const StringPtr &,const StringPtr &)
		 */
		static void modifyBuiltinToken(const String &currentToken, const String &newToken, const String &newTokenDescription) { modifyBuiltinToken(S(currentToken), S(newToken), S(newTokenDescription)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::modifyBuiltinToken(const StringPtr &,const StringPtr &,const StringPtr &)
		 */
		static void modifyBuiltinToken(const std::string &currentToken, const std::string &newToken, const std::string &newTokenDescription) { modifyBuiltinToken(S(currentToken), S(newToken), S(newTokenDescription)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::modifyBuiltinToken(const StringPtr &,const StringPtr &,const StringPtr &)
		 */
		static void modifyBuiltinToken(const Char* currentToken, const Char* newToken, const Char* newTokenDescription) { modifyBuiltinToken(S(currentToken), S(newToken), S(newTokenDescription)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::modifyBuiltinToken(const StringPtr &,const StringPtr &,const StringPtr &)
		 */
		static void modifyBuiltinToken(const char* currentToken, const char* newToken, const char* newTokenDescription) { modifyBuiltinToken(S(currentToken), S(newToken), S(newTokenDescription)); }

		// ***********************************************************

		/**
		 * \brief Un-marks tokens previously marked to be modified.
		 * \param currentOrNewTokens   List of tokens to be un-marked (current or modified).
		 * \tparam Strings Types of the forwarded arguments.
		 */
		template<typename... Strings>
		static void unmodifyBuiltinTokens(Strings &&... currentOrNewTokens) {
			VariadicProcessorString vp;
			vp.processArgs(FORWARD_STRING(currentOrNewTokens)...);
			unmodifyBuiltinTokens(vp.paramsString);
		}
		/**
		 * \brief Un-marks tokens previously marked to be modified.
		 * \param currentOrNewTokens   List of tokens to be un-marked (current or modified).
		 */
		static void unmodifyBuiltinTokens(const ListPtr<StringPtr> &currentOrNewTokens);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::unmodifyBuiltinTokens(const ListPtr< StringPtr > &)
		 */
		static void unmodifyBuiltinTokens(ListPtr<StringPtr> &currentOrNewTokens) { unmodifyBuiltinTokens(CONST_LIST_STRING(currentOrNewTokens)); }

		// ***********************************************************

		/**
		 * \brief Un-marks all tokens previously marked to be modified.
		 */
		static void unmodifyAllBuiltinTokens();

		// ***********************************************************

		/**
		 * \brief Return details on tokens marked to be modified.
		 * \return String[i][0] - current token, String[i][1] - new token,
		 *                        String[i][2] - new token description.
		 */
		static ArrayPtr<StringPtr> getBuiltinTokensToModify();

		// ***********************************************************

		/**
		 * \brief Sets mXparser to override built-in tokens
		 * by user defined tokens.
		 */
		static void setToOverrideBuiltinTokens();
		/**
		 * \brief Sets mXparser not to override built-in tokens
		 * by user defined tokens.
		 */
		static void setNotToOverrideBuiltinTokens();
		/**
		 * \brief Checks whether mXparser is set to override built-in tokens.
		 * \return True if mXparser is set to override built-in tokens by
		 *         user defined tokens, otherwise false.
		 */
		static bool checkIfsetToOverrideBuiltinTokens();

		// ***********************************************************

		/**
		 * \brief Sets default mXparser options
		 */
		static void setDefaultOptions();

		// ***********************************************************

		// @Deprecated
		/**
		 * \brief Returns token type description.
		 * \param tokenTypeId Token type id
		 * \return String representing token type description.
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::parsertokens::Token::getTokenTypeDescription(int) instead
		 */
		static StringPtr getTokenTypeDescription(int tokenTypeId);
		// @Deprecated
		/**
		 * \brief Converts integer number to hex string (plain text)
		 * \param number   Integer number
		 * \return Hex string (i.e. FF23)
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::stringutils::StringUtils::numberToHexString(int) instead
		 */
		static StringPtr numberToHexString(int number);
		// @Deprecated
		/**
		 * \brief Converts long number to hex string (plain text)
		 * \param number   Long number
		 * \return Hex string (i.e. FF23)
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::stringutils::StringUtils::numberToHexString(Long) instead
		 */
		static StringPtr numberToHexString(Long number);
		// @Deprecated
		/**
		 * \brief Converts (long)double number to hex string (plain text)
		 * \param number   Double number
		 * \return Hex string (i.e. FF23)
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::stringutils::StringUtils::numberToHexString(double) instead
		 */
		static StringPtr numberToHexString(double number);
		// @Deprecated
		/**
		 * \brief Converts hex string into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex string.
		 * \param hexString   Hex string (i.e. 48656C6C6F)
		 * \return ASCII string (i.e. '48656C6C6F' = 'Hello')
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::stringutils::StringUtils::hexString2AsciiString(const StringPtr &) instead
		 */
		static StringPtr hexString2AsciiString(const StringPtr &hexString);
		// @Deprecated
		/**
		 * \brief Converts number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number
		 * \param number   Integer number (i.e. 310939249775 = '48656C6C6F')
		 * \return ASCII string (i.e. '48656C6C6F' = 'Hello')
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::stringutils::StringUtils::numberToAsciiString(int) instead
		 */
		static StringPtr numberToAsciiString(int number);
		// @Deprecated
		/**
		 * \brief Converts number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number
		 * \param number   Long number (i.e. 310939249775 = '48656C6C6F')
		 * \return ASCII string (i.e. '48656C6C6F' = 'Hello')
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::stringutils::StringUtils::numberToAsciiString(Long) instead
		 */
		static StringPtr numberToAsciiString(Long number);
		// @Deprecated
		/**
		 * \brief Converts (long)double number into ASCII string, where each letter is
		 * represented by two hex digits (byte) from the hex representation
		 * of the original number cast to long type.
		 * \param number   Double number (i.e. 310939249775 = '48656C6C6F')
		 * \return ASCII string (i.e. '48656C6C6F' = 'Hello')
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::stringutils::StringUtils::numberToAsciiString(double) instead
		 */
		static StringPtr numberToAsciiString(double number);

		// ***********************************************************

		/**
		 * \brief Other base (base between 1 and 36) number literal conversion to decimal number.
		 * \param numberLiteral    Number literal in given numeral system with base between
		 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * \param numeralSystemBase             Numeral system base, between 1 and 36
		 * \return Decimal number after conversion. If conversion was not
		 *                         possible the Double.NaN is returned.
		 */
		static double convOthBase2Decimal(const StringPtr &numberLiteral, int numeralSystemBase);
		/**
		 * \brief Other base (base between 1 and 36) number literal conversion to decimal number.
		 * Base specification included in number literal.
		 *
		 * Examples: 2 for b2.1001 or b.1001, 1 for b1.111, 23 for b23.123afg
		 * 16 for b16.123acdf or h.123acdf.
		 * \param numberLiteral Number literal string.
		 *
		 * Base format: b1. b2. b. b3. b4. b5. b6. b7. b8. o. b9. b10. b11. b12.
		 * b13. b14. b15. b16. h. b17. b18. b19. b20. b21. b22. b23. b24. b25. b26.
		 * b27. b28. b29. b30. b31. b32. b33. b34. b35. b36.
		 *
		 * Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A, 11:B, 12:C,
		 * 13:D, 14:E, 15:F, 16:G, 17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P,
		 * 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * \return Decimal number after conversion. If conversion was not
		 *             possible the Double.NaN is returned.
		 */
		static double convOthBase2Decimal(const StringPtr &numberLiteral);

		/**
		 * \brief Other base to decimal conversion.
		 * \param numeralSystemBase   Numeral system base has to be above 0.
		 * \param digits              List of digits
		 * \return Number after conversion. If conversion is not possible then
		 *                            Double.NaN is returned.
		 * \tparam Integers Types of the forwarded arguments.
		 */
		template<typename... Integers>
		static double convOthBase2Decimal(int numeralSystemBase, Integers &&... digits) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Integers>(digits)...);
			ListPtr<int> digitsInt = std::make_shared<List<int> >();;
			for (double d : *vp.paramsDouble) {
				if (Double::isNaN(d) || d <= CAST_DOUBLE(Integer::MIN_VALUE) - 1.0
					|| d >= CAST_DOUBLE(Integer::MAX_VALUE) + 1.0)
					return Double::NaN;
				digitsInt->add(CAST_INT(d));
			}

			return convOthBase2Decimal(numeralSystemBase, digitsInt);
		}
		/**
		 * \brief Other base to decimal conversion.
		 * \param numeralSystemBase   Numeral system base has to be above 0.
		 * \param digits              List of digits
		 * \return Number after conversion. If conversion is not possible then
		 *                            Double.NaN is returned.
		 */
		static double convOthBase2Decimal(int numeralSystemBase, const ListPtr<int> &digits);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::convOthBase2Decimal(int,const ListPtr< int > &)
		 */
		static double convOthBase2Decimal(int numeralSystemBase, ListPtr<int> &digits) { return convOthBase2Decimal(numeralSystemBase, CONST_LIST_INT(digits)); }

		template<typename... Integers>
		static double convOthBase2Decimal(double numeralSystemBase, Integers &&... digits) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Integers>(digits)...);
			return convOthBase2Decimal(numeralSystemBase, vp.paramsDouble);
		}

		/**
		 * \brief Other base to decimal conversion.
		 * \param numeralSystemBase   Numeral system base has to be above 0.
		 * \param digits              List of digits
		 * \return Number after conversion. If conversion is not possible then
		 *                            Double.NaN is returned.
		 */
		static double convOthBase2Decimal(double numeralSystemBase, const ListPtr<double> &digits);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::convOthBase2Decimal(double,const ListPtr< double > &)
		 */
		static double convOthBase2Decimal(double numeralSystemBase, ListPtr<double> &digits) { return convOthBase2Decimal(numeralSystemBase, CONST_LIST_DOUBLE(digits)); }

		// ***********************************************************

		/**
		 * \brief Decimal number to other numeral system conversion with base
		 * between 1 and 36.
		 * \param decimalNumber    Decimal number
		 * \param numeralSystemBase       Numeral system base between 1 and 36
		 * \return Number literal representing decimal number in
		 *                   given numeral system. Digits
		 *                   0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8,
		 *                   9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G,
		 *                   17:H, 18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O,
		 *                   25:P, 26:Q, 27:R, 28:S, 29:T, 30:U, 31:V, 32:W,
		 *                   33:X, 34:Y, 35:Z. If conversion was not possible
		 *                   the "NaN" string is returned.
		 */
		static StringPtr convDecimal2OthBase(double decimalNumber, int numeralSystemBase);
		/**
		 * \brief Decimal number to other numeral system conversion with base
		 * between 1 and 36.
		 * \param decimalNumber    Decimal number
		 * \param numeralSystemBase       Numeral system base between 1 and 36
		 * \param format     If 1 then always bxx. is used, i.e. b1. or b16.
		 *                   If 2 then for binary b. is used, for octal o. is used,
		 *                   for hexadecimal h. is used, otherwise bxx. is used
		 *                   where xx is the numeral system base specification.
		 * \return Number literal representing decimal number in
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
		static StringPtr convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format);

		// ***********************************************************

		/**
		 * \brief Converts double value to its fraction representation.
		 * \param value Value to be converted
		 * \return Array representing fraction. Sign at index 0,
		 * numerator at index 1, denominator at index 2.
		 * If conversion is not possible then Double.NaN is
		 * assigned to all the fields.
		 */
		static ArrayPtr<double> toFraction(double value);
		/**
		 * \brief Converts double value to its mixed fraction representation.
		 * \param value Value to be converted
		 * \return Array representing fraction.
		 * Sign at index 0, whole number at index 1,
		 * numerator at index 2, denominator at index 3.
		 * If conversion is not possible then Double.NaN is
		 * assigned to both numerator and denominator.
		 */
		static ArrayPtr<double> toMixedFraction(double value);
		/**
		 * \brief Converts array representing fraction to fraction string representation.
		 * \param fraction    Array representing fraction (including mix fractions)
		 * \return String representation of fraction.
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::NumberTheory::toFraction(double)
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::NumberTheory::toMixedFraction(double)
		 */
		static StringPtr fractionToString(const ArrayPtr<double> &fraction);
		/**
		 * \brief Converts number to its fraction string representation.
		 * \param value   Given number
		 * \return String representation of fraction.
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::NumberTheory::toFraction(double)
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::NumberTheory::fractionToString(ArrayPtr< double > &)
		 */
		static StringPtr toFractionString(double value);
		/**
		 * \brief Converts number to its mixed fraction string representation.
		 * \param value   Given number
		 * \return String representation of fraction.
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::NumberTheory::toMixedFraction(double)
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::NumberTheory::fractionToString(ArrayPtr< double > &)
		 */
		static StringPtr toMixedFractionString(double value);

		// ***********************************************************

		/**
		 * \brief Prints object.toString to the Console
		 * \param obj    Object to print
		 */

		// ***********************************************************

		template<typename T>
		static void consolePrint(const T &obj) {
			StringPtr str = StringUtils::toString(obj);
			consolePrintStr(str);
		}

		/**
		 * \brief Prints object.toString to the Console
		 * \param obj    Object to print
		 */
		template<typename T>
		static void consolePrint(T &obj) {
			consolePrint(static_cast<const T &>(obj));
		}

		// ***********************************************************


		/**
		 * \brief Prints object.toString to the Console + new line
		 * \param obj    Object to print
		 */
		template<typename T>
		static void consolePrintln(const T &obj) {
			StringPtr str = StringUtils::toString(obj);
			consolePrintlnStr(str);
		}

		/**
		 * \brief Prints object.toString to the Console + new line
		 * \param obj    Object to print
		 */
		template<typename T>
		static void consolePrintln(T &obj) {
			consolePrintln(static_cast<const T &>(obj));
		}

		/**
		 * \brief Prints new line to the Console, no new line
		 */
		static void consolePrintln();
		/**
		 * \brief Prints array of strings
		 * \param stringArray  array of strinfs
		 */
		static void consolePrintln(const ArrayPtr<StringPtr> &stringArray);
		/**
		 * \brief Prints tokens to the console.
		 * \param stringList   Tokens list.
		 * \sa org::mariuszgromada::math::mxparser::Expression::getCopyOfInitialTokens()
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::Token
		 */
		static void consolePrintln(const ListPtr<StringPtr> &stringList);
		/**
		 * \brief Prints the current parser settings and C++ build information to the mXparser console.
		 * \param prefix Text prepended to each settings line.
		 */
		static void consolePrintSettings(const StringPtr &prefix);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::consolePrintSettings(const StringPtr &)
		 */
		static void consolePrintSettings(const String &prefix) { consolePrintSettings(S(prefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::consolePrintSettings(const StringPtr &)
		 */
		static void consolePrintSettings(const std::string &prefix) { consolePrintSettings(SC(prefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::consolePrintSettings(const StringPtr &)
		 */
		static void consolePrintSettings(const Char* prefix) { consolePrintSettings(SC(prefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::consolePrintSettings(const StringPtr &)
		 */
		static void consolePrintSettings(const char* prefix) { consolePrintSettings(SC(prefix)); }

		// ***********************************************************

		/**
		 * \brief Prints the current parser settings and C++ build information without an additional prefix.
		 */
		static void consolePrintSettings();
		/**
		 * \brief Resets console output string, console output
		 * string is being built by consolePrintln(), consolePrint().
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrint
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrintln
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrintln()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetConsoleOutput()
		 */
		static void resetConsoleOutput();
		/**
		 * \brief Sets default console prefix.
		 */
		static void setDefaultConsolePrefix();
		/**
		 * \brief Sets default console output string prefix.
		 */
		static void setDefaultConsoleOutputPrefix();

		// ***********************************************************

		/**
		 * \brief Sets console prefix.
		 * \param consolePrefix String containing console prefix definition.
		 */
		static void setConsolePrefix(const StringPtr &consolePrefix);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::setConsolePrefix(const StringPtr &)
		 */
		static void setConsolePrefix(const String &consolePrefix) { setConsolePrefix(S(consolePrefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::setConsolePrefix(const StringPtr &)
		 */
		static void setConsolePrefix(const std::string &consolePrefix) { setConsolePrefix(SC(consolePrefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::setConsolePrefix(const StringPtr &)
		 */
		static void setConsolePrefix(const Char* consolePrefix) { setConsolePrefix(SC(consolePrefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::setConsolePrefix(const StringPtr &)
		 */
		static void setConsolePrefix(const char* consolePrefix) { setConsolePrefix(SC(consolePrefix)); }

		// ***********************************************************

		/**
		 * \brief Sets console output string prefix.
		 * \param consoleOutputPrefix String containing console output prefix definition.
		 */
		static void setConsoleOutputPrefix(const StringPtr &consoleOutputPrefix);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::setConsoleOutputPrefix(const StringPtr &)
		 */
		static void setConsoleOutputPrefix(const String &consoleOutputPrefix) { setConsoleOutputPrefix(S(consoleOutputPrefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::setConsoleOutputPrefix(const StringPtr &)
		 */
		static void setConsoleOutputPrefix(const std::string &consoleOutputPrefix) { setConsoleOutputPrefix(SC(consoleOutputPrefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::setConsoleOutputPrefix(const StringPtr &)
		 */
		static void setConsoleOutputPrefix(const Char* consoleOutputPrefix) { setConsoleOutputPrefix(SC(consoleOutputPrefix)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::setConsoleOutputPrefix(const StringPtr &)
		 */
		static void setConsoleOutputPrefix(const char* consoleOutputPrefix) { setConsoleOutputPrefix(SC(consoleOutputPrefix)); }

		// ***********************************************************

		/**
		 * \brief Returns console output string, console output string
		 * is being built by consolePrintln(), consolePrint().
		 * \return Console output string
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrint
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrintln
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrintln()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetConsoleOutput()
		 */
		static StringPtr getConsoleOutput();

		// ***********************************************************

		/**
		 * \brief Returns detailed user help on the syntax of mathematical expressions.
		 * \return One string value containing all the help.
		 */
		static StringPtr getHelp();
		/**
		 * \brief Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value containing all the help.
		 */
		static StringPtr getHelp(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &)
		 */
		static StringPtr getHelp(const String &query) { return getHelp(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &)
		 */
		static StringPtr getHelp(const Char *query) { return getHelp(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &)
		 */
		static StringPtr getHelp(const std::string &query) { return getHelp(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &)
		 */
		static StringPtr getHelp(const char * &query) { return getHelp(S(query)); }
		/**
		 * \brief Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, any string other than ""
		 * will replace the standard caption with the one specified by the user.
		 * \return One string value containing all the help.
		 */
		static StringPtr getHelp(bool addHeader, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(bool,bool,const StringPtr &)
		 */
		static StringPtr getHelp(bool addHeader, bool addCaption, const String &caption) { return getHelp(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(bool,bool,const StringPtr &)
		 */
		static StringPtr getHelp(bool addHeader, bool addCaption, const Char *caption) { return getHelp(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(bool,bool,const StringPtr &)
		 */
		static StringPtr getHelp(bool addHeader, bool addCaption, const std::string &caption) { return getHelp(addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(bool,bool,const StringPtr &)
		 */
		static StringPtr getHelp(bool addHeader, bool addCaption, const char *caption) { return getHelp(addHeader, addCaption, S(caption)); }
		/**
		 * \brief Returns detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, any string other than ""
		 * \return One string value containing all the help.
		 */
		static StringPtr getHelp(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &,bool,bool,const StringPtr &)
		 */
		static StringPtr getHelp(const String &query, bool addHeader, bool addCaption, const String &caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &,bool,bool,const StringPtr &)
		 */
		static StringPtr getHelp(const Char *query, bool addHeader, bool addCaption, const Char *caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &,bool,bool,const StringPtr &)
		 */
		static StringPtr getHelp(const std::string &query, bool addHeader, bool addCaption, const std::string &caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &,bool,bool,const StringPtr &)
		 */
		static StringPtr getHelp(const char *query, bool addHeader, bool addCaption, const char *caption) { return getHelp(S(query), addHeader, addCaption, S(caption)); }

		// ***********************************************************

		/**
		 * \brief Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * \return One string value in CSV format containing all the help.
		 */
		static StringPtr getHelpAsCsv();
		/**
		 * \brief Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value in CSV format containing all the help.
		 */
		static StringPtr getHelpAsCsv(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &)
		 */
		static StringPtr getHelpAsCsv(const String &query) { return getHelpAsCsv(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &)
		 */
		static StringPtr getHelpAsCsv(const Char *query) { return getHelpAsCsv(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &)
		 */
		static StringPtr getHelpAsCsv(const std::string &query) { return getHelpAsCsv(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &)
		 */
		static StringPtr getHelpAsCsv(const char *query) { return getHelpAsCsv(S(query)); }
		/**
		 * \brief Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * \param quote Text qualifier.
		 * \param delimiter Delimiter.
		 * \param addHeader Indicator whether to add a header.
		 * \return One string value in CSV format containing all the help.
		 */
		static StringPtr getHelpAsCsv(const StringPtr &quote, const StringPtr &delimiter, bool addHeader);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &,const StringPtr &,bool)
		 */
		static StringPtr getHelpAsCsv(const String &quote, const String &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &,const StringPtr &,bool)
		 */
		static StringPtr getHelpAsCsv(const Char *quote, const Char *delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &,const StringPtr &,bool)
		 */
		static StringPtr getHelpAsCsv(const std::string &quote, const std::string &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &,const StringPtr &,bool)
		 */
		static StringPtr getHelpAsCsv(const char *quote, const char * &delimiter, bool addHeader) { return getHelpAsCsv(S(quote), S(delimiter), addHeader); }
		/**
		 * \brief Returns (as CSV) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param quote Text qualifier.
		 * \param delimiter Delimiter.
		 * \param addHeader Indicator whether to add a header.
		 * \return One string value in CSV format containing all the help.
		 */
		static StringPtr getHelpAsCsv(const StringPtr &query, const StringPtr &quote, const StringPtr &delimiter, bool addHeader);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &,const StringPtr &,const StringPtr &,bool)
		 */
		static StringPtr getHelpAsCsv(const String &query, const String &quote, const String &delimiter, bool addHeader) {
			return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader);
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &,const StringPtr &,const StringPtr &,bool)
		 */
		static StringPtr getHelpAsCsv(const Char *query, const Char *quote, const Char *delimiter, bool addHeader) {
			return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader);
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &,const StringPtr &,const StringPtr &,bool)
		 */
		static StringPtr getHelpAsCsv(const std::string &query, const std::string &quote, const std::string &delimiter, bool addHeader) {
			return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader);
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsCsv(const StringPtr &,const StringPtr &,const StringPtr &,bool)
		 */
		static StringPtr getHelpAsCsv(const char *query, const char *quote, const char *delimiter, bool addHeader) {
			return getHelpAsCsv(S(query), S(quote), S(delimiter), addHeader);
		}

		// ***********************************************************

		/**
		 * \brief Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * \return One string value containing all the help. String in HTML table format.
		 */
		static StringPtr getHelpAsHtmlTable();
		/**
		 * \brief Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value containing all the help. String in HTML table format.
		 */
		static StringPtr getHelpAsHtmlTable(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(const String &query) { return getHelpAsHtmlTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(const Char *query) { return getHelpAsHtmlTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(const std::string &query) { return getHelpAsHtmlTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(const char *query) { return getHelpAsHtmlTable(S(query)); }
		/**
		 * \brief Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param addFigure Indicator whether to add a FIGURE tag.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \param cssClass If CSS class is to be added, use any string other than "".
		 * \return One string value containing all the help. String in HTML table format.
		 */
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption, const StringPtr &cssClass);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const String &caption, const String &cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const Char *caption, const Char *cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const std::string &caption, const std::string &cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(bool addHeader, bool addCaption, bool addFigure, const char *caption, const char *cssClass) {
			return getHelpAsHtmlTable(addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \brief Returns (as HTML table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param addFigure Indicator whether to add a FIGURE tag.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \param cssClass If CSS class is to be added, use any string other than "".
		 * \return One string value containing all the help. String in HTML table format.
		 */
		static StringPtr getHelpAsHtmlTable(const StringPtr &query, bool addHeader, bool addCaption, bool addFigure, const StringPtr &caption, const StringPtr &cssClass);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(const StringPtr &,bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(const String &query, bool addHeader, bool addCaption, bool addFigure, const String &caption, const String &cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(const StringPtr &,bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(const Char *query, bool addHeader, bool addCaption, bool addFigure, const Char *caption, const Char *cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(const StringPtr &,bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(const std::string &query, bool addHeader, bool addCaption, bool addFigure, const std::string &caption, const std::string &cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsHtmlTable(const StringPtr &,bool,bool,bool,const StringPtr &,const StringPtr &)
		 */
		static StringPtr getHelpAsHtmlTable(const char *query, bool addHeader, bool addCaption, bool addFigure, const char *caption, const char *cssClass) {
			return getHelpAsHtmlTable(S(query), addHeader, addCaption, addFigure, S(caption), S(cssClass));
		}

		// ***********************************************************

		/**
		 * \brief Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * \return One string value containing all the help. String in Markdown table format.
		 */
		static StringPtr getHelpAsMarkdownTable();
		/**
		 * \brief Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value containing all the help. String in Markdown table format.
		 */
		static StringPtr getHelpAsMarkdownTable(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(const String &query) { return getHelpAsMarkdownTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(const Char *query) { return getHelpAsMarkdownTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(const std::string &query) { return getHelpAsMarkdownTable(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(const char * &query) { return getHelpAsMarkdownTable(S(query)); }
		/**
		 * \brief Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \return One string value containing all the help. String in Markdown table format.
		 */
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(bool,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const String &caption) {
			return getHelpAsMarkdownTable(addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(bool,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const Char *caption) {
			return getHelpAsMarkdownTable(addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(bool,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const std::string &caption) {
			return getHelpAsMarkdownTable(addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(bool,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(bool addHeader, bool addCaption, const char *caption) {
			return getHelpAsMarkdownTable(addHeader, addCaption, S(caption));
		}
		/**
		 * \brief Returns (as Markdown table) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param addHeader Indicator whether to add a header.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \return One string value containing all the help. String in Markdown table format.
		 */
		static StringPtr getHelpAsMarkdownTable(const StringPtr &query, bool addHeader, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(const StringPtr &,bool,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(const String &query, bool addHeader, bool addCaption, const String &caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(const StringPtr &,bool,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(const Char *query, bool addHeader, bool addCaption, const Char *caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(const StringPtr &,bool,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(const std::string &query, bool addHeader, bool addCaption, const std::string &caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsMarkdownTable(const StringPtr &,bool,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsMarkdownTable(const char *query, bool addHeader, bool addCaption, const char *caption) {
			return getHelpAsMarkdownTable(S(query), addHeader, addCaption, S(caption));
		}

		// ***********************************************************

		/**
		 * \brief Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * \return One string value containing all the help. String in Json format.
		 */
		static StringPtr getHelpAsJson();
		/**
		 * \brief Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return One string value containing all the help. String in Json format.
		 */
		static StringPtr getHelpAsJson(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(const StringPtr &)
		 */
		static StringPtr getHelpAsJson(const String &query) { return getHelpAsJson(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(const StringPtr &)
		 */
		static StringPtr getHelpAsJson(const Char *query) { return getHelpAsJson(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(const StringPtr &)
		 */
		static StringPtr getHelpAsJson(const std::string &query) { return getHelpAsJson(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(const StringPtr &)
		 */
		static StringPtr getHelpAsJson(const char *query) { return getHelpAsJson(S(query)); }
		/**
		 * \brief Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \return One string value containing all the help. String in Json format.
		 */
		static StringPtr getHelpAsJson(bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(bool,const StringPtr &)
		 */
		static StringPtr getHelpAsJson(bool addCaption, const String &caption) { return getHelpAsJson(addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(bool,const StringPtr &)
		 */
		static StringPtr getHelpAsJson(bool addCaption, const Char *caption) { return getHelpAsJson(addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(bool,const StringPtr &)
		 */
		static StringPtr getHelpAsJson(bool addCaption, const std::string &caption) { return getHelpAsJson(addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(bool,const StringPtr &)
		 */
		static StringPtr getHelpAsJson(bool addCaption, const char *caption) { return getHelpAsJson(addCaption, S(caption)); }
		/**
		 * \brief Returns (as Json) detailed user help on the syntax of mathematical expressions.
		 * Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \param addCaption Indicator whether to add caption.
		 * \param caption If a non-standard caption is to be added, use any string other than "".
		 * \return One string value containing all the help. String in Json format.
		 */
		static StringPtr getHelpAsJson(const StringPtr &query, bool addCaption, const StringPtr &caption);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(const StringPtr &,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsJson(const String &query, bool addCaption, const String &caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(const StringPtr &,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsJson(const Char *query, bool addCaption, const Char *caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(const StringPtr &,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsJson(const std::string &query, bool addCaption, const std::string &caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getHelpAsJson(const StringPtr &,bool,const StringPtr &)
		 */
		static StringPtr getHelpAsJson(const char *query, bool addCaption, const char *caption) { return getHelpAsJson(S(query), addCaption, S(caption)); }

		// ***********************************************************

		/**
		 * \brief Prints all help content.
		 */
		static void consolePrintHelp();
		/**
		 * \brief Prints filtered help content. Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 */
		static void consolePrintHelp(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::consolePrintHelp(const StringPtr &)
		 */
		static void consolePrintHelp(const std::string &query) { consolePrintHelp(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::consolePrintHelp(const StringPtr &)
		 */
		static void consolePrintHelp(const std::string *query) { consolePrintHelp(S(*query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::consolePrintHelp(const StringPtr &)
		 */
		static void consolePrintHelp(const Char *query) { consolePrintHelp(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::consolePrintHelp(const StringPtr &)
		 */
		static void consolePrintHelp(const char *query) { consolePrintHelp(S(query)); }

		// ***********************************************************

		/**
		 * \brief Returns list of keywords known to the parser
		 * \return List of keywords known to the parser.
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::KeyWord
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::KeyWord::wordTypeId
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getHelp()
		 */
		static ListPtr<KeyWordPtr> getKeyWords();
		/**
		 * \brief Returns list of keywords known to the parser. Allows simple and advanced searches.
		 * \param query For a simple search, simply enter a word (e.g.: "sine").
		 * Advanced search is also possible, please use one of the tags below:
		 * "key=" - keyword (e.g.: "key=sin"), "desc=" - description (e.g.: "desc=trigonometric"),
		 *  "syn=" - syntax (e.g.: "syn=sin"), "type=" - type (e.g.: "type=unit"),
		 * "since=" - since (e.g.: "since=4.1"), "typeid=" - please refer to parser tokens
		 * (e.g.: "typeid=3"), "keyid=" - please refer to parser tokens (e.g.: "keyid=1004").
		 * Only one tag can be used per search.
		 * \return List of keywords known to the parser filter against query string.
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::KeyWord
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::KeyWord::wordTypeId
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getHelp(const StringPtr &)
		 */
		static ListPtr<KeyWordPtr> getKeyWords(const StringPtr &query);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getKeyWords(const StringPtr &)
		 */
		static ListPtr<KeyWordPtr> getKeyWords(const String &query) { return getKeyWords(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getKeyWords(const StringPtr &)
		 */
		static ListPtr<KeyWordPtr> getKeyWords(const Char *query) { return getKeyWords(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getKeyWords(const StringPtr &)
		 */
		static ListPtr<KeyWordPtr> getKeyWords(const std::string &query) { return getKeyWords(S(query)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::getKeyWords(const StringPtr &)
		 */
		static ListPtr<KeyWordPtr> getKeyWords(const char * &query) { return getKeyWords(S(query)); }

		// ***********************************************************

		// @Deprecated
		/**
		 * \brief Function used to introduce some compatibility
		 * between JAVA and C# while regexp matching.
		 * \param str         String
		 * \param pattern     Pattern (regexp)
		 * \return True if pattern matches entirely, False otherwise
		 * \deprecated Planned to be removed, use \ref org::mariuszgromada::math::mxparser::stringutils::StringUtils::regexMatch(const StringPtr &,const StringPtr &) instead
		 */
		static bool regexMatch(const StringPtr &str, const StringPtr &pattern);
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::regexMatch(const StringPtr &,const StringPtr &)
		 */
		static bool regexMatch(const String &str, const String &pattern) { return regexMatch(S(str), S(pattern)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::regexMatch(const StringPtr &,const StringPtr &)
		 */
		static bool regexMatch(const Char *str, const Char *pattern) { return regexMatch(S(str), S(pattern)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::regexMatch(const StringPtr &,const StringPtr &)
		 */
		static bool regexMatch(const std::string &str, const std::string &pattern) { return regexMatch(S(str), S(pattern)); }
		/**
		 * \copydoc org::mariuszgromada::math::mxparser::mXparser::regexMatch(const StringPtr &,const StringPtr &)
		 */
		static bool regexMatch(const char * &str, const char * &pattern) { return regexMatch(S(str), S(pattern)); }

		// ***********************************************************

		/**
		 * \brief Prints tokens to the console.
		 * \param tokens   Tokens list.
		 * \sa org::mariuszgromada::math::mxparser::Expression::getCopyOfInitialTokens()
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::Token
		 */
		static void consolePrintTokens(const ListPtr<TokenPtr> &tokens);
		/**
		 * \brief Prints tokens to the console.
		 * \param tokens   Tokens list.
		 * \sa org::mariuszgromada::math::mxparser::Expression::getCopyOfInitialTokens()
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::Token
		 */
		static void consolePrint(const ListPtr<TokenPtr> &tokens);
		/**
		 * \brief Prints tokens to the console.
		 * \param tokens   Tokens list.
		 * \sa org::mariuszgromada::math::mxparser::Expression::getCopyOfInitialTokens()
		 * \sa org::mariuszgromada::math::mxparser::parsertokens::Token
		 */
		static void consolePrintln(const ListPtr<TokenPtr> &tokens);

		// ***********************************************************

		/**
		 * \brief The terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT.
		 */
		static StringPtr LICENSE;
		/**
		 * \brief Prints to the console the terms of MathParser.org-mXparser DUAL LICENSE AGREEMENT
		 */
		static void consolePrintLicense();
		/**
		 * \brief Gets license info
		 * \return license info as string
		 */
		static StringPtr getLicense();

		// ***********************************************************

		/**
		 * \brief Waits given number of milliseconds
		 * \param timeMillis Number of milliseconds
		 */
		static void wait(int timeMillis);
		/**
		 * \brief Method give a signal to other methods to cancel current calculation. This is a flag,
		 * remember to reset this flag after process is cancelled and you are going to start
		 * new calculation process.
		 * <p>Sets only the volatile global flag (domain 0); individual domains also observe this global signal.
		 */
		static void cancelCurrentCalculation();
		/**
		 * \brief Resets a flag giving signal to the engine to cancel current calculation.
		 *
		 * \ref org::mariuszgromada::math::mxparser::mXparser::cancelCurrentCalculation()
		 * <p>Clears only the volatile global flag (domain 0); individual signals and reservations remain unchanged.
		 */
		static void resetCancelCurrentCalculationFlag();
		/**
		 * \brief Check whether a flag to cancel current calculation process is set.
		 *
		 * \ref org::mariuszgromada::math::mxparser::mXparser::cancelCurrentCalculation()
		 * \ref org::mariuszgromada::math::mxparser::mXparser::resetCancelCurrentCalculationFlag()
		 * \return true in case cancel calculation flag is active,
		 *        otherwise false
		 * <p>Reads only the volatile global flag (domain 0); does not read an individual domain or confirm that an operation stopped.
		 */
		static bool isCurrentCalculationCancelled();

		// ***********************************************************

		/*
		 * mXparser version names
		 */
		static StringPtr NAMEv10;
		static StringPtr NAMEv20;
		static StringPtr NAMEv23;
		static StringPtr NAMEv24;
		static StringPtr NAMEv30;
		static StringPtr NAMEv40;
		static StringPtr NAMEv41;
		static StringPtr NAMEv42;
		static StringPtr NAMEv43;
		static StringPtr NAMEv44;
		static StringPtr NAMEv50;
		static StringPtr NAMEv51;
		static StringPtr NAMEv52;
		static StringPtr NAMEv60;
		static StringPtr NAMEv61;

		mutable std::mutex mtx;

	private:
		/**
		 * \brief Console output string  for below methods
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrintln
		 * \sa org::mariuszgromada::math::mxparser::mXparser::consolePrint
		 */
		static StringBuilderPtr CONSOLE_OUTPUT;
		static StringPtr CONSOLE_PREFIX;
		static StringPtr CONSOLE_OUTPUT_PREFIX;
		static int CONSOLE_ROW_NUMBER;
		/**
		 * \brief Threads number settings
		 */
		static int THREADS_NUMBER;

		static void initConsoleOutput();

		// package:
		/**
		 * \brief FOUND / NOT_FOUND
		 * used for matching purposes
		 */
		static constexpr int NOT_FOUND = -1;
		static constexpr int FOUND = 0;

		/**
		 * \brief Flag indicating whether the library has already been warmed up before concurrent use
		 */
		static bool isWarmedUpBeforeConcurrentUse;

		/**
		 * \brief Double floating-point precision arithmetic causes
		 *
		 * mXparser provides intelligent ULP rounding to avoid some
		 * type of this errors.
		 */
		static bool ulpRounding;
		/**
		 * \brief Double floating-point precision arithmetic causes
		 * rounding problems, i.e. 0.1 + 0.1 + 0.1 is different than 0.3
		 *
		 * mXparser provides intelligent canonical rounding to avoid majority
		 * of this errors.
		 */
		static bool canonicalRounding;
		/**
		 * \brief Indicator marking whether to round final result
		 * to precise integer when result is very close
		 * to integer, solves problems like
		 * sin(pi) = 0
		 */
		static bool almostIntRounding;
		static constexpr int DEFAULT_MAX_RECURSION_CALLS = 200;
		/**
		 * \brief Internal limit for counter to avoid infinite loops while calculating
		 * expression defined in the way shown by below examples
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
		 */
		static int MAX_RECURSION_CALLS;
		/**
		 * \brief The maximum error message length in expression
		 */
		static constexpr int ERROR_MESSAGE_MAXIMUM_LENGTH = 10000;
		/**
		 * \brief The maximum number of expected tokens presented
		 * in error message when lexical error was encountered
		 */
		static constexpr int ERROR_MESSAGE_MAXIMUM_NUMBER_OF_EXPECTED_TOKENS = 5;
		/**
		 * \brief List of built-in tokens to remove.
		 */
		static ListPtr<StringPtr> tokensToRemove;
		/**
		 * \brief List of built-in tokens to modify
		 */
		static ListPtr<TokenModificationPtr> tokensToModify;;
		/**
		 * \brief Indicator whether mXparser operates in radians / degrees mode
		 * true - degrees mode
		 * false - radians mode
		 *
		 * Default false (radians mode)
		 */
		static bool degreesMode;
		/**
		 * \brief Indicator whether user defined tokens should override
		 * built-in tokens.
		 */
		static bool overrideBuiltinTokens;
		/**
		 * \brief Implied multiplication mode
		 */
		static bool impliedMultiplicationMode;
		/**
		 * \brief Internal indicator informing hte parser
		 * that unicode know keywords are enabled
		 * and will be recognized by the parser
		 * as built-in functions or operators
		 */
		static bool unicodeKeyWordsEnabled;
		/**
		 * \brief Internal indicator informing the parser
		 * whether to try to fix the expression String.
		 * For example, situations such as:
		 * "++" change to "+",
		 * "+-" changed to "-"
		 * "-+" changed to "-"
		 * "--" changed to "-"
		 */
		static bool attemptToFixExpStrEnabled;;
		/**
		 * \brief Options changeset
		 */
		static int optionsChangesetNumber;
		/**
		 * \brief Indicator whether to call cancel current calculation
		 */
		static std::atomic<bool> cancelCurrentCalculationFlag;
		/**
		 * \brief Indicator whether to select best matching language to OS locale
		 */
		static bool selectBestMatchingLanguage;
		/**
		 * \brief Empty expression for general help purposes.
		 */
		static ExpressionPtr HELP_EXPRESSION;

		static void refreshHelp();

		static void consolePrintStr(const StringPtr &str);
		static void consolePrintlnStr(const StringPtr &str);

	public:
		inline static ListPtr<PrimitiveElementPtr> testListPrimitiveElementPtr = nullptr;
		inline static ListPtr<CalcStepRecordPtr> testListCalcStepRecordPtr = nullptr;


		STATIC_VARS_INITI_H;

	};
} // namespace org::mariuszgromada::math::mxparser

#define mXparser_consolePrintln(PARAMS) mXparser::consolePrintln(StringInvariant::EMPTY+PARAMS+StringInvariant::EMPTY)
#define mXparser_consolePrint(PARAMS) mXparser::consolePrint(StringInvariant::EMPTY+PARAMS+StringInvariant::EMPTY)

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_MXPARSER_H
