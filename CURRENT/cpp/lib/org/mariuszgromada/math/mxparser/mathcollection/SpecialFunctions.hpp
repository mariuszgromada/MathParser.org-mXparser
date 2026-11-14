/*
 * @(#)SpecialFunctions.hpp        6.2.0    2026-11-13
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_SPECIALFUNCTIONS_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_SPECIALFUNCTIONS_H

#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include <stdexcept>

namespace org::mariuszgromada::math::mxparser::mathcollection {

	class API_VISIBLE SpecialFunctions {
	public:
		SpecialFunctions() = delete;

		// ***********************************************************

		/**
		 * \brief Exponential integral function Ei(x)
		 * \param x    Point at which function will be evaluated.
		 * \return Exponential integral function Ei(x)
		 */
		static double exponentialIntegralEi(double x);
		/**
		 * \brief Exponential integral function Ei(x)
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x    Point at which function will be evaluated.
		 * \return Exponential integral function Ei(x)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::exponentialIntegralEi(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double exponentialIntegralEiWithCancel(double x, int cancelId);
		/**
		 * \brief Logarithmic integral function li(x)
		 * \param x   Point at which function will be evaluated.
		 * \return Logarithmic integral function li(x)
		 */
		static double logarithmicIntegralLi(double x);
		/**
		 * \brief Logarithmic integral function li(x)
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x   Point at which function will be evaluated.
		 * \return Logarithmic integral function li(x)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::logarithmicIntegralLi(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double logarithmicIntegralLiWithCancel(double x, int cancelId);
		/**
		 * \brief Offset logarithmic integral function Li(x)
		 * \param x   Point at which function will be evaluated.
		 * \return Offset logarithmic integral function Li(x)
		 */
		static double offsetLogarithmicIntegralLi(double x);
		/**
		 * \brief Offset logarithmic integral function Li(x)
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x   Point at which function will be evaluated.
		 * \return Offset logarithmic integral function Li(x)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::offsetLogarithmicIntegralLi(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double offsetLogarithmicIntegralLiWithCancel(double x, int cancelId);

		// ***********************************************************

		/**
		 * \brief Calculates the error function
		 * \param x   Point at which function will be evaluated.
		 * \return Error function erf(x)
		 */
		static double erf(double x);
		/**
		 * \brief Calculates the complementary error function.
		 * \param x   Point at which function will be evaluated.
		 * \return Complementary error function erfc(x)
		 */
		static double erfc(double x);
		/**
		 * \brief Calculates the inverse error function evaluated at x.
		 * \param x   Point at which function will be evaluated.
		 * \return Inverse error function erfInv(x)
		 */
		static double erfInv(double x);
		/**
		 * \brief Calculates the complementary inverse error function evaluated at x.
		 * \param z   Point at which function will be evaluated.
		 * \return Inverse of complementary inverse error function erfcInv(x)
		 */
		static double erfcInv(double z);

		// ***********************************************************

		/**
		 * \brief Real valued Gamma function
		 * \param x   Argument value
		 * \return Returns gamma function value.
		 */
		static double gamma(double x);
		/**
		 * \brief Real valued Gamma function
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
		 * \param x   Argument value
		 * \return Returns gamma function value.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::gamma(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double gammaWithCancel(double x, int cancelId);
		/**
		 * \brief Gamma function implementation based on
		 * Lanchos approximation algorithm
		 * \param x    Function parameter
		 * \return Gamma function value (Lanchos approx).
		 */
		static double lanchosGamma(double x);
		/**
		 * \brief Gamma function implementation based on
		 * Lanchos approximation algorithm
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
		 * \param x    Function parameter
		 * \return Gamma function value (Lanchos approx).
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::lanchosGamma(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double lanchosGammaWithCancel(double x, int cancelId);
		/**
		 * \brief Real valued log gamma function.
		 * \param x  Argument value
		 * \return Returns log value from gamma function.
		 */
		static double logGamma(double x);
		/**
		 * \brief Real valued log gamma function.
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x  Argument value
		 * \return Returns log value from gamma function.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::logGamma(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double logGammaWithCancel(double x, int cancelId);
		/**
		 * \brief Signum from the real valued gamma function.
		 * \param x Argument value
		 * \return Returns signum of the gamma(x)
		 */
		static double sgnGamma(double x);
		/**
		 * \brief Signum from the real valued gamma function.
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x Argument value
		 * \return Returns signum of the gamma(x)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::sgnGamma(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double sgnGammaWithCancel(double x, int cancelId);
		/**
		 * \brief Regularized lower gamma function 'P'
		 * \param s  Argument value
		 * \param x  Argument value
		 * \return Value of the regularized lower gamma function 'P'.
		 */
		static double regularizedGammaLowerP(double s, double x);
		/**
		 * \brief Regularized lower gamma function 'P'
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
		 * \param s  Argument value
		 * \param x  Argument value
		 * \return Value of the regularized lower gamma function 'P'.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::regularizedGammaLowerP(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double regularizedGammaLowerPWithCancel(double s, double x, int cancelId);
		/**
		 * \brief Inverse of regularized lower gamma function 'P'
		 * \param a  Argument value
		 * \param p  Argument value
		 * \return Value of the inverse regularized lower gamma function 'P'.
		 */
		static double inverseRegularizedGammaLowerP(double a, double p);
		/**
		 * \brief Inverse of regularized lower gamma function 'P'
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
		 * \param a  Argument value
		 * \param p  Argument value
		 * \return Value of the inverse regularized lower gamma function 'P'.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::inverseRegularizedGammaLowerP(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double inverseRegularizedGammaLowerPWithCancel(double a, double p, int cancelId);
		/**
		 * \brief Incomplete lower gamma function
		 * \param s   Argument value
		 * \param x   Argument value
		 * \return Value of the incomplete lower gamma function.
		 */
		static double incompleteGammaLower(double s, double x);
		/**
		 * \brief Incomplete lower gamma function
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param s   Argument value
		 * \param x   Argument value
		 * \return Value of the incomplete lower gamma function.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::incompleteGammaLower(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double incompleteGammaLowerWithCancel(double s, double x, int cancelId);
		/**
		 * \brief Regularized upper gamma function 'Q'
		 * \param s  Argument value
		 * \param x  Argument value
		 * \return Value of the regularized upper gamma function 'Q'.
		 */
		static double regularizedGammaUpperQ(double s, double x);
		/**
		 * \brief Regularized upper gamma function 'Q'
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
		 * \param s  Argument value
		 * \param x  Argument value
		 * \return Value of the regularized upper gamma function 'Q'.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::regularizedGammaUpperQ(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double regularizedGammaUpperQWithCancel(double s, double x, int cancelId);
		/**
		 * \brief Incomplete upper gamma function
		 * \param s   Argument value
		 * \param x   Argument value
		 * \return Value of the incomplete upper gamma function.
		 */
		static double incompleteGammaUpper(double s, double x);
		/**
		 * \brief Incomplete upper gamma function
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param s   Argument value
		 * \param x   Argument value
		 * \return Value of the incomplete upper gamma function.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::incompleteGammaUpper(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double incompleteGammaUpperWithCancel(double s, double x, int cancelId);
		/**
		 * \brief Digamma function as the logarithmic derivative of the Gamma special function
		 * \param x   Argument value
		 * \return Approximated value of the digamma function.
		 */
		static double diGamma(double x);
		/**
		 * \brief Digamma function as the logarithmic derivative of the Gamma special function
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
		 * \param x   Argument value
		 * \return Approximated value of the digamma function.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::diGamma(double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double diGammaWithCancel(double x, int cancelId);

		// ***********************************************************

		/**
		 * \brief Log Beta special function
		 * \param x   Argument value
		 * \param y   Argument value
		 * \return Return logBeta special function (for positive x and positive y)
		 */
		static double logBeta(double x, double y);
		/**
		 * \brief Log Beta special function
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x   Argument value
		 * \param y   Argument value
		 * \return Return logBeta special function (for positive x and positive y)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::logBeta(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double logBetaWithCancel(double x, double y, int cancelId);
		/**
		 * \brief Beta special function
		 * \param x   Argument value
		 * \param y   Argument value
		 * \return Return Beta special function (for positive x and positive y)
		 */
		static double beta(double x, double y);
		/**
		 * \brief Beta special function
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x   Argument value
		 * \param y   Argument value
		 * \return Return Beta special function (for positive x and positive y)
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::beta(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double betaWithCancel(double x, double y, int cancelId);
		/**
		 * \brief Log Incomplete Beta special function
		 * \param a   Argument value
		 * \param b   Argument value
		 * \param x   Argument value
		 * \return Return incomplete Beta special function
		 * for positive a and positive b and x between 0 and 1
		 */
		static double incompleteBeta(double a, double b, double x);
		/**
		 * \brief Log Incomplete Beta special function
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param a   Argument value
		 * \param b   Argument value
		 * \param x   Argument value
		 * \return Return incomplete Beta special function
		 * for positive a and positive b and x between 0 and 1
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::incompleteBeta(double,double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double incompleteBetaWithCancel(double a, double b, double x, int cancelId);
		/**
		 * \brief Regularized incomplete Beta special function
		 * \param a   Argument value
		 * \param b   Argument value
		 * \param x   Argument value
		 * \return Return incomplete Beta special function
		 * for positive a and positive b and x between 0 and 1
		 */
		static double regularizedBeta(double a, double b, double x);
		/**
		 * \brief Regularized incomplete Beta special function
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
		 * \param a   Argument value
		 * \param b   Argument value
		 * \param x   Argument value
		 * \return Return incomplete Beta special function
		 * for positive a and positive b and x between 0 and 1
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::regularizedBeta(double,double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double regularizedBetaWithCancel(double a, double b, double x, int cancelId);
		/**
		 * \brief Inerse regularized incomplete Beta special function
		 * \param a   Argument value
		 * \param b   Argument value
		 * \param p   Argument value
		 * \return Return inverse incomplete Beta special function
		 * for positive a and positive b and x between 0 and 1
		 */
		static double inverseRegularizedBeta(double a, double b, double p);
		/**
		 * \brief Inerse regularized incomplete Beta special function
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param a   Argument value
		 * \param b   Argument value
		 * \param p   Argument value
		 * \return Return inverse incomplete Beta special function
		 * for positive a and positive b and x between 0 and 1
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::inverseRegularizedBeta(double,double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double inverseRegularizedBetaWithCancel(double a, double b, double p, int cancelId);

		// ***********************************************************

		/**
		 * \brief Real-valued Lambert-W function approximation.
		 * \param x      Point at which function will be approximated
		 * \param branch Branch id, 0 for principal branch, -1 for the other branch
		 * \return Principal branch for x greater or equal than -1/e, otherwise Double.NaN.
		 *               Minus 1 branch for x greater or equal than -1/e and lower than 0, otherwise Double.NaN.
		 */
		static double lambertW(double x, double branch);
		/**
		 * \brief Real-valued Lambert-W function approximation.
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param x      Point at which function will be approximated
		 * \param branch Branch id, 0 for principal branch, -1 for the other branch
		 * \return Principal branch for x greater or equal than -1/e, otherwise Double.NaN.
		 *               Minus 1 branch for x greater or equal than -1/e and lower than 0, otherwise Double.NaN.
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::lambertW(double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double lambertWWithCancel(double x, double branch, int cancelId);

		// ***********************************************************

		/**
		 * \brief The Gaussian or ordinary hypergeometric special function
		 * \param a    Argument value
		 * \param b    Argument value
		 * \param c    Argument value
		 * \param z    Argument value
		 * \param maxIterations   Stop condition
		 * \param precision   Stop condition
		 * \return Returns hypergeometric special function approximation
		 */
		static double hypergeometricF(double a, double b, double c, double z, double maxIterations, double precision);
		/**
		 * \brief The Gaussian or ordinary hypergeometric special function
		 * <p>Cancellation is cooperative at the existing checks only. ID 0 uses global
		 * cancellation; positive IDs combine the global signal with the domain signal.
		 * This method does not clear either signal. Cached values and fast returns
		 * may complete normally despite a pending signal. Separate IDs do not make
		 * a shared mutable expression graph safe for concurrent calculations.
		 * <p>There is no uniform cancellation result across the WithCancel family.
		 * The existing returns of this method remain in effect; a caller using a
		 * sentinel may throw an exception. Querying the signal does not establish
		 * whether this particular call observed cancellation.
		 * \param a    Argument value
		 * \param b    Argument value
		 * \param c    Argument value
		 * \param z    Argument value
		 * \param maxIterations   Stop condition
		 * \param precision   Stop condition
		 * \return Returns hypergeometric special function approximation
		 * \param cancelId cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID
		 * \since 6.2.0
		 * \sa org::mariuszgromada::math::mxparser::mathcollection::SpecialFunctions::hypergeometricF(double,double,double,double,double,double)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::cancelCalculation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::resetCalculationCancellation(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::acquireCancellationTokenId()
		 * \sa org::mariuszgromada::math::mxparser::mXparser::reserveCancellationTokenId(int)
		 * \sa org::mariuszgromada::math::mxparser::mXparser::releaseCancellationTokenId(int)
		 * \exception std::invalid_argument if cancelId is outside the supported range
		 */
		static double hypergeometricFWithCancel(double a, double b, double c, double z, double maxIterations, double precision, int cancelId);

		// ***********************************************************

	private:
		static const double EI_DBL_EPSILON;
		static const double EI_EPSILON;
		static const int doubleWidth;
		static const double doublePrecision;
		static const double GSL_DBL_EPSILON;

		static double continuedFractionEiWithCancel(double x, int cancelId);
		static double powerSeriesEiWithCancel(double x, int cancelId);
		static double argumentAdditionSeriesEiWithCancel(double x, int cancelId);
		static double erfImp(double z, bool invert);
		static double erfInvImpl(double p, double q, double s);
		static double gammaIntWithCancel(Long n, int cancelId);
		static double incompleteGammaUpperNegativeIntegerWithCancel(double s, double x, int cancelId);

		static double halleyIterationWithCancel(double x, double wInitial, int maxIter, int cancelId);
		static double seriesEval(double r);
		static double lambertW0WithCancel(double x, int cancelId);
		static double lambertW1(double x);
		static double hypergeometricFDirectWithCancel(double a, double b, double c, double z, double maxIterations, double precision, int cancelId);
	};
} // namespace org::mariuszgromada::math::mxparser::mathcollection

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_SPECIALFUNCTIONS_H