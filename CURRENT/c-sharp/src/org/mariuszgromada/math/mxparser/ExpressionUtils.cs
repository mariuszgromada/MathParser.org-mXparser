/*
 * @(#)ExpressionUtils.cs        6.0.0    2024-05-19
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
using org.mariuszgromada.math.mxparser.parsertokens;
using System;
using System.Collections.Generic;
using System.Text;

namespace org.mariuszgromada.math.mxparser {
    /**
	 * Utility methods used in Expression class
     *
     * @author         <b>Mariusz Gromada</b><br>
     *                 <a href="https://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
     *                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
     *                 <a href="https://payhip.com/INFIMA" target="_blank">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br>
     *                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br>
     *                 <a href="https://scalarmath.org/" target="_blank">ScalarMath.org - a powerful math engine and math scripting language</a><br>
     *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Lite</a><br>
     *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
     *                 <a href="https://mathspace.pl" target="_blank">MathSpace.pl</a><br>
     *
     * @see            Expression
     *
     * @version        6.0.0
     */
    internal sealed class ExpressionUtils {
        internal static readonly bool LANGUAGE_SPECIFIC_DESCRIPTIONS_SET = StringModel.LANGUAGE_SPECIFIC_DESCRIPTIONS_SET;
        static void addUDFSpecificParserKeyWords(List<KeyWord> keyWordsList) {
            addKeyWord(Function1Arg.PARAM_STR, Function1Arg.PARAM_DESC, Function1Arg.PARAM_ID, Function1Arg.PARAM_SYN, Function1Arg.PARAM_SINCE, Function1Arg.TYPE_ID, keyWordsList);
            addKeyWord(ConstantValue.NPAR_STR, ConstantValue.NPAR_DESC, ConstantValue.NPAR_ID, ConstantValue.NPAR_SYN, ConstantValue.NPAR_SINCE, ConstantValue.TYPE_ID, keyWordsList);
        }
        internal static void addArgumentsKeyWords(List<Argument> argumentsList, List<KeyWord> keyWordsList) {
            int argumentsNumber = argumentsList.Count;
            for (int argumentIndex = 0; argumentIndex<argumentsNumber; argumentIndex++) {
                Argument arg = argumentsList[argumentIndex];
                if (arg.getArgumentType() != Argument.RECURSIVE_ARGUMENT)
                    addKeyWord(arg.getArgumentName(),arg.getDescription(), argumentIndex, arg.getArgumentName(), "", Argument.TYPE_ID, keyWordsList);
                else
                    addKeyWord(arg.getArgumentName(),arg.getDescription(), argumentIndex, arg.getArgumentName() + "(n)", "", RecursiveArgument.TYPE_ID_RECURSIVE, keyWordsList);
            }
        }
        internal static void addFunctionsKeyWords(List<Function> functionsList, List<KeyWord> keyWordsList) {
            int functionsNumber = functionsList.Count;
            for (int functionIndex = 0; functionIndex<functionsNumber; functionIndex++) {
                Function fun = functionsList[functionIndex];
                StringBuilder syntax = new StringBuilder(fun.getFunctionName());
                syntax.Append("(");
                int paramsNum = fun.getParametersNumber();
                for (int i = 0; i < paramsNum; i++) {
                    syntax.Append(fun.getParameterName(i));
                    if (paramsNum > 1 && i < paramsNum - 1)
                        syntax.Append(",");
                }
                syntax.Append(")");
                addKeyWord(fun.getFunctionName(), fun.getDescription(), functionIndex, syntax.ToString(), "", Function.TYPE_ID, keyWordsList);
            }
        }
        internal static void addConstantsKeyWords(List<Constant> constantsList, List<KeyWord> keyWordsList) {
            int constantsNumber = constantsList.Count;
            for (int constantIndex = 0; constantIndex < constantsNumber; constantIndex++) {
                Constant c = constantsList[constantIndex];
                addKeyWord(c.getConstantName(), c.getDescription(), constantIndex, c.getConstantName(), "", Constant.TYPE_ID, keyWordsList);
            }
        }

        static void addKeyWord(String wordString, String wordDescription, int wordId, String wordSyntax, String wordSince, int wordTypeId, List<KeyWord> keyWordsList) {
            keyWordsList.Add(new KeyWord(wordString, wordDescription, wordId, wordSyntax, wordSince, wordTypeId));
        }
        static void addKeyWordUnicode(String wordString, String wordDescription, int wordId, String wordSyntax, String wordSince, int wordTypeId, bool unicodeKeyWordsEnabled, List<KeyWord> keyWordsList) {
            if (unicodeKeyWordsEnabled)
                addKeyWord(wordString, wordDescription + ParserSymbol.UNICODE_MATH_DESC, wordId, wordSyntax, wordSince, wordTypeId, keyWordsList);
        }

        static List<KeyWord> baseKeyWordsListParUdfUni111;
        static List<KeyWord> baseKeyWordsListParUdfUni110;
        static List<KeyWord> baseKeyWordsListParUdfUni101;
        static List<KeyWord> baseKeyWordsListParUdfUni100;
        static List<KeyWord> baseKeyWordsListParUdfUni011;
        static List<KeyWord> baseKeyWordsListParUdfUni010;
        static List<KeyWord> baseKeyWordsListParUdfUni001;
        static List<KeyWord> baseKeyWordsListParUdfUni000;

        internal static void addParserKeyWords(bool parserKeyWordsOnly, bool UDFExpression, bool unicodeKeyWordsEnabled, List<KeyWord> keyWordsList) {
            List<KeyWord> baseKeyWordsList = getBaseKeyWordsList(parserKeyWordsOnly, UDFExpression, unicodeKeyWordsEnabled);
            keyWordsList.AddRange(baseKeyWordsList);
        }
        static List<KeyWord> getBaseKeyWordsList(bool parserKeyWordsOnly, bool UDFExpression, bool unicodeKeyWordsEnabled) {
            if (parserKeyWordsOnly && UDFExpression && unicodeKeyWordsEnabled) return baseKeyWordsListParUdfUni111;
            if (parserKeyWordsOnly && UDFExpression && !unicodeKeyWordsEnabled) return baseKeyWordsListParUdfUni110;
            if (parserKeyWordsOnly && !UDFExpression && unicodeKeyWordsEnabled) return baseKeyWordsListParUdfUni101;
            if (parserKeyWordsOnly && !UDFExpression && !unicodeKeyWordsEnabled) return baseKeyWordsListParUdfUni100;
            if (!parserKeyWordsOnly && UDFExpression && unicodeKeyWordsEnabled) return baseKeyWordsListParUdfUni011;
            if (!parserKeyWordsOnly && UDFExpression && !unicodeKeyWordsEnabled) return baseKeyWordsListParUdfUni010;
            if (!parserKeyWordsOnly && !UDFExpression && unicodeKeyWordsEnabled) return baseKeyWordsListParUdfUni001;
            return baseKeyWordsListParUdfUni000;
        }

        internal static void makeAllParserKeyWords() {
            baseKeyWordsListParUdfUni111 = makeParserKeyWords(true, true, true);
            baseKeyWordsListParUdfUni110 = makeParserKeyWords(true, true, false);
            baseKeyWordsListParUdfUni101 = makeParserKeyWords(true, false, true);
            baseKeyWordsListParUdfUni100 = makeParserKeyWords(true, false, false);
            baseKeyWordsListParUdfUni011 = makeParserKeyWords(false, true, true);
            baseKeyWordsListParUdfUni010 = makeParserKeyWords(false, true, false);
            baseKeyWordsListParUdfUni001 = makeParserKeyWords(false, false, true);
            baseKeyWordsListParUdfUni000 = makeParserKeyWords(false, false, false);
        }

        static List<KeyWord> makeParserKeyWords(bool parserKeyWordsOnly, bool UDFExpression, bool unicodeKeyWordsEnabled) {
            List<KeyWord> keyWordsList = new List<KeyWord>();
            makeParserKeyWords(parserKeyWordsOnly, UDFExpression, unicodeKeyWordsEnabled, keyWordsList);
            return keyWordsList;
        }
        private static void makeParserKeyWords(bool parserKeyWordsOnly, bool UDFExpression, bool unicodeKeyWordsEnabled, List<KeyWord> keyWordsList) {
            /*
             * Operators keywords
             */
            addKeyWord(Operator.PLUS_STR, Operator.PLUS_DESC, Operator.PLUS_ID, Operator.PLUS_SYN, Operator.PLUS_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWord(Operator.MINUS_STR, Operator.MINUS_DESC, Operator.MINUS_ID, Operator.MINUS_SYN, Operator.MINUS_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWord(Operator.MULTIPLY_STR, Operator.MULTIPLY_DESC, Operator.MULTIPLY_ID, Operator.MULTIPLY_SYN, Operator.MULTIPLY_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(Operator.MULTIPLY_STR_UNI_1, Operator.MULTIPLY_DESC, Operator.MULTIPLY_ID, Operator.MULTIPLY_SYN_UNI_1, Operator.MULTIPLY_SINCE_UNI_1, Operator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(Operator.MULTIPLY_STR_UNI_2, Operator.MULTIPLY_DESC, Operator.MULTIPLY_ID, Operator.MULTIPLY_SYN_UNI_2, Operator.MULTIPLY_SINCE_UNI_2, Operator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(Operator.MULTIPLY_STR_UNI_3, Operator.MULTIPLY_DESC, Operator.MULTIPLY_ID, Operator.MULTIPLY_SYN_UNI_3, Operator.MULTIPLY_SINCE_UNI_3, Operator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(Operator.DIVIDE_STR, Operator.DIVIDE_DESC, Operator.DIVIDE_ID, Operator.DIVIDE_SYN, Operator.DIVIDE_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWord(Operator.DIVIDE_EUROPE_STR, Operator.DIVIDE_DESC, Operator.DIVIDE_ID, Operator.DIVIDE_EUROPE_SYN, Operator.DIVIDE_SINCE_EUROPE, Operator.TYPE_ID, keyWordsList);
            addKeyWord(Operator.DIVIDE_QUOTIENT_STR, Operator.DIVIDE_QUOTIENT_DESC, Operator.DIVIDE_QUOTIENT_ID, Operator.DIVIDE_QUOTIENT_SYN, Operator.DIVIDE_QUOTIENT_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(Operator.DIVIDE_STR_UNI_1, Operator.DIVIDE_DESC, Operator.DIVIDE_ID, Operator.DIVIDE_SYN_UNI_1, Operator.DIVIDE_SINCE_UNI_1, Operator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(Operator.POWER_STR, Operator.POWER_DESC, Operator.POWER_ID, Operator.POWER_SYN, Operator.POWER_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWord(Operator.FACT_STR, Operator.FACT_DESC, Operator.FACT_ID, Operator.FACT_SYN, Operator.FACT_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWord(Operator.MOD_STR, Operator.MOD_DESC, Operator.MOD_ID, Operator.MOD_SYN, Operator.MOD_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWord(Operator.PERC_STR, Operator.PERC_DESC, Operator.PERC_ID, Operator.PERC_SYN, Operator.PERC_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWord(Operator.TETRATION_STR, Operator.TETRATION_DESC, Operator.TETRATION_ID, Operator.TETRATION_SYN, Operator.TETRATION_SINCE, Operator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(Operator.SQUARE_ROOT_STR, Operator.SQUARE_ROOT_DESC, Operator.SQUARE_ROOT_ID, Operator.SQUARE_ROOT_SYN, Operator.SQUARE_ROOT_SINCE, Operator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(Operator.CUBE_ROOT_STR, Operator.CUBE_ROOT_DESC, Operator.CUBE_ROOT_ID, Operator.CUBE_ROOT_SYN, Operator.CUBE_ROOT_SINCE, Operator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(Operator.FOURTH_ROOT_STR, Operator.FOURTH_ROOT_DESC, Operator.FOURTH_ROOT_ID, Operator.FOURTH_ROOT_SYN, Operator.FOURTH_ROOT_SINCE, Operator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            /*
             * Boolean operators keywords
             */
            addKeyWord(BooleanOperator.NEG_STR, BooleanOperator.NEG_DESC, BooleanOperator.NEG_ID, BooleanOperator.NEG_SYN, BooleanOperator.NEG_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NEG_STR_UNI_1, BooleanOperator.NEG_DESC, BooleanOperator.NEG_ID, BooleanOperator.NEG_SYN_UNI_1, BooleanOperator.NEG_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.AND_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND_SYN, BooleanOperator.AND_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.AND_STR_UNI_1, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND_SYN_UNI_1, BooleanOperator.AND_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.AND1_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND1_SYN, BooleanOperator.AND_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWord(BooleanOperator.AND2_STR, BooleanOperator.AND_DESC, BooleanOperator.AND_ID, BooleanOperator.AND2_SYN, BooleanOperator.AND_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWord(BooleanOperator.NAND_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN, BooleanOperator.NAND_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWord(BooleanOperator.NAND1_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND1_SYN, BooleanOperator.NAND_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWord(BooleanOperator.NAND2_STR, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND2_SYN, BooleanOperator.NAND_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NAND_STR_UNI_1, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN_UNI_1, BooleanOperator.NAND_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NAND_STR_UNI_2, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN_UNI_2, BooleanOperator.NAND_SINCE_UNI_2, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NAND_STR_UNI_3, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN_UNI_3, BooleanOperator.NAND_SINCE_UNI_3, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NAND_STR_UNI_4, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN_UNI_4, BooleanOperator.NAND_SINCE_UNI_4, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NAND_STR_UNI_5, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN_UNI_5, BooleanOperator.NAND_SINCE_UNI_5, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NAND_STR_UNI_6, BooleanOperator.NAND_DESC, BooleanOperator.NAND_ID, BooleanOperator.NAND_SYN_UNI_6, BooleanOperator.NAND_SINCE_UNI_6, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.OR_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR_SYN, BooleanOperator.OR_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWord(BooleanOperator.OR1_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR1_SYN, BooleanOperator.OR_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWord(BooleanOperator.OR2_STR, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR2_SYN, BooleanOperator.OR_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.OR_STR_UNI_1, BooleanOperator.OR_DESC, BooleanOperator.OR_ID, BooleanOperator.OR_SYN_UNI_1, BooleanOperator.OR_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.NOR_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN, BooleanOperator.NOR_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWord(BooleanOperator.NOR1_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR1_SYN, BooleanOperator.NOR_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWord(BooleanOperator.NOR2_STR, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR2_SYN, BooleanOperator.NOR_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NOR_STR_UNI_1, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN_UNI_1, BooleanOperator.NOR_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NOR_STR_UNI_2, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN_UNI_2, BooleanOperator.NOR_SINCE_UNI_2, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NOR_STR_UNI_3, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN_UNI_3, BooleanOperator.NOR_SINCE_UNI_3, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NOR_STR_UNI_4, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN_UNI_4, BooleanOperator.NOR_SINCE_UNI_4, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NOR_STR_UNI_5, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN_UNI_5, BooleanOperator.NOR_SINCE_UNI_5, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NOR_STR_UNI_6, BooleanOperator.NOR_DESC, BooleanOperator.NOR_ID, BooleanOperator.NOR_SYN_UNI_6, BooleanOperator.NOR_SINCE_UNI_6, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.XOR_STR, BooleanOperator.XOR_DESC, BooleanOperator.XOR_ID, BooleanOperator.XOR_SYN, BooleanOperator.XOR_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.XOR_STR_UNI_1, BooleanOperator.XOR_DESC, BooleanOperator.XOR_ID, BooleanOperator.XOR_SYN_UNI_1, BooleanOperator.XOR_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.IMP_STR, BooleanOperator.IMP_DESC, BooleanOperator.IMP_ID, BooleanOperator.IMP_SYN, BooleanOperator.IMP_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.IMP_STR_UNI_1, BooleanOperator.IMP_DESC, BooleanOperator.IMP_ID, BooleanOperator.IMP_SYN_UNI_1, BooleanOperator.IMP_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.NIMP_STR, BooleanOperator.NIMP_DESC, BooleanOperator.NIMP_ID, BooleanOperator.NIMP_SYN, BooleanOperator.NIMP_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.NIMP_STR_UNI_1, BooleanOperator.NIMP_DESC, BooleanOperator.NIMP_ID, BooleanOperator.NIMP_SYN_UNI_1, BooleanOperator.NIMP_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.CIMP_STR, BooleanOperator.CIMP_DESC, BooleanOperator.CIMP_ID, BooleanOperator.CIMP_SYN, BooleanOperator.CIMP_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.CIMP_STR_UNI_1, BooleanOperator.CIMP_DESC, BooleanOperator.CIMP_ID, BooleanOperator.CIMP_SYN_UNI_1, BooleanOperator.CIMP_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.CNIMP_STR, BooleanOperator.CNIMP_DESC, BooleanOperator.CNIMP_ID, BooleanOperator.CNIMP_SYN, BooleanOperator.CNIMP_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.CNIMP_STR_UNI_1, BooleanOperator.CNIMP_DESC, BooleanOperator.CNIMP_ID, BooleanOperator.CNIMP_SYN_UNI_1, BooleanOperator.CNIMP_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BooleanOperator.EQV_STR, BooleanOperator.EQV_DESC, BooleanOperator.EQV_ID, BooleanOperator.EQV_SYN, BooleanOperator.EQV_SINCE, BooleanOperator.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BooleanOperator.EQV_STR_UNI_1, BooleanOperator.EQV_DESC, BooleanOperator.EQV_ID, BooleanOperator.EQV_SYN_UNI_1, BooleanOperator.EQV_SINCE_UNI_1, BooleanOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            /*
             * Binary relations keywords
             */
            addKeyWord(BinaryRelation.EQ_STR, BinaryRelation.EQ_DESC, BinaryRelation.EQ_ID, BinaryRelation.EQ_SYN, BinaryRelation.EQ_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWord(BinaryRelation.EQ1_STR, BinaryRelation.EQ_DESC, BinaryRelation.EQ_ID, BinaryRelation.EQ1_SYN, BinaryRelation.EQ_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWord(BinaryRelation.NEQ_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ_SYN, BinaryRelation.NEQ_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BinaryRelation.NEQ_STR_UNI_1, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ_SYN_UNI_1, BinaryRelation.NEQ_SINCE_UNI_1, BinaryRelation.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BinaryRelation.NEQ1_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ1_SYN, BinaryRelation.NEQ_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWord(BinaryRelation.NEQ2_STR, BinaryRelation.NEQ_DESC, BinaryRelation.NEQ_ID, BinaryRelation.NEQ2_SYN, BinaryRelation.NEQ_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWord(BinaryRelation.LT_STR, BinaryRelation.LT_DESC, BinaryRelation.LT_ID, BinaryRelation.LT_SYN, BinaryRelation.LT_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWord(BinaryRelation.GT_STR, BinaryRelation.GT_DESC, BinaryRelation.GT_ID, BinaryRelation.GT_SYN, BinaryRelation.GT_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWord(BinaryRelation.LEQ_STR, BinaryRelation.LEQ_DESC, BinaryRelation.LEQ_ID, BinaryRelation.LEQ_SYN, BinaryRelation.LEQ_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BinaryRelation.LEQ_STR_UNI_1, BinaryRelation.LEQ_DESC, BinaryRelation.LEQ_ID, BinaryRelation.LEQ_SYN_UNI_1, BinaryRelation.LEQ_SINCE_UNI_1, BinaryRelation.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BinaryRelation.LEQ_STR_UNI_2, BinaryRelation.LEQ_DESC, BinaryRelation.LEQ_ID, BinaryRelation.LEQ_SYN_UNI_2, BinaryRelation.LEQ_SINCE_UNI_2, BinaryRelation.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWord(BinaryRelation.GEQ_STR, BinaryRelation.GEQ_DESC, BinaryRelation.GEQ_ID, BinaryRelation.GEQ_SYN, BinaryRelation.GEQ_SINCE, BinaryRelation.TYPE_ID, keyWordsList);
            addKeyWordUnicode(BinaryRelation.GEQ_STR_UNI_1, BinaryRelation.GEQ_DESC, BinaryRelation.GEQ_ID, BinaryRelation.GEQ_SYN_UNI_1, BinaryRelation.GEQ_SINCE_UNI_1, BinaryRelation.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            addKeyWordUnicode(BinaryRelation.GEQ_STR_UNI_2, BinaryRelation.GEQ_DESC, BinaryRelation.GEQ_ID, BinaryRelation.GEQ_SYN_UNI_2, BinaryRelation.GEQ_SINCE_UNI_2, BinaryRelation.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
            if (!parserKeyWordsOnly) {
                /*
                 * 1 arg functions keywords
                 */
                addKeyWord(Function1Arg.SIN_STR, Function1Arg.SIN_DESC, Function1Arg.SIN_ID, Function1Arg.SIN_SYN, Function1Arg.SIN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.COS_STR, Function1Arg.COS_DESC, Function1Arg.COS_ID, Function1Arg.COS_SYN, Function1Arg.COS_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.TAN_STR, Function1Arg.TAN_DESC, Function1Arg.TAN_ID, Function1Arg.TAN_SYN, Function1Arg.TAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.TG_STR, Function1Arg.TAN_DESC, Function1Arg.TAN_ID, Function1Arg.TG_SYN, Function1Arg.TAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.CTAN_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.CTAN_SYN, Function1Arg.CTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.CTG_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.CTG_SYN, Function1Arg.CTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.COT_STR, Function1Arg.CTAN_DESC, Function1Arg.CTAN_ID, Function1Arg.COT_SYN, Function1Arg.CTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SEC_STR, Function1Arg.SEC_DESC, Function1Arg.SEC_ID, Function1Arg.SEC_SYN, Function1Arg.SEC_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.COSEC_STR, Function1Arg.COSEC_DESC, Function1Arg.COSEC_ID, Function1Arg.COSEC_SYN, Function1Arg.COSEC_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.CSC_STR, Function1Arg.COSEC_DESC, Function1Arg.COSEC_ID, Function1Arg.CSC_SYN, Function1Arg.COSEC_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ASIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ASIN_SYN, Function1Arg.ASIN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARSIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ARSIN_SYN, Function1Arg.ASIN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCSIN_STR, Function1Arg.ASIN_DESC, Function1Arg.ASIN_ID, Function1Arg.ARCSIN_SYN, Function1Arg.ASIN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ACOS_SYN, Function1Arg.ACOS_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ARCOS_SYN, Function1Arg.ACOS_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCOS_STR, Function1Arg.ACOS_DESC, Function1Arg.ACOS_ID, Function1Arg.ARCCOS_SYN, Function1Arg.ACOS_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ATAN_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ATAN_SYN, Function1Arg.ATAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCTAN_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ARCTAN_SYN, Function1Arg.ATAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ATG_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ATG_SYN, Function1Arg.ATAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCTG_STR, Function1Arg.ATAN_DESC, Function1Arg.ATAN_ID, Function1Arg.ARCTG_SYN, Function1Arg.ATAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACTAN_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACTAN_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCTAN_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCTAN_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACTG_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACTG_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCTG_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCTG_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACOT_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ACOT_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCOT_STR, Function1Arg.ACTAN_DESC, Function1Arg.ACTAN_ID, Function1Arg.ARCCOT_SYN, Function1Arg.ACTAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LN_STR, Function1Arg.LN_DESC, Function1Arg.LN_ID, Function1Arg.LN_SYN, Function1Arg.LN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LOG2_STR, Function1Arg.LOG2_DESC, Function1Arg.LOG2_ID, Function1Arg.LOG2_SYN, Function1Arg.LOG2_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LOG10_STR, Function1Arg.LOG10_DESC, Function1Arg.LOG10_ID, Function1Arg.LOG10_SYN, Function1Arg.LOG10_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LOG10_STR_LG, Function1Arg.LOG10_DESC, Function1Arg.LOG10_ID, Function1Arg.LOG10_SYN_LG, Function1Arg.LOG10_SINCE_LG, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.RAD_STR, Function1Arg.RAD_DESC, Function1Arg.RAD_ID, Function1Arg.RAD_SYN, Function1Arg.RAD_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.EXP_STR, Function1Arg.EXP_DESC, Function1Arg.EXP_ID, Function1Arg.EXP_SYN, Function1Arg.EXP_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SQRT_STR, Function1Arg.SQRT_DESC, Function1Arg.SQRT_ID, Function1Arg.SQRT_SYN, Function1Arg.SQRT_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SINH_STR, Function1Arg.SINH_DESC, Function1Arg.SINH_ID, Function1Arg.SINH_SYN, Function1Arg.SINH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.COSH_STR, Function1Arg.COSH_DESC, Function1Arg.COSH_ID, Function1Arg.COSH_SYN, Function1Arg.COSH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.TANH_STR, Function1Arg.TANH_DESC, Function1Arg.TANH_ID, Function1Arg.TANH_SYN, Function1Arg.TANH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.TGH_STR, Function1Arg.TANH_DESC, Function1Arg.TANH_ID, Function1Arg.TGH_SYN, Function1Arg.TANH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.CTANH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.CTANH_SYN, Function1Arg.COTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.COTH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.COTH_SYN, Function1Arg.COTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.CTGH_STR, Function1Arg.COTH_DESC, Function1Arg.COTH_ID, Function1Arg.CTGH_SYN, Function1Arg.COTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SECH_STR, Function1Arg.SECH_DESC, Function1Arg.SECH_ID, Function1Arg.SECH_SYN, Function1Arg.SECH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.CSCH_STR, Function1Arg.CSCH_DESC, Function1Arg.CSCH_ID, Function1Arg.CSCH_SYN, Function1Arg.CSCH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.COSECH_STR, Function1Arg.CSCH_DESC, Function1Arg.CSCH_ID, Function1Arg.COSECH_SYN, Function1Arg.CSCH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.DEG_STR, Function1Arg.DEG_DESC, Function1Arg.DEG_ID, Function1Arg.DEG_SYN, Function1Arg.DEG_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ABS_STR, Function1Arg.ABS_DESC, Function1Arg.ABS_ID, Function1Arg.ABS_SYN, Function1Arg.ABS_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SGN_STR, Function1Arg.SGN_DESC, Function1Arg.SGN_ID, Function1Arg.SGN_SYN, Function1Arg.SGN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.FLOOR_STR, Function1Arg.FLOOR_DESC, Function1Arg.FLOOR_ID, Function1Arg.FLOOR_SYN, Function1Arg.FLOOR_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.CEIL_STR, Function1Arg.CEIL_DESC, Function1Arg.CEIL_ID, Function1Arg.CEIL_SYN, Function1Arg.CEIL_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.NOT_STR, Function1Arg.NOT_DESC, Function1Arg.NOT_ID, Function1Arg.NOT_SYN, Function1Arg.NOT_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ASINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ASINH_SYN, Function1Arg.ARSINH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARSINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ARSINH_SYN, Function1Arg.ARSINH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCSINH_STR, Function1Arg.ARSINH_DESC, Function1Arg.ARSINH_ID, Function1Arg.ARCSINH_SYN, Function1Arg.ARSINH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ACOSH_SYN, Function1Arg.ARCOSH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ARCOSH_SYN, Function1Arg.ARCOSH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCOSH_STR, Function1Arg.ARCOSH_DESC, Function1Arg.ARCOSH_ID, Function1Arg.ARCCOSH_SYN, Function1Arg.ARCOSH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ATANH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ATANH_SYN, Function1Arg.ARTANH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCTANH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ARCTANH_SYN, Function1Arg.ARTANH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ATGH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ATGH_SYN, Function1Arg.ARTANH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCTGH_STR, Function1Arg.ARTANH_DESC, Function1Arg.ARTANH_ID, Function1Arg.ARCTGH_SYN, Function1Arg.ARTANH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACTANH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACTANH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCTANH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCTANH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACOTH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCOTH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCOTH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCOTH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACTGH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ACTGH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCTGH_STR, Function1Arg.ARCOTH_DESC, Function1Arg.ARCOTH_ID, Function1Arg.ARCCTGH_SYN, Function1Arg.ARCOTH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ASECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ASECH_SYN, Function1Arg.ARSECH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARSECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ARSECH_SYN, Function1Arg.ARSECH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCSECH_STR, Function1Arg.ARSECH_DESC, Function1Arg.ARSECH_ID, Function1Arg.ARCSECH_SYN, Function1Arg.ARSECH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ACSCH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCSCH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCSCH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCCSCH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ACOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ACOSECH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCOSECH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCOSECH_STR, Function1Arg.ARCSCH_DESC, Function1Arg.ARCSCH_ID, Function1Arg.ARCCOSECH_SYN, Function1Arg.ARCSCH_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SA_STR, Function1Arg.SA_DESC, Function1Arg.SA_ID, Function1Arg.SA_SYN, Function1Arg.SA_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SA1_STR, Function1Arg.SA_DESC, Function1Arg.SA_ID, Function1Arg.SA1_SYN, Function1Arg.SA_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SINC_STR, Function1Arg.SINC_DESC, Function1Arg.SINC_ID, Function1Arg.SINC_SYN, Function1Arg.SINC_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.BELL_NUMBER_STR, Function1Arg.BELL_NUMBER_DESC, Function1Arg.BELL_NUMBER_ID, Function1Arg.BELL_NUMBER_SYN, Function1Arg.BELL_NUMBER_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.FIBONACCI_NUMBER_STR, Function1Arg.FIBONACCI_NUMBER_DESC, Function1Arg.FIBONACCI_NUMBER_ID, Function1Arg.FIBONACCI_NUMBER_SYN, Function1Arg.FIBONACCI_NUMBER_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LUCAS_NUMBER_STR, Function1Arg.LUCAS_NUMBER_DESC, Function1Arg.LUCAS_NUMBER_ID, Function1Arg.LUCAS_NUMBER_SYN, Function1Arg.LUCAS_NUMBER_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.HARMONIC_NUMBER_STR, Function1Arg.HARMONIC_NUMBER_DESC, Function1Arg.HARMONIC_NUMBER_ID, Function1Arg.HARMONIC_NUMBER_SYN, Function1Arg.HARMONIC_NUMBER_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.IS_PRIME_STR, Function1Arg.IS_PRIME_DESC, Function1Arg.IS_PRIME_ID, Function1Arg.IS_PRIME_SYN, Function1Arg.IS_PRIME_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.PRIME_COUNT_STR, Function1Arg.PRIME_COUNT_DESC, Function1Arg.PRIME_COUNT_ID, Function1Arg.PRIME_COUNT_SYN, Function1Arg.PRIME_COUNT_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.EXP_INT_STR, Function1Arg.EXP_INT_DESC, Function1Arg.EXP_INT_ID, Function1Arg.EXP_INT_SYN, Function1Arg.EXP_INT_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LOG_INT_STR, Function1Arg.LOG_INT_DESC, Function1Arg.LOG_INT_ID, Function1Arg.LOG_INT_SYN, Function1Arg.LOG_INT_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.OFF_LOG_INT_STR, Function1Arg.OFF_LOG_INT_DESC, Function1Arg.OFF_LOG_INT_ID, Function1Arg.OFF_LOG_INT_SYN, Function1Arg.OFF_LOG_INT_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.GAUSS_ERF_STR, Function1Arg.GAUSS_ERF_DESC, Function1Arg.GAUSS_ERF_ID, Function1Arg.GAUSS_ERF_SYN, Function1Arg.GAUSS_ERF_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.GAUSS_ERFC_STR, Function1Arg.GAUSS_ERFC_DESC, Function1Arg.GAUSS_ERFC_ID, Function1Arg.GAUSS_ERFC_SYN, Function1Arg.GAUSS_ERFC_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.GAUSS_ERF_INV_STR, Function1Arg.GAUSS_ERF_INV_DESC, Function1Arg.GAUSS_ERF_INV_ID, Function1Arg.GAUSS_ERF_INV_SYN, Function1Arg.GAUSS_ERF_INV_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.GAUSS_ERFC_INV_STR, Function1Arg.GAUSS_ERFC_INV_DESC, Function1Arg.GAUSS_ERFC_INV_ID, Function1Arg.GAUSS_ERFC_INV_SYN, Function1Arg.GAUSS_ERFC_INV_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ULP_STR, Function1Arg.ULP_DESC, Function1Arg.ULP_ID, Function1Arg.ULP_SYN, Function1Arg.ULP_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ISNAN_STR, Function1Arg.ISNAN_DESC, Function1Arg.ISNAN_ID, Function1Arg.ISNAN_SYN, Function1Arg.ISNAN_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.NDIG10_STR, Function1Arg.NDIG10_DESC, Function1Arg.NDIG10_ID, Function1Arg.NDIG10_SYN, Function1Arg.NDIG10_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.NFACT_STR, Function1Arg.NFACT_DESC, Function1Arg.NFACT_ID, Function1Arg.NFACT_SYN, Function1Arg.NFACT_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCSEC_STR, Function1Arg.ARCSEC_DESC, Function1Arg.ARCSEC_ID, Function1Arg.ARCSEC_SYN, Function1Arg.ARCSEC_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.ARCCSC_STR, Function1Arg.ARCCSC_DESC, Function1Arg.ARCCSC_ID, Function1Arg.ARCCSC_SYN, Function1Arg.ARCCSC_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.GAMMA_STR, Function1Arg.GAMMA_DESC, Function1Arg.GAMMA_ID, Function1Arg.GAMMA_SYN, Function1Arg.GAMMA_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LAMBERT_W0_STR, Function1Arg.LAMBERT_W0_DESC, Function1Arg.LAMBERT_W0_ID, Function1Arg.LAMBERT_W0_SYN, Function1Arg.LAMBERT_W0_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LAMBERT_W1_STR, Function1Arg.LAMBERT_W1_DESC, Function1Arg.LAMBERT_W1_ID, Function1Arg.LAMBERT_W1_SYN, Function1Arg.LAMBERT_W1_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.SGN_GAMMA_STR, Function1Arg.SGN_GAMMA_DESC, Function1Arg.SGN_GAMMA_ID, Function1Arg.SGN_GAMMA_SYN, Function1Arg.SGN_GAMMA_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.LOG_GAMMA_STR, Function1Arg.LOG_GAMMA_DESC, Function1Arg.LOG_GAMMA_ID, Function1Arg.LOG_GAMMA_SYN, Function1Arg.LOG_GAMMA_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.DI_GAMMA_STR, Function1Arg.DI_GAMMA_DESC, Function1Arg.DI_GAMMA_ID, Function1Arg.DI_GAMMA_SYN, Function1Arg.DI_GAMMA_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.RND_STUDENT_T_STR, Function1Arg.RND_STUDENT_T_DESC, Function1Arg.RND_STUDENT_T_ID, Function1Arg.RND_STUDENT_T_SYN, Function1Arg.RND_STUDENT_T_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function1Arg.RND_CHI2_STR, Function1Arg.RND_CHI2_DESC, Function1Arg.RND_CHI2_ID, Function1Arg.RND_CHI2_SYN, Function1Arg.RND_CHI2_SINCE, Function1Arg.TYPE_ID, keyWordsList);
                /*
                 * 2 args functions keywords
                 */
                addKeyWord(Function2Arg.LOG_STR, Function2Arg.LOG_DESC, Function2Arg.LOG_ID, Function2Arg.LOG_SYN, Function2Arg.LOG_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.MOD_STR, Function2Arg.MOD_DESC, Function2Arg.MOD_ID, Function2Arg.MOD_SYN, Function2Arg.MOD_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.BINOM_COEFF_STR, Function2Arg.BINOM_COEFF_DESC, Function2Arg.BINOM_COEFF_ID, Function2Arg.BINOM_COEFF_SYN, Function2Arg.BINOM_COEFF_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.BINOM_COEFF_NCK_STR, Function2Arg.BINOM_COEFF_DESC, Function2Arg.BINOM_COEFF_ID, Function2Arg.BINOM_COEFF_NCK_SYN, Function2Arg.BINOM_COEFF_NCK_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.BERNOULLI_NUMBER_STR, Function2Arg.BERNOULLI_NUMBER_DESC, Function2Arg.BERNOULLI_NUMBER_ID, Function2Arg.BERNOULLI_NUMBER_SYN, Function2Arg.BERNOULLI_NUMBER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.STIRLING1_NUMBER_STR, Function2Arg.STIRLING1_NUMBER_DESC, Function2Arg.STIRLING1_NUMBER_ID, Function2Arg.STIRLING1_NUMBER_SYN, Function2Arg.STIRLING1_NUMBER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.STIRLING2_NUMBER_STR, Function2Arg.STIRLING2_NUMBER_DESC, Function2Arg.STIRLING2_NUMBER_ID, Function2Arg.STIRLING2_NUMBER_SYN, Function2Arg.STIRLING2_NUMBER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.WORPITZKY_NUMBER_STR, Function2Arg.WORPITZKY_NUMBER_DESC, Function2Arg.WORPITZKY_NUMBER_ID, Function2Arg.WORPITZKY_NUMBER_SYN, Function2Arg.WORPITZKY_NUMBER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.EULER_NUMBER_STR, Function2Arg.EULER_NUMBER_DESC, Function2Arg.EULER_NUMBER_ID, Function2Arg.EULER_NUMBER_SYN, Function2Arg.EULER_NUMBER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.KRONECKER_DELTA_STR, Function2Arg.KRONECKER_DELTA_DESC, Function2Arg.KRONECKER_DELTA_ID, Function2Arg.KRONECKER_DELTA_SYN, Function2Arg.KRONECKER_DELTA_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.EULER_POLYNOMIAL_STR, Function2Arg.EULER_POLYNOMIAL_DESC, Function2Arg.EULER_POLYNOMIAL_ID, Function2Arg.EULER_POLYNOMIAL_SYN, Function2Arg.EULER_POLYNOMIAL_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.HARMONIC_NUMBER_STR, Function2Arg.HARMONIC_NUMBER_DESC, Function2Arg.HARMONIC_NUMBER_ID, Function2Arg.HARMONIC_NUMBER_SYN, Function2Arg.HARMONIC_NUMBER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.RND_UNIFORM_CONT_STR, Function2Arg.RND_UNIFORM_CONT_DESC, Function2Arg.RND_UNIFORM_CONT_ID, Function2Arg.RND_UNIFORM_CONT_SYN, Function2Arg.RND_UNIFORM_CONT_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.RND_UNIFORM_DISCR_STR, Function2Arg.RND_UNIFORM_DISCR_DESC, Function2Arg.RND_UNIFORM_DISCR_ID, Function2Arg.RND_UNIFORM_DISCR_SYN, Function2Arg.RND_UNIFORM_DISCR_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.ROUND_STR, Function2Arg.ROUND_DESC, Function2Arg.ROUND_ID, Function2Arg.ROUND_SYN, Function2Arg.ROUND_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.RND_NORMAL_STR, Function2Arg.RND_NORMAL_DESC, Function2Arg.RND_NORMAL_ID, Function2Arg.RND_NORMAL_SYN, Function2Arg.RND_NORMAL_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.NDIG_STR, Function2Arg.NDIG_DESC, Function2Arg.NDIG_ID, Function2Arg.NDIG_SYN, Function2Arg.NDIG_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.DIGIT10_STR, Function2Arg.DIGIT10_DESC, Function2Arg.DIGIT10_ID, Function2Arg.DIGIT10_SYN, Function2Arg.DIGIT10_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.FACTVAL_STR, Function2Arg.FACTVAL_DESC, Function2Arg.FACTVAL_ID, Function2Arg.FACTVAL_SYN, Function2Arg.FACTVAL_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.FACTEXP_STR, Function2Arg.FACTEXP_DESC, Function2Arg.FACTEXP_ID, Function2Arg.FACTEXP_SYN, Function2Arg.FACTEXP_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.ROOT_STR, Function2Arg.ROOT_DESC, Function2Arg.ROOT_ID, Function2Arg.ROOT_SYN, Function2Arg.ROOT_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.INC_GAMMA_LOWER_STR, Function2Arg.INC_GAMMA_LOWER_DESC, Function2Arg.INC_GAMMA_LOWER_ID, Function2Arg.INC_GAMMA_LOWER_SYN, Function2Arg.INC_GAMMA_LOWER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.INC_GAMMA_UPPER_STR, Function2Arg.INC_GAMMA_UPPER_DESC, Function2Arg.INC_GAMMA_UPPER_ID, Function2Arg.INC_GAMMA_UPPER_SYN, Function2Arg.INC_GAMMA_UPPER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.REG_GAMMA_LOWER_STR, Function2Arg.REG_GAMMA_LOWER_DESC, Function2Arg.REG_GAMMA_LOWER_ID, Function2Arg.REG_GAMMA_LOWER_SYN, Function2Arg.REG_GAMMA_LOWER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.REG_GAMMA_UPPER_STR, Function2Arg.REG_GAMMA_UPPER_DESC, Function2Arg.REG_GAMMA_UPPER_ID, Function2Arg.REG_GAMMA_UPPER_SYN, Function2Arg.REG_GAMMA_UPPER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.REG_GAMMA_LOWER_P_STR, Function2Arg.REG_GAMMA_LOWER_DESC, Function2Arg.REG_GAMMA_LOWER_ID, Function2Arg.REG_GAMMA_LOWER_P_SYN, Function2Arg.REG_GAMMA_LOWER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.REG_GAMMA_UPPER_Q_STR, Function2Arg.REG_GAMMA_UPPER_DESC, Function2Arg.REG_GAMMA_UPPER_ID, Function2Arg.REG_GAMMA_UPPER_Q_SYN, Function2Arg.REG_GAMMA_UPPER_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.PERMUTATIONS_STR, Function2Arg.PERMUTATIONS_DESC, Function2Arg.PERMUTATIONS_ID, Function2Arg.PERMUTATIONS_SYN, Function2Arg.PERMUTATIONS_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.BETA_STR, Function2Arg.BETA_DESC, Function2Arg.BETA_ID, Function2Arg.BETA_SYN, Function2Arg.BETA_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.LOG_BETA_STR, Function2Arg.LOG_BETA_DESC, Function2Arg.LOG_BETA_ID, Function2Arg.LOG_BETA_SYN, Function2Arg.LOG_BETA_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.PDF_STUDENT_T_STR, Function2Arg.PDF_STUDENT_T_DESC, Function2Arg.PDF_STUDENT_T_ID, Function2Arg.PDF_STUDENT_T_SYN, Function2Arg.PDF_STUDENT_T_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.CDF_STUDENT_T_STR, Function2Arg.CDF_STUDENT_T_DESC, Function2Arg.CDF_STUDENT_T_ID, Function2Arg.CDF_STUDENT_T_SYN, Function2Arg.CDF_STUDENT_T_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.QNT_STUDENT_T_STR, Function2Arg.QNT_STUDENT_T_DESC, Function2Arg.QNT_STUDENT_T_ID, Function2Arg.QNT_STUDENT_T_SYN, Function2Arg.QNT_STUDENT_T_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.PDF_CHI2_STR, Function2Arg.PDF_CHI2_DESC, Function2Arg.PDF_CHI2_ID, Function2Arg.PDF_CHI2_SYN, Function2Arg.PDF_CHI2_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.CDF_CHI2_STR, Function2Arg.CDF_CHI2_DESC, Function2Arg.CDF_CHI2_ID, Function2Arg.CDF_CHI2_SYN, Function2Arg.CDF_CHI2_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.QNT_CHI2_STR, Function2Arg.QNT_CHI2_DESC, Function2Arg.QNT_CHI2_ID, Function2Arg.QNT_CHI2_SYN, Function2Arg.QNT_CHI2_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function2Arg.RND_F_SNEDECOR_STR, Function2Arg.RND_F_SNEDECOR_DESC, Function2Arg.RND_F_SNEDECOR_ID, Function2Arg.RND_F_SNEDECOR_SYN, Function2Arg.RND_F_SNEDECOR_SINCE, Function2Arg.TYPE_ID, keyWordsList);
                /*
                 * 3 args functions keywords
                 */
                addKeyWord(Function3Arg.IF_STR, Function3Arg.IF_DESC, Function3Arg.IF_CONDITION_ID, Function3Arg.IF_SYN, Function3Arg.IF_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.CHI_STR, Function3Arg.CHI_DESC, Function3Arg.CHI_ID, Function3Arg.CHI_SYN, Function3Arg.CHI_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.CHI_LR_STR, Function3Arg.CHI_LR_DESC, Function3Arg.CHI_LR_ID, Function3Arg.CHI_LR_SYN, Function3Arg.CHI_LR_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.CHI_L_STR, Function3Arg.CHI_L_DESC, Function3Arg.CHI_L_ID, Function3Arg.CHI_L_SYN, Function3Arg.CHI_L_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.CHI_R_STR, Function3Arg.CHI_R_DESC, Function3Arg.CHI_R_ID, Function3Arg.CHI_R_SYN, Function3Arg.CHI_R_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.PDF_UNIFORM_CONT_STR, Function3Arg.PDF_UNIFORM_CONT_DESC, Function3Arg.PDF_UNIFORM_CONT_ID, Function3Arg.PDF_UNIFORM_CONT_SYN, Function3Arg.PDF_UNIFORM_CONT_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.CDF_UNIFORM_CONT_STR, Function3Arg.CDF_UNIFORM_CONT_DESC, Function3Arg.CDF_UNIFORM_CONT_ID, Function3Arg.CDF_UNIFORM_CONT_SYN, Function3Arg.CDF_UNIFORM_CONT_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.QNT_UNIFORM_CONT_STR, Function3Arg.QNT_UNIFORM_CONT_DESC, Function3Arg.QNT_UNIFORM_CONT_ID, Function3Arg.QNT_UNIFORM_CONT_SYN, Function3Arg.QNT_UNIFORM_CONT_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.PDF_NORMAL_STR, Function3Arg.PDF_NORMAL_DESC, Function3Arg.PDF_NORMAL_ID, Function3Arg.PDF_NORMAL_SYN, Function3Arg.PDF_NORMAL_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.CDF_NORMAL_STR, Function3Arg.CDF_NORMAL_DESC, Function3Arg.CDF_NORMAL_ID, Function3Arg.CDF_NORMAL_SYN, Function3Arg.CDF_NORMAL_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.QNT_NORMAL_STR, Function3Arg.QNT_NORMAL_DESC, Function3Arg.QNT_NORMAL_ID, Function3Arg.QNT_NORMAL_SYN, Function3Arg.QNT_NORMAL_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.DIGIT_STR, Function3Arg.DIGIT_DESC, Function3Arg.DIGIT_ID, Function3Arg.DIGIT_SYN, Function3Arg.DIGIT_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.INC_BETA_STR, Function3Arg.INC_BETA_DESC, Function3Arg.INC_BETA_ID, Function3Arg.INC_BETA_SYN, Function3Arg.INC_BETA_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.REG_BETA_STR, Function3Arg.REG_BETA_DESC, Function3Arg.REG_BETA_ID, Function3Arg.REG_BETA_SYN, Function3Arg.REG_BETA_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.REG_BETA_I_STR, Function3Arg.REG_BETA_DESC, Function3Arg.REG_BETA_ID, Function3Arg.REG_BETA_I_SYN, Function3Arg.REG_BETA_I_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.PDF_F_SNEDECOR_STR, Function3Arg.PDF_F_SNEDECOR_DESC, Function3Arg.PDF_F_SNEDECOR_ID, Function3Arg.PDF_F_SNEDECOR_SYN, Function3Arg.PDF_F_SNEDECOR_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.CDF_F_SNEDECOR_STR, Function3Arg.CDF_F_SNEDECOR_DESC, Function3Arg.CDF_F_SNEDECOR_ID, Function3Arg.CDF_F_SNEDECOR_SYN, Function3Arg.CDF_F_SNEDECOR_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                addKeyWord(Function3Arg.QNT_F_SNEDECOR_STR, Function3Arg.QNT_F_SNEDECOR_DESC, Function3Arg.QNT_F_SNEDECOR_ID, Function3Arg.QNT_F_SNEDECOR_SYN, Function3Arg.QNT_F_SNEDECOR_SINCE, Function3Arg.TYPE_ID, keyWordsList);
                /*
                 * Variadic functions as keywords
                 */
                addKeyWord(FunctionVariadic.IFF_STR, FunctionVariadic.IFF_DESC, FunctionVariadic.IFF_ID, FunctionVariadic.IFF_SYN, FunctionVariadic.IFF_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.MIN_STR, FunctionVariadic.MIN_DESC, FunctionVariadic.MIN_ID, FunctionVariadic.MIN_SYN, FunctionVariadic.MIN_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.MAX_STR, FunctionVariadic.MAX_DESC, FunctionVariadic.MAX_ID, FunctionVariadic.MAX_SYN, FunctionVariadic.MAX_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.CONT_FRAC_STR, FunctionVariadic.CONT_FRAC_DESC, FunctionVariadic.CONT_FRAC_ID, FunctionVariadic.CONT_FRAC_SYN, FunctionVariadic.CONT_FRAC_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.CONT_POL_STR, FunctionVariadic.CONT_POL_DESC, FunctionVariadic.CONT_POL_ID, FunctionVariadic.CONT_POL_SYN, FunctionVariadic.CONT_POL_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.GCD_STR, FunctionVariadic.GCD_DESC, FunctionVariadic.GCD_ID, FunctionVariadic.GCD_SYN, FunctionVariadic.GCD_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.LCM_STR, FunctionVariadic.LCM_DESC, FunctionVariadic.LCM_ID, FunctionVariadic.LCM_SYN, FunctionVariadic.LCM_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.SUM_STR, FunctionVariadic.SUM_DESC, FunctionVariadic.SUM_ID, FunctionVariadic.SUM_SYN, FunctionVariadic.SUM_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.PROD_STR, FunctionVariadic.PROD_DESC, FunctionVariadic.PROD_ID, FunctionVariadic.PROD_SYN, FunctionVariadic.PROD_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.AVG_STR, FunctionVariadic.AVG_DESC, FunctionVariadic.AVG_ID, FunctionVariadic.AVG_SYN, FunctionVariadic.AVG_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.VAR_STR, FunctionVariadic.VAR_DESC, FunctionVariadic.VAR_ID, FunctionVariadic.VAR_SYN, FunctionVariadic.VAR_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.STD_STR, FunctionVariadic.STD_DESC, FunctionVariadic.STD_ID, FunctionVariadic.STD_SYN, FunctionVariadic.STD_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.RND_LIST_STR, FunctionVariadic.RND_LIST_DESC, FunctionVariadic.RND_LIST_ID, FunctionVariadic.RND_LIST_SYN, FunctionVariadic.RND_LIST_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.COALESCE_STR, FunctionVariadic.COALESCE_DESC, FunctionVariadic.COALESCE_ID, FunctionVariadic.COALESCE_SYN, FunctionVariadic.COALESCE_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.OR_STR, FunctionVariadic.OR_DESC, FunctionVariadic.OR_ID, FunctionVariadic.OR_SYN, FunctionVariadic.OR_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.AND_STR, FunctionVariadic.AND_DESC, FunctionVariadic.AND_ID, FunctionVariadic.AND_SYN, FunctionVariadic.AND_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.XOR_STR, FunctionVariadic.XOR_DESC, FunctionVariadic.XOR_ID, FunctionVariadic.XOR_SYN, FunctionVariadic.XOR_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.ARGMIN_STR, FunctionVariadic.ARGMIN_DESC, FunctionVariadic.ARGMIN_ID, FunctionVariadic.ARGMIN_SYN, FunctionVariadic.ARGMIN_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.ARGMAX_STR, FunctionVariadic.ARGMAX_DESC, FunctionVariadic.ARGMAX_ID, FunctionVariadic.ARGMAX_SYN, FunctionVariadic.ARGMAX_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.MEDIAN_STR, FunctionVariadic.MEDIAN_DESC, FunctionVariadic.MEDIAN_ID, FunctionVariadic.MEDIAN_SYN, FunctionVariadic.MEDIAN_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.MODE_STR, FunctionVariadic.MODE_DESC, FunctionVariadic.MODE_ID, FunctionVariadic.MODE_SYN, FunctionVariadic.MODE_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.BASE_STR, FunctionVariadic.BASE_DESC, FunctionVariadic.BASE_ID, FunctionVariadic.BASE_SYN, FunctionVariadic.BASE_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                addKeyWord(FunctionVariadic.NDIST_STR, FunctionVariadic.NDIST_DESC, FunctionVariadic.NDIST_ID, FunctionVariadic.NDIST_SYN, FunctionVariadic.NDIST_SINCE, FunctionVariadic.TYPE_ID, keyWordsList);
                /*
                 * Calculus keywords
                 */
                addKeyWord(CalculusOperator.SUM_STR, CalculusOperator.SUM_DESC, CalculusOperator.SUM_ID, CalculusOperator.SUM_SYN, CalculusOperator.SUM_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWordUnicode(CalculusOperator.SUM_STR_UNI_1, CalculusOperator.SUM_DESC, CalculusOperator.SUM_ID, CalculusOperator.SUM_SYN_UNI_1, CalculusOperator.SUM_SINCE_UNI_1, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWordUnicode(CalculusOperator.SUM_STR_UNI_2, CalculusOperator.SUM_DESC, CalculusOperator.SUM_ID, CalculusOperator.SUM_SYN_UNI_2, CalculusOperator.SUM_SINCE_UNI_2, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(CalculusOperator.PROD_STR, CalculusOperator.PROD_DESC, CalculusOperator.PROD_ID, CalculusOperator.PROD_SYN, CalculusOperator.PROD_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWordUnicode(CalculusOperator.PROD_STR_UNI_1, CalculusOperator.PROD_DESC, CalculusOperator.PROD_ID, CalculusOperator.PROD_SYN_UNI_1, CalculusOperator.PROD_SINCE_UNI_1, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWordUnicode(CalculusOperator.PROD_STR_UNI_2, CalculusOperator.PROD_DESC, CalculusOperator.PROD_ID, CalculusOperator.PROD_SYN_UNI_2, CalculusOperator.PROD_SINCE_UNI_2, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWordUnicode(CalculusOperator.PROD_STR_UNI_3, CalculusOperator.PROD_DESC, CalculusOperator.PROD_ID, CalculusOperator.PROD_SYN_UNI_3, CalculusOperator.PROD_SINCE_UNI_3, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(CalculusOperator.INT_STR, CalculusOperator.INT_DESC, CalculusOperator.INT_ID, CalculusOperator.INT_SYN, CalculusOperator.INT_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWordUnicode(CalculusOperator.INT_STR_UNI_1, CalculusOperator.INT_DESC, CalculusOperator.INT_ID, CalculusOperator.INT_SYN_UNI_1, CalculusOperator.INT_SINCE_UNI_1, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(CalculusOperator.DER_STR, CalculusOperator.DER_DESC, CalculusOperator.DER_ID, CalculusOperator.DER_SYN, CalculusOperator.DER_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWordUnicode(CalculusOperator.DER_STR_UNI_1, CalculusOperator.DER_DESC, CalculusOperator.DER_ID, CalculusOperator.DER_SYN_UNI_1, CalculusOperator.DER_SINCE_UNI_1, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(CalculusOperator.DER_LEFT_STR, CalculusOperator.DER_LEFT_DESC, CalculusOperator.DER_LEFT_ID, CalculusOperator.DER_LEFT_SYN, CalculusOperator.DER_LEFT_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWordUnicode(CalculusOperator.DER_LEFT_STR_UNI_1, CalculusOperator.DER_LEFT_DESC, CalculusOperator.DER_LEFT_ID, CalculusOperator.DER_LEFT_SYN_UNI_1, CalculusOperator.DER_LEFT_SINCE_UNI_1, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(CalculusOperator.DER_RIGHT_STR, CalculusOperator.DER_RIGHT_DESC, CalculusOperator.DER_RIGHT_ID, CalculusOperator.DER_RIGHT_SYN, CalculusOperator.DER_RIGHT_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWordUnicode(CalculusOperator.DER_RIGHT_STR_UNI_1, CalculusOperator.DER_RIGHT_DESC, CalculusOperator.DER_RIGHT_ID, CalculusOperator.DER_RIGHT_SYN_UNI_1, CalculusOperator.DER_RIGHT_SINCE_UNI_1, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(CalculusOperator.DERN_STR, CalculusOperator.DERN_DESC, CalculusOperator.DERN_ID, CalculusOperator.DERN_SYN, CalculusOperator.DERN_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWord(CalculusOperator.FORW_DIFF_STR, CalculusOperator.FORW_DIFF_DESC, CalculusOperator.FORW_DIFF_ID, CalculusOperator.FORW_DIFF_SYN, CalculusOperator.FORW_DIFF_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWordUnicode(CalculusOperator.FORW_DIFF_STR_UNI_1, CalculusOperator.FORW_DIFF_DESC, CalculusOperator.FORW_DIFF_ID, CalculusOperator.FORW_DIFF_SYN_UNI_1, CalculusOperator.FORW_DIFF_SINCE_UNI_1, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWordUnicode(CalculusOperator.FORW_DIFF_STR_UNI_2, CalculusOperator.FORW_DIFF_DESC, CalculusOperator.FORW_DIFF_ID, CalculusOperator.FORW_DIFF_SYN_UNI_2, CalculusOperator.FORW_DIFF_SINCE_UNI_2, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(CalculusOperator.BACKW_DIFF_STR, CalculusOperator.BACKW_DIFF_DESC, CalculusOperator.BACKW_DIFF_ID, CalculusOperator.BACKW_DIFF_SYN, CalculusOperator.BACKW_DIFF_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWordUnicode(CalculusOperator.BACKW_DIFF_STR_UNI_1, CalculusOperator.BACKW_DIFF_DESC, CalculusOperator.BACKW_DIFF_ID, CalculusOperator.BACKW_DIFF_SYN_UNI_1, CalculusOperator.BACKW_DIFF_SINCE_UNI_1, CalculusOperator.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(CalculusOperator.AVG_STR, CalculusOperator.AVG_DESC, CalculusOperator.AVG_ID, CalculusOperator.AVG_SYN, CalculusOperator.AVG_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWord(CalculusOperator.VAR_STR, CalculusOperator.VAR_DESC, CalculusOperator.VAR_ID, CalculusOperator.VAR_SYN, CalculusOperator.VAR_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWord(CalculusOperator.STD_STR, CalculusOperator.STD_DESC, CalculusOperator.STD_ID, CalculusOperator.STD_SYN, CalculusOperator.STD_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWord(CalculusOperator.MIN_STR, CalculusOperator.MIN_DESC, CalculusOperator.MIN_ID, CalculusOperator.MIN_SYN, CalculusOperator.MIN_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWord(CalculusOperator.MAX_STR, CalculusOperator.MAX_DESC, CalculusOperator.MAX_ID, CalculusOperator.MAX_SYN, CalculusOperator.MAX_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                addKeyWord(CalculusOperator.SOLVE_STR, CalculusOperator.SOLVE_DESC, CalculusOperator.SOLVE_ID, CalculusOperator.SOLVE_SYN, CalculusOperator.SOLVE_SINCE, CalculusOperator.TYPE_ID, keyWordsList);
                /*
                 * Constants keywords
                 */
                addKeyWord(ConstantValue.PI_STR, ConstantValue.PI_DESC, ConstantValue.PI_ID, ConstantValue.PI_SYN, ConstantValue.PI_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWordUnicode(ConstantValue.PI_STR_UNI_1, ConstantValue.PI_DESC, ConstantValue.PI_ID, ConstantValue.PI_SYN_UNI_1, ConstantValue.PI_SINCE_UNI_1, ConstantValue.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWordUnicode(ConstantValue.PI_STR_UNI_2, ConstantValue.PI_DESC, ConstantValue.PI_ID, ConstantValue.PI_SYN_UNI_2, ConstantValue.PI_SINCE_UNI_2, ConstantValue.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(ConstantValue.EULER_STR, ConstantValue.EULER_DESC, ConstantValue.EULER_ID, ConstantValue.EULER_SYN, ConstantValue.EULER_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWordUnicode(ConstantValue.EULER_STR_UNI_1, ConstantValue.EULER_DESC, ConstantValue.EULER_ID, ConstantValue.EULER_SYN_UNI_1, ConstantValue.EULER_SINCE_UNI_1, ConstantValue.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWordUnicode(ConstantValue.EULER_STR_UNI_2, ConstantValue.EULER_DESC, ConstantValue.EULER_ID, ConstantValue.EULER_SYN_UNI_2, ConstantValue.EULER_SINCE_UNI_2, ConstantValue.TYPE_ID, unicodeKeyWordsEnabled, keyWordsList);
                addKeyWord(ConstantValue.EULER_MASCHERONI_STR, ConstantValue.EULER_MASCHERONI_DESC, ConstantValue.EULER_MASCHERONI_ID, ConstantValue.EULER_MASCHERONI_SYN, ConstantValue.EULER_MASCHERONI_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.GOLDEN_RATIO_STR, ConstantValue.GOLDEN_RATIO_DESC, ConstantValue.GOLDEN_RATIO_ID, ConstantValue.GOLDEN_RATIO_SYN, ConstantValue.GOLDEN_RATIO_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PLASTIC_STR, ConstantValue.PLASTIC_DESC, ConstantValue.PLASTIC_ID, ConstantValue.PLASTIC_SYN, ConstantValue.PLASTIC_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.EMBREE_TREFETHEN_STR, ConstantValue.EMBREE_TREFETHEN_DESC, ConstantValue.EMBREE_TREFETHEN_ID, ConstantValue.EMBREE_TREFETHEN_SYN, ConstantValue.EMBREE_TREFETHEN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.FEIGENBAUM_DELTA_STR, ConstantValue.FEIGENBAUM_DELTA_DESC, ConstantValue.FEIGENBAUM_DELTA_ID, ConstantValue.FEIGENBAUM_DELTA_SYN, ConstantValue.FEIGENBAUM_DELTA_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.FEIGENBAUM_ALPHA_STR, ConstantValue.FEIGENBAUM_ALPHA_DESC, ConstantValue.FEIGENBAUM_ALPHA_ID, ConstantValue.FEIGENBAUM_ALPHA_SYN, ConstantValue.FEIGENBAUM_ALPHA_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.TWIN_PRIME_STR, ConstantValue.TWIN_PRIME_DESC, ConstantValue.TWIN_PRIME_ID, ConstantValue.TWIN_PRIME_SYN, ConstantValue.TWIN_PRIME_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MEISSEL_MERTEENS_STR, ConstantValue.MEISSEL_MERTEENS_DESC, ConstantValue.MEISSEL_MERTEENS_ID, ConstantValue.MEISSEL_MERTEENS_SYN, ConstantValue.MEISSEL_MERTEENS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.BRAUN_TWIN_PRIME_STR, ConstantValue.BRAUN_TWIN_PRIME_DESC, ConstantValue.BRAUN_TWIN_PRIME_ID, ConstantValue.BRAUN_TWIN_PRIME_SYN, ConstantValue.BRAUN_TWIN_PRIME_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.BRAUN_PRIME_QUADR_STR, ConstantValue.BRAUN_PRIME_QUADR_DESC, ConstantValue.BRAUN_PRIME_QUADR_ID, ConstantValue.BRAUN_PRIME_QUADR_SYN, ConstantValue.BRAUN_PRIME_QUADR_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.BRUIJN_NEWMAN_STR, ConstantValue.BRUIJN_NEWMAN_DESC, ConstantValue.BRUIJN_NEWMAN_ID, ConstantValue.BRUIJN_NEWMAN_SYN, ConstantValue.BRUIJN_NEWMAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.CATALAN_STR, ConstantValue.CATALAN_DESC, ConstantValue.CATALAN_ID, ConstantValue.CATALAN_SYN, ConstantValue.CATALAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.LANDAU_RAMANUJAN_STR, ConstantValue.LANDAU_RAMANUJAN_DESC, ConstantValue.LANDAU_RAMANUJAN_ID, ConstantValue.LANDAU_RAMANUJAN_SYN, ConstantValue.LANDAU_RAMANUJAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.VISWANATH_STR, ConstantValue.VISWANATH_DESC, ConstantValue.VISWANATH_ID, ConstantValue.VISWANATH_SYN, ConstantValue.VISWANATH_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.LEGENDRE_STR, ConstantValue.LEGENDRE_DESC, ConstantValue.LEGENDRE_ID, ConstantValue.LEGENDRE_SYN, ConstantValue.LEGENDRE_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.RAMANUJAN_SOLDNER_STR, ConstantValue.RAMANUJAN_SOLDNER_DESC, ConstantValue.RAMANUJAN_SOLDNER_ID, ConstantValue.RAMANUJAN_SOLDNER_SYN, ConstantValue.RAMANUJAN_SOLDNER_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.ERDOS_BORWEIN_STR, ConstantValue.ERDOS_BORWEIN_DESC, ConstantValue.ERDOS_BORWEIN_ID, ConstantValue.ERDOS_BORWEIN_SYN, ConstantValue.ERDOS_BORWEIN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.BERNSTEIN_STR, ConstantValue.BERNSTEIN_DESC, ConstantValue.BERNSTEIN_ID, ConstantValue.BERNSTEIN_SYN, ConstantValue.BERNSTEIN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.GAUSS_KUZMIN_WIRSING_STR, ConstantValue.GAUSS_KUZMIN_WIRSING_DESC, ConstantValue.GAUSS_KUZMIN_WIRSING_ID, ConstantValue.GAUSS_KUZMIN_WIRSING_SYN, ConstantValue.GAUSS_KUZMIN_WIRSING_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.HAFNER_SARNAK_MCCURLEY_STR, ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC, ConstantValue.HAFNER_SARNAK_MCCURLEY_ID, ConstantValue.HAFNER_SARNAK_MCCURLEY_SYN, ConstantValue.HAFNER_SARNAK_MCCURLEY_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.GOLOMB_DICKMAN_STR, ConstantValue.GOLOMB_DICKMAN_DESC, ConstantValue.GOLOMB_DICKMAN_ID, ConstantValue.GOLOMB_DICKMAN_SYN, ConstantValue.GOLOMB_DICKMAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.CAHEN_STR, ConstantValue.CAHEN_DESC, ConstantValue.CAHEN_ID, ConstantValue.CAHEN_SYN, ConstantValue.CAHEN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.LAPLACE_LIMIT_STR, ConstantValue.LAPLACE_LIMIT_DESC, ConstantValue.LAPLACE_LIMIT_ID, ConstantValue.LAPLACE_LIMIT_SYN, ConstantValue.LAPLACE_LIMIT_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.ALLADI_GRINSTEAD_STR, ConstantValue.ALLADI_GRINSTEAD_DESC, ConstantValue.ALLADI_GRINSTEAD_ID, ConstantValue.ALLADI_GRINSTEAD_SYN, ConstantValue.ALLADI_GRINSTEAD_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.LENGYEL_STR, ConstantValue.LENGYEL_DESC, ConstantValue.LENGYEL_ID, ConstantValue.LENGYEL_SYN, ConstantValue.LENGYEL_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.LEVY_STR, ConstantValue.LEVY_DESC, ConstantValue.LEVY_ID, ConstantValue.LEVY_SYN, ConstantValue.LEVY_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.APERY_STR, ConstantValue.APERY_DESC, ConstantValue.APERY_ID, ConstantValue.APERY_SYN, ConstantValue.APERY_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MILLS_STR, ConstantValue.MILLS_DESC, ConstantValue.MILLS_ID, ConstantValue.MILLS_SYN, ConstantValue.MILLS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.BACKHOUSE_STR, ConstantValue.BACKHOUSE_DESC, ConstantValue.BACKHOUSE_ID, ConstantValue.BACKHOUSE_SYN, ConstantValue.BACKHOUSE_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PORTER_STR, ConstantValue.PORTER_DESC, ConstantValue.PORTER_ID, ConstantValue.PORTER_SYN, ConstantValue.PORTER_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.LIEB_QUARE_ICE_STR, ConstantValue.LIEB_QUARE_ICE_DESC, ConstantValue.LIEB_QUARE_ICE_ID, ConstantValue.LIEB_QUARE_ICE_SYN, ConstantValue.LIEB_QUARE_ICE_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.NIVEN_STR, ConstantValue.NIVEN_DESC, ConstantValue.NIVEN_ID, ConstantValue.NIVEN_SYN, ConstantValue.NIVEN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.SIERPINSKI_STR, ConstantValue.SIERPINSKI_DESC, ConstantValue.SIERPINSKI_ID, ConstantValue.SIERPINSKI_SYN, ConstantValue.SIERPINSKI_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.KHINCHIN_STR, ConstantValue.KHINCHIN_DESC, ConstantValue.KHINCHIN_ID, ConstantValue.KHINCHIN_SYN, ConstantValue.KHINCHIN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.FRANSEN_ROBINSON_STR, ConstantValue.FRANSEN_ROBINSON_DESC, ConstantValue.FRANSEN_ROBINSON_ID, ConstantValue.FRANSEN_ROBINSON_SYN, ConstantValue.FRANSEN_ROBINSON_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.LANDAU_STR, ConstantValue.LANDAU_DESC, ConstantValue.LANDAU_ID, ConstantValue.LANDAU_SYN, ConstantValue.LANDAU_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PARABOLIC_STR, ConstantValue.PARABOLIC_DESC, ConstantValue.PARABOLIC_ID, ConstantValue.PARABOLIC_SYN, ConstantValue.PARABOLIC_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.OMEGA_STR, ConstantValue.OMEGA_DESC, ConstantValue.OMEGA_ID, ConstantValue.OMEGA_SYN, ConstantValue.OMEGA_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MRB_STR, ConstantValue.MRB_DESC, ConstantValue.MRB_ID, ConstantValue.MRB_SYN, ConstantValue.MRB_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.LI2_STR, ConstantValue.LI2_DESC, ConstantValue.LI2_ID, ConstantValue.LI2_SYN, ConstantValue.LI2_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.GOMPERTZ_STR, ConstantValue.GOMPERTZ_DESC, ConstantValue.GOMPERTZ_ID, ConstantValue.GOMPERTZ_SYN, ConstantValue.GOMPERTZ_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                /* Physical Constants */
                addKeyWord(ConstantValue.LIGHT_SPEED_STR, ConstantValue.LIGHT_SPEED_DESC, ConstantValue.LIGHT_SPEED_ID, ConstantValue.LIGHT_SPEED_SYN, ConstantValue.LIGHT_SPEED_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.GRAVITATIONAL_CONSTANT_STR, ConstantValue.GRAVITATIONAL_CONSTANT_DESC, ConstantValue.GRAVITATIONAL_CONSTANT_ID, ConstantValue.GRAVITATIONAL_CONSTANT_SYN, ConstantValue.GRAVITATIONAL_CONSTANT_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.GRAVIT_ACC_EARTH_STR, ConstantValue.GRAVIT_ACC_EARTH_DESC, ConstantValue.GRAVIT_ACC_EARTH_ID, ConstantValue.GRAVIT_ACC_EARTH_SYN, ConstantValue.GRAVIT_ACC_EARTH_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PLANCK_CONSTANT_STR, ConstantValue.PLANCK_CONSTANT_DESC, ConstantValue.PLANCK_CONSTANT_ID, ConstantValue.PLANCK_CONSTANT_SYN, ConstantValue.PLANCK_CONSTANT_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PLANCK_CONSTANT_REDUCED_STR, ConstantValue.PLANCK_CONSTANT_REDUCED_DESC, ConstantValue.PLANCK_CONSTANT_REDUCED_ID, ConstantValue.PLANCK_CONSTANT_REDUCED_SYN, ConstantValue.PLANCK_CONSTANT_REDUCED_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PLANCK_LENGTH_STR, ConstantValue.PLANCK_LENGTH_DESC, ConstantValue.PLANCK_LENGTH_ID, ConstantValue.PLANCK_LENGTH_SYN, ConstantValue.PLANCK_LENGTH_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PLANCK_MASS_STR, ConstantValue.PLANCK_MASS_DESC, ConstantValue.PLANCK_MASS_ID, ConstantValue.PLANCK_MASS_SYN, ConstantValue.PLANCK_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PLANCK_TIME_STR, ConstantValue.PLANCK_TIME_DESC, ConstantValue.PLANCK_TIME_ID, ConstantValue.PLANCK_TIME_SYN, ConstantValue.PLANCK_TIME_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                /* Astronomical Constants */
                addKeyWord(ConstantValue.LIGHT_YEAR_STR, ConstantValue.LIGHT_YEAR_DESC, ConstantValue.LIGHT_YEAR_ID, ConstantValue.LIGHT_YEAR_SYN, ConstantValue.LIGHT_YEAR_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.ASTRONOMICAL_UNIT_STR, ConstantValue.ASTRONOMICAL_UNIT_DESC, ConstantValue.ASTRONOMICAL_UNIT_ID, ConstantValue.ASTRONOMICAL_UNIT_SYN, ConstantValue.ASTRONOMICAL_UNIT_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.PARSEC_STR, ConstantValue.PARSEC_DESC, ConstantValue.PARSEC_ID, ConstantValue.PARSEC_SYN, ConstantValue.PARSEC_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.KILOPARSEC_STR, ConstantValue.KILOPARSEC_DESC, ConstantValue.KILOPARSEC_ID, ConstantValue.KILOPARSEC_SYN, ConstantValue.KILOPARSEC_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.EARTH_RADIUS_EQUATORIAL_STR, ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC, ConstantValue.EARTH_RADIUS_EQUATORIAL_ID, ConstantValue.EARTH_RADIUS_EQUATORIAL_SYN, ConstantValue.EARTH_RADIUS_EQUATORIAL_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.EARTH_RADIUS_POLAR_STR, ConstantValue.EARTH_RADIUS_POLAR_DESC, ConstantValue.EARTH_RADIUS_POLAR_ID, ConstantValue.EARTH_RADIUS_POLAR_SYN, ConstantValue.EARTH_RADIUS_POLAR_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.EARTH_RADIUS_MEAN_STR, ConstantValue.EARTH_RADIUS_MEAN_DESC, ConstantValue.EARTH_RADIUS_MEAN_ID, ConstantValue.EARTH_RADIUS_MEAN_SYN, ConstantValue.EARTH_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.EARTH_MASS_STR, ConstantValue.EARTH_MASS_DESC, ConstantValue.EARTH_MASS_ID, ConstantValue.EARTH_MASS_SYN, ConstantValue.EARTH_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.EARTH_SEMI_MAJOR_AXIS_STR, ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC, ConstantValue.EARTH_SEMI_MAJOR_AXIS_ID, ConstantValue.EARTH_SEMI_MAJOR_AXIS_SYN, ConstantValue.EARTH_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MOON_RADIUS_MEAN_STR, ConstantValue.MOON_RADIUS_MEAN_DESC, ConstantValue.MOON_RADIUS_MEAN_ID, ConstantValue.MOON_RADIUS_MEAN_SYN, ConstantValue.MOON_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MOON_MASS_STR, ConstantValue.MOON_MASS_DESC, ConstantValue.MOON_MASS_ID, ConstantValue.MOON_MASS_SYN, ConstantValue.MOON_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MONN_SEMI_MAJOR_AXIS_STR, ConstantValue.MOON_SEMI_MAJOR_AXIS_DESC, ConstantValue.MOO_SEMI_MAJOR_AXIS_ID, ConstantValue.MONN_SEMI_MAJOR_AXIS_SYN, ConstantValue.MONN_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.SOLAR_RADIUS_STR, ConstantValue.SOLAR_RADIUS_DESC, ConstantValue.SOLAR_RADIUS_ID, ConstantValue.SOLAR_RADIUS_SYN, ConstantValue.SOLAR_RADIUS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.SOLAR_MASS_STR, ConstantValue.SOLAR_MASS_DESC, ConstantValue.SOLAR_MASS_ID, ConstantValue.SOLAR_MASS_SYN, ConstantValue.SOLAR_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MERCURY_RADIUS_MEAN_STR, ConstantValue.MERCURY_RADIUS_MEAN_DESC, ConstantValue.MERCURY_RADIUS_MEAN_ID, ConstantValue.MERCURY_RADIUS_MEAN_SYN, ConstantValue.MERCURY_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MERCURY_MASS_STR, ConstantValue.MERCURY_MASS_DESC, ConstantValue.MERCURY_MASS_ID, ConstantValue.MERCURY_MASS_SYN, ConstantValue.MERCURY_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MERCURY_SEMI_MAJOR_AXIS_STR, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_ID, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SYN, ConstantValue.MERCURY_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.VENUS_RADIUS_MEAN_STR, ConstantValue.VENUS_RADIUS_MEAN_DESC, ConstantValue.VENUS_RADIUS_MEAN_ID, ConstantValue.VENUS_RADIUS_MEAN_SYN, ConstantValue.VENUS_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.VENUS_MASS_STR, ConstantValue.VENUS_MASS_DESC, ConstantValue.VENUS_MASS_ID, ConstantValue.VENUS_MASS_SYN, ConstantValue.VENUS_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.VENUS_SEMI_MAJOR_AXIS_STR, ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC, ConstantValue.VENUS_SEMI_MAJOR_AXIS_ID, ConstantValue.VENUS_SEMI_MAJOR_AXIS_SYN, ConstantValue.VENUS_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MARS_RADIUS_MEAN_STR, ConstantValue.MARS_RADIUS_MEAN_DESC, ConstantValue.MARS_RADIUS_MEAN_ID, ConstantValue.MARS_RADIUS_MEAN_SYN, ConstantValue.MARS_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MARS_MASS_STR, ConstantValue.MARS_MASS_DESC, ConstantValue.MARS_MASS_ID, ConstantValue.MARS_MASS_SYN, ConstantValue.MARS_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.MARS_SEMI_MAJOR_AXIS_STR, ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC, ConstantValue.MARS_SEMI_MAJOR_AXIS_ID, ConstantValue.MARS_SEMI_MAJOR_AXIS_SYN, ConstantValue.MARS_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.JUPITER_RADIUS_MEAN_STR, ConstantValue.JUPITER_RADIUS_MEAN_DESC, ConstantValue.JUPITER_RADIUS_MEAN_ID, ConstantValue.JUPITER_RADIUS_MEAN_SYN, ConstantValue.JUPITER_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.JUPITER_MASS_STR, ConstantValue.JUPITER_MASS_DESC, ConstantValue.JUPITER_MASS_ID, ConstantValue.JUPITER_MASS_SYN, ConstantValue.JUPITER_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.JUPITER_SEMI_MAJOR_AXIS_STR, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_ID, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SYN, ConstantValue.JUPITER_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.SATURN_RADIUS_MEAN_STR, ConstantValue.SATURN_RADIUS_MEAN_DESC, ConstantValue.SATURN_RADIUS_MEAN_ID, ConstantValue.SATURN_RADIUS_MEAN_SYN, ConstantValue.SATURN_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.SATURN_MASS_STR, ConstantValue.SATURN_MASS_DESC, ConstantValue.SATURN_MASS_ID, ConstantValue.SATURN_MASS_SYN, ConstantValue.SATURN_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.SATURN_SEMI_MAJOR_AXIS_STR, ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC, ConstantValue.SATURN_SEMI_MAJOR_AXIS_ID, ConstantValue.SATURN_SEMI_MAJOR_AXIS_SYN, ConstantValue.SATURN_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.URANUS_RADIUS_MEAN_STR, ConstantValue.URANUS_RADIUS_MEAN_DESC, ConstantValue.URANUS_RADIUS_MEAN_ID, ConstantValue.URANUS_RADIUS_MEAN_SYN, ConstantValue.URANUS_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.URANUS_MASS_STR, ConstantValue.URANUS_MASS_DESC, ConstantValue.URANUS_MASS_ID, ConstantValue.URANUS_MASS_SYN, ConstantValue.URANUS_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.URANUS_SEMI_MAJOR_AXIS_STR, ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC, ConstantValue.URANUS_SEMI_MAJOR_AXIS_ID, ConstantValue.URANUS_SEMI_MAJOR_AXIS_SYN, ConstantValue.URANUS_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.NEPTUNE_RADIUS_MEAN_STR, ConstantValue.NEPTUNE_RADIUS_MEAN_DESC, ConstantValue.NEPTUNE_RADIUS_MEAN_ID, ConstantValue.NEPTUNE_RADIUS_MEAN_SYN, ConstantValue.NEPTUNE_RADIUS_MEAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.NEPTUNE_MASS_STR, ConstantValue.NEPTUNE_MASS_DESC, ConstantValue.NEPTUNE_MASS_ID, ConstantValue.NEPTUNE_MASS_SYN, ConstantValue.NEPTUNE_MASS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_STR, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_ID, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SYN, ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                /* boolean */
                addKeyWord(ConstantValue.TRUE_STR, ConstantValue.TRUE_DESC, ConstantValue.TRUE_ID, ConstantValue.TRUE_SYN, ConstantValue.TRUE_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                addKeyWord(ConstantValue.FALSE_STR, ConstantValue.FALSE_DESC, ConstantValue.FALSE_ID, ConstantValue.FALSE_SYN, ConstantValue.FALSE_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                /* other */
                addKeyWord(ConstantValue.NAN_STR, ConstantValue.NAN_DESC, ConstantValue.NAN_ID, ConstantValue.NAN_SYN, ConstantValue.NAN_SINCE, ConstantValue.TYPE_ID, keyWordsList);
                /*
                 * Random variables
                 */
                addKeyWord(RandomVariable.UNIFORM_STR, RandomVariable.UNIFORM_DESC, RandomVariable.UNIFORM_ID, RandomVariable.UNIFORM_SYN, RandomVariable.UNIFORM_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT_STR, RandomVariable.INT_DESC, RandomVariable.INT_ID, RandomVariable.INT_SYN, RandomVariable.INT_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT1_STR, RandomVariable.INT1_DESC, RandomVariable.INT1_ID, RandomVariable.INT1_SYN, RandomVariable.INT1_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT2_STR, RandomVariable.INT2_DESC, RandomVariable.INT2_ID, RandomVariable.INT2_SYN, RandomVariable.INT2_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT3_STR, RandomVariable.INT3_DESC, RandomVariable.INT3_ID, RandomVariable.INT3_SYN, RandomVariable.INT3_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT4_STR, RandomVariable.INT4_DESC, RandomVariable.INT4_ID, RandomVariable.INT4_SYN, RandomVariable.INT4_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT5_STR, RandomVariable.INT5_DESC, RandomVariable.INT5_ID, RandomVariable.INT5_SYN, RandomVariable.INT5_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT6_STR, RandomVariable.INT6_DESC, RandomVariable.INT6_ID, RandomVariable.INT6_SYN, RandomVariable.INT6_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT7_STR, RandomVariable.INT7_DESC, RandomVariable.INT7_ID, RandomVariable.INT7_SYN, RandomVariable.INT7_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT8_STR, RandomVariable.INT8_DESC, RandomVariable.INT8_ID, RandomVariable.INT8_SYN, RandomVariable.INT8_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.INT9_STR, RandomVariable.INT9_DESC, RandomVariable.INT9_ID, RandomVariable.INT9_SYN, RandomVariable.INT9_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_STR, RandomVariable.NAT0_DESC, RandomVariable.NAT0_ID, RandomVariable.NAT0_SYN, RandomVariable.NAT0_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_1_STR, RandomVariable.NAT0_1_DESC, RandomVariable.NAT0_1_ID, RandomVariable.NAT0_1_SYN, RandomVariable.NAT0_1_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_2_STR, RandomVariable.NAT0_2_DESC, RandomVariable.NAT0_2_ID, RandomVariable.NAT0_2_SYN, RandomVariable.NAT0_2_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_3_STR, RandomVariable.NAT0_3_DESC, RandomVariable.NAT0_3_ID, RandomVariable.NAT0_3_SYN, RandomVariable.NAT0_3_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_4_STR, RandomVariable.NAT0_4_DESC, RandomVariable.NAT0_4_ID, RandomVariable.NAT0_4_SYN, RandomVariable.NAT0_4_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_5_STR, RandomVariable.NAT0_5_DESC, RandomVariable.NAT0_5_ID, RandomVariable.NAT0_5_SYN, RandomVariable.NAT0_5_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_6_STR, RandomVariable.NAT0_6_DESC, RandomVariable.NAT0_6_ID, RandomVariable.NAT0_6_SYN, RandomVariable.NAT0_6_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_7_STR, RandomVariable.NAT0_7_DESC, RandomVariable.NAT0_7_ID, RandomVariable.NAT0_7_SYN, RandomVariable.NAT0_7_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_8_STR, RandomVariable.NAT0_8_DESC, RandomVariable.NAT0_8_ID, RandomVariable.NAT0_8_SYN, RandomVariable.NAT0_8_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT0_9_STR, RandomVariable.NAT0_9_DESC, RandomVariable.NAT0_9_ID, RandomVariable.NAT0_9_SYN, RandomVariable.NAT0_9_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_STR, RandomVariable.NAT1_DESC, RandomVariable.NAT1_ID, RandomVariable.NAT1_SYN, RandomVariable.NAT1_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_1_STR, RandomVariable.NAT1_1_DESC, RandomVariable.NAT1_1_ID, RandomVariable.NAT1_1_SYN, RandomVariable.NAT1_1_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_2_STR, RandomVariable.NAT1_2_DESC, RandomVariable.NAT1_2_ID, RandomVariable.NAT1_2_SYN, RandomVariable.NAT1_2_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_3_STR, RandomVariable.NAT1_3_DESC, RandomVariable.NAT1_3_ID, RandomVariable.NAT1_3_SYN, RandomVariable.NAT1_3_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_4_STR, RandomVariable.NAT1_4_DESC, RandomVariable.NAT1_4_ID, RandomVariable.NAT1_4_SYN, RandomVariable.NAT1_4_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_5_STR, RandomVariable.NAT1_5_DESC, RandomVariable.NAT1_5_ID, RandomVariable.NAT1_5_SYN, RandomVariable.NAT1_5_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_6_STR, RandomVariable.NAT1_6_DESC, RandomVariable.NAT1_6_ID, RandomVariable.NAT1_6_SYN, RandomVariable.NAT1_6_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_7_STR, RandomVariable.NAT1_7_DESC, RandomVariable.NAT1_7_ID, RandomVariable.NAT1_7_SYN, RandomVariable.NAT1_7_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_8_STR, RandomVariable.NAT1_8_DESC, RandomVariable.NAT1_8_ID, RandomVariable.NAT1_8_SYN, RandomVariable.NAT1_8_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NAT1_9_STR, RandomVariable.NAT1_9_DESC, RandomVariable.NAT1_9_ID, RandomVariable.NAT1_9_SYN, RandomVariable.NAT1_9_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                addKeyWord(RandomVariable.NOR_STR, RandomVariable.NOR_DESC, RandomVariable.NOR_ID, RandomVariable.NOR_SYN, RandomVariable.NOR_SINCE, RandomVariable.TYPE_ID, keyWordsList);
                /*
                 * BiteWise Operators
                 */
                addKeyWord(BitwiseOperator.COMPL_STR, BitwiseOperator.COMPL_DESC, BitwiseOperator.COMPL_ID, BitwiseOperator.COMPL_SYN, BitwiseOperator.COMPL_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                addKeyWord(BitwiseOperator.AND_STR, BitwiseOperator.AND_DESC, BitwiseOperator.AND_ID, BitwiseOperator.AND_SYN, BitwiseOperator.AND_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                addKeyWord(BitwiseOperator.XOR_STR, BitwiseOperator.XOR_DESC, BitwiseOperator.XOR_ID, BitwiseOperator.XOR_SYN, BitwiseOperator.XOR_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                addKeyWord(BitwiseOperator.OR_STR, BitwiseOperator.OR_DESC, BitwiseOperator.OR_ID, BitwiseOperator.OR_SYN, BitwiseOperator.OR_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                addKeyWord(BitwiseOperator.LEFT_SHIFT_STR, BitwiseOperator.LEFT_SHIFT_DESC, BitwiseOperator.LEFT_SHIFT_ID, BitwiseOperator.LEFT_SHIFT_SYN, BitwiseOperator.LEFT_SHIFT_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                addKeyWord(BitwiseOperator.RIGHT_SHIFT_STR, BitwiseOperator.RIGHT_SHIFT_DESC, BitwiseOperator.RIGHT_SHIFT_ID, BitwiseOperator.RIGHT_SHIFT_SYN, BitwiseOperator.RIGHT_SHIFT_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                addKeyWord(BitwiseOperator.NAND_STR, BitwiseOperator.NAND_DESC, BitwiseOperator.NAND_ID, BitwiseOperator.NAND_SYN, BitwiseOperator.NAND_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                addKeyWord(BitwiseOperator.NOR_STR, BitwiseOperator.NOR_DESC, BitwiseOperator.NOR_ID, BitwiseOperator.NOR_SYN, BitwiseOperator.NOR_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                addKeyWord(BitwiseOperator.XNOR_STR, BitwiseOperator.XNOR_DESC, BitwiseOperator.XNOR_ID, BitwiseOperator.XNOR_SYN, BitwiseOperator.XNOR_SINCE, BitwiseOperator.TYPE_ID, keyWordsList);
                /*
                 * Units
                 */
                addKeyWord(Unit.PERC_STR, Unit.PERC_DESC, Unit.PERC_ID, Unit.PERC_SYN, Unit.PERC_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.PERM_STR, Unit.PERM_DESC, Unit.PERM_ID, Unit.PERM_SYN, Unit.PERM_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Metric prefixes */
                addKeyWord(Unit.YOTTA_STR, Unit.YOTTA_DESC, Unit.YOTTA_ID, Unit.YOTTA_SYN, Unit.YOTTA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.YOTTA_SEPT_STR, Unit.YOTTA_DESC, Unit.YOTTA_ID, Unit.YOTTA_SEPT_SYN, Unit.YOTTA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ZETTA_STR, Unit.ZETTA_DESC, Unit.ZETTA_ID, Unit.ZETTA_SYN, Unit.ZETTA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ZETTA_SEXT_STR, Unit.ZETTA_DESC, Unit.ZETTA_ID, Unit.ZETTA_SEXT_SYN, Unit.ZETTA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.EXA_STR, Unit.EXA_DESC, Unit.EXA_ID, Unit.EXA_SYN, Unit.EXA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.EXA_QUINT_STR, Unit.EXA_DESC, Unit.EXA_ID, Unit.EXA_QUINT_SYN, Unit.EXA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.PETA_STR, Unit.PETA_DESC, Unit.PETA_ID, Unit.PETA_SYN, Unit.PETA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.PETA_QUAD_STR, Unit.PETA_DESC, Unit.PETA_ID, Unit.PETA_QUAD_SYN, Unit.PETA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.TERA_STR, Unit.TERA_DESC, Unit.TERA_ID, Unit.TERA_SYN, Unit.TERA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.TERA_TRIL_STR, Unit.TERA_DESC, Unit.TERA_ID, Unit.TERA_TRIL_SYN, Unit.TERA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.GIGA_STR, Unit.GIGA_DESC, Unit.GIGA_ID, Unit.GIGA_SYN, Unit.GIGA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.GIGA_BIL_STR, Unit.GIGA_DESC, Unit.GIGA_ID, Unit.GIGA_BIL_SYN, Unit.GIGA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MEGA_STR, Unit.MEGA_DESC, Unit.MEGA_ID, Unit.MEGA_SYN, Unit.MEGA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MEGA_MIL_STR, Unit.MEGA_DESC, Unit.MEGA_ID, Unit.MEGA_MIL_SYN, Unit.MEGA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILO_STR, Unit.KILO_DESC, Unit.KILO_ID, Unit.KILO_SYN, Unit.KILO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILO_TH_STR, Unit.KILO_DESC, Unit.KILO_ID, Unit.KILO_TH_SYN, Unit.KILO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.HECTO_STR, Unit.HECTO_DESC, Unit.HECTO_ID, Unit.HECTO_SYN, Unit.HECTO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.HECTO_HUND_STR, Unit.HECTO_DESC, Unit.HECTO_ID, Unit.HECTO_HUND_SYN, Unit.HECTO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.DECA_STR, Unit.DECA_DESC, Unit.DECA_ID, Unit.DECA_SYN, Unit.DECA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.DECA_TEN_STR, Unit.DECA_DESC, Unit.DECA_ID, Unit.DECA_TEN_SYN, Unit.DECA_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.DECI_STR, Unit.DECI_DESC, Unit.DECI_ID, Unit.DECI_SYN, Unit.DECI_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.CENTI_STR, Unit.CENTI_DESC, Unit.CENTI_ID, Unit.CENTI_SYN, Unit.CENTI_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILLI_STR, Unit.MILLI_DESC, Unit.MILLI_ID, Unit.MILLI_SYN, Unit.MILLI_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MICRO_STR, Unit.MICRO_DESC, Unit.MICRO_ID, Unit.MICRO_SYN, Unit.MICRO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.NANO_STR, Unit.NANO_DESC, Unit.NANO_ID, Unit.NANO_SYN, Unit.NANO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.PICO_STR, Unit.PICO_DESC, Unit.PICO_ID, Unit.PICO_SYN, Unit.PICO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.FEMTO_STR, Unit.FEMTO_DESC, Unit.FEMTO_ID, Unit.FEMTO_SYN, Unit.FEMTO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ATTO_STR, Unit.ATTO_DESC, Unit.ATTO_ID, Unit.ATTO_SYN, Unit.ATTO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ZEPTO_STR, Unit.ZEPTO_DESC, Unit.ZEPTO_ID, Unit.ZEPTO_SYN, Unit.ZEPTO_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.YOCTO_STR, Unit.YOCTO_DESC, Unit.YOCTO_ID, Unit.YOCTO_SYN, Unit.YOCTO_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of length / distance */
                addKeyWord(Unit.METRE_STR, Unit.METRE_DESC, Unit.METRE_ID, Unit.METRE_SYN, Unit.METRE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILOMETRE_STR, Unit.KILOMETRE_DESC, Unit.KILOMETRE_ID, Unit.KILOMETRE_SYN, Unit.KILOMETRE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.CENTIMETRE_STR, Unit.CENTIMETRE_DESC, Unit.CENTIMETRE_ID, Unit.CENTIMETRE_SYN, Unit.CENTIMETRE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILLIMETRE_STR, Unit.MILLIMETRE_DESC, Unit.MILLIMETRE_ID, Unit.MILLIMETRE_SYN, Unit.MILLIMETRE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.INCH_STR, Unit.INCH_DESC, Unit.INCH_ID, Unit.INCH_SYN, Unit.INCH_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.YARD_STR, Unit.YARD_DESC, Unit.YARD_ID, Unit.YARD_SYN, Unit.YARD_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.FEET_STR, Unit.FEET_DESC, Unit.FEET_ID, Unit.FEET_SYN, Unit.FEET_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILE_STR, Unit.MILE_DESC, Unit.MILE_ID, Unit.MILE_SYN, Unit.MILE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.NAUTICAL_MILE_STR, Unit.NAUTICAL_MILE_DESC, Unit.NAUTICAL_MILE_ID, Unit.NAUTICAL_MILE_SYN, Unit.NAUTICAL_MILE_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of area */
                addKeyWord(Unit.METRE2_STR, Unit.METRE2_DESC, Unit.METRE2_ID, Unit.METRE2_SYN, Unit.METRE2_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.CENTIMETRE2_STR, Unit.CENTIMETRE2_DESC, Unit.CENTIMETRE2_ID, Unit.CENTIMETRE2_SYN, Unit.CENTIMETRE2_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILLIMETRE2_STR, Unit.MILLIMETRE2_DESC, Unit.MILLIMETRE2_ID, Unit.MILLIMETRE2_SYN, Unit.MILLIMETRE2_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ARE_STR, Unit.ARE_DESC, Unit.ARE_ID, Unit.ARE_SYN, Unit.ARE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.HECTARE_STR, Unit.HECTARE_DESC, Unit.HECTARE_ID, Unit.HECTARE_SYN, Unit.HECTARE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ACRE_STR, Unit.ACRE_DESC, Unit.ACRE_ID, Unit.ACRE_SYN, Unit.ACRE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILOMETRE2_STR, Unit.KILOMETRE2_DESC, Unit.KILOMETRE2_ID, Unit.KILOMETRE2_SYN, Unit.KILOMETRE2_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of volume */
                addKeyWord(Unit.MILLIMETRE3_STR, Unit.MILLIMETRE3_DESC, Unit.MILLIMETRE3_ID, Unit.MILLIMETRE3_SYN, Unit.MILLIMETRE3_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.CENTIMETRE3_STR, Unit.CENTIMETRE3_DESC, Unit.CENTIMETRE3_ID, Unit.CENTIMETRE3_SYN, Unit.CENTIMETRE3_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.METRE3_STR, Unit.METRE3_DESC, Unit.METRE3_ID, Unit.METRE3_SYN, Unit.METRE3_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILOMETRE3_STR, Unit.KILOMETRE3_DESC, Unit.KILOMETRE3_ID, Unit.KILOMETRE3_SYN, Unit.KILOMETRE3_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILLILITRE_STR, Unit.MILLILITRE_DESC, Unit.MILLILITRE_ID, Unit.MILLILITRE_SYN, Unit.MILLILITRE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.LITRE_STR, Unit.LITRE_DESC, Unit.LITRE_ID, Unit.LITRE_SYN, Unit.LITRE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.GALLON_STR, Unit.GALLON_DESC, Unit.GALLON_ID, Unit.GALLON_SYN, Unit.GALLON_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.PINT_STR, Unit.PINT_DESC, Unit.PINT_ID, Unit.PINT_SYN, Unit.PINT_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of time */
                addKeyWord(Unit.SECOND_STR, Unit.SECOND_DESC, Unit.SECOND_ID, Unit.SECOND_SYN, Unit.SECOND_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILLISECOND_STR, Unit.MILLISECOND_DESC, Unit.MILLISECOND_ID, Unit.MILLISECOND_SYN, Unit.MILLISECOND_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MINUTE_STR, Unit.MINUTE_DESC, Unit.MINUTE_ID, Unit.MINUTE_SYN, Unit.MINUTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.HOUR_STR, Unit.HOUR_DESC, Unit.HOUR_ID, Unit.HOUR_SYN, Unit.HOUR_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.DAY_STR, Unit.DAY_DESC, Unit.DAY_ID, Unit.DAY_SYN, Unit.DAY_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.WEEK_STR, Unit.WEEK_DESC, Unit.WEEK_ID, Unit.WEEK_SYN, Unit.WEEK_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.JULIAN_YEAR_STR, Unit.JULIAN_YEAR_DESC, Unit.JULIAN_YEAR_ID, Unit.JULIAN_YEAR_SYN, Unit.JULIAN_YEAR_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of mass */
                addKeyWord(Unit.KILOGRAM_STR, Unit.KILOGRAM_DESC, Unit.KILOGRAM_ID, Unit.KILOGRAM_SYN, Unit.KILOGRAM_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.GRAM_STR, Unit.GRAM_DESC, Unit.GRAM_ID, Unit.GRAM_SYN, Unit.GRAM_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILLIGRAM_STR, Unit.MILLIGRAM_DESC, Unit.MILLIGRAM_ID, Unit.MILLIGRAM_SYN, Unit.MILLIGRAM_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.DECAGRAM_STR, Unit.DECAGRAM_DESC, Unit.DECAGRAM_ID, Unit.DECAGRAM_SYN, Unit.DECAGRAM_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.TONNE_STR, Unit.TONNE_DESC, Unit.TONNE_ID, Unit.TONNE_SYN, Unit.TONNE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.OUNCE_STR, Unit.OUNCE_DESC, Unit.OUNCE_ID, Unit.OUNCE_SYN, Unit.OUNCE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.POUND_STR, Unit.POUND_DESC, Unit.POUND_ID, Unit.POUND_SYN, Unit.POUND_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of information */
                addKeyWord(Unit.BIT_STR, Unit.BIT_DESC, Unit.BIT_ID, Unit.BIT_SYN, Unit.BIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILOBIT_STR, Unit.KILOBIT_DESC, Unit.KILOBIT_ID, Unit.KILOBIT_SYN, Unit.KILOBIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MEGABIT_STR, Unit.MEGABIT_DESC, Unit.MEGABIT_ID, Unit.MEGABIT_SYN, Unit.MEGABIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.GIGABIT_STR, Unit.GIGABIT_DESC, Unit.GIGABIT_ID, Unit.GIGABIT_SYN, Unit.GIGABIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.TERABIT_STR, Unit.TERABIT_DESC, Unit.TERABIT_ID, Unit.TERABIT_SYN, Unit.TERABIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.PETABIT_STR, Unit.PETABIT_DESC, Unit.PETABIT_ID, Unit.PETABIT_SYN, Unit.PETABIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.EXABIT_STR, Unit.EXABIT_DESC, Unit.EXABIT_ID, Unit.EXABIT_SYN, Unit.EXABIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ZETTABIT_STR, Unit.ZETTABIT_DESC, Unit.ZETTABIT_ID, Unit.ZETTABIT_SYN, Unit.ZETTABIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.YOTTABIT_STR, Unit.YOTTABIT_DESC, Unit.YOTTABIT_ID, Unit.YOTTABIT_SYN, Unit.YOTTABIT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.BYTE_STR, Unit.BYTE_DESC, Unit.BYTE_ID, Unit.BYTE_SYN, Unit.BYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILOBYTE_STR, Unit.KILOBYTE_DESC, Unit.KILOBYTE_ID, Unit.KILOBYTE_SYN, Unit.KILOBYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MEGABYTE_STR, Unit.MEGABYTE_DESC, Unit.MEGABYTE_ID, Unit.MEGABYTE_SYN, Unit.MEGABYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.GIGABYTE_STR, Unit.GIGABYTE_DESC, Unit.GIGABYTE_ID, Unit.GIGABYTE_SYN, Unit.GIGABYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.TERABYTE_STR, Unit.TERABYTE_DESC, Unit.TERABYTE_ID, Unit.TERABYTE_SYN, Unit.TERABYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.PETABYTE_STR, Unit.PETABYTE_DESC, Unit.PETABYTE_ID, Unit.PETABYTE_SYN, Unit.PETABYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.EXABYTE_STR, Unit.EXABYTE_DESC, Unit.EXABYTE_ID, Unit.EXABYTE_SYN, Unit.EXABYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ZETTABYTE_STR, Unit.ZETTABYTE_DESC, Unit.ZETTABYTE_ID, Unit.ZETTABYTE_SYN, Unit.ZETTABYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.YOTTABYTE_STR, Unit.YOTTABYTE_DESC, Unit.YOTTABYTE_ID, Unit.YOTTABYTE_SYN, Unit.YOTTABYTE_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of energy */
                addKeyWord(Unit.JOULE_STR, Unit.JOULE_DESC, Unit.JOULE_ID, Unit.JOULE_SYN, Unit.JOULE_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.ELECTRONO_VOLT_STR, Unit.ELECTRONO_VOLT_DESC, Unit.ELECTRONO_VOLT_ID, Unit.ELECTRONO_VOLT_SYN, Unit.ELECTRONO_VOLT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILO_ELECTRONO_VOLT_STR, Unit.KILO_ELECTRONO_VOLT_DESC, Unit.KILO_ELECTRONO_VOLT_ID, Unit.KILO_ELECTRONO_VOLT_SYN, Unit.KILO_ELECTRONO_VOLT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MEGA_ELECTRONO_VOLT_STR, Unit.MEGA_ELECTRONO_VOLT_DESC, Unit.MEGA_ELECTRONO_VOLT_ID, Unit.MEGA_ELECTRONO_VOLT_SYN, Unit.MEGA_ELECTRONO_VOLT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.GIGA_ELECTRONO_VOLT_STR, Unit.GIGA_ELECTRONO_VOLT_DESC, Unit.GIGA_ELECTRONO_VOLT_ID, Unit.GIGA_ELECTRONO_VOLT_SYN, Unit.GIGA_ELECTRONO_VOLT_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.TERA_ELECTRONO_VOLT_STR, Unit.TERA_ELECTRONO_VOLT_DESC, Unit.TERA_ELECTRONO_VOLT_ID, Unit.TERA_ELECTRONO_VOLT_SYN, Unit.TERA_ELECTRONO_VOLT_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of speed */
                addKeyWord(Unit.METRE_PER_SECOND_STR, Unit.METRE_PER_SECOND_DESC, Unit.METRE_PER_SECOND_ID, Unit.METRE_PER_SECOND_SYN, Unit.METRE_PER_SECOND_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILOMETRE_PER_HOUR_STR, Unit.KILOMETRE_PER_HOUR_DESC, Unit.KILOMETRE_PER_HOUR_ID, Unit.KILOMETRE_PER_HOUR_SYN, Unit.KILOMETRE_PER_HOUR_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILE_PER_HOUR_STR, Unit.MILE_PER_HOUR_DESC, Unit.MILE_PER_HOUR_ID, Unit.MILE_PER_HOUR_SYN, Unit.MILE_PER_HOUR_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KNOT_STR, Unit.KNOT_DESC, Unit.KNOT_ID, Unit.KNOT_SYN, Unit.KNOT_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of acceleration */
                addKeyWord(Unit.METRE_PER_SECOND2_STR, Unit.METRE_PER_SECOND2_DESC, Unit.METRE_PER_SECOND2_ID, Unit.METRE_PER_SECOND2_SYN, Unit.METRE_PER_SECOND2_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.KILOMETRE_PER_HOUR2_STR, Unit.KILOMETRE_PER_HOUR2_DESC, Unit.KILOMETRE_PER_HOUR2_ID, Unit.KILOMETRE_PER_HOUR2_SYN, Unit.KILOMETRE_PER_HOUR2_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MILE_PER_HOUR2_STR, Unit.MILE_PER_HOUR2_DESC, Unit.MILE_PER_HOUR2_ID, Unit.MILE_PER_HOUR2_SYN, Unit.MILE_PER_HOUR2_SINCE, Unit.TYPE_ID, keyWordsList);
                /* Units of angle */
                addKeyWord(Unit.RADIAN_ARC_STR, Unit.RADIAN_ARC_DESC, Unit.RADIAN_ARC_ID, Unit.RADIAN_ARC_SYN, Unit.RADIAN_ARC_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.DEGREE_ARC_STR, Unit.DEGREE_ARC_DESC, Unit.DEGREE_ARC_ID, Unit.DEGREE_ARC_SYN, Unit.DEGREE_ARC_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.MINUTE_ARC_STR, Unit.MINUTE_ARC_DESC, Unit.MINUTE_ARC_ID, Unit.MINUTE_ARC_SYN, Unit.MINUTE_ARC_SINCE, Unit.TYPE_ID, keyWordsList);
                addKeyWord(Unit.SECOND_ARC_STR, Unit.SECOND_ARC_DESC, Unit.SECOND_ARC_ID, Unit.SECOND_ARC_SYN, Unit.SECOND_ARC_SINCE, Unit.TYPE_ID, keyWordsList);
                /* User Defined Function specific parser keywords */
                if (UDFExpression) addUDFSpecificParserKeyWords(keyWordsList);
            }
            /*
             * Other parser symbols keywords
             */
            addKeyWord(ParserSymbol.LEFT_PARENTHESES_STR, ParserSymbol.LEFT_PARENTHESES_DESC, ParserSymbol.LEFT_PARENTHESES_ID, ParserSymbol.LEFT_PARENTHESES_SYN, ParserSymbol.LEFT_PARENTHESES_SINCE, ParserSymbol.TYPE_ID, keyWordsList);
            addKeyWord(ParserSymbol.RIGHT_PARENTHESES_STR, ParserSymbol.RIGHT_PARENTHESES_DESC, ParserSymbol.RIGHT_PARENTHESES_ID, ParserSymbol.RIGHT_PARENTHESES_SYN, ParserSymbol.RIGHT_PARENTHESES_SINCE, ParserSymbol.TYPE_ID, keyWordsList);
            addKeyWord(ParserSymbol.COMMA_STR, ParserSymbol.COMMA_DESC, ParserSymbol.COMMA_ID, ParserSymbol.COMMA_SYN, ParserSymbol.COMMA_SINCE, ParserSymbol.TYPE_ID, keyWordsList);
            addKeyWord(ParserSymbol.SEMI_STR, ParserSymbol.SEMI_DESC, ParserSymbol.COMMA_ID, ParserSymbol.SEMI_SYN, ParserSymbol.COMMA_SINCE, ParserSymbol.TYPE_ID, keyWordsList);
            addKeyWord(ParserSymbol.NUMBER_LITERAL_STR, ParserSymbol.NUMBER_LITERAL_DESC, ParserSymbol.NUMBER_ID, ParserSymbol.NUMBER_SYN, ParserSymbol.NUMBER_SINCE, ParserSymbol.NUMBER_TYPE_ID, keyWordsList);
            addKeyWord(ParserSymbol.BLANK_STR, ParserSymbol.BLANK_DESC, ParserSymbol.BLANK_ID, ParserSymbol.BLANK_SYN, ParserSymbol.BLANK_SINCE, ParserSymbol.TYPE_ID, keyWordsList);
        }
        /**
		 * Returns list of the functions parameters.
		 *
		 * @param      pos                 the function position
		 * @param      tokensList          the tokens checkSYnt
		 *
		 * @return     the list of function parameters
		 *
		 * @see        FunctionParameter
		 */
        internal static List<FunctionParameter> getFunctionParameters(int pos, List<Token> tokensList) {
			List<FunctionParameter> functionParameters = new List<FunctionParameter>();
			int cPos = pos+2;
			int tokenLevel = tokensList[pos+1].tokenLevel;
			int pPos = cPos;
			bool comma;
			bool paren;
			bool end = false;
			List<Token> paramTkones = new List<Token>();
            StringBuilder paramStrBuilder = new StringBuilder();
            do {
				Token t = tokensList[cPos];
				comma = false;
				paren = false;
				if (t.tokenLevel == tokenLevel)
					if (t.tokenTypeId == ParserSymbol.TYPE_ID) {
						if (t.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID)
							paren = true;
						else
							if (t.tokenId == ParserSymbol.COMMA_ID)
								comma = true;
					}
				if (paren || comma) {
					if (cPos > pos + 2) {
						functionParameters.Add( new FunctionParameter(paramTkones, paramStrBuilder.ToString(), pPos, cPos-1 ) );
						paramTkones = new List<Token>();
                        paramStrBuilder = new StringBuilder();
						pPos = cPos+1;
					}
				} else {
					paramTkones.Add(t);
					paramStrBuilder.Append(t.tokenStr);
                }
				if (paren)
					end = true;
				else
					cPos++;
			} while (!end);
			return functionParameters;
		}
        /**
         * Cleans "--" case
         * considering defined parser keywords "-->", "<--"
         */
        private static String cleanMinusMinus(String expressionString) {
            String expressionStringCleaned = expressionString;
            if (expressionStringCleaned.Length >= 2) {
				char currChar;
				char prevChar;
				bool toClean = false;
				int pos = 1;
				do {
					currChar = expressionStringCleaned[pos];
					prevChar = expressionStringCleaned[pos-1];
					toClean = false;
					if (currChar == '-' && prevChar == '-') {
						toClean = true;
						if (pos-2 >= 0)
							if (expressionStringCleaned[pos-2] == '<')
								toClean = false;
						if (pos+1 < expressionStringCleaned.Length)
							if (expressionStringCleaned[pos+1] == '>')
								toClean = false;
					}
					if (toClean) {
						String leftPart = expressionStringCleaned.Substring(0, pos-1);
						String rightPart = StringInvariant.EMPTY;
						if (pos+1 < expressionStringCleaned.Length)
							rightPart = expressionStringCleaned.Substring(pos+1);
						expressionStringCleaned = leftPart;
						if (rightPart.Length > 0) {
							if (leftPart.Length > 0)
								expressionStringCleaned = expressionStringCleaned + "+" + rightPart;
							else
								expressionStringCleaned = rightPart;
						}
						pos = leftPart.Length + 1;
					}
					pos++;
				} while (pos < expressionStringCleaned.Length);
			}
            return expressionStringCleaned;
        }
        /**
         * Cleans blanks and other cases like "++', "+-", "-+"", "--"
         */
        internal static String cleanExpressionString(String expressionString, bool attemptToFixExpStrEnabled) {
            StringBuilder expressionStringCleanedBuilder = new StringBuilder();
			if (expressionString == null) return StringInvariant.EMPTY;
			int expLen = expressionString.Length;
			if (expLen == 0) return StringInvariant.EMPTY;
			char c;
			char clag1 = 'a';
			int blankCnt = 0;
			int newExpLen = 0;
			for (int i = 0; i < expLen; i++) {
				c = expressionString[i];
				if (StringUtils.isBlankChar(c)) {
					blankCnt++;
				} else if (blankCnt > 0) {
					if (newExpLen > 0) {
						if (StringUtils.isNotSpecialChar(clag1)) expressionStringCleanedBuilder.Append(StringInvariant.SPACE);
					}
					blankCnt = 0;
				}
				if (blankCnt == 0) {
                    expressionStringCleanedBuilder.Append(c);
					clag1 = c;
					newExpLen++;
				}
			}
            String expressionStringCleaned = expressionStringCleanedBuilder.ToString();
            if (attemptToFixExpStrEnabled) {
				if (expressionStringCleaned.Contains("++"))
					expressionStringCleaned = expressionStringCleaned.Replace("++", "+");
				if (expressionStringCleaned.Contains("+-"))
					expressionStringCleaned = expressionStringCleaned.Replace("+-", "-");
				if (expressionStringCleaned.Contains("-+"))
					expressionStringCleaned = expressionStringCleaned.Replace("-+", "-");
				if (expressionStringCleaned.Contains("--")) {
					if (expressionStringCleaned.Contains("-->") || expressionStringCleaned.Contains("<--")) {
                        expressionStringCleaned = cleanMinusMinus(expressionStringCleaned);
					} else expressionStringCleaned = expressionStringCleaned.Replace("--", "+");
				}
				int len = expressionStringCleaned.Length;
				if (len > 0)
					if (expressionStringCleaned[0] == '+')
						expressionStringCleaned = expressionStringCleaned.Substring(1);
				len = expressionStringCleaned.Length;
				if (len > 0)
					if (expressionStringCleaned[len-1] == '-' || expressionStringCleaned[len-1] == '+')
						expressionStringCleaned = expressionStringCleaned.Substring(0,len-1);
			}
            return expressionStringCleaned;
        }
        internal static String createExpressionDescription(String description, String expressionString) {
            String expressionDescription = StringUtils.surroundSquareBrackets(expressionString) + StringInvariant.COLON_SPACE;
            if (description.Trim().Length > 0)
                expressionDescription = StringUtils.surroundSquareBrackets(description) + expressionDescription;
            return expressionDescription;
        }
		private const String FUNCTION = "function";
		private const String ARGUMENT = "argument";
		private const String UNITCONST = "unit/const";
		private const String ERROR = "error";
		/**
		 * Tokenizes expression string and returns tokens list,
		 * including: string, type, level.
		 *
		 * @return Copy of initial tokens.
		 *
		 * @see Token
		 * @see mXparser#consolePrintTokens(ArrayList)
		 */
		internal static List<Token> getCopyOfInitialTokens(String expressionString, List<Token> initialTokens) {
			List<Token> tokensListCopy = new List<Token>();
			if (expressionString.Length == 0) return tokensListCopy;
			if (initialTokens.Count == 0) return tokensListCopy;
			Token token;
			for (int i = 0; i < initialTokens.Count; i++) {
				token = initialTokens[i];
				if (token.tokenTypeId == Token.NOT_MATCHED) {
					if (StringUtils.regexMatch(token.tokenStr, ParserSymbol.unitOnlyTokenRegExp)) {
						token.looksLike = UNITCONST;
					} else if (StringUtils.regexMatch(token.tokenStr, ParserSymbol.nameOnlyTokenRegExp)) {
						token.looksLike = ARGUMENT;
						if (i < initialTokens.Count - 1) {
							Token tokenNext = initialTokens[i + 1];
							if ((tokenNext.tokenTypeId == ParserSymbol.TYPE_ID) && (tokenNext.tokenId == ParserSymbol.LEFT_PARENTHESES_ID))
								token.looksLike = FUNCTION;
						}
					} else {
						token.looksLike = ERROR;
					}
				}
				tokensListCopy.Add(token.clone());
			}
			return tokensListCopy;
		}
		/**
		 * Returns missing user defined arguments names, i.e.
		 * sin(x) + cos(y) where x and y are not defined
		 * function will return x and y.
		 *
		 * @return Array of missing user defined arguments names
		 * - distinct strings.
		 */
		internal static String[] getMissingUserDefinedArguments(List<Token> tokens) {
			List<String> missingArguments = new List<String>();
			foreach (Token t in tokens)
				if (t.looksLike.Equals(ARGUMENT))
					if (!missingArguments.Contains(t.tokenStr))
						missingArguments.Add(t.tokenStr);
			int n = missingArguments.Count;
			String[] missArgs = new String[n];
			for (int i = 0; i < n; i++)
				missArgs[i] = missingArguments[i];
			return missArgs;
		}
        /**
		 * Returns missing user defined units names, i.e.
		 * 2*[w] + [q] where [w] and [q] are not defined
		 * function will return [w] and [q].
		 *
		 * @return Array of missing user defined units names
		 * - distinct strings.
		 */
        internal static String[] getMissingUserDefinedUnits(List<Token> tokens) {
			List<String> missingUnits = new List<String>();
			foreach (Token t in tokens)
				if (t.looksLike.Equals(UNITCONST))
					if (!missingUnits.Contains(t.tokenStr))
						missingUnits.Add(t.tokenStr);
			int n = missingUnits.Count;
			String[] missUnits = new String[n];
			for (int i = 0; i < n; i++)
				missUnits[i] = missingUnits[i];
			return missUnits;
		}
        /**
		 * Returns missing user defined functions names, i.e.
		 * sin(x) + fun(x,y) where fun is not defined
		 * function will return fun.
		 *
		 * @return Array of missing user defined functions names
		 * - distinct strings.
		 */
        internal static String[] getMissingUserDefinedFunctions(List<Token> tokens) {
			List<String> missingFunctions = new List<String>();
			foreach (Token t in tokens)
				if (t.looksLike.Equals(FUNCTION))
					if (!missingFunctions.Contains(t.tokenStr))
						missingFunctions.Add(t.tokenStr);
			int n = missingFunctions.Count;
			String[] missFun = new String[n];
			for (int i = 0; i < n; i++)
				missFun[i] = missingFunctions[i];
			return missFun;
		}
		/**
		 * shows known keywords
		 */
		internal static void showKeyWords(List<KeyWord> keyWordsList) {
			int keyWordsNumber = keyWordsList.Count;
			String maxStr = "KEY_WORD";
			mXparser.consolePrintln("Keywords:");
			mXparser.consolePrintln(" -------------------------------------------");
			mXparser.consolePrintln("|      IDX | KEY_WORD |       ID |  TYPE_ID |");
			mXparser.consolePrintln(" -------------------------------------------");
			for (int keyWordIndex=0; keyWordIndex<keyWordsNumber; keyWordIndex++){
				KeyWord keyWord = keyWordsList[keyWordIndex];
				String idxStr = StringUtils.getLeftSpaces(maxStr, keyWordIndex.ToString());
				String wordStr = StringUtils.getLeftSpaces(maxStr, keyWord.wordString);
				String idStr = StringUtils.getLeftSpaces(maxStr, keyWord.wordId.ToString());
				String typeIdStr = StringUtils.getLeftSpaces(maxStr, keyWord.wordTypeId.ToString());
				mXparser.consolePrintln("| " + idxStr+ " | " + wordStr + " | " + idStr + " | " + typeIdStr + " |");
			}
			mXparser.consolePrintln(" -------------------------------------------");
		}

        /*
         * =============================================================
         * Help EXPORT
         */

        internal static String getHelp(String query, List<KeyWord> keyWordsList, bool addHeader, bool addCaption, String caption) {
            StringBuilder helpStr = new StringBuilder();

            if (addCaption)
                helpStr.Append(selectCaption(query, caption));

            if (addHeader) {
                if (addCaption)
                    helpStr.Append(StringInvariant.NEW_LINE);

                StringUtils.stringBuilderPartsAppend(helpStr
                        ,StringUtils.getLeftSpaces("12345", "#  ")
                        ,StringUtils.getRightSpaces("01234567890123456789", StringModel.STRING_RESOURCES.KEYWORD)
                        ,StringUtils.getRightSpaces("                        ", StringModel.STRING_RESOURCES.TYPE)
                        ,StringUtils.getRightSpaces("0123456789012345678901234567890123456789012345", StringModel.STRING_RESOURCES.SYNTAX)
                        ,StringUtils.getRightSpaces("012345", StringModel.STRING_RESOURCES.SINCE)
                        ,StringModel.STRING_RESOURCES.DESCRIPTION
                        ,StringInvariant.NEW_LINE);

                StringUtils.stringBuilderPartsAppend(helpStr
                        ,StringUtils.getLeftSpaces("12345", "-  ")
                        ,StringUtils.getRightSpaces("01234567890123456789", "--------")
                        ,StringUtils.getRightSpaces("                        ", "----")
                        ,StringUtils.getRightSpaces("0123456789012345678901234567890123456789012345", "------")
                        ,StringUtils.getRightSpaces("012345", "-----")
                        ,"-----------");
            }

            List<KeyWord> keyWordsResult = getKeyWords(query, keyWordsList);
            int id = 0;
            foreach (KeyWord keyWord in keyWordsResult) {
                id++;
                String type = Token.getTokenTypeDescription(keyWord.wordTypeId);
                String kw = keyWord.wordString;
                if (id > 1 || addCaption || addHeader)
                    helpStr.Append(StringInvariant.NEW_LINE);
                StringUtils.stringBuilderPartsAppend(helpStr
                        ,StringUtils.getLeftSpaces("12345",id + StringInvariant.DOT_SPACE)
                        ,StringUtils.getRightSpaces("01234567890123456789", kw)
                        ,StringUtils.getRightSpaces("                        ",StringInvariant.LOWER + type + StringInvariant.GREATER)
                        ,StringUtils.getRightSpaces("0123456789012345678901234567890123456789012345", keyWord.syntax)
                        ,StringUtils.getRightSpaces("012345", keyWord.since)
                        ,keyWord.description);
            }
            return helpStr.ToString();
        }
        internal static String getHelp(String query, List<KeyWord> keyWordsList) {
            return getHelp(query, keyWordsList, true, true, "");
        }

        internal static String getHelpAsCsv(List<KeyWord> keyWordsList, String quote, String delimiter, bool addHeader, String query) {
            List<KeyWord> keyWordsResult = getKeyWords(query, keyWordsList);
            StringResources stringResources = StringModel.getStringResources();
            StringBuilder result = new StringBuilder();

            if (addHeader)
                StringUtils.stringBuilderPartsAppendDelimited(quote, delimiter, result
                        ,stringResources.KEYWORD
                        ,stringResources.TYPE
                        ,stringResources.SYNTAX
                        ,stringResources.SINCE
                        ,stringResources.DESCRIPTION
                );

            int n = 0;
            foreach (KeyWord kw in keyWordsResult) {
                n++;
                StringUtils.stringBuilderPartsAppendDelimitedRow(quote, delimiter, addHeader || n > 1, result
                        ,kw.wordString
                        ,Token.getTokenTypeDescription(kw.wordTypeId)
                        ,kw.syntax
                        ,kw.since
                        ,kw.description
                );
            }
            return StringUtils.cleanNewLineAtTheEnd(result.ToString());
        }

        private static void buildHtmlTableRows(List<KeyWord> keyWordsList, bool addHeader, StringBuilder stringBuilder) {
            StringResources stringResources = StringModel.getStringResources();
            if (addHeader)
                StringUtils.stringBuilderPartsAppendHtmlTableHead(stringBuilder
                        ,stringResources.KEYWORD
                        ,stringResources.TYPE
                        ,stringResources.SYNTAX
                        ,stringResources.SINCE
                        ,stringResources.DESCRIPTION
                );

            int n = 0;
            foreach (KeyWord kw in keyWordsList) {
                n++;
                StringUtils.stringBuilderPartsAppendHtmlTableRow(stringBuilder
                        ,kw.wordString
                        ,Token.getTokenTypeDescription(kw.wordTypeId)
                        ,kw.syntax
                        ,kw.since
                        ,kw.description
                );
            }
        }

        private static void buildMarkdownTableRows(List<KeyWord> keyWordsList, bool addHeader, StringBuilder stringBuilder) {
            StringResources stringResources = StringModel.getStringResources();
            StringUtils.stringBuilderPartsAppendMarkdownTableHead(
                    addHeader
                    ,stringBuilder
                    ,stringResources.KEYWORD
                    ,stringResources.TYPE
                    ,stringResources.SYNTAX
                    ,stringResources.SINCE
                    ,stringResources.DESCRIPTION
                );

            int n = 0;
            foreach (KeyWord kw in keyWordsList) {
                n++;
                StringUtils.stringBuilderPartsAppendMarkdownTableRow(
                        stringBuilder
                        ,kw.wordString
                        ,Token.getTokenTypeDescription(kw.wordTypeId)
                        ,kw.syntax
                        ,kw.since
                        ,kw.description
                );
            }
        }

        private static String makeJsonKeyValuePair(String key, String value) {
            return StringUtils.surroundQuote(key)
                    + StringInvariant.COLON_SPACE
                    + StringUtils.surroundQuote(value)
                    ;
        }

        private static void buildJsonRows(List<KeyWord> keyWordsList, StringBuilder stringBuilder) {
            StringResources stringResources = StringModel.getStringResources();
            int n = 0;
            foreach (KeyWord kw in keyWordsList) {
                n++;
                if (n > 1) stringBuilder.Append(StringInvariant.COMMA);
                StringUtils.stringBuilderPartsAppendJsonRow(
                        stringBuilder
                        ,makeJsonKeyValuePair(stringResources.KEYWORD, kw.wordString)
                        ,makeJsonKeyValuePair(stringResources.TYPE, Token.getTokenTypeDescription(kw.wordTypeId))
                        ,makeJsonKeyValuePair(stringResources.SYNTAX, kw.syntax)
                        ,makeJsonKeyValuePair(stringResources.SINCE, kw.since)
                        ,makeJsonKeyValuePair(stringResources.DESCRIPTION, kw.description)
                );
            }
        }

        private static String buildHelpCaption(String query) {
            StringResources stringResources = StringModel.getStringResources();
            if (query.Length > 0)
                return stringResources.HELP_CONTENT_LIMITED_TO_QUERY + StringInvariant.COLON_SPACE + StringUtils.surroundApostrophe(query);

            return stringResources.ALL_HELP_CONTENT;
        }

        private static String selectCaption(String query, String caption) {
            if (caption == null || caption.Length == 0)
                return buildHelpCaption(query);

            return caption;
        }

        private static String makeCssClassDef(String cssClass) {
            return " class=" + StringUtils.surroundQuote(cssClass);
        }

        internal static String getHelpAsHtmlTable(
                List<KeyWord> keyWordsList
                ,bool addHeader
                ,bool addCaption
                ,bool addFigure
                ,String query
                ,String caption
                ,String cssClass
        ) {
            List<KeyWord> keyWordsResult = getKeyWords(query, keyWordsList);
            StringBuilder result = new StringBuilder();

            String cssClassDef = StringInvariant.EMPTY;
            String captionText = selectCaption(query, caption);

            if (cssClass != null && cssClass.Length > 0)
                cssClassDef = makeCssClassDef(cssClass);

            if (addFigure)
                StringUtils.stringBuilderLinesAppend(result, "<figure" + cssClassDef + ">", "<table>");
            else {
                StringUtils.stringBuilderLinesAppend(result, "<table" + cssClassDef + ">");
                if (addCaption)
                    StringUtils.stringBuilderLinesAppend(result, "<caption>" + captionText + "</caption>");
            }

            StringUtils.stringBuilderLinesAppend(result,"<tbody>");
            buildHtmlTableRows(keyWordsResult, addHeader, result);
            StringUtils.stringBuilderLinesAppend(result, "</tbody>", "</table>");

            if (addFigure) {
                if (addCaption)
                    StringUtils.stringBuilderLinesAppend(result, "<figcaption>" + captionText + "</figcaption>");
                StringUtils.stringBuilderLinesAppend(result, "</figure>");
            }

            return StringUtils.cleanNewLineAtTheEnd(result.ToString());
        }
        internal static String getHelpAsHtmlTable(List<KeyWord> keyWordsList, bool addHeadline, String query) {
            return getHelpAsHtmlTable(keyWordsList, addHeadline, true, false, query, "", "");
        }


        internal static String getHelpAsMarkdownTable(List<KeyWord> keyWordsList, String query) {
            return getHelpAsMarkdownTable(keyWordsList, true, true, query, "");
        }


        internal static String getHelpAsMarkdownTable(List<KeyWord> keyWordsList, bool addHeader, bool addCaption, String query, String caption) {
            List<KeyWord> keyWordsResult = getKeyWords(query, keyWordsList);
            StringBuilder result = new StringBuilder();

            if (addCaption)
                StringUtils.stringBuilderLinesAppend(result, "### " + selectCaption(query, caption));

            buildMarkdownTableRows(keyWordsResult, addHeader, result);

            return StringUtils.cleanNewLineAtTheEnd(result.ToString()).Replace("\\\\|", "\\\\ |");
        }

        internal static String getHelpAsJson(List<KeyWord> keyWordsList, bool addCaption, String query, String caption) {
            StringResources stringResources = StringModel.getStringResources();
            List<KeyWord> keyWordsResult = getKeyWords(query, keyWordsList);
            StringBuilder result = new StringBuilder();
            result.Append(StringInvariant.LEFT_SQUARE_BRACKET);

            if (addCaption) {
                StringUtils.stringBuilderPartsAppend(result,
                        StringInvariant.NEW_LINE
                        ,StringUtils.JSON_ROW_INDENTATION_TAG
                        ,StringInvariant.LEFT_CURLY_BRACKET + StringInvariant.SPACE
                                + makeJsonKeyValuePair(stringResources.CAPTION, selectCaption(query, caption))
                                + StringInvariant.SPACE + StringInvariant.RIGHT_CURLY_BRACKET
                );
                if (keyWordsResult.Count > 0)
                    result.Append(StringInvariant.COMMA);
            }
            buildJsonRows(keyWordsResult, result);
            StringUtils.stringBuilderPartsAppend(result
                    ,StringInvariant.NEW_LINE
                    ,StringInvariant.RIGHT_SQUARE_BRACKET
            );
            return result.ToString();
        }

        private const String KEY_ADVANCED_SEARCH_TAG = "key=";
        private const String DESC_ADVANCED_SEARCH_TAG = "desc=";
        private const String SYN_ADVANCED_SEARCH_TAG = "syn=";
        private const String SINCE_ADVANCED_SEARCH_TAG = "since=";
        private const String KEYID_ADVANCED_SEARCH_TAG = "keyid=";
        private const String TYPEID_ADVANCED_SEARCH_TAG = "typeid=";
        private const String TYPE_ADVANCED_SEARCH_TAG = "type=";

        private static String buildHelpSearchLine(KeyWord kw, bool advancedSearch) {
            if (advancedSearch)
                return KEY_ADVANCED_SEARCH_TAG + kw.wordString + StringInvariant.SPACE +
                        DESC_ADVANCED_SEARCH_TAG + kw.description + StringInvariant.SPACE +
                        SYN_ADVANCED_SEARCH_TAG + kw.syntax + StringInvariant.SPACE +
                        SINCE_ADVANCED_SEARCH_TAG + kw.since + StringInvariant.SPACE +
                        KEYID_ADVANCED_SEARCH_TAG + kw.wordId + StringInvariant.SPACE +
                        TYPEID_ADVANCED_SEARCH_TAG + kw.wordTypeId + StringInvariant.SPACE +
                        TYPE_ADVANCED_SEARCH_TAG + Token.getTokenTypeDescription(kw.wordTypeId)
                        ;
            return kw.wordString + StringInvariant.SPACE +
                   kw.description + StringInvariant.SPACE +
                   kw.syntax + StringInvariant.SPACE +
                   kw.since + StringInvariant.SPACE +
                   kw.wordId + StringInvariant.SPACE +
                   kw.wordTypeId + StringInvariant.SPACE +
                   Token.getTokenTypeDescription(kw.wordTypeId)
                    ;
        }
        private static bool containsAdvancedSearchTag(String query, String tag) {
            return query.StartsWith(tag) && query.Length > tag.Length;
        }
        private static bool checkIfAdvancedSearch(String query) {
            if (query == null) return false;
            if (query.Length < 5) return false;
            if (!query.Contains("=")) return false;

            if (containsAdvancedSearchTag(query, TYPE_ADVANCED_SEARCH_TAG)) return true;
            if (containsAdvancedSearchTag(query, KEY_ADVANCED_SEARCH_TAG)) return true;
            if (containsAdvancedSearchTag(query, DESC_ADVANCED_SEARCH_TAG)) return true;
            if (containsAdvancedSearchTag(query, SYN_ADVANCED_SEARCH_TAG)) return true;
            if (containsAdvancedSearchTag(query, SINCE_ADVANCED_SEARCH_TAG)) return true;
            if (containsAdvancedSearchTag(query, KEYID_ADVANCED_SEARCH_TAG)) return true;
            if (containsAdvancedSearchTag(query, TYPEID_ADVANCED_SEARCH_TAG)) return true;

            return false;
        }
        /**
	     * Returns list of keywords known to the parser
	     *
	     * @param query Give any string to filter list of keywords against this string.
	     *              User more precise syntax: str=tokenString, desc=tokenDescription,
	     *              syn=TokenSyntax, sin=tokenSince, wid=wordId, tid=wordTypeId
	     *              to narrow the result.
	     *
	     * @return      List of keywords known to the parser filter against query string.
	     *
	     * @see KeyWord
	     * @see KeyWord#wordTypeId
	     * @see Expression#getHelp(String)
	     */
        internal static List<KeyWord> getKeyWords(String query, List<KeyWord> keyWordsList) {
            List<KeyWord> kwyWordsToReturn = new List<KeyWord>();
            keyWordsList.Sort(new KwTypeComparator());
            String queryLower = "";
            if (query != null)
                queryLower = query.ToLower();

            String searchLine;
            bool advancedSearch = checkIfAdvancedSearch(query);
            foreach (KeyWord kw in keyWordsList) {
                searchLine = buildHelpSearchLine(kw, advancedSearch);
                if (queryLower.Length == 0 || searchLine.ToLower().Contains(queryLower))
                    kwyWordsToReturn.Add(kw);
            }
            return kwyWordsToReturn;
        }

        /*
         * =============================================================
         */
        /**
		 * Shows parsing (verbose mode purposes).
		 *
		 */
        internal static void showParsing(int lPos, int rPos, List<Token> tokensList) {
			mXparser.consolePrint(StringInvariant.LONG_RIGHT_ARROW_SPACE);
			for (int i=lPos; i<=rPos; i++) {
				Token token = tokensList[i];
				if (token.tokenTypeId == ParserSymbol.NUMBER_TYPE_ID)
					mXparser.consolePrint(token.tokenValue + StringInvariant.SPACE);
				else
					mXparser.consolePrint(token.tokenStr + StringInvariant.SPACE);
			}
			mXparser.consolePrint(StringInvariant.DOTS_SPACE);
		}
		/*
		 * show tokens
		 */
		internal static void showTokens(List<Token> tokensList) {
			String maxStr = "TokenTypeId";
			mXparser.consolePrintln(" --------------------");
			mXparser.consolePrintln("| " + StringModel.STRING_RESOURCES.EXPRESSION_TOKENS + StringInvariant.COLON + " |");
			mXparser.consolePrintln(" ---------------------------------------------------------------------------------------------------------------");
			mXparser.consolePrintln("|    TokenIdx |       Token |        KeyW |     TokenId | TokenTypeId |  TokenLevel |  TokenValue |   LooksLike |");
			mXparser.consolePrintln(" ---------------------------------------------------------------------------------------------------------------");
			if (tokensList == null) {
				mXparser.consolePrintln(StringModel.STRING_RESOURCES.NULL_TOKENS_LIST);
				return;
			}
			int tokensNumber = tokensList.Count;
			for (int tokenIndex=0; tokenIndex < tokensNumber; tokenIndex++){
				String tokenIndexStr = StringUtils.getLeftSpaces(maxStr, tokenIndex.ToString() );
				String tokenStr = StringUtils.getLeftSpaces(maxStr, tokensList[tokenIndex].tokenStr );
				String keyWordStr = StringUtils.getLeftSpaces(maxStr, tokensList[tokenIndex].keyWord );
				String tokenIdStr = StringUtils.getLeftSpaces(maxStr, tokensList[tokenIndex].tokenId.ToString() );
				String tokenTypeIdStr = StringUtils.getLeftSpaces(maxStr, tokensList[tokenIndex].tokenTypeId.ToString() );
				String tokenLevelStr = StringUtils.getLeftSpaces(maxStr, tokensList[tokenIndex].tokenLevel.ToString() );
				String tokenValueStr = StringUtils.getLeftSpaces(maxStr, tokensList[tokenIndex].tokenValue.ToString() );
				String tokenLooksLikeStr = StringUtils.getLeftSpaces(maxStr, tokensList[tokenIndex].looksLike);
				mXparser.consolePrintln(	"| " + tokenIndexStr +
									" | " + tokenStr +
									" | " + keyWordStr +
									" | " + tokenIdStr +
									" | " + tokenTypeIdStr +
									" | " + tokenLevelStr +
									" | " + tokenValueStr +
									" | " + tokenLooksLikeStr + " |");
			}
			mXparser.consolePrintln(" ---------------------------------------------------------------------------------------------------------------");
		}
		internal static String tokenToString(Token token) {
			if (token == null) return StringInvariant.EMPTY;
			if (token.isNumber()) {
				double intTokenValue = Math.Round(token.tokenValue);
				if (intTokenValue == token.tokenValue)
					return ((long)intTokenValue).ToString();
				else
					return (token.tokenValue).ToString();
			}
			return token.tokenStr;
		}
        internal static String tokensListToString(List<Token> tokensList) {
			if (tokensList == null) return StringInvariant.EMPTY;
			if (tokensList.Count == 0) return StringInvariant.EMPTY;
            StringBuilder result = new StringBuilder();
            for (int i = 0; i < tokensList.Count; i++) {
				Token t0 = null;
				Token t1 = tokensList[i];
				if (i > 0) t0 = tokensList[i-1];
				if (t0 != null)
					if (!t0.isLeftParenthesis() &&
						!t0.isParameterSeparator() &&
						!t0.isBinaryOperator() &&
						!t0.isUnaryLeftOperator() &&
						!t0.isUnaryRightOperator() &&
						!t0.isUnicodeRootOperator() &&
						!t0.isRightParenthesis())
						if (t1.isNumber())
							result.Append(StringInvariant.SPACE);
				result.Append(tokenToString(t1));
			}

			return result.ToString();
		}
		/**
		 * Evaluates tokens levels
		 */
		internal static void evaluateTokensLevels(List<Token> initialTokens) {
			int tokenLevel = 0;
			Stack<TokenStackElement> tokenStack =  new Stack<TokenStackElement>();
			bool precedingFunction = false;
			if (initialTokens.Count > 0)
				for (int tokenIndex = 0; tokenIndex < initialTokens.Count; tokenIndex++) {
					Token token = initialTokens[tokenIndex];
					if (	token.tokenTypeId == Function1Arg.TYPE_ID ||
							token.tokenTypeId == Function2Arg.TYPE_ID ||
							token.tokenTypeId == Function3Arg.TYPE_ID ||
							token.tokenTypeId == Function.TYPE_ID ||
							token.tokenTypeId == CalculusOperator.TYPE_ID ||
							token.tokenTypeId == RecursiveArgument.TYPE_ID_RECURSIVE ||
							token.tokenTypeId == FunctionVariadic.TYPE_ID
							) {
						tokenLevel++;
						precedingFunction = true;
					} else
					if ((token.tokenTypeId == ParserSymbol.TYPE_ID) && (token.tokenId == ParserSymbol.LEFT_PARENTHESES_ID)) {
						tokenLevel++;
						TokenStackElement stackEl = new TokenStackElement();
						stackEl.tokenId = token.tokenId;
						stackEl.tokenIndex = tokenIndex;
						stackEl.tokenLevel = tokenLevel;
						stackEl.tokenTypeId = token.tokenTypeId;
						stackEl.precedingFunction = precedingFunction;
						tokenStack.Push(stackEl);
						precedingFunction = false;
					} else
						precedingFunction = false;
					token.tokenLevel = tokenLevel;
					if ((token.tokenTypeId == ParserSymbol.TYPE_ID) && (token.tokenId == ParserSymbol.RIGHT_PARENTHESES_ID)) {
						tokenLevel--;
						if (tokenStack.Count > 0) {
							TokenStackElement stackEl = tokenStack.Pop();
							if (stackEl.precedingFunction)
								tokenLevel--;
						}
					}
				}
		}
        internal static int getNumeralSystemBaseFromBaseInd(String baseInd) {
            if (baseInd.Equals("b")) return 2;
            if (baseInd.Equals("o")) return 8;
            if (baseInd.Equals("h")) return 16;
            if (baseInd.Equals("b1")) return 1;
            if (baseInd.Equals("b2")) return 2;
            if (baseInd.Equals("b3")) return 3;
            if (baseInd.Equals("b4")) return 4;
            if (baseInd.Equals("b5")) return 5;
            if (baseInd.Equals("b6")) return 6;
            if (baseInd.Equals("b7")) return 7;
            if (baseInd.Equals("b8")) return 8;
            if (baseInd.Equals("b9")) return 9;
            if (baseInd.Equals("b10")) return 10;
            if (baseInd.Equals("b11")) return 11;
            if (baseInd.Equals("b12")) return 12;
            if (baseInd.Equals("b13")) return 13;
            if (baseInd.Equals("b14")) return 14;
            if (baseInd.Equals("b15")) return 15;
            if (baseInd.Equals("b16")) return 16;
            if (baseInd.Equals("b17")) return 17;
            if (baseInd.Equals("b18")) return 18;
            if (baseInd.Equals("b19")) return 19;
            if (baseInd.Equals("b20")) return 20;
            if (baseInd.Equals("b21")) return 21;
            if (baseInd.Equals("b22")) return 22;
            if (baseInd.Equals("b23")) return 23;
            if (baseInd.Equals("b24")) return 24;
            if (baseInd.Equals("b25")) return 25;
            if (baseInd.Equals("b26")) return 26;
            if (baseInd.Equals("b27")) return 27;
            if (baseInd.Equals("b28")) return 28;
            if (baseInd.Equals("b29")) return 29;
            if (baseInd.Equals("b30")) return 30;
            if (baseInd.Equals("b31")) return 31;
            if (baseInd.Equals("b32")) return 32;
            if (baseInd.Equals("b33")) return 33;
            if (baseInd.Equals("b34")) return 34;
            if (baseInd.Equals("b35")) return 35;
            if (baseInd.Equals("b36")) return 36;
            return 0;
        }
        internal static int findNonNegativeMinimum(int a, int b) {
            int posMin = int.MaxValue;
            if (a >= 0 && a < posMin) posMin = a;
            if (b >= 0 && b < posMin) posMin = b;
            if (posMin < int.MaxValue) return posMin;
            return int.MinValue;
        }
        internal static int findNonNegativeMinimum(int a, int b, int c) {
            int posMin = int.MaxValue;
            if (a >= 0 && a < posMin) posMin = a;
            if (b >= 0 && b < posMin) posMin = b;
            if (c >= 0 && c < posMin) posMin = c;
            if (posMin < int.MaxValue) return posMin;
            return int.MinValue;
        }
        internal static List<Argument> cloneForThreadSafeArgumenstList(Expression relatedExpressionThatInitiatedClone, List<Argument> argumentsListToClone, CloneCache cloneCache) {
            List<Argument> argumentListClone = new List<Argument>();
            for (int i = 0; i < argumentsListToClone.Count; i++) {
                Argument arg = argumentsListToClone[i];
                if (cloneCache.isCloneInProgress(arg)) {
                    argumentListClone.Add(null);
                    cloneCache.cacheArgumentToAddCloneAtTheEnd(argumentListClone, arg, i);
                    continue;
                }
                Argument argClone;
                if (arg.getArgumentType() == Argument.RECURSIVE_ARGUMENT)
                    argClone = ((RecursiveArgument)arg).cloneForThreadSafeInternal(relatedExpressionThatInitiatedClone, cloneCache);
                else
                    argClone = arg.cloneForThreadSafeInternal(relatedExpressionThatInitiatedClone, cloneCache);
                argumentListClone.Add(argClone);
            }
            return argumentListClone;
        }
        internal static List<Function> cloneForThreadSafeFunctionsList(Expression relatedExpressionThatInitiatedClone, List<Function> functionsListToClone, CloneCache cloneCache) {
            List<Function> functionListClone = new List<Function>();
            for (int i = 0; i < functionsListToClone.Count; i++) {
                Function fun = functionsListToClone[i];
                if (cloneCache.isCloneInProgress(fun)) {
                    functionListClone.Add(null);
                    cloneCache.cacheFunctionToAddCloneAtTheEnd(functionListClone, fun, i);
                    continue;
                }
                functionListClone.Add(fun.cloneForThreadSafeInternal(relatedExpressionThatInitiatedClone, cloneCache));
            }
            return functionListClone;
        }
        internal static List<Constant> cloneForThreadSafeConstantsList(Expression relatedExpressionThatInitiatedClone, List<Constant> constantsListToClone, CloneCache cloneCache) {
            List<Constant> constantListClone = new List<Constant>();
            for (int i = 0; i < constantsListToClone.Count; i++) {
                Constant con = constantsListToClone[i];
                if (cloneCache.isCloneInProgress(con)) {
                    constantListClone.Add(null);
                    cloneCache.cacheConstantToAddCloneAtTheEnd(constantListClone, con, i);
                    continue;
                }
                constantListClone.Add(con.cloneForThreadSafeInternal(relatedExpressionThatInitiatedClone, cloneCache));
            }
            return constantListClone;
        }
    }
}