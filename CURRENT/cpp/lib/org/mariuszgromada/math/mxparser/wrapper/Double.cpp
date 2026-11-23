/*
 * @(#)Double.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"

#include <sstream>
#include <array>
#include <cstdint>
#include <cstring>
#include <string_view>
// Floating charconv arrived later than C++17 in several standard libraries.
// Unknown/older libraries retain the original stream implementation.
#if defined(__has_include)
#if __has_include(<charconv>)
#include <charconv>
#define MXPARSER_CANONICAL_CHARCONV_HEADER 1
#endif
#endif

#if defined(MXPARSER_CANONICAL_CHARCONV_HEADER)
#if defined(_MSVC_STL_UPDATE) && _MSVC_STL_UPDATE >= 202001L
#define MXPARSER_CANONICAL_FLOAT_CHARCONV 1
#elif defined(_GLIBCXX_RELEASE) && _GLIBCXX_RELEASE >= 11 && defined(__cpp_lib_to_chars)
#define MXPARSER_CANONICAL_FLOAT_CHARCONV 1
#elif defined(_LIBCPP_VERSION) && _LIBCPP_VERSION >= 200000 && !defined(__APPLE__)
#define MXPARSER_CANONICAL_FLOAT_CHARCONV 1
#endif
#endif
#undef MXPARSER_CANONICAL_CHARCONV_HEADER

#include <cfenv>
#include <cmath>
#include <locale>

namespace org::mariuszgromada::math::mxparser::wrapper {

	namespace {
#if defined(MXPARSER_CANONICAL_FLOAT_CHARCONV)
		bool canUseCanonicalCharconv() {
			return *SystemUtils::classicLocale == std::locale::classic()
				&& std::fegetround() == FE_TONEAREST;
		}

		// Finite double needs at most 309 integer digits, a sign, a dot and
		// 340 fractional digits.
		using CanonicalDecimalBuffer = std::array<char, 768>;

		std::string_view formatCanonicalDecimalInto(double value, int maxFractionDigits,
			int resultPrecisionChange, CanonicalDecimalBuffer& buffer) {
			int maxPrecision = Double::maxPossibleDecimalPrecision(value) + resultPrecisionChange;
			int precision = std::max(0, std::min(maxFractionDigits, maxPrecision));
			if (precision > 340) return {};
			auto converted = std::to_chars(buffer.data(), buffer.data() + buffer.size(),
				value, std::chars_format::fixed, precision);
			if (converted.ec != std::errc()) return {};
			std::string_view result(buffer.data(), converted.ptr - buffer.data());
			size_t dotPos = result.find_first_of('.');
			if (dotPos != std::string::npos) {
				size_t lastNon0Pos = result.find_last_not_of('0');
				if (lastNon0Pos == dotPos) lastNon0Pos--;
				result.remove_suffix(result.size() - lastNon0Pos - 1);
			}
			return result;
		}

#if defined(_MSC_VER)
		__declspec(noinline)
#endif
		int tryCanonicalFractionalPartLength(double value) {
			if (!canUseCanonicalCharconv()) return -1;
			CanonicalDecimalBuffer buffer;
			std::string_view formatted = formatCanonicalDecimalInto(value, 340, 0, buffer);
			if (formatted.empty()) return -1;
			size_t dot = formatted.find('.');
			if (dot == std::string_view::npos) return 0;
			return static_cast<int>(formatted.size() - 1 - dot);
		}

		// Keep the same formatted extraction and locale for the stream backend,
		// while reading the existing buffer instead of copying it into a stringbuf.
		class CanonicalDecimalInput : public std::streambuf {
		public:
			CanonicalDecimalInput(char* first, char* last) {
				setg(first, first, last);
			}
		};

		double parseCanonicalDecimalBuffer(char* first, size_t length) {
			char* last = first + length;
			double result;
#if !defined(__GLIBCXX__)
			auto converted = std::from_chars(first, last, result, std::chars_format::fixed);
			if (converted.ec == std::errc() && converted.ptr == last && std::isfinite(result)) return result;
#endif
			CanonicalDecimalInput input(first, last);
			std::istream stream(&input);
			stream.imbue(*SystemUtils::classicLocale);
			result = Double::NaN;
			stream >> result;
			return result;
		}

		// Keep these buffers off the exact-result path on MSVC-style toolchains.
#if defined(_MSC_VER)
		__declspec(noinline)
#endif
		bool tryReParseCanonicalDecimal(double value, int precisionChange, double& result) {
			if (!canUseCanonicalCharconv()) return false;
			CanonicalDecimalBuffer buffer;
			std::string_view normal = formatCanonicalDecimalInto(value, 340, 0, buffer);
			if (normal.empty()) return false;
			size_t dot = normal.find('.');
			if (normal.size() >= 9 && dot != std::string_view::npos && normal.size() - dot - 1 >= 6) {
				CanonicalDecimalBuffer shorterBuffer;
				std::string_view shorter = formatCanonicalDecimalInto(value, 340, precisionChange, shorterBuffer);
				if (shorter.empty()) return false;
				if (normal.size() - shorter.size() >= 4) {
					result = parseCanonicalDecimalBuffer(shorterBuffer.data(), shorter.size());
					return true;
				}
			}
			result = parseCanonicalDecimalBuffer(buffer.data(), normal.size());
			return true;
		}

#endif

		double parseCanonicalDecimal(const std::string& value) {
#if defined(MXPARSER_CANONICAL_FLOAT_CHARCONV) && !defined(__GLIBCXX__)
			// libstdc++ stream extraction can round differently from from_chars.
			// Keep that backend's established conversion below.
			if (canUseCanonicalCharconv()) {
				double result;
				auto converted = std::from_chars(value.data(), value.data() + value.size(),
					result, std::chars_format::fixed);
				if (converted.ec == std::errc() && converted.ptr == value.data() + value.size()
					&& std::isfinite(result)) return result;
			}
#endif
			return Double::parseDouble(value);
		}
	}

	API_VISIBLE bool Double::isNaN(double v) {
		return std::isnan(v);
	}

	API_VISIBLE bool Double::isNaN(long double v) {
		return std::isnan(v);
	}

	API_VISIBLE bool Double::isInfinite(double v) {
		return std::isinf(v);
	}

	API_VISIBLE bool Double::isInfinite(long double v) {
		return std::isinf(v);
	}

	API_VISIBLE StringPtr Double::toString(double number) {
		return S(decimalFormat(number));
	}

	API_VISIBLE std::string Double::toStringNarrow(double number) {
		return decimalFormat(number);
	}


	API_VISIBLE StringPtr Double::toString(long double number) {
		OSTRINGSTREAM oss;
		oss.imbue(*SystemUtils::classicLocale);
		oss.precision(std::numeric_limits<long double>::digits10 + 1);
		oss << number;
		return std::make_shared<String>(oss.str());
	}

	API_VISIBLE double Double::parseDouble(const String &strValue) {
		ISTRINGSTREAM iss(strValue);
		iss.imbue(*SystemUtils::classicLocale);
		double d = NaN;
		iss >> d;
		return d;
	}

	API_VISIBLE double Double::parseDouble(const StringPtr &strValue) {
		return parseDouble(*strValue);
	}

	API_VISIBLE double Double::parseDouble(const std::string &strValue) {
		std::istringstream iss(strValue);
		iss.imbue(*SystemUtils::classicLocale);
		double d = NaN;
		iss >> d;
		return d;
	}

	API_VISIBLE long double Double::parseLongDouble(const String &strValue) {
		ISTRINGSTREAM iss(strValue + UTF("L"));
		iss.imbue(*SystemUtils::classicLocale);
		long double ld = NaN_LONG;
		iss >> ld;
		return ld;
	}

	API_VISIBLE long double Double::parseLongDouble(const StringPtr &strValue) {
		return parseLongDouble(*strValue);
	}

	API_VISIBLE double Double::reParseDouble(double value) {
		if (doubleGoodToGo(value)) return value;
#ifdef _MSC_VER
		int percChange = -2;
#else
		int percChange = -1;
#endif
#if defined(MXPARSER_CANONICAL_FLOAT_CHARCONV)
		double result;
		if (tryReParseCanonicalDecimal(value, percChange, result)) return result;
#endif
		const std::string& valueStr = decimalFormat(value, 340, 0);
		if (valueStr.length() >= 9) {
			if (fractionalPartLength(valueStr) >= 6) {
				const std::string& valueStrTrunc = decimalFormat(value, 340, percChange);
				if (valueStr.length() - valueStrTrunc.length() >= 4) {
					return parseCanonicalDecimal(valueStrTrunc);
				}
			}
		}

		return parseCanonicalDecimal(valueStr);
	}

	API_VISIBLE double Double::toDouble(long double ld) {
		if (isNaN(ld)) return NaN;
		if (ld == POSITIVE_INFINITY_LONG) return POSITIVE_INFINITY;
		if (ld == NEGATIVE_INFINITY_LONG) return NEGATIVE_INFINITY;
		if (ld > MAX_VALUE) return POSITIVE_INFINITY;
		if (ld < MIN_VALUE) return NEGATIVE_INFINITY;
		return static_cast<double>(ld);
	}

	API_VISIBLE int Double::maxPossibleDecimalPrecision(double value) {
		if (isNaN(value)) return 0;
		if (isInfinite(value)) return 0;
		if (value > MAX_DIGITS10_VALUE) return 0;
		if (value < -MAX_DIGITS10_VALUE) return 0;
		int numIntDig;
		if (-1.0 < value && value < 1.0) numIntDig = 0;
		else if (-10.0 < value && value < 10.0) numIntDig = 1;
		else numIntDig = numberOfIntegerDigits(value) + 1;

		int decDigBefore = 0;
		if (numIntDig <= 0) decDigBefore = decimalDigitsBefore(value);

		int maxPrecision = MAX_DIGITS10 - numIntDig;

		if (decDigBefore > 0) maxPrecision += decDigBefore;
		if (maxPrecision < 0) maxPrecision = 0;
		return maxPrecision;
	}

	API_VISIBLE std::string Double::decimalFormat(double value, int maxFractionDigits, int resultPrecisionChange) {
#if defined(MXPARSER_CANONICAL_FLOAT_CHARCONV)
		if (std::isfinite(value) && resultPrecisionChange >= -340
				&& resultPrecisionChange <= 340 && canUseCanonicalCharconv()) {
			CanonicalDecimalBuffer buffer;
			std::string_view formatted = formatCanonicalDecimalInto(value, maxFractionDigits, resultPrecisionChange, buffer);
			if (!formatted.empty()) {
				std::string result;
				result.assign(buffer.data(), buffer.data() + formatted.size());
				return result;
			}
		}
#endif

		std::ostringstream out;
		out.imbue(*SystemUtils::classicLocale);

		int maxPrecision = maxPossibleDecimalPrecision(value) + resultPrecisionChange;

		int precision = std::max(0, std::min(maxFractionDigits, maxPrecision));

		out.precision(precision);
		out << std::fixed << value;

		std::string result = out.str();

		size_t dotPos = result.find_first_of('.');
		if (dotPos != std::string::npos) {
			size_t lastNon0Pos = result.find_last_not_of('0');
			if (lastNon0Pos == dotPos) lastNon0Pos--;
			result.erase(lastNon0Pos + 1);
		}
		return result;
	}

	API_VISIBLE std::string Double::decimalFormat(double value, int maxFractionDigits) {
		return decimalFormat(value, maxFractionDigits, 0);
	}

	API_VISIBLE std::string Double::decimalFormat(double value) {
		return decimalFormat(value, 340);
	}

	API_VISIBLE int Double::decimalNumberLength(double value) {
		return static_cast<int>(decimalFormat(value, 340).length());
	}

	API_VISIBLE int Double::fractionalPartLength(const std::string &valueStr) {
		size_t dotPos = valueStr.find('.');
		if (dotPos == std::string::npos) return 0;
		return static_cast<int>(valueStr.length() - 1 - dotPos);
	}

	API_VISIBLE int Double::fractionalPartLength(double value) {
		if (isNaN(value)) return 0;
		if (isInfinite(value)) return 0;
		if (ulpDecimalDigitsBefore(value) <= 0) return 0;
		return formattedFractionalPartLength(value);
	}

	int Double::formattedFractionalPartLength(double value) {
#if defined(MXPARSER_CANONICAL_FLOAT_CHARCONV)
		int length = tryCanonicalFractionalPartLength(value);
		if (length >= 0) return length;
#endif
		std::string valueStr = decimalFormat(value, 340);
		return fractionalPartLength(valueStr);
	}

	API_VISIBLE double Double::lengthRound(double value) {
		if (doubleGoodToGo(value)) return value;
		const std::string& valueStr = decimalFormat(value, 340, 0);
		if (valueStr.length() < 9) return value;
		if (fractionalPartLength(valueStr) < 6) return value;
		const std::string& valueStrTrunc = decimalFormat(value, 340, -1);
		if (valueStr.length() - valueStrTrunc.length() >= 4)
			return parseDouble(valueStrTrunc);
		return value;
	}

	API_VISIBLE double Double::ulp(double x) {
		if (isInfinite(x) || isNaN(x)) {
			return NaN;
		}

		int exponent;
		std::frexp(x, &exponent);
		return std::ldexp(1.0, exponent - std::numeric_limits<double>::digits);
	}

	namespace {
		int digitLookupBinaryExponent(double value) {
			std::uint64_t bits;
			std::memcpy(&bits, &value, sizeof(bits));
			return static_cast<int>((bits >> 52) & 0x7ff) - 1023;
		}

		constexpr int MIN_LOOKUP_ULP_EXPONENT = -64;
		constexpr int MAX_LOOKUP_ULP_EXPONENT = 51;

		const auto& ulpDigitPlaces() {
			static const auto places = [] {
				std::array<short, MAX_LOOKUP_ULP_EXPONENT - MIN_LOOKUP_ULP_EXPONENT + 1> result{};
				for (int exponent = MIN_LOOKUP_ULP_EXPONENT; exponent <= MAX_LOOKUP_ULP_EXPONENT; exponent++) {
					double u = std::ldexp(1.0, exponent - 52);
					result[exponent - MIN_LOOKUP_ULP_EXPONENT] = static_cast<short>(Double::decimalDigitsBefore(u));
				}
				return result;
			}();
			return places;
		}
	}

	API_VISIBLE int Double::ulpDecimalDigitsBefore(double value) {
		// For these normal doubles the ULP depends only on the binary exponent.
		int exponent = digitLookupBinaryExponent(value);
		if (exponent >= MIN_LOOKUP_ULP_EXPONENT && exponent <= MAX_LOOKUP_ULP_EXPONENT)
			return ulpDigitPlaces()[exponent - MIN_LOOKUP_ULP_EXPONENT];
		if (isNaN(value)) return -2;
		double u = ulp(value);
		return decimalDigitsBefore(u);
	}

	API_VISIBLE bool Double::doubleGoodToGo(double value) {
		if (isNaN(value) || isInfinite(value)) return true;
		if (value == 0 || value == -1 || value == 1 || value == -2 || value == 2 || value == -3 || value == 3) return true;
		if (value == -4 || value == 4 || value == -5 || value == 5 || value == -6 || value == 6) return true;
		if (value == -7 || value == 7 || value == -8 || value == 8 || value == -9 || value == 9) return true;
		if (value == -10 || value == 10 || value == -11 || value == 11 || value == -12 || value == 12) return true;
		if (value < -MAX_DIGITS10_VALUE || value > MAX_DIGITS10_VALUE) return true;
		if (value == std::round(value)) return true;
		return false;
	}

	namespace {
		constexpr double FRACTIONAL_DIGIT_THRESHOLDS[] = {
			1e0, 1e-1, 1e-2, 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9,
			1e-10, 1e-11, 1e-12, 1e-13, 1e-14, 1e-15, 1e-16, 1e-17, 1e-18, 1e-19,
			1e-20, 1e-21, 1e-22, 1e-23, 1e-24, 1e-25, 1e-26, 1e-27, 1e-28, 1e-29,
			1e-30, 1e-31, 1e-32, 1e-33, 1e-34, 1e-35, 1e-36, 1e-37, 1e-38, 1e-39,
			1e-40, 1e-41, 1e-42, 1e-43, 1e-44, 1e-45, 1e-46, 1e-47, 1e-48, 1e-49,
			1e-50, 1e-51, 1e-52, 1e-53, 1e-54, 1e-55, 1e-56, 1e-57, 1e-58, 1e-59,
			1e-60, 1e-61, 1e-62, 1e-63, 1e-64, 1e-65, 1e-66, 1e-67, 1e-68, 1e-69,
			1e-70, 1e-71, 1e-72, 1e-73, 1e-74, 1e-75, 1e-76, 1e-77, 1e-78, 1e-79,
			1e-80, 1e-81, 1e-82, 1e-83, 1e-84, 1e-85, 1e-86, 1e-87, 1e-88, 1e-89,
			1e-90, 1e-91, 1e-92, 1e-93, 1e-94, 1e-95, 1e-96, 1e-97, 1e-98, 1e-99,
			1e-100, 1e-101, 1e-102, 1e-103, 1e-104, 1e-105, 1e-106, 1e-107, 1e-108, 1e-109,
			1e-110, 1e-111, 1e-112, 1e-113, 1e-114, 1e-115, 1e-116, 1e-117, 1e-118, 1e-119,
			1e-120, 1e-121, 1e-122, 1e-123, 1e-124, 1e-125, 1e-126, 1e-127, 1e-128, 1e-129,
			1e-130, 1e-131, 1e-132, 1e-133, 1e-134, 1e-135, 1e-136, 1e-137, 1e-138, 1e-139,
			1e-140, 1e-141, 1e-142, 1e-143, 1e-144, 1e-145, 1e-146, 1e-147, 1e-148, 1e-149,
			1e-150, 1e-151, 1e-152, 1e-153, 1e-154, 1e-155, 1e-156, 1e-157, 1e-158, 1e-159,
			1e-160, 1e-161, 1e-162, 1e-163, 1e-164, 1e-165, 1e-166, 1e-167, 1e-168, 1e-169,
			1e-170, 1e-171, 1e-172, 1e-173, 1e-174, 1e-175, 1e-176, 1e-177, 1e-178, 1e-179,
			1e-180, 1e-181, 1e-182, 1e-183, 1e-184, 1e-185, 1e-186, 1e-187, 1e-188, 1e-189,
			1e-190, 1e-191, 1e-192, 1e-193, 1e-194, 1e-195, 1e-196, 1e-197, 1e-198, 1e-199,
			1e-200, 1e-201, 1e-202, 1e-203, 1e-204, 1e-205, 1e-206, 1e-207, 1e-208, 1e-209,
			1e-210, 1e-211, 1e-212, 1e-213, 1e-214, 1e-215, 1e-216, 1e-217, 1e-218, 1e-219,
			1e-220, 1e-221, 1e-222, 1e-223, 1e-224, 1e-225, 1e-226, 1e-227, 1e-228, 1e-229,
			1e-230, 1e-231, 1e-232, 1e-233, 1e-234, 1e-235, 1e-236, 1e-237, 1e-238, 1e-239,
			1e-240, 1e-241, 1e-242, 1e-243, 1e-244, 1e-245, 1e-246, 1e-247, 1e-248, 1e-249,
			1e-250, 1e-251, 1e-252, 1e-253, 1e-254, 1e-255, 1e-256, 1e-257, 1e-258, 1e-259,
			1e-260, 1e-261, 1e-262, 1e-263, 1e-264, 1e-265, 1e-266, 1e-267, 1e-268, 1e-269,
			1e-270, 1e-271, 1e-272, 1e-273, 1e-274, 1e-275, 1e-276, 1e-277, 1e-278, 1e-279,
			1e-280, 1e-281, 1e-282, 1e-283, 1e-284, 1e-285, 1e-286, 1e-287, 1e-288, 1e-289,
			1e-290, 1e-291, 1e-292, 1e-293, 1e-294, 1e-295, 1e-296, 1e-297, 1e-298, 1e-299,
			1e-300, 1e-301, 1e-302, 1e-303, 1e-304, 1e-305, 1e-306, 1e-307, 1e-308, 1e-309,
			1e-310, 1e-311, 1e-312, 1e-313, 1e-314, 1e-315, 1e-316, 1e-317, 1e-318, 1e-319,
			1e-320, 1e-321, 1e-322
		};
	}

	API_VISIBLE int Double::decimalDigitsBefore(double anyValue) {
		double value = std::abs(anyValue);
		if (!(value < 1)) return -1;

		int exponent = digitLookupBinaryExponent(value);
		if (exponent == -1023) {
			int lower = 307, upper = 322;
			while (lower < upper) {
				int middle = (lower + upper + 1) / 2;
				if (value < FRACTIONAL_DIGIT_THRESHOLDS[middle]) lower = middle;
				else upper = middle - 1;
			}
			return lower;
		}

		// 1233 / 4096 approximates log10(2). The stored thresholds decide the result.
		int places = -exponent * 1233 >> 12;
		if (value < FRACTIONAL_DIGIT_THRESHOLDS[places + 1]) return places + 1;
		if (value >= FRACTIONAL_DIGIT_THRESHOLDS[places]) return places - 1;
		return places;
	}

	namespace {
		constexpr double INTEGER_DIGIT_THRESHOLDS[] = {
			1e0, 1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8, 1e9,
			1e10, 1e11, 1e12, 1e13, 1e14, 1e15, 1e16, 1e17, 1e18, 1e19,
			1e20, 1e21, 1e22, 1e23, 1e24, 1e25, 1e26, 1e27, 1e28, 1e29,
			1e30, 1e31, 1e32, 1e33, 1e34, 1e35, 1e36, 1e37, 1e38, 1e39,
			1e40, 1e41, 1e42, 1e43, 1e44, 1e45, 1e46, 1e47, 1e48, 1e49,
			1e50, 1e51, 1e52, 1e53, 1e54, 1e55, 1e56, 1e57, 1e58, 1e59,
			1e60, 1e61, 1e62, 1e63, 1e64, 1e65, 1e66, 1e67, 1e68, 1e69,
			1e70, 1e71, 1e72, 1e73, 1e74, 1e75, 1e76, 1e77, 1e78, 1e79,
			1e80, 1e81, 1e82, 1e83, 1e84, 1e85, 1e86, 1e87, 1e88, 1e89,
			1e90, 1e91, 1e92, 1e93, 1e94, 1e95, 1e96, 1e97, 1e98, 1e99,
			1e100, 1e101, 1e102, 1e103, 1e104, 1e105, 1e106, 1e107, 1e108, 1e109,
			1e110, 1e111, 1e112, 1e113, 1e114, 1e115, 1e116, 1e117, 1e118, 1e119,
			1e120, 1e121, 1e122, 1e123, 1e124, 1e125, 1e126, 1e127, 1e128, 1e129,
			1e130, 1e131, 1e132, 1e133, 1e134, 1e135, 1e136, 1e137, 1e138, 1e139,
			1e140, 1e141, 1e142, 1e143, 1e144, 1e145, 1e146, 1e147, 1e148, 1e149,
			1e150, 1e151, 1e152, 1e153, 1e154, 1e155, 1e156, 1e157, 1e158, 1e159,
			1e160, 1e161, 1e162, 1e163, 1e164, 1e165, 1e166, 1e167, 1e168, 1e169,
			1e170, 1e171, 1e172, 1e173, 1e174, 1e175, 1e176, 1e177, 1e178, 1e179,
			1e180, 1e181, 1e182, 1e183, 1e184, 1e185, 1e186, 1e187, 1e188, 1e189,
			1e190, 1e191, 1e192, 1e193, 1e194, 1e195, 1e196, 1e197, 1e198, 1e199,
			1e200
		};
	}

	API_VISIBLE int Double::numberOfIntegerDigits(double anyValue) {
		double value = std::abs(anyValue);
		if (value < 1) return 0;
		if (value < 10) return 1;
		// The legacy native wrapper returns 309 at and above 1e200 and for nonfinite inputs.
		if (!(value < INTEGER_DIGIT_THRESHOLDS[200])) return 309;

		// Use the same exponent estimate and exact threshold correction as NumberTheory.
		int places = digitLookupBinaryExponent(value) * 1233 >> 12;
		if (value >= INTEGER_DIGIT_THRESHOLDS[places + 1]) return places + 2;
		if (value < INTEGER_DIGIT_THRESHOLDS[places]) return places;
		return places + 1;
	}
} // namespace org::mariuszgromada::math::mxparser::wrapper
#undef MXPARSER_CANONICAL_FLOAT_CHARCONV
