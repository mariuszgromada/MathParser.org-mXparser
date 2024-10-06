/*
 * @(#)NumberTheory.hpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Array.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp"
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
		static double min(ListPtr<double> &numbers) { return min(CONST_LIST_DOUBLE(numbers)); }
		static double min(const ArrayPtr<double> &numbers);
		static double min(ArrayPtr<double> &numbers) { return min(CONST_ARRAY_DOUBLE(numbers)); }

		// ***********************************************************

		template<typename... Doubles>
		static double argmin(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return argmin(vp.paramsDouble);
		}
		static double argmin(const ListPtr<double> &numbers);
		static double argmin(ListPtr<double> &numbers) { return argmin(CONST_LIST_DOUBLE(numbers)); }
		static double argmin(const ArrayPtr<double> &numbers);
		static double argmin(ArrayPtr<double> &numbers) { return argmin(CONST_ARRAY_DOUBLE(numbers)); }

		// ***********************************************************

		static double max(double a, double b);

		template<typename... Doubles>
		static double max(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return max(vp.paramsDouble);
		}
		static double max(const ListPtr<double> &numbers);
		static double max(ListPtr<double> &numbers) { return max(CONST_LIST_DOUBLE(numbers)); }
		static double max(const ArrayPtr<double> &numbers);
		static double max(ArrayPtr<double> &numbers) { return max(CONST_ARRAY_DOUBLE(numbers)); }

		// ***********************************************************

		template<typename... Doubles>
		static double argmax(Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return argmax(vp.paramsDouble);
		}
		static double argmax(const ListPtr<double> &numbers);
		static double argmax(ListPtr<double> &numbers) { return argmax(CONST_LIST_DOUBLE(numbers)); }
		static double argmax(const ArrayPtr<double> &numbers);
		static double argmax(ArrayPtr<double> &numbers) { return argmax(CONST_ARRAY_DOUBLE(numbers)); }

		// ***********************************************************

		static ArrayPtr<int> sortAsc(const ArrayPtr<double> &doubleArray);
		static ArrayPtr<double> getDistValues(const ArrayPtr<double> &doubleArray, bool returnOrderByDescFreqAndAscOrigPos);

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
		static double numberOfDistValues(ListPtr<double> &numbers) { return numberOfDistValues(CONST_LIST_DOUBLE(numbers)); }
		static double numberOfDistValues(const ArrayPtr<double> &numbers);
		static double numberOfDistValues(ArrayPtr<double> &numbers) { return numberOfDistValues(CONST_ARRAY_DOUBLE(numbers)); }

		// ***********************************************************

		static Long gcd(Long a, Long b);
		static double gcd(double a, double b);
		//static Long gcd(const ListPtr<Long> &numbers);
		static Long gcd(const ArrayPtr<Long> &numbers);
		
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
		static double gcd(ListPtr<double> &numbers) { return gcd(CONST_LIST_DOUBLE(numbers)); }
		static double gcd(const ArrayPtr<double> &numbers);
		static double gcd(ArrayPtr<double> &numbers) { return gcd(CONST_ARRAY_DOUBLE(numbers)); }

		// ***********************************************************

		static Long lcm(Long a, Long b);
		static double lcm(double a, double b);
		//static Long lcm(const ListPtr<Long> &numbers);
		static Long lcm(const ArrayPtr<Long> &numbers);
		
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
		static double lcm(ListPtr<double> &numbers) { return lcm(CONST_LIST_DOUBLE(numbers)); }
		static double lcm(const ArrayPtr<double> &numbers);
		static double lcm(ArrayPtr<double> &numbers) { return lcm(CONST_ARRAY_DOUBLE(numbers)); }

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
		static double sum(ListPtr<double> &numbers) { return sum(CONST_LIST_DOUBLE(numbers)); }
		static double sum(const ArrayPtr<double> &numbers);
		static double sum(ArrayPtr<double> &numbers) { return sum(CONST_ARRAY_DOUBLE(numbers)); }

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
		static double prod(ListPtr<double> &numbers) { return prod(CONST_LIST_DOUBLE(numbers)); }
		static double prod(const ArrayPtr<double> &numbers);
		static double prod(ArrayPtr<double> &numbers) { return prod(CONST_ARRAY_DOUBLE(numbers)); }

		// ***********************************************************

		static bool primeTest(Long n);
		static double primeTest(double n);
		static Long primeCount(Long n);
		static double primeCount(double n);

		// ***********************************************************

		static double sigmaSummation(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);
		static double sigmaSummation(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta) {
			return sigmaSummation(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta);
		}

		// ***********************************************************

		static double piProduct(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);
		static double piProduct(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta) {
			return piProduct(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta);
		}

		// ***********************************************************

		static double min(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);
		static double min(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta) {
			return min(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta);
		}

		// ***********************************************************

		static double max(const ExpressionPtr &f, const ArgumentPtr &index, double from, double to, double delta);
		static double max(ExpressionPtr &f, ArgumentPtr &index, double from, double to, double delta) {
			return max(CONST_EXPRESSION(f), CONST_ARGUMENT(index), from, to, delta);
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
		static double convOthBase2Decimal(StringPtr &numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(CONST_STRING_PTR(numberLiteral), numeralSystemBase); }
		static double convOthBase2Decimal(const String &numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(S(numberLiteral), numeralSystemBase); }
		static double convOthBase2Decimal(const std::string &numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(S(numberLiteral), numeralSystemBase); }
		static double convOthBase2Decimal(const Char* numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(S(numberLiteral), numeralSystemBase); }
		static double convOthBase2Decimal(const char* numberLiteral, int numeralSystemBase) { return convOthBase2Decimal(S(numberLiteral), numeralSystemBase); }
		static double convOthBase2Decimal(const StringPtr &numberLiteral);
		static double convOthBase2Decimal(StringPtr &numberLiteral) { return convOthBase2Decimal(CONST_STRING_PTR(numberLiteral)); }
		static double convOthBase2Decimal(const String &numberLiteral) { return convOthBase2Decimal(S(numberLiteral)); }
		static double convOthBase2Decimal(const std::string &numberLiteral) { return convOthBase2Decimal(S(numberLiteral)); }
		static double convOthBase2Decimal(const Char* numberLiteral) { return convOthBase2Decimal(S(numberLiteral)); }
		static double convOthBase2Decimal(const char* numberLiteral) { return convOthBase2Decimal(S(numberLiteral)); }
		static double convOthBase2Decimal(int numeralSystemBase, const ListPtr<int> &digits) {
			const ArrayPtr<int> digitsArray = Array<int>::toArray(digits);
			return convOthBase2Decimal(numeralSystemBase, digitsArray);
		}
		static double convOthBase2Decimal(int numeralSystemBase, ListPtr<int> &digits) { return convOthBase2Decimal(numeralSystemBase, static_cast<const ListPtr<int> &>(digits)); }
		static double convOthBase2Decimal(int numeralSystemBase, const ArrayPtr<int> &digits);
		static double convOthBase2Decimal(int numeralSystemBase, ArrayPtr<int> &digits) { return convOthBase2Decimal(numeralSystemBase, static_cast<const ArrayPtr<int> &>(digits)); }

		template<typename... Doubles>
		static double convOthBase2Decimal(double numeralSystemBase, Doubles &&... numbers) {
			VariadicProcessorDouble vp;
			vp.processArgs(std::forward<Doubles>(numbers)...);
			return convOthBase2Decimal(numeralSystemBase, vp.paramsDouble);
		}
		static double convOthBase2Decimal(double numeralSystemBase, const ListPtr<double> &digits) {
			ArrayPtr<double> arrayDigits = Array<double>::toArray(digits);
			return convOthBase2Decimal(numeralSystemBase, arrayDigits);
		}
		static double convOthBase2Decimal(double numeralSystemBase, ListPtr<double> &digits) { return convOthBase2Decimal(numeralSystemBase, CONST_LIST_DOUBLE(digits)); }
		static double convOthBase2Decimal(double numeralSystemBase, const ArrayPtr<double> &digits);
		static double convOthBase2Decimal(double numeralSystemBase, ArrayPtr<double> &digits) { return convOthBase2Decimal(numeralSystemBase, CONST_ARRAY_DOUBLE(digits)); }
		static double convOthBase2Decimal(const ArrayPtr<int> &baseAndDigits);
		static double convOthBase2Decimal(ArrayPtr<int> &baseAndDigits) { return convOthBase2Decimal(static_cast<const ArrayPtr<int> &>(baseAndDigits)); }
		static double convOthBase2Decimal(const ArrayPtr<double> &baseAndDigits);
		static double convOthBase2Decimal(ArrayPtr<double> &baseAndDigits) { return convOthBase2Decimal(CONST_ARRAY_DOUBLE(baseAndDigits)); }
		static StringPtr convDecimal2OthBase(double decimalNumber, int numeralSystemBase);
		static StringPtr convDecimal2OthBase(double decimalNumber, int numeralSystemBase, int format);

		// ***********************************************************

		static int numberOfDigits(Long number);
		static double numberOfDigits(double number);
		static Long numberOfDigits(Long number, Long numeralSystemBase);
		static double numberOfDigits(double number, double numeralSystemBase);

		// ***********************************************************

		static int digitAtPosition(Long number, int position, int numeralSystemBase);
		static int digitAtPosition(Long number, int position);
		static double digitAtPosition(double number, double position, double numeralSystemBase);
		static double digitAtPosition(double number, double position);

		// ***********************************************************

		static ArrayPtr<Long> primeFactors(Long number);
		static ArrayPtr<double> primeFactors(double number);
		static double numberOfPrimeFactors(double number);
		static double primeFactorValue(double number, double id);
		static double primeFactorExponent(double number, double id);

		// ***********************************************************

		static ArrayPtr<double> toFraction(double value);
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
		static void sortAsc(const ArrayPtr<double> &doubleArray, const ArrayPtr<int> &initOrder, int leftIndex, int rightIndex);
		static StringPtr getRegExpForNumeralSystem(int numeralSystemBase);
		static ArrayPtr<double> fractionToDoubleArray(double sign, double numerator, double denominator);
		static ArrayPtr<double> mixedFractionToDoubleArray(double sign, double whole, double numerator, double denominator);
	};

} // namespace org::mariuszgromada::math::mxparser::mathcollection

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_NUMBERTHEORY_H