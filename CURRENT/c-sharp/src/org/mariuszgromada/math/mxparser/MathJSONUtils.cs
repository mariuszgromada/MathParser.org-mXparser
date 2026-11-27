/*
 * @(#)MathJSONUtils.cs     6.2.0    2026-11-23
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

using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Globalization;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Text.RegularExpressions;
using org.mariuszgromada.math.mxparser.mathcollection;
using org.mariuszgromada.math.mxparser.parsertokens;
using static org.mariuszgromada.math.mxparser.MathJSON;
using static org.mariuszgromada.math.mxparser.MathJSONUtils.Codec;
using static org.mariuszgromada.math.mxparser.MathJSONUtils.Tree;
using Kind = org.mariuszgromada.math.mxparser.MathJSONUtils.Tree.Kind;
using static org.mariuszgromada.math.mxparser.MathJSONUtils.Vocabulary;
using static org.mariuszgromada.math.mxparser.StringInvariant;
using static org.mariuszgromada.math.mxparser.StringModel;

namespace org.mariuszgromada.math.mxparser {

/** Internal components of the MathJSON exchange codec. */
internal sealed class MathJSONUtils {
    private static readonly String RESOURCE_LIMIT = "RESOURCE_LIMIT";
    private static readonly String UNSUPPORTED_NUMBER = "UNSUPPORTED_NUMBER";
    private static readonly String INVALID_SHAPE = "INVALID_SHAPE";
    private static readonly String UNSUPPORTED_PROGRAM = "UNSUPPORTED_PROGRAM";
    private static readonly String NAME_COLLISION = "NAME_COLLISION";
    private static readonly String UNSUPPORTED_NODE = "UNSUPPORTED_NODE";
    private static readonly String INVALID_ARGUMENT = "INVALID_ARGUMENT";
    private static readonly String UNSUPPORTED_BINDING = "UNSUPPORTED_BINDING";
    private static readonly String EMISSION_MISMATCH = "EMISSION_MISMATCH";
    private static readonly String INVALID_ARITY = "INVALID_ARITY";
    private static readonly String INVALID_ROOT = "INVALID_ROOT";
    private static readonly String UNRESOLVED_FUNCTION = "UNRESOLVED_FUNCTION";
    private static readonly String UNSUPPORTED_DOMAIN = "UNSUPPORTED_DOMAIN";
    private const String EXTERNAL_DEFINITION = "EXTERNAL_DEFINITION";
    private const String MXPARSER_EXTENSION = "MXPARSER_EXTENSION";
    private static readonly int NO_OFFSET = -1;

    private static String formatMessage(String format, Object value) {
        return format == null ? EMPTY : format.Replace("{0}", Convert.ToString(value, CultureInfo.InvariantCulture));
    }
    internal sealed class ConversionFailure : Exception {
        
        internal readonly Diagnostic diagnostic;

        internal ConversionFailure(String code, String path, int offset, String message) : base(message) {
            diagnostic = new Diagnostic(code, path, offset, message);
        }
    }

    internal static class Codec {
        internal static readonly int MAX_TEXT = 16 * 1024 * 1024;
        internal static readonly int MAX_DEPTH = 256;
        internal static readonly int MAX_VALUES = 250000;
        internal static readonly int MAX_SOURCE = 100000;
        internal static readonly int MAX_NAME = 256;
        internal static readonly int MAX_NUMBER = 1024;
        internal static readonly long MAX_WORK = 50000000;
        internal static readonly long MAX_BUFFER = 128L * 1024 * 1024;

        internal sealed class Budget {
            private long workDone;
            private long buffer;

            internal void work(long count, Value at) {
                workDone += count;
                if (workDone > MAX_WORK) throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_WORK));
            }

            internal void allocate(long count, Value at) {
                buffer += count;
                if (buffer > MAX_BUFFER) throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_BUFFER));
            }
        }

        internal const String FIELD_NUMBER = "num";
        internal const String FIELD_SYMBOL = "sym";
        internal const String FIELD_STRING = "str";
        private const String FIELD_FUNCTION = "fn";
        private const String FIELD_DICTIONARY = "dict";
        private static readonly String[] DISCRIMINATORS = {
                FIELD_NUMBER, FIELD_SYMBOL, FIELD_STRING, FIELD_FUNCTION, FIELD_DICTIONARY
        };

        internal enum Kind { NUMBER, STRING, ARRAY, OBJECT, BOOLEAN, NULL }

        internal sealed class Value {
            internal readonly Kind kind;
            internal readonly String path;
            internal readonly int offset;
            internal String text;
            internal List<Value> array;
            internal OrderedDictionary members;

            internal Value(Kind kind, String path, int offset) {
                this.kind = kind;
                this.path = path;
                this.offset = offset;
            }
        }

        internal static ConversionFailure error(String code, Value value, String message) {
            return value == null ? new ConversionFailure(code, EMPTY, NO_OFFSET, message)
                    : new ConversionFailure(code, value.path, value.offset, message);
        }

        internal static String errorJson(Diagnostic error) {
            Node payload = call("ErrorCode", null,
                    atom(Tree.Kind.STRING, "mxparser:" + error.getCode(), null),
                    atom(Tree.Kind.STRING, errorMessage(error.getMessage()), null),
                    atom(Tree.Kind.STRING, error.getPath(), null),
                    number(error.getOffset(), null));
            return write(call(HEAD_ERROR, null, payload), new Budget());
        }

        private static String errorMessage(String message) {
            const int limit = 1024;
            StringBuilder text = new StringBuilder(Math.Min(message.Length, limit));
            int position = 0;
            while (position < message.Length) {
                int codePoint = Char.IsSurrogatePair(message, position)
                        ? Char.ConvertToUtf32(message, position) : message[position];
                int width = (codePoint >= 0x10000 ? 2 : 1);
                if (position + width > limit) break;
                if (codePoint >= 0xd800 && codePoint <= 0xdfff)
                    codePoint = 0xfffd;
                if (codePoint >= 0x10000) text.Append(Char.ConvertFromUtf32(codePoint));
                else text.Append((char)codePoint);
                position += width;
            }
            if (position < message.Length) text.Append('…');
            return text.ToString();
        }

        internal sealed class Reader {
            private readonly String source;
            private readonly Budget budget;
            private int index;
            private int values;

            internal Reader(String source, Budget budget) {
                if (source == null) throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
                this.source = source;
                this.budget = budget;
            }

            internal Value read() {
                checkTransport(source, budget);
                if (source.Length != 0 && source[0] == '\uFEFF') index++;
                Value root = value(EMPTY);
                Stack<Value> stack = new Stack<Value>();
                if (container(root)) stack.Push(root);
                while (stack.Count != 0) {
                    Value current = stack.Peek();
                    bool array = current.kind == Kind.ARRAY;
                    char end = array ? ']' : '}';
                    skipSpace();
                    if (take(end)) {
                        stack.Pop();
                        continue;
                    }
                    int size = array ? current.array.Count : current.members.Count;
                    if (size != 0) {
                        require(',', current.path);
                        skipSpace();
                    }
                    String key = array ? size.ToString(CultureInfo.InvariantCulture) : readString(current.path);
                    String path = current.path + "/" + key.Replace("~", "~0").Replace("/", "~1");
                    if (!array) {
                        if (current.members.Contains(key)) throw syntax(path);
                        skipSpace();
                        require(':', path);
                    }
                    if (stack.Count >= MAX_DEPTH)
                        throw new ConversionFailure(RESOURCE_LIMIT, path, index, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEPTH));
                    Value child = value(path);
                    if (array) current.array.Add(child);
                    else current.members.Add(key, child);
                    if (container(child)) stack.Push(child);
                }
                skipSpace();
                if (index != source.Length) throw syntax(EMPTY);
                return root;
            }

            private Value value(String path) {
                skipSpace();
                if (index == source.Length) throw syntax(path);
                if (++values > MAX_VALUES)
                    throw new ConversionFailure(RESOURCE_LIMIT, path, index, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_VALUES));
                int start = index;
                char c = source[index];
                Value result;
                if (c == '[') {
                    index++;
                    result = new Value(Kind.ARRAY, path, start);
                    result.array = new List<Value>();
                } else if (c == '{') {
                    index++;
                    result = new Value(Kind.OBJECT, path, start);
                    result.members = new OrderedDictionary();
                } else if (c == '"') {
                    result = new Value(Kind.STRING, path, start);
                    result.text = readString(path);
                } else if (c == 'n' || c == 't' || c == 'f') {
                    String word = c == 'n' ? "null" : c == 't' ? "true" : "false";
                    if (!startsAt(source, word, index)) throw syntax(path);
                    index += word.Length;
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
                    result.text = substring(source, start, index);
                } else {
                    throw syntax(path);
                }
                budget.allocate(112L + path.Length * 2L
                        + (result.text == null ? 0 : result.text.Length * 2L), result);
                return result;
            }

            private String readString(String path) {
                require('"', path);
                StringBuilder result = new StringBuilder();
                while (index < source.Length) {
                    char c = source[index++];
                    if (c == '"') {
                        for (int i = 0; i < result.Length; i++) {
                            char ch = result[i];
                            if (Char.IsHighSurrogate(ch)) {
                                if (++i == result.Length || !Char.IsLowSurrogate(result[i]))
                                    throw syntax(path);
                            } else if (Char.IsLowSurrogate(ch)) {
                                throw syntax(path);
                            }
                        }
                        return result.ToString();
                    }
                    if (c < 0x20) throw syntax(path);
                    if (c == '\\') {
                        if (index == source.Length) throw syntax(path);
                        c = source[index++];
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
                                    if (index == source.Length) throw syntax(path);
                                    char h = source[index++];
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
                    result.Append(c);
                }
                throw syntax(path);
            }

            private void digits(String path) {
                int start = index;
                while (index < source.Length && digit(source[index])) index++;
                if (start == index) throw syntax(path);
            }

            private void skipSpace() {
                while (index < source.Length) {
                    char c = source[index];
                    if (c != ' ' && c != '\t' && c != '\r' && c != '\n') return;
                    index++;
                }
            }

            private bool take(char c) {
                if (index == source.Length || source[index] != c) return false;
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

        internal static bool digit(char c) { return c >= '0' && c <= '9'; }

        private static bool container(Value value) {
            return value.kind == Kind.ARRAY || value.kind == Kind.OBJECT;
        }

        internal static void checkTransport(String source, Budget budget) {
            if (source.Length > MAX_TEXT) throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_TEXT));
            budget.work(source.Length, null);
            long bytes = 0;
            for (int i = 0; i < source.Length; i++) {
                char c = source[i];
                if (c <= 0x7f) bytes++;
                else if (c <= 0x7ff) bytes += 2;
                else if (Char.IsHighSurrogate(c) && i + 1 < source.Length
                        && Char.IsLowSurrogate(source[i + 1])) {
                    bytes += 4;
                    i++;
                } else bytes += 3;
                if (bytes > MAX_TEXT) throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_TEXT));
            }
        }

        internal sealed class Input {
            private static readonly Regex NAME = wholePattern("[A-Za-z_][A-Za-z0-9_]*|\\p{IsGreek}");
            private static readonly Regex NATIVE_NAME = wholePattern(ParserSymbol.nameOnlyTokenRegExp);

            private readonly Codec.Budget budget;

            internal Input(Codec.Budget budget) {
                this.budget = budget;
            }

            internal Node read(String json) {
                return read(new Codec.Reader(json, budget).read());
            }

            private Node read(Codec.Value value) {
                budget.work(1, value);
                budget.allocate(64, value);
                switch (value.kind) {
                    case Codec.Kind.NUMBER: return numeric(value.text, value);
                    case Codec.Kind.STRING: return readString(value);
                    case Codec.Kind.ARRAY: return array(value, value);
                    case Codec.Kind.OBJECT: return readObject(value);
                    default: throw error(INVALID_SHAPE, value, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                }
            }

            private Node readString(Codec.Value value) {
                String text = value.text;
                if (quoted(text, '\''))
                    return atom(Tree.Kind.STRING, substring(text, 1, text.Length - 1), value);
                if (quoted(text, '`'))
                    return atom(Tree.Kind.SYMBOL, normalize(substring(text, 1, text.Length - 1)), value);
                if (numericSpelling(text) || specialNumber(text)) return numeric(text, value);
                if (text.Length > Codec.MAX_NUMBER) {
                    char first = text[0];
                    if (Codec.digit(first) || first == '-' || first == '+') requireNumberLength(text, value);
                }
                return atom(Tree.Kind.SYMBOL, normalize(text), value);
            }

            private Node array(Codec.Value items, Codec.Value origin) {
                if (items.kind != Codec.Kind.ARRAY || items.array.Count == 0)
                    throw error(INVALID_SHAPE, items, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                Node head = read(items.array[0]);
                if (head.kind != Tree.Kind.SYMBOL)
                    throw error(INVALID_SHAPE, head.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                List<Node> operands = new List<Node>();
                for (int i = 1; i < items.array.Count; i++) operands.Add(read(items.array[i]));
                return call(head.name, origin, operands);
            }

            private Node readObject(Codec.Value value) {
                String tag = null;
                foreach (String key in DISCRIMINATORS) {
                    if (!value.members.Contains(key)) continue;
                    if (tag != null) throw error(INVALID_SHAPE, value, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    tag = key;
                }
                if (tag == null) throw error(INVALID_SHAPE, value, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                Codec.Value content = (Codec.Value)value.members[tag];
                if (tag.Equals(FIELD_FUNCTION)) return array(content, value);
                if (tag.Equals(FIELD_DICTIONARY)) {
                    if (content.kind != Codec.Kind.OBJECT)
                        throw error(INVALID_SHAPE, content, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    List<Node> pairs = new List<Node>();
                    foreach (DictionaryEntry entry in content.members) {
                        Codec.Value field = (Codec.Value)entry.Value;
                        Node key = atom(Tree.Kind.STRING, (String)entry.Key, field);
                        Node valueNode = field.kind == Codec.Kind.BOOLEAN
                                ? atom(Tree.Kind.SYMBOL, field.text.Equals("true") ? SYMBOL_TRUE : SYMBOL_FALSE, field)
                                : read(field);
                        pairs.Add(call(HEAD_KEY_VALUE_PAIR, field, key, valueNode));
                    }
                    return call(HEAD_DICTIONARY, value, pairs);
                }
                if (content.kind != Codec.Kind.STRING)
                    throw error(INVALID_SHAPE, content, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                if (tag.Equals(FIELD_NUMBER)) return numeric(content.text, value);
                if (tag.Equals(FIELD_SYMBOL)) return atom(Tree.Kind.SYMBOL, normalize(content.text), value);
                return atom(Tree.Kind.STRING, content.text, value);
            }

            private Node numeric(String text, Codec.Value at) {
                requireNumberLength(text, at);
                return atom(Tree.Kind.NUMBER, text, at);
            }

            private static bool quoted(String text, char quote) {
                return text.Length >= 2 && text[0] == quote && text[text.Length - 1] == quote;
            }

            private static String normalize(String name) {
                // NFC equivalents whose canonical forms are in the supported name alphabet.
                return name.Replace('\u212A', 'K').Replace('\u2126', '\u03A9').Replace('\u1FBE', '\u03B9');
            }

            internal static void checkName(String name, Codec.Value at) {
                if (name.Length > Codec.MAX_NAME)
                    throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_NAME));
                if (!NAME.IsMatch(name) || !NATIVE_NAME.IsMatch(name)
                        || !normalize(name).Equals(name))
                    throw error("INVALID_NAME", at, formatMessage(STRING_RESOURCES.MATHJSON_INVALID_NAME, name));
            }

            internal static void checkArity(Node call, int count) {
                if (call.children.Count != count)
                    throw error(INVALID_ARITY, call.at, formatMessage(STRING_RESOURCES.MATHJSON_WRONG_ARGUMENT_COUNT, call.name));
            }
        }

    }

    internal static class Tree {
        internal const long SAFE_INTEGER = 9007199254740991L;
        private static readonly Regex DECIMAL = wholePattern(
                "([+-]?)(0|[1-9][0-9]*)(?:\\.([0-9]*))?(?:\\(([0-9]+)\\))?(?:[eE]([+-]?[0-9]+))?");

        private static readonly Node[] emptyNodes = new Node[0];
        internal enum Kind { CALL, NUMBER, SYMBOL, STRING }

        internal sealed class Node {
            internal readonly Kind kind;
            internal readonly String name;
            internal readonly double number;
            internal readonly IList<Node> children;
            internal readonly Codec.Value at;
            internal int depth;
            internal PrimitiveElement binding;
            internal bool builtin;
            internal bool userCall;
            internal String spelling;

            internal Node(Kind kind, String name, double number, IList<Node> children, Codec.Value at) {
                this.kind = kind;
                this.name = name;
                this.number = number;
                this.children = children;
                this.at = at;
                int height = 1;
                foreach (Node child in children) height = Math.Max(height, 1 + child.depth);
                if (height > Codec.MAX_DEPTH)
                    throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                depth = height;
            }

            internal void appendChainOperand(Node child) {
                if (child.depth >= Codec.MAX_DEPTH)
                    throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                children.Add(child);
                depth = Math.Max(depth, 1 + child.depth);
            }

            internal bool call(String head) { return kind == Kind.CALL && name.Equals(head); }
            internal bool symbol(String value) { return kind == Kind.SYMBOL && name.Equals(value); }
            internal Node arg(int i) { return children[i]; }
        }

        internal static Node atom(Kind kind, String value, Codec.Value at) {
            return new Node(kind, value, 0, emptyNodes, at);
        }

        internal static Node number(double value, Codec.Value at) {
            return new Node(Kind.NUMBER, null, value, emptyNodes, at);
        }

        internal static Node call(String name, Codec.Value at, params Node[] children) {
            return call(name, at, (IList<Node>)children);
        }

        internal static Node call(String name, Codec.Value at, IList<Node> children) {
            return new Node(Kind.CALL, name, 0, children, at);
        }

        internal sealed class Operation {
            internal enum Code { ADD, SUBTRACT, NEGATE, MULTIPLY, DIVIDE, POWER, TETRATION, FACTORIAL, ABS, SQRT, FLOOR, CEIL, SIN, COS, TAN, RAD, DEG, EXP, GAMMA, MIN, MAX, LN, LOG, ROOT, NOT_EQUAL, EQUAL, LESS, GREATER, LESS_EQUAL, GREATER_EQUAL, IF, SUM, PRODUCT }
            private static readonly List<Operation> VALUES = new List<Operation>();
            internal static readonly Operation ADD = new Operation(Code.ADD, "Add", Operator.PLUS_STR, 2, Operator.TYPE_ID, Operator.PLUS_ID);
            internal static readonly Operation SUBTRACT = new Operation(Code.SUBTRACT, "Subtract", Operator.MINUS_STR, 2, Operator.TYPE_ID, Operator.MINUS_ID);
            internal static readonly Operation NEGATE = new Operation(Code.NEGATE, "Negate", Operator.MINUS_STR, 1, KeyWord.NO_DEFINITION, KeyWord.NO_DEFINITION);
            internal static readonly Operation MULTIPLY = new Operation(Code.MULTIPLY, "Multiply", Operator.MULTIPLY_STR, 2, Operator.TYPE_ID, Operator.MULTIPLY_ID);
            internal static readonly Operation DIVIDE = new Operation(Code.DIVIDE, "Divide", Operator.DIVIDE_STR, 2, Operator.TYPE_ID, Operator.DIVIDE_ID);
            internal static readonly Operation POWER = new Operation(Code.POWER, "Power", Operator.POWER_STR, 2, Operator.TYPE_ID, Operator.POWER_ID);
            internal static readonly Operation TETRATION = new Operation(Code.TETRATION, "MxParserTetration", Operator.TETRATION_STR, 2, Operator.TYPE_ID, Operator.TETRATION_ID);
            internal static readonly Operation FACTORIAL = new Operation(Code.FACTORIAL, "Factorial", Operator.FACT_STR, 1, Operator.TYPE_ID, Operator.FACT_ID);
            internal static readonly Operation ABS = new Operation(Code.ABS, "Abs", Function1Arg.ABS_STR, 1, Function1Arg.TYPE_ID, Function1Arg.ABS_ID);
            internal static readonly Operation SQRT = new Operation(Code.SQRT, "Sqrt", Function1Arg.SQRT_STR, 1, Function1Arg.TYPE_ID, Function1Arg.SQRT_ID);
            internal static readonly Operation FLOOR = new Operation(Code.FLOOR, "Floor", Function1Arg.FLOOR_STR, 1, Function1Arg.TYPE_ID, Function1Arg.FLOOR_ID);
            internal static readonly Operation CEIL = new Operation(Code.CEIL, "Ceil", Function1Arg.CEIL_STR, 1, Function1Arg.TYPE_ID, Function1Arg.CEIL_ID);
            internal static readonly Operation SIN = new Operation(Code.SIN, "Sin", Function1Arg.SIN_STR, 1, Function1Arg.TYPE_ID, Function1Arg.SIN_ID);
            internal static readonly Operation COS = new Operation(Code.COS, "Cos", Function1Arg.COS_STR, 1, Function1Arg.TYPE_ID, Function1Arg.COS_ID);
            internal static readonly Operation TAN = new Operation(Code.TAN, "Tan", Function1Arg.TAN_STR, 1, Function1Arg.TYPE_ID, Function1Arg.TAN_ID);
            internal static readonly Operation RAD = new Operation(Code.RAD, "Degrees", Function1Arg.RAD_STR, 1, Function1Arg.TYPE_ID, Function1Arg.RAD_ID);
            internal static readonly Operation DEG = new Operation(Code.DEG, "MxParserToDegrees", Function1Arg.DEG_STR, 1, Function1Arg.TYPE_ID, Function1Arg.DEG_ID);
            internal static readonly Operation EXP = new Operation(Code.EXP, "Exp", Function1Arg.EXP_STR, 1, Function1Arg.TYPE_ID, Function1Arg.EXP_ID);
            internal static readonly Operation GAMMA = new Operation(Code.GAMMA, "Gamma", Function1Arg.GAMMA_STR, 1, Function1Arg.TYPE_ID, Function1Arg.GAMMA_ID);
            internal static readonly Operation MIN = new Operation(Code.MIN, "Min", FunctionVariadic.MIN_STR, -1, FunctionVariadic.TYPE_ID, FunctionVariadic.MIN_ID);
            internal static readonly Operation MAX = new Operation(Code.MAX, "Max", FunctionVariadic.MAX_STR, -1, FunctionVariadic.TYPE_ID, FunctionVariadic.MAX_ID);
            internal static readonly Operation LN = new Operation(Code.LN, "Ln", Function1Arg.LN_STR, 1, Function1Arg.TYPE_ID, Function1Arg.LN_ID);
            internal static readonly Operation LOG = new Operation(Code.LOG, "Log", Function2Arg.LOG_STR, 2, Function2Arg.TYPE_ID, Function2Arg.LOG_ID);
            internal static readonly Operation ROOT = new Operation(Code.ROOT, "Root", Function2Arg.ROOT_STR, 2, Function2Arg.TYPE_ID, Function2Arg.ROOT_ID);
            internal static readonly Operation NOT_EQUAL = new Operation(Code.NOT_EQUAL, "NotEqual", BinaryRelation.NEQ2_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.NEQ_ID);
            internal static readonly Operation EQUAL = new Operation(Code.EQUAL, "Equal", BinaryRelation.EQ_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.EQ_ID);
            internal static readonly Operation LESS = new Operation(Code.LESS, "Less", BinaryRelation.LT_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.LT_ID);
            internal static readonly Operation GREATER = new Operation(Code.GREATER, "Greater", BinaryRelation.GT_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.GT_ID);
            internal static readonly Operation LESS_EQUAL = new Operation(Code.LESS_EQUAL, "LessEqual", BinaryRelation.LEQ_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.LEQ_ID);
            internal static readonly Operation GREATER_EQUAL = new Operation(Code.GREATER_EQUAL, "GreaterEqual", BinaryRelation.GEQ_STR, 2, BinaryRelation.TYPE_ID, BinaryRelation.GEQ_ID);
            internal static readonly Operation IF = new Operation(Code.IF, "If", Function3Arg.IF_STR, 3, Function3Arg.TYPE_ID, Function3Arg.IF_CONDITION_ID);
            internal static readonly Operation SUM = new Operation(Code.SUM, "Sum", CalculusOperator.SUM_STR, 4, CalculusOperator.TYPE_ID, CalculusOperator.SUM_ID);
            internal static readonly Operation PRODUCT = new Operation(Code.PRODUCT, "Product", CalculusOperator.PROD_STR, 4, CalculusOperator.TYPE_ID, CalculusOperator.PROD_ID);
            internal readonly Code code;
            internal readonly String head;
            internal readonly String source;
            internal readonly int arity;
            internal readonly int type;
            internal readonly int id;

            private Operation(Code code, String head, String source, int arity, int type, int id) {
                this.code = code;
                this.head = head;
                this.source = source;
                this.arity = arity;
                this.type = type;
                this.id = id;
                VALUES.Add(this);
            }

            internal static IEnumerable<Operation> values() { return VALUES; }
            internal int ordinal() { return (int)code; }
            internal bool accepts(int count) { return arity == -1 ? count > 0 : count == arity; }
            internal bool chain() { return this == ADD || this == MULTIPLY; }
            internal bool angle() { return this == SIN || this == COS || this == TAN; }
            internal bool relation() { return type == BinaryRelation.TYPE_ID; }
            internal bool iterator() { return type == CalculusOperator.TYPE_ID; }
        }

        private static readonly Dictionary<String, Operation> BY_NAME = new Dictionary<String, Operation>();
        private static readonly Dictionary<long, Operation> BY_TOKEN = new Dictionary<long, Operation>();
        static Tree() {
            foreach (Operation operation in Operation.values()) {
                BY_NAME[operation.head] = operation;
                if (operation.type >= 0) BY_TOKEN[key(operation.type, operation.id)] = operation;
            }
            BY_TOKEN[key(Operator.TYPE_ID, Operator.SQUARE_ROOT_ID)] = Operation.SQRT;
        }

        internal static Operation operation(String name) {
            Operation result;
            return name != null && BY_NAME.TryGetValue(name, out result) ? result : null;
        }

        internal static Operation operation(int type, int id) {
            Operation result;
            return BY_TOKEN.TryGetValue(key(type, id), out result) ? result : null;
        }
        private static long key(int type, int id) { return ((long)type << 32) | unchecked((uint)id); }

        internal static bool numericSpelling(String text) {
            return text.Length <= Codec.MAX_NUMBER && DECIMAL.IsMatch(text);
        }

        private static bool validDecimal(Match match) {
            if (!match.Success) return false;
            if (group(match, 4) != null) return group(match, 3) != null;
            return group(match, 3) == null || group(match, 3).Length != 0;
        }

        internal static bool specialNumber(String value) {
            return value.Equals("NaN") || value.Equals("Infinity") || value.Equals("+Infinity") || value.Equals("PositiveInfinity")
                    || value.Equals("-Infinity") || value.Equals("NegativeInfinity") || value.Equals("ComplexInfinity");
        }

        internal static double readNumber(String text, Codec.Value at, Codec.Budget budget) {
            requireNumberLength(text, at);
            budget.work(text.Length, at);
            text = Regex.Replace(text, "[\t\n\u000B\f\r \u00A0]", EMPTY);
            Match match = DECIMAL.Match(text);
            if (!validDecimal(match)) throw error(UNSUPPORTED_NUMBER, at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            String periodic = group(match, 4);
            if (periodic != null) {
                StringBuilder expanded = new StringBuilder(text.Substring(0, match.Groups[4].Index - 1));
                int end = expanded.Length + periodic.Length + 32;
                while (expanded.Length < end) expanded.Append(periodic);
                text = expanded.Append(text.Substring(match.Groups[4].Index + periodic.Length + 1)).ToString();
                budget.work(text.Length, at);
            }
            double value = parseDecimal(text);
            if (!finite(value))
                throw error(UNSUPPORTED_NUMBER, at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            if (value == 0 && text[0] == '-') value = -0.0;
            return value;
        }

        private static double parseDecimal(String text) {
            double result;
            return Double.TryParse(text, NumberStyles.Float, CultureInfo.InvariantCulture, out result) ? result : Double.NaN;
        }

        internal static Node resolveNumber(Node node, Codec.Budget budget, bool formula) {
            if (node.name == null) return node;
            double value = readNumber(node.name, node.at, budget);
            return number(formula && value == 0 ? 0 : value, node.at);
        }

        internal static void requireNumberLength(String text, Codec.Value at) {
            if (text.Length > Codec.MAX_NUMBER)
                throw error(RESOURCE_LIMIT, at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_NUMBER));
        }

        internal static void warning(List<MathJSON.Diagnostic> diagnostics, Codec.Value at, String code, String message) {
            diagnostics.Add(new MathJSON.Diagnostic(code, at == null ? EMPTY : at.path,
                    at == null ? NO_OFFSET : at.offset, message));
        }

        internal static void externalWarning(List<MathJSON.Diagnostic> diagnostics, Codec.Value at, String name) {
            warning(diagnostics, at, EXTERNAL_DEFINITION,
                    formatMessage(STRING_RESOURCES.MATHJSON_EXTERNAL_DEFINITION, name));
        }

        internal static Node fromToken(Token token, Codec.Budget budget) {
            String lexeme = token.tokenStr;
            requireNumberLength(lexeme, null);
            budget.work(lexeme.Length, null);
            double value = token.tokenValue;
            if (!finite(value))
                throw error(UNSUPPORTED_NUMBER, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            return lexeme.IndexOf('_') >= 0 ? fraction(lexeme, value) : number(value == 0 ? 0 : value, null);
        }

        private static Node fraction(String lexeme, double value) {
            bool negative = lexeme.StartsWith(Operator.MINUS_STR, StringComparison.Ordinal);
            String[] parts = (negative || lexeme.StartsWith(Operator.PLUS_STR, StringComparison.Ordinal) ? lexeme.Substring(1) : lexeme).Split('_');
            double p = parseDecimal(parts[parts.Length - 2]);
            double q = parseDecimal(parts[parts.Length - 1]);
            if (parts.Length == 3) p += parseDecimal(parts[0]) * q;
            if (negative && p != 0) p = -p;
            if (!integral(p) || !integral(q) || q <= 0 || p / q != value)
                return number(value == 0 ? 0 : value, null);
            return call(HEAD_RATIONAL, null, number(p, null), number(q, null));
        }

        internal static bool integral(double number) {
            return finite(number) && number == Math.Round(number);
        }

        internal static bool isNegativeZero(double number) {
            return number == 0 && 1.0 / number < 0;
        }

        internal static String decimalSpelling(double number) {
            if (isNegativeZero(number)) return "-0";
            if (Math.Abs(number) <= SAFE_INTEGER && number == Math.Floor(number))
                return ((long)number).ToString(CultureInfo.InvariantCulture);
            return number.ToString("G17", CultureInfo.InvariantCulture);
        }

        private sealed class WriteFrame {
            internal readonly Node node;
            internal int child;
            internal WriteFrame(Node node) { this.node = node; }
        }

        internal static String write(Node root, Codec.Budget budget) {
            StringBuilder output = new StringBuilder();
            Stack<WriteFrame> stack = new Stack<WriteFrame>();
            stack.Push(new WriteFrame(root));
            int count = 0;
            while (stack.Count != 0) {
                WriteFrame frame = stack.Peek();
                Node node = frame.node;
                if (frame.child == 0) {
                    if (++count > Codec.MAX_VALUES)
                        throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_VALUES));
                    if (stack.Count > Codec.MAX_DEPTH)
                        throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                    budget.work(1, node.at);
                    switch (node.kind) {
                        case Tree.Kind.CALL:
                            output.Append('[');
                            quote(node.name, output);
                            break;
                        case Tree.Kind.SYMBOL:
                            if (specialNumber(node.name)) {
                                output.Append("{\"" + Codec.FIELD_SYMBOL + "\":");
                                quote(node.name, output);
                                output.Append('}');
                            } else quote(node.name, output);
                            break;
                        case Tree.Kind.STRING:
                            output.Append("{\"" + Codec.FIELD_STRING + "\":");
                            quote(node.name, output);
                            output.Append('}');
                            break;
                        case Tree.Kind.NUMBER:
                            String spelling = decimalSpelling(node.number);
                            if (node.number == Math.Round(node.number) && Math.Abs(node.number) <= SAFE_INTEGER
                                    && !isNegativeZero(node.number)) output.Append(spelling);
                            else {
                                output.Append("{\"" + Codec.FIELD_NUMBER + "\":");
                                quote(spelling, output);
                                output.Append('}');
                            }
                            break;
                        default: throw new InvalidOperationException();
                    }
                }
                if (frame.child < node.children.Count) {
                    output.Append(',');
                    stack.Push(new WriteFrame(node.arg(frame.child++)));
                } else {
                    if (node.kind == Kind.CALL) output.Append(']');
                    stack.Pop();
                }
                if (output.Length > Codec.MAX_TEXT)
                    throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_TEXT));
            }
            String json = output.ToString();
            Codec.checkTransport(json, budget);
            return json;
        }

        private static readonly String HEX = "0123456789ABCDEF";

        private static void quote(String text, StringBuilder output) {
            output.Append('"');
            for (int i = 0; i < text.Length; i++) {
                char c = text[i];
                switch (c) {
                    case '"': output.Append("\\\""); break;
                    case '\\': output.Append("\\\\"); break;
                    case '\b': output.Append("\\b"); break;
                    case '\f': output.Append("\\f"); break;
                    case '\n': output.Append("\\n"); break;
                    case '\r': output.Append("\\r"); break;
                    case '\t': output.Append("\\t"); break;
                    default:
                        if (c < 0x20 || c == '\u2028' || c == '\u2029') {
                            output.Append("\\u").Append(HEX[c >> 12]).Append(HEX[c >> 8 & 15])
                                    .Append(HEX[c >> 4 & 15]).Append(HEX[c & 15]);
                        } else output.Append(c);
                        break;
                }
            }
            output.Append('"');
        }

    }

    internal sealed class Plan {
        internal readonly List<PrimitiveElement> used = new List<PrimitiveElement>();
        internal readonly HashSet<PrimitiveElement> usedSet = new HashSet<PrimitiveElement>(new IdentityComparer<PrimitiveElement>());
        internal readonly HashSet<String> open = new HashSet<String>();
        internal readonly HashSet<String> openFunctions = new HashSet<String>();
        private readonly OrderedDictionary binders = new OrderedDictionary();
        private readonly Dictionary<String, PrimitiveElement> visible;
        private readonly OrderedDictionary parameters;
        private readonly HashSet<String> availableBuiltins;
        private readonly bool allowOpen;
        private readonly bool allowSubclassReferences;
        private readonly bool forExport;
        private readonly MathJSON.ImportOptions options;
        private readonly List<MathJSON.Diagnostic> diagnostics;
        private readonly Codec.Budget budget;

        internal Plan(Dictionary<String, PrimitiveElement> visible, OrderedDictionary parameters,
                     HashSet<String> availableBuiltins, bool allowOpen, bool allowSubclassReferences, bool forExport,
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

        internal bool hasOpenReferences() { return open.Count != 0 || openFunctions.Count != 0; }

        internal Node validate(Node root) {
            Node plan = validate(root, new HashSet<String>(), false, 0);
            foreach (String binder in binders.Keys) {
                if (open.Contains(binder))
                    throw error(UNSUPPORTED_BINDING, root.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
            }
            return plan;
        }

        private Node validate(Node node, HashSet<String> locals, bool predicate, int depth) {
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
                if (Double.IsNaN(value)) throw domain(node);
                return atom(Kind.SYMBOL, value == 0 ? SYMBOL_FALSE : SYMBOL_TRUE, node.at);
            }
            if (node.kind == Kind.SYMBOL) return scalar(node, locals, predicate);
            if (!predicate && forExport && node.userCall) return userCall(node, locals, depth);
            if (!predicate && node.call(HEAD_MXPARSER_SYMBOL)) {
                Codec.Input.checkArity(node, 1);
                return referenceSymbol(qualifiedName(node.arg(0)), locals);
            }
            if (!predicate && node.call(HEAD_MXPARSER_CALL)) {
                if (node.children.Count < 2) Codec.Input.checkArity(node, 2);
                Node name = qualifiedName(node.arg(0));
                List<Node> arguments = new List<Node>();
                for (int i = 1; i < node.children.Count; i++) arguments.Add(node.arg(i));
                return userCall(call(name.name, node.at, arguments), locals, depth);
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
                if (node.arg(1).kind != Kind.STRING || !node.arg(1).name.Equals("km"))
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
                if (node.children.Count == 0) Codec.Input.checkArity(node, 1);
                if (node.children.Count == 1) return validate(node.arg(0), locals, false, depth + 1);
            } else if (!op.accepts(node.children.Count))
                Codec.Input.checkArity(node, op.arity == -1 ? 1 : op.arity);
            List<Node> operands = new List<Node>(node.children.Count);
            for (int i = 0; i < node.children.Count; i++)
                operands.Add(validate(node.arg(i), locals, op == Operation.IF && i == 0, depth + 1));
            if (op.angle() && mXparser.checkIfDegreesMode()) {
                Node angle = operands[0];
                if (forExport) operands[0] = call(Operation.RAD.head, angle.at, angle);
                else if (!angle.userCall && angle.call(Operation.RAD.head)) operands[0] = angle.arg(0);
                else operands[0] = call(Operation.DEG.head, angle.at, angle);
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

        private Node scalar(Node node, HashSet<String> locals, bool predicate) {
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

        private Node referenceSymbol(Node node, HashSet<String> locals) {
            if (locals.Contains(node.name)) return node;
            Codec.Input.checkName(node.name, node.at);
            Argument parameter = (Argument)parameters[node.name];
            if (parameter != null) {
                if (forExport && node.binding != parameter) throw binding(node);
                node.binding = parameter;
            } else {
                PrimitiveElement element = lookup(node);
                checkNativeName(node, element);
                if (forExport && node.binding != element) throw binding(node);
                if (element == null) {
                    if (openFunctions.Contains(node.name)) throw collision(node);
                    if (!allowOpen) throw missing(node, "UNRESOLVED_SYMBOL");
                    if (open.Add(node.name)) missingWarning(node, "UNRESOLVED_SYMBOL");
                } else {
                    if (!(element is Argument || element is Constant)) throw binding(node);
                    if (usedSet.Add(element)) {
                        used.Add(element);
                        if (forExport ? allowOpen : !Exchange.declarableValue(element)) externalWarning(diagnostics, node.at, node.name);
                    }
                    node.binding = element;
                }
            }
            if (forExport && (Vocabulary.reserved(node.name) || specialNumber(node.name)
                    || availableBuiltins.Contains(node.name))) {
                extensionWarning(node, HEAD_MXPARSER_SYMBOL);
                return call(HEAD_MXPARSER_SYMBOL, node.at, node);
            }
            return node;
        }

        private PrimitiveElement lookup(Node node) {
            PrimitiveElement element;
            bool found = visible.TryGetValue(node.name, out element);
            if (element == null && found) throw collision(node);
            if (element != null) Exchange.requireReference(element, allowSubclassReferences);
            return element;
        }

        private void checkNativeName(Node node, PrimitiveElement element) {
            if (availableBuiltins.Contains(node.name) && (element == null || !mXparser.checkIfsetToOverrideBuiltinTokens()))
                throw collision(node);
        }

        private Node userCall(Node node, HashSet<String> locals, int depth) {
            Codec.Input.checkName(node.name, node.at);
            if (locals.Contains(node.name) || parameters.Contains(node.name) || open.Contains(node.name))
                throw collision(node);
            PrimitiveElement element = lookup(node);
            checkNativeName(node, element);
            if (node.children.Count == 0) Codec.Input.checkArity(node, 1);
            if (element == null) {
                if (!allowOpen) throw missing(node, UNRESOLVED_FUNCTION);
                if (openFunctions.Add(node.name)) missingWarning(node, UNRESOLVED_FUNCTION);
            } else {
                if (!(element is Function)) throw binding(node);
                Function function = (Function) element;
                if (!function.isVariadic) Codec.Input.checkArity(node, function.getParametersNumber());
                if (usedSet.Add(element)) {
                    used.Add(element);
                    if (forExport ? allowOpen : !Exchange.declarableValue(element)) externalWarning(diagnostics, node.at, node.name);
                }
            }
            if (forExport && node.binding != element) throw binding(node);
            List<Node> operands = new List<Node>();
            bool qualified = forExport && (operation(node.name) != null || Vocabulary.structure(node.name)
                    || Vocabulary.reserved(node.name) || availableBuiltins.Contains(node.name)
                    || specialNumber(node.name)
                    || node.name.Equals(HEAD_MXPARSER_CALL) || node.name.Equals(HEAD_MXPARSER_SYMBOL));
            if (qualified) {
                extensionWarning(node, HEAD_MXPARSER_CALL);
                operands.Add(atom(Kind.SYMBOL, node.name, node.at));
            }
            foreach (Node child in node.children) operands.Add(validate(child, locals, false, depth + 1));
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

        private Node iterator(Node node, HashSet<String> locals, int depth) {
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
            if (locals.Contains(index.name) || parameters.Contains(index.name)
                    || (forExport && visible.ContainsKey(index.name)) || availableBuiltins.Contains(index.name))
                throw error(forExport ? UNSUPPORTED_BINDING : NAME_COLLISION, index.at,
                        forExport ? STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION : STRING_RESOURCES.MATHJSON_NAME_COLLISION);
            first = validate(first, locals, false, depth + 1);
            last = validate(last, locals, false, depth + 1);
            if (!binders.Contains(index.name)) binders.Add(index.name, index);
            locals.Add(index.name);
            Node result = validate(node.arg(0), locals, false, depth + 1);
            locals.Remove(index.name);
            return call(node.name, node.at, result, call(HEAD_LIMITS, limits.at, index, first, last));
        }

        internal void checkIteratorBinding(PrimitiveElement element) {
            if (binders.Count == 0) return;
            Node index = (Node) binders[Exchange.definitionName(element)];
            if (index != null) throw collision(index);
        }

        private static bool integerAtom(Node node) {
            return node.kind == Kind.NUMBER && integral(node.number);
        }

        private sealed class EmitPart {
            internal readonly Node node;
            internal readonly String text;

            internal EmitPart(Node node, String text) {
                this.node = node;
                this.text = text;
            }
        }

        internal static String emit(Node node, Codec.Budget budget, bool preserveGroups) {
            StringBuilder text = new StringBuilder();
            Stack<EmitPart> pending = new Stack<EmitPart>();
            pending.Push(new EmitPart(node, null));
            while (pending.Count != 0) {
                EmitPart part = pending.Pop();
                budget.work(1, node.at);
                if (part.node == null) text.Append(part.text);
                else appendOrSchedule(part.node, text, pending, preserveGroups);
                if (text.Length > Codec.MAX_SOURCE)
                    throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_SOURCE));
            }
            budget.allocate(2L * text.Length, node.at);
            return text.ToString();
        }

        private static void appendOrSchedule(Node node, StringBuilder text, Stack<EmitPart> pending, bool preserveGroups) {
            if (node.kind == Kind.NUMBER) {
                if (node.number < 0) text.Append(ParserSymbol.LEFT_PARENTHESES_STR);
                text.Append(decimalSpelling(node.number));
                if (node.number < 0) text.Append(ParserSymbol.RIGHT_PARENTHESES_STR);
                return;
            }
            if (node.kind == Kind.SYMBOL) {
                text.Append(node.spelling == null ? node.name : node.spelling);
                return;
            }
            Operation op = node.userCall ? null : operation(node.name);
            String spelling = node.spelling == null ? node.name : node.spelling;
            if (op == Operation.NEGATE) {
                text.Append(spelling).Append(ParserSymbol.LEFT_PARENTHESES_STR);
                pending.Push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR));
                pending.Push(new EmitPart(node.arg(0), null));
            } else if (op == Operation.FACTORIAL) {
                text.Append(ParserSymbol.LEFT_PARENTHESES_STR);
                pending.Push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR + spelling));
                pending.Push(new EmitPart(node.arg(0), null));
            } else if (op != null && (op.type == Operator.TYPE_ID || op.relation())) {
                String separator = spelling;
                if (preserveGroups) {
                    text.Append(ParserSymbol.LEFT_PARENTHESES_STR);
                    pending.Push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR));
                    separator = ParserSymbol.RIGHT_PARENTHESES_STR + spelling + ParserSymbol.LEFT_PARENTHESES_STR;
                }
                for (int i = node.children.Count - 1; i >= 0; i--) {
                    Node operand = node.arg(i);
                    Operation operandOp = !preserveGroups && operand.kind == Kind.CALL ? operation(operand.name) : null;
                    bool group = operandOp != null && (operandOp == Operation.NEGATE
                            || operandOp.type == Operator.TYPE_ID || operandOp.relation());
                    if (group) pending.Push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR));
                    pending.Push(new EmitPart(operand, null));
                    if (group) pending.Push(new EmitPart(null, ParserSymbol.LEFT_PARENTHESES_STR));
                    if (i > 0) pending.Push(new EmitPart(null, separator));
                }
            } else {
                text.Append(spelling).Append(ParserSymbol.LEFT_PARENTHESES_STR);
                pending.Push(new EmitPart(null, ParserSymbol.RIGHT_PARENTHESES_STR));
                if (op == Operation.LOG || op == Operation.ROOT) {
                    pending.Push(new EmitPart(node.arg(0), null));
                    pending.Push(new EmitPart(null, ParserSymbol.COMMA_STR));
                    pending.Push(new EmitPart(node.arg(1), null));
                } else if (op != null && op.iterator()) {
                    Node limits = node.arg(1);
                    pending.Push(new EmitPart(node.arg(0), null));
                    for (int i = limits.children.Count - 1; i >= 0; i--) {
                        pending.Push(new EmitPart(null, ParserSymbol.COMMA_STR));
                        pending.Push(new EmitPart(limits.arg(i), null));
                    }
                } else {
                    for (int i = node.children.Count - 1; i >= 0; i--) {
                        pending.Push(new EmitPart(node.arg(i), null));
                        if (i > 0) pending.Push(new EmitPart(null, ParserSymbol.COMMA_STR));
                    }
                }
            }
        }

        internal static bool same(Node planned, Node actual, Dictionary<PrimitiveElement, PrimitiveElement> bindings) {
            Stack<Node> expected = new Stack<Node>();
            Stack<Node> received = new Stack<Node>();
            expected.Push(planned);
            received.Push(actual);
            while (expected.Count != 0) {
                Node lhs = expected.Pop();
                Node rhs = received.Pop();
                if (lhs.kind != rhs.kind || lhs.children.Count != rhs.children.Count) return false;
                if (lhs.kind == Kind.NUMBER) {
                    if (lhs.number != rhs.number) return false;
                } else if (!lhs.name.Equals(rhs.name)) return false;
                if (lhs.userCall != rhs.userCall || lhs.builtin != rhs.builtin) return false;
                PrimitiveElement bound;
                if (lhs.binding != null && (!bindings.TryGetValue(lhs.binding, out bound) || bound != rhs.binding))
                    return false;
                if (lhs.binding == null && rhs.binding != null) return false;
                for (int i = lhs.children.Count - 1; i >= 0; i--) {
                    expected.Push(lhs.arg(i));
                    received.Push(rhs.arg(i));
                }
            }
            return true;
        }

        internal static ConversionFailure domain(Node node) {
            return error(UNSUPPORTED_DOMAIN, node.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
        }

        internal static ConversionFailure binding(Node node) {
            return error(UNSUPPORTED_BINDING, node.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
        }
    }

    internal static class Tokens {
        private sealed class Slot {
            internal readonly Token token;
            internal int level;
            internal Node value;
            internal Operation operation;
            internal bool chain;
            internal Slot close;
            internal List<Slot> separators;
            internal Slot head;

            internal Slot(Token token) {
                this.token = token;
                level = token.tokenLevel;
            }

            internal bool open() { return Token.isLeftParenthesis(token); }
            internal bool isClose() { return Token.isRightParenthesis(token); }
            internal bool comma() { return Token.isParameterSeparator(token); }
            internal bool function() {
                int type = token.tokenTypeId;
                return type == Token.NOT_MATCHED && ExpressionUtils.FUNCTION.Equals(token.looksLike)
                        || type == Function.TYPE_ID || type == Function1Arg.TYPE_ID || type == Function2Arg.TYPE_ID
                        || type == Function3Arg.TYPE_ID || type == FunctionVariadic.TYPE_ID
                        || type == CalculusOperator.TYPE_ID || type == RecursiveArgument.TYPE_ID_RECURSIVE;
            }
        }

        internal static Node read(Expression original, Codec.Budget budget) {
            String text = original.getExpressionString();
            preflight(text, budget);
            checkContextSize(original);
            // Keep keyword positions without invoking host evaluation or extension callbacks.
            List<Argument> arguments = new List<Argument>(original.argumentsList.Count);
            foreach (Argument argument in original.argumentsList)
                arguments.Add(argument.GetType() == typeof(Argument) || argument.GetType() == typeof(RecursiveArgument)
                        ? argument : new Argument(argument.getArgumentName(), 0.0));
            List<Function> functions = new List<Function>(original.functionsList.Count);
            foreach (Function function in original.functionsList)
                functions.Add(function.GetType() == typeof(Function) && function.getFunctionBodyType() == Function.BODY_RUNTIME
                        ? function : new Function(function.getFunctionName(), "0", new String[0]));
            List<Constant> constants = new List<Constant>(original.constantsList.Count);
            foreach (Constant constant in original.constantsList)
                constants.Add(constant.GetType() == typeof(Constant) ? constant : new Constant(constant.getConstantName(), 0.0));
            Expression snapshot = new Expression(text, arguments, functions, constants, true, original.UDFExpression, null);
            if (original.checkIfImpliedMultiplicationMode()) snapshot.enableImpliedMultiplicationMode();
            else snapshot.disableImpliedMultiplicationMode();
            if (original.checkIfUnicodeBuiltinKeyWordsMode()) snapshot.enableUnicodeBuiltinKeyWordsMode();
            else snapshot.disableUnicodeBuiltinKeyWordsMode();
            if (original.checkIfAttemptToFixExpStrMode()) snapshot.enableAttemptToFixExpStrMode();
            else snapshot.disableAttemptToFixExpStrMode();
            List<Token> tokens;
            try {
                tokens = snapshot.getCopyOfInitialTokens();
            } catch (OverflowException) {
                // Older .NET runtimes may throw while tokenizing an out-of-range literal.
                throw error(UNSUPPORTED_NUMBER, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            }
            if (tokens.Count == 0) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
            if (tokens.Count > Codec.MAX_SOURCE)
                throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_SOURCE));
            budget.allocate(192L * tokens.Count + 2L * text.Length, null);
            budget.work(tokens.Count, null);
            List<Slot> slots = new List<Slot>(tokens.Count);
            foreach (Token token in tokens) slots.Add(new Slot(token));
            pair(slots);
            if (!snapshot.checkLexSyntax()) throw invalid(snapshot.getErrorMessage());
            foreach (Slot slot in slots) resolve(slot, original, budget);
            return reduce(slots, budget, 0);
        }

        internal static void preflight(String source, Codec.Budget budget) {
            if (source == null) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
            if (source.Length > Codec.MAX_SOURCE)
                throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_SOURCE));
            budget.work(source.Length, null);
            int depth = 0;
            int digits = 0;
            for (int i = 0; i < source.Length; i++) {
                char c = source[i];
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
            long size = (long) context.argumentsList.Count + context.functionsList.Count + context.constantsList.Count;
            if (size > Exchange.MAX_REFERENCES)
                throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Exchange.MAX_REFERENCES));
        }

        private static void pair(List<Slot> slots) {
            Stack<Slot> stack = new Stack<Slot>();
            int unresolvedDepth = 0;
            for (int i = 0; i < slots.Count; i++) {
                Slot slot = slots[i];
                slot.level += unresolvedDepth;
                if (slot.open()) {
                    if (i > 0 && slots[i - 1].function()) {
                        slot.head = slots[i - 1];
                        slot.head.close = slot;
                        slot.separators = new List<Slot>();
                        // The tokenizer adds this level only for resolved function tokens.
                        if (slot.head.token.tokenTypeId == Token.NOT_MATCHED) {
                            slot.head.level++;
                            slot.level++;
                            unresolvedDepth++;
                        }
                    }
                    stack.Push(slot);
                } else if (slot.isClose()) {
                    if (stack.Count == 0) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                    Slot opening = stack.Pop();
                    opening.close = slot;
                    if (opening.head != null && opening.head.token.tokenTypeId == Token.NOT_MATCHED) unresolvedDepth--;
                } else if (slot.comma()) {
                    if (stack.Count == 0 || stack.Peek().separators == null)
                        throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                    stack.Peek().separators.Add(slot);
                }
            }
            if (stack.Count != 0) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
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
                if (type == Argument.TYPE_ID) slot.value.binding = context.argumentsList[token.tokenId];
                else if (type == Constant.TYPE_ID) slot.value.binding = context.constantsList[token.tokenId];
                return;
            }
            if (type == ParserSymbol.TYPE_ID && (slot.open() || slot.isClose() || slot.comma())) return;
            slot.operation = operation(type, token.tokenId);
            if (slot.function()) {
                if (slot.close == null) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                if (type == Function.TYPE_ID) {
                    slot.value = call(token.tokenStr, null);
                    slot.value.binding = context.functionsList[token.tokenId];
                } else {
                    if (slot.operation == null) throw unsupported();
                    int arity = slot.close.separators.Count + 1;
                    if (!slot.operation.accepts(arity) && !(slot.operation.iterator() && arity == 5))
                        throw wrongArity(token.tokenStr);
                }
            } else if (slot.operation == null) throw unsupported();
        }

        private static Node reduce(List<Slot> slots, Codec.Budget budget, int depth) {
            if (depth >= Codec.MAX_DEPTH)
                throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
            if (slots.Count == 0) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
            // A calculus frame preempts the ordinary reduction scan.
            for (;;) {
                int first = -1;
                for (int i = 0; i < slots.Count; i++) {
                    Operation operation = slots[i].operation;
                    if (operation == Operation.IF || operation != null && operation.iterator()) {
                        first = i;
                        break;
                    }
                }
                budget.work(slots.Count, null);
                if (first < 0) break;
                Slot head = slots[first];
                List<Node> children = new List<Node>();
                int start = first + 2;
                int end = -1;
                List<Slot> boundaries = new List<Slot>(head.close.separators);
                boundaries.Add(head.close.close);
                foreach (Slot boundary in boundaries) {
                    end = slots.IndexOf(boundary);
                    budget.work(slots.Count, null);
                    if (end < start) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                    children.Add(reduce(slots.GetRange(start, end - start), budget, depth + 1));
                    start = end + 1;
                }
                Node value;
                if (head.operation == Operation.IF) value = call(head.operation.head, null, children);
                else {
                    Node index = children[0];
                    if (index.kind != Kind.SYMBOL || index.binding != null
                            || (head.close.separators[0] != slots[first + 3]))
                        throw error(UNSUPPORTED_BINDING, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                    if (children.Count == 5) {
                        Node by = children[4];
                        if (by.kind != Kind.NUMBER || by.number != 1)
                            throw error(UNSUPPORTED_DOMAIN, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_CONSTRUCT);
                    }
                    value = call(head.operation.head, null, children[3],
                            call(HEAD_LIMITS, null, index, children[1], children[2]));
                }
                budget.work(slots.Count, null);
                head.level--;
                set(head, value);
                slots.RemoveRange(first + 1, end - first);
            }
            while (slots.Count > 1) {
                budget.work(2L * slots.Count, null);
                int lo = 0, hi = 0, max = slots[0].level;
                bool uninterrupted = true;
                for (int i = 1; i < slots.Count; i++) {
                    int level = slots[i].level;
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
                int bestRank = Int32.MaxValue;
                int leftParen = -1, rightParen = -1;
                List<int> commas = new List<int>();
                for (int i = lo; i <= hi; i++) {
                    Slot slot = slots[i];
                    if (slot.open() && leftParen < 0) leftParen = i;
                    if (slot.isClose() && rightParen < 0) rightParen = i;
                    if (slot.comma()) commas.Add(i);
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
                        Operation sign = slots[lastPower + 1].operation;
                        if (sign == Operation.ADD || sign == Operation.SUBTRACT) {
                            best = lastPower + 1;
                            bestRank = 6;
                        }
                    }
                }
                if (best >= 0) {
                    apply(slots, best);
                } else if (commas.Count != 0) {
                    for (int i = commas.Count - 1; i >= 0; i--) {
                        int position = commas[i];
                        budget.work(slots.Count - position, null);
                        slots.RemoveAt(position);
                    }
                } else if (leftParen >= 0 && rightParen > leftParen
                        && slots[leftParen].close == slots[rightParen]) {
                    for (int i = leftParen + 1; i < rightParen; i++) {
                        slots[i].level--;
                        slots[i].chain = false;
                    }
                    slots.RemoveAt(rightParen);
                    slots.RemoveAt(leftParen);
                } else {
                    throw error(UNSUPPORTED_BINDING, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                }
            }
            if (!ready(slots, 0)) throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
            return slots[0].value;
        }

        private static int rank(List<Slot> slots, int i) {
            Slot slot = slots[i];
            if (slot.function() && slot.close != null) {
                // The evaluator selects the first function of a class at this level.
                // Its delimiters have already been removed when that selection is actionable.
                if (slot.token.tokenTypeId == FunctionVariadic.TYPE_ID) return -1;
                if (slot.token.tokenTypeId == Function2Arg.TYPE_ID) return 0;
                if (slot.token.tokenTypeId == Function1Arg.TYPE_ID) return 1;
                return 2;
            }
            Operation op = slot.operation;
            if (op == null) return Int32.MaxValue;
            switch (op.code) {
                case Operation.Code.FACTORIAL: return ready(slots, i - 1) ? 4 : Int32.MaxValue;
                case Operation.Code.SQRT: return ready(slots, i + 1) ? 5 : Int32.MaxValue;
                case Operation.Code.MULTIPLY: case Operation.Code.DIVIDE:
                    return ready(slots, i - 1) && ready(slots, i + 1) ? 7 : Int32.MaxValue;
                case Operation.Code.ADD: case Operation.Code.SUBTRACT: return ready(slots, i + 1) ? 8 : Int32.MaxValue;
                default: return op.relation() && ready(slots, i - 1) && ready(slots, i + 1)
                        ? 9 + op.ordinal() - Operation.NOT_EQUAL.ordinal() : Int32.MaxValue;
            }
        }

        private static bool ready(List<Slot> slots, int i) {
            return i >= 0 && i < slots.Count && slots[i].value != null && slots[i].close == null;
        }

        private static void set(Slot slot, Node node) {
            slot.value = node;
            slot.operation = null;
            slot.chain = false;
            slot.close = null;
        }

        private static void apply(List<Slot> slots, int i) {
            Slot slot = slots[i];
            Operation op = slot.operation;
            if (slot.function() && slot.close != null) {
                int arity = slot.close.separators.Count + 1;
                List<Node> children = new List<Node>(arity);
                for (int j = 1; j <= arity; j++) {
                    if (!ready(slots, i + j) || slots[i + j].level != slot.level)
                        throw invalid(STRING_RESOURCES.MATHJSON_INVALID_MXPARSER_SOURCE);
                    children.Add(slots[i + j].value);
                }
                if (op == Operation.LOG || op == Operation.ROOT) swap(children, 0, 1);
                Node invocation = call(op == null ? slot.token.tokenStr : op.head, null, children);
                if (op == null) {
                    invocation.binding = slot.value.binding;
                    invocation.userCall = true;
                }
                slot.level--;
                set(slot, invocation);
                slots.RemoveRange(i + 1, arity);
                return;
            }
            if (op == Operation.FACTORIAL) {
                Slot left = slots[i - 1];
                left.level = slot.level;
                set(left, call(op.head, null, left.value));
                slots.RemoveAt(i);
            } else if (op == Operation.SQRT
                    || ((op == Operation.ADD || op == Operation.SUBTRACT) && !ready(slots, i - 1))) {
                Node right = slots[i + 1].value;
                set(slot, op == Operation.ADD ? right : call(op == Operation.SUBTRACT ? Operation.NEGATE.head : op.head, null, right));
                slots.RemoveAt(i + 1);
            } else {
                Slot left = slots[i - 1];
                Node right = slots[i + 1].value;
                if (op.chain() && left.chain && left.level == slot.level && left.value.call(op.head)) {
                    left.value.appendChainOperand(right);
                } else if (op.chain()) {
                    set(left, call(op.head, null, new List<Node> { left.value, right }));
                    left.chain = true;
                } else {
                    set(left, call(op.head, null, left.value, right));
                }
                left.level = slot.level;
                slots.RemoveRange(i, 2);
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

    }

    /** Pinned Compute Engine 0.190.0 root vocabulary for qualifying exported calls
     * (beefedb32d10044d76f6ca8de30379e7e52fccae).
     * An external probe listed ce.context.lexicalScope.parent.bindings.keys(),
     * then sorted ASCII identifier and single Greek character names.
     */
    internal static class Vocabulary {
        internal const String HEAD_BLOCK = "Block";
        internal const String HEAD_DECLARE = "Declare";
        internal const String HEAD_DEFINE_FUNCTION = "DefineFunction";
        internal const String HEAD_FUNCTION = "Function";
        internal const String HEAD_DICTIONARY = "Dictionary";
        internal const String HEAD_KEY_VALUE_PAIR = "KeyValuePair";
        internal const String HEAD_LIMITS = "Limits";
        internal const String HEAD_TUPLE = "Tuple";
        internal const String HEAD_RANGE = "Range";
        internal static readonly String HEAD_RATIONAL = "Rational";
        internal static readonly String HEAD_BOOLE = "Boole";
        internal const String HEAD_ERROR = "Error";
        internal const String HEAD_MXPARSER_CALL = "MxParserCall";
        internal const String HEAD_MXPARSER_SYMBOL = "MxParserSymbol";
        internal static readonly String SYMBOL_PI = "Pi";
        internal static readonly String SYMBOL_EXPONENTIAL_E = "ExponentialE";
        internal static readonly String SYMBOL_TRUE = "True";
        internal static readonly String SYMBOL_FALSE = "False";
        internal static readonly String ATTRIBUTE_VALUE = "value";
        internal static readonly String ATTRIBUTE_CONSTANT = "constant";

        private static readonly HashSet<String> RESERVED = new HashSet<String>(new String[]{
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
        });

        internal static bool reserved(String name) { return RESERVED.Contains(name); }

        internal static void checkLocalSymbol(String name, Codec.Value at) {
            if (name.Equals(SYMBOL_PI) || name.Equals(SYMBOL_EXPONENTIAL_E) || name.Equals(SYMBOL_TRUE)
                    || name.Equals(SYMBOL_FALSE) || specialNumber(name))
                throw error(NAME_COLLISION, at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
        }

        internal static bool structure(String name) {
            switch (name) {
                case HEAD_BLOCK: case HEAD_DECLARE: case HEAD_DEFINE_FUNCTION: case HEAD_FUNCTION:
                case HEAD_DICTIONARY: case HEAD_KEY_VALUE_PAIR: case HEAD_LIMITS: case HEAD_RANGE:
                case HEAD_ERROR: case "ErrorCode": case "List": case HEAD_TUPLE: case "Element":
                case "Apply": case "Program": case "Hold": case "Integral": case "Derivative":
                    return true;
                default: return false;
            }
        }


    }

    internal static class Exchange {
        private static readonly int MAX_DEFINITIONS = 1024;
        internal static readonly int MAX_REFERENCES = 16384;
        private static readonly ImportOptions STRICT = ImportOptions.defaults();

        internal static Result<String> exportExpression(Expression expression) {
            return exportModel(requireExpression(expression), false);
        }

        internal static Result<String> exportProgram(Expression expression) {
            return exportModel(requireExpression(expression), true);
        }

        internal static Result<Expression> importExpression(
                String json, ImportOptions options, params PrimitiveElement[] definitions) {
            Import operation = new Import(json, options, definitions, false);
            Expression result = operation.expression();
            operation.publish();
            List<Diagnostic> diagnostics = operation.diagnostics.OrderBy(item => item.getOffset()).ToList();
            return new Result<Expression>(result, null, diagnostics);
        }

        internal static Result<PrimitiveElement> importDefinition(String json, params PrimitiveElement[] definitions) {
            Import operation = new Import(json, STRICT, definitions, true);
            PrimitiveElement result = operation.definition(operation.root, operation.visible, true);
            operation.publish();
            List<Diagnostic> diagnostics = operation.diagnostics.OrderBy(item => item.getOffset()).ToList();
            return new Result<PrimitiveElement>(result, null, diagnostics);
        }

        internal static Result<String> exportDefinition(PrimitiveElement definition) {
            requireDefinition(definition);
            Analysis analysis = new Analysis(new Codec.Budget());
            FunctionBody body = definition is Function ? analysis.function((Function) definition, 0, false) : null;
            String json = write(declaration(definition, body), analysis.budget);
            return new Result<String>(json, null, analysis.diagnostics);
        }

        private static Result<String> exportModel(Expression expression, bool program) {
            Analysis analysis = new Analysis(new Codec.Budget());
            Plan plan = analysis.plan(expression, !program);
            Node result = plan.validate(Tokens.read(expression, analysis.budget));
            Node output = result;
            if (program) {
                foreach (PrimitiveElement dependency in plan.used) analysis.reference(dependency, 0);
                List<Node> declarations = new List<Node>();
                HashSet<String> names = new HashSet<String>();
                foreach (PrimitiveElement element in analysis.order) {
                    String name = definitionName(element);
                    if (!names.Add(name)) throw error(NAME_COLLISION, null, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
                    declarations.Add(declaration(element, analysis.body(element)));
                }
                declarations.Add(result);
                output = call(HEAD_BLOCK, null, declarations);
            }
            return new Result<String>(write(output, analysis.budget), null, analysis.diagnostics);
        }

        private static Expression requireExpression(Expression expression) {
            if (expression == null || expression.GetType() != typeof(Expression))
                throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
            return expression;
        }

        internal static void requireReference(PrimitiveElement definition, bool allowSubclassReferences) {
            if (definition is RecursiveArgument || !allowSubclassReferences && !isBaseDefinition(definition))
                throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
        }

        private static bool isBaseDefinition(PrimitiveElement definition) {
            Type type = definition.GetType();
            return type == typeof(Argument) || type == typeof(Function) || type == typeof(Constant);
        }

        internal static bool declarableValue(PrimitiveElement element) {
            if (!isBaseDefinition(element)) return false;
            if (element is Argument) {
                Argument argument = (Argument) element;
                return argument.argumentType == Argument.FREE_ARGUMENT && argument.getArgumentBodyType() == Argument.BODY_RUNTIME;
            }
            if (element is Function) {
                Function function = (Function) element;
                return !function.isVariadic && function.getFunctionBodyType() == Function.BODY_RUNTIME;
            }
            return true;
        }

        internal static void requireDefinition(PrimitiveElement definition) {
            if (definition == null) throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
            Type type = definition.GetType();
            if (type == typeof(Argument)) {
                Argument argument = (Argument) definition;
                if (argument.argumentType == Argument.FREE_ARGUMENT && argument.getArgumentBodyType() == Argument.BODY_RUNTIME)
                    return;
            } else if (type == typeof(Constant)) {
                return;
            } else if (type == typeof(Function)) {
                Function function = (Function) definition;
                if (!function.isVariadic && function.getFunctionBodyType() == Function.BODY_RUNTIME
                        && function.getParametersNumber() >= 1) return;
            } else if (!(definition is Argument || definition is Constant || definition is Function))
                throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
            throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
        }

        internal static String definitionName(PrimitiveElement definition) {
            if (definition is Argument) return ((Argument) definition).getArgumentName();
            if (definition is Constant) return ((Constant) definition).getConstantName();
            if (definition is Function) return ((Function) definition).getFunctionName();
            throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
        }

        private static HashSet<String> builtins(bool udf, bool unicode) {
            Expression dictionary = new Expression(EMPTY);
            dictionary.UDFExpression = udf;
            if (unicode) dictionary.enableUnicodeBuiltinKeyWordsMode();
            else dictionary.disableUnicodeBuiltinKeyWordsMode();
            HashSet<String> names = new HashSet<String>();
            foreach (KeyWord word in dictionary.getKeyWords()) names.Add(word.wordString);
            return names;
        }

        private static void checkAvailableName(String name, Codec.Value at, HashSet<String> builtins) {
            Codec.Input.checkName(name, at);
            if (builtins.Contains(name) && !mXparser.checkIfsetToOverrideBuiltinTokens())
                throw error(NAME_COLLISION, at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
        }

        private static void addVisible(Dictionary<String, PrimitiveElement> visible, PrimitiveElement element) {
            String name = definitionName(element);
            PrimitiveElement previous;
            visible.TryGetValue(name, out previous);
            visible[name] = element;
            if (previous != null && previous != element)
                throw error(NAME_COLLISION, null, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
        }

        private static Dictionary<String, PrimitiveElement> context(Expression expression, OrderedDictionary parameters) {
            Dictionary<String, PrimitiveElement> visible = new Dictionary<String, PrimitiveElement>();
            foreach (Argument argument in expression.argumentsList) {
                if (!parameters.Values.Cast<Argument>().Contains(argument)) addVisible(visible, argument);
            }
            foreach (Constant constant in expression.constantsList) addVisible(visible, constant);
            foreach (Function function in expression.functionsList) addVisible(visible, function);
            return visible;
        }

        private static OrderedDictionary formalParameters(Function function, HashSet<String> names) {
            int arity = function.getParametersNumber();
            if (arity > MAX_DEFINITIONS || arity > function.functionExpression.argumentsList.Count)
                throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
            OrderedDictionary result = new OrderedDictionary();
            for (int i = 0; i < arity; i++) {
                Argument argument = function.functionExpression.argumentsList[i];
                requireDefinition(argument);
                String name = argument.getArgumentName();
                checkAvailableName(name, null, names);
                Vocabulary.checkLocalSymbol(name, null);
                if (result.Contains(name))
                    throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                result.Add(name, argument);
            }
            return result;
        }

        private sealed class FunctionBody {
            internal readonly Node root;
            internal readonly OrderedDictionary parameters;

            internal FunctionBody(Node root, OrderedDictionary parameters) {
                this.root = root;
                this.parameters = parameters;
            }
        }

        private sealed class Analysis {
            internal readonly Codec.Budget budget;
            internal readonly List<Diagnostic> diagnostics = new List<Diagnostic>();
            private readonly Dictionary<Function, FunctionBody> bodies = new Dictionary<Function, FunctionBody>(new IdentityComparer<Function>());
            private readonly HashSet<PrimitiveElement> visiting = new HashSet<PrimitiveElement>(new IdentityComparer<PrimitiveElement>());
            private readonly HashSet<PrimitiveElement> done = new HashSet<PrimitiveElement>(new IdentityComparer<PrimitiveElement>());
            private readonly Dictionary<Argument, Function> parameterOwners = new Dictionary<Argument, Function>(new IdentityComparer<Argument>());
            internal readonly List<PrimitiveElement> order = new List<PrimitiveElement>();
            int refs;

            internal Analysis(Codec.Budget budget) {
                this.budget = budget;
            }

            internal FunctionBody body(PrimitiveElement element) {
                Function function = element as Function;
                FunctionBody result;
                return function != null && bodies.TryGetValue(function, out result) ? result : null;
            }

            internal Plan plan(Expression expression, bool open) {
                OrderedDictionary parameters = new OrderedDictionary();
                Dictionary<String, PrimitiveElement> visible = context(expression, parameters);
                return new Plan(visible, parameters,
                        builtins(expression.UDFExpression, expression.checkIfUnicodeBuiltinKeyWordsMode()),
                        open, open, true, STRICT, diagnostics, budget);
            }

            internal void reference(PrimitiveElement element, int depth) {
                if (++refs > MAX_REFERENCES)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_REFERENCES));
                if (depth >= Codec.MAX_DEPTH)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, Codec.MAX_DEPTH));
                requireDefinition(element);
                if (element is Argument && parameterOwners.ContainsKey((Argument) element))
                    throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                if (done.Contains(element)) return;
                if (element is Function) {
                    function((Function) element, depth, true);
                    return;
                }
                finish(element);
            }

            internal FunctionBody function(Function function, int depth, bool includeDependencies) {
                if (!visiting.Add(function))
                    throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                Expression source = function.functionExpression;
                HashSet<String> keywords = builtins(true, source.checkIfUnicodeBuiltinKeyWordsMode());
                checkAvailableName(function.getFunctionName(), null, keywords);
                OrderedDictionary parameters = formalParameters(function, keywords);
                Dictionary<String, PrimitiveElement> visible = context(source, parameters);
                visible[function.getFunctionName()] = function;
                foreach (Argument param in parameters.Values) {
                    Function previous;
                    parameterOwners.TryGetValue(param, out previous);
                    parameterOwners[param] = function;
                    if (done.Contains(param) || previous != null && previous != function
                            || visible.ContainsKey(param.getArgumentName()))
                        throw error(UNSUPPORTED_PROGRAM, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
                }
                Plan plan = new Plan(visible, parameters, keywords, false, false, true,
                        STRICT, diagnostics, budget);
                Node root = plan.validate(Tokens.read(source, budget));
                checkRecursion(function, root, plan);
                FunctionBody body = new FunctionBody(root, parameters);
                if (!includeDependencies) {
                    foreach (PrimitiveElement dependency in plan.used)
                        if (dependency != function) externalWarning(diagnostics, null, definitionName(dependency));
                    return body;
                }
                foreach (PrimitiveElement dependency in plan.used)
                    if (dependency != function) reference(dependency, depth + 1);
                bodies[function] = body;
                visiting.Remove(function);
                finish(function);
                return body;
            }

            private void finish(PrimitiveElement element) {
                if (order.Count >= MAX_DEFINITIONS)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                done.Add(element);
                order.Add(element);
            }
        }

        private static void checkRecursion(Function function, Node body, Plan plan) {
            if (!plan.usedSet.Contains(function)) return;
            Node call = recursiveCallInDetachedExpression(function, body, false);
            if (call != null)
                throw error(UNSUPPORTED_PROGRAM, call.at, STRING_RESOURCES.MATHJSON_UNSUPPORTED_DEFINITION);
        }

        /* If predicates and iterative operators evaluate in expressions with a fresh recursion counter. */
        private static Node recursiveCallInDetachedExpression(Function function, Node node, bool detached) {
            if (node.kind != Kind.CALL) return null;
            if (detached && node.binding == function) return node;
            Operation op = node.userCall ? null : operation(node.name);
            for (int i = 0; i < node.children.Count; i++) {
                bool childDetached = detached || op != null && (op.iterator() || op == Operation.IF && i == 0);
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
                List<Node> operands = new List<Node>();
                operands.Add(body.root);
                foreach (String parameter in body.parameters.Keys) operands.Add(atom(Kind.SYMBOL, parameter, null));
                return call(HEAD_DEFINE_FUNCTION, null, id, call(HEAD_FUNCTION, null, operands));
            }
            double value;
            if (element is Constant) value = ((Constant) element).getConstantValue();
            else {
                Argument argument = (Argument) element;
                value = argument.syntaxStatusDefinition ? argument.argumentValue : Double.NaN;
            }
            if (!finite(value)) throw error(UNSUPPORTED_NUMBER, null, STRING_RESOURCES.MATHJSON_UNSUPPORTED_NUMBER);
            Node pair = call(HEAD_KEY_VALUE_PAIR, null, atom(Kind.SYMBOL, ATTRIBUTE_VALUE, null), number(value, null));
            Node dictionary = element is Constant
                    ? call(HEAD_DICTIONARY, null, pair, call(HEAD_KEY_VALUE_PAIR, null, atom(Kind.SYMBOL, ATTRIBUTE_CONSTANT, null),
                    atom(Kind.SYMBOL, SYMBOL_TRUE, null)))
                    : call(HEAD_DICTIONARY, null, pair);
            return call(HEAD_DECLARE, null, id, dictionary);
        }

        private sealed class Edge {
            internal readonly Expression body;
            internal readonly PrimitiveElement definition;

            internal Edge(Expression body, PrimitiveElement definition) {
                this.body = body;
                this.definition = definition;
            }

            internal void registerObserver() {
                if (definition is Argument) ((Argument) definition).addRelatedExpression(body);
                else if (definition is Constant) ((Constant) definition).addRelatedExpression(body);
                else ((Function) definition).addRelatedExpression(body);
            }

            internal void rollback() {
                if (definition is Argument) ((Argument) definition).removeRelatedExpression(body);
                else if (definition is Constant) ((Constant) definition).removeRelatedExpression(body);
                else ((Function) definition).removeRelatedExpression(body);
            }
        }

        private sealed class Import {
            internal readonly Codec.Budget budget = new Codec.Budget();
            internal readonly List<Diagnostic> diagnostics = new List<Diagnostic>();
            internal readonly Dictionary<String, PrimitiveElement> visible = new Dictionary<String, PrimitiveElement>();
            internal readonly HashSet<String> rootBuiltins = builtins(false, true);
            internal readonly HashSet<String> udfBuiltins = builtins(true, true);
            internal readonly Dictionary<PrimitiveElement, PrimitiveElement> shadows =
                    new Dictionary<PrimitiveElement, PrimitiveElement>(new IdentityComparer<PrimitiveElement>());
            internal readonly List<Edge> edges = new List<Edge>();
            internal readonly ImportOptions options;
            internal readonly Node root;

            internal Import(String json, ImportOptions options, PrimitiveElement[] definitions, bool definitionOnly) {
                if (options == null || definitions == null)
                    throw error(INVALID_ARGUMENT, null, STRING_RESOURCES.MATHJSON_INVALID_ARGUMENT);
                if (definitions.Length > MAX_DEFINITIONS)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                this.options = options;
                root = new Codec.Input(budget).read(json);
                if (root.call(HEAD_ERROR)) throw error("INPUT_ERROR", root.at, STRING_RESOURCES.MATHJSON_INPUT_ERROR_NODE);
                checkRoot(root, definitionOnly);
                foreach (PrimitiveElement definition in definitions) {
                    if (!(definition is Argument || definition is Constant || definition is Function)) continue;
                    String name = definitionName(definition);
                    PrimitiveElement existing;
                    if (!visible.TryGetValue(name, out existing)) visible.Add(name, definition);
                    // A null entry marks an ambiguous name until it is referenced.
                    else if (existing != definition) visible[name] = null;
                }
            }

            internal Expression expression() {
                bool block = root.call(HEAD_BLOCK);
                Node formula = root;
                List<PrimitiveElement> declared = new List<PrimitiveElement>();
                if (block) {
                    if (visible.Count + root.children.Count - 1 > MAX_DEFINITIONS)
                        throw error(RESOURCE_LIMIT, root.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                    for (int i = 0; i + 1 < root.children.Count; i++) {
                        PrimitiveElement element = definition(root.arg(i), visible, false);
                        visible.Add(definitionName(element), element);
                        declared.Add(element);
                    }
                    formula = root.arg(root.children.Count - 1);
                }
                Plan plan = new Plan(visible, new OrderedDictionary(), rootBuiltins, !block, !block, false,
                        options, diagnostics, budget);
                Node canonical = plan.validate(formula);
                Expression result = configured(new Expression(EMPTY));
                Expression control = configured(new Expression(EMPTY));
                List<PrimitiveElement> bindings = new List<PrimitiveElement>(declared);
                HashSet<PrimitiveElement> seen = new HashSet<PrimitiveElement>(declared, new IdentityComparer<PrimitiveElement>());
                foreach (PrimitiveElement element in plan.used) if (seen.Add(element)) bindings.Add(element);
                foreach (PrimitiveElement element in bindings) {
                    plan.checkIteratorBinding(element);
                    connect(result, element);
                    add(control, shadow(element));
                }
                String text = emitChecked(canonical, control, plan.hasOpenReferences());
                result.setExpressionString(text);
                return result;
            }

            internal PrimitiveElement definition(Node node, Dictionary<String, PrimitiveElement> environment, bool allowOpen) {
                checkRoot(node, true);
                Codec.Input.checkArity(node, 2);
                Node id = node.arg(0);
                if (id.kind != Kind.SYMBOL) throw error(INVALID_SHAPE, id.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                checkAvailableName(id.name, id.at, node.call(HEAD_DEFINE_FUNCTION) ? udfBuiltins : rootBuiltins);
                if (environment.ContainsKey(id.name)) throw error(NAME_COLLISION, id.at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
                if (node.call(HEAD_DEFINE_FUNCTION)) return functionDefinition(id.name, node.arg(1), environment, allowOpen);
                return scalarDefinition(id.name, node.arg(1));
            }

            private PrimitiveElement scalarDefinition(String name, Node dictionary) {
                if (!dictionary.call(HEAD_DICTIONARY))
                    throw error(INVALID_SHAPE, dictionary.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                Node value = null;
                Node constant = null;
                foreach (Node pair in dictionary.children) {
                    if ((!pair.call(HEAD_KEY_VALUE_PAIR) && !pair.call(HEAD_TUPLE)) || pair.children.Count != 2)
                        throw error(INVALID_SHAPE, pair.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    Node key = pair.arg(0), entry = pair.arg(1);
                    if (key.kind != Kind.STRING && key.kind != Kind.SYMBOL)
                        throw error(INVALID_SHAPE, key.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    if (key.name.Equals(ATTRIBUTE_VALUE) && value == null && entry.kind == Kind.NUMBER) value = entry;
                    else if (key.name.Equals(ATTRIBUTE_CONSTANT) && constant == null
                            && (entry.symbol(SYMBOL_TRUE) || entry.symbol(SYMBOL_FALSE))) constant = entry;
                    else throw error(INVALID_SHAPE, pair.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                }
                if (value == null) throw error(INVALID_SHAPE, dictionary.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                value = resolveNumber(value, budget, false);
                return constant != null && constant.symbol(SYMBOL_TRUE) ? (PrimitiveElement)new Constant(name, value.number) : new Argument(name, value.number);
            }

            private Function functionDefinition(String name, Node node, Dictionary<String, PrimitiveElement> environment,
                                                bool allowOpen) {
                if (!node.call(HEAD_FUNCTION) || node.children.Count < 2)
                    throw error(INVALID_SHAPE, node.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                if (node.children.Count > MAX_DEFINITIONS + 1)
                    throw error(RESOURCE_LIMIT, node.at, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_DEFINITIONS));
                HashSet<String> names = new HashSet<String>();
                List<String> parameterOrder = new List<String>();
                for (int i = 1; i < node.children.Count; i++) {
                    Node formal = node.arg(i);
                    if (formal.kind != Kind.SYMBOL) throw error(INVALID_SHAPE, formal.at, STRING_RESOURCES.MATHJSON_INVALID_SHAPE);
                    checkAvailableName(formal.name, formal.at, udfBuiltins);
                    Vocabulary.checkLocalSymbol(formal.name, formal.at);
                    if (formal.name.Equals(name) || !names.Add(formal.name))
                        throw error(NAME_COLLISION, formal.at, STRING_RESOURCES.MATHJSON_NAME_COLLISION);
                    parameterOrder.Add(formal.name);
                }
                String[] formalNames = parameterOrder.ToArray();
                Function result = new Function(name, "0", formalNames);
                Dictionary<String, PrimitiveElement> scope = new Dictionary<String, PrimitiveElement>(environment);
                scope.Add(name, result);
                OrderedDictionary parameters = new OrderedDictionary();
                for (int i = 0; i < formalNames.Length; i++)
                    parameters[formalNames[i]] = result.functionExpression.argumentsList[i];
                Plan plan = new Plan(scope, parameters, udfBuiltins,
                        allowOpen, false, false, options, diagnostics, budget);
                Node body = plan.validate(node.arg(0));
                checkRecursion(result, body, plan);
                Expression actual = configured(result.functionExpression);
                Function staged = new Function(name, "0", formalNames);
                Expression control = configured(staged.functionExpression);
                shadows[result] = staged;
                for (int i = 0; i < formalNames.Length; i++)
                    shadows[actual.argumentsList[i]] = control.argumentsList[i];
                plan.checkIteratorBinding(result);
                foreach (PrimitiveElement element in plan.used) {
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
                PrimitiveElement cached;
                if (shadows.TryGetValue(element, out cached)) return cached;
                PrimitiveElement copy;
                if (element is Function) {
                    Function function = (Function) element;
                    if (function.isVariadic) copy = new Function(function.getFunctionName() + "(...)=0");
                    else {
                        // The control function is syntax-checked, never evaluated.
                        Function control = new Function(function.getFunctionName(), "0", new String[0]);
                        control.setParametersNumber(function.getParametersNumber());
                        copy = control;
                    }
                } else if (element is Constant) copy = new Constant(definitionName(element), 0);
                else copy = new Argument(definitionName(element), 0);
                shadows[element] = copy;
                return copy;
            }

            private String emitChecked(Node plan, Expression control, bool open) {
                Dictionary<String, KeyWord> keywords = new Dictionary<String, KeyWord>();
                foreach (KeyWord keyword in control.getKeyWords())
                    if (!keywords.ContainsKey(keyword.wordString)) keywords.Add(keyword.wordString, keyword);
                // Operand groups can affect when the evaluator reads or calls user definitions.
                bool preserveGroups = bindSpellings(plan, keywords) || open;
                String text = Plan.emit(plan, budget, preserveGroups);
                control.setExpressionString(text);
                Node parsed;
                try {
                    parsed = Tokens.read(control, budget);
                } catch (ConversionFailure ex) {
                    if (ex.diagnostic.getCode().Equals(RESOURCE_LIMIT)) throw;
                    throw error(EMISSION_MISMATCH, plan.at, STRING_RESOURCES.MATHJSON_EMISSION_MISMATCH);
                }
                if (!Plan.same(plan, parsed, shadows))
                    throw error(EMISSION_MISMATCH, plan.at, STRING_RESOURCES.MATHJSON_EMISSION_MISMATCH);
                if (!open && !control.checkSyntax())
                    throw error(EMISSION_MISMATCH, plan.at, control.getErrorMessage());
                return text;
            }

            private bool bindSpellings(Node node, Dictionary<String, KeyWord> keywords) {
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
                bool usesDefinitions = node.userCall || node.binding != null;
                foreach (Node child in node.children) usesDefinitions |= bindSpellings(child, keywords);
                return usesDefinitions;
            }

            private String spelling(Node at, Dictionary<String, KeyWord> keywords, String source, int type, int id) {
                KeyWord keyword;
                keywords.TryGetValue(source, out keyword);
                if (keyword != null && keyword.wordTypeId == type && keyword.wordId == id) return source;
                if (type != Operator.TYPE_ID && type != BinaryRelation.TYPE_ID) {
                    String namePattern = type == ConstantValue.TYPE_ID
                            ? ParserSymbol.nameOnlyTokenOptBracketsRegExp : ParserSymbol.nameOnlyTokenRegExp;
                    foreach (KeyWord alias in keywords.Values)
                        if (alias.wordTypeId == type && alias.wordId == id && Regex.IsMatch(alias.wordString, "\\A(?:" + namePattern + ")\\z"))
                            return alias.wordString;
                }
                throw error("BUILTIN_UNAVAILABLE", at.at, formatMessage(STRING_RESOURCES.MATHJSON_BUILTIN_SPELLING_UNAVAILABLE, source));
            }

            private void connect(Expression expression, PrimitiveElement element) {
                if (edges.Count >= MAX_REFERENCES)
                    throw error(RESOURCE_LIMIT, null, formatMessage(STRING_RESOURCES.MATHJSON_RESOURCE_LIMIT, MAX_REFERENCES));
                add(expression, element);
                edges.Add(new Edge(expression, element));
            }

            internal void publish() {
                int registered = 0;
                try {
                    foreach (Edge edge in edges) {
                        edge.registerObserver();
                        registered++;
                    }
                } catch (Exception) {
                    for (int i = registered - 1; i >= 0; i--) edges[i].rollback();
                    throw;
                }
            }
        }

        private static void checkRoot(Node node, bool definitionOnly) {
            if (!definitionOnly && node.call(HEAD_BLOCK) && node.children.Count != 0)
                node = node.arg(node.children.Count - 1);
            bool declaration = node.call(HEAD_DECLARE) || node.call(HEAD_DEFINE_FUNCTION);
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
            if (element is Argument) expression.argumentsList.Add((Argument) element);
            else if (element is Constant) expression.constantsList.Add((Constant) element);
            else expression.functionsList.Add((Function) element);
        }

    }

    internal sealed class IdentityComparer<T> : IEqualityComparer<T> {
        public bool Equals(T left, T right) { return Object.ReferenceEquals(left, right); }
        public int GetHashCode(T item) { return RuntimeHelpers.GetHashCode(item); }
    }

    private static Regex wholePattern(String pattern) { return new Regex("\\A(?:" + pattern + ")\\z", RegexOptions.CultureInvariant); }
    private static String group(Match match, int n) { return match.Groups[n].Success ? match.Groups[n].Value : null; }
    private static String substring(String text, int from, int to) { return text.Substring(from, to - from); }
    private static bool startsAt(String text, String word, int start) {
        return text.Length - start >= word.Length && String.CompareOrdinal(text, start, word, 0, word.Length) == 0;
    }

    private static void swap<T>(List<T> list, int first, int second) {
        T value = list[first];
        list[first] = list[second];
        list[second] = value;
    }

        private static bool finite(double value) { return !Double.IsNaN(value) && !Double.IsInfinity(value); }

    private MathJSONUtils() {}
}
}
