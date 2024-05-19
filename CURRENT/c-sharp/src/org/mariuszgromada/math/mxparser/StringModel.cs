/*
 * @(#)StringModel.cs        6.0.0    2024-05-19
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
using org.mariuszgromada.math.mxparser.syntaxchecker;
using System;
using System.Text;

namespace org.mariuszgromada.math.mxparser {
    /**
     * A class containing definitions of text strings that are with respect to the user's language.
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
     * @version        6.0.0
     */
    public sealed class StringModel {
        internal static readonly StringResources DEFAULT_ENGLISH_STRING_RESOURCES = new StringResources();
        internal static readonly StringResources DEFAULT_STRING_RESOURCES = StringResources.bestMatchingLanguage();
        internal static StringResources STRING_RESOURCES = DEFAULT_STRING_RESOURCES;
        internal static readonly bool LANGUAGE_SPECIFIC_DESCRIPTIONS_SET = StringModel.setLanguageSpecificDescriptions();
        /**
         * Sets a user-specific text resource object.
         * Using this object, you can provide your own text model or your own translations.
         * If the provided string resources object is null, no change will be done
         * and the current object will still be used.
         *
         * @param stringResources A user-specific text resource object
         *
         * @see StringResources
         */
        public static void setStringResources(StringResources stringResources) {
            if (stringResources == null) return;
            if (STRING_RESOURCES != null && STRING_RESOURCES == stringResources) return;
            STRING_RESOURCES = stringResources;
            setLanguageSpecificDescriptions();
        }
        /**
         * Sets default string resources.
         *
         * @see StringResources
         */
        public static void setDefaultStringResources() {
            if (mXparser.selectBestMatchingLanguage) {
                if (STRING_RESOURCES != null && STRING_RESOURCES == DEFAULT_STRING_RESOURCES) return;
                STRING_RESOURCES = DEFAULT_STRING_RESOURCES;
                setLanguageSpecificDescriptions();
                return;
            }
            if (STRING_RESOURCES != null && STRING_RESOURCES == DEFAULT_ENGLISH_STRING_RESOURCES) return;
            STRING_RESOURCES = DEFAULT_ENGLISH_STRING_RESOURCES;
            setLanguageSpecificDescriptions();
        }
        /**
         * Forces to use default string resources
         */
        internal static void forceDefaultStringResources() {
            if (STRING_RESOURCES != null & STRING_RESOURCES == DEFAULT_STRING_RESOURCES) return;
            STRING_RESOURCES = DEFAULT_STRING_RESOURCES;
            setLanguageSpecificDescriptions();
        }
        /**
         * Sets default english string resources.
         *
         * @see StringResources
         */
        public static void setDefaultEnglishStringResources() {
            if (STRING_RESOURCES != null && STRING_RESOURCES == DEFAULT_ENGLISH_STRING_RESOURCES) return;
            STRING_RESOURCES = DEFAULT_ENGLISH_STRING_RESOURCES;
            setLanguageSpecificDescriptions();
        }
        /**
         * Gets currently used user-specific text resource object.
         *
         * @return Currently used StringResources
         */
        public static StringResources getStringResources() {
            return STRING_RESOURCES;
        }
        internal static void setLanguageSpecificDescriptionsBinaryRelation() {
            BinaryRelation.TYPE_DESC = STRING_RESOURCES.BINARY_RELATION;
            BinaryRelation.EQ_DESC = STRING_RESOURCES.BINARY_RELATION_EQ + StringInvariant.SEPARATOR + STRING_RESOURCES.BINARY_RELATION;
            BinaryRelation.NEQ_DESC = STRING_RESOURCES.BINARY_RELATION_NEQ + StringInvariant.SEPARATOR + STRING_RESOURCES.BINARY_RELATION;
            BinaryRelation.LT_DESC = STRING_RESOURCES.BINARY_RELATION_LT + StringInvariant.SEPARATOR + STRING_RESOURCES.BINARY_RELATION;
            BinaryRelation.GT_DESC = STRING_RESOURCES.BINARY_RELATION_GT + StringInvariant.SEPARATOR + STRING_RESOURCES.BINARY_RELATION;
            BinaryRelation.LEQ_DESC = STRING_RESOURCES.BINARY_RELATION_LEQ + StringInvariant.SEPARATOR + STRING_RESOURCES.BINARY_RELATION;
            BinaryRelation.GEQ_DESC = STRING_RESOURCES.BINARY_RELATION_GEQ + StringInvariant.SEPARATOR + STRING_RESOURCES.BINARY_RELATION;
        }
        internal static void setLanguageSpecificDescriptionsBitwiseOperator() {
            BitwiseOperator.TYPE_DESC = STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.COMPL_DESC = STRING_RESOURCES.BITWISE_OPERATOR_COMPL + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.AND_DESC = STRING_RESOURCES.BITWISE_OPERATOR_AND + StringInvariant.SPACE + StringInvariant.AND_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.XOR_DESC = STRING_RESOURCES.BITWISE_OPERATOR_XOR + StringInvariant.SPACE + StringInvariant.XOR_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.OR_DESC = STRING_RESOURCES.BITWISE_OPERATOR_OR + StringInvariant.SPACE + StringInvariant.OR_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.LEFT_SHIFT_DESC = STRING_RESOURCES.BITWISE_OPERATOR_LEFT_SHIFT + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.RIGHT_SHIFT_DESC = STRING_RESOURCES.BITWISE_OPERATOR_RIGHT_SHIFT + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.NAND_DESC = STRING_RESOURCES.BITWISE_OPERATOR_NAND + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.NOR_DESC = STRING_RESOURCES.BITWISE_OPERATOR_NOR + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
            BitwiseOperator.XNOR_DESC = STRING_RESOURCES.BITWISE_OPERATOR_XNOR + StringInvariant.SEPARATOR + STRING_RESOURCES.BITWISE_OPERATOR;
        }
        internal static void setLanguageSpecificDescriptionsBooleanOperator() {
            BooleanOperator.TYPE_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.AND_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_AND + StringInvariant.SPACE + StringInvariant.AND_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.OR_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_OR + StringInvariant.SPACE + StringInvariant.OR_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.NEG_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_NEG + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.NAND_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_NAND + StringInvariant.SPACE + StringInvariant.NAND_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.NOR_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_NOR + StringInvariant.SPACE + StringInvariant.NOR_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.XOR_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_XOR + StringInvariant.SPACE + StringInvariant.XOR_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.IMP_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_IMP + StringInvariant.SPACE + StringInvariant.IMP_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.CIMP_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_CIMP + StringInvariant.SPACE + StringInvariant.CIMP_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.NIMP_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_NIMP + StringInvariant.SPACE + StringInvariant.NIMP_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.CNIMP_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_CNIMP + StringInvariant.SPACE + StringInvariant.CNIMP_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
            BooleanOperator.EQV_DESC = STRING_RESOURCES.BOOLEAN_OPERATOR_EQV + StringInvariant.SPACE + StringInvariant.EQV_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.BOOLEAN_OPERATOR;
        }
        internal static void setLanguageSpecificDescriptionsCalculusOperator() {
            CalculusOperator.TYPE_DESC = STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.SUM_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_SUM + StringInvariant.SEPARATOR + STRING_RESOURCES.ITERATED_OPERATOR + StringInvariant.SPACE + StringInvariant.SUM_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.PROD_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_PROD + StringInvariant.SEPARATOR + STRING_RESOURCES.ITERATED_OPERATOR + StringInvariant.SPACE + StringInvariant.PROD_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.INT_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_INT + StringInvariant.SPACE + StringInvariant.INT_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.DER_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_DER + StringInvariant.SPACE + StringInvariant.DER_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.DER_LEFT_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_DER_LEFT + StringInvariant.SPACE + StringInvariant.DER_LEFT_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.DER_RIGHT_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_DER_RIGHT + StringInvariant.SPACE + StringInvariant.DER_RIGHT_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.DERN_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_DERN + StringInvariant.SPACE + StringInvariant.DERN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.FORW_DIFF_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_FORW_DIFF + StringInvariant.SPACE + StringInvariant.FORW_DIFF_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.BACKW_DIFF_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_BACKW_DIFF + StringInvariant.SPACE + StringInvariant.BACKW_DIFF_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.AVG_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_AVG + StringInvariant.SEPARATOR + STRING_RESOURCES.ITERATED_OPERATOR + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.VAR_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_VAR + StringInvariant.SEPARATOR + STRING_RESOURCES.ITERATED_OPERATOR + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.STD_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_STD + StringInvariant.SEPARATOR + STRING_RESOURCES.ITERATED_OPERATOR + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.MIN_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_MIN + StringInvariant.SEPARATOR + STRING_RESOURCES.ITERATED_OPERATOR + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.MAX_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_MAX + StringInvariant.SEPARATOR + STRING_RESOURCES.ITERATED_OPERATOR + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
            CalculusOperator.SOLVE_DESC = STRING_RESOURCES.CALCULUS_OPERATOR_SOLVE + StringInvariant.SPACE + StringInvariant.SOLVE_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CALCULUS_OPERATOR;
        }
        internal static void setLanguageSpecificDescriptionsConstantValue() {
            ConstantValue.TYPE_DESC = STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PI_DESC = STRING_RESOURCES.CONSTANT_VALUE_PI + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PI_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.EULER_DESC = STRING_RESOURCES.CONSTANT_VALUE_EULER + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.E_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.EULER_MASCHERONI_DESC = STRING_RESOURCES.CONSTANT_VALUE_EULER_MASCHERONI + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.MASCHERONI_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.GOLDEN_RATIO_DESC = STRING_RESOURCES.CONSTANT_VALUE_GOLDEN_RATIO + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GOLDEN_RATIO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PLASTIC_DESC = STRING_RESOURCES.CONSTANT_VALUE_PLASTIC + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLASTICS_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.EMBREE_TREFETHEN_DESC = STRING_RESOURCES.CONSTANT_VALUE_EMBREE_TREFETHEN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EMBREE_TREFETHEN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.FEIGENBAUM_DELTA_DESC = STRING_RESOURCES.CONSTANT_VALUE_FEIGENBAUM_DELTA + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.FEIGENBAUM_DELTA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.FEIGENBAUM_ALPHA_DESC = STRING_RESOURCES.CONSTANT_VALUE_FEIGENBAUM_ALPHA + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.FEIGENBAUM_ALPHA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.TWIN_PRIME_DESC = STRING_RESOURCES.CONSTANT_VALUE_TWIN_PRIME + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.TWIN_PRIME_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MEISSEL_MERTEENS_DESC = STRING_RESOURCES.CONSTANT_VALUE_MEISSEL_MERTEENS + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.MEISSEL_MERTEENS_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.BRAUN_TWIN_PRIME_DESC = STRING_RESOURCES.CONSTANT_VALUE_BRAUN_TWIN_PRIME + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BRAUN_TWIN_PRIME_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.BRAUN_PRIME_QUADR_DESC = STRING_RESOURCES.CONSTANT_VALUE_BRAUN_PRIME_QUADR + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BRAUN_PRIME_QUADR_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.BRUIJN_NEWMAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_BRUIJN_NEWMAN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BRUIJN_NEWMAN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.CATALAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_CATALAN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.CATALAN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LANDAU_RAMANUJAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_LANDAU_RAMANUJAN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LANDAU_RAMANUJAN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.VISWANATH_DESC = STRING_RESOURCES.CONSTANT_VALUE_VISWANATH + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.VISWANATH_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LEGENDRE_DESC = STRING_RESOURCES.CONSTANT_VALUE_LEGENDRE + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LEGENDRE_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.RAMANUJAN_SOLDNER_DESC = STRING_RESOURCES.CONSTANT_VALUE_RAMANUJAN_SOLDNER + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.RAMANUJAN_SOLDNER_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.ERDOS_BORWEIN_DESC = STRING_RESOURCES.CONSTANT_VALUE_ERDOS_BORWEIN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.ERDOS_BORWEIN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.BERNSTEIN_DESC = STRING_RESOURCES.CONSTANT_VALUE_BERNSTEIN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BERNSTEIN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.GAUSS_KUZMIN_WIRSING_DESC = STRING_RESOURCES.CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GAUSS_KUZMIN_WIRSING_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC = STRING_RESOURCES.CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.HAFNER_SARNAK_MCCURLEY_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.GOLOMB_DICKMAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_GOLOMB_DICKMAN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GOLOMB_DICKMAN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.CAHEN_DESC = STRING_RESOURCES.CONSTANT_VALUE_CAHEN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.CAHEN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LAPLACE_LIMIT_DESC = STRING_RESOURCES.CONSTANT_VALUE_LAPLACE_LIMIT + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.ALLADI_GRINSTEAD_DESC = STRING_RESOURCES.CONSTANT_VALUE_ALLADI_GRINSTEAD + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LENGYEL_DESC = STRING_RESOURCES.CONSTANT_VALUE_LENGYEL + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LENGYEL_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LEVY_DESC = STRING_RESOURCES.CONSTANT_VALUE_LEVY + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.APERY_DESC = STRING_RESOURCES.CONSTANT_VALUE_APERY + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.APERY_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MILLS_DESC = STRING_RESOURCES.CONSTANT_VALUE_MILLS + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.MILLS_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.BACKHOUSE_DESC = STRING_RESOURCES.CONSTANT_VALUE_BACKHOUSE + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BACKHOUSE_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PORTER_DESC = STRING_RESOURCES.CONSTANT_VALUE_PORTER + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PORTER_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LIEB_QUARE_ICE_DESC = STRING_RESOURCES.CONSTANT_VALUE_LIEB_QUARE_ICE + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.NIVEN_DESC = STRING_RESOURCES.CONSTANT_VALUE_NIVEN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.NIVEN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.SIERPINSKI_DESC = STRING_RESOURCES.CONSTANT_VALUE_SIERPINSKI + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.SIERPINSKI_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.KHINCHIN_DESC = STRING_RESOURCES.CONSTANT_VALUE_KHINCHIN + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KHINCHIN_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.FRANSEN_ROBINSON_DESC = STRING_RESOURCES.CONSTANT_VALUE_FRANSEN_ROBINSON + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.FRANSEN_ROBINSON_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LANDAU_DESC = STRING_RESOURCES.CONSTANT_VALUE_LANDAU + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LANDAU_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PARABOLIC_DESC = STRING_RESOURCES.CONSTANT_VALUE_PARABOLIC + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PARABOLIC_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.OMEGA_DESC = STRING_RESOURCES.CONSTANT_VALUE_OMEGA + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.OMEGA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MRB_DESC = STRING_RESOURCES.CONSTANT_VALUE_MRB + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.MRB_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LI2_DESC = STRING_RESOURCES.CONSTANT_VALUE_LI2 + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LOGARITHMIC_INTEGRAL_2_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.GOMPERTZ_DESC = STRING_RESOURCES.CONSTANT_VALUE_GOMPERTZ + StringInvariant.SEPARATOR + STRING_RESOURCES.MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GOMPERTZ_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LIGHT_SPEED_DESC = STRING_RESOURCES.CONSTANT_VALUE_LIGHT_SPEED + StringInvariant.SEPARATOR + STRING_RESOURCES.PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LIGHT_SPEED_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.GRAVITATIONAL_CONSTANT_DESC = STRING_RESOURCES.CONSTANT_VALUE_GRAVITATIONAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GRAVITATIONAL_CONSTANT_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.GRAVIT_ACC_EARTH_DESC = STRING_RESOURCES.CONSTANT_VALUE_GRAVIT_ACC_EARTH + StringInvariant.SEPARATOR + STRING_RESOURCES.PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GRAVIT_ACC_EARTH_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_SQUARED_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PLANCK_CONSTANT_DESC = STRING_RESOURCES.CONSTANT_VALUE_PLANCK_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_CONSTANT_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PLANCK_CONSTANT_REDUCED_DESC = STRING_RESOURCES.CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED + StringInvariant.SEPARATOR + STRING_RESOURCES.PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_CONSTANT_REDUCED_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PLANCK_LENGTH_DESC = STRING_RESOURCES.CONSTANT_VALUE_PLANCK_LENGTH + StringInvariant.SEPARATOR + STRING_RESOURCES.PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_LENGTH_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PLANCK_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_PLANCK_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_MASS_SYMBOL + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PLANCK_TIME_DESC = STRING_RESOURCES.CONSTANT_VALUE_PLANCK_TIME + StringInvariant.SEPARATOR + STRING_RESOURCES.PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_TIME_SYMBOL + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.LIGHT_YEAR_DESC = STRING_RESOURCES.CONSTANT_VALUE_LIGHT_YEAR + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LIGHT_YEAR_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.ASTRONOMICAL_UNIT_DESC = STRING_RESOURCES.CONSTANT_VALUE_ASTRONOMICAL_UNIT + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.ASTRONOMICAL_UNIT_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.PARSEC_DESC = STRING_RESOURCES.CONSTANT_VALUE_PARSEC + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PARSEC_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.KILOPARSEC_DESC = STRING_RESOURCES.CONSTANT_VALUE_KILOPARSEC + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOPARSEC_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC = STRING_RESOURCES.CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EARTH_RADIUS_EQUATORIAL_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.EARTH_RADIUS_POLAR_DESC = STRING_RESOURCES.CONSTANT_VALUE_EARTH_RADIUS_POLAR + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EARTH_RADIUS_POLAR_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.EARTH_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_EARTH_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EARTH_RADIUS_MEAN_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.EARTH_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_EARTH_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EARTH_MASS_SYMBOL + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MOON_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_MOON_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MOON_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_MOON_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MOON_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.SOLAR_RADIUS_DESC = STRING_RESOURCES.CONSTANT_VALUE_SOLAR_RADIUS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.SOLAR_RADIUS_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.SOLAR_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_SOLAR_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.SOLAR_MASS_SYMBOL + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MERCURY_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_MERCURY_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MERCURY_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_MERCURY_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.VENUS_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_VENUS_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.VENUS_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_VENUS_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MARS_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_MARS_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MARS_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_MARS_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.JUPITER_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_JUPITER_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.JUPITER_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_JUPITER_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.SATURN_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_SATURN_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.SATURN_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_SATURN_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.URANUS_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_URANUS_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.URANUS_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_URANUS_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.NEPTUNE_RADIUS_MEAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.NEPTUNE_MASS_DESC = STRING_RESOURCES.CONSTANT_VALUE_NEPTUNE_MASS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC = STRING_RESOURCES.CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + STRING_RESOURCES.ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + STRING_RESOURCES.SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.TRUE_DESC = STRING_RESOURCES.CONSTANT_VALUE_TRUE + StringInvariant.SPACE + StringInvariant.TRUE_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.FALSE_DESC = STRING_RESOURCES.CONSTANT_VALUE_FALSE + StringInvariant.SPACE + StringInvariant.FALSE_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.NPAR_DESC = STRING_RESOURCES.CONSTANT_VALUE_NPAR + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
            ConstantValue.NAN_DESC = STRING_RESOURCES.CONSTANT_VALUE_NAN + StringInvariant.SEPARATOR + STRING_RESOURCES.CONSTANT_VALUE;
        }
        internal static void setLanguageSpecificDescriptionsFunction1Arg() {
            Function1Arg.TYPE_DESC = STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SIN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SIN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.COS_DESC = STRING_RESOURCES.FUNCTION_1_ARG_COS + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.TAN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_TAN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.CTAN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_CTAN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SEC_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SEC + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.COSEC_DESC = STRING_RESOURCES.FUNCTION_1_ARG_COSEC + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ASIN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ASIN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ACOS_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ACOS + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ATAN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ATAN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ACTAN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ACTAN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.LN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_LN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.LOG2_DESC = STRING_RESOURCES.FUNCTION_1_ARG_LOG2 + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.LOG10_DESC = STRING_RESOURCES.FUNCTION_1_ARG_LOG10 + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.RAD_DESC = STRING_RESOURCES.FUNCTION_1_ARG_RAD + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.EXP_DESC = STRING_RESOURCES.FUNCTION_1_ARG_EXP + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SQRT_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SQRT + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SINH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SINH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.COSH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_COSH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.TANH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_TANH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.COTH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_COTH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SECH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SECH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.CSCH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_CSCH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.DEG_DESC = STRING_RESOURCES.FUNCTION_1_ARG_DEG + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ABS_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ABS + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SGN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SGN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.FLOOR_DESC = STRING_RESOURCES.FUNCTION_1_ARG_FLOOR + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.CEIL_DESC = STRING_RESOURCES.FUNCTION_1_ARG_CEIL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.NOT_DESC = STRING_RESOURCES.FUNCTION_1_ARG_NOT + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ARSINH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ARSINH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ARCOSH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ARCOSH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ARTANH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ARTANH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ARCOTH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ARCOTH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ARSECH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ARSECH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ARCSCH_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ARCSCH + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SA_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SA + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SINC_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SINC + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.BELL_NUMBER_DESC = STRING_RESOURCES.FUNCTION_1_ARG_BELL_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.LUCAS_NUMBER_DESC = STRING_RESOURCES.FUNCTION_1_ARG_LUCAS_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.FIBONACCI_NUMBER_DESC = STRING_RESOURCES.FUNCTION_1_ARG_FIBONACCI_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.HARMONIC_NUMBER_DESC = STRING_RESOURCES.FUNCTION_1_ARG_HARMONIC_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.IS_PRIME_DESC = STRING_RESOURCES.FUNCTION_1_ARG_IS_PRIME + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.PRIME_COUNT_DESC = STRING_RESOURCES.FUNCTION_1_ARG_PRIME_COUNT + StringInvariant.SPACE + StringInvariant.PRIME_COUNTING_N_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.EXP_INT_DESC = STRING_RESOURCES.FUNCTION_1_ARG_EXP_INT + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.EXPONENTIAL_INTEGRAL_X_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.LOG_INT_DESC = STRING_RESOURCES.FUNCTION_1_ARG_LOG_INT + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LOGARITHMIC_INTEGRAL_X_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.OFF_LOG_INT_DESC = STRING_RESOURCES.FUNCTION_1_ARG_OFF_LOG_INT + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.OFFSET_LOGARITHMIC_INTEGRAL_X_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.GAUSS_ERF_DESC = STRING_RESOURCES.FUNCTION_1_ARG_GAUSS_ERF + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.GAUSS_ERROR_X_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.GAUSS_ERFC_DESC = STRING_RESOURCES.FUNCTION_1_ARG_GAUSS_ERFC + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.GAUSS_ERROR_COMPLEMENTARY_X_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.GAUSS_ERF_INV_DESC = STRING_RESOURCES.FUNCTION_1_ARG_GAUSS_ERF_INV + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.INVERSE_GAUSS_ERROR_Y_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.GAUSS_ERFC_INV_DESC = STRING_RESOURCES.FUNCTION_1_ARG_GAUSS_ERFC_INV + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.INVERSE_GAUSS_ERROR_COMPLEMENTARY_Y_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ULP_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ULP + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ISNAN_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ISNAN + StringInvariant.SPACE + StringInvariant.TRUE_AND_FALSE_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.NDIG10_DESC = STRING_RESOURCES.FUNCTION_1_ARG_NDIG10 + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.NFACT_DESC = STRING_RESOURCES.FUNCTION_1_ARG_NFACT + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ARCSEC_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ARCSEC + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.ARCCSC_DESC = STRING_RESOURCES.FUNCTION_1_ARG_ARCCSC + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.GAMMA_DESC = STRING_RESOURCES.FUNCTION_1_ARG_GAMMA + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.GAMMA_S_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.LAMBERT_W0_DESC = STRING_RESOURCES.FUNCTION_1_ARG_LAMBERT_W0 + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LAMBERT_W0_X_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.LAMBERT_W1_DESC = STRING_RESOURCES.FUNCTION_1_ARG_LAMBERT_W1 + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LAMBERT_W_1_X_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.SGN_GAMMA_DESC = STRING_RESOURCES.FUNCTION_1_ARG_SGN_GAMMA + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.GAMMA_S_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.LOG_GAMMA_DESC = STRING_RESOURCES.FUNCTION_1_ARG_LOG_GAMMA + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LOG_GAMMA_S_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.DI_GAMMA_DESC = STRING_RESOURCES.FUNCTION_1_ARG_DI_GAMMA + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.DIGAMMA_X_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.PARAM_DESC = STRING_RESOURCES.FUNCTION_1_ARG_PARAM + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.RND_STUDENT_T_DESC = STRING_RESOURCES.RANDOM_VARIABLE + StringInvariant.SEPARATOR + STRING_RESOURCES.STUDENTS_T_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
            Function1Arg.RND_CHI2_DESC = STRING_RESOURCES.RANDOM_VARIABLE + StringInvariant.SEPARATOR + STRING_RESOURCES.CHI_SQUARED_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_1_ARG;
        }
        internal static void setLanguageSpecificDescriptionsFunction2Arg() {
            Function2Arg.TYPE_DESC = STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.LOG_DESC = STRING_RESOURCES.FUNCTION_2_ARG_LOG + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.MOD_DESC = STRING_RESOURCES.FUNCTION_2_ARG_MOD + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.BINOM_COEFF_DESC = STRING_RESOURCES.FUNCTION_2_ARG_BINOM_COEFF + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.BERNOULLI_NUMBER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_BERNOULLI_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.STIRLING1_NUMBER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_STIRLING1_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.STIRLING2_NUMBER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_STIRLING2_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.WORPITZKY_NUMBER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_WORPITZKY_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.EULER_NUMBER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_EULER_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.KRONECKER_DELTA_DESC = STRING_RESOURCES.FUNCTION_2_ARG_KRONECKER_DELTA + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.EULER_POLYNOMIAL_DESC = STRING_RESOURCES.FUNCTION_2_ARG_EULER_POLYNOMIAL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.HARMONIC_NUMBER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_HARMONIC_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.RND_UNIFORM_CONT_DESC = STRING_RESOURCES.RANDOM_VARIABLE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UAB_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.RND_UNIFORM_DISCR_DESC = STRING_RESOURCES.RANDOM_VARIABLE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UDAB_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.ROUND_DESC = STRING_RESOURCES.FUNCTION_2_ARG_ROUND + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.RND_NORMAL_DESC = STRING_RESOURCES.RANDOM_VARIABLE + StringInvariant.SEPARATOR + STRING_RESOURCES.NORMAL_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.NORMAL_NMS_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.NDIG_DESC = STRING_RESOURCES.FUNCTION_2_ARG_NDIG + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.DIGIT10_DESC = STRING_RESOURCES.FUNCTION_2_ARG_DIGIT10 + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.FACTVAL_DESC = STRING_RESOURCES.FUNCTION_2_ARG_FACTVAL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.FACTEXP_DESC = STRING_RESOURCES.FUNCTION_2_ARG_FACTEXP + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.ROOT_DESC = STRING_RESOURCES.FUNCTION_2_ARG_ROOT + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.INC_GAMMA_LOWER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_INC_GAMMA_LOWER + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LOWER_GAMMA_SX_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.INC_GAMMA_UPPER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_INC_GAMMA_UPPER + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.UPPER_GAMMA_SX_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.REG_GAMMA_LOWER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_REG_GAMMA_LOWER + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.REGULARIZED_GAMMA_P_SX_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.REG_GAMMA_UPPER_DESC = STRING_RESOURCES.FUNCTION_2_ARG_REG_GAMMA_UPPER + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.REGULARIZED_GAMMA_Q_SX_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.PERMUTATIONS_DESC = STRING_RESOURCES.FUNCTION_2_ARG_PERMUTATIONS + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.BETA_DESC = STRING_RESOURCES.FUNCTION_2_ARG_BETA + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.BETA_XY_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.LOG_BETA_DESC = STRING_RESOURCES.FUNCTION_2_ARG_LOG_BETA + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LOG_BETA_XY_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.PDF_STUDENT_T_DESC = STRING_RESOURCES.STUDENTS_T_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.CDF_STUDENT_T_DESC = STRING_RESOURCES.STUDENTS_T_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.QNT_STUDENT_T_DESC = STRING_RESOURCES.STUDENTS_T_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.QUANTILE_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.PDF_CHI2_DESC = STRING_RESOURCES.CHI_SQUARED_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.CDF_CHI2_DESC = STRING_RESOURCES.CHI_SQUARED_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.QNT_CHI2_DESC = STRING_RESOURCES.CHI_SQUARED_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.QUANTILE_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
            Function2Arg.RND_F_SNEDECOR_DESC = STRING_RESOURCES.RANDOM_VARIABLE + StringInvariant.SEPARATOR + STRING_RESOURCES.SNEDECORS_F_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_2_ARG;
        }
        internal static void setLanguageSpecificDescriptionsFunction3Arg() {
            Function3Arg.TYPE_DESC = STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.IF_DESC = STRING_RESOURCES.FUNCTION_3_ARG_IF + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.CHI_DESC = STRING_RESOURCES.FUNCTION_3_ARG_CHI + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.CHI_LR_DESC = STRING_RESOURCES.FUNCTION_3_ARG_CHI_LR + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.CHI_L_DESC = STRING_RESOURCES.FUNCTION_3_ARG_CHI_L + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.CHI_R_DESC = STRING_RESOURCES.FUNCTION_3_ARG_CHI_R + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.PDF_UNIFORM_CONT_DESC = STRING_RESOURCES.UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UAB_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.CDF_UNIFORM_CONT_DESC = STRING_RESOURCES.UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UAB_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.QNT_UNIFORM_CONT_DESC = STRING_RESOURCES.UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.QUANTILE_FUNCTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UAB_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.PDF_NORMAL_DESC = STRING_RESOURCES.NORMAL_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SPACE + StringInvariant.NORMAL_NMS_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.CDF_NORMAL_DESC = STRING_RESOURCES.NORMAL_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SPACE + StringInvariant.NORMAL_NMS_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.QNT_NORMAL_DESC = STRING_RESOURCES.NORMAL_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.QUANTILE_FUNCTION + StringInvariant.SPACE + StringInvariant.NORMAL_NMS_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.DIGIT_DESC = STRING_RESOURCES.FUNCTION_3_ARG_DIGIT + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.INC_BETA_DESC = STRING_RESOURCES.FUNCTION_3_ARG_INC_BETA + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.INCOMPLETE_BETA_XAB_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.REG_BETA_DESC = STRING_RESOURCES.FUNCTION_3_ARG_REG_BETA + StringInvariant.SEPARATOR + STRING_RESOURCES.SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.REGULARIZED_INCOMPLETE_BETA_XAB_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.PDF_F_SNEDECOR_DESC = STRING_RESOURCES.SNEDECORS_F_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.CDF_F_SNEDECOR_DESC = STRING_RESOURCES.SNEDECORS_F_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
            Function3Arg.QNT_F_SNEDECOR_DESC = STRING_RESOURCES.SNEDECORS_F_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.QUANTILE_FUNCTION + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_3_ARG;
        }
        internal static void setLanguageSpecificDescriptionsFunctionVariadic() {
            FunctionVariadic.TYPE_DESC = STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.IFF_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_IFF + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.MIN_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_MIN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.MAX_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_MAX + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.CONT_FRAC_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_CONT_FRAC + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.CONT_POL_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_CONT_POL + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.GCD_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_GCD + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.LCM_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_LCM + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.SUM_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_SUM + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.PROD_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_PROD + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.AVG_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_AVG + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.VAR_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_VAR + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.STD_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_STD + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.RND_LIST_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_RND_LIST + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.COALESCE_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_COALESCE + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.OR_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_OR + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.AND_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_AND + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.XOR_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_XOR + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.ARGMIN_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_ARGMIN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.ARGMAX_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_ARGMAX + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.MEDIAN_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_MEDIAN + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.MODE_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_MODE + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.BASE_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_BASE + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
            FunctionVariadic.NDIST_DESC = STRING_RESOURCES.FUNCTION_VARIADIC_NDIST + StringInvariant.SEPARATOR + STRING_RESOURCES.FUNCTION_VARIADIC;
        }
        internal static void setLanguageSpecificDescriptionsOperator() {
            Operator.TYPE_DESC = STRING_RESOURCES.OPERATOR;
            Operator.PLUS_DESC = STRING_RESOURCES.OPERATOR_PLUS + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.MINUS_DESC = STRING_RESOURCES.OPERATOR_MINUS + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.MULTIPLY_DESC = STRING_RESOURCES.OPERATOR_MULTIPLY + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.DIVIDE_DESC = STRING_RESOURCES.OPERATOR_DIVIDE + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.DIVIDE_QUOTIENT_DESC = STRING_RESOURCES.OPERATOR_DIVIDE_QUOTIENT + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.POWER_DESC = STRING_RESOURCES.OPERATOR_POWER + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.FACT_DESC = STRING_RESOURCES.OPERATOR_FACT + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.MOD_DESC = STRING_RESOURCES.OPERATOR_MOD + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.PERC_DESC = STRING_RESOURCES.OPERATOR_PERC + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.TETRATION_DESC = STRING_RESOURCES.OPERATOR_TETRATION + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.SQUARE_ROOT_DESC = STRING_RESOURCES.OPERATOR_SQUARE_ROOT + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.CUBE_ROOT_DESC = STRING_RESOURCES.OPERATOR_CUBE_ROOT + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
            Operator.FOURTH_ROOT_DESC = STRING_RESOURCES.OPERATOR_FOURTH_ROOT + StringInvariant.SEPARATOR + STRING_RESOURCES.OPERATOR;
        }
        internal static void setLanguageSpecificDescriptionsParserSymbol() {
            ParserSymbol.TYPE_DESC = STRING_RESOURCES.PARSER_SYMBOL;
            ParserSymbol.LEFT_PARENTHESES_DESC = STRING_RESOURCES.PARSER_SYMBOL_LEFT_PARENTHESES + StringInvariant.SEPARATOR + STRING_RESOURCES.PARSER_SYMBOL;
            ParserSymbol.RIGHT_PARENTHESES_DESC = STRING_RESOURCES.PARSER_SYMBOL_RIGHT_PARENTHESES + StringInvariant.SEPARATOR + STRING_RESOURCES.PARSER_SYMBOL;
            ParserSymbol.COMMA_DESC = STRING_RESOURCES.PARSER_SYMBOL_COMMA + StringInvariant.SEPARATOR + STRING_RESOURCES.PARSER_SYMBOL;
            ParserSymbol.SEMI_DESC = STRING_RESOURCES.PARSER_SYMBOL_SEMI + StringInvariant.SEPARATOR + STRING_RESOURCES.PARSER_SYMBOL;
            ParserSymbol.BLANK_DESC = STRING_RESOURCES.PARSER_SYMBOL_BLANK + StringInvariant.SEPARATOR + STRING_RESOURCES.PARSER_SYMBOL;
            ParserSymbol.UNICODE_MATH_DESC = STRING_RESOURCES.PARSER_SYMBOL_UNICODE_MATH + StringInvariant.SEPARATOR + STRING_RESOURCES.PARSER_SYMBOL;
            ParserSymbol.NUMBER_LITERAL_STR = STRING_RESOURCES.NUMBER_LITERAL;
            ParserSymbol.NUMBER_LITERAL_DESC = STRING_RESOURCES.NUMBER_LITERAL
                    + StringInvariant.COLON_SPACE
                    + STRING_RESOURCES.PARSER_SYMBOL_NUMBER_INTEGER
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(STRING_RESOURCES.SINCE + StringInvariant.SPACE + mXparser.NAMEv10)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_INTEGER_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + STRING_RESOURCES.PARSER_SYMBOL_NUMBER_DECIMAL
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(STRING_RESOURCES.SINCE + StringInvariant.SPACE + mXparser.NAMEv10)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_DECIMAL_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + STRING_RESOURCES.PARSER_SYMBOL_NUMBER_LEADING_ZERO
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(STRING_RESOURCES.SINCE + StringInvariant.SPACE + mXparser.NAMEv41)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_LEADING_ZERO_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + STRING_RESOURCES.PARSER_SYMBOL_NUMBER_SCI_NOTATION
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(STRING_RESOURCES.SINCE + StringInvariant.SPACE + mXparser.NAMEv42)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_SCI_NOTATION_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + STRING_RESOURCES.PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(STRING_RESOURCES.SINCE + StringInvariant.SPACE + mXparser.NAMEv42)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + STRING_RESOURCES.PARSER_SYMBOL_NUMBER_FRACTIONS
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(STRING_RESOURCES.SINCE + StringInvariant.SPACE + mXparser.NAMEv42)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_FRACTIONS_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + STRING_RESOURCES.PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(STRING_RESOURCES.SINCE + StringInvariant.SPACE + mXparser.NAMEv41)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS_EXAMPLE
                    + StringInvariant.SEMICOLON
                    ;
            ParserSymbol.UNICODE_MATH_DESC = STRING_RESOURCES.PARSER_SYMBOL_UNICODE_MATH;
        }
        internal static void setLanguageSpecificDescriptionsRandomVariable() {
            RandomVariable.TYPE_DESC = STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.UNIFORM_DESC = STRING_RESOURCES.UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.UNIFORM_U01_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT_DESC = STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT1_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT1_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT2_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT2_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT3_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT3_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT4_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT4_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT5_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT5_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT6_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT6_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT7_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT7_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT8_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT8_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.INT9_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT9_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_DESC = STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_1_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_1_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_2_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_2_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_3_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_3_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_4_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_4_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_5_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_5_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_6_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_6_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_7_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_7_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_8_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_8_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT0_9_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_9_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_DESC = STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_1_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_1_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_2_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_2_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_3_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_3_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_4_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_4_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_5_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_5_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_6_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_6_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_7_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_7_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_8_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_8_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NAT1_9_DESC = STRING_RESOURCES.UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_9_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
            RandomVariable.NOR_DESC = STRING_RESOURCES.NORMAL_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.NORMAL_N01_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.RANDOM_VARIABLE;
        }
        internal static void setLanguageSpecificDescriptionsUnit() {
            Unit.TYPE_DESC = STRING_RESOURCES.UNIT;
            Unit.PERC_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_PERC + StringInvariant.SEPARATOR + STRING_RESOURCES.RATIO_FRACTION + StringInvariant.SPACE + StringInvariant.UNIT_PERC_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.PERM_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_PERM + StringInvariant.SEPARATOR + STRING_RESOURCES.RATIO_FRACTION + StringInvariant.SPACE + StringInvariant.UNIT_PERM_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.YOTTA_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_YOTTA + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_YOTTA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.ZETTA_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_ZETTA + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_ZETTA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.EXA_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_EXA + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_EXA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.PETA_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_PETA + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_PETA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.TERA_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_TERA + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_TERA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.GIGA_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_GIGA + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_GIGA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.MEGA_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_MEGA + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_MEGA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.KILO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_KILO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_KILO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.HECTO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_HECTO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_HECTO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.DECA_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_DECA + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_DECA_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.DECI_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_DECI + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_DECI_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.CENTI_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_CENTI + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_CENTI_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.MILLI_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_MILLI + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_MILLI_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.MICRO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_MICRO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_MICRO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.NANO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_NANO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_NANO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.PICO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_PICO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_PICO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.FEMTO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_FEMTO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_FEMTO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.ATTO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_ATTO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_ATTO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.ZEPTO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_ZEPTO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_ZEPTO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.YOCTO_DESC = STRING_RESOURCES.DIMENSIONLESS_UNIT_YOCTO + StringInvariant.SEPARATOR + STRING_RESOURCES.METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_YOCTO_SYMBOL + StringInvariant.SEPARATOR + STRING_RESOURCES.DIMENSIONLESS_UNIT;
            Unit.METRE_DESC = STRING_RESOURCES.UNIT_METRE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILOMETRE_DESC = STRING_RESOURCES.UNIT_KILOMETRE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.CENTIMETRE_DESC = STRING_RESOURCES.UNIT_CENTIMETRE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILLIMETRE_DESC = STRING_RESOURCES.UNIT_MILLIMETRE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.INCH_DESC = STRING_RESOURCES.UNIT_INCH + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.YARD_DESC = STRING_RESOURCES.UNIT_YARD + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.FEET_DESC = STRING_RESOURCES.UNIT_FEET + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILE_DESC = STRING_RESOURCES.UNIT_MILE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.NAUTICAL_MILE_DESC = STRING_RESOURCES.UNIT_NAUTICAL_MILE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.METRE2_DESC = STRING_RESOURCES.UNIT_METRE2 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.CENTIMETRE2_DESC = STRING_RESOURCES.UNIT_CENTIMETRE2 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILLIMETRE2_DESC = STRING_RESOURCES.UNIT_MILLIMETRE2 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.ARE_DESC = STRING_RESOURCES.UNIT_ARE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.HECTARE_DESC = STRING_RESOURCES.UNIT_HECTARE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.ACRE_DESC = STRING_RESOURCES.UNIT_ACRE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILOMETRE2_DESC = STRING_RESOURCES.UNIT_KILOMETRE2 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILLIMETRE3_DESC = STRING_RESOURCES.UNIT_MILLIMETRE3 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.CENTIMETRE3_DESC = STRING_RESOURCES.UNIT_CENTIMETRE3 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.METRE3_DESC = STRING_RESOURCES.UNIT_METRE3 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILOMETRE3_DESC = STRING_RESOURCES.UNIT_KILOMETRE3 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILLILITRE_DESC = STRING_RESOURCES.UNIT_MILLILITRE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.LITRE_DESC = STRING_RESOURCES.UNIT_LITRE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.GALLON_DESC = STRING_RESOURCES.UNIT_GALLON + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.PINT_DESC = STRING_RESOURCES.UNIT_PINT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.SECOND_DESC = STRING_RESOURCES.UNIT_SECOND + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILLISECOND_DESC = STRING_RESOURCES.UNIT_MILLISECOND + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MINUTE_DESC = STRING_RESOURCES.UNIT_MINUTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.HOUR_DESC = STRING_RESOURCES.UNIT_HOUR + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.DAY_DESC = STRING_RESOURCES.UNIT_DAY + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.WEEK_DESC = STRING_RESOURCES.UNIT_WEEK + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.JULIAN_YEAR_DESC = STRING_RESOURCES.UNIT_JULIAN_YEAR + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILOGRAM_DESC = STRING_RESOURCES.UNIT_KILOGRAM + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.GRAM_DESC = STRING_RESOURCES.UNIT_GRAM + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILLIGRAM_DESC = STRING_RESOURCES.UNIT_MILLIGRAM + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.DECAGRAM_DESC = STRING_RESOURCES.UNIT_DECAGRAM + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.TONNE_DESC = STRING_RESOURCES.UNIT_TONNE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.OUNCE_DESC = STRING_RESOURCES.UNIT_OUNCE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.POUND_DESC = STRING_RESOURCES.UNIT_POUND + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.BIT_DESC = STRING_RESOURCES.UNIT_BIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILOBIT_DESC = STRING_RESOURCES.UNIT_KILOBIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MEGABIT_DESC = STRING_RESOURCES.UNIT_MEGABIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.GIGABIT_DESC = STRING_RESOURCES.UNIT_GIGABIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.TERABIT_DESC = STRING_RESOURCES.UNIT_TERABIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.PETABIT_DESC = STRING_RESOURCES.UNIT_PETABIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.EXABIT_DESC = STRING_RESOURCES.UNIT_EXABIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.ZETTABIT_DESC = STRING_RESOURCES.UNIT_ZETTABIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.YOTTABIT_DESC = STRING_RESOURCES.UNIT_YOTTABIT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.BYTE_DESC = STRING_RESOURCES.UNIT_BYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILOBYTE_DESC = STRING_RESOURCES.UNIT_KILOBYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MEGABYTE_DESC = STRING_RESOURCES.UNIT_MEGABYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.GIGABYTE_DESC = STRING_RESOURCES.UNIT_GIGABYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.TERABYTE_DESC = STRING_RESOURCES.UNIT_TERABYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.PETABYTE_DESC = STRING_RESOURCES.UNIT_PETABYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.EXABYTE_DESC = STRING_RESOURCES.UNIT_EXABYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.ZETTABYTE_DESC = STRING_RESOURCES.UNIT_ZETTABYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.YOTTABYTE_DESC = STRING_RESOURCES.UNIT_YOTTABYTE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.JOULE_DESC = STRING_RESOURCES.UNIT_JOULE + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.ELECTRONO_VOLT_DESC = STRING_RESOURCES.UNIT_ELECTRONO_VOLT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILO_ELECTRONO_VOLT_DESC = STRING_RESOURCES.UNIT_KILO_ELECTRONO_VOLT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MEGA_ELECTRONO_VOLT_DESC = STRING_RESOURCES.UNIT_MEGA_ELECTRONO_VOLT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.GIGA_ELECTRONO_VOLT_DESC = STRING_RESOURCES.UNIT_GIGA_ELECTRONO_VOLT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.TERA_ELECTRONO_VOLT_DESC = STRING_RESOURCES.UNIT_TERA_ELECTRONO_VOLT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.METRE_PER_SECOND_DESC = STRING_RESOURCES.UNIT_METRE_PER_SECOND + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_SPEED + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILOMETRE_PER_HOUR_DESC = STRING_RESOURCES.UNIT_KILOMETRE_PER_HOUR + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_SPEED + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILE_PER_HOUR_DESC = STRING_RESOURCES.UNIT_MILE_PER_HOUR + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_SPEED + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KNOT_DESC = STRING_RESOURCES.UNIT_KNOT + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_SPEED + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.METRE_PER_SECOND2_DESC = STRING_RESOURCES.UNIT_METRE_PER_SECOND2 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ACCELERATION + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_SQUARED_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.KILOMETRE_PER_HOUR2_DESC = STRING_RESOURCES.UNIT_KILOMETRE_PER_HOUR2 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ACCELERATION + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_SQUARED_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MILE_PER_HOUR2_DESC = STRING_RESOURCES.UNIT_MILE_PER_HOUR2 + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ACCELERATION + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_SQUARED_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.RADIAN_ARC_DESC = STRING_RESOURCES.UNIT_RADIAN_ARC + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ANGLE + StringInvariant.SPACE + StringInvariant.RADIAN_UNIT + StringInvariant.SPACE + StringInvariant.RADIAN_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.DEGREE_ARC_DESC = STRING_RESOURCES.UNIT_DEGREE_ARC + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ANGLE + StringInvariant.SPACE + StringInvariant.RADIAN_UNIT + StringInvariant.SPACE + StringInvariant.RADIAN_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.MINUTE_ARC_DESC = STRING_RESOURCES.UNIT_MINUTE_ARC + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ANGLE + StringInvariant.SPACE + StringInvariant.RADIAN_UNIT + StringInvariant.SPACE + StringInvariant.RADIAN_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
            Unit.SECOND_ARC_DESC = STRING_RESOURCES.UNIT_SECOND_ARC + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT_OF_ANGLE + StringInvariant.SPACE + StringInvariant.RADIAN_UNIT + StringInvariant.SPACE + StringInvariant.RADIAN_DEFINITION + StringInvariant.SEPARATOR + STRING_RESOURCES.UNIT;
        }
        internal static void setLanguageSpecificDescriptionsUserDefinedElements() {
            Argument.TYPE_DESC = STRING_RESOURCES.USER_DEFINED_ARGUMENT;
            Constant.TYPE_DESC = STRING_RESOURCES.USER_DEFINED_CONSTANT;
            Expression.TYPE_DESC = STRING_RESOURCES.USER_DEFINED_EXPRESSION;
            Function.TYPE_DESC = STRING_RESOURCES.USER_DEFINED_FUNCTION;
            RecursiveArgument.TYPE_DESC_RECURSIVE = STRING_RESOURCES.USER_DEFINED_RECURSIVE_ARGUMENT;
        }

        internal static bool setLanguageSpecificDescriptions() {
            setLanguageSpecificDescriptionsBinaryRelation();
            setLanguageSpecificDescriptionsBitwiseOperator();
            setLanguageSpecificDescriptionsBooleanOperator();
            setLanguageSpecificDescriptionsCalculusOperator();
            setLanguageSpecificDescriptionsConstantValue();
            setLanguageSpecificDescriptionsFunction1Arg();
            setLanguageSpecificDescriptionsFunction2Arg();
            setLanguageSpecificDescriptionsFunction3Arg();
            setLanguageSpecificDescriptionsFunctionVariadic();
            setLanguageSpecificDescriptionsOperator();
            setLanguageSpecificDescriptionsParserSymbol();
            setLanguageSpecificDescriptionsRandomVariable();
            setLanguageSpecificDescriptionsUnit();
            setLanguageSpecificDescriptionsUserDefinedElements();
            ExpressionUtils.makeAllParserKeyWords();
            mXparser.refreshHelp();
            return true;
        }

        /**
         * Displays the user-defined text resources used
         * and the effect of their use to generate descriptions
         * of the parser elements on the console.
         *
         * @see StringResources
         * @see StringResources#print()
         * @see #printDescriptions()
         */
        public static void print() {
            STRING_RESOURCES.print();
            printDescriptions();
        }
        /**
         * Prints to the console the result of applying user-specific text resources
         * to generate parser description and objects. The method can help with
         * debugging when creating your own translations.
         *
         * @see StringResources
         * @see #setStringResources(StringResources)
         */
        public static void printDescriptions() {
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("BitwiseOperator.TYPE_DESC = \"" + BinaryRelation.TYPE_DESC + "\";");
            StringUtils.consolePrintln("BinaryRelation.EQ_DESC = \"" + BinaryRelation.EQ_DESC + "\";");
            StringUtils.consolePrintln("BinaryRelation.NEQ_DESC = \"" + BinaryRelation.NEQ_DESC + "\";");
            StringUtils.consolePrintln("BinaryRelation.LT_DESC = \"" + BinaryRelation.LT_DESC + "\";");
            StringUtils.consolePrintln("BinaryRelation.GT_DESC = \"" + BinaryRelation.GT_DESC + "\";");
            StringUtils.consolePrintln("BinaryRelation.LEQ_DESC = \"" + BinaryRelation.LEQ_DESC + "\";");
            StringUtils.consolePrintln("BinaryRelation.GEQ_DESC = \"" + BinaryRelation.GEQ_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("BitwiseOperator.TYPE_DESC = \"" + BitwiseOperator.TYPE_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.COMPL_DESC = \"" + BitwiseOperator.COMPL_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.AND_DESC = \"" + BitwiseOperator.AND_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.XOR_DESC = \"" + BitwiseOperator.XOR_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.OR_DESC = \"" + BitwiseOperator.OR_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.LEFT_SHIFT_DESC = \"" + BitwiseOperator.LEFT_SHIFT_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.RIGHT_SHIFT_DESC = \"" + BitwiseOperator.RIGHT_SHIFT_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.NAND_DESC = \"" + BitwiseOperator.NAND_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.NOR_DESC = \"" + BitwiseOperator.NOR_DESC + "\";");
            StringUtils.consolePrintln("BitwiseOperator.XNOR_DESC = \"" + BitwiseOperator.XNOR_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("BooleanOperator.TYPE_DESC = \"" + BooleanOperator.TYPE_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.AND_DESC = \"" + BooleanOperator.AND_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.OR_DESC = \"" + BooleanOperator.OR_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.NEG_DESC = \"" + BooleanOperator.NEG_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.NAND_DESC = \"" + BooleanOperator.NAND_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.NOR_DESC = \"" + BooleanOperator.NOR_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.XOR_DESC = \"" + BooleanOperator.XOR_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.IMP_DESC = \"" + BooleanOperator.IMP_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.CIMP_DESC = \"" + BooleanOperator.CIMP_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.NIMP_DESC = \"" + BooleanOperator.NIMP_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.CNIMP_DESC = \"" + BooleanOperator.CNIMP_DESC + "\";");
            StringUtils.consolePrintln("BooleanOperator.EQV_DESC = \"" + BooleanOperator.EQV_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("CalculusOperator.TYPE_DESC = \"" + CalculusOperator.TYPE_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.SUM_DESC = \"" + CalculusOperator.SUM_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.PROD_DESC = \"" + CalculusOperator.PROD_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.INT_DESC = \"" + CalculusOperator.INT_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.DER_DESC = \"" + CalculusOperator.DER_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.DER_LEFT_DESC = \"" + CalculusOperator.DER_LEFT_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.DER_RIGHT_DESC = \"" + CalculusOperator.DER_RIGHT_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.DERN_DESC = \"" + CalculusOperator.DERN_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.FORW_DIFF_DESC = \"" + CalculusOperator.FORW_DIFF_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.BACKW_DIFF_DESC = \"" + CalculusOperator.BACKW_DIFF_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.AVG_DESC = \"" + CalculusOperator.AVG_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.VAR_DESC = \"" + CalculusOperator.VAR_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.STD_DESC = \"" + CalculusOperator.STD_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.MIN_DESC = \"" + CalculusOperator.MIN_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.MAX_DESC = \"" + CalculusOperator.MAX_DESC + "\";");
            StringUtils.consolePrintln("CalculusOperator.SOLVE_DESC = \"" + CalculusOperator.SOLVE_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("ConstantValue.TYPE_DESC = \"" + ConstantValue.TYPE_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PI_DESC = \"" + ConstantValue.PI_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.EULER_DESC = \"" + ConstantValue.EULER_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.EULER_MASCHERONI_DESC = \"" + ConstantValue.EULER_MASCHERONI_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.GOLDEN_RATIO_DESC = \"" + ConstantValue.GOLDEN_RATIO_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PLASTIC_DESC = \"" + ConstantValue.PLASTIC_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.EMBREE_TREFETHEN_DESC = \"" + ConstantValue.EMBREE_TREFETHEN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.FEIGENBAUM_DELTA_DESC = \"" + ConstantValue.FEIGENBAUM_DELTA_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.FEIGENBAUM_ALPHA_DESC = \"" + ConstantValue.FEIGENBAUM_ALPHA_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.TWIN_PRIME_DESC = \"" + ConstantValue.TWIN_PRIME_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MEISSEL_MERTEENS_DESC = \"" + ConstantValue.MEISSEL_MERTEENS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.BRAUN_TWIN_PRIME_DESC = \"" + ConstantValue.BRAUN_TWIN_PRIME_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.BRAUN_PRIME_QUADR_DESC = \"" + ConstantValue.BRAUN_PRIME_QUADR_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.BRUIJN_NEWMAN_DESC = \"" + ConstantValue.BRUIJN_NEWMAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.CATALAN_DESC = \"" + ConstantValue.CATALAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LANDAU_RAMANUJAN_DESC = \"" + ConstantValue.LANDAU_RAMANUJAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.VISWANATH_DESC = \"" + ConstantValue.VISWANATH_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LEGENDRE_DESC = \"" + ConstantValue.LEGENDRE_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.RAMANUJAN_SOLDNER_DESC = \"" + ConstantValue.RAMANUJAN_SOLDNER_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.ERDOS_BORWEIN_DESC = \"" + ConstantValue.ERDOS_BORWEIN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.BERNSTEIN_DESC = \"" + ConstantValue.BERNSTEIN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.GAUSS_KUZMIN_WIRSING_DESC = \"" + ConstantValue.GAUSS_KUZMIN_WIRSING_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC = \"" + ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.GOLOMB_DICKMAN_DESC = \"" + ConstantValue.GOLOMB_DICKMAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.CAHEN_DESC = \"" + ConstantValue.CAHEN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LAPLACE_LIMIT_DESC = \"" + ConstantValue.LAPLACE_LIMIT_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.ALLADI_GRINSTEAD_DESC = \"" + ConstantValue.ALLADI_GRINSTEAD_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LENGYEL_DESC = \"" + ConstantValue.LENGYEL_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LEVY_DESC = \"" + ConstantValue.LEVY_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.APERY_DESC = \"" + ConstantValue.APERY_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MILLS_DESC = \"" + ConstantValue.MILLS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.BACKHOUSE_DESC = \"" + ConstantValue.BACKHOUSE_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PORTER_DESC = \"" + ConstantValue.PORTER_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LIEB_QUARE_ICE_DESC = \"" + ConstantValue.LIEB_QUARE_ICE_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.NIVEN_DESC = \"" + ConstantValue.NIVEN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.SIERPINSKI_DESC = \"" + ConstantValue.SIERPINSKI_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.KHINCHIN_DESC = \"" + ConstantValue.KHINCHIN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.FRANSEN_ROBINSON_DESC = \"" + ConstantValue.FRANSEN_ROBINSON_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LANDAU_DESC = \"" + ConstantValue.LANDAU_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PARABOLIC_DESC = \"" + ConstantValue.PARABOLIC_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.OMEGA_DESC = \"" + ConstantValue.OMEGA_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MRB_DESC = \"" + ConstantValue.MRB_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LI2_DESC = \"" + ConstantValue.LI2_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.GOMPERTZ_DESC = \"" + ConstantValue.GOMPERTZ_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LIGHT_SPEED_DESC = \"" + ConstantValue.LIGHT_SPEED_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.GRAVITATIONAL_CONSTANT_DESC = \"" + ConstantValue.GRAVITATIONAL_CONSTANT_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.GRAVIT_ACC_EARTH_DESC = \"" + ConstantValue.GRAVIT_ACC_EARTH_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PLANCK_CONSTANT_DESC = \"" + ConstantValue.PLANCK_CONSTANT_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PLANCK_CONSTANT_REDUCED_DESC = \"" + ConstantValue.PLANCK_CONSTANT_REDUCED_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PLANCK_LENGTH_DESC = \"" + ConstantValue.PLANCK_LENGTH_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PLANCK_MASS_DESC = \"" + ConstantValue.PLANCK_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PLANCK_TIME_DESC = \"" + ConstantValue.PLANCK_TIME_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.LIGHT_YEAR_DESC = \"" + ConstantValue.LIGHT_YEAR_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.ASTRONOMICAL_UNIT_DESC = \"" + ConstantValue.ASTRONOMICAL_UNIT_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.PARSEC_DESC = \"" + ConstantValue.PARSEC_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.KILOPARSEC_DESC = \"" + ConstantValue.KILOPARSEC_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC = \"" + ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.EARTH_RADIUS_POLAR_DESC = \"" + ConstantValue.EARTH_RADIUS_POLAR_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.EARTH_RADIUS_MEAN_DESC = \"" + ConstantValue.EARTH_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.EARTH_MASS_DESC = \"" + ConstantValue.EARTH_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MOON_RADIUS_MEAN_DESC = \"" + ConstantValue.MOON_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MOON_MASS_DESC = \"" + ConstantValue.MOON_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MOON_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.MOON_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.SOLAR_RADIUS_DESC = \"" + ConstantValue.SOLAR_RADIUS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.SOLAR_MASS_DESC = \"" + ConstantValue.SOLAR_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MERCURY_RADIUS_MEAN_DESC = \"" + ConstantValue.MERCURY_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MERCURY_MASS_DESC = \"" + ConstantValue.MERCURY_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.VENUS_RADIUS_MEAN_DESC = \"" + ConstantValue.VENUS_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.VENUS_MASS_DESC = \"" + ConstantValue.VENUS_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MARS_RADIUS_MEAN_DESC = \"" + ConstantValue.MARS_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MARS_MASS_DESC = \"" + ConstantValue.MARS_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.JUPITER_RADIUS_MEAN_DESC = \"" + ConstantValue.JUPITER_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.JUPITER_MASS_DESC = \"" + ConstantValue.JUPITER_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.SATURN_RADIUS_MEAN_DESC = \"" + ConstantValue.SATURN_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.SATURN_MASS_DESC = \"" + ConstantValue.SATURN_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.URANUS_RADIUS_MEAN_DESC = \"" + ConstantValue.URANUS_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.URANUS_MASS_DESC = \"" + ConstantValue.URANUS_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.NEPTUNE_RADIUS_MEAN_DESC = \"" + ConstantValue.NEPTUNE_RADIUS_MEAN_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.NEPTUNE_MASS_DESC = \"" + ConstantValue.NEPTUNE_MASS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC = \"" + ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.TRUE_DESC = \"" + ConstantValue.TRUE_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.FALSE_DESC = \"" + ConstantValue.FALSE_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.NPAR_DESC = \"" + ConstantValue.NPAR_DESC + "\";");
            StringUtils.consolePrintln("ConstantValue.NAN_DESC = \"" + ConstantValue.NAN_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("Function1Arg.TYPE_DESC = \"" + Function1Arg.TYPE_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SIN_DESC = \"" + Function1Arg.SIN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.COS_DESC = \"" + Function1Arg.COS_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.TAN_DESC = \"" + Function1Arg.TAN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.CTAN_DESC = \"" + Function1Arg.CTAN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SEC_DESC = \"" + Function1Arg.SEC_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.COSEC_DESC = \"" + Function1Arg.COSEC_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ASIN_DESC = \"" + Function1Arg.ASIN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ACOS_DESC = \"" + Function1Arg.ACOS_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ATAN_DESC = \"" + Function1Arg.ATAN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ACTAN_DESC = \"" + Function1Arg.ACTAN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.LN_DESC = \"" + Function1Arg.LN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.LOG2_DESC = \"" + Function1Arg.LOG2_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.LOG10_DESC = \"" + Function1Arg.LOG10_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.RAD_DESC = \"" + Function1Arg.RAD_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.EXP_DESC = \"" + Function1Arg.EXP_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SQRT_DESC = \"" + Function1Arg.SQRT_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SINH_DESC = \"" + Function1Arg.SINH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.COSH_DESC = \"" + Function1Arg.COSH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.TANH_DESC = \"" + Function1Arg.TANH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.COTH_DESC = \"" + Function1Arg.COTH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SECH_DESC = \"" + Function1Arg.SECH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.CSCH_DESC = \"" + Function1Arg.CSCH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.DEG_DESC = \"" + Function1Arg.DEG_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ABS_DESC = \"" + Function1Arg.ABS_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SGN_DESC = \"" + Function1Arg.SGN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.FLOOR_DESC = \"" + Function1Arg.FLOOR_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.CEIL_DESC = \"" + Function1Arg.CEIL_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.NOT_DESC = \"" + Function1Arg.NOT_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ARSINH_DESC = \"" + Function1Arg.ARSINH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ARCOSH_DESC = \"" + Function1Arg.ARCOSH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ARTANH_DESC = \"" + Function1Arg.ARTANH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ARCOTH_DESC = \"" + Function1Arg.ARCOTH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ARSECH_DESC = \"" + Function1Arg.ARSECH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ARCSCH_DESC = \"" + Function1Arg.ARCSCH_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SA_DESC = \"" + Function1Arg.SA_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SINC_DESC = \"" + Function1Arg.SINC_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.BELL_NUMBER_DESC = \"" + Function1Arg.BELL_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.LUCAS_NUMBER_DESC = \"" + Function1Arg.LUCAS_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.FIBONACCI_NUMBER_DESC = \"" + Function1Arg.FIBONACCI_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.HARMONIC_NUMBER_DESC = \"" + Function1Arg.HARMONIC_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.IS_PRIME_DESC = \"" + Function1Arg.IS_PRIME_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.PRIME_COUNT_DESC = \"" + Function1Arg.PRIME_COUNT_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.EXP_INT_DESC = \"" + Function1Arg.EXP_INT_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.LOG_INT_DESC = \"" + Function1Arg.LOG_INT_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.OFF_LOG_INT_DESC = \"" + Function1Arg.OFF_LOG_INT_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.GAUSS_ERF_DESC = \"" + Function1Arg.GAUSS_ERF_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.GAUSS_ERFC_DESC = \"" + Function1Arg.GAUSS_ERFC_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.GAUSS_ERF_INV_DESC = \"" + Function1Arg.GAUSS_ERF_INV_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.GAUSS_ERFC_INV_DESC = \"" + Function1Arg.GAUSS_ERFC_INV_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ULP_DESC = \"" + Function1Arg.ULP_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ISNAN_DESC = \"" + Function1Arg.ISNAN_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.NDIG10_DESC = \"" + Function1Arg.NDIG10_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.NFACT_DESC = \"" + Function1Arg.NFACT_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ARCSEC_DESC = \"" + Function1Arg.ARCSEC_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.ARCCSC_DESC = \"" + Function1Arg.ARCCSC_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.GAMMA_DESC = \"" + Function1Arg.GAMMA_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.LAMBERT_W0_DESC = \"" + Function1Arg.LAMBERT_W0_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.LAMBERT_W1_DESC = \"" + Function1Arg.LAMBERT_W1_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.SGN_GAMMA_DESC = \"" + Function1Arg.SGN_GAMMA_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.LOG_GAMMA_DESC = \"" + Function1Arg.LOG_GAMMA_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.DI_GAMMA_DESC = \"" + Function1Arg.DI_GAMMA_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.PARAM_DESC = \"" + Function1Arg.PARAM_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.RND_STUDENT_T_DESC = \"" + Function1Arg.RND_STUDENT_T_DESC + "\";");
            StringUtils.consolePrintln("Function1Arg.RND_CHI2_DESC = \"" + Function1Arg.RND_CHI2_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("Function2Arg.TYPE_DESC = \"" + Function2Arg.TYPE_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.LOG_DESC = \"" + Function2Arg.LOG_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.MOD_DESC = \"" + Function2Arg.MOD_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.BINOM_COEFF_DESC = \"" + Function2Arg.BINOM_COEFF_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.BERNOULLI_NUMBER_DESC = \"" + Function2Arg.BERNOULLI_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.STIRLING1_NUMBER_DESC = \"" + Function2Arg.STIRLING1_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.STIRLING2_NUMBER_DESC = \"" + Function2Arg.STIRLING2_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.WORPITZKY_NUMBER_DESC = \"" + Function2Arg.WORPITZKY_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.EULER_NUMBER_DESC = \"" + Function2Arg.EULER_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.KRONECKER_DELTA_DESC = \"" + Function2Arg.KRONECKER_DELTA_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.EULER_POLYNOMIAL_DESC = \"" + Function2Arg.EULER_POLYNOMIAL_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.HARMONIC_NUMBER_DESC = \"" + Function2Arg.HARMONIC_NUMBER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.RND_UNIFORM_CONT_DESC = \"" + Function2Arg.RND_UNIFORM_CONT_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.RND_UNIFORM_DISCR_DESC = \"" + Function2Arg.RND_UNIFORM_DISCR_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.ROUND_DESC = \"" + Function2Arg.ROUND_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.RND_NORMAL_DESC = \"" + Function2Arg.RND_NORMAL_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.NDIG_DESC = \"" + Function2Arg.NDIG_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.DIGIT10_DESC = \"" + Function2Arg.DIGIT10_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.FACTVAL_DESC = \"" + Function2Arg.FACTVAL_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.FACTEXP_DESC = \"" + Function2Arg.FACTEXP_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.ROOT_DESC = \"" + Function2Arg.ROOT_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.INC_GAMMA_LOWER_DESC = \"" + Function2Arg.INC_GAMMA_LOWER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.INC_GAMMA_UPPER_DESC = \"" + Function2Arg.INC_GAMMA_UPPER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.REG_GAMMA_LOWER_DESC = \"" + Function2Arg.REG_GAMMA_LOWER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.REG_GAMMA_UPPER_DESC = \"" + Function2Arg.REG_GAMMA_UPPER_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.PERMUTATIONS_DESC = \"" + Function2Arg.PERMUTATIONS_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.BETA_DESC = \"" + Function2Arg.BETA_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.LOG_BETA_DESC = \"" + Function2Arg.LOG_BETA_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.PDF_STUDENT_T_DESC = \"" + Function2Arg.PDF_STUDENT_T_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.CDF_STUDENT_T_DESC = \"" + Function2Arg.CDF_STUDENT_T_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.QNT_STUDENT_T_DESC = \"" + Function2Arg.QNT_STUDENT_T_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.PDF_CHI2_DESC = \"" + Function2Arg.PDF_CHI2_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.CDF_CHI2_DESC = \"" + Function2Arg.CDF_CHI2_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.QNT_CHI2_DESC = \"" + Function2Arg.QNT_CHI2_DESC + "\";");
            StringUtils.consolePrintln("Function2Arg.RND_F_SNEDECOR_DESC = \"" + Function2Arg.RND_F_SNEDECOR_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.IF_DESC = \"" + Function3Arg.IF_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.CHI_DESC = \"" + Function3Arg.CHI_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.CHI_LR_DESC = \"" + Function3Arg.CHI_LR_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.CHI_L_DESC = \"" + Function3Arg.CHI_L_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.CHI_R_DESC = \"" + Function3Arg.CHI_R_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.PDF_UNIFORM_CONT_DESC = \"" + Function3Arg.PDF_UNIFORM_CONT_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.CDF_UNIFORM_CONT_DESC = \"" + Function3Arg.CDF_UNIFORM_CONT_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.QNT_UNIFORM_CONT_DESC = \"" + Function3Arg.QNT_UNIFORM_CONT_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.PDF_NORMAL_DESC = \"" + Function3Arg.PDF_NORMAL_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.CDF_NORMAL_DESC = \"" + Function3Arg.CDF_NORMAL_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.QNT_NORMAL_DESC = \"" + Function3Arg.QNT_NORMAL_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.DIGIT_DESC = \"" + Function3Arg.DIGIT_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.INC_BETA_DESC = \"" + Function3Arg.INC_BETA_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.REG_BETA_DESC = \"" + Function3Arg.REG_BETA_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.PDF_F_SNEDECOR_DESC = \"" + Function3Arg.PDF_F_SNEDECOR_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.CDF_F_SNEDECOR_DESC = \"" + Function3Arg.CDF_F_SNEDECOR_DESC + "\";");
            StringUtils.consolePrintln("Function3Arg.QNT_F_SNEDECOR_DESC = \"" + Function3Arg.QNT_F_SNEDECOR_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("FunctionVariadic.TYPE_DESC = \"" + FunctionVariadic.TYPE_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.IFF_DESC = \"" + FunctionVariadic.IFF_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.MIN_DESC = \"" + FunctionVariadic.MIN_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.MAX_DESC = \"" + FunctionVariadic.MAX_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.CONT_FRAC_DESC = \"" + FunctionVariadic.CONT_FRAC_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.CONT_POL_DESC = \"" + FunctionVariadic.CONT_POL_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.GCD_DESC = \"" + FunctionVariadic.GCD_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.LCM_DESC = \"" + FunctionVariadic.LCM_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.SUM_DESC = \"" + FunctionVariadic.SUM_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.PROD_DESC = \"" + FunctionVariadic.PROD_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.AVG_DESC = \"" + FunctionVariadic.AVG_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.VAR_DESC = \"" + FunctionVariadic.VAR_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.STD_DESC = \"" + FunctionVariadic.STD_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.RND_LIST_DESC = \"" + FunctionVariadic.RND_LIST_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.COALESCE_DESC = \"" + FunctionVariadic.COALESCE_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.OR_DESC = \"" + FunctionVariadic.OR_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.AND_DESC = \"" + FunctionVariadic.AND_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.XOR_DESC = \"" + FunctionVariadic.XOR_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.ARGMIN_DESC = \"" + FunctionVariadic.ARGMIN_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.ARGMAX_DESC = \"" + FunctionVariadic.ARGMAX_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.MEDIAN_DESC = \"" + FunctionVariadic.MEDIAN_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.MODE_DESC = \"" + FunctionVariadic.MODE_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.BASE_DESC = \"" + FunctionVariadic.BASE_DESC + "\";");
            StringUtils.consolePrintln("FunctionVariadic.NDIST_DESC = \"" + FunctionVariadic.NDIST_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("Operator.TYPE_DESC = \"" + Operator.TYPE_DESC + "\";");
            StringUtils.consolePrintln("Operator.PLUS_DESC = \"" + Operator.PLUS_DESC + "\";");
            StringUtils.consolePrintln("Operator.MINUS_DESC = \"" + Operator.MINUS_DESC + "\";");
            StringUtils.consolePrintln("Operator.MULTIPLY_DESC = \"" + Operator.MULTIPLY_DESC + "\";");
            StringUtils.consolePrintln("Operator.DIVIDE_DESC = \"" + Operator.DIVIDE_DESC + "\";");
            StringUtils.consolePrintln("Operator.DIVIDE_QUOTIENT_DESC = \"" + Operator.DIVIDE_QUOTIENT_DESC + "\";");
            StringUtils.consolePrintln("Operator.POWER_DESC = \"" + Operator.POWER_DESC + "\";");
            StringUtils.consolePrintln("Operator.FACT_DESC = \"" + Operator.FACT_DESC + "\";");
            StringUtils.consolePrintln("Operator.MOD_DESC = \"" + Operator.MOD_DESC + "\";");
            StringUtils.consolePrintln("Operator.PERC_DESC = \"" + Operator.PERC_DESC + "\";");
            StringUtils.consolePrintln("Operator.TETRATION_DESC = \"" + Operator.TETRATION_DESC + "\";");
            StringUtils.consolePrintln("Operator.SQUARE_ROOT_DESC = \"" + Operator.SQUARE_ROOT_DESC + "\";");
            StringUtils.consolePrintln("Operator.CUBE_ROOT_DESC = \"" + Operator.CUBE_ROOT_DESC + "\";");
            StringUtils.consolePrintln("Operator.FOURTH_ROOT_DESC = \"" + Operator.FOURTH_ROOT_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("ParserSymbol.TYPE_DESC = \"" + ParserSymbol.TYPE_DESC + "\";");
            StringUtils.consolePrintln("ParserSymbol.LEFT_PARENTHESES_DESC = \"" + ParserSymbol.LEFT_PARENTHESES_DESC + "\";");
            StringUtils.consolePrintln("ParserSymbol.RIGHT_PARENTHESES_DESC = \"" + ParserSymbol.RIGHT_PARENTHESES_DESC + "\";");
            StringUtils.consolePrintln("ParserSymbol.COMMA_DESC = \"" + ParserSymbol.COMMA_DESC + "\";");
            StringUtils.consolePrintln("ParserSymbol.SEMI_DESC = \"" + ParserSymbol.SEMI_DESC + "\";");
            StringUtils.consolePrintln("ParserSymbol.BLANK_DESC = \"" + ParserSymbol.BLANK_DESC + "\";");
            StringUtils.consolePrintln("ParserSymbol.UNICODE_MATH_DESC = \"" + ParserSymbol.UNICODE_MATH_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("RandomVariable.TYPE_DESC = \"" + RandomVariable.TYPE_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.UNIFORM_DESC = \"" + RandomVariable.UNIFORM_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT_DESC = \"" + RandomVariable.INT_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT1_DESC = \"" + RandomVariable.INT1_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT2_DESC = \"" + RandomVariable.INT2_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT3_DESC = \"" + RandomVariable.INT3_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT4_DESC = \"" + RandomVariable.INT4_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT5_DESC = \"" + RandomVariable.INT5_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT6_DESC = \"" + RandomVariable.INT6_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT7_DESC = \"" + RandomVariable.INT7_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT8_DESC = \"" + RandomVariable.INT8_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.INT9_DESC = \"" + RandomVariable.INT9_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_DESC = \"" + RandomVariable.NAT0_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_1_DESC = \"" + RandomVariable.NAT0_1_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_2_DESC = \"" + RandomVariable.NAT0_2_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_3_DESC = \"" + RandomVariable.NAT0_3_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_4_DESC = \"" + RandomVariable.NAT0_4_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_5_DESC = \"" + RandomVariable.NAT0_5_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_6_DESC = \"" + RandomVariable.NAT0_6_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_7_DESC = \"" + RandomVariable.NAT0_7_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_8_DESC = \"" + RandomVariable.NAT0_8_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT0_9_DESC = \"" + RandomVariable.NAT0_9_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_DESC = \"" + RandomVariable.NAT1_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_1_DESC = \"" + RandomVariable.NAT1_1_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_2_DESC = \"" + RandomVariable.NAT1_2_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_3_DESC = \"" + RandomVariable.NAT1_3_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_4_DESC = \"" + RandomVariable.NAT1_4_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_5_DESC = \"" + RandomVariable.NAT1_5_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_6_DESC = \"" + RandomVariable.NAT1_6_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_7_DESC = \"" + RandomVariable.NAT1_7_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_8_DESC = \"" + RandomVariable.NAT1_8_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NAT1_9_DESC = \"" + RandomVariable.NAT1_9_DESC + "\";");
            StringUtils.consolePrintln("RandomVariable.NOR_DESC = \"" + RandomVariable.NOR_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("Unit.TYPE_DESC = \"" + Unit.TYPE_DESC + "\";");
            StringUtils.consolePrintln("Unit.PERC_DESC = \"" + Unit.PERC_DESC + "\";");
            StringUtils.consolePrintln("Unit.PERM_DESC = \"" + Unit.PERM_DESC + "\";");
            StringUtils.consolePrintln("Unit.YOTTA_DESC = \"" + Unit.YOTTA_DESC + "\";");
            StringUtils.consolePrintln("Unit.ZETTA_DESC = \"" + Unit.ZETTA_DESC + "\";");
            StringUtils.consolePrintln("Unit.EXA_DESC = \"" + Unit.EXA_DESC + "\";");
            StringUtils.consolePrintln("Unit.PETA_DESC = \"" + Unit.PETA_DESC + "\";");
            StringUtils.consolePrintln("Unit.TERA_DESC = \"" + Unit.TERA_DESC + "\";");
            StringUtils.consolePrintln("Unit.GIGA_DESC = \"" + Unit.GIGA_DESC + "\";");
            StringUtils.consolePrintln("Unit.MEGA_DESC = \"" + Unit.MEGA_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILO_DESC = \"" + Unit.KILO_DESC + "\";");
            StringUtils.consolePrintln("Unit.HECTO_DESC = \"" + Unit.HECTO_DESC + "\";");
            StringUtils.consolePrintln("Unit.DECA_DESC = \"" + Unit.DECA_DESC + "\";");
            StringUtils.consolePrintln("Unit.DECI_DESC = \"" + Unit.DECI_DESC + "\";");
            StringUtils.consolePrintln("Unit.CENTI_DESC = \"" + Unit.CENTI_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILLI_DESC = \"" + Unit.MILLI_DESC + "\";");
            StringUtils.consolePrintln("Unit.MICRO_DESC = \"" + Unit.MICRO_DESC + "\";");
            StringUtils.consolePrintln("Unit.NANO_DESC = \"" + Unit.NANO_DESC + "\";");
            StringUtils.consolePrintln("Unit.PICO_DESC = \"" + Unit.PICO_DESC + "\";");
            StringUtils.consolePrintln("Unit.FEMTO_DESC = \"" + Unit.FEMTO_DESC + "\";");
            StringUtils.consolePrintln("Unit.ATTO_DESC = \"" + Unit.ATTO_DESC + "\";");
            StringUtils.consolePrintln("Unit.ZEPTO_DESC = \"" + Unit.ZEPTO_DESC + "\";");
            StringUtils.consolePrintln("Unit.YOCTO_DESC = \"" + Unit.YOCTO_DESC + "\";");
            StringUtils.consolePrintln("Unit.METRE_DESC = \"" + Unit.METRE_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILOMETRE_DESC = \"" + Unit.KILOMETRE_DESC + "\";");
            StringUtils.consolePrintln("Unit.CENTIMETRE_DESC = \"" + Unit.CENTIMETRE_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILLIMETRE_DESC = \"" + Unit.MILLIMETRE_DESC + "\";");
            StringUtils.consolePrintln("Unit.INCH_DESC = \"" + Unit.INCH_DESC + "\";");
            StringUtils.consolePrintln("Unit.YARD_DESC = \"" + Unit.YARD_DESC + "\";");
            StringUtils.consolePrintln("Unit.FEET_DESC = \"" + Unit.FEET_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILE_DESC = \"" + Unit.MILE_DESC + "\";");
            StringUtils.consolePrintln("Unit.NAUTICAL_MILE_DESC = \"" + Unit.NAUTICAL_MILE_DESC + "\";");
            StringUtils.consolePrintln("Unit.METRE2_DESC = \"" + Unit.METRE2_DESC + "\";");
            StringUtils.consolePrintln("Unit.CENTIMETRE2_DESC = \"" + Unit.CENTIMETRE2_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILLIMETRE2_DESC = \"" + Unit.MILLIMETRE2_DESC + "\";");
            StringUtils.consolePrintln("Unit.ARE_DESC = \"" + Unit.ARE_DESC + "\";");
            StringUtils.consolePrintln("Unit.HECTARE_DESC = \"" + Unit.HECTARE_DESC + "\";");
            StringUtils.consolePrintln("Unit.ACRE_DESC = \"" + Unit.ACRE_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILOMETRE2_DESC = \"" + Unit.KILOMETRE2_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILLIMETRE3_DESC = \"" + Unit.MILLIMETRE3_DESC + "\";");
            StringUtils.consolePrintln("Unit.CENTIMETRE3_DESC = \"" + Unit.CENTIMETRE3_DESC + "\";");
            StringUtils.consolePrintln("Unit.METRE3_DESC = \"" + Unit.METRE3_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILOMETRE3_DESC = \"" + Unit.KILOMETRE3_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILLILITRE_DESC = \"" + Unit.MILLILITRE_DESC + "\";");
            StringUtils.consolePrintln("Unit.LITRE_DESC = \"" + Unit.LITRE_DESC + "\";");
            StringUtils.consolePrintln("Unit.GALLON_DESC = \"" + Unit.GALLON_DESC + "\";");
            StringUtils.consolePrintln("Unit.PINT_DESC = \"" + Unit.PINT_DESC + "\";");
            StringUtils.consolePrintln("Unit.SECOND_DESC = \"" + Unit.SECOND_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILLISECOND_DESC = \"" + Unit.MILLISECOND_DESC + "\";");
            StringUtils.consolePrintln("Unit.MINUTE_DESC = \"" + Unit.MINUTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.HOUR_DESC = \"" + Unit.HOUR_DESC + "\";");
            StringUtils.consolePrintln("Unit.DAY_DESC = \"" + Unit.DAY_DESC + "\";");
            StringUtils.consolePrintln("Unit.WEEK_DESC = \"" + Unit.WEEK_DESC + "\";");
            StringUtils.consolePrintln("Unit.JULIAN_YEAR_DESC = \"" + Unit.JULIAN_YEAR_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILOGRAM_DESC = \"" + Unit.KILOGRAM_DESC + "\";");
            StringUtils.consolePrintln("Unit.GRAM_DESC = \"" + Unit.GRAM_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILLIGRAM_DESC = \"" + Unit.MILLIGRAM_DESC + "\";");
            StringUtils.consolePrintln("Unit.DECAGRAM_DESC = \"" + Unit.DECAGRAM_DESC + "\";");
            StringUtils.consolePrintln("Unit.TONNE_DESC = \"" + Unit.TONNE_DESC + "\";");
            StringUtils.consolePrintln("Unit.OUNCE_DESC = \"" + Unit.OUNCE_DESC + "\";");
            StringUtils.consolePrintln("Unit.POUND_DESC = \"" + Unit.POUND_DESC + "\";");
            StringUtils.consolePrintln("Unit.BIT_DESC = \"" + Unit.BIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILOBIT_DESC = \"" + Unit.KILOBIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.MEGABIT_DESC = \"" + Unit.MEGABIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.GIGABIT_DESC = \"" + Unit.GIGABIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.TERABIT_DESC = \"" + Unit.TERABIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.PETABIT_DESC = \"" + Unit.PETABIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.EXABIT_DESC = \"" + Unit.EXABIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.ZETTABIT_DESC = \"" + Unit.ZETTABIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.YOTTABIT_DESC = \"" + Unit.YOTTABIT_DESC + "\";");
            StringUtils.consolePrintln("Unit.BYTE_DESC = \"" + Unit.BYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILOBYTE_DESC = \"" + Unit.KILOBYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.MEGABYTE_DESC = \"" + Unit.MEGABYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.GIGABYTE_DESC = \"" + Unit.GIGABYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.TERABYTE_DESC = \"" + Unit.TERABYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.PETABYTE_DESC = \"" + Unit.PETABYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.EXABYTE_DESC = \"" + Unit.EXABYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.ZETTABYTE_DESC = \"" + Unit.ZETTABYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.YOTTABYTE_DESC = \"" + Unit.YOTTABYTE_DESC + "\";");
            StringUtils.consolePrintln("Unit.JOULE_DESC = \"" + Unit.JOULE_DESC + "\";");
            StringUtils.consolePrintln("Unit.ELECTRONO_VOLT_DESC = \"" + Unit.ELECTRONO_VOLT_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILO_ELECTRONO_VOLT_DESC = \"" + Unit.KILO_ELECTRONO_VOLT_DESC + "\";");
            StringUtils.consolePrintln("Unit.MEGA_ELECTRONO_VOLT_DESC = \"" + Unit.MEGA_ELECTRONO_VOLT_DESC + "\";");
            StringUtils.consolePrintln("Unit.GIGA_ELECTRONO_VOLT_DESC = \"" + Unit.GIGA_ELECTRONO_VOLT_DESC + "\";");
            StringUtils.consolePrintln("Unit.TERA_ELECTRONO_VOLT_DESC = \"" + Unit.TERA_ELECTRONO_VOLT_DESC + "\";");
            StringUtils.consolePrintln("Unit.METRE_PER_SECOND_DESC = \"" + Unit.METRE_PER_SECOND_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILOMETRE_PER_HOUR_DESC = \"" + Unit.KILOMETRE_PER_HOUR_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILE_PER_HOUR_DESC = \"" + Unit.MILE_PER_HOUR_DESC + "\";");
            StringUtils.consolePrintln("Unit.KNOT_DESC = \"" + Unit.KNOT_DESC + "\";");
            StringUtils.consolePrintln("Unit.METRE_PER_SECOND2_DESC = \"" + Unit.METRE_PER_SECOND2_DESC + "\";");
            StringUtils.consolePrintln("Unit.KILOMETRE_PER_HOUR2_DESC = \"" + Unit.KILOMETRE_PER_HOUR2_DESC + "\";");
            StringUtils.consolePrintln("Unit.MILE_PER_HOUR2_DESC = \"" + Unit.MILE_PER_HOUR2_DESC + "\";");
            StringUtils.consolePrintln("Unit.RADIAN_ARC_DESC = \"" + Unit.RADIAN_ARC_DESC + "\";");
            StringUtils.consolePrintln("Unit.DEGREE_ARC_DESC = \"" + Unit.DEGREE_ARC_DESC + "\";");
            StringUtils.consolePrintln("Unit.MINUTE_ARC_DESC = \"" + Unit.MINUTE_ARC_DESC + "\";");
            StringUtils.consolePrintln("Unit.SECOND_ARC_DESC = \"" + Unit.SECOND_ARC_DESC + "\";");
            StringUtils.consolePrintln("// -------------------------------------------------");
            StringUtils.consolePrintln("Argument.TYPE_DESC = \"" + Argument.TYPE_DESC + "\";");
            StringUtils.consolePrintln("Constant.TYPE_DESC = \"" + Constant.TYPE_DESC + "\";");
            StringUtils.consolePrintln("Expression.TYPE_DESC = \"" + Expression.TYPE_DESC + "\";");
            StringUtils.consolePrintln("Function.TYPE_DESC = \"" + Function.TYPE_DESC + "\";");
            StringUtils.consolePrintln("RecursiveArgument.TYPE_DESC_RECURSIVE = \"" + RecursiveArgument.TYPE_DESC_RECURSIVE);
            StringUtils.consolePrintln("// -------------------------------------------------");
        }

        internal static String buildErrorMessagePatternDoesNotMatchWithExamples(String userText, String errorMessage, String examples) {
            return StringUtils.surroundApostropheAddSpace(userText)
                    + errorMessage
                    + StringInvariant.SPACE
                    + STRING_RESOURCES.PATTERN_DOES_NOT_MATCH
                    + StringInvariant.SPACE
                    + STRING_RESOURCES.PATTERN_EXAMPLES
                    + StringInvariant.COLON_SPACE
                    + examples
                    + StringInvariant.DOT
                    ;
        }

        internal static String buildTokenString(String tokenStr, int tokenIndex) {
            return STRING_RESOURCES.TOKEN
                    + StringInvariant.SPACE
                    + StringUtils.surroundApostrophe(tokenStr)
                    + StringInvariant.COMMA_SPACE
                    + STRING_RESOURCES.INDEX
                    + StringInvariant.SPACE
                    + (tokenIndex+1)
                    + StringInvariant.COLON
                    ;
        }

        internal static String buildErrorMessageTokenStrings(String errorMessage, String tokenStr) {
            return tokenStr
                    + StringInvariant.SPACE
                    + errorMessage
                    ;
        }

        internal static String buildErrorMessageKeyword(String errorMessage, String keyword) {
            return STRING_RESOURCES.KEYWORD
                    + StringInvariant.SPACE
                    + StringUtils.surroundApostrophe(keyword)
                    + StringInvariant.COLON
                    + StringInvariant.SPACE
                    + errorMessage
                    ;
        }

        internal static String buildErrorMessageIncorrectNumberOfParameters(String elementName, String errorMessage, int expectedNumberOfParameters, int providedNumberOfParameters) {
            return StringUtils.surroundApostropheAddSpace(elementName)
                    + errorMessage
                    + StringInvariant.SPACE
                    + STRING_RESOURCES.EXPECTED
                    + StringInvariant.SPACE
                    + expectedNumberOfParameters
                    + StringInvariant.COMMA_SPACE
                    + STRING_RESOURCES.PROVIDED
                    + StringInvariant.SPACE
                    + providedNumberOfParameters
                    + StringInvariant.DOT
                    ;
        }

        private static String buildErrorMessageFromParseException(ParseException pe) {
            if (pe.currentToken == null)
                return StringUtils.trimNotNull(pe.Message);

            if (pe.currentToken.next == null)
                return StringUtils.trimNotNull(pe.Message);

            if (pe.currentToken.next.image == null)
                return StringUtils.trimNotNull(pe.Message);

            if (pe.expectedTokenSequences == null)
                return StringUtils.trimNotNull(pe.Message);

            if (pe.expectedTokenSequences.Length == 0)
                return StringUtils.trimNotNull(pe.Message);

            if (pe.tokenImage == null)
                return StringUtils.trimNotNull(pe.Message);

            String errorMessage = STRING_RESOURCES.ENCOUNTERED
                    + StringInvariant.SPACE
                    + StringUtils.surroundQuoteAddSpace(pe.currentToken.next.image)
                    + STRING_RESOURCES.AT_INDEX
                    + StringInvariant.SPACE
                    + pe.currentToken.next.beginColumn
                    + StringInvariant.DOT
                    + StringInvariant.SPACE
                    ;

            bool[] expectedTokenAdded = new bool[pe.tokenImage.Length];
            int numberOfExpectedTokensAdded = 0;
            StringBuilder expectedTokens = new StringBuilder();

            for (int i = 0; i < pe.expectedTokenSequences.Length; i++) {
                int numberOfTokensInSequence = pe.expectedTokenSequences[i].Length;
                if (numberOfTokensInSequence > 0) {
                    int expectedTokenIndex = (int)pe.expectedTokenSequences[i][0];
                    if (!expectedTokenAdded[expectedTokenIndex]) {
                        if (numberOfExpectedTokensAdded == mXparser.ERROR_MESSAGE_MAXIMUM_NUMBER_OF_EXPECTED_TOKENS) {
                            expectedTokens.Append(StringInvariant.AND_CONTINUE);
                            numberOfExpectedTokensAdded++;
                            break;
                        }
                        String expectedTokenImage = pe.tokenImage[expectedTokenIndex];
                        expectedTokens.Append(StringInvariant.NEW_LINE);
                        expectedTokens.Append(StringInvariant.TAB_AS_SPACES);
                        expectedTokens.Append(expectedTokenImage);
                        if (pe.expectedTokenSequences[i][numberOfTokensInSequence - 1] != 0) {
                            expectedTokens.Append(StringInvariant.SPACE);
                            expectedTokens.Append(StringInvariant.DOTS);
                        }
                        expectedTokenAdded[expectedTokenIndex] = true;
                        numberOfExpectedTokensAdded++;
                    }
                }
                if (numberOfExpectedTokensAdded > mXparser.ERROR_MESSAGE_MAXIMUM_NUMBER_OF_EXPECTED_TOKENS)
                    break;
            }

            if (numberOfExpectedTokensAdded > 1)
                errorMessage += STRING_RESOURCES.WAS_EXPECTING_ONE_OF + StringInvariant.COLON_SPACE + expectedTokens;
            else
                errorMessage += STRING_RESOURCES.WAS_EXPECTING + StringInvariant.COLON_SPACE + expectedTokens;

            return errorMessage;
        }

        private static String buildErrorMessageFromTokenMgrError(TokenMgrError tme) {
            return STRING_RESOURCES.UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED
                    + StringInvariant.SPACE
                    + STRING_RESOURCES.ERROR
                    + StringInvariant.COLON_SPACE
                    + StringUtils.trimNotNull(tme.Message)
                    ;
        }

        internal static String buildErrorMessageFromException(Exception e) {
            if (e == null)
                return STRING_RESOURCES.NULL_OBJECT_PROVIDED;

            if (e is ParseException)
                    return buildErrorMessageFromParseException((ParseException) e);

            if (e is TokenMgrError)
                return buildErrorMessageFromTokenMgrError((TokenMgrError) e);

            return STRING_RESOURCES.UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED
                    + StringInvariant.SPACE
                    + STRING_RESOURCES.EXCEPTION
                    + StringInvariant.COLON_SPACE
                    + StringUtils.trimNotNull(e.Message)
                    ;
        }

        internal static String startErrorMassage(String level, String errorMessageToAdd) {
            return level
                    + errorMessageToAdd
                    + StringInvariant.NEW_LINE
                    ;
        }
        internal static String addErrorMassage(String errorMessageCurrent, String level, String errorMessageToAdd) {
            return errorMessageCurrent
                    + level
                    + errorMessageToAdd
                    + StringInvariant.NEW_LINE
                    ;
        }

        internal static String addErrorMassageTokenString(String errorMessageCurrent, String level, String errorMessageToAdd, String tokenStr) {
            return addErrorMassage(errorMessageCurrent, level, buildErrorMessageTokenStrings(errorMessageToAdd, tokenStr));
        }

        internal static String addErrorMassageTokenString(String errorMessageCurrent, String level, String errorMessageToAdd1, String tokenStr, String errorMessageToAdd2) {
            return addErrorMassage(errorMessageCurrent, level, buildErrorMessageTokenStrings(errorMessageToAdd1, tokenStr), errorMessageToAdd2);
        }

        internal static String addErrorMassageNoLevel(String errorMessageCurrent, String errorMessageToAdd) {
            return errorMessageCurrent
                    + errorMessageToAdd
                    + StringInvariant.NEW_LINE
                    ;
        }

        internal static String addErrorMassageNoLevel(String errorMessageCurrent, String errorMessageToAdd, String expressionDescription, String expressionString) {
            return errorMessageCurrent
                    + STRING_RESOURCES.ELEMENT
                    + StringInvariant.SPACE
                    + ExpressionUtils.createExpressionDescription(expressionDescription, expressionString)
                    + errorMessageToAdd
                    + StringInvariant.NEW_LINE
                    ;
        }
        internal static String addErrorMassageNoLevel(String errorMessageCurrent, String errorMessageToAdd1, String errorMessageToAdd2) {
            return errorMessageCurrent
                    + errorMessageToAdd1
                    + StringInvariant.COLON_SPACE
                    + errorMessageToAdd2
                    + StringInvariant.NEW_LINE
                    ;
        }
        internal static String addErrorMassage(String errorMessageCurrent, String level, String errorMessageToAdd1, String errorMessageToAdd2) {
            return errorMessageCurrent
                    + level
                    + errorMessageToAdd1
                    + StringInvariant.NEW_LINE
                    + errorMessageToAdd2
                    ;
        }

        internal static String addErrorMassage(String errorMessageCurrent, String level, String errorMessageToAdd, int expected, int provided) {
            return errorMessageCurrent
                    + level
                    + errorMessageToAdd
                    + StringInvariant.SPACE
                    + STRING_RESOURCES.EXPECTED
                    + StringInvariant.SPACE
                    + expected
                    + StringInvariant.COMMA_SPACE
                    + STRING_RESOURCES.PROVIDED
                    + StringInvariant.SPACE
                    + provided
                    + StringInvariant.DOT
                    + StringInvariant.NEW_LINE
                    ;
        }

        internal static String addErrorMassage(String errorMessageCurrent, String level, String errorMessageToAdd, int expected, int provided, String tokenStr) {
            return errorMessageCurrent
                    + level
                    + tokenStr
                    + StringInvariant.SPACE
                    + errorMessageToAdd
                    + StringInvariant.SPACE
                    + STRING_RESOURCES.EXPECTED
                    + StringInvariant.SPACE
                    + expected
                    + StringInvariant.COMMA_SPACE
                    + STRING_RESOURCES.PROVIDED
                    + StringInvariant.SPACE
                    + provided
                    + StringInvariant.DOT
                    + StringInvariant.NEW_LINE
                    ;
        }
    }
}