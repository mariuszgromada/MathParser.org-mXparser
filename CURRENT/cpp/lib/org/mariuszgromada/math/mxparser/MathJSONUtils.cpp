/*
 * @(#)MathJSONUtils.cpp        6.2.0    2026-11-23
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

#include "org/mariuszgromada/math/mxparser/MathJSONUtils.hpp"
#include "org/mariuszgromada/math/mxparser/Argument.hpp"
#include "org/mariuszgromada/math/mxparser/Constant.hpp"
#include "org/mariuszgromada/math/mxparser/Expression.hpp"
#include "org/mariuszgromada/math/mxparser/ExpressionUtils.hpp"
#include "org/mariuszgromada/math/mxparser/Function.hpp"
#include "org/mariuszgromada/math/mxparser/RecursiveArgument.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/macro/MacroStaticVarsInit.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/Units.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/BinaryRelation.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/CalculusOperator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function1Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function2Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Function3Arg.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/FunctionVariadic.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/KeyWord.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Operator.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/Token.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Array.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <limits>
#include <locale>
#include <optional>
#include <regex>
#include <sstream>
#include <stdexcept>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>

namespace org::mariuszgromada::math::mxparser {

namespace {
using namespace parsertokens;
using mathcollection::Units;
using wrapper::ListPtr;
using wrapper::new_List;

constexpr double notANumber = std::numeric_limits<double>::quiet_NaN();

const String& textOrEmpty(const StringPtr& value) {
    static const String empty;
    return value ? *value : empty;
}

String messageArgument(const String& value) { return value; }
String messageArgument(const StringPtr& value) { return textOrEmpty(value); }
String messageArgument(const wchar_t* value) { return String(value); }
String messageArgument(wchar_t value) { return String(1, value); }
template<class Number>
String messageArgument(Number value) { return std::to_wstring(value); }

template<class Arg>
String formatMessage(const StringPtr& format, const Arg& value) {
    if (!format) return {};
    String result;
    String replacement = messageArgument(value);
    std::size_t start = 0, next;
    while ((next = format->find(L"{0}", start)) != String::npos) {
        result.append(*format, start, next - start);
        result.append(replacement);
        start = next + 3;
    }
    result.append(*format, start, String::npos);
    return result;
}

} // namespace

namespace {
bool highSurrogate(wchar_t ch) { return ch >= 0xd800 && ch <= 0xdbff; }
bool lowSurrogate(wchar_t ch) { return ch >= 0xdc00 && ch <= 0xdfff; }

String utf16(const String& native) {
    if constexpr (sizeof(wchar_t) == 2) return native;
    String output;
    output.reserve(native.size());
    for (wchar_t ch : native) {
        auto point = static_cast<char32_t>(ch);
        if (point < 0x10000) output.push_back(ch);
        else if (point <= 0x10ffff) {
            point -= 0x10000;
            output.push_back(static_cast<wchar_t>(0xd800 + (point >> 10)));
            output.push_back(static_cast<wchar_t>(0xdc00 + (point & 0x3ff)));
        } else output.push_back(static_cast<wchar_t>(0xd800));
    }
    return output;
}

String nativeWide(const String& units) {
    if constexpr (sizeof(wchar_t) == 2) return units;
    String output;
    output.reserve(units.size());
    for (std::size_t i = 0; i < units.size(); ++i) {
        wchar_t ch = units[i];
        if (highSurrogate(ch) && i + 1 < units.size() && lowSurrogate(units[i + 1])) {
            auto point = 0x10000 + (static_cast<char32_t>(ch) - 0xd800) * 0x400
                    + static_cast<char32_t>(units[++i]) - 0xdc00;
            output.push_back(static_cast<wchar_t>(point));
        } else output.push_back(ch);
    }
    return output;
}

String escapedPathSegment(const String& key) {
    String result;
    for (wchar_t c : key) {
        if (c == L'~') result.append(L"~0");
        else if (c == L'/') result.append(L"~1");
        else result.push_back(c);
    }
    return result;
}

} // namespace

/** Internal components of the MathJSON exchange codec. */
class MathJSONUtils::Implementation final {
    friend class MathJSONUtils;
    using Diagnostic = MathJSON::Diagnostic;
    using DiagnosticPtr = MathJSON::DiagnosticPtr;
    using Options = MathJSON::ImportOptionsPtr;
    using Warnings = std::vector<DiagnosticPtr>;

    inline static const String RESOURCE_LIMIT = L"RESOURCE_LIMIT";
    inline static const String UNSUPPORTED_NUMBER = L"UNSUPPORTED_NUMBER";
    inline static const String INVALID_SHAPE = L"INVALID_SHAPE";
    inline static const String UNSUPPORTED_PROGRAM = L"UNSUPPORTED_PROGRAM";
    inline static const String NAME_COLLISION = L"NAME_COLLISION";
    inline static const String UNSUPPORTED_NODE = L"UNSUPPORTED_NODE";
    inline static const String INVALID_ARGUMENT = L"INVALID_ARGUMENT";
    inline static const String UNSUPPORTED_BINDING = L"UNSUPPORTED_BINDING";
    inline static const String EMISSION_MISMATCH = L"EMISSION_MISMATCH";
    inline static const String INVALID_ARITY = L"INVALID_ARITY";
    inline static const String INVALID_ROOT = L"INVALID_ROOT";
    inline static const String UNRESOLVED_FUNCTION = L"UNRESOLVED_FUNCTION";
    inline static const String UNSUPPORTED_DOMAIN = L"UNSUPPORTED_DOMAIN";
    inline static const String EXTERNAL_DEFINITION = L"EXTERNAL_DEFINITION";
    inline static const String MXPARSER_EXTENSION = L"MXPARSER_EXTENSION";
    static constexpr int NO_OFFSET = -1;

    enum class JsonKind { NUMBER, STRING, ARRAY, OBJECT, BOOLEAN, NULL_VALUE };
    enum class NodeKind { CALL, NUMBER, SYMBOL, STRING };

    struct JsonValue;
    using Value = std::shared_ptr<JsonValue>;
    struct JsonValue {
        const JsonKind kind;
        const String path;
        const int offset;
        String text;
        std::vector<Value> array;
        std::unordered_map<String, Value> members;
        std::vector<String> memberOrder;

        JsonValue(JsonKind kind, const String& path, int offset) : kind(kind), path(path), offset(offset) {}
    };

    struct AstNode;
    using Node = std::shared_ptr<AstNode>;
    using Nodes = std::vector<Node>;
    struct AstNode {
        const NodeKind kind;
        const String name;
        const double number;
        Nodes children;
        const Value at;
        int depth = 1;
        PrimitiveElementPtr binding;
        bool hasNumericSpelling = false;
        bool builtin = false;
        bool userCall = false;
        String spelling;

        AstNode(NodeKind kind, const String& name, double number, Nodes children, const Value& at)
            : kind(kind), name(name), number(number), children(std::move(children)), at(at) {
            for (const Node& child : this->children) depth = (std::max)(depth, 1 + child->depth);
            if (depth > Codec::MAX_DEPTH)
                throw Codec::error(RESOURCE_LIMIT, at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_DEPTH));
        }

        void appendChainOperand(const Node& child) {
            if (child->depth >= Codec::MAX_DEPTH)
                throw Codec::error(RESOURCE_LIMIT, at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_DEPTH));
            children.push_back(child);
            depth = (std::max)(depth, 1 + child->depth);
        }

        bool call(const String& head) const { return kind == NodeKind::CALL && name == head; }
        bool symbol(const String& value) const { return kind == NodeKind::SYMBOL && name == value; }
        Node arg(int i) const { return children[static_cast<std::size_t>(i)]; }
    };

    static StringResourcesPtr resources() { return StringModel::getStringResources(); }

    struct Codec {
        static constexpr int MAX_TEXT = 16 * 1024 * 1024;
        static constexpr int MAX_DEPTH = 256;
        static constexpr int MAX_VALUES = 250000;
        static constexpr int MAX_SOURCE = 100000;
        static constexpr int MAX_NAME = 256;
        static constexpr int MAX_NUMBER = 1024;
        static constexpr std::int64_t MAX_WORK = 50000000;
        static constexpr std::int64_t MAX_BUFFER = 128LL * 1024 * 1024;
        inline static const String FIELD_NUMBER = L"num";
        inline static const String FIELD_SYMBOL = L"sym";
        inline static const String FIELD_STRING = L"str";
        inline static const String FIELD_FUNCTION = L"fn";
        inline static const String FIELD_DICTIONARY = L"dict";
        inline static const std::array<String, 5> DISCRIMINATORS = {
            FIELD_NUMBER, FIELD_SYMBOL, FIELD_STRING, FIELD_FUNCTION, FIELD_DICTIONARY
        };

        struct Budget {
            std::int64_t workDone = 0;
            std::int64_t buffer = 0;

            void work(std::int64_t count, const Value& at) {
                workDone += count;
                if (workDone > MAX_WORK)
                    throw error(RESOURCE_LIMIT, at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_WORK));
            }

            void allocate(std::int64_t count, const Value& at) {
                buffer += count;
                if (buffer > MAX_BUFFER)
                    throw error(RESOURCE_LIMIT, at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_BUFFER));
            }
        };

        static ConversionFailure error(const String& code, const Value& value, const String& message) {
            return value == nullptr ? ConversionFailure(code, {}, NO_OFFSET, message)
                     : ConversionFailure(code, value->path, value->offset, message);
        }
        static ConversionFailure error(const String& code, const Value& value, const StringPtr& message) {
            return error(code, value, utf16(textOrEmpty(message)));
        }

        static String errorJson(const Diagnostic& error) {
            Node payload = Tree::call(L"ErrorCode", nullptr, {
                Tree::atom(NodeKind::STRING, L"mxparser:" + textOrEmpty(error.getCode()), nullptr),
                Tree::atom(NodeKind::STRING, errorMessage(utf16(textOrEmpty(error.getMessage()))), nullptr),
                Tree::atom(NodeKind::STRING, utf16(textOrEmpty(error.getPath())), nullptr),
                Tree::number(error.getOffset(), nullptr)
            });
            Budget budget;
            return Tree::write(Tree::call(Vocabulary::HEAD_ERROR, nullptr, {payload}), budget);
        }

        static String errorMessage(const String& message) {
            constexpr std::size_t limit = 1024;
            String text;
            text.reserve((std::min)(message.size(), limit));
            std::size_t position = 0;
            while (position < message.size()) {
                wchar_t unit = message[position];
                std::size_t width = highSurrogate(unit) && position + 1 < message.size()
                    && lowSurrogate(message[position + 1]) ? 2 : 1;
                if (position + width > limit) break;
                if (width == 2) text.append(message, position, 2);
                else text.push_back(highSurrogate(unit) || lowSurrogate(unit) ? L'\ufffd' : unit);
                position += width;
            }
            if (position < message.size()) text.push_back(L'\u2026');
            return text;
        }

        struct Reader {
            const String source;
            Budget& budget;
            std::size_t index = 0;
            int values = 0;

            Reader(const StringPtr& source, Budget& budget) : source(checkedSource(source)), budget(budget) {}

            static String checkedSource(const StringPtr& text) {
                if (!text) throw error(INVALID_ARGUMENT, nullptr, resources()->MATHJSON_INVALID_ARGUMENT);
                if (text->size() > MAX_TEXT)
                    throw error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_TEXT));
                return utf16(*text);
            }

            Value read() {
                checkTransport(source, budget);
                if (!source.empty() && source.front() == L'\ufeff') ++index;
                Value root = value({});
                std::vector<Value> stack;
                if (container(root)) stack.push_back(root);
                while (!stack.empty()) {
                    Value current = stack.back();
                    bool array = current->kind == JsonKind::ARRAY;
                    wchar_t end = array ? L']' : L'}';
                    skipSpace();
                    if (take(end)) {
                        stack.pop_back();
                        continue;
                    }
                    int size = array ? static_cast<int>(current->array.size()) : current->members.size();
                    if (size != 0) {
                        require(L',', current->path);
                        skipSpace();
                    }
                    String key = array ? std::to_wstring(size) : readString(current->path);
                    String path = current->path + L"/" + escapedPathSegment(key);
                    if (!array) {
                        if (current->members.count(key) != 0) throw syntax(path);
                        skipSpace();
                        require(L':', path);
                    }
                    if (stack.size() >= MAX_DEPTH)
                        throw ConversionFailure(RESOURCE_LIMIT, path, static_cast<int>(index),
                                formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_DEPTH));
                    Value child = value(path);
                    if (array) current->array.push_back(child);
                    else {
                        current->members.emplace(key, child);
                        current->memberOrder.push_back(key);
                    }
                    if (container(child)) stack.push_back(child);
                }
                skipSpace();
                if (index != source.size()) throw syntax({});
                return root;
            }

            Value value(const String& path) {
                skipSpace();
                if (index == source.size()) throw syntax(path);
                if (++values > MAX_VALUES)
                    throw ConversionFailure(RESOURCE_LIMIT, path, static_cast<int>(index),
                            formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_VALUES));
                int start = static_cast<int>(index);
                wchar_t c = source[index];
                Value result;
                if (c == L'[') {
                    ++index;
                    result = std::make_shared<JsonValue>(JsonKind::ARRAY, path, start);
                } else if (c == L'{') {
                    ++index;
                    result = std::make_shared<JsonValue>(JsonKind::OBJECT, path, start);
                } else if (c == L'"') {
                    result = std::make_shared<JsonValue>(JsonKind::STRING, path, start);
                    result->text = readString(path);
                } else if (c == L'n' || c == L't' || c == L'f') {
                    String word = c == L'n' ? L"null" : c == L't' ? L"true" : L"false";
                    if (source.compare(index, word.size(), word) != 0)
                        throw syntax(path);
                    index += word.size();
                    result = std::make_shared<JsonValue>(c == L'n' ? JsonKind::NULL_VALUE : JsonKind::BOOLEAN, path, start);
                    result->text = word;
                } else if (c == L'-' || digit(c)) {
                    result = std::make_shared<JsonValue>(JsonKind::NUMBER, path, start);
                    take(L'-');
                    if (!take(L'0')) digits(path);
                    if (take(L'.')) digits(path);
                    if (take(L'e') || take(L'E')) {
                        if (!take(L'+')) take(L'-');
                        digits(path);
                    }
                    result->text = source.substr(start, index - start);
                } else throw syntax(path);
                budget.allocate(112LL + 2LL * path.size() + 2LL * result->text.size(), result);
                return result;
            }

            String readString(const String& path) {
                require(L'"', path);
                String result;
                while (index < source.size()) {
                    wchar_t c = source[index++];
                    if (c == L'"') {
                        for (std::size_t i = 0; i < result.size(); ++i) {
                            wchar_t unit = result[i];
                            if (highSurrogate(unit)) {
                                if (++i == result.size() || !lowSurrogate(result[i]))
                                    throw syntax(path);
                            } else if (lowSurrogate(unit)) {
                                throw syntax(path);
                            }
                        }
                        return result;
                    }
                    if (c < 0x20) throw syntax(path);
                    if (c == L'\\') {
                        if (index == source.size()) throw syntax(path);
                        c = source[index++];
                        switch (c) {
                            case L'"': case L'\\': case L'/': break;
                            case L'b': c = L'\b'; break;
                            case L'f': c = L'\f'; break;
                            case L'n': c = L'\n'; break;
                            case L'r': c = L'\r'; break;
                            case L't': c = L'\t'; break;
                            case L'u': {
                                int hex = 0;
                                for (int i = 0; i < 4; ++i) {
                                    if (index == source.size())
                                        throw syntax(path);
                                    wchar_t h = source[index++];
                                    int v = h >= L'0' && h <= L'9' ? h - L'0' : h >= L'A' && h <= L'F'
                                            ? h - L'A' + 10 : h >= L'a' && h <= L'f' ? h - L'a' + 10 : -1;
                                    if (v < 0) throw syntax(path);
                                    hex = 16 * hex + v;
                                }
                                c = static_cast<wchar_t>(hex);
                                break;
                            }
                            default: throw syntax(path);
                        }
                    }
                    result.push_back(c);
                }
                throw syntax(path);
            }

            void digits(const String& path) {
                std::size_t start = index;
                while (index < source.size() && digit(source[index])) ++index;
                if (start == index) throw syntax(path);
            }

            void skipSpace() {
                while (index < source.size()) {
                    wchar_t c = source[index];
                    if (c != L' ' && c != L'\t' && c != L'\r' && c != L'\n') return;
                    ++index;
                }
            }

            bool take(wchar_t c) {
                if (index == source.size() || source[index] != c) return false;
                ++index;
                return true;
            }

            void require(wchar_t c, const String& path) {
                if (!take(c)) throw syntax(path);
            }

            ConversionFailure syntax(const String& path) const {
                return ConversionFailure(L"INVALID_JSON", path, static_cast<int>(index),
                        utf16(textOrEmpty(resources()->MATHJSON_INVALID_JSON)));
            }
        };

        static bool digit(wchar_t c) { return c >= L'0' && c <= L'9'; }
        static bool container(const Value& value) {
            return value->kind == JsonKind::ARRAY || value->kind == JsonKind::OBJECT;
        }

        static void checkTransport(const String& source, Budget& budget) {
            if (source.size() > MAX_TEXT)
                throw error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_TEXT));
            budget.work(source.size(), nullptr);
            std::int64_t bytes = 0;
            for (std::size_t i = 0; i < source.size(); ++i) {
                wchar_t c = source[i];
                if (c <= 0x7f) ++bytes;
                else if (c <= 0x7ff) bytes += 2;
                else if (highSurrogate(c) && i + 1 < source.size() && lowSurrogate(source[i + 1])) {
                    bytes += 4;
                    ++i;
                } else bytes += 3;
                if (bytes > MAX_TEXT)
                    throw error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_TEXT));
            }
        }

        struct Input {
            Budget& budget;
            explicit Input(Budget& budget) : budget(budget) {}

            Node read(const StringPtr& json) { return read(Reader(json, budget).read()); }

            Node read(const Value& value) {
                budget.work(1, value);
                budget.allocate(64, value);
                switch (value->kind) {
                    case JsonKind::NUMBER: return numeric(value->text, value);
                    case JsonKind::STRING: return readString(value);
                    case JsonKind::ARRAY: return array(value, value);
                    case JsonKind::OBJECT: return readObject(value);
                    default: throw error(INVALID_SHAPE, value, resources()->MATHJSON_INVALID_SHAPE);
                }
            }

            Node readString(const Value& value) {
                const String& text = value->text;
                if (quoted(text, L'\''))
                    return Tree::atom(NodeKind::STRING, text.substr(1, text.size() - 2), value);
                if (quoted(text, 0x60))
                    return Tree::atom(NodeKind::SYMBOL, normalize(text.substr(1, text.size() - 2)), value);
                if (Tree::numericSpelling(text) || Tree::specialNumber(text)) return numeric(text, value);
                if (text.size() > MAX_NUMBER) {
                    wchar_t first = text.front();
                    if (digit(first) || first == L'-' || first == L'+') Tree::requireNumberLength(text, value);
                }
                return Tree::atom(NodeKind::SYMBOL, normalize(text), value);
            }

            Node array(const Value& items, const Value& origin) {
                if (items->kind != JsonKind::ARRAY || items->array.empty())
                    throw error(INVALID_SHAPE, items, resources()->MATHJSON_INVALID_SHAPE);
                Node head = read(items->array.front());
                if (head->kind != NodeKind::SYMBOL)
                    throw error(INVALID_SHAPE, head->at, resources()->MATHJSON_INVALID_SHAPE);
                Nodes operands;
                for (std::size_t i = 1; i < items->array.size(); ++i) operands.push_back(read(items->array[i]));
                return Tree::call(head->name, origin, operands);
            }

            Node readObject(const Value& value) {
                String tag;
                for (const String& key : DISCRIMINATORS) {
                    if (value->members.count(key) == 0) continue;
                    if (!tag.empty()) throw error(INVALID_SHAPE, value, resources()->MATHJSON_INVALID_SHAPE);
                    tag = key;
                }
                if (tag.empty()) throw error(INVALID_SHAPE, value, resources()->MATHJSON_INVALID_SHAPE);
                Value content = value->members.at(tag);
                if (tag == FIELD_FUNCTION) return array(content, value);
                if (tag == FIELD_DICTIONARY) {
                    if (content->kind != JsonKind::OBJECT)
                        throw error(INVALID_SHAPE, content, resources()->MATHJSON_INVALID_SHAPE);
                    Nodes pairs;
                    for (const String& spelling : content->memberOrder) {
                        Value entry = content->members.at(spelling);
                        Node key = Tree::atom(NodeKind::STRING, spelling, entry);
                        Node valueNode = entry->kind == JsonKind::BOOLEAN
                                ? Tree::atom(NodeKind::SYMBOL, entry->text == L"true" ? Vocabulary::SYMBOL_TRUE : Vocabulary::SYMBOL_FALSE, entry)
                                : read(entry);
                        pairs.push_back(Tree::call(Vocabulary::HEAD_KEY_VALUE_PAIR, entry, {key, valueNode}));
                    }
                    return Tree::call(Vocabulary::HEAD_DICTIONARY, value, pairs);
                }
                if (content->kind != JsonKind::STRING)
                    throw error(INVALID_SHAPE, content, resources()->MATHJSON_INVALID_SHAPE);
                if (tag == FIELD_NUMBER) return numeric(content->text, value);
                if (tag == FIELD_SYMBOL) return Tree::atom(NodeKind::SYMBOL, normalize(content->text), value);
                return Tree::atom(NodeKind::STRING, content->text, value);
            }

            static Node numeric(const String& text, const Value& at) {
                Tree::requireNumberLength(text, at);
                return Tree::atom(NodeKind::NUMBER, text, at);
            }

            static bool quoted(const String& text, wchar_t quote) {
                return text.size() >= 2 && text.front() == quote && text.back() == quote;
            }

            static String normalize(String name) {
                // NFC equivalents whose canonical forms are in the supported name alphabet.
                std::replace(name.begin(), name.end(), L'\u212A', L'K');
                std::replace(name.begin(), name.end(), L'\u2126', L'\u03A9');
                std::replace(name.begin(), name.end(), L'\u1FBE', L'\u03B9');
                return name;
            }

            static void checkName(const String& name, const Value& at) {
                if (name.size() > MAX_NAME)
                    throw error(RESOURCE_LIMIT, at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_NAME));
                static const std::wregex NAME(L"[A-Za-z_][A-Za-z0-9_]*|[\u0370-\u03ff]");
                static const std::wregex NATIVE_NAME = [] {
                    STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);
                    return std::wregex(textOrEmpty(ParserSymbol::nameOnlyTokenRegExp));
                }();
                if (!std::regex_match(name, NAME) || !std::regex_match(name, NATIVE_NAME)
                        || normalize(name) != name)
                    throw error(L"INVALID_NAME", at, formatMessage(resources()->MATHJSON_INVALID_NAME, name));
            }

            static void checkArity(const Node& call, int count) {
                if (call->children.size() != static_cast<std::size_t>(count))
                    throw error(INVALID_ARITY, call->at, formatMessage(resources()->MATHJSON_WRONG_ARGUMENT_COUNT, call->name));
            }
        };
    };

    struct Tree {
        static constexpr std::int64_t SAFE_INTEGER = INT64_C(9007199254740991);

        static const std::wregex& decimalPattern() {
            static const std::wregex pattern(
                LR"(([+-]?)(0|[1-9][0-9]*)(?:\.([0-9]*))?(?:\(([0-9]+)\))?(?:[eE]([+-]?[0-9]+))?)");
            return pattern;
        }

        static Node atom(NodeKind kind, const String& value, const Value& at) {
            Node result = std::make_shared<AstNode>(kind, value, 0, Nodes{}, at);
            result->hasNumericSpelling = kind == NodeKind::NUMBER;
            return result;
        }

        static Node number(double value, const Value& at) {
            return std::make_shared<AstNode>(NodeKind::NUMBER, String{}, value, Nodes{}, at);
        }

        template<class... Children>
        static Node call(const String& name, const Value& at, const Node& first, const Children&... children) {
            return call(name, at, Nodes{first, children...});
        }

        static Node call(const String& name, const Value& at, Nodes children = {}) {
            return std::make_shared<AstNode>(NodeKind::CALL, name, 0, std::move(children), at);
        }

        struct Operation {
            enum Code { ADD, SUBTRACT, NEGATE, MULTIPLY, DIVIDE, POWER, TETRATION, FACTORIAL, ABS, SQRT, FLOOR, CEIL, SIN, COS, TAN, RAD, DEG, EXP, GAMMA, MIN, MAX, LN, LOG, ROOT, NOT_EQUAL, EQUAL, LESS, GREATER, LESS_EQUAL, GREATER_EQUAL, IF, SUM, PRODUCT };
            const Code code;
            const String head;
            const String source;
            const int arity;
            const int type;
            const int id;
            bool accepts(int count) const { return arity == -1 ? count > 0 : count == arity; }
            bool chain() const { return code == ADD || code == MULTIPLY; }
            bool angle() const { return code == SIN || code == COS || code == TAN; }
            bool relation() const { return type == BinaryRelation::TYPE_ID; }
            bool iterator() const { return type == CalculusOperator::TYPE_ID; }
        };

        struct Registry {
            const std::array<Operation, 33> operations;
            std::unordered_map<String, const Operation*> byName;
            std::unordered_map<std::uint64_t, const Operation*> byToken;

            Registry() : operations{{
                    {Operation::ADD, L"Add", textOrEmpty(Operator::PLUS_STR), 2, Operator::TYPE_ID, Operator::PLUS_ID},
                    {Operation::SUBTRACT, L"Subtract", textOrEmpty(Operator::MINUS_STR), 2, Operator::TYPE_ID, Operator::MINUS_ID},
                    {Operation::NEGATE, L"Negate", textOrEmpty(Operator::MINUS_STR), 1, KeyWord::NO_DEFINITION, KeyWord::NO_DEFINITION},
                    {Operation::MULTIPLY, L"Multiply", textOrEmpty(Operator::MULTIPLY_STR), 2, Operator::TYPE_ID, Operator::MULTIPLY_ID},
                    {Operation::DIVIDE, L"Divide", textOrEmpty(Operator::DIVIDE_STR), 2, Operator::TYPE_ID, Operator::DIVIDE_ID},
                    {Operation::POWER, L"Power", textOrEmpty(Operator::POWER_STR), 2, Operator::TYPE_ID, Operator::POWER_ID},
                    {Operation::TETRATION, L"MxParserTetration", textOrEmpty(Operator::TETRATION_STR), 2, Operator::TYPE_ID, Operator::TETRATION_ID},
                    {Operation::FACTORIAL, L"Factorial", textOrEmpty(Operator::FACT_STR), 1, Operator::TYPE_ID, Operator::FACT_ID},
                    {Operation::ABS, L"Abs", textOrEmpty(Function1Arg::ABS_STR), 1, Function1Arg::TYPE_ID, Function1Arg::ABS_ID},
                    {Operation::SQRT, L"Sqrt", textOrEmpty(Function1Arg::SQRT_STR), 1, Function1Arg::TYPE_ID, Function1Arg::SQRT_ID},
                    {Operation::FLOOR, L"Floor", textOrEmpty(Function1Arg::FLOOR_STR), 1, Function1Arg::TYPE_ID, Function1Arg::FLOOR_ID},
                    {Operation::CEIL, L"Ceil", textOrEmpty(Function1Arg::CEIL_STR), 1, Function1Arg::TYPE_ID, Function1Arg::CEIL_ID},
                    {Operation::SIN, L"Sin", textOrEmpty(Function1Arg::SIN_STR), 1, Function1Arg::TYPE_ID, Function1Arg::SIN_ID},
                    {Operation::COS, L"Cos", textOrEmpty(Function1Arg::COS_STR), 1, Function1Arg::TYPE_ID, Function1Arg::COS_ID},
                    {Operation::TAN, L"Tan", textOrEmpty(Function1Arg::TAN_STR), 1, Function1Arg::TYPE_ID, Function1Arg::TAN_ID},
                    {Operation::RAD, L"Degrees", textOrEmpty(Function1Arg::RAD_STR), 1, Function1Arg::TYPE_ID, Function1Arg::RAD_ID},
                    {Operation::DEG, L"MxParserToDegrees", textOrEmpty(Function1Arg::DEG_STR), 1, Function1Arg::TYPE_ID, Function1Arg::DEG_ID},
                    {Operation::EXP, L"Exp", textOrEmpty(Function1Arg::EXP_STR), 1, Function1Arg::TYPE_ID, Function1Arg::EXP_ID},
                    {Operation::GAMMA, L"Gamma", textOrEmpty(Function1Arg::GAMMA_STR), 1, Function1Arg::TYPE_ID, Function1Arg::GAMMA_ID},
                    {Operation::MIN, L"Min", textOrEmpty(FunctionVariadic::MIN_STR), -1, FunctionVariadic::TYPE_ID, FunctionVariadic::MIN_ID},
                    {Operation::MAX, L"Max", textOrEmpty(FunctionVariadic::MAX_STR), -1, FunctionVariadic::TYPE_ID, FunctionVariadic::MAX_ID},
                    {Operation::LN, L"Ln", textOrEmpty(Function1Arg::LN_STR), 1, Function1Arg::TYPE_ID, Function1Arg::LN_ID},
                    {Operation::LOG, L"Log", textOrEmpty(Function2Arg::LOG_STR), 2, Function2Arg::TYPE_ID, Function2Arg::LOG_ID},
                    {Operation::ROOT, L"Root", textOrEmpty(Function2Arg::ROOT_STR), 2, Function2Arg::TYPE_ID, Function2Arg::ROOT_ID},
                    {Operation::NOT_EQUAL, L"NotEqual", textOrEmpty(BinaryRelation::NEQ2_STR), 2, BinaryRelation::TYPE_ID, BinaryRelation::NEQ_ID},
                    {Operation::EQUAL, L"Equal", textOrEmpty(BinaryRelation::EQ_STR), 2, BinaryRelation::TYPE_ID, BinaryRelation::EQ_ID},
                    {Operation::LESS, L"Less", textOrEmpty(BinaryRelation::LT_STR), 2, BinaryRelation::TYPE_ID, BinaryRelation::LT_ID},
                    {Operation::GREATER, L"Greater", textOrEmpty(BinaryRelation::GT_STR), 2, BinaryRelation::TYPE_ID, BinaryRelation::GT_ID},
                    {Operation::LESS_EQUAL, L"LessEqual", textOrEmpty(BinaryRelation::LEQ_STR), 2, BinaryRelation::TYPE_ID, BinaryRelation::LEQ_ID},
                    {Operation::GREATER_EQUAL, L"GreaterEqual", textOrEmpty(BinaryRelation::GEQ_STR), 2, BinaryRelation::TYPE_ID, BinaryRelation::GEQ_ID},
                    {Operation::IF, L"If", textOrEmpty(Function3Arg::IF_STR), 3, Function3Arg::TYPE_ID, Function3Arg::IF_CONDITION_ID},
                    {Operation::SUM, L"Sum", textOrEmpty(CalculusOperator::SUM_STR), 4, CalculusOperator::TYPE_ID, CalculusOperator::SUM_ID},
                    {Operation::PRODUCT, L"Product", textOrEmpty(CalculusOperator::PROD_STR), 4, CalculusOperator::TYPE_ID, CalculusOperator::PROD_ID},
            }} {
                for (const Operation& operation : operations) {
                    byName[operation.head] = &operation;
                    if (operation.type >= 0) byToken[key(operation.type, operation.id)] = &operation;
                }
                byToken[key(Operator::TYPE_ID, Operator::SQUARE_ROOT_ID)] = &operations[Operation::SQRT];
            }
        };

        static const Registry& registry() {
            static const Registry value = [] {
                STATIC_VARS_INITI_DEPENDENCY(Operator);
                STATIC_VARS_INITI_DEPENDENCY(Function1Arg);
                STATIC_VARS_INITI_DEPENDENCY(Function2Arg);
                STATIC_VARS_INITI_DEPENDENCY(Function3Arg);
                STATIC_VARS_INITI_DEPENDENCY(FunctionVariadic);
                STATIC_VARS_INITI_DEPENDENCY(BinaryRelation);
                STATIC_VARS_INITI_DEPENDENCY(CalculusOperator);
                return Registry{};
            }();
            return value;
        }
        static const Operation* operation(const String& name) {
            const auto& byName = registry().byName;
            auto result = byName.find(name);
            return result == byName.end() ? nullptr : result->second;
        }

        static const Operation* operation(int type, int id) {
            const auto& byToken = registry().byToken;
            auto result = byToken.find(key(type, id));
            return result == byToken.end() ? nullptr : result->second;
        }
        static const Operation* registered(Operation::Code code) { return &registry().operations[code]; }
        static std::uint64_t key(int type, int id) {
            return (static_cast<std::uint64_t>(static_cast<std::uint32_t>(type)) << 32) | static_cast<std::uint32_t>(id);
        }

        static bool numericSpelling(const String& text) {
            return text.size() <= Codec::MAX_NUMBER && std::regex_match(text, decimalPattern());
        }

        static bool validDecimal(bool matches, const std::wsmatch& match) {
            if (!matches) return false;
            if (match[4].matched) return match[3].matched;
            return !match[3].matched || match[3].length() != 0;
        }

        static bool specialNumber(const String& value) {
            return value == L"NaN" || value == L"Infinity" || value == L"+Infinity" || value == L"PositiveInfinity"
                || value == L"-Infinity" || value == L"NegativeInfinity" || value == L"ComplexInfinity";
        }

        static double readNumber(String text, const Value& at, Codec::Budget& budget) {
            requireNumberLength(text, at);
            budget.work(text.size(), at);
            text.erase(std::remove_if(text.begin(), text.end(), [](wchar_t ch) {
                return ch == L'\t' || ch == L'\n' || ch == L'\v' || ch == L'\f' || ch == L'\r'
                    || ch == L' ' || ch == 0x00a0;
            }), text.end());
            std::wsmatch match;
            bool matches = std::regex_match(text, match, decimalPattern());
            if (!validDecimal(matches, match))
                throw Codec::error(UNSUPPORTED_NUMBER, at, resources()->MATHJSON_UNSUPPORTED_NUMBER);
            String periodic = match[4].str();
            if (!periodic.empty()) {
                std::size_t start = static_cast<std::size_t>(match.position(4));
                String expanded = text.substr(0, start - 1);
                std::size_t end = expanded.size() + periodic.size() + 32;
                while (expanded.size() < end) expanded.append(periodic);
                text = expanded.append(text, start + periodic.size() + 1, String::npos);
                budget.work(text.size(), at);
            }
            double value = parseDecimal(text);
            if (!std::isfinite(value))
                throw Codec::error(UNSUPPORTED_NUMBER, at, resources()->MATHJSON_UNSUPPORTED_NUMBER);
            return value;
        }

        static double parseDecimal(const String& text) {
            std::wistringstream input(text);
            input.imbue(std::locale::classic());
            double result = notANumber;
            input >> result;
            // Some standard libraries set failbit for underflow after storing the rounded value.
            return !input.fail() || result == 0 || std::fpclassify(result) == FP_SUBNORMAL ? result : notANumber;
        }

        static Node resolveNumber(const Node& node, Codec::Budget& budget, bool formula) {
            if (!node->hasNumericSpelling) return node;
            double value = readNumber(node->name, node->at, budget);
            return number(formula && value == 0 ? 0 : value, node->at);
        }

        static void requireNumberLength(const String& text, const Value& at) {
            if (text.size() > Codec::MAX_NUMBER)
                throw Codec::error(RESOURCE_LIMIT, at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_NUMBER));
        }

        static void warning(Warnings& diagnostics, const Value& at, const String& code, const StringPtr& message) {
            diagnostics.push_back(DiagnosticPtr(new Diagnostic(code, at ? nativeWide(at->path) : String(),
                    at ? at->offset : NO_OFFSET, textOrEmpty(message))));
        }

        static void externalWarning(Warnings& diagnostics, const Value& at, const String& name) {
            warning(diagnostics, at, EXTERNAL_DEFINITION,
                    S(nativeWide(formatMessage(resources()->MATHJSON_EXTERNAL_DEFINITION, name))));
        }

        static Node fromToken(const TokenPtr& token, Codec::Budget& budget) {
            const String& lexeme = textOrEmpty(token->tokenStr);
            requireNumberLength(lexeme, nullptr);
            budget.work(lexeme.size(), nullptr);
            double value = token->tokenValue;
            if (!std::isfinite(value))
                throw Codec::error(UNSUPPORTED_NUMBER, nullptr, resources()->MATHJSON_UNSUPPORTED_NUMBER);
            return lexeme.find(L'_') != String::npos ? fraction(lexeme, value) : number(value == 0 ? 0 : value, nullptr);
        }

        static Node fraction(const String& lexeme, double value) {
            bool negative = lexeme.compare(0, 1, textOrEmpty(Operator::MINUS_STR)) == 0;
            std::size_t start = negative || lexeme.compare(0, 1, textOrEmpty(Operator::PLUS_STR)) == 0 ? 1 : 0;
            auto slash = lexeme.rfind(L'_');
            auto mixed = lexeme.find(L'_', start);
            auto numerator = mixed == slash ? start : mixed + 1;
            double p = parseDecimal(lexeme.substr(numerator, slash - numerator));
            double q = parseDecimal(lexeme.substr(slash + 1));
            if (mixed != slash) p += parseDecimal(lexeme.substr(start, mixed - start)) * q;
            if (negative && p != 0) p = -p;
            if (!integral(p) || !integral(q) || q <= 0 || p / q != value)
                return number(value == 0 ? 0 : value, nullptr);
            return call(Vocabulary::HEAD_RATIONAL, nullptr, number(p, nullptr), number(q, nullptr));
        }

        static bool integral(double number) {
            return std::isfinite(number) && number == std::trunc(number);
        }

        static bool isNegativeZero(double number) {
            return number == 0 && 1.0 / number < 0;
        }

        static String decimalSpelling(double number) {
            if (isNegativeZero(number)) return L"-0";
            if (std::abs(number) <= SAFE_INTEGER && number == std::floor(number))
                return std::to_wstring(static_cast<std::int64_t>(number));
            std::wostringstream output;
            output.imbue(std::locale::classic());
            output << std::setprecision(std::numeric_limits<double>::max_digits10) << number;
            return output.str();
        }

        struct WriteFrame {
            Node node;
            std::size_t child = 0;
        };

        static String write(const Node& root, Codec::Budget& budget) {
            String output;
            std::vector<WriteFrame> stack{{root}};
            int count = 0;
            while (!stack.empty()) {
                WriteFrame& frame = stack.back();
                Node node = frame.node;
                if (frame.child == 0) {
                    if (++count > Codec::MAX_VALUES)
                        throw Codec::error(RESOURCE_LIMIT, node->at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_VALUES));
                    if (stack.size() > Codec::MAX_DEPTH)
                        throw Codec::error(RESOURCE_LIMIT, node->at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_DEPTH));
                    budget.work(1, node->at);
                    switch (node->kind) {
                        case NodeKind::CALL:
                            output.push_back(L'[');
                            quote(node->name, output);
                            break;
                        case NodeKind::SYMBOL:
                            if (specialNumber(node->name)) {
                                output.append(L"{\"" + Codec::FIELD_SYMBOL + L"\":");
                                quote(node->name, output);
                                output.push_back(L'}');
                            } else quote(node->name, output);
                            break;
                        case NodeKind::STRING:
                            output.append(L"{\"").append(Codec::FIELD_STRING).append(L"\":");
                            quote(node->name, output);
                            output.push_back(L'}');
                            break;
                        case NodeKind::NUMBER: {
                            String spelling = decimalSpelling(node->number);
                            if (std::trunc(node->number) == node->number && std::abs(node->number) <= SAFE_INTEGER
                                    && !isNegativeZero(node->number)) output.append(spelling);
                            else {
                                output.append(L"{\"").append(Codec::FIELD_NUMBER).append(L"\":");
                                quote(spelling, output);
                                output.push_back(L'}');
                            }
                            break;
                        }
                    }
                }
                if (frame.child < node->children.size()) {
                    output.push_back(L',');
                    stack.push_back({node->children[frame.child++]});
                } else {
                    if (node->kind == NodeKind::CALL) output.push_back(L']');
                    stack.pop_back();
                }
                if (output.size() > Codec::MAX_TEXT)
                    throw Codec::error(RESOURCE_LIMIT, node->at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_TEXT));
            }
            Codec::checkTransport(output, budget);
            return output;
        }

        static void quote(const String& text, String& output) {
            constexpr wchar_t HEX[] = L"0123456789ABCDEF";
            output.push_back(L'"');
            for (wchar_t c : text) {
                switch (c) {
                    case L'"': output.append(L"\\\""); break;
                    case L'\\': output.append(L"\\\\"); break;
                    case L'\b': output.append(L"\\b"); break;
                    case L'\f': output.append(L"\\f"); break;
                    case L'\n': output.append(L"\\n"); break;
                    case L'\r': output.append(L"\\r"); break;
                    case L'\t': output.append(L"\\t"); break;
                    default:
                        if (c < 0x20 || c == 0x2028 || c == 0x2029) {
                            output.append(L"\\u");
                            output.push_back(HEX[(c >> 12) & 15]);
                            output.push_back(HEX[(c >> 8) & 15]);
                            output.push_back(HEX[(c >> 4) & 15]);
                            output.push_back(HEX[c & 15]);
                        } else output.push_back(c);
                }
            }
            output.push_back(L'"');
        }
    };

    using Visible = std::unordered_map<String, PrimitiveElementPtr>;
    using Names = std::unordered_set<String>;
    using Elements = std::unordered_set<PrimitiveElementPtr>;
    using BindingMap = std::unordered_map<PrimitiveElementPtr, PrimitiveElementPtr>;

    struct Parameters {
        std::unordered_map<String, ArgumentPtr> byName;
        std::vector<String> order;
    };

    struct Plan {
        std::vector<PrimitiveElementPtr> used;
        Elements usedSet;
        Names open;
        Names openFunctions;
        std::vector<String> binders;
        std::unordered_map<String, Node> binderIndices;
        Visible visible;
        Parameters parameters;
        Names availableBuiltins;
        bool allowOpen;
        bool allowSubclassReferences;
        bool forExport;
        Options options;
        Warnings ownedDiagnostics;
        Warnings& diagnostics;
        Codec::Budget& budget;

        Plan(Visible visible, Parameters parameters, Names availableBuiltins, bool allowOpen, bool allowSubclassReferences, bool forExport,
                Options options, Warnings* diagnostics, Codec::Budget& budget)
            : visible(std::move(visible)), parameters(std::move(parameters)),
              availableBuiltins(std::move(availableBuiltins)), allowOpen(allowOpen),
              allowSubclassReferences(allowSubclassReferences), forExport(forExport),
              options(std::move(options)),
              diagnostics(diagnostics ? *diagnostics : ownedDiagnostics), budget(budget) {}

        bool hasOpenReferences() const { return !open.empty() || !openFunctions.empty(); }

        Node validate(Node root) {
            Names locals;
            Node plan = validate(root, locals, false, 0);
            for (const String& binder : binders) {
                if (open.count(binder) != 0)
                    throw Codec::error(UNSUPPORTED_BINDING, root->at, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
            }
            return plan;
        }

        Node validate(Node node, Names& locals, bool predicate, int depth) {
            if (depth >= Codec::MAX_DEPTH) throw Codec::error(RESOURCE_LIMIT, node->at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_DEPTH));
            budget.work(1, node->at);
            budget.allocate(64, node->at);
            if (node->kind == NodeKind::STRING) throw Codec::error(UNSUPPORTED_NODE, node->at, resources()->MATHJSON_UNSUPPORTED_CONSTRUCT);
            if (forExport && predicate && !node->userCall && node->call(Tree::registered(Tree::Operation::NEGATE)->head)
                    && node->arg(0)->kind == NodeKind::NUMBER)
                node = Tree::number(-node->arg(0)->number, node->at);
            if (node->kind == NodeKind::NUMBER) {
                if (!predicate) return Tree::resolveNumber(node, budget, true);
                if (!forExport) throw domain(node);
                double value = ExpressionUtils::roundResult(node->number, 0);
                if (std::isnan(value)) throw domain(node);
                return Tree::atom(NodeKind::SYMBOL, value == 0 ? Vocabulary::SYMBOL_FALSE : Vocabulary::SYMBOL_TRUE, node->at);
            }
            if (node->kind == NodeKind::SYMBOL) return scalar(node, locals, predicate);
            if (!predicate && forExport && node->userCall) return userCall(node, locals, depth);
            if (!predicate && node->call(Vocabulary::HEAD_MXPARSER_SYMBOL)) {
                Codec::Input::checkArity(node, 1);
                return referenceSymbol(qualifiedName(node->arg(0)), locals);
            }
            if (!predicate && node->call(Vocabulary::HEAD_MXPARSER_CALL)) {
                if (node->children.size() < 2) Codec::Input::checkArity(node, 2);
                Node name = qualifiedName(node->arg(0));
                Nodes arguments(node->children.begin() + 1, node->children.end());
                return userCall(Tree::call(name->name, node->at, arguments), locals, depth);
            }
            const Tree::Operation* op = Tree::operation(node->name);
            if (predicate && (op == nullptr || !op->relation())) throw domain(node);
            if (node->call(Vocabulary::HEAD_BOOLE)) {
                Codec::Input::checkArity(node, 1);
                return validate(node->arg(0), locals, true, depth + 1);
            }
            if (op != nullptr && op->iterator()) return iterator(node, locals, depth);
            if (node->call(Vocabulary::HEAD_RATIONAL)) {
                Codec::Input::checkArity(node, 2);
                Node p = node->arg(0)->kind == NodeKind::NUMBER ? Tree::resolveNumber(node->arg(0), budget, true) : node->arg(0);
                Node q = node->arg(1)->kind == NodeKind::NUMBER ? Tree::resolveNumber(node->arg(1), budget, true) : node->arg(1);
                if (!integerAtom(p))
                    throw Codec::error(UNSUPPORTED_NUMBER, node->arg(0)->at, resources()->MATHJSON_UNSUPPORTED_NUMBER);
                if (!integerAtom(q) || q->number == 0)
                    throw Codec::error(UNSUPPORTED_NUMBER, node->arg(1)->at, resources()->MATHJSON_UNSUPPORTED_NUMBER);
                if (q->number < 0) {
                    p = Tree::number(p->number == 0 ? 0 : -p->number, p->at);
                    q = Tree::number(-q->number, q->at);
                }
                return Tree::call(forExport ? Vocabulary::HEAD_RATIONAL : Tree::registered(Tree::Operation::DIVIDE)->head, node->at, p, q);
            }
            if (node->call(L"Square")) {
                Codec::Input::checkArity(node, 1);
                return validate(Tree::call(Tree::registered(Tree::Operation::POWER)->head, node->at, node->arg(0), Tree::number(2, node->at)), locals, false, depth);
            }
            if (node->call(L"Quantity")) {
                if (!options->kilometresAsScalar)
                    throw Codec::error(UNSUPPORTED_NODE, node->at, resources()->MATHJSON_UNSUPPORTED_CONSTRUCT);
                Codec::Input::checkArity(node, 2);
                if (node->arg(1)->kind != NodeKind::STRING || node->arg(1)->name != L"km")
                    throw Codec::error(UNSUPPORTED_NODE, node->arg(1)->at, resources()->MATHJSON_UNSUPPORTED_CONSTRUCT);
                Tree::warning(diagnostics, node->at, L"UNIT_PROJECTED_TO_SCALAR", resources()->MATHJSON_UNIT_PROJECTED_TO_SCALAR);
                Node metresPerKilometre = Tree::number(Units::KILOMETRE / Units::METRE, node->at);
                return validate(Tree::call(Tree::registered(Tree::Operation::MULTIPLY)->head, node->at, node->arg(0), metresPerKilometre), locals, false, depth);
            }
            if (op == nullptr) {
                if (Vocabulary::structure(node->name))
                    throw Codec::error(UNSUPPORTED_NODE, node->at, resources()->MATHJSON_UNSUPPORTED_CONSTRUCT);
                return userCall(node, locals, depth);
            }
            if (forExport && (op->code == Tree::Operation::TETRATION || op->code == Tree::Operation::DEG))
                extensionWarning(node, node->name);
            if (op->chain()) {
                if (node->children.empty()) Codec::Input::checkArity(node, 1);
                if (node->children.size() == 1) return validate(node->arg(0), locals, false, depth + 1);
            } else if (!op->accepts(static_cast<int>(node->children.size())))
                Codec::Input::checkArity(node, op->arity == -1 ? 1 : op->arity);
            Nodes operands;
            operands.reserve(node->children.size());
            for (int i = 0; i < node->children.size(); i++)
                operands.push_back(validate(node->arg(i), locals, op == Tree::registered(Tree::Operation::IF) && i == 0, depth + 1));
            if (op->angle() && mXparser::checkIfDegreesMode()) {
                Node angle = operands[0];
                const String& radians = Tree::registered(Tree::Operation::RAD)->head;
                if (forExport) operands[0] = Tree::call(radians, angle->at, angle);
                else if (!angle->userCall && angle->call(radians)) operands[0] = angle->arg(0);
                else operands[0] = Tree::call(Tree::registered(Tree::Operation::DEG)->head, angle->at, angle);
            }
            Node result = Tree::call(node->name, node->at, operands);
            return forExport && op->relation() && !predicate ? Tree::call(Vocabulary::HEAD_BOOLE, node->at, result) : result;
        }

        static Node qualifiedName(const Node& node) {
            if (node->kind == NodeKind::SYMBOL) return node;
            if (node->kind == NodeKind::NUMBER && node->at && node->at->kind == JsonKind::STRING && Tree::specialNumber(node->name))
                return Tree::atom(NodeKind::SYMBOL, node->name, node->at);
            throw Codec::error(INVALID_SHAPE, node->at, resources()->MATHJSON_INVALID_SHAPE);
        }

        Node scalar(Node node, Names& locals, bool predicate) {
            if (forExport && node->binding && !predicate) return referenceSymbol(node, locals);
            if (node->symbol(Vocabulary::SYMBOL_TRUE) || node->symbol(Vocabulary::SYMBOL_FALSE)) {
                if (forExport && !node->builtin) throw domain(node);
                node->builtin = true;
                return forExport && !predicate ? Tree::call(Vocabulary::HEAD_BOOLE, node->at, node) : node;
            }
            if (predicate) throw domain(node);
            if (node->symbol(Vocabulary::SYMBOL_PI) || node->symbol(Vocabulary::SYMBOL_EXPONENTIAL_E)) {
                if (forExport && !node->builtin) return referenceSymbol(node, locals);
                node->builtin = true;
                return node;
            }
            if (Tree::specialNumber(node->name)) throw Codec::error(UNSUPPORTED_NUMBER, node->at, resources()->MATHJSON_UNSUPPORTED_NUMBER);
            return referenceSymbol(node, locals);
        }

        Node referenceSymbol(Node node, Names& locals) {
            if (locals.count(node->name)) return node;
            Codec::Input::checkName(node->name, node->at);
            auto parameter = parameters.byName.find(node->name);
            if (parameter != parameters.byName.end()) {
                if (forExport && node->binding != parameter->second) throw binding(node);
                node->binding = parameter->second;
            } else {
                PrimitiveElementPtr element = lookup(node);
                checkNativeName(node, element);
                if (forExport && node->binding != element) throw binding(node);
                if (!element) {
                    if (openFunctions.count(node->name)) throw collision(node);
                    if (!allowOpen) throw missing(node, L"UNRESOLVED_SYMBOL");
                    if (open.insert(node->name).second) missingWarning(node, L"UNRESOLVED_SYMBOL");
                } else {
                    if (!(std::dynamic_pointer_cast<Argument>(element) || std::dynamic_pointer_cast<Constant>(element))) throw binding(node);
                    if (usedSet.insert(element).second) {
                        used.push_back(element);
                        if (forExport ? allowOpen : !Exchange::declarableValue(element)) Tree::externalWarning(diagnostics, node->at, node->name);
                    }
                    node->binding = element;
                }
            }
            if (forExport && (Vocabulary::reserved(node->name)
                    || Tree::specialNumber(node->name) || availableBuiltins.count(node->name))) {
                extensionWarning(node, Vocabulary::HEAD_MXPARSER_SYMBOL);
                return Tree::call(Vocabulary::HEAD_MXPARSER_SYMBOL, node->at, node);
            }
            return node;
        }

        PrimitiveElementPtr lookup(const Node& node) {
            auto found = visible.find(node->name);
            PrimitiveElementPtr element = found == visible.end() ? nullptr : found->second;
            if (!element && found != visible.end()) throw collision(node);
            if (element) Exchange::requireReference(element, allowSubclassReferences);
            return element;
        }

        void checkNativeName(const Node& node, const PrimitiveElementPtr& element) {
            if (availableBuiltins.count(node->name) && (!element || !mXparser::checkIfsetToOverrideBuiltinTokens()))
                throw collision(node);
        }

        Node userCall(Node node, Names& locals, int depth) {
            Codec::Input::checkName(node->name, node->at);
            if (locals.count(node->name) || parameters.byName.count(node->name) || open.count(node->name))
                throw collision(node);
            PrimitiveElementPtr element = lookup(node);
            checkNativeName(node, element);
            if (node->children.empty()) Codec::Input::checkArity(node, 1);
            if (!element) {
                if (!allowOpen) throw missing(node, UNRESOLVED_FUNCTION);
                if (openFunctions.insert(node->name).second) missingWarning(node, UNRESOLVED_FUNCTION);
            } else {
                FunctionPtr function = std::dynamic_pointer_cast<Function>(element);
                if (!function) throw binding(node);
                if (!function->isVariadic) Codec::Input::checkArity(node, function->getParametersNumber());
                if (usedSet.insert(element).second) {
                    used.push_back(element);
                    if (forExport ? allowOpen : !Exchange::declarableValue(element)) Tree::externalWarning(diagnostics, node->at, node->name);
                }
            }
            if (forExport && node->binding != element) throw binding(node);
            Nodes operands;
            bool qualified = forExport && (Tree::operation(node->name) != nullptr || Vocabulary::structure(node->name)
                    || Vocabulary::reserved(node->name) || availableBuiltins.count(node->name)
                    || Tree::specialNumber(node->name)
                    || node->name == Vocabulary::HEAD_MXPARSER_CALL || node->name == Vocabulary::HEAD_MXPARSER_SYMBOL);
            if (qualified) {
                extensionWarning(node, Vocabulary::HEAD_MXPARSER_CALL);
                operands.push_back(Tree::atom(NodeKind::SYMBOL, node->name, node->at));
            }
            for (const Node& child : node->children) operands.push_back(validate(child, locals, false, depth + 1));
            Node result = Tree::call(qualified ? Vocabulary::HEAD_MXPARSER_CALL : node->name, node->at, operands);
            result->userCall = true;
            result->binding = element;
            return result;
        }

        void missingWarning(const Node& node, const String& code) {
            Tree::warning(diagnostics, node->at, code, S(nativeWide(formatMessage(resources()->MATHJSON_UNRESOLVED_REFERENCE, node->name))));
        }

        ConversionFailure missing(const Node& node, const String& code) {
            return Codec::error(code, node->at, formatMessage(resources()->MATHJSON_UNRESOLVED_REFERENCE, node->name));
        }

        static ConversionFailure collision(const Node& node) {
            return Codec::error(NAME_COLLISION, node->at, resources()->MATHJSON_NAME_COLLISION);
        }

        void extensionWarning(const Node& node, const String& name) {
            Tree::warning(diagnostics, node->at, MXPARSER_EXTENSION,
                    S(nativeWide(formatMessage(resources()->MATHJSON_MXPARSER_EXTENSION, name))));
        }

        Node iterator(Node node, Names& locals, int depth) {
            Codec::Input::checkArity(node, 2);
            Node limits = node->arg(1);
            Node index, first, last;
            if (limits->call(Vocabulary::HEAD_LIMITS) || limits->call(Vocabulary::HEAD_TUPLE)) {
                Codec::Input::checkArity(limits, 3);
                index = limits->arg(0);
                first = limits->arg(1);
                last = limits->arg(2);
            } else if (limits->call(L"Element")) {
                Codec::Input::checkArity(limits, 2);
                index = limits->arg(0);
                Node range = limits->arg(1);
                if (!range->call(Vocabulary::HEAD_RANGE)) throw Codec::error(INVALID_SHAPE, range->at, resources()->MATHJSON_INVALID_SHAPE);
                Codec::Input::checkArity(range, 2);
                first = range->arg(0);
                last = range->arg(1);
            } else throw Codec::error(INVALID_SHAPE, limits->at, resources()->MATHJSON_INVALID_SHAPE);
            if (index->kind != NodeKind::SYMBOL) throw Codec::error(INVALID_SHAPE, index->at, resources()->MATHJSON_INVALID_SHAPE);
            Codec::Input::checkName(index->name, index->at);
            Vocabulary::checkLocalSymbol(index->name, index->at);
            if (locals.count(index->name) || parameters.byName.count(index->name)
                    || (forExport && visible.count(index->name)) || availableBuiltins.count(index->name))
                throw Codec::error(forExport ? UNSUPPORTED_BINDING : NAME_COLLISION, index->at,
                        forExport ? resources()->MATHJSON_UNSUPPORTED_DEFINITION : resources()->MATHJSON_NAME_COLLISION);
            first = validate(first, locals, false, depth + 1);
            last = validate(last, locals, false, depth + 1);
            if (binderIndices.emplace(index->name, index).second) binders.push_back(index->name);
            locals.insert(index->name);
            Node result = validate(node->arg(0), locals, false, depth + 1);
            locals.erase(index->name);
            return Tree::call(node->name, node->at, result, Tree::call(Vocabulary::HEAD_LIMITS, limits->at, index, first, last));
        }

        void checkIteratorBinding(const PrimitiveElementPtr& element) {
            if (binderIndices.empty()) return;
            auto index = binderIndices.find(Exchange::definitionName(element));
            if (index != binderIndices.end()) throw collision(index->second);
        }

        static bool integerAtom(Node node) {
            return node->kind == NodeKind::NUMBER && Tree::integral(node->number);
        }

        struct EmitPart {
            Node node;
            String text;
        };

        static String emit(Node node, Codec::Budget& budget) {
            String text;
            std::vector<EmitPart> pending;
            pending.push_back({node, {}});
            while (!pending.empty()) {
                EmitPart part = pending.back();
                pending.pop_back();
                budget.work(1, node->at);
                if (part.node == nullptr) text.append(part.text);
                else appendOrSchedule(part.node, text, pending);
                if (text.size() > Codec::MAX_SOURCE)
                    throw Codec::error(RESOURCE_LIMIT, node->at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_SOURCE));
            }
            budget.allocate(2L * text.size(), node->at);
            return text;
        }

        static void appendOrSchedule(Node node, String& text, std::vector<EmitPart>& pending) {
            if (node->kind == NodeKind::NUMBER) {
                if (node->number < 0) text.append(textOrEmpty(ParserSymbol::LEFT_PARENTHESES_STR));
                text.append(Tree::decimalSpelling(node->number));
                if (node->number < 0) text.append(textOrEmpty(ParserSymbol::RIGHT_PARENTHESES_STR));
                return;
            }
            if (node->kind == NodeKind::SYMBOL) {
                text.append(node->spelling.empty() ? node->name : node->spelling);
                return;
            }
            const Tree::Operation* op = node->userCall ? nullptr : Tree::operation(node->name);
            const String& spelling = node->spelling.empty() ? node->name : node->spelling;
            if (op == Tree::registered(Tree::Operation::NEGATE)) {
                text.append(spelling).append(textOrEmpty(ParserSymbol::LEFT_PARENTHESES_STR));
                pending.push_back({nullptr, textOrEmpty(ParserSymbol::RIGHT_PARENTHESES_STR)});
                pending.push_back({node->arg(0), {}});
            } else if (op == Tree::registered(Tree::Operation::FACTORIAL)) {
                text.append(textOrEmpty(ParserSymbol::LEFT_PARENTHESES_STR));
                pending.push_back({nullptr, textOrEmpty(ParserSymbol::RIGHT_PARENTHESES_STR) + spelling});
                pending.push_back({node->arg(0), {}});
            } else if (op != nullptr && (op->type == Operator::TYPE_ID || op->relation())) {
                text.append(textOrEmpty(ParserSymbol::LEFT_PARENTHESES_STR));
                pending.push_back({nullptr, textOrEmpty(ParserSymbol::RIGHT_PARENTHESES_STR)});
                String join = textOrEmpty(ParserSymbol::RIGHT_PARENTHESES_STR) + spelling + textOrEmpty(ParserSymbol::LEFT_PARENTHESES_STR);
                for (int i = static_cast<int>(node->children.size()) - 1; i >= 0; i--) {
                    pending.push_back({node->arg(i), {}});
                    if (i > 0) pending.push_back({nullptr, join});
                }
            } else {
                text.append(spelling).append(textOrEmpty(ParserSymbol::LEFT_PARENTHESES_STR));
                pending.push_back({nullptr, textOrEmpty(ParserSymbol::RIGHT_PARENTHESES_STR)});
                if (op == Tree::registered(Tree::Operation::LOG) || op == Tree::registered(Tree::Operation::ROOT)) {
                    pending.push_back({node->arg(0), {}});
                    pending.push_back({nullptr, textOrEmpty(ParserSymbol::COMMA_STR)});
                    pending.push_back({node->arg(1), {}});
                } else if (op != nullptr && op->iterator()) {
                    Node limits = node->arg(1);
                    pending.push_back({node->arg(0), {}});
                    for (int i = static_cast<int>(limits->children.size()) - 1; i >= 0; i--) {
                        pending.push_back({nullptr, textOrEmpty(ParserSymbol::COMMA_STR)});
                        pending.push_back({limits->arg(i), {}});
                    }
                } else {
                    for (int i = static_cast<int>(node->children.size()) - 1; i >= 0; i--) {
                        pending.push_back({node->arg(i), {}});
                        if (i > 0) pending.push_back({nullptr, textOrEmpty(ParserSymbol::COMMA_STR)});
                    }
                }
            }
        }

        static bool same(Node planned, Node actual, const BindingMap& bindings) {
            std::vector<Node> expected;
            std::vector<Node> received;
            expected.push_back(planned);
            received.push_back(actual);
            while (!expected.empty()) {
                Node lhs = expected.back();
                expected.pop_back();
                Node rhs = received.back();
                received.pop_back();
                if (lhs->kind != rhs->kind || lhs->children.size() != rhs->children.size()) return false;
                if (lhs->kind == NodeKind::NUMBER) {
                    if (lhs->number != rhs->number) return false;
                } else if (lhs->name != rhs->name) return false;
                if (lhs->userCall != rhs->userCall || lhs->builtin != rhs->builtin) return false;
                if (lhs->binding) {
                    auto found = bindings.find(lhs->binding);
                    if (found == bindings.end() || found->second != rhs->binding) return false;
                }
                if (!lhs->binding && rhs->binding) return false;
                for (int i = static_cast<int>(lhs->children.size()) - 1; i >= 0; i--) {
                    expected.push_back(lhs->arg(i));
                    received.push_back(rhs->arg(i));
                }
            }
            return true;
        }

        static ConversionFailure domain(Node node) {
            return Codec::error(UNSUPPORTED_DOMAIN, node->at, resources()->MATHJSON_UNSUPPORTED_CONSTRUCT);
        }

        static ConversionFailure binding(Node node) {
            return Codec::error(UNSUPPORTED_BINDING, node->at, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
        }
    };

    struct Tokens {
        struct Slot {
            const TokenPtr token;
            int level;
            Node value;
            const Tree::Operation* operation = nullptr;
            bool chain = false;
            Slot* close = nullptr;
            std::optional<std::vector<Slot*>> separators;
            Slot* head = nullptr;

            explicit Slot(TokenPtr token) : token(std::move(token)), level(this->token->tokenLevel) {}
            bool open() const { return Token::isLeftParenthesis(token); }
            bool isClose() const { return Token::isRightParenthesis(token); }
            bool comma() const { return Token::isParameterSeparator(token); }
            bool function() const {
                int type = token->tokenTypeId;
                return type == Token::NOT_MATCHED && textOrEmpty(ExpressionUtils::FUNCTION) == textOrEmpty(token->looksLike)
                        || type == Function::TYPE_ID || type == Function1Arg::TYPE_ID || type == Function2Arg::TYPE_ID
                        || type == Function3Arg::TYPE_ID || type == FunctionVariadic::TYPE_ID
                        || type == CalculusOperator::TYPE_ID || type == RecursiveArgument::TYPE_ID_RECURSIVE;
            }

        };

        using Slots = std::vector<Slot*>;
        using Operation = Tree::Operation;
        static Node read(Expression* original, Codec::Budget& budget) {
            StringPtr text = original->getExpressionString();
            preflight(text, budget);
            checkContextSize(original);
            // Keep keyword positions without invoking host evaluation or extension callbacks.
            ListPtr<ArgumentPtr> arguments = new_List<ArgumentPtr>();
            for (int i = 0; i < original->argumentsList->size(); i++) {
                ArgumentPtr argument = original->argumentsList->get(i);
                arguments->add(typeid(*argument.get()) == typeid(Argument) || typeid(*argument.get()) == typeid(RecursiveArgument)
                        ? argument : new_Argument(argument->getArgumentName(), 0.0));
            }
            ListPtr<FunctionPtr> functions = new_List<FunctionPtr>();
            for (int i = 0; i < original->functionsList->size(); i++) {
                FunctionPtr function = original->functionsList->get(i);
                functions->add(typeid(*function.get()) == typeid(Function) && function->getFunctionBodyType() == Function::BODY_RUNTIME
                        ? function : Exchange::newFunction(function->getFunctionName(), S(L"0"), new_List<StringPtr>()));
            }
            ListPtr<ConstantPtr> constants = new_List<ConstantPtr>();
            for (int i = 0; i < original->constantsList->size(); i++) {
                ConstantPtr constant = original->constantsList->get(i);
                constants->add(typeid(*constant.get()) == typeid(Constant)
                        ? constant : new_Constant(constant->getConstantName(), 0.0));
            }
            using DetachedFactory = ExpressionPtr (*)(const StringPtr&, const ListPtr<ArgumentPtr>&,
                    const ListPtr<FunctionPtr>&, const ListPtr<ConstantPtr>&, bool, bool, const ListPtr<double>&);
            auto makeDetached = static_cast<DetachedFactory>(&new_Expression);
            auto snapshot = makeDetached(text, arguments, functions, constants, true, original->UDFExpression, nullptr);
            if (original->checkIfImpliedMultiplicationMode()) snapshot->enableImpliedMultiplicationMode();
            else snapshot->disableImpliedMultiplicationMode();
            if (original->checkIfUnicodeBuiltinKeyWordsMode()) snapshot->enableUnicodeBuiltinKeyWordsMode();
            else snapshot->disableUnicodeBuiltinKeyWordsMode();
            if (original->checkIfAttemptToFixExpStrMode()) snapshot->enableAttemptToFixExpStrMode();
            else snapshot->disableAttemptToFixExpStrMode();
            ListPtr<TokenPtr> tokens;
            try {
                tokens = snapshot->getCopyOfInitialTokens();
            } catch (const std::out_of_range&) {
                throw Codec::error(UNSUPPORTED_NUMBER, nullptr, resources()->MATHJSON_UNSUPPORTED_NUMBER);
            } catch (const std::regex_error& failure) {
                if (failure.code() != std::regex_constants::error_stack
                        && failure.code() != std::regex_constants::error_complexity) throw;
                reportUnclassifiedTokens(snapshot->initialTokens, budget);
                throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
            }
            if (!tokens || tokens->size() == 0) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
            if (tokens->size() > Codec::MAX_SOURCE)
                throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_SOURCE));
            budget.allocate(192LL * tokens->size() + 2LL * utf16(*text).size(), nullptr);
            budget.work(tokens->size(), nullptr);
            // Slot addresses are valid for the entire reduction, including subframes.
            std::vector<Slot> arena;
            arena.reserve(tokens->size());
            Slots slots;
            slots.reserve(tokens->size());
            for (int i = 0; i < tokens->size(); ++i) {
                TokenPtr token = tokens->get(i);
                arena.emplace_back(token);
                slots.push_back(&arena.back());
            }
            pair(slots);
            if (!snapshot->checkLexSyntax()) throw invalid(snapshot->getErrorMessage());
            for (Slot* slot : slots) resolve(slot, original, budget);
            return reduce(std::move(slots), budget, 0);
        }

        static void reportUnclassifiedTokens(const ListPtr<TokenPtr>& tokens, Codec::Budget& budget) {
            // MSVC's name regex can exhaust its stack after tokenization.
            if (!tokens) return;
            for (int i = 0; i < tokens->size(); ++i) {
                const TokenPtr token = tokens->get(i);
                if (token->tokenTypeId != Token::NOT_MATCHED) continue;
                const String& name = textOrEmpty(token->tokenStr);
                budget.work(name.size(), nullptr);
                if (utf16(name).size() > Codec::MAX_NAME)
                    throw Codec::error(RESOURCE_LIMIT, nullptr,
                            formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_NAME));
            }
        }

        static void preflight(const StringPtr& source, Codec::Budget& budget) {
            if (!source) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
            if (source->size() > Codec::MAX_SOURCE)
                throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_SOURCE));
            String text = utf16(*source);
            if (text.size() > Codec::MAX_SOURCE)
                throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_SOURCE));
            budget.work(text.size(), nullptr);
            int depth = 0;
            int digits = 0;
            for (wchar_t c : text) {
                if (c == L'(' && ++depth > Codec::MAX_DEPTH)
                    throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_DEPTH));
                if (c == L')') --depth;
                if (Codec::digit(c)) {
                    if (++digits > Codec::MAX_NUMBER)
                        throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_NUMBER));
                } else digits = 0;
            }
        }

        static void checkContextSize(Expression* context) {
            auto size = std::int64_t{context->argumentsList->size()} + context->functionsList->size() + context->constantsList->size();
            if (size > Exchange::MAX_REFERENCES)
                throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Exchange::MAX_REFERENCES));
        }

        static void pair(const Slots& slots) {
            Slots stack;
            int unresolvedDepth = 0;
            for (int i = 0; i < static_cast<int>(slots.size()); i++) {
                Slot* slot = slots[i];
                slot->level += unresolvedDepth;
                if (slot->open()) {
                    if (i > 0 && slots[i - 1]->function()) {
                        slot->head = slots[i - 1];
                        slot->head->close = slot;
                        slot->separators.emplace();
                        // The tokenizer adds this level only for resolved function tokens.
                        if (slot->head->token->tokenTypeId == Token::NOT_MATCHED) {
                            slot->head->level++;
                            slot->level++;
                            unresolvedDepth++;
                        }
                    }
                    stack.push_back(slot);
                } else if (slot->isClose()) {
                    if (stack.empty()) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
                    Slot* opening = stack.back();
                    stack.pop_back();
                    opening->close = slot;
                    if (opening->head != nullptr && opening->head->token->tokenTypeId == Token::NOT_MATCHED) unresolvedDepth--;
                } else if (slot->comma()) {
                    if (stack.empty() || !stack.back()->separators)
                        throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
                    stack.back()->separators->push_back(slot);
                }
            }
            if (!stack.empty()) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
        }

        static void resolve(Slot* slot, Expression* context, Codec::Budget& budget) {
            TokenPtr token = slot->token;
            int type = token->tokenTypeId;
            if (type == ParserSymbol::NUMBER_TYPE_ID) {
                slot->value = Tree::fromToken(token, budget);
                return;
            }
            if (type == ConstantValue::TYPE_ID) {
                String name;
                switch (token->tokenId) {
                    case ConstantValue::PI_ID: name = Vocabulary::SYMBOL_PI; break;
                    case ConstantValue::EULER_ID: name = Vocabulary::SYMBOL_EXPONENTIAL_E; break;
                    case ConstantValue::TRUE_ID: name = Vocabulary::SYMBOL_TRUE; break;
                    case ConstantValue::FALSE_ID: name = Vocabulary::SYMBOL_FALSE; break;
                    default: throw unsupported();
                }
                slot->value = Tree::atom(NodeKind::SYMBOL, name, nullptr);
                slot->value->builtin = true;
                return;
            }
            if (type == Token::NOT_MATCHED && slot->function()) {
                if (slot->close == nullptr) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
                slot->value = Tree::call(textOrEmpty(token->tokenStr), nullptr);
                return;
            }
            if (type == Argument::TYPE_ID || type == Constant::TYPE_ID || type == Token::NOT_MATCHED) {
                slot->value = Tree::atom(NodeKind::SYMBOL, textOrEmpty(token->tokenStr), nullptr);
                if (type == Argument::TYPE_ID) slot->value->binding = context->argumentsList->get(token->tokenId);
                else if (type == Constant::TYPE_ID) slot->value->binding = context->constantsList->get(token->tokenId);
                return;
            }
            if (type == ParserSymbol::TYPE_ID && (slot->open() || slot->isClose() || slot->comma())) return;
            slot->operation = Tree::operation(type, token->tokenId);
            if (slot->function()) {
                if (slot->close == nullptr) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
                if (type == Function::TYPE_ID) {
                    slot->value = Tree::call(textOrEmpty(token->tokenStr), nullptr);
                    slot->value->binding = context->functionsList->get(token->tokenId);
                } else {
                    if (slot->operation == nullptr) throw unsupported();
                    int arity = slot->close->separators->size() + 1;
                    if (!slot->operation->accepts(arity) && !(slot->operation->iterator() && arity == 5))
                        throw wrongArity(token->tokenStr);
                }
            } else if (slot->operation == nullptr) throw unsupported();
        }

        static Node reduce(Slots slots, Codec::Budget& budget, int depth) {
            if (depth >= Codec::MAX_DEPTH)
                throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_DEPTH));
            if (slots.empty()) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
            // A calculus frame preempts the ordinary reduction scan.
            for (;;) {
                int first = -1;
                for (int i = 0; i < static_cast<int>(slots.size()); i++) {
                    const Operation* operation = slots[i]->operation;
                    if (operation == Tree::registered(Operation::IF) || operation != nullptr && operation->iterator()) {
                        first = i;
                        break;
                    }
                }
                budget.work(slots.size(), nullptr);
                if (first < 0) break;
                Slot* head = slots[first];
                Nodes children;
                int start = first + 2;
                int end = -1;
                Slots boundaries = *head->close->separators;
                boundaries.push_back(head->close->close);
                for (Slot* boundary : boundaries) {
                    end = indexOf(slots, boundary);
                    budget.work(slots.size(), nullptr);
                    if (end < start) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
                    children.push_back(reduce(Slots(slots.begin() + start, slots.begin() + end), budget, depth + 1));
                    start = end + 1;
                }
                Node value;
                if (head->operation == Tree::registered(Operation::IF)) value = Tree::call(head->operation->head, nullptr, children);
                else {
                    Node index = children[0];
                    if (index->kind != NodeKind::SYMBOL || index->binding != nullptr
                            || (head->close->separators->at(0) != slots[first + 3]))
                        throw Codec::error(UNSUPPORTED_BINDING, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
                    if (children.size() == 5) {
                        Node by = children[4];
                        if (by->kind != NodeKind::NUMBER || by->number != 1)
                            throw Codec::error(UNSUPPORTED_DOMAIN, nullptr, resources()->MATHJSON_UNSUPPORTED_CONSTRUCT);
                    }
                    value = Tree::call(head->operation->head, nullptr, children[3],
                            Tree::call(Vocabulary::HEAD_LIMITS, nullptr, index, children[1], children[2]));
                }
                budget.work(slots.size(), nullptr);
                head->level--;
                set(head, value);
                slots.erase(slots.begin() + (first + 1), slots.begin() + (end + 1));
            }
            while (slots.size() > 1) {
                budget.work(2L * slots.size(), nullptr);
                int lo = 0, hi = 0, max = slots[0]->level;
                bool uninterrupted = true;
                for (int i = 1; i < static_cast<int>(slots.size()); i++) {
                    int level = slots[i]->level;
                    if (level > max) {
                        max = level;
                        lo = i;
                        uninterrupted = true;
                    }
                    if (level < max) uninterrupted = false;
                    if (uninterrupted && level == max) hi = i;
                }
                int lastPower = -1, lastTetration = -1;
                int best = -1;
                int bestRank = (std::numeric_limits<int>::max)();
                int leftParen = -1, rightParen = -1;
                std::vector<int> commas;
                for (int i = lo; i <= hi; i++) {
                    Slot* slot = slots[i];
                    if (slot->open() && leftParen < 0) leftParen = i;
                    if (slot->isClose() && rightParen < 0) rightParen = i;
                    if (slot->comma()) commas.push_back(i);
                    const Operation* op = slot->operation;
                    if (op == Tree::registered(Operation::TETRATION) && ready(slots, i - 1) && ready(slots, i + 1)) {
                        lastTetration = i;
                        continue;
                    }
                    if (op == Tree::registered(Operation::POWER)) {
                        lastPower = i;
                        continue;
                    }
                    int candidate = rank(slots, i);
                    if (candidate < bestRank) {
                        best = i;
                        bestRank = candidate;
                    }
                }
                if (lastTetration >= 0 && bestRank >= 3) {
                    best = lastTetration;
                } else if (lastPower >= 0) {
                    if (ready(slots, lastPower - 1) && ready(slots, lastPower + 1) && bestRank > 3) {
                        best = lastPower;
                        bestRank = 3;
                    } else if (bestRank > 6 && lastPower + 2 <= hi && ready(slots, lastPower + 2)) {
                        const Operation* sign = slots[lastPower + 1]->operation;
                        if (sign == Tree::registered(Operation::ADD) || sign == Tree::registered(Operation::SUBTRACT)) {
                            best = lastPower + 1;
                            bestRank = 6;
                        }
                    }
                }
                if (best >= 0) {
                    apply(slots, best);
                } else if (!commas.empty()) {
                    for (int i = static_cast<int>(commas.size()) - 1; i >= 0; i--) {
                        int position = commas[i];
                        budget.work(slots.size() - position, nullptr);
                        slots.erase(slots.begin() + (position));
                    }
                } else if (leftParen >= 0 && rightParen > leftParen
                        && slots[leftParen]->close == slots[rightParen]) {
                    for (int i = leftParen + 1; i < rightParen; i++) {
                        slots[i]->level--;
                        slots[i]->chain = false;
                    }
                    slots.erase(slots.begin() + (rightParen));
                    slots.erase(slots.begin() + (leftParen));
                } else {
                    throw Codec::error(UNSUPPORTED_BINDING, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
                }
            }
            if (!ready(slots, 0)) throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
            return slots.front()->value;
        }

        static int rank(const Slots& slots, int i) {
            Slot* slot = slots[i];
            if (slot->function() && slot->close != nullptr) {
                // The evaluator selects the first function of a class at this level.
                // Its delimiters have already been removed when that selection is actionable.
                if (slot->token->tokenTypeId == FunctionVariadic::TYPE_ID) return -1;
                if (slot->token->tokenTypeId == Function2Arg::TYPE_ID) return 0;
                if (slot->token->tokenTypeId == Function1Arg::TYPE_ID) return 1;
                return 2;
            }
            const Operation* op = slot->operation;
            if (op == nullptr) return (std::numeric_limits<int>::max)();
            switch (op->code) {
                case Operation::FACTORIAL: return ready(slots, i - 1) ? 4 : (std::numeric_limits<int>::max)();
                case Operation::SQRT: return ready(slots, i + 1) ? 5 : (std::numeric_limits<int>::max)();
                case Operation::MULTIPLY: case Operation::DIVIDE:
                    return ready(slots, i - 1) && ready(slots, i + 1) ? 7 : (std::numeric_limits<int>::max)();
                case Operation::ADD: case Operation::SUBTRACT: return ready(slots, i + 1) ? 8 : (std::numeric_limits<int>::max)();
                default: return op->relation() && ready(slots, i - 1) && ready(slots, i + 1)
                        ? 9 + op->code - Operation::NOT_EQUAL : (std::numeric_limits<int>::max)();
            }
        }

        static bool ready(const Slots& slots, int i) {
            return i >= 0 && i < static_cast<int>(slots.size()) && slots[i]->value != nullptr && slots[i]->close == nullptr;
        }

        static void set(Slot* slot, Node node) {
            slot->value = node;
            slot->operation = nullptr;
            slot->chain = false;
            slot->close = nullptr;
        }

        static void apply(Slots& slots, int i) {
            Slot* slot = slots[i];
            const Operation* op = slot->operation;
            if (slot->function() && slot->close != nullptr) {
                int arity = slot->close->separators->size() + 1;
                Nodes children;
                children.reserve(arity);
                for (int j = 1; j <= arity; j++) {
                    if (!ready(slots, i + j) || slots[i + j]->level != slot->level)
                        throw invalid(resources()->MATHJSON_INVALID_MXPARSER_SOURCE);
                    children.push_back(slots[i + j]->value);
                }
                if (op == Tree::registered(Operation::LOG) || op == Tree::registered(Operation::ROOT)) std::swap(children[0], children[1]);
                Node invocation = Tree::call(op == nullptr ? textOrEmpty(slot->token->tokenStr) : op->head, nullptr, children);
                if (op == nullptr) {
                    invocation->binding = slot->value->binding;
                    invocation->userCall = true;
                }
                slot->level--;
                set(slot, invocation);
                slots.erase(slots.begin() + (i + 1), slots.begin() + (i + arity + 1));
                return;
            }
            if (op == Tree::registered(Operation::FACTORIAL)) {
                Slot* left = slots[i - 1];
                left->level = slot->level;
                set(left, Tree::call(op->head, nullptr, left->value));
                slots.erase(slots.begin() + (i));
            } else if (op == Tree::registered(Operation::SQRT)
                    || ((op == Tree::registered(Operation::ADD) || op == Tree::registered(Operation::SUBTRACT)) && !ready(slots, i - 1))) {
                Node right = slots[i + 1]->value;
                set(slot, op == Tree::registered(Operation::ADD) ? right : Tree::call(op == Tree::registered(Operation::SUBTRACT) ? Tree::registered(Operation::NEGATE)->head : op->head, nullptr, right));
                slots.erase(slots.begin() + (i + 1));
            } else {
                Slot* left = slots[i - 1];
                Node right = slots[i + 1]->value;
                if (op->chain() && left->chain && left->level == slot->level && left->value->call(op->head)) {
                    left->value->appendChainOperand(right);
                } else if (op->chain()) {
                    set(left, Tree::call(op->head, nullptr, Nodes{left->value, right}));
                    left->chain = true;
                } else {
                    set(left, Tree::call(op->head, nullptr, left->value, right));
                }
                left->level = slot->level;
                slots.erase(slots.begin() + (i), slots.begin() + (i + 2));
            }
        }

        static ConversionFailure unsupported() {
            return Codec::error(UNSUPPORTED_NODE, nullptr, resources()->MATHJSON_UNSUPPORTED_CONSTRUCT);
        }

        static ConversionFailure wrongArity(const StringPtr& token) {
            return Codec::error(INVALID_ARITY, nullptr, formatMessage(resources()->MATHJSON_WRONG_ARGUMENT_COUNT, token));
        }

        static ConversionFailure invalid(const StringPtr& message) {
            return Codec::error(L"INVALID_MXPARSER_SOURCE", nullptr, message);
        }

        static ConversionFailure invalid(const String& message) {
            return Codec::error(L"INVALID_MXPARSER_SOURCE", nullptr, message);
        }


        static int indexOf(const Slots& slots, const Slot* slot) {
            auto at = std::find(slots.begin(), slots.end(), slot);
            return at == slots.end() ? -1 : static_cast<int>(at - slots.begin());
        }
    };

    struct Vocabulary {
        inline static const String HEAD_BLOCK = L"Block";
        inline static const String HEAD_DECLARE = L"Declare";
        inline static const String HEAD_DEFINE_FUNCTION = L"DefineFunction";
        inline static const String HEAD_FUNCTION = L"Function";
        inline static const String HEAD_DICTIONARY = L"Dictionary";
        inline static const String HEAD_KEY_VALUE_PAIR = L"KeyValuePair";
        inline static const String HEAD_LIMITS = L"Limits";
        inline static const String HEAD_TUPLE = L"Tuple";
        inline static const String HEAD_RANGE = L"Range";
        inline static const String HEAD_RATIONAL = L"Rational";
        inline static const String HEAD_BOOLE = L"Boole";
        inline static const String HEAD_ERROR = L"Error";
        inline static const String HEAD_MXPARSER_CALL = L"MxParserCall";
        inline static const String HEAD_MXPARSER_SYMBOL = L"MxParserSymbol";
        inline static const String SYMBOL_PI = L"Pi";
        inline static const String SYMBOL_EXPONENTIAL_E = L"ExponentialE";
        inline static const String SYMBOL_TRUE = L"True";
        inline static const String SYMBOL_FALSE = L"False";
        inline static const String ATTRIBUTE_VALUE = L"value";
        inline static const String ATTRIBUTE_CONSTANT = L"constant";

        static void checkLocalSymbol(const String& name, const Value& at) {
            if (name == SYMBOL_PI || name == SYMBOL_EXPONENTIAL_E || name == SYMBOL_TRUE
                    || name == SYMBOL_FALSE || Tree::specialNumber(name))
                throw Codec::error(NAME_COLLISION, at, resources()->MATHJSON_NAME_COLLISION);
        }

        static bool structure(const String& name) {
            return name == HEAD_BLOCK || name == HEAD_DECLARE || name == HEAD_DEFINE_FUNCTION
                    || name == HEAD_FUNCTION || name == HEAD_DICTIONARY || name == HEAD_KEY_VALUE_PAIR
                    || name == HEAD_LIMITS || name == HEAD_RANGE || name == HEAD_ERROR
                    || name == L"ErrorCode" || name == L"List" || name == HEAD_TUPLE
                    || name == L"Element" || name == L"Apply" || name == L"Program"
                    || name == L"Hold" || name == L"Integral" || name == L"Derivative";
        }

        static bool reserved(const String& name) {
            static const std::unordered_set<String> RESERVED = {

            L"AGM", L"About", L"Abs", L"AbsArg", L"Add", L"AddTo", L"Adjoin",
            L"AdjugateMatrix", L"AiryAi", L"AiryAiPrime", L"AiryBi", L"AiryBiPrime", L"AlgebraicGenerator", L"All",
            L"Alternatives", L"And", L"Angle", L"Annotated", L"Any", L"Apart", L"AppellF1",
            L"Append", L"Apply", L"ApplyWhole", L"Approx", L"ApproxEqual", L"ApproxNotEqual", L"ArbitraryConstant",
            L"ArbitraryInteger", L"Arc", L"Arccos", L"Arccot", L"Arccsc", L"Arcosh", L"Arcoth",
            L"Arcsch", L"Arcsec", L"Arcsin", L"Arctan", L"Arctan2", L"Arg", L"ArgMax",
            L"ArgMin", L"Argument", L"Arsech", L"Arsinh", L"Artanh", L"AsHsl", L"AsHsv",
            L"AsOklab", L"AsOklch", L"AsRgb", L"AssertPresent", L"Assign", L"Assume", L"At",
            L"AvogadroConstant", L"BarnesG", L"BaseForm", L"BellNumber", L"BernoulliB", L"BesselI", L"BesselJ",
            L"BesselK", L"BesselY", L"Beta", L"BetaRegularized", L"BigO", L"BinCounts", L"Binomial",
            L"BinomialDistribution", L"Block", L"BoltzmannConstant", L"Boole", L"Break", L"BuiltinFunction", L"CDF",
            L"Cancel", L"CanonicalForm", L"CarmichaelLambda", L"CartesianProduct", L"CaseFold", L"CatalanConstant", L"CatalanNumber",
            L"Ceil", L"CharacterFrom", L"CharacteristicPolynomial", L"Characters", L"ChineseRemainder", L"CholeskyDecomposition", L"Choose",
            L"Chop", L"Chunk", L"ChunkBy", L"CircleContour", L"CircularIntegrate", L"Clamp", L"ClausenCl",
            L"Closed", L"Coalesce", L"CoefficientList", L"Colon", L"Color", L"ColorContrast", L"ColorDelta",
            L"ColorFromColorspace", L"ColorMix", L"ColorToColorspace", L"ColorToString", L"Colormap", L"Combinations", L"Complement",
            L"Complex", L"ComplexInfinity", L"ComplexNumbers", L"ComplexRoots", L"Composition", L"Comprehension", L"Condition",
            L"Conforms", L"Congruent", L"Conjugate", L"ConjugateTranspose", L"Contains", L"ContainsSequence", L"ContinuationPlaceholder",
            L"Continue", L"ContinuedFraction", L"ContourIntegrate", L"ContrastingColor", L"Correlation", L"Cos", L"CosIntegral",
            L"Cosh", L"CoshIntegral", L"Cot", L"Coth", L"Count", L"CountIf", L"Covariance",
            L"Cross", L"Csc", L"Csch", L"Cycle", L"D", L"DMS", L"DSolve",
            L"Declare", L"DeclareConformance", L"DeclareProtocol", L"DeclareSumType", L"DeclareType", L"DedekindEta", L"Dedup",
            L"DefineFunction", L"Degree", L"Degrees", L"DeleteAt", L"Delimiter", L"Denominator", L"Derivative",
            L"Det", L"Determinant", L"Diagonal", L"Dictionary", L"DictionaryFrom", L"Differences", L"Digamma",
            L"DigitCount", L"DigitSum", L"DigitsFrom", L"Dimension", L"DirichletBeta", L"DirichletCharacter", L"DirichletEta",
            L"DirichletL", L"Discriminant", L"Distance", L"Distribute", L"Divide", L"Divides", L"DivisorSigma",
            L"Divisors", L"Dot", L"Drop", L"DropWhile", L"Eigen", L"Eigenvalues", L"Eigenvectors",
            L"EisensteinE", L"Element", L"ElementMax", L"ElementMin", L"ElementaryCharge", L"EllipticE", L"EllipticF",
            L"EllipticK", L"EllipticPi", L"EmptySet", L"Enclosure", L"EndsWith", L"Equal", L"Equivalent",
            L"Erf", L"ErfInv", L"Erfc", L"Erfi", L"Error", L"ErrorCode", L"EulerE",
            L"EulerGamma", L"EulerPhi", L"Eulerian", L"Evaluate", L"EvaluateAt", L"Exists", L"ExistsUnique",
            L"Exp", L"Exp2", L"ExpIntegralEi", L"Expand", L"ExpandAll", L"ExponentialDistribution", L"ExponentialE",
            L"ExtendedComplexNumbers", L"ExtendedGCD", L"ExtendedIntegers", L"ExtendedRationalNumbers", L"ExtendedRealNumbers", L"Factor", L"FactorInteger",
            L"Factorial", L"Factorial2", L"False", L"Fibonacci", L"Field", L"Fill", L"Filter",
            L"Find", L"FindFit", L"FindRoot", L"First", L"FixedPoint", L"FlatMap", L"Flatten",
            L"Floor", L"Fold", L"ForAll", L"Fract", L"FresnelC", L"FresnelS", L"FromContinuedFraction",
            L"FromDigits", L"Function", L"GCD", L"Gamma", L"GammaLn", L"GammaRegularized", L"GamutMap",
            L"GasConstant", L"GeometricVector", L"GoldenRatio", L"GraphemeClusters", L"GravitationalConstant", L"Greater", L"GreaterEqual",
            L"GroupBy", L"HadamardProduct", L"Half", L"HarmonicNumber", L"Haversine", L"Head", L"Heaviside",
            L"Histogram", L"Hold", L"HoldValues", L"Hom", L"HorizontalSpacing", L"Hsl", L"Hsv",
            L"HurwitzZeta", L"Hypergeometric1F1", L"Hypergeometric2F1", L"Hypot", L"IdenticallyEqual", L"Identity", L"IdentityMatrix",
            L"If", L"Im", L"Imaginary", L"ImaginaryNumbers", L"ImaginaryUnit", L"Implies", L"Indeterminate",
            L"IndexOf", L"IndexWhere", L"IndexedSequence", L"Infimum", L"Input", L"Insert", L"IntegerDigits",
            L"IntegerPartitions", L"IntegerSqrt", L"IntegerString", L"Integers", L"Integrate", L"InterpolatingFunction", L"Interpret",
            L"InterquartileRange", L"Intersection", L"Interval", L"Inverse", L"InverseFunction", L"InverseHaversine", L"InvisibleOperator",
            L"IsAbundant", L"IsCenteredSquare", L"IsCompatibleUnit", L"IsComposite", L"IsDiagonal", L"IsEmpty", L"IsError",
            L"IsEven", L"IsHappy", L"IsMatch", L"IsMissing", L"IsOctahedral", L"IsOdd", L"IsPerfect",
            L"IsPerfectPower", L"IsPrime", L"IsSame", L"IsSatisfiable", L"IsSquare", L"IsSquareFree", L"IsSquareMatrix",
            L"IsSymmetric", L"IsTautology", L"IsTriangular", L"Iterate", L"JacobiSymbol", L"JacobiTheta", L"JacobianMatrix",
            L"Join", L"Julia", L"Kernel", L"KeyValuePair", L"Keys", L"KroneckerDelta", L"Kurtosis",
            L"LCM", L"LUDecomposition", L"LambertW", L"Last", L"Latex", L"LatexString", L"Lb",
            L"LegendreSymbol", L"Length", L"LerchPhi", L"Less", L"LessEqual", L"Lg", L"Limit",
            L"Limits", L"LinearRegression", L"LinearSolve", L"Linspace", L"List", L"ListFrom", L"ListJoin",
            L"Ln", L"Log", L"Log10", L"Log2", L"LogBarnesG", L"LogGamma", L"LogIntegral",
            L"Loop", L"Lucas", L"LucasL", L"MachineEpsilon", L"Mandelbrot", L"Map", L"Match",
            L"MatchCase", L"MatchesType", L"Matrix", L"MatrixMultiply", L"MatrixPower", L"MatrixRank", L"Max",
            L"MaxBy", L"Mean", L"Measurement", L"Median", L"MemberCall", L"Min", L"MinBy",
            L"MinimalCNF", L"MinimalDNF", L"Missing", L"Mod", L"Mode", L"ModularInverse", L"Module",
            L"MoebiusMu", L"Most", L"Mu0", L"Multinomial", L"MultiplicativeOrder", L"Multiply", L"N",
            L"ND", L"NDSolve", L"NDSolveFunction", L"NIntegrate", L"NLimit", L"NPartition", L"NSolve",
            L"NaN", L"NamedArgument", L"Nand", L"Negate", L"NegativeInfinity", L"NegativeIntegers", L"NegativeNumbers",
            L"NextPrime", L"NonNegativeIntegers", L"NonNegativeNumbers", L"NonPositiveIntegers", L"NonPositiveNumbers", L"Nor", L"Norm",
            L"Normal", L"NormalDistribution", L"Not", L"NotApprox", L"NotApproxEqual", L"NotApproxNotEqual", L"NotDivides",
            L"NotElement", L"NotEqual", L"NotExists", L"NotForAll", L"NotGreater", L"NotGreaterNotEqual", L"NotLess",
            L"NotLessNotEqual", L"NotPrecedes", L"NotSubset", L"NotSucceeds", L"NotSuperset", L"NotSupersetEqual", L"NotTilde",
            L"NotTildeEqual", L"NotTildeFullEqual", L"Nothing", L"NthPrime", L"NumberFrom", L"Numbers", L"Numerator",
            L"NumeratorDenominator", L"NumericApproximation", L"Object", L"Oklab", L"Oklch", L"Ones", L"OnesMatrix",
            L"Open", L"Optional", L"Or", L"Ordering", L"OverParen", L"PDF", L"PadEnd",
            L"PadStart", L"Pair", L"Parallel", L"ParallelComprehension", L"ParallelDomain", L"ParallelLoop", L"Parse",
            L"PartialFraction", L"Partition", L"PartitionsP", L"PartitionsQ", L"Permutations", L"Perpendicular", L"Pi",
            L"Pin", L"Pipe", L"PlanckConstant", L"PlusMinus", L"Pochhammer", L"PointList", L"PointX",
            L"PointY", L"PointZ", L"PoissonDistribution", L"PolyGamma", L"PolyLog", L"Polygon", L"PolygonContour",
            L"Polynomial", L"PolynomialDegree", L"PolynomialFit", L"PolynomialGCD", L"PolynomialQuotient", L"PolynomialRemainder", L"PolynomialRoots",
            L"PopulationCovariance", L"PopulationStandardDeviation", L"PopulationVariance", L"Position", L"PositiveInfinity", L"PositiveIntegers", L"PositiveNumbers",
            L"Power", L"PowerMod", L"PowerModList", L"PowerSet", L"PreDecrement", L"PreIncrement", L"Precedes",
            L"Predicate", L"Prime", L"PrimeFactors", L"PrimeImplicants", L"PrimeImplicates", L"PrimeNu", L"PrimeNumber",
            L"PrimeOmega", L"PrimePi", L"Primes", L"PrimitiveRoot", L"PrimitiveRootList", L"Print", L"Product",
            L"ProtocolMember", L"ProtocolProperty", L"PseudoInverse", L"QRDecomposition", L"Quadrilateral", L"Quantile", L"Quantity",
            L"QuantityMagnitude", L"QuantityUnit", L"Quartiles", L"QuotientRing", L"RSolve", L"Radical", L"Random",
            L"RandomChoice", L"RandomExpression", L"RandomPrime", L"RandomSample", L"RandomShuffle", L"Range", L"RangeOf",
            L"Rank", L"Rational", L"RationalNumbers", L"RationalReconstruction", L"Rationalize", L"Re", L"Real",
            L"RealLineContour", L"RealNumbers", L"RectangleContour", L"Reduce", L"RegExp", L"ReleaseHold", L"Remainder",
            L"Repeat", L"ReplaceAll", L"ReplaceAt", L"Reshape", L"Residue", L"ResidueClass", L"Rest",
            L"Resultant", L"Reverse", L"Rgb", L"Root", L"RotateLeft", L"RotateRight", L"Round",
            L"RowReduce", L"Rule", L"RuntimeError", L"SVD", L"Same", L"Scan", L"Sec",
            L"Sech", L"Second", L"Segment", L"Sequence", L"Series", L"Set", L"SetFrom",
            L"SetMinus", L"Shape", L"Sigma0", L"Sigma1", L"SigmaMinus1", L"Sign", L"Signature",
            L"Simplify", L"Sin", L"SinIntegral", L"Sinc", L"Single", L"SingularValues", L"Sinh",
            L"SinhIntegral", L"Skewness", L"Slice", L"SlidingWindow", L"Smoothstep", L"Solve", L"Sort",
            L"SpeedOfLight", L"Sphere", L"Spread", L"Sqrt", L"Square", L"StandardDeviation", L"StandardGravity",
            L"StartsWith", L"StefanBoltzmannConstant", L"StieltjesGamma", L"Stirling", L"StirlingS1", L"StirlingS2", L"String",
            L"StringCompare", L"StringFrom", L"StringJoin", L"StringMatch", L"StringMatchAll", L"StringRepeat", L"StringReplace",
            L"StringSplit", L"Subfactorial", L"Subscript", L"Subset", L"SubsetEqual", L"Subtract", L"Subtype",
            L"Succeeds", L"Sum", L"Superset", L"SupersetEqual", L"Supremum", L"Symbol", L"SymmetricDifference",
            L"Table", L"Tabulate", L"Tail", L"Take", L"TakeWhile", L"Tally", L"Tan",
            L"Tanh", L"Text", L"Third", L"Tilde", L"TildeEqual", L"TildeFullEqual", L"Timing",
            L"To", L"ToCNF", L"ToDNF", L"ToLowerCase", L"ToUpperCase", L"Together", L"Totient",
            L"Trace", L"Transpose", L"Triangle", L"TrigExpand", L"TrigReduce", L"TrigToExp", L"Trigamma",
            L"Trim", L"TrimEnd", L"TrimStart", L"Triple", L"True", L"Truncate", L"TruthTable",
            L"Tuple", L"TupleFrom", L"Type", L"TypeFrom", L"Typed", L"Unevaluated", L"UnicodeScalars",
            L"UniformDistribution", L"Union", L"Unique", L"UnitConvert", L"UnitDimension", L"UnitSimplify", L"Utf16",
            L"Utf8", L"VacuumPermittivity", L"Values", L"Variance", L"Vector", L"Which", L"Wildcard",
            L"WildcardOptionalSequence", L"WildcardSequence", L"WithRandomSeed", L"Xor", L"ZeroMatrix", L"Zeros", L"Zeta",
            L"Zip", L"distribution", L"e", L"i", L"limits"
        
            };
            return RESERVED.find(name) != RESERVED.end();
        }
    };

    struct Exchange {
        static constexpr int MAX_DEFINITIONS = 1024;
        static constexpr int MAX_REFERENCES = 16384;

        using Operation = Tree::Operation;
        using Definitions = ListPtr<PrimitiveElementPtr>;
        using Keywords = std::unordered_map<String, KeyWordPtr>;
        using PlanPtr = std::shared_ptr<Plan>;

        static MathJSON::Result<StringPtr> exportExpression(Expression* expression) {
            return exportModel(requireExpression(expression), false);
        }

        static MathJSON::Result<StringPtr> exportProgram(Expression* expression) {
            return exportModel(requireExpression(expression), true);
        }

        static MathJSON::Result<ExpressionPtr> importExpression(
                const StringPtr& json, const Options& options, const Definitions& definitions) {
            Import operation(json, options, definitions, false);
            ExpressionPtr result = operation.expression();
            operation.publish();
            std::stable_sort(operation.diagnostics.begin(), operation.diagnostics.end(),
                [](const DiagnosticPtr& a, const DiagnosticPtr& b) { return a->getOffset() < b->getOffset(); });
            return MathJSON::Result<ExpressionPtr>(result, nullptr, std::move(operation.diagnostics));
        }

        static MathJSON::Result<PrimitiveElementPtr> importDefinition(const StringPtr& json, const Definitions& definitions) {
            Import operation(json, MathJSON::ImportOptions::defaults(), definitions, true);
            PrimitiveElementPtr result = operation.definition(operation.root, operation.visible, true);
            operation.publish();
            std::stable_sort(operation.diagnostics.begin(), operation.diagnostics.end(),
                [](const DiagnosticPtr& a, const DiagnosticPtr& b) { return a->getOffset() < b->getOffset(); });
            return MathJSON::Result<PrimitiveElementPtr>(result, nullptr, std::move(operation.diagnostics));
        }

        static MathJSON::Result<StringPtr> exportDefinition(const PrimitiveElementPtr& definition) {
            requireDefinition(definition);
            Codec::Budget budget;
            Analysis analysis(budget);
            auto function = std::dynamic_pointer_cast<Function>(definition);
            auto body = function ? analysis.function(function, 0, false) : nullptr;
            String json = Tree::write(declaration(definition, body), budget);
            return MathJSON::Result<StringPtr>(S(nativeWide(json)), nullptr, std::move(analysis.diagnostics));
        }

        static MathJSON::Result<StringPtr> exportModel(Expression* expression, bool program) {
            Codec::Budget budget;
            Analysis analysis(budget);
            PlanPtr plan = analysis.plan(expression, !program);
            Node result = plan->validate(Tokens::read(expression, analysis.budget));
            Node output = result;
            if (program) {
                for (const PrimitiveElementPtr& dependency : plan->used) analysis.reference(dependency, 0);
                Nodes declarations;
                Names names;
                for (const PrimitiveElementPtr& element : analysis.order) {
                    String name = definitionName(element);
                    if (!names.insert(name).second)
                        throw Codec::error(NAME_COLLISION, nullptr, resources()->MATHJSON_NAME_COLLISION);
                    declarations.push_back(declaration(element, analysis.body(element)));
                }
                declarations.push_back(result);
                output = Tree::call(Vocabulary::HEAD_BLOCK, nullptr, declarations);
            }
            String json = Tree::write(output, analysis.budget);
            return MathJSON::Result<StringPtr>(S(nativeWide(json)), nullptr, std::move(analysis.diagnostics));
        }

        static Expression* requireExpression(Expression* expression) {
            if (expression == nullptr || typeid(*expression) != typeid(Expression))
                throw Codec::error(INVALID_ARGUMENT, nullptr, resources()->MATHJSON_INVALID_ARGUMENT);
            return expression;
        }

        static void requireReference(const PrimitiveElementPtr& definition, bool allowSubclassReferences) {
            if (std::dynamic_pointer_cast<RecursiveArgument>(definition)
                    || (!allowSubclassReferences && !isBaseDefinition(definition)))
                throw Codec::error(UNSUPPORTED_PROGRAM, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
        }

        static bool isBaseDefinition(const PrimitiveElementPtr& definition) {
            const auto& type = typeid(*definition.get());
            return type == typeid(Argument) || type == typeid(Function) || type == typeid(Constant);
        }

        static bool declarableValue(const PrimitiveElementPtr& element) {
            if (!isBaseDefinition(element)) return false;
            if (auto argument = std::dynamic_pointer_cast<Argument>(element)) {
                return argument->argumentType == Argument::FREE_ARGUMENT && argument->getArgumentBodyType() == Argument::BODY_RUNTIME;
            }
            if (auto function = std::dynamic_pointer_cast<Function>(element)) {
                return !function->isVariadic && function->getFunctionBodyType() == Function::BODY_RUNTIME;
            }
            return true;
        }

        static void requireDefinition(const PrimitiveElementPtr& definition) {
            if (!definition) throw Codec::error(INVALID_ARGUMENT, nullptr, resources()->MATHJSON_INVALID_ARGUMENT);
            const auto& type = typeid(*definition.get());
            if (type == typeid(Argument)) {
                auto argument = std::static_pointer_cast<Argument>(definition);
                if (argument->argumentType == Argument::FREE_ARGUMENT && argument->getArgumentBodyType() == Argument::BODY_RUNTIME)
                    return;
            } else if (type == typeid(Constant)) {
                return;
            } else if (type == typeid(Function)) {
                auto function = std::static_pointer_cast<Function>(definition);
                if (!function->isVariadic && function->getFunctionBodyType() == Function::BODY_RUNTIME
                        && function->getParametersNumber() >= 1) return;
            } else if (!(std::dynamic_pointer_cast<Argument>(definition)
                         || std::dynamic_pointer_cast<Constant>(definition)
                         || std::dynamic_pointer_cast<Function>(definition)))
                throw Codec::error(INVALID_ARGUMENT, nullptr, resources()->MATHJSON_INVALID_ARGUMENT);
            throw Codec::error(UNSUPPORTED_PROGRAM, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
        }

        static String definitionName(const PrimitiveElementPtr& definition) {
            if (auto argument = std::dynamic_pointer_cast<Argument>(definition)) return textOrEmpty(argument->getArgumentName());
            if (auto constant = std::dynamic_pointer_cast<Constant>(definition)) return textOrEmpty(constant->getConstantName());
            if (auto function = std::dynamic_pointer_cast<Function>(definition)) return textOrEmpty(function->getFunctionName());
            throw Codec::error(INVALID_ARGUMENT, nullptr, resources()->MATHJSON_INVALID_ARGUMENT);
        }

        static Names builtins(bool udf, bool unicode) {
            ExpressionPtr dictionary = new_Expression(L"");
            dictionary->UDFExpression = udf;
            if (unicode) dictionary->enableUnicodeBuiltinKeyWordsMode();
            else dictionary->disableUnicodeBuiltinKeyWordsMode();
            Names names;
            auto keywords = dictionary->getKeyWords();
            for (int i = 0; i < keywords->size(); ++i)
                names.insert(textOrEmpty(keywords->get(i)->wordString));
            return names;
        }

        static void checkAvailableName(const String& name, const Value& at, const Names& builtins) {
            Codec::Input::checkName(name, at);
            if (builtins.count(name) && !mXparser::checkIfsetToOverrideBuiltinTokens())
                throw Codec::error(NAME_COLLISION, at, resources()->MATHJSON_NAME_COLLISION);
        }

        static void addVisible(Visible& visible, const PrimitiveElementPtr& element) {
            String name = definitionName(element);
            auto inserted = visible.emplace(name, element);
            if (!inserted.second && inserted.first->second != element)
                throw Codec::error(NAME_COLLISION, nullptr, resources()->MATHJSON_NAME_COLLISION);
        }

        static Visible context(Expression* expression, const Parameters& parameters) {
            Visible visible;
            for (int i = 0; i < expression->argumentsList->size(); ++i) {
                ArgumentPtr argument = expression->argumentsList->get(i);
                if (std::none_of(parameters.byName.begin(), parameters.byName.end(),
                        [&](const auto& parameter) { return parameter.second == argument; }))
                    addVisible(visible, argument);
            }
            for (int i = 0; i < expression->constantsList->size(); ++i) addVisible(visible, expression->constantsList->get(i));
            for (int i = 0; i < expression->functionsList->size(); ++i) addVisible(visible, expression->functionsList->get(i));
            return visible;
        }

        static Parameters formalParameters(const FunctionPtr& function, const Names& names) {
            int arity = function->getParametersNumber();
            if (arity > MAX_DEFINITIONS || arity > function->functionExpression->argumentsList->size())
                throw Codec::error(UNSUPPORTED_PROGRAM, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
            Parameters result;
            for (int i = 0; i < arity; ++i) {
                ArgumentPtr argument = function->functionExpression->argumentsList->get(i);
                requireDefinition(argument);
                String name = textOrEmpty(argument->getArgumentName());
                checkAvailableName(name, nullptr, names);
                Vocabulary::checkLocalSymbol(name, nullptr);
                if (!result.byName.emplace(name, argument).second)
                    throw Codec::error(UNSUPPORTED_PROGRAM, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
                result.order.push_back(name);
            }
            return result;
        }

        static FunctionPtr newFunction(const StringPtr& name, const StringPtr& source, const ListPtr<StringPtr>& parameters) {
            using Factory = FunctionPtr (*)(const StringPtr&, const StringPtr&, const ListPtr<StringPtr>&);
            return static_cast<Factory>(&new_Function)(name, source, parameters);
        }

        struct FunctionBody {
            const Node root;
            const Parameters parameters;
        };
        using BodyPtr = std::shared_ptr<FunctionBody>;

        struct Analysis {
            Codec::Budget& budget;
            Warnings diagnostics;
            std::unordered_map<FunctionPtr, BodyPtr> bodies;
            Elements visiting;
            Elements done;
            std::unordered_map<ArgumentPtr, FunctionPtr> parameterOwners;
            std::vector<PrimitiveElementPtr> order;
            int refs = 0;

            explicit Analysis(Codec::Budget& budget) : budget(budget) {}

            BodyPtr body(const PrimitiveElementPtr& element) const {
                auto result = bodies.find(std::dynamic_pointer_cast<Function>(element));
                return result == bodies.end() ? nullptr : result->second;
            }

            PlanPtr plan(Expression* expression, bool open) {
                Parameters parameters;
                Visible visible = context(expression, parameters);
                return std::make_shared<Plan>(visible, parameters,
                        builtins(expression->UDFExpression, expression->checkIfUnicodeBuiltinKeyWordsMode()),
                        open, open, true, MathJSON::ImportOptions::defaults(), &diagnostics, budget);
            }

            void reference(const PrimitiveElementPtr& element, int depth) {
                if (++refs > MAX_REFERENCES)
                    throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_REFERENCES));
                if (depth >= Codec::MAX_DEPTH)
                    throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, Codec::MAX_DEPTH));
                requireDefinition(element);
                if (auto argument = std::dynamic_pointer_cast<Argument>(element); argument && parameterOwners.count(argument))
                    throw Codec::error(UNSUPPORTED_PROGRAM, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
                if (done.count(element)) return;
                if (auto functionElement = std::dynamic_pointer_cast<Function>(element)) {
                    function(functionElement, depth, true);
                    return;
                }
                finish(element);
            }

            BodyPtr function(const FunctionPtr& function, int depth, bool includeDependencies) {
                if (!visiting.insert(function).second)
                    throw Codec::error(UNSUPPORTED_PROGRAM, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
                Expression* source = function->functionExpression.get();
                Names keywords = builtins(true, source->checkIfUnicodeBuiltinKeyWordsMode());
                String name = textOrEmpty(function->getFunctionName());
                checkAvailableName(name, nullptr, keywords);
                Parameters parameters = formalParameters(function, keywords);
                Visible visible = context(source, parameters);
                visible[name] = function;
                for (const String& parameterName : parameters.order) {
                    const ArgumentPtr& parameter = parameters.byName.at(parameterName);
                    auto previous = parameterOwners.emplace(parameter, function);
                    if (done.count(parameter) != 0 || (!previous.second && previous.first->second != function)
                            || visible.count(textOrEmpty(parameter->getArgumentName())))
                        throw Codec::error(UNSUPPORTED_PROGRAM, nullptr, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
                }
                PlanPtr plan = std::make_shared<Plan>(visible, parameters, keywords, false, false, true,
                        MathJSON::ImportOptions::defaults(), &diagnostics, budget);
                Node root = plan->validate(Tokens::read(source, budget));
                checkRecursion(function, root, plan);
                auto body = std::make_shared<FunctionBody>(FunctionBody{root, parameters});
                if (!includeDependencies) {
                    for (const PrimitiveElementPtr& dependency : plan->used)
                        if (dependency != function) Tree::externalWarning(diagnostics, nullptr, definitionName(dependency));
                    return body;
                }
                for (const PrimitiveElementPtr& dependency : plan->used)
                    if (dependency != function) reference(dependency, depth + 1);
                bodies[function] = body;
                visiting.erase(function);
                finish(function);
                return body;
            }

            void finish(const PrimitiveElementPtr& element) {
                if (order.size() >= MAX_DEFINITIONS)
                    throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                done.insert(element);
                order.push_back(element);
            }
        };

        static void checkRecursion(const FunctionPtr& function, const Node& body, const PlanPtr& plan) {
            if (plan->usedSet.count(function) == 0) return;
            Node call = recursiveCallInDetachedExpression(function, body, false);
            if (call != nullptr)
                throw Codec::error(UNSUPPORTED_PROGRAM, call->at, resources()->MATHJSON_UNSUPPORTED_DEFINITION);
        }

        /* If predicates and iterative operators evaluate in expressions with a fresh recursion counter. */
        static Node recursiveCallInDetachedExpression(const FunctionPtr& function, const Node& node, bool detached) {
            if (node->kind != NodeKind::CALL) return nullptr;
            if (detached && node->binding == function) return node;
            const Operation* op = node->userCall ? nullptr : Tree::operation(node->name);
            for (std::size_t i = 0; i < node->children.size(); i++) {
                bool childDetached = detached || (op != nullptr && (op->iterator() || (op->code == Operation::IF && i == 0)));
                Node call = recursiveCallInDetachedExpression(function, node->arg(i), childDetached);
                if (call != nullptr) return call;
            }
            return nullptr;
        }

        static Node declaration(const PrimitiveElementPtr& element, const BodyPtr& body) {
            String name = definitionName(element);
            checkAvailableName(name, nullptr, builtins(body != nullptr, true));
            Node id = Tree::atom(NodeKind::SYMBOL, name, nullptr);
            if (body != nullptr) {
                Nodes operands;
                operands.push_back(body->root);
                for (const String& parameter : body->parameters.order)
                    operands.push_back(Tree::atom(NodeKind::SYMBOL, parameter, nullptr));
                return Tree::call(Vocabulary::HEAD_DEFINE_FUNCTION, nullptr, id,
                        Tree::call(Vocabulary::HEAD_FUNCTION, nullptr, operands));
            }
            double value;
            auto constant = std::dynamic_pointer_cast<Constant>(element);
            if (constant) value = constant->getConstantValue();
            else {
                auto argument = std::static_pointer_cast<Argument>(element);
                value = argument->syntaxStatusDefinition ? argument->argumentValue : notANumber;
            }
            if (!std::isfinite(value))
                throw Codec::error(UNSUPPORTED_NUMBER, nullptr, resources()->MATHJSON_UNSUPPORTED_NUMBER);
            Node pair = Tree::call(Vocabulary::HEAD_KEY_VALUE_PAIR, nullptr,
                    Tree::atom(NodeKind::SYMBOL, Vocabulary::ATTRIBUTE_VALUE, nullptr), Tree::number(value, nullptr));
            Node dictionary = constant
                    ? Tree::call(Vocabulary::HEAD_DICTIONARY, nullptr, pair, Tree::call(Vocabulary::HEAD_KEY_VALUE_PAIR, nullptr,
                            Tree::atom(NodeKind::SYMBOL, Vocabulary::ATTRIBUTE_CONSTANT, nullptr),
                            Tree::atom(NodeKind::SYMBOL, Vocabulary::SYMBOL_TRUE, nullptr)))
                    : Tree::call(Vocabulary::HEAD_DICTIONARY, nullptr, pair);
            return Tree::call(Vocabulary::HEAD_DECLARE, nullptr, id, dictionary);
        }

        struct Edge {
            const ExpressionPtr body;
            const PrimitiveElementPtr definition;

            void registerObserver() const {
                if (auto argument = std::dynamic_pointer_cast<Argument>(definition)) argument->addRelatedExpression(body);
                else if (auto constant = std::dynamic_pointer_cast<Constant>(definition)) constant->addRelatedExpression(body);
                else std::static_pointer_cast<Function>(definition)->addRelatedExpression(body);
            }

            void rollback() const {
                if (auto argument = std::dynamic_pointer_cast<Argument>(definition)) argument->removeRelatedExpression(body);
                else if (auto constant = std::dynamic_pointer_cast<Constant>(definition)) constant->removeRelatedExpression(body);
                else std::static_pointer_cast<Function>(definition)->removeRelatedExpression(body);
            }
        };

        struct Import {
            Codec::Budget budget;
            Warnings diagnostics;
            Visible visible;
            const Names rootBuiltins = builtins(false, true);
            const Names udfBuiltins = builtins(true, true);
            BindingMap shadows;
            std::vector<Edge> edges;
            const Options options;
            Node root;

            Import(const StringPtr& json, const Options& options, const Definitions& definitions, bool definitionOnly) : options(options) {
                if (!options || !definitions)
                    throw Codec::error(INVALID_ARGUMENT, nullptr, resources()->MATHJSON_INVALID_ARGUMENT);
                if (definitions->size() > MAX_DEFINITIONS)
                    throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                root = Codec::Input(budget).read(json);
                if (root->call(Vocabulary::HEAD_ERROR))
                    throw Codec::error(L"INPUT_ERROR", root->at, resources()->MATHJSON_INPUT_ERROR_NODE);
                checkRoot(root, definitionOnly);
                for (int i = 0; i < definitions->size(); ++i) {
                    PrimitiveElementPtr definition = definitions->get(i);
                    if (!(std::dynamic_pointer_cast<Argument>(definition) || std::dynamic_pointer_cast<Constant>(definition)
                            || std::dynamic_pointer_cast<Function>(definition))) continue;
                    String name = definitionName(definition);
                    auto inserted = visible.emplace(name, definition);
                    // A null entry marks an ambiguous name until it is referenced.
                    if (!inserted.second && inserted.first->second != definition) inserted.first->second.reset();
                }
            }

            ExpressionPtr expression() {
                bool block = root->call(Vocabulary::HEAD_BLOCK);
                Node formula = root;
                std::vector<PrimitiveElementPtr> declared;
                if (block) {
                    if (visible.size() + root->children.size() - 1 > MAX_DEFINITIONS)
                        throw Codec::error(RESOURCE_LIMIT, root->at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                    for (std::size_t i = 0; i + 1 < root->children.size(); ++i) {
                        PrimitiveElementPtr element = definition(root->children[i], visible, false);
                        visible.emplace(definitionName(element), element);
                        declared.push_back(element);
                    }
                    formula = root->children.back();
                }
                Plan plan(visible, {}, rootBuiltins, !block, !block, false, options, &diagnostics, budget);
                Node canonical = plan.validate(formula);
                ExpressionPtr result = configured(new_Expression(L""));
                ExpressionPtr control = configured(new_Expression(L""));
                std::vector<PrimitiveElementPtr> bindings(declared);
                Elements seen(declared.begin(), declared.end());
                for (const PrimitiveElementPtr& element : plan.used)
                    if (seen.insert(element).second) bindings.push_back(element);
                for (const PrimitiveElementPtr& element : bindings) {
                    plan.checkIteratorBinding(element);
                    connect(result, element);
                    add(control, shadow(element));
                }
                String text = emitChecked(canonical, control, plan.hasOpenReferences());
                result->setExpressionString(S(text));
                return result;
            }

            PrimitiveElementPtr definition(const Node& node, const Visible& environment, bool allowOpen) {
                checkRoot(node, true);
                Codec::Input::checkArity(node, 2);
                Node id = node->arg(0);
                if (id->kind != NodeKind::SYMBOL)
                    throw Codec::error(INVALID_SHAPE, id->at, resources()->MATHJSON_INVALID_SHAPE);
                checkAvailableName(id->name, id->at, node->call(Vocabulary::HEAD_DEFINE_FUNCTION) ? udfBuiltins : rootBuiltins);
                if (environment.count(id->name))
                    throw Codec::error(NAME_COLLISION, id->at, resources()->MATHJSON_NAME_COLLISION);
                if (node->call(Vocabulary::HEAD_DEFINE_FUNCTION)) return functionDefinition(id->name, node->arg(1), environment, allowOpen);
                return scalarDefinition(id->name, node->arg(1));
            }

            PrimitiveElementPtr scalarDefinition(const String& name, const Node& dictionary) {
                if (!dictionary->call(Vocabulary::HEAD_DICTIONARY))
                    throw Codec::error(INVALID_SHAPE, dictionary->at, resources()->MATHJSON_INVALID_SHAPE);
                Node value;
                Node constant;
                for (const Node& pair : dictionary->children) {
                    if ((!pair->call(Vocabulary::HEAD_KEY_VALUE_PAIR) && !pair->call(Vocabulary::HEAD_TUPLE)) || pair->children.size() != 2)
                        throw Codec::error(INVALID_SHAPE, pair->at, resources()->MATHJSON_INVALID_SHAPE);
                    Node key = pair->arg(0), entry = pair->arg(1);
                    if (key->kind != NodeKind::STRING && key->kind != NodeKind::SYMBOL)
                        throw Codec::error(INVALID_SHAPE, key->at, resources()->MATHJSON_INVALID_SHAPE);
                    if (key->name == Vocabulary::ATTRIBUTE_VALUE && value == nullptr && entry->kind == NodeKind::NUMBER) value = entry;
                    else if (key->name == Vocabulary::ATTRIBUTE_CONSTANT && !constant
                            && (entry->symbol(Vocabulary::SYMBOL_TRUE) || entry->symbol(Vocabulary::SYMBOL_FALSE))) constant = entry;
                    else throw Codec::error(INVALID_SHAPE, pair->at, resources()->MATHJSON_INVALID_SHAPE);
                }
                if (!value) throw Codec::error(INVALID_SHAPE, dictionary->at, resources()->MATHJSON_INVALID_SHAPE);
                value = Tree::resolveNumber(value, budget, false);
                return constant && constant->symbol(Vocabulary::SYMBOL_TRUE) ? std::static_pointer_cast<PrimitiveElement>(new_Constant(S(name), value->number))
                        : std::static_pointer_cast<PrimitiveElement>(new_Argument(S(name), value->number));
            }

            FunctionPtr functionDefinition(const String& name, const Node& node, const Visible& environment,
                                           bool allowOpen) {
                if (!node->call(Vocabulary::HEAD_FUNCTION) || node->children.size() < 2)
                    throw Codec::error(INVALID_SHAPE, node->at, resources()->MATHJSON_INVALID_SHAPE);
                if (node->children.size() > MAX_DEFINITIONS + 1)
                    throw Codec::error(RESOURCE_LIMIT, node->at, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                Names names;
                auto formalNames = new_List<StringPtr>();
                for (std::size_t i = 1; i < node->children.size(); ++i) {
                    const Node& formal = node->children[i];
                    if (formal->kind != NodeKind::SYMBOL)
                        throw Codec::error(INVALID_SHAPE, formal->at, resources()->MATHJSON_INVALID_SHAPE);
                    checkAvailableName(formal->name, formal->at, udfBuiltins);
                    Vocabulary::checkLocalSymbol(formal->name, formal->at);
                    if (formal->name == name || !names.insert(formal->name).second)
                        throw Codec::error(NAME_COLLISION, formal->at, resources()->MATHJSON_NAME_COLLISION);
                    formalNames->add(S(formal->name));
                }
                FunctionPtr result = newFunction(S(name), S(L"0"), formalNames);
                Visible scope = environment;
                scope.emplace(name, result);
                Parameters parameters;
                for (int i = 0; i < formalNames->size(); ++i) {
                    const String& parameterName = *formalNames->get(i);
                    parameters.byName.emplace(parameterName, result->functionExpression->argumentsList->get(i));
                    parameters.order.push_back(parameterName);
                }
                auto plan = std::make_shared<Plan>(scope, parameters, udfBuiltins,
                        allowOpen, false, false, options, &diagnostics, budget);
                Node body = plan->validate(node->arg(0));
                checkRecursion(result, body, plan);
                ExpressionPtr actual = configured(result->functionExpression);
                FunctionPtr staged = newFunction(S(name), S(L"0"), formalNames);
                ExpressionPtr control = configured(staged->functionExpression);
                shadows[result] = staged;
                for (int i = 0; i < formalNames->size(); ++i)
                    shadows[actual->argumentsList->get(i)] = control->argumentsList->get(i);
                plan->checkIteratorBinding(result);
                for (const PrimitiveElementPtr& element : plan->used) {
                    if (element != result) {
                        plan->checkIteratorBinding(element);
                        connect(actual, element);
                        add(control, shadow(element));
                    }
                }
                actual->setExpressionString(S(emitChecked(body, control, plan->hasOpenReferences())));
                return result;
            }

            PrimitiveElementPtr shadow(const PrimitiveElementPtr& element) {
                auto cached = shadows.find(element);
                if (cached != shadows.end()) return cached->second;
                PrimitiveElementPtr copy;
                if (auto function = std::dynamic_pointer_cast<Function>(element)) {
                    if (function->isVariadic) copy = new_Function(S(textOrEmpty(function->getFunctionName()) + L"(...)=0"));
                    else {
                        // The control function is syntax-checked, never evaluated.
                        FunctionPtr control = newFunction(function->getFunctionName(), S(L"0"), new_List<StringPtr>());
                        control->setParametersNumber(function->getParametersNumber());
                        copy = control;
                    }
                } else if (std::dynamic_pointer_cast<Constant>(element)) copy = new_Constant(S(definitionName(element)), 0);
                else copy = new_Argument(S(definitionName(element)), 0);
                shadows[element] = copy;
                return copy;
            }

            String emitChecked(const Node& plan, const ExpressionPtr& control, bool open) {
                Keywords keywords;
                std::vector<KeyWordPtr> ordered;
                auto words = control->getKeyWords();
                for (int i = 0; i < words->size(); ++i) {
                    KeyWordPtr keyword = words->get(i);
                    if (keywords.emplace(textOrEmpty(keyword->wordString), keyword).second) ordered.push_back(keyword);
                }
                bindSpellings(plan, keywords, ordered);
                String text = Plan::emit(plan, budget);
                control->setExpressionString(S(text));
                Node parsed;
                try {
                    parsed = Tokens::read(control.get(), budget);
                } catch (const ConversionFailure& ex) {
                    if (textOrEmpty(ex.diagnostic->getCode()) == RESOURCE_LIMIT) throw;
                    throw Codec::error(EMISSION_MISMATCH, plan->at, resources()->MATHJSON_EMISSION_MISMATCH);
                }
                if (!Plan::same(plan, parsed, shadows))
                    throw Codec::error(EMISSION_MISMATCH, plan->at, resources()->MATHJSON_EMISSION_MISMATCH);
                if (!open && !control->checkSyntax())
                    throw Codec::error(EMISSION_MISMATCH, plan->at, control->getErrorMessage());
                return text;
            }

            void bindSpellings(const Node& node, const Keywords& keywords, const std::vector<KeyWordPtr>& ordered) {
                const Operation* op = node->kind == NodeKind::CALL && !node->userCall ? Tree::operation(node->name) : nullptr;
                if (op == Tree::registered(Operation::NEGATE)) op = Tree::registered(Operation::SUBTRACT);
                if (op != nullptr) node->spelling = spelling(node, keywords, ordered, op->source, op->type, op->id);
                if (node->builtin && node->symbol(Vocabulary::SYMBOL_PI))
                    node->spelling = spelling(node, keywords, ordered, textOrEmpty(ConstantValue::PI_STR), ConstantValue::TYPE_ID, ConstantValue::PI_ID);
                if (node->builtin && node->symbol(Vocabulary::SYMBOL_EXPONENTIAL_E))
                    node->spelling = spelling(node, keywords, ordered, textOrEmpty(ConstantValue::EULER_STR), ConstantValue::TYPE_ID, ConstantValue::EULER_ID);
                if (node->builtin && node->symbol(Vocabulary::SYMBOL_TRUE))
                    node->spelling = spelling(node, keywords, ordered, textOrEmpty(ConstantValue::TRUE_STR), ConstantValue::TYPE_ID, ConstantValue::TRUE_ID);
                if (node->builtin && node->symbol(Vocabulary::SYMBOL_FALSE))
                    node->spelling = spelling(node, keywords, ordered, textOrEmpty(ConstantValue::FALSE_STR), ConstantValue::TYPE_ID, ConstantValue::FALSE_ID);
                for (const Node& child : node->children) bindSpellings(child, keywords, ordered);
            }

            String spelling(const Node& at, const Keywords& keywords, const std::vector<KeyWordPtr>& ordered,
                    const String& source, int type, int id) {
                auto found = keywords.find(source);
                KeyWordPtr keyword = found == keywords.end() ? nullptr : found->second;
                if (keyword && keyword->wordTypeId == type && keyword->wordId == id) return source;
                if (type != Operator::TYPE_ID && type != BinaryRelation::TYPE_ID) {
                    static const std::wregex nativeName(textOrEmpty(ParserSymbol::nameOnlyTokenRegExp));
                    static const std::wregex nativeNameOptBrackets(textOrEmpty(ParserSymbol::nameOnlyTokenOptBracketsRegExp));
                    const std::wregex& namePattern = type == ConstantValue::TYPE_ID ? nativeNameOptBrackets : nativeName;
                    for (const KeyWordPtr& alias : ordered)
                        if (alias->wordTypeId == type && alias->wordId == id && std::regex_match(textOrEmpty(alias->wordString), namePattern))
                            return textOrEmpty(alias->wordString);
                }
                throw Codec::error(L"BUILTIN_UNAVAILABLE", at->at, formatMessage(resources()->MATHJSON_BUILTIN_SPELLING_UNAVAILABLE, source));
            }

            void connect(const ExpressionPtr& expression, const PrimitiveElementPtr& element) {
                if (edges.size() >= MAX_REFERENCES)
                    throw Codec::error(RESOURCE_LIMIT, nullptr, formatMessage(resources()->MATHJSON_RESOURCE_LIMIT, MAX_REFERENCES));
                add(expression, element);
                edges.push_back({expression, element});
            }

            void publish() {
                int registered = 0;
                try {
                    for (const Edge& edge : edges) {
                        edge.registerObserver();
                        registered++;
                    }
                } catch (const std::exception&) {
                    for (int i = registered - 1; i >= 0; i--) edges[i].rollback();
                    throw;
                }
            }
        };

        static void checkRoot(Node node, bool definitionOnly) {
            if (!definitionOnly && node->call(Vocabulary::HEAD_BLOCK) && !node->children.empty())
                node = node->children.back();
            bool declaration = node->call(Vocabulary::HEAD_DECLARE) || node->call(Vocabulary::HEAD_DEFINE_FUNCTION);
            if (declaration != definitionOnly || node->call(Vocabulary::HEAD_BLOCK))
                throw Codec::error(INVALID_ROOT, node->at, resources()->MATHJSON_INVALID_SHAPE);
        }

        static ExpressionPtr configured(const ExpressionPtr& expression) {
            expression->disableImpliedMultiplicationMode();
            expression->disableAttemptToFixExpStrMode();
            expression->enableUnicodeBuiltinKeyWordsMode();
            return expression;
        }

        static void add(const ExpressionPtr& expression, const PrimitiveElementPtr& element) {
            if (auto argument = std::dynamic_pointer_cast<Argument>(element)) expression->argumentsList->add(argument);
            else if (auto constant = std::dynamic_pointer_cast<Constant>(element)) expression->constantsList->add(constant);
            else expression->functionsList->add(std::static_pointer_cast<Function>(element));
        }
    };
};

MathJSONUtils::ConversionFailure::ConversionFailure(const String& code, const String& path, int offset,
        const String& message)
    : diagnostic(new MathJSON::Diagnostic(code, nativeWide(path), offset, nativeWide(message))) {}

String MathJSONUtils::errorJson(const MathJSON::Diagnostic& error) {
    return nativeWide(Implementation::Codec::errorJson(error));
}

MathJSON::Result<StringPtr> MathJSONUtils::exportExpression(Expression* expression) {
    return Implementation::Exchange::exportExpression(expression);
}

MathJSON::Result<StringPtr> MathJSONUtils::exportProgram(Expression* expression) {
    return Implementation::Exchange::exportProgram(expression);
}

MathJSON::Result<StringPtr> MathJSONUtils::exportDefinition(const PrimitiveElementPtr& definition) {
    return Implementation::Exchange::exportDefinition(definition);
}

MathJSON::Result<ExpressionPtr> MathJSONUtils::importExpression(const StringPtr& json,
        const MathJSON::ImportOptionsPtr& options, const ListPtr<PrimitiveElementPtr>& definitions) {
    return Implementation::Exchange::importExpression(json, options, definitions);
}

MathJSON::Result<PrimitiveElementPtr> MathJSONUtils::importDefinition(const StringPtr& json,
        const ListPtr<PrimitiveElementPtr>& definitions) {
    return Implementation::Exchange::importDefinition(json, definitions);
}

} // namespace org::mariuszgromada::math::mxparser
