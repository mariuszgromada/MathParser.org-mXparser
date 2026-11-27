/*
 * @(#)MathJSONUtils.java        6.2.0    2026-11-23
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

package org.mariuszgromada.math.mxparser;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Deque;
import java.util.HashMap;
import java.util.HashSet;
import java.util.IdentityHashMap;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import org.mariuszgromada.math.mxparser.MathJSON.Result;
import org.mariuszgromada.math.mxparser.MathJSON.ImportOptions;
import org.mariuszgromada.math.mxparser.MathJSON.Diagnostic;
import java.util.Comparator;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.mariuszgromada.math.mxparser.mathcollection.Units;
import org.mariuszgromada.math.mxparser.parsertokens.*;
import org.mariuszgromada.math.mxparser.parsertokens.ParserSymbol;

import static org.mariuszgromada.math.mxparser.MathJSONUtils.Codec.error;
import static org.mariuszgromada.math.mxparser.MathJSONUtils.Tree.*;
import static org.mariuszgromada.math.mxparser.MathJSONUtils.Vocabulary.*;
import static org.mariuszgromada.math.mxparser.StringInvariant.EMPTY;
import static org.mariuszgromada.math.mxparser.StringModel.STRING_RESOURCES;

/** Internal components of the MathJSON exchange codec. */
final class MathJSONUtils {
    private static final String RESOURCE_LIMIT = "RESOURCE_LIMIT";
    private static final String UNSUPPORTED_NUMBER = "UNSUPPORTED_NUMBER";
    private static final String INVALID_SHAPE = "INVALID_SHAPE";
    private static final String UNSUPPORTED_PROGRAM = "UNSUPPORTED_PROGRAM";
    private static final String NAME_COLLISION = "NAME_COLLISION";
    private static final String UNSUPPORTED_NODE = "UNSUPPORTED_NODE";
    private static final String INVALID_ARGUMENT = "INVALID_ARGUMENT";
    private static final String UNSUPPORTED_BINDING = "UNSUPPORTED_BINDING";
    private static final String EMISSION_MISMATCH = "EMISSION_MISMATCH";
    private static final String INVALID_ARITY = "INVALID_ARITY";
    private static final String INVALID_ROOT = "INVALID_ROOT";
    private static final String UNRESOLVED_FUNCTION = "UNRESOLVED_FUNCTION";
    private static final String UNSUPPORTED_DOMAIN = "UNSUPPORTED_DOMAIN";
    private static final String EXTERNAL_DEFINITION = "EXTERNAL_DEFINITION";
    private static final String MXPARSER_EXTENSION = "MXPARSER_EXTENSION";
    private static final int NO_OFFSET = -1;

    private static String formatMessage(String format, Object value) {
        return format == null ? EMPTY : format.replace("{0}", String.valueOf(value));
    }

    static final class ConversionFailure extends RuntimeException {
        private static final long serialVersionUID = 1L;
        final Diagnostic diagnostic;

        ConversionFailure(String code, String path, int offset, String message) {
            super(message);
            diagnostic = new Diagnostic(code, path, offset, message);
        }
    }

    static final class Codec {
        static final int MAX_TEXT = 16 * 1024 * 1024;
        static final int MAX_DEPTH = 256;
        static final int MAX_VALUES = 250000;
        static final int MAX_SOURCE = 100000;
        static final int MAX_NAME = 256;
        static final int MAX_NUMBER = 1024;
        static final long MAX_WORK = 50000000;
        static final long MAX_BUFFER = 128L * 1024 * 1024;

        static final class Budget {
            private long work;
            private long buffer;

            void work(long count, Value at) {
                work += count;
                if (work > MAX_WORK) throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_WORK));
            }

            void allocate(long count, Value at) {
                buffer += count;
                if (buffer > MAX_BUFFER) throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_BUFFER));
            }
        }

        private static final String FIELD_NUMBER = "num";
        private static final String FIELD_SYMBOL = "sym";
        private static final String FIELD_STRING = "str";
        private static final String FIELD_FUNCTION = "fn";
        private static final String FIELD_DICTIONARY = "dict";
        private static final String[] DISCRIMINATORS = {
                FIELD_NUMBER, FIELD_SYMBOL, FIELD_STRING, FIELD_FUNCTION, FIELD_DICTIONARY
        };

        enum Kind { NUMBER, STRING, ARRAY, OBJECT, BOOLEAN, NULL }

        static final class Value {
            final Kind kind;
            final String path;
            final int offset;
            String text;
            List<Value> array;
            Map<String, Value> members;

            Value(Kind kind, String path, int offset) {
                this.kind = kind;
                this.path = path;
                this.offset = offset;
            }
        }

        static ConversionFailure error(String code, Value value, String message) {
            return value == null ? new ConversionFailure(code, EMPTY, NO_OFFSET, message)
                    : new ConversionFailure(code, value.path, value.offset, message);
        }

        static String errorJson(Diagnostic error) {
            Node payload = call("ErrorCode", null,
                    atom(Tree.Kind.STRING, "mxparser:" + error.getCode(), null),
                    atom(Tree.Kind.STRING, errorMessage(error.getMessage()), null),
                    atom(Tree.Kind.STRING, error.getPath(), null),
                    number(error.getOffset(), null));
            return write(call(HEAD_ERROR, null, payload), new Budget());
        }

        private static String errorMessage(String message) {
            final int limit = 1024;
            StringBuilder text = new StringBuilder(Math.min(message.length(), limit));
            int position = 0;
            while (position < message.length()) {
                int codePoint = message.codePointAt(position);
                int width = Character.charCount(codePoint);
                if (position + width > limit) break;
                if (codePoint >= Character.MIN_SURROGATE && codePoint <= Character.MAX_SURROGATE)
                    codePoint = 0xfffd;
                text.appendCodePoint(codePoint);
                position += width;
            }
            if (position < message.length()) text.append('…');
            return text.toString();
        }

        static final class Reader {
            private final String source;
            private final Budget budget;
            private int index;
            private int values;

            Reader(String source, Budget budget) {
                if (source == null) throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
                this.source = source;
                this.budget = budget;
            }

            Value read() {
                checkTransport(source, budget);
                if (!source.isEmpty() && source.charAt(0) == '\uFEFF') index++;
                Value root = value(EMPTY);
                Deque<Value> stack = new ArrayDeque<>();
                if (container(root)) stack.push(root);
                while (!stack.isEmpty()) {
                    Value current = stack.peek();
                    boolean array = current.kind == Kind.ARRAY;
                    char end = array ? ']' : '}';
                    skipSpace();
                    if (take(end)) {
                        stack.pop();
                        continue;
                    }
                    int size = array ? current.array.size() : current.members.size();
                    if (size != 0) {
                        require(',', current.path);
                        skipSpace();
                    }
                    String key = array ? Integer.toString(size) : readString(current.path);
                    String path = current.path + "/" + key.replace("~", "~0").replace("/", "~1");
                    if (!array) {
                        if (current.members.containsKey(key)) throw syntax(path);
                        skipSpace();
                        require(':', path);
                    }
                    if (stack.size() >= MAX_DEPTH)
                        throw new ConversionFailure(RESOURCE_LIMIT, path, index, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEPTH));
                    Value child = value(path);
                    if (array) current.array.add(child);
                    else current.members.put(key, child);
                    if (container(child)) stack.push(child);
                }
                skipSpace();
                if (index != source.length()) throw syntax(EMPTY);
                return root;
            }

            private Value value(String path) {
                skipSpace();
                if (index == source.length()) throw syntax(path);
                if (++values > MAX_VALUES)
                    throw new ConversionFailure(RESOURCE_LIMIT, path, index, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_VALUES));
                int start = index;
                char c = source.charAt(index);
                Value result;
                if (c == '[') {
                    index++;
                    result = new Value(Kind.ARRAY, path, start);
                    result.array = new ArrayList<>();
                } else if (c == '{') {
                    index++;
                    result = new Value(Kind.OBJECT, path, start);
                    result.members = new LinkedHashMap<>();
                } else if (c == '"') {
                    result = new Value(Kind.STRING, path, start);
                    result.text = readString(path);
                } else if (c == 'n' || c == 't' || c == 'f') {
                    String word = c == 'n' ? "null" : c == 't' ? "true" : "false";
                    if (!source.startsWith(word, index)) throw syntax(path);
                    index += word.length();
                    result = new Value(c == 'n' ? Kind.NULL : Kind.BOOLEAN, path, start);
                    result.text = word;
                } else if (c == '-' || digit(c)) {
                    result = new Value(Kind.NUMBER, path, start);
                    take('-');
                    if (!take('0')) digits(path);
                    if (take('.')) digits(path);
                    if (take('e') || take('E')) {
                        if (!take('+')) take('-');
                        digits(path);
                    }
                    result.text = source.substring(start, index);
                } else {
                    throw syntax(path);
                }
                budget.allocate(112L + path.length() * 2L
                        + (result.text == null ? 0 : result.text.length() * 2L), result);
                return result;
            }

            private String readString(String path) {
                require('"', path);
                StringBuilder result = new StringBuilder();
                while (index < source.length()) {
                    char c = source.charAt(index++);
                    if (c == '"') {
                        for (int i = 0; i < result.length(); i++) {
                            char ch = result.charAt(i);
                            if (Character.isHighSurrogate(ch)) {
                                if (++i == result.length() || !Character.isLowSurrogate(result.charAt(i)))
                                    throw syntax(path);
                            } else if (Character.isLowSurrogate(ch)) {
                                throw syntax(path);
                            }
                        }
                        return result.toString();
                    }
                    if (c < 0x20) throw syntax(path);
                    if (c == '\\') {
                        if (index == source.length()) throw syntax(path);
                        c = source.charAt(index++);
                        switch (c) {
                            case '"': case '\\': case '/': break;
                            case 'b': c = '\b'; break;
                            case 'f': c = '\f'; break;
                            case 'n': c = '\n'; break;
                            case 'r': c = '\r'; break;
                            case 't': c = '\t'; break;
                            case 'u':
                                int hex = 0;
                                for (int i = 0; i < 4; i++) {
                                    if (index == source.length()) throw syntax(path);
                                    char h = source.charAt(index++);
                                    int v = h >= '0' && h <= '9' ? h - '0' : h >= 'A' && h <= 'F'
                                            ? h - 'A' + 10 : h >= 'a' && h <= 'f' ? h - 'a' + 10 : -1;
                                    if (v < 0) throw syntax(path);
                                    hex = 16 * hex + v;
                                }
                                c = (char) hex;
                                break;
                            default: throw syntax(path);
                        }
                    }
                    result.append(c);
                }
                throw syntax(path);
            }

            private void digits(String path) {
                int start = index;
                while (index < source.length() && digit(source.charAt(index))) index++;
                if (start == index) throw syntax(path);
            }

            private void skipSpace() {
                while (index < source.length()) {
                    char c = source.charAt(index);
                    if (c != ' ' && c != '\t' && c != '\r' && c != '\n') return;
                    index++;
                }
            }

            private boolean take(char c) {
                if (index == source.length() || source.charAt(index) != c) return false;
                index++;
                return true;
            }

            private void require(char c, String path) {
                if (!take(c)) throw syntax(path);
            }

            private ConversionFailure syntax(String path) {
                return new ConversionFailure("INVALID_JSON", path, index, STRING_RESOURCES.MATHJSON_INVALID_JSON);
            }
        }

        static boolean digit(char c) { return c >= '0' && c <= '9'; }

        private static boolean container(Value value) {
            return value.kind == Kind.ARRAY || value.kind == Kind.OBJECT;
        }

        static void checkTransport(String source, Budget budget) {
            if (source.length() > MAX_TEXT) throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_TEXT));
            budget.work(source.length(), null);
            long bytes = 0;
            for (int i = 0; i < source.length(); i++) {
                char c = source.charAt(i);
                if (c <= 0x7f) bytes++;
                else if (c <= 0x7ff) bytes += 2;
                else if (Character.isHighSurrogate(c) && i + 1 < source.length()
                        && Character.isLowSurrogate(source.charAt(i + 1))) {
                    bytes += 4;
                    i++;
                } else bytes += 3;
                if (bytes > MAX_TEXT) throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_TEXT));
            }
        }

        static final class Input {
            private static final Pattern NAME = Pattern.compile("[A-Za-z_][A-Za-z0-9_]*|\\p{IsGreek}");

            private final Codec.Budget budget;

            Input(Codec.Budget budget) {
                this.budget = budget;
            }

            Node read(String json) {
                return read(new Codec.Reader(json, budget).read());
            }

            private Node read(Codec.Value value) {
                budget.work(1, value);
                budget.allocate(64, value);
                switch (value.kind) {
                    case NUMBER: return numeric(value.text, value);
                    case STRING: return readString(value);
                    case ARRAY: return array(value, value);
                    case OBJECT: return readObject(value);
                    default: throw error(INVALID_SHAPE, value, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                }
            }

            private Node readString(Codec.Value value) {
                String text = value.text;
                if (quoted(text, '\''))
                    return atom(Tree.Kind.STRING, text.substring(1, text.length() - 1), value);
                if (quoted(text, '`'))
                    return atom(Tree.Kind.SYMBOL, normalize(text.substring(1, text.length() - 1)), value);
                if (numericSpelling(text) || specialNumber(text)) return numeric(text, value);
                if (text.length() > Codec.MAX_NUMBER) {
                    char first = text.charAt(0);
                    if (Codec.digit(first) || first == '-' || first == '+') requireNumberLength(text, value);
                }
                return atom(Tree.Kind.SYMBOL, normalize(text), value);
            }

            private Node array(Codec.Value items, Codec.Value origin) {
                if (items.kind != Codec.Kind.ARRAY || items.array.isEmpty())
                    throw error(INVALID_SHAPE, items, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                Node head = read(items.array.get(0));
                if (head.kind != Tree.Kind.SYMBOL)
                    throw error(INVALID_SHAPE, head.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                List<Node> operands = new ArrayList<>();
                for (int i = 1; i < items.array.size(); i++) operands.add(read(items.array.get(i)));
                return call(head.name, origin, operands);
            }

            private Node readObject(Codec.Value value) {
                String tag = null;
                for (String key : DISCRIMINATORS) {
                    if (!value.members.containsKey(key)) continue;
                    if (tag != null) throw error(INVALID_SHAPE, value, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    tag = key;
                }
                if (tag == null) throw error(INVALID_SHAPE, value, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                Codec.Value content = value.members.get(tag);
                if (tag.equals(FIELD_FUNCTION)) return array(content, value);
                if (tag.equals(FIELD_DICTIONARY)) {
                    if (content.kind != Codec.Kind.OBJECT)
                        throw error(INVALID_SHAPE, content, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    List<Node> pairs = new ArrayList<>();
                    for (Map.Entry<String, Codec.Value> entry : content.members.entrySet()) {
                        Node key = atom(Tree.Kind.STRING, entry.getKey(), entry.getValue());
                        Codec.Value item = entry.getValue();
                        Node valueNode = item.kind == Codec.Kind.BOOLEAN
                                ? atom(Tree.Kind.SYMBOL, item.text.equals("true") ? SYMBOL_TRUE : SYMBOL_FALSE, item)
                                : read(item);
                        pairs.add(call(HEAD_KEY_VALUE_PAIR, item, key, valueNode));
                    }
                    return call(HEAD_DICTIONARY, value, pairs);
                }
                if (content.kind != Codec.Kind.STRING)
                    throw error(INVALID_SHAPE, content, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                if (tag.equals(FIELD_NUMBER)) return numeric(content.text, value);
                if (tag.equals(FIELD_SYMBOL)) return atom(Tree.Kind.SYMBOL, normalize(content.text), value);
                return atom(Tree.Kind.STRING, content.text, value);
            }

            private Node numeric(String text, Codec.Value at) {
                requireNumberLength(text, at);
                return atom(Tree.Kind.NUMBER, text, at);
            }

            private static boolean quoted(String text, char quote) {
                return text.length() >= 2 && text.charAt(0) == quote && text.charAt(text.length() - 1) == quote;
            }

            private static String normalize(String name) {
                // NFC equivalents whose canonical forms are in the supported name alphabet.
                return name.replace('\u212A', 'K').replace('\u2126', '\u03A9').replace('\u1FBE', '\u03B9');
            }

            static void checkName(String name, Codec.Value at) {
                if (name.length() > Codec.MAX_NAME)
                    throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_NAME));
                if (!NAME.matcher(name).matches() || !name.matches(ParserSymbol.nameOnlyTokenRegExp)
                        || !normalize(name).equals(name))
                    throw error("INVALID_NAME", at, formatMessage(STRING_RESOURCES.MATHJSON_INVALID_NAME, name));
            }

            static void checkArity(Node call, int count) {
                if (call.children.size() != count)
                    throw error(INVALID_ARITY, call.at, formatMessage(STRING_RESOURCES.MATHJSON_WRONG_ARGUMENT_COUNT, call.name));
            }
        }

        private Codec() {}
    }

    static final class Tree {
        static final long SAFE_INTEGER = 9007199254740991L;
        private static final Pattern DECIMAL = Pattern.compile(
                "([+-]?)(0|[1-9][0-9]*)(?:\\.([0-9]*))?(?:\\(([0-9]+)\\))?(?:[eE]([+-]?[0-9]+))?");

        enum Kind { CALL, NUMBER, SYMBOL, STRING }

        static final class Node {
            final Kind kind;
            final String name;
            final double number;
            final List<Node> children;
            final Codec.Value at;
            int depth;
            PrimitiveElement binding;
            boolean builtin;
            boolean userCall;
            String spelling;

            Node(Kind kind, String name, double number, List<Node> children, Codec.Value at) {
                this.kind = kind;
                this.name = name;
                this.number = number;
                this.children = children;
                this.at = at;
                int height = 1;
                for (Node child : children) height = Math.max(height, 1 + child.depth);
                if (height > Codec.MAX_DEPTH)
                    throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                depth = height;
            }

            void appendChainOperand(Node child) {
                if (child.depth >= Codec.MAX_DEPTH)
                    throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                children.add(child);
                depth = Math.max(depth, 1 + child.depth);
            }

            boolean call(String head) { return kind == Kind.CALL && name.equals(head); }
            boolean symbol(String value) { return kind == Kind.SYMBOL && name.equals(value); }
            Node arg(int i) { return children.get(i); }
        }

        static Node atom(Kind kind, String value, Codec.Value at) {
            return new Node(kind, value, 0, Collections.emptyList(), at);
        }

        static Node number(double value, Codec.Value at) {
            return new Node(Kind.NUMBER, null, value, Collections.emptyList(), at);
        }

        static Node call(String name, Codec.Value at, Node... children) {
            return call(name, at, Arrays.asList(children));
        }

        static Node call(String name, Codec.Value at, List<Node> children) {
            return new Node(Kind.CALL, name, 0, children, at);
        }

        enum Operation {
            ADD("Add", Operator.PLUS_STR, 2, Operator.TYPE_ID, Operator.PLUS_ID),
            SUBTRACT("Subtract", Operator.MINUS_STR, 2, Operator.TYPE_ID, Operator.MINUS_ID),
            NEGATE("Negate", Operator.MINUS_STR, 1, KeyWord.NO_DEFINITION, KeyWord.NO_DEFINITION),
            MULTIPLY("Multiply", Operator.MULTIPLY_STR, 2, Operator.TYPE_ID, Operator.MULTIPLY_ID),
            DIVIDE("Divide", Operator.DIVIDE_STR, 2, Operator.TYPE_ID, Operator.DIVIDE_ID),
            POWER("Power", Operator.POWER_STR, 2, Operator.TYPE_ID, Operator.POWER_ID),
            TETRATION("MxParserTetration", Operator.TETRATION_STR, 2, Operator.TYPE_ID, Operator.TETRATION_ID),
            FACTORIAL("Factorial", Operator.FACT_STR, 1, Operator.TYPE_ID, Operator.FACT_ID),
            ABS("Abs", Function1Arg.ABS_STR, 1, Function1Arg.TYPE_ID, Function1Arg.ABS_ID),
            SQRT("Sqrt", Function1Arg.SQRT_STR, 1, Function1Arg.TYPE_ID, Function1Arg.SQRT_ID),
            FLOOR("Floor", Function1Arg.FLOOR_STR, 1, Function1Arg.TYPE_ID, Function1Arg.FLOOR_ID),
            CEIL("Ceil", Function1Arg.CEIL_STR, 1, Function1Arg.TYPE_ID, Function1Arg.CEIL_ID),
            SIN("Sin", Function1Arg.SIN_STR, 1, Function1Arg.TYPE_ID, Function1Arg.SIN_ID),
            COS("Cos", Function1Arg.COS_STR, 1, Function1Arg.TYPE_ID, Function1Arg.COS_ID),
            TAN("Tan", Function1Arg.TAN_STR, 1, Function1Arg.TYPE_ID, Function1Arg.TAN_ID),
            RAD("Degrees", Function1Arg.RAD_STR, 1, Function1Arg.TYPE_ID, Function1Arg.RAD_ID),
            DEG("MxParserToDegrees", Function1Arg.DEG_STR, 1, Function1Arg.TYPE_ID, Function1Arg.DEG_ID),
            EXP("Exp", Function1Arg.EXP_STR, 1, Function1Arg.TYPE_ID, Function1Arg.EXP_ID),
            GAMMA("Gamma", Function1Arg.GAMMA_STR, 1, Function1Arg.TYPE_ID, Function1Arg.GAMMA_ID),
            MIN("Min", FunctionVariadic.MIN_STR, -1, FunctionVariadic.TYPE_ID, FunctionVariadic.MIN_ID),
            MAX("Max", FunctionVariadic.MAX_STR, -1, FunctionVariadic.TYPE_ID, FunctionVariadic.MAX_ID),
            LN("Ln", Function1Arg.LN_STR, 1, Function1Arg.TYPE_ID, Function1Arg.LN_ID),
            LOG("Log", Function2Arg.LOG_STR, 2, Function2Arg.TYPE_ID, Function2Arg.LOG_ID),
            ROOT("Root", Function2Arg.ROOT_STR, 2, Function2Arg.TYPE_ID, Function2Arg.ROOT_ID),
            NOT_EQUAL("NotEqual", BinaryRelation.NEQ2_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.NEQ_ID),
            EQUAL("Equal", BinaryRelation.EQ_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.EQ_ID),
            LESS("Less", BinaryRelation.LT_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.LT_ID),
            GREATER("Greater", BinaryRelation.GT_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.GT_ID),
            LESS_EQUAL("LessEqual", BinaryRelation.LEQ_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.LEQ_ID),
            GREATER_EQUAL("GreaterEqual", BinaryRelation.GEQ_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.GEQ_ID),
            IF("If", Function3Arg.IF_STR, 3, Function3Arg.TYPE_ID, Function3Arg.IF_CONDITION_ID),
            SUM("Sum", CalculusOperator.SUM_STR, 4, CalculusOperator.TYPE_ID, CalculusOperator.SUM_ID),
            PRODUCT("Product", CalculusOperator.PROD_STR, 4, CalculusOperator.TYPE_ID, CalculusOperator.PROD_ID);

            final String head;
            final String source;
            final int arity;
            final int type;
            final int id;

            Operation(String head, String source, int arity, int type, int id) {
                this.head = head;
                this.source = source;
                this.arity = arity;
                this.type = type;
                this.id = id;
            }

            boolean accepts(int count) { return arity == -1 ? count > 0 : count == arity; }
            boolean chain() { return this == ADD || this == MULTIPLY; }
            boolean angle() { return this == SIN || this == COS || this == TAN; }
            boolean relation() { return type == BinaryRelation.TYPE_ID; }
            boolean iterator() { return type == CalculusOperator.TYPE_ID; }
        }

        private static final Map<String, Operation> BY_NAME = new HashMap<>();
        private static final Map<Long, Operation> BY_TOKEN = new HashMap<>();
        static {
            for (Operation operation : Operation.values()) {
                BY_NAME.put(operation.head, operation);
                if (operation.type >= 0) BY_TOKEN.put(key(operation.type, operation.id), operation);
            }
            BY_TOKEN.put(key(Operator.TYPE_ID, Operator.SQUARE_ROOT_ID), Operation.SQRT);
        }

        static Operation operation(String name) { return BY_NAME.get(name); }
        static Operation operation(int type, int id) { return BY_TOKEN.get(key(type, id)); }
        private static long key(int type, int id) { return ((long) type << Integer.SIZE) | Integer.toUnsignedLong(id); }

        static boolean numericSpelling(String text) {
            return text.length() <= Codec.MAX_NUMBER && DECIMAL.matcher(text).matches();
        }

        private static boolean validDecimal(Matcher match) {
            if (!match.matches()) return false;
            if (match.group(4) != null) return match.group(3) != null;
            return match.group(3) == null || !match.group(3).isEmpty();
        }

        static boolean specialNumber(String value) {
            return value.equals("NaN") || value.equals("Infinity") || value.equals("+Infinity") || value.equals("PositiveInfinity")
                    || value.equals("-Infinity") || value.equals("NegativeInfinity") || value.equals("ComplexInfinity");
        }

        static double readNumber(String text, Codec.Value at, Codec.Budget budget) {
            requireNumberLength(text, at);
            budget.work(text.length(), at);
            text = text.replaceAll("[\t\n\u000B\f\r \u00A0]", EMPTY);
            Matcher match = DECIMAL.matcher(text);
            if (!validDecimal(match)) throw error(UNSUPPORTED_NUMBER, at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            String periodic = match.group(4);
            if (periodic != null) {
                StringBuilder expanded = new StringBuilder(text.substring(0, match.start(4) - 1));
                int end = expanded.length() + periodic.length() + 32;
                while (expanded.length() < end) expanded.append(periodic);
                text = expanded.append(text.substring(match.end(4) + 1)).toString();
                budget.work(text.length(), at);
            }
            double value = Double.parseDouble(text);
            if (!Double.isFinite(value))
                throw error(UNSUPPORTED_NUMBER, at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            return value;
        }

        static Node resolveNumber(Node node, Codec.Budget budget, boolean formula) {
            if (node.name == null) return node;
            double value = readNumber(node.name, node.at, budget);
            return number(formula && value == 0 ? 0 : value, node.at);
        }

        static void requireNumberLength(String text, Codec.Value at) {
            if (text.length() > Codec.MAX_NUMBER)
                throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_NUMBER));
        }

        static void warning(List<MathJSON.Diagnostic> diagnostics, Codec.Value at, String code, String message) {
            diagnostics.add(new MathJSON.Diagnostic(code, at == null ? EMPTY : at.path,
                    at == null ? NO_OFFSET : at.offset, message));
        }

        static void externalWarning(List<MathJSON.Diagnostic> diagnostics, Codec.Value at, String name) {
            warning(diagnostics, at, EXTERNAL_DEFINITION,
                    formatMessage(STRING_RESOURCES.MATHJSON_EXTERNAL_DEFINITION, name));
        }

        static Node fromToken(Token token, Codec.Budget budget) {
            String lexeme = token.tokenStr;
            requireNumberLength(lexeme, null);
            budget.work(lexeme.length(), null);
            double value = token.tokenValue;
            if (!Double.isFinite(value))
                throw error(UNSUPPORTED_NUMBER, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            return lexeme.indexOf('_') >= 0 ? fraction(lexeme, value) : number(value == 0 ? 0 : value, null);
        }

        private static Node fraction(String lexeme, double value) {
            boolean negative = lexeme.startsWith(Operator.MINUS_STR);
            String[] parts = (negative || lexeme.startsWith(Operator.PLUS_STR) ? lexeme.substring(1) : lexeme).split("_");
            double p = Double.parseDouble(parts[parts.length - 2]);
            double q = Double.parseDouble(parts[parts.length - 1]);
            if (parts.length == 3) p += Double.parseDouble(parts[0]) * q;
            if (negative && p != 0) p = -p;
            if (!integral(p) || !integral(q) || q <= 0 || p / q != value)
                return number(value == 0 ? 0 : value, null);
            return call(HEAD_RATIONAL, null, number(p, null), number(q, null));
        }

        static boolean integral(double number) {
            return Double.isFinite(number) && number == Math.rint(number);
        }

        static boolean isNegativeZero(double number) {
            return number == 0 && 1.0 / number < 0;
        }

        static String decimalSpelling(double number) {
            if (isNegativeZero(number)) return "-0";
            if (Math.abs(number) <= SAFE_INTEGER && number == Math.floor(number))
                return Long.toString((long) number);
            return Double.toString(number);
        }

        private static final class WriteFrame {
            final Node node;
            int child;
            WriteFrame(Node node) { this.node = node; }
        }

        static String write(Node root, Codec.Budget budget) {
            StringBuilder output = new StringBuilder();
            Deque<WriteFrame> stack = new ArrayDeque<>();
            stack.push(new WriteFrame(root));
            int count = 0;
            while (!stack.isEmpty()) {
                WriteFrame frame = stack.peek();
                Node node = frame.node;
                if (frame.child == 0) {
                    if (++count > Codec.MAX_VALUES)
                        throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_VALUES));
                    if (stack.size() > Codec.MAX_DEPTH)
                        throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                    budget.work(1, node.at);
                    switch (node.kind) {
                        case CALL:
                            output.append('[');
                            quote(node.name, output);
                            break;
                        case SYMBOL:
                            if (specialNumber(node.name)) {
                                output.append("{\"" + Codec.FIELD_SYMBOL + "\":");
                                quote(node.name, output);
                                output.append('}');
                            } else quote(node.name, output);
                            break;
                        case STRING:
                            output.append("{\"" + Codec.FIELD_STRING + "\":");
                            quote(node.name, output);
                            output.append('}');
                            break;
                        case NUMBER:
                            String spelling = decimalSpelling(node.number);
                            if (node.number == Math.rint(node.number) && Math.abs(node.number) <= SAFE_INTEGER
                                    && !isNegativeZero(node.number)) output.append(spelling);
                            else {
                                output.append("{\"" + Codec.FIELD_NUMBER + "\":");
                                quote(spelling, output);
                                output.append('}');
                            }
                            break;
                        default: throw new IllegalStateException();
                    }
                }
                if (frame.child < node.children.size()) {
                    output.append(',');
                    stack.push(new WriteFrame(node.arg(frame.child++)));
                } else {
                    if (node.kind == Kind.CALL) output.append(']');
                    stack.pop();
                }
                if (output.length() > Codec.MAX_TEXT)
                    throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_TEXT));
            }
            String json = output.toString();
            Codec.checkTransport(json, budget);
            return json;
        }

        private static final String HEX = "0123456789ABCDEF";

        private static void quote(String text, StringBuilder output) {
            output.append('"');
            for (int i = 0; i < text.length(); i++) {
                char c = text.charAt(i);
                switch (c) {
                    case '"': output.append("\\\""); break;
                    case '\\': output.append("\\\\"); break;
                    case '\b': output.append("\\b"); break;
                    case '\f': output.append("\\f"); break;
                    case '\n': output.append("\\n"); break;
                    case '\r': output.append("\\r"); break;
                    case '\t': output.append("\\t"); break;
                    default:
                        if (c < 0x20 || c == '\u2028' || c == '\u2029') {
                            output.append("\\u").append(HEX.charAt(c >> 12)).append(HEX.charAt(c >> 8 & 15))
                                    .append(HEX.charAt(c >> 4 & 15)).append(HEX.charAt(c & 15));
                        } else output.append(c);
                }
            }
            output.append('"');
        }

        private Tree() {}
    }

    static final class Plan {
        final List<PrimitiveElement> used = new ArrayList<>();
        final Set<PrimitiveElement> usedSet = Collections.newSetFromMap(new IdentityHashMap<>());
        final Set<String> open = new LinkedHashSet<>();
        final Set<String> openFunctions = new LinkedHashSet<>();
        final Map<String, Node> binders = new LinkedHashMap<>();
        private final Map<String, PrimitiveElement> visible;
        private final Map<String, Argument> parameters;
        private final Set<String> availableBuiltins;
        private final boolean allowOpen;
        private final boolean allowSubclassReferences;
        private final boolean forExport;
        private final MathJSON.ImportOptions options;
        private final List<MathJSON.Diagnostic> diagnostics;
        private final Codec.Budget budget;

        Plan(Map<String, PrimitiveElement> visible, Map<String, Argument> parameters,
                     Set<String> availableBuiltins, boolean allowOpen, boolean allowSubclassReferences, boolean forExport,
                     MathJSON.ImportOptions options, List<MathJSON.Diagnostic> diagnostics, Codec.Budget budget) {
            this.visible = visible;
            this.parameters = parameters;
            this.availableBuiltins = availableBuiltins;
            this.allowOpen = allowOpen;
            this.allowSubclassReferences = allowSubclassReferences;
            this.forExport = forExport;
            this.options = options;
            this.diagnostics = diagnostics;
            this.budget = budget;
        }

        boolean hasOpenReferences() { return !open.isEmpty() || !openFunctions.isEmpty(); }

        Node validate(Node root) {
            Node plan = validate(root, new LinkedHashSet<>(), false, 0);
            for (String binder : binders.keySet()) {
                if (open.contains(binder))
                    throw error(UNSUPPORTED_BINDING, root.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
            }
            return plan;
        }

        private Node validate(Node node, Set<String> locals, boolean predicate, int depth) {
            if (depth >= Codec.MAX_DEPTH) throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
            budget.work(1, node.at);
            budget.allocate(64, node.at);
            if (node.kind == Kind.STRING) throw error(UNSUPPORTED_NODE, node.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
            if (forExport && predicate && !node.userCall && node.call(Operation.NEGATE.head)
                    && node.arg(0).kind == Kind.NUMBER)
                node = number(-node.arg(0).number, node.at);
            if (node.kind == Kind.NUMBER) {
                if (!predicate) return resolveNumber(node, budget, true);
                if (!forExport) throw domain(node);
                double value = ExpressionUtils.roundResult(node.number, 0);
                if (Double.isNaN(value)) throw domain(node);
                return atom(Kind.SYMBOL, value == 0 ? SYMBOL_FALSE : SYMBOL_TRUE, node.at);
            }
            if (node.kind == Kind.SYMBOL) return scalar(node, locals, predicate);
            if (!predicate && forExport && node.userCall) return userCall(node, locals, depth);
            if (!predicate && node.call(HEAD_MXPARSER_SYMBOL)) {
                Codec.Input.checkArity(node, 1);
                return referenceSymbol(qualifiedName(node.arg(0)), locals);
            }
            if (!predicate && node.call(HEAD_MXPARSER_CALL)) {
                if (node.children.size() < 2) Codec.Input.checkArity(node, 2);
                Node name = qualifiedName(node.arg(0));
                return userCall(call(name.name, node.at, node.children.subList(1, node.children.size())), locals, depth);
            }
            Operation op = operation(node.name);
            if (predicate && (op == null || !op.relation())) throw domain(node);
            if (node.call(HEAD_BOOLE)) {
                Codec.Input.checkArity(node, 1);
                return validate(node.arg(0), locals, true, depth + 1);
            }
            if (op != null && op.iterator()) return iterator(node, locals, depth);
            if (node.call(HEAD_RATIONAL)) {
                Codec.Input.checkArity(node, 2);
                Node p = node.arg(0).kind == Kind.NUMBER ? resolveNumber(node.arg(0), budget, true) : node.arg(0);
                Node q = node.arg(1).kind == Kind.NUMBER ? resolveNumber(node.arg(1), budget, true) : node.arg(1);
                if (!integerAtom(p))
                    throw error(UNSUPPORTED_NUMBER, node.arg(0).at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
                if (!integerAtom(q) || q.number == 0)
                    throw error(UNSUPPORTED_NUMBER, node.arg(1).at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
                if (q.number < 0) {
                    p = number(p.number == 0 ? 0 : -p.number, p.at);
                    q = number(-q.number, q.at);
                }
                return call(forExport ? HEAD_RATIONAL : Operation.DIVIDE.head, node.at, p, q);
            }
            if (node.call("Square")) {
                Codec.Input.checkArity(node, 1);
                return validate(call(Operation.POWER.head, node.at, node.arg(0), number(2, node.at)), locals, false, depth);
            }
            if (node.call("Quantity")) {
                if (!options.kilometresAsScalar)
                    throw error(UNSUPPORTED_NODE, node.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
                Codec.Input.checkArity(node, 2);
                if (node.arg(1).kind != Kind.STRING || !node.arg(1).name.equals("km"))
                    throw error(UNSUPPORTED_NODE, node.arg(1).at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
                warning(diagnostics, node.at, "UNIT_PROJECTED_TO_SCALAR", STRING_RESOURCES.MATHJSON_UNIT_PROJECTED_TO_SCALAR);
                Node metresPerKilometre = number(Units.KILOMETRE / Units.METRE, node.at);
                return validate(call(Operation.MULTIPLY.head, node.at, node.arg(0), metresPerKilometre), locals, false, depth);
            }
            if (op == null) {
                if (Vocabulary.structure(node.name))
                    throw error(UNSUPPORTED_NODE, node.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
                return userCall(node, locals, depth);
            }
            if (forExport && (op == Operation.TETRATION || op == Operation.DEG)) extensionWarning(node, node.name);
            if (op.chain()) {
                if (node.children.isEmpty()) Codec.Input.checkArity(node, 1);
                if (node.children.size() == 1) return validate(node.arg(0), locals, false, depth + 1);
            } else if (!op.accepts(node.children.size()))
                Codec.Input.checkArity(node, op.arity == -1 ? 1 : op.arity);
            List<Node> operands = new ArrayList<>(node.children.size());
            for (int i = 0; i < node.children.size(); i++)
                operands.add(validate(node.arg(i), locals, op == Operation.IF && i == 0, depth + 1));
            if (op.angle() && mXparser.checkIfDegreesMode()) {
                Node angle = operands.get(0);
                if (forExport) operands.set(0, call(Operation.RAD.head, angle.at, angle));
                else if (!angle.userCall && angle.call(Operation.RAD.head)) operands.set(0, angle.arg(0));
                else operands.set(0, call(Operation.DEG.head, angle.at, angle));
            }
            Node result = call(node.name, node.at, operands);
            return forExport && op.relation() && !predicate ? call(HEAD_BOOLE, node.at, result) : result;
        }

        private static Node qualifiedName(Node node) {
            if (node.kind == Kind.SYMBOL) return node;
            if (node.kind == Kind.NUMBER && node.at != null && node.at.kind == Codec.Kind.STRING && specialNumber(node.name))
                return atom(Kind.SYMBOL, node.name, node.at);
            throw error(INVALID_SHAPE, node.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
        }

        private Node scalar(Node node, Set<String> locals, boolean predicate) {
            if (forExport && node.binding != null && !predicate) return referenceSymbol(node, locals);
            if (node.symbol(SYMBOL_TRUE) || node.symbol(SYMBOL_FALSE)) {
                if (forExport && !node.builtin) throw domain(node);
                node.builtin = true;
                return forExport && !predicate ? call(HEAD_BOOLE, node.at, node) : node;
            }
            if (predicate) throw domain(node);
            if (node.symbol(SYMBOL_PI) || node.symbol(SYMBOL_EXPONENTIAL_E)) {
                if (forExport && !node.builtin)
                    return referenceSymbol(node, locals);
                node.builtin = true;
                return node;
            }
            if (specialNumber(node.name)) throw error(UNSUPPORTED_NUMBER, node.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            return referenceSymbol(node, locals);
        }

        private Node referenceSymbol(Node node, Set<String> locals) {
            if (locals.contains(node.name)) return node;
            Codec.Input.checkName(node.name, node.at);
            Argument parameter = parameters.get(node.name);
            if (parameter != null) {
                if (forExport && node.binding != parameter) throw binding(node);
                node.binding = parameter;
            } else {
                PrimitiveElement element = lookup(node);
                checkNativeName(node, element);
                if (forExport && node.binding != element) throw binding(node);
                if (element == null) {
                    if (openFunctions.contains(node.name)) throw collision(node);
                    if (!allowOpen) throw missing(node, "UNRESOLVED_SYMBOL");
                    if (open.add(node.name)) missingWarning(node, "UNRESOLVED_SYMBOL");
                } else {
                    if (!(element instanceof Argument || element instanceof Constant)) throw binding(node);
                    if (usedSet.add(element)) {
                        used.add(element);
                        if (forExport ? allowOpen : !Exchange.declarableValue(element))
                            externalWarning(diagnostics, node.at, node.name);
                    }
                    node.binding = element;
                }
            }
            if (forExport && (Vocabulary.reserved(node.name) || specialNumber(node.name)
                    || availableBuiltins.contains(node.name))) {
                extensionWarning(node, HEAD_MXPARSER_SYMBOL);
                return call(HEAD_MXPARSER_SYMBOL, node.at, node);
            }
            return node;
        }

        private PrimitiveElement lookup(Node node) {
            PrimitiveElement element = visible.get(node.name);
            if (element == null && visible.containsKey(node.name)) throw collision(node);
            if (element != null) Exchange.requireReference(element, allowSubclassReferences);
            return element;
        }

        private void checkNativeName(Node node, PrimitiveElement element) {
            if (availableBuiltins.contains(node.name) && (element == null || !mXparser.checkIfsetToOverrideBuiltinTokens()))
                throw collision(node);
        }

        private Node userCall(Node node, Set<String> locals, int depth) {
            Codec.Input.checkName(node.name, node.at);
            if (locals.contains(node.name) || parameters.containsKey(node.name) || open.contains(node.name))
                throw collision(node);
            PrimitiveElement element = lookup(node);
            checkNativeName(node, element);
            if (node.children.isEmpty()) Codec.Input.checkArity(node, 1);
            if (element == null) {
                if (!allowOpen) throw missing(node, UNRESOLVED_FUNCTION);
                if (openFunctions.add(node.name)) missingWarning(node, UNRESOLVED_FUNCTION);
            } else {
                if (!(element instanceof Function)) throw binding(node);
                Function function = (Function) element;
                if (!function.isVariadic) Codec.Input.checkArity(node, function.getParametersNumber());
                if (usedSet.add(element)) {
                    used.add(element);
                    if (forExport ? allowOpen : !Exchange.declarableValue(element))
                        externalWarning(diagnostics, node.at, node.name);
                }
            }
            if (forExport && node.binding != element) throw binding(node);
            List<Node> operands = new ArrayList<>();
            boolean qualified = forExport && (operation(node.name) != null || Vocabulary.structure(node.name)
                    || Vocabulary.reserved(node.name) || availableBuiltins.contains(node.name)
                    || specialNumber(node.name)
                    || node.name.equals(HEAD_MXPARSER_CALL) || node.name.equals(HEAD_MXPARSER_SYMBOL));
            if (qualified) {
                extensionWarning(node, HEAD_MXPARSER_CALL);
                operands.add(atom(Kind.SYMBOL, node.name, node.at));
            }
            for (Node child : node.children) operands.add(validate(child, locals, false, depth + 1));
            Node result = call(qualified ? HEAD_MXPARSER_CALL : node.name, node.at, operands);
            result.userCall = true;
            result.binding = element;
            return result;
        }

        private void missingWarning(Node node, String code) {
            warning(diagnostics, node.at, code, formatMessage(STRING_RESOURCES.MATHJSON_UNRESOLVED_REFERENCE, node.name));
        }

        private ConversionFailure missing(Node node, String code) {
            return error(code, node.at, formatMessage(STRING_RESOURCES.MATHJSON_UNRESOLVED_REFERENCE, node.name));
        }

        private static ConversionFailure collision(Node node) {
            return error(NAME_COLLISION, node.at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
        }

        private void extensionWarning(Node node, String name) {
            warning(diagnostics, node.at, MXPARSER_EXTENSION,
                    formatMessage(STRING_RESOURCES.MATHJSON_MXPARSER_EXTENSION, name));
        }

        private Node iterator(Node node, Set<String> locals, int depth) {
            Codec.Input.checkArity(node, 2);
            Node limits = node.arg(1);
            Node index, first, last;
            if (limits.call(HEAD_LIMITS) || limits.call(HEAD_TUPLE)) {
                Codec.Input.checkArity(limits, 3);
                index = limits.arg(0);
                first = limits.arg(1);
                last = limits.arg(2);
            } else if (limits.call("Element")) {
                Codec.Input.checkArity(limits, 2);
                index = limits.arg(0);
                Node range = limits.arg(1);
                if (!range.call(HEAD_RANGE)) throw error(INVALID_SHAPE, range.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                Codec.Input.checkArity(range, 2);
                first = range.arg(0);
                last = range.arg(1);
            } else throw error(INVALID_SHAPE, limits.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
            if (index.kind != Kind.SYMBOL) throw error(INVALID_SHAPE, index.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
            Codec.Input.checkName(index.name, index.at);
            Vocabulary.checkLocalSymbol(index.name, index.at);
            if (locals.contains(index.name) || parameters.containsKey(index.name)
                    || (forExport && visible.containsKey(index.name)) || availableBuiltins.contains(index.name))
                throw error(forExport ? UNSUPPORTED_BINDING : NAME_COLLISION, index.at,
                        forExport ? STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION : STRING_RESOURCES.MATHJSON_NAME_COLLISION);
            first = validate(first, locals, false, depth + 1);
            last = validate(last, locals, false, depth + 1);
            binders.putIfAbsent(index.name, index);
            locals.add(index.name);
            Node result = validate(node.arg(0), locals, false, depth + 1);
            locals.remove(index.name);
            return call(node.name, node.at, result, call(HEAD_LIMITS, limits.at, index, first, last));
        }

        void checkIteratorBinding(PrimitiveElement element) {
            if (binders.isEmpty()) return;
            Node index = binders.get(Exchange.definitionName(element));
            if (index != null) throw collision(index);
        }

        private static boolean integerAtom(Node node) {
            return node.kind == Kind.NUMBER && integral(node.number);
        }

        private static final class EmitPart {
            final Node node;
            final String text;

            EmitPart(Node node, String text) {
                this.node = node;
                this.text = text;
            }
        }

        static String emit(Node node, Codec.Budget budget) {
            StringBuilder text = new StringBuilder();
            Deque<EmitPart> pending = new ArrayDeque<>();
            pending.push(new EmitPart(node, null));
            while (!pending.isEmpty()) {
                EmitPart part = pending.pop();
                budget.work(1, node.at);
                if (part.node == null) text.append(part.text);
                else appendOrSchedule(part.node, text, pending);
                if (text.length() > Codec.MAX_SOURCE)
                    throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_SOURCE));
            }
            budget.allocate(2L * text.length(), node.at);
            return text.toString();
        }

        private static void appendOrSchedule(Node node, StringBuilder text, Deque<EmitPart> pending) {
            if (node.kind == Kind.NUMBER) {
                if (node.number < 0) text.append(ParserSymbol.LEFT_PARENTHESES_STR);
                text.append(decimalSpelling(node.number));
                if (node.number < 0) text.append(ParserSymbol.RIGHT_PARENTHESES_STR);
                return;
            }
            if (node.kind == Kind.SYMBOL) {
                text.append(node.spelling == null ? node.name : node.spelling);
                return;
            }
            Operation op = node.userCall ? null : operation(node.name);
            String spelling = node.spelling == null ? node.name : node.spelling;
            if (op == Operation.NEGATE) {
                text.append(spelling).append(ParserSymbol.LEFT_PARENTHESES_STR);
                pending.push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR));
                pending.push(new EmitPart(node.arg(0), null));
            } else if (op == Operation.FACTORIAL) {
                text.append(ParserSymbol.LEFT_PARENTHESES_STR);
                pending.push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR + spelling));
                pending.push(new EmitPart(node.arg(0), null));
            } else if (op != null && (op.type == org.mariuszgromada.math.mxparser.parsertokens.Operator.TYPE_ID || op.relation())) {
                text.append(ParserSymbol.LEFT_PARENTHESES_STR);
                pending.push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR));
                String join = ParserSymbol.RIGHT_PARENTHESES_STR + spelling + ParserSymbol.LEFT_PARENTHESES_STR;
                for (int i = node.children.size() - 1; i >= 0; i--) {
                    pending.push(new EmitPart(node.arg(i), null));
                    if (i > 0) pending.push(new EmitPart(null, join));
                }
            } else {
                text.append(spelling).append(ParserSymbol.LEFT_PARENTHESES_STR);
                pending.push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR));
                if (op == Operation.LOG || op == Operation.ROOT) {
                    pending.push(new EmitPart(node.arg(0), null));
                    pending.push(new EmitPart(null, ParserSymbol.COMMA_STR));
                    pending.push(new EmitPart(node.arg(1), null));
                } else if (op != null && op.iterator()) {
                    Node limits = node.arg(1);
                    pending.push(new EmitPart(node.arg(0), null));
                    for (int i = limits.children.size() - 1; i >= 0; i--) {
                        pending.push(new EmitPart(null, ParserSymbol.COMMA_STR));
                        pending.push(new EmitPart(limits.arg(i), null));
                    }
                } else {
                    for (int i = node.children.size() - 1; i >= 0; i--) {
                        pending.push(new EmitPart(node.arg(i), null));
                        if (i > 0) pending.push(new EmitPart(null, ParserSymbol.COMMA_STR));
                    }
                }
            }
        }

        static boolean same(Node planned, Node actual, Map<PrimitiveElement, PrimitiveElement> bindings) {
            Deque<Node> expected = new ArrayDeque<>();
            Deque<Node> received = new ArrayDeque<>();
            expected.push(planned);
            received.push(actual);
            while (!expected.isEmpty()) {
                Node lhs = expected.pop();
                Node rhs = received.pop();
                if (lhs.kind != rhs.kind || lhs.children.size() != rhs.children.size()) return false;
                if (lhs.kind == Kind.NUMBER) {
                    if (lhs.number != rhs.number) return false;
                } else if (!lhs.name.equals(rhs.name)) return false;
                if (lhs.userCall != rhs.userCall || lhs.builtin != rhs.builtin) return false;
                if (lhs.binding != null && (!bindings.containsKey(lhs.binding) || bindings.get(lhs.binding) != rhs.binding))
                    return false;
                if (lhs.binding == null && rhs.binding != null) return false;
                for (int i = lhs.children.size() - 1; i >= 0; i--) {
                    expected.push(lhs.arg(i));
                    received.push(rhs.arg(i));
                }
            }
            return true;
        }

        static ConversionFailure domain(Node node) {
            return error(UNSUPPORTED_DOMAIN, node.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
        }

        static ConversionFailure binding(Node node) {
            return error(UNSUPPORTED_BINDING, node.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
        }
    }

    static final class Tokens {
        private static final class Slot {
            final Token token;
            int level;
            Node value;
            Operation operation;
            boolean chain;
            Slot close;
            List<Slot> separators;
            Slot head;

            Slot(Token token) {
                this.token = token;
                level = token.tokenLevel;
            }

            boolean open() { return Token.isLeftParenthesis(token); }
            boolean isClose() { return Token.isRightParenthesis(token); }
            boolean comma() { return Token.isParameterSeparator(token); }
            boolean function() {
                int type = token.tokenTypeId;
                return type == Token.NOT_MATCHED && ExpressionUtils.FUNCTION.equals(token.looksLike)
                        || type == Function.TYPE_ID || type == Function1Arg.TYPE_ID || type == Function2Arg.TYPE_ID
                        || type == Function3Arg.TYPE_ID || type == FunctionVariadic.TYPE_ID
                        || type == CalculusOperator.TYPE_ID || type == RecursiveArgument.TYPE_ID_RECURSIVE;
            }
        }

        static Node read(Expression original, Codec.Budget budget) {
            String text = original.getExpressionString();
            preflight(text, budget);
            checkContextSize(original);
            // Keep keyword positions without invoking host evaluation or extension callbacks.
            List<Argument> arguments = new ArrayList<>(original.argumentsList.size());
            for (Argument argument : original.argumentsList)
                arguments.add(argument.getClass() == Argument.class || argument.getClass() == RecursiveArgument.class
                        ? argument : new Argument(argument.getArgumentName(), 0.0));
            List<Function> functions = new ArrayList<>(original.functionsList.size());
            for (Function function : original.functionsList)
                functions.add(function.getClass() == Function.class && function.getFunctionBodyType() == Function.BODY_RUNTIME
                        ? function : new Function(function.getFunctionName(), "0", new String[0]));
            List<Constant> constants = new ArrayList<>(original.constantsList.size());
            for (Constant constant : original.constantsList)
                constants.add(constant.getClass() == Constant.class ? constant : new Constant(constant.getConstantName(), 0.0));
            Expression snapshot = new Expression(text, arguments, functions, constants, true, original.UDFExpression, null);
            if (original.checkIfImpliedMultiplicationMode()) snapshot.enableImpliedMultiplicationMode();
            else snapshot.disableImpliedMultiplicationMode();
            if (original.checkIfUnicodeBuiltinKeyWordsMode()) snapshot.enableUnicodeBuiltinKeyWordsMode();
            else snapshot.disableUnicodeBuiltinKeyWordsMode();
            if (original.checkIfAttemptToFixExpStrMode()) snapshot.enableAttemptToFixExpStrMode();
            else snapshot.disableAttemptToFixExpStrMode();
            List<Token> tokens = snapshot.getCopyOfInitialTokens();
            if (tokens.isEmpty()) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
            if (tokens.size() > Codec.MAX_SOURCE)
                throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_SOURCE));
            budget.allocate(192L * tokens.size() + 2L * text.length(), null);
            budget.work(tokens.size(), null);
            List<Slot> slots = new ArrayList<>(tokens.size());
            for (Token token : tokens) slots.add(new Slot(token));
            pair(slots);
            if (!snapshot.checkLexSyntax()) throw invalid(snapshot.getErrorMessage());
            for (Slot slot : slots) resolve(slot, original, budget);
            return reduce(slots, budget, 0);
        }

        static void preflight(String source, Codec.Budget budget) {
            if (source == null) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
            if (source.length() > Codec.MAX_SOURCE)
                throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_SOURCE));
            budget.work(source.length(), null);
            int depth = 0;
            int digits = 0;
            for (int i = 0; i < source.length(); i++) {
                char c = source.charAt(i);
                if (c == '(' && ++depth > Codec.MAX_DEPTH)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                if (c == ')') depth--;
                if (Codec.digit(c)) {
                    if (++digits > Codec.MAX_NUMBER)
                        throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_NUMBER));
                } else digits = 0;
            }
        }

        private static void checkContextSize(Expression context) {
            long size = (long) context.argumentsList.size() + context.functionsList.size() + context.constantsList.size();
            if (size > Exchange.MAX_REFERENCES)
                throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Exchange.MAX_REFERENCES));
        }

        private static void pair(List<Slot> slots) {
            Deque<Slot> stack = new ArrayDeque<>();
            int unresolvedDepth = 0;
            for (int i = 0; i < slots.size(); i++) {
                Slot slot = slots.get(i);
                slot.level += unresolvedDepth;
                if (slot.open()) {
                    if (i > 0 && slots.get(i - 1).function()) {
                        slot.head = slots.get(i - 1);
                        slot.head.close = slot;
                        slot.separators = new ArrayList<>();
                        // The tokenizer adds this level only for resolved function tokens.
                        if (slot.head.token.tokenTypeId == Token.NOT_MATCHED) {
                            slot.head.level++;
                            slot.level++;
                            unresolvedDepth++;
                        }
                    }
                    stack.push(slot);
                } else if (slot.isClose()) {
                    if (stack.isEmpty()) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                    Slot opening = stack.pop();
                    opening.close = slot;
                    if (opening.head != null && opening.head.token.tokenTypeId == Token.NOT_MATCHED) unresolvedDepth--;
                } else if (slot.comma()) {
                    if (stack.isEmpty() || stack.peek().separators == null)
                        throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                    stack.peek().separators.add(slot);
                }
            }
            if (!stack.isEmpty()) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
        }

        private static void resolve(Slot slot, Expression context, Codec.Budget budget) {
            Token token = slot.token;
            int type = token.tokenTypeId;
            if (type == ParserSymbol.NUMBER_TYPE_ID) {
                slot.value = fromToken(token, budget);
                return;
            }
            if (type == ConstantValue.TYPE_ID) {
                String name;
                switch (token.tokenId) {
                    case ConstantValue.PI_ID: name = SYMBOL_PI; break;
                    case ConstantValue.EULER_ID: name = SYMBOL_EXPONENTIAL_E; break;
                    case ConstantValue.TRUE_ID: name = SYMBOL_TRUE; break;
                    case ConstantValue.FALSE_ID: name = SYMBOL_FALSE; break;
                    default: throw unsupported();
                }
                slot.value = atom(Kind.SYMBOL, name, null);
                slot.value.builtin = true;
                return;
            }
            if (type == Token.NOT_MATCHED && slot.function()) {
                if (slot.close == null) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                slot.value = call(token.tokenStr, null);
                return;
            }
            if (type == Argument.TYPE_ID || type == Constant.TYPE_ID || type == Token.NOT_MATCHED) {
                slot.value = atom(Kind.SYMBOL, token.tokenStr, null);
                if (type == Argument.TYPE_ID) slot.value.binding = context.argumentsList.get(token.tokenId);
                else if (type == Constant.TYPE_ID) slot.value.binding = context.constantsList.get(token.tokenId);
                return;
            }
            if (type == ParserSymbol.TYPE_ID && (slot.open() || slot.isClose() || slot.comma())) return;
            slot.operation = operation(type, token.tokenId);
            if (slot.function()) {
                if (slot.close == null) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                if (type == Function.TYPE_ID) {
                    slot.value = call(token.tokenStr, null);
                    slot.value.binding = context.functionsList.get(token.tokenId);
                } else {
                    if (slot.operation == null) throw unsupported();
                    int arity = slot.close.separators.size() + 1;
                    if (!slot.operation.accepts(arity) && !(slot.operation.iterator() && arity == 5))
                        throw wrongArity(token.tokenStr);
                }
            } else if (slot.operation == null) throw unsupported();
        }

        private static Node reduce(List<Slot> slots, Codec.Budget budget, int depth) {
            if (depth >= Codec.MAX_DEPTH)
                throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
            if (slots.isEmpty()) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
            // A calculus frame preempts the ordinary reduction scan.
            for (;;) {
                int first = -1;
                for (int i = 0; i < slots.size(); i++) {
                    Operation operation = slots.get(i).operation;
                    if (operation == Operation.IF || operation != null && operation.iterator()) {
                        first = i;
                        break;
                    }
                }
                budget.work(slots.size(), null);
                if (first < 0) break;
                Slot head = slots.get(first);
                List<Node> children = new ArrayList<>();
                int start = first + 2;
                int end = -1;
                List<Slot> boundaries = new ArrayList<>(head.close.separators);
                boundaries.add(head.close.close);
                for (Slot boundary : boundaries) {
                    end = slots.indexOf(boundary);
                    budget.work(slots.size(), null);
                    if (end < start) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                    children.add(reduce(new ArrayList<>(slots.subList(start, end)), budget, depth + 1));
                    start = end + 1;
                }
                Node value;
                if (head.operation == Operation.IF) value = call(head.operation.head, null, children);
                else {
                    Node index = children.get(0);
                    if (index.kind != Kind.SYMBOL || index.binding != null
                            || (head.close.separators.get(0) != slots.get(first + 3)))
                        throw error(UNSUPPORTED_BINDING, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                    if (children.size() == 5) {
                        Node by = children.get(4);
                        if (by.kind != Kind.NUMBER || by.number != 1)
                            throw error(UNSUPPORTED_DOMAIN, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
                    }
                    value = call(head.operation.head, null, children.get(3),
                            call(HEAD_LIMITS, null, index, children.get(1), children.get(2)));
                }
                budget.work(slots.size(), null);
                head.level--;
                set(head, value);
                slots.subList(first + 1, end + 1).clear();
            }
            while (slots.size() > 1) {
                budget.work(2L * slots.size(), null);
                int lo = 0, hi = 0, max = slots.get(0).level;
                boolean uninterrupted = true;
                for (int i = 1; i < slots.size(); i++) {
                    int level = slots.get(i).level;
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
                int bestRank = Integer.MAX_VALUE;
                int leftParen = -1, rightParen = -1;
                List<Integer> commas = new ArrayList<>();
                for (int i = lo; i <= hi; i++) {
                    Slot slot = slots.get(i);
                    if (slot.open() && leftParen < 0) leftParen = i;
                    if (slot.isClose() && rightParen < 0) rightParen = i;
                    if (slot.comma()) commas.add(i);
                    Operation op = slot.operation;
                    if (op == Operation.TETRATION && ready(slots, i - 1) && ready(slots, i + 1)) {
                        lastTetration = i;
                        continue;
                    }
                    if (op == Operation.POWER) {
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
                        Operation sign = slots.get(lastPower + 1).operation;
                        if (sign == Operation.ADD || sign == Operation.SUBTRACT) {
                            best = lastPower + 1;
                            bestRank = 6;
                        }
                    }
                }
                if (best >= 0) {
                    apply(slots, best);
                } else if (!commas.isEmpty()) {
                    for (int i = commas.size() - 1; i >= 0; i--) {
                        int position = commas.get(i);
                        budget.work(slots.size() - position, null);
                        slots.remove(position);
                    }
                } else if (leftParen >= 0 && rightParen > leftParen
                        && slots.get(leftParen).close == slots.get(rightParen)) {
                    for (int i = leftParen + 1; i < rightParen; i++) {
                        slots.get(i).level--;
                        slots.get(i).chain = false;
                    }
                    slots.remove(rightParen);
                    slots.remove(leftParen);
                } else {
                    throw error(UNSUPPORTED_BINDING, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                }
            }
            if (!ready(slots, 0)) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
            return slots.get(0).value;
        }

        private static int rank(List<Slot> slots, int i) {
            Slot slot = slots.get(i);
            if (slot.function() && slot.close != null) {
                // The evaluator selects the first function of a class at this level.
                // Its delimiters have already been removed when that selection is actionable.
                if (slot.token.tokenTypeId == FunctionVariadic.TYPE_ID) return -1;
                if (slot.token.tokenTypeId == Function2Arg.TYPE_ID) return 0;
                if (slot.token.tokenTypeId == Function1Arg.TYPE_ID) return 1;
                return 2;
            }
            Operation op = slot.operation;
            if (op == null) return Integer.MAX_VALUE;
            switch (op) {
                case FACTORIAL: return ready(slots, i - 1) ? 4 : Integer.MAX_VALUE;
                case SQRT: return ready(slots, i + 1) ? 5 : Integer.MAX_VALUE;
                case MULTIPLY: case DIVIDE:
                    return ready(slots, i - 1) && ready(slots, i + 1) ? 7 : Integer.MAX_VALUE;
                case ADD: case SUBTRACT: return ready(slots, i + 1) ? 8 : Integer.MAX_VALUE;
                default: return op.relation() && ready(slots, i - 1) && ready(slots, i + 1)
                        ? 9 + op.ordinal() - Operation.NOT_EQUAL.ordinal() : Integer.MAX_VALUE;
            }
        }

        private static boolean ready(List<Slot> slots, int i) {
            return i >= 0 && i < slots.size() && slots.get(i).value != null && slots.get(i).close == null;
        }

        private static void set(Slot slot, Node node) {
            slot.value = node;
            slot.operation = null;
            slot.chain = false;
            slot.close = null;
        }

        private static void apply(List<Slot> slots, int i) {
            Slot slot = slots.get(i);
            Operation op = slot.operation;
            if (slot.function() && slot.close != null) {
                int arity = slot.close.separators.size() + 1;
                List<Node> children = new ArrayList<>(arity);
                for (int j = 1; j <= arity; j++) {
                    if (!ready(slots, i + j) || slots.get(i + j).level != slot.level)
                        throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                    children.add(slots.get(i + j).value);
                }
                if (op == Operation.LOG || op == Operation.ROOT) java.util.Collections.swap(children, 0, 1);
                Node call = call(op == null ? slot.token.tokenStr : op.head, null, children);
                if (op == null) {
                    call.binding = slot.value.binding;
                    call.userCall = true;
                }
                slot.level--;
                set(slot, call);
                slots.subList(i + 1, i + arity + 1).clear();
                return;
            }
            if (op == Operation.FACTORIAL) {
                Slot left = slots.get(i - 1);
                left.level = slot.level;
                set(left, call(op.head, null, left.value));
                slots.remove(i);
            } else if (op == Operation.SQRT
                    || ((op == Operation.ADD || op == Operation.SUBTRACT) && !ready(slots, i - 1))) {
                Node right = slots.get(i + 1).value;
                set(slot, op == Operation.ADD ? right : call(op == Operation.SUBTRACT ? Operation.NEGATE.head : op.head, null, right));
                slots.remove(i + 1);
            } else {
                Slot left = slots.get(i - 1);
                Node right = slots.get(i + 1).value;
                if (op.chain() && left.chain && left.level == slot.level && left.value.call(op.head)) {
                    left.value.appendChainOperand(right);
                } else if (op.chain()) {
                    set(left, call(op.head, null, new ArrayList<>(Arrays.asList(left.value, right))));
                    left.chain = true;
                } else {
                    set(left, call(op.head, null, left.value, right));
                }
                left.level = slot.level;
                slots.subList(i, i + 2).clear();
            }
        }

        private static ConversionFailure unsupported() {
            return error(UNSUPPORTED_NODE, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
        }

        private static ConversionFailure wrongArity(String token) {
            return error(INVALID_ARITY, null, formatMessage(STRING_RESOURCES.MATHJSON_WRONG_ARGUMENT_COUNT, token));
        }

        private static ConversionFailure invalid(String message) {
            return error("INVALID_MXPARSER_SOURCE", null, message);
        }

        private Tokens() {}
    }

    /** Pinned Compute Engine 0.190.0 root vocabulary for qualifying exported calls
     * (beefedb32d10044d76f6ca8de30379e7e52fccae).
     * An external probe listed ce.context.lexicalScope.parent.bindings.keys(),
     * then sorted ASCII identifier and single Greek character names.
     */
    static final class Vocabulary {
        static final String HEAD_BLOCK = "Block";
        static final String HEAD_DECLARE = "Declare";
        static final String HEAD_DEFINE_FUNCTION = "DefineFunction";
        static final String HEAD_FUNCTION = "Function";
        static final String HEAD_DICTIONARY = "Dictionary";
        static final String HEAD_KEY_VALUE_PAIR = "KeyValuePair";
        static final String HEAD_LIMITS = "Limits";
        static final String HEAD_TUPLE = "Tuple";
        static final String HEAD_RANGE = "Range";
        static final String HEAD_RATIONAL = "Rational";
        static final String HEAD_BOOLE = "Boole";
        static final String HEAD_ERROR = "Error";
        static final String HEAD_MXPARSER_CALL = "MxParserCall";
        static final String HEAD_MXPARSER_SYMBOL = "MxParserSymbol";
        static final String SYMBOL_PI = "Pi";
        static final String SYMBOL_EXPONENTIAL_E = "ExponentialE";
        static final String SYMBOL_TRUE = "True";
        static final String SYMBOL_FALSE = "False";
        static final String ATTRIBUTE_VALUE = "value";
        static final String ATTRIBUTE_CONSTANT = "constant";

        private static final Set<String> RESERVED = new HashSet<>(Arrays.asList(
            "AGM", "About", "Abs", "AbsArg", "Add", "AddTo", "Adjoin",
            "AdjugateMatrix", "AiryAi", "AiryAiPrime", "AiryBi", "AiryBiPrime", "AlgebraicGenerator", "All",
            "Alternatives", "And", "Angle", "Annotated", "Any", "Apart", "AppellF1",
            "Append", "Apply", "ApplyWhole", "Approx", "ApproxEqual", "ApproxNotEqual", "ArbitraryConstant",
            "ArbitraryInteger", "Arc", "Arccos", "Arccot", "Arccsc", "Arcosh", "Arcoth",
            "Arcsch", "Arcsec", "Arcsin", "Arctan", "Arctan2", "Arg", "ArgMax",
            "ArgMin", "Argument", "Arsech", "Arsinh", "Artanh", "AsHsl", "AsHsv",
            "AsOklab", "AsOklch", "AsRgb", "AssertPresent", "Assign", "Assume", "At",
            "AvogadroConstant", "BarnesG", "BaseForm", "BellNumber", "BernoulliB", "BesselI", "BesselJ",
            "BesselK", "BesselY", "Beta", "BetaRegularized", "BigO", "BinCounts", "Binomial",
            "BinomialDistribution", "Block", "BoltzmannConstant", "Boole", "Break", "BuiltinFunction", "CDF",
            "Cancel", "CanonicalForm", "CarmichaelLambda", "CartesianProduct", "CaseFold", "CatalanConstant", "CatalanNumber",
            "Ceil", "CharacterFrom", "CharacteristicPolynomial", "Characters", "ChineseRemainder", "CholeskyDecomposition", "Choose",
            "Chop", "Chunk", "ChunkBy", "CircleContour", "CircularIntegrate", "Clamp", "ClausenCl",
            "Closed", "Coalesce", "CoefficientList", "Colon", "Color", "ColorContrast", "ColorDelta",
            "ColorFromColorspace", "ColorMix", "ColorToColorspace", "ColorToString", "Colormap", "Combinations", "Complement",
            "Complex", "ComplexInfinity", "ComplexNumbers", "ComplexRoots", "Composition", "Comprehension", "Condition",
            "Conforms", "Congruent", "Conjugate", "ConjugateTranspose", "Contains", "ContainsSequence", "ContinuationPlaceholder",
            "Continue", "ContinuedFraction", "ContourIntegrate", "ContrastingColor", "Correlation", "Cos", "CosIntegral",
            "Cosh", "CoshIntegral", "Cot", "Coth", "Count", "CountIf", "Covariance",
            "Cross", "Csc", "Csch", "Cycle", "D", "DMS", "DSolve",
            "Declare", "DeclareConformance", "DeclareProtocol", "DeclareSumType", "DeclareType", "DedekindEta", "Dedup",
            "DefineFunction", "Degree", "Degrees", "DeleteAt", "Delimiter", "Denominator", "Derivative",
            "Det", "Determinant", "Diagonal", "Dictionary", "DictionaryFrom", "Differences", "Digamma",
            "DigitCount", "DigitSum", "DigitsFrom", "Dimension", "DirichletBeta", "DirichletCharacter", "DirichletEta",
            "DirichletL", "Discriminant", "Distance", "Distribute", "Divide", "Divides", "DivisorSigma",
            "Divisors", "Dot", "Drop", "DropWhile", "Eigen", "Eigenvalues", "Eigenvectors",
            "EisensteinE", "Element", "ElementMax", "ElementMin", "ElementaryCharge", "EllipticE", "EllipticF",
            "EllipticK", "EllipticPi", "EmptySet", "Enclosure", "EndsWith", "Equal", "Equivalent",
            "Erf", "ErfInv", "Erfc", "Erfi", "Error", "ErrorCode", "EulerE",
            "EulerGamma", "EulerPhi", "Eulerian", "Evaluate", "EvaluateAt", "Exists", "ExistsUnique",
            "Exp", "Exp2", "ExpIntegralEi", "Expand", "ExpandAll", "ExponentialDistribution", "ExponentialE",
            "ExtendedComplexNumbers", "ExtendedGCD", "ExtendedIntegers", "ExtendedRationalNumbers", "ExtendedRealNumbers", "Factor", "FactorInteger",
            "Factorial", "Factorial2", "False", "Fibonacci", "Field", "Fill", "Filter",
            "Find", "FindFit", "FindRoot", "First", "FixedPoint", "FlatMap", "Flatten",
            "Floor", "Fold", "ForAll", "Fract", "FresnelC", "FresnelS", "FromContinuedFraction",
            "FromDigits", "Function", "GCD", "Gamma", "GammaLn", "GammaRegularized", "GamutMap",
            "GasConstant", "GeometricVector", "GoldenRatio", "GraphemeClusters", "GravitationalConstant", "Greater", "GreaterEqual",
            "GroupBy", "HadamardProduct", "Half", "HarmonicNumber", "Haversine", "Head", "Heaviside",
            "Histogram", "Hold", "HoldValues", "Hom", "HorizontalSpacing", "Hsl", "Hsv",
            "HurwitzZeta", "Hypergeometric1F1", "Hypergeometric2F1", "Hypot", "IdenticallyEqual", "Identity", "IdentityMatrix",
            "If", "Im", "Imaginary", "ImaginaryNumbers", "ImaginaryUnit", "Implies", "Indeterminate",
            "IndexOf", "IndexWhere", "IndexedSequence", "Infimum", "Input", "Insert", "IntegerDigits",
            "IntegerPartitions", "IntegerSqrt", "IntegerString", "Integers", "Integrate", "InterpolatingFunction", "Interpret",
            "InterquartileRange", "Intersection", "Interval", "Inverse", "InverseFunction", "InverseHaversine", "InvisibleOperator",
            "IsAbundant", "IsCenteredSquare", "IsCompatibleUnit", "IsComposite", "IsDiagonal", "IsEmpty", "IsError",
            "IsEven", "IsHappy", "IsMatch", "IsMissing", "IsOctahedral", "IsOdd", "IsPerfect",
            "IsPerfectPower", "IsPrime", "IsSame", "IsSatisfiable", "IsSquare", "IsSquareFree", "IsSquareMatrix",
            "IsSymmetric", "IsTautology", "IsTriangular", "Iterate", "JacobiSymbol", "JacobiTheta", "JacobianMatrix",
            "Join", "Julia", "Kernel", "KeyValuePair", "Keys", "KroneckerDelta", "Kurtosis",
            "LCM", "LUDecomposition", "LambertW", "Last", "Latex", "LatexString", "Lb",
            "LegendreSymbol", "Length", "LerchPhi", "Less", "LessEqual", "Lg", "Limit",
            "Limits", "LinearRegression", "LinearSolve", "Linspace", "List", "ListFrom", "ListJoin",
            "Ln", "Log", "Log10", "Log2", "LogBarnesG", "LogGamma", "LogIntegral",
            "Loop", "Lucas", "LucasL", "MachineEpsilon", "Mandelbrot", "Map", "Match",
            "MatchCase", "MatchesType", "Matrix", "MatrixMultiply", "MatrixPower", "MatrixRank", "Max",
            "MaxBy", "Mean", "Measurement", "Median", "MemberCall", "Min", "MinBy",
            "MinimalCNF", "MinimalDNF", "Missing", "Mod", "Mode", "ModularInverse", "Module",
            "MoebiusMu", "Most", "Mu0", "Multinomial", "MultiplicativeOrder", "Multiply", "N",
            "ND", "NDSolve", "NDSolveFunction", "NIntegrate", "NLimit", "NPartition", "NSolve",
            "NaN", "NamedArgument", "Nand", "Negate", "NegativeInfinity", "NegativeIntegers", "NegativeNumbers",
            "NextPrime", "NonNegativeIntegers", "NonNegativeNumbers", "NonPositiveIntegers", "NonPositiveNumbers", "Nor", "Norm",
            "Normal", "NormalDistribution", "Not", "NotApprox", "NotApproxEqual", "NotApproxNotEqual", "NotDivides",
            "NotElement", "NotEqual", "NotExists", "NotForAll", "NotGreater", "NotGreaterNotEqual", "NotLess",
            "NotLessNotEqual", "NotPrecedes", "NotSubset", "NotSucceeds", "NotSuperset", "NotSupersetEqual", "NotTilde",
            "NotTildeEqual", "NotTildeFullEqual", "Nothing", "NthPrime", "NumberFrom", "Numbers", "Numerator",
            "NumeratorDenominator", "NumericApproximation", "Object", "Oklab", "Oklch", "Ones", "OnesMatrix",
            "Open", "Optional", "Or", "Ordering", "OverParen", "PDF", "PadEnd",
            "PadStart", "Pair", "Parallel", "ParallelComprehension", "ParallelDomain", "ParallelLoop", "Parse",
            "PartialFraction", "Partition", "PartitionsP", "PartitionsQ", "Permutations", "Perpendicular", "Pi",
            "Pin", "Pipe", "PlanckConstant", "PlusMinus", "Pochhammer", "PointList", "PointX",
            "PointY", "PointZ", "PoissonDistribution", "PolyGamma", "PolyLog", "Polygon", "PolygonContour",
            "Polynomial", "PolynomialDegree", "PolynomialFit", "PolynomialGCD", "PolynomialQuotient", "PolynomialRemainder", "PolynomialRoots",
            "PopulationCovariance", "PopulationStandardDeviation", "PopulationVariance", "Position", "PositiveInfinity", "PositiveIntegers", "PositiveNumbers",
            "Power", "PowerMod", "PowerModList", "PowerSet", "PreDecrement", "PreIncrement", "Precedes",
            "Predicate", "Prime", "PrimeFactors", "PrimeImplicants", "PrimeImplicates", "PrimeNu", "PrimeNumber",
            "PrimeOmega", "PrimePi", "Primes", "PrimitiveRoot", "PrimitiveRootList", "Print", "Product",
            "ProtocolMember", "ProtocolProperty", "PseudoInverse", "QRDecomposition", "Quadrilateral", "Quantile", "Quantity",
            "QuantityMagnitude", "QuantityUnit", "Quartiles", "QuotientRing", "RSolve", "Radical", "Random",
            "RandomChoice", "RandomExpression", "RandomPrime", "RandomSample", "RandomShuffle", "Range", "RangeOf",
            "Rank", "Rational", "RationalNumbers", "RationalReconstruction", "Rationalize", "Re", "Real",
            "RealLineContour", "RealNumbers", "RectangleContour", "Reduce", "RegExp", "ReleaseHold", "Remainder",
            "Repeat", "ReplaceAll", "ReplaceAt", "Reshape", "Residue", "ResidueClass", "Rest",
            "Resultant", "Reverse", "Rgb", "Root", "RotateLeft", "RotateRight", "Round",
            "RowReduce", "Rule", "RuntimeError", "SVD", "Same", "Scan", "Sec",
            "Sech", "Second", "Segment", "Sequence", "Series", "Set", "SetFrom",
            "SetMinus", "Shape", "Sigma0", "Sigma1", "SigmaMinus1", "Sign", "Signature",
            "Simplify", "Sin", "SinIntegral", "Sinc", "Single", "SingularValues", "Sinh",
            "SinhIntegral", "Skewness", "Slice", "SlidingWindow", "Smoothstep", "Solve", "Sort",
            "SpeedOfLight", "Sphere", "Spread", "Sqrt", "Square", "StandardDeviation", "StandardGravity",
            "StartsWith", "StefanBoltzmannConstant", "StieltjesGamma", "Stirling", "StirlingS1", "StirlingS2", "String",
            "StringCompare", "StringFrom", "StringJoin", "StringMatch", "StringMatchAll", "StringRepeat", "StringReplace",
            "StringSplit", "Subfactorial", "Subscript", "Subset", "SubsetEqual", "Subtract", "Subtype",
            "Succeeds", "Sum", "Superset", "SupersetEqual", "Supremum", "Symbol", "SymmetricDifference",
            "Table", "Tabulate", "Tail", "Take", "TakeWhile", "Tally", "Tan",
            "Tanh", "Text", "Third", "Tilde", "TildeEqual", "TildeFullEqual", "Timing",
            "To", "ToCNF", "ToDNF", "ToLowerCase", "ToUpperCase", "Together", "Totient",
            "Trace", "Transpose", "Triangle", "TrigExpand", "TrigReduce", "TrigToExp", "Trigamma",
            "Trim", "TrimEnd", "TrimStart", "Triple", "True", "Truncate", "TruthTable",
            "Tuple", "TupleFrom", "Type", "TypeFrom", "Typed", "Unevaluated", "UnicodeScalars",
            "UniformDistribution", "Union", "Unique", "UnitConvert", "UnitDimension", "UnitSimplify", "Utf16",
            "Utf8", "VacuumPermittivity", "Values", "Variance", "Vector", "Which", "Wildcard",
            "WildcardOptionalSequence", "WildcardSequence", "WithRandomSeed", "Xor", "ZeroMatrix", "Zeros", "Zeta",
            "Zip", "distribution", "e", "i", "limits"
        ));

        static boolean reserved(String name) { return RESERVED.contains(name); }

        static void checkLocalSymbol(String name, Codec.Value at) {
            if (name.equals(SYMBOL_PI) || name.equals(SYMBOL_EXPONENTIAL_E) || name.equals(SYMBOL_TRUE)
                    || name.equals(SYMBOL_FALSE) || specialNumber(name))
                throw error(NAME_COLLISION, at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
        }

        static boolean structure(String name) {
            switch (name) {
                case HEAD_BLOCK: case HEAD_DECLARE: case HEAD_DEFINE_FUNCTION: case HEAD_FUNCTION:
                case HEAD_DICTIONARY: case HEAD_KEY_VALUE_PAIR: case HEAD_LIMITS: case HEAD_RANGE:
                case HEAD_ERROR: case "ErrorCode": case "List": case HEAD_TUPLE: case "Element":
                case "Apply": case "Program": case "Hold": case "Integral": case "Derivative":
                    return true;
                default: return false;
            }
        }

        private Vocabulary() {}
    }

    static final class Exchange {
        private static final int MAX_DEFINITIONS = 1024;
        private static final int MAX_REFERENCES = 16384;
        private static final ImportOptions STRICT = ImportOptions.defaults();

        static Result<String> exportExpression(Expression expression) {
            return exportModel(requireExpression(expression), false);
        }

        static Result<String> exportProgram(Expression expression) {
            return exportModel(requireExpression(expression), true);
        }

        static Result<Expression> importExpression(
                String json, ImportOptions options, PrimitiveElement... definitions) {
            Import operation = new Import(json, options, definitions, false);
            Expression result = operation.expression();
            operation.publish();
            operation.diagnostics.sort(Comparator.comparingInt(Diagnostic::getOffset));
            return new Result<>(result, null, operation.diagnostics);
        }

        static Result<PrimitiveElement> importDefinition(String json, PrimitiveElement... definitions) {
            Import operation = new Import(json, STRICT, definitions, true);
            PrimitiveElement result = operation.definition(operation.root, operation.visible, true);
            operation.publish();
            operation.diagnostics.sort(Comparator.comparingInt(Diagnostic::getOffset));
            return new Result<>(result, null, operation.diagnostics);
        }

        static Result<String> exportDefinition(PrimitiveElement definition) {
            requireDefinition(definition);
            Analysis analysis = new Analysis(new Codec.Budget());
            FunctionBody body = definition instanceof Function ? analysis.function((Function) definition, 0, false) : null;
            String json = write(declaration(definition, body), analysis.budget);
            return new Result<>(json, null, analysis.diagnostics);
        }

        private static Result<String> exportModel(Expression expression, boolean program) {
            Analysis analysis = new Analysis(new Codec.Budget());
            Plan plan = analysis.plan(expression, !program);
            Node result = plan.validate(Tokens.read(expression, analysis.budget));
            Node output = result;
            if (program) {
                for (PrimitiveElement dependency : plan.used) analysis.reference(dependency, 0);
                List<Node> declarations = new ArrayList<>();
                Set<String> names = new LinkedHashSet<>();
                for (PrimitiveElement element : analysis.order) {
                    String name = definitionName(element);
                    if (!names.add(name)) throw error(NAME_COLLISION, null, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
                    declarations.add(declaration(element, analysis.bodies.get(element)));
                }
                declarations.add(result);
                output = call(HEAD_BLOCK, null, declarations);
            }
            return new Result<>(write(output, analysis.budget), null, analysis.diagnostics);
        }

        private static Expression requireExpression(Expression expression) {
            if (expression == null || expression.getClass() != Expression.class)
                throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
            return expression;
        }

        private static void requireReference(PrimitiveElement definition, boolean allowSubclassReferences) {
            if (definition instanceof RecursiveArgument || !allowSubclassReferences && !isBaseDefinition(definition))
                throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
        }

        private static boolean isBaseDefinition(PrimitiveElement definition) {
            Class<?> type = definition.getClass();
            return type == Argument.class || type == Function.class || type == Constant.class;
        }

        private static boolean declarableValue(PrimitiveElement element) {
            if (!isBaseDefinition(element)) return false;
            if (element instanceof Argument) {
                Argument argument = (Argument) element;
                return argument.argumentType == Argument.FREE_ARGUMENT && argument.getArgumentBodyType() == Argument.BODY_RUNTIME;
            }
            if (element instanceof Function) {
                Function function = (Function) element;
                return !function.isVariadic && function.getFunctionBodyType() == Function.BODY_RUNTIME;
            }
            return true;
        }

        private static void requireDefinition(PrimitiveElement definition) {
            if (definition == null) throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
            Class<?> type = definition.getClass();
            if (type == Argument.class) {
                Argument argument = (Argument) definition;
                if (argument.argumentType == Argument.FREE_ARGUMENT && argument.getArgumentBodyType() == Argument.BODY_RUNTIME)
                    return;
            } else if (type == Constant.class) {
                return;
            } else if (type == Function.class) {
                Function function = (Function) definition;
                if (!function.isVariadic && function.getFunctionBodyType() == Function.BODY_RUNTIME
                        && function.getParametersNumber() >= 1) return;
            } else if (!(definition instanceof Argument || definition instanceof Constant || definition instanceof Function))
                throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
            throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
        }

        private static String definitionName(PrimitiveElement definition) {
            if (definition instanceof Argument) return ((Argument) definition).getArgumentName();
            if (definition instanceof Constant) return ((Constant) definition).getConstantName();
            if (definition instanceof Function) return ((Function) definition).getFunctionName();
            throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
        }

        private static Set<String> builtins(boolean udf, boolean unicode) {
            Expression dictionary = new Expression(EMPTY);
            dictionary.UDFExpression = udf;
            if (unicode) dictionary.enableUnicodeBuiltinKeyWordsMode();
            else dictionary.disableUnicodeBuiltinKeyWordsMode();
            Set<String> names = new LinkedHashSet<>();
            for (KeyWord word : dictionary.getKeyWords()) names.add(word.wordString);
            return names;
        }

        private static void checkAvailableName(String name, Codec.Value at, Set<String> builtins) {
            Codec.Input.checkName(name, at);
            if (builtins.contains(name) && !mXparser.checkIfsetToOverrideBuiltinTokens())
                throw error(NAME_COLLISION, at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
        }

        private static void addVisible(Map<String, PrimitiveElement> visible, PrimitiveElement element) {
            String name = definitionName(element);
            PrimitiveElement previous = visible.put(name, element);
            if (previous != null && previous != element)
                throw error(NAME_COLLISION, null, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
        }

        private static Map<String, PrimitiveElement> context(Expression expression, Map<String, Argument> parameters) {
            Map<String, PrimitiveElement> visible = new LinkedHashMap<>();
            for (Argument argument : expression.argumentsList) {
                if (!parameters.containsValue(argument)) addVisible(visible, argument);
            }
            for (Constant constant : expression.constantsList) addVisible(visible, constant);
            for (Function function : expression.functionsList) addVisible(visible, function);
            return visible;
        }

        private static Map<String, Argument> formalParameters(Function function, Set<String> names) {
            int arity = function.getParametersNumber();
            if (arity > MAX_DEFINITIONS || arity > function.functionExpression.argumentsList.size())
                throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
            Map<String, Argument> result = new LinkedHashMap<>();
            for (int i = 0; i < arity; i++) {
                Argument argument = function.functionExpression.argumentsList.get(i);
                requireDefinition(argument);
                String name = argument.getArgumentName();
                checkAvailableName(name, null, names);
                Vocabulary.checkLocalSymbol(name, null);
                if (result.put(name, argument) != null)
                    throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
            }
            return result;
        }

        private static final class FunctionBody {
            final Node root;
            final Map<String, Argument> parameters;

            FunctionBody(Node root, Map<String, Argument> parameters) {
                this.root = root;
                this.parameters = parameters;
            }
        }

        private static final class Analysis {
            final Codec.Budget budget;
            final List<Diagnostic> diagnostics = new ArrayList<>();
            final IdentityHashMap<Function, FunctionBody> bodies = new IdentityHashMap<>();
            final IdentityHashMap<PrimitiveElement, Boolean> visiting = new IdentityHashMap<>();
            final IdentityHashMap<PrimitiveElement, Boolean> done = new IdentityHashMap<>();
            final IdentityHashMap<Argument, Function> parameterOwners = new IdentityHashMap<>();
            final List<PrimitiveElement> order = new ArrayList<>();
            int refs;

            Analysis(Codec.Budget budget) {
                this.budget = budget;
            }

            Plan plan(Expression expression, boolean open) {
                Map<String, Argument> parameters = Collections.emptyMap();
                Map<String, PrimitiveElement> visible = context(expression, parameters);
                return new Plan(visible, parameters,
                        builtins(expression.UDFExpression, expression.checkIfUnicodeBuiltinKeyWordsMode()),
                        open, open, true, STRICT, diagnostics, budget);
            }

            void reference(PrimitiveElement element, int depth) {
                if (++refs > MAX_REFERENCES)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_REFERENCES));
                if (depth >= Codec.MAX_DEPTH)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                requireDefinition(element);
                if (element instanceof Argument && parameterOwners.containsKey(element))
                    throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                if (done.containsKey(element)) return;
                if (element instanceof Function) {
                    function((Function) element, depth, true);
                    return;
                }
                finish(element);
            }

            FunctionBody function(Function function, int depth, boolean includeDependencies) {
                if (visiting.put(function, Boolean.TRUE) != null)
                    throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                Expression source = function.functionExpression;
                Set<String> keywords = builtins(true, source.checkIfUnicodeBuiltinKeyWordsMode());
                checkAvailableName(function.getFunctionName(), null, keywords);
                Map<String, Argument> parameters = formalParameters(function, keywords);
                Map<String, PrimitiveElement> visible = context(source, parameters);
                if (visible.get(function.getFunctionName()) != function)
                    visible.put(function.getFunctionName(), function);
                for (Argument param : parameters.values()) {
                    Function previous = parameterOwners.put(param, function);
                    if (done.containsKey(param) || previous != null && previous != function
                            || visible.containsKey(param.getArgumentName()))
                        throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                }
                Plan plan = new Plan(visible, parameters, keywords, false, false, true,
                        STRICT, diagnostics, budget);
                Node root = plan.validate(Tokens.read(source, budget));
                checkRecursion(function, root, plan);
                FunctionBody body = new FunctionBody(root, parameters);
                if (!includeDependencies) {
                    for (PrimitiveElement dependency : plan.used)
                        if (dependency != function) externalWarning(diagnostics, null, definitionName(dependency));
                    return body;
                }
                for (PrimitiveElement dependency : plan.used)
                    if (dependency != function) reference(dependency, depth + 1);
                bodies.put(function, body);
                visiting.remove(function);
                finish(function);
                return body;
            }

            private void finish(PrimitiveElement element) {
                if (order.size() >= MAX_DEFINITIONS)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                done.put(element, Boolean.TRUE);
                order.add(element);
            }
        }

        private static void checkRecursion(Function function, Node body, Plan plan) {
            if (!plan.usedSet.contains(function)) return;
            Node call = recursiveCallInDetachedExpression(function, body, false);
            if (call != null)
                throw error(UNSUPPORTED_PROGRAM, call.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
        }

        /* If predicates and iterative operators evaluate in expressions with a fresh recursion counter. */
        private static Node recursiveCallInDetachedExpression(Function function, Node node, boolean detached) {
            if (node.kind != Kind.CALL) return null;
            if (detached && node.binding == function) return node;
            Operation op = node.userCall ? null : operation(node.name);
            for (int i = 0; i < node.children.size(); i++) {
                boolean childDetached = detached || op != null && (op.iterator() || op == Operation.IF && i == 0);
                Node call = recursiveCallInDetachedExpression(function, node.arg(i), childDetached);
                if (call != null) return call;
            }
            return null;
        }

        private static Node declaration(PrimitiveElement element, FunctionBody body) {
            String name = definitionName(element);
            checkAvailableName(name, null, builtins(body != null, true));
            Node id = atom(Kind.SYMBOL, name, null);
            if (body != null) {
                List<Node> operands = new ArrayList<>();
                operands.add(body.root);
                for (String parameter : body.parameters.keySet()) operands.add(atom(Kind.SYMBOL, parameter, null));
                return call(HEAD_DEFINE_FUNCTION, null, id, call(HEAD_FUNCTION, null, operands));
            }
            double value;
            if (element instanceof Constant) value = ((Constant) element).getConstantValue();
            else {
                Argument argument = (Argument) element;
                value = argument.syntaxStatusDefinition ? argument.argumentValue : Double.NaN;
            }
            if (!Double.isFinite(value)) throw error(UNSUPPORTED_NUMBER, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            Node pair = call(HEAD_KEY_VALUE_PAIR, null, atom(Kind.SYMBOL, ATTRIBUTE_VALUE, null), number(value, null));
            Node dictionary = element instanceof Constant
                    ? call(HEAD_DICTIONARY, null, pair, call(HEAD_KEY_VALUE_PAIR, null, atom(Kind.SYMBOL, ATTRIBUTE_CONSTANT, null),
                    atom(Kind.SYMBOL, SYMBOL_TRUE, null)))
                    : call(HEAD_DICTIONARY, null, pair);
            return call(HEAD_DECLARE, null, id, dictionary);
        }

        private static final class Edge {
            final Expression body;
            final PrimitiveElement definition;

            Edge(Expression body, PrimitiveElement definition) {
                this.body = body;
                this.definition = definition;
            }

            void registerObserver() {
                if (definition instanceof Argument) ((Argument) definition).addRelatedExpression(body);
                else if (definition instanceof Constant) ((Constant) definition).addRelatedExpression(body);
                else ((Function) definition).addRelatedExpression(body);
            }

            void rollback() {
                if (definition instanceof Argument) ((Argument) definition).removeRelatedExpression(body);
                else if (definition instanceof Constant) ((Constant) definition).removeRelatedExpression(body);
                else ((Function) definition).removeRelatedExpression(body);
            }
        }

        private static final class Import {
            final Codec.Budget budget = new Codec.Budget();
            final List<Diagnostic> diagnostics = new ArrayList<>();
            final Map<String, PrimitiveElement> visible = new LinkedHashMap<>();
            final Set<String> rootBuiltins = builtins(false, true);
            final Set<String> udfBuiltins = builtins(true, true);
            final Map<PrimitiveElement, PrimitiveElement> shadows = new IdentityHashMap<>();
            final List<Edge> edges = new ArrayList<>();
            final ImportOptions options;
            final Node root;

            Import(String json, ImportOptions options, PrimitiveElement[] definitions, boolean definitionOnly) {
                if (options == null || definitions == null)
                    throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
                if (definitions.length > MAX_DEFINITIONS)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                this.options = options;
                root = new Codec.Input(budget).read(json);
                if (root.call(HEAD_ERROR)) throw error("INPUT_ERROR", root.at, STRING_RESOURCES.MATHJSON_INPUT_ERROR_NODE);
                checkRoot(root, definitionOnly);
                for (PrimitiveElement definition : definitions) {
                    if (!(definition instanceof Argument || definition instanceof Constant || definition instanceof Function)) continue;
                    String name = definitionName(definition);
                    if (!visible.containsKey(name)) visible.put(name, definition);
                    // A null entry marks an ambiguous name until it is referenced.
                    else if (visible.get(name) != definition) visible.put(name, null);
                }
            }

            Expression expression() {
                boolean block = root.call(HEAD_BLOCK);
                Node formula = root;
                List<PrimitiveElement> declared = new ArrayList<>();
                if (block) {
                    if (visible.size() + root.children.size() - 1 > MAX_DEFINITIONS)
                        throw error(RESOURCE_LIMIT, root.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                    for (int i = 0; i + 1 < root.children.size(); i++) {
                        PrimitiveElement element = definition(root.arg(i), visible, false);
                        visible.put(definitionName(element), element);
                        declared.add(element);
                    }
                    formula = root.arg(root.children.size() - 1);
                }
                Plan plan = new Plan(visible, Collections.emptyMap(), rootBuiltins, !block, !block, false,
                        options, diagnostics, budget);
                Node canonical = plan.validate(formula);
                Expression result = configured(new Expression(EMPTY));
                Expression control = configured(new Expression(EMPTY));
                List<PrimitiveElement> bindings = new ArrayList<>(declared);
                Set<PrimitiveElement> seen = Collections.newSetFromMap(new IdentityHashMap<>());
                seen.addAll(declared);
                for (PrimitiveElement element : plan.used)
                    if (seen.add(element)) bindings.add(element);
                for (PrimitiveElement element : bindings) {
                    plan.checkIteratorBinding(element);
                    connect(result, element);
                    add(control, shadow(element));
                }
                String text = emitChecked(canonical, control, plan.hasOpenReferences());
                result.setExpressionString(text);
                return result;
            }

            PrimitiveElement definition(Node node, Map<String, PrimitiveElement> environment, boolean allowOpen) {
                checkRoot(node, true);
                Codec.Input.checkArity(node, 2);
                Node id = node.arg(0);
                if (id.kind != Kind.SYMBOL) throw error(INVALID_SHAPE, id.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                checkAvailableName(id.name, id.at, node.call(HEAD_DEFINE_FUNCTION) ? udfBuiltins : rootBuiltins);
                if (environment.containsKey(id.name)) throw error(NAME_COLLISION, id.at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
                if (node.call(HEAD_DEFINE_FUNCTION)) return functionDefinition(id.name, node.arg(1), environment, allowOpen);
                return scalarDefinition(id.name, node.arg(1));
            }

            private PrimitiveElement scalarDefinition(String name, Node dictionary) {
                if (!dictionary.call(HEAD_DICTIONARY))
                    throw error(INVALID_SHAPE, dictionary.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                Node value = null;
                Node constant = null;
                for (Node pair : dictionary.children) {
                    if ((!pair.call(HEAD_KEY_VALUE_PAIR) && !pair.call(HEAD_TUPLE)) || pair.children.size() != 2)
                        throw error(INVALID_SHAPE, pair.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    Node key = pair.arg(0), entry = pair.arg(1);
                    if (key.kind != Kind.STRING && key.kind != Kind.SYMBOL)
                        throw error(INVALID_SHAPE, key.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    if (key.name.equals(ATTRIBUTE_VALUE) && value == null && entry.kind == Kind.NUMBER) value = entry;
                    else if (key.name.equals(ATTRIBUTE_CONSTANT) && constant == null
                            && (entry.symbol(SYMBOL_TRUE) || entry.symbol(SYMBOL_FALSE))) constant = entry;
                    else throw error(INVALID_SHAPE, pair.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                }
                if (value == null) throw error(INVALID_SHAPE, dictionary.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                value = resolveNumber(value, budget, false);
                return constant != null && constant.symbol(SYMBOL_TRUE) ? new Constant(name, value.number) : new Argument(name, value.number);
            }

            private Function functionDefinition(String name, Node node, Map<String, PrimitiveElement> environment,
                                                boolean allowOpen) {
                if (!node.call(HEAD_FUNCTION) || node.children.size() < 2)
                    throw error(INVALID_SHAPE, node.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                if (node.children.size() > MAX_DEFINITIONS + 1)
                    throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                Set<String> names = new LinkedHashSet<>();
                for (int i = 1; i < node.children.size(); i++) {
                    Node formal = node.arg(i);
                    if (formal.kind != Kind.SYMBOL) throw error(INVALID_SHAPE, formal.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    checkAvailableName(formal.name, formal.at, udfBuiltins);
                    Vocabulary.checkLocalSymbol(formal.name, formal.at);
                    if (formal.name.equals(name) || !names.add(formal.name))
                        throw error(NAME_COLLISION, formal.at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
                }
                String[] formalNames = names.toArray(new String[0]);
                Function result = new Function(name, "0", formalNames);
                Map<String, PrimitiveElement> scope = new LinkedHashMap<>(environment);
                scope.put(name, result);
                Map<String, Argument> parameters = new LinkedHashMap<>();
                for (int i = 0; i < formalNames.length; i++)
                    parameters.put(formalNames[i], result.functionExpression.argumentsList.get(i));
                Plan plan = new Plan(scope, parameters, udfBuiltins,
                        allowOpen, false, false, options, diagnostics, budget);
                Node body = plan.validate(node.arg(0));
                checkRecursion(result, body, plan);
                Expression actual = configured(result.functionExpression);
                Function staged = new Function(name, "0", formalNames);
                Expression control = configured(staged.functionExpression);
                shadows.put(result, staged);
                for (int i = 0; i < formalNames.length; i++)
                    shadows.put(actual.argumentsList.get(i), control.argumentsList.get(i));
                plan.checkIteratorBinding(result);
                for (PrimitiveElement element : plan.used) {
                    if (element != result) {
                        plan.checkIteratorBinding(element);
                        connect(actual, element);
                        add(control, shadow(element));
                    }
                }
                actual.setExpressionString(emitChecked(body, control, plan.hasOpenReferences()));
                return result;
            }

            private PrimitiveElement shadow(PrimitiveElement element) {
                PrimitiveElement cached = shadows.get(element);
                if (cached != null) return cached;
                PrimitiveElement copy;
                if (element instanceof Function) {
                    Function function = (Function) element;
                    if (function.isVariadic) copy = new Function(function.getFunctionName() + "(...)=0");
                    else {
                        // The control function is syntax-checked, never evaluated.
                        Function control = new Function(function.getFunctionName(), "0", new String[0]);
                        control.setParametersNumber(function.getParametersNumber());
                        copy = control;
                    }
                } else if (element instanceof Constant) copy = new Constant(definitionName(element), 0);
                else copy = new Argument(definitionName(element), 0);
                shadows.put(element, copy);
                return copy;
            }

            private String emitChecked(Node plan, Expression control, boolean open) {
                Map<String, KeyWord> keywords = new LinkedHashMap<>();
                for (KeyWord keyword : control.getKeyWords()) keywords.putIfAbsent(keyword.wordString, keyword);
                bindSpellings(plan, keywords);
                String text = Plan.emit(plan, budget);
                control.setExpressionString(text);
                Node parsed;
                try {
                    parsed = Tokens.read(control, budget);
                } catch (ConversionFailure ex) {
                    if (ex.diagnostic.getCode().equals(RESOURCE_LIMIT)) throw ex;
                    throw error(EMISSION_MISMATCH, plan.at, STRING_RESOURCES.MATHJSON_EMISSION_MISMATCH);
                }
                if (!Plan.same(plan, parsed, shadows))
                    throw error(EMISSION_MISMATCH, plan.at, STRING_RESOURCES.MATHJSON_EMISSION_MISMATCH);
                if (!open && !control.checkSyntax())
                    throw error(EMISSION_MISMATCH, plan.at, control.getErrorMessage());
                return text;
            }

            private void bindSpellings(Node node, Map<String, KeyWord> keywords) {
                Operation op = node.kind == Kind.CALL && !node.userCall ? operation(node.name) : null;
                if (op == Operation.NEGATE) op = Operation.SUBTRACT;
                if (op != null) node.spelling = spelling(node, keywords, op.source, op.type, op.id);
                if (node.builtin && node.symbol(SYMBOL_PI))
                    node.spelling = spelling(node, keywords, ConstantValue.PI_STR, ConstantValue.TYPE_ID, ConstantValue.PI_ID);
                if (node.builtin && node.symbol(SYMBOL_EXPONENTIAL_E))
                    node.spelling = spelling(node, keywords, ConstantValue.EULER_STR, ConstantValue.TYPE_ID, ConstantValue.EULER_ID);
                if (node.builtin && node.symbol(SYMBOL_TRUE))
                    node.spelling = spelling(node, keywords, ConstantValue.TRUE_STR, ConstantValue.TYPE_ID, ConstantValue.TRUE_ID);
                if (node.builtin && node.symbol(SYMBOL_FALSE))
                    node.spelling = spelling(node, keywords, ConstantValue.FALSE_STR, ConstantValue.TYPE_ID, ConstantValue.FALSE_ID);
                for (Node child : node.children) bindSpellings(child, keywords);
            }

            private String spelling(Node at, Map<String, KeyWord> keywords, String source, int type, int id) {
                KeyWord keyword = keywords.get(source);
                if (keyword != null && keyword.wordTypeId == type && keyword.wordId == id) return source;
                if (type != Operator.TYPE_ID && type != BinaryRelation.TYPE_ID) {
                    String namePattern = type == ConstantValue.TYPE_ID
                            ? ParserSymbol.nameOnlyTokenOptBracketsRegExp : ParserSymbol.nameOnlyTokenRegExp;
                    for (KeyWord alias : keywords.values())
                        if (alias.wordTypeId == type && alias.wordId == id && alias.wordString.matches(namePattern))
                            return alias.wordString;
                }
                throw error("BUILTIN_UNAVAILABLE", at.at, formatMessage(STRING_RESOURCES.MATHJSON_BUILTIN_SPELLING_UNAVAILABLE, source));
            }

            private void connect(Expression expression, PrimitiveElement element) {
                if (edges.size() >= MAX_REFERENCES)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_REFERENCES));
                add(expression, element);
                edges.add(new Edge(expression, element));
            }

            void publish() {
                int registered = 0;
                try {
                    for (Edge edge : edges) {
                        edge.registerObserver();
                        registered++;
                    }
                } catch (RuntimeException e) {
                    for (int i = registered - 1; i >= 0; i--) edges.get(i).rollback();
                    throw e;
                }
            }
        }

        private static void checkRoot(Node node, boolean definitionOnly) {
            if (!definitionOnly && node.call(HEAD_BLOCK) && !node.children.isEmpty())
                node = node.arg(node.children.size() - 1);
            boolean declaration = node.call(HEAD_DECLARE) || node.call(HEAD_DEFINE_FUNCTION);
            if (declaration != definitionOnly || node.call(HEAD_BLOCK))
                throw error(INVALID_ROOT, node.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
        }

        private static Expression configured(Expression expression) {
            expression.disableImpliedMultiplicationMode();
            expression.disableAttemptToFixExpStrMode();
            expression.enableUnicodeBuiltinKeyWordsMode();
            return expression;
        }

        private static void add(Expression expression, PrimitiveElement element) {
            if (element instanceof Argument) expression.argumentsList.add((Argument) element);
            else if (element instanceof Constant) expression.constantsList.add((Constant) element);
            else expression.functionsList.add((Function) element);
        }

        private Exchange() {}
    }

    private MathJSONUtils() {}
}
