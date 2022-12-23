/*
 * @(#)StringResources.cs        5.2.0    2022-12-23
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2022-05-22
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2022 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use as well as
 * commercial use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. NON-COMMERCIAL USE examples:
 *
 * 1. Free Open-Source Software ("FOSS").
 * 2. Non-commercial use in research, scholarly and education.
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
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including
 *    definition of NON-COMMERCIAL USE, definition of COMMERCIAL USE,
 *    NON-COMMERCIAL LICENSE conditions, COMMERCIAL LICENSE conditions, and
 *    the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call takes place only internally for logging purposes and
 *    there is no connection with other external services and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, AUTHOR & PUBLISHER allow you
 *     to download, install and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the conditions of test
 *     environments. The purpose of the tests must not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all below terms and
 *     conditions, and you have acknowledged and understood the following
 *     DISCLAIMER, AUTHOR & PUBLISHER grant you a nonexclusive license
 *     including the following rights:
 *  3. The license has been granted only to you, i.e., the person or entity
 *     that made the purchase, who is identified and confirmed by the data
 *     provided during the purchase.
 *  4. In case you purchased a license in the "ONE-TIME PURCHASE" model,
 *     the license has been granted only for the PRODUCT version specified
 *     in the purchase. The upgrade policy gives you additional rights and
 *     is described in the dedicated section below.
 *  5. In case you purchased a license in the "SUBSCRIPTION" model, you can
 *     install and use any version of the PRODUCT, but only during the
 *     subscription validity period.
 *  6. In case you purchased a "SINGLE LICENSE" you can install and use the
 *     PRODUCT from one workstation.
 *  7. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number
 *     of workstations purchased as per order.
 *  8. In case you purchased a "SITE LICENSE ", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
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
 *     The method call takes place only internally for logging purposes and
 *     there is no connection with other external services and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. AUTHOR & PUBLISHER reserve all rights not expressly granted to you
 *     in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned the
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies of your final product
 * (delivered to your end-users) is not limited.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g.: 5.0), you can freely install
 *    all the various releases specified in the [PATCH] version (e.g.: 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for [MAJOR].[MINOR] version (e.g.: 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g.: 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
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
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF AUTHOR OR PUBLISHER.
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
     * @version        5.2.0
     */
    internal sealed class StringResources {
        // -------------------------------------------------
        internal static String STARTING_SYNTAX_CHECK = "Starting syntax check...";
        internal static String NO_ERRORS_DETECTED = "No errors detected.";
        internal static String LEXICAL_ERROR_HAS_BEEN_FOUND = "A lexical error has been found.";
        internal static String ERRORS_HAVE_BEEN_FOUND = "Errors have been found.";
        internal static String ALREADY_CHECKED_NO_ERRORS = "The syntax has already been checked - no errors detected.";
        internal static String SYNTAX_STATUS_UNKNOWN = "The syntax status is unknown.";
        internal static String PROBLEM_WITH_EXPRESSION_SYNTAX = "There is a problem with expression syntax.";
        // -------------------------------------------------
        internal static String AT_INDEX = "at index";
        internal static String ENCOUNTERED = "Encountered";
        internal static String WAS_EXPECTING = "Was expecting";
        internal static String WAS_EXPECTING_ONE_OF = "Was expecting one of";
        internal static String UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED = "An unexpected exception was encountered. Probably a parser error - please report it.";
        internal static String UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED = "An unexpected token manager error was encountered. Probably a parser error - please report it.";
        // -------------------------------------------------
        internal static String EXPRESSION_STRING_IS_EMPTY = "The expression string is empty.";
        internal static String EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS = "The expression does not contain any tokens.";
        internal static String DUPLICATED_KEYWORD = "Duplicated keywords were found. Check user-defined items. Consider using option to override built-in tokens.";
        internal static String ELEMENT = "Element";
        internal static String ERROR = "Error";
        internal static String EXCEPTION = "Exception";
        internal static String TOKEN = "Token";
        internal static String INDEX = "index";
        internal static String INVALID_TOKEN = "Invalid token.";
        internal static String INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR = "Invalid token. Possibly missing multiplication operator - try implied multiplication mode.";
        internal static String EXPRESSION_TOKENS = "Expression tokens";
        internal static String NULL_TOKENS_LIST = "NULL tokens list";
        // -------------------------------------------------
        internal static String FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS = "User-defined function with extended body - no errors by assumption.";
        internal static String ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS = "User-defined argument with extended body - no errors by assumption.";
        internal static String MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE = "Possibly missing multiplication operator - try implied multiplication mode.";
        // -------------------------------------------------
        internal static String STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT = "Starting syntax check of the dependent user-defined argument.";
        internal static String STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT = "Starting syntax check of the user-defined recursive argument.";
        internal static String STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION = "Starting syntax check of the user-defined function.";
        internal static String STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION = "Starting syntax check of the variadic user-defined function.";
        // -------------------------------------------------
        internal static String ARGUMENT_WAS_EXPECTED = "User-defined argument was expected.";
        internal static String RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER = "A recursive user-defined argument requires one parameter.";
        // -------------------------------------------------
        internal static String INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION = "Incorrect number of parameters in user-defined function.";
        // -------------------------------------------------
        internal static String INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS = "Incorrect number of function parameters.";
        internal static String EXPECTED = "Expected";
        internal static String PROVIDED = "provided";
        internal static String USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT = "Incorrect number of parameters in user-defined function - at least one argument is expected.";
        internal static String EXPECTED_EVEN_NUMBER_OF_ARGUMENTS = "Even number of arguments was expected.";
        // -------------------------------------------------
        internal static String INVALID_FUNCTION_NAME = "Invalid function name.";
        internal static String INVALID_ARGUMENT_NAME = "Invalid argument name.";
        internal static String INVALID_CONSTANT_NAME = "Invalid constant name.";
        internal static String INVALID_FUNCTION_DEFINITION = "Invalid function definition.";
        internal static String INVALID_ARGUMENT_DEFINITION = "Invalid argument definition.";
        internal static String INVALID_CONSTANT_DEFINITION = "Invalid constant definition.";
        internal static String PATTERN_DOES_NOT_MATCH = "Pattern does not match.";
        internal static String PATTERN_EXAMPLES = "Pattern examples";
        // -------------------------------------------------
        internal static String CONSTANT_WAS_EXPECTED = "Constant value was expected.";
        internal static String USER_CONSTANT_WAS_EXPECTED = "User-defined constant was expected.";
        // -------------------------------------------------
        internal static String UNARY_FUNCTION_EXPECTS_1_PARAMETER = "A unary function expects 1 parameter.";
        internal static String BINARY_FUNCTION_EXPECTS_2_PARAMETERS = "A binary function expects 2 parameters.";
        internal static String TERNARY_FUNCTION_EXPECTS_3_PARAMETERS = "A ternary function expects 3 parameters.";
        // -------------------------------------------------
        internal static String DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS = "A derivative operator expects 2 or 3 or 4 or 5 calculus parameters.";
        internal static String ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION = "An argument was expected in a derivative operator invocation.";
        internal static String DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION = "Duplicated keywords were found in the calculus operator invocation, check calculus parameters.";
        internal static String ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION = "One token (argument or unknown) was expected in the calculus operator invocation.";
        internal static String NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS = "N-th order derivative operator expects 3 or 5 calculus parameters.";
        internal static String INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS = "The integral / solve operator expects 4 calculus parameters.";
        internal static String ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS = "The iterated operator expects 4 or 5 calculus parameters.";
        internal static String FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS = "The forward / backward difference operator expects 2 or 3 calculus parameters.";
        internal static String FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED = "An argument was expected in the forward / backward difference operator invocation.";
        internal static String AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED = "At least one argument was expected.";
        // -------------------------------------------------
        internal static String ERROR_WHILE_EXECUTING_THE_CALCULATE = "Error while executing the calculate.";
        internal static String RECURSION_CALLS_COUNTER_EXCEEDED = "Recursion calls counter exceeded maximum calls allowed.";
        internal static String RECURSION_CALLS_COUNTER = "Recursion calls counter";
        internal static String STARTING_CALCULATION_LOOP = "Starting calculation loop.";
        internal static String CANCEL_REQUEST_FINISHING = "Cancel request encountered - finishing.";
        internal static String INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING = "Internal error / strange token level - finishing. Probably a parser error - please report it.";
        internal static String FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN = "Fatal error, do not know what to do with the encountered token. Probably a parser error - please report it.";
        internal static String MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED = "The maximum error message length has been exceeded.";
        // -------------------------------------------------
        internal static String STARTING = "Starting...";
        internal static String PARSING = "Parsing";
        internal static String CALCULATED_VALUE = "Calculated value";
        internal static String EXITING = "Exiting.";
        internal static String DONE = "done.";
        // -------------------------------------------------
        internal static String HELP_CONTENT = "Help content";
        internal static String KEYWORD = "Keyword";
        internal static String SYNTAX = "Syntax";
        internal static String NUMBER = "Number";
        internal static String NUMBER_LITERAL = "Number literal";
        internal static String TYPE = "Type";
        internal static String SINCE = "Since";
        internal static String DESCRIPTION = "Description";
        // -------------------------------------------------
        internal static String CALC_STEPS_REGISTER_IS_EMPTY = "CalcStepsRegister is empty";
        internal static String CALC_STEPS_REGISTER_FOR = "CalcStepsRegister for";
        internal static String ARGUMENT = "Argument";
        internal static String FUNCTION = "Function";
        internal static String EXPRESSION = "Expression";
        internal static String RESULT = "result";
        internal static String COMPUTING_TIME = "Computing time";
        internal static String GROUP_SHORT = "gr";
        internal static String NUMBER_SHORT = "nr";
        internal static String FIRST = "first";
        internal static String LAST = "last";
        internal static String DESCRIPTION_SHORT = "descr";
        internal static String STEP = "step";
        // -------------------------------------------------
        internal static String INFO_SERIALIZATION_PERFORMED = "Serialization has been performed:";
        internal static String INFO_DESERIALIZATION_PERFORMED = "Deserialization has been performed:";
        internal static String ERROR_NULL_OBJECT = "Null object passed in the parameter.";
        internal static String ERROR_NULL_FILE_PATH = "Null file passed in the parameter.";
        internal static String ERROR_FILE_PATH_ZERO_LENGTH = "The file path does not contain any characters.";
        internal static String ERROR_IS_NOT_A_FILE = "The file path is not a file:";
        internal static String ERROR_FILE_NOT_EXISTS = "The file path does not exits:";
        internal static String ERROR_NULL_DATA = "Null data passed in the parameter.";
        internal static String INFO_EXCEPTION = "Exception: ";
        internal static String INFO_BINARY_SERIALIZATION_ENABLED = "Binary serialization is enabled. Use it only in a conscious and limited way.";
        internal static String INFO_BINARY_SERIALIZATION_DISABLED = "Binary serialization is disabled. You can enable it if you are aware of security risks.";
        // -------------------------------------------------
        internal static String USER_DEFINED_EXPRESSION = "User defined expression";
        internal static String USER_DEFINED_ARGUMENT = "User defined argument";
        internal static String USER_DEFINED_CONSTANT = "User defined constant";
        internal static String USER_DEFINED_FUNCTION = "User defined function";
        internal static String USER_DEFINED_RECURSIVE_ARGUMENT = "User defined recursive argument";
        // -------------------------------------------------
        internal static String WARNING_BINARY_SERIALIZATION_SECURITY_RISKS =
                "SECURITY WARNING:\n"
                        + "Deserializing data from an untrusted source can introduce security vulnerabilities" + StringInvariant.NEW_LINE
                        + "to your application. Depending on the settings used during deserialization," + StringInvariant.NEW_LINE
                        + "untrusted data may be able to execute arbitrary code or cause a denial of service" + StringInvariant.NEW_LINE
                        + "attack. Untrusted data can come from over the network from an untrusted source" + StringInvariant.NEW_LINE
                        + "(e.g. any network client), or it can be manipulated/tampered by an intermediary while" + StringInvariant.NEW_LINE
                        + "in transit over an unauthenticated connection, or from local storage where it may" + StringInvariant.NEW_LINE
                        + "have been compromised/tampered, or from many other sources. MathParser.org-mXparser" + StringInvariant.NEW_LINE
                        + "does not provide any means to authenticate data or secure it from tampering. Use an" + StringInvariant.NEW_LINE
                        + "appropriate data authentication method before deserializing. Be very mindful of these" + StringInvariant.NEW_LINE
                        + "attack scenarios; many projects and companies and users of serialization libraries in" + StringInvariant.NEW_LINE
                        + "general have been bitten by untrusted deserialization of user data in the past." + StringInvariant.NEW_LINE
                ;
        // -------------------------------------------------
        internal static String BINARY_RELATION = "Binary relation";
        internal static String BITWISE_OPERATOR = "Bitwise operator";
        internal static String BOOLEAN_OPERATOR = "Boolean operator";
        internal static String CALCULUS_OPERATOR = "Calculus operator";
        internal static String CONSTANT_VALUE = "Constant value";
        internal static String FUNCTION_1_ARG = "Unary function";
        internal static String FUNCTION_2_ARG = "Binary function";
        internal static String FUNCTION_3_ARG = "Ternary function";
        internal static String FUNCTION_VARIADIC = "Variadic function";
        internal static String OPERATOR = "Operator";
        internal static String PARSER_SYMBOL = "Parser symbol";
        internal static String RANDOM_VARIABLE = "Random variable";
        internal static String UNIT = "Unit";
        internal static String DIMENSIONLESS_UNIT = "Dimensionless unit";
        internal static String ITERATED_OPERATOR = "Iterated operator";
        // -------------------------------------------------
        internal static String RATIO_FRACTION = "Ratio / Fraction";
        internal static String METRIC_PREFIX = "Metric prefix";
        internal static String UNIT_OF_LENGTH = "Unit of length";
        internal static String UNIT_OF_AREA = "Unit of area";
        internal static String UNIT_OF_VOLUME = "Unit of volume";
        internal static String UNIT_OF_TIME = "Unit of time";
        internal static String UNIT_OF_MASS = "Unit of mass";
        internal static String UNIT_OF_INFORMATION = "Unit of information";
        internal static String UNIT_OF_ENERGY = "Unit of energy";
        internal static String UNIT_OF_SPEED = "Unit of speed";
        internal static String UNIT_OF_ACCELERATION = "Unit of acceleration";
        internal static String UNIT_OF_ANGLE = "Unit of angle";
        // -------------------------------------------------
        internal static String PHYSICAL_CONSTANT = "Physical constant";
        internal static String ASTRONOMICAL_CONSTANT = "Astronomical constant";
        internal static String MATHEMATICAL_CONSTANT = "Mathematical constant";
        // -------------------------------------------------
        internal static String PROBABILITY_DISTRIBUTION_FUNCTION = "Probability distribution function";
        internal static String CUMULATIVE_DISTRIBUTION_FUNCTION = "Cumulative distribution function";
        internal static String QUANTILE_FUNCTION = "Quantile function (inverse cumulative distribution function)";
        // -------------------------------------------------
        internal static String STUDENTS_T_DISTRIBUTION = "Student's t-distribution";
        internal static String CHI_SQUARED_DISTRIBUTION = "Chi-squared distribution";
        internal static String SNEDECORS_F_DISTRIBUTION = "Snedecor's F distribution (F-distribution or F-ratio, also known as Fisher–Snedecor distribution)";
        internal static String UNIFORM_CONTINUOUS_DISTRIBUTION = "Uniform continuous distribution";
        internal static String UNIFORM_DISCRETE_DISTRIBUTION = "Uniform discrete distribution";
        internal static String NORMAL_DISTRIBUTION = "Normal distribution";
        // -------------------------------------------------
        internal static String RANDOM_INTEGER = "Random integer";
        internal static String RANDOM_NATURAL_NUMBER = "Random natural number";
        internal static String RANDOM_NATURAL_NUMBER_INCLUDING_0 = "Random natural number including 0";
        // -------------------------------------------------
        internal static String SPECIAL_FUNCTION = "Special function";
        // -------------------------------------------------
        internal static String SEMI_MAJOR_AXIS = "Semi major axis";
        // -------------------------------------------------
        internal static String BINARY_RELATION_EQ = "Equality";
        internal static String BINARY_RELATION_NEQ = "Inequation";
        internal static String BINARY_RELATION_LT = "Lower than";
        internal static String BINARY_RELATION_GT = "Greater than";
        internal static String BINARY_RELATION_LEQ = "Lower or equal";
        internal static String BINARY_RELATION_GEQ = "Greater or equal";
        // -------------------------------------------------
        internal static String BITWISE_OPERATOR_COMPL = "Bitwise unary complement";
        internal static String BITWISE_OPERATOR_AND = "Bitwise and";
        internal static String BITWISE_OPERATOR_XOR = "Bitwise exclusive or";
        internal static String BITWISE_OPERATOR_OR = "Bitwise inclusive or";
        internal static String BITWISE_OPERATOR_LEFT_SHIFT = "Signed left shift";
        internal static String BITWISE_OPERATOR_RIGHT_SHIFT = "Signed right shift";
        // -------------------------------------------------
        internal static String BOOLEAN_OPERATOR_AND = "Logical conjunction";
        internal static String BOOLEAN_OPERATOR_OR = "Logical disjunction";
        internal static String BOOLEAN_OPERATOR_NEG = "Negation";
        internal static String BOOLEAN_OPERATOR_NAND = "Sheffer stroke";
        internal static String BOOLEAN_OPERATOR_NOR = "Logical not or (joint denial)";
        internal static String BOOLEAN_OPERATOR_XOR = "Exclusive or";
        internal static String BOOLEAN_OPERATOR_IMP = "Implication";
        internal static String BOOLEAN_OPERATOR_CIMP = "Converse implication";
        internal static String BOOLEAN_OPERATOR_NIMP = "Material nonimplication";
        internal static String BOOLEAN_OPERATOR_CNIMP = "Converse nonimplication";
        internal static String BOOLEAN_OPERATOR_EQV = "Logical biconditional";
        // -------------------------------------------------
        internal static String CALCULUS_OPERATOR_SUM = "Summation SIGMA";
        internal static String CALCULUS_OPERATOR_PROD = "Product PI";
        internal static String CALCULUS_OPERATOR_INT = "Definite integral";
        internal static String CALCULUS_OPERATOR_DER = "Derivative";
        internal static String CALCULUS_OPERATOR_DER_LEFT = "Left derivative";
        internal static String CALCULUS_OPERATOR_DER_RIGHT = "Right derivative";
        internal static String CALCULUS_OPERATOR_DERN = "n-th derivative";
        internal static String CALCULUS_OPERATOR_FORW_DIFF = "Forward difference";
        internal static String CALCULUS_OPERATOR_BACKW_DIFF = "Backward difference";
        internal static String CALCULUS_OPERATOR_AVG = "Average";
        internal static String CALCULUS_OPERATOR_VAR = "Bias-corrected sample variance";
        internal static String CALCULUS_OPERATOR_STD = "Bias-corrected sample standard deviation";
        internal static String CALCULUS_OPERATOR_MIN = "Minimum value";
        internal static String CALCULUS_OPERATOR_MAX = "Maximum value";
        internal static String CALCULUS_OPERATOR_SOLVE = "Equation solving (root finding)";
        // -------------------------------------------------
        internal static String CONSTANT_VALUE_PI = "Pi, Archimedes' or Ludolph's number";
        internal static String CONSTANT_VALUE_EULER = "Napier's or Euler's number (base of Natural logarithm)";
        internal static String CONSTANT_VALUE_EULER_MASCHERONI = "Euler-Mascheroni constant";
        internal static String CONSTANT_VALUE_GOLDEN_RATIO = "Golden ratio";
        internal static String CONSTANT_VALUE_PLASTIC = "Plastic constant";
        internal static String CONSTANT_VALUE_EMBREE_TREFETHEN = "Embree-Trefethen constant";
        internal static String CONSTANT_VALUE_FEIGENBAUM_DELTA = "Feigenbaum delta constant";
        internal static String CONSTANT_VALUE_FEIGENBAUM_ALPHA = "Feigenbaum alpha constant";
        internal static String CONSTANT_VALUE_TWIN_PRIME = "Twin prime constant";
        internal static String CONSTANT_VALUE_MEISSEL_MERTEENS = "Meissel-Mertens constant";
        internal static String CONSTANT_VALUE_BRAUN_TWIN_PRIME = "Brun's constant for twin primes";
        internal static String CONSTANT_VALUE_BRAUN_PRIME_QUADR = "Brun's constant for prime quadruplets";
        internal static String CONSTANT_VALUE_BRUIJN_NEWMAN = "de Bruijn-Newman constant";
        internal static String CONSTANT_VALUE_CATALAN = "Catalan's constant";
        internal static String CONSTANT_VALUE_LANDAU_RAMANUJAN = "Landau-Ramanujan constant";
        internal static String CONSTANT_VALUE_VISWANATH = "Viswanath's constant";
        internal static String CONSTANT_VALUE_LEGENDRE = "Legendre's constant";
        internal static String CONSTANT_VALUE_RAMANUJAN_SOLDNER = "Ramanujan-Soldner constant";
        internal static String CONSTANT_VALUE_ERDOS_BORWEIN = "Erdos-Borwein constant";
        internal static String CONSTANT_VALUE_BERNSTEIN = "Bernstein's constant";
        internal static String CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING = "Gauss-Kuzmin-Wirsing constant";
        internal static String CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY = "Hafner-Sarnak-McCurley constant";
        internal static String CONSTANT_VALUE_GOLOMB_DICKMAN = "Golomb-Dickman constant";
        internal static String CONSTANT_VALUE_CAHEN = "Cahen's constant";
        internal static String CONSTANT_VALUE_LAPLACE_LIMIT = "Laplace limit constant";
        internal static String CONSTANT_VALUE_ALLADI_GRINSTEAD = "Alladi-Grinstead constant";
        internal static String CONSTANT_VALUE_LENGYEL = "Lengyel's constant";
        internal static String CONSTANT_VALUE_LEVY = "Levy's constant";
        internal static String CONSTANT_VALUE_APERY = "Apery's constant";
        internal static String CONSTANT_VALUE_MILLS = "Mills' constant";
        internal static String CONSTANT_VALUE_BACKHOUSE = "Backhouse's constant";
        internal static String CONSTANT_VALUE_PORTER = "Porter's constant";
        internal static String CONSTANT_VALUE_LIEB_QUARE_ICE = "Lieb's square ice constant";
        internal static String CONSTANT_VALUE_NIVEN = "Niven's constant";
        internal static String CONSTANT_VALUE_SIERPINSKI = "Sierpinski's constant";
        internal static String CONSTANT_VALUE_KHINCHIN = "Khinchin's constant";
        internal static String CONSTANT_VALUE_FRANSEN_ROBINSON = "Fransen-Robinson constant";
        internal static String CONSTANT_VALUE_LANDAU = "Landau's constant";
        internal static String CONSTANT_VALUE_PARABOLIC = "Parabolic constant";
        internal static String CONSTANT_VALUE_OMEGA = "Omega constant";
        internal static String CONSTANT_VALUE_MRB = "MRB constant";
        internal static String CONSTANT_VALUE_LI2 = "Logarithmic integral at point 2";
        internal static String CONSTANT_VALUE_GOMPERTZ = "Gompertz constant";
        internal static String CONSTANT_VALUE_LIGHT_SPEED = "Light speed in vacuum";
        internal static String CONSTANT_VALUE_GRAVITATIONAL_CONSTANT = "Gravitational constant";
        internal static String CONSTANT_VALUE_GRAVIT_ACC_EARTH = "Gravitational acceleration on Earth";
        internal static String CONSTANT_VALUE_PLANCK_CONSTANT = "Planck constant";
        internal static String CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED = "Reduced Planck constant (Dirac constant)";
        internal static String CONSTANT_VALUE_PLANCK_LENGTH = "Planck length";
        internal static String CONSTANT_VALUE_PLANCK_MASS = "Planck mass";
        internal static String CONSTANT_VALUE_PLANCK_TIME = "Planck time";
        internal static String CONSTANT_VALUE_LIGHT_YEAR = "Light year";
        internal static String CONSTANT_VALUE_ASTRONOMICAL_UNIT = "Astronomical unit";
        internal static String CONSTANT_VALUE_PARSEC = "Parsec";
        internal static String CONSTANT_VALUE_KILOPARSEC = "Kiloparsec";
        internal static String CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL = "Earth equatorial radius";
        internal static String CONSTANT_VALUE_EARTH_RADIUS_POLAR = "Earth polar radius";
        internal static String CONSTANT_VALUE_EARTH_RADIUS_MEAN = "Earth mean radius";
        internal static String CONSTANT_VALUE_EARTH_MASS = "Earth mass";
        internal static String CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS = "Earth-Sun distance";
        internal static String CONSTANT_VALUE_MOON_RADIUS_MEAN = "Moon mean radius";
        internal static String CONSTANT_VALUE_MOON_MASS = "Moon mass";
        internal static String CONSTANT_VALUE_MONN_SEMI_MAJOR_AXIS = "Moon-Earth distance";
        internal static String CONSTANT_VALUE_SOLAR_RADIUS = "Solar mean radius";
        internal static String CONSTANT_VALUE_SOLAR_MASS = "Solar mass";
        internal static String CONSTANT_VALUE_MERCURY_RADIUS_MEAN = "Mercury mean radius";
        internal static String CONSTANT_VALUE_MERCURY_MASS = "Mercury mass";
        internal static String CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS = "Mercury-Sun distance";
        internal static String CONSTANT_VALUE_VENUS_RADIUS_MEAN = "Venus mean radius";
        internal static String CONSTANT_VALUE_VENUS_MASS = "Venus mass";
        internal static String CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS = "Venus-Sun distance";
        internal static String CONSTANT_VALUE_MARS_RADIUS_MEAN = "Mars mean radius";
        internal static String CONSTANT_VALUE_MARS_MASS = "Mars mass";
        internal static String CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS = "Mars-Sun distance";
        internal static String CONSTANT_VALUE_JUPITER_RADIUS_MEAN = "Jupiter mean radius";
        internal static String CONSTANT_VALUE_JUPITER_MASS = "Jupiter mass";
        internal static String CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS = "Jupiter-Sun distance";
        internal static String CONSTANT_VALUE_SATURN_RADIUS_MEAN = "Saturn mean radius";
        internal static String CONSTANT_VALUE_SATURN_MASS = "Saturn mass";
        internal static String CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS = "Saturn-Sun distance";
        internal static String CONSTANT_VALUE_URANUS_RADIUS_MEAN = "Uranus mean radius";
        internal static String CONSTANT_VALUE_URANUS_MASS = "Uranus mass";
        internal static String CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS = "Uranus-Sun distance";
        internal static String CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN = "Neptune mean radius";
        internal static String CONSTANT_VALUE_NEPTUNE_MASS = "Neptune mass";
        internal static String CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS = "Neptune-Sun distance";
        internal static String CONSTANT_VALUE_TRUE = "Boolean True represented as 1";
        internal static String CONSTANT_VALUE_FALSE = "Boolean False represented as 0";
        internal static String CONSTANT_VALUE_NPAR = "Automatically generated constant for user defined functions, returns number of given function parameters";
        internal static String CONSTANT_VALUE_NAN = "Not-a-Number";
        // -------------------------------------------------
        internal static String FUNCTION_1_ARG_SIN = "Trigonometric sine";
        internal static String FUNCTION_1_ARG_COS = "Trigonometric cosine";
        internal static String FUNCTION_1_ARG_TAN = "Trigonometric tangent";
        internal static String FUNCTION_1_ARG_CTAN = "Trigonometric cotangent";
        internal static String FUNCTION_1_ARG_SEC = "Trigonometric secant";
        internal static String FUNCTION_1_ARG_COSEC = "Trigonometric cosecant";
        internal static String FUNCTION_1_ARG_ASIN = "Inverse trigonometric sine";
        internal static String FUNCTION_1_ARG_ACOS = "Inverse trigonometric cosine";
        internal static String FUNCTION_1_ARG_ATAN = "Inverse trigonometric tangent";
        internal static String FUNCTION_1_ARG_ACTAN = "Inverse trigonometric cotangent";
        internal static String FUNCTION_1_ARG_LN = "Natural logarithm (base e)";
        internal static String FUNCTION_1_ARG_LOG2 = "Binary logarithm (base 2)";
        internal static String FUNCTION_1_ARG_LOG10 = "Common logarithm (base 10)";
        internal static String FUNCTION_1_ARG_RAD = "Degrees to radians";
        internal static String FUNCTION_1_ARG_EXP = "Exponential";
        internal static String FUNCTION_1_ARG_SQRT = "Squre root";
        internal static String FUNCTION_1_ARG_SINH = "Hyperbolic sine";
        internal static String FUNCTION_1_ARG_COSH = "Hyperbolic cosine";
        internal static String FUNCTION_1_ARG_TANH = "Hyperbolic tangent";
        internal static String FUNCTION_1_ARG_COTH = "Hyperbolic cotangent";
        internal static String FUNCTION_1_ARG_SECH = "Hyperbolic secant";
        internal static String FUNCTION_1_ARG_CSCH = "Hyperbolic cosecant";
        internal static String FUNCTION_1_ARG_DEG = "Radians to degrees";
        internal static String FUNCTION_1_ARG_ABS = "Absolut value";
        internal static String FUNCTION_1_ARG_SGN = "Signum";
        internal static String FUNCTION_1_ARG_FLOOR = "Floor";
        internal static String FUNCTION_1_ARG_CEIL = "Ceiling";
        internal static String FUNCTION_1_ARG_NOT = "Negation";
        internal static String FUNCTION_1_ARG_ARSINH = "Inverse hyperbolic sine";
        internal static String FUNCTION_1_ARG_ARCOSH = "Inverse hyperbolic cosine";
        internal static String FUNCTION_1_ARG_ARTANH = "Inverse hyperbolic tangent";
        internal static String FUNCTION_1_ARG_ARCOTH = "Inverse hyperbolic cotangent";
        internal static String FUNCTION_1_ARG_ARSECH = "Inverse hyperbolic secant";
        internal static String FUNCTION_1_ARG_ARCSCH = "Inverse hyperbolic cosecant";
        internal static String FUNCTION_1_ARG_SA = "Sinc (normalized)";
        internal static String FUNCTION_1_ARG_SINC = "Sinc (unnormalized)";
        internal static String FUNCTION_1_ARG_BELL_NUMBER = "Bell number";
        internal static String FUNCTION_1_ARG_LUCAS_NUMBER = "Lucas number";
        internal static String FUNCTION_1_ARG_FIBONACCI_NUMBER = "Fibonacci number";
        internal static String FUNCTION_1_ARG_HARMONIC_NUMBER = "Harmonic number";
        internal static String FUNCTION_1_ARG_IS_PRIME = "Prime number test (is number a prime?)";
        internal static String FUNCTION_1_ARG_PRIME_COUNT = "Prime-counting";
        internal static String FUNCTION_1_ARG_EXP_INT = "Exponential integral";
        internal static String FUNCTION_1_ARG_LOG_INT = "Logarithmic integral";
        internal static String FUNCTION_1_ARG_OFF_LOG_INT = "Offset logarithmic integral";
        internal static String FUNCTION_1_ARG_GAUSS_ERF = "Gauss error";
        internal static String FUNCTION_1_ARG_GAUSS_ERFC = "Gauss complementary error";
        internal static String FUNCTION_1_ARG_GAUSS_ERF_INV = "Inverse Gauss error";
        internal static String FUNCTION_1_ARG_GAUSS_ERFC_INV = "Inverse Gauss complementary error";
        internal static String FUNCTION_1_ARG_ULP = "Unit in The Last Place";
        internal static String FUNCTION_1_ARG_ISNAN = "Returns true if value is a Not-a-Number (NaN), false otherwise";
        internal static String FUNCTION_1_ARG_NDIG10 = "Number of digits in numeral system with base 10";
        internal static String FUNCTION_1_ARG_NFACT = "Prime decomposition - number of distinct prime factors";
        internal static String FUNCTION_1_ARG_ARCSEC = "Inverse trigonometric secant";
        internal static String FUNCTION_1_ARG_ARCCSC = "Inverse trigonometric cosecant";
        internal static String FUNCTION_1_ARG_GAMMA = "Gamma";
        internal static String FUNCTION_1_ARG_LAMBERT_W0 = "Lambert-W, principal branch 0, also called the omega or product logarithm";
        internal static String FUNCTION_1_ARG_LAMBERT_W1 = "Lambert-W, branch -1, also called the omega or product logarithm";
        internal static String FUNCTION_1_ARG_SGN_GAMMA = "Signum of Gamma";
        internal static String FUNCTION_1_ARG_LOG_GAMMA = "Log Gamma";
        internal static String FUNCTION_1_ARG_DI_GAMMA = "Digamma as the logarithmic derivative of the Gamma";
        internal static String FUNCTION_1_ARG_PARAM = "Automatically generated function for user defined functions, returns function parameter value at index 'i'";
        // -------------------------------------------------
        internal static String FUNCTION_2_ARG_LOG = "Logarithm";
        internal static String FUNCTION_2_ARG_MOD = "Modulo";
        internal static String FUNCTION_2_ARG_BINOM_COEFF = "Binomial coefficient, number of k-combinations that can be drawn from n-elements set";
        internal static String FUNCTION_2_ARG_BERNOULLI_NUMBER = "Bernoulli numbers";
        internal static String FUNCTION_2_ARG_STIRLING1_NUMBER = "Stirling numbers of the first kind";
        internal static String FUNCTION_2_ARG_STIRLING2_NUMBER = "Stirling numbers of the second kind";
        internal static String FUNCTION_2_ARG_WORPITZKY_NUMBER = "Worpitzky number";
        internal static String FUNCTION_2_ARG_EULER_NUMBER = "Euler number";
        internal static String FUNCTION_2_ARG_KRONECKER_DELTA = "Kronecker delta";
        internal static String FUNCTION_2_ARG_EULER_POLYNOMIAL = "EulerPol";
        internal static String FUNCTION_2_ARG_HARMONIC_NUMBER = "Harmonic number";
        internal static String FUNCTION_2_ARG_ROUND = "Half-up rounding";
        internal static String FUNCTION_2_ARG_NDIG = "Number of digits representing the number in numeral system with given base";
        internal static String FUNCTION_2_ARG_DIGIT10 = "Digit at position 1 ... n (left -> right) or 0 ... -(n-1) (right -> left) - base 10 numeral system";
        internal static String FUNCTION_2_ARG_FACTVAL = "Prime decomposition - factor value at position between 1 ... nfact(n) - ascending order by factor value";
        internal static String FUNCTION_2_ARG_FACTEXP = "Prime decomposition - factor exponent / multiplicity at position between 1 ... nfact(n) - ascending order by factor value";
        internal static String FUNCTION_2_ARG_ROOT = "N-th order root of a number";
        internal static String FUNCTION_2_ARG_INC_GAMMA_LOWER = "Lower incomplete gamma";
        internal static String FUNCTION_2_ARG_INC_GAMMA_UPPER = "Upper incomplete Gamma";
        internal static String FUNCTION_2_ARG_REG_GAMMA_LOWER = "Lower regularized P gamma";
        internal static String FUNCTION_2_ARG_REG_GAMMA_UPPER = "Upper regularized Q Gamma";
        internal static String FUNCTION_2_ARG_PERMUTATIONS = "Number of k-permutations that can be drawn from n-elements set";
        internal static String FUNCTION_2_ARG_BETA = "The Beta, also called the Euler integral of the first kind";
        internal static String FUNCTION_2_ARG_LOG_BETA = "The Log Beta, also called the Log Euler integral of the first kind";
        // -------------------------------------------------
        internal static String FUNCTION_3_ARG_IF = "If";
        internal static String FUNCTION_3_ARG_CHI = "Characteristic function for x in (a,b)";
        internal static String FUNCTION_3_ARG_CHI_LR = "Characteristic function for x in [a,b]";
        internal static String FUNCTION_3_ARG_CHI_L = "Characteristic function for x in [a,b)";
        internal static String FUNCTION_3_ARG_CHI_R = "Characteristic function for x in (a,b]";
        internal static String FUNCTION_3_ARG_DIGIT = "Digit at position 1 ... n (left -> right) or 0 ... -(n-1) (right -> left) - numeral system with given base";
        internal static String FUNCTION_3_ARG_INC_BETA = "The incomplete Beta, also called the incomplete Euler integral of the first kind";
        internal static String FUNCTION_3_ARG_REG_BETA = "The regularized incomplete Beta (or regularized beta), also called the regularized incomplete Euler integral of the first kind";
        // -------------------------------------------------
        internal static String FUNCTION_VARIADIC_IFF = "If function";
        internal static String FUNCTION_VARIADIC_MIN = "Minimum";
        internal static String FUNCTION_VARIADIC_MAX = "Maximum";
        internal static String FUNCTION_VARIADIC_CONT_FRAC = "Continued fraction";
        internal static String FUNCTION_VARIADIC_CONT_POL = "Continued polynomial";
        internal static String FUNCTION_VARIADIC_GCD = "Greatest common divisor";
        internal static String FUNCTION_VARIADIC_LCM = "Least common multiple";
        internal static String FUNCTION_VARIADIC_SUM = "Summation";
        internal static String FUNCTION_VARIADIC_PROD = "Multiplication";
        internal static String FUNCTION_VARIADIC_AVG = "Mean / average value";
        internal static String FUNCTION_VARIADIC_VAR = "Bias-corrected sample variance";
        internal static String FUNCTION_VARIADIC_STD = "Bias-corrected sample standard deviation";
        internal static String FUNCTION_VARIADIC_RND_LIST = "Random number from a given list of numbers";
        internal static String FUNCTION_VARIADIC_COALESCE = "Returns the first non-NaN value";
        internal static String FUNCTION_VARIADIC_OR = "Logical disjunction (OR) - variadic";
        internal static String FUNCTION_VARIADIC_AND = "Logical conjunction (AND) - variadic";
        internal static String FUNCTION_VARIADIC_XOR = "Exclusive or (XOR) - variadic";
        internal static String FUNCTION_VARIADIC_ARGMIN = "Arguments / indices of the minima";
        internal static String FUNCTION_VARIADIC_ARGMAX = "Arguments / indices of the maxima";
        internal static String FUNCTION_VARIADIC_MEDIAN = "The sample median";
        internal static String FUNCTION_VARIADIC_MODE = "Mode - the value that appears most often";
        internal static String FUNCTION_VARIADIC_BASE = "Returns number in given numeral system base represented by list of digits";
        internal static String FUNCTION_VARIADIC_NDIST = "Number of distinct values";
        // -------------------------------------------------
        internal static String OPERATOR_PLUS = "Addition";
        internal static String OPERATOR_MINUS = "Subtraction";
        internal static String OPERATOR_MULTIPLY = "Multiplication";
        internal static String OPERATOR_DIVIDE = "Division";
        internal static String OPERATOR_POWER = "Exponentiation";
        internal static String OPERATOR_FACT = "Factorial";
        internal static String OPERATOR_MOD = "Modulo";
        internal static String OPERATOR_PERC = "Percentage";
        internal static String OPERATOR_TETRATION = "Tetration (hyper-4, power tower, exponential tower)";
        internal static String OPERATOR_SQUARE_ROOT = "Square root";
        internal static String OPERATOR_CUBE_ROOT = "Cube root";
        internal static String OPERATOR_FOURTH_ROOT = "Fourth root";
        // -------------------------------------------------
        internal static String PARSER_SYMBOL_LEFT_PARENTHESES = "Left parentheses";
        internal static String PARSER_SYMBOL_RIGHT_PARENTHESES = "Right parentheses";
        internal static String PARSER_SYMBOL_COMMA = "Comma (function parameters)";
        internal static String PARSER_SYMBOL_SEMI = "Semicolon (function parameters)";
        internal static String PARSER_SYMBOL_BLANK = "Blank (whitespace) character";
        internal static String PARSER_SYMBOL_NUMBER_INTEGER = "Integer";
        internal static String PARSER_SYMBOL_NUMBER_DECIMAL = "Decimal";
        internal static String PARSER_SYMBOL_NUMBER_LEADING_ZERO = "Leading zero";
        internal static String PARSER_SYMBOL_NUMBER_SCI_NOTATION = "Scientific notation";
        internal static String PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO = "No leading zero";
        internal static String PARSER_SYMBOL_NUMBER_FRACTIONS = "Fractions";
        internal static String PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS = "Other numeral systems";
        internal static String PARSER_SYMBOL_UNICODE_MATH = " - Unicode math symbol";
        // -------------------------------------------------
        internal static String DIMENSIONLESS_UNIT_PERC = "Percentage";
        internal static String DIMENSIONLESS_UNIT_PROMIL = "Promil, Per mille";
        internal static String DIMENSIONLESS_UNIT_YOTTA = "Septillion / Yotta";
        internal static String DIMENSIONLESS_UNIT_ZETTA = "Sextillion / Zetta";
        internal static String DIMENSIONLESS_UNIT_EXA = "Quintillion / Exa";
        internal static String DIMENSIONLESS_UNIT_PETA = "Quadrillion / Peta";
        internal static String DIMENSIONLESS_UNIT_TERA = "Trillion / Tera";
        internal static String DIMENSIONLESS_UNIT_GIGA = "Billion / Giga";
        internal static String DIMENSIONLESS_UNIT_MEGA = "Million / Mega";
        internal static String DIMENSIONLESS_UNIT_KILO = "Thousand / Kilo";
        internal static String DIMENSIONLESS_UNIT_HECTO = "Hundred / Hecto";
        internal static String DIMENSIONLESS_UNIT_DECA = "Ten / Deca";
        internal static String DIMENSIONLESS_UNIT_DECI = "Tenth / Deci";
        internal static String DIMENSIONLESS_UNIT_CENTI = "Hundredth / Centi";
        internal static String DIMENSIONLESS_UNIT_MILLI = "Thousandth / Milli";
        internal static String DIMENSIONLESS_UNIT_MICRO = "Millionth / Micro";
        internal static String DIMENSIONLESS_UNIT_NANO = "Billionth / Nano";
        internal static String DIMENSIONLESS_UNIT_PICO = "Trillionth / Pico";
        internal static String DIMENSIONLESS_UNIT_FEMTO = "Quadrillionth / Femto";
        internal static String DIMENSIONLESS_UNIT_ATTO = "Quintillionth / Atoo";
        internal static String DIMENSIONLESS_UNIT_ZEPTO = "Sextillionth / Zepto";
        internal static String DIMENSIONLESS_UNIT_YOCTO = "Septillionth / Yocto";
        // -------------------------------------------------
        internal static String UNIT_METRE = "Meter";
        internal static String UNIT_KILOMETRE = "Kilometer";
        internal static String UNIT_CENTIMETRE = "Centimeter";
        internal static String UNIT_MILLIMETRE = "Millimeter";
        internal static String UNIT_INCH = "Inch";
        internal static String UNIT_YARD = "Yard";
        internal static String UNIT_FEET = "Feet";
        internal static String UNIT_MILE = "Mile";
        internal static String UNIT_NAUTICAL_MILE = "Nautical mile";
        internal static String UNIT_METRE2 = "Square meter";
        internal static String UNIT_CENTIMETRE2 = "Square centimeter";
        internal static String UNIT_MILLIMETRE2 = "Square millimeter";
        internal static String UNIT_ARE = "Are";
        internal static String UNIT_HECTARE = "Hectare";
        internal static String UNIT_ACRE = "Acre";
        internal static String UNIT_KILOMETRE2 = "Square kilometer";
        internal static String UNIT_MILLIMETRE3 = "Cubic millimeter";
        internal static String UNIT_CENTIMETRE3 = "Cubic centimeter";
        internal static String UNIT_METRE3 = "Cubic meter";
        internal static String UNIT_KILOMETRE3 = "Cubic kilometer";
        internal static String UNIT_MILLILITRE = "Milliliter";
        internal static String UNIT_LITRE = "Liter";
        internal static String UNIT_GALLON = "Gallon";
        internal static String UNIT_PINT = "Pint";
        internal static String UNIT_SECOND = "Second";
        internal static String UNIT_MILLISECOND = "Millisecond";
        internal static String UNIT_MINUTE = "Minute";
        internal static String UNIT_HOUR = "Hour";
        internal static String UNIT_DAY = "Day";
        internal static String UNIT_WEEK = "Week";
        internal static String UNIT_JULIAN_YEAR = "Julian year = 365.25 days";
        internal static String UNIT_KILOGRAM = "Kilogram";
        internal static String UNIT_GRAM = "Gram";
        internal static String UNIT_MILLIGRAM = "Milligram";
        internal static String UNIT_DECAGRAM = "Decagram";
        internal static String UNIT_TONNE = "Tonne";
        internal static String UNIT_OUNCE = "Ounce";
        internal static String UNIT_POUND = "Pound";
        internal static String UNIT_BIT = "Bit";
        internal static String UNIT_KILOBIT = "Kilobit";
        internal static String UNIT_MEGABIT = "Megabit";
        internal static String UNIT_GIGABIT = "Gigabit";
        internal static String UNIT_TERABIT = "Terabit";
        internal static String UNIT_PETABIT = "Petabit";
        internal static String UNIT_EXABIT = "Exabit";
        internal static String UNIT_ZETTABIT = "Zettabit";
        internal static String UNIT_YOTTABIT = "Yottabit";
        internal static String UNIT_BYTE = "Byte";
        internal static String UNIT_KILOBYTE = "Kilobyte";
        internal static String UNIT_MEGABYTE = "Megabyte";
        internal static String UNIT_GIGABYTE = "Gigabyte";
        internal static String UNIT_TERABYTE = "Terabyte";
        internal static String UNIT_PETABYTE = "Petabyte";
        internal static String UNIT_EXABYTE = "Exabyte";
        internal static String UNIT_ZETTABYTE = "Zettabyte";
        internal static String UNIT_YOTTABYTE = "Yottabyte";
        internal static String UNIT_JOULE = "Joule";
        internal static String UNIT_ELECTRONO_VOLT = "Electronovolt";
        internal static String UNIT_KILO_ELECTRONO_VOLT = "Kiloelectronovolt";
        internal static String UNIT_MEGA_ELECTRONO_VOLT = "Megaelectronovolt";
        internal static String UNIT_GIGA_ELECTRONO_VOLT = "Gigaelectronovolt";
        internal static String UNIT_TERA_ELECTRONO_VOLT = "Teraelectronovolt";
        internal static String UNIT_METRE_PER_SECOND = "Meter per second";
        internal static String UNIT_KILOMETRE_PER_HOUR = "Kilometer per hour";
        internal static String UNIT_MILE_PER_HOUR = "Mile per hour";
        internal static String UNIT_KNOT = "Knot";
        internal static String UNIT_METRE_PER_SECOND2 = "Meter per square second";
        internal static String UNIT_KILOMETRE_PER_HOUR2 = "Kilometer per square hour";
        internal static String UNIT_MILE_PER_HOUR2 = "Mile per square hour";
        internal static String UNIT_RADIAN_ARC = "Radian";
        internal static String UNIT_DEGREE_ARC = "Degree of arc";
        internal static String UNIT_MINUTE_ARC = "Minute of arc";
        internal static String UNIT_SECOND_ARC = "Second of arc";
        // -------------------------------------------------
        internal static void setLanguageSpecificDescriptionsBinaryRelation() {
            BinaryRelation.TYPE_DESC = BINARY_RELATION;
            BinaryRelation.EQ_DESC = BINARY_RELATION_EQ + StringInvariant.SEPARATOR + BINARY_RELATION;
            BinaryRelation.NEQ_DESC = BINARY_RELATION_NEQ + StringInvariant.SEPARATOR + BINARY_RELATION;
            BinaryRelation.LT_DESC = BINARY_RELATION_LT + StringInvariant.SEPARATOR + BINARY_RELATION;
            BinaryRelation.GT_DESC = BINARY_RELATION_GT + StringInvariant.SEPARATOR + BINARY_RELATION;
            BinaryRelation.LEQ_DESC = BINARY_RELATION_LEQ + StringInvariant.SEPARATOR + BINARY_RELATION;
            BinaryRelation.GEQ_DESC = BINARY_RELATION_GEQ + StringInvariant.SEPARATOR + BINARY_RELATION;
        }
        internal static void setLanguageSpecificDescriptionsBitwiseOperator() {
            BitwiseOperator.TYPE_DESC = BITWISE_OPERATOR;
            BitwiseOperator.COMPL_DESC = BITWISE_OPERATOR_COMPL + StringInvariant.SEPARATOR + BITWISE_OPERATOR;
            BitwiseOperator.AND_DESC = BITWISE_OPERATOR_AND + StringInvariant.SPACE + StringInvariant.AND_SYMBOL + StringInvariant.SEPARATOR + BITWISE_OPERATOR;
            BitwiseOperator.XOR_DESC = BITWISE_OPERATOR_XOR + StringInvariant.SPACE + StringInvariant.XOR_SYMBOL + StringInvariant.SEPARATOR + BITWISE_OPERATOR;
            BitwiseOperator.OR_DESC = BITWISE_OPERATOR_OR + StringInvariant.SPACE + StringInvariant.OR_SYMBOL + StringInvariant.SEPARATOR + BITWISE_OPERATOR;
            BitwiseOperator.LEFT_SHIFT_DESC = BITWISE_OPERATOR_LEFT_SHIFT + StringInvariant.SEPARATOR + BITWISE_OPERATOR;
            BitwiseOperator.RIGHT_SHIFT_DESC = BITWISE_OPERATOR_RIGHT_SHIFT + StringInvariant.SEPARATOR + BITWISE_OPERATOR;

        }
        internal static void setLanguageSpecificDescriptionsBooleanOperator() {
            BooleanOperator.TYPE_DESC = BOOLEAN_OPERATOR;
            BooleanOperator.AND_DESC = BOOLEAN_OPERATOR_AND + StringInvariant.SPACE + StringInvariant.AND_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.OR_DESC = BOOLEAN_OPERATOR_OR + StringInvariant.SPACE + StringInvariant.OR_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.NEG_DESC = BOOLEAN_OPERATOR_NEG + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.NAND_DESC = BOOLEAN_OPERATOR_NAND + StringInvariant.SPACE + StringInvariant.NAND_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.NOR_DESC = BOOLEAN_OPERATOR_NOR + StringInvariant.SPACE + StringInvariant.NOR_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.XOR_DESC = BOOLEAN_OPERATOR_XOR + StringInvariant.SPACE + StringInvariant.XOR_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.IMP_DESC = BOOLEAN_OPERATOR_IMP + StringInvariant.SPACE + StringInvariant.IMP_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.CIMP_DESC = BOOLEAN_OPERATOR_CIMP + StringInvariant.SPACE + StringInvariant.CIMP_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.NIMP_DESC = BOOLEAN_OPERATOR_NIMP + StringInvariant.SPACE + StringInvariant.NIMP_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.CNIMP_DESC = BOOLEAN_OPERATOR_CNIMP + StringInvariant.SPACE + StringInvariant.CNIMP_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
            BooleanOperator.EQV_DESC = BOOLEAN_OPERATOR_EQV + StringInvariant.SPACE + StringInvariant.EQV_SYMBOL + StringInvariant.SEPARATOR + BOOLEAN_OPERATOR;
        }
        internal static void setLanguageSpecificDescriptionsCalculusOperator() {
            CalculusOperator.TYPE_DESC = CALCULUS_OPERATOR;
            CalculusOperator.SUM_DESC = CALCULUS_OPERATOR_SUM + StringInvariant.SEPARATOR + ITERATED_OPERATOR + StringInvariant.SPACE + StringInvariant.SUM_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.PROD_DESC = CALCULUS_OPERATOR_PROD + StringInvariant.SEPARATOR + ITERATED_OPERATOR + StringInvariant.SPACE + StringInvariant.PROD_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.INT_DESC = CALCULUS_OPERATOR_INT + StringInvariant.SPACE + StringInvariant.INT_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.DER_DESC = CALCULUS_OPERATOR_DER + StringInvariant.SPACE + StringInvariant.DER_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.DER_LEFT_DESC = CALCULUS_OPERATOR_DER_LEFT + StringInvariant.SPACE + StringInvariant.DER_LEFT_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.DER_RIGHT_DESC = CALCULUS_OPERATOR_DER_RIGHT + StringInvariant.SPACE + StringInvariant.DER_RIGHT_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.DERN_DESC = CALCULUS_OPERATOR_DERN + StringInvariant.SPACE + StringInvariant.DERN_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.FORW_DIFF_DESC = CALCULUS_OPERATOR_FORW_DIFF + StringInvariant.SPACE + StringInvariant.FORW_DIFF_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.BACKW_DIFF_DESC = CALCULUS_OPERATOR_BACKW_DIFF + StringInvariant.SPACE + StringInvariant.BACKW_DIFF_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.AVG_DESC = CALCULUS_OPERATOR_AVG + StringInvariant.SEPARATOR + ITERATED_OPERATOR + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.VAR_DESC = CALCULUS_OPERATOR_VAR + StringInvariant.SEPARATOR + ITERATED_OPERATOR + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.STD_DESC = CALCULUS_OPERATOR_STD + StringInvariant.SEPARATOR + ITERATED_OPERATOR + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.MIN_DESC = CALCULUS_OPERATOR_MIN + StringInvariant.SEPARATOR + ITERATED_OPERATOR + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.MAX_DESC = CALCULUS_OPERATOR_MAX + StringInvariant.SEPARATOR + ITERATED_OPERATOR + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
            CalculusOperator.SOLVE_DESC = CALCULUS_OPERATOR_SOLVE + StringInvariant.SPACE + StringInvariant.SOLVE_SYMBOL + StringInvariant.SEPARATOR + CALCULUS_OPERATOR;
        }
        internal static void setLanguageSpecificDescriptionsConstantValue() {
            ConstantValue.TYPE_DESC = CONSTANT_VALUE;
            ConstantValue.PI_DESC = CONSTANT_VALUE_PI + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PI_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.EULER_DESC = CONSTANT_VALUE_EULER + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.E_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.EULER_MASCHERONI_DESC = CONSTANT_VALUE_EULER_MASCHERONI + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.MASCHERONI_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.GOLDEN_RATIO_DESC = CONSTANT_VALUE_GOLDEN_RATIO + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GOLDEN_RATIO_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PLASTIC_DESC = CONSTANT_VALUE_PLASTIC + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLASTICS_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.EMBREE_TREFETHEN_DESC = CONSTANT_VALUE_EMBREE_TREFETHEN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EMBREE_TREFETHEN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.FEIGENBAUM_DELTA_DESC = CONSTANT_VALUE_FEIGENBAUM_DELTA + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.FEIGENBAUM_DELTA_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.FEIGENBAUM_ALPHA_DESC = CONSTANT_VALUE_FEIGENBAUM_ALPHA + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.FEIGENBAUM_ALPHA_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.TWIN_PRIME_DESC = CONSTANT_VALUE_TWIN_PRIME + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.TWIN_PRIME_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MEISSEL_MERTEENS_DESC = CONSTANT_VALUE_MEISSEL_MERTEENS + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.MEISSEL_MERTEENS_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.BRAUN_TWIN_PRIME_DESC = CONSTANT_VALUE_BRAUN_TWIN_PRIME + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BRAUN_TWIN_PRIME_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.BRAUN_PRIME_QUADR_DESC = CONSTANT_VALUE_BRAUN_PRIME_QUADR + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BRAUN_PRIME_QUADR_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.BRUIJN_NEWMAN_DESC = CONSTANT_VALUE_BRUIJN_NEWMAN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BRUIJN_NEWMAN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.CATALAN_DESC = CONSTANT_VALUE_CATALAN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.CATALAN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LANDAU_RAMANUJAN_DESC = CONSTANT_VALUE_LANDAU_RAMANUJAN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LANDAU_RAMANUJAN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.VISWANATH_DESC = CONSTANT_VALUE_VISWANATH + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.VISWANATH_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LEGENDRE_DESC = CONSTANT_VALUE_LEGENDRE + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LEGENDRE_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.RAMANUJAN_SOLDNER_DESC = CONSTANT_VALUE_RAMANUJAN_SOLDNER + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.RAMANUJAN_SOLDNER_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.ERDOS_BORWEIN_DESC = CONSTANT_VALUE_ERDOS_BORWEIN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.ERDOS_BORWEIN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.BERNSTEIN_DESC = CONSTANT_VALUE_BERNSTEIN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BERNSTEIN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.GAUSS_KUZMIN_WIRSING_DESC = CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GAUSS_KUZMIN_WIRSING_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC = CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.HAFNER_SARNAK_MCCURLEY_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.GOLOMB_DICKMAN_DESC = CONSTANT_VALUE_GOLOMB_DICKMAN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GOLOMB_DICKMAN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.CAHEN_DESC = CONSTANT_VALUE_CAHEN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.CAHEN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LAPLACE_LIMIT_DESC = CONSTANT_VALUE_LAPLACE_LIMIT + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.ALLADI_GRINSTEAD_DESC = CONSTANT_VALUE_ALLADI_GRINSTEAD + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LENGYEL_DESC = CONSTANT_VALUE_LENGYEL + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LENGYEL_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LEVY_DESC = CONSTANT_VALUE_LEVY + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.APERY_DESC = CONSTANT_VALUE_APERY + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.APERY_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MILLS_DESC = CONSTANT_VALUE_MILLS + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.MILLS_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.BACKHOUSE_DESC = CONSTANT_VALUE_BACKHOUSE + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.BACKHOUSE_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PORTER_DESC = CONSTANT_VALUE_PORTER + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PORTER_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LIEB_QUARE_ICE_DESC = CONSTANT_VALUE_LIEB_QUARE_ICE + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.NIVEN_DESC = CONSTANT_VALUE_NIVEN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.NIVEN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.SIERPINSKI_DESC = CONSTANT_VALUE_SIERPINSKI + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.SIERPINSKI_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.KHINCHIN_DESC = CONSTANT_VALUE_KHINCHIN + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KHINCHIN_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.FRANSEN_ROBINSON_DESC = CONSTANT_VALUE_FRANSEN_ROBINSON + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.FRANSEN_ROBINSON_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LANDAU_DESC = CONSTANT_VALUE_LANDAU + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LANDAU_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PARABOLIC_DESC = CONSTANT_VALUE_PARABOLIC + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PARABOLIC_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.OMEGA_DESC = CONSTANT_VALUE_OMEGA + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.OMEGA_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MRB_DESC = CONSTANT_VALUE_MRB + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.MRB_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LI2_DESC = CONSTANT_VALUE_LI2 + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LOGARITHMIC_INTEGRAL_2_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.GOMPERTZ_DESC = CONSTANT_VALUE_GOMPERTZ + StringInvariant.SEPARATOR + MATHEMATICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GOMPERTZ_SYMBOL + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LIGHT_SPEED_DESC = CONSTANT_VALUE_LIGHT_SPEED + StringInvariant.SEPARATOR + PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LIGHT_SPEED_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.GRAVITATIONAL_CONSTANT_DESC = CONSTANT_VALUE_GRAVITATIONAL_CONSTANT + StringInvariant.SEPARATOR + PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GRAVITATIONAL_CONSTANT_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.GRAVIT_ACC_EARTH_DESC = CONSTANT_VALUE_GRAVIT_ACC_EARTH + StringInvariant.SEPARATOR + PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.GRAVIT_ACC_EARTH_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_SQUARED_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PLANCK_CONSTANT_DESC = CONSTANT_VALUE_PLANCK_CONSTANT + StringInvariant.SEPARATOR + PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_CONSTANT_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PLANCK_CONSTANT_REDUCED_DESC = CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED + StringInvariant.SEPARATOR + PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_CONSTANT_REDUCED_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PLANCK_LENGTH_DESC = CONSTANT_VALUE_PLANCK_LENGTH + StringInvariant.SEPARATOR + PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_LENGTH_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PLANCK_MASS_DESC = CONSTANT_VALUE_PLANCK_MASS + StringInvariant.SEPARATOR + PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_MASS_SYMBOL + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PLANCK_TIME_DESC = CONSTANT_VALUE_PLANCK_TIME + StringInvariant.SEPARATOR + PHYSICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PLANCK_TIME_SYMBOL + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.LIGHT_YEAR_DESC = CONSTANT_VALUE_LIGHT_YEAR + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.LIGHT_YEAR_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.ASTRONOMICAL_UNIT_DESC = CONSTANT_VALUE_ASTRONOMICAL_UNIT + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.ASTRONOMICAL_UNIT_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.PARSEC_DESC = CONSTANT_VALUE_PARSEC + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.PARSEC_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.KILOPARSEC_DESC = CONSTANT_VALUE_KILOPARSEC + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOPARSEC_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC = CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EARTH_RADIUS_EQUATORIAL_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.EARTH_RADIUS_POLAR_DESC = CONSTANT_VALUE_EARTH_RADIUS_POLAR + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EARTH_RADIUS_POLAR_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.EARTH_RADIUS_MEAN_DESC = CONSTANT_VALUE_EARTH_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EARTH_RADIUS_MEAN_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.EARTH_MASS_DESC = CONSTANT_VALUE_EARTH_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.EARTH_MASS_SYMBOL + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MOON_RADIUS_MEAN_DESC = CONSTANT_VALUE_MOON_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MOON_MASS_DESC = CONSTANT_VALUE_MOON_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MONN_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_MONN_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.SOLAR_RADIUS_DESC = CONSTANT_VALUE_SOLAR_RADIUS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.SOLAR_RADIUS_SYMBOL + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.SOLAR_MASS_DESC = CONSTANT_VALUE_SOLAR_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.SOLAR_MASS_SYMBOL + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MERCURY_RADIUS_MEAN_DESC = CONSTANT_VALUE_MERCURY_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MERCURY_MASS_DESC = CONSTANT_VALUE_MERCURY_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.VENUS_RADIUS_MEAN_DESC = CONSTANT_VALUE_VENUS_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.VENUS_MASS_DESC = CONSTANT_VALUE_VENUS_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MARS_RADIUS_MEAN_DESC = CONSTANT_VALUE_MARS_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MARS_MASS_DESC = CONSTANT_VALUE_MARS_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.JUPITER_RADIUS_MEAN_DESC = CONSTANT_VALUE_JUPITER_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.JUPITER_MASS_DESC = CONSTANT_VALUE_JUPITER_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.SATURN_RADIUS_MEAN_DESC = CONSTANT_VALUE_SATURN_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.SATURN_MASS_DESC = CONSTANT_VALUE_SATURN_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.URANUS_RADIUS_MEAN_DESC = CONSTANT_VALUE_URANUS_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.URANUS_MASS_DESC = CONSTANT_VALUE_URANUS_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.NEPTUNE_RADIUS_MEAN_DESC = CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.NEPTUNE_MASS_DESC = CONSTANT_VALUE_NEPTUNE_MASS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC = CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS + StringInvariant.SEPARATOR + ASTRONOMICAL_CONSTANT + StringInvariant.SEPARATOR + SEMI_MAJOR_AXIS + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.TRUE_DESC = CONSTANT_VALUE_TRUE + StringInvariant.SPACE + StringInvariant.TRUE_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.FALSE_DESC = CONSTANT_VALUE_FALSE + StringInvariant.SPACE + StringInvariant.FALSE_DEFINITION + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.NPAR_DESC = CONSTANT_VALUE_NPAR + StringInvariant.SEPARATOR + CONSTANT_VALUE;
            ConstantValue.NAN_DESC = CONSTANT_VALUE_NAN + StringInvariant.SEPARATOR + CONSTANT_VALUE;
        }
        internal static void setLanguageSpecificDescriptionsFunction1Arg() {
            Function1Arg.TYPE_DESC = FUNCTION_1_ARG;
            Function1Arg.SIN_DESC = FUNCTION_1_ARG_SIN + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.COS_DESC = FUNCTION_1_ARG_COS + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.TAN_DESC = FUNCTION_1_ARG_TAN + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.CTAN_DESC = FUNCTION_1_ARG_CTAN + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.SEC_DESC = FUNCTION_1_ARG_SEC + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.COSEC_DESC = FUNCTION_1_ARG_COSEC + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ASIN_DESC = FUNCTION_1_ARG_ASIN + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ACOS_DESC = FUNCTION_1_ARG_ACOS + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ATAN_DESC = FUNCTION_1_ARG_ATAN + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ACTAN_DESC = FUNCTION_1_ARG_ACTAN + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.LN_DESC = FUNCTION_1_ARG_LN + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.LOG2_DESC = FUNCTION_1_ARG_LOG2 + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.LOG10_DESC = FUNCTION_1_ARG_LOG10 + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.RAD_DESC = FUNCTION_1_ARG_RAD + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.EXP_DESC = FUNCTION_1_ARG_EXP + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.SQRT_DESC = FUNCTION_1_ARG_SQRT + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.SINH_DESC = FUNCTION_1_ARG_SINH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.COSH_DESC = FUNCTION_1_ARG_COSH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.TANH_DESC = FUNCTION_1_ARG_TANH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.COTH_DESC = FUNCTION_1_ARG_COTH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.SECH_DESC = FUNCTION_1_ARG_SECH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.CSCH_DESC = FUNCTION_1_ARG_CSCH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.DEG_DESC = FUNCTION_1_ARG_DEG + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ABS_DESC = FUNCTION_1_ARG_ABS + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.SGN_DESC = FUNCTION_1_ARG_SGN + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.FLOOR_DESC = FUNCTION_1_ARG_FLOOR + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.CEIL_DESC = FUNCTION_1_ARG_CEIL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.NOT_DESC = FUNCTION_1_ARG_NOT + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ARSINH_DESC = FUNCTION_1_ARG_ARSINH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ARCOSH_DESC = FUNCTION_1_ARG_ARCOSH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ARTANH_DESC = FUNCTION_1_ARG_ARTANH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ARCOTH_DESC = FUNCTION_1_ARG_ARCOTH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ARSECH_DESC = FUNCTION_1_ARG_ARSECH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ARCSCH_DESC = FUNCTION_1_ARG_ARCSCH + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.SA_DESC = FUNCTION_1_ARG_SA + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.SINC_DESC = FUNCTION_1_ARG_SINC + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.BELL_NUMBER_DESC = FUNCTION_1_ARG_BELL_NUMBER + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.LUCAS_NUMBER_DESC = FUNCTION_1_ARG_LUCAS_NUMBER + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.FIBONACCI_NUMBER_DESC = FUNCTION_1_ARG_FIBONACCI_NUMBER + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.HARMONIC_NUMBER_DESC = FUNCTION_1_ARG_HARMONIC_NUMBER + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.IS_PRIME_DESC = FUNCTION_1_ARG_IS_PRIME + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.PRIME_COUNT_DESC = FUNCTION_1_ARG_PRIME_COUNT + StringInvariant.SPACE + StringInvariant.PRIME_COUNTING_N_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.EXP_INT_DESC = FUNCTION_1_ARG_EXP_INT + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.EXPONENTIAL_INTEGRAL_X_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.LOG_INT_DESC = FUNCTION_1_ARG_LOG_INT + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LOGARITHMIC_INTEGRAL_X_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.OFF_LOG_INT_DESC = FUNCTION_1_ARG_OFF_LOG_INT + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.OFFSET_LOGARITHMIC_INTEGRAL_X_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.GAUSS_ERF_DESC = FUNCTION_1_ARG_GAUSS_ERF + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.GAUSS_ERROR_X_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.GAUSS_ERFC_DESC = FUNCTION_1_ARG_GAUSS_ERFC + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.GAUSS_ERROR_COMPLEMENTARY_X_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.GAUSS_ERF_INV_DESC = FUNCTION_1_ARG_GAUSS_ERF_INV + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.INVERSE_GAUSS_ERROR_Y_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.GAUSS_ERFC_INV_DESC = FUNCTION_1_ARG_GAUSS_ERFC_INV + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.INVERSE_GAUSS_ERROR_COMPLEMENTARY_Y_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ULP_DESC = FUNCTION_1_ARG_ULP + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ISNAN_DESC = FUNCTION_1_ARG_ISNAN + StringInvariant.SPACE + StringInvariant.TRUE_AND_FALSE_DEFINITION + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.NDIG10_DESC = FUNCTION_1_ARG_NDIG10 + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.NFACT_DESC = FUNCTION_1_ARG_NFACT + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ARCSEC_DESC = FUNCTION_1_ARG_ARCSEC + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.ARCCSC_DESC = FUNCTION_1_ARG_ARCCSC + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.GAMMA_DESC = FUNCTION_1_ARG_GAMMA + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.GAMMA_S_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.LAMBERT_W0_DESC = FUNCTION_1_ARG_LAMBERT_W0 + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LAMBERT_W0_X_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.LAMBERT_W1_DESC = FUNCTION_1_ARG_LAMBERT_W1 + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LAMBERT_W_1_X_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.SGN_GAMMA_DESC = FUNCTION_1_ARG_SGN_GAMMA + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.GAMMA_S_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.LOG_GAMMA_DESC = FUNCTION_1_ARG_LOG_GAMMA + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LOG_GAMMA_S_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.DI_GAMMA_DESC = FUNCTION_1_ARG_DI_GAMMA + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.DIGAMMA_X_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.PARAM_DESC = FUNCTION_1_ARG_PARAM + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.RND_STUDENT_T_DESC = RANDOM_VARIABLE + StringInvariant.SEPARATOR + STUDENTS_T_DISTRIBUTION + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
            Function1Arg.RND_CHI2_DESC = RANDOM_VARIABLE + StringInvariant.SEPARATOR + CHI_SQUARED_DISTRIBUTION + StringInvariant.SEPARATOR + FUNCTION_1_ARG;
        }
        internal static void setLanguageSpecificDescriptionsFunction2Arg() {
            Function2Arg.TYPE_DESC = FUNCTION_2_ARG;
            Function2Arg.LOG_DESC = FUNCTION_2_ARG_LOG + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.MOD_DESC = FUNCTION_2_ARG_MOD + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.BINOM_COEFF_DESC = FUNCTION_2_ARG_BINOM_COEFF + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.BERNOULLI_NUMBER_DESC = FUNCTION_2_ARG_BERNOULLI_NUMBER + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.STIRLING1_NUMBER_DESC = FUNCTION_2_ARG_STIRLING1_NUMBER + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.STIRLING2_NUMBER_DESC = FUNCTION_2_ARG_STIRLING2_NUMBER + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.WORPITZKY_NUMBER_DESC = FUNCTION_2_ARG_WORPITZKY_NUMBER + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.EULER_NUMBER_DESC = FUNCTION_2_ARG_EULER_NUMBER + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.KRONECKER_DELTA_DESC = FUNCTION_2_ARG_KRONECKER_DELTA + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.EULER_POLYNOMIAL_DESC = FUNCTION_2_ARG_EULER_POLYNOMIAL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.HARMONIC_NUMBER_DESC = FUNCTION_2_ARG_HARMONIC_NUMBER + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.RND_UNIFORM_CONT_DESC = RANDOM_VARIABLE + StringInvariant.SEPARATOR + UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UAB_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.RND_UNIFORM_DISCR_DESC = RANDOM_VARIABLE + StringInvariant.SEPARATOR + UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UDAB_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.ROUND_DESC = FUNCTION_2_ARG_ROUND + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.RND_NORMAL_DESC = RANDOM_VARIABLE + StringInvariant.SEPARATOR + NORMAL_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.NORMAL_NMS_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.NDIG_DESC = FUNCTION_2_ARG_NDIG + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.DIGIT10_DESC = FUNCTION_2_ARG_DIGIT10 + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.FACTVAL_DESC = FUNCTION_2_ARG_FACTVAL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.FACTEXP_DESC = FUNCTION_2_ARG_FACTEXP + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.ROOT_DESC = FUNCTION_2_ARG_ROOT + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.INC_GAMMA_LOWER_DESC = FUNCTION_2_ARG_INC_GAMMA_LOWER + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LOWER_GAMMA_SX_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.INC_GAMMA_UPPER_DESC = FUNCTION_2_ARG_INC_GAMMA_UPPER + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.UPPER_GAMMA_SX_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.REG_GAMMA_LOWER_DESC = FUNCTION_2_ARG_REG_GAMMA_LOWER + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.REGULARIZED_GAMMA_P_SX_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.REG_GAMMA_UPPER_DESC = FUNCTION_2_ARG_REG_GAMMA_UPPER + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.REGULARIZED_GAMMA_Q_SX_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.PERMUTATIONS_DESC = FUNCTION_2_ARG_PERMUTATIONS + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.BETA_DESC = FUNCTION_2_ARG_BETA + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.BETA_XY_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.LOG_BETA_DESC = FUNCTION_2_ARG_LOG_BETA + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.LOG_BETA_XY_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.PDF_STUDENT_T_DESC = STUDENTS_T_DISTRIBUTION + StringInvariant.SEPARATOR + PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.CDF_STUDENT_T_DESC = STUDENTS_T_DISTRIBUTION + StringInvariant.SEPARATOR + CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.QNT_STUDENT_T_DESC = STUDENTS_T_DISTRIBUTION + StringInvariant.SEPARATOR + QUANTILE_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.PDF_CHI2_DESC = CHI_SQUARED_DISTRIBUTION + StringInvariant.SEPARATOR + PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.CDF_CHI2_DESC = CHI_SQUARED_DISTRIBUTION + StringInvariant.SEPARATOR + CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.QNT_CHI2_DESC = CHI_SQUARED_DISTRIBUTION + StringInvariant.SEPARATOR + QUANTILE_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
            Function2Arg.RND_F_SNEDECOR_DESC = RANDOM_VARIABLE + StringInvariant.SEPARATOR + SNEDECORS_F_DISTRIBUTION + StringInvariant.SEPARATOR + FUNCTION_2_ARG;
        }
        internal static void setLanguageSpecificDescriptionsFunction3Arg() {
            Function3Arg.TYPE_DESC = FUNCTION_3_ARG;
            Function3Arg.IF_DESC = FUNCTION_3_ARG_IF + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.CHI_DESC = FUNCTION_3_ARG_CHI + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.CHI_LR_DESC = FUNCTION_3_ARG_CHI_LR + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.CHI_L_DESC = FUNCTION_3_ARG_CHI_L + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.CHI_R_DESC = FUNCTION_3_ARG_CHI_R + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.PDF_UNIFORM_CONT_DESC = UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SEPARATOR + PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UAB_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.CDF_UNIFORM_CONT_DESC = UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SEPARATOR + CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UAB_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.QNT_UNIFORM_CONT_DESC = UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SEPARATOR + QUANTILE_FUNCTION + StringInvariant.SPACE + StringInvariant.UNIFORM_UAB_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.PDF_NORMAL_DESC = NORMAL_DISTRIBUTION + StringInvariant.SEPARATOR + PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SPACE + StringInvariant.NORMAL_NMS_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.CDF_NORMAL_DESC = NORMAL_DISTRIBUTION + StringInvariant.SEPARATOR + CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SPACE + StringInvariant.NORMAL_NMS_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.QNT_NORMAL_DESC = NORMAL_DISTRIBUTION + StringInvariant.SEPARATOR + QUANTILE_FUNCTION + StringInvariant.SPACE + StringInvariant.NORMAL_NMS_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.DIGIT_DESC = FUNCTION_3_ARG_DIGIT + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.INC_BETA_DESC = FUNCTION_3_ARG_INC_BETA + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.INCOMPLETE_BETA_XAB_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.REG_BETA_DESC = FUNCTION_3_ARG_REG_BETA + StringInvariant.SEPARATOR + SPECIAL_FUNCTION + StringInvariant.SPACE + StringInvariant.REGULARIZED_INCOMPLETE_BETA_XAB_SYMBOL + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.PDF_F_SNEDECOR_DESC = SNEDECORS_F_DISTRIBUTION + StringInvariant.SEPARATOR + PROBABILITY_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.CDF_F_SNEDECOR_DESC = SNEDECORS_F_DISTRIBUTION + StringInvariant.SEPARATOR + CUMULATIVE_DISTRIBUTION_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
            Function3Arg.QNT_F_SNEDECOR_DESC = SNEDECORS_F_DISTRIBUTION + StringInvariant.SEPARATOR + QUANTILE_FUNCTION + StringInvariant.SEPARATOR + FUNCTION_3_ARG;
        }
        internal static void setLanguageSpecificDescriptionsFunctionVariadic() {
            FunctionVariadic.TYPE_DESC = FUNCTION_VARIADIC;
            FunctionVariadic.IFF_DESC = FUNCTION_VARIADIC_IFF + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.MIN_DESC = FUNCTION_VARIADIC_MIN + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.MAX_DESC = FUNCTION_VARIADIC_MAX + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.CONT_FRAC_DESC = FUNCTION_VARIADIC_CONT_FRAC + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.CONT_POL_DESC = FUNCTION_VARIADIC_CONT_POL + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.GCD_DESC = FUNCTION_VARIADIC_GCD + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.LCM_DESC = FUNCTION_VARIADIC_LCM + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.SUM_DESC = FUNCTION_VARIADIC_SUM + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.PROD_DESC = FUNCTION_VARIADIC_PROD + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.AVG_DESC = FUNCTION_VARIADIC_AVG + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.VAR_DESC = FUNCTION_VARIADIC_VAR + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.STD_DESC = FUNCTION_VARIADIC_STD + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.RND_LIST_DESC = FUNCTION_VARIADIC_RND_LIST + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.COALESCE_DESC = FUNCTION_VARIADIC_COALESCE + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.OR_DESC = FUNCTION_VARIADIC_OR + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.AND_DESC = FUNCTION_VARIADIC_AND + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.XOR_DESC = FUNCTION_VARIADIC_XOR + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.ARGMIN_DESC = FUNCTION_VARIADIC_ARGMIN + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.ARGMAX_DESC = FUNCTION_VARIADIC_ARGMAX + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.MEDIAN_DESC = FUNCTION_VARIADIC_MEDIAN + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.MODE_DESC = FUNCTION_VARIADIC_MODE + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.BASE_DESC = FUNCTION_VARIADIC_BASE + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
            FunctionVariadic.NDIST_DESC = FUNCTION_VARIADIC_NDIST + StringInvariant.SEPARATOR + FUNCTION_VARIADIC;
        }
        internal static void setLanguageSpecificDescriptionsOperator() {
            Operator.TYPE_DESC = OPERATOR;
            Operator.PLUS_DESC = OPERATOR_PLUS + StringInvariant.SEPARATOR + OPERATOR;
            Operator.MINUS_DESC = OPERATOR_MINUS + StringInvariant.SEPARATOR + OPERATOR;
            Operator.MULTIPLY_DESC = OPERATOR_MULTIPLY + StringInvariant.SEPARATOR + OPERATOR;
            Operator.DIVIDE_DESC = OPERATOR_DIVIDE + StringInvariant.SEPARATOR + OPERATOR;
            Operator.POWER_DESC = OPERATOR_POWER + StringInvariant.SEPARATOR + OPERATOR;
            Operator.FACT_DESC = OPERATOR_FACT + StringInvariant.SEPARATOR + OPERATOR;
            Operator.MOD_DESC = OPERATOR_MOD + StringInvariant.SEPARATOR + OPERATOR;
            Operator.PERC_DESC = OPERATOR_PERC + StringInvariant.SEPARATOR + OPERATOR;
            Operator.TETRATION_DESC = OPERATOR_TETRATION + StringInvariant.SEPARATOR + OPERATOR;
            Operator.SQUARE_ROOT_DESC = OPERATOR_SQUARE_ROOT + StringInvariant.SEPARATOR + OPERATOR;
            Operator.CUBE_ROOT_DESC = OPERATOR_CUBE_ROOT + StringInvariant.SEPARATOR + OPERATOR;
            Operator.FOURTH_ROOT_DESC = OPERATOR_FOURTH_ROOT + StringInvariant.SEPARATOR + OPERATOR;
        }
        internal static void setLanguageSpecificDescriptionsParserSymbol() {
            ParserSymbol.TYPE_DESC = PARSER_SYMBOL;
            ParserSymbol.NUMBER_LITERAL_STR = NUMBER_LITERAL;
            ParserSymbol.LEFT_PARENTHESES_DESC = PARSER_SYMBOL_LEFT_PARENTHESES + StringInvariant.SEPARATOR + PARSER_SYMBOL;
            ParserSymbol.RIGHT_PARENTHESES_DESC = PARSER_SYMBOL_RIGHT_PARENTHESES + StringInvariant.SEPARATOR + PARSER_SYMBOL;
            ParserSymbol.COMMA_DESC = PARSER_SYMBOL_COMMA + StringInvariant.SEPARATOR + PARSER_SYMBOL;
            ParserSymbol.SEMI_DESC = PARSER_SYMBOL_SEMI + StringInvariant.SEPARATOR + PARSER_SYMBOL;
            ParserSymbol.BLANK_DESC = PARSER_SYMBOL_BLANK + StringInvariant.SEPARATOR + PARSER_SYMBOL;
            ParserSymbol.NUMBER_LITERAL_DESC = PARSER_SYMBOL_NUMBER_INTEGER
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(SINCE + StringInvariant.SPACE + mXparser.NAMEv10)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_INTEGER_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + PARSER_SYMBOL_NUMBER_DECIMAL
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(SINCE + StringInvariant.SPACE + mXparser.NAMEv10)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_DECIMAL_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + PARSER_SYMBOL_NUMBER_LEADING_ZERO
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(SINCE + StringInvariant.SPACE + mXparser.NAMEv41)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_LEADING_ZERO_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + PARSER_SYMBOL_NUMBER_SCI_NOTATION
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(SINCE + StringInvariant.SPACE + mXparser.NAMEv42)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_SCI_NOTATION_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(SINCE + StringInvariant.SPACE + mXparser.NAMEv42)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + PARSER_SYMBOL_NUMBER_FRACTIONS
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(SINCE + StringInvariant.SPACE + mXparser.NAMEv42)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_FRACTIONS_EXAMPLE
                    + StringInvariant.SEMICOLON_SPACE
                    + PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS
                    + StringInvariant.SPACE
                    + StringUtils.surroundBrackets(SINCE + StringInvariant.SPACE + mXparser.NAMEv41)
                    + StringInvariant.COLON_SPACE
                    + StringInvariant.PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS_EXAMPLE
                    + StringInvariant.SEMICOLON
                    ;
            ParserSymbol.UNICODE_MATH_DESC = PARSER_SYMBOL_UNICODE_MATH;
        }
        internal static void setLanguageSpecificDescriptionsRandomVariable() {
            RandomVariable.TYPE_DESC = RANDOM_VARIABLE;
            RandomVariable.UNIFORM_DESC = UNIFORM_CONTINUOUS_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.UNIFORM_U01_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT_DESC = RANDOM_INTEGER + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT1_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT1_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT2_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT2_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT3_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT3_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT4_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT4_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT5_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT5_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT6_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT6_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT7_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT7_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT8_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT8_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.INT9_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_INTEGER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_INT9_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_DESC = RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_1_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_1_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_2_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_2_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_3_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_3_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_4_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_4_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_5_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_5_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_6_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_6_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_7_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_7_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_8_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_8_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT0_9_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER_INCLUDING_0 + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT0_9_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_DESC = RANDOM_NATURAL_NUMBER + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_1_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_1_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_2_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_2_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_3_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_3_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_4_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_4_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_5_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_5_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_6_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_6_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_7_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_7_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_8_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_8_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NAT1_9_DESC = UNIFORM_DISCRETE_DISTRIBUTION + StringInvariant.SEPARATOR + RANDOM_NATURAL_NUMBER + StringInvariant.SPACE + StringInvariant.RANDOM_VARIABLE_NAT1_9_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
            RandomVariable.NOR_DESC = NORMAL_DISTRIBUTION + StringInvariant.SPACE + StringInvariant.NORMAL_N01_SYMBOL + StringInvariant.SEPARATOR + RANDOM_VARIABLE;
        }
        internal static void setLanguageSpecificDescriptionsUnit() {
            Unit.TYPE_DESC = UNIT;
            Unit.PERC_DESC = DIMENSIONLESS_UNIT_PERC + StringInvariant.SEPARATOR + RATIO_FRACTION + StringInvariant.SPACE + StringInvariant.UNIT_PERC_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.PROMIL_DESC = DIMENSIONLESS_UNIT_PROMIL + StringInvariant.SEPARATOR + RATIO_FRACTION + StringInvariant.SPACE + StringInvariant.UNIT_PROMIL_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.YOTTA_DESC = DIMENSIONLESS_UNIT_YOTTA + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_YOTTA_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.ZETTA_DESC = DIMENSIONLESS_UNIT_ZETTA + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_ZETTA_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.EXA_DESC = DIMENSIONLESS_UNIT_EXA + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_EXA_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.PETA_DESC = DIMENSIONLESS_UNIT_PETA + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_PETA_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.TERA_DESC = DIMENSIONLESS_UNIT_TERA + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_TERA_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.GIGA_DESC = DIMENSIONLESS_UNIT_GIGA + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_GIGA_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.MEGA_DESC = DIMENSIONLESS_UNIT_MEGA + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_MEGA_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.KILO_DESC = DIMENSIONLESS_UNIT_KILO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_KILO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.HECTO_DESC = DIMENSIONLESS_UNIT_HECTO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_HECTO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.DECA_DESC = DIMENSIONLESS_UNIT_DECA + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_DECA_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.DECI_DESC = DIMENSIONLESS_UNIT_DECI + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_DECI_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.CENTI_DESC = DIMENSIONLESS_UNIT_CENTI + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_CENTI_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.MILLI_DESC = DIMENSIONLESS_UNIT_MILLI + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_MILLI_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.MICRO_DESC = DIMENSIONLESS_UNIT_MICRO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_MICRO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.NANO_DESC = DIMENSIONLESS_UNIT_NANO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_NANO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.PICO_DESC = DIMENSIONLESS_UNIT_PICO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_PICO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.FEMTO_DESC = DIMENSIONLESS_UNIT_FEMTO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_FEMTO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.ATTO_DESC = DIMENSIONLESS_UNIT_ATTO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_ATTO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.ZEPTO_DESC = DIMENSIONLESS_UNIT_ZEPTO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_ZEPTO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.YOCTO_DESC = DIMENSIONLESS_UNIT_YOCTO + StringInvariant.SEPARATOR + METRIC_PREFIX + StringInvariant.SPACE + StringInvariant.UNIT_YOCTO_SYMBOL + StringInvariant.SEPARATOR + DIMENSIONLESS_UNIT;
            Unit.METRE_DESC = UNIT_METRE + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILOMETRE_DESC = UNIT_KILOMETRE + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.CENTIMETRE_DESC = UNIT_CENTIMETRE + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILLIMETRE_DESC = UNIT_MILLIMETRE + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.INCH_DESC = UNIT_INCH + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.YARD_DESC = UNIT_YARD + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.FEET_DESC = UNIT_FEET + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILE_DESC = UNIT_MILE + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.NAUTICAL_MILE_DESC = UNIT_NAUTICAL_MILE + StringInvariant.SEPARATOR + UNIT_OF_LENGTH + StringInvariant.SPACE + StringInvariant.METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.METRE2_DESC = UNIT_METRE2 + StringInvariant.SEPARATOR + UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.CENTIMETRE2_DESC = UNIT_CENTIMETRE2 + StringInvariant.SEPARATOR + UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILLIMETRE2_DESC = UNIT_MILLIMETRE2 + StringInvariant.SEPARATOR + UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.ARE_DESC = UNIT_ARE + StringInvariant.SEPARATOR + UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.HECTARE_DESC = UNIT_HECTARE + StringInvariant.SEPARATOR + UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.ACRE_DESC = UNIT_ACRE + StringInvariant.SEPARATOR + UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILOMETRE2_DESC = UNIT_KILOMETRE2 + StringInvariant.SEPARATOR + UNIT_OF_AREA + StringInvariant.SPACE + StringInvariant.SQUARE_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILLIMETRE3_DESC = UNIT_MILLIMETRE3 + StringInvariant.SEPARATOR + UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.CENTIMETRE3_DESC = UNIT_CENTIMETRE3 + StringInvariant.SEPARATOR + UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.METRE3_DESC = UNIT_METRE3 + StringInvariant.SEPARATOR + UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILOMETRE3_DESC = UNIT_KILOMETRE3 + StringInvariant.SEPARATOR + UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILLILITRE_DESC = UNIT_MILLILITRE + StringInvariant.SEPARATOR + UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.LITRE_DESC = UNIT_LITRE + StringInvariant.SEPARATOR + UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.GALLON_DESC = UNIT_GALLON + StringInvariant.SEPARATOR + UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.PINT_DESC = UNIT_PINT + StringInvariant.SEPARATOR + UNIT_OF_VOLUME + StringInvariant.SPACE + StringInvariant.CUBIC_METER_UNIT + StringInvariant.SPACE + StringInvariant.METER_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.SECOND_DESC = UNIT_SECOND + StringInvariant.SEPARATOR + UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILLISECOND_DESC = UNIT_MILLISECOND + StringInvariant.SEPARATOR + UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MINUTE_DESC = UNIT_MINUTE + StringInvariant.SEPARATOR + UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.HOUR_DESC = UNIT_HOUR + StringInvariant.SEPARATOR + UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.DAY_DESC = UNIT_DAY + StringInvariant.SEPARATOR + UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.WEEK_DESC = UNIT_WEEK + StringInvariant.SEPARATOR + UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.JULIAN_YEAR_DESC = UNIT_JULIAN_YEAR + StringInvariant.SEPARATOR + UNIT_OF_TIME + StringInvariant.SPACE + StringInvariant.SECOND_UNIT + StringInvariant.SPACE + StringInvariant.SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILOGRAM_DESC = UNIT_KILOGRAM + StringInvariant.SEPARATOR + UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.GRAM_DESC = UNIT_GRAM + StringInvariant.SEPARATOR + UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILLIGRAM_DESC = UNIT_MILLIGRAM + StringInvariant.SEPARATOR + UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.DECAGRAM_DESC = UNIT_DECAGRAM + StringInvariant.SEPARATOR + UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.TONNE_DESC = UNIT_TONNE + StringInvariant.SEPARATOR + UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.OUNCE_DESC = UNIT_OUNCE + StringInvariant.SEPARATOR + UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.POUND_DESC = UNIT_POUND + StringInvariant.SEPARATOR + UNIT_OF_MASS + StringInvariant.SPACE + StringInvariant.KILOGRAM_UNIT + StringInvariant.SPACE + StringInvariant.KILOGRAM_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.BIT_DESC = UNIT_BIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILOBIT_DESC = UNIT_KILOBIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MEGABIT_DESC = UNIT_MEGABIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.GIGABIT_DESC = UNIT_GIGABIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.TERABIT_DESC = UNIT_TERABIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.PETABIT_DESC = UNIT_PETABIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.EXABIT_DESC = UNIT_EXABIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.ZETTABIT_DESC = UNIT_ZETTABIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.YOTTABIT_DESC = UNIT_YOTTABIT + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.BYTE_DESC = UNIT_BYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILOBYTE_DESC = UNIT_KILOBYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MEGABYTE_DESC = UNIT_MEGABYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.GIGABYTE_DESC = UNIT_GIGABYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.TERABYTE_DESC = UNIT_TERABYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.PETABYTE_DESC = UNIT_PETABYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.EXABYTE_DESC = UNIT_EXABYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.ZETTABYTE_DESC = UNIT_ZETTABYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.YOTTABYTE_DESC = UNIT_YOTTABYTE + StringInvariant.SEPARATOR + UNIT_OF_INFORMATION + StringInvariant.SPACE + StringInvariant.BIT_UNIT + StringInvariant.SPACE + StringInvariant.BIT_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.JOULE_DESC = UNIT_JOULE + StringInvariant.SEPARATOR + UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.ELECTRONO_VOLT_DESC = UNIT_ELECTRONO_VOLT + StringInvariant.SEPARATOR + UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILO_ELECTRONO_VOLT_DESC = UNIT_KILO_ELECTRONO_VOLT + StringInvariant.SEPARATOR + UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MEGA_ELECTRONO_VOLT_DESC = UNIT_MEGA_ELECTRONO_VOLT + StringInvariant.SEPARATOR + UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.GIGA_ELECTRONO_VOLT_DESC = UNIT_GIGA_ELECTRONO_VOLT + StringInvariant.SEPARATOR + UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.TERA_ELECTRONO_VOLT_DESC = UNIT_TERA_ELECTRONO_VOLT + StringInvariant.SEPARATOR + UNIT_OF_ENERGY + StringInvariant.SPACE + StringInvariant.JOULE_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_KILOGRAM_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.METRE_PER_SECOND_DESC = UNIT_METRE_PER_SECOND + StringInvariant.SEPARATOR + UNIT_OF_SPEED + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILOMETRE_PER_HOUR_DESC = UNIT_KILOMETRE_PER_HOUR + StringInvariant.SEPARATOR + UNIT_OF_SPEED + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILE_PER_HOUR_DESC = UNIT_MILE_PER_HOUR + StringInvariant.SEPARATOR + UNIT_OF_SPEED + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KNOT_DESC = UNIT_KNOT + StringInvariant.SEPARATOR + UNIT_OF_SPEED + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.METRE_PER_SECOND2_DESC = UNIT_METRE_PER_SECOND2 + StringInvariant.SEPARATOR + UNIT_OF_ACCELERATION + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_SQUARED_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.KILOMETRE_PER_HOUR2_DESC = UNIT_KILOMETRE_PER_HOUR2 + StringInvariant.SEPARATOR + UNIT_OF_ACCELERATION + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_SQUARED_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MILE_PER_HOUR2_DESC = UNIT_MILE_PER_HOUR2 + StringInvariant.SEPARATOR + UNIT_OF_ACCELERATION + StringInvariant.SPACE + StringInvariant.METER_PER_SECOND_SQUARED_UNIT + StringInvariant.SPACE + StringInvariant.METER_AND_SECOND_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.RADIAN_ARC_DESC = UNIT_RADIAN_ARC + StringInvariant.SEPARATOR + UNIT_OF_ANGLE + StringInvariant.SPACE + StringInvariant.RADIAN_UNIT + StringInvariant.SPACE + StringInvariant.RADIAN_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.DEGREE_ARC_DESC = UNIT_DEGREE_ARC + StringInvariant.SEPARATOR + UNIT_OF_ANGLE + StringInvariant.SPACE + StringInvariant.RADIAN_UNIT + StringInvariant.SPACE + StringInvariant.RADIAN_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.MINUTE_ARC_DESC = UNIT_MINUTE_ARC + StringInvariant.SEPARATOR + UNIT_OF_ANGLE + StringInvariant.SPACE + StringInvariant.RADIAN_UNIT + StringInvariant.SPACE + StringInvariant.RADIAN_DEFINITION + StringInvariant.SEPARATOR + UNIT;
            Unit.SECOND_ARC_DESC = UNIT_SECOND_ARC + StringInvariant.SEPARATOR + UNIT_OF_ANGLE + StringInvariant.SPACE + StringInvariant.RADIAN_UNIT + StringInvariant.SPACE + StringInvariant.RADIAN_DEFINITION + StringInvariant.SEPARATOR + UNIT;
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
            return true;
        }

        internal static bool LANGUAGE_SPECIFIC_DESCRIPTIONS_SET = setLanguageSpecificDescriptions();

        // -------------------------------------------------
        internal static void printLanguageSpecificDescriptions() {
            mXparser.consolePrintln("BinaryRelation.EQ_DESC = " + BinaryRelation.EQ_DESC);
            mXparser.consolePrintln("BinaryRelation.NEQ_DESC = " + BinaryRelation.NEQ_DESC);
            mXparser.consolePrintln("BinaryRelation.LT_DESC = " + BinaryRelation.LT_DESC);
            mXparser.consolePrintln("BinaryRelation.GT_DESC = " + BinaryRelation.GT_DESC);
            mXparser.consolePrintln("BinaryRelation.LEQ_DESC = " + BinaryRelation.LEQ_DESC);
            mXparser.consolePrintln("BinaryRelation.GEQ_DESC = " + BinaryRelation.GEQ_DESC);
            mXparser.consolePrintln("BitwiseOperator.COMPL_DESC = " + BitwiseOperator.COMPL_DESC);
            mXparser.consolePrintln("BitwiseOperator.AND_DESC = " + BitwiseOperator.AND_DESC);
            mXparser.consolePrintln("BitwiseOperator.XOR_DESC = " + BitwiseOperator.XOR_DESC);
            mXparser.consolePrintln("BitwiseOperator.OR_DESC = " + BitwiseOperator.OR_DESC);
            mXparser.consolePrintln("BitwiseOperator.LEFT_SHIFT_DESC = " + BitwiseOperator.LEFT_SHIFT_DESC);
            mXparser.consolePrintln("BitwiseOperator.RIGHT_SHIFT_DESC = " + BitwiseOperator.RIGHT_SHIFT_DESC);
            mXparser.consolePrintln("BooleanOperator.AND_DESC = " + BooleanOperator.AND_DESC);
            mXparser.consolePrintln("BooleanOperator.OR_DESC = " + BooleanOperator.OR_DESC);
            mXparser.consolePrintln("BooleanOperator.NEG_DESC = " + BooleanOperator.NEG_DESC);
            mXparser.consolePrintln("BooleanOperator.NAND_DESC = " + BooleanOperator.NAND_DESC);
            mXparser.consolePrintln("BooleanOperator.NOR_DESC = " + BooleanOperator.NOR_DESC);
            mXparser.consolePrintln("BooleanOperator.XOR_DESC = " + BooleanOperator.XOR_DESC);
            mXparser.consolePrintln("BooleanOperator.IMP_DESC = " + BooleanOperator.IMP_DESC);
            mXparser.consolePrintln("BooleanOperator.CIMP_DESC = " + BooleanOperator.CIMP_DESC);
            mXparser.consolePrintln("BooleanOperator.NIMP_DESC = " + BooleanOperator.NIMP_DESC);
            mXparser.consolePrintln("BooleanOperator.CNIMP_DESC = " + BooleanOperator.CNIMP_DESC);
            mXparser.consolePrintln("BooleanOperator.EQV_DESC = " + BooleanOperator.EQV_DESC);
            mXparser.consolePrintln("CalculusOperator.SUM_DESC = " + CalculusOperator.SUM_DESC);
            mXparser.consolePrintln("CalculusOperator.PROD_DESC = " + CalculusOperator.PROD_DESC);
            mXparser.consolePrintln("CalculusOperator.INT_DESC = " + CalculusOperator.INT_DESC);
            mXparser.consolePrintln("CalculusOperator.DER_DESC = " + CalculusOperator.DER_DESC);
            mXparser.consolePrintln("CalculusOperator.DER_LEFT_DESC = " + CalculusOperator.DER_LEFT_DESC);
            mXparser.consolePrintln("CalculusOperator.DER_RIGHT_DESC = " + CalculusOperator.DER_RIGHT_DESC);
            mXparser.consolePrintln("CalculusOperator.DERN_DESC = " + CalculusOperator.DERN_DESC);
            mXparser.consolePrintln("CalculusOperator.FORW_DIFF_DESC = " + CalculusOperator.FORW_DIFF_DESC);
            mXparser.consolePrintln("CalculusOperator.BACKW_DIFF_DESC = " + CalculusOperator.BACKW_DIFF_DESC);
            mXparser.consolePrintln("CalculusOperator.AVG_DESC = " + CalculusOperator.AVG_DESC);
            mXparser.consolePrintln("CalculusOperator.VAR_DESC = " + CalculusOperator.VAR_DESC);
            mXparser.consolePrintln("CalculusOperator.STD_DESC = " + CalculusOperator.STD_DESC);
            mXparser.consolePrintln("CalculusOperator.MIN_DESC = " + CalculusOperator.MIN_DESC);
            mXparser.consolePrintln("CalculusOperator.MAX_DESC = " + CalculusOperator.MAX_DESC);
            mXparser.consolePrintln("CalculusOperator.SOLVE_DESC = " + CalculusOperator.SOLVE_DESC);
            mXparser.consolePrintln("ConstantValue.PI_DESC = " + ConstantValue.PI_DESC);
            mXparser.consolePrintln("ConstantValue.EULER_DESC = " + ConstantValue.EULER_DESC);
            mXparser.consolePrintln("ConstantValue.EULER_MASCHERONI_DESC = " + ConstantValue.EULER_MASCHERONI_DESC);
            mXparser.consolePrintln("ConstantValue.GOLDEN_RATIO_DESC = " + ConstantValue.GOLDEN_RATIO_DESC);
            mXparser.consolePrintln("ConstantValue.PLASTIC_DESC = " + ConstantValue.PLASTIC_DESC);
            mXparser.consolePrintln("ConstantValue.EMBREE_TREFETHEN_DESC = " + ConstantValue.EMBREE_TREFETHEN_DESC);
            mXparser.consolePrintln("ConstantValue.FEIGENBAUM_DELTA_DESC = " + ConstantValue.FEIGENBAUM_DELTA_DESC);
            mXparser.consolePrintln("ConstantValue.FEIGENBAUM_ALPHA_DESC = " + ConstantValue.FEIGENBAUM_ALPHA_DESC);
            mXparser.consolePrintln("ConstantValue.TWIN_PRIME_DESC = " + ConstantValue.TWIN_PRIME_DESC);
            mXparser.consolePrintln("ConstantValue.MEISSEL_MERTEENS_DESC = " + ConstantValue.MEISSEL_MERTEENS_DESC);
            mXparser.consolePrintln("ConstantValue.BRAUN_TWIN_PRIME_DESC = " + ConstantValue.BRAUN_TWIN_PRIME_DESC);
            mXparser.consolePrintln("ConstantValue.BRAUN_PRIME_QUADR_DESC = " + ConstantValue.BRAUN_PRIME_QUADR_DESC);
            mXparser.consolePrintln("ConstantValue.BRUIJN_NEWMAN_DESC = " + ConstantValue.BRUIJN_NEWMAN_DESC);
            mXparser.consolePrintln("ConstantValue.CATALAN_DESC = " + ConstantValue.CATALAN_DESC);
            mXparser.consolePrintln("ConstantValue.LANDAU_RAMANUJAN_DESC = " + ConstantValue.LANDAU_RAMANUJAN_DESC);
            mXparser.consolePrintln("ConstantValue.VISWANATH_DESC = " + ConstantValue.VISWANATH_DESC);
            mXparser.consolePrintln("ConstantValue.LEGENDRE_DESC = " + ConstantValue.LEGENDRE_DESC);
            mXparser.consolePrintln("ConstantValue.RAMANUJAN_SOLDNER_DESC = " + ConstantValue.RAMANUJAN_SOLDNER_DESC);
            mXparser.consolePrintln("ConstantValue.ERDOS_BORWEIN_DESC = " + ConstantValue.ERDOS_BORWEIN_DESC);
            mXparser.consolePrintln("ConstantValue.BERNSTEIN_DESC = " + ConstantValue.BERNSTEIN_DESC);
            mXparser.consolePrintln("ConstantValue.GAUSS_KUZMIN_WIRSING_DESC = " + ConstantValue.GAUSS_KUZMIN_WIRSING_DESC);
            mXparser.consolePrintln("ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC = " + ConstantValue.HAFNER_SARNAK_MCCURLEY_DESC);
            mXparser.consolePrintln("ConstantValue.GOLOMB_DICKMAN_DESC = " + ConstantValue.GOLOMB_DICKMAN_DESC);
            mXparser.consolePrintln("ConstantValue.CAHEN_DESC = " + ConstantValue.CAHEN_DESC);
            mXparser.consolePrintln("ConstantValue.LAPLACE_LIMIT_DESC = " + ConstantValue.LAPLACE_LIMIT_DESC);
            mXparser.consolePrintln("ConstantValue.ALLADI_GRINSTEAD_DESC = " + ConstantValue.ALLADI_GRINSTEAD_DESC);
            mXparser.consolePrintln("ConstantValue.LENGYEL_DESC = " + ConstantValue.LENGYEL_DESC);
            mXparser.consolePrintln("ConstantValue.LEVY_DESC = " + ConstantValue.LEVY_DESC);
            mXparser.consolePrintln("ConstantValue.APERY_DESC = " + ConstantValue.APERY_DESC);
            mXparser.consolePrintln("ConstantValue.MILLS_DESC = " + ConstantValue.MILLS_DESC);
            mXparser.consolePrintln("ConstantValue.BACKHOUSE_DESC = " + ConstantValue.BACKHOUSE_DESC);
            mXparser.consolePrintln("ConstantValue.PORTER_DESC = " + ConstantValue.PORTER_DESC);
            mXparser.consolePrintln("ConstantValue.LIEB_QUARE_ICE_DESC = " + ConstantValue.LIEB_QUARE_ICE_DESC);
            mXparser.consolePrintln("ConstantValue.NIVEN_DESC = " + ConstantValue.NIVEN_DESC);
            mXparser.consolePrintln("ConstantValue.SIERPINSKI_DESC = " + ConstantValue.SIERPINSKI_DESC);
            mXparser.consolePrintln("ConstantValue.KHINCHIN_DESC = " + ConstantValue.KHINCHIN_DESC);
            mXparser.consolePrintln("ConstantValue.FRANSEN_ROBINSON_DESC = " + ConstantValue.FRANSEN_ROBINSON_DESC);
            mXparser.consolePrintln("ConstantValue.LANDAU_DESC = " + ConstantValue.LANDAU_DESC);
            mXparser.consolePrintln("ConstantValue.PARABOLIC_DESC = " + ConstantValue.PARABOLIC_DESC);
            mXparser.consolePrintln("ConstantValue.OMEGA_DESC = " + ConstantValue.OMEGA_DESC);
            mXparser.consolePrintln("ConstantValue.MRB_DESC = " + ConstantValue.MRB_DESC);
            mXparser.consolePrintln("ConstantValue.LI2_DESC = " + ConstantValue.LI2_DESC);
            mXparser.consolePrintln("ConstantValue.GOMPERTZ_DESC = " + ConstantValue.GOMPERTZ_DESC);
            mXparser.consolePrintln("ConstantValue.LIGHT_SPEED_DESC = " + ConstantValue.LIGHT_SPEED_DESC);
            mXparser.consolePrintln("ConstantValue.GRAVITATIONAL_CONSTANT_DESC = " + ConstantValue.GRAVITATIONAL_CONSTANT_DESC);
            mXparser.consolePrintln("ConstantValue.GRAVIT_ACC_EARTH_DESC = " + ConstantValue.GRAVIT_ACC_EARTH_DESC);
            mXparser.consolePrintln("ConstantValue.PLANCK_CONSTANT_DESC = " + ConstantValue.PLANCK_CONSTANT_DESC);
            mXparser.consolePrintln("ConstantValue.PLANCK_CONSTANT_REDUCED_DESC = " + ConstantValue.PLANCK_CONSTANT_REDUCED_DESC);
            mXparser.consolePrintln("ConstantValue.PLANCK_LENGTH_DESC = " + ConstantValue.PLANCK_LENGTH_DESC);
            mXparser.consolePrintln("ConstantValue.PLANCK_MASS_DESC = " + ConstantValue.PLANCK_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.PLANCK_TIME_DESC = " + ConstantValue.PLANCK_TIME_DESC);
            mXparser.consolePrintln("ConstantValue.LIGHT_YEAR_DESC = " + ConstantValue.LIGHT_YEAR_DESC);
            mXparser.consolePrintln("ConstantValue.ASTRONOMICAL_UNIT_DESC = " + ConstantValue.ASTRONOMICAL_UNIT_DESC);
            mXparser.consolePrintln("ConstantValue.PARSEC_DESC = " + ConstantValue.PARSEC_DESC);
            mXparser.consolePrintln("ConstantValue.KILOPARSEC_DESC = " + ConstantValue.KILOPARSEC_DESC);
            mXparser.consolePrintln("ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC = " + ConstantValue.EARTH_RADIUS_EQUATORIAL_DESC);
            mXparser.consolePrintln("ConstantValue.EARTH_RADIUS_POLAR_DESC = " + ConstantValue.EARTH_RADIUS_POLAR_DESC);
            mXparser.consolePrintln("ConstantValue.EARTH_RADIUS_MEAN_DESC = " + ConstantValue.EARTH_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.EARTH_MASS_DESC = " + ConstantValue.EARTH_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.EARTH_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.MOON_RADIUS_MEAN_DESC = " + ConstantValue.MOON_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.MOON_MASS_DESC = " + ConstantValue.MOON_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.MONN_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.MONN_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.SOLAR_RADIUS_DESC = " + ConstantValue.SOLAR_RADIUS_DESC);
            mXparser.consolePrintln("ConstantValue.SOLAR_MASS_DESC = " + ConstantValue.SOLAR_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.MERCURY_RADIUS_MEAN_DESC = " + ConstantValue.MERCURY_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.MERCURY_MASS_DESC = " + ConstantValue.MERCURY_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.MERCURY_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.VENUS_RADIUS_MEAN_DESC = " + ConstantValue.VENUS_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.VENUS_MASS_DESC = " + ConstantValue.VENUS_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.VENUS_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.MARS_RADIUS_MEAN_DESC = " + ConstantValue.MARS_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.MARS_MASS_DESC = " + ConstantValue.MARS_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.MARS_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.JUPITER_RADIUS_MEAN_DESC = " + ConstantValue.JUPITER_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.JUPITER_MASS_DESC = " + ConstantValue.JUPITER_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.JUPITER_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.SATURN_RADIUS_MEAN_DESC = " + ConstantValue.SATURN_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.SATURN_MASS_DESC = " + ConstantValue.SATURN_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.SATURN_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.URANUS_RADIUS_MEAN_DESC = " + ConstantValue.URANUS_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.URANUS_MASS_DESC = " + ConstantValue.URANUS_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.URANUS_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.NEPTUNE_RADIUS_MEAN_DESC = " + ConstantValue.NEPTUNE_RADIUS_MEAN_DESC);
            mXparser.consolePrintln("ConstantValue.NEPTUNE_MASS_DESC = " + ConstantValue.NEPTUNE_MASS_DESC);
            mXparser.consolePrintln("ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC = " + ConstantValue.NEPTUNE_SEMI_MAJOR_AXIS_DESC);
            mXparser.consolePrintln("ConstantValue.TRUE_DESC = " + ConstantValue.TRUE_DESC);
            mXparser.consolePrintln("ConstantValue.FALSE_DESC = " + ConstantValue.FALSE_DESC);
            mXparser.consolePrintln("ConstantValue.NPAR_DESC = " + ConstantValue.NPAR_DESC);
            mXparser.consolePrintln("ConstantValue.NAN_DESC = " + ConstantValue.NAN_DESC);
            mXparser.consolePrintln("Function1Arg.SIN_DESC = " + Function1Arg.SIN_DESC);
            mXparser.consolePrintln("Function1Arg.COS_DESC = " + Function1Arg.COS_DESC);
            mXparser.consolePrintln("Function1Arg.TAN_DESC = " + Function1Arg.TAN_DESC);
            mXparser.consolePrintln("Function1Arg.CTAN_DESC = " + Function1Arg.CTAN_DESC);
            mXparser.consolePrintln("Function1Arg.SEC_DESC = " + Function1Arg.SEC_DESC);
            mXparser.consolePrintln("Function1Arg.COSEC_DESC = " + Function1Arg.COSEC_DESC);
            mXparser.consolePrintln("Function1Arg.ASIN_DESC = " + Function1Arg.ASIN_DESC);
            mXparser.consolePrintln("Function1Arg.ACOS_DESC = " + Function1Arg.ACOS_DESC);
            mXparser.consolePrintln("Function1Arg.ATAN_DESC = " + Function1Arg.ATAN_DESC);
            mXparser.consolePrintln("Function1Arg.ACTAN_DESC = " + Function1Arg.ACTAN_DESC);
            mXparser.consolePrintln("Function1Arg.LN_DESC = " + Function1Arg.LN_DESC);
            mXparser.consolePrintln("Function1Arg.LOG2_DESC = " + Function1Arg.LOG2_DESC);
            mXparser.consolePrintln("Function1Arg.LOG10_DESC = " + Function1Arg.LOG10_DESC);
            mXparser.consolePrintln("Function1Arg.RAD_DESC = " + Function1Arg.RAD_DESC);
            mXparser.consolePrintln("Function1Arg.EXP_DESC = " + Function1Arg.EXP_DESC);
            mXparser.consolePrintln("Function1Arg.SQRT_DESC = " + Function1Arg.SQRT_DESC);
            mXparser.consolePrintln("Function1Arg.SINH_DESC = " + Function1Arg.SINH_DESC);
            mXparser.consolePrintln("Function1Arg.COSH_DESC = " + Function1Arg.COSH_DESC);
            mXparser.consolePrintln("Function1Arg.TANH_DESC = " + Function1Arg.TANH_DESC);
            mXparser.consolePrintln("Function1Arg.COTH_DESC = " + Function1Arg.COTH_DESC);
            mXparser.consolePrintln("Function1Arg.SECH_DESC = " + Function1Arg.SECH_DESC);
            mXparser.consolePrintln("Function1Arg.CSCH_DESC = " + Function1Arg.CSCH_DESC);
            mXparser.consolePrintln("Function1Arg.DEG_DESC = " + Function1Arg.DEG_DESC);
            mXparser.consolePrintln("Function1Arg.ABS_DESC = " + Function1Arg.ABS_DESC);
            mXparser.consolePrintln("Function1Arg.SGN_DESC = " + Function1Arg.SGN_DESC);
            mXparser.consolePrintln("Function1Arg.FLOOR_DESC = " + Function1Arg.FLOOR_DESC);
            mXparser.consolePrintln("Function1Arg.CEIL_DESC = " + Function1Arg.CEIL_DESC);
            mXparser.consolePrintln("Function1Arg.NOT_DESC = " + Function1Arg.NOT_DESC);
            mXparser.consolePrintln("Function1Arg.ARSINH_DESC = " + Function1Arg.ARSINH_DESC);
            mXparser.consolePrintln("Function1Arg.ARCOSH_DESC = " + Function1Arg.ARCOSH_DESC);
            mXparser.consolePrintln("Function1Arg.ARTANH_DESC = " + Function1Arg.ARTANH_DESC);
            mXparser.consolePrintln("Function1Arg.ARCOTH_DESC = " + Function1Arg.ARCOTH_DESC);
            mXparser.consolePrintln("Function1Arg.ARSECH_DESC = " + Function1Arg.ARSECH_DESC);
            mXparser.consolePrintln("Function1Arg.ARCSCH_DESC = " + Function1Arg.ARCSCH_DESC);
            mXparser.consolePrintln("Function1Arg.SA_DESC = " + Function1Arg.SA_DESC);
            mXparser.consolePrintln("Function1Arg.SINC_DESC = " + Function1Arg.SINC_DESC);
            mXparser.consolePrintln("Function1Arg.BELL_NUMBER_DESC = " + Function1Arg.BELL_NUMBER_DESC);
            mXparser.consolePrintln("Function1Arg.LUCAS_NUMBER_DESC = " + Function1Arg.LUCAS_NUMBER_DESC);
            mXparser.consolePrintln("Function1Arg.FIBONACCI_NUMBER_DESC = " + Function1Arg.FIBONACCI_NUMBER_DESC);
            mXparser.consolePrintln("Function1Arg.HARMONIC_NUMBER_DESC = " + Function1Arg.HARMONIC_NUMBER_DESC);
            mXparser.consolePrintln("Function1Arg.IS_PRIME_DESC = " + Function1Arg.IS_PRIME_DESC);
            mXparser.consolePrintln("Function1Arg.PRIME_COUNT_DESC = " + Function1Arg.PRIME_COUNT_DESC);
            mXparser.consolePrintln("Function1Arg.EXP_INT_DESC = " + Function1Arg.EXP_INT_DESC);
            mXparser.consolePrintln("Function1Arg.LOG_INT_DESC = " + Function1Arg.LOG_INT_DESC);
            mXparser.consolePrintln("Function1Arg.OFF_LOG_INT_DESC = " + Function1Arg.OFF_LOG_INT_DESC);
            mXparser.consolePrintln("Function1Arg.GAUSS_ERF_DESC = " + Function1Arg.GAUSS_ERF_DESC);
            mXparser.consolePrintln("Function1Arg.GAUSS_ERFC_DESC = " + Function1Arg.GAUSS_ERFC_DESC);
            mXparser.consolePrintln("Function1Arg.GAUSS_ERF_INV_DESC = " + Function1Arg.GAUSS_ERF_INV_DESC);
            mXparser.consolePrintln("Function1Arg.GAUSS_ERFC_INV_DESC = " + Function1Arg.GAUSS_ERFC_INV_DESC);
            mXparser.consolePrintln("Function1Arg.ULP_DESC = " + Function1Arg.ULP_DESC);
            mXparser.consolePrintln("Function1Arg.ISNAN_DESC = " + Function1Arg.ISNAN_DESC);
            mXparser.consolePrintln("Function1Arg.NDIG10_DESC = " + Function1Arg.NDIG10_DESC);
            mXparser.consolePrintln("Function1Arg.NFACT_DESC = " + Function1Arg.NFACT_DESC);
            mXparser.consolePrintln("Function1Arg.ARCSEC_DESC = " + Function1Arg.ARCSEC_DESC);
            mXparser.consolePrintln("Function1Arg.ARCCSC_DESC = " + Function1Arg.ARCCSC_DESC);
            mXparser.consolePrintln("Function1Arg.GAMMA_DESC = " + Function1Arg.GAMMA_DESC);
            mXparser.consolePrintln("Function1Arg.LAMBERT_W0_DESC = " + Function1Arg.LAMBERT_W0_DESC);
            mXparser.consolePrintln("Function1Arg.LAMBERT_W1_DESC = " + Function1Arg.LAMBERT_W1_DESC);
            mXparser.consolePrintln("Function1Arg.SGN_GAMMA_DESC = " + Function1Arg.SGN_GAMMA_DESC);
            mXparser.consolePrintln("Function1Arg.LOG_GAMMA_DESC = " + Function1Arg.LOG_GAMMA_DESC);
            mXparser.consolePrintln("Function1Arg.DI_GAMMA_DESC = " + Function1Arg.DI_GAMMA_DESC);
            mXparser.consolePrintln("Function1Arg.PARAM_DESC = " + Function1Arg.PARAM_DESC);
            mXparser.consolePrintln("Function1Arg.RND_STUDENT_T_DESC = " + Function1Arg.RND_STUDENT_T_DESC);
            mXparser.consolePrintln("Function1Arg.RND_CHI2_DESC = " + Function1Arg.RND_CHI2_DESC);
            mXparser.consolePrintln("Function2Arg.LOG_DESC = " + Function2Arg.LOG_DESC);
            mXparser.consolePrintln("Function2Arg.MOD_DESC = " + Function2Arg.MOD_DESC);
            mXparser.consolePrintln("Function2Arg.BINOM_COEFF_DESC = " + Function2Arg.BINOM_COEFF_DESC);
            mXparser.consolePrintln("Function2Arg.BERNOULLI_NUMBER_DESC = " + Function2Arg.BERNOULLI_NUMBER_DESC);
            mXparser.consolePrintln("Function2Arg.STIRLING1_NUMBER_DESC = " + Function2Arg.STIRLING1_NUMBER_DESC);
            mXparser.consolePrintln("Function2Arg.STIRLING2_NUMBER_DESC = " + Function2Arg.STIRLING2_NUMBER_DESC);
            mXparser.consolePrintln("Function2Arg.WORPITZKY_NUMBER_DESC = " + Function2Arg.WORPITZKY_NUMBER_DESC);
            mXparser.consolePrintln("Function2Arg.EULER_NUMBER_DESC = " + Function2Arg.EULER_NUMBER_DESC);
            mXparser.consolePrintln("Function2Arg.KRONECKER_DELTA_DESC = " + Function2Arg.KRONECKER_DELTA_DESC);
            mXparser.consolePrintln("Function2Arg.EULER_POLYNOMIAL_DESC = " + Function2Arg.EULER_POLYNOMIAL_DESC);
            mXparser.consolePrintln("Function2Arg.HARMONIC_NUMBER_DESC = " + Function2Arg.HARMONIC_NUMBER_DESC);
            mXparser.consolePrintln("Function2Arg.RND_UNIFORM_CONT_DESC = " + Function2Arg.RND_UNIFORM_CONT_DESC);
            mXparser.consolePrintln("Function2Arg.RND_UNIFORM_DISCR_DESC = " + Function2Arg.RND_UNIFORM_DISCR_DESC);
            mXparser.consolePrintln("Function2Arg.ROUND_DESC = " + Function2Arg.ROUND_DESC);
            mXparser.consolePrintln("Function2Arg.RND_NORMAL_DESC = " + Function2Arg.RND_NORMAL_DESC);
            mXparser.consolePrintln("Function2Arg.NDIG_DESC = " + Function2Arg.NDIG_DESC);
            mXparser.consolePrintln("Function2Arg.DIGIT10_DESC = " + Function2Arg.DIGIT10_DESC);
            mXparser.consolePrintln("Function2Arg.FACTVAL_DESC = " + Function2Arg.FACTVAL_DESC);
            mXparser.consolePrintln("Function2Arg.FACTEXP_DESC = " + Function2Arg.FACTEXP_DESC);
            mXparser.consolePrintln("Function2Arg.ROOT_DESC = " + Function2Arg.ROOT_DESC);
            mXparser.consolePrintln("Function2Arg.INC_GAMMA_LOWER_DESC = " + Function2Arg.INC_GAMMA_LOWER_DESC);
            mXparser.consolePrintln("Function2Arg.INC_GAMMA_UPPER_DESC = " + Function2Arg.INC_GAMMA_UPPER_DESC);
            mXparser.consolePrintln("Function2Arg.REG_GAMMA_LOWER_DESC = " + Function2Arg.REG_GAMMA_LOWER_DESC);
            mXparser.consolePrintln("Function2Arg.REG_GAMMA_UPPER_DESC = " + Function2Arg.REG_GAMMA_UPPER_DESC);
            mXparser.consolePrintln("Function2Arg.PERMUTATIONS_DESC = " + Function2Arg.PERMUTATIONS_DESC);
            mXparser.consolePrintln("Function2Arg.BETA_DESC = " + Function2Arg.BETA_DESC);
            mXparser.consolePrintln("Function2Arg.LOG_BETA_DESC = " + Function2Arg.LOG_BETA_DESC);
            mXparser.consolePrintln("Function2Arg.PDF_STUDENT_T_DESC = " + Function2Arg.PDF_STUDENT_T_DESC);
            mXparser.consolePrintln("Function2Arg.CDF_STUDENT_T_DESC = " + Function2Arg.CDF_STUDENT_T_DESC);
            mXparser.consolePrintln("Function2Arg.QNT_STUDENT_T_DESC = " + Function2Arg.QNT_STUDENT_T_DESC);
            mXparser.consolePrintln("Function2Arg.PDF_CHI2_DESC = " + Function2Arg.PDF_CHI2_DESC);
            mXparser.consolePrintln("Function2Arg.CDF_CHI2_DESC = " + Function2Arg.CDF_CHI2_DESC);
            mXparser.consolePrintln("Function2Arg.QNT_CHI2_DESC = " + Function2Arg.QNT_CHI2_DESC);
            mXparser.consolePrintln("Function2Arg.RND_F_SNEDECOR_DESC = " + Function2Arg.RND_F_SNEDECOR_DESC);
            mXparser.consolePrintln("Function3Arg.IF_DESC = " + Function3Arg.IF_DESC);
            mXparser.consolePrintln("Function3Arg.CHI_DESC = " + Function3Arg.CHI_DESC);
            mXparser.consolePrintln("Function3Arg.CHI_LR_DESC = " + Function3Arg.CHI_LR_DESC);
            mXparser.consolePrintln("Function3Arg.CHI_L_DESC = " + Function3Arg.CHI_L_DESC);
            mXparser.consolePrintln("Function3Arg.CHI_R_DESC = " + Function3Arg.CHI_R_DESC);
            mXparser.consolePrintln("Function3Arg.PDF_UNIFORM_CONT_DESC = " + Function3Arg.PDF_UNIFORM_CONT_DESC);
            mXparser.consolePrintln("Function3Arg.CDF_UNIFORM_CONT_DESC = " + Function3Arg.CDF_UNIFORM_CONT_DESC);
            mXparser.consolePrintln("Function3Arg.QNT_UNIFORM_CONT_DESC = " + Function3Arg.QNT_UNIFORM_CONT_DESC);
            mXparser.consolePrintln("Function3Arg.PDF_NORMAL_DESC = " + Function3Arg.PDF_NORMAL_DESC);
            mXparser.consolePrintln("Function3Arg.CDF_NORMAL_DESC = " + Function3Arg.CDF_NORMAL_DESC);
            mXparser.consolePrintln("Function3Arg.QNT_NORMAL_DESC = " + Function3Arg.QNT_NORMAL_DESC);
            mXparser.consolePrintln("Function3Arg.DIGIT_DESC = " + Function3Arg.DIGIT_DESC);
            mXparser.consolePrintln("Function3Arg.INC_BETA_DESC = " + Function3Arg.INC_BETA_DESC);
            mXparser.consolePrintln("Function3Arg.REG_BETA_DESC = " + Function3Arg.REG_BETA_DESC);
            mXparser.consolePrintln("Function3Arg.PDF_F_SNEDECOR_DESC = " + Function3Arg.PDF_F_SNEDECOR_DESC);
            mXparser.consolePrintln("Function3Arg.CDF_F_SNEDECOR_DESC = " + Function3Arg.CDF_F_SNEDECOR_DESC);
            mXparser.consolePrintln("Function3Arg.QNT_F_SNEDECOR_DESC = " + Function3Arg.QNT_F_SNEDECOR_DESC);
            mXparser.consolePrintln("FunctionVariadic.IFF_DESC = " + FunctionVariadic.IFF_DESC);
            mXparser.consolePrintln("FunctionVariadic.MIN_DESC = " + FunctionVariadic.MIN_DESC);
            mXparser.consolePrintln("FunctionVariadic.MAX_DESC = " + FunctionVariadic.MAX_DESC);
            mXparser.consolePrintln("FunctionVariadic.CONT_FRAC_DESC = " + FunctionVariadic.CONT_FRAC_DESC);
            mXparser.consolePrintln("FunctionVariadic.CONT_POL_DESC = " + FunctionVariadic.CONT_POL_DESC);
            mXparser.consolePrintln("FunctionVariadic.GCD_DESC = " + FunctionVariadic.GCD_DESC);
            mXparser.consolePrintln("FunctionVariadic.LCM_DESC = " + FunctionVariadic.LCM_DESC);
            mXparser.consolePrintln("FunctionVariadic.SUM_DESC = " + FunctionVariadic.SUM_DESC);
            mXparser.consolePrintln("FunctionVariadic.PROD_DESC = " + FunctionVariadic.PROD_DESC);
            mXparser.consolePrintln("FunctionVariadic.AVG_DESC = " + FunctionVariadic.AVG_DESC);
            mXparser.consolePrintln("FunctionVariadic.VAR_DESC = " + FunctionVariadic.VAR_DESC);
            mXparser.consolePrintln("FunctionVariadic.STD_DESC = " + FunctionVariadic.STD_DESC);
            mXparser.consolePrintln("FunctionVariadic.RND_LIST_DESC = " + FunctionVariadic.RND_LIST_DESC);
            mXparser.consolePrintln("FunctionVariadic.COALESCE_DESC = " + FunctionVariadic.COALESCE_DESC);
            mXparser.consolePrintln("FunctionVariadic.OR_DESC = " + FunctionVariadic.OR_DESC);
            mXparser.consolePrintln("FunctionVariadic.AND_DESC = " + FunctionVariadic.AND_DESC);
            mXparser.consolePrintln("FunctionVariadic.XOR_DESC = " + FunctionVariadic.XOR_DESC);
            mXparser.consolePrintln("FunctionVariadic.ARGMIN_DESC = " + FunctionVariadic.ARGMIN_DESC);
            mXparser.consolePrintln("FunctionVariadic.ARGMAX_DESC = " + FunctionVariadic.ARGMAX_DESC);
            mXparser.consolePrintln("FunctionVariadic.MEDIAN_DESC = " + FunctionVariadic.MEDIAN_DESC);
            mXparser.consolePrintln("FunctionVariadic.MODE_DESC = " + FunctionVariadic.MODE_DESC);
            mXparser.consolePrintln("FunctionVariadic.BASE_DESC = " + FunctionVariadic.BASE_DESC);
            mXparser.consolePrintln("FunctionVariadic.NDIST_DESC = " + FunctionVariadic.NDIST_DESC);
            mXparser.consolePrintln("Operator.PLUS_DESC = " + Operator.PLUS_DESC);
            mXparser.consolePrintln("Operator.MINUS_DESC = " + Operator.MINUS_DESC);
            mXparser.consolePrintln("Operator.MULTIPLY_DESC = " + Operator.MULTIPLY_DESC);
            mXparser.consolePrintln("Operator.DIVIDE_DESC = " + Operator.DIVIDE_DESC);
            mXparser.consolePrintln("Operator.POWER_DESC = " + Operator.POWER_DESC);
            mXparser.consolePrintln("Operator.FACT_DESC = " + Operator.FACT_DESC);
            mXparser.consolePrintln("Operator.MOD_DESC = " + Operator.MOD_DESC);
            mXparser.consolePrintln("Operator.PERC_DESC = " + Operator.PERC_DESC);
            mXparser.consolePrintln("Operator.TETRATION_DESC = " + Operator.TETRATION_DESC);
            mXparser.consolePrintln("Operator.SQUARE_ROOT_DESC = " + Operator.SQUARE_ROOT_DESC);
            mXparser.consolePrintln("Operator.CUBE_ROOT_DESC = " + Operator.CUBE_ROOT_DESC);
            mXparser.consolePrintln("Operator.FOURTH_ROOT_DESC = " + Operator.FOURTH_ROOT_DESC);
            mXparser.consolePrintln("ParserSymbol.LEFT_PARENTHESES_DESC = " + ParserSymbol.LEFT_PARENTHESES_DESC);
            mXparser.consolePrintln("ParserSymbol.RIGHT_PARENTHESES_DESC = " + ParserSymbol.RIGHT_PARENTHESES_DESC);
            mXparser.consolePrintln("ParserSymbol.COMMA_DESC = " + ParserSymbol.COMMA_DESC);
            mXparser.consolePrintln("ParserSymbol.SEMI_DESC = " + ParserSymbol.SEMI_DESC);
            mXparser.consolePrintln("ParserSymbol.BLANK_DESC = " + ParserSymbol.BLANK_DESC);
            mXparser.consolePrintln("ParserSymbol.UNICODE_MATH_DESC = " + ParserSymbol.UNICODE_MATH_DESC);
            mXparser.consolePrintln("RandomVariable.UNIFORM_DESC = " + RandomVariable.UNIFORM_DESC);
            mXparser.consolePrintln("RandomVariable.INT_DESC = " + RandomVariable.INT_DESC);
            mXparser.consolePrintln("RandomVariable.INT1_DESC = " + RandomVariable.INT1_DESC);
            mXparser.consolePrintln("RandomVariable.INT2_DESC = " + RandomVariable.INT2_DESC);
            mXparser.consolePrintln("RandomVariable.INT3_DESC = " + RandomVariable.INT3_DESC);
            mXparser.consolePrintln("RandomVariable.INT4_DESC = " + RandomVariable.INT4_DESC);
            mXparser.consolePrintln("RandomVariable.INT5_DESC = " + RandomVariable.INT5_DESC);
            mXparser.consolePrintln("RandomVariable.INT6_DESC = " + RandomVariable.INT6_DESC);
            mXparser.consolePrintln("RandomVariable.INT7_DESC = " + RandomVariable.INT7_DESC);
            mXparser.consolePrintln("RandomVariable.INT8_DESC = " + RandomVariable.INT8_DESC);
            mXparser.consolePrintln("RandomVariable.INT9_DESC = " + RandomVariable.INT9_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_DESC = " + RandomVariable.NAT0_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_1_DESC = " + RandomVariable.NAT0_1_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_2_DESC = " + RandomVariable.NAT0_2_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_3_DESC = " + RandomVariable.NAT0_3_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_4_DESC = " + RandomVariable.NAT0_4_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_5_DESC = " + RandomVariable.NAT0_5_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_6_DESC = " + RandomVariable.NAT0_6_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_7_DESC = " + RandomVariable.NAT0_7_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_8_DESC = " + RandomVariable.NAT0_8_DESC);
            mXparser.consolePrintln("RandomVariable.NAT0_9_DESC = " + RandomVariable.NAT0_9_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_DESC = " + RandomVariable.NAT1_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_1_DESC = " + RandomVariable.NAT1_1_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_2_DESC = " + RandomVariable.NAT1_2_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_3_DESC = " + RandomVariable.NAT1_3_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_4_DESC = " + RandomVariable.NAT1_4_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_5_DESC = " + RandomVariable.NAT1_5_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_6_DESC = " + RandomVariable.NAT1_6_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_7_DESC = " + RandomVariable.NAT1_7_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_8_DESC = " + RandomVariable.NAT1_8_DESC);
            mXparser.consolePrintln("RandomVariable.NAT1_9_DESC = " + RandomVariable.NAT1_9_DESC);
            mXparser.consolePrintln("RandomVariable.NOR_DESC = " + RandomVariable.NOR_DESC);
            mXparser.consolePrintln("Unit.PERC_DESC = " + Unit.PERC_DESC);
            mXparser.consolePrintln("Unit.PROMIL_DESC = " + Unit.PROMIL_DESC);
            mXparser.consolePrintln("Unit.YOTTA_DESC = " + Unit.YOTTA_DESC);
            mXparser.consolePrintln("Unit.ZETTA_DESC = " + Unit.ZETTA_DESC);
            mXparser.consolePrintln("Unit.EXA_DESC = " + Unit.EXA_DESC);
            mXparser.consolePrintln("Unit.PETA_DESC = " + Unit.PETA_DESC);
            mXparser.consolePrintln("Unit.TERA_DESC = " + Unit.TERA_DESC);
            mXparser.consolePrintln("Unit.GIGA_DESC = " + Unit.GIGA_DESC);
            mXparser.consolePrintln("Unit.MEGA_DESC = " + Unit.MEGA_DESC);
            mXparser.consolePrintln("Unit.KILO_DESC = " + Unit.KILO_DESC);
            mXparser.consolePrintln("Unit.HECTO_DESC = " + Unit.HECTO_DESC);
            mXparser.consolePrintln("Unit.DECA_DESC = " + Unit.DECA_DESC);
            mXparser.consolePrintln("Unit.DECI_DESC = " + Unit.DECI_DESC);
            mXparser.consolePrintln("Unit.CENTI_DESC = " + Unit.CENTI_DESC);
            mXparser.consolePrintln("Unit.MILLI_DESC = " + Unit.MILLI_DESC);
            mXparser.consolePrintln("Unit.MICRO_DESC = " + Unit.MICRO_DESC);
            mXparser.consolePrintln("Unit.NANO_DESC = " + Unit.NANO_DESC);
            mXparser.consolePrintln("Unit.PICO_DESC = " + Unit.PICO_DESC);
            mXparser.consolePrintln("Unit.FEMTO_DESC = " + Unit.FEMTO_DESC);
            mXparser.consolePrintln("Unit.ATTO_DESC = " + Unit.ATTO_DESC);
            mXparser.consolePrintln("Unit.ZEPTO_DESC = " + Unit.ZEPTO_DESC);
            mXparser.consolePrintln("Unit.YOCTO_DESC = " + Unit.YOCTO_DESC);
            mXparser.consolePrintln("Unit.METRE_DESC = " + Unit.METRE_DESC);
            mXparser.consolePrintln("Unit.KILOMETRE_DESC = " + Unit.KILOMETRE_DESC);
            mXparser.consolePrintln("Unit.CENTIMETRE_DESC = " + Unit.CENTIMETRE_DESC);
            mXparser.consolePrintln("Unit.MILLIMETRE_DESC = " + Unit.MILLIMETRE_DESC);
            mXparser.consolePrintln("Unit.INCH_DESC = " + Unit.INCH_DESC);
            mXparser.consolePrintln("Unit.YARD_DESC = " + Unit.YARD_DESC);
            mXparser.consolePrintln("Unit.FEET_DESC = " + Unit.FEET_DESC);
            mXparser.consolePrintln("Unit.MILE_DESC = " + Unit.MILE_DESC);
            mXparser.consolePrintln("Unit.NAUTICAL_MILE_DESC = " + Unit.NAUTICAL_MILE_DESC);
            mXparser.consolePrintln("Unit.METRE2_DESC = " + Unit.METRE2_DESC);
            mXparser.consolePrintln("Unit.CENTIMETRE2_DESC = " + Unit.CENTIMETRE2_DESC);
            mXparser.consolePrintln("Unit.MILLIMETRE2_DESC = " + Unit.MILLIMETRE2_DESC);
            mXparser.consolePrintln("Unit.ARE_DESC = " + Unit.ARE_DESC);
            mXparser.consolePrintln("Unit.HECTARE_DESC = " + Unit.HECTARE_DESC);
            mXparser.consolePrintln("Unit.ACRE_DESC = " + Unit.ACRE_DESC);
            mXparser.consolePrintln("Unit.KILOMETRE2_DESC = " + Unit.KILOMETRE2_DESC);
            mXparser.consolePrintln("Unit.MILLIMETRE3_DESC = " + Unit.MILLIMETRE3_DESC);
            mXparser.consolePrintln("Unit.CENTIMETRE3_DESC = " + Unit.CENTIMETRE3_DESC);
            mXparser.consolePrintln("Unit.METRE3_DESC = " + Unit.METRE3_DESC);
            mXparser.consolePrintln("Unit.KILOMETRE3_DESC = " + Unit.KILOMETRE3_DESC);
            mXparser.consolePrintln("Unit.MILLILITRE_DESC = " + Unit.MILLILITRE_DESC);
            mXparser.consolePrintln("Unit.LITRE_DESC = " + Unit.LITRE_DESC);
            mXparser.consolePrintln("Unit.GALLON_DESC = " + Unit.GALLON_DESC);
            mXparser.consolePrintln("Unit.PINT_DESC = " + Unit.PINT_DESC);
            mXparser.consolePrintln("Unit.SECOND_DESC = " + Unit.SECOND_DESC);
            mXparser.consolePrintln("Unit.MILLISECOND_DESC = " + Unit.MILLISECOND_DESC);
            mXparser.consolePrintln("Unit.MINUTE_DESC = " + Unit.MINUTE_DESC);
            mXparser.consolePrintln("Unit.HOUR_DESC = " + Unit.HOUR_DESC);
            mXparser.consolePrintln("Unit.DAY_DESC = " + Unit.DAY_DESC);
            mXparser.consolePrintln("Unit.WEEK_DESC = " + Unit.WEEK_DESC);
            mXparser.consolePrintln("Unit.JULIAN_YEAR_DESC = " + Unit.JULIAN_YEAR_DESC);
            mXparser.consolePrintln("Unit.KILOGRAM_DESC = " + Unit.KILOGRAM_DESC);
            mXparser.consolePrintln("Unit.GRAM_DESC = " + Unit.GRAM_DESC);
            mXparser.consolePrintln("Unit.MILLIGRAM_DESC = " + Unit.MILLIGRAM_DESC);
            mXparser.consolePrintln("Unit.DECAGRAM_DESC = " + Unit.DECAGRAM_DESC);
            mXparser.consolePrintln("Unit.TONNE_DESC = " + Unit.TONNE_DESC);
            mXparser.consolePrintln("Unit.OUNCE_DESC = " + Unit.OUNCE_DESC);
            mXparser.consolePrintln("Unit.POUND_DESC = " + Unit.POUND_DESC);
            mXparser.consolePrintln("Unit.BIT_DESC = " + Unit.BIT_DESC);
            mXparser.consolePrintln("Unit.KILOBIT_DESC = " + Unit.KILOBIT_DESC);
            mXparser.consolePrintln("Unit.MEGABIT_DESC = " + Unit.MEGABIT_DESC);
            mXparser.consolePrintln("Unit.GIGABIT_DESC = " + Unit.GIGABIT_DESC);
            mXparser.consolePrintln("Unit.TERABIT_DESC = " + Unit.TERABIT_DESC);
            mXparser.consolePrintln("Unit.PETABIT_DESC = " + Unit.PETABIT_DESC);
            mXparser.consolePrintln("Unit.EXABIT_DESC = " + Unit.EXABIT_DESC);
            mXparser.consolePrintln("Unit.ZETTABIT_DESC = " + Unit.ZETTABIT_DESC);
            mXparser.consolePrintln("Unit.YOTTABIT_DESC = " + Unit.YOTTABIT_DESC);
            mXparser.consolePrintln("Unit.BYTE_DESC = " + Unit.BYTE_DESC);
            mXparser.consolePrintln("Unit.KILOBYTE_DESC = " + Unit.KILOBYTE_DESC);
            mXparser.consolePrintln("Unit.MEGABYTE_DESC = " + Unit.MEGABYTE_DESC);
            mXparser.consolePrintln("Unit.GIGABYTE_DESC = " + Unit.GIGABYTE_DESC);
            mXparser.consolePrintln("Unit.TERABYTE_DESC = " + Unit.TERABYTE_DESC);
            mXparser.consolePrintln("Unit.PETABYTE_DESC = " + Unit.PETABYTE_DESC);
            mXparser.consolePrintln("Unit.EXABYTE_DESC = " + Unit.EXABYTE_DESC);
            mXparser.consolePrintln("Unit.ZETTABYTE_DESC = " + Unit.ZETTABYTE_DESC);
            mXparser.consolePrintln("Unit.YOTTABYTE_DESC = " + Unit.YOTTABYTE_DESC);
            mXparser.consolePrintln("Unit.JOULE_DESC = " + Unit.JOULE_DESC);
            mXparser.consolePrintln("Unit.ELECTRONO_VOLT_DESC = " + Unit.ELECTRONO_VOLT_DESC);
            mXparser.consolePrintln("Unit.KILO_ELECTRONO_VOLT_DESC = " + Unit.KILO_ELECTRONO_VOLT_DESC);
            mXparser.consolePrintln("Unit.MEGA_ELECTRONO_VOLT_DESC = " + Unit.MEGA_ELECTRONO_VOLT_DESC);
            mXparser.consolePrintln("Unit.GIGA_ELECTRONO_VOLT_DESC = " + Unit.GIGA_ELECTRONO_VOLT_DESC);
            mXparser.consolePrintln("Unit.TERA_ELECTRONO_VOLT_DESC = " + Unit.TERA_ELECTRONO_VOLT_DESC);
            mXparser.consolePrintln("Unit.METRE_PER_SECOND_DESC = " + Unit.METRE_PER_SECOND_DESC);
            mXparser.consolePrintln("Unit.KILOMETRE_PER_HOUR_DESC = " + Unit.KILOMETRE_PER_HOUR_DESC);
            mXparser.consolePrintln("Unit.MILE_PER_HOUR_DESC = " + Unit.MILE_PER_HOUR_DESC);
            mXparser.consolePrintln("Unit.KNOT_DESC = " + Unit.KNOT_DESC);
            mXparser.consolePrintln("Unit.METRE_PER_SECOND2_DESC = " + Unit.METRE_PER_SECOND2_DESC);
            mXparser.consolePrintln("Unit.KILOMETRE_PER_HOUR2_DESC = " + Unit.KILOMETRE_PER_HOUR2_DESC);
            mXparser.consolePrintln("Unit.MILE_PER_HOUR2_DESC = " + Unit.MILE_PER_HOUR2_DESC);
            mXparser.consolePrintln("Unit.RADIAN_ARC_DESC = " + Unit.RADIAN_ARC_DESC);
            mXparser.consolePrintln("Unit.DEGREE_ARC_DESC = " + Unit.DEGREE_ARC_DESC);
            mXparser.consolePrintln("Unit.MINUTE_ARC_DESC = " + Unit.MINUTE_ARC_DESC);
            mXparser.consolePrintln("Unit.SECOND_ARC_DESC = " + Unit.SECOND_ARC_DESC);
        }
        // -------------------------------------------------
        internal static String buildErrorMessagePatternDoesNotMatchWithExamples(String userText, String errorMessage, String examples) {
            return StringUtils.surroundApostropheAddSpace(userText)
                    + errorMessage
                    + StringInvariant.SPACE
                    + PATTERN_DOES_NOT_MATCH
                    + StringInvariant.SPACE
                    + PATTERN_EXAMPLES
                    + StringInvariant.COLON_SPACE
                    + examples
                    + StringInvariant.DOT
                    ;
        }

        internal static String buildTokenString(String tokenStr, int tokenIndex) {
            return StringResources.TOKEN
                    + StringInvariant.SPACE
                    + StringUtils.surroundApostrophe(tokenStr)
                    + StringInvariant.COMMA_SPACE
                    + StringResources.INDEX
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
            return KEYWORD
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
                    + EXPECTED
                    + StringInvariant.SPACE
                    + expectedNumberOfParameters
                    + StringInvariant.COMMA_SPACE
                    + PROVIDED
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

            String errorMessage = ENCOUNTERED
                    + StringInvariant.SPACE
                    + StringUtils.surroundQuoteAddSpace(pe.currentToken.next.image)
                    + AT_INDEX
                    + StringInvariant.SPACE
                    + pe.currentToken.next.beginColumn
                    + StringInvariant.DOT
                    + StringInvariant.SPACE
                    ;

            bool[] expectedTokenAdded = new bool[pe.tokenImage.Length];
            int numberOfExpectedTokensAdded = 0;
            String expectedTokens = StringInvariant.EMPTY;

            for (int i = 0; i < pe.expectedTokenSequences.Length; i++) {
                int numberOfTokensInSequence = pe.expectedTokenSequences[i].Length;
                if (numberOfTokensInSequence > 0) {
                    int expectedTokenIndex = (int)pe.expectedTokenSequences[i][0];
                    if (!expectedTokenAdded[expectedTokenIndex]) {
                        if (numberOfExpectedTokensAdded == mXparser.ERROR_MESSAGE_MAXIMUM_NUMBER_OF_EXPECTED_TOKENS) {
                            expectedTokens += StringInvariant.AND_CONTINUE;
                            numberOfExpectedTokensAdded++;
                            break;
                        }
                        String expectedTokenImage = pe.tokenImage[expectedTokenIndex];
                        expectedTokens += StringInvariant.NEW_LINE + StringInvariant.TAB_AS_SPACES + expectedTokenImage;
                        if (pe.expectedTokenSequences[i][numberOfTokensInSequence - 1] != 0)
                            expectedTokens += StringInvariant.SPACE + StringInvariant.DOTS;
                        expectedTokenAdded[expectedTokenIndex] = true;
                        numberOfExpectedTokensAdded++;
                    }
                }
                if (numberOfExpectedTokensAdded > mXparser.ERROR_MESSAGE_MAXIMUM_NUMBER_OF_EXPECTED_TOKENS)
                    break;
            }

            if (numberOfExpectedTokensAdded > 1)
                errorMessage += WAS_EXPECTING_ONE_OF + StringInvariant.COLON_SPACE + expectedTokens;
            else
                errorMessage += WAS_EXPECTING + StringInvariant.COLON_SPACE + expectedTokens;

            return errorMessage;
        }

        private static String buildErrorMessageFromTokenMgrError(TokenMgrError tme) {
            return UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED
                    + StringInvariant.SPACE
                    + ERROR
                    + StringInvariant.COLON_SPACE
                    + StringUtils.trimNotNull(tme.Message)
                    ;
        }

        internal static String buildErrorMessageFromException(Exception e) {
            if (e == null)
                return ERROR_NULL_OBJECT;

            if (e is ParseException)
                    return buildErrorMessageFromParseException((ParseException) e);

            if (e is TokenMgrError)
                return buildErrorMessageFromTokenMgrError((TokenMgrError) e);

            return UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED
                    + StringInvariant.SPACE
                    + EXCEPTION
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
            return addErrorMassage(errorMessageCurrent, level, StringResources.buildErrorMessageTokenStrings(errorMessageToAdd, tokenStr));
        }

        internal static String addErrorMassageTokenString(String errorMessageCurrent, String level, String errorMessageToAdd1, String tokenStr, String errorMessageToAdd2) {
            return addErrorMassage(errorMessageCurrent, level, StringResources.buildErrorMessageTokenStrings(errorMessageToAdd1, tokenStr), errorMessageToAdd2);
        }

        internal static String addErrorMassageNoLevel(String errorMessageCurrent, String errorMessageToAdd) {
            return errorMessageCurrent
                    + errorMessageToAdd
                    + StringInvariant.NEW_LINE
                    ;
        }

        internal static String addErrorMassageNoLevel(String errorMessageCurrent, String errorMessageToAdd, String expressionDescription, String expressionString) {
            return errorMessageCurrent
                    + ELEMENT
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
                    + EXPECTED
                    + StringInvariant.SPACE
                    + expected
                    + StringInvariant.COMMA_SPACE
                    + PROVIDED
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
                    + EXPECTED
                    + StringInvariant.SPACE
                    + expected
                    + StringInvariant.COMMA_SPACE
                    + PROVIDED
                    + StringInvariant.SPACE
                    + provided
                    + StringInvariant.DOT
                    + StringInvariant.NEW_LINE
                    ;
        }
    }
}