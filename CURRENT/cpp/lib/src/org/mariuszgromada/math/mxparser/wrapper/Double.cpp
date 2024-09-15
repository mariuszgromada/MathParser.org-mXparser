/*
 * @(#)Double.cpp        6.1.0    2024-09-15
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

namespace org::mariuszgromada::math::mxparser::wrapper {

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

		const std::string& valueStr = decimalFormat(value, 340, 0);
		const std::string& valueStrToReParse = valueStr;
		if (valueStr.length() >= 9) {

#ifdef _MSC_VER
			int percChange = -2;
#else
			int percChange = -1;
#endif
			if (fractionalPartLength(valueStr) >= 6) {
				const std::string& valueStrTrunc = decimalFormat(value, 340, percChange);
				if (valueStr.length() - valueStrTrunc.length() >= 4) {
					return parseDouble(valueStrTrunc);
				}
			}
		}

		return parseDouble(valueStrToReParse);
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

	API_VISIBLE int Double::ulpDecimalDigitsBefore(double value) {
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

	API_VISIBLE int Double::decimalDigitsBefore(double anyValue) {
		double value;

		if (anyValue >= 0) value = anyValue;
		else value = -anyValue;

		if (value >= 1) return -1;

		if (value < 1.0e-200) {
			if (value < 1.0e-322) return 322;
			if (value < 1.0e-321) return 321;
			if (value < 1.0e-320) return 320;
			if (value < 1.0e-319) return 319;
			if (value < 1.0e-318) return 318;
			if (value < 1.0e-317) return 317;
			if (value < 1.0e-316) return 316;
			if (value < 1.0e-315) return 315;
			if (value < 1.0e-314) return 314;
			if (value < 1.0e-313) return 313;
			if (value < 1.0e-312) return 312;
			if (value < 1.0e-311) return 311;
			if (value < 1.0e-310) return 310;
			if (value < 1.0e-309) return 309;
			if (value < 1.0e-308) return 308;
			if (value < 1.0e-307) return 307;
			if (value < 1.0e-306) return 306;
			if (value < 1.0e-305) return 305;
			if (value < 1.0e-304) return 304;
			if (value < 1.0e-303) return 303;
			if (value < 1.0e-302) return 302;
			if (value < 1.0e-301) return 301;
			if (value < 1.0e-300) return 300;
			if (value < 1.0e-299) return 299;
			if (value < 1.0e-298) return 298;
			if (value < 1.0e-297) return 297;
			if (value < 1.0e-296) return 296;
			if (value < 1.0e-295) return 295;
			if (value < 1.0e-294) return 294;
			if (value < 1.0e-293) return 293;
			if (value < 1.0e-292) return 292;
			if (value < 1.0e-291) return 291;
			if (value < 1.0e-290) return 290;
			if (value < 1.0e-289) return 289;
			if (value < 1.0e-288) return 288;
			if (value < 1.0e-287) return 287;
			if (value < 1.0e-286) return 286;
			if (value < 1.0e-285) return 285;
			if (value < 1.0e-284) return 284;
			if (value < 1.0e-283) return 283;
			if (value < 1.0e-282) return 282;
			if (value < 1.0e-281) return 281;
			if (value < 1.0e-280) return 280;
			if (value < 1.0e-279) return 279;
			if (value < 1.0e-278) return 278;
			if (value < 1.0e-277) return 277;
			if (value < 1.0e-276) return 276;
			if (value < 1.0e-275) return 275;
			if (value < 1.0e-274) return 274;
			if (value < 1.0e-273) return 273;
			if (value < 1.0e-272) return 272;
			if (value < 1.0e-271) return 271;
			if (value < 1.0e-270) return 270;
			if (value < 1.0e-269) return 269;
			if (value < 1.0e-268) return 268;
			if (value < 1.0e-267) return 267;
			if (value < 1.0e-266) return 266;
			if (value < 1.0e-265) return 265;
			if (value < 1.0e-264) return 264;
			if (value < 1.0e-263) return 263;
			if (value < 1.0e-262) return 262;
			if (value < 1.0e-261) return 261;
			if (value < 1.0e-260) return 260;
			if (value < 1.0e-259) return 259;
			if (value < 1.0e-258) return 258;
			if (value < 1.0e-257) return 257;
			if (value < 1.0e-256) return 256;
			if (value < 1.0e-255) return 255;
			if (value < 1.0e-254) return 254;
			if (value < 1.0e-253) return 253;
			if (value < 1.0e-252) return 252;
			if (value < 1.0e-251) return 251;
			if (value < 1.0e-250) return 250;
			if (value < 1.0e-249) return 249;
			if (value < 1.0e-248) return 248;
			if (value < 1.0e-247) return 247;
			if (value < 1.0e-246) return 246;
			if (value < 1.0e-245) return 245;
			if (value < 1.0e-244) return 244;
			if (value < 1.0e-243) return 243;
			if (value < 1.0e-242) return 242;
			if (value < 1.0e-241) return 241;
			if (value < 1.0e-240) return 240;
			if (value < 1.0e-239) return 239;
			if (value < 1.0e-238) return 238;
			if (value < 1.0e-237) return 237;
			if (value < 1.0e-236) return 236;
			if (value < 1.0e-235) return 235;
			if (value < 1.0e-234) return 234;
			if (value < 1.0e-233) return 233;
			if (value < 1.0e-232) return 232;
			if (value < 1.0e-231) return 231;
			if (value < 1.0e-230) return 230;
			if (value < 1.0e-229) return 229;
			if (value < 1.0e-228) return 228;
			if (value < 1.0e-227) return 227;
			if (value < 1.0e-226) return 226;
			if (value < 1.0e-225) return 225;
			if (value < 1.0e-224) return 224;
			if (value < 1.0e-223) return 223;
			if (value < 1.0e-222) return 222;
			if (value < 1.0e-221) return 221;
			if (value < 1.0e-220) return 220;
			if (value < 1.0e-219) return 219;
			if (value < 1.0e-218) return 218;
			if (value < 1.0e-217) return 217;
			if (value < 1.0e-216) return 216;
			if (value < 1.0e-215) return 215;
			if (value < 1.0e-214) return 214;
			if (value < 1.0e-213) return 213;
			if (value < 1.0e-212) return 212;
			if (value < 1.0e-211) return 211;
			if (value < 1.0e-210) return 210;
			if (value < 1.0e-209) return 209;
			if (value < 1.0e-208) return 208;
			if (value < 1.0e-207) return 207;
			if (value < 1.0e-206) return 206;
			if (value < 1.0e-205) return 205;
			if (value < 1.0e-204) return 204;
			if (value < 1.0e-203) return 203;
			if (value < 1.0e-202) return 202;
			if (value < 1.0e-201) return 201;
			/* if (value < 1.0e-200) */ return 200;
		}
		if (value < 1.0e-100) {
			if (value < 1.0e-199) return 199;
			if (value < 1.0e-198) return 198;
			if (value < 1.0e-197) return 197;
			if (value < 1.0e-196) return 196;
			if (value < 1.0e-195) return 195;
			if (value < 1.0e-194) return 194;
			if (value < 1.0e-193) return 193;
			if (value < 1.0e-192) return 192;
			if (value < 1.0e-191) return 191;
			if (value < 1.0e-190) return 190;
			if (value < 1.0e-189) return 189;
			if (value < 1.0e-188) return 188;
			if (value < 1.0e-187) return 187;
			if (value < 1.0e-186) return 186;
			if (value < 1.0e-185) return 185;
			if (value < 1.0e-184) return 184;
			if (value < 1.0e-183) return 183;
			if (value < 1.0e-182) return 182;
			if (value < 1.0e-181) return 181;
			if (value < 1.0e-180) return 180;
			if (value < 1.0e-179) return 179;
			if (value < 1.0e-178) return 178;
			if (value < 1.0e-177) return 177;
			if (value < 1.0e-176) return 176;
			if (value < 1.0e-175) return 175;
			if (value < 1.0e-174) return 174;
			if (value < 1.0e-173) return 173;
			if (value < 1.0e-172) return 172;
			if (value < 1.0e-171) return 171;
			if (value < 1.0e-170) return 170;
			if (value < 1.0e-169) return 169;
			if (value < 1.0e-168) return 168;
			if (value < 1.0e-167) return 167;
			if (value < 1.0e-166) return 166;
			if (value < 1.0e-165) return 165;
			if (value < 1.0e-164) return 164;
			if (value < 1.0e-163) return 163;
			if (value < 1.0e-162) return 162;
			if (value < 1.0e-161) return 161;
			if (value < 1.0e-160) return 160;
			if (value < 1.0e-159) return 159;
			if (value < 1.0e-158) return 158;
			if (value < 1.0e-157) return 157;
			if (value < 1.0e-156) return 156;
			if (value < 1.0e-155) return 155;
			if (value < 1.0e-154) return 154;
			if (value < 1.0e-153) return 153;
			if (value < 1.0e-152) return 152;
			if (value < 1.0e-151) return 151;
			if (value < 1.0e-150) return 150;
			if (value < 1.0e-149) return 149;
			if (value < 1.0e-148) return 148;
			if (value < 1.0e-147) return 147;
			if (value < 1.0e-146) return 146;
			if (value < 1.0e-145) return 145;
			if (value < 1.0e-144) return 144;
			if (value < 1.0e-143) return 143;
			if (value < 1.0e-142) return 142;
			if (value < 1.0e-141) return 141;
			if (value < 1.0e-140) return 140;
			if (value < 1.0e-139) return 139;
			if (value < 1.0e-138) return 138;
			if (value < 1.0e-137) return 137;
			if (value < 1.0e-136) return 136;
			if (value < 1.0e-135) return 135;
			if (value < 1.0e-134) return 134;
			if (value < 1.0e-133) return 133;
			if (value < 1.0e-132) return 132;
			if (value < 1.0e-131) return 131;
			if (value < 1.0e-130) return 130;
			if (value < 1.0e-129) return 129;
			if (value < 1.0e-128) return 128;
			if (value < 1.0e-127) return 127;
			if (value < 1.0e-126) return 126;
			if (value < 1.0e-125) return 125;
			if (value < 1.0e-124) return 124;
			if (value < 1.0e-123) return 123;
			if (value < 1.0e-122) return 122;
			if (value < 1.0e-121) return 121;
			if (value < 1.0e-120) return 120;
			if (value < 1.0e-119) return 119;
			if (value < 1.0e-118) return 118;
			if (value < 1.0e-117) return 117;
			if (value < 1.0e-116) return 116;
			if (value < 1.0e-115) return 115;
			if (value < 1.0e-114) return 114;
			if (value < 1.0e-113) return 113;
			if (value < 1.0e-112) return 112;
			if (value < 1.0e-111) return 111;
			if (value < 1.0e-110) return 110;
			if (value < 1.0e-109) return 109;
			if (value < 1.0e-108) return 108;
			if (value < 1.0e-107) return 107;
			if (value < 1.0e-106) return 106;
			if (value < 1.0e-105) return 105;
			if (value < 1.0e-104) return 104;
			if (value < 1.0e-103) return 103;
			if (value < 1.0e-102) return 102;
			if (value < 1.0e-101) return 101;
			/* if (value < 1.0e-100) */ return 100;
		}

		if (value < 1.0e-50) {
			if (value < 1.0e-99) return 99;
			if (value < 1.0e-98) return 98;
			if (value < 1.0e-97) return 97;
			if (value < 1.0e-96) return 96;
			if (value < 1.0e-95) return 95;
			if (value < 1.0e-94) return 94;
			if (value < 1.0e-93) return 93;
			if (value < 1.0e-92) return 92;
			if (value < 1.0e-91) return 91;
			if (value < 1.0e-90) return 90;
			if (value < 1.0e-89) return 89;
			if (value < 1.0e-88) return 88;
			if (value < 1.0e-87) return 87;
			if (value < 1.0e-86) return 86;
			if (value < 1.0e-85) return 85;
			if (value < 1.0e-84) return 84;
			if (value < 1.0e-83) return 83;
			if (value < 1.0e-82) return 82;
			if (value < 1.0e-81) return 81;
			if (value < 1.0e-80) return 80;
			if (value < 1.0e-79) return 79;
			if (value < 1.0e-78) return 78;
			if (value < 1.0e-77) return 77;
			if (value < 1.0e-76) return 76;
			if (value < 1.0e-75) return 75;
			if (value < 1.0e-74) return 74;
			if (value < 1.0e-73) return 73;
			if (value < 1.0e-72) return 72;
			if (value < 1.0e-71) return 71;
			if (value < 1.0e-70) return 70;
			if (value < 1.0e-69) return 69;
			if (value < 1.0e-68) return 68;
			if (value < 1.0e-67) return 67;
			if (value < 1.0e-66) return 66;
			if (value < 1.0e-65) return 65;
			if (value < 1.0e-64) return 64;
			if (value < 1.0e-63) return 63;
			if (value < 1.0e-62) return 62;
			if (value < 1.0e-61) return 61;
			if (value < 1.0e-60) return 60;
			if (value < 1.0e-59) return 59;
			if (value < 1.0e-58) return 58;
			if (value < 1.0e-57) return 57;
			if (value < 1.0e-56) return 56;
			if (value < 1.0e-55) return 55;
			if (value < 1.0e-54) return 54;
			if (value < 1.0e-53) return 53;
			if (value < 1.0e-52) return 52;
			if (value < 1.0e-51) return 51;
			/* if (value < 1.0e-50) */ return 50;
		}

		if (value < 1.0e-20) {
			if (value < 1.0e-49) return 49;
			if (value < 1.0e-48) return 48;
			if (value < 1.0e-47) return 47;
			if (value < 1.0e-46) return 46;
			if (value < 1.0e-45) return 45;
			if (value < 1.0e-44) return 44;
			if (value < 1.0e-43) return 43;
			if (value < 1.0e-42) return 42;
			if (value < 1.0e-41) return 41;
			if (value < 1.0e-40) return 40;
			if (value < 1.0e-39) return 39;
			if (value < 1.0e-38) return 38;
			if (value < 1.0e-37) return 37;
			if (value < 1.0e-36) return 36;
			if (value < 1.0e-35) return 35;
			if (value < 1.0e-34) return 34;
			if (value < 1.0e-33) return 33;
			if (value < 1.0e-32) return 32;
			if (value < 1.0e-31) return 31;
			if (value < 1.0e-30) return 30;
			if (value < 1.0e-29) return 29;
			if (value < 1.0e-28) return 28;
			if (value < 1.0e-27) return 27;
			if (value < 1.0e-26) return 26;
			if (value < 1.0e-25) return 25;
			if (value < 1.0e-24) return 24;
			if (value < 1.0e-23) return 23;
			if (value < 1.0e-22) return 22;
			if (value < 1.0e-21) return 21;
			/* if (value < 1.0e-20) */ return 20;
		}

		if (value < 1.0e-10) {
			if (value < 1.0e-19) return 19;
			if (value < 1.0e-18) return 18;
			if (value < 1.0e-17) return 17;
			if (value < 1.0e-16) return 16;
			if (value < 1.0e-15) return 15;
			if (value < 1.0e-14) return 14;
			if (value < 1.0e-13) return 13;
			if (value < 1.0e-12) return 12;
			if (value < 1.0e-11) return 11;
			/* if (value < 1.0e-10) */ return 10;
		}

		if (value < 1.0e-5) {
			if (value < 1.0e-9) return 9;
			if (value < 1.0e-8) return 8;
			if (value < 1.0e-7) return 7;
			if (value < 1.0e-6) return 6;
			/* if (value < 1.0e-5) */ return 5;
		}

		if (value < 1.0e-4) return 4;
		if (value < 1.0e-3) return 3;
		if (value < 1.0e-2) return 2;
		if (value < 1.0e-1) return 1;
		if (value < 1.0e-0) return 0;

		return -1;
	}

	API_VISIBLE int Double::numberOfIntegerDigits(double anyValue) {
		double value;
		if (anyValue >= 0) value = anyValue;
		else value = -anyValue;

		if (value < 1.0e5) {
			if (value < 1.0) return 0;
			if (value < 1.0e1) return 1;
			if (value < 1.0e2) return 2;
			if (value < 1.0e3) return 3;
			if (value < 1.0e4) return 4;
			/* if (value < 1.0e5) */ return 5;
		}

		if (value < 1.0e10) {
			if (value < 1.0e6) return 6;
			if (value < 1.0e7) return 7;
			if (value < 1.0e8) return 8;
			if (value < 1.0e9) return 9;
			/* if (value < 1.0e10) */ return 10;
		}

		if (value < 1.0e20) {
			if (value < 1.0e11) return 11;
			if (value < 1.0e12) return 12;
			if (value < 1.0e13) return 13;
			if (value < 1.0e14) return 14;
			if (value < 1.0e15) return 15;
			if (value < 1.0e16) return 16;
			if (value < 1.0e17) return 17;
			if (value < 1.0e18) return 18;
			if (value < 1.0e19) return 19;
			/* if (value < 1.0e20) */ return 20;
		}

		if (value < 1.0e50) {
			if (value < 1.0e21) return 21;
			if (value < 1.0e22) return 22;
			if (value < 1.0e23) return 23;
			if (value < 1.0e24) return 24;
			if (value < 1.0e25) return 25;
			if (value < 1.0e26) return 26;
			if (value < 1.0e27) return 27;
			if (value < 1.0e28) return 28;
			if (value < 1.0e29) return 29;
			if (value < 1.0e30) return 30;
			if (value < 1.0e31) return 31;
			if (value < 1.0e32) return 32;
			if (value < 1.0e33) return 33;
			if (value < 1.0e34) return 34;
			if (value < 1.0e35) return 35;
			if (value < 1.0e36) return 36;
			if (value < 1.0e37) return 37;
			if (value < 1.0e38) return 38;
			if (value < 1.0e39) return 39;
			if (value < 1.0e40) return 40;
			if (value < 1.0e41) return 41;
			if (value < 1.0e42) return 42;
			if (value < 1.0e43) return 43;
			if (value < 1.0e44) return 44;
			if (value < 1.0e45) return 45;
			if (value < 1.0e46) return 46;
			if (value < 1.0e47) return 47;
			if (value < 1.0e48) return 48;
			if (value < 1.0e49) return 49;
			/* if (value < 1.0e50) */ return 50;
		}

		if (value < 1.0e100) {
			if (value < 1.0e51) return 51;
			if (value < 1.0e52) return 52;
			if (value < 1.0e53) return 53;
			if (value < 1.0e54) return 54;
			if (value < 1.0e55) return 55;
			if (value < 1.0e56) return 56;
			if (value < 1.0e57) return 57;
			if (value < 1.0e58) return 58;
			if (value < 1.0e59) return 59;
			if (value < 1.0e60) return 60;
			if (value < 1.0e61) return 61;
			if (value < 1.0e62) return 62;
			if (value < 1.0e63) return 63;
			if (value < 1.0e64) return 64;
			if (value < 1.0e65) return 65;
			if (value < 1.0e66) return 66;
			if (value < 1.0e67) return 67;
			if (value < 1.0e68) return 68;
			if (value < 1.0e69) return 69;
			if (value < 1.0e70) return 70;
			if (value < 1.0e71) return 71;
			if (value < 1.0e72) return 72;
			if (value < 1.0e73) return 73;
			if (value < 1.0e74) return 74;
			if (value < 1.0e75) return 75;
			if (value < 1.0e76) return 76;
			if (value < 1.0e77) return 77;
			if (value < 1.0e78) return 78;
			if (value < 1.0e79) return 79;
			if (value < 1.0e80) return 80;
			if (value < 1.0e81) return 81;
			if (value < 1.0e82) return 82;
			if (value < 1.0e83) return 83;
			if (value < 1.0e84) return 84;
			if (value < 1.0e85) return 85;
			if (value < 1.0e86) return 86;
			if (value < 1.0e87) return 87;
			if (value < 1.0e88) return 88;
			if (value < 1.0e89) return 89;
			if (value < 1.0e90) return 90;
			if (value < 1.0e91) return 91;
			if (value < 1.0e92) return 92;
			if (value < 1.0e93) return 93;
			if (value < 1.0e94) return 94;
			if (value < 1.0e95) return 95;
			if (value < 1.0e96) return 96;
			if (value < 1.0e97) return 97;
			if (value < 1.0e98) return 98;
			if (value < 1.0e99) return 99;
			/* if (value < 1.0e100) */ return 100;
		}

		if (value < 1.0e200) {
			if (value < 1.0e101) return 101;
			if (value < 1.0e102) return 102;
			if (value < 1.0e103) return 103;
			if (value < 1.0e104) return 104;
			if (value < 1.0e105) return 105;
			if (value < 1.0e106) return 106;
			if (value < 1.0e107) return 107;
			if (value < 1.0e108) return 108;
			if (value < 1.0e109) return 109;
			if (value < 1.0e110) return 110;
			if (value < 1.0e111) return 111;
			if (value < 1.0e112) return 112;
			if (value < 1.0e113) return 113;
			if (value < 1.0e114) return 114;
			if (value < 1.0e115) return 115;
			if (value < 1.0e116) return 116;
			if (value < 1.0e117) return 117;
			if (value < 1.0e118) return 118;
			if (value < 1.0e119) return 119;
			if (value < 1.0e120) return 120;
			if (value < 1.0e121) return 121;
			if (value < 1.0e122) return 122;
			if (value < 1.0e123) return 123;
			if (value < 1.0e124) return 124;
			if (value < 1.0e125) return 125;
			if (value < 1.0e126) return 126;
			if (value < 1.0e127) return 127;
			if (value < 1.0e128) return 128;
			if (value < 1.0e129) return 129;
			if (value < 1.0e130) return 130;
			if (value < 1.0e131) return 131;
			if (value < 1.0e132) return 132;
			if (value < 1.0e133) return 133;
			if (value < 1.0e134) return 134;
			if (value < 1.0e135) return 135;
			if (value < 1.0e136) return 136;
			if (value < 1.0e137) return 137;
			if (value < 1.0e138) return 138;
			if (value < 1.0e139) return 139;
			if (value < 1.0e140) return 140;
			if (value < 1.0e141) return 141;
			if (value < 1.0e142) return 142;
			if (value < 1.0e143) return 143;
			if (value < 1.0e144) return 144;
			if (value < 1.0e145) return 145;
			if (value < 1.0e146) return 146;
			if (value < 1.0e147) return 147;
			if (value < 1.0e148) return 148;
			if (value < 1.0e149) return 149;
			if (value < 1.0e150) return 150;
			if (value < 1.0e151) return 151;
			if (value < 1.0e152) return 152;
			if (value < 1.0e153) return 153;
			if (value < 1.0e154) return 154;
			if (value < 1.0e155) return 155;
			if (value < 1.0e156) return 156;
			if (value < 1.0e157) return 157;
			if (value < 1.0e158) return 158;
			if (value < 1.0e159) return 159;
			if (value < 1.0e160) return 160;
			if (value < 1.0e161) return 161;
			if (value < 1.0e162) return 162;
			if (value < 1.0e163) return 163;
			if (value < 1.0e164) return 164;
			if (value < 1.0e165) return 165;
			if (value < 1.0e166) return 166;
			if (value < 1.0e167) return 167;
			if (value < 1.0e168) return 168;
			if (value < 1.0e169) return 169;
			if (value < 1.0e170) return 170;
			if (value < 1.0e171) return 171;
			if (value < 1.0e172) return 172;
			if (value < 1.0e173) return 173;
			if (value < 1.0e174) return 174;
			if (value < 1.0e175) return 175;
			if (value < 1.0e176) return 176;
			if (value < 1.0e177) return 177;
			if (value < 1.0e178) return 178;
			if (value < 1.0e179) return 179;
			if (value < 1.0e180) return 180;
			if (value < 1.0e181) return 181;
			if (value < 1.0e182) return 182;
			if (value < 1.0e183) return 183;
			if (value < 1.0e184) return 184;
			if (value < 1.0e185) return 185;
			if (value < 1.0e186) return 186;
			if (value < 1.0e187) return 187;
			if (value < 1.0e188) return 188;
			if (value < 1.0e189) return 189;
			if (value < 1.0e190) return 190;
			if (value < 1.0e191) return 191;
			if (value < 1.0e192) return 192;
			if (value < 1.0e193) return 193;
			if (value < 1.0e194) return 194;
			if (value < 1.0e195) return 195;
			if (value < 1.0e196) return 196;
			if (value < 1.0e197) return 197;
			if (value < 1.0e198) return 198;
			if (value < 1.0e199) return 199;
			if (value < 1.0e200) return 200;
			if (value < 1.0e201) return 201;
			if (value < 1.0e202) return 202;
			if (value < 1.0e203) return 203;
			if (value < 1.0e204) return 204;
			if (value < 1.0e205) return 205;
			if (value < 1.0e206) return 206;
			if (value < 1.0e207) return 207;
			if (value < 1.0e208) return 208;
			if (value < 1.0e209) return 209;
			if (value < 1.0e210) return 210;
			if (value < 1.0e211) return 211;
			if (value < 1.0e212) return 212;
			if (value < 1.0e213) return 213;
			if (value < 1.0e214) return 214;
			if (value < 1.0e215) return 215;
			if (value < 1.0e216) return 216;
			if (value < 1.0e217) return 217;
			if (value < 1.0e218) return 218;
			if (value < 1.0e219) return 219;
			if (value < 1.0e220) return 220;
			if (value < 1.0e221) return 221;
			if (value < 1.0e222) return 222;
			if (value < 1.0e223) return 223;
			if (value < 1.0e224) return 224;
			if (value < 1.0e225) return 225;
			if (value < 1.0e226) return 226;
			if (value < 1.0e227) return 227;
			if (value < 1.0e228) return 228;
			if (value < 1.0e229) return 229;
			if (value < 1.0e230) return 230;
			if (value < 1.0e231) return 231;
			if (value < 1.0e232) return 232;
			if (value < 1.0e233) return 233;
			if (value < 1.0e234) return 234;
			if (value < 1.0e235) return 235;
			if (value < 1.0e236) return 236;
			if (value < 1.0e237) return 237;
			if (value < 1.0e238) return 238;
			if (value < 1.0e239) return 239;
			if (value < 1.0e240) return 240;
			if (value < 1.0e241) return 241;
			if (value < 1.0e242) return 242;
			if (value < 1.0e243) return 243;
			if (value < 1.0e244) return 244;
			if (value < 1.0e245) return 245;
			if (value < 1.0e246) return 246;
			if (value < 1.0e247) return 247;
			if (value < 1.0e248) return 248;
			if (value < 1.0e249) return 249;
			if (value < 1.0e250) return 250;
			if (value < 1.0e251) return 251;
			if (value < 1.0e252) return 252;
			if (value < 1.0e253) return 253;
			if (value < 1.0e254) return 254;
			if (value < 1.0e255) return 255;
			if (value < 1.0e256) return 256;
			if (value < 1.0e257) return 257;
			if (value < 1.0e258) return 258;
			if (value < 1.0e259) return 259;
			if (value < 1.0e260) return 260;
			if (value < 1.0e261) return 261;
			if (value < 1.0e262) return 262;
			if (value < 1.0e263) return 263;
			if (value < 1.0e264) return 264;
			if (value < 1.0e265) return 265;
			if (value < 1.0e266) return 266;
			if (value < 1.0e267) return 267;
			if (value < 1.0e268) return 268;
			if (value < 1.0e269) return 269;
			if (value < 1.0e270) return 270;
			if (value < 1.0e271) return 271;
			if (value < 1.0e272) return 272;
			if (value < 1.0e273) return 273;
			if (value < 1.0e274) return 274;
			if (value < 1.0e275) return 275;
			if (value < 1.0e276) return 276;
			if (value < 1.0e277) return 277;
			if (value < 1.0e278) return 278;
			if (value < 1.0e279) return 279;
			if (value < 1.0e280) return 280;
			if (value < 1.0e281) return 281;
			if (value < 1.0e282) return 282;
			if (value < 1.0e283) return 283;
			if (value < 1.0e284) return 284;
			if (value < 1.0e285) return 285;
			if (value < 1.0e286) return 286;
			if (value < 1.0e287) return 287;
			if (value < 1.0e288) return 288;
			if (value < 1.0e289) return 289;
			if (value < 1.0e290) return 290;
			if (value < 1.0e291) return 291;
			if (value < 1.0e292) return 292;
			if (value < 1.0e293) return 293;
			if (value < 1.0e294) return 294;
			if (value < 1.0e295) return 295;
			if (value < 1.0e296) return 296;
			if (value < 1.0e297) return 297;
			if (value < 1.0e298) return 298;
			if (value < 1.0e299) return 299;
			if (value < 1.0e300) return 300;
			if (value < 1.0e301) return 301;
			if (value < 1.0e302) return 302;
			if (value < 1.0e303) return 303;
			if (value < 1.0e304) return 304;
			if (value < 1.0e305) return 305;
			if (value < 1.0e306) return 306;
			if (value < 1.0e307) return 307;
			if (value < 1.0e308) return 308;
		}

		return 309;
	}
} // namespace org::mariuszgromada::math::mxparser::wrapper
