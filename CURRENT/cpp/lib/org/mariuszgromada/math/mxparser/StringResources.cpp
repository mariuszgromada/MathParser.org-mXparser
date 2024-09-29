/*
 * @(#)StringResources.cpp        6.1.0    2024-09-15
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

#include "org/mariuszgromada/math/mxparser/StringResources.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"
#include "org/mariuszgromada/math/mxparser/StringResourcesFrench.hpp"
#include "org/mariuszgromada/math/mxparser/StringResourcesGerman.hpp"
#include "org/mariuszgromada/math/mxparser/StringResourcesItalian.hpp"
#include "org/mariuszgromada/math/mxparser/StringResourcesPolish.hpp"
#include "org/mariuszgromada/math/mxparser/StringResourcesPortuguese.hpp"
#include "org/mariuszgromada/math/mxparser/StringResourcesSpanish.hpp"
#include "org/mariuszgromada/math/mxparser/StringUtils.hpp"
#include <locale>

namespace org::mariuszgromada::math::mxparser {
	using namespace org::mariuszgromada::math::mxparser::stringutils;

	API_VISIBLE StringPtr StringResources::enLangCode = nullptr;
	API_VISIBLE StringPtr StringResources::frLangCode = nullptr;
	API_VISIBLE StringPtr StringResources::deLangCode = nullptr;
	API_VISIBLE StringPtr StringResources::itLangCode = nullptr;
	API_VISIBLE StringPtr StringResources::plLangCode = nullptr;
	API_VISIBLE StringPtr StringResources::ptLangCode = nullptr;
	API_VISIBLE StringPtr StringResources::esLangCode = nullptr;

	API_VISIBLE StringPtr StringResources::newLine = nullptr;
	API_VISIBLE StringPtr StringResources::endLine = nullptr;

	API_VISIBLE StringPtr StringResources::LINE_BREAK = nullptr;


	// package
	API_VISIBLE StringPtr StringResources::DEFAULT_USER_LANGUAGE = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_STARTING_SYNTAX_CHECK = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NO_ERRORS_DETECTED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_LEXICAL_ERROR_HAS_BEEN_FOUND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ERRORS_HAVE_BEEN_FOUND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ALREADY_CHECKED_NO_ERRORS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_SYNTAX_STATUS_UNKNOWN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PROBLEM_WITH_EXPRESSION_SYNTAX = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_ENCOUNTERED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_WHILE_PARSING = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BUT_GOT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_LEXICAL_ERROR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_AT_INDEX = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_AFTER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_WAS_EXPECTING = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_WAS_EXPECTING_ONE_OF = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_EXPRESSION_STRING_IS_EMPTY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DUPLICATED_KEYWORD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ELEMENT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ERROR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_EXCEPTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_TOKEN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INDEX = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INVALID_TOKEN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_EXPRESSION_TOKENS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NULL_TOKENS_LIST = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PROVIDED_EXTENSION_IS_NULL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PROVIDED_STRING_IS_NULL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PROVIDED_ELEMENTS_ARE_NULL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_ARGUMENT_WAS_EXPECTED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_EXPECTED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PROVIDED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_EXPECTED_EVEN_NUMBER_OF_ARGUMENTS = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_INVALID_FUNCTION_NAME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INVALID_ARGUMENT_NAME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INVALID_CONSTANT_NAME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INVALID_FUNCTION_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INVALID_ARGUMENT_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INVALID_CONSTANT_DEFINITION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PATTERN_DOES_NOT_MATCH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PATTERN_EXAMPLES = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_WAS_EXPECTED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_USER_CONSTANT_WAS_EXPECTED = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_UNARY_FUNCTION_EXPECTS_1_PARAMETER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_FUNCTION_EXPECTS_2_PARAMETERS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_TERNARY_FUNCTION_EXPECTS_3_PARAMETERS = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_ERROR_WHILE_EXECUTING_THE_CALCULATE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_RECURSION_CALLS_COUNTER_EXCEEDED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_RECURSION_CALLS_COUNTER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_STARTING_CALCULATION_LOOP = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CANCEL_REQUEST_FINISHING = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_STARTING = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSING = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FULLY_COMPILED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULATED_VALUE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_EXITING = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DONE = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_KEYWORD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_SYNTAX = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NUMBER_LITERAL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_TYPE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_SINCE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DESCRIPTION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_CALC_STEPS_REGISTER_IS_EMPTY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALC_STEPS_REGISTER_FOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ARGUMENT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_EXPRESSION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_RESULT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_COMPUTING_TIME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_GROUP_SHORT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NUMBER_SHORT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FIRST = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_LAST = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DESCRIPTION_SHORT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_STEP = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_SERIALIZATION_PERFORMED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DESERIALIZATION_PERFORMED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NULL_OBJECT_PROVIDED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NULL_FILE_PATH_PROVIDED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FILE_PATH_ZERO_LENGTH_PROVIDED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FILE_PATH_IS_NOT_A_FILE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FILE_PATH_NOT_EXISTS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NULL_DATA_PROVIDED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_SERIALIZATION_ENABLED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_SERIALIZATION_DISABLED = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_USER_DEFINED_EXPRESSION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_USER_DEFINED_ARGUMENT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_USER_DEFINED_CONSTANT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_USER_DEFINED_FUNCTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_USER_DEFINED_RECURSIVE_ARGUMENT = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_HELP_CONTENT_LIMITED_TO_QUERY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ALL_HELP_CONTENT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CAPTION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_WARNING_BINARY_SERIALIZATION_SECURITY_RISKS = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_RELATION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_RANDOM_VARIABLE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ITERATED_OPERATOR = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_RATIO_FRACTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_METRIC_PREFIX = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_LENGTH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_AREA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_VOLUME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_TIME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_INFORMATION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_ENERGY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_SPEED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_ACCELERATION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OF_ANGLE = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_PHYSICAL_CONSTANT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_ASTRONOMICAL_CONSTANT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_MATHEMATICAL_CONSTANT = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_PROBABILITY_DISTRIBUTION_FUNCTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CUMULATIVE_DISTRIBUTION_FUNCTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_QUANTILE_FUNCTION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_STUDENTS_T_DISTRIBUTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CHI_SQUARED_DISTRIBUTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_SNEDECORS_F_DISTRIBUTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIFORM_CONTINUOUS_DISTRIBUTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIFORM_DISCRETE_DISTRIBUTION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_NORMAL_DISTRIBUTION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_RANDOM_INTEGER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_RANDOM_NATURAL_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_RANDOM_NATURAL_NUMBER_INCLUDING_0 = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_SPECIAL_FUNCTION = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_SEMI_MAJOR_AXIS = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_RELATION_EQ = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_RELATION_NEQ = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_RELATION_LT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_RELATION_GT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_RELATION_LEQ = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BINARY_RELATION_GEQ = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_COMPL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_AND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_XOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_OR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_LEFT_SHIFT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_RIGHT_SHIFT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_NAND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_NOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BITWISE_OPERATOR_XNOR = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_AND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_OR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_NEG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_NAND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_NOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_XOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_IMP = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_CIMP = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_NIMP = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_CNIMP = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_BOOLEAN_OPERATOR_EQV = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_SUM = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_PROD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_INT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_DER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_DER_LEFT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_DER_RIGHT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_DERN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_FORW_DIFF = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_BACKW_DIFF = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_AVG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_VAR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_STD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_MIN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_MAX = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CALCULUS_OPERATOR_SOLVE = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PI = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_EULER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_EULER_MASCHERONI = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_GOLDEN_RATIO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PLASTIC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_EMBREE_TREFETHEN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_FEIGENBAUM_DELTA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_FEIGENBAUM_ALPHA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_TWIN_PRIME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MEISSEL_MERTEENS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_BRAUN_TWIN_PRIME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_BRAUN_PRIME_QUADR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_BRUIJN_NEWMAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_CATALAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LANDAU_RAMANUJAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_VISWANATH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LEGENDRE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_RAMANUJAN_SOLDNER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_ERDOS_BORWEIN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_BERNSTEIN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_GOLOMB_DICKMAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_CAHEN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LAPLACE_LIMIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_ALLADI_GRINSTEAD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LENGYEL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LEVY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_APERY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MILLS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_BACKHOUSE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PORTER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LIEB_QUARE_ICE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_NIVEN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_SIERPINSKI = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_KHINCHIN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_FRANSEN_ROBINSON = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LANDAU = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PARABOLIC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_OMEGA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MRB = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LI2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_GOMPERTZ = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LIGHT_SPEED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_GRAVITATIONAL_CONSTANT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_GRAVIT_ACC_EARTH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PLANCK_CONSTANT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PLANCK_LENGTH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PLANCK_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PLANCK_TIME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_LIGHT_YEAR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_ASTRONOMICAL_UNIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_PARSEC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_KILOPARSEC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_POLAR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_EARTH_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MOON_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MOON_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_SOLAR_RADIUS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_SOLAR_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MERCURY_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MERCURY_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_VENUS_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_VENUS_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MARS_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MARS_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_JUPITER_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_JUPITER_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_SATURN_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_SATURN_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_URANUS_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_URANUS_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_NEPTUNE_MASS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_TRUE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_FALSE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_NPAR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_CONSTANT_VALUE_NAN = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SIN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_COS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_TAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_CTAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SEC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_COSEC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ASIN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ACOS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ATAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ACTAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_LN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_LOG2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_LOG10 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_RAD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_EXP = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SQRT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SINH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_COSH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_TANH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_COTH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SECH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_CSCH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_DEG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ABS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SGN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_FLOOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_CEIL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_NOT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ARSINH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ARCOSH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ARTANH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ARCOTH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ARSECH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ARCSCH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SINC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_BELL_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_LUCAS_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_FIBONACCI_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_HARMONIC_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_IS_PRIME = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_PRIME_COUNT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_EXP_INT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_LOG_INT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_OFF_LOG_INT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_GAUSS_ERF = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_GAUSS_ERFC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_GAUSS_ERF_INV = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_GAUSS_ERFC_INV = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ULP = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ISNAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_NDIG10 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_NFACT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ARCSEC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_ARCCSC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_GAMMA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_LAMBERT_W0 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_LAMBERT_W1 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_SGN_GAMMA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_LOG_GAMMA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_DI_GAMMA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_1_ARG_PARAM = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_LOG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_MOD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_BINOM_COEFF = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_BERNOULLI_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_STIRLING1_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_STIRLING2_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_WORPITZKY_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_EULER_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_KRONECKER_DELTA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_EULER_POLYNOMIAL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_HARMONIC_NUMBER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_ROUND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_NDIG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_DIGIT10 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_FACTVAL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_FACTEXP = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_ROOT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_INC_GAMMA_LOWER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_INC_GAMMA_UPPER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_REG_GAMMA_LOWER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_REG_GAMMA_UPPER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_PERMUTATIONS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_BETA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_2_ARG_LOG_BETA = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG_IF = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG_CHI = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG_CHI_LR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG_CHI_L = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG_CHI_R = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG_DIGIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG_INC_BETA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_3_ARG_REG_BETA = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_IFF = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_MIN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_MAX = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_CONT_FRAC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_CONT_POL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_GCD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_LCM = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_SUM = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_PROD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_AVG = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_VAR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_STD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_RND_LIST = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_COALESCE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_OR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_AND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_XOR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_ARGMIN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_ARGMAX = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_MEDIAN = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_MODE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_BASE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_FUNCTION_VARIADIC_NDIST = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_PLUS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_MINUS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_MULTIPLY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_DIVIDE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_DIVIDE_QUOTIENT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_POWER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_FACT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_MOD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_PERC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_TETRATION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_SQUARE_ROOT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_CUBE_ROOT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_OPERATOR_FOURTH_ROOT = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_LEFT_PARENTHESES = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_RIGHT_PARENTHESES = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_COMMA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_SEMI = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_BLANK = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_NUMBER_INTEGER = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_NUMBER_DECIMAL = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_NUMBER_LEADING_ZERO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_NUMBER_SCI_NOTATION = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_NUMBER_FRACTIONS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_PARSER_SYMBOL_UNICODE_MATH = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_PERC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_PERM = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_YOTTA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_ZETTA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_EXA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_PETA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_TERA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_GIGA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_MEGA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_KILO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_HECTO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_DECA = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_DECI = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_CENTI = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_MILLI = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_MICRO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_NANO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_PICO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_FEMTO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_ATTO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_ZEPTO = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_DIMENSIONLESS_UNIT_YOCTO = nullptr;
	// -------------------------------------------------
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_METRE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILOMETRE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_CENTIMETRE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILLIMETRE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_INCH = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_YARD = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_FEET = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_NAUTICAL_MILE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_METRE2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_CENTIMETRE2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILLIMETRE2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_ARE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_HECTARE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_ACRE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILOMETRE2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILLIMETRE3 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_CENTIMETRE3 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_METRE3 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILOMETRE3 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILLILITRE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_LITRE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_GALLON = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_PINT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_SECOND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILLISECOND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MINUTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_HOUR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_DAY = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_WEEK = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_JULIAN_YEAR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILOGRAM = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_GRAM = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILLIGRAM = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_DECAGRAM = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_TONNE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_OUNCE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_POUND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_BIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILOBIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MEGABIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_GIGABIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_TERABIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_PETABIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_EXABIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_ZETTABIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_YOTTABIT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_BYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILOBYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MEGABYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_GIGABYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_TERABYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_PETABYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_EXABYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_ZETTABYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_YOTTABYTE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_JOULE = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_ELECTRONO_VOLT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILO_ELECTRONO_VOLT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MEGA_ELECTRONO_VOLT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_GIGA_ELECTRONO_VOLT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_TERA_ELECTRONO_VOLT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_METRE_PER_SECOND = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILOMETRE_PER_HOUR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILE_PER_HOUR = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KNOT = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_METRE_PER_SECOND2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_KILOMETRE_PER_HOUR2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MILE_PER_HOUR2 = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_RADIAN_ARC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_DEGREE_ARC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_MINUTE_ARC = nullptr;
	API_VISIBLE StringPtr StringResources::DEFAULT_UNIT_SECOND_ARC = nullptr;


	STATIC_VARS_INITI_CPP(StringResources,
		STATIC_VARS_INITI_DEPENDENCY(StringInvariant);

		enLangCode = S(UTF("en"));
		frLangCode = S(UTF("fr"));
		deLangCode = S(UTF("de"));
		itLangCode = S(UTF("it"));
		plLangCode = S(UTF("pl"));
		ptLangCode = S(UTF("pt"));
		esLangCode = S(UTF("es"));

		newLine = UTF("\\n\"") + StringInvariant::NEW_LINE + UTF("+ \"");
		endLine = newLine + UTF("\");");

		LINE_BREAK = S(UTF("// -------------------------------------------------"));

		// package
		DEFAULT_USER_LANGUAGE = S(UTF("English"));
		// -------------------------------------------------
		DEFAULT_STARTING_SYNTAX_CHECK = S(UTF("Starting syntax check..."));
		DEFAULT_NO_ERRORS_DETECTED = S(UTF("No errors detected."));
		DEFAULT_NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION = S(UTF("No errors detected in argument definition."));
		DEFAULT_NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION = S(UTF("No errors detected in recursive argument definition."));
		DEFAULT_NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION = S(UTF("No errors detected in function definition."));
		DEFAULT_NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION = S(UTF("No errors detected in constant definition."));
		DEFAULT_LEXICAL_ERROR_HAS_BEEN_FOUND = S(UTF("A lexical error has been found."));
		DEFAULT_ERRORS_HAVE_BEEN_FOUND = S(UTF("Errors have been found."));
		DEFAULT_ALREADY_CHECKED_NO_ERRORS = S(UTF("The syntax has already been checked - no errors detected."));
		DEFAULT_SYNTAX_STATUS_UNKNOWN = S(UTF("The syntax status is unknown."));
		DEFAULT_PROBLEM_WITH_EXPRESSION_SYNTAX = S(UTF("There is a problem with expression syntax."));
		// -------------------------------------------------
		DEFAULT_ENCOUNTERED = S(UTF("Encountered"));
		DEFAULT_WHILE_PARSING = S(UTF("while parsing"));
		DEFAULT_BUT_GOT = S(UTF("but got"));
		DEFAULT_LEXICAL_ERROR = S(UTF("Lexical error"));
		DEFAULT_AT_INDEX = S(UTF("at index"));
		DEFAULT_AFTER = S(UTF("after"));
		DEFAULT_WAS_EXPECTING = S(UTF("Was expecting"));
		DEFAULT_WAS_EXPECTING_ONE_OF = S(UTF("Was expecting one of"));
		DEFAULT_UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED = S(UTF("An unexpected exception was encountered. Probably a parser error - please report it."));
		DEFAULT_UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED = S(UTF("An unexpected token manager error was encountered. Probably a parser error - please report it."));
		// -------------------------------------------------
		DEFAULT_EXPRESSION_STRING_IS_EMPTY = S(UTF("The expression StringPtr is empty."));
		DEFAULT_EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS = S(UTF("The expression does not contain any tokens."));
		DEFAULT_DUPLICATED_KEYWORD = S(UTF("Duplicated keywords were found. Check user-defined items. Consider using option to override built-in tokens."));
		DEFAULT_ELEMENT = S(UTF("Element"));
		DEFAULT_ERROR = S(UTF("Error"));
		DEFAULT_EXCEPTION = S(UTF("Exception"));
		DEFAULT_TOKEN = S(UTF("Token"));
		DEFAULT_INDEX = S(UTF("index"));
		DEFAULT_INVALID_TOKEN = S(UTF("Invalid token."));
		DEFAULT_INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR = S(UTF("Invalid token. Possibly missing multiplication operator - try implied multiplication mode."));
		DEFAULT_EXPRESSION_TOKENS = S(UTF("Expression tokens"));
		DEFAULT_NULL_TOKENS_LIST = S(UTF("NULL tokens list"));
		// -------------------------------------------------
		DEFAULT_FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS = S(UTF("User-defined function with extended body - no errors by assumption."));
		DEFAULT_ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS = S(UTF("User-defined argument with extended body - no errors by assumption."));
		DEFAULT_PROVIDED_EXTENSION_IS_NULL = S(UTF("Provided extension is null."));
		DEFAULT_PROVIDED_STRING_IS_NULL = S(UTF("Provided StringPtr is null."));
		DEFAULT_PROVIDED_ELEMENTS_ARE_NULL = S(UTF("Provided elements are null."));
		DEFAULT_MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE = S(UTF("Possibly missing multiplication operator - try implied multiplication mode."));
		// -------------------------------------------------
		DEFAULT_STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT = S(UTF("Starting syntax check of the dependent user-defined argument."));
		DEFAULT_STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT = S(UTF("Starting syntax check of the user-defined recursive argument."));
		DEFAULT_STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION = S(UTF("Starting syntax check of the user-defined function."));
		DEFAULT_STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION = S(UTF("Starting syntax check of the variadic user-defined function."));
		// -------------------------------------------------
		DEFAULT_ARGUMENT_WAS_EXPECTED = S(UTF("User-defined argument was expected."));
		DEFAULT_RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER = S(UTF("A recursive user-defined argument requires one parameter."));
		// -------------------------------------------------
		DEFAULT_INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION = S(UTF("Incorrect number of parameters in user-defined function."));
		// -------------------------------------------------
		DEFAULT_INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS = S(UTF("Incorrect number of function parameters."));
		DEFAULT_EXPECTED = S(UTF("Expected"));
		DEFAULT_PROVIDED = S(UTF("provided"));
		DEFAULT_USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT = S(UTF("Incorrect number of parameters in user-defined function - at least one argument is expected."));
		DEFAULT_EXPECTED_EVEN_NUMBER_OF_ARGUMENTS = S(UTF("Even number of arguments was expected."));
		// -------------------------------------------------
		DEFAULT_INVALID_FUNCTION_NAME = S(UTF("Invalid function name."));
		DEFAULT_INVALID_ARGUMENT_NAME = S(UTF("Invalid argument name."));
		DEFAULT_INVALID_CONSTANT_NAME = S(UTF("Invalid constant name."));
		DEFAULT_INVALID_FUNCTION_DEFINITION = S(UTF("Invalid function definition."));
		DEFAULT_INVALID_ARGUMENT_DEFINITION = S(UTF("Invalid argument definition."));
		DEFAULT_INVALID_CONSTANT_DEFINITION = S(UTF("Invalid constant definition."));
		DEFAULT_PATTERN_DOES_NOT_MATCH = S(UTF("Pattern does not match."));
		DEFAULT_PATTERN_EXAMPLES = S(UTF("Pattern examples"));
		// -------------------------------------------------
		DEFAULT_CONSTANT_WAS_EXPECTED = S(UTF("Constant value was expected."));
		DEFAULT_USER_CONSTANT_WAS_EXPECTED =S(UTF("User-defined constant was expected."));
		// -------------------------------------------------
		DEFAULT_UNARY_FUNCTION_EXPECTS_1_PARAMETER = S(UTF("A unary function expects 1 parameter."));
		DEFAULT_BINARY_FUNCTION_EXPECTS_2_PARAMETERS = S(UTF("A binary function expects 2 parameters."));
		DEFAULT_TERNARY_FUNCTION_EXPECTS_3_PARAMETERS = S(UTF("A ternary function expects 3 parameters."));
		// -------------------------------------------------
		DEFAULT_DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS = S(UTF("A derivative operator expects 2 or 3 or 4 or 5 calculus parameters."));
		DEFAULT_ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION = S(UTF("An argument was expected in a derivative operator invocation."));
		DEFAULT_DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION = S(UTF("Duplicated keywords were found in the calculus operator invocation, check calculus parameters."));
		DEFAULT_ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION = S(UTF("One token (argument or unknown) was expected in the calculus operator invocation."));
		DEFAULT_NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS = S(UTF("N-th order derivative operator expects 3 or 5 calculus parameters."));
		DEFAULT_INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS = S(UTF("The integral / solve operator expects 4 calculus parameters."));
		DEFAULT_ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS = S(UTF("The iterated operator expects 4 or 5 calculus parameters."));
		DEFAULT_FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS = S(UTF("The forward / backward difference operator expects 2 or 3 calculus parameters."));
		DEFAULT_FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED = S(UTF("An argument was expected in the forward / backward difference operator invocation."));
		DEFAULT_AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED = S(UTF("At least one argument was expected."));
		// -------------------------------------------------
		DEFAULT_ERROR_WHILE_EXECUTING_THE_CALCULATE = S(UTF("Error while executing the calculate."));
		DEFAULT_RECURSION_CALLS_COUNTER_EXCEEDED = S(UTF("Recursion calls counter exceeded maximum calls allowed."));
		DEFAULT_RECURSION_CALLS_COUNTER = S(UTF("Recursion calls counter"));
		DEFAULT_STARTING_CALCULATION_LOOP = S(UTF("Starting calculation loop."));
		DEFAULT_CANCEL_REQUEST_FINISHING = S(UTF("Cancel request encountered - finishing."));
		DEFAULT_INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING = S(UTF("Internal error / strange token level - finishing. Probably a parser error - please report it."));
		DEFAULT_FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN = S(UTF("Fatal error, do not know what to do with the encountered token. Probably a parser error - please report it."));
		DEFAULT_MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED = S(UTF("The maximum error message length has been exceeded."));
		// -------------------------------------------------
		DEFAULT_STARTING = S(UTF("Starting..."));
		DEFAULT_PARSING = S(UTF("Parsing"));
		DEFAULT_FULLY_COMPILED = S(UTF("Fully compiled"));
		DEFAULT_CALCULATED_VALUE = S(UTF("Calculated value"));
		DEFAULT_EXITING = S(UTF("Exiting."));
		DEFAULT_DONE = S(UTF("done."));
		// -------------------------------------------------
		DEFAULT_KEYWORD = S(UTF("Keyword"));
		DEFAULT_SYNTAX = S(UTF("Syntax"));
		DEFAULT_NUMBER = S(UTF("Number"));
		DEFAULT_NUMBER_LITERAL = S(UTF("Number literal"));
		DEFAULT_TYPE = S(UTF("Type"));
		DEFAULT_SINCE = S(UTF("Since"));
		DEFAULT_DESCRIPTION = S(UTF("Description"));
		// -------------------------------------------------
		DEFAULT_CALC_STEPS_REGISTER_IS_EMPTY = S(UTF("CalcStepsRegister is empty"));
		DEFAULT_CALC_STEPS_REGISTER_FOR = S(UTF("CalcStepsRegister for"));
		DEFAULT_ARGUMENT = S(UTF("Argument"));
		DEFAULT_FUNCTION = S(UTF("Function"));
		DEFAULT_EXPRESSION = S(UTF("Expression"));
		DEFAULT_RESULT = S(UTF("result"));
		DEFAULT_COMPUTING_TIME = S(UTF("Computing time"));
		DEFAULT_GROUP_SHORT = S(UTF("gr"));
		DEFAULT_NUMBER_SHORT = S(UTF("nr"));
		DEFAULT_FIRST = S(UTF("first"));
		DEFAULT_LAST = S(UTF("last"));
		DEFAULT_DESCRIPTION_SHORT = S(UTF("descr"));
		DEFAULT_STEP = S(UTF("step"));
		// -------------------------------------------------
		DEFAULT_SERIALIZATION_PERFORMED = S(UTF("Serialization has been performed:"));
		DEFAULT_DESERIALIZATION_PERFORMED = S(UTF("Deserialization has been performed:"));
		DEFAULT_NULL_OBJECT_PROVIDED = S(UTF("Null object passed in the parameter."));
		DEFAULT_NULL_FILE_PATH_PROVIDED = S(UTF("Null file passed in the parameter."));
		DEFAULT_FILE_PATH_ZERO_LENGTH_PROVIDED = S(UTF("The file path does not contain any characters."));
		DEFAULT_FILE_PATH_IS_NOT_A_FILE = S(UTF("The file path is not a file:"));
		DEFAULT_FILE_PATH_NOT_EXISTS = S(UTF("The file path does not exist:"));
		DEFAULT_NULL_DATA_PROVIDED = S(UTF("Null data passed in the parameter."));
		DEFAULT_BINARY_SERIALIZATION_ENABLED = S(UTF("Binary serialization is enabled. Use it only in a conscious and limited way."));
		DEFAULT_BINARY_SERIALIZATION_DISABLED = S(UTF("Binary serialization is disabled. You can enable it if you are aware of security risks."));
		// -------------------------------------------------
		DEFAULT_USER_DEFINED_EXPRESSION = S(UTF("User defined expression"));
		DEFAULT_USER_DEFINED_ARGUMENT = S(UTF("User defined argument"));
		DEFAULT_USER_DEFINED_CONSTANT = S(UTF("User defined constant"));
		DEFAULT_USER_DEFINED_FUNCTION = S(UTF("User defined function"));
		DEFAULT_USER_DEFINED_RECURSIVE_ARGUMENT = S(UTF("User defined recursive argument"));
		// -------------------------------------------------
		DEFAULT_HELP_CONTENT_LIMITED_TO_QUERY = S(UTF("Help content limited to query"));
		DEFAULT_ALL_HELP_CONTENT = S(UTF("All help content."));
		DEFAULT_CAPTION = S(UTF("Caption"));
		// -------------------------------------------------
		DEFAULT_WARNING_BINARY_SERIALIZATION_SECURITY_RISKS =
			UTF("SECURITY WARNING:") + StringInvariant::NEW_LINE
			+ UTF("Deserializing data from an untrusted source can introduce security vulnerabilities") + StringInvariant::NEW_LINE
			+ UTF("to your application. Depending on the settings used during deserialization,") + StringInvariant::NEW_LINE
			+ UTF("untrusted data may be able to execute arbitrary code or cause a denial of service") + StringInvariant::NEW_LINE
			+ UTF("attack. Untrusted data can come from over the network from an untrusted source") + StringInvariant::NEW_LINE
			+ UTF("(e.g. any network client), or it can be manipulated/tampered by an intermediary while") + StringInvariant::NEW_LINE
			+ UTF("in transit over an unauthenticated connection, or from local storage where it may") + StringInvariant::NEW_LINE
			+ UTF("have been compromised/tampered, or from many other sources. MathParser.org-mXparser") + StringInvariant::NEW_LINE
			+ UTF("does not provide any means to authenticate data or secure it from tampering. Use an") + StringInvariant::NEW_LINE
			+ UTF("appropriate data authentication method before deserializing. Be very mindful of these") + StringInvariant::NEW_LINE
			+ UTF("attack scenarios; many projects and companies and users of serialization libraries in") + StringInvariant::NEW_LINE
			+ UTF("general have been bitten by untrusted deserialization of user data in the past.") + StringInvariant::NEW_LINE
			;
		// -------------------------------------------------
		DEFAULT_BINARY_RELATION = S(UTF("Binary relation"));
		DEFAULT_BITWISE_OPERATOR = S(UTF("Bitwise operator"));
		DEFAULT_BOOLEAN_OPERATOR = S(UTF("Boolean operator"));
		DEFAULT_CALCULUS_OPERATOR = S(UTF("Calculus operator"));
		DEFAULT_CONSTANT_VALUE = S(UTF("Constant value"));
		DEFAULT_FUNCTION_1_ARG = S(UTF("Unary function"));
		DEFAULT_FUNCTION_2_ARG = S(UTF("Binary function"));
		DEFAULT_FUNCTION_3_ARG = S(UTF("Ternary function"));
		DEFAULT_FUNCTION_VARIADIC = S(UTF("Variadic function"));
		DEFAULT_OPERATOR = S(UTF("Operator"));
		DEFAULT_PARSER_SYMBOL = S(UTF("Parser symbol"));
		DEFAULT_RANDOM_VARIABLE = S(UTF("Random variable"));
		DEFAULT_UNIT = S(UTF("Unit"));
		DEFAULT_DIMENSIONLESS_UNIT = S(UTF("Dimensionless unit"));
		DEFAULT_ITERATED_OPERATOR = S(UTF("Iterated operator"));
		// -------------------------------------------------
		DEFAULT_RATIO_FRACTION = S(UTF("Ratio / Fraction"));
		DEFAULT_METRIC_PREFIX = S(UTF("Metric prefix"));
		DEFAULT_UNIT_OF_LENGTH = S(UTF("Unit of length"));
		DEFAULT_UNIT_OF_AREA = S(UTF("Unit of area"));
		DEFAULT_UNIT_OF_VOLUME = S(UTF("Unit of volume"));
		DEFAULT_UNIT_OF_TIME = S(UTF("Unit of time"));
		DEFAULT_UNIT_OF_MASS = S(UTF("Unit of mass"));
		DEFAULT_UNIT_OF_INFORMATION = S(UTF("Unit of information"));
		DEFAULT_UNIT_OF_ENERGY = S(UTF("Unit of energy"));
		DEFAULT_UNIT_OF_SPEED = S(UTF("Unit of speed"));
		DEFAULT_UNIT_OF_ACCELERATION = S(UTF("Unit of acceleration"));
		DEFAULT_UNIT_OF_ANGLE = S(UTF("Unit of angle"));
		// -------------------------------------------------
		DEFAULT_PHYSICAL_CONSTANT = S(UTF("Physical constant"));
		DEFAULT_ASTRONOMICAL_CONSTANT = S(UTF("Astronomical constant"));
		DEFAULT_MATHEMATICAL_CONSTANT = S(UTF("Mathematical constant"));
		// -------------------------------------------------
		DEFAULT_PROBABILITY_DISTRIBUTION_FUNCTION = S( UTF("Probability distribution function"));
		DEFAULT_CUMULATIVE_DISTRIBUTION_FUNCTION = S( UTF("Cumulative distribution function"));
		DEFAULT_QUANTILE_FUNCTION = S( UTF("Quantile function (inverse cumulative distribution function)"));
		// -------------------------------------------------
		DEFAULT_STUDENTS_T_DISTRIBUTION = S(UTF("Student's t-distribution"));
		DEFAULT_CHI_SQUARED_DISTRIBUTION = S(UTF("Chi-squared distribution"));
		DEFAULT_SNEDECORS_F_DISTRIBUTION = S(UTF("Snedecor's F distribution (F-distribution or F-ratio, also known as Fisher–Snedecor distribution)"));
		DEFAULT_UNIFORM_CONTINUOUS_DISTRIBUTION = S( UTF("Uniform continuous distribution"));
		DEFAULT_UNIFORM_DISCRETE_DISTRIBUTION = S(UTF("Uniform discrete distribution"));
		DEFAULT_NORMAL_DISTRIBUTION = S(UTF("Normal distribution"));
		// -------------------------------------------------
		DEFAULT_RANDOM_INTEGER = S(UTF("Random integer"));
		DEFAULT_RANDOM_NATURAL_NUMBER = S(UTF("Random natural number"));
		DEFAULT_RANDOM_NATURAL_NUMBER_INCLUDING_0 = S(UTF("Random natural number including 0"));
		// -------------------------------------------------
		DEFAULT_SPECIAL_FUNCTION = S(UTF("Special function"));
		// -------------------------------------------------
		DEFAULT_SEMI_MAJOR_AXIS = S(UTF("Semi major axis"));
		// -------------------------------------------------
		DEFAULT_BINARY_RELATION_EQ = S(UTF("Equality"));
		DEFAULT_BINARY_RELATION_NEQ = S(UTF("Inequation"));
		DEFAULT_BINARY_RELATION_LT = S(UTF("Lower than"));
		DEFAULT_BINARY_RELATION_GT = S(UTF("Greater than"));
		DEFAULT_BINARY_RELATION_LEQ = S(UTF("Lower or equal"));
		DEFAULT_BINARY_RELATION_GEQ = S(UTF("Greater or equal"));
		// -------------------------------------------------
		DEFAULT_BITWISE_OPERATOR_COMPL = S(UTF("Bitwise unary complement (NOT)"));
		DEFAULT_BITWISE_OPERATOR_AND = S(UTF("Bitwise and (AND)"));
		DEFAULT_BITWISE_OPERATOR_XOR = S(UTF("Bitwise exclusive or (XOR)"));
		DEFAULT_BITWISE_OPERATOR_OR = S(UTF("Bitwise inclusive or (OR)"));
		DEFAULT_BITWISE_OPERATOR_LEFT_SHIFT = S(UTF("Bitwise signed left shift"));
		DEFAULT_BITWISE_OPERATOR_RIGHT_SHIFT = S(UTF("Bitwise signed right shift"));
		DEFAULT_BITWISE_OPERATOR_NAND = S(UTF("Bitwise not and (NAND)"));
		DEFAULT_BITWISE_OPERATOR_NOR = S(UTF("Bitwise not or (NOR)"));
		DEFAULT_BITWISE_OPERATOR_XNOR = S(UTF("Bitwise exclusive NOR (XNOR)"));
		// -------------------------------------------------
		DEFAULT_BOOLEAN_OPERATOR_AND = S(UTF("Logical conjunction"));
		DEFAULT_BOOLEAN_OPERATOR_OR = S(UTF("Logical disjunction"));
		DEFAULT_BOOLEAN_OPERATOR_NEG = S(UTF("Negation"));
		DEFAULT_BOOLEAN_OPERATOR_NAND = S(UTF("Sheffer stroke"));
		DEFAULT_BOOLEAN_OPERATOR_NOR = S(UTF("Logical not or (joint denial)"));
		DEFAULT_BOOLEAN_OPERATOR_XOR = S(UTF("Exclusive or"));
		DEFAULT_BOOLEAN_OPERATOR_IMP = S(UTF("Implication"));
		DEFAULT_BOOLEAN_OPERATOR_CIMP = S(UTF("Converse implication"));
		DEFAULT_BOOLEAN_OPERATOR_NIMP = S(UTF("Material nonimplication"));
		DEFAULT_BOOLEAN_OPERATOR_CNIMP = S(UTF("Converse nonimplication"));
		DEFAULT_BOOLEAN_OPERATOR_EQV = S(UTF("Logical biconditional"));
		// -------------------------------------------------
		DEFAULT_CALCULUS_OPERATOR_SUM = S(UTF("Summation SIGMA"));
		DEFAULT_CALCULUS_OPERATOR_PROD = S(UTF("Product PI"));
		DEFAULT_CALCULUS_OPERATOR_INT = S(UTF("Definite integral"));
		DEFAULT_CALCULUS_OPERATOR_DER = S(UTF("Derivative"));
		DEFAULT_CALCULUS_OPERATOR_DER_LEFT = S(UTF("Left derivative"));
		DEFAULT_CALCULUS_OPERATOR_DER_RIGHT = S(UTF("Right derivative"));
		DEFAULT_CALCULUS_OPERATOR_DERN = S(UTF("n-th derivative"));
		DEFAULT_CALCULUS_OPERATOR_FORW_DIFF = S(UTF("Forward difference"));
		DEFAULT_CALCULUS_OPERATOR_BACKW_DIFF = S(UTF("Backward difference"));
		DEFAULT_CALCULUS_OPERATOR_AVG = S(UTF("Average"));
		DEFAULT_CALCULUS_OPERATOR_VAR = S(UTF("Bias-corrected sample variance"));
		DEFAULT_CALCULUS_OPERATOR_STD = S(UTF("Bias-corrected sample standard deviation"));
		DEFAULT_CALCULUS_OPERATOR_MIN = S(UTF("Minimum value"));
		DEFAULT_CALCULUS_OPERATOR_MAX = S(UTF("Maximum value"));
		DEFAULT_CALCULUS_OPERATOR_SOLVE = S(UTF("Equation solving (root finding)"));
		// -------------------------------------------------
		DEFAULT_CONSTANT_VALUE_PI = S(UTF("Pi, Archimedes' or Ludolph's number"));
		DEFAULT_CONSTANT_VALUE_EULER = S(UTF("Napier's or Euler's number (base of Natural logarithm)"));
		DEFAULT_CONSTANT_VALUE_EULER_MASCHERONI = S(UTF("Euler-Mascheroni constant"));
		DEFAULT_CONSTANT_VALUE_GOLDEN_RATIO = S(UTF("Golden ratio"));
		DEFAULT_CONSTANT_VALUE_PLASTIC = S(UTF("Plastic constant"));
		DEFAULT_CONSTANT_VALUE_EMBREE_TREFETHEN = S(UTF("Embree-Trefethen constant"));
		DEFAULT_CONSTANT_VALUE_FEIGENBAUM_DELTA = S(UTF("Feigenbaum delta constant"));
		DEFAULT_CONSTANT_VALUE_FEIGENBAUM_ALPHA = S(UTF("Feigenbaum alpha constant"));
		DEFAULT_CONSTANT_VALUE_TWIN_PRIME = S(UTF("Twin prime constant"));
		DEFAULT_CONSTANT_VALUE_MEISSEL_MERTEENS = S(UTF("Meissel-Mertens constant"));
		DEFAULT_CONSTANT_VALUE_BRAUN_TWIN_PRIME = S(UTF("Brun's constant for twin primes"));
		DEFAULT_CONSTANT_VALUE_BRAUN_PRIME_QUADR = S(UTF("Brun's constant for prime quadruplets"));
		DEFAULT_CONSTANT_VALUE_BRUIJN_NEWMAN = S(UTF("de Bruijn-Newman constant"));
		DEFAULT_CONSTANT_VALUE_CATALAN = S(UTF("Catalan's constant"));
		DEFAULT_CONSTANT_VALUE_LANDAU_RAMANUJAN = S(UTF("Landau-Ramanujan constant"));
		DEFAULT_CONSTANT_VALUE_VISWANATH = S(UTF("Viswanath's constant"));
		DEFAULT_CONSTANT_VALUE_LEGENDRE = S(UTF("Legendre's constant"));
		DEFAULT_CONSTANT_VALUE_RAMANUJAN_SOLDNER = S(UTF("Ramanujan-Soldner constant"));
		DEFAULT_CONSTANT_VALUE_ERDOS_BORWEIN = S(UTF("Erdos-Borwein constant"));
		DEFAULT_CONSTANT_VALUE_BERNSTEIN = S(UTF("Bernstein's constant"));
		DEFAULT_CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING = S(UTF("Gauss-Kuzmin-Wirsing constant"));
		DEFAULT_CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY = S(UTF("Hafner-Sarnak-McCurley constant"));
		DEFAULT_CONSTANT_VALUE_GOLOMB_DICKMAN = S(UTF("Golomb-Dickman constant"));
		DEFAULT_CONSTANT_VALUE_CAHEN = S(UTF("Cahen's constant"));
		DEFAULT_CONSTANT_VALUE_LAPLACE_LIMIT = S(UTF("Laplace limit constant"));
		DEFAULT_CONSTANT_VALUE_ALLADI_GRINSTEAD = S(UTF("Alladi-Grinstead constant"));
		DEFAULT_CONSTANT_VALUE_LENGYEL = S(UTF("Lengyel's constant"));
		DEFAULT_CONSTANT_VALUE_LEVY = S(UTF("Levy's constant"));
		DEFAULT_CONSTANT_VALUE_APERY = S(UTF("Apery's constant"));
		DEFAULT_CONSTANT_VALUE_MILLS = S(UTF("Mills' constant"));
		DEFAULT_CONSTANT_VALUE_BACKHOUSE = S(UTF("Backhouse's constant"));
		DEFAULT_CONSTANT_VALUE_PORTER = S(UTF("Porter's constant"));
		DEFAULT_CONSTANT_VALUE_LIEB_QUARE_ICE = S(UTF("Lieb's square ice constant"));
		DEFAULT_CONSTANT_VALUE_NIVEN = S(UTF("Niven's constant"));
		DEFAULT_CONSTANT_VALUE_SIERPINSKI = S(UTF("Sierpinski's constant"));
		DEFAULT_CONSTANT_VALUE_KHINCHIN = S(UTF("Khinchin's constant"));
		DEFAULT_CONSTANT_VALUE_FRANSEN_ROBINSON = S(UTF("Fransen-Robinson constant"));
		DEFAULT_CONSTANT_VALUE_LANDAU = S(UTF("Landau's constant"));
		DEFAULT_CONSTANT_VALUE_PARABOLIC = S(UTF("Parabolic constant"));
		DEFAULT_CONSTANT_VALUE_OMEGA = S(UTF("Omega constant"));
		DEFAULT_CONSTANT_VALUE_MRB = S(UTF("MRB constant"));
		DEFAULT_CONSTANT_VALUE_LI2 = S(UTF("Logarithmic integral at point 2"));
		DEFAULT_CONSTANT_VALUE_GOMPERTZ = S(UTF("Gompertz constant"));
		DEFAULT_CONSTANT_VALUE_LIGHT_SPEED = S(UTF("Light speed in vacuum"));
		DEFAULT_CONSTANT_VALUE_GRAVITATIONAL_CONSTANT = S(UTF("Gravitational constant"));
		DEFAULT_CONSTANT_VALUE_GRAVIT_ACC_EARTH = S(UTF("Gravitational acceleration on Earth"));
		DEFAULT_CONSTANT_VALUE_PLANCK_CONSTANT = S(UTF("Planck constant"));
		DEFAULT_CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED = S(UTF("Reduced Planck constant (Dirac constant)"));
		DEFAULT_CONSTANT_VALUE_PLANCK_LENGTH = S(UTF("Planck length"));
		DEFAULT_CONSTANT_VALUE_PLANCK_MASS = S(UTF("Planck mass"));
		DEFAULT_CONSTANT_VALUE_PLANCK_TIME = S(UTF("Planck time"));
		DEFAULT_CONSTANT_VALUE_LIGHT_YEAR = S(UTF("Light year"));
		DEFAULT_CONSTANT_VALUE_ASTRONOMICAL_UNIT = S(UTF("Astronomical unit"));
		DEFAULT_CONSTANT_VALUE_PARSEC = S(UTF("Parsec"));
		DEFAULT_CONSTANT_VALUE_KILOPARSEC = S(UTF("Kiloparsec"));
		DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL =S(UTF("Earth equatorial radius"));
		DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_POLAR = S(UTF("Earth polar radius"));
		DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_MEAN = S(UTF("Earth mean radius"));
		DEFAULT_CONSTANT_VALUE_EARTH_MASS = S(UTF("Earth mass"));
		DEFAULT_CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS = S(UTF("Earth-Sun distance"));
		DEFAULT_CONSTANT_VALUE_MOON_RADIUS_MEAN = S(UTF("Moon mean radius"));
		DEFAULT_CONSTANT_VALUE_MOON_MASS = S(UTF("Moon mass"));
		DEFAULT_CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS = S(UTF("Moon-Earth distance"));
		DEFAULT_CONSTANT_VALUE_SOLAR_RADIUS = S(UTF("Solar mean radius"));
		DEFAULT_CONSTANT_VALUE_SOLAR_MASS = S(UTF("Solar mass"));
		DEFAULT_CONSTANT_VALUE_MERCURY_RADIUS_MEAN = S(UTF("Mercury mean radius"));
		DEFAULT_CONSTANT_VALUE_MERCURY_MASS = S(UTF("Mercury mass"));
		DEFAULT_CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS = S(UTF("Mercury-Sun distance"));
		DEFAULT_CONSTANT_VALUE_VENUS_RADIUS_MEAN = S(UTF("Venus mean radius"));
		DEFAULT_CONSTANT_VALUE_VENUS_MASS = S(UTF("Venus mass"));
		DEFAULT_CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS = S(UTF("Venus-Sun distance"));
		DEFAULT_CONSTANT_VALUE_MARS_RADIUS_MEAN = S(UTF("Mars mean radius"));
		DEFAULT_CONSTANT_VALUE_MARS_MASS = S(UTF("Mars mass"));
		DEFAULT_CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS = S(UTF("Mars-Sun distance"));
		DEFAULT_CONSTANT_VALUE_JUPITER_RADIUS_MEAN = S(UTF("Jupiter mean radius"));
		DEFAULT_CONSTANT_VALUE_JUPITER_MASS = S(UTF("Jupiter mass"));
		DEFAULT_CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS = S(UTF("Jupiter-Sun distance"));
		DEFAULT_CONSTANT_VALUE_SATURN_RADIUS_MEAN = S(UTF("Saturn mean radius"));
		DEFAULT_CONSTANT_VALUE_SATURN_MASS = S(UTF("Saturn mass"));
		DEFAULT_CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS = S(UTF("Saturn-Sun distance"));
		DEFAULT_CONSTANT_VALUE_URANUS_RADIUS_MEAN = S(UTF("Uranus mean radius"));
		DEFAULT_CONSTANT_VALUE_URANUS_MASS = S(UTF("Uranus mass"));
		DEFAULT_CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS = S(UTF("Uranus-Sun distance"));
		DEFAULT_CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN = S(UTF("Neptune mean radius"));
		DEFAULT_CONSTANT_VALUE_NEPTUNE_MASS = S(UTF("Neptune mass"));
		DEFAULT_CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS = S(UTF("Neptune-Sun distance"));
		DEFAULT_CONSTANT_VALUE_TRUE = S(UTF("Boolean True represented as 1"));
		DEFAULT_CONSTANT_VALUE_FALSE = S(UTF("Boolean False represented as 0"));
		DEFAULT_CONSTANT_VALUE_NPAR = S(UTF("Automatically generated constant for user defined functions, returns number of given function parameters"));
		DEFAULT_CONSTANT_VALUE_NAN = S(UTF("Not-a-Number"));
		// -------------------------------------------------
		DEFAULT_FUNCTION_1_ARG_SIN = S(UTF("Trigonometric sine"));
		DEFAULT_FUNCTION_1_ARG_COS = S(UTF("Trigonometric cosine"));
		DEFAULT_FUNCTION_1_ARG_TAN = S(UTF("Trigonometric tangent"));
		DEFAULT_FUNCTION_1_ARG_CTAN = S(UTF("Trigonometric cotangent"));
		DEFAULT_FUNCTION_1_ARG_SEC = S(UTF("Trigonometric secant"));
		DEFAULT_FUNCTION_1_ARG_COSEC = S(UTF("Trigonometric cosecant"));
		DEFAULT_FUNCTION_1_ARG_ASIN = S(UTF("Inverse trigonometric sine"));
		DEFAULT_FUNCTION_1_ARG_ACOS = S(UTF("Inverse trigonometric cosine"));
		DEFAULT_FUNCTION_1_ARG_ATAN = S(UTF("Inverse trigonometric tangent"));
		DEFAULT_FUNCTION_1_ARG_ACTAN = S(UTF("Inverse trigonometric cotangent"));
		DEFAULT_FUNCTION_1_ARG_LN = S(UTF("Natural logarithm (base e)"));
		DEFAULT_FUNCTION_1_ARG_LOG2 = S(UTF("Binary logarithm (base 2)"));
		DEFAULT_FUNCTION_1_ARG_LOG10 = S(UTF("Common logarithm (base 10)"));
		DEFAULT_FUNCTION_1_ARG_RAD = S(UTF("Degrees to radians"));
		DEFAULT_FUNCTION_1_ARG_EXP = S(UTF("Exponential"));
		DEFAULT_FUNCTION_1_ARG_SQRT = S(UTF("Square root"));
		DEFAULT_FUNCTION_1_ARG_SINH = S(UTF("Hyperbolic sine"));
		DEFAULT_FUNCTION_1_ARG_COSH = S(UTF("Hyperbolic cosine"));
		DEFAULT_FUNCTION_1_ARG_TANH = S(UTF("Hyperbolic tangent"));
		DEFAULT_FUNCTION_1_ARG_COTH = S(UTF("Hyperbolic cotangent"));
		DEFAULT_FUNCTION_1_ARG_SECH = S(UTF("Hyperbolic secant"));
		DEFAULT_FUNCTION_1_ARG_CSCH = S(UTF("Hyperbolic cosecant"));
		DEFAULT_FUNCTION_1_ARG_DEG = S(UTF("Radians to degrees"));
		DEFAULT_FUNCTION_1_ARG_ABS = S(UTF("Absolut value"));
		DEFAULT_FUNCTION_1_ARG_SGN = S(UTF("Signum"));
		DEFAULT_FUNCTION_1_ARG_FLOOR = S(UTF("Floor"));
		DEFAULT_FUNCTION_1_ARG_CEIL = S(UTF("Ceiling"));
		DEFAULT_FUNCTION_1_ARG_NOT = S(UTF("Negation"));
		DEFAULT_FUNCTION_1_ARG_ARSINH = S(UTF("Inverse hyperbolic sine"));
		DEFAULT_FUNCTION_1_ARG_ARCOSH = S(UTF("Inverse hyperbolic cosine"));
		DEFAULT_FUNCTION_1_ARG_ARTANH = S(UTF("Inverse hyperbolic tangent"));
		DEFAULT_FUNCTION_1_ARG_ARCOTH = S(UTF("Inverse hyperbolic cotangent"));
		DEFAULT_FUNCTION_1_ARG_ARSECH = S(UTF("Inverse hyperbolic secant"));
		DEFAULT_FUNCTION_1_ARG_ARCSCH = S(UTF("Inverse hyperbolic cosecant"));
		DEFAULT_FUNCTION_1_ARG_SA = S(UTF("Sinc (normalized)"));
		DEFAULT_FUNCTION_1_ARG_SINC = S(UTF("Sinc (unnormalized)"));
		DEFAULT_FUNCTION_1_ARG_BELL_NUMBER = S(UTF("Bell number"));
		DEFAULT_FUNCTION_1_ARG_LUCAS_NUMBER = S(UTF("Lucas number"));
		DEFAULT_FUNCTION_1_ARG_FIBONACCI_NUMBER = S(UTF("Fibonacci number"));
		DEFAULT_FUNCTION_1_ARG_HARMONIC_NUMBER = S(UTF("Harmonic number"));
		DEFAULT_FUNCTION_1_ARG_IS_PRIME =S(UTF("Prime number test (is number a prime?)"));
		DEFAULT_FUNCTION_1_ARG_PRIME_COUNT = S(UTF("Prime-counting"));
		DEFAULT_FUNCTION_1_ARG_EXP_INT = S(UTF("Exponential integral"));
		DEFAULT_FUNCTION_1_ARG_LOG_INT = S(UTF("Logarithmic integral"));
		DEFAULT_FUNCTION_1_ARG_OFF_LOG_INT = S(UTF("Offset logarithmic integral"));
		DEFAULT_FUNCTION_1_ARG_GAUSS_ERF = S(UTF("Gauss error"));
		DEFAULT_FUNCTION_1_ARG_GAUSS_ERFC = S(UTF("Gauss complementary error"));
		DEFAULT_FUNCTION_1_ARG_GAUSS_ERF_INV = S(UTF("Inverse Gauss error"));
		DEFAULT_FUNCTION_1_ARG_GAUSS_ERFC_INV = S(UTF("Inverse Gauss complementary error"));
		DEFAULT_FUNCTION_1_ARG_ULP = S(UTF("Unit in The Last Place"));
		DEFAULT_FUNCTION_1_ARG_ISNAN = S(UTF("Returns true if value is a Not-a-Number (NaN), false otherwise"));
		DEFAULT_FUNCTION_1_ARG_NDIG10 = S(UTF("Number of digits in numeral system with base 10"));
		DEFAULT_FUNCTION_1_ARG_NFACT = S(UTF("Prime decomposition - number of distinct prime factors"));
		DEFAULT_FUNCTION_1_ARG_ARCSEC = S(UTF("Inverse trigonometric secant"));
		DEFAULT_FUNCTION_1_ARG_ARCCSC = S(UTF("Inverse trigonometric cosecant"));
		DEFAULT_FUNCTION_1_ARG_GAMMA = S(UTF("Gamma"));
		DEFAULT_FUNCTION_1_ARG_LAMBERT_W0 = S(UTF("Lambert-W, principal branch 0, also called the omega or product logarithm"));
		DEFAULT_FUNCTION_1_ARG_LAMBERT_W1 = S(UTF("Lambert-W, branch -1, also called the omega or product logarithm"));
		DEFAULT_FUNCTION_1_ARG_SGN_GAMMA = S(UTF("Signum of Gamma"));
		DEFAULT_FUNCTION_1_ARG_LOG_GAMMA = S(UTF("Log Gamma"));
		DEFAULT_FUNCTION_1_ARG_DI_GAMMA = S(UTF("Digamma as the logarithmic derivative of the Gamma"));
		DEFAULT_FUNCTION_1_ARG_PARAM = S(UTF("Automatically generated function for user defined functions, returns function parameter value at index 'i'"));
		// -------------------------------------------------
		DEFAULT_FUNCTION_2_ARG_LOG = S(UTF("Logarithm"));
		DEFAULT_FUNCTION_2_ARG_MOD = S(UTF("Modulo"));
		DEFAULT_FUNCTION_2_ARG_BINOM_COEFF = S(UTF("Binomial coefficient, number of k-combinations that can be drawn from n-elements set"));
		DEFAULT_FUNCTION_2_ARG_BERNOULLI_NUMBER = S(UTF("Bernoulli numbers"));
		DEFAULT_FUNCTION_2_ARG_STIRLING1_NUMBER = S(UTF("Stirling numbers of the first kind"));
		DEFAULT_FUNCTION_2_ARG_STIRLING2_NUMBER = S(UTF("Stirling numbers of the second kind"));
		DEFAULT_FUNCTION_2_ARG_WORPITZKY_NUMBER = S(UTF("Worpitzky number"));
		DEFAULT_FUNCTION_2_ARG_EULER_NUMBER = S(UTF("Euler number"));
		DEFAULT_FUNCTION_2_ARG_KRONECKER_DELTA = S(UTF("Kronecker delta"));
		DEFAULT_FUNCTION_2_ARG_EULER_POLYNOMIAL = S(UTF("Euler polynomial"));
		DEFAULT_FUNCTION_2_ARG_HARMONIC_NUMBER = S(UTF("Harmonic number"));
		DEFAULT_FUNCTION_2_ARG_ROUND = S(UTF("Half-up rounding"));
		DEFAULT_FUNCTION_2_ARG_NDIG = S(UTF("Number of digits representing the number in numeral system with given base"));
		DEFAULT_FUNCTION_2_ARG_DIGIT10 = S(UTF("Digit at position 1 ... n (left -> right) or 0 ... -(n-1) (right -> left) - base 10 numeral system"));
		DEFAULT_FUNCTION_2_ARG_FACTVAL = S(UTF("Prime decomposition - factor value at position between 1 ... nfact(n) - ascending order by factor value"));
		DEFAULT_FUNCTION_2_ARG_FACTEXP = S(UTF("Prime decomposition - factor exponent / multiplicity at position between 1 ... nfact(n) - ascending order by factor value"));
		DEFAULT_FUNCTION_2_ARG_ROOT = S(UTF("N-th order root of a number"));
		DEFAULT_FUNCTION_2_ARG_INC_GAMMA_LOWER = S(UTF("Lower incomplete gamma"));
		DEFAULT_FUNCTION_2_ARG_INC_GAMMA_UPPER = S(UTF("Upper incomplete Gamma"));
		DEFAULT_FUNCTION_2_ARG_REG_GAMMA_LOWER = S(UTF("Lower regularized P gamma"));
		DEFAULT_FUNCTION_2_ARG_REG_GAMMA_UPPER = S(UTF("Upper regularized Q Gamma"));
		DEFAULT_FUNCTION_2_ARG_PERMUTATIONS = S(UTF("Number of k-permutations that can be drawn from n-elements set"));
		DEFAULT_FUNCTION_2_ARG_BETA = S(UTF("The Beta, also called the Euler integral of the first kind"));
		DEFAULT_FUNCTION_2_ARG_LOG_BETA = S(UTF("The Log Beta, also called the Log Euler integral of the first kind"));
		// -------------------------------------------------
		DEFAULT_FUNCTION_3_ARG_IF = S(UTF("If"));
		DEFAULT_FUNCTION_3_ARG_CHI = S(UTF("Characteristic function for x in (a,b)"));
		DEFAULT_FUNCTION_3_ARG_CHI_LR = S(UTF("Characteristic function for x in [a,b]"));
		DEFAULT_FUNCTION_3_ARG_CHI_L = S(UTF("Characteristic function for x in [a,b)"));
		DEFAULT_FUNCTION_3_ARG_CHI_R = S(UTF("Characteristic function for x in (a,b]"));
		DEFAULT_FUNCTION_3_ARG_DIGIT = S(UTF("Digit at position 1 ... n (left -> right) or 0 ... -(n-1) (right -> left) - numeral system with given base"));
		DEFAULT_FUNCTION_3_ARG_INC_BETA = S(UTF("The incomplete Beta, also called the incomplete Euler integral of the first kind"));
		DEFAULT_FUNCTION_3_ARG_REG_BETA = S(UTF("The regularized incomplete Beta (or regularized beta), also called the regularized incomplete Euler integral of the first kind"));
		// -------------------------------------------------
		DEFAULT_FUNCTION_VARIADIC_IFF = S(UTF("If function"));
		DEFAULT_FUNCTION_VARIADIC_MIN = S(UTF("Minimum"));
		DEFAULT_FUNCTION_VARIADIC_MAX = S(UTF("Maximum"));
		DEFAULT_FUNCTION_VARIADIC_CONT_FRAC = S(UTF("Continued fraction"));
		DEFAULT_FUNCTION_VARIADIC_CONT_POL = S(UTF("Continued polynomial"));
		DEFAULT_FUNCTION_VARIADIC_GCD = S(UTF("Greatest common divisor"));
		DEFAULT_FUNCTION_VARIADIC_LCM = S(UTF("Least common multiple"));
		DEFAULT_FUNCTION_VARIADIC_SUM = S(UTF("Summation"));
		DEFAULT_FUNCTION_VARIADIC_PROD = S(UTF("Multiplication"));
		DEFAULT_FUNCTION_VARIADIC_AVG = S(UTF("Mean / average value"));
		DEFAULT_FUNCTION_VARIADIC_VAR = S(UTF("Bias-corrected sample variance"));
		DEFAULT_FUNCTION_VARIADIC_STD =S(UTF("Bias-corrected sample standard deviation"));
		DEFAULT_FUNCTION_VARIADIC_RND_LIST = S(UTF("Random number from a given list of numbers"));
		DEFAULT_FUNCTION_VARIADIC_COALESCE = S(UTF("Returns the first non-NaN value"));
		DEFAULT_FUNCTION_VARIADIC_OR = S(UTF("Logical disjunction (OR) - variadic"));
		DEFAULT_FUNCTION_VARIADIC_AND = S(UTF("Logical conjunction (AND) - variadic"));
		DEFAULT_FUNCTION_VARIADIC_XOR = S(UTF("Exclusive or (XOR) - variadic"));
		DEFAULT_FUNCTION_VARIADIC_ARGMIN = S(UTF("Arguments / indices of the minima"));
		DEFAULT_FUNCTION_VARIADIC_ARGMAX = S(UTF("Arguments / indices of the maxima"));
		DEFAULT_FUNCTION_VARIADIC_MEDIAN = S(UTF("The sample median"));
		DEFAULT_FUNCTION_VARIADIC_MODE = S(UTF("Mode - the value that appears most often"));
		DEFAULT_FUNCTION_VARIADIC_BASE = S(UTF("Returns number in given numeral system base represented by list of digits"));
		DEFAULT_FUNCTION_VARIADIC_NDIST = S(UTF("Number of distinct values"));
		// -------------------------------------------------
		DEFAULT_OPERATOR_PLUS = S(UTF("Addition"));
		DEFAULT_OPERATOR_MINUS = S(UTF("Subtraction"));
		DEFAULT_OPERATOR_MULTIPLY = S(UTF("Multiplication"));
		DEFAULT_OPERATOR_DIVIDE = S(UTF("Division"));
		DEFAULT_OPERATOR_DIVIDE_QUOTIENT = S(UTF("Integer division (quotient)"));
		DEFAULT_OPERATOR_POWER = S(UTF("Exponentiation"));
		DEFAULT_OPERATOR_FACT = S(UTF("Factorial"));
		DEFAULT_OPERATOR_MOD = S(UTF("Modulo"));
		DEFAULT_OPERATOR_PERC = S(UTF("Percentage"));
		DEFAULT_OPERATOR_TETRATION = S(UTF("Tetration (hyper-4, power tower, exponential tower)"));
		DEFAULT_OPERATOR_SQUARE_ROOT = S(UTF("Square root"));
		DEFAULT_OPERATOR_CUBE_ROOT = S(UTF("Cube root"));
		DEFAULT_OPERATOR_FOURTH_ROOT = S(UTF("Fourth root"));
		// -------------------------------------------------
		DEFAULT_PARSER_SYMBOL_LEFT_PARENTHESES = S(UTF("Left parentheses"));
		DEFAULT_PARSER_SYMBOL_RIGHT_PARENTHESES = S(UTF("Right parentheses"));
		DEFAULT_PARSER_SYMBOL_COMMA = S(UTF("Comma (function parameters)"));
		DEFAULT_PARSER_SYMBOL_SEMI = S(UTF("Semicolon (function parameters)"));
		DEFAULT_PARSER_SYMBOL_BLANK = S(UTF("Blank (whitespace) character"));
		DEFAULT_PARSER_SYMBOL_NUMBER_INTEGER = S(UTF("Integer"));
		DEFAULT_PARSER_SYMBOL_NUMBER_DECIMAL = S(UTF("Decimal"));
		DEFAULT_PARSER_SYMBOL_NUMBER_LEADING_ZERO = S(UTF("Leading zero"));
		DEFAULT_PARSER_SYMBOL_NUMBER_SCI_NOTATION = S(UTF("Scientific notation"));
		DEFAULT_PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO = S(UTF("No leading zero"));
		DEFAULT_PARSER_SYMBOL_NUMBER_FRACTIONS = S(UTF("Fractions"));
		DEFAULT_PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS = S(UTF("Other numeral systems"));
		DEFAULT_PARSER_SYMBOL_UNICODE_MATH = S(UTF(" - Unicode math symbol"));
		// -------------------------------------------------
		DEFAULT_DIMENSIONLESS_UNIT_PERC = S(UTF("Percentage"));
		DEFAULT_DIMENSIONLESS_UNIT_PERM = S(UTF("Per mille"));
		DEFAULT_DIMENSIONLESS_UNIT_YOTTA = S(UTF("Septillion / Yotta"));
		DEFAULT_DIMENSIONLESS_UNIT_ZETTA = S(UTF("Sextillion / Zetta"));
		DEFAULT_DIMENSIONLESS_UNIT_EXA = S(UTF("Quintillion / Exa"));
		DEFAULT_DIMENSIONLESS_UNIT_PETA = S(UTF("Quadrillion / Peta"));
		DEFAULT_DIMENSIONLESS_UNIT_TERA = S(UTF("Trillion / Tera"));
		DEFAULT_DIMENSIONLESS_UNIT_GIGA = S(UTF("Billion / Giga"));
		DEFAULT_DIMENSIONLESS_UNIT_MEGA = S(UTF("Million / Mega"));
		DEFAULT_DIMENSIONLESS_UNIT_KILO = S(UTF("Thousand / Kilo"));
		DEFAULT_DIMENSIONLESS_UNIT_HECTO = S(UTF("Hundred / Hecto"));
		DEFAULT_DIMENSIONLESS_UNIT_DECA = S(UTF("Ten / Deca"));
		DEFAULT_DIMENSIONLESS_UNIT_DECI = S(UTF("Tenth / Deci"));
		DEFAULT_DIMENSIONLESS_UNIT_CENTI = S(UTF("Hundredth / Centi"));
		DEFAULT_DIMENSIONLESS_UNIT_MILLI = S(UTF("Thousandth / Milli"));
		DEFAULT_DIMENSIONLESS_UNIT_MICRO = S(UTF("Millionth / Micro"));
		DEFAULT_DIMENSIONLESS_UNIT_NANO = S(UTF("Billionth / Nano"));
		DEFAULT_DIMENSIONLESS_UNIT_PICO = S(UTF("Trillionth / Pico"));
		DEFAULT_DIMENSIONLESS_UNIT_FEMTO = S(UTF("Quadrillionth / Femto"));
		DEFAULT_DIMENSIONLESS_UNIT_ATTO = S(UTF("Quintillionth / Atto"));
		DEFAULT_DIMENSIONLESS_UNIT_ZEPTO = S(UTF("Sextillionth / Zepto"));
		DEFAULT_DIMENSIONLESS_UNIT_YOCTO = S(UTF("Septillionth / Yocto"));
		// -------------------------------------------------
		DEFAULT_UNIT_METRE = S(UTF("Meter"));
		DEFAULT_UNIT_KILOMETRE = S(UTF("Kilometer"));
		DEFAULT_UNIT_CENTIMETRE = S(UTF("Centimeter"));
		DEFAULT_UNIT_MILLIMETRE = S(UTF("Millimeter"));
		DEFAULT_UNIT_INCH = S(UTF("Inch"));
		DEFAULT_UNIT_YARD = S(UTF("Yard"));
		DEFAULT_UNIT_FEET = S(UTF("Feet"));
		DEFAULT_UNIT_MILE = S(UTF("Mile"));
		DEFAULT_UNIT_NAUTICAL_MILE = S(UTF("Nautical mile"));
		DEFAULT_UNIT_METRE2 = S(UTF("Square meter"));
		DEFAULT_UNIT_CENTIMETRE2 = S(UTF("Square centimeter"));
		DEFAULT_UNIT_MILLIMETRE2 = S(UTF("Square millimeter"));
		DEFAULT_UNIT_ARE = S(UTF("Are"));
		DEFAULT_UNIT_HECTARE = S(UTF("Hectare"));
		DEFAULT_UNIT_ACRE = S(UTF("Acre"));
		DEFAULT_UNIT_KILOMETRE2 = S(UTF("Square kilometer"));
		DEFAULT_UNIT_MILLIMETRE3 = S(UTF("Cubic millimeter"));
		DEFAULT_UNIT_CENTIMETRE3 = S(UTF("Cubic centimeter"));
		DEFAULT_UNIT_METRE3 = S(UTF("Cubic meter"));
		DEFAULT_UNIT_KILOMETRE3 = S(UTF("Cubic kilometer"));
		DEFAULT_UNIT_MILLILITRE = S(UTF("Milliliter"));
		DEFAULT_UNIT_LITRE = S(UTF("Liter"));
		DEFAULT_UNIT_GALLON = S(UTF("Gallon"));
		DEFAULT_UNIT_PINT = S(UTF("Pint"));
		DEFAULT_UNIT_SECOND = S(UTF("Second"));
		DEFAULT_UNIT_MILLISECOND = S(UTF("Millisecond"));
		DEFAULT_UNIT_MINUTE = S(UTF("Minute"));
		DEFAULT_UNIT_HOUR = S(UTF("Hour"));
		DEFAULT_UNIT_DAY = S(UTF("Day"));
		DEFAULT_UNIT_WEEK = S(UTF("Week"));
		DEFAULT_UNIT_JULIAN_YEAR = S(UTF("Julian year = 365.25 days"));
		DEFAULT_UNIT_KILOGRAM = S(UTF("Kilogram"));
		DEFAULT_UNIT_GRAM = S(UTF("Gram"));
		DEFAULT_UNIT_MILLIGRAM = S(UTF("Milligram"));
		DEFAULT_UNIT_DECAGRAM = S(UTF("Decagram"));
		DEFAULT_UNIT_TONNE = S(UTF("Tonne"));
		DEFAULT_UNIT_OUNCE = S(UTF("Ounce"));
		DEFAULT_UNIT_POUND = S(UTF("Pound"));
		DEFAULT_UNIT_BIT = S(UTF("Bit"));
		DEFAULT_UNIT_KILOBIT = S(UTF("Kilobit"));
		DEFAULT_UNIT_MEGABIT = S(UTF("Megabit"));
		DEFAULT_UNIT_GIGABIT = S(UTF("Gigabit"));
		DEFAULT_UNIT_TERABIT = S(UTF("Terabit"));
		DEFAULT_UNIT_PETABIT = S(UTF("Petabit"));
		DEFAULT_UNIT_EXABIT = S(UTF("Exabit"));
		DEFAULT_UNIT_ZETTABIT = S(UTF("Zettabit"));
		DEFAULT_UNIT_YOTTABIT = S(UTF("Yottabit"));
		DEFAULT_UNIT_BYTE = S(UTF("Byte"));
		DEFAULT_UNIT_KILOBYTE = S(UTF("Kilobyte"));
		DEFAULT_UNIT_MEGABYTE = S(UTF("Megabyte"));
		DEFAULT_UNIT_GIGABYTE = S(UTF("Gigabyte"));
		DEFAULT_UNIT_TERABYTE = S(UTF("Terabyte"));
		DEFAULT_UNIT_PETABYTE = S(UTF("Petabyte"));
		DEFAULT_UNIT_EXABYTE = S(UTF("Exabyte"));
		DEFAULT_UNIT_ZETTABYTE = S(UTF("Zettabyte"));
		DEFAULT_UNIT_YOTTABYTE = S(UTF("Yottabyte"));
		DEFAULT_UNIT_JOULE = S(UTF("Joule"));
		DEFAULT_UNIT_ELECTRONO_VOLT = S(UTF("Electronovolt"));
		DEFAULT_UNIT_KILO_ELECTRONO_VOLT = S(UTF("Kiloelectronovolt"));
		DEFAULT_UNIT_MEGA_ELECTRONO_VOLT = S(UTF("Megaelectronovolt"));
		DEFAULT_UNIT_GIGA_ELECTRONO_VOLT = S(UTF("Gigaelectronovolt"));
		DEFAULT_UNIT_TERA_ELECTRONO_VOLT = S(UTF("Teraelectronovolt"));
		DEFAULT_UNIT_METRE_PER_SECOND = S(UTF("Meter per second"));
		DEFAULT_UNIT_KILOMETRE_PER_HOUR = S(UTF("Kilometer per hour"));
		DEFAULT_UNIT_MILE_PER_HOUR = S(UTF("Mile per hour"));
		DEFAULT_UNIT_KNOT = S(UTF("Knot"));
		DEFAULT_UNIT_METRE_PER_SECOND2 = S(UTF("Meter per square second"));
		DEFAULT_UNIT_KILOMETRE_PER_HOUR2 = S(UTF("Kilometer per square hour"));
		DEFAULT_UNIT_MILE_PER_HOUR2 = S(UTF("Mile per square hour"));
		DEFAULT_UNIT_RADIAN_ARC = S(UTF("Radian"));
		DEFAULT_UNIT_DEGREE_ARC = S(UTF("Degree of arc"));
		DEFAULT_UNIT_MINUTE_ARC = S(UTF("Minute of arc"));
		DEFAULT_UNIT_SECOND_ARC = S(UTF("Second of arc"));
	);

	/**
	 * Default translations, currently English
	 *
	 * @return Returns a new instance of StringResources object
	 * containing Default translations, currently English.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::languageDefault() { return new_StringResources(); }
	/**
	 * English translations
	 *
	 * @return Returns a new instance of StringResources object
	 * containing English translations.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::languageEnglish() { return new_StringResources(); }
	/**
	 * French translations
	 *
	 * @return Returns a new instance of StringResources object
	 * containing French translations.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::languageFrench() { return new_StringResourcesFrench(); }
	/**
	 * German translations
	 *
	 * @return Returns a new instance of StringResources object
	 * containing German translations.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::languageGerman() { return new_StringResourcesGerman(); }
	/**
	 * Italian translations
	 *
	 * @return Returns a new instance of StringResources object
	 * containing Italian translations.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::languageItalian() { return new_StringResourcesItalian(); }
	/**
	 * Polish translations
	 *
	 * @return Returns a new instance of StringResources object
	 * containing Polish translations.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::languagePolish() { return new_StringResourcesPolish(); }
	/**
	 * Portuguese translations
	 *
	 * @return Returns a new instance of StringResources object
	 * containing Portuguese translations.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::languagePortuguese() { return new_StringResourcesPortuguese(); }
	/**
	 * Spanish translations
	 *
	 * @return Returns a new instance of StringResources object
	 * containing Spanish translations.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::languageSpanish() { return new_StringResourcesSpanish(); }
	/**
	 * Returns translation that best matches to provided language code.
	 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
	 *
	 * @param language Supported language codes: en, fr, de, it, pl, pt, es.
	 * @return Returns translation that matches the language code.
	 * If language code does not belong to the supported language codes
	 * English translation is returned.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::bestMatchingLanguage(const StringPtr &language) {
		if (language == nullptr) return languageEnglish();
		std::string lang = getLanguageIso(UTF16toUTF8(*language));

		if (lang == "en") return languageEnglish();
		if (lang == "us") return languageEnglish();
		if (lang == "fr") return languageFrench();
		if (lang == "de") return languageGerman();
		if (lang == "it") return languageItalian();
		if (lang == "pl") return languagePolish();
		if (lang == "pt") return languagePortuguese();
		if (lang == "es") return languageSpanish();

		return languageEnglish(); // Default to English if no match is found
	}

	API_VISIBLE std::string StringResources::getLanguageIso(const std::string &language) {

		std::string languageEnglish = "en";
		std::string languageFrench = "fr";
		std::string languageGerman = "de";
		std::string languageItalian = "it";
		std::string languagePolish = "pl";
		std::string languagePortuguese = "pt";
		std::string languageSpanish = "es";

		StringPtr lang = StringUtils::toLowerCase(StringUtils::trim(S(language)));
		if (lang->length() < 2) return languageEnglish;

		if (*lang == UTF("en")) return languageEnglish;
		if (*lang == UTF("us")) return languageEnglish;
		if (*lang == UTF("fr")) return languageFrench;
		if (*lang == UTF("de")) return languageGerman;
		if (*lang == UTF("it")) return languageItalian;
		if (*lang == UTF("pl")) return languagePolish;
		if (*lang == UTF("pt")) return languagePortuguese;
		if (*lang == UTF("es")) return languageSpanish;

		if (StringUtils::contains(lang, UTF("french"))) return languageFrench;
		if (StringUtils::contains(lang, UTF("france"))) return languageFrench;
		if (StringUtils::contains(lang, UTF("français"))) return languageFrench;
		if (StringUtils::contains(lang, UTF("belgium"))) return languageFrench;
		if (StringUtils::contains(lang, UTF("belgique"))) return languageFrench;

		if (StringUtils::contains(lang, UTF("english"))) return languageEnglish;
		if (StringUtils::contains(lang, UTF("england"))) return languageEnglish;
		if (StringUtils::contains(lang, UTF("britain"))) return languageEnglish;
		if (StringUtils::contains(lang, UTF("british"))) return languageEnglish;

		if (StringUtils::contains(lang, UTF("canada"))) return languageEnglish;
		if (StringUtils::contains(lang, UTF("usa"))) return languageEnglish;

		if (StringUtils::contains(lang, UTF("ireland"))) return languageEnglish;
		if (StringUtils::contains(lang, UTF("scotland"))) return languageEnglish;

		if (StringUtils::contains(lang, UTF("german"))) return languageGerman;
		if (StringUtils::contains(lang, UTF("deutsch"))) return languageGerman;

		if (StringUtils::contains(lang, UTF("poland"))) return languagePolish;
		if (StringUtils::contains(lang, UTF("polish"))) return languagePolish;
		if (StringUtils::contains(lang, UTF("polski"))) return languagePolish;
		if (StringUtils::contains(lang, UTF("polska"))) return languagePolish;

		if (StringUtils::contains(lang, UTF("italy"))) return languageItalian;
		if (StringUtils::contains(lang, UTF("italian"))) return languageItalian;
		if (StringUtils::contains(lang, UTF("italia"))) return languageItalian;

		if (StringUtils::contains(lang, UTF("portug"))) return languagePortuguese;
		if (StringUtils::contains(lang, UTF("brasil"))) return languagePortuguese;

		if (StringUtils::contains(lang, UTF("spain"))) return languageSpanish;
		if (StringUtils::contains(lang, UTF("spanish"))) return languageSpanish;
		if (StringUtils::contains(lang, UTF("espa"))) return languageSpanish;

		if (lang->length() > 5) return languageEnglish;

		if (StringUtils::contains(lang, UTF("en"))) return languageEnglish;
		if (StringUtils::contains(lang, UTF("fr"))) return languageFrench;
		if (StringUtils::contains(lang, UTF("de"))) return languageGerman;
		if (StringUtils::contains(lang, UTF("it"))) return languageItalian;
		if (StringUtils::contains(lang, UTF("pl"))) return languagePolish;
		if (StringUtils::contains(lang, UTF("pt"))) return languagePortuguese;
		if (StringUtils::contains(lang, UTF("es"))) return languageSpanish;

		return languageEnglish;
	}

	/**
	 * Returns translation that best matches to the current system locale.
	 * Supported languages: English, French, German, Italian, Polish, Portuguese, Spanish.
	 *
	 * @return  Returns translation that matches the language code in locale.
	 *  If language code does not belong to the supported languages
	 *  English translation is returned.
	 *
	 * @see StringModel
	 * @see StringModel#setStringResources(StringResources)
	 * @see StringModel#setDefaultStringResources()
	 */
	API_VISIBLE StringResourcesPtr StringResources::bestMatchingLanguage() {
		std::string locStr = SystemUtils::getDefaultOsLanguage();
		std::string isoLang = getLanguageIso(locStr);
		return bestMatchingLanguage(isoLang);
	}

	API_VISIBLE void StringResources::print() const {
		printResources(*this, true);
	}

	API_VISIBLE void StringResources::printInitSrc() const {
		printResources(*this, false, true);
	}

	API_VISIBLE StringPtr StringResources::quoteString(const StringPtr &str, bool asSrc) {
		StringPtr tmpStr;
		if (asSrc)
			tmpStr = UTF("S(\"") + StringUtils::replace(str, StringInvariant::NEW_LINE, UTF("\n")) + UTF("\");");
		else
			tmpStr = UTF("\"") + StringUtils::replace(str, StringInvariant::NEW_LINE, UTF("\n")) + UTF("\";");
		return StringUtils::replace(StringUtils::replace(tmpStr, UTF("\n"), newLine), endLine, UTF("\");"));
	}

	API_VISIBLE void StringResources::printCurrentVsDefault(const String &nameStr, const StringPtr &currentValue, const StringPtr &defaultValue, bool printDefault, bool printAsSrc) {
		StringPtr currentValueNew;
		if (!printDefault) {
			currentValueNew = quoteString(currentValue, printAsSrc);
			StringUtils::consolePrintln(nameStr + UTF(" = ") + currentValueNew);
			return;
		}
		StringPtr defaultValueNew = quoteString(defaultValue, false);
		if (*currentValue == *defaultValue) {
			StringUtils::consolePrintln(nameStr + UTF(" = [DEF]") + defaultValueNew);
			return;
		}
		currentValueNew = quoteString(currentValue, false);
		StringUtils::consolePrintln(nameStr + UTF(" = [VAL]") + currentValueNew + UTF(" [DEF]") + defaultValueNew);
	}


	API_VISIBLE StringPtr StringResources::getLocaleString() {
		// TODO lang
		setlocale(LC_ALL, "");
		return S(UTF("en"));
		//return S(std::setlocale(LC_ALL, ""));
	}

	API_VISIBLE StringPtr StringResources::mapToLanguageCode(const String &stringContainingLanguage) {
		String languageString = StringUtils::toLowerCase(stringContainingLanguage);
		if (StringUtils::contains(languageString, UTF("_english"))) return enLangCode;
		if (StringUtils::contains(languageString, UTF("_french"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("_german"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("_italian"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("_polish"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("_portuguese"))) return ptLangCode;
		if (StringUtils::contains(languageString, UTF("_spanish"))) return esLangCode;

		if (StringUtils::contains(languageString, UTF("_en"))) return enLangCode;
		if (StringUtils::contains(languageString, UTF("_fr"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("_de"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("_it"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("_pl"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("_pt"))) return ptLangCode;
		if (StringUtils::contains(languageString, UTF("_es"))) return esLangCode;

		if (StringUtils::contains(languageString, UTF("german"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("polish"))) return plLangCode;
		if (StringUtils::contains(languageString, UTF("portuguese"))) return ptLangCode;
		if (StringUtils::contains(languageString, UTF("spanish"))) return esLangCode;

		return enLangCode;
	}

	API_VISIBLE StringPtr StringResources::mapToLanguageCode(const StringPtr &stringContainingLanguage) {
		if (stringContainingLanguage == nullptr) return enLangCode;
		return mapToLanguageCode(*stringContainingLanguage);
	}

	StringResources::StringResources() {
		/**
		 * Default = "English"
		 */
		USER_LANGUAGE = DEFAULT_USER_LANGUAGE;
		// -------------------------------------------------
		/**
		 * Default = "Starting syntax check..."
		 */
		STARTING_SYNTAX_CHECK = DEFAULT_STARTING_SYNTAX_CHECK;
		/**
		 * Default = "No errors detected."
		 */
		NO_ERRORS_DETECTED = DEFAULT_NO_ERRORS_DETECTED;
		/**
		 * Default = "No errors detected in argument definition."
		 */
		NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION = DEFAULT_NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION;
		/**
		 * Default = "No errors detected in recursive argument definition."
		 */
		NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION =
				DEFAULT_NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION;
		/**
		 * Default = "No errors detected in function definition."
		 */
		NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION = DEFAULT_NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION;
		/**
		 * Default = "No errors detected in constant definition."
		 */
		NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION = DEFAULT_NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION;
		/**
		 * Default = "A lexical error has been found."
		 */
		LEXICAL_ERROR_HAS_BEEN_FOUND = DEFAULT_LEXICAL_ERROR_HAS_BEEN_FOUND;
		/**
		 * Default = "Errors have been found."
		 */
		ERRORS_HAVE_BEEN_FOUND = DEFAULT_ERRORS_HAVE_BEEN_FOUND;
		/**
		 * Default = "The syntax has already been checked - no errors detected."
		 */
		ALREADY_CHECKED_NO_ERRORS = DEFAULT_ALREADY_CHECKED_NO_ERRORS;
		/**
		 * Default = "The syntax status is unknown."
		 */
		SYNTAX_STATUS_UNKNOWN = DEFAULT_SYNTAX_STATUS_UNKNOWN;
		/**
		 * Default = "There is a problem with expression syntax."
		 */
		PROBLEM_WITH_EXPRESSION_SYNTAX = DEFAULT_PROBLEM_WITH_EXPRESSION_SYNTAX;
		// -------------------------------------------------
		/**
		 * Default = "Encountered"
		 */
		ENCOUNTERED = DEFAULT_ENCOUNTERED;
		/**
		 * Default = "while parsing"
		 */
		WHILE_PARSING = DEFAULT_WHILE_PARSING;
		/**
		 * Default = "but got"
		 */
		BUT_GOT = DEFAULT_BUT_GOT;
		/**
		 * Default = "Lexical error"
		 */
		LEXICAL_ERROR = DEFAULT_LEXICAL_ERROR;
		/**
		 * Default = "at index"
		 */
		AT_INDEX = DEFAULT_AT_INDEX;
		/**
		 * Default = "after"
		 */
		AFTER = DEFAULT_AFTER;
		/**
		 * Default = "Was expecting"
		 */
		WAS_EXPECTING = DEFAULT_WAS_EXPECTING;
		/**
		 * Default = "Was expecting one of"
		 */
		WAS_EXPECTING_ONE_OF = DEFAULT_WAS_EXPECTING_ONE_OF;
		/**
		 * Default = "An unexpected exception was encountered. Probably a parser error - please report it."
		 */
		UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED = DEFAULT_UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED;
		/**
		 * Default = "An unexpected token manager error was encountered. Probably a parser error - please report it."
		 */
		UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED = DEFAULT_UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED;
		// -------------------------------------------------
		/**
		 * Default = "The expression is empty."
		 */
		EXPRESSION_STRING_IS_EMPTY = DEFAULT_EXPRESSION_STRING_IS_EMPTY;
		/**
		 * Default = "The expression does not contain any tokens."
		 */
		EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS = DEFAULT_EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS;
		/**
		 * Default = "Duplicated keywords were found. Check user-defined items. Consider using option to override built-in tokens."
		 */
		DUPLICATED_KEYWORD = DEFAULT_DUPLICATED_KEYWORD;
		/**
		 * Default = "Element"
		 */
		ELEMENT = DEFAULT_ELEMENT;
		/**
		 * Default = "Error"
		 */
		ERROR = DEFAULT_ERROR;
		/**
		 * Default = "Exception"
		 */
		EXCEPTION = DEFAULT_EXCEPTION;
		/**
		 * Default = "Token"
		 */
		TOKEN = DEFAULT_TOKEN;
		/**
		 * Default = "index"
		 */
		INDEX = DEFAULT_INDEX;
		/**
		 * Default = "Invalid token."
		 */
		INVALID_TOKEN = DEFAULT_INVALID_TOKEN;
		/**
		 * Default = "Invalid token. Possibly missing multiplication operator - try implied multiplication mode."
		 */
		INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR =
				DEFAULT_INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR;
		/**
		 * Default = "Expression tokens"
		 */
		EXPRESSION_TOKENS = DEFAULT_EXPRESSION_TOKENS;
		/**
		 * Default = "NULL tokens list"
		 */
		NULL_TOKENS_LIST = DEFAULT_NULL_TOKENS_LIST;
		// -------------------------------------------------
		/**
		 * Default = "User-defined function with extended body - no errors by assumption."
		 */
		FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS = DEFAULT_FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS;
		/**
		 * Default = "User-defined argument with extended body - no errors by assumption."
		 */
		ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS = DEFAULT_ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS;
		/**
		 * Default = "Provided extension is null."
		 */
		PROVIDED_EXTENSION_IS_NULL = DEFAULT_PROVIDED_EXTENSION_IS_NULL;
		/**
		 * Default = "Provided is null."
		 */
		PROVIDED_STRING_IS_NULL = DEFAULT_PROVIDED_STRING_IS_NULL;
		/**
		 * Default = "Provided elements are null."
		 */
		PROVIDED_ELEMENTS_ARE_NULL = DEFAULT_PROVIDED_ELEMENTS_ARE_NULL;
		/**
		 * Default = "Possibly missing multiplication operator - try implied multiplication mode."
		 */
		MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE =
				DEFAULT_MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE;
		// -------------------------------------------------
		/**
		 * Default = "Starting syntax check of the dependent user-defined argument."
		 */
		STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT = DEFAULT_STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT;
		/**
		 * Default = "Starting syntax check of the user-defined recursive argument."
		 */
		STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT = DEFAULT_STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT;
		/**
		 * Default = "Starting syntax check of the user-defined function."
		 */
		STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION = DEFAULT_STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION;
		/**
		 * Default = "Starting syntax check of the variadic user-defined function."
		 */
		STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION =
				DEFAULT_STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION;
		// -------------------------------------------------
		/**
		 * Default = "User-defined argument was expected."
		 */
		ARGUMENT_WAS_EXPECTED = DEFAULT_ARGUMENT_WAS_EXPECTED;
		/**
		 * Default = "A recursive user-defined argument requires one parameter."
		 */
		RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER = DEFAULT_RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER;
		// -------------------------------------------------
		/**
		 * Default = "Incorrect number of parameters in user-defined function."
		 */
		INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION =
				DEFAULT_INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION;
		// -------------------------------------------------
		/**
		 * Default = "Incorrect number of function parameters."
		 */
		INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS = DEFAULT_INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS;
		/**
		 * Default = "Expected"
		 */
		EXPECTED = DEFAULT_EXPECTED;
		/**
		 * Default = "provided"
		 */
		PROVIDED = DEFAULT_PROVIDED;
		/**
		 * Default = "Incorrect number of parameters in user-defined function - at least one argument is expected."
		 */
		USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT =
				DEFAULT_USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT;
		/**
		 * Default = "Even number of arguments was expected."
		 */
		EXPECTED_EVEN_NUMBER_OF_ARGUMENTS = DEFAULT_EXPECTED_EVEN_NUMBER_OF_ARGUMENTS;
		// -------------------------------------------------
		/**
		 * Default = "Invalid function name."
		 */
		INVALID_FUNCTION_NAME = DEFAULT_INVALID_FUNCTION_NAME;
		/**
		 * Default = "Invalid argument name."
		 */
		INVALID_ARGUMENT_NAME = DEFAULT_INVALID_ARGUMENT_NAME;
		/**
		 * Default = "Invalid constant name."
		 */
		INVALID_CONSTANT_NAME = DEFAULT_INVALID_CONSTANT_NAME;
		/**
		 * Default = "Invalid function definition."
		 */
		INVALID_FUNCTION_DEFINITION = DEFAULT_INVALID_FUNCTION_DEFINITION;
		/**
		 * Default = "Invalid argument definition."
		 */
		INVALID_ARGUMENT_DEFINITION = DEFAULT_INVALID_ARGUMENT_DEFINITION;
		/**
		 * Default = "Invalid constant definition."
		 */
		INVALID_CONSTANT_DEFINITION = DEFAULT_INVALID_CONSTANT_DEFINITION;
		/**
		 * Default = "Pattern does not match."
		 */
		PATTERN_DOES_NOT_MATCH = DEFAULT_PATTERN_DOES_NOT_MATCH;
		/**
		 * Default = "Pattern examples"
		 */
		PATTERN_EXAMPLES = DEFAULT_PATTERN_EXAMPLES;
		// -------------------------------------------------
		/**
		 * Default = "Constant value was expected."
		 */
		CONSTANT_WAS_EXPECTED = DEFAULT_CONSTANT_WAS_EXPECTED;
		/**
		 * Default = "User-defined constant was expected."
		 */
		USER_CONSTANT_WAS_EXPECTED = DEFAULT_USER_CONSTANT_WAS_EXPECTED;
		// -------------------------------------------------
		/**
		 * Default = "A unary function expects 1 parameter."
		 */
		UNARY_FUNCTION_EXPECTS_1_PARAMETER = DEFAULT_UNARY_FUNCTION_EXPECTS_1_PARAMETER;
		/**
		 * Default = "A binary function expects 2 parameters."
		 */
		BINARY_FUNCTION_EXPECTS_2_PARAMETERS = DEFAULT_BINARY_FUNCTION_EXPECTS_2_PARAMETERS;
		/**
		 * Default = "A ternary function expects 3 parameters."
		 */
		TERNARY_FUNCTION_EXPECTS_3_PARAMETERS = DEFAULT_TERNARY_FUNCTION_EXPECTS_3_PARAMETERS;
		// -------------------------------------------------
		/**
		 * Default = "A derivative operator expects 2 or 3 or 4 or 5 calculus parameters."
		 */
		DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS =
				DEFAULT_DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS;
		/**
		 * Default = "An argument was expected in a derivative operator invocation."
		 */
		ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION =
				DEFAULT_ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION;
		/**
		 * Default = "Duplicated keywords were found in the calculus operator invocation, check calculus parameters."
		 */
		DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION =
				DEFAULT_DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION;
		/**
		 * Default = "One token (argument or unknown) was expected in the calculus operator invocation."
		 */
		ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION =
				DEFAULT_ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION;
		/**
		 * Default = "N-th order derivative operator expects 3 or 5 calculus parameters."
		 */
		NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS =
				DEFAULT_NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS;
		/**
		 * Default = "The integral / solve operator expects 4 calculus parameters."
		 */
		INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS =
				DEFAULT_INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS;
		/**
		 * Default = "The iterated operator expects 4 or 5 calculus parameters."
		 */
		ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS =
				DEFAULT_ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS;
		/**
		 * Default = "The forward / backward difference operator expects 2 or 3 calculus parameters."
		 */
		FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS =
				DEFAULT_FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS;
		/**
		 * Default = "An argument was expected in the forward / backward difference operator invocation."
		 */
		FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED = DEFAULT_FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED;
		/**
		 * Default = "At least one argument was expected."
		 */
		AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED = DEFAULT_AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED;
		// -------------------------------------------------
		/**
		 * Default = "Error while executing the calculate."
		 */
		ERROR_WHILE_EXECUTING_THE_CALCULATE = DEFAULT_ERROR_WHILE_EXECUTING_THE_CALCULATE;
		/**
		 * Default = "Recursion calls counter exceeded maximum calls allowed."
		 */
		RECURSION_CALLS_COUNTER_EXCEEDED = DEFAULT_RECURSION_CALLS_COUNTER_EXCEEDED;
		/**
		 * Default = "Recursion calls counter"
		 */
		RECURSION_CALLS_COUNTER = DEFAULT_RECURSION_CALLS_COUNTER;
		/**
		 * Default = "Starting calculation loop."
		 */
		STARTING_CALCULATION_LOOP = DEFAULT_STARTING_CALCULATION_LOOP;
		/**
		 * Default = "Cancel request encountered - finishing."
		 */
		CANCEL_REQUEST_FINISHING = DEFAULT_CANCEL_REQUEST_FINISHING;
		/**
		 * Default = "Internal error / strange token level - finishing. Probably a parser error - please report it."
		 */
		INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING = DEFAULT_INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING;
		/**
		 * Default = "Fatal error, do not know what to do with the encountered token. Probably a parser error - please report it."
		 */
		FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN =
				DEFAULT_FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN;
		/**
		 * Default = "The maximum error message length has been exceeded."
		 */
		MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED = DEFAULT_MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED;
		// -------------------------------------------------
		/**
		 * Default = "Starting..."
		 */
		STARTING = DEFAULT_STARTING;
		/**
		 * Default = "Parsing"
		 */
		PARSING = DEFAULT_PARSING;
		/**
		 * Default = "Fully compiled"
		 */
		FULLY_COMPILED = DEFAULT_FULLY_COMPILED;
		/**
		 * Default = "Calculated value"
		 */
		CALCULATED_VALUE = DEFAULT_CALCULATED_VALUE;
		/**
		 * Default = "Exiting."
		 */
		EXITING = DEFAULT_EXITING;
		/**
		 * Default = "done."
		 */
		DONE = DEFAULT_DONE;
		// -------------------------------------------------
		/**
		 * Default = "Keyword"
		 */
		KEYWORD = DEFAULT_KEYWORD;
		/**
		 * Default = "Syntax"
		 */
		SYNTAX = DEFAULT_SYNTAX;
		/**
		 * Default = "Number"
		 */
		NUMBER = DEFAULT_NUMBER;
		/**
		 * Default = "Number literal"
		 */
		NUMBER_LITERAL = DEFAULT_NUMBER_LITERAL;
		/**
		 * Default = "Type"
		 */
		TYPE = DEFAULT_TYPE;
		/**
		 * Default = "Since"
		 */
		SINCE = DEFAULT_SINCE;
		/**
		 * Default = "Description"
		 */
		DESCRIPTION = DEFAULT_DESCRIPTION;
		// -------------------------------------------------
		/**
		 * Default = "CalcStepsRegister is empty"
		 */
		CALC_STEPS_REGISTER_IS_EMPTY = DEFAULT_CALC_STEPS_REGISTER_IS_EMPTY;
		/**
		 * Default = "CalcStepsRegister for"
		 */
		CALC_STEPS_REGISTER_FOR = DEFAULT_CALC_STEPS_REGISTER_FOR;
		/**
		 * Default = "Argument"
		 */
		ARGUMENT = DEFAULT_ARGUMENT;
		/**
		 * Default = "Function"
		 */
		FUNCTION = DEFAULT_FUNCTION;
		/**
		 * Default = "Expression"
		 */
		EXPRESSION = DEFAULT_EXPRESSION;
		/**
		 * Default = "result"
		 */
		RESULT = DEFAULT_RESULT;
		/**
		 * Default = "Computing time"
		 */
		COMPUTING_TIME = DEFAULT_COMPUTING_TIME;
		/**
		 * Default = "gr"
		 */
		GROUP_SHORT = DEFAULT_GROUP_SHORT;
		/**
		 * Default = "nr"
		 */
		NUMBER_SHORT = DEFAULT_NUMBER_SHORT;
		/**
		 * Default = "first"
		 */
		FIRST = DEFAULT_FIRST;
		/**
		 * Default = "last"
		 */
		LAST = DEFAULT_LAST;
		/**
		 * Default = "descr"
		 */
		DESCRIPTION_SHORT = DEFAULT_DESCRIPTION_SHORT;
		/**
		 * Default = "step"
		 */
		STEP = DEFAULT_STEP;
		// -------------------------------------------------
		/**
		 * Default = "Serialization has been performed:"
		 */
		SERIALIZATION_PERFORMED = DEFAULT_SERIALIZATION_PERFORMED;
		/**
		 * Default = "Deserialization has been performed:"
		 */
		DESERIALIZATION_PERFORMED = DEFAULT_DESERIALIZATION_PERFORMED;
		/**
		 * Default = "Null object passed in the parameter."
		 */
		NULL_OBJECT_PROVIDED = DEFAULT_NULL_OBJECT_PROVIDED;
		/**
		 * Default = "Null file passed in the parameter."
		 */
		NULL_FILE_PATH_PROVIDED = DEFAULT_NULL_FILE_PATH_PROVIDED;
		/**
		 * Default = "The file path does not contain any characters."
		 */
		FILE_PATH_ZERO_LENGTH_PROVIDED = DEFAULT_FILE_PATH_ZERO_LENGTH_PROVIDED;
		/**
		 * Default = "The file path is not a file:"
		 */
		FILE_PATH_IS_NOT_A_FILE = DEFAULT_FILE_PATH_IS_NOT_A_FILE;
		/**
		 * Default = "The file path does not exist:"
		 */
		FILE_PATH_NOT_EXISTS = DEFAULT_FILE_PATH_NOT_EXISTS;
		/**
		 * Default = "Null data passed in the parameter."
		 */
		NULL_DATA_PROVIDED = DEFAULT_NULL_DATA_PROVIDED;
		/**
		 * Default = "Binary serialization is enabled. Use it only in a conscious and limited way."
		 */
		BINARY_SERIALIZATION_ENABLED = DEFAULT_BINARY_SERIALIZATION_ENABLED;
		/**
		 * Default = "Binary serialization is disabled. You can enable it if you are aware of security risks."
		 */
		BINARY_SERIALIZATION_DISABLED = DEFAULT_BINARY_SERIALIZATION_DISABLED;
		// -------------------------------------------------
		/**
		 * Default = "User defined expression"
		 */
		USER_DEFINED_EXPRESSION = DEFAULT_USER_DEFINED_EXPRESSION;
		/**
		 * Default = "User defined argument"
		 */
		USER_DEFINED_ARGUMENT = DEFAULT_USER_DEFINED_ARGUMENT;
		/**
		 * Default = "User defined constant"
		 */
		USER_DEFINED_CONSTANT = DEFAULT_USER_DEFINED_CONSTANT;
		/**
		 * Default = "User defined function"
		 */
		USER_DEFINED_FUNCTION = DEFAULT_USER_DEFINED_FUNCTION;
		/**
		 * Default = "User defined recursive argument"
		 */
		USER_DEFINED_RECURSIVE_ARGUMENT = DEFAULT_USER_DEFINED_RECURSIVE_ARGUMENT;
		// -------------------------------------------------
		/**
		 * Default = "Help content limited to query"
		 */
		HELP_CONTENT_LIMITED_TO_QUERY = DEFAULT_HELP_CONTENT_LIMITED_TO_QUERY;
		/**
		 * Default = "All help content."
		 */
		ALL_HELP_CONTENT = DEFAULT_ALL_HELP_CONTENT;
		/**
		 * Default = "Caption"
		 */
		CAPTION = DEFAULT_CAPTION;
		// -------------------------------------------------
		/**
		 * Default = "Deserializing data from an untrusted source can introduce security vulnerabilities to your application."
		 */
		WARNING_BINARY_SERIALIZATION_SECURITY_RISKS = DEFAULT_WARNING_BINARY_SERIALIZATION_SECURITY_RISKS;
		// -------------------------------------------------
		/**
		 * Default = "Binary relation"
		 */
		BINARY_RELATION = DEFAULT_BINARY_RELATION;
		/**
		 * Default = "Bitwise operator"
		 */
		BITWISE_OPERATOR = DEFAULT_BITWISE_OPERATOR;
		/**
		 * Default = "Boolean operator"
		 */
		BOOLEAN_OPERATOR = DEFAULT_BOOLEAN_OPERATOR;
		/**
		 * Default = "Calculus operator"
		 */
		CALCULUS_OPERATOR = DEFAULT_CALCULUS_OPERATOR;
		/**
		 * Default = "Constant value"
		 */
		CONSTANT_VALUE = DEFAULT_CONSTANT_VALUE;
		/**
		 * Default = "Unary function"
		 */
		FUNCTION_1_ARG = DEFAULT_FUNCTION_1_ARG;
		/**
		 * Default = "Binary function"
		 */
		FUNCTION_2_ARG = DEFAULT_FUNCTION_2_ARG;
		/**
		 * Default = "Ternary function"
		 */
		FUNCTION_3_ARG = DEFAULT_FUNCTION_3_ARG;
		/**
		 * Default = "Variadic function"
		 */
		FUNCTION_VARIADIC = DEFAULT_FUNCTION_VARIADIC;
		/**
		 * Default = "Operator"
		 */
		OPERATOR = DEFAULT_OPERATOR;
		/**
		 * Default = "Parser symbol"
		 */
		PARSER_SYMBOL = DEFAULT_PARSER_SYMBOL;
		/**
		 * Default = "Random variable"
		 */
		RANDOM_VARIABLE = DEFAULT_RANDOM_VARIABLE;
		/**
		 * Default = "Unit"
		 */
		UNIT = DEFAULT_UNIT;
		/**
		 * Default = "Dimensionless unit"
		 */
		DIMENSIONLESS_UNIT = DEFAULT_DIMENSIONLESS_UNIT;
		/**
		 * Default = "Iterated operator"
		 */
		ITERATED_OPERATOR = DEFAULT_ITERATED_OPERATOR;
		// -------------------------------------------------
		/**
		 * Default = "Ratio / Fraction"
		 */
		RATIO_FRACTION = DEFAULT_RATIO_FRACTION;
		/**
		 * Default = "Metric prefix"
		 */
		METRIC_PREFIX = DEFAULT_METRIC_PREFIX;
		/**
		 * Default = "Unit of length"
		 */
		UNIT_OF_LENGTH = DEFAULT_UNIT_OF_LENGTH;
		/**
		 * Default = "Unit of area"
		 */
		UNIT_OF_AREA = DEFAULT_UNIT_OF_AREA;
		/**
		 * Default = "Unit of volume"
		 */
		UNIT_OF_VOLUME = DEFAULT_UNIT_OF_VOLUME;
		/**
		 * Default = "Unit of time"
		 */
		UNIT_OF_TIME = DEFAULT_UNIT_OF_TIME;
		/**
		 * Default = "Unit of mass"
		 */
		UNIT_OF_MASS = DEFAULT_UNIT_OF_MASS;
		/**
		 * Default = "Unit of information"
		 */
		UNIT_OF_INFORMATION = DEFAULT_UNIT_OF_INFORMATION;
		/**
		 * Default = "Unit of energy"
		 */
		UNIT_OF_ENERGY = DEFAULT_UNIT_OF_ENERGY;
		/**
		 * Default = "Unit of speed"
		 */
		UNIT_OF_SPEED = DEFAULT_UNIT_OF_SPEED;
		/**
		 * Default = "Unit of acceleration"
		 */
		UNIT_OF_ACCELERATION = DEFAULT_UNIT_OF_ACCELERATION;
		/**
		 * Default = "Unit of angle"
		 */
		UNIT_OF_ANGLE = DEFAULT_UNIT_OF_ANGLE;
		// -------------------------------------------------
		/**
		 * Default = "Physical constant"
		 */
		PHYSICAL_CONSTANT = DEFAULT_PHYSICAL_CONSTANT;
		/**
		 * Default = "Astronomical constant"
		 */
		ASTRONOMICAL_CONSTANT = DEFAULT_ASTRONOMICAL_CONSTANT;
		/**
		 * Default = "Mathematical constant"
		 */
		MATHEMATICAL_CONSTANT = DEFAULT_MATHEMATICAL_CONSTANT;
		// -------------------------------------------------
		/**
		 * Default = "Probability distribution function"
		 */
		PROBABILITY_DISTRIBUTION_FUNCTION = DEFAULT_PROBABILITY_DISTRIBUTION_FUNCTION;
		/**
		 * Default = "Cumulative distribution function"
		 */
		CUMULATIVE_DISTRIBUTION_FUNCTION = DEFAULT_CUMULATIVE_DISTRIBUTION_FUNCTION;
		/**
		 * Default = "Quantile function (inverse cumulative distribution function)"
		 */
		QUANTILE_FUNCTION = DEFAULT_QUANTILE_FUNCTION;
		// -------------------------------------------------
		/**
		 * Default = "Student's t-distribution"
		 */
		STUDENTS_T_DISTRIBUTION = DEFAULT_STUDENTS_T_DISTRIBUTION;
		/**
		 * Default = "Chi-squared distribution"
		 */
		CHI_SQUARED_DISTRIBUTION = DEFAULT_CHI_SQUARED_DISTRIBUTION;
		/**
		 * Default = "Snedecor's F distribution (F-distribution or F-ratio, also known as Fisher–Snedecor distribution)"
		 */
		SNEDECORS_F_DISTRIBUTION = DEFAULT_SNEDECORS_F_DISTRIBUTION;
		/**
		 * Default = "Uniform continuous distribution"
		 */
		UNIFORM_CONTINUOUS_DISTRIBUTION = DEFAULT_UNIFORM_CONTINUOUS_DISTRIBUTION;
		/**
		 * Default = "Uniform discrete distribution"
		 */
		UNIFORM_DISCRETE_DISTRIBUTION = DEFAULT_UNIFORM_DISCRETE_DISTRIBUTION;
		/**
		 * Default = "Normal distribution"
		 */
		NORMAL_DISTRIBUTION = DEFAULT_NORMAL_DISTRIBUTION;
		// -------------------------------------------------
		/**
		 * Default = "Random integer"
		 */
		RANDOM_INTEGER = DEFAULT_RANDOM_INTEGER;
		/**
		 * Default = "Random natural number"
		 */
		RANDOM_NATURAL_NUMBER = DEFAULT_RANDOM_NATURAL_NUMBER;
		/**
		 * Default = "Random natural number including 0"
		 */
		RANDOM_NATURAL_NUMBER_INCLUDING_0 = DEFAULT_RANDOM_NATURAL_NUMBER_INCLUDING_0;
		// -------------------------------------------------
		/**
		 * Default = "Special function"
		 */
		SPECIAL_FUNCTION = DEFAULT_SPECIAL_FUNCTION;
		// -------------------------------------------------
		/**
		 * Default = "Semi major axis"
		 */
		SEMI_MAJOR_AXIS = DEFAULT_SEMI_MAJOR_AXIS;
		// -------------------------------------------------
		/**
		 * Default = "Equality"
		 */
		BINARY_RELATION_EQ = DEFAULT_BINARY_RELATION_EQ;
		/**
		 * Default = "Inequation"
		 */
		BINARY_RELATION_NEQ = DEFAULT_BINARY_RELATION_NEQ;
		/**
		 * Default = "Lower than"
		 */
		BINARY_RELATION_LT = DEFAULT_BINARY_RELATION_LT;
		/**
		 * Default = "Greater than"
		 */
		BINARY_RELATION_GT = DEFAULT_BINARY_RELATION_GT;
		/**
		 * Default = "Lower or equal"
		 */
		BINARY_RELATION_LEQ = DEFAULT_BINARY_RELATION_LEQ;
		/**
		 * Default = "Greater or equal"
		 */
		BINARY_RELATION_GEQ = DEFAULT_BINARY_RELATION_GEQ;
		// -------------------------------------------------
		/**
		 * Default = "Bitwise unary complement (NOT)"
		 */
		BITWISE_OPERATOR_COMPL = DEFAULT_BITWISE_OPERATOR_COMPL;
		/**
		 * Default = "Bitwise and (AND)"
		 */
		BITWISE_OPERATOR_AND = DEFAULT_BITWISE_OPERATOR_AND;
		/**
		 * Default = "Bitwise exclusive or (XOR)"
		 */
		BITWISE_OPERATOR_XOR = DEFAULT_BITWISE_OPERATOR_XOR;
		/**
		 * Default = "Bitwise inclusive or (OR)"
		 */
		BITWISE_OPERATOR_OR = DEFAULT_BITWISE_OPERATOR_OR;
		/**
		 * Default = "Bitwise signed left shift"
		 */
		BITWISE_OPERATOR_LEFT_SHIFT = DEFAULT_BITWISE_OPERATOR_LEFT_SHIFT;
		/**
		 * Default = "Bitwise signed right shift"
		 */
		BITWISE_OPERATOR_RIGHT_SHIFT = DEFAULT_BITWISE_OPERATOR_RIGHT_SHIFT;
		/**
		 * Default = "Bitwise not and (NAND)"
		 */
		BITWISE_OPERATOR_NAND = DEFAULT_BITWISE_OPERATOR_NAND;
		/**
		 * Default = "Bitwise not or (NOR)"
		 */
		BITWISE_OPERATOR_NOR = DEFAULT_BITWISE_OPERATOR_NOR;
		/**
		 * Default = "Bitwise exclusive NOR (XNOR)"
		 */
		BITWISE_OPERATOR_XNOR = DEFAULT_BITWISE_OPERATOR_XNOR;
		// -------------------------------------------------
		/**
		 * Default = "Logical conjunction"
		 */
		BOOLEAN_OPERATOR_AND = DEFAULT_BOOLEAN_OPERATOR_AND;
		/**
		 * Default = "Logical disjunction"
		 */
		BOOLEAN_OPERATOR_OR = DEFAULT_BOOLEAN_OPERATOR_OR;
		/**
		 * Default = "Negation"
		 */
		BOOLEAN_OPERATOR_NEG = DEFAULT_BOOLEAN_OPERATOR_NEG;
		/**
		 * Default = "Sheffer stroke"
		 */
		BOOLEAN_OPERATOR_NAND = DEFAULT_BOOLEAN_OPERATOR_NAND;
		/**
		 * Default = "Logical not or (joint denial)"
		 */
		BOOLEAN_OPERATOR_NOR = DEFAULT_BOOLEAN_OPERATOR_NOR;
		/**
		 * Default = "Exclusive or"
		 */
		BOOLEAN_OPERATOR_XOR = DEFAULT_BOOLEAN_OPERATOR_XOR;
		/**
		 * Default = "Implication"
		 */
		BOOLEAN_OPERATOR_IMP = DEFAULT_BOOLEAN_OPERATOR_IMP;
		/**
		 * Default = "Converse implication"
		 */
		BOOLEAN_OPERATOR_CIMP = DEFAULT_BOOLEAN_OPERATOR_CIMP;
		/**
		 * Default = "Material nonimplication"
		 */
		BOOLEAN_OPERATOR_NIMP = DEFAULT_BOOLEAN_OPERATOR_NIMP;
		/**
		 * Default = "Converse nonimplication"
		 */
		BOOLEAN_OPERATOR_CNIMP = DEFAULT_BOOLEAN_OPERATOR_CNIMP;
		/**
		 * Default = "Logical biconditional"
		 */
		BOOLEAN_OPERATOR_EQV = DEFAULT_BOOLEAN_OPERATOR_EQV;
		// -------------------------------------------------
		/**
		 * Default = "Summation SIGMA"
		 */
		CALCULUS_OPERATOR_SUM = DEFAULT_CALCULUS_OPERATOR_SUM;
		/**
		 * Default = "Product PI"
		 */
		CALCULUS_OPERATOR_PROD = DEFAULT_CALCULUS_OPERATOR_PROD;
		/**
		 * Default = "Definite integral"
		 */
		CALCULUS_OPERATOR_INT = DEFAULT_CALCULUS_OPERATOR_INT;
		/**
		 * Default = "Derivative"
		 */
		CALCULUS_OPERATOR_DER = DEFAULT_CALCULUS_OPERATOR_DER;
		/**
		 * Default = "Left derivative"
		 */
		CALCULUS_OPERATOR_DER_LEFT = DEFAULT_CALCULUS_OPERATOR_DER_LEFT;
		/**
		 * Default = "Right derivative"
		 */
		CALCULUS_OPERATOR_DER_RIGHT = DEFAULT_CALCULUS_OPERATOR_DER_RIGHT;
		/**
		 * Default = "n-th derivative"
		 */
		CALCULUS_OPERATOR_DERN = DEFAULT_CALCULUS_OPERATOR_DERN;
		/**
		 * Default = "Forward difference"
		 */
		CALCULUS_OPERATOR_FORW_DIFF = DEFAULT_CALCULUS_OPERATOR_FORW_DIFF;
		/**
		 * Default = "Backward difference"
		 */
		CALCULUS_OPERATOR_BACKW_DIFF = DEFAULT_CALCULUS_OPERATOR_BACKW_DIFF;
		/**
		 * Default = "Average"
		 */
		CALCULUS_OPERATOR_AVG = DEFAULT_CALCULUS_OPERATOR_AVG;
		/**
		 * Default = "Bias-corrected sample variance"
		 */
		CALCULUS_OPERATOR_VAR = DEFAULT_CALCULUS_OPERATOR_VAR;
		/**
		 * Default = "Bias-corrected sample standard deviation"
		 */
		CALCULUS_OPERATOR_STD = DEFAULT_CALCULUS_OPERATOR_STD;
		/**
		 * Default = "Minimum value"
		 */
		CALCULUS_OPERATOR_MIN = DEFAULT_CALCULUS_OPERATOR_MIN;
		/**
		 * Default = "Maximum value"
		 */
		CALCULUS_OPERATOR_MAX = DEFAULT_CALCULUS_OPERATOR_MAX;
		/**
		 * Default = "Equation solving (root finding)"
		 */
		CALCULUS_OPERATOR_SOLVE = DEFAULT_CALCULUS_OPERATOR_SOLVE;
		// -------------------------------------------------
		/**
		 * Default = "Pi, Archimedes' or Ludolph's number"
		 */
		CONSTANT_VALUE_PI = DEFAULT_CONSTANT_VALUE_PI;
		/**
		 * Default = "Napier's or Euler's number (base of Natural logarithm)"
		 */
		CONSTANT_VALUE_EULER = DEFAULT_CONSTANT_VALUE_EULER;
		/**
		 * Default = "Euler-Mascheroni constant"
		 */
		CONSTANT_VALUE_EULER_MASCHERONI = DEFAULT_CONSTANT_VALUE_EULER_MASCHERONI;
		/**
		 * Default = "Golden ratio"
		 */
		CONSTANT_VALUE_GOLDEN_RATIO = DEFAULT_CONSTANT_VALUE_GOLDEN_RATIO;
		/**
		 * Default = "Plastic constant"
		 */
		CONSTANT_VALUE_PLASTIC = DEFAULT_CONSTANT_VALUE_PLASTIC;
		/**
		 * Default = "Embree-Trefethen constant"
		 */
		CONSTANT_VALUE_EMBREE_TREFETHEN = DEFAULT_CONSTANT_VALUE_EMBREE_TREFETHEN;
		/**
		 * Default = "Feigenbaum delta constant"
		 */
		CONSTANT_VALUE_FEIGENBAUM_DELTA = DEFAULT_CONSTANT_VALUE_FEIGENBAUM_DELTA;
		/**
		 * Default = "Feigenbaum alpha constant"
		 */
		CONSTANT_VALUE_FEIGENBAUM_ALPHA = DEFAULT_CONSTANT_VALUE_FEIGENBAUM_ALPHA;
		/**
		 * Default = "Twin prime constant"
		 */
		CONSTANT_VALUE_TWIN_PRIME = DEFAULT_CONSTANT_VALUE_TWIN_PRIME;
		/**
		 * Default = "Meissel-Mertens constant"
		 */
		CONSTANT_VALUE_MEISSEL_MERTEENS = DEFAULT_CONSTANT_VALUE_MEISSEL_MERTEENS;
		/**
		 * Default = "Brun's constant for twin primes"
		 */
		CONSTANT_VALUE_BRAUN_TWIN_PRIME = DEFAULT_CONSTANT_VALUE_BRAUN_TWIN_PRIME;
		/**
		 * Default = "Brun's constant for prime quadruplets"
		 */
		CONSTANT_VALUE_BRAUN_PRIME_QUADR = DEFAULT_CONSTANT_VALUE_BRAUN_PRIME_QUADR;
		/**
		 * Default = "de Bruijn-Newman constant"
		 */
		CONSTANT_VALUE_BRUIJN_NEWMAN = DEFAULT_CONSTANT_VALUE_BRUIJN_NEWMAN;
		/**
		 * Default = "Catalan's constant"
		 */
		CONSTANT_VALUE_CATALAN = DEFAULT_CONSTANT_VALUE_CATALAN;
		/**
		 * Default = "Landau-Ramanujan constant"
		 */
		CONSTANT_VALUE_LANDAU_RAMANUJAN = DEFAULT_CONSTANT_VALUE_LANDAU_RAMANUJAN;
		/**
		 * Default = "Viswanath's constant"
		 */
		CONSTANT_VALUE_VISWANATH = DEFAULT_CONSTANT_VALUE_VISWANATH;
		/**
		 * Default = "Legendre's constant"
		 */
		CONSTANT_VALUE_LEGENDRE = DEFAULT_CONSTANT_VALUE_LEGENDRE;
		/**
		 * Default = "Ramanujan-Soldner constant"
		 */
		CONSTANT_VALUE_RAMANUJAN_SOLDNER = DEFAULT_CONSTANT_VALUE_RAMANUJAN_SOLDNER;
		/**
		 * Default = "Erdos-Borwein constant"
		 */
		CONSTANT_VALUE_ERDOS_BORWEIN = DEFAULT_CONSTANT_VALUE_ERDOS_BORWEIN;
		/**
		 * Default = "Bernstein's constant"
		 */
		CONSTANT_VALUE_BERNSTEIN = DEFAULT_CONSTANT_VALUE_BERNSTEIN;
		/**
		 * Default = "Gauss-Kuzmin-Wirsing constant"
		 */
		CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING = DEFAULT_CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING;
		/**
		 * Default = "Hafner-Sarnak-McCurley constant"
		 */
		CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY = DEFAULT_CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY;
		/**
		 * Default = "Golomb-Dickman constant"
		 */
		CONSTANT_VALUE_GOLOMB_DICKMAN = DEFAULT_CONSTANT_VALUE_GOLOMB_DICKMAN;
		/**
		 * Default = "Cahen's constant"
		 */
		CONSTANT_VALUE_CAHEN = DEFAULT_CONSTANT_VALUE_CAHEN;
		/**
		 * Default = "Laplace limit constant"
		 */
		CONSTANT_VALUE_LAPLACE_LIMIT = DEFAULT_CONSTANT_VALUE_LAPLACE_LIMIT;
		/**
		 * Default = "Alladi-Grinstead constant"
		 */
		CONSTANT_VALUE_ALLADI_GRINSTEAD = DEFAULT_CONSTANT_VALUE_ALLADI_GRINSTEAD;
		/**
		 * Default = "Lengyel's constant"
		 */
		CONSTANT_VALUE_LENGYEL = DEFAULT_CONSTANT_VALUE_LENGYEL;
		/**
		 * Default = "Levy's constant"
		 */
		CONSTANT_VALUE_LEVY = DEFAULT_CONSTANT_VALUE_LEVY;
		/**
		 * Default = "Apery's constant"
		 */
		CONSTANT_VALUE_APERY = DEFAULT_CONSTANT_VALUE_APERY;
		/**
		 * Default = "Mills' constant"
		 */
		CONSTANT_VALUE_MILLS = DEFAULT_CONSTANT_VALUE_MILLS;
		/**
		 * Default = "Backhouse's constant"
		 */
		CONSTANT_VALUE_BACKHOUSE = DEFAULT_CONSTANT_VALUE_BACKHOUSE;
		/**
		 * Default = "Porter's constant"
		 */
		CONSTANT_VALUE_PORTER = DEFAULT_CONSTANT_VALUE_PORTER;
		/**
		 * Default = "Lieb's square ice constant"
		 */
		CONSTANT_VALUE_LIEB_QUARE_ICE = DEFAULT_CONSTANT_VALUE_LIEB_QUARE_ICE;
		/**
		 * Default = "Niven's constant"
		 */
		CONSTANT_VALUE_NIVEN = DEFAULT_CONSTANT_VALUE_NIVEN;
		/**
		 * Default = "Sierpinski's constant"
		 */
		CONSTANT_VALUE_SIERPINSKI = DEFAULT_CONSTANT_VALUE_SIERPINSKI;
		/**
		 * Default = "Khinchin's constant"
		 */
		CONSTANT_VALUE_KHINCHIN = DEFAULT_CONSTANT_VALUE_KHINCHIN;
		/**
		 * Default = "Fransen-Robinson constant"
		 */
		CONSTANT_VALUE_FRANSEN_ROBINSON = DEFAULT_CONSTANT_VALUE_FRANSEN_ROBINSON;
		/**
		 * Default = "Landau's constant"
		 */
		CONSTANT_VALUE_LANDAU = DEFAULT_CONSTANT_VALUE_LANDAU;
		/**
		 * Default = "Parabolic constant"
		 */
		CONSTANT_VALUE_PARABOLIC = DEFAULT_CONSTANT_VALUE_PARABOLIC;
		/**
		 * Default = "Omega constant"
		 */
		CONSTANT_VALUE_OMEGA = DEFAULT_CONSTANT_VALUE_OMEGA;
		/**
		 * Default = "MRB constant"
		 */
		CONSTANT_VALUE_MRB = DEFAULT_CONSTANT_VALUE_MRB;
		/**
		 * Default = "Logarithmic integral at point 2"
		 */
		CONSTANT_VALUE_LI2 = DEFAULT_CONSTANT_VALUE_LI2;
		/**
		 * Default = "Gompertz constant"
		 */
		CONSTANT_VALUE_GOMPERTZ = DEFAULT_CONSTANT_VALUE_GOMPERTZ;
		/**
		 * Default = "Light speed in vacuum"
		 */
		CONSTANT_VALUE_LIGHT_SPEED = DEFAULT_CONSTANT_VALUE_LIGHT_SPEED;
		/**
		 * Default = "Gravitational constant"
		 */
		CONSTANT_VALUE_GRAVITATIONAL_CONSTANT = DEFAULT_CONSTANT_VALUE_GRAVITATIONAL_CONSTANT;
		/**
		 * Default = "Gravitational acceleration on Earth"
		 */
		CONSTANT_VALUE_GRAVIT_ACC_EARTH = DEFAULT_CONSTANT_VALUE_GRAVIT_ACC_EARTH;
		/**
		 * Default = "Planck constant"
		 */
		CONSTANT_VALUE_PLANCK_CONSTANT = DEFAULT_CONSTANT_VALUE_PLANCK_CONSTANT;
		/**
		 * Default = "Reduced Planck constant (Dirac constant)"
		 */
		CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED = DEFAULT_CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED;
		/**
		 * Default = "Planck length"
		 */
		CONSTANT_VALUE_PLANCK_LENGTH = DEFAULT_CONSTANT_VALUE_PLANCK_LENGTH;
		/**
		 * Default = "Planck mass"
		 */
		CONSTANT_VALUE_PLANCK_MASS = DEFAULT_CONSTANT_VALUE_PLANCK_MASS;
		/**
		 * Default = "Planck time"
		 */
		CONSTANT_VALUE_PLANCK_TIME = DEFAULT_CONSTANT_VALUE_PLANCK_TIME;
		/**
		 * Default = "Light year"
		 */
		CONSTANT_VALUE_LIGHT_YEAR = DEFAULT_CONSTANT_VALUE_LIGHT_YEAR;
		/**
		 * Default = "Astronomical unit"
		 */
		CONSTANT_VALUE_ASTRONOMICAL_UNIT = DEFAULT_CONSTANT_VALUE_ASTRONOMICAL_UNIT;
		/**
		 * Default = "Parsec"
		 */
		CONSTANT_VALUE_PARSEC = DEFAULT_CONSTANT_VALUE_PARSEC;
		/**
		 * Default = "Kiloparsec"
		 */
		CONSTANT_VALUE_KILOPARSEC = DEFAULT_CONSTANT_VALUE_KILOPARSEC;
		/**
		 * Default = "Earth equatorial radius"
		 */
		CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL = DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL;
		/**
		 * Default = "Earth polar radius"
		 */
		CONSTANT_VALUE_EARTH_RADIUS_POLAR = DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_POLAR;
		/**
		 * Default = "Earth mean radius"
		 */
		CONSTANT_VALUE_EARTH_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_MEAN;
		/**
		 * Default = "Earth mass"
		 */
		CONSTANT_VALUE_EARTH_MASS = DEFAULT_CONSTANT_VALUE_EARTH_MASS;
		/**
		 * Default = "Earth-Sun distance"
		 */
		CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Moon mean radius"
		 */
		CONSTANT_VALUE_MOON_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_MOON_RADIUS_MEAN;
		/**
		 * Default = "Moon mass"
		 */
		CONSTANT_VALUE_MOON_MASS = DEFAULT_CONSTANT_VALUE_MOON_MASS;
		/**
		 * Default = "Moon-Earth distance"
		 */
		CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Solar mean radius"
		 */
		CONSTANT_VALUE_SOLAR_RADIUS = DEFAULT_CONSTANT_VALUE_SOLAR_RADIUS;
		/**
		 * Default = "Solar mass"
		 */
		CONSTANT_VALUE_SOLAR_MASS = DEFAULT_CONSTANT_VALUE_SOLAR_MASS;
		/**
		 * Default = "Mercury mean radius"
		 */
		CONSTANT_VALUE_MERCURY_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_MERCURY_RADIUS_MEAN;
		/**
		 * Default = "Mercury mass"
		 */
		CONSTANT_VALUE_MERCURY_MASS = DEFAULT_CONSTANT_VALUE_MERCURY_MASS;
		/**
		 * Default = "Mercury-Sun distance"
		 */
		CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Venus mean radius"
		 */
		CONSTANT_VALUE_VENUS_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_VENUS_RADIUS_MEAN;
		/**
		 * Default = "Venus mass"
		 */
		CONSTANT_VALUE_VENUS_MASS = DEFAULT_CONSTANT_VALUE_VENUS_MASS;
		/**
		 * Default = "Venus-Sun distance"
		 */
		CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Mars mean radius"
		 */
		CONSTANT_VALUE_MARS_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_MARS_RADIUS_MEAN;
		/**
		 * Default = "Mars mass"
		 */
		CONSTANT_VALUE_MARS_MASS = DEFAULT_CONSTANT_VALUE_MARS_MASS;
		/**
		 * Default = "Mars-Sun distance"
		 */
		CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Jupiter mean radius"
		 */
		CONSTANT_VALUE_JUPITER_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_JUPITER_RADIUS_MEAN;
		/**
		 * Default = "Jupiter mass"
		 */
		CONSTANT_VALUE_JUPITER_MASS = DEFAULT_CONSTANT_VALUE_JUPITER_MASS;
		/**
		 * Default = "Jupiter-Sun distance"
		 */
		CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Saturn mean radius"
		 */
		CONSTANT_VALUE_SATURN_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_SATURN_RADIUS_MEAN;
		/**
		 * Default = "Saturn mass"
		 */
		CONSTANT_VALUE_SATURN_MASS = DEFAULT_CONSTANT_VALUE_SATURN_MASS;
		/**
		 * Default = "Saturn-Sun distance"
		 */
		CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Uranus mean radius"
		 */
		CONSTANT_VALUE_URANUS_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_URANUS_RADIUS_MEAN;
		/**
		 * Default = "Uranus mass"
		 */
		CONSTANT_VALUE_URANUS_MASS = DEFAULT_CONSTANT_VALUE_URANUS_MASS;
		/**
		 * Default = "Uranus-Sun distance"
		 */
		CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Neptune mean radius"
		 */
		CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN = DEFAULT_CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN;
		/**
		 * Default = "Neptune mass"
		 */
		CONSTANT_VALUE_NEPTUNE_MASS = DEFAULT_CONSTANT_VALUE_NEPTUNE_MASS;
		/**
		 * Default = "Neptune-Sun distance"
		 */
		CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS = DEFAULT_CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS;
		/**
		 * Default = "Boolean True represented as 1"
		 */
		CONSTANT_VALUE_TRUE = DEFAULT_CONSTANT_VALUE_TRUE;
		/**
		 * Default = "Boolean False represented as 0"
		 */
		CONSTANT_VALUE_FALSE = DEFAULT_CONSTANT_VALUE_FALSE;
		/**
		 * Default = "Automatically generated constant for user defined functions, returns number of given function parameters"
		 */
		CONSTANT_VALUE_NPAR = DEFAULT_CONSTANT_VALUE_NPAR;
		/**
		 * Default = "Not-a-Number"
		 */
		CONSTANT_VALUE_NAN = DEFAULT_CONSTANT_VALUE_NAN;
		// -------------------------------------------------
		/**
		 * Default = "Trigonometric sine"
		 */
		FUNCTION_1_ARG_SIN = DEFAULT_FUNCTION_1_ARG_SIN;
		/**
		 * Default = "Trigonometric cosine"
		 */
		FUNCTION_1_ARG_COS = DEFAULT_FUNCTION_1_ARG_COS;
		/**
		 * Default = "Trigonometric tangent"
		 */
		FUNCTION_1_ARG_TAN = DEFAULT_FUNCTION_1_ARG_TAN;
		/**
		 * Default = "Trigonometric cotangent"
		 */
		FUNCTION_1_ARG_CTAN = DEFAULT_FUNCTION_1_ARG_CTAN;
		/**
		 * Default = "Trigonometric secant"
		 */
		FUNCTION_1_ARG_SEC = DEFAULT_FUNCTION_1_ARG_SEC;
		/**
		 * Default = "Trigonometric cosecant"
		 */
		FUNCTION_1_ARG_COSEC = DEFAULT_FUNCTION_1_ARG_COSEC;
		/**
		 * Default = "Inverse trigonometric sine"
		 */
		FUNCTION_1_ARG_ASIN = DEFAULT_FUNCTION_1_ARG_ASIN;
		/**
		 * Default = "Inverse trigonometric cosine"
		 */
		FUNCTION_1_ARG_ACOS = DEFAULT_FUNCTION_1_ARG_ACOS;
		/**
		 * Default = "Inverse trigonometric tangent"
		 */
		FUNCTION_1_ARG_ATAN = DEFAULT_FUNCTION_1_ARG_ATAN;
		/**
		 * Default = "Inverse trigonometric cotangent"
		 */
		FUNCTION_1_ARG_ACTAN = DEFAULT_FUNCTION_1_ARG_ACTAN;
		/**
		 * Default = "Natural logarithm (base e)"
		 */
		FUNCTION_1_ARG_LN = DEFAULT_FUNCTION_1_ARG_LN;
		/**
		 * Default = "Binary logarithm (base 2)"
		 */
		FUNCTION_1_ARG_LOG2 = DEFAULT_FUNCTION_1_ARG_LOG2;
		/**
		 * Default = "Common logarithm (base 10)"
		 */
		FUNCTION_1_ARG_LOG10 = DEFAULT_FUNCTION_1_ARG_LOG10;
		/**
		 * Default = "Degrees to radians"
		 */
		FUNCTION_1_ARG_RAD = DEFAULT_FUNCTION_1_ARG_RAD;
		/**
		 * Default = "Exponential"
		 */
		FUNCTION_1_ARG_EXP = DEFAULT_FUNCTION_1_ARG_EXP;
		/**
		 * Default = "Square root"
		 */
		FUNCTION_1_ARG_SQRT = DEFAULT_FUNCTION_1_ARG_SQRT;
		/**
		 * Default = "Hyperbolic sine"
		 */
		FUNCTION_1_ARG_SINH = DEFAULT_FUNCTION_1_ARG_SINH;
		/**
		 * Default = "Hyperbolic cosine"
		 */
		FUNCTION_1_ARG_COSH = DEFAULT_FUNCTION_1_ARG_COSH;
		/**
		 * Default = "Hyperbolic tangent"
		 */
		FUNCTION_1_ARG_TANH = DEFAULT_FUNCTION_1_ARG_TANH;
		/**
		 * Default = "Hyperbolic cotangent"
		 */
		FUNCTION_1_ARG_COTH = DEFAULT_FUNCTION_1_ARG_COTH;
		/**
		 * Default = "Hyperbolic secant"
		 */
		FUNCTION_1_ARG_SECH = DEFAULT_FUNCTION_1_ARG_SECH;
		/**
		 * Default = "Hyperbolic cosecant"
		 */
		FUNCTION_1_ARG_CSCH = DEFAULT_FUNCTION_1_ARG_CSCH;
		/**
		 * Default = "Radians to degrees"
		 */
		FUNCTION_1_ARG_DEG = DEFAULT_FUNCTION_1_ARG_DEG;
		/**
		 * Default = "Absolut value"
		 */
		FUNCTION_1_ARG_ABS = DEFAULT_FUNCTION_1_ARG_ABS;
		/**
		 * Default = "Signum"
		 */
		FUNCTION_1_ARG_SGN = DEFAULT_FUNCTION_1_ARG_SGN;
		/**
		 * Default = "Floor"
		 */
		FUNCTION_1_ARG_FLOOR = DEFAULT_FUNCTION_1_ARG_FLOOR;
		/**
		 * Default = "Ceiling"
		 */
		FUNCTION_1_ARG_CEIL = DEFAULT_FUNCTION_1_ARG_CEIL;
		/**
		 * Default = "Negation"
		 */
		FUNCTION_1_ARG_NOT = DEFAULT_FUNCTION_1_ARG_NOT;
		/**
		 * Default = "Inverse hyperbolic sine"
		 */
		FUNCTION_1_ARG_ARSINH = DEFAULT_FUNCTION_1_ARG_ARSINH;
		/**
		 * Default = "Inverse hyperbolic cosine"
		 */
		FUNCTION_1_ARG_ARCOSH = DEFAULT_FUNCTION_1_ARG_ARCOSH;
		/**
		 * Default = "Inverse hyperbolic tangent"
		 */
		FUNCTION_1_ARG_ARTANH = DEFAULT_FUNCTION_1_ARG_ARTANH;
		/**
		 * Default = "Inverse hyperbolic cotangent"
		 */
		FUNCTION_1_ARG_ARCOTH = DEFAULT_FUNCTION_1_ARG_ARCOTH;
		/**
		 * Default = "Inverse hyperbolic secant"
		 */
		FUNCTION_1_ARG_ARSECH = DEFAULT_FUNCTION_1_ARG_ARSECH;
		/**
		 * Default = "Inverse hyperbolic cosecant"
		 */
		FUNCTION_1_ARG_ARCSCH = DEFAULT_FUNCTION_1_ARG_ARCSCH;
		/**
		 * Default = "Sinc (normalized)"
		 */
		FUNCTION_1_ARG_SA = DEFAULT_FUNCTION_1_ARG_SA;
		/**
		 * Default = "Sinc (unnormalized)"
		 */
		FUNCTION_1_ARG_SINC = DEFAULT_FUNCTION_1_ARG_SINC;
		/**
		 * Default = "Bell number"
		 */
		FUNCTION_1_ARG_BELL_NUMBER = DEFAULT_FUNCTION_1_ARG_BELL_NUMBER;
		/**
		 * Default = "Lucas number"
		 */
		FUNCTION_1_ARG_LUCAS_NUMBER = DEFAULT_FUNCTION_1_ARG_LUCAS_NUMBER;
		/**
		 * Default = "Fibonacci number"
		 */
		FUNCTION_1_ARG_FIBONACCI_NUMBER = DEFAULT_FUNCTION_1_ARG_FIBONACCI_NUMBER;
		/**
		 * Default = "Harmonic number"
		 */
		FUNCTION_1_ARG_HARMONIC_NUMBER = DEFAULT_FUNCTION_1_ARG_HARMONIC_NUMBER;
		/**
		 * Default = "Prime number test (is number a prime?)"
		 */
		FUNCTION_1_ARG_IS_PRIME = DEFAULT_FUNCTION_1_ARG_IS_PRIME;
		/**
		 * Default = "Prime-counting"
		 */
		FUNCTION_1_ARG_PRIME_COUNT = DEFAULT_FUNCTION_1_ARG_PRIME_COUNT;
		/**
		 * Default = "Exponential integral"
		 */
		FUNCTION_1_ARG_EXP_INT = DEFAULT_FUNCTION_1_ARG_EXP_INT;
		/**
		 * Default = "Logarithmic integral"
		 */
		FUNCTION_1_ARG_LOG_INT = DEFAULT_FUNCTION_1_ARG_LOG_INT;
		/**
		 * Default = "Offset logarithmic integral"
		 */
		FUNCTION_1_ARG_OFF_LOG_INT = DEFAULT_FUNCTION_1_ARG_OFF_LOG_INT;
		/**
		 * Default = "Gauss error"
		 */
		FUNCTION_1_ARG_GAUSS_ERF = DEFAULT_FUNCTION_1_ARG_GAUSS_ERF;
		/**
		 * Default = "Gauss complementary error"
		 */
		FUNCTION_1_ARG_GAUSS_ERFC = DEFAULT_FUNCTION_1_ARG_GAUSS_ERFC;
		/**
		 * Default = "Inverse Gauss error"
		 */
		FUNCTION_1_ARG_GAUSS_ERF_INV = DEFAULT_FUNCTION_1_ARG_GAUSS_ERF_INV;
		/**
		 * Default = "Inverse Gauss complementary error"
		 */
		FUNCTION_1_ARG_GAUSS_ERFC_INV = DEFAULT_FUNCTION_1_ARG_GAUSS_ERFC_INV;
		/**
		 * Default = "Unit in The Last Place"
		 */
		FUNCTION_1_ARG_ULP = DEFAULT_FUNCTION_1_ARG_ULP;
		/**
		 * Default = "Returns true if value is a Not-a-Number (NaN), false otherwise"
		 */
		FUNCTION_1_ARG_ISNAN = DEFAULT_FUNCTION_1_ARG_ISNAN;
		/**
		 * Default = "Number of digits in numeral system with base 10"
		 */
		FUNCTION_1_ARG_NDIG10 = DEFAULT_FUNCTION_1_ARG_NDIG10;
		/**
		 * Default = "Prime decomposition - number of distinct prime factors"
		 */
		FUNCTION_1_ARG_NFACT = DEFAULT_FUNCTION_1_ARG_NFACT;
		/**
		 * Default = "Inverse trigonometric secant"
		 */
		FUNCTION_1_ARG_ARCSEC = DEFAULT_FUNCTION_1_ARG_ARCSEC;
		/**
		 * Default = "Inverse trigonometric cosecant"
		 */
		FUNCTION_1_ARG_ARCCSC = DEFAULT_FUNCTION_1_ARG_ARCCSC;
		/**
		 * Default = "Gamma"
		 */
		FUNCTION_1_ARG_GAMMA = DEFAULT_FUNCTION_1_ARG_GAMMA;
		/**
		 * Default = "Lambert-W, principal branch 0, also called the omega or product logarithm"
		 */
		FUNCTION_1_ARG_LAMBERT_W0 = DEFAULT_FUNCTION_1_ARG_LAMBERT_W0;
		/**
		 * Default = "Lambert-W, branch -1, also called the omega or product logarithm"
		 */
		FUNCTION_1_ARG_LAMBERT_W1 = DEFAULT_FUNCTION_1_ARG_LAMBERT_W1;
		/**
		 * Default = "Signum of Gamma"
		 */
		FUNCTION_1_ARG_SGN_GAMMA = DEFAULT_FUNCTION_1_ARG_SGN_GAMMA;
		/**
		 * Default = "Log Gamma"
		 */
		FUNCTION_1_ARG_LOG_GAMMA = DEFAULT_FUNCTION_1_ARG_LOG_GAMMA;
		/**
		 * Default = "Digamma as the logarithmic derivative of the Gamma"
		 */
		FUNCTION_1_ARG_DI_GAMMA = DEFAULT_FUNCTION_1_ARG_DI_GAMMA;
		/**
		 * Default = "Automatically generated function for user defined functions, returns function parameter value at index 'i'"
		 */
		FUNCTION_1_ARG_PARAM = DEFAULT_FUNCTION_1_ARG_PARAM;
		// -------------------------------------------------
		/**
		 * Default = "Logarithm"
		 */
		FUNCTION_2_ARG_LOG = DEFAULT_FUNCTION_2_ARG_LOG;
		/**
		 * Default = "Modulo"
		 */
		FUNCTION_2_ARG_MOD = DEFAULT_FUNCTION_2_ARG_MOD;
		/**
		 * Default = "Binomial coefficient, number of k-combinations that can be drawn from n-elements set"
		 */
		FUNCTION_2_ARG_BINOM_COEFF = DEFAULT_FUNCTION_2_ARG_BINOM_COEFF;
		/**
		 * Default = "Bernoulli numbers"
		 */
		FUNCTION_2_ARG_BERNOULLI_NUMBER = DEFAULT_FUNCTION_2_ARG_BERNOULLI_NUMBER;
		/**
		 * Default = "Stirling numbers of the first kind"
		 */
		FUNCTION_2_ARG_STIRLING1_NUMBER = DEFAULT_FUNCTION_2_ARG_STIRLING1_NUMBER;
		/**
		 * Default = "Stirling numbers of the second kind"
		 */
		FUNCTION_2_ARG_STIRLING2_NUMBER = DEFAULT_FUNCTION_2_ARG_STIRLING2_NUMBER;
		/**
		 * Default = "Worpitzky number"
		 */
		FUNCTION_2_ARG_WORPITZKY_NUMBER = DEFAULT_FUNCTION_2_ARG_WORPITZKY_NUMBER;
		/**
		 * Default = "Euler number"
		 */
		FUNCTION_2_ARG_EULER_NUMBER = DEFAULT_FUNCTION_2_ARG_EULER_NUMBER;
		/**
		 * Default = "Kronecker delta"
		 */
		FUNCTION_2_ARG_KRONECKER_DELTA = DEFAULT_FUNCTION_2_ARG_KRONECKER_DELTA;
		/**
		 * Default = "EulerPol"
		 */
		FUNCTION_2_ARG_EULER_POLYNOMIAL = DEFAULT_FUNCTION_2_ARG_EULER_POLYNOMIAL;
		/**
		 * Default = "Harmonic number"
		 */
		FUNCTION_2_ARG_HARMONIC_NUMBER = DEFAULT_FUNCTION_2_ARG_HARMONIC_NUMBER;
		/**
		 * Default = "Half-up rounding"
		 */
		FUNCTION_2_ARG_ROUND = DEFAULT_FUNCTION_2_ARG_ROUND;
		/**
		 * Default = "Number of digits representing the number in numeral system with given base"
		 */
		FUNCTION_2_ARG_NDIG = DEFAULT_FUNCTION_2_ARG_NDIG;
		/**
		 * Default = "Digit at position 1 ... n (left -&gt; right) or 0 ... -(n-1) (right -&gt; left) - base 10 numeral system"
		 */
		FUNCTION_2_ARG_DIGIT10 = DEFAULT_FUNCTION_2_ARG_DIGIT10;
		/**
		 * Default = "Prime decomposition - factor value at position between 1 ... nfact(n) - ascending order by factor value"
		 */
		FUNCTION_2_ARG_FACTVAL = DEFAULT_FUNCTION_2_ARG_FACTVAL;
		/**
		 * Default = "Prime decomposition - factor exponent / multiplicity at position between 1 ... nfact(n) - ascending order by factor value"
		 */
		FUNCTION_2_ARG_FACTEXP = DEFAULT_FUNCTION_2_ARG_FACTEXP;
		/**
		 * Default = "N-th order root of a number"
		 */
		FUNCTION_2_ARG_ROOT = DEFAULT_FUNCTION_2_ARG_ROOT;
		/**
		 * Default = "Lower incomplete gamma"
		 */
		FUNCTION_2_ARG_INC_GAMMA_LOWER = DEFAULT_FUNCTION_2_ARG_INC_GAMMA_LOWER;
		/**
		 * Default = "Upper incomplete Gamma"
		 */
		FUNCTION_2_ARG_INC_GAMMA_UPPER = DEFAULT_FUNCTION_2_ARG_INC_GAMMA_UPPER;
		/**
		 * Default = "Lower regularized P gamma"
		 */
		FUNCTION_2_ARG_REG_GAMMA_LOWER = DEFAULT_FUNCTION_2_ARG_REG_GAMMA_LOWER;
		/**
		 * Default = "Upper regularized Q Gamma"
		 */
		FUNCTION_2_ARG_REG_GAMMA_UPPER = DEFAULT_FUNCTION_2_ARG_REG_GAMMA_UPPER;
		/**
		 * Default = "Number of k-permutations that can be drawn from n-elements set"
		 */
		FUNCTION_2_ARG_PERMUTATIONS = DEFAULT_FUNCTION_2_ARG_PERMUTATIONS;
		/**
		 * Default = "The Beta, also called the Euler integral of the first kind"
		 */
		FUNCTION_2_ARG_BETA = DEFAULT_FUNCTION_2_ARG_BETA;
		/**
		 * Default = "The Log Beta, also called the Log Euler integral of the first kind"
		 */
		FUNCTION_2_ARG_LOG_BETA = DEFAULT_FUNCTION_2_ARG_LOG_BETA;
		// -------------------------------------------------
		/**
		 * Default = "If"
		 */
		FUNCTION_3_ARG_IF = DEFAULT_FUNCTION_3_ARG_IF;
		/**
		 * Default = "Characteristic function for x in (a,b)"
		 */
		FUNCTION_3_ARG_CHI = DEFAULT_FUNCTION_3_ARG_CHI;
		/**
		 * Default = "Characteristic function for x in [a,b]"
		 */
		FUNCTION_3_ARG_CHI_LR = DEFAULT_FUNCTION_3_ARG_CHI_LR;
		/**
		 * Default = "Characteristic function for x in [a,b)"
		 */
		FUNCTION_3_ARG_CHI_L = DEFAULT_FUNCTION_3_ARG_CHI_L;
		/**
		 * Default = "Characteristic function for x in (a,b]"
		 */
		FUNCTION_3_ARG_CHI_R = DEFAULT_FUNCTION_3_ARG_CHI_R;
		/**
		 * Default = "Digit at position 1 ... n (left -&gt; right) or 0 ... -(n-1) (right -&gt; left) - numeral system with given base"
		 */
		FUNCTION_3_ARG_DIGIT = DEFAULT_FUNCTION_3_ARG_DIGIT;
		/**
		 * Default = "The incomplete Beta, also called the incomplete Euler integral of the first kind"
		 */
		FUNCTION_3_ARG_INC_BETA = DEFAULT_FUNCTION_3_ARG_INC_BETA;
		/**
		 * Default = "The regularized incomplete Beta (or regularized beta), also called the regularized incomplete Euler integral of the first kind"
		 */
		FUNCTION_3_ARG_REG_BETA = DEFAULT_FUNCTION_3_ARG_REG_BETA;
		// -------------------------------------------------
		/**
		 * Default = "If function"
		 */
		FUNCTION_VARIADIC_IFF = DEFAULT_FUNCTION_VARIADIC_IFF;
		/**
		 * Default = "Minimum"
		 */
		FUNCTION_VARIADIC_MIN = DEFAULT_FUNCTION_VARIADIC_MIN;
		/**
		 * Default = "Maximum"
		 */
		FUNCTION_VARIADIC_MAX = DEFAULT_FUNCTION_VARIADIC_MAX;
		/**
		 * Default = "Continued fraction"
		 */
		FUNCTION_VARIADIC_CONT_FRAC = DEFAULT_FUNCTION_VARIADIC_CONT_FRAC;
		/**
		 * Default = "Continued polynomial"
		 */
		FUNCTION_VARIADIC_CONT_POL = DEFAULT_FUNCTION_VARIADIC_CONT_POL;
		/**
		 * Default = "Greatest common divisor"
		 */
		FUNCTION_VARIADIC_GCD = DEFAULT_FUNCTION_VARIADIC_GCD;
		/**
		 * Default = "Least common multiple"
		 */
		FUNCTION_VARIADIC_LCM = DEFAULT_FUNCTION_VARIADIC_LCM;
		/**
		 * Default = "Summation"
		 */
		FUNCTION_VARIADIC_SUM = DEFAULT_FUNCTION_VARIADIC_SUM;
		/**
		 * Default = "Multiplication"
		 */
		FUNCTION_VARIADIC_PROD = DEFAULT_FUNCTION_VARIADIC_PROD;
		/**
		 * Default = "Mean / average value"
		 */
		FUNCTION_VARIADIC_AVG = DEFAULT_FUNCTION_VARIADIC_AVG;
		/**
		 * Default = "Bias-corrected sample variance"
		 */
		FUNCTION_VARIADIC_VAR = DEFAULT_FUNCTION_VARIADIC_VAR;
		/**
		 * Default = "Bias-corrected sample standard deviation"
		 */
		FUNCTION_VARIADIC_STD = DEFAULT_FUNCTION_VARIADIC_STD;
		/**
		 * Default = "Random number from a given list of numbers"
		 */
		FUNCTION_VARIADIC_RND_LIST = DEFAULT_FUNCTION_VARIADIC_RND_LIST;
		/**
		 * Default = "Returns the first non-NaN value"
		 */
		FUNCTION_VARIADIC_COALESCE = DEFAULT_FUNCTION_VARIADIC_COALESCE;
		/**
		 * Default = "Logical disjunction (OR) - variadic"
		 */
		FUNCTION_VARIADIC_OR = DEFAULT_FUNCTION_VARIADIC_OR;
		/**
		 * Default = "Logical conjunction (AND) - variadic"
		 */
		FUNCTION_VARIADIC_AND = DEFAULT_FUNCTION_VARIADIC_AND;
		/**
		 * Default = "Exclusive or (XOR) - variadic"
		 */
		FUNCTION_VARIADIC_XOR = DEFAULT_FUNCTION_VARIADIC_XOR;
		/**
		 * Default = "Arguments / indices of the minima"
		 */
		FUNCTION_VARIADIC_ARGMIN = DEFAULT_FUNCTION_VARIADIC_ARGMIN;
		/**
		 * Default = "Arguments / indices of the maxima"
		 */
		FUNCTION_VARIADIC_ARGMAX = DEFAULT_FUNCTION_VARIADIC_ARGMAX;
		/**
		 * Default = "The sample median"
		 */
		FUNCTION_VARIADIC_MEDIAN = DEFAULT_FUNCTION_VARIADIC_MEDIAN;
		/**
		 * Default = "Mode - the value that appears most often"
		 */
		FUNCTION_VARIADIC_MODE = DEFAULT_FUNCTION_VARIADIC_MODE;
		/**
		 * Default = "Returns number in given numeral system base represented by list of digits"
		 */
		FUNCTION_VARIADIC_BASE = DEFAULT_FUNCTION_VARIADIC_BASE;
		/**
		 * Default = "Number of distinct values"
		 */
		FUNCTION_VARIADIC_NDIST = DEFAULT_FUNCTION_VARIADIC_NDIST;
		// -------------------------------------------------
		/**
		 * Default = "Addition"
		 */
		OPERATOR_PLUS = DEFAULT_OPERATOR_PLUS;
		/**
		 * Default = "Subtraction"
		 */
		OPERATOR_MINUS = DEFAULT_OPERATOR_MINUS;
		/**
		 * Default = "Multiplication"
		 */
		OPERATOR_MULTIPLY = DEFAULT_OPERATOR_MULTIPLY;
		/**
		 * Default = "Division"
		 */
		OPERATOR_DIVIDE = DEFAULT_OPERATOR_DIVIDE;
		/**
		 * Default = "Integer division (quotient)"
		 */
		OPERATOR_DIVIDE_QUOTIENT = DEFAULT_OPERATOR_DIVIDE_QUOTIENT;
		/**
		 * Default = "Exponentiation"
		 */
		OPERATOR_POWER = DEFAULT_OPERATOR_POWER;
		/**
		 * Default = "Factorial"
		 */
		OPERATOR_FACT = DEFAULT_OPERATOR_FACT;
		/**
		 * Default = "Modulo"
		 */
		OPERATOR_MOD = DEFAULT_OPERATOR_MOD;
		/**
		 * Default = "Percentage"
		 */
		OPERATOR_PERC = DEFAULT_OPERATOR_PERC;
		/**
		 * Default = "Tetration (hyper-4, power tower, exponential tower)"
		 */
		OPERATOR_TETRATION = DEFAULT_OPERATOR_TETRATION;
		/**
		 * Default = "Square root"
		 */
		OPERATOR_SQUARE_ROOT = DEFAULT_OPERATOR_SQUARE_ROOT;
		/**
		 * Default = "Cube root"
		 */
		OPERATOR_CUBE_ROOT = DEFAULT_OPERATOR_CUBE_ROOT;
		/**
		 * Default = "Fourth root"
		 */
		OPERATOR_FOURTH_ROOT = DEFAULT_OPERATOR_FOURTH_ROOT;
		// -------------------------------------------------
		/**
		 * Default = "Left parentheses"
		 */
		PARSER_SYMBOL_LEFT_PARENTHESES = DEFAULT_PARSER_SYMBOL_LEFT_PARENTHESES;
		/**
		 * Default = "Right parentheses"
		 */
		PARSER_SYMBOL_RIGHT_PARENTHESES = DEFAULT_PARSER_SYMBOL_RIGHT_PARENTHESES;
		/**
		 * Default = "Comma (function parameters)"
		 */
		PARSER_SYMBOL_COMMA = DEFAULT_PARSER_SYMBOL_COMMA;
		/**
		 * Default = "Semicolon (function parameters)"
		 */
		PARSER_SYMBOL_SEMI = DEFAULT_PARSER_SYMBOL_SEMI;
		/**
		 * Default = "Blank (whitespace) character"
		 */
		PARSER_SYMBOL_BLANK = DEFAULT_PARSER_SYMBOL_BLANK;
		/**
		 * Default = "Integer"
		 */
		PARSER_SYMBOL_NUMBER_INTEGER = DEFAULT_PARSER_SYMBOL_NUMBER_INTEGER;
		/**
		 * Default = "Decimal"
		 */
		PARSER_SYMBOL_NUMBER_DECIMAL = DEFAULT_PARSER_SYMBOL_NUMBER_DECIMAL;
		/**
		 * Default = "Leading zero"
		 */
		PARSER_SYMBOL_NUMBER_LEADING_ZERO = DEFAULT_PARSER_SYMBOL_NUMBER_LEADING_ZERO;
		/**
		 * Default = "Scientific notation"
		 */
		PARSER_SYMBOL_NUMBER_SCI_NOTATION = DEFAULT_PARSER_SYMBOL_NUMBER_SCI_NOTATION;
		/**
		 * Default = "No leading zero"
		 */
		PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO = DEFAULT_PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO;
		/**
		 * Default = "Fractions"
		 */
		PARSER_SYMBOL_NUMBER_FRACTIONS = DEFAULT_PARSER_SYMBOL_NUMBER_FRACTIONS;
		/**
		 * Default = "Other numeral systems"
		 */
		PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS = DEFAULT_PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS;
		/**
		 * Default = " - Unicode math symbol"
		 */
		PARSER_SYMBOL_UNICODE_MATH = DEFAULT_PARSER_SYMBOL_UNICODE_MATH;
		// -------------------------------------------------
		/**
		 * Default = "Percentage"
		 */
		DIMENSIONLESS_UNIT_PERC = DEFAULT_DIMENSIONLESS_UNIT_PERC;
		/**
		 * Default = "Per mille"
		 */
		DIMENSIONLESS_UNIT_PERM = DEFAULT_DIMENSIONLESS_UNIT_PERM;
		/**
		 * Default = "Septillion / Yotta"
		 */
		DIMENSIONLESS_UNIT_YOTTA = DEFAULT_DIMENSIONLESS_UNIT_YOTTA;
		/**
		 * Default = "Sextillion / Zetta"
		 */
		DIMENSIONLESS_UNIT_ZETTA = DEFAULT_DIMENSIONLESS_UNIT_ZETTA;
		/**
		 * Default = "Quintillion / Exa"
		 */
		DIMENSIONLESS_UNIT_EXA = DEFAULT_DIMENSIONLESS_UNIT_EXA;
		/**
		 * Default = "Quadrillion / Peta"
		 */
		DIMENSIONLESS_UNIT_PETA = DEFAULT_DIMENSIONLESS_UNIT_PETA;
		/**
		 * Default = "Trillion / Tera"
		 */
		DIMENSIONLESS_UNIT_TERA = DEFAULT_DIMENSIONLESS_UNIT_TERA;
		/**
		 * Default = "Billion / Giga"
		 */
		DIMENSIONLESS_UNIT_GIGA = DEFAULT_DIMENSIONLESS_UNIT_GIGA;
		/**
		 * Default = "Million / Mega"
		 */
		DIMENSIONLESS_UNIT_MEGA = DEFAULT_DIMENSIONLESS_UNIT_MEGA;
		/**
		 * Default = "Thousand / Kilo"
		 */
		DIMENSIONLESS_UNIT_KILO = DEFAULT_DIMENSIONLESS_UNIT_KILO;
		/**
		 * Default = "Hundred / Hecto"
		 */
		DIMENSIONLESS_UNIT_HECTO = DEFAULT_DIMENSIONLESS_UNIT_HECTO;
		/**
		 * Default = "Ten / Deca"
		 */
		DIMENSIONLESS_UNIT_DECA = DEFAULT_DIMENSIONLESS_UNIT_DECA;
		/**
		 * Default = "Tenth / Deci"
		 */
		DIMENSIONLESS_UNIT_DECI = DEFAULT_DIMENSIONLESS_UNIT_DECI;
		/**
		 * Default = "Hundredth / Centi"
		 */
		DIMENSIONLESS_UNIT_CENTI = DEFAULT_DIMENSIONLESS_UNIT_CENTI;
		/**
		 * Default = "Thousandth / Milli"
		 */
		DIMENSIONLESS_UNIT_MILLI = DEFAULT_DIMENSIONLESS_UNIT_MILLI;
		/**
		 * Default = "Millionth / Micro"
		 */
		DIMENSIONLESS_UNIT_MICRO = DEFAULT_DIMENSIONLESS_UNIT_MICRO;
		/**
		 * Default = "Billionth / Nano"
		 */
		DIMENSIONLESS_UNIT_NANO = DEFAULT_DIMENSIONLESS_UNIT_NANO;
		/**
		 * Default = "Trillionth / Pico"
		 */
		DIMENSIONLESS_UNIT_PICO = DEFAULT_DIMENSIONLESS_UNIT_PICO;
		/**
		 * Default = "Quadrillionth / Femto"
		 */
		DIMENSIONLESS_UNIT_FEMTO = DEFAULT_DIMENSIONLESS_UNIT_FEMTO;
		/**
		 * Default = "Quintillionth / Atoo"
		 */
		DIMENSIONLESS_UNIT_ATTO = DEFAULT_DIMENSIONLESS_UNIT_ATTO;
		/**
		 * Default = "Sextillionth / Zepto"
		 */
		DIMENSIONLESS_UNIT_ZEPTO = DEFAULT_DIMENSIONLESS_UNIT_ZEPTO;
		/**
		 * Default = "Septillionth / Yocto"
		 */
		DIMENSIONLESS_UNIT_YOCTO = DEFAULT_DIMENSIONLESS_UNIT_YOCTO;
		// -------------------------------------------------
		/**
		 * Default = "Meter"
		 */
		UNIT_METRE = DEFAULT_UNIT_METRE;
		/**
		 * Default = "Kilometer"
		 */
		UNIT_KILOMETRE = DEFAULT_UNIT_KILOMETRE;
		/**
		 * Default = "Centimeter"
		 */
		UNIT_CENTIMETRE = DEFAULT_UNIT_CENTIMETRE;
		/**
		 * Default = "Millimeter"
		 */
		UNIT_MILLIMETRE = DEFAULT_UNIT_MILLIMETRE;
		/**
		 * Default = "Inch"
		 */
		UNIT_INCH = DEFAULT_UNIT_INCH;
		/**
		 * Default = "Yard"
		 */
		UNIT_YARD = DEFAULT_UNIT_YARD;
		/**
		 * Default = "Feet"
		 */
		UNIT_FEET = DEFAULT_UNIT_FEET;
		/**
		 * Default = "Mile"
		 */
		UNIT_MILE = DEFAULT_UNIT_MILE;
		/**
		 * Default = "Nautical mile"
		 */
		UNIT_NAUTICAL_MILE = DEFAULT_UNIT_NAUTICAL_MILE;
		/**
		 * Default = "Square meter"
		 */
		UNIT_METRE2 = DEFAULT_UNIT_METRE2;
		/**
		 * Default = "Square centimeter"
		 */
		UNIT_CENTIMETRE2 = DEFAULT_UNIT_CENTIMETRE2;
		/**
		 * Default = "Square millimeter"
		 */
		UNIT_MILLIMETRE2 = DEFAULT_UNIT_MILLIMETRE2;
		/**
		 * Default = "Are"
		 */
		UNIT_ARE = DEFAULT_UNIT_ARE;
		/**
		 * Default = "Hectare"
		 */
		UNIT_HECTARE = DEFAULT_UNIT_HECTARE;
		/**
		 * Default = "Acre"
		 */
		UNIT_ACRE = DEFAULT_UNIT_ACRE;
		/**
		 * Default = "Square kilometer"
		 */
		UNIT_KILOMETRE2 = DEFAULT_UNIT_KILOMETRE2;
		/**
		 * Default = "Cubic millimeter"
		 */
		UNIT_MILLIMETRE3 = DEFAULT_UNIT_MILLIMETRE3;
		/**
		 * Default = "Cubic centimeter"
		 */
		UNIT_CENTIMETRE3 = DEFAULT_UNIT_CENTIMETRE3;
		/**
		 * Default = "Cubic meter"
		 */
		UNIT_METRE3 = DEFAULT_UNIT_METRE3;
		/**
		 * Default = "Cubic kilometer"
		 */
		UNIT_KILOMETRE3 = DEFAULT_UNIT_KILOMETRE3;
		/**
		 * Default = "Milliliter"
		 */
		UNIT_MILLILITRE = DEFAULT_UNIT_MILLILITRE;
		/**
		 * Default = "Liter"
		 */
		UNIT_LITRE = DEFAULT_UNIT_LITRE;
		/**
		 * Default = "Gallon"
		 */
		UNIT_GALLON = DEFAULT_UNIT_GALLON;
		/**
		 * Default = "Pint"
		 */
		UNIT_PINT = DEFAULT_UNIT_PINT;
		/**
		 * Default = "Second"
		 */
		UNIT_SECOND = DEFAULT_UNIT_SECOND;
		/**
		 * Default = "Millisecond"
		 */
		UNIT_MILLISECOND = DEFAULT_UNIT_MILLISECOND;
		/**
		 * Default = "Minute"
		 */
		UNIT_MINUTE = DEFAULT_UNIT_MINUTE;
		/**
		 * Default = "Hour"
		 */
		UNIT_HOUR = DEFAULT_UNIT_HOUR;
		/**
		 * Default = "Day"
		 */
		UNIT_DAY = DEFAULT_UNIT_DAY;
		/**
		 * Default = "Week"
		 */
		UNIT_WEEK = DEFAULT_UNIT_WEEK;
		/**
		 * Default = "Julian year = 365.25 days"
		 */
		UNIT_JULIAN_YEAR = DEFAULT_UNIT_JULIAN_YEAR;
		/**
		 * Default = "Kilogram"
		 */
		UNIT_KILOGRAM = DEFAULT_UNIT_KILOGRAM;
		/**
		 * Default = "Gram"
		 */
		UNIT_GRAM = DEFAULT_UNIT_GRAM;
		/**
		 * Default = "Milligram"
		 */
		UNIT_MILLIGRAM = DEFAULT_UNIT_MILLIGRAM;
		/**
		 * Default = "Decagram"
		 */
		UNIT_DECAGRAM = DEFAULT_UNIT_DECAGRAM;
		/**
		 * Default = "Tonne"
		 */
		UNIT_TONNE = DEFAULT_UNIT_TONNE;
		/**
		 * Default = "Ounce"
		 */
		UNIT_OUNCE = DEFAULT_UNIT_OUNCE;
		/**
		 * Default = "Pound"
		 */
		UNIT_POUND = DEFAULT_UNIT_POUND;
		/**
		 * Default = "Bit"
		 */
		UNIT_BIT = DEFAULT_UNIT_BIT;
		/**
		 * Default = "Kilobit"
		 */
		UNIT_KILOBIT = DEFAULT_UNIT_KILOBIT;
		/**
		 * Default = "Megabit"
		 */
		UNIT_MEGABIT = DEFAULT_UNIT_MEGABIT;
		/**
		 * Default = "Gigabit"
		 */
		UNIT_GIGABIT = DEFAULT_UNIT_GIGABIT;
		/**
		 * Default = "Terabit"
		 */
		UNIT_TERABIT = DEFAULT_UNIT_TERABIT;
		/**
		 * Default = "Petabit"
		 */
		UNIT_PETABIT = DEFAULT_UNIT_PETABIT;
		/**
		 * Default = "Exabit"
		 */
		UNIT_EXABIT = DEFAULT_UNIT_EXABIT;
		/**
		 * Default = "Zettabit"
		 */
		UNIT_ZETTABIT = DEFAULT_UNIT_ZETTABIT;
		/**
		 * Default = "Yottabit"
		 */
		UNIT_YOTTABIT = DEFAULT_UNIT_YOTTABIT;
		/**
		 * Default = "Byte"
		 */
		UNIT_BYTE = DEFAULT_UNIT_BYTE;
		/**
		 * Default = "Kilobyte"
		 */
		UNIT_KILOBYTE = DEFAULT_UNIT_KILOBYTE;
		/**
		 * Default = "Megabyte"
		 */
		UNIT_MEGABYTE = DEFAULT_UNIT_MEGABYTE;
		/**
		 * Default = "Gigabyte"
		 */
		UNIT_GIGABYTE = DEFAULT_UNIT_GIGABYTE;
		/**
		 * Default = "Terabyte"
		 */
		UNIT_TERABYTE = DEFAULT_UNIT_TERABYTE;
		/**
		 * Default = "Petabyte"
		 */
		UNIT_PETABYTE = DEFAULT_UNIT_PETABYTE;
		/**
		 * Default = "Exabyte"
		 */
		UNIT_EXABYTE = DEFAULT_UNIT_EXABYTE;
		/**
		 * Default = "Zettabyte"
		 */
		UNIT_ZETTABYTE = DEFAULT_UNIT_ZETTABYTE;
		/**
		 * Default = "Yottabyte"
		 */
		UNIT_YOTTABYTE = DEFAULT_UNIT_YOTTABYTE;
		/**
		 * Default = "Joule"
		 */
		UNIT_JOULE = DEFAULT_UNIT_JOULE;
		/**
		 * Default = "Electronovolt"
		 */
		UNIT_ELECTRONO_VOLT = DEFAULT_UNIT_ELECTRONO_VOLT;
		/**
		 * Default = "Kiloelectronovolt"
		 */
		UNIT_KILO_ELECTRONO_VOLT = DEFAULT_UNIT_KILO_ELECTRONO_VOLT;
		/**
		 * Default = "Megaelectronovolt"
		 */
		UNIT_MEGA_ELECTRONO_VOLT = DEFAULT_UNIT_MEGA_ELECTRONO_VOLT;
		/**
		 * Default = "Gigaelectronovolt"
		 */
		UNIT_GIGA_ELECTRONO_VOLT = DEFAULT_UNIT_GIGA_ELECTRONO_VOLT;
		/**
		 * Default = "Teraelectronovolt"
		 */
		UNIT_TERA_ELECTRONO_VOLT = DEFAULT_UNIT_TERA_ELECTRONO_VOLT;
		/**
		 * Default = "Meter per second"
		 */
		UNIT_METRE_PER_SECOND = DEFAULT_UNIT_METRE_PER_SECOND;
		/**
		 * Default = "Kilometer per hour"
		 */
		UNIT_KILOMETRE_PER_HOUR = DEFAULT_UNIT_KILOMETRE_PER_HOUR;
		/**
		 * Default = "Mile per hour"
		 */
		UNIT_MILE_PER_HOUR = DEFAULT_UNIT_MILE_PER_HOUR;
		/**
		 * Default = "Knot"
		 */
		UNIT_KNOT = DEFAULT_UNIT_KNOT;
		/**
		 * Default = "Meter per square second"
		 */
		UNIT_METRE_PER_SECOND2 = DEFAULT_UNIT_METRE_PER_SECOND2;
		/**
		 * Default = "Kilometer per square hour"
		 */
		UNIT_KILOMETRE_PER_HOUR2 = DEFAULT_UNIT_KILOMETRE_PER_HOUR2;
		/**
		 * Default = "Mile per square hour"
		 */
		UNIT_MILE_PER_HOUR2 = DEFAULT_UNIT_MILE_PER_HOUR2;
		/**
		 * Default = "Radian"
		 */
		UNIT_RADIAN_ARC = DEFAULT_UNIT_RADIAN_ARC;
		/**
		 * Default = "Degree of arc"
		 */
		UNIT_DEGREE_ARC = DEFAULT_UNIT_DEGREE_ARC;
		/**
		 * Default = "Minute of arc"
		 */
		UNIT_MINUTE_ARC = DEFAULT_UNIT_MINUTE_ARC;
		/**
		 * Default = "Second of arc"
		 */
		UNIT_SECOND_ARC = DEFAULT_UNIT_SECOND_ARC;
	}

	API_VISIBLE void StringResources::printResources(const StringResources &stringResources, bool printDefault) {
		printResources(stringResources, printDefault, false);
	}

	API_VISIBLE void StringResources::printResources(const StringResources &stringResources, bool printDefault, bool printAsSrc) {
		printCurrentVsDefault(UTF("USER_LANGUAGE"), stringResources.USER_LANGUAGE, DEFAULT_USER_LANGUAGE, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("STARTING_SYNTAX_CHECK"), stringResources.STARTING_SYNTAX_CHECK, DEFAULT_STARTING_SYNTAX_CHECK, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NO_ERRORS_DETECTED"), stringResources.NO_ERRORS_DETECTED, DEFAULT_NO_ERRORS_DETECTED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION"), stringResources.NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION, DEFAULT_NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION"), stringResources.NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION, DEFAULT_NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION"), stringResources.NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION, DEFAULT_NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION"), stringResources.NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION, DEFAULT_NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("LEXICAL_ERROR_HAS_BEEN_FOUND"), stringResources.LEXICAL_ERROR_HAS_BEEN_FOUND, DEFAULT_LEXICAL_ERROR_HAS_BEEN_FOUND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ERRORS_HAVE_BEEN_FOUND"), stringResources.ERRORS_HAVE_BEEN_FOUND, DEFAULT_ERRORS_HAVE_BEEN_FOUND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ALREADY_CHECKED_NO_ERRORS"), stringResources.ALREADY_CHECKED_NO_ERRORS, DEFAULT_ALREADY_CHECKED_NO_ERRORS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("SYNTAX_STATUS_UNKNOWN"), stringResources.SYNTAX_STATUS_UNKNOWN, DEFAULT_SYNTAX_STATUS_UNKNOWN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PROBLEM_WITH_EXPRESSION_SYNTAX"), stringResources.PROBLEM_WITH_EXPRESSION_SYNTAX, DEFAULT_PROBLEM_WITH_EXPRESSION_SYNTAX, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("ENCOUNTERED"), stringResources.ENCOUNTERED, DEFAULT_ENCOUNTERED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("WHILE_PARSING"), stringResources.WHILE_PARSING, DEFAULT_WHILE_PARSING, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BUT_GOT"), stringResources.BUT_GOT, DEFAULT_BUT_GOT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("LEXICAL_ERROR"), stringResources.LEXICAL_ERROR, DEFAULT_LEXICAL_ERROR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("AT_INDEX"), stringResources.AT_INDEX, DEFAULT_AT_INDEX, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("AFTER"), stringResources.AFTER, DEFAULT_AFTER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("WAS_EXPECTING"), stringResources.WAS_EXPECTING, DEFAULT_WAS_EXPECTING, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("WAS_EXPECTING_ONE_OF"), stringResources.WAS_EXPECTING_ONE_OF, DEFAULT_WAS_EXPECTING_ONE_OF, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED"), stringResources.UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED, DEFAULT_UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED"), stringResources.UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED, DEFAULT_UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("EXPRESSION_STRING_IS_EMPTY"), stringResources.EXPRESSION_STRING_IS_EMPTY, DEFAULT_EXPRESSION_STRING_IS_EMPTY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS"), stringResources.EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS, DEFAULT_EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DUPLICATED_KEYWORD"), stringResources.DUPLICATED_KEYWORD, DEFAULT_DUPLICATED_KEYWORD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ELEMENT"), stringResources.ELEMENT, DEFAULT_ELEMENT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ERROR"), stringResources.ERROR, DEFAULT_ERROR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("EXCEPTION"), stringResources.EXCEPTION, DEFAULT_EXCEPTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("TOKEN"), stringResources.TOKEN, DEFAULT_TOKEN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INDEX"), stringResources.INDEX, DEFAULT_INDEX, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INVALID_TOKEN"), stringResources.INVALID_TOKEN, DEFAULT_INVALID_TOKEN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR"), stringResources.INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR, DEFAULT_INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("EXPRESSION_TOKENS"), stringResources.EXPRESSION_TOKENS, DEFAULT_EXPRESSION_TOKENS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NULL_TOKENS_LIST"), stringResources.NULL_TOKENS_LIST, DEFAULT_NULL_TOKENS_LIST, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS"), stringResources.FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS, DEFAULT_FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS"), stringResources.ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS, DEFAULT_ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PROVIDED_EXTENSION_IS_NULL"), stringResources.PROVIDED_EXTENSION_IS_NULL, DEFAULT_PROVIDED_EXTENSION_IS_NULL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PROVIDED_STRING_IS_NULL"), stringResources.PROVIDED_STRING_IS_NULL, DEFAULT_PROVIDED_STRING_IS_NULL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PROVIDED_ELEMENTS_ARE_NULL"), stringResources.PROVIDED_ELEMENTS_ARE_NULL, DEFAULT_PROVIDED_ELEMENTS_ARE_NULL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE"), stringResources.MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE, DEFAULT_MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT"), stringResources.STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT, DEFAULT_STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT"), stringResources.STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT, DEFAULT_STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION"), stringResources.STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION, DEFAULT_STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION"), stringResources.STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION, DEFAULT_STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("ARGUMENT_WAS_EXPECTED"), stringResources.ARGUMENT_WAS_EXPECTED, DEFAULT_ARGUMENT_WAS_EXPECTED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER"), stringResources.RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER, DEFAULT_RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION"), stringResources.INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION, DEFAULT_INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS"), stringResources.INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS, DEFAULT_INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("EXPECTED"), stringResources.EXPECTED, DEFAULT_EXPECTED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PROVIDED"), stringResources.PROVIDED, DEFAULT_PROVIDED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT"), stringResources.USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT, DEFAULT_USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("EXPECTED_EVEN_NUMBER_OF_ARGUMENTS"), stringResources.EXPECTED_EVEN_NUMBER_OF_ARGUMENTS, DEFAULT_EXPECTED_EVEN_NUMBER_OF_ARGUMENTS, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("INVALID_FUNCTION_NAME"), stringResources.INVALID_FUNCTION_NAME, DEFAULT_INVALID_FUNCTION_NAME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INVALID_ARGUMENT_NAME"), stringResources.INVALID_ARGUMENT_NAME, DEFAULT_INVALID_ARGUMENT_NAME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INVALID_CONSTANT_NAME"), stringResources.INVALID_CONSTANT_NAME, DEFAULT_INVALID_CONSTANT_NAME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INVALID_FUNCTION_DEFINITION"), stringResources.INVALID_FUNCTION_DEFINITION, DEFAULT_INVALID_FUNCTION_DEFINITION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INVALID_ARGUMENT_DEFINITION"), stringResources.INVALID_ARGUMENT_DEFINITION, DEFAULT_INVALID_ARGUMENT_DEFINITION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INVALID_CONSTANT_DEFINITION"), stringResources.INVALID_CONSTANT_DEFINITION, DEFAULT_INVALID_CONSTANT_DEFINITION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PATTERN_DOES_NOT_MATCH"), stringResources.PATTERN_DOES_NOT_MATCH, DEFAULT_PATTERN_DOES_NOT_MATCH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PATTERN_EXAMPLES"), stringResources.PATTERN_EXAMPLES, DEFAULT_PATTERN_EXAMPLES, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("CONSTANT_WAS_EXPECTED"), stringResources.CONSTANT_WAS_EXPECTED, DEFAULT_CONSTANT_WAS_EXPECTED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("USER_CONSTANT_WAS_EXPECTED"), stringResources.USER_CONSTANT_WAS_EXPECTED, DEFAULT_USER_CONSTANT_WAS_EXPECTED, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("UNARY_FUNCTION_EXPECTS_1_PARAMETER"), stringResources.UNARY_FUNCTION_EXPECTS_1_PARAMETER, DEFAULT_UNARY_FUNCTION_EXPECTS_1_PARAMETER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BINARY_FUNCTION_EXPECTS_2_PARAMETERS"), stringResources.BINARY_FUNCTION_EXPECTS_2_PARAMETERS, DEFAULT_BINARY_FUNCTION_EXPECTS_2_PARAMETERS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("TERNARY_FUNCTION_EXPECTS_3_PARAMETERS"), stringResources.TERNARY_FUNCTION_EXPECTS_3_PARAMETERS, DEFAULT_TERNARY_FUNCTION_EXPECTS_3_PARAMETERS, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS"), stringResources.DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS, DEFAULT_DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION"), stringResources.ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION, DEFAULT_ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION"), stringResources.DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION, DEFAULT_DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION"), stringResources.ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION, DEFAULT_ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS"), stringResources.NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS, DEFAULT_NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS"), stringResources.INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS, DEFAULT_INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS"), stringResources.ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS, DEFAULT_ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS"), stringResources.FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS, DEFAULT_FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED"), stringResources.FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED, DEFAULT_FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED"), stringResources.AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED, DEFAULT_AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("ERROR_WHILE_EXECUTING_THE_CALCULATE"), stringResources.ERROR_WHILE_EXECUTING_THE_CALCULATE, DEFAULT_ERROR_WHILE_EXECUTING_THE_CALCULATE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("RECURSION_CALLS_COUNTER_EXCEEDED"), stringResources.RECURSION_CALLS_COUNTER_EXCEEDED, DEFAULT_RECURSION_CALLS_COUNTER_EXCEEDED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("RECURSION_CALLS_COUNTER"), stringResources.RECURSION_CALLS_COUNTER, DEFAULT_RECURSION_CALLS_COUNTER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("STARTING_CALCULATION_LOOP"), stringResources.STARTING_CALCULATION_LOOP, DEFAULT_STARTING_CALCULATION_LOOP, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CANCEL_REQUEST_FINISHING"), stringResources.CANCEL_REQUEST_FINISHING, DEFAULT_CANCEL_REQUEST_FINISHING, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING"), stringResources.INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING, DEFAULT_INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN"), stringResources.FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN, DEFAULT_FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED"), stringResources.MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED, DEFAULT_MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("STARTING"), stringResources.STARTING, DEFAULT_STARTING, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSING"), stringResources.PARSING, DEFAULT_PARSING, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FULLY_COMPILED"), stringResources.FULLY_COMPILED, DEFAULT_FULLY_COMPILED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULATED_VALUE"), stringResources.CALCULATED_VALUE, DEFAULT_CALCULATED_VALUE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("EXITING"), stringResources.EXITING, DEFAULT_EXITING, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DONE"), stringResources.DONE, DEFAULT_DONE, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("KEYWORD"), stringResources.KEYWORD, DEFAULT_KEYWORD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("SYNTAX"), stringResources.SYNTAX, DEFAULT_SYNTAX, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NUMBER"), stringResources.NUMBER, DEFAULT_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NUMBER_LITERAL"), stringResources.NUMBER_LITERAL, DEFAULT_NUMBER_LITERAL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("TYPE"), stringResources.TYPE, DEFAULT_TYPE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("SINCE"), stringResources.SINCE, DEFAULT_SINCE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DESCRIPTION"), stringResources.DESCRIPTION, DEFAULT_DESCRIPTION, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("CALC_STEPS_REGISTER_IS_EMPTY"), stringResources.CALC_STEPS_REGISTER_IS_EMPTY, DEFAULT_CALC_STEPS_REGISTER_IS_EMPTY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALC_STEPS_REGISTER_FOR"), stringResources.CALC_STEPS_REGISTER_FOR, DEFAULT_CALC_STEPS_REGISTER_FOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ARGUMENT"), stringResources.ARGUMENT, DEFAULT_ARGUMENT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION"), stringResources.FUNCTION, DEFAULT_FUNCTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("EXPRESSION"), stringResources.EXPRESSION, DEFAULT_EXPRESSION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("RESULT"), stringResources.RESULT, DEFAULT_RESULT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("COMPUTING_TIME"), stringResources.COMPUTING_TIME, DEFAULT_COMPUTING_TIME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("GROUP_SHORT"), stringResources.GROUP_SHORT, DEFAULT_GROUP_SHORT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NUMBER_SHORT"), stringResources.NUMBER_SHORT, DEFAULT_NUMBER_SHORT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FIRST"), stringResources.FIRST, DEFAULT_FIRST, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("LAST"), stringResources.LAST, DEFAULT_LAST, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DESCRIPTION_SHORT"), stringResources.DESCRIPTION_SHORT, DEFAULT_DESCRIPTION_SHORT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("STEP"), stringResources.STEP, DEFAULT_STEP, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("SERIALIZATION_PERFORMED"), stringResources.SERIALIZATION_PERFORMED, DEFAULT_SERIALIZATION_PERFORMED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DESERIALIZATION_PERFORMED"), stringResources.DESERIALIZATION_PERFORMED, DEFAULT_DESERIALIZATION_PERFORMED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NULL_OBJECT_PROVIDED"), stringResources.NULL_OBJECT_PROVIDED, DEFAULT_NULL_OBJECT_PROVIDED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NULL_FILE_PATH_PROVIDED"), stringResources.NULL_FILE_PATH_PROVIDED, DEFAULT_NULL_FILE_PATH_PROVIDED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FILE_PATH_ZERO_LENGTH_PROVIDED"), stringResources.FILE_PATH_ZERO_LENGTH_PROVIDED, DEFAULT_FILE_PATH_ZERO_LENGTH_PROVIDED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FILE_PATH_IS_NOT_A_FILE"), stringResources.FILE_PATH_IS_NOT_A_FILE, DEFAULT_FILE_PATH_IS_NOT_A_FILE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FILE_PATH_NOT_EXISTS"), stringResources.FILE_PATH_NOT_EXISTS, DEFAULT_FILE_PATH_NOT_EXISTS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NULL_DATA_PROVIDED"), stringResources.NULL_DATA_PROVIDED, DEFAULT_NULL_DATA_PROVIDED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BINARY_SERIALIZATION_ENABLED"), stringResources.BINARY_SERIALIZATION_ENABLED, DEFAULT_BINARY_SERIALIZATION_ENABLED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BINARY_SERIALIZATION_DISABLED"), stringResources.BINARY_SERIALIZATION_DISABLED, DEFAULT_BINARY_SERIALIZATION_DISABLED, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("USER_DEFINED_EXPRESSION"), stringResources.USER_DEFINED_EXPRESSION, DEFAULT_USER_DEFINED_EXPRESSION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("USER_DEFINED_ARGUMENT"), stringResources.USER_DEFINED_ARGUMENT, DEFAULT_USER_DEFINED_ARGUMENT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("USER_DEFINED_CONSTANT"), stringResources.USER_DEFINED_CONSTANT, DEFAULT_USER_DEFINED_CONSTANT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("USER_DEFINED_FUNCTION"), stringResources.USER_DEFINED_FUNCTION, DEFAULT_USER_DEFINED_FUNCTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("USER_DEFINED_RECURSIVE_ARGUMENT"), stringResources.USER_DEFINED_RECURSIVE_ARGUMENT, DEFAULT_USER_DEFINED_RECURSIVE_ARGUMENT, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("HELP_CONTENT_LIMITED_TO_QUERY"), stringResources.HELP_CONTENT_LIMITED_TO_QUERY, DEFAULT_HELP_CONTENT_LIMITED_TO_QUERY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ALL_HELP_CONTENT"), stringResources.ALL_HELP_CONTENT, DEFAULT_ALL_HELP_CONTENT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CAPTION"), stringResources.CAPTION, DEFAULT_CAPTION, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("WARNING_BINARY_SERIALIZATION_SECURITY_RISKS"), stringResources.WARNING_BINARY_SERIALIZATION_SECURITY_RISKS, DEFAULT_WARNING_BINARY_SERIALIZATION_SECURITY_RISKS, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("BINARY_RELATION"), stringResources.BINARY_RELATION, DEFAULT_BINARY_RELATION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR"), stringResources.BITWISE_OPERATOR, DEFAULT_BITWISE_OPERATOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR"), stringResources.BOOLEAN_OPERATOR, DEFAULT_BOOLEAN_OPERATOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR"), stringResources.CALCULUS_OPERATOR, DEFAULT_CALCULUS_OPERATOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE"), stringResources.CONSTANT_VALUE, DEFAULT_CONSTANT_VALUE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG"), stringResources.FUNCTION_1_ARG, DEFAULT_FUNCTION_1_ARG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG"), stringResources.FUNCTION_2_ARG, DEFAULT_FUNCTION_2_ARG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG"), stringResources.FUNCTION_3_ARG, DEFAULT_FUNCTION_3_ARG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC"), stringResources.FUNCTION_VARIADIC, DEFAULT_FUNCTION_VARIADIC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR"), stringResources.OPERATOR, DEFAULT_OPERATOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL"), stringResources.PARSER_SYMBOL, DEFAULT_PARSER_SYMBOL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("RANDOM_VARIABLE"), stringResources.RANDOM_VARIABLE, DEFAULT_RANDOM_VARIABLE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT"), stringResources.UNIT, DEFAULT_UNIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT"), stringResources.DIMENSIONLESS_UNIT, DEFAULT_DIMENSIONLESS_UNIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ITERATED_OPERATOR"), stringResources.ITERATED_OPERATOR, DEFAULT_ITERATED_OPERATOR, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("RATIO_FRACTION"), stringResources.RATIO_FRACTION, DEFAULT_RATIO_FRACTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("METRIC_PREFIX"), stringResources.METRIC_PREFIX, DEFAULT_METRIC_PREFIX, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_LENGTH"), stringResources.UNIT_OF_LENGTH, DEFAULT_UNIT_OF_LENGTH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_AREA"), stringResources.UNIT_OF_AREA, DEFAULT_UNIT_OF_AREA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_VOLUME"), stringResources.UNIT_OF_VOLUME, DEFAULT_UNIT_OF_VOLUME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_TIME"), stringResources.UNIT_OF_TIME, DEFAULT_UNIT_OF_TIME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_MASS"), stringResources.UNIT_OF_MASS, DEFAULT_UNIT_OF_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_INFORMATION"), stringResources.UNIT_OF_INFORMATION, DEFAULT_UNIT_OF_INFORMATION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_ENERGY"), stringResources.UNIT_OF_ENERGY, DEFAULT_UNIT_OF_ENERGY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_SPEED"), stringResources.UNIT_OF_SPEED, DEFAULT_UNIT_OF_SPEED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_ACCELERATION"), stringResources.UNIT_OF_ACCELERATION, DEFAULT_UNIT_OF_ACCELERATION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OF_ANGLE"), stringResources.UNIT_OF_ANGLE, DEFAULT_UNIT_OF_ANGLE, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("PHYSICAL_CONSTANT"), stringResources.PHYSICAL_CONSTANT, DEFAULT_PHYSICAL_CONSTANT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("ASTRONOMICAL_CONSTANT"), stringResources.ASTRONOMICAL_CONSTANT, DEFAULT_ASTRONOMICAL_CONSTANT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("MATHEMATICAL_CONSTANT"), stringResources.MATHEMATICAL_CONSTANT, DEFAULT_MATHEMATICAL_CONSTANT, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("PROBABILITY_DISTRIBUTION_FUNCTION"), stringResources.PROBABILITY_DISTRIBUTION_FUNCTION, DEFAULT_PROBABILITY_DISTRIBUTION_FUNCTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CUMULATIVE_DISTRIBUTION_FUNCTION"), stringResources.CUMULATIVE_DISTRIBUTION_FUNCTION, DEFAULT_CUMULATIVE_DISTRIBUTION_FUNCTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("QUANTILE_FUNCTION"), stringResources.QUANTILE_FUNCTION, DEFAULT_QUANTILE_FUNCTION, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("STUDENTS_T_DISTRIBUTION"), stringResources.STUDENTS_T_DISTRIBUTION, DEFAULT_STUDENTS_T_DISTRIBUTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CHI_SQUARED_DISTRIBUTION"), stringResources.CHI_SQUARED_DISTRIBUTION, DEFAULT_CHI_SQUARED_DISTRIBUTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("SNEDECORS_F_DISTRIBUTION"), stringResources.SNEDECORS_F_DISTRIBUTION, DEFAULT_SNEDECORS_F_DISTRIBUTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIFORM_CONTINUOUS_DISTRIBUTION"), stringResources.UNIFORM_CONTINUOUS_DISTRIBUTION, DEFAULT_UNIFORM_CONTINUOUS_DISTRIBUTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIFORM_DISCRETE_DISTRIBUTION"), stringResources.UNIFORM_DISCRETE_DISTRIBUTION, DEFAULT_UNIFORM_DISCRETE_DISTRIBUTION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("NORMAL_DISTRIBUTION"), stringResources.NORMAL_DISTRIBUTION, DEFAULT_NORMAL_DISTRIBUTION, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("RANDOM_INTEGER"), stringResources.RANDOM_INTEGER, DEFAULT_RANDOM_INTEGER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("RANDOM_NATURAL_NUMBER"), stringResources.RANDOM_NATURAL_NUMBER, DEFAULT_RANDOM_NATURAL_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("RANDOM_NATURAL_NUMBER_INCLUDING_0"), stringResources.RANDOM_NATURAL_NUMBER_INCLUDING_0, DEFAULT_RANDOM_NATURAL_NUMBER_INCLUDING_0, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("SPECIAL_FUNCTION"), stringResources.SPECIAL_FUNCTION, DEFAULT_SPECIAL_FUNCTION, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("SEMI_MAJOR_AXIS"), stringResources.SEMI_MAJOR_AXIS, DEFAULT_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("BINARY_RELATION_EQ"), stringResources.BINARY_RELATION_EQ, DEFAULT_BINARY_RELATION_EQ, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BINARY_RELATION_NEQ"), stringResources.BINARY_RELATION_NEQ, DEFAULT_BINARY_RELATION_NEQ, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BINARY_RELATION_LT"), stringResources.BINARY_RELATION_LT, DEFAULT_BINARY_RELATION_LT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BINARY_RELATION_GT"), stringResources.BINARY_RELATION_GT, DEFAULT_BINARY_RELATION_GT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BINARY_RELATION_LEQ"), stringResources.BINARY_RELATION_LEQ, DEFAULT_BINARY_RELATION_LEQ, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BINARY_RELATION_GEQ"), stringResources.BINARY_RELATION_GEQ, DEFAULT_BINARY_RELATION_GEQ, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_COMPL"), stringResources.BITWISE_OPERATOR_COMPL, DEFAULT_BITWISE_OPERATOR_COMPL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_AND"), stringResources.BITWISE_OPERATOR_AND, DEFAULT_BITWISE_OPERATOR_AND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_XOR"), stringResources.BITWISE_OPERATOR_XOR, DEFAULT_BITWISE_OPERATOR_XOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_OR"), stringResources.BITWISE_OPERATOR_OR, DEFAULT_BITWISE_OPERATOR_OR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_LEFT_SHIFT"), stringResources.BITWISE_OPERATOR_LEFT_SHIFT, DEFAULT_BITWISE_OPERATOR_LEFT_SHIFT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_RIGHT_SHIFT"), stringResources.BITWISE_OPERATOR_RIGHT_SHIFT, DEFAULT_BITWISE_OPERATOR_RIGHT_SHIFT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_NAND"), stringResources.BITWISE_OPERATOR_NAND, DEFAULT_BITWISE_OPERATOR_NAND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_NOR"), stringResources.BITWISE_OPERATOR_NOR, DEFAULT_BITWISE_OPERATOR_NOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BITWISE_OPERATOR_XNOR"), stringResources.BITWISE_OPERATOR_XNOR, DEFAULT_BITWISE_OPERATOR_XNOR, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_AND"), stringResources.BOOLEAN_OPERATOR_AND, DEFAULT_BOOLEAN_OPERATOR_AND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_OR"), stringResources.BOOLEAN_OPERATOR_OR, DEFAULT_BOOLEAN_OPERATOR_OR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_NEG"), stringResources.BOOLEAN_OPERATOR_NEG, DEFAULT_BOOLEAN_OPERATOR_NEG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_NAND"), stringResources.BOOLEAN_OPERATOR_NAND, DEFAULT_BOOLEAN_OPERATOR_NAND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_NOR"), stringResources.BOOLEAN_OPERATOR_NOR, DEFAULT_BOOLEAN_OPERATOR_NOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_XOR"), stringResources.BOOLEAN_OPERATOR_XOR, DEFAULT_BOOLEAN_OPERATOR_XOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_IMP"), stringResources.BOOLEAN_OPERATOR_IMP, DEFAULT_BOOLEAN_OPERATOR_IMP, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_CIMP"), stringResources.BOOLEAN_OPERATOR_CIMP, DEFAULT_BOOLEAN_OPERATOR_CIMP, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_NIMP"), stringResources.BOOLEAN_OPERATOR_NIMP, DEFAULT_BOOLEAN_OPERATOR_NIMP, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_CNIMP"), stringResources.BOOLEAN_OPERATOR_CNIMP, DEFAULT_BOOLEAN_OPERATOR_CNIMP, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("BOOLEAN_OPERATOR_EQV"), stringResources.BOOLEAN_OPERATOR_EQV, DEFAULT_BOOLEAN_OPERATOR_EQV, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_SUM"), stringResources.CALCULUS_OPERATOR_SUM, DEFAULT_CALCULUS_OPERATOR_SUM, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_PROD"), stringResources.CALCULUS_OPERATOR_PROD, DEFAULT_CALCULUS_OPERATOR_PROD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_INT"), stringResources.CALCULUS_OPERATOR_INT, DEFAULT_CALCULUS_OPERATOR_INT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_DER"), stringResources.CALCULUS_OPERATOR_DER, DEFAULT_CALCULUS_OPERATOR_DER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_DER_LEFT"), stringResources.CALCULUS_OPERATOR_DER_LEFT, DEFAULT_CALCULUS_OPERATOR_DER_LEFT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_DER_RIGHT"), stringResources.CALCULUS_OPERATOR_DER_RIGHT, DEFAULT_CALCULUS_OPERATOR_DER_RIGHT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_DERN"), stringResources.CALCULUS_OPERATOR_DERN, DEFAULT_CALCULUS_OPERATOR_DERN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_FORW_DIFF"), stringResources.CALCULUS_OPERATOR_FORW_DIFF, DEFAULT_CALCULUS_OPERATOR_FORW_DIFF, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_BACKW_DIFF"), stringResources.CALCULUS_OPERATOR_BACKW_DIFF, DEFAULT_CALCULUS_OPERATOR_BACKW_DIFF, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_AVG"), stringResources.CALCULUS_OPERATOR_AVG, DEFAULT_CALCULUS_OPERATOR_AVG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_VAR"), stringResources.CALCULUS_OPERATOR_VAR, DEFAULT_CALCULUS_OPERATOR_VAR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_STD"), stringResources.CALCULUS_OPERATOR_STD, DEFAULT_CALCULUS_OPERATOR_STD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_MIN"), stringResources.CALCULUS_OPERATOR_MIN, DEFAULT_CALCULUS_OPERATOR_MIN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_MAX"), stringResources.CALCULUS_OPERATOR_MAX, DEFAULT_CALCULUS_OPERATOR_MAX, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CALCULUS_OPERATOR_SOLVE"), stringResources.CALCULUS_OPERATOR_SOLVE, DEFAULT_CALCULUS_OPERATOR_SOLVE, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PI"), stringResources.CONSTANT_VALUE_PI, DEFAULT_CONSTANT_VALUE_PI, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_EULER"), stringResources.CONSTANT_VALUE_EULER, DEFAULT_CONSTANT_VALUE_EULER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_EULER_MASCHERONI"), stringResources.CONSTANT_VALUE_EULER_MASCHERONI, DEFAULT_CONSTANT_VALUE_EULER_MASCHERONI, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_GOLDEN_RATIO"), stringResources.CONSTANT_VALUE_GOLDEN_RATIO, DEFAULT_CONSTANT_VALUE_GOLDEN_RATIO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PLASTIC"), stringResources.CONSTANT_VALUE_PLASTIC, DEFAULT_CONSTANT_VALUE_PLASTIC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_EMBREE_TREFETHEN"), stringResources.CONSTANT_VALUE_EMBREE_TREFETHEN, DEFAULT_CONSTANT_VALUE_EMBREE_TREFETHEN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_FEIGENBAUM_DELTA"), stringResources.CONSTANT_VALUE_FEIGENBAUM_DELTA, DEFAULT_CONSTANT_VALUE_FEIGENBAUM_DELTA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_FEIGENBAUM_ALPHA"), stringResources.CONSTANT_VALUE_FEIGENBAUM_ALPHA, DEFAULT_CONSTANT_VALUE_FEIGENBAUM_ALPHA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_TWIN_PRIME"), stringResources.CONSTANT_VALUE_TWIN_PRIME, DEFAULT_CONSTANT_VALUE_TWIN_PRIME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MEISSEL_MERTEENS"), stringResources.CONSTANT_VALUE_MEISSEL_MERTEENS, DEFAULT_CONSTANT_VALUE_MEISSEL_MERTEENS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_BRAUN_TWIN_PRIME"), stringResources.CONSTANT_VALUE_BRAUN_TWIN_PRIME, DEFAULT_CONSTANT_VALUE_BRAUN_TWIN_PRIME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_BRAUN_PRIME_QUADR"), stringResources.CONSTANT_VALUE_BRAUN_PRIME_QUADR, DEFAULT_CONSTANT_VALUE_BRAUN_PRIME_QUADR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_BRUIJN_NEWMAN"), stringResources.CONSTANT_VALUE_BRUIJN_NEWMAN, DEFAULT_CONSTANT_VALUE_BRUIJN_NEWMAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_CATALAN"), stringResources.CONSTANT_VALUE_CATALAN, DEFAULT_CONSTANT_VALUE_CATALAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LANDAU_RAMANUJAN"), stringResources.CONSTANT_VALUE_LANDAU_RAMANUJAN, DEFAULT_CONSTANT_VALUE_LANDAU_RAMANUJAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_VISWANATH"), stringResources.CONSTANT_VALUE_VISWANATH, DEFAULT_CONSTANT_VALUE_VISWANATH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LEGENDRE"), stringResources.CONSTANT_VALUE_LEGENDRE, DEFAULT_CONSTANT_VALUE_LEGENDRE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_RAMANUJAN_SOLDNER"), stringResources.CONSTANT_VALUE_RAMANUJAN_SOLDNER, DEFAULT_CONSTANT_VALUE_RAMANUJAN_SOLDNER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_ERDOS_BORWEIN"), stringResources.CONSTANT_VALUE_ERDOS_BORWEIN, DEFAULT_CONSTANT_VALUE_ERDOS_BORWEIN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_BERNSTEIN"), stringResources.CONSTANT_VALUE_BERNSTEIN, DEFAULT_CONSTANT_VALUE_BERNSTEIN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING"), stringResources.CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING, DEFAULT_CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY"), stringResources.CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY, DEFAULT_CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_GOLOMB_DICKMAN"), stringResources.CONSTANT_VALUE_GOLOMB_DICKMAN, DEFAULT_CONSTANT_VALUE_GOLOMB_DICKMAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_CAHEN"), stringResources.CONSTANT_VALUE_CAHEN, DEFAULT_CONSTANT_VALUE_CAHEN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LAPLACE_LIMIT"), stringResources.CONSTANT_VALUE_LAPLACE_LIMIT, DEFAULT_CONSTANT_VALUE_LAPLACE_LIMIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_ALLADI_GRINSTEAD"), stringResources.CONSTANT_VALUE_ALLADI_GRINSTEAD, DEFAULT_CONSTANT_VALUE_ALLADI_GRINSTEAD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LENGYEL"), stringResources.CONSTANT_VALUE_LENGYEL, DEFAULT_CONSTANT_VALUE_LENGYEL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LEVY"), stringResources.CONSTANT_VALUE_LEVY, DEFAULT_CONSTANT_VALUE_LEVY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_APERY"), stringResources.CONSTANT_VALUE_APERY, DEFAULT_CONSTANT_VALUE_APERY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MILLS"), stringResources.CONSTANT_VALUE_MILLS, DEFAULT_CONSTANT_VALUE_MILLS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_BACKHOUSE"), stringResources.CONSTANT_VALUE_BACKHOUSE, DEFAULT_CONSTANT_VALUE_BACKHOUSE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PORTER"), stringResources.CONSTANT_VALUE_PORTER, DEFAULT_CONSTANT_VALUE_PORTER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LIEB_QUARE_ICE"), stringResources.CONSTANT_VALUE_LIEB_QUARE_ICE, DEFAULT_CONSTANT_VALUE_LIEB_QUARE_ICE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_NIVEN"), stringResources.CONSTANT_VALUE_NIVEN, DEFAULT_CONSTANT_VALUE_NIVEN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_SIERPINSKI"), stringResources.CONSTANT_VALUE_SIERPINSKI, DEFAULT_CONSTANT_VALUE_SIERPINSKI, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_KHINCHIN"), stringResources.CONSTANT_VALUE_KHINCHIN, DEFAULT_CONSTANT_VALUE_KHINCHIN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_FRANSEN_ROBINSON"), stringResources.CONSTANT_VALUE_FRANSEN_ROBINSON, DEFAULT_CONSTANT_VALUE_FRANSEN_ROBINSON, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LANDAU"), stringResources.CONSTANT_VALUE_LANDAU, DEFAULT_CONSTANT_VALUE_LANDAU, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PARABOLIC"), stringResources.CONSTANT_VALUE_PARABOLIC, DEFAULT_CONSTANT_VALUE_PARABOLIC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_OMEGA"), stringResources.CONSTANT_VALUE_OMEGA, DEFAULT_CONSTANT_VALUE_OMEGA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MRB"), stringResources.CONSTANT_VALUE_MRB, DEFAULT_CONSTANT_VALUE_MRB, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LI2"), stringResources.CONSTANT_VALUE_LI2, DEFAULT_CONSTANT_VALUE_LI2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_GOMPERTZ"), stringResources.CONSTANT_VALUE_GOMPERTZ, DEFAULT_CONSTANT_VALUE_GOMPERTZ, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LIGHT_SPEED"), stringResources.CONSTANT_VALUE_LIGHT_SPEED, DEFAULT_CONSTANT_VALUE_LIGHT_SPEED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_GRAVITATIONAL_CONSTANT"), stringResources.CONSTANT_VALUE_GRAVITATIONAL_CONSTANT, DEFAULT_CONSTANT_VALUE_GRAVITATIONAL_CONSTANT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_GRAVIT_ACC_EARTH"), stringResources.CONSTANT_VALUE_GRAVIT_ACC_EARTH, DEFAULT_CONSTANT_VALUE_GRAVIT_ACC_EARTH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PLANCK_CONSTANT"), stringResources.CONSTANT_VALUE_PLANCK_CONSTANT, DEFAULT_CONSTANT_VALUE_PLANCK_CONSTANT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED"), stringResources.CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED, DEFAULT_CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PLANCK_LENGTH"), stringResources.CONSTANT_VALUE_PLANCK_LENGTH, DEFAULT_CONSTANT_VALUE_PLANCK_LENGTH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PLANCK_MASS"), stringResources.CONSTANT_VALUE_PLANCK_MASS, DEFAULT_CONSTANT_VALUE_PLANCK_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PLANCK_TIME"), stringResources.CONSTANT_VALUE_PLANCK_TIME, DEFAULT_CONSTANT_VALUE_PLANCK_TIME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_LIGHT_YEAR"), stringResources.CONSTANT_VALUE_LIGHT_YEAR, DEFAULT_CONSTANT_VALUE_LIGHT_YEAR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_ASTRONOMICAL_UNIT"), stringResources.CONSTANT_VALUE_ASTRONOMICAL_UNIT, DEFAULT_CONSTANT_VALUE_ASTRONOMICAL_UNIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_PARSEC"), stringResources.CONSTANT_VALUE_PARSEC, DEFAULT_CONSTANT_VALUE_PARSEC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_KILOPARSEC"), stringResources.CONSTANT_VALUE_KILOPARSEC, DEFAULT_CONSTANT_VALUE_KILOPARSEC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL"), stringResources.CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL, DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_EARTH_RADIUS_POLAR"), stringResources.CONSTANT_VALUE_EARTH_RADIUS_POLAR, DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_POLAR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_EARTH_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_EARTH_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_EARTH_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_EARTH_MASS"), stringResources.CONSTANT_VALUE_EARTH_MASS, DEFAULT_CONSTANT_VALUE_EARTH_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MOON_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_MOON_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_MOON_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MOON_MASS"), stringResources.CONSTANT_VALUE_MOON_MASS, DEFAULT_CONSTANT_VALUE_MOON_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_SOLAR_RADIUS"), stringResources.CONSTANT_VALUE_SOLAR_RADIUS, DEFAULT_CONSTANT_VALUE_SOLAR_RADIUS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_SOLAR_MASS"), stringResources.CONSTANT_VALUE_SOLAR_MASS, DEFAULT_CONSTANT_VALUE_SOLAR_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MERCURY_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_MERCURY_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_MERCURY_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MERCURY_MASS"), stringResources.CONSTANT_VALUE_MERCURY_MASS, DEFAULT_CONSTANT_VALUE_MERCURY_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_VENUS_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_VENUS_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_VENUS_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_VENUS_MASS"), stringResources.CONSTANT_VALUE_VENUS_MASS, DEFAULT_CONSTANT_VALUE_VENUS_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MARS_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_MARS_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_MARS_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MARS_MASS"), stringResources.CONSTANT_VALUE_MARS_MASS, DEFAULT_CONSTANT_VALUE_MARS_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_JUPITER_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_JUPITER_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_JUPITER_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_JUPITER_MASS"), stringResources.CONSTANT_VALUE_JUPITER_MASS, DEFAULT_CONSTANT_VALUE_JUPITER_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_SATURN_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_SATURN_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_SATURN_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_SATURN_MASS"), stringResources.CONSTANT_VALUE_SATURN_MASS, DEFAULT_CONSTANT_VALUE_SATURN_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_URANUS_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_URANUS_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_URANUS_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_URANUS_MASS"), stringResources.CONSTANT_VALUE_URANUS_MASS, DEFAULT_CONSTANT_VALUE_URANUS_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN"), stringResources.CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN, DEFAULT_CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_NEPTUNE_MASS"), stringResources.CONSTANT_VALUE_NEPTUNE_MASS, DEFAULT_CONSTANT_VALUE_NEPTUNE_MASS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS"), stringResources.CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS, DEFAULT_CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_TRUE"), stringResources.CONSTANT_VALUE_TRUE, DEFAULT_CONSTANT_VALUE_TRUE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_FALSE"), stringResources.CONSTANT_VALUE_FALSE, DEFAULT_CONSTANT_VALUE_FALSE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_NPAR"), stringResources.CONSTANT_VALUE_NPAR, DEFAULT_CONSTANT_VALUE_NPAR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("CONSTANT_VALUE_NAN"), stringResources.CONSTANT_VALUE_NAN, DEFAULT_CONSTANT_VALUE_NAN, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SIN"), stringResources.FUNCTION_1_ARG_SIN, DEFAULT_FUNCTION_1_ARG_SIN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_COS"), stringResources.FUNCTION_1_ARG_COS, DEFAULT_FUNCTION_1_ARG_COS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_TAN"), stringResources.FUNCTION_1_ARG_TAN, DEFAULT_FUNCTION_1_ARG_TAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_CTAN"), stringResources.FUNCTION_1_ARG_CTAN, DEFAULT_FUNCTION_1_ARG_CTAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SEC"), stringResources.FUNCTION_1_ARG_SEC, DEFAULT_FUNCTION_1_ARG_SEC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_COSEC"), stringResources.FUNCTION_1_ARG_COSEC, DEFAULT_FUNCTION_1_ARG_COSEC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ASIN"), stringResources.FUNCTION_1_ARG_ASIN, DEFAULT_FUNCTION_1_ARG_ASIN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ACOS"), stringResources.FUNCTION_1_ARG_ACOS, DEFAULT_FUNCTION_1_ARG_ACOS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ATAN"), stringResources.FUNCTION_1_ARG_ATAN, DEFAULT_FUNCTION_1_ARG_ATAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ACTAN"), stringResources.FUNCTION_1_ARG_ACTAN, DEFAULT_FUNCTION_1_ARG_ACTAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_LN"), stringResources.FUNCTION_1_ARG_LN, DEFAULT_FUNCTION_1_ARG_LN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_LOG2"), stringResources.FUNCTION_1_ARG_LOG2, DEFAULT_FUNCTION_1_ARG_LOG2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_LOG10"), stringResources.FUNCTION_1_ARG_LOG10, DEFAULT_FUNCTION_1_ARG_LOG10, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_RAD"), stringResources.FUNCTION_1_ARG_RAD, DEFAULT_FUNCTION_1_ARG_RAD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_EXP"), stringResources.FUNCTION_1_ARG_EXP, DEFAULT_FUNCTION_1_ARG_EXP, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SQRT"), stringResources.FUNCTION_1_ARG_SQRT, DEFAULT_FUNCTION_1_ARG_SQRT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SINH"), stringResources.FUNCTION_1_ARG_SINH, DEFAULT_FUNCTION_1_ARG_SINH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_COSH"), stringResources.FUNCTION_1_ARG_COSH, DEFAULT_FUNCTION_1_ARG_COSH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_TANH"), stringResources.FUNCTION_1_ARG_TANH, DEFAULT_FUNCTION_1_ARG_TANH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_COTH"), stringResources.FUNCTION_1_ARG_COTH, DEFAULT_FUNCTION_1_ARG_COTH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SECH"), stringResources.FUNCTION_1_ARG_SECH, DEFAULT_FUNCTION_1_ARG_SECH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_CSCH"), stringResources.FUNCTION_1_ARG_CSCH, DEFAULT_FUNCTION_1_ARG_CSCH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_DEG"), stringResources.FUNCTION_1_ARG_DEG, DEFAULT_FUNCTION_1_ARG_DEG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ABS"), stringResources.FUNCTION_1_ARG_ABS, DEFAULT_FUNCTION_1_ARG_ABS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SGN"), stringResources.FUNCTION_1_ARG_SGN, DEFAULT_FUNCTION_1_ARG_SGN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_FLOOR"), stringResources.FUNCTION_1_ARG_FLOOR, DEFAULT_FUNCTION_1_ARG_FLOOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_CEIL"), stringResources.FUNCTION_1_ARG_CEIL, DEFAULT_FUNCTION_1_ARG_CEIL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_NOT"), stringResources.FUNCTION_1_ARG_NOT, DEFAULT_FUNCTION_1_ARG_NOT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ARSINH"), stringResources.FUNCTION_1_ARG_ARSINH, DEFAULT_FUNCTION_1_ARG_ARSINH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ARCOSH"), stringResources.FUNCTION_1_ARG_ARCOSH, DEFAULT_FUNCTION_1_ARG_ARCOSH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ARTANH"), stringResources.FUNCTION_1_ARG_ARTANH, DEFAULT_FUNCTION_1_ARG_ARTANH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ARCOTH"), stringResources.FUNCTION_1_ARG_ARCOTH, DEFAULT_FUNCTION_1_ARG_ARCOTH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ARSECH"), stringResources.FUNCTION_1_ARG_ARSECH, DEFAULT_FUNCTION_1_ARG_ARSECH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ARCSCH"), stringResources.FUNCTION_1_ARG_ARCSCH, DEFAULT_FUNCTION_1_ARG_ARCSCH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SA"), stringResources.FUNCTION_1_ARG_SA, DEFAULT_FUNCTION_1_ARG_SA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SINC"), stringResources.FUNCTION_1_ARG_SINC, DEFAULT_FUNCTION_1_ARG_SINC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_BELL_NUMBER"), stringResources.FUNCTION_1_ARG_BELL_NUMBER, DEFAULT_FUNCTION_1_ARG_BELL_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_LUCAS_NUMBER"), stringResources.FUNCTION_1_ARG_LUCAS_NUMBER, DEFAULT_FUNCTION_1_ARG_LUCAS_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_FIBONACCI_NUMBER"), stringResources.FUNCTION_1_ARG_FIBONACCI_NUMBER, DEFAULT_FUNCTION_1_ARG_FIBONACCI_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_HARMONIC_NUMBER"), stringResources.FUNCTION_1_ARG_HARMONIC_NUMBER, DEFAULT_FUNCTION_1_ARG_HARMONIC_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_IS_PRIME"), stringResources.FUNCTION_1_ARG_IS_PRIME, DEFAULT_FUNCTION_1_ARG_IS_PRIME, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_PRIME_COUNT"), stringResources.FUNCTION_1_ARG_PRIME_COUNT, DEFAULT_FUNCTION_1_ARG_PRIME_COUNT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_EXP_INT"), stringResources.FUNCTION_1_ARG_EXP_INT, DEFAULT_FUNCTION_1_ARG_EXP_INT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_LOG_INT"), stringResources.FUNCTION_1_ARG_LOG_INT, DEFAULT_FUNCTION_1_ARG_LOG_INT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_OFF_LOG_INT"), stringResources.FUNCTION_1_ARG_OFF_LOG_INT, DEFAULT_FUNCTION_1_ARG_OFF_LOG_INT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_GAUSS_ERF"), stringResources.FUNCTION_1_ARG_GAUSS_ERF, DEFAULT_FUNCTION_1_ARG_GAUSS_ERF, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_GAUSS_ERFC"), stringResources.FUNCTION_1_ARG_GAUSS_ERFC, DEFAULT_FUNCTION_1_ARG_GAUSS_ERFC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_GAUSS_ERF_INV"), stringResources.FUNCTION_1_ARG_GAUSS_ERF_INV, DEFAULT_FUNCTION_1_ARG_GAUSS_ERF_INV, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_GAUSS_ERFC_INV"), stringResources.FUNCTION_1_ARG_GAUSS_ERFC_INV, DEFAULT_FUNCTION_1_ARG_GAUSS_ERFC_INV, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ULP"), stringResources.FUNCTION_1_ARG_ULP, DEFAULT_FUNCTION_1_ARG_ULP, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ISNAN"), stringResources.FUNCTION_1_ARG_ISNAN, DEFAULT_FUNCTION_1_ARG_ISNAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_NDIG10"), stringResources.FUNCTION_1_ARG_NDIG10, DEFAULT_FUNCTION_1_ARG_NDIG10, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_NFACT"), stringResources.FUNCTION_1_ARG_NFACT, DEFAULT_FUNCTION_1_ARG_NFACT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ARCSEC"), stringResources.FUNCTION_1_ARG_ARCSEC, DEFAULT_FUNCTION_1_ARG_ARCSEC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_ARCCSC"), stringResources.FUNCTION_1_ARG_ARCCSC, DEFAULT_FUNCTION_1_ARG_ARCCSC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_GAMMA"), stringResources.FUNCTION_1_ARG_GAMMA, DEFAULT_FUNCTION_1_ARG_GAMMA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_LAMBERT_W0"), stringResources.FUNCTION_1_ARG_LAMBERT_W0, DEFAULT_FUNCTION_1_ARG_LAMBERT_W0, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_LAMBERT_W1"), stringResources.FUNCTION_1_ARG_LAMBERT_W1, DEFAULT_FUNCTION_1_ARG_LAMBERT_W1, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_SGN_GAMMA"), stringResources.FUNCTION_1_ARG_SGN_GAMMA, DEFAULT_FUNCTION_1_ARG_SGN_GAMMA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_LOG_GAMMA"), stringResources.FUNCTION_1_ARG_LOG_GAMMA, DEFAULT_FUNCTION_1_ARG_LOG_GAMMA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_DI_GAMMA"), stringResources.FUNCTION_1_ARG_DI_GAMMA, DEFAULT_FUNCTION_1_ARG_DI_GAMMA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_1_ARG_PARAM"), stringResources.FUNCTION_1_ARG_PARAM, DEFAULT_FUNCTION_1_ARG_PARAM, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_LOG"), stringResources.FUNCTION_2_ARG_LOG, DEFAULT_FUNCTION_2_ARG_LOG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_MOD"), stringResources.FUNCTION_2_ARG_MOD, DEFAULT_FUNCTION_2_ARG_MOD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_BINOM_COEFF"), stringResources.FUNCTION_2_ARG_BINOM_COEFF, DEFAULT_FUNCTION_2_ARG_BINOM_COEFF, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_BERNOULLI_NUMBER"), stringResources.FUNCTION_2_ARG_BERNOULLI_NUMBER, DEFAULT_FUNCTION_2_ARG_BERNOULLI_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_STIRLING1_NUMBER"), stringResources.FUNCTION_2_ARG_STIRLING1_NUMBER, DEFAULT_FUNCTION_2_ARG_STIRLING1_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_STIRLING2_NUMBER"), stringResources.FUNCTION_2_ARG_STIRLING2_NUMBER, DEFAULT_FUNCTION_2_ARG_STIRLING2_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_WORPITZKY_NUMBER"), stringResources.FUNCTION_2_ARG_WORPITZKY_NUMBER, DEFAULT_FUNCTION_2_ARG_WORPITZKY_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_EULER_NUMBER"), stringResources.FUNCTION_2_ARG_EULER_NUMBER, DEFAULT_FUNCTION_2_ARG_EULER_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_KRONECKER_DELTA"), stringResources.FUNCTION_2_ARG_KRONECKER_DELTA, DEFAULT_FUNCTION_2_ARG_KRONECKER_DELTA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_EULER_POLYNOMIAL"), stringResources.FUNCTION_2_ARG_EULER_POLYNOMIAL, DEFAULT_FUNCTION_2_ARG_EULER_POLYNOMIAL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_HARMONIC_NUMBER"), stringResources.FUNCTION_2_ARG_HARMONIC_NUMBER, DEFAULT_FUNCTION_2_ARG_HARMONIC_NUMBER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_ROUND"), stringResources.FUNCTION_2_ARG_ROUND, DEFAULT_FUNCTION_2_ARG_ROUND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_NDIG"), stringResources.FUNCTION_2_ARG_NDIG, DEFAULT_FUNCTION_2_ARG_NDIG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_DIGIT10"), stringResources.FUNCTION_2_ARG_DIGIT10, DEFAULT_FUNCTION_2_ARG_DIGIT10, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_FACTVAL"), stringResources.FUNCTION_2_ARG_FACTVAL, DEFAULT_FUNCTION_2_ARG_FACTVAL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_FACTEXP"), stringResources.FUNCTION_2_ARG_FACTEXP, DEFAULT_FUNCTION_2_ARG_FACTEXP, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_ROOT"), stringResources.FUNCTION_2_ARG_ROOT, DEFAULT_FUNCTION_2_ARG_ROOT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_INC_GAMMA_LOWER"), stringResources.FUNCTION_2_ARG_INC_GAMMA_LOWER, DEFAULT_FUNCTION_2_ARG_INC_GAMMA_LOWER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_INC_GAMMA_UPPER"), stringResources.FUNCTION_2_ARG_INC_GAMMA_UPPER, DEFAULT_FUNCTION_2_ARG_INC_GAMMA_UPPER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_REG_GAMMA_LOWER"), stringResources.FUNCTION_2_ARG_REG_GAMMA_LOWER, DEFAULT_FUNCTION_2_ARG_REG_GAMMA_LOWER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_REG_GAMMA_UPPER"), stringResources.FUNCTION_2_ARG_REG_GAMMA_UPPER, DEFAULT_FUNCTION_2_ARG_REG_GAMMA_UPPER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_PERMUTATIONS"), stringResources.FUNCTION_2_ARG_PERMUTATIONS, DEFAULT_FUNCTION_2_ARG_PERMUTATIONS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_BETA"), stringResources.FUNCTION_2_ARG_BETA, DEFAULT_FUNCTION_2_ARG_BETA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_2_ARG_LOG_BETA"), stringResources.FUNCTION_2_ARG_LOG_BETA, DEFAULT_FUNCTION_2_ARG_LOG_BETA, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG_IF"), stringResources.FUNCTION_3_ARG_IF, DEFAULT_FUNCTION_3_ARG_IF, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG_CHI"), stringResources.FUNCTION_3_ARG_CHI, DEFAULT_FUNCTION_3_ARG_CHI, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG_CHI_LR"), stringResources.FUNCTION_3_ARG_CHI_LR, DEFAULT_FUNCTION_3_ARG_CHI_LR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG_CHI_L"), stringResources.FUNCTION_3_ARG_CHI_L, DEFAULT_FUNCTION_3_ARG_CHI_L, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG_CHI_R"), stringResources.FUNCTION_3_ARG_CHI_R, DEFAULT_FUNCTION_3_ARG_CHI_R, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG_DIGIT"), stringResources.FUNCTION_3_ARG_DIGIT, DEFAULT_FUNCTION_3_ARG_DIGIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG_INC_BETA"), stringResources.FUNCTION_3_ARG_INC_BETA, DEFAULT_FUNCTION_3_ARG_INC_BETA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_3_ARG_REG_BETA"), stringResources.FUNCTION_3_ARG_REG_BETA, DEFAULT_FUNCTION_3_ARG_REG_BETA, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_IFF"), stringResources.FUNCTION_VARIADIC_IFF, DEFAULT_FUNCTION_VARIADIC_IFF, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_MIN"), stringResources.FUNCTION_VARIADIC_MIN, DEFAULT_FUNCTION_VARIADIC_MIN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_MAX"), stringResources.FUNCTION_VARIADIC_MAX, DEFAULT_FUNCTION_VARIADIC_MAX, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_CONT_FRAC"), stringResources.FUNCTION_VARIADIC_CONT_FRAC, DEFAULT_FUNCTION_VARIADIC_CONT_FRAC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_CONT_POL"), stringResources.FUNCTION_VARIADIC_CONT_POL, DEFAULT_FUNCTION_VARIADIC_CONT_POL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_GCD"), stringResources.FUNCTION_VARIADIC_GCD, DEFAULT_FUNCTION_VARIADIC_GCD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_LCM"), stringResources.FUNCTION_VARIADIC_LCM, DEFAULT_FUNCTION_VARIADIC_LCM, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_SUM"), stringResources.FUNCTION_VARIADIC_SUM, DEFAULT_FUNCTION_VARIADIC_SUM, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_PROD"), stringResources.FUNCTION_VARIADIC_PROD, DEFAULT_FUNCTION_VARIADIC_PROD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_AVG"), stringResources.FUNCTION_VARIADIC_AVG, DEFAULT_FUNCTION_VARIADIC_AVG, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_VAR"), stringResources.FUNCTION_VARIADIC_VAR, DEFAULT_FUNCTION_VARIADIC_VAR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_STD"), stringResources.FUNCTION_VARIADIC_STD, DEFAULT_FUNCTION_VARIADIC_STD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_RND_LIST"), stringResources.FUNCTION_VARIADIC_RND_LIST, DEFAULT_FUNCTION_VARIADIC_RND_LIST, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_COALESCE"), stringResources.FUNCTION_VARIADIC_COALESCE, DEFAULT_FUNCTION_VARIADIC_COALESCE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_OR"), stringResources.FUNCTION_VARIADIC_OR, DEFAULT_FUNCTION_VARIADIC_OR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_AND"), stringResources.FUNCTION_VARIADIC_AND, DEFAULT_FUNCTION_VARIADIC_AND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_XOR"), stringResources.FUNCTION_VARIADIC_XOR, DEFAULT_FUNCTION_VARIADIC_XOR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_ARGMIN"), stringResources.FUNCTION_VARIADIC_ARGMIN, DEFAULT_FUNCTION_VARIADIC_ARGMIN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_ARGMAX"), stringResources.FUNCTION_VARIADIC_ARGMAX, DEFAULT_FUNCTION_VARIADIC_ARGMAX, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_MEDIAN"), stringResources.FUNCTION_VARIADIC_MEDIAN, DEFAULT_FUNCTION_VARIADIC_MEDIAN, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_MODE"), stringResources.FUNCTION_VARIADIC_MODE, DEFAULT_FUNCTION_VARIADIC_MODE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_BASE"), stringResources.FUNCTION_VARIADIC_BASE, DEFAULT_FUNCTION_VARIADIC_BASE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("FUNCTION_VARIADIC_NDIST"), stringResources.FUNCTION_VARIADIC_NDIST, DEFAULT_FUNCTION_VARIADIC_NDIST, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("OPERATOR_PLUS"), stringResources.OPERATOR_PLUS, DEFAULT_OPERATOR_PLUS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_MINUS"), stringResources.OPERATOR_MINUS, DEFAULT_OPERATOR_MINUS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_MULTIPLY"), stringResources.OPERATOR_MULTIPLY, DEFAULT_OPERATOR_MULTIPLY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_DIVIDE"), stringResources.OPERATOR_DIVIDE, DEFAULT_OPERATOR_DIVIDE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_DIVIDE_QUOTIENT"), stringResources.OPERATOR_DIVIDE_QUOTIENT, DEFAULT_OPERATOR_DIVIDE_QUOTIENT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_POWER"), stringResources.OPERATOR_POWER, DEFAULT_OPERATOR_POWER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_FACT"), stringResources.OPERATOR_FACT, DEFAULT_OPERATOR_FACT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_MOD"), stringResources.OPERATOR_MOD, DEFAULT_OPERATOR_MOD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_PERC"), stringResources.OPERATOR_PERC, DEFAULT_OPERATOR_PERC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_TETRATION"), stringResources.OPERATOR_TETRATION, DEFAULT_OPERATOR_TETRATION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_SQUARE_ROOT"), stringResources.OPERATOR_SQUARE_ROOT, DEFAULT_OPERATOR_SQUARE_ROOT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_CUBE_ROOT"), stringResources.OPERATOR_CUBE_ROOT, DEFAULT_OPERATOR_CUBE_ROOT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("OPERATOR_FOURTH_ROOT"), stringResources.OPERATOR_FOURTH_ROOT, DEFAULT_OPERATOR_FOURTH_ROOT, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_LEFT_PARENTHESES"), stringResources.PARSER_SYMBOL_LEFT_PARENTHESES, DEFAULT_PARSER_SYMBOL_LEFT_PARENTHESES, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_RIGHT_PARENTHESES"), stringResources.PARSER_SYMBOL_RIGHT_PARENTHESES, DEFAULT_PARSER_SYMBOL_RIGHT_PARENTHESES, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_COMMA"), stringResources.PARSER_SYMBOL_COMMA, DEFAULT_PARSER_SYMBOL_COMMA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_SEMI"), stringResources.PARSER_SYMBOL_SEMI, DEFAULT_PARSER_SYMBOL_SEMI, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_BLANK"), stringResources.PARSER_SYMBOL_BLANK, DEFAULT_PARSER_SYMBOL_BLANK, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_NUMBER_INTEGER"), stringResources.PARSER_SYMBOL_NUMBER_INTEGER, DEFAULT_PARSER_SYMBOL_NUMBER_INTEGER, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_NUMBER_DECIMAL"), stringResources.PARSER_SYMBOL_NUMBER_DECIMAL, DEFAULT_PARSER_SYMBOL_NUMBER_DECIMAL, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_NUMBER_LEADING_ZERO"), stringResources.PARSER_SYMBOL_NUMBER_LEADING_ZERO, DEFAULT_PARSER_SYMBOL_NUMBER_LEADING_ZERO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_NUMBER_SCI_NOTATION"), stringResources.PARSER_SYMBOL_NUMBER_SCI_NOTATION, DEFAULT_PARSER_SYMBOL_NUMBER_SCI_NOTATION, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO"), stringResources.PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO, DEFAULT_PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_NUMBER_FRACTIONS"), stringResources.PARSER_SYMBOL_NUMBER_FRACTIONS, DEFAULT_PARSER_SYMBOL_NUMBER_FRACTIONS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS"), stringResources.PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS, DEFAULT_PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("PARSER_SYMBOL_UNICODE_MATH"), stringResources.PARSER_SYMBOL_UNICODE_MATH, DEFAULT_PARSER_SYMBOL_UNICODE_MATH, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_PERC"), stringResources.DIMENSIONLESS_UNIT_PERC, DEFAULT_DIMENSIONLESS_UNIT_PERC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_PROMIL"), stringResources.DIMENSIONLESS_UNIT_PERM, DEFAULT_DIMENSIONLESS_UNIT_PERM, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_YOTTA"), stringResources.DIMENSIONLESS_UNIT_YOTTA, DEFAULT_DIMENSIONLESS_UNIT_YOTTA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_ZETTA"), stringResources.DIMENSIONLESS_UNIT_ZETTA, DEFAULT_DIMENSIONLESS_UNIT_ZETTA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_EXA"), stringResources.DIMENSIONLESS_UNIT_EXA, DEFAULT_DIMENSIONLESS_UNIT_EXA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_PETA"), stringResources.DIMENSIONLESS_UNIT_PETA, DEFAULT_DIMENSIONLESS_UNIT_PETA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_TERA"), stringResources.DIMENSIONLESS_UNIT_TERA, DEFAULT_DIMENSIONLESS_UNIT_TERA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_GIGA"), stringResources.DIMENSIONLESS_UNIT_GIGA, DEFAULT_DIMENSIONLESS_UNIT_GIGA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_MEGA"), stringResources.DIMENSIONLESS_UNIT_MEGA, DEFAULT_DIMENSIONLESS_UNIT_MEGA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_KILO"), stringResources.DIMENSIONLESS_UNIT_KILO, DEFAULT_DIMENSIONLESS_UNIT_KILO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_HECTO"), stringResources.DIMENSIONLESS_UNIT_HECTO, DEFAULT_DIMENSIONLESS_UNIT_HECTO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_DECA"), stringResources.DIMENSIONLESS_UNIT_DECA, DEFAULT_DIMENSIONLESS_UNIT_DECA, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_DECI"), stringResources.DIMENSIONLESS_UNIT_DECI, DEFAULT_DIMENSIONLESS_UNIT_DECI, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_CENTI"), stringResources.DIMENSIONLESS_UNIT_CENTI, DEFAULT_DIMENSIONLESS_UNIT_CENTI, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_MILLI"), stringResources.DIMENSIONLESS_UNIT_MILLI, DEFAULT_DIMENSIONLESS_UNIT_MILLI, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_MICRO"), stringResources.DIMENSIONLESS_UNIT_MICRO, DEFAULT_DIMENSIONLESS_UNIT_MICRO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_NANO"), stringResources.DIMENSIONLESS_UNIT_NANO, DEFAULT_DIMENSIONLESS_UNIT_NANO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_PICO"), stringResources.DIMENSIONLESS_UNIT_PICO, DEFAULT_DIMENSIONLESS_UNIT_PICO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_FEMTO"), stringResources.DIMENSIONLESS_UNIT_FEMTO, DEFAULT_DIMENSIONLESS_UNIT_FEMTO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_ATTO"), stringResources.DIMENSIONLESS_UNIT_ATTO, DEFAULT_DIMENSIONLESS_UNIT_ATTO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_ZEPTO"), stringResources.DIMENSIONLESS_UNIT_ZEPTO, DEFAULT_DIMENSIONLESS_UNIT_ZEPTO, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("DIMENSIONLESS_UNIT_YOCTO"), stringResources.DIMENSIONLESS_UNIT_YOCTO, DEFAULT_DIMENSIONLESS_UNIT_YOCTO, printDefault, printAsSrc);
		/* ------------------------------------------------- */
		StringUtils::consolePrintln(LINE_BREAK);
		printCurrentVsDefault(UTF("UNIT_METRE"), stringResources.UNIT_METRE, DEFAULT_UNIT_METRE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILOMETRE"), stringResources.UNIT_KILOMETRE, DEFAULT_UNIT_KILOMETRE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_CENTIMETRE"), stringResources.UNIT_CENTIMETRE, DEFAULT_UNIT_CENTIMETRE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILLIMETRE"), stringResources.UNIT_MILLIMETRE, DEFAULT_UNIT_MILLIMETRE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_INCH"), stringResources.UNIT_INCH, DEFAULT_UNIT_INCH, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_YARD"), stringResources.UNIT_YARD, DEFAULT_UNIT_YARD, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_FEET"), stringResources.UNIT_FEET, DEFAULT_UNIT_FEET, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILE"), stringResources.UNIT_MILE, DEFAULT_UNIT_MILE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_NAUTICAL_MILE"), stringResources.UNIT_NAUTICAL_MILE, DEFAULT_UNIT_NAUTICAL_MILE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_METRE2"), stringResources.UNIT_METRE2, DEFAULT_UNIT_METRE2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_CENTIMETRE2"), stringResources.UNIT_CENTIMETRE2, DEFAULT_UNIT_CENTIMETRE2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILLIMETRE2"), stringResources.UNIT_MILLIMETRE2, DEFAULT_UNIT_MILLIMETRE2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_ARE"), stringResources.UNIT_ARE, DEFAULT_UNIT_ARE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_HECTARE"), stringResources.UNIT_HECTARE, DEFAULT_UNIT_HECTARE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_ACRE"), stringResources.UNIT_ACRE, DEFAULT_UNIT_ACRE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILOMETRE2"), stringResources.UNIT_KILOMETRE2, DEFAULT_UNIT_KILOMETRE2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILLIMETRE3"), stringResources.UNIT_MILLIMETRE3, DEFAULT_UNIT_MILLIMETRE3, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_CENTIMETRE3"), stringResources.UNIT_CENTIMETRE3, DEFAULT_UNIT_CENTIMETRE3, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_METRE3"), stringResources.UNIT_METRE3, DEFAULT_UNIT_METRE3, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILOMETRE3"), stringResources.UNIT_KILOMETRE3, DEFAULT_UNIT_KILOMETRE3, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILLILITRE"), stringResources.UNIT_MILLILITRE, DEFAULT_UNIT_MILLILITRE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_LITRE"), stringResources.UNIT_LITRE, DEFAULT_UNIT_LITRE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_GALLON"), stringResources.UNIT_GALLON, DEFAULT_UNIT_GALLON, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_PINT"), stringResources.UNIT_PINT, DEFAULT_UNIT_PINT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_SECOND"), stringResources.UNIT_SECOND, DEFAULT_UNIT_SECOND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILLISECOND"), stringResources.UNIT_MILLISECOND, DEFAULT_UNIT_MILLISECOND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MINUTE"), stringResources.UNIT_MINUTE, DEFAULT_UNIT_MINUTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_HOUR"), stringResources.UNIT_HOUR, DEFAULT_UNIT_HOUR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_DAY"), stringResources.UNIT_DAY, DEFAULT_UNIT_DAY, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_WEEK"), stringResources.UNIT_WEEK, DEFAULT_UNIT_WEEK, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_JULIAN_YEAR"), stringResources.UNIT_JULIAN_YEAR, DEFAULT_UNIT_JULIAN_YEAR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILOGRAM"), stringResources.UNIT_KILOGRAM, DEFAULT_UNIT_KILOGRAM, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_GRAM"), stringResources.UNIT_GRAM, DEFAULT_UNIT_GRAM, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILLIGRAM"), stringResources.UNIT_MILLIGRAM, DEFAULT_UNIT_MILLIGRAM, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_DECAGRAM"), stringResources.UNIT_DECAGRAM, DEFAULT_UNIT_DECAGRAM, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_TONNE"), stringResources.UNIT_TONNE, DEFAULT_UNIT_TONNE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_OUNCE"), stringResources.UNIT_OUNCE, DEFAULT_UNIT_OUNCE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_POUND"), stringResources.UNIT_POUND, DEFAULT_UNIT_POUND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_BIT"), stringResources.UNIT_BIT, DEFAULT_UNIT_BIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILOBIT"), stringResources.UNIT_KILOBIT, DEFAULT_UNIT_KILOBIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MEGABIT"), stringResources.UNIT_MEGABIT, DEFAULT_UNIT_MEGABIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_GIGABIT"), stringResources.UNIT_GIGABIT, DEFAULT_UNIT_GIGABIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_TERABIT"), stringResources.UNIT_TERABIT, DEFAULT_UNIT_TERABIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_PETABIT"), stringResources.UNIT_PETABIT, DEFAULT_UNIT_PETABIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_EXABIT"), stringResources.UNIT_EXABIT, DEFAULT_UNIT_EXABIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_ZETTABIT"), stringResources.UNIT_ZETTABIT, DEFAULT_UNIT_ZETTABIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_YOTTABIT"), stringResources.UNIT_YOTTABIT, DEFAULT_UNIT_YOTTABIT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_BYTE"), stringResources.UNIT_BYTE, DEFAULT_UNIT_BYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILOBYTE"), stringResources.UNIT_KILOBYTE, DEFAULT_UNIT_KILOBYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MEGABYTE"), stringResources.UNIT_MEGABYTE, DEFAULT_UNIT_MEGABYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_GIGABYTE"), stringResources.UNIT_GIGABYTE, DEFAULT_UNIT_GIGABYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_TERABYTE"), stringResources.UNIT_TERABYTE, DEFAULT_UNIT_TERABYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_PETABYTE"), stringResources.UNIT_PETABYTE, DEFAULT_UNIT_PETABYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_EXABYTE"), stringResources.UNIT_EXABYTE, DEFAULT_UNIT_EXABYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_ZETTABYTE"), stringResources.UNIT_ZETTABYTE, DEFAULT_UNIT_ZETTABYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_YOTTABYTE"), stringResources.UNIT_YOTTABYTE, DEFAULT_UNIT_YOTTABYTE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_JOULE"), stringResources.UNIT_JOULE, DEFAULT_UNIT_JOULE, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_ELECTRONO_VOLT"), stringResources.UNIT_ELECTRONO_VOLT, DEFAULT_UNIT_ELECTRONO_VOLT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILO_ELECTRONO_VOLT"), stringResources.UNIT_KILO_ELECTRONO_VOLT, DEFAULT_UNIT_KILO_ELECTRONO_VOLT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MEGA_ELECTRONO_VOLT"), stringResources.UNIT_MEGA_ELECTRONO_VOLT, DEFAULT_UNIT_MEGA_ELECTRONO_VOLT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_GIGA_ELECTRONO_VOLT"), stringResources.UNIT_GIGA_ELECTRONO_VOLT, DEFAULT_UNIT_GIGA_ELECTRONO_VOLT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_TERA_ELECTRONO_VOLT"), stringResources.UNIT_TERA_ELECTRONO_VOLT, DEFAULT_UNIT_TERA_ELECTRONO_VOLT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_METRE_PER_SECOND"), stringResources.UNIT_METRE_PER_SECOND, DEFAULT_UNIT_METRE_PER_SECOND, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILOMETRE_PER_HOUR"), stringResources.UNIT_KILOMETRE_PER_HOUR, DEFAULT_UNIT_KILOMETRE_PER_HOUR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILE_PER_HOUR"), stringResources.UNIT_MILE_PER_HOUR, DEFAULT_UNIT_MILE_PER_HOUR, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KNOT"), stringResources.UNIT_KNOT, DEFAULT_UNIT_KNOT, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_METRE_PER_SECOND2"), stringResources.UNIT_METRE_PER_SECOND2, DEFAULT_UNIT_METRE_PER_SECOND2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_KILOMETRE_PER_HOUR2"), stringResources.UNIT_KILOMETRE_PER_HOUR2, DEFAULT_UNIT_KILOMETRE_PER_HOUR2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MILE_PER_HOUR2"), stringResources.UNIT_MILE_PER_HOUR2, DEFAULT_UNIT_MILE_PER_HOUR2, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_RADIAN_ARC"), stringResources.UNIT_RADIAN_ARC, DEFAULT_UNIT_RADIAN_ARC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_DEGREE_ARC"), stringResources.UNIT_DEGREE_ARC, DEFAULT_UNIT_DEGREE_ARC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_MINUTE_ARC"), stringResources.UNIT_MINUTE_ARC, DEFAULT_UNIT_MINUTE_ARC, printDefault, printAsSrc);
		printCurrentVsDefault(UTF("UNIT_SECOND_ARC"), stringResources.UNIT_SECOND_ARC, DEFAULT_UNIT_SECOND_ARC, printDefault, printAsSrc);
	}

	StringResourcesPtr new_StringResources() {
		return std::make_shared<StringResources>();
	}

} // org::mariuszgromada::math::mxparser
