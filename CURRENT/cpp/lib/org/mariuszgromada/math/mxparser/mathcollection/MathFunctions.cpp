/*
 * @(#)MathFunctions.cpp        6.2.0    2026-11-13
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

#include "org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathConstants.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialValue.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialValueTrigonometric.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/Units.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Array.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/BigDecimal.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Integer.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Math.hpp"
#include <iomanip>
#include <locale>
#include <sstream>
#include <cmath>
#include <limits>
#include <stdexcept>

namespace org::mariuszgromada::math::mxparser::mathcollection {
	using namespace org::mariuszgromada::math::mxparser;
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	namespace {
		// These inputs have already been rounded/floored by the original caller.
		// Guard the C++ conversion, preserving the existing rounding and all
		// previously defined results. Java/C# have different runtime cast rules.
		int checkedMathIntConversion(double value, const char* operation) {
			if (!std::isfinite(value)
				|| value < (std::numeric_limits<int>::min)()
				|| value > (std::numeric_limits<int>::max)())
				throw std::invalid_argument(std::string("Native MathFunctions.") + operation
					+ " requires an int-representable conversion value");
			return static_cast<int>(value);
		}

		Long checkedMathLongConversion(double value, const char* operation) {
			constexpr double lower = static_cast<double>((std::numeric_limits<Long>::min)());
			// Long is signed64 on the supported native/WASM ABIs. The exclusive
			// upper bound avoids rounding Long::max to the unrepresentable 2^63.
			constexpr double upper = -lower;
			if (!std::isfinite(value) || value < lower || value >= upper)
				throw std::invalid_argument(std::string("Native MathFunctions.") + operation
					+ " requires a Long-representable conversion value");
			return static_cast<Long>(value);
		}
	}

	API_VISIBLE int MathFunctions::MAX_RECURSION_CALLS = Integer::NaN;

	STATIC_VARS_INITI_CPP(MathFunctions,
		STATIC_VARS_INITI_DEPENDENCY(mXparser);

		MAX_RECURSION_CALLS = mXparser::getMaxAllowedRecursionDepth();
	);


	API_VISIBLE void MathFunctions::refreshMaxAllowedRecursionDepth() {
		MAX_RECURSION_CALLS = mXparser::getMaxAllowedRecursionDepth();
	}

	API_VISIBLE double MathFunctions::plus(double a, double b) {
		if (Double::isNaN(a)) return Double::NaN;
		if (Double::isNaN(b)) return Double::NaN;
		if (!mXparser::checkIfCanonicalRounding()) return a + b;
		if (Double::isInfinite(a)) return a + b;
		if (Double::isInfinite(b)) return a + b;
		BigDecimal da = BigDecimal::valueOf(a);
		BigDecimal db = BigDecimal::valueOf(b);
		return da.add(db).doubleValue();
	}

	API_VISIBLE double MathFunctions::minus(double a, double b) {
		if (Double::isNaN(a)) return Double::NaN;
		if (Double::isNaN(b)) return Double::NaN;
		if (!mXparser::checkIfCanonicalRounding()) return a - b;
		if (Double::isInfinite(a)) return a - b;
		if (Double::isInfinite(b)) return a - b;
		BigDecimal da = BigDecimal::valueOf(a);
		BigDecimal db = BigDecimal::valueOf(b);
		return da.subtract(db).doubleValue();
	}

	API_VISIBLE double MathFunctions::multiply(double a, double b) {
		if (Double::isNaN(a)) return Double::NaN;
		if (Double::isNaN(b)) return Double::NaN;
		if (!mXparser::checkIfCanonicalRounding()) return a * b;
		if (Double::isInfinite(a)) return a * b;
		if (Double::isInfinite(b)) return a * b;
		BigDecimal da = BigDecimal::valueOf(a);
		BigDecimal db = BigDecimal::valueOf(b);
		return da.multiply(db).doubleValue();
	}

	API_VISIBLE double MathFunctions::div(double a, double b) {
		if (b == 0) return Double::NaN;
		if (Double::isNaN(a)) return Double::NaN;
		if (Double::isNaN(b)) return Double::NaN;
		if (!mXparser::checkIfCanonicalRounding()) return a / b;
		if (Double::isInfinite(a)) return a / b;
		if (Double::isInfinite(b)) return a / b;
		BigDecimal da = BigDecimal::valueOf(a);
		BigDecimal db = BigDecimal::valueOf(b);
		double r = da.divide(db).doubleValue();
		if (!Double::isNaN(r)) return r;
		return a / b;
	}

	API_VISIBLE double MathFunctions::divQuotient(double a, double b) {
		double result = div(a, b);
		if (Double::isNaN(result) || Double::isInfinite(result)) return result;
		if (isAlmostInt(result)) return Math::round(result);
		return Math::floor(result);
	}

	API_VISIBLE double MathFunctions::bellNumber(int n) {
		return bellNumberWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::bellNumberWithCancel(int n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		double result = Double::NaN;
		if (n > 1) {
			n -= 1;
			if (CAST_LONG(n + 1) * (n + 1) >= Integer::MAX_VALUE) return Double::NaN;
			// Bell(25) is the last Bell number representable by a signed long.
			if (n < 25) {
				ArrayPtr<Long> bellTriangle = new_Array<Long>(n + 1, n + 1);
				(*bellTriangle)(0, 0) = 1;
				(*bellTriangle)(1, 0) = 1;
				for (int r = 1; r <= n; r++) {
					for (int k = 0; k < r; k++)
						(*bellTriangle)(r, k + 1) = (*bellTriangle)(r - 1, k) + (*bellTriangle)(r, k);
					if (r < n)
						(*bellTriangle)(r + 1, 0) = (*bellTriangle)(r, r);
					if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
				}
				return static_cast<double>((*bellTriangle)(n, n));
			}
			ArrayPtr<double> bellTriangle = new_Array<double>(n + 1, n + 1);

			(*bellTriangle)(0, 0) = 1;
			(*bellTriangle)(1, 0) = 1;
			for (int r = 1; r <= n; r++) {
				for (int k = 0; k < r; k++)
					(*bellTriangle)(r, k + 1) = (*bellTriangle)(r - 1, k) + (*bellTriangle)(r, k);
				if (r < n)
					(*bellTriangle)(r + 1, 0) = (*bellTriangle)(r, r);
				if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
			}
			result = static_cast<double>((*bellTriangle)(n, n));
		} else if (n >= 0)
			result = 1;
		return result;
	}

	API_VISIBLE double MathFunctions::bellNumber(double n) {
		return bellNumberWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::bellNumberWithCancel(double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n) || n < Integer::MIN_VALUE || n > Integer::MAX_VALUE)
			return Double::NaN;
		return bellNumberWithCancel(CAST_INT(Math::round(n)), cancelId);
	}

	API_VISIBLE double MathFunctions::eulerNumber(int n, int k) {
		return eulerNumberWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::eulerNumberWithCancel(int n, int k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		refreshMaxAllowedRecursionDepth();
		return eulerNumberWithCancel(n, k, 1, cancelId);
	}

	API_VISIBLE double MathFunctions::eulerNumberWithCancel(int n, int k, int recursionCall, int cancelId) {
		if (recursionCall > MAX_RECURSION_CALLS)
			return Double::NaN;
		if (n < 0)
			return Double::NaN;
		if (k < 0)
			return 0;
		if (n == 0) {
			if (k == 0) return 1;
			return 0;
		}
		if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		double e1 = eulerNumberWithCancel(n - 1, k, recursionCall + 1, cancelId);
		if (Double::isNaN(e1))
			return Double::NaN;
		double e2 = eulerNumberWithCancel(n - 1, k - 1, recursionCall + 1, cancelId);
		if (Double::isNaN(e2))
			return Double::NaN;
		return (k + 1) * e1 + (n - k) * e2;
	}

	API_VISIBLE double MathFunctions::eulerNumber(double n, double k) {
		return eulerNumberWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::eulerNumberWithCancel(double n, double k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n) || Double::isNaN(k)) return Double::NaN;
		return eulerNumberWithCancel(checkedMathIntConversion(Math::round(n), "eulerNumber"), checkedMathIntConversion(Math::round(k), "eulerNumber"), cancelId);
	}

	API_VISIBLE double MathFunctions::factorial(int n) {
		return factorialWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::factorialWithCancel(int n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		double f = Double::NaN;
		if (n >= 0) {
			if (n < 2) {
				f = 1;
			} else {
				f = 1;
				for (int i = 1; i <= n; i++) {
					f = f * i;
					if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
				}
			}
		}
		return f;
	}

	API_VISIBLE double MathFunctions::factorial(double n) {
		return factorialWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::factorialWithCancel(double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n))
			return Double::NaN;
		return factorialWithCancel(checkedMathIntConversion(Math::round(n), "factorial"), cancelId);
	}

	API_VISIBLE double MathFunctions::factorialFalling(double x, double n) {
		return factorialFallingWithCancel(x, n, 0);
	}

	API_VISIBLE double MathFunctions::factorialFallingWithCancel(double x, double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(x)) return Double::NaN;
		if (Double::isNaN(n)) return Double::NaN;
		if (n < 0) return Double::NaN;
		if (BinaryRelations::isEqualOrAlmost(n, 0)) return 1.0;
		double k, y;
		y = 1;
		for (k = 0; k <= n - 1; k = k + 1) {
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
			y = y * (x - k);
		}
		return y;
	}

	API_VISIBLE double MathFunctions::factorialRising(double x, double n) {
		return factorialRisingWithCancel(x, n, 0);
	}

	API_VISIBLE double MathFunctions::factorialRisingWithCancel(double x, double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(x)) return Double::NaN;
		if (Double::isNaN(n)) return Double::NaN;
		if (n < 0) return Double::NaN;
		if (BinaryRelations::isEqualOrAlmost(n, 0)) return 1.0;
		double k, y;
		y = 1;
		for (k = 0; k <= n - 1; k = k + 1) {
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
			y = y * (x + k);
		}
		return y;
	}

	API_VISIBLE double MathFunctions::binomCoeff(double n, Long k) {
		return binomCoeffWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::binomCoeffWithCancel(double n, Long k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n))
			return Double::NaN;
		double result = Double::NaN;
		if (k >= 0) {
			double numerator = 1;
			if (k > 0)
				for (Long i = 0; i <= k - 1; i++) {
					numerator *= (n - CAST_DOUBLE(i));
					if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
				}
			double denominator = 1;
			if (k > 1)
				for (Long i = 1; i <= k; i++) {
					denominator *= CAST_DOUBLE(i);
					if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
				}
			result = numerator / denominator;
		}
		return result;
	}

	API_VISIBLE double MathFunctions::binomCoeff(double n, double k) {
		return binomCoeffWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::binomCoeffWithCancel(double n, double k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n) || Double::isNaN(k))
			return Double::NaN;
		return binomCoeffWithCancel(n, checkedMathLongConversion(Math::round(k), "binomCoeff"), cancelId);
	}

	API_VISIBLE double MathFunctions::numberOfPermutations(double n, Long k) {
		return numberOfPermutationsWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::numberOfPermutationsWithCancel(double n, Long k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n)) return Double::NaN;
		double result = Double::NaN;
		if (k >= 0) {
			double numerator = 1;
			if (k > 0)
				for (Long i = 0; i <= k - 1; i++) {
					numerator *= (n - CAST_DOUBLE(i));
					if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
				}
			result = numerator;
		}
		return result;
	}

	API_VISIBLE double MathFunctions::numberOfPermutations(double n, double k) {
		return numberOfPermutationsWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::numberOfPermutationsWithCancel(double n, double k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n) || Double::isNaN(k)) return Double::NaN;
		Long lk = checkedMathLongConversion(Math::round(k), "numberOfPermutations");
		return numberOfPermutationsWithCancel(n, lk, cancelId);
	}

	API_VISIBLE double MathFunctions::bernoulliNumber(int m, int n) {
		return bernoulliNumberWithCancel(m, n, 0);
	}

	API_VISIBLE double MathFunctions::bernoulliNumberWithCancel(int m, int n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		double result = Double::NaN;
		if ((m >= 0) && (n >= 0)) {
			result = 0;
			for (int k = 0; k <= m; k++)
				for (int v = 0; v <= k; v++) {
					result += Math::pow(-1, v) * binomCoeffWithCancel(k, CAST_LONG(v), cancelId)
							* (Math::pow(n + v, m) / (k + 1));
					if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
				}
		}
		return result;
	}

	API_VISIBLE double MathFunctions::bernoulliNumber(double m, double n) {
		return bernoulliNumberWithCancel(m, n, 0);
	}

	API_VISIBLE double MathFunctions::bernoulliNumberWithCancel(double m, double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(m) || Double::isNaN(n))
			return Double::NaN;
		return bernoulliNumberWithCancel(checkedMathIntConversion(Math::round(m), "bernoulliNumber"), checkedMathIntConversion(Math::round(n), "bernoulliNumber"), cancelId);
	}

	API_VISIBLE double MathFunctions::Stirling1Number(int n, int k) {
		return Stirling1NumberWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::Stirling1NumberWithCancel(int n, int k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		refreshMaxAllowedRecursionDepth();
		return Stirling1NumberWithCancel(n, k, 1, cancelId);
	}

	API_VISIBLE double MathFunctions::Stirling1NumberWithCancel(int n, int k, int recursionCall, int cancelId) {
		if (recursionCall > MAX_RECURSION_CALLS)
			return Double::NaN;
		if (k > n) return 0;
		if (n == 0) {
			if (k == 0) return 1;
			return 0;
		}
		if (k == 0) return 0;

		if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		double s1 = Stirling1NumberWithCancel(n - 1, k, recursionCall + 1, cancelId);
		if (Double::isNaN(s1))
			return Double::NaN;
		double s2 = Stirling1NumberWithCancel(n - 1, k - 1, recursionCall + 1, cancelId);
		if (Double::isNaN(s2))
			return Double::NaN;
		return (n - 1) * s1 + s2;
	}

	API_VISIBLE double MathFunctions::Stirling1Number(double n, double k) {
		return Stirling1NumberWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::Stirling1NumberWithCancel(double n, double k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n) || Double::isNaN(k))
			return Double::NaN;
		return Stirling1NumberWithCancel(checkedMathIntConversion(Math::round(n), "Stirling1Number"), checkedMathIntConversion(Math::round(k), "Stirling1Number"), cancelId);
	}

	API_VISIBLE double MathFunctions::Stirling2Number(int n, int k) {
		return Stirling2NumberWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::Stirling2NumberWithCancel(int n, int k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		refreshMaxAllowedRecursionDepth();
		return Stirling2NumberWithCancel(n, k, 1, cancelId);
	}

	API_VISIBLE double MathFunctions::Stirling2NumberWithCancel(int n, int k, int recursionCall, int cancelId) {
		if (recursionCall > MAX_RECURSION_CALLS)
			return Double::NaN;
		if (k > n) return 0;
		if (n == 0) {
			if (k == 0) return 1;
			return 0;
		}
		if (k == 0) return 0;

		if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		double s1 = Stirling2NumberWithCancel(n - 1, k, recursionCall + 1, cancelId);
		if (Double::isNaN(s1))
			return Double::NaN;
		double s2 = Stirling2NumberWithCancel(n - 1, k - 1, recursionCall + 1, cancelId);
		if (Double::isNaN(s2))
			return Double::NaN;
		return k * s1 + s2;
	}

	API_VISIBLE double MathFunctions::Stirling2Number(double n, double k) {
		return Stirling2NumberWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::Stirling2NumberWithCancel(double n, double k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n) || Double::isNaN(k))
			return Double::NaN;
		return Stirling2NumberWithCancel(checkedMathIntConversion(Math::round(n), "Stirling2Number"), checkedMathIntConversion(Math::round(k), "Stirling2Number"), cancelId);
	}

	API_VISIBLE double MathFunctions::worpitzkyNumber(int n, int k) {
		return worpitzkyNumberWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::worpitzkyNumberWithCancel(int n, int k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		double result = Double::NaN;
		if (k >= 0 && k <= n) {
			result = 0;
			for (int v = 0; v <= k; v++) {
				result += Math::pow(-1, v + k) * Math::pow(v + 1, n) * binomCoeffWithCancel(k, CAST_LONG(v), cancelId);
				if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
			}
		}
		return result;
	}

	API_VISIBLE double MathFunctions::worpitzkyNumber(double n, double k) {
		return worpitzkyNumberWithCancel(n, k, 0);
	}

	API_VISIBLE double MathFunctions::worpitzkyNumberWithCancel(double n, double k, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n) || Double::isNaN(k))
			return Double::NaN;
		return worpitzkyNumberWithCancel(checkedMathIntConversion(Math::round(n), "worpitzkyNumber"), checkedMathIntConversion(Math::round(k), "worpitzkyNumber"), cancelId);
	}

	API_VISIBLE double MathFunctions::harmonicNumber(int n) {
		return ordinaryHarmonicNumberWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::ordinaryHarmonicNumberWithCancel(int n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (n <= 0)
			return 0;
		if (n == 1)
			return 1;
		double h = 1;
		for (double k = 2.0; k <= n; k++) {
			h += 1.0 / k;
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		}
		return h;
	}

	API_VISIBLE double MathFunctions::harmonicNumber(double n) {
		return ordinaryHarmonicNumberWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::ordinaryHarmonicNumberWithCancel(double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n))
			return Double::NaN;
		return ordinaryHarmonicNumberWithCancel(checkedMathIntConversion(Math::round(n), "harmonicNumber"), cancelId);
	}

	API_VISIBLE double MathFunctions::harmonicNumber(double x, int n) {
		return generalizedHarmonicNumberWithCancel(x, n, 0);
	}

	API_VISIBLE double MathFunctions::generalizedHarmonicNumberWithCancel(double x, int n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if ((Double::isNaN(x)) || (x < 0))
			return Double::NaN;
		if (n <= 0)
			return 0;
		if (n == 1)
			return 1;
		double h = 1;
		for (double k = 2.0; k <= n; k++) {
			h += 1 / power(k, x);
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		}
		return h;
	}

	API_VISIBLE double MathFunctions::harmonicNumber(double x, double n) {
		return generalizedHarmonicNumberWithCancel(x, n, 0);
	}

	API_VISIBLE double MathFunctions::generalizedHarmonicNumberWithCancel(double x, double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if ((Double::isNaN(x)) || (Double::isNaN(n)))
			return Double::NaN;
		return generalizedHarmonicNumberWithCancel(x, checkedMathIntConversion(Math::round(n), "harmonicNumber"), cancelId);
	}

	API_VISIBLE double MathFunctions::catalanNumber(int n) {
		return binomCoeff(2 * n, CAST_LONG(n)) * div(1, n + 1);
	}

	API_VISIBLE double MathFunctions::catalanNumber(double n) {
		if (Double::isNaN(n))
			return Double::NaN;
		return catalanNumber(checkedMathIntConversion(Math::round(n), "catalanNumber"));
	}

	API_VISIBLE double MathFunctions::fibonacciNumber(int n) {
		return fibonacciNumberWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::fibonacciNumberWithCancel(int n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		refreshMaxAllowedRecursionDepth();
		return fibonacciNumberWithCancel(n, 1, cancelId);
	}

	API_VISIBLE double MathFunctions::fibonacciNumberWithCancel(int n, int recursionCall, int cancelId) {
		if (recursionCall > MAX_RECURSION_CALLS)
			return Double::NaN;
		if (n < 0)
			return Double::NaN;
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		if (n > MAX_RECURSION_CALLS - recursionCall + 1) return Double::NaN;
		double previous = 0;
		double result = 1;
		for (int i = 2; i <= n; i++) {
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
			double next = result + previous;
			previous = result;
			result = next;
		}
		return result;
	}

	API_VISIBLE double MathFunctions::fibonacciNumber(double n) {
		return fibonacciNumberWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::fibonacciNumberWithCancel(double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n))
			return Double::NaN;
		return fibonacciNumberWithCancel(checkedMathIntConversion(Math::round(n), "fibonacciNumber"), cancelId);
	}

	API_VISIBLE double MathFunctions::lucasNumber(int n) {
		return lucasNumberWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::lucasNumberWithCancel(int n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		refreshMaxAllowedRecursionDepth();
		return lucasNumberWithCancel(n, 1, cancelId);
	}

	API_VISIBLE double MathFunctions::lucasNumberWithCancel(int n, int recursionCall, int cancelId) {
		if (recursionCall > MAX_RECURSION_CALLS)
			return Double::NaN;
		if (n < 0)
			return Double::NaN;
		if (n == 0)
			return 2;
		if (n == 1)
			return 1;
		if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		if (n > MAX_RECURSION_CALLS - recursionCall + 1) return Double::NaN;
		double previous = 2;
		double result = 1;
		for (int i = 2; i <= n; i++) {
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
			double next = result + previous;
			previous = result;
			result = next;
		}
		return result;
	}

	API_VISIBLE double MathFunctions::lucasNumber(double n) {
		return lucasNumberWithCancel(n, 0);
	}

	API_VISIBLE double MathFunctions::lucasNumberWithCancel(double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(n))
			return Double::NaN;
		return lucasNumberWithCancel(checkedMathIntConversion(Math::round(n), "lucasNumber"), cancelId);
	}

	API_VISIBLE double MathFunctions::kroneckerDelta(double i, double j) {
		if (Double::isNaN(i) || Double::isNaN(j))
			return Double::NaN;
		if (i == j)
			return 1;
		else
			return 0;
	}

	API_VISIBLE double MathFunctions::kroneckerDelta(int i, int j) {
		if (i == j)
			return 1;
		else
			return 0;
	}

	API_VISIBLE double MathFunctions::continuedFraction(const ArrayPtr<double> &sequence) {
		return continuedFractionWithCancel(sequence, 0);
	}

	API_VISIBLE double MathFunctions::continuedFractionWithCancel(const ArrayPtr<double> &sequence, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (sequence == nullptr) return Double::NaN;
		if (sequence->length == 0) return Double::NaN;
		double cf = 0;
		double a;
		if (sequence->length == 1)
			return (*sequence)(0);
		int lastIndex = sequence->length - 1;
		for (int i = lastIndex; i >= 0; i--) {
			a = (*sequence)(i);
			if (Double::isNaN(a))
				return Double::NaN;
			if (i == lastIndex) {
				cf = a;
			} else {
				if (cf == 0)
					return Double::NaN;
				cf = a + 1.0 / cf;
			}
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		}
		return cf;
	}

	/**
	 * \brief Private function calculating continued polynomial
	 * recursively.
	 * \param n         the polynomial order
	 * \param x         the x values
	 * \return continued polynomial value
	 * \param cancelId The cancellation domain in 0..MAX_CANCELLATION_TOKEN_ID.
	 */
	API_VISIBLE double MathFunctions::continuedPolynomialWithCancel(int n, const ArrayPtr<double> &x, int cancelId) {
		if (x == nullptr) return Double::NaN;
		if (x->length == 0) return Double::NaN;
		if (n == 0)
			return 1;
		if (n == 1)
			return (*x)(0);
		if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		return (*x)(n - 1) * continuedPolynomialWithCancel(n - 1, x, cancelId) + continuedPolynomialWithCancel(n - 2, x, cancelId);
	}

	API_VISIBLE double MathFunctions::continuedPolynomial(const ArrayPtr<double> &x) {
		return continuedPolynomialWithCancel(x, 0);
	}

	API_VISIBLE double MathFunctions::continuedPolynomialWithCancel(const ArrayPtr<double> &x, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (x == nullptr) return Double::NaN;
		if (x->length == 0) return Double::NaN;
		for (double d: *x) {
			if (Double::isNaN(d))
				return Double::NaN;
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		}
		return continuedPolynomialWithCancel(x->length, x, cancelId);
	}

	API_VISIBLE double MathFunctions::eulerPolynomial(int m, double x) {
		return eulerPolynomialWithCancel(m, x, 0);
	}

	API_VISIBLE double MathFunctions::eulerPolynomialWithCancel(int m, double x, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(x))
			return Double::NaN;
		double sumTotal = Double::NaN;
		if (m >= 0) {
			sumTotal = 0;
			for (int n = 0; n <= m; n++) {
				double sumPartial = 0;
				for (int k = 0; k <= n; k++) {
					sumPartial += Math::pow(-1, k) * binomCoeffWithCancel(n, CAST_LONG(k), cancelId) * Math::pow(x + k, m);
					if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
				}
				sumPartial /= Math::pow(2, n);
				sumTotal += sumPartial;
			}
		}
		return sumTotal;
	}

	API_VISIBLE double MathFunctions::eulerPolynomial(double m, double x) {
		return eulerPolynomialWithCancel(m, x, 0);
	}

	API_VISIBLE double MathFunctions::eulerPolynomialWithCancel(double m, double x, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(m) || Double::isNaN(x))
			return Double::NaN;
		return eulerPolynomialWithCancel(checkedMathIntConversion(Math::round(m), "eulerPolynomial"), x, cancelId);
	}

	API_VISIBLE double MathFunctions::chi(double x, double a, double b) {
		if (Double::isNaN(x) || Double::isNaN(a) || Double::isNaN(b))
			return Double::NaN;
		double result = Double::NaN;
		if ((!Double::isNaN(x)) && (!Double::isNaN(a)) && (!Double::isNaN(b))) {
			if ((x > a) && (x < b)) {
				result = 1;
			} else {
				result = 0;
			}
		}
		return result;
	}

	API_VISIBLE double MathFunctions::chi_LR(double x, double a, double b) {
		if (Double::isNaN(x) || Double::isNaN(a) || Double::isNaN(b))
			return Double::NaN;
		double result = Double::NaN;
		if ((!Double::isNaN(x)) && (!Double::isNaN(a)) && (!Double::isNaN(b))) {
			if ((x >= a) && (x <= b)) {
				result = 1;
			} else {
				result = 0;
			}
		}
		return result;
	}

	API_VISIBLE double MathFunctions::chi_L(double x, double a, double b) {
		if (Double::isNaN(x) || Double::isNaN(a) || Double::isNaN(b))
			return Double::NaN;
		double result = Double::NaN;
		if ((!Double::isNaN(x)) && (!Double::isNaN(a)) && (!Double::isNaN(b))) {
			if ((x >= a) && (x < b)) {
				result = 1;
			} else {
				result = 0;
			}
		}
		return result;
	}

	API_VISIBLE double MathFunctions::chi_R(double x, double a, double b) {
		if (Double::isNaN(x) || Double::isNaN(a) || Double::isNaN(b))
			return Double::NaN;
		double result = Double::NaN;
		if ((!Double::isNaN(x)) && (!Double::isNaN(a)) && (!Double::isNaN(b))) {
			if ((x > a) && (x <= b)) {
				result = 1;
			} else {
				result = 0;
			}
		}
		return result;
	}

	bool API_VISIBLE MathFunctions::isAlmostInt(double a) {
		double aint = Math::round(a);
		return abs(a - aint) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON;
	}

	/**
	 * \brief Applies the integer exponent to the base a
	 * \param a   The base
	 * \param n   The integer exponent
	 * \return Return a to the power of n, if canonical rounding is enable, the it operates on big numbers
	 */
	API_VISIBLE double MathFunctions::powInt(double a, int n) {
		if (Double::isNaN(a)) return Double::NaN;
		if (Double::isInfinite(a)) return Math::pow(a, n);
		if (a == 0) return Math::pow(a, n);
		if (n == 0) return 1;
		if (n == 1) return a;
		if (mXparser::checkIfCanonicalRounding()) {
			BigDecimal da = BigDecimal::valueOf(a);
			if (n >= 0) return da.pow(n).doubleValue();
			double r = BigDecimal::ONE.divide(da).pow(-n).doubleValue();
			if (!Double::isNaN(r)) return r;
			return Math::pow(a, n);
		} else {
			return Math::pow(a, n);
		}
	}

	API_VISIBLE double MathFunctions::power(double a, double b) {
		if (Double::isNaN(a) || Double::isNaN(b))
			return Double::NaN;
		if (Double::isInfinite(a)) return Math::pow(a, b);
		if (Double::isInfinite(b)) return Math::pow(a, b);
		double babs = Math::abs(b);
		double bint = Math::round(babs);
		if (MathFunctions::abs(babs - bint) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON
		    && babs < Integer::MAX_VALUE && -babs > Integer::MIN_VALUE) {
			if (b >= 0) return powInt(a, CAST_INT(bint));
			else return powInt(a, -CAST_INT(bint));
		} else if (a >= 0)
			return Math::pow(a, b);
		else if (abs(b) >= 1)
			return Math::pow(a, b);
		else if (b == 0)
			return Math::pow(a, b);
		else {
			double ndob = 1.0 / abs(b);
			double nint = Math::round(ndob);
			if (MathFunctions::abs(ndob - nint) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON) {
				Long n = checkedMathLongConversion(nint, "power");
				if (n % 2 == 1)
					if (b > 0)
						return -Math::pow(abs(a), 1.0 / ndob);
					else
						return -Math::pow(abs(a), -1.0 / ndob);
				else
					return Double::NaN;
			} else return Double::NaN;
		}
	}

	API_VISIBLE double MathFunctions::root(double n, double x) {
		if (Double::isNaN(n) || Double::isNaN(x)) return Double::NaN;
		if (Double::isInfinite(n) || Double::isInfinite(x)) return Double::NaN;
		if (n < -BinaryRelations::DEFAULT_COMPARISON_EPSILON) return Double::NaN;
		if (abs(n) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON) {
			if (abs(x) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON) return 0;
			else if (abs(x - 1) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON) return 1;
			else return Double::NaN;
		}
		Long nint = checkedMathLongConversion(floor(n), "root");
		if (nint == 1) return x;
		if (nint == 2) return sqrt(x);
		if (nint == 3) return Math::cbrt(x);
		if (nint == 9) return Math::cbrt(Math::cbrt(x));
		if (nint % 2 == 1) {
			if (x >= 0) return Math::pow(x, 1.0 / nint);
			else return -Math::pow(abs(x), 1.0 / nint);
		} else {
			if (x >= 0) return Math::pow(x, 1.0 / nint);
			else return Double::NaN;
		}
	}

	API_VISIBLE double MathFunctions::tetration(double a, double n) {
		return tetrationWithCancel(a, n, 0);
	}

	API_VISIBLE double MathFunctions::tetrationWithCancel(double a, double n, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(a)) return Double::NaN;
		if (Double::isNaN(n)) return Double::NaN;
		if (n == Double::POSITIVE_INFINITY) {
			if (BinaryRelations::isEqualOrAlmost(a, 1)) return 1.0;
			if (abs(a - MathConstants::EXP_MINUS_E) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				return MathConstants::EXP_MINUS_1;
			if (abs(a - MathConstants::EXP_1_OVER_E) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				return MathConstants::E;
			if ((a > MathConstants::EXP_MINUS_E) && (a < MathConstants::EXP_1_OVER_E))
				return SpecialFunctions::lambertWWithCancel(-MathFunctions::ln(a), 0, cancelId) / (-MathFunctions::ln(a));
			if (a > MathConstants::EXP_1_OVER_E) return Double::POSITIVE_INFINITY;
			if (a < MathConstants::EXP_MINUS_E) return Double::NaN;
		}
		if (n < -BinaryRelations::DEFAULT_COMPARISON_EPSILON) return Double::NaN;
		if (abs(n) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON) {
			if (abs(a) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				return 1;
			else
				return Double::NaN;
		}
		n = floor(n);
		if (n == 0) {
			if (abs(a) > BinaryRelations::DEFAULT_COMPARISON_EPSILON)
				return 1;
			else
				return Double::NaN;
		}
		if (abs(a) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON) return 0;
		if (n == 1) return a;
		double r = a;
		for (double i = 2; i <= n; i++) {
			r = Math::pow(a, r);
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		}
		return r;
	}

	API_VISIBLE double MathFunctions::mod(double a, double b) {
		if (Double::isNaN(a) || Double::isNaN(b))
			return Double::NaN;
		return Math::mod(a, b);
	}

	/*
	 * Division a/b
	 *
	 * @param      a                   the a function parameter
	 * @param      b                   the b function parameter
	 *
	 * @return     if a,b &lt;&gt; Double::NaN and b &lt;&gt; 0 returns a/b,
	 *             otherwise return Double::NaN.
	 */
	/*
	public const double div(double a, double b) {
		if (Double::isNaN(a) || Double::isNaN(b))
			return Double::NaN;
		double result = Double::NaN;
		if (b != 0)
			result = a / b;
		return result;
	}
	*/
	API_VISIBLE double MathFunctions::sin(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		if (mXparser::checkIfDegreesMode())
			a = a * Units::DEGREE_ARC;
		SpecialValueTrigonometricPtr sv = SpecialValueTrigonometric::getSpecialValueTrigonometric(a);
		if (sv != nullptr)
			return sv->sin;
		return Math::sin(a);
	}

	API_VISIBLE double MathFunctions::cos(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		if (mXparser::checkIfDegreesMode())
			a = a * Units::DEGREE_ARC;
		SpecialValueTrigonometricPtr sv = SpecialValueTrigonometric::getSpecialValueTrigonometric(a);
		if (sv != nullptr)
			return sv->cos;
		return Math::cos(a);
	}

	API_VISIBLE double MathFunctions::tan(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		if (mXparser::checkIfDegreesMode())
			a = a * Units::DEGREE_ARC;
		SpecialValueTrigonometricPtr sv = SpecialValueTrigonometric::getSpecialValueTrigonometric(a);
		if (sv != nullptr)
			return sv->tan;
		return Math::tan(a);
	}

	API_VISIBLE double MathFunctions::ctan(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		if (mXparser::checkIfDegreesMode())
			a = a * Units::DEGREE_ARC;
		SpecialValueTrigonometricPtr sv = SpecialValueTrigonometric::getSpecialValueTrigonometric(a);
		if (sv != nullptr)
			return sv->ctan;
		double result = Double::NaN;
		double tg = Math::tan(a);
		if (tg != 0)
			result = 1.0 / tg;
		return result;
	}

	API_VISIBLE double MathFunctions::sec(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		if (mXparser::checkIfDegreesMode())
			a = a * Units::DEGREE_ARC;
		SpecialValueTrigonometricPtr sv = SpecialValueTrigonometric::getSpecialValueTrigonometric(a);
		if (sv != nullptr)
			return sv->sec;
		double result = Double::NaN;
		double cos = Math::cos(a);
		if (cos != 0)
			result = 1.0 / cos;
		return result;
	}

	API_VISIBLE double MathFunctions::cosec(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		if (mXparser::checkIfDegreesMode())
			a = a * Units::DEGREE_ARC;
		SpecialValueTrigonometricPtr sv = SpecialValueTrigonometric::getSpecialValueTrigonometric(a);
		if (sv != nullptr)
			return sv->csc;
		double result = Double::NaN;
		double sin = Math::sin(a);
		if (sin != 0)
			result = 1.0 / sin;
		return result;
	}

	/**
	 * \brief If double is almost integer returns the closes integer, otherwise original value
	 * \param val   Parameter
	 * \return f double is almost integer returns the closest integer, otherwise original value
	 */
	API_VISIBLE double MathFunctions::intIfAlmostIntOtherwiseOrig(double val) {
		double valint = Math::round(val);
		if (Math::abs(val - valint) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON) return valint;
		return val;
	}

	API_VISIBLE double MathFunctions::asin(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		SpecialValuePtr sv = SpecialValueTrigonometric::getSpecialValueAsin(a);
		double r;
		if (sv != nullptr) r = sv->fv;
		else r = Math::asin(a);
		if (mXparser::checkIfDegreesMode()) {
			if (sv != nullptr) return sv->fvdeg;
			return intIfAlmostIntOtherwiseOrig(div(r, Units::DEGREE_ARC));
		} else return r;
	}

	API_VISIBLE double MathFunctions::acos(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		SpecialValuePtr sv = SpecialValueTrigonometric::getSpecialValueAcos(a);
		double r;
		if (sv != nullptr) r = sv->fv;
		else r = Math::acos(a);
		if (mXparser::checkIfDegreesMode()) {
			if (sv != nullptr) return sv->fvdeg;
			return intIfAlmostIntOtherwiseOrig(div(r, Units::DEGREE_ARC));
		} else return r;
	}

	API_VISIBLE double MathFunctions::atan(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		SpecialValuePtr sv = SpecialValueTrigonometric::getSpecialValueAtan(a);
		double r;
		if (sv != nullptr) r = sv->fv;
		else r = Math::atan(a);
		if (mXparser::checkIfDegreesMode()) {
			if (sv != nullptr) return sv->fvdeg;
			return intIfAlmostIntOtherwiseOrig(div(r, Units::DEGREE_ARC));
		} else return r;
	}

	API_VISIBLE double MathFunctions::actan(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		SpecialValuePtr sv = SpecialValueTrigonometric::getSpecialValueActan(a);
		double r;
		if (sv != nullptr) r = sv->fv;
		else {
			if (a > 0) r = Math::atan(1 / a);
			else if (a < 0) r = Math::atan(1 / a) + MathConstants::PI;
			else r = Double::NaN;
		}
		if (mXparser::checkIfDegreesMode()) {
			if (sv != nullptr) return sv->fvdeg;
			return intIfAlmostIntOtherwiseOrig(div(r, Units::DEGREE_ARC));
		} else return r;
	}

	API_VISIBLE double MathFunctions::asec(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		SpecialValuePtr sv = SpecialValueTrigonometric::getSpecialValueAsec(a);
		double r;
		if (sv != nullptr) r = sv->fv;
		else r = Math::acos(1 / a);
		if (mXparser::checkIfDegreesMode()) {
			if (sv != nullptr) return sv->fvdeg;
			return intIfAlmostIntOtherwiseOrig(div(r, Units::DEGREE_ARC));
		} else return r;
	}

	API_VISIBLE double MathFunctions::acosec(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		SpecialValuePtr sv = SpecialValueTrigonometric::getSpecialValueAcsc(a);
		double r;
		if (sv != nullptr) r = sv->fv;
		else r = Math::asin(1 / a);
		if (mXparser::checkIfDegreesMode()) {
			if (sv != nullptr) return sv->fvdeg;
			return intIfAlmostIntOtherwiseOrig(div(r, Units::DEGREE_ARC));
		} else return r;
	}

	API_VISIBLE double MathFunctions::ln(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::log(a);
	}

	API_VISIBLE double MathFunctions::log2(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::log(a) / Math::log(2.0);
	}

	API_VISIBLE double MathFunctions::log10(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::log10(a);
	}

	API_VISIBLE double MathFunctions::rad(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::toRadians(a);
	}

	API_VISIBLE double MathFunctions::exp(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::exp(a);
	}

	API_VISIBLE double MathFunctions::sqrt(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::sqrt(a);
	}

	API_VISIBLE double MathFunctions::sinh(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::sinh(a);
	}

	API_VISIBLE double MathFunctions::cosh(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::cosh(a);
	}

	API_VISIBLE double MathFunctions::tanh(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::tanh(a);
	}

	API_VISIBLE double MathFunctions::coth(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double result = Double::NaN;
		double tanh = Math::tanh(a);
		if (tanh != 0)
			result = 1.0 / tanh;
		return result;
	}

	API_VISIBLE double MathFunctions::sech(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double result = Double::NaN;
		double cosh = Math::cosh(a);
		if (cosh != 0)
			result = 1.0 / cosh;
		return result;
	}

	API_VISIBLE double MathFunctions::csch(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double result = Double::NaN;
		double sinh = Math::sinh(a);
		if (sinh != 0)
			result = 1.0 / sinh;
		return result;
	}

	API_VISIBLE double MathFunctions::deg(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::toDegrees(a);
	}

	API_VISIBLE double MathFunctions::abs(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::abs(a);
	}

	API_VISIBLE double MathFunctions::sgn(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::signum(a);
	}

	API_VISIBLE double MathFunctions::floor(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::floor(a);
	}

	API_VISIBLE double MathFunctions::ceil(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		return Math::ceil(a);
	}

	API_VISIBLE double MathFunctions::arsinh(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double magnitude = Math::abs(a);
		if (magnitude < 1e-8) return a;
		if (magnitude < 0.01) {
			double square = a*a;
			return a * (1.0 - square * (1.0/6.0 - square * (3.0/40.0 - square * (5.0/112.0))));
		}
		double result;
		if (magnitude > 1e150)
			result = Math::log(magnitude) + 0.69314718055994530942;
		else
			result = Math::log(magnitude + Math::sqrt(magnitude*magnitude+1));
		return a < 0 ? -result : result;
	}

	API_VISIBLE double MathFunctions::arcosh(double a) {
		if (Double::isNaN(a) || a < 1)
			return Double::NaN;
		if (a > 1e150) return Math::log(a) + 0.69314718055994530942;
		return Math::log(a + Math::sqrt(a*a-1));
	}

	API_VISIBLE double MathFunctions::artanh(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double result = Double::NaN;
		if (1 - a != 0)
			result = 0.5 * Math::log((1 + a) / (1 - a));
		return result;
	}

	API_VISIBLE double MathFunctions::arcoth(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double result = Double::NaN;
		if (a - 1 != 0)
			result = 0.5 * Math::log((a + 1) / (a - 1));
		return result;
	}

	API_VISIBLE double MathFunctions::arsech(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double result = Double::NaN;
		if (a != 0)
			result = Math::log((1 + Math::sqrt(1 - a * a)) / a);
		return result;
	}

	API_VISIBLE double MathFunctions::arcsch(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double result = Double::NaN;
		if (a != 0)
			result = Math::log(1 / a + Math::sqrt(1 + a * a) / Math::abs(a));
		return result;
	}

	API_VISIBLE double MathFunctions::sa(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double x = MathConstants::PI * a;
		double result = Double::NaN;
		if (x != 0)
			result = Math::sin(x) / (x);
		else
			result = 1.0;
		return result;
	}

	API_VISIBLE double MathFunctions::sinc(double a) {
		if (Double::isNaN(a))
			return Double::NaN;
		double result = Double::NaN;
		if (a != 0)
			if (mXparser::checkIfDegreesMode())
				result = Math::sin(a * Units::DEGREE_ARC) / (a);
			else
				result = Math::sin(a) / (a);
		else
			result = 1.0;
		return result;
	}

	API_VISIBLE double MathFunctions::log(double a, double b) {
		if (Double::isNaN(a) || Double::isNaN(b))
			return Double::NaN;
		double result = Double::NaN;
		double logb = Math::log(b);
		if (logb != 0)
			result = Math::log(a) / logb;
		return result;
	}

	API_VISIBLE double MathFunctions::round(double value, int places) {
		return roundWithCancel(value, places, 0);
	}

	API_VISIBLE double MathFunctions::roundWithCancel(double value, int places, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(value)) return Double::NaN;
		if (Double::isInfinite(value)) return value;

		if (value == 0 || value == -1 || value == 1 || value == -2 || value == 2 || value == -3 || value == 3) return value;
		if (value == -4 || value == 4 || value == -5 || value == 5 || value == -6 || value == 6) return value;
		if (value == -7 || value == 7 || value == -8 || value == 8 || value == -9 || value == 9) return value;
		if (value == -10 || value == 10 || value == -11 || value == 11 || value == -12 || value == 12) return value;
		if (value == Math::round(value)) return value;

		if (places < 0) return value;

		int maxPrecision = ulpDecimalDigitsBefore(value) + 1;
		if (maxPrecision == 0) return value;
		if (places >= maxPrecision) return value;

		double valueRndInit;
		bool isPositive;
		if (value > 0) {
			valueRndInit = value;
			isPositive = true;
		} else if (value < 0) {
			valueRndInit = -value;
			isPositive = false;
		} else {
			valueRndInit = 0;
			isPositive = false;
			return 0;
		}
		double valueRnd = valueRndInit;
		double factor = std::floor(std::pow(10.0, maxPrecision));
		for (int precision = maxPrecision; precision >= places; precision--) {
			double valueTmp = valueRnd * factor;
			//double epsilon = ulp(valueTmp) / 2.0;
			//epsilon = 0;
			double valueTmpWithEpsilon = valueTmp /* + epsilon */;
			double valueTmpCeil = std::ceil(valueTmpWithEpsilon);
			double valueTmpFloor = std::floor(valueTmpWithEpsilon);
			double valueTmpSelected;
			double deltaUp = valueTmpCeil - valueTmp;
			double deltaDown = valueTmp - valueTmpFloor;

			if (deltaUp - deltaDown < 0.01)
				valueTmpSelected = valueTmpCeil;
			else
				valueTmpSelected = valueTmpFloor;

			double newValueRnd = valueTmpSelected / factor;
			double deltaRnd = std::fabs(newValueRnd - valueRnd);
			if (deltaRnd >= 0.1 / factor) {
				valueRnd = newValueRnd;
				if (valueRnd == Math::round(valueRnd)) return isPositive ? valueRnd : -valueRnd;
			}
			factor = std::floor(factor / 10.0);
		}

		if (isPositive) return valueRnd;
		return -valueRnd;
	}

	API_VISIBLE double MathFunctions::truncate(double value, int places) {
		if (Double::isNaN(value)) return Double::NaN;
		if (Double::isInfinite(value)) return value;

		if (value == 0 || value == -1 || value == 1 || value == -2 || value == 2 || value == -3 || value == 3) return value;
		if (value == -4 || value == 4 || value == -5 || value == 5 || value == -6 || value == 6) return value;
		if (value == -7 || value == 7 || value == -8 || value == 8 || value == -9 || value == 9) return value;
		if (value == -10 || value == 10 || value == -11 || value == 11 || value == -12 || value == 12) return value;
		if (value == Math::round(value)) return value;

		if (places < 0) return value;

		double valueRndInit;
		bool isPositive;
		if (value > 0) {
			valueRndInit = value;
			isPositive = true;
		} else if (value < 0) {
			valueRndInit = -value;
			isPositive = false;
		} else {
			valueRndInit = 0;
			isPositive = false;
			return 0;
		}
		if (places == 0) {
			if (isPositive) return std::floor(valueRndInit);
			return -std::floor(valueRndInit);
		}
		if (places == 1) {
			if (isPositive) return std::floor(valueRndInit / 1e2) * 1e2;
			return -std::floor(valueRndInit / 1e2) * 1e2;
		}
		if (places == 2) {
			if (isPositive) return std::floor(valueRndInit / 1e3) * 1e3;
			return -std::floor(valueRndInit / 1e3) * 1e3;
		}
		if (places == 3) {
			if (isPositive) return std::floor(valueRndInit / 1e4) * 1e4;
			return -std::floor(valueRndInit / 1e4) * 1e4;
		}
		if (places == 4) {
			if (isPositive) return std::floor(valueRndInit / 1e5) * 1e5;
			return -std::floor(valueRndInit / 1e5) * 1e5;
		}
		if (places == 5) {
			if (isPositive) return std::floor(valueRndInit / 1e6) * 1e6;
			return -std::floor(valueRndInit / 1e6) * 1e6;
		}
		if (places == 6) {
			if (isPositive) return std::floor(valueRndInit / 1e7) * 1e7;
			return -std::floor(valueRndInit / 1e7) * 1e7;
		}
		if (places == 7) {
			if (isPositive) return std::floor(valueRndInit / 1e8) * 1e8;
			return -std::floor(valueRndInit / 1e8) * 1e8;
		}
		if (places == 8) {
			if (isPositive) return std::floor(valueRndInit / 1e9) * 1e9;
			return -std::floor(valueRndInit / 1e9) * 1e9;
		}
		if (places == 9) {
			if (isPositive) return std::floor(valueRndInit / 1e10) * 1e10;
			return -std::floor(valueRndInit / 1e10) * 1e10;
		}
		if (places == 1) {
			if (isPositive) return std::floor(valueRndInit / 1e2) * 1e2;
			return -std::floor(valueRndInit / 1e2) * 1e2;
		}
		if (places == 2) {
			if (isPositive) return std::floor(valueRndInit / 1e3) * 1e3;
			return -std::floor(valueRndInit / 1e3) * 1e3;
		}
		if (places == 3) {
			if (isPositive) return std::floor(valueRndInit / 1e4) * 1e4;
			return -std::floor(valueRndInit / 1e4) * 1e4;
		}
		if (places == 4) {
			if (isPositive) return std::floor(valueRndInit / 1e5) * 1e5;
			return -std::floor(valueRndInit / 1e5) * 1e5;
		}
		if (places == 5) {
			if (isPositive) return std::floor(valueRndInit / 1e6) * 1e6;
			return -std::floor(valueRndInit / 1e6) * 1e6;
		}
		if (places == 6) {
			if (isPositive) return std::floor(valueRndInit / 1e7) * 1e7;
			return -std::floor(valueRndInit / 1e7) * 1e7;
		}
		if (places == 7) {
			if (isPositive) return std::floor(valueRndInit / 1e8) * 1e8;
			return -std::floor(valueRndInit / 1e8) * 1e8;
		}
		if (places == 8) {
			if (isPositive) return std::floor(valueRndInit / 1e9) * 1e9;
			return -std::floor(valueRndInit / 1e9) * 1e9;
		}
		if (places == 9) {
			if (isPositive) return std::floor(valueRndInit / 1e10) * 1e10;
			return -std::floor(valueRndInit / 1e10) * 1e10;
		}
		if (places == 10) {
			if (isPositive) return std::floor(valueRndInit / 1e11) * 1e11;
			return -std::floor(valueRndInit / 1e11) * 1e11;
		}
		if (places == 11) {
			if (isPositive) return std::floor(valueRndInit / 1e12) * 1e12;
			return -std::floor(valueRndInit / 1e12) * 1e12;
		}
		if (places == 12) {
			if (isPositive) return std::floor(valueRndInit / 1e13) * 1e13;
			return -std::floor(valueRndInit / 1e13) * 1e13;
		}
		if (places == 13) {
			if (isPositive) return std::floor(valueRndInit / 1e14) * 1e14;
			return -std::floor(valueRndInit / 1e14) * 1e14;
		}
		if (places == 14) {
			if (isPositive) return std::floor(valueRndInit / 1e15) * 1e15;
			return -std::floor(valueRndInit / 1e15) * 1e15;
		}
		if (places == 15) {
			if (isPositive) return std::floor(valueRndInit / 1e16) * 1e16;
			return -std::floor(valueRndInit / 1e16) * 1e16;
		}
		if (places == 16) {
			if (isPositive) return std::floor(valueRndInit / 1e17) * 1e17;
			return -std::floor(valueRndInit / 1e17) * 1e17;
		}
		if (places == 17) {
			if (isPositive) return std::floor(valueRndInit / 1e18) * 1e18;
			return -std::floor(valueRndInit / 1e18) * 1e18;
		}
		if (places == 18) {
			if (isPositive) return std::floor(valueRndInit / 1e19) * 1e19;
			return -std::floor(valueRndInit / 1e19) * 1e19;
		}
		if (places == 19) {
			if (isPositive) return std::floor(valueRndInit / 1e110) * 1e110;
			return -std::floor(valueRndInit / 1e110) * 1e110;
		}
		if (places == 11) {
			if (isPositive) return std::floor(valueRndInit / 1e12) * 1e12;
			return -std::floor(valueRndInit / 1e12) * 1e12;
		}
		if (places == 12) {
			if (isPositive) return std::floor(valueRndInit / 1e13) * 1e13;
			return -std::floor(valueRndInit / 1e13) * 1e13;
		}
		if (places == 13) {
			if (isPositive) return std::floor(valueRndInit / 1e14) * 1e14;
			return -std::floor(valueRndInit / 1e14) * 1e14;
		}
		if (places == 14) {
			if (isPositive) return std::floor(valueRndInit / 1e15) * 1e15;
			return -std::floor(valueRndInit / 1e15) * 1e15;
		}
		if (places == 15) {
			if (isPositive) return std::floor(valueRndInit / 1e16) * 1e16;
			return -std::floor(valueRndInit / 1e16) * 1e16;
		}
		if (places == 16) {
			if (isPositive) return std::floor(valueRndInit / 1e17) * 1e17;
			return -std::floor(valueRndInit / 1e17) * 1e17;
		}
		if (places == 17) {
			if (isPositive) return std::floor(valueRndInit / 1e18) * 1e18;
			return -std::floor(valueRndInit / 1e18) * 1e18;
		}
		if (places == 18) {
			if (isPositive) return std::floor(valueRndInit / 1e19) * 1e19;
			return -std::floor(valueRndInit / 1e19) * 1e19;
		}
		if (places == 19) {
			if (isPositive) return std::floor(valueRndInit / 1e20) * 1e20;
			return -std::floor(valueRndInit / 1e20) * 1e20;
		}
		double factor = std::floor(std::pow(10, places));
		if (isPositive) return std::floor(valueRndInit / factor) * factor;
		return -std::floor(valueRndInit / factor) * factor;

	}

	API_VISIBLE double MathFunctions::roundHalfUp(double value, int places) {
		return roundHalfUpWithCancel(value, places, 0);
	}

	API_VISIBLE double MathFunctions::roundHalfUpWithCancel(double value, int places, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(value)) return Double::NaN;
		if (places < 0) return Double::NaN;
		if (value == Double::NEGATIVE_INFINITY) return Double::NEGATIVE_INFINITY;
		if (value == Double::POSITIVE_INFINITY) return Double::POSITIVE_INFINITY;
		if (value == 0) return 0;
		double sign = 1;
		double origValue = value;
		if (value < 0) {
			sign = -1;
			value = -value;
		}
		int ulpPosition = MathFunctions::ulpDecimalDigitsBefore(value);
		if (ulpPosition <= 0) return sign * Math::floor(value);
		if (places > ulpPosition) return origValue;
		double multiplier = 1;
		for (int place = 0; place < places; place++) {
			multiplier = Math::floor(multiplier * 10);
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		}
		double valueMultiplied = value * multiplier;
		double valueFloor = Math::floor(valueMultiplied);
		if (Math::abs(valueMultiplied - valueFloor) >= 0.5) valueFloor = Math::floor(valueFloor + 1);
		return Math::floor(sign * valueFloor) / multiplier;
	}

	API_VISIBLE double MathFunctions::roundDown(double value, int places) {
		return roundDownWithCancel(value, places, 0);
	}

	API_VISIBLE double MathFunctions::roundDownWithCancel(double value, int places, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(value)) return Double::NaN;
		if (places < 0) return Double::NaN;
		if (value == Double::NEGATIVE_INFINITY) return Double::NEGATIVE_INFINITY;
		if (value == Double::POSITIVE_INFINITY) return Double::POSITIVE_INFINITY;
		if (value == 0) return 0;
		double sign = 1;
		double origValue = value;
		if (value < 0) {
			sign = -1;
			value = -value;
		}
		int ulpPosition = MathFunctions::ulpDecimalDigitsBefore(value);
		if (ulpPosition <= 0) return sign * Math::floor(value);
		if (places > ulpPosition) return origValue;
		double multiplier = 1;
		for (int place = 0; place < places; place++) {
			multiplier = Math::floor(multiplier * 10);
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		}
		double valueMultiplied = value * multiplier;
		double valueFloor = Math::floor(valueMultiplied);
		return Math::floor(sign * valueFloor) / multiplier;
	}

	API_VISIBLE double MathFunctions::roundUlp(double number) {
		if ((Double::isNaN(number)) || (Double::isInfinite(number)) || (number == 0))
			return number;
		else {
			int precision = MathFunctions::ulpDecimalDigitsBefore(number);
			if (precision >= 1)
				return MathFunctions::round(number, precision - 5);
			else if (precision == 0)
				return MathFunctions::round(number, 0);
			else return number;
		}
	}

	API_VISIBLE double MathFunctions::integerPart(double x) {
		if (x > 0) return Math::floor(x);
		else if (x < 0) return -Math::floor(-x);
		else return 0;
	}

	API_VISIBLE int MathFunctions::decimalDigitsBefore(double anyValue) {
		return Double::decimalDigitsBefore(anyValue);
	}

	API_VISIBLE double MathFunctions::ulp(double value) {
		return Double::ulp(value);
	}

	API_VISIBLE int MathFunctions::ulpDecimalDigitsBefore(double value) {
		return Double::ulpDecimalDigitsBefore(value);
	}

	API_VISIBLE int MathFunctions::decimalNumberLength(double value) {
		return Double::decimalNumberLength(value);
	}

	API_VISIBLE int MathFunctions::fractionalPartLength(double value) {
		return Double::fractionalPartLength(value);
	}


	API_VISIBLE double MathFunctions::lengthRound(double value) {
		return lengthRoundWithCancel(value, 0);
	}

	API_VISIBLE double MathFunctions::lengthRoundWithCancel(double value, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(value)) return value;
		if (Double::isInfinite(value)) return value;
		if (Double::doubleGoodToGo(value)) return value;
		if (ulpDecimalDigitsBefore(value) < 6) return value;
		int decPartLen = Double::fractionalPartLength(value);
		if (decPartLen < 11) return value;
		double valueRound = roundWithCancel(value, decPartLen - 2, cancelId);
		int decPartLenRound = fractionalPartLength(valueRound);
		double valueFinal;
		if (decPartLen - decPartLenRound >= 9) valueFinal = valueRound;
		else valueFinal = value;
		return Double::reParseDouble(valueFinal);
	}

	API_VISIBLE double MathFunctions::coalesce(const ArrayPtr<double> &values) {
		return coalesceWithCancel(values, 0);
	}

	API_VISIBLE double MathFunctions::coalesceWithCancel(const ArrayPtr<double> &values, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (values == nullptr) return Double::NaN;
		for (double v: *values) {
			if (!Double::isNaN(v)) return v;
			if (mXparser::isCalculationCancelled(cancelId)) return Double::NaN;
		}
		return Double::NaN;
	}

	bool API_VISIBLE MathFunctions::isInteger(double x) {
		if (Double::isNaN(x)) return false;
		if (x == Double::POSITIVE_INFINITY) return false;
		if (x == Double::NEGATIVE_INFINITY) return false;
		if (x < 0) x = -x;
		double round = Math::round(x);
		return Math::abs(x - round) < BinaryRelations::DEFAULT_COMPARISON_EPSILON;
	}

	bool API_VISIBLE MathFunctions::almostEqual(double a, double b) {
		if (Double::isNaN(a)) return false;
		if (Double::isNaN(b)) return false;
		if (a == b) return true;
		return Math::abs(a - b) <= BinaryRelations::DEFAULT_COMPARISON_EPSILON;
	}

	API_VISIBLE double MathFunctions::getFunctionValue(const ExpressionPtr &f, const ArgumentPtr &x, double x0) {
		return getFunctionValueWithCancel(f, x, x0, 0);
	}

	API_VISIBLE double MathFunctions::getFunctionValueWithCancel(const ExpressionPtr &f, const ArgumentPtr &x, double x0, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (x == nullptr) throw std::invalid_argument("MathFunctions.getFunctionValue requires a non-null argument");
		x->setArgumentValue(x0);
		if (f == nullptr) throw std::invalid_argument("MathFunctions.getFunctionValue requires a non-null expression");
		return f->calculateWithCancel(cancelId);
	}

	ArrayPtr<double> API_VISIBLE MathFunctions::getFunctionValues(const ExpressionPtr &f, const ArgumentPtr &index, double from,
	                                                  double to, double delta) {
		return getFunctionValuesWithCancel(f, index, from, to, delta, 0);
	}

	ArrayPtr<double> API_VISIBLE MathFunctions::getFunctionValuesWithCancel(const ExpressionPtr &f, const ArgumentPtr &index, double from,
	                                                  double to, double delta, int cancelId) {
		if (cancelId < 0 || cancelId > mXparser::MAX_CANCELLATION_TOKEN_ID)
			throw std::invalid_argument("cancelId out of range");
		if (Double::isNaN(delta) || Double::isNaN(from) || Double::isNaN(to) || delta == 0)
			return nullptr;
		int n = 0;
		ArrayPtr<double> values;
		if (to >= from && delta > 0) {
			for (double i = from; i < to; i += delta)
				n++;
			n++;
			values = new_double(n);
			int j = 0;
			for (double i = from; i < to; i += delta) {
				(*values)(j) = getFunctionValueWithCancel(f, index, i, cancelId);
				j++;
			}
			(*values)(j) = getFunctionValueWithCancel(f, index, to, cancelId);
		} else if (to <= from && delta < 0) {
			for (double i = from; i > to; i += delta)
				n++;
			n++;
			values = new_double(n);
			int j = 0;
			for (double i = from; i > to; i += delta) {
				(*values)(j) = getFunctionValueWithCancel(f, index, i, cancelId);
				j++;
			}
			(*values)(j) = getFunctionValueWithCancel(f, index, to, cancelId);
		} else if (from == to) {
			n = 1;
			values = new_double(n);
			(*values)(0) = getFunctionValueWithCancel(f, index, from, cancelId);
		} else values = nullptr;
		return values;
	}
} // org::mariuszgromada::math::mxparser::mathcollection