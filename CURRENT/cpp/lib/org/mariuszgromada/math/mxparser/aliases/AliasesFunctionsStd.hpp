/*
 * @(#)AliasesFunctionsStd.hpp        6.1.0    2024-10-06
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_INLINEFUNCTIONSSTD_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_INLINEFUNCTIONSSTD_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"
#include <cstdint>
#include <locale>
#include <stdexcept>
#include <string>
#include <vector>

namespace org::mariuszgromada::math::mxparser {


	inline std::wstring UTF8toUTF16(const std::string& utf8NarrowStr) {
	    std::wstring unicodeWideString;
	    size_t i = 0;
	    size_t len = utf8NarrowStr.size();

	    while (i < len) {
	        uint8_t ch = static_cast<uint8_t>(utf8NarrowStr[i]);

	        if (ch <= 0x7F) {  // 1-byte sequence
	            unicodeWideString.push_back(static_cast<wchar_t>(ch));
	            ++i;
	        } else if ((ch & 0xE0) == 0xC0) {  // 2-byte sequence
	            if (i + 1 >= len || (static_cast<uint8_t>(utf8NarrowStr[i + 1]) & 0xC0) != 0x80) {
	                throw std::runtime_error("Invalid UTF-8 sequence");
	            }
	            uint32_t code_point = ((ch & 0x1F) << 6) | (static_cast<uint8_t>(utf8NarrowStr[i + 1]) & 0x3F);
	            unicodeWideString.push_back(static_cast<wchar_t>(code_point));
	            i += 2;
	        } else if ((ch & 0xF0) == 0xE0) {  // 3-byte sequence
	            if (i + 2 >= len ||
	                (static_cast<uint8_t>(utf8NarrowStr[i + 1]) & 0xC0) != 0x80 ||
	                (static_cast<uint8_t>(utf8NarrowStr[i + 2]) & 0xC0) != 0x80) {
	                throw std::runtime_error("Invalid UTF-8 sequence");
	            }
	            uint32_t code_point = ((ch & 0x0F) << 12) | ((static_cast<uint8_t>(utf8NarrowStr[i + 1]) & 0x3F) << 6) | (static_cast<uint8_t>(utf8NarrowStr[i + 2]) & 0x3F);
	            unicodeWideString.push_back(static_cast<wchar_t>(code_point));
	            i += 3;
	        } else if ((ch & 0xF8) == 0xF0) {  // 4-byte sequence
	            if (i + 3 >= len ||
	                (static_cast<uint8_t>(utf8NarrowStr[i + 1]) & 0xC0) != 0x80 ||
	                (static_cast<uint8_t>(utf8NarrowStr[i + 2]) & 0xC0) != 0x80 ||
	                (static_cast<uint8_t>(utf8NarrowStr[i + 3]) & 0xC0) != 0x80) {
	                throw std::runtime_error("Invalid UTF-8 sequence");
	            }
	            uint32_t code_point = ((ch & 0x07) << 18) | ((static_cast<uint8_t>(utf8NarrowStr[i + 1]) & 0x3F) << 12) |
	                                  ((static_cast<uint8_t>(utf8NarrowStr[i + 2]) & 0x3F) << 6) | (static_cast<uint8_t>(utf8NarrowStr[i + 3]) & 0x3F);

	            if (code_point > 0x10FFFF) {
	                throw std::runtime_error("Code point out of range");
	            }

	            if (sizeof(wchar_t) == 2) {  // UTF-16
	                if (code_point > 0xFFFF) {  // surrogate pair
	                    code_point -= 0x10000;
	                    uint16_t high_surrogate = (code_point >> 10) + 0xD800;
	                    uint16_t low_surrogate = (code_point & 0x3FF) + 0xDC00;
	                    unicodeWideString.push_back(static_cast<wchar_t>(high_surrogate));
	                    unicodeWideString.push_back(static_cast<wchar_t>(low_surrogate));
	                } else {
	                    unicodeWideString.push_back(static_cast<wchar_t>(code_point));
	                }
	            } else if (sizeof(wchar_t) == 4) {  // UTF-32
	                unicodeWideString.push_back(static_cast<wchar_t>(code_point));
	            } else {
	                throw std::runtime_error("Unsupported wchar_t size");
	            }
	            i += 4;
	        } else {
	            throw std::runtime_error("Invalid UTF-8 sequence");
	        }
	    }

	    return unicodeWideString;
	}

	inline std::string UTF16toUTF8(const std::wstring& unicodeWideStr) {
	    std::string utf8String;

	    auto append_utf8_from_code_point = [&](char32_t code_point) {
	        if (code_point <= 0x7F) {
	            utf8String.push_back(static_cast<char>(code_point));
	        } else if (code_point <= 0x7FF) {
	            utf8String.push_back(static_cast<char>(0xC0 | (code_point >> 6)));
	            utf8String.push_back(static_cast<char>(0x80 | (code_point & 0x3F)));
	        } else if (code_point <= 0xFFFF) {
	            utf8String.push_back(static_cast<char>(0xE0 | (code_point >> 12)));
	            utf8String.push_back(static_cast<char>(0x80 | ((code_point >> 6) & 0x3F)));
	            utf8String.push_back(static_cast<char>(0x80 | (code_point & 0x3F)));
	        } else if (code_point <= 0x10FFFF) {
	            utf8String.push_back(static_cast<char>(0xF0 | (code_point >> 18)));
	            utf8String.push_back(static_cast<char>(0x80 | ((code_point >> 12) & 0x3F)));
	            utf8String.push_back(static_cast<char>(0x80 | ((code_point >> 6) & 0x3F)));
	            utf8String.push_back(static_cast<char>(0x80 | (code_point & 0x3F)));
	        } else {
	            throw std::runtime_error("Invalid Unicode code point");
	        }
	    };

	    if (sizeof(wchar_t) == 2) {  // UTF-16
	        for (size_t i = 0; i < unicodeWideStr.size(); ++i) {
	            wchar_t wc = unicodeWideStr[i];
	            if (wc >= 0xD800 && wc <= 0xDFFF) {  // surrogate pair
	                if (wc >= 0xD800 && wc <= 0xDBFF) {
	                    if (i + 1 >= unicodeWideStr.size()) {
	                        throw std::runtime_error("Unexpected high surrogate without low surrogate");
	                    }
	                    wchar_t low = unicodeWideStr[++i];
	                    if (low < 0xDC00 || low > 0xDFFF) {
	                        throw std::runtime_error("Invalid low surrogate");
	                    }
	                    char32_t code_point = ((wc - 0xD800) << 10) + (low - 0xDC00) + 0x10000;
	                    append_utf8_from_code_point(code_point);
	                } else {
	                    throw std::runtime_error("Unexpected low surrogate without high surrogate");
	                }
	            } else {
	                append_utf8_from_code_point(static_cast<char32_t>(wc));
	            }
	        }
	    } else if (sizeof(wchar_t) == 4) {  // UTF-32
	        for (wchar_t wc : unicodeWideStr) {
	            if (wc > 0x10FFFF) {
	                throw std::runtime_error("Invalid Unicode code point");
	            }
	            append_utf8_from_code_point(static_cast<char32_t>(wc));
	        }
	    } else {
	        throw std::runtime_error("Unsupported wchar_t size");
	    }

	    return utf8String;
	}

	inline String SC(const Char *str) {
		if (str == nullptr) return UTF("");
		String newStr = String(str);
		return newStr;
	}

	inline String SC(const std::string &str) {
		return UTF8toUTF16(str);
	}

	inline String SC(const char *str) {
		if (str == nullptr) return UTF("");
		return SC(std::string(str));
	}

	inline String SC(const Char c) {
		String newStr = String(1, c);
		return newStr;
	}

	inline String SC(const char c) {
		return SC(std::string(1, c));
	}

	inline String SC(const String &str) {
		return str;
	}

	inline StringPtr S(const String &str) { return std::make_shared<String>(str); }

	inline StringPtr S(const Char * &str) {
		if (str == nullptr) return nullptr;
		return std::make_shared<String>(SC(str));
	}

	inline StringPtr S(const std::string &str) { return std::make_shared<String>(SC(str)); }

	inline StringPtr S(const char * &str) {
		if (str == nullptr) return nullptr;
		return std::make_shared<String>(SC(str));
	}

	inline StringPtr S(const Char c) {
		return std::make_shared<String>(SC(c));
	}

	inline StringPtr S(const char c) {
		return std::make_shared<String>(SC(c));
	}

	template<typename T, typename S>
	Ptr<T> PtrCast(const Ptr<S> &sourcePtr) {
		return std::static_pointer_cast<T>(sourcePtr);
	}

	inline StringPtr operator+(const StringPtr &lhs, const StringPtr &rhs) {
		return std::make_shared<String>(*lhs + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, const String &rhs) {
		return std::make_shared<String>(*lhs + rhs);
	}

	inline StringPtr operator+(const String &lhs, const StringPtr &rhs) {
		return std::make_shared<String>(lhs + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, const std::string &rhs) {
		return std::make_shared<String>(*lhs + SC(rhs));
	}

	inline StringPtr operator+(const std::string &lhs, const StringPtr &rhs) {
		return std::make_shared<String>(SC(lhs) + *rhs);
	}


	inline StringPtr operator+(const StringPtr &lhs, const char *rhs) {
		return std::make_shared<String>(*lhs + SC(rhs));
	}

	inline StringPtr operator+(const char * &lhs, const StringPtr &rhs) {
		return std::make_shared<String>(SC(lhs) + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, int rhs) {
		return std::make_shared<String>(*lhs + SC(std::to_string(rhs)));
	}

	inline StringPtr operator+(int lhs, const StringPtr &rhs) {
		return std::make_shared<String>(SC(std::to_string(lhs)) + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, long rhs) {
		return std::make_shared<String>(*lhs + SC(std::to_string(rhs)));
	}

	inline StringPtr operator+(long lhs, const StringPtr &rhs) {
		return std::make_shared<String>(SC(std::to_string(lhs)) + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, long long rhs) {
		return std::make_shared<String>(*lhs + SC(std::to_string(rhs)));
	}

	inline StringPtr operator+(long long lhs, const StringPtr &rhs) {
		return std::make_shared<String>(SC(std::to_string(lhs)) + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, size_t rhs) {
		return std::make_shared<String>(*lhs + SC(std::to_string(rhs)));
	}

	inline StringPtr operator+(size_t lhs, const StringPtr &rhs) {
		return std::make_shared<String>(SC(std::to_string(lhs)) + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, float rhs) {
		return std::make_shared<String>(*lhs + *wrapper::Double::toString(rhs));
	}

	inline StringPtr operator+(float lhs, const StringPtr &rhs) {
		return std::make_shared<String>(*wrapper::Double::toString(lhs) + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, double rhs) {
		return std::make_shared<String>(*lhs + *wrapper::Double::toString(rhs));
	}

	inline StringPtr operator+(double lhs, const StringPtr &rhs) {
		return std::make_shared<String>(*wrapper::Double::toString(lhs) + *rhs);
	}

	inline StringPtr operator+(const StringPtr &lhs, long double rhs) {
		return std::make_shared<String>(*lhs + *wrapper::Double::toString(rhs));
	}

	inline StringPtr operator+(long double lhs, const StringPtr &rhs) {
		return std::make_shared<String>(*wrapper::Double::toString(lhs) + *rhs);
	}



	/*
	inline StringPtr S(const std::string &s) {
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
		std::wstring wide_string = converter.from_bytes(s);
		return std::make_shared<std::wstring>(wide_string);
	}
	*/

	/*
	inline std::string utf16Toutf8(const String &wstr) {
		std::wstring_convert<std::codecvt_utf8<wchar_t>> conv;
		return conv.to_bytes(wstr);
	}
	*/


	/*
	inline String operator+(const StringPtr &lhs, const StringPtr &rhs) {
		return *lhs + *rhs;
	}

	inline String operator+(const StringPtr &lhs, const String &rhs) {
		return *lhs + rhs;
	}

	inline String operator+(const String &lhs, const StringPtr &rhs) {
		return lhs + *rhs;
	}

	inline String operator+(const StringPtr &lhs, const std::string &rhs) {
		return *lhs + SC(rhs);
	}

	inline String operator+(const std::string &lhs, const StringPtr &rhs) {
		return SC(lhs) + *rhs;
	}

	inline String operator+(const StringPtr &lhs, const char *rhs) {
		return *lhs + SC(rhs);
	}

	inline String operator+(const char * &lhs, const StringPtr &rhs) {
		return SC(lhs) + *rhs;
	}

	inline String operator+(const StringPtr &lhs, int rhs) {
		return *lhs + SC(std::to_string(rhs));
	}

	inline String operator+(int lhs, const StringPtr &rhs) {
		return SC(std::to_string(lhs)) + *rhs;
	}

	inline String operator+(const StringPtr &lhs, double rhs) {
		return *lhs + wrapper::Double::toString(rhs);
	}

	inline String operator+(double lhs, const StringPtr &rhs) {
		return wrapper::Double::toString(lhs) + *rhs;
	}
	*/

	inline StringStreamPtr new_StringStream() {
		return std::make_shared<std::stringstream>();
	}

	inline StdStringPtr new_StdString() {
		return std::make_shared<std::string>();
	}

	inline StdStringPtr new_StdString(const std::string &str) {
		return std::make_shared<std::string>(str);
	}

	inline StdStringPtr new_StdString(const char* data) {
		return std::make_shared<std::string>(data);
	}

	template<typename K, typename V>
	UnorderedMapPtr<K, V> new_UnorderedMap() {
		return std::make_shared<std::unordered_map<K, V> >();
	}

	template<typename T>
	UnorderedSetPtr<T> new_UnorderedSet() {
		return std::make_shared<std::unordered_set<T> >();
	}

	template<typename T>
	VectorPtr<T> new_Vector() {
		return std::make_shared<std::vector<T> >();
	}

	template<typename T>
	VectorPtr<T> new_Vector(int size) {
	return std::make_shared<std::vector<T>>(size);
}

} // org::mariuszgromada::math::mxparser

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_INLINEFUNCTIONSSTD_H