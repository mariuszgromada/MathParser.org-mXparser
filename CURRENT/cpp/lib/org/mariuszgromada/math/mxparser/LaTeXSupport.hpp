/*
 * @(#)LaTeXSupport.hpp        6.2.0    2026-11-13
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
#ifndef MXPARSER_LATEX_SUPPORT_HPP
#define MXPARSER_LATEX_SUPPORT_HPP
#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"
#include <algorithm>
#include <any>
#include <queue>
#include <regex>
#include <unordered_map>
#include <unordered_set>
// Private Java-runtime adapters; no grammar or mathematical interpretation.
namespace org::mariuszgromada::math::mxparser::latex_detail {
using namespace stringutils;
using namespace wrapper;
/**
 * \version 6.2.0
 */
class Text {
    Ptr<const String> value;
public:
    Text() = default;
    Text(std::nullptr_t) { }
    Text(const String& value) : value(std::make_shared<const String>(value)) { }
    Text(const Char* value) : Text(String(value)) { }
    Text(Ptr<const String> value) : value(value) { }
    Ptr<const String> shared() const { return value; }
    Text(const StringPtr& value) : value(value ? std::make_shared<const String>(*value) : nullptr) { }
    const String& str() const { return *value; }
    operator StringPtr() const { return pointer(); }
    StringPtr pointer() const { return value ? S(*value) : nullptr; }
    int length() const { return CAST_INT(value->length()); }
    bool isEmpty() const { return value->empty(); }
    Char charAt(int index) const { return value->at(index); }
    Text substring(int start) const { return value->substr(start); }
    Text substring(int start, int end) const { return value->substr(start, end - start); }
    bool startsWith(const Text& prefix) const { return StringUtils::startsWith(str(), prefix.str()); }
    bool startsWith(const Text& prefix, int offset) const { return offset <= length() && str().compare(offset, prefix.length(), prefix.str()) == 0; }
    bool contains(const Text& text) const { return StringUtils::contains(str(),text.str()); }
    bool endsWith(const Text& suffix) const { return StringUtils::endsWith(str(), suffix.str()); }
    int indexOf(Char c, int start = 0) const { auto p = str().find(c, start); return p == String::npos ? -1 : CAST_INT(p); }
    int indexOf(const Text& text) const { auto p = str().find(text.str()); return p == String::npos ? -1 : CAST_INT(p); }
    bool equals(const Text& other) const { return value == other.value || (value && other.value && str() == other.str()); }
    bool equalsIgnoreCase(const Text& other) const {
        if (length() != other.length()) return false;
        for (int i = 0; i < length(); i++) {
            Char a = charAt(i), b = other.charAt(i);
            if (a >= UTF('A') && a <= UTF('Z')) a += UTF('a') - UTF('A');
            if (b >= UTF('A') && b <= UTF('Z')) b += UTF('a') - UTF('A');
            if (a != b) return false;
        }
        return true;
    }
    bool matches(const Text& pattern) const { return StringUtils::regexMatch(str(), pattern.str()); }
    Text replace(const Text& a, const Text& b) const { return StringUtils::replace(str(), a.str(), b.str()); }
    std::vector<Text> split(const Text& separator, int) const {
        std::vector<Text> result; size_t start = 0, end;
        while ((end = str().find(separator.str(), start)) != String::npos) { result.emplace_back(str().substr(start, end - start)); start = end + separator.length(); }
        result.emplace_back(str().substr(start)); return result;
    }
    int compareTo(const Text& other) const { return str().compare(other.str()); }
    bool operator==(const Text& other) const { return equals(other); }
    bool operator!=(const Text& other) const { return !equals(other); }
    bool operator==(std::nullptr_t) const { return !value; }
    bool operator!=(std::nullptr_t) const { return value != nullptr; }
    friend Text operator+(const Text& a, const Text& b) { return a.str() + b.str(); }
    friend Text operator+(const Text& a, Char b) { return a.str() + String(1,b); }
    friend Text operator+(const Text& a, int b) { return a.str() + std::to_wstring(b); }
    friend Text operator+(Char a, const Text& b) { return String(1, a) + b.str(); }
};
inline std::logic_error logicError(const Text& message) { return std::logic_error(UTF16toUTF8(message.str())); }
inline std::invalid_argument invalidArgument(const Text& message) { return std::invalid_argument(UTF16toUTF8(message.str())); }
inline bool operator==(const StringPtr& a, const Text& b) { return Text(a).equals(b); }
/**
 * \version 6.2.0
 */
class TextBuilder {
    String value;
public:
    TextBuilder() = default;
    explicit TextBuilder(const Text& text) : value(text.str()) { }
    int length() const { return CAST_INT(value.length()); }
    Char charAt(int index) const { return value.at(index); }
    void setLength(int length) { value.resize(length); }
    Text substring(int start, int end) const { return value.substr(start, end - start); }
    Text toString() const { return value; }
    TextBuilder& append(const Text& text) { value.append(text.str()); return *this; }
    TextBuilder& append(const Char* text) { value.append(text); return *this; }
    TextBuilder& append(Char c) { value.push_back(c); return *this; }
    void insert(int index, Char c) { value.insert(value.begin() + index, c); }
    TextBuilder& append(double n) { return append(Text(wrapper::Double::toString(n))); }
    TextBuilder& append(int n) { value.append(std::to_wstring(n)); return *this; }
    TextBuilder& append(const std::any& text) { return append(std::any_cast<Text>(text)); }
};
/**
 * \version 6.2.0
 */
class Pattern {
    std::wregex expression;
public:
    explicit Pattern(const Text& text) : expression(UTF("^(") + text.str() + UTF(")$")) { }
    bool matches(const Text& source) const { return std::regex_match(source.str(), expression); }
};
/**
 * \version 6.2.0
 */
template<class T> struct Hash : std::hash<T> { };
/**
 * \version 6.2.0
 */
template<> struct Hash<Text> { size_t operator()(const Text& t) const { return std::hash<String>{}(t.str()); } };
/**
 * \version 6.2.0
 */
template<class K, class V> class Map {
    std::unordered_map<K, V, Hash<K>> values;
public:
    V get(const K& key) const { auto it = values.find(key); return it == values.end() ? V{} : it->second; }
    bool containsKey(const K& key) const { return values.find(key) != values.end(); }
    void putIfAbsent(const K& key, const V& value) { values.emplace(key,value); }
    V put(const K& key, const V& value) { V previous = get(key); values[key] = value; return previous; }
};
/**
 * \version 6.2.0
 */
template<class T> class Set {
    std::unordered_set<T, Hash<T>> values;
public:
    int size() const { return CAST_INT(values.size()); }
    bool add(const T& value) { return values.insert(value).second; }
    bool contains(const T& value) const { return values.find(value) != values.end(); }
};
/**
 * \version 6.2.0
 */
template<class T> class Stack {
    StackPtr<T> values = new_Stack<T>();
public:
    void push(const T& value) { values->push(value); }
    T pop() { T value = values->top(); values->pop(); return value; }
    T peek() const { return values->top(); }
    bool isEmpty() const { return values->isEmpty(); }
    int size() const { return values->size(); }
};
inline int compare(int a, int b) { return (a > b) - (a < b); }
inline int digit(Char c, int base) {
    int v = c >= UTF('0') && c <= UTF('9') ? c - UTF('0') : c >= UTF('a') && c <= UTF('z') ? c - UTF('a') + 10 : c >= UTF('A') && c <= UTF('Z') ? c - UTF('A') + 10 : 36;
    return v < base ? v : -1;
}
inline bool isDigit(Char c) { return c >= UTF('0') && c <= UTF('9'); }
inline bool isLetter(Char c) { return c >= UTF('a') && c <= UTF('z') || c >= UTF('A') && c <= UTF('Z'); }
// Reference-counted trees can be very deep. Flatten only their destruction,
// using nonowning links after refcount zero, with no allocation or GC/registry.
/**
 * \version 6.2.0
 */
template<class T> struct IterativeDelete {
    void operator()(T* node) const noexcept {
        static thread_local T** pending = nullptr;
        if (pending) { node->deleteNext = *pending; *pending = node; return; }
        T* head = node; pending = &head;
        while (head) { T* current = head; head = current->deleteNext; delete current; }
        pending = nullptr;
    }
};
}
#endif
