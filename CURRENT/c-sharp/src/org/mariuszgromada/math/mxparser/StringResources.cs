/*
 * @(#)StringResources.cs        5.2.0    2022-12-09
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