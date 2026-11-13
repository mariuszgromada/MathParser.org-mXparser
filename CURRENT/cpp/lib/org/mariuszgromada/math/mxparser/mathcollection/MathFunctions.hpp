/*
 * @(#)MathFunctions.hpp        6.2.0    2026-11-13
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_MATHFUNCTIONS_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_MATHFUNCTIONS_H

#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include <stdexcept>

namespace org::mariuszgromada::math::mxparser::mathcollection {
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	class API_VISIBLE MathFunctions {
	public:
		MathFunctions() = delete;

		/**
		 * \brief Addition a + b applying canonical rounding if canonical
		 * rounding is enabled
		 * \param a  The a parameter
		 * \param b  The b parameter
		 * \return The result of addition
		 */
		static double plus(double a, double b);
		/**
		 * \brief Subtraction a - b applying canonical rounding if canonical
		 * rounding is enabled
		 * \param a  The a parameter
		 * \param b  The b parameter
		 * \return The result of subtraction
		 */
		static double minus(double a, double b);
		/**
		 * \brief Multiplication a * b applying canonical rounding if canonical
		 * rounding is enabled
		 * \param a  The a parameter
		 * \param b  The b parameter
		 * \return The result of multiplication
		 */
		static double multiply(double a, double b);
		/**
		 * \brief Division a / b applying canonical rounding if canonical
		 * rounding is enabled
		 * \param a  The a parameter
		 * \param b  The b parameter
		 * \return The result of division
		 */
		static double div(double a, double b);
		/**
		 * \brief Integer division (also called quotient) a / b applying canonical rounding if canonical
		 * rounding is enabled
		 * \param a  The a parameter
		 * \param b  The b parameter
		 * \return The result of integer division
		 */
		static double divQuotient(double a, double b);
		/**
		 * \brief Bell Numbers
		 * \param n                   the n
		 * \return if n &gt;= 0 returns Bell numbers,
		 *             otherwise returns Double.NaN.
		 */
		static double bellNumber(int n);
		/**
		 * \brief Bell Numbers
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param n                   the n
		 * \return if n &gt;= 0 returns Bell numbers,
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::bellNumber(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double bellNumberWithCancel(int n, int cancelId);
		/**
		 * \brief Bell number
		 * \param n                   the n
		 * \return if n is within the int range return bellNumber( (int)Math.round(n) ),
		 *             otherwise return Double.NaN.
		 */
		static double bellNumber(double n);
		/**
		 * \brief Bell number
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param n                   the n
		 * \return if n is within the int range return bellNumber( (int)Math.round(n) ),
		 *             otherwise return Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::bellNumber(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double bellNumberWithCancel(double n, int cancelId);
		/**
		 * \brief Euler numbers
		 * \param n                   the n function param
		 * \param k                   the k function param
		 * \return if n &gt;=0 returns Euler number,
		 *             otherwise return Double.NaN.
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 */
		static double eulerNumber(int n, int k);
		/**
		 * \brief Euler numbers
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
		 * \param n                   the n function param
		 * \param k                   the k function param
		 * \return if n &gt;=0 returns Euler number,
		 *             otherwise return Double.NaN.
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::eulerNumber(int,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double eulerNumberWithCancel(int n, int k, int cancelId);
		/**
		 * \brief Euler numbers
		 * \param n                   the n function param
		 * \param k                   the k function param
		 * \return if n, k &lt;&gt; Double.NaN returns eulerNumber( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise return Double.NaN.
		 */
		static double eulerNumber(double n, double k);
		/**
		 * \brief Euler numbers
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
		 * \param n                   the n function param
		 * \param k                   the k function param
		 * \return if n, k &lt;&gt; Double.NaN returns eulerNumber( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise return Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::eulerNumber(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double eulerNumberWithCancel(double n, double k, int cancelId);
		/**
		 * \brief Factorial
		 * \param n                   the n function parameter
		 * \return Factorial if n &gt;=0, otherwise returns Double.NaN.
		 */
		static double factorial(int n);
		/**
		 * \brief Factorial
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param n                   the n function parameter
		 * \return Factorial if n &gt;=0, otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::factorial(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double factorialWithCancel(int n, int cancelId);
		/**
		 * \brief Factorial
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN return factorial( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 */
		static double factorial(double n);
		/**
		 * \brief Factorial
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
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN return factorial( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::factorial(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double factorialWithCancel(double n, int cancelId);
		/**
		 * \brief Falling factorial polynomial
		 * \param x  Argument
		 * \param n  Polynomial degree
		 * \return Falling factorial polynomial of degree n at point x
		 */
		static double factorialFalling(double x, double n);
		/**
		 * \brief Falling factorial polynomial
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x  Argument
		 * \param n  Polynomial degree
		 * \return Falling factorial polynomial of degree n at point x
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::factorialFalling(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double factorialFallingWithCancel(double x, double n, int cancelId);
		/**
		 * \brief Rising factorial polynomial
		 * \param x  Argument
		 * \param n  Polynomial degree
		 * \return Rising factorial polynomial of degree n at point x
		 */
		static double factorialRising(double x, double n);
		/**
		 * \brief Rising factorial polynomial
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x  Argument
		 * \param n  Polynomial degree
		 * \return Rising factorial polynomial of degree n at point x
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::factorialRising(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double factorialRisingWithCancel(double x, double n, int cancelId);
		/**
		 * \brief Generalized binomial coefficient
		 * \param n                   the n function parameter
		 * \param k    k                   the k function parameter
		 * \return Generalized binomial coefficient, if
		 *             n = Double.NaN or k &lt; 0 returns Double.NaN.
		 */
		static double binomCoeff(double n, Long k);
		/**
		 * \brief Generalized binomial coefficient
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param n                   the n function parameter
		 * \param k    k                   the k function parameter
		 * \return Generalized binomial coefficient, if
		 *             n = Double.NaN or k &lt; 0 returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::binomCoeff(double,Long)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double binomCoeffWithCancel(double n, Long k, int cancelId);
		/**
		 * \brief Generalized binomial coefficient
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n, k &lt;&gt; Double.NaN returns binomCoeff(n, (int)Math.round(k) ),
		 *             otherwise returns Double.NaN.
		 */
		static double binomCoeff(double n, double k);
		/**
		 * \brief Generalized binomial coefficient
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
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n, k &lt;&gt; Double.NaN returns binomCoeff(n, (int)Math.round(k) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::binomCoeff(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double binomCoeffWithCancel(double n, double k, int cancelId);
		/**
		 * \brief Generalized coefficient returning number of k permutations
		 * that can be drawn for n elements set.
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return For k greater than 0 return number of permutations, otherwise
		 *           returns Double.NaN
		 */
		static double numberOfPermutations(double n, Long k);
		/**
		 * \brief Generalized coefficient returning number of k permutations
		 * that can be drawn for n elements set.
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return For k greater than 0 return number of permutations, otherwise
		 *           returns Double.NaN
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::numberOfPermutations(double,Long)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double numberOfPermutationsWithCancel(double n, Long k, int cancelId);
		/**
		 * \brief Generalized coefficient returning number of k permutations
		 * that can be drawn for n elements set.
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return For k greater than 0 return number of permutations, otherwise
		 *           returns Double.NaN
		 */
		static double numberOfPermutations(double n, double k);
		/**
		 * \brief Generalized coefficient returning number of k permutations
		 * that can be drawn for n elements set.
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
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return For k greater than 0 return number of permutations, otherwise
		 *           returns Double.NaN
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::numberOfPermutations(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double numberOfPermutationsWithCancel(double n, double k, int cancelId);
		/**
		 * \brief Bernoulli numbers
		 * \param m                   the m function parameter
		 * \param n                   the n function parameter
		 * \return if n, m &gt;= 0 returns Bernoulli number,
		 *             otherwise returns Double.NaN.
		 */
		static double bernoulliNumber(int m, int n);
		/**
		 * \brief Bernoulli numbers
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param m                   the m function parameter
		 * \param n                   the n function parameter
		 * \return if n, m &gt;= 0 returns Bernoulli number,
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::bernoulliNumber(int,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double bernoulliNumberWithCancel(int m, int n, int cancelId);
		/**
		 * \brief Bernoulli numbers
		 * \param m                   the m function parameter
		 * \param n                   the n function parameter
		 * \return if n, m &lt;&gt; Double.NaN returns bernoulliNumber( (int)Math.round(m), (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 */
		static double bernoulliNumber(double m, double n);
		/**
		 * \brief Bernoulli numbers
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
		 * \param m                   the m function parameter
		 * \param n                   the n function parameter
		 * \return if n, m &lt;&gt; Double.NaN returns bernoulliNumber( (int)Math.round(m), (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::bernoulliNumber(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double bernoulliNumberWithCancel(double m, double n, int cancelId);
		/**
		 * \brief Stirling numbers of the first kind
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return Stirling numbers of the first kind
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 */
		static double Stirling1Number(int n, int k);
		/**
		 * \brief Stirling numbers of the first kind
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
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return Stirling numbers of the first kind
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::Stirling1Number(int,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double Stirling1NumberWithCancel(int n, int k, int cancelId);
		/**
		 * \brief Stirling numbers of the first kind
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n, k &lt;&gt; Doube.NaN returns Stirling1Number( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise returns Double.NaN.
		 */
		static double Stirling1Number(double n, double k);
		/**
		 * \brief Stirling numbers of the first kind
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
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n, k &lt;&gt; Doube.NaN returns Stirling1Number( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::Stirling1Number(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double Stirling1NumberWithCancel(double n, double k, int cancelId);
		/**
		 * \brief Stirling numbers of the second kind
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return Stirling numbers of the second kind
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 */
		static double Stirling2Number(int n, int k);
		/**
		 * \brief Stirling numbers of the second kind
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
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return Stirling numbers of the second kind
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::Stirling2Number(int,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double Stirling2NumberWithCancel(int n, int k, int cancelId);
		/**
		 * \brief Stirling numbers of the second kind
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n, k &lt;&gt; Doube.NaN returns Stirling2Number( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise returns Double.NaN.
		 */
		static double Stirling2Number(double n, double k);
		/**
		 * \brief Stirling numbers of the second kind
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
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n, k &lt;&gt; Doube.NaN returns Stirling2Number( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::Stirling2Number(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double Stirling2NumberWithCancel(double n, double k, int cancelId);
		/**
		 * \brief Worpitzky numbers
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n,k &gt;= 0 and k &lt;= n return Worpitzky number,
		 *             otherwise return Double.NaN.
		 */
		static double worpitzkyNumber(int n, int k);
		/**
		 * \brief Worpitzky numbers
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n,k &gt;= 0 and k &lt;= n return Worpitzky number,
		 *             otherwise return Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::worpitzkyNumber(int,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double worpitzkyNumberWithCancel(int n, int k, int cancelId);
		/**
		 * \brief Worpitzky numbers
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n,k &lt;&gt; Double.NaN returns worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise return Double.NaN.
		 */
		static double worpitzkyNumber(double n, double k);
		/**
		 * \brief Worpitzky numbers
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
		 * \param n                   the n function parameter
		 * \param k                   the k function parameter
		 * \return if n,k &lt;&gt; Double.NaN returns worpitzkyNumber( (int)Math.round(n), (int)Math.round(k) ),
		 *             otherwise return Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::worpitzkyNumber(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double worpitzkyNumberWithCancel(double n, double k, int cancelId);
		/**
		 * \brief Harmonic numer
		 * \param n                   the n function parameter
		 * \return if n &gt; 0 returns harmonic number, otherwise returns 0
		 *             (empty summation operator)
		 */
		static double harmonicNumber(int n);
		/**
		 * \brief Harmonic numer
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param n                   the n function parameter
		 * \return if n &gt; 0 returns harmonic number, otherwise returns 0
		 *             (empty summation operator)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::harmonicNumber(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double ordinaryHarmonicNumberWithCancel(int n, int cancelId);
		/**
		 * \brief Harmonic number
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN returns harmonicNumber( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN
		 */
		static double harmonicNumber(double n);
		/**
		 * \brief Harmonic number
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
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN returns harmonicNumber( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::harmonicNumber(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double ordinaryHarmonicNumberWithCancel(double n, int cancelId);
		/**
		 * \brief Harmonic number 1/1 + 1/2^x + ... + 1/n^x
		 * \param x                   the x function parameter
		 * \param n                   the n function parameter
		 * \return if x &lt;&gt; Double.NaN and x &gt;= 0 Harmonic number,
		 *             otherwise returns Double.NaN.
		 */
		static double harmonicNumber(double x, int n);
		/**
		 * \brief Harmonic number 1/1 + 1/2^x + ... + 1/n^x
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x                   the x function parameter
		 * \param n                   the n function parameter
		 * \return if x &lt;&gt; Double.NaN and x &gt;= 0 Harmonic number,
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::harmonicNumber(double,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double generalizedHarmonicNumberWithCancel(double x, int n, int cancelId);
		/**
		 * \brief Harmonic number 1/1 + 1/2^x + ... + 1/n^x
		 * \param x                   the x function parameter
		 * \param n                   the n function parameter
		 * \return if x,n &lt;&gt; Double.NaN returns harmonicNumber( x, (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 */
		static double harmonicNumber(double x, double n);
		/**
		 * \brief Harmonic number 1/1 + 1/2^x + ... + 1/n^x
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
		 * \param x                   the x function parameter
		 * \param n                   the n function parameter
		 * \return if x,n &lt;&gt; Double.NaN returns harmonicNumber( x, (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::harmonicNumber(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double generalizedHarmonicNumberWithCancel(double x, double n, int cancelId);
		/**
		 * \brief Catalan numbers
		 * \param n                   the n function parameter
		 * \return Catalan numbers
		 */
		static double catalanNumber(int n);
		/**
		 * \brief Catalan numbers
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN returns catalanNumber( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 */
		static double catalanNumber(double n);
		/**
		 * \brief Fibonacci numbers
		 * \param n                   the n function parameter
		 * \return if n &gt;= 0 returns fibonacci numbers,
		 *             otherwise returns Double.NaN.
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 */
		static double fibonacciNumber(int n);
		/**
		 * \brief Fibonacci numbers
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
		 * \param n                   the n function parameter
		 * \return if n &gt;= 0 returns fibonacci numbers,
		 *             otherwise returns Double.NaN.
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::fibonacciNumber(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double fibonacciNumberWithCancel(int n, int cancelId);
		/**
		 * \brief Fibonacci numbers
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN returns fibonacciNumber( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 */
		static double fibonacciNumber(double n);
		/**
		 * \brief Fibonacci numbers
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
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN returns fibonacciNumber( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::fibonacciNumber(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double fibonacciNumberWithCancel(double n, int cancelId);
		/**
		 * \brief Lucas numebrs
		 * \param n                   the n function parameter
		 * \return if n &gt;= 0 returns Lucas numbers,
		 *             otherwise returns Double.NaN.
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 */
		static double lucasNumber(int n);
		/**
		 * \brief Lucas numebrs
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
		 * \param n                   the n function parameter
		 * \return if n &gt;= 0 returns Lucas numbers,
		 *             otherwise returns Double.NaN.
		 *             Returns also Double.NaN when MAX RECURSION CALLS
		 *             is exceeded.
		 * \sa org::mariuszgromada::math::mxparser::mXparser::getMaxAllowedRecursionDepth()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::setMaxAllowedRecursionDepth(int)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::lucasNumber(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double lucasNumberWithCancel(int n, int cancelId);
		/**
		 * \brief Lucas numebrs
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN returns lucasNumber( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 */
		static double lucasNumber(double n);
		/**
		 * \brief Lucas numebrs
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
		 * \param n                   the n function parameter
		 * \return if n &lt;&gt; Double.NaN returns lucasNumber( (int)Math.round(n) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::lucasNumber(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double lucasNumberWithCancel(double n, int cancelId);
		/**
		 * \brief Kronecker delta
		 * \param i                   the i function parameter
		 * \param j                   the j function parameter
		 * \return if i,j &lt;&gt; Double.NaN returns Kronecker delta,
		 *             otherwise returns Double.NaN.
		 */
		static double kroneckerDelta(double i, double j);
		/**
		 * \brief Kronecker delta
		 * \param i                   the i function parameter
		 * \param j                   the j function parameter
		 * \return Kronecker delta
		 */
		static double kroneckerDelta(int i, int j);
		/**
		 * \brief Continued fraction
		 * \param sequence            the numbers
		 * \return if each number form the sequence &lt;&gt; Double.NaN and
		 *             there is no division by 0 while computing returns continued fraction
		 *             value, otherwise returns Double.NaN.
		 */
		static double continuedFraction(const ArrayPtr<double> &sequence);
		/**
		 * \brief Continued fraction
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param sequence            the numbers
		 * \return if each number form the sequence &lt;&gt; Double.NaN and
		 *             there is no division by 0 while computing returns continued fraction
		 *             value, otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::continuedFraction(const ArrayPtr< double > &)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double continuedFractionWithCancel(const ArrayPtr<double> &sequence, int cancelId);
		/**
		 * \brief Continued polynomial
		 * \param x         the x values
		 * \return if each number for x is different the Double.NaN
		 *             returns continued polynomial, otherwise returns
		 *             Double.NaN.
		 */
		static double continuedPolynomial(const ArrayPtr<double> &x);
		/**
		 * \brief Continued polynomial
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x         the x values
		 * \return if each number for x is different the Double.NaN
		 *             returns continued polynomial, otherwise returns
		 *             Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::continuedPolynomial(const ArrayPtr< double > &)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double continuedPolynomialWithCancel(const ArrayPtr<double> &x, int cancelId);
		/**
		 * \brief Euler polynomial
		 * \param m                   the m parameter
		 * \param x                   the x parameter
		 * \return if x &lt;&gt; Double.NaN and m &gt;= 0 returns polynomial value,
		 *             otherwise returns Double.NaN.
		 */
		static double eulerPolynomial(int m, double x);
		/**
		 * \brief Euler polynomial
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param m                   the m parameter
		 * \param x                   the x parameter
		 * \return if x &lt;&gt; Double.NaN and m &gt;= 0 returns polynomial value,
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::eulerPolynomial(int,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double eulerPolynomialWithCancel(int m, double x, int cancelId);
		/**
		 * \brief Euler polynomial
		 * \param m                   the m parameter
		 * \param x                   the x parameter
		 * \return if x,m &lt;&gt; Double.NaN returns eulerPolynomial( (int)Math.round(m), (int)Math.round(x) ),
		 *             otherwise returns Double.NaN.
		 */
		static double eulerPolynomial(double m, double x);
		/**
		 * \brief Euler polynomial
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
		 * \param m                   the m parameter
		 * \param x                   the x parameter
		 * \return if x,m &lt;&gt; Double.NaN returns eulerPolynomial( (int)Math.round(m), (int)Math.round(x) ),
		 *             otherwise returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::eulerPolynomial(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double eulerPolynomialWithCancel(double m, double x, int cancelId);
		/**
		 * \brief Characteristic function x in (a,b)
		 * \param x                   the x value
		 * \param a                   the left (lower) limit
		 * \param b                   the right (upper) limit
		 * \return if x, a, b &lt;&gt; Double.NaN returns
		 * 			   characteristic function value on the (a,b) range.
		 */
		static double chi(double x, double a, double b);
		/**
		 * \brief Characteristic function x in [a,b]
		 * \param x                   the x value
		 * \param a                   the left (lower) limit
		 * \param b                   the right (upper) limit
		 * \return if x, a, b &lt;&gt; Double.NaN returns
		 * 			   characteristic function value on the [a,b] range.
		 */
		static double chi_LR(double x, double a, double b);
		/**
		 * \brief Characteristic function x in [a,b)
		 * \param x                   the x value
		 * \param a                   the left (lower) limit
		 * \param b                   the right (upper) limit
		 * \return if x, a, b &lt;&gt; Double.NaN returns
		 * 			   characteristic function value on the [a,b) range.
		 */
		static double chi_L(double x, double a, double b);
		/**
		 * \brief Characteristic function x in (a,b]
		 * \param x                   the x value
		 * \param a                   the left (lower) limit
		 * \param b                   the right (upper) limit
		 * \return if x, a, b &lt;&gt; Double.NaN returns
		 * 			   characteristic function value on the (a,b] range.
		 */
		static double chi_R(double x, double a, double b);
		/**
		 * \brief Verifies whether provided number is almost integer
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations::DEFAULT_COMPARISON_EPSILON
		 * \param a  The number to be verified
		 * \return True if the number is almost integer according to the default epsilon,
		 *           otherwise returns false.
		 */
		static bool isAlmostInt(double a);
		/**
		 * \brief Power function a^b
		 * \param a                   the a function parameter
		 * \param b                   the b function parameter
		 * \return if a,b &lt;&gt; Double.NaN returns Math.pow(a, b),
		 *             otherwise returns Double.NaN.
		 */
		static double power(double a, double b);
		/**
		 * \brief Nth order root of a number
		 * \param n   Root order
		 * \param x   Number
		 * \return Returns root of a number. If calculation is not possible Double.NaN is returned.
		 */
		static double root(double n, double x);
		/**
		 * \brief Tetration, exponential power, power series
		 * \param a   base
		 * \param n   exponent
		 * \return Tetration result.
		 */
		static double tetration(double a, double n);
		/**
		 * \brief Tetration, exponential power, power series
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param a   base
		 * \param n   exponent
		 * \return Tetration result.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::tetration(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double tetrationWithCancel(double a, double n, int cancelId);
		/**
		 * \brief Modulo operator a % b
		 * \param a                   the a function parameter
		 * \param b                   the b function parameter
		 * \return if a,b &lt;&gt; Double.NaN returns a % b.
		 */
		static double mod(double a, double b);
		/**
		 * \brief Sine trigonometric function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN return Math.sin(a),
		 *             otherwise return Double.NaN.
		 */
		static double sin(double a);
		/**
		 * \brief Cosine trigonometric function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.cos(a),
		 *             otherwise returns Double.NaN.
		 */
		static double cos(double a);
		/**
		 * \brief Tangent trigonometric function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.tan(a),
		 *             otherwise returns Double.NaN.
		 */
		static double tan(double a);
		/**
		 * \brief Cotangent trigonometric function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and tan(a) &lt;&gt; 0 returns 1 / Math.tan(a),
		 *             otherwise returns Double.NaN.
		 */
		static double ctan(double a);
		/**
		 * \brief Secant trigonometric function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and cos(a) &lt;&gt; 0 returns 1 / Math.cos(a),
		 *             otherwise returns Double.NaN.
		 */
		static double sec(double a);
		/**
		 * \brief Cosecant trigonometric function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and sin(a) &lt;&gt; 0 returns 1 / Math.sin(a),
		 *             otherwise returns Double.NaN.
		 */
		static double cosec(double a);
		/**
		 * \brief Arcus sine - inverse trigonometric sine function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.asin(a),
		 *             otherwise returns Double.NaN.
		 */
		static double asin(double a);
		/**
		 * \brief Arcus cosine - inverse trigonometric cosine function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.acos(a),
		 *             otherwise returns Double.NaN.
		 */
		static double acos(double a);
		/**
		 * \brief Arcus tangent - inverse trigonometric tangent function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.atan(a),
		 *             otherwise returns Double.NaN.
		 */
		static double atan(double a);
		/**
		 * \brief Arcus cotangent - inverse trigonometric cotangent function
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.atan(1/a),
		 *             otherwise returns Double.NaN.
		 */
		static double actan(double a);
		/**
		 * \brief Arcus secant - inverse trigonometric secant function
		 * \param a                   the a function parameter
		 * \return Inverse trigonometric secant function
		 */
		static double asec(double a);
		/**
		 * \brief Arcus cosecant - inverse trigonometric cosecant function
		 * \param a                   the a function parameter
		 * \return Inverse trigonometric cosecant function
		 */
		static double acosec(double a);
		/**
		 * \brief Natural logarithm
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.log(1/a),
		 *             otherwise returns Double.NaN.
		 */
		static double ln(double a);
		/**
		 * \brief Binary logarithm
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.log(a)/Math.log(2.0),
		 *             otherwise returns Double.NaN.
		 */
		static double log2(double a);
		/**
		 * \brief Common logarithm
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.log10(a),
		 *             otherwise returns Double.NaN.
		 */
		static double log10(double a);
		/**
		 * \brief Degrees to radius translation.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.toRadians(a),
		 *             otherwise returns Double.NaN.
		 */
		static double rad(double a);
		/**
		 * \brief Exponential function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.exp(a),
		 *             otherwise returns Double.NaN.
		 */
		static double exp(double a);
		/**
		 * \brief Square root.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.sqrt(a),
		 *             otherwise returns Double.NaN.
		 */
		static double sqrt(double a);
		/**
		 * \brief Hyperbolic sine function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.sinh(a),
		 *             otherwise returns Double.NaN.
		 */
		static double sinh(double a);
		/**
		 * \brief Hyperbolic cosine function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.cosh(a),
		 *             otherwise returns Double.NaN.
		 */
		static double cosh(double a);
		/**
		 * \brief Hyperbolic tangent function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.tanh(a),
		 *             otherwise returns Double.NaN.
		 */
		static double tanh(double a);
		/**
		 * \brief Hyperbolic cotangent function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and tanh(a) &lt;&gt; 0 returns 1 / Math.tanh(a),
		 *             otherwise returns Double.NaN.
		 */
		static double coth(double a);
		/**
		 * \brief Hyperbolic secant function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and cosh(a) &lt;&gt; 0 returns 1 / Math.cosh(a),
		 *             otherwise returns Double.NaN.
		 */
		static double sech(double a);
		/**
		 * \brief Hyperbolic cosecant function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and sinh(a) &lt;&gt; 0 returns 1 / Math.sinh(a),
		 *             otherwise returns Double.NaN.
		 */
		static double csch(double a);
		/**
		 * \brief Radius to degrees translation.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.toDegrees(a),
		 *             otherwise returns Double.NaN.
		 */
		static double deg(double a);
		/**
		 * \brief Absolute value.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.abs(a),
		 *             otherwise returns Double.NaN.
		 */
		static double abs(double a);
		/**
		 * \brief Signum function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.signum(a),
		 *             otherwise returns Double.NaN.
		 */
		static double sgn(double a);
		/**
		 * \brief Floor function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.floor(a),
		 *             otherwise returns Double.NaN.
		 */
		static double floor(double a);
		/**
		 * \brief Ceiling function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.ceil(a),
		 *             otherwise returns Double.NaN.
		 */
		static double ceil(double a);
		/**
		 * \brief Arcus hyperbolic sine - inverse hyperbolic sine function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.log(a + Math.sqrt(a*a+1)),
		 *             otherwise returns Double.NaN.
		 */
		static double arsinh(double a);
		/**
		 * \brief Arcus hyperbolic cosine - inverse hyperbolic cosine function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN returns Math.log(a + Math.sqrt(a*a-1)),
		 *             otherwise returns Double.NaN.
		 */
		static double arcosh(double a);
		/**
		 * \brief Arcus hyperbolic tangent - inverse hyperbolic tangent function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and 1-a &lt;&gt; 0 returns 0.5*Math.log( (1+a)/(1-a) ),
		 *             otherwise returns Double.NaN.
		 */
		static double artanh(double a);
		/**
		 * \brief Arcus hyperbolic tangent - inverse hyperbolic tangent function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and a-1 &lt;&gt; 0 returns 0.5*Math.log( (a+1)/(a-1) );,
		 *             otherwise returns Double.NaN.
		 */
		static double arcoth(double a);
		/**
		 * \brief Arcus hyperbolic secant - inverse hyperbolic secant function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
		 *             otherwise returns Double.NaN.
		 */
		static double arsech(double a);
		/**
		 * \brief Arcus hyperbolic cosecant - inverse hyperbolic cosecant function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.log( (1+Math.sqrt(1-a*a))/a);,
		 *             otherwise returns Double.NaN.
		 */
		static double arcsch(double a);
		/**
		 * \brief Normalized sinc function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.sin(PI*a) / (PI*a);,
		 *             otherwise returns Double.NaN.
		 */
		static double sa(double a);
		/**
		 * \brief Sinc function.
		 * \param a                   the a function parameter
		 * \return if a &lt;&gt; Double.NaN and a &lt;&gt; 0 returns Math.sin(a) / (a),
		 *             otherwise returns Double.NaN.
		 */
		static double sinc(double a);
		/**
		 * \brief General logarithm.
		 * \param a                   the a function parameter (base)
		 * \param b                   the b function parameter (number)
		 * \return if a,b &lt;&gt; Double.NaN and log(b) &lt;&gt; 0 returns Math.log(a) / Math.log(b),
		 *             otherwise returns Double.NaN.
		 */
		static double log(double a, double b);
		/**
		 * \brief Double rounding
		 * \param value    double value to be rounded
		 * \param places   decimal places
		 * \return Rounded value
		 */
		static double round(double value, int places);
		/**
		 * \brief Double rounding
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
		 * \param value    double value to be rounded
		 * \param places   decimal places
		 * \return Rounded value
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::round(double,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double roundWithCancel(double value, int places, int cancelId);
		static double truncate(double value, int places);
		/**
		 * \brief Double half up rounding
		 * \param value    double value to be rounded
		 * \param places   decimal places
		 * \return Rounded value
		 */
		static double roundHalfUp(double value, int places);
		/**
		 * \brief Double half up rounding
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param value    double value to be rounded
		 * \param places   decimal places
		 * \return Rounded value
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::roundHalfUp(double,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double roundHalfUpWithCancel(double value, int places, int cancelId);
		/**
		 * \brief Double down rounding
		 * \param value    double value to be rounded
		 * \param places   decimal places
		 * \return Rounded value
		 */
		static double roundDown(double value, int places);
		/**
		 * \brief Double down rounding
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param value    double value to be rounded
		 * \param places   decimal places
		 * \return Rounded value
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::roundDown(double,int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double roundDownWithCancel(double value, int places, int cancelId);
		/**
		 * \brief Unit in the last place rounding, see
		 * 0.1 + 0.1 + 0.1 vs roundUlp(0.1 + 0.1 + 0.1)
		 * \param number   Double number that is to be rounded
		 * \return Double number with rounded ulp
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::decimalDigitsBefore(double)
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::ulp(double)
		 */
		static double roundUlp(double number);
		/**
		 * \brief Returns integer part of a double value.
		 * \param x  Number
		 * \return For non-negative x returns Math.floor(x),
		 *         otherwise returns -Math.floor(-x)
		 */
		static double integerPart(double x);
		/**
		 * \brief For very small number returns the position of
		 * first significant digit, ie 0.1 = 1, 0.01 = 2
		 * \param value Double value, small one.
		 * \return Number of digits, number of places.
		 */
		static int decimalDigitsBefore(double value);
		/**
		 * \brief Unit in the last place(ULP) for double
		 * \param value Double number
		 * \return ULP for a given double.
		 */
		static double ulp(double value);
		/**
		 * \brief Unit in The Last Place - number of decimal digits before
		 * \param value   Double number
		 * \return Positive number of digits N for ulp = 1e-{N+1},
		 *                if ulp is &gt; 1 then -1 is returned.
		 *                Returned proper value is always between -1 and +322.
		 *                If value is NaN then -2 is returned.
		 */
		static int ulpDecimalDigitsBefore(double value);
		/**
		 * \brief Length of a number represented in a standard decimal format
		 * \param value   A given number
		 * \return Length of a number represented in a standard decimal format
		 *                including decimal separator, excluding leading zeros (integer part),
		 *                excluding trailing zeros (fractional part)
		 */
		static int decimalNumberLength(double value);
		/**
		 * \brief Fractional part length of a number represented in a standard decimal format
		 * \param value   A given number
		 * \return Fractional part length of a number represented in a standard decimal
		 *                format excluding decimal separator, excluding trailing zeros (fractional part)
		 */
		static int fractionalPartLength(double value);
		/**
		 * \brief Intelligent rounding of a number within the decimal position of the ULP (Unit in the Last Place),
		 * provided that the result is significantly shortened in the standard decimal notation. Examples:
		 * 30.499999999999992 is rounded to 30.5, but 30.499999999999122 will not be rounded. Rounding is
		 * made to the decimal position of the ULP minus 2 on condition that the resulted number is shortened
		 * by at least 9 places.
		 * \param value   A given number
		 * \return Returns an intelligently rounded number when the decimal position of ULP
		 *                is a minimum of 11 and when rounded to the position of ULP - 2, shortens
		 *                the number by a minimum of 9 places. Otherwise, returns original number.
		 */
		static double lengthRound(double value);
		/**
		 * \brief Intelligent rounding of a number within the decimal position of the ULP (Unit in the Last Place),
		 * provided that the result is significantly shortened in the standard decimal notation. Examples:
		 * 30.499999999999992 is rounded to 30.5, but 30.499999999999122 will not be rounded. Rounding is
		 * made to the decimal position of the ULP minus 2 on condition that the resulted number is shortened
		 * by at least 9 places.
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param value   A given number
		 * \return Returns an intelligently rounded number when the decimal position of ULP
		 *                is a minimum of 11 and when rounded to the position of ULP - 2, shortens
		 *                the number by a minimum of 9 places. Otherwise, returns original number.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::lengthRound(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double lengthRoundWithCancel(double value, int cancelId);
		/**
		 * \brief Returns the first non-NaN value
		 * \param values   List of values
		 * \return Returns the first non-NaN value, if list is null
		 *                 then returns Double.NaN, if list contains no elements
		 *                 then returns Double.NaN.
		 */
		static double coalesce(const ArrayPtr<double> &values);
		/**
		 * \brief Returns the first non-NaN value
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * At this method's existing cancellation checks it returns Double.NaN.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param values   List of values
		 * \return Returns the first non-NaN value, if list is null
		 *                 then returns Double.NaN, if list contains no elements
		 *                 then returns Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::coalesce(const ArrayPtr< double > &)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double coalesceWithCancel(const ArrayPtr<double> &values, int cancelId);
		/**
		 * \brief Check whether double value is almost integer.
		 * \param x   Number
		 * \return True if double value is almost integer, otherwise false.
		 *         \ref org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations::DEFAULT_COMPARISON_EPSILON
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations::DEFAULT_COMPARISON_EPSILON
		 */
		static bool isInteger(double x);
		/**
		 * \brief Check whether two double values are almost equal.
		 * \param a   First number
		 * \param b   Second number
		 * \return True if double values are almost equal, otherwise false.
		 *         \ref org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations::DEFAULT_COMPARISON_EPSILON
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::BinaryRelations::DEFAULT_COMPARISON_EPSILON
		 */
		static bool almostEqual(double a, double b);
		/**
		 * \brief Calculates function f(x0) (given as expression) assigning Argument x = x0;
		 * \param f                   the expression
		 * \param x                   the argument
		 * \param x0                  the argument value
		 * \return f.calculate()
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 */
		static double getFunctionValue(const ExpressionPtr &f, const ArgumentPtr &x, double x0);
		/**
		 * \brief Calculates function f(x0) (given as expression) assigning Argument x = x0;
		 *
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
		 * \param f                   the expression
		 * \param x                   the argument
		 * \param x0                  the argument value
		 * \return the result of f.calculateWithCancel(cancelId) after setting x to x0
		 * \sa org::mariuszgromada::math::mxparser::Expression
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::getFunctionValue
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double getFunctionValueWithCancel(const ExpressionPtr &f, const ArgumentPtr &x, double x0, int cancelId);
		/**
		 * \brief Returns array of double values of the function f(i)
		 * calculated on the range: i = from to i = to by step = delta
		 * \param f            Function expression
		 * \param index        Index argument
		 * \param from         'from' value
		 * \param to           'to' value
		 * \param delta        'delta' step definition
		 * \return Array of function values
		 */
		static ArrayPtr<double> getFunctionValues(const ExpressionPtr &f, const ArgumentPtr &index, double from,
		                                          double to, double delta);
		/**
		 * \brief Returns array of double values of the function f(i)
		 * calculated on the range: i = from to i = to by step = delta
		 *
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * Array parameters are fixed arrays, not token-bearing varargs.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param f            Function expression
		 * \param index        Index argument
		 * \param from         'from' value
		 * \param to           'to' value
		 * \param delta        'delta' step definition
		 * \return Array of function values
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::MathFunctions::getFunctionValues
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static ArrayPtr<double> getFunctionValuesWithCancel(const ExpressionPtr &f, const ArgumentPtr &index, double from,
		                                          double to, double delta, int cancelId);

	private:
		static int MAX_RECURSION_CALLS;
		static void refreshMaxAllowedRecursionDepth();
		static double eulerNumberWithCancel(int n, int k, int recursionCall, int cancelId);
		static double Stirling1NumberWithCancel(int n, int k, int recursionCall, int cancelId);
		static double Stirling2NumberWithCancel(int n, int k, int recursionCall, int cancelId);
		static double fibonacciNumberWithCancel(int n, int recursionCall, int cancelId);
		static double lucasNumberWithCancel(int n, int recursionCall, int cancelId);
		static double continuedPolynomialWithCancel(int n, const ArrayPtr<double> &x, int cancelId);
		static double powInt(double a, int n);
		static double intIfAlmostIntOtherwiseOrig(double val);

	public:
		STATIC_VARS_INITI_H;

	};
} // namespace org::mariuszgromada::math::mxparser::mathcollection

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_MATHFUNCTIONS_H