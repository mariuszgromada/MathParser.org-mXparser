/*
 * @(#)NumberTheory.hpp        6.2.0    2026-11-13
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_NUMBERTHEORY_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_NUMBERTHEORY_H

#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Array.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"
#include <stdexcept>
#include <string>

namespace org::mariuszgromada::math::mxparser::mathcollection {
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	class API_VISIBLE NumberTheory {
	public:
		NumberTheory() = delete;

		// ***********************************************************

		static constexpr Long DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE = 10000;
		static void setToFractionInitSearchSize(Long n);
		static Long getToFractionInitSearchSize();

		// ***********************************************************

		static double min(double a, double b);

		template<typename... Doubles>
		static double min(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return min(vp.paramsDouble);
		}
		static double min(const ListPtr<double> &numbers);
		/**
		 * Minimum function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns the smallest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see min(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double minWithCancel(const ListPtr<double> &numbers, int cancelId);
		static double min(ListPtr<double> &numbers) { return min(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Minimum function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns the smallest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see min(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double minWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return minWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double min(const ArrayPtr<double> &numbers);
		/**
		 * Minimum function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns the smallest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see min(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double minWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double min(ArrayPtr<double> &numbers) { return min(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Minimum function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns the smallest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see min(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double minWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return minWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		template<typename... Doubles>
		static double argmin(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return argmin(vp.paramsDouble);
		}
		static double argmin(const ListPtr<double> &numbers);
		/**
		 * Arg-Min function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     Returns the index of the first smallest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see argmin(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double argminWithCancel(const ListPtr<double> &numbers, int cancelId);
		static double argmin(ListPtr<double> &numbers) { return argmin(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Arg-Min function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     Returns the index of the first smallest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see argmin(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double argminWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return argminWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double argmin(const ArrayPtr<double> &numbers);
		/**
		 * Arg-Min function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     Returns the index of the first smallest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see argmin(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double argminWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double argmin(ArrayPtr<double> &numbers) { return argmin(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Arg-Min function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     Returns the index of the first smallest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see argmin(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double argminWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return argminWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		static double max(double a, double b);

		template<typename... Doubles>
		static double max(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return max(vp.paramsDouble);
		}
		static double max(const ListPtr<double> &numbers);
		/**
		 * Maximum function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns the highest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see max(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double maxWithCancel(const ListPtr<double> &numbers, int cancelId);
		static double max(ListPtr<double> &numbers) { return max(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Maximum function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns the highest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see max(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double maxWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return maxWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double max(const ArrayPtr<double> &numbers);
		/**
		 * Maximum function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns the highest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see max(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double maxWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double max(ArrayPtr<double> &numbers) { return max(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Maximum function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns the highest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see max(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double maxWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return maxWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		template<typename... Doubles>
		static double argmax(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return argmax(vp.paramsDouble);
		}
		static double argmax(const ListPtr<double> &numbers);
		/**
		 * Arg-Max function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     Returns the index of the first biggest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see argmax(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double argmaxWithCancel(const ListPtr<double> &numbers, int cancelId);
		static double argmax(ListPtr<double> &numbers) { return argmax(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Arg-Max function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     Returns the index of the first biggest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see argmax(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double argmaxWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return argmaxWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double argmax(const ArrayPtr<double> &numbers);
		/**
		 * Arg-Max function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     Returns the index of the first biggest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see argmax(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double argmaxWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double argmax(ArrayPtr<double> &numbers) { return argmax(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Arg-Max function.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the a function parameter
		 *
		 * @return     Returns the index of the first biggest number,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see argmax(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double argmaxWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return argmaxWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		static ArrayPtr<int> sortAsc(const ArrayPtr<double> &doubleArray);
		/**
		 * Array sort - ascending - quick sort algorithm.
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns the partially initialized ordering array.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param doubleArray  Array to be sorted
		 * @return       Sorts array and additionally returns
		 *               initial ordering swapped according to sort order.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see sortAsc(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static ArrayPtr<int> sortAscWithCancel(const ArrayPtr<double> &doubleArray, int cancelId);
		static ArrayPtr<double> getDistValues(const ArrayPtr<double> &doubleArray, bool returnOrderByDescFreqAndAscOrigPos);
		/**
		 * Returns list of distinct values found in a given array.
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it breaks the current loop and continues the existing method flow.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param doubleArray The array
		 * @param returnOrderByDescFreqAndAscOrigPos Indicator whether to apply final ordering based
		 *                                           on descending value frequency and ascending initial position.
		 * @return List of values in the form of: first index - value index, second index: 0 - value, 1 - value count,
		 *                                        2 - minimal value position in original array
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see getDistValues(double[],boolean)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static ArrayPtr<double> getDistValuesWithCancel(const ArrayPtr<double> &doubleArray, bool returnOrderByDescFreqAndAscOrigPos, int cancelId);

		// ***********************************************************

		template<typename... Doubles>
		static double numberOfDistValues(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return numberOfDistValues(vp.paramsDouble);
		}
		static double numberOfDistValues(const ListPtr<double> &numbers) {
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return numberOfDistValues(arrayNumbers);
		}
		/**
		 * Returns number of unique values found the list of numbers
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numbers    The list of numbers
		 * @return           Number of unique values. If list is null or any Double::NaN
		 *                   is found then Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see numberOfDistValues(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double numberOfDistValuesWithCancel(const ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return numberOfDistValuesWithCancel(arrayNumbers, cancelId);
		}
		static double numberOfDistValues(ListPtr<double> &numbers) { return numberOfDistValues(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Returns number of unique values found the list of numbers
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numbers    The list of numbers
		 * @return           Number of unique values. If list is null or any Double::NaN
		 *                   is found then Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see numberOfDistValues(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double numberOfDistValuesWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return numberOfDistValuesWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double numberOfDistValues(const ArrayPtr<double> &numbers);
		/**
		 * Returns number of unique values found the list of numbers
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numbers    The list of numbers
		 * @return           Number of unique values. If list is null or any Double::NaN
		 *                   is found then Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see numberOfDistValues(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double numberOfDistValuesWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double numberOfDistValues(ArrayPtr<double> &numbers) { return numberOfDistValues(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Returns number of unique values found the list of numbers
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numbers    The list of numbers
		 * @return           Number of unique values. If list is null or any Double::NaN
		 *                   is found then Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see numberOfDistValues(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double numberOfDistValuesWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return numberOfDistValuesWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		static Long gcd(Long a, Long b);
		/**
		 * Greatest common divisor (GCD)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns 0 (the canonical integral cancellation sentinel).
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 * @return     GCD(a,b)
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see gcd(long,long)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static Long gcdWithCancel(Long a, Long b, int cancelId);
		static double gcd(double a, double b);
		/**
		 * Greatest common divisor (GCD)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     if a, b &lt;&gt; Double::NaN returns gcd( (int)Math.round(a),(int)Math.round(b) ),
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see gcd(double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double gcdWithCancel(double a, double b, int cancelId);
		//static Long gcd(const ListPtr<Long> &numbers);
		static Long gcd(const ArrayPtr<Long> &numbers);
		/**
		 * Greatest common divisor (GCD)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns 0 (the canonical integral cancellation sentinel).
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     GCD(a_1,...,a_n) a_1,...,a_n in numbers
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see gcd(long[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static Long gcdWithCancel(const ArrayPtr<Long> &numbers, int cancelId);
		
		template<typename... Doubles>
		static double gcd(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return gcd(vp.paramsDouble);
		}
		static double gcd(const ListPtr<double> &numbers) {
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return gcd(arrayNumbers);
		}
		/**
		 * Greatest common divisor (GCD)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns
		 *             GCD(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see gcd(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double gcdWithCancel(const ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return gcdWithCancel(arrayNumbers, cancelId);
		}
		static double gcd(ListPtr<double> &numbers) { return gcd(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Greatest common divisor (GCD)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns
		 *             GCD(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see gcd(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double gcdWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return gcdWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double gcd(const ArrayPtr<double> &numbers);
		/**
		 * Greatest common divisor (GCD)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns
		 *             GCD(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see gcd(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double gcdWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double gcd(ArrayPtr<double> &numbers) { return gcd(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Greatest common divisor (GCD)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns
		 *             GCD(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see gcd(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double gcdWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return gcdWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		static Long lcm(Long a, Long b);
		/**
		 * Latest common multiply (LCM)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     LCM(a,b)
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @throws std::invalid_argument if a cancelled gcd supplies a zero divisor
		 * @since 6.2.0
		 * @see lcm(long,long)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static Long lcmWithCancel(Long a, Long b, int cancelId);
		static double lcm(double a, double b);
		/**
		 * Latest common multiply (LCM)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      a                   the a function parameter
		 * @param      b                   the b function parameter
		 *
		 * @return     if a, b &lt;&gt; Double::NaN returns lcm( (int)Math.round(a), (int)Math.round(b) ),
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see lcm(double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double lcmWithCancel(double a, double b, int cancelId);
		//static Long lcm(const ListPtr<Long> &numbers);
		static Long lcm(const ArrayPtr<Long> &numbers);
		/**
		 * Latest common multiply (LCM)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns 0 (the canonical integral cancellation sentinel).
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     LCM(a_1,...,a_n) a_1,...,a_n in numbers
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @throws std::invalid_argument if a cancelled gcd supplies a zero divisor
		 * @since 6.2.0
		 * @see lcm(long[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static Long lcmWithCancel(const ArrayPtr<Long> &numbers, int cancelId);
		
		template<typename... Doubles>
		static double lcm(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return lcm(vp.paramsDouble);
		}
		static double lcm(const ListPtr<double> &numbers) {
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return lcm(arrayNumbers);
		}
		/**
		 * Latest common multiply (LCM)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns
		 *             LCM(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see lcm(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double lcmWithCancel(const ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return lcmWithCancel(arrayNumbers, cancelId);
		}
		static double lcm(ListPtr<double> &numbers) { return lcm(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Latest common multiply (LCM)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns
		 *             LCM(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see lcm(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double lcmWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return lcmWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double lcm(const ArrayPtr<double> &numbers);
		/**
		 * Latest common multiply (LCM)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns
		 *             LCM(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see lcm(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double lcmWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double lcm(ArrayPtr<double> &numbers) { return lcm(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Latest common multiply (LCM)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number form numbers &lt;&gt; Double::NaN returns
		 *             LCM(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see lcm(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double lcmWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return lcmWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		template<typename... Doubles>
		static double sum(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return sum(vp.paramsDouble);
		}
		static double sum(const ListPtr<double> &numbers) {
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return sum(arrayNumbers);
		}
		/**
		 * Adding numbers.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers &lt;&gt; Double::NaN returns
		 *             sum(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see sum(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double sumWithCancel(const ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return sumWithCancel(arrayNumbers, cancelId);
		}
		static double sum(ListPtr<double> &numbers) { return sum(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Adding numbers.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers &lt;&gt; Double::NaN returns
		 *             sum(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see sum(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double sumWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return sumWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double sum(const ArrayPtr<double> &numbers);
		/**
		 * Adding numbers.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers &lt;&gt; Double::NaN returns
		 *             sum(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see sum(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double sumWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double sum(ArrayPtr<double> &numbers) { return sum(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Adding numbers.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers &lt;&gt; Double::NaN returns
		 *             sum(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see sum(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double sumWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return sumWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		template<typename... Doubles>
		static double prod(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return prod(vp.paramsDouble);
		}
		static double prod(const ListPtr<double> &numbers) {
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return prod(arrayNumbers);
		}
		/**
		 * Numbers multiplication.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers &lt;&gt; Double::NaN returns
		 *             prod(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see prod(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double prodWithCancel(const ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			ArrayPtr<double> arrayNumbers = Array<double>::toArray(numbers);
			return prodWithCancel(arrayNumbers, cancelId);
		}
		static double prod(ListPtr<double> &numbers) { return prod(CONST_LIST_DOUBLE(numbers)); }
		/**
		 * Numbers multiplication.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers &lt;&gt; Double::NaN returns
		 *             prod(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see prod(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double prodWithCancel(ListPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return prodWithCancel(CONST_LIST_DOUBLE(numbers), cancelId);
		}
		static double prod(const ArrayPtr<double> &numbers);
		/**
		 * Numbers multiplication.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers &lt;&gt; Double::NaN returns
		 *             prod(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see prod(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double prodWithCancel(const ArrayPtr<double> &numbers, int cancelId);
		static double prod(ArrayPtr<double> &numbers) { return prod(CONST_ARRAY_DOUBLE(numbers)); }
		/**
		 * Numbers multiplication.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      numbers             the numbers
		 *
		 * @return     if each number from numbers &lt;&gt; Double::NaN returns
		 *             prod(a_1,...,a_n) a_1,...,a_n in numbers,
		 *             otherwise returns Double::NaN.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see prod(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double prodWithCancel(ArrayPtr<double> &numbers, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return prodWithCancel(CONST_ARRAY_DOUBLE(numbers), cancelId);
		}

		// ***********************************************************

		static bool primeTest(Long n);
		/**
		 * Prime test
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns false.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param n           The number to be tested.
		 *
		 * @return true if number is prime, otherwise false
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see primeTest(long)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static bool primeTestWithCancel(Long n, int cancelId);
		static double primeTest(double n);
		/**
		 * Prime test
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param n        The number to be tested.
		 *
		 * @return true if number is prime, otherwise false
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see primeTest(double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double primeTestWithCancel(double n, int cancelId);
		static Long primeCount(Long n);
		/**
		 * Prime counting function
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns 0 (the canonical integral cancellation sentinel).
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param n number
		 *
		 * @return Number of primes below or equal x
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see primeCount(long)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static Long primeCountWithCancel(Long n, int cancelId);
		static double primeCount(double n);
		/**
		 * Prime counting function
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param n number
		 *
		 * @return Number of primes below or equal x
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see primeCount(double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double primeCountWithCancel(double n, int cancelId);

		// ***********************************************************

		static double sigmaSummation(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);
		/**
		 * Summation operator (SIGMA FROM i = a, to b,  f(i) by delta
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return     summation operation (for empty summation operations returns 0).
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see sigmaSummation(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double sigmaSummationWithCancel(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta, int cancelId);
		static double sigmaSummation(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta) {
			return sigmaSummation(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta);
		}
		/**
		 * Summation operator (SIGMA FROM i = a, to b,  f(i) by delta
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return     summation operation (for empty summation operations returns 0).
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see sigmaSummation(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double sigmaSummationWithCancel(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return sigmaSummationWithCancel(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta, cancelId);
		}

		// ***********************************************************

		static double piProduct(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);
		/**
		 * Product operator
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return     product operation (for empty product operations returns 1).
		 *
		 * @see        Expression
		 * @see        Argument
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see piProduct(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double piProductWithCancel(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta, int cancelId);
		static double piProduct(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta) {
			return piProduct(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta);
		}
		/**
		 * Product operator
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return     product operation (for empty product operations returns 1).
		 *
		 * @see        Expression
		 * @see        Argument
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see piProduct(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double piProductWithCancel(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return piProductWithCancel(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta, cancelId);
		}

		// ***********************************************************

		static double min(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);
		/**
		 * Minimum value - iterative operator.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return the minimum sampled value, positive infinity if no comparable sample is retained, or the existing NaN error/cancellation result
		 * @see        Expression
		 * @see        Argument
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see min(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double minWithCancel(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta, int cancelId);
		static double min(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta) {
			return min(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta);
		}
		/**
		 * Minimum value - iterative operator.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return the minimum sampled value, positive infinity if no comparable sample is retained, or the existing NaN error/cancellation result
		 * @see        Expression
		 * @see        Argument
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see min(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double minWithCancel(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return minWithCancel(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta, cancelId);
		}

		// ***********************************************************

		static double max(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);
		/**
		 * Maximum value - iterative operator.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return the maximum sampled value, negative infinity if no comparable sample is retained, or the existing NaN error/cancellation result
		 * @see        Expression
		 * @see        Argument
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see max(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double maxWithCancel(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta, int cancelId);
		static double max(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta) {
			return max(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta);
		}
		/**
		 * Maximum value - iterative operator.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param      f                   the expression
		 * @param      index               the name of index argument
		 * @param      from                FROM index = form
		 * @param      to                  TO index = to
		 * @param      delta               BY delta
		 *
		 * @return the maximum sampled value, negative infinity if no comparable sample is retained, or the existing NaN error/cancellation result
		 * @see        Expression
		 * @see        Argument
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see max(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double maxWithCancel(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return maxWithCancel(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta, cancelId);
		}

		// ***********************************************************

		static int digitIndex(Char digitChar);
		static Char digitChar(int digitIndex);

		// ***********************************************************

		static int getNumeralSystemBase(const StringPtr &numberLiteral);
		static int getNumeralSystemBase(StringPtr &numberLiteral) { return getNumeralSystemBase(CONST_STRING_PTR(numberLiteral)); }
		static int getNumeralSystemBase(const String &numberLiteral) { return getNumeralSystemBase(S(numberLiteral)); }
		static int getNumeralSystemBase(const std::string &numberLiteral) { return getNumeralSystemBase(S(numberLiteral)); }
		static int getNumeralSystemBase(const Char* numberLiteral) { return getNumeralSystemBase(S(numberLiteral)); }
		static int getNumeralSystemBase(const char* numberLiteral) { return getNumeralSystemBase(S(numberLiteral)); }

		// ***********************************************************

		static double convOthBase2Decimal(const StringPtr &numberLiteral, int numeralSystemBase);
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numberLiteral    Number literal in given numeral system with base between
		 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * @param numeralSystemBase             Numeral system base, between 1 and 36
		 * @return                 Decimal number after conversion. If conversion was not
		 *                         possible the Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(StringPtr,int)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(const StringPtr &numberLiteral, int numeralSystemBase, int cancelId);
		static double convOthBase2Decimal(StringPtr &numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(CONST_STRING_PTR(numberLiteral), numeralSystemBase); }
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numberLiteral    Number literal in given numeral system with base between
		 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * @param numeralSystemBase             Numeral system base, between 1 and 36
		 * @return                 Decimal number after conversion. If conversion was not
		 *                         possible the Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(StringPtr,int)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(StringPtr &numberLiteral, int numeralSystemBase, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(CONST_STRING_PTR(numberLiteral), numeralSystemBase, cancelId);
		}
		static double convOthBase2Decimal(const String &numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(S(numberLiteral), numeralSystemBase); }
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numberLiteral    Number literal in given numeral system with base between
		 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * @param numeralSystemBase             Numeral system base, between 1 and 36
		 * @return                 Decimal number after conversion. If conversion was not
		 *                         possible the Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(StringPtr,int)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(const String &numberLiteral, int numeralSystemBase, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(S(numberLiteral), numeralSystemBase, cancelId);
		}
		static double convOthBase2Decimal(const std::string &numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(S(numberLiteral), numeralSystemBase); }
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numberLiteral    Number literal in given numeral system with base between
		 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * @param numeralSystemBase             Numeral system base, between 1 and 36
		 * @return                 Decimal number after conversion. If conversion was not
		 *                         possible the Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(StringPtr,int)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(const std::string &numberLiteral, int numeralSystemBase, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(S(numberLiteral), numeralSystemBase, cancelId);
		}
		static double convOthBase2Decimal(const Char* numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(S(numberLiteral), numeralSystemBase); }
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numberLiteral    Number literal in given numeral system with base between
		 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * @param numeralSystemBase             Numeral system base, between 1 and 36
		 * @return                 Decimal number after conversion. If conversion was not
		 *                         possible the Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(StringPtr,int)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(const Char* numberLiteral, int numeralSystemBase, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(S(numberLiteral), numeralSystemBase, cancelId);
		}
		static double convOthBase2Decimal(const char* numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(S(numberLiteral), numeralSystemBase); }
		/**
		 * Other base (base between 1 and 36) number literal conversion to decimal number.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numberLiteral    Number literal in given numeral system with base between
		 *                         1 and 36. Digits: 0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7,
		 *                         8:8, 9:9, 10:A, 11:B, 12:C, 13:D, 14:E, 15:F, 16:G, 17:H,
		 *                         18:I, 19:J, 20:K, 21:L, 22:M, 23:N, 24:O, 25:P, 26:Q, 27:R,
		 *                         28:S, 29:T, 30:U, 31:V, 32:W, 33:X, 34:Y, 35:Z
		 * @param numeralSystemBase             Numeral system base, between 1 and 36
		 * @return                 Decimal number after conversion. If conversion was not
		 *                         possible the Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(StringPtr,int)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(const char* numberLiteral, int numeralSystemBase, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(S(numberLiteral), numeralSystemBase, cancelId);
		}
		static double convOthBase2Decimal(const StringPtr &numberLiteral);
		static double convOthBase2Decimal(StringPtr &numberLiteral) { return convOthBase2Decimal(CONST_STRING_PTR(numberLiteral)); }

		static double convOthBase2Decimal(const String &numberLiteral) { return convOthBase2Decimal(S(numberLiteral)); }

		static double convOthBase2Decimal(const std::string &numberLiteral) { return convOthBase2Decimal(S(numberLiteral)); }

		static double convOthBase2Decimal(const Char* numberLiteral) { return convOthBase2Decimal(S(numberLiteral)); }

		static double convOthBase2Decimal(const char* numberLiteral) { return convOthBase2Decimal(S(numberLiteral)); }

		static double convOthBase2Decimal(int numeralSystemBase, const ListPtr<int> &digits) {
			const ArrayPtr<int> digitsArray = digits == nullptr ? nullptr : Array<int>::toArray(digits);
			return convOthBase2Decimal(numeralSystemBase, digitsArray);
		}
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(int,int[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(int numeralSystemBase, const ListPtr<int> &digits, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			const ArrayPtr<int> digitsArray = digits == nullptr ? nullptr : Array<int>::toArray(digits);
			return convOthBase2DecimalWithCancel(numeralSystemBase, digitsArray, cancelId);
		}
		static double convOthBase2Decimal(int numeralSystemBase, ListPtr<int> &digits) { return convOthBase2Decimal(numeralSystemBase, static_cast<const ListPtr<int> &>(digits)); }
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(int,int[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(int numeralSystemBase, ListPtr<int> &digits, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(numeralSystemBase, static_cast<const ListPtr<int> &>(digits), cancelId);
		}
		static double convOthBase2Decimal(int numeralSystemBase, const ArrayPtr<int> &digits);
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(int,int[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(int numeralSystemBase, const ArrayPtr<int> &digits, int cancelId);
		static double convOthBase2Decimal(int numeralSystemBase, ArrayPtr<int> &digits) { return convOthBase2Decimal(numeralSystemBase, static_cast<const ArrayPtr<int> &>(digits)); }
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(int,int[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(int numeralSystemBase, ArrayPtr<int> &digits, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(numeralSystemBase, static_cast<const ArrayPtr<int> &>(digits), cancelId);
		}

		template<typename... Doubles>
		static double convOthBase2Decimal(double numeralSystemBase, Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return convOthBase2Decimal(numeralSystemBase, vp.paramsDouble);
		}
		static double convOthBase2Decimal(double numeralSystemBase, const ListPtr<double> &digits) {
			ArrayPtr<double> arrayDigits = digits == nullptr ? nullptr : Array<double>::toArray(digits);
			return convOthBase2Decimal(numeralSystemBase, arrayDigits);
		}
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(double,double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(double numeralSystemBase, const ListPtr<double> &digits, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			ArrayPtr<double> arrayDigits = digits == nullptr ? nullptr : Array<double>::toArray(digits);
			return convOthBase2DecimalWithCancel(numeralSystemBase, arrayDigits, cancelId);
		}
		static double convOthBase2Decimal(double numeralSystemBase, ListPtr<double> &digits) { return convOthBase2Decimal(numeralSystemBase, CONST_LIST_DOUBLE(digits)); }
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed lists, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(double,double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(double numeralSystemBase, ListPtr<double> &digits, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(numeralSystemBase, CONST_LIST_DOUBLE(digits), cancelId);
		}
		static double convOthBase2Decimal(double numeralSystemBase, const ArrayPtr<double> &digits);
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(double,double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(double numeralSystemBase, const ArrayPtr<double> &digits, int cancelId);
		static double convOthBase2Decimal(double numeralSystemBase, ArrayPtr<double> &digits) { return convOthBase2Decimal(numeralSystemBase, CONST_ARRAY_DOUBLE(digits)); }
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param numeralSystemBase   Numeral system base has to be above 0.
		 * @param digits              List of digits
		 * @return                    Number after conversion. If conversion is not possible then
		 *                            Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(double,double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(double numeralSystemBase, ArrayPtr<double> &digits, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(numeralSystemBase, CONST_ARRAY_DOUBLE(digits), cancelId);
		}
		static double convOthBase2Decimal(const ArrayPtr<int> &baseAndDigits);
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param baseAndDigits   Numeral system base and digits specification.
		 *                        Numeral system base is placed at index 0, rest of
		 *                        array is interpreted as digits. Numeral system base
		 *                        has to be above 0.
		 * @return                Number after conversion. If conversion is not possible then
		 *                        Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(int[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(const ArrayPtr<int> &baseAndDigits, int cancelId);
		static double convOthBase2Decimal(ArrayPtr<int> &baseAndDigits) { return convOthBase2Decimal(static_cast<const ArrayPtr<int> &>(baseAndDigits)); }
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param baseAndDigits   Numeral system base and digits specification.
		 *                        Numeral system base is placed at index 0, rest of
		 *                        array is interpreted as digits. Numeral system base
		 *                        has to be above 0.
		 * @return                Number after conversion. If conversion is not possible then
		 *                        Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(int[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(ArrayPtr<int> &baseAndDigits, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(static_cast<const ArrayPtr<int> &>(baseAndDigits), cancelId);
		}
		static double convOthBase2Decimal(const ArrayPtr<double> &baseAndDigits);
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param baseAndDigits   Numeral system base and digits specification.
		 *                        Numeral system base is placed at index 0, rest of
		 *                        array is interpreted as digits. Numeral system base
		 *                        has to be above 0.
		 * @return                Number after conversion. If conversion is not possible then
		 *                        Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(const ArrayPtr<double> &baseAndDigits, int cancelId);
		static double convOthBase2Decimal(ArrayPtr<double> &baseAndDigits) { return convOthBase2Decimal(CONST_ARRAY_DOUBLE(baseAndDigits)); }
		/**
		 * Other base to decimal conversion.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param baseAndDigits   Numeral system base and digits specification.
		 *                        Numeral system base is placed at index 0, rest of
		 *                        array is interpreted as digits. Numeral system base
		 *                        has to be above 0.
		 * @return                Number after conversion. If conversion is not possible then
		 *                        Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convOthBase2Decimal(double[])
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double convOthBase2DecimalWithCancel(ArrayPtr<double> &baseAndDigits, int cancelId) {
			if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
				throw std::invalid_argument("cancelId out of range");
			return convOthBase2DecimalWithCancel(CONST_ARRAY_DOUBLE(baseAndDigits), cancelId);
		}
		static StringPtr convDecimal2OthBase(double decimalNumber, int numeralSystemBase);
		/**
		 * Decimal number to other numeral system conversion with base
		 * between 1 and 36.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns the string "NaN".
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
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
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see convDecimal2OthBase(double,int)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static StringPtr formatNumberInBaseWithCancel(double decimalNumber, int numeralSystemBase, int cancelId);
		static StringPtr convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format);

		// ***********************************************************

		static int numberOfDigits(Long number);
		static double numberOfDigits(double number);
		static Long numberOfDigits(Long number, Long numeralSystemBase);
		/**
		 * Number of digits needed to represent given number in numeral system with given base.
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns 0 (the canonical integral cancellation sentinel).
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number              The number
		 * @param numeralSystemBase   Numeral system base above 0
		 * @return                    Returns number of digits. In case when numeralSystemBase is lower than
		 *                            1 then -1 is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see numberOfDigits(long,long)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static Long numberOfDigitsWithCancel(Long number, Long numeralSystemBase, int cancelId);
		static double numberOfDigits(double number, double numeralSystemBase);
		/**
		 * Number of digits needed to represent given number (its integer part) in numeral system with given base.
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number              The number
		 * @param numeralSystemBase   Numeral system base above 0
		 * @return                    Returns number of digits. In case when numeralSystemBase is lower than
		 *                            1 then Double::NaN is returned. If number or numeralSystemBase is Double::NaN
		 *                            then Double::NaN is returned. If numeralSystemBase is infinite then Double::NaN
		 *                            is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see numberOfDigits(double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double numberOfDigitsWithCancel(double number, double numeralSystemBase, int cancelId);

		// ***********************************************************

		static int digitAtPosition(Long number, int position, int numeralSystemBase);
		/**
		 * Digit at position - numeral system with given base
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns 0 (the canonical integral cancellation sentinel).
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number              The number
		 * @param position            Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
		 * @param numeralSystemBase   Base of numeral system - above 0
		 * @return                    Return digit at given position. If digit finding was not possible then -1 is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see digitAtPosition(long,int,int)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static int digitAtPositionWithCancel(Long number, int position, int numeralSystemBase, int cancelId);
		static int digitAtPosition(Long number, int position);
		static double digitAtPosition(double number, double position, double numeralSystemBase);
		/**
		 * Digit at position - numeral system with given base
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double::NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number              The number
		 * @param position            Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
		 * @param numeralSystemBase   Base of numeral system - above 0
		 * @return                    Return digit at given position. If digit finding was not possible then Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see digitAtPosition(double,double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double digitAtPositionWithCancel(double number, double position, double numeralSystemBase, int cancelId);
		static double digitAtPosition(double number, double position);
		/**
		 * Digit at position - numeral system with base 10
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number              The number
		 * @param position            Position from 1 ... n (left to right) or from 0 ... -(n-1) (right to left).
		 * @return                    Return digit at given position. If digit finding was not possible then Double::NaN is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see digitAtPosition(double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double decimalDigitAtPositionWithCancel(double number, double position, int cancelId);

		// ***********************************************************

		static ArrayPtr<Long> primeFactors(Long number);
		/**
		 * Prime decomposition (prime factorization)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns an empty long array.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number     Number to be decomposed
		 * @return           List of prime factors (non-distinct)
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see primeFactors(long)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static ArrayPtr<Long> primeFactorsWithCancel(Long number, int cancelId);
		static ArrayPtr<double> primeFactors(double number);
		/**
		 * Prime decomposition (prime factorization)
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns an empty double array.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number     Number to be decomposed
		 * @return           List of prime factors (non-distinct)
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see primeFactors(double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static ArrayPtr<double> primeFactorsWithCancel(double number, int cancelId);
		static double numberOfPrimeFactors(double number);
		/**
		 * Prime decomposition (prime factorization) - returns number of distinct prime factors
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number     Number to be decomposed
		 * @return           Number of distinct prime factors
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see numberOfPrimeFactors(double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double numberOfPrimeFactorsWithCancel(double number, int cancelId);
		static double primeFactorValue(double number, double id);
		/**
		 * Prime decomposition (prime factorization) - returns prime factor value
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number     Number to be decomposed
		 * @param id         Factor id
		 * @return           Factor value if factor id between 1 and numberOfPrimeFactors, otherwise 1 is returned.
		 *                   For NaN of infinite parameters Double NaN is returned. For number eq 0 Double::NaN
		 *                   is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see primeFactorValue(double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double primeFactorValueWithCancel(double number, double id, int cancelId);
		static double primeFactorExponent(double number, double id);
		/**
		 * Prime decomposition (prime factorization) - returns prime factor exponent
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param number     Number to be decomposed
		 * @param id         Factor id
		 * @return           Factor exponent if factor id between 1 and numberOfPrimeFactors, otherwise 0 is returned.
		 *                   For NaN of infinite parameters Double NaN is returned. For number eq 0 Double::NaN
		 *                   is returned.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see primeFactorExponent(double,double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static double primeFactorExponentWithCancel(double number, double id, int cancelId);

		// ***********************************************************

		static ArrayPtr<double> toFraction(double value);
		/**
		 * Converts double value to its fraction representation.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it breaks the current loop and continues the existing method flow.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * @param value Value to be converted
		 *
		 * @return Array representing fraction. Sign at index 0,
		 * numerator at index 1, denominator at index 2.
		 * If conversion is not possible then Double::NaN is
		 * assigned to all the fields.
		 * @param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * @throws std::invalid_argument if cancelId is outside the supported range
		 * @since 6.2.0
		 * @see toFraction(double)
		 * @see mXparser#cancelCalculation(int)
		 * @see mXparser#resetCalculationCancellation(int)
		 * @see mXparser#acquireCancellationTokenId()
		 * @see mXparser#reserveCancellationTokenId(int)
		 * @see mXparser#releaseCancellationTokenId(int)
		 */
		static ArrayPtr<double> toFractionWithCancel(double value, int cancelId);
		static ArrayPtr<double> toMixedFraction(double value);

		static StringPtr fractionToString(const ArrayPtr<double> &fraction);
		static StringPtr fractionToString(ArrayPtr<double> &fraction) { return fractionToString(CONST_ARRAY_DOUBLE(fraction)); }
		static StringPtr toFractionString(double value);
		static StringPtr toMixedFractionString(double value);

	private:
		/**
		 * Initial search size 1 ... n for the toFraction method
		 * @see NumberTheory#toFraction(double)
		 */
		static inline Long TO_FRACTION_INIT_SEARCH_SIZE = DEFAULT_TO_FRACTION_INIT_SEARCH_SIZE;
		static void sortAscWithCancel(const ArrayPtr<double> &doubleArray, const ArrayPtr<int> &initOrder, int leftIndex, int rightIndex, int cancelId);
		static StringPtr getRegExpForNumeralSystem(int numeralSystemBase);
		static ArrayPtr<double> fractionToDoubleArray(double sign, double numerator, double denominator);
		static ArrayPtr<double> mixedFractionToDoubleArray(double sign, double whole, double numerator, double denominator);
	};

} // namespace org::mariuszgromada::math::mxparser::mathcollection

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_NUMBERTHEORY_H