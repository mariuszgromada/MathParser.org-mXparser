/*
 * @(#)StringResourcesChinese.cpp        6.1.0    2024-10-08
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

#include "org/mariuszgromada/math/mxparser/StringResourcesChinese.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/StringInvariant.hpp"

namespace org::mariuszgromada::math::mxparser {
	using namespace org::mariuszgromada::math::mxparser::stringutils;

	API_VISIBLE StringResourcesChinese::StringResourcesChinese() {
		USER_LANGUAGE = S(UTF("中文"));
		// -------------------------------------------------
		STARTING_SYNTAX_CHECK = S(UTF("开始语法检查..."));
		NO_ERRORS_DETECTED = S(UTF("未检测到错误。"));
		NO_ERRORS_DETECTED_IN_ARGUMENT_DEFINITION = S(UTF("参数定义中未检测到错误。"));
		NO_ERRORS_DETECTED_IN_RECURSIVE_ARGUMENT_DEFINITION = S(UTF("递归参数定义中未检测到错误。"));
		NO_ERRORS_DETECTED_IN_FUNCTION_DEFINITION = S(UTF("函数定义中未检测到错误。"));
		NO_ERRORS_DETECTED_IN_CONSTANT_DEFINITION = S(UTF("常量定义中未检测到错误。"));
		LEXICAL_ERROR_HAS_BEEN_FOUND = S(UTF("发现了词法错误。"));
		ERRORS_HAVE_BEEN_FOUND = S(UTF("发现了错误。"));
		ALREADY_CHECKED_NO_ERRORS = S(UTF("语法已检查 - 未检测到错误。"));
		SYNTAX_STATUS_UNKNOWN = S(UTF("语法状态未知。"));
		PROBLEM_WITH_EXPRESSION_SYNTAX = S(UTF("表达式语法存在问题。"));
		// -------------------------------------------------
		ENCOUNTERED = S(UTF("遇到"));
		AT_INDEX = S(UTF("在索引"));
		WAS_EXPECTING = S(UTF("期望"));
		WAS_EXPECTING_ONE_OF = S(UTF("期望其中之一"));
		UNEXPECTED_EXCEPTION_WAS_ENCOUNTERED = S(UTF("遇到意外异常。可能是解析器错误 - 请报告。"));
		UNEXPECTED_TOKEN_MANAGER_ERROR_WAS_ENCOUNTERED = S(UTF("遇到意外的标记管理器错误。可能是解析器错误 - 请报告。"));
		// -------------------------------------------------
		EXPRESSION_STRING_IS_EMPTY = S(UTF("表达式字符串为空。"));
		EXPRESSION_DOES_NOT_CONTAIN_ANY_TOKENS = S(UTF("表达式不包含任何标记。"));
		DUPLICATED_KEYWORD = S(UTF("发现重复的关键字。检查用户定义的项目。考虑使用覆盖内置标记的选项。"));
		ELEMENT = S(UTF("元素"));
		ERROR = S(UTF("错误"));
		EXCEPTION = S(UTF("异常"));
		TOKEN = S(UTF("标记"));
		INDEX = S(UTF("索引"));
		INVALID_TOKEN = S(UTF("无效标记。"));
		INVALID_TOKEN_POSSIBLY_MISSING_MULTIPLICATION_OPERATOR = S(UTF("无效标记。可能缺少乘法运算符 - 尝试启用隐含乘法模式。"));
		EXPRESSION_TOKENS = S(UTF("表达式标记"));
		NULL_TOKENS_LIST = S(UTF("标记列表为空。"));
		// -------------------------------------------------
		FUNCTION_WITH_EXTENDED_BODY_NO_ERRORS = S(UTF("用户定义的扩展函数 - 假设无错误。"));
		ARGUMENT_WITH_EXTENDED_BODY_NO_ERRORS = S(UTF("用户定义的扩展参数 - 假设无错误。"));
		PROVIDED_EXTENSION_IS_NULL = S(UTF("提供的扩展为空。"));
		PROVIDED_STRING_IS_NULL = S(UTF("提供的字符串为空。"));
		PROVIDED_ELEMENTS_ARE_NULL = S(UTF("提供的元素为空。"));
		MULTIPLICATION_OPERATOR_MISSING_TRY_IMPLIED_MULTIPLICATION_MODE = S(UTF("可能缺少乘法运算符 - 尝试隐含乘法模式。"));
		// -------------------------------------------------
		STARTING_SYNTAX_CHECK_DEPENDENT_ARGUMENT = S(UTF("开始检查依赖的用户定义参数语法。"));
		STARTING_SYNTAX_CHECK_RECURSIVE_ARGUMENT = S(UTF("开始检查递归用户定义参数语法。"));
		STARTING_SYNTAX_CHECK_USER_DEFINED_FUNCTION = S(UTF("开始检查用户定义函数语法。"));
		STARTING_SYNTAX_CHECK_VARIADIC_USER_DEFINED_FUNCTION = S(UTF("开始检查可变参数用户定义函数语法。"));
		// -------------------------------------------------
		ARGUMENT_WAS_EXPECTED = S(UTF("期望用户定义的参数。"));
		RECURSIVE_ARGUMENT_EXPECTING_1_PARAMETER = S(UTF("递归用户定义参数需要一个参数。"));
		// -------------------------------------------------
		INCORRECT_NUMBER_OF_PARAMETERS_IN_USER_DEFINED_FUNCTION = S(UTF("用户定义函数中的参数数量不正确。"));
		// -------------------------------------------------
		INCORRECT_NUMBER_OF_FUNCTION_PARAMETERS = S(UTF("函数参数数量不正确。"));
		EXPECTED = S(UTF("预期"));
		PROVIDED = S(UTF("提供"));
		USER_DEFINED_FUNCTION_EXPECTING_AT_LEAST_ONE_ARGUMENT = S(UTF("用户定义函数中的参数数量不正确 - 至少需要一个参数。"));
		EXPECTED_EVEN_NUMBER_OF_ARGUMENTS = S(UTF("预期偶数个参数。"));
		// -------------------------------------------------
		INVALID_FUNCTION_NAME = S(UTF("无效的函数名。"));
		INVALID_ARGUMENT_NAME = S(UTF("无效的参数名。"));
		INVALID_CONSTANT_NAME = S(UTF("无效的常量名。"));
		INVALID_FUNCTION_DEFINITION = S(UTF("无效的函数定义。"));
		INVALID_ARGUMENT_DEFINITION = S(UTF("无效的参数定义。"));
		INVALID_CONSTANT_DEFINITION = S(UTF("无效的常量定义。"));
		PATTERN_DOES_NOT_MATCH = S(UTF("模式不匹配。"));
		PATTERN_EXAMPLES = S(UTF("模式示例"));
		// -------------------------------------------------
		CONSTANT_WAS_EXPECTED = S(UTF("期望常量值。"));
		USER_CONSTANT_WAS_EXPECTED = S(UTF("期望用户定义的常量。"));
		// -------------------------------------------------
		UNARY_FUNCTION_EXPECTS_1_PARAMETER = S(UTF("一元函数期望 1 个参数。"));
		BINARY_FUNCTION_EXPECTS_2_PARAMETERS = S(UTF("二元函数期望 2 个参数。"));
		TERNARY_FUNCTION_EXPECTS_3_PARAMETERS = S(UTF("三元函数期望 3 个参数。"));
		// -------------------------------------------------
		DERIVATIVE_OPERATOR_EXPECTS_2_OR_3_OR_4_OR_5_CALCULUS_PARAMETERS = S(UTF("导数运算符期望 2 或 3 或 4 或 5 个微积分参数。"));
		ARGUMENT_WAS_EXPECTED_IN_A_DERIVATIVE_OPERATOR_INVOCATION = S(UTF("在导数运算符调用中期望参数。"));
		DUPLICATED_KEYWORDS_WERE_FOUND_IN_THE_CALCULUS_OPERATOR_INVOCATION = S(UTF("在微积分运算符调用中发现重复的关键字，请检查微积分参数。"));
		ONE_TOKEN_WAS_EXPECTED_IN_THE_CALCULUS_OPERATOR_INVOCATION = S(UTF("在微积分运算符调用中期望一个标记（参数或未知数）。"));
		NTH_ORDER_DERIVATIVE_OPERATOR_EXPECTS_3_OR_5_CALCULUS_PARAMETERS = S(UTF("N 次导数运算符期望 3 或 5 个微积分参数。"));
		INTEGRAL_SOLVE_OPERATOR_EXPECTS_4_CALCULUS_PARAMETERS = S(UTF("积分/求解运算符期望 4 个微积分参数。"));
		ITERATED_OPERATOR_EXPECTS_4_OR_5_CALCULUS_PARAMETERS = S(UTF("迭代运算符期望 4 或 5 个微积分参数。"));
		FORWARD_BACKWARD_DIFFERENCE_EXPECTS_2_OR_3_PARAMETERS = S(UTF("前/后差分运算符期望 2 或 3 个微积分参数。"));
		FORWARD_BACKWARD_DIFFERENCE_ARGUMENT_WAS_EXPECTED = S(UTF("在前/后差分运算符调用中期望参数。"));
		AT_LEAST_ONE_ARGUMENT_WAS_EXPECTED = S(UTF("期望至少一个参数。"));
		// -------------------------------------------------
		ERROR_WHILE_EXECUTING_THE_CALCULATE = S(UTF("执行计算时出错。"));
		RECURSION_CALLS_COUNTER_EXCEEDED = S(UTF("递归调用计数器超过允许的最大调用次数。"));
		RECURSION_CALLS_COUNTER = S(UTF("递归调用计数器"));
		STARTING_CALCULATION_LOOP = S(UTF("开始计算循环。"));
		CANCEL_REQUEST_FINISHING = S(UTF("遇到取消请求 - 正在结束。"));
		INTERNAL_ERROR_STRANGE_TOKEN_LEVEL_FINISHING = S(UTF("内部错误/奇怪的标记级别 - 正在结束。可能是解析器错误 - 请报告。"));
		FATAL_ERROR_DO_NOT_KNOW_WHAT_TO_DO_WITH_THE_ENCOUNTERED_TOKEN = S(UTF("致命错误，不知道如何处理遇到的标记。可能是解析器错误 - 请报告。"));
		MAXIMUM_ERROR_MESSAGE_LENGTH_EXCEEDED = S(UTF("错误消息的最大长度已超出。"));
		// -------------------------------------------------
		STARTING = S(UTF("开始..."));
		PARSING = S(UTF("解析中"));
		FULLY_COMPILED = S(UTF("完全编译"));
		CALCULATED_VALUE = S(UTF("计算值"));
		EXITING = S(UTF("退出。"));
		DONE = S(UTF("完成。"));
		// -------------------------------------------------
		KEYWORD = S(UTF("关键字"));
		SYNTAX = S(UTF("语法"));
		NUMBER = S(UTF("数字"));
		NUMBER_LITERAL = S(UTF("数字字面量"));
		TYPE = S(UTF("类型"));
		SINCE = S(UTF("自"));
		DESCRIPTION = S(UTF("描述"));
		// -------------------------------------------------
		CALC_STEPS_REGISTER_IS_EMPTY = S(UTF("CalcStepsRegister 为空"));
		CALC_STEPS_REGISTER_FOR = S(UTF("CalcStepsRegister 针对"));
		ARGUMENT = S(UTF("参数"));
		FUNCTION = S(UTF("函数"));
		EXPRESSION = S(UTF("表达式"));
		RESULT = S(UTF("结果"));
		COMPUTING_TIME = S(UTF("计算时间"));
		GROUP_SHORT = S(UTF("组"));
		NUMBER_SHORT = S(UTF("号"));
		FIRST = S(UTF("第一"));
		LAST = S(UTF("最后"));
		DESCRIPTION_SHORT = S(UTF("描述"));
		STEP = S(UTF("步骤"));
		// -------------------------------------------------
		SERIALIZATION_PERFORMED = S(UTF("序列化已执行："));
		DESERIALIZATION_PERFORMED = S(UTF("反序列化已执行："));
		NULL_OBJECT_PROVIDED = S(UTF("传递的参数对象为空。"));
		NULL_FILE_PATH_PROVIDED = S(UTF("传递的文件路径为空。"));
		FILE_PATH_ZERO_LENGTH_PROVIDED = S(UTF("文件路径不包含任何字符。"));
		FILE_PATH_IS_NOT_A_FILE = S(UTF("文件路径不是文件："));
		FILE_PATH_NOT_EXISTS = S(UTF("文件路径不存在："));
		NULL_DATA_PROVIDED = S(UTF("传递的数据为空。"));
		BINARY_SERIALIZATION_ENABLED = S(UTF("二进制序列化已启用。仅在有意识且有限的情况下使用。"));
		BINARY_SERIALIZATION_DISABLED = S(UTF("二进制序列化已禁用。你可以启用它，但需意识到安全风险。"));
		// -------------------------------------------------
		USER_DEFINED_EXPRESSION = S(UTF("用户定义的表达式"));
		USER_DEFINED_ARGUMENT = S(UTF("用户定义的参数"));
		USER_DEFINED_CONSTANT = S(UTF("用户定义的常量"));
		USER_DEFINED_FUNCTION = S(UTF("用户定义的函数"));
		USER_DEFINED_RECURSIVE_ARGUMENT = S(UTF("用户定义的递归参数"));
		// -------------------------------------------------
		HELP_CONTENT_LIMITED_TO_QUERY = S(UTF("帮助内容限于查询"));
		ALL_HELP_CONTENT = S(UTF("所有帮助内容。"));
		CAPTION = S(UTF("标题"));
		// -------------------------------------------------
		WARNING_BINARY_SERIALIZATION_SECURITY_RISKS = S(UTF("安全警告：从不受信任的源反序列化数据可能给应用程序引入安全漏洞。根据反序列化过程中使用的设置，不受信任的数据可能能够执行任意代码或导致拒绝服务攻击。不受信任的数据可以来自网络中的不受信任来源（例如，任何网络客户端），也可以在未经验证的连接上传输过程中被中间方操纵/篡改，或来自可能已被破坏/篡改的本地存储，或来自许多其他来源。MathParser.org-mXparser 不提供任何验证数据或防止篡改的方法。请在反序列化之前使用适当的数据验证方法。请非常谨慎地考虑这些攻击场景；许多项目、公司和序列化库的用户曾经因为不受信任的数据反序列化而遭受攻击。"));
		// -------------------------------------------------
		BINARY_RELATION = S(UTF("二元关系"));
		BITWISE_OPERATOR = S(UTF("位运算符"));
		BOOLEAN_OPERATOR = S(UTF("布尔运算符"));
		CALCULUS_OPERATOR = S(UTF("微积分运算符"));
		CONSTANT_VALUE = S(UTF("常量值"));
		FUNCTION_1_ARG = S(UTF("一元函数"));
		FUNCTION_2_ARG = S(UTF("二元函数"));
		FUNCTION_3_ARG = S(UTF("三元函数"));
		FUNCTION_VARIADIC = S(UTF("可变参数函数"));
		OPERATOR = S(UTF("运算符"));
		PARSER_SYMBOL = S(UTF("解析符号"));
		RANDOM_VARIABLE = S(UTF("随机变量"));
		UNIT = S(UTF("单位"));
		DIMENSIONLESS_UNIT = S(UTF("无量纲单位"));
		ITERATED_OPERATOR = S(UTF("迭代运算符"));
		// -------------------------------------------------
		RATIO_FRACTION = S(UTF("比例/分数"));
		METRIC_PREFIX = S(UTF("度量前缀"));
		UNIT_OF_LENGTH = S(UTF("长度单位"));
		UNIT_OF_AREA = S(UTF("面积单位"));
		UNIT_OF_VOLUME = S(UTF("体积单位"));
		UNIT_OF_TIME = S(UTF("时间单位"));
		UNIT_OF_MASS = S(UTF("质量单位"));
		UNIT_OF_INFORMATION = S(UTF("信息单位"));
		UNIT_OF_ENERGY = S(UTF("能量单位"));
		UNIT_OF_SPEED = S(UTF("速度单位"));
		UNIT_OF_ACCELERATION = S(UTF("加速度单位"));
		UNIT_OF_ANGLE = S(UTF("角度单位"));
		// -------------------------------------------------
		PHYSICAL_CONSTANT = S(UTF("物理常量"));
		ASTRONOMICAL_CONSTANT = S(UTF("天文常量"));
		MATHEMATICAL_CONSTANT = S(UTF("数学常量"));
		// -------------------------------------------------
		PROBABILITY_DISTRIBUTION_FUNCTION = S(UTF("概率分布函数"));
		CUMULATIVE_DISTRIBUTION_FUNCTION = S(UTF("累积分布函数"));
		QUANTILE_FUNCTION = S(UTF("分位数函数（逆累积分布函数）"));
		// -------------------------------------------------
		STUDENTS_T_DISTRIBUTION = S(UTF("学生 t 分布"));
		CHI_SQUARED_DISTRIBUTION = S(UTF("卡方分布"));
		SNEDECORS_F_DISTRIBUTION = S(UTF("斯内德科 F 分布（F 分布，也称为费舍尔-斯内德科分布）"));
		UNIFORM_CONTINUOUS_DISTRIBUTION = S(UTF("连续均匀分布"));
		UNIFORM_DISCRETE_DISTRIBUTION = S(UTF("离散均匀分布"));
		NORMAL_DISTRIBUTION = S(UTF("正态分布"));
		// -------------------------------------------------
		RANDOM_INTEGER = S(UTF("随机整数"));
		RANDOM_NATURAL_NUMBER = S(UTF("随机自然数"));
		RANDOM_NATURAL_NUMBER_INCLUDING_0 = S(UTF("随机自然数（包括 0）"));
		// -------------------------------------------------
		SPECIAL_FUNCTION = S(UTF("特殊函数"));
		// -------------------------------------------------
		SEMI_MAJOR_AXIS = S(UTF("半长轴"));
		// -------------------------------------------------
		BINARY_RELATION_EQ = S(UTF("相等"));
		BINARY_RELATION_NEQ = S(UTF("不等式"));
		BINARY_RELATION_LT = S(UTF("小于"));
		BINARY_RELATION_GT = S(UTF("大于"));
		BINARY_RELATION_LEQ = S(UTF("小于等于"));
		BINARY_RELATION_GEQ = S(UTF("大于等于"));
		// -------------------------------------------------
		BITWISE_OPERATOR_COMPL = S(UTF("位非（NOT）"));
		BITWISE_OPERATOR_AND = S(UTF("位与（AND）"));
		BITWISE_OPERATOR_XOR = S(UTF("位异或（XOR）"));
		BITWISE_OPERATOR_OR = S(UTF("位或（OR）"));
		BITWISE_OPERATOR_LEFT_SHIFT = S(UTF("位左移"));
		BITWISE_OPERATOR_RIGHT_SHIFT = S(UTF("位右移"));
		BITWISE_OPERATOR_NAND = S(UTF("位非与（NAND）"));
		BITWISE_OPERATOR_NOR = S(UTF("位非或（NOR）"));
		BITWISE_OPERATOR_XNOR = S(UTF("位同或（XNOR）"));
		// -------------------------------------------------
		BOOLEAN_OPERATOR_AND = S(UTF("逻辑与（AND）"));
		BOOLEAN_OPERATOR_OR = S(UTF("逻辑或（OR）"));
		BOOLEAN_OPERATOR_NEG = S(UTF("逻辑非"));
		BOOLEAN_OPERATOR_NAND = S(UTF("谢费尔符号"));
		BOOLEAN_OPERATOR_NOR = S(UTF("逻辑非或（NOR）"));
		BOOLEAN_OPERATOR_XOR = S(UTF("异或（XOR）"));
		BOOLEAN_OPERATOR_IMP = S(UTF("蕴涵"));
		BOOLEAN_OPERATOR_CIMP = S(UTF("逆蕴涵"));
		BOOLEAN_OPERATOR_NIMP = S(UTF("非蕴涵"));
		BOOLEAN_OPERATOR_CNIMP = S(UTF("逆非蕴涵"));
		BOOLEAN_OPERATOR_EQV = S(UTF("逻辑双条件"));
		// -------------------------------------------------
		CALCULUS_OPERATOR_SUM = S(UTF("求和（SIGMA）"));
		CALCULUS_OPERATOR_PROD = S(UTF("乘积（PI）"));
		CALCULUS_OPERATOR_INT = S(UTF("定积分"));
		CALCULUS_OPERATOR_DER = S(UTF("导数"));
		CALCULUS_OPERATOR_DER_LEFT = S(UTF("左导数"));
		CALCULUS_OPERATOR_DER_RIGHT = S(UTF("右导数"));
		CALCULUS_OPERATOR_DERN = S(UTF("n 次导数"));
		CALCULUS_OPERATOR_FORW_DIFF = S(UTF("前向差分"));
		CALCULUS_OPERATOR_BACKW_DIFF = S(UTF("后向差分"));
		CALCULUS_OPERATOR_AVG = S(UTF("平均值"));
		CALCULUS_OPERATOR_VAR = S(UTF("偏差校正的样本方差"));
		CALCULUS_OPERATOR_STD = S(UTF("偏差校正的样本标准差"));
		CALCULUS_OPERATOR_MIN = S(UTF("最小值"));
		CALCULUS_OPERATOR_MAX = S(UTF("最大值"));
		CALCULUS_OPERATOR_SOLVE = S(UTF("方程求解（根求解）"));
		// -------------------------------------------------
		CONSTANT_VALUE_PI = S(UTF("圆周率 π"));
		CONSTANT_VALUE_EULER = S(UTF("欧拉常数 e"));
		CONSTANT_VALUE_EULER_MASCHERONI = S(UTF("欧拉-马歇罗尼常数"));
		CONSTANT_VALUE_GOLDEN_RATIO = S(UTF("黄金比例"));
		CONSTANT_VALUE_PLASTIC = S(UTF("塑性常数"));
		CONSTANT_VALUE_EMBREE_TREFETHEN = S(UTF("安布里-特雷费森常数"));
		CONSTANT_VALUE_FEIGENBAUM_DELTA = S(UTF("费根鲍姆 δ 常数"));
		CONSTANT_VALUE_FEIGENBAUM_ALPHA = S(UTF("费根鲍姆 α 常数"));
		CONSTANT_VALUE_TWIN_PRIME = S(UTF("孪生素数常数"));
		CONSTANT_VALUE_MEISSEL_MERTEENS = S(UTF("梅塞尔-梅滕斯常数"));
		CONSTANT_VALUE_BRAUN_TWIN_PRIME = S(UTF("布朗的孪生素数常数"));
		CONSTANT_VALUE_BRAUN_PRIME_QUADR = S(UTF("布朗的四胞素数常数"));
		CONSTANT_VALUE_BRUIJN_NEWMAN = S(UTF("德布鲁因-纽曼常数"));
		CONSTANT_VALUE_CATALAN = S(UTF("卡塔兰常数"));
		CONSTANT_VALUE_LANDAU_RAMANUJAN = S(UTF("朗道-拉马努金常数"));
		CONSTANT_VALUE_VISWANATH = S(UTF("维斯瓦纳特常数"));
		CONSTANT_VALUE_LEGENDRE = S(UTF("勒让德常数"));
		CONSTANT_VALUE_RAMANUJAN_SOLDNER = S(UTF("拉马努金-索尔德纳常数"));
		CONSTANT_VALUE_ERDOS_BORWEIN = S(UTF("埃尔德什-博尔温常数"));
		CONSTANT_VALUE_BERNSTEIN = S(UTF("伯恩斯坦常数"));
		CONSTANT_VALUE_GAUSS_KUZMIN_WIRSING = S(UTF("高斯-库兹明-维尔辛常数"));
		CONSTANT_VALUE_HAFNER_SARNAK_MCCURLEY = S(UTF("哈夫纳-萨尔纳克-麦卡利常数"));
		CONSTANT_VALUE_GOLOMB_DICKMAN = S(UTF("戈洛姆-迪克曼常数"));
		CONSTANT_VALUE_CAHEN = S(UTF("卡亨常数"));
		CONSTANT_VALUE_LAPLACE_LIMIT = S(UTF("拉普拉斯极限常数"));
		CONSTANT_VALUE_ALLADI_GRINSTEAD = S(UTF("阿拉迪-格林斯特德常数"));
		CONSTANT_VALUE_LENGYEL = S(UTF("伦杰尔常数"));
		CONSTANT_VALUE_LEVY = S(UTF("莱维常数"));
		CONSTANT_VALUE_APERY = S(UTF("阿佩里常数"));
		CONSTANT_VALUE_MILLS = S(UTF("米尔斯常数"));
		CONSTANT_VALUE_BACKHOUSE = S(UTF("巴克豪斯常数"));
		CONSTANT_VALUE_PORTER = S(UTF("波特常数"));
		CONSTANT_VALUE_LIEB_QUARE_ICE = S(UTF("李布的方冰常数"));
		CONSTANT_VALUE_NIVEN = S(UTF("尼文常数"));
		CONSTANT_VALUE_SIERPINSKI = S(UTF("谢尔平斯基常数"));
		CONSTANT_VALUE_KHINCHIN = S(UTF("欣钦常数"));
		CONSTANT_VALUE_FRANSEN_ROBINSON = S(UTF("弗兰森-罗宾逊常数"));
		CONSTANT_VALUE_LANDAU = S(UTF("朗道常数"));
		CONSTANT_VALUE_PARABOLIC = S(UTF("抛物线常数"));
		CONSTANT_VALUE_OMEGA = S(UTF("欧米伽常数"));
		CONSTANT_VALUE_MRB = S(UTF("MRB 常数"));
		CONSTANT_VALUE_LI2 = S(UTF("对数积分在点 2 处"));
		CONSTANT_VALUE_GOMPERTZ = S(UTF("龚佩兹常数"));
		CONSTANT_VALUE_LIGHT_SPEED = S(UTF("真空中的光速"));
		CONSTANT_VALUE_GRAVITATIONAL_CONSTANT = S(UTF("引力常数"));
		CONSTANT_VALUE_GRAVIT_ACC_EARTH = S(UTF("地球上的重力加速度"));
		CONSTANT_VALUE_PLANCK_CONSTANT = S(UTF("普朗克常数"));
		CONSTANT_VALUE_PLANCK_CONSTANT_REDUCED = S(UTF("约化普朗克常数（狄拉克常数）"));
		CONSTANT_VALUE_PLANCK_LENGTH = S(UTF("普朗克长度"));
		CONSTANT_VALUE_PLANCK_MASS = S(UTF("普朗克质量"));
		CONSTANT_VALUE_PLANCK_TIME = S(UTF("普朗克时间"));
		CONSTANT_VALUE_LIGHT_YEAR = S(UTF("光年"));
		CONSTANT_VALUE_ASTRONOMICAL_UNIT = S(UTF("天文单位"));
		CONSTANT_VALUE_PARSEC = S(UTF("秒差距"));
		CONSTANT_VALUE_KILOPARSEC = S(UTF("千秒差距"));
		CONSTANT_VALUE_EARTH_RADIUS_EQUATORIAL = S(UTF("地球赤道半径"));
		CONSTANT_VALUE_EARTH_RADIUS_POLAR = S(UTF("地球极地半径"));
		CONSTANT_VALUE_EARTH_RADIUS_MEAN = S(UTF("地球平均半径"));
		CONSTANT_VALUE_EARTH_MASS = S(UTF("地球质量"));
		CONSTANT_VALUE_EARTH_SEMI_MAJOR_AXIS = S(UTF("地球-太阳距离"));
		CONSTANT_VALUE_MOON_RADIUS_MEAN = S(UTF("月球平均半径"));
		CONSTANT_VALUE_MOON_MASS = S(UTF("月球质量"));
		CONSTANT_VALUE_MOON_SEMI_MAJOR_AXIS = S(UTF("月球-地球距离"));
		CONSTANT_VALUE_SOLAR_RADIUS = S(UTF("太阳平均半径"));
		CONSTANT_VALUE_SOLAR_MASS = S(UTF("太阳质量"));
		CONSTANT_VALUE_MERCURY_RADIUS_MEAN = S(UTF("水星平均半径"));
		CONSTANT_VALUE_MERCURY_MASS = S(UTF("水星质量"));
		CONSTANT_VALUE_MERCURY_SEMI_MAJOR_AXIS = S(UTF("水星-太阳距离"));
		CONSTANT_VALUE_VENUS_RADIUS_MEAN = S(UTF("金星平均半径"));
		CONSTANT_VALUE_VENUS_MASS = S(UTF("金星质量"));
		CONSTANT_VALUE_VENUS_SEMI_MAJOR_AXIS = S(UTF("金星-太阳距离"));
		CONSTANT_VALUE_MARS_RADIUS_MEAN = S(UTF("火星平均半径"));
		CONSTANT_VALUE_MARS_MASS = S(UTF("火星质量"));
		CONSTANT_VALUE_MARS_SEMI_MAJOR_AXIS = S(UTF("火星-太阳距离"));
		CONSTANT_VALUE_JUPITER_RADIUS_MEAN = S(UTF("木星平均半径"));
		CONSTANT_VALUE_JUPITER_MASS = S(UTF("木星质量"));
		CONSTANT_VALUE_JUPITER_SEMI_MAJOR_AXIS = S(UTF("木星-太阳距离"));
		CONSTANT_VALUE_SATURN_RADIUS_MEAN = S(UTF("土星平均半径"));
		CONSTANT_VALUE_SATURN_MASS = S(UTF("土星质量"));
		CONSTANT_VALUE_SATURN_SEMI_MAJOR_AXIS = S(UTF("土星-太阳距离"));
		CONSTANT_VALUE_URANUS_RADIUS_MEAN = S(UTF("天王星平均半径"));
		CONSTANT_VALUE_URANUS_MASS = S(UTF("天王星质量"));
		CONSTANT_VALUE_URANUS_SEMI_MAJOR_AXIS = S(UTF("天王星-太阳距离"));
		CONSTANT_VALUE_NEPTUNE_RADIUS_MEAN = S(UTF("海王星平均半径"));
		CONSTANT_VALUE_NEPTUNE_MASS = S(UTF("海王星质量"));
		CONSTANT_VALUE_NEPTUNE_SEMI_MAJOR_AXIS = S(UTF("海王星-太阳距离"));
		CONSTANT_VALUE_TRUE = S(UTF("布尔值真由 1 表示"));
		CONSTANT_VALUE_FALSE = S(UTF("布尔值假由 0 表示"));
		CONSTANT_VALUE_NPAR = S(UTF("自动生成的用户定义函数常量，返回给定函数参数的数量"));
		CONSTANT_VALUE_NAN = S(UTF("非数字（NaN）"));
		// -------------------------------------------------
		FUNCTION_1_ARG_SIN = S(UTF("三角正弦"));
		FUNCTION_1_ARG_COS = S(UTF("三角余弦"));
		FUNCTION_1_ARG_TAN = S(UTF("三角正切"));
		FUNCTION_1_ARG_CTAN = S(UTF("三角余切"));
		FUNCTION_1_ARG_SEC = S(UTF("三角正割"));
		FUNCTION_1_ARG_COSEC = S(UTF("三角余割"));
		FUNCTION_1_ARG_ASIN = S(UTF("反正弦"));
		FUNCTION_1_ARG_ACOS = S(UTF("反余弦"));
		FUNCTION_1_ARG_ATAN = S(UTF("反正切"));
		FUNCTION_1_ARG_ACTAN = S(UTF("反余切"));
		FUNCTION_1_ARG_LN = S(UTF("自然对数（以 e 为底）"));
		FUNCTION_1_ARG_LOG2 = S(UTF("二进制对数（以 2 为底）"));
		FUNCTION_1_ARG_LOG10 = S(UTF("常用对数（以 10 为底）"));
		FUNCTION_1_ARG_RAD = S(UTF("角度转弧度"));
		FUNCTION_1_ARG_EXP = S(UTF("指数"));
		FUNCTION_1_ARG_SQRT = S(UTF("平方根"));
		FUNCTION_1_ARG_SINH = S(UTF("双曲正弦"));
		FUNCTION_1_ARG_COSH = S(UTF("双曲余弦"));
		FUNCTION_1_ARG_TANH = S(UTF("双曲正切"));
		FUNCTION_1_ARG_COTH = S(UTF("双曲余切"));
		FUNCTION_1_ARG_SECH = S(UTF("双曲正割"));
		FUNCTION_1_ARG_CSCH = S(UTF("双曲余割"));
		FUNCTION_1_ARG_DEG = S(UTF("弧度转角度"));
		FUNCTION_1_ARG_ABS = S(UTF("绝对值"));
		FUNCTION_1_ARG_SGN = S(UTF("符号函数"));
		FUNCTION_1_ARG_FLOOR = S(UTF("向下取整"));
		FUNCTION_1_ARG_CEIL = S(UTF("向上取整"));
		FUNCTION_1_ARG_NOT = S(UTF("逻辑非"));
		FUNCTION_1_ARG_ARSINH = S(UTF("反双曲正弦"));
		FUNCTION_1_ARG_ARCOSH = S(UTF("反双曲余弦"));
		FUNCTION_1_ARG_ARTANH = S(UTF("反双曲正切"));
		FUNCTION_1_ARG_ARCOTH = S(UTF("反双曲余切"));
		FUNCTION_1_ARG_ARSECH = S(UTF("反双曲正割"));
		FUNCTION_1_ARG_ARCSCH = S(UTF("反双曲余割"));
		FUNCTION_1_ARG_SA = S(UTF("Sinc（归一化）"));
		FUNCTION_1_ARG_SINC = S(UTF("Sinc（未归一化）"));
		FUNCTION_1_ARG_BELL_NUMBER = S(UTF("贝尔数"));
		FUNCTION_1_ARG_LUCAS_NUMBER = S(UTF("卢卡斯数"));
		FUNCTION_1_ARG_FIBONACCI_NUMBER = S(UTF("斐波那契数"));
		FUNCTION_1_ARG_HARMONIC_NUMBER = S(UTF("调和数"));
		FUNCTION_1_ARG_IS_PRIME = S(UTF("质数测试（是否为质数？）"));
		FUNCTION_1_ARG_PRIME_COUNT = S(UTF("质数计数"));
		FUNCTION_1_ARG_EXP_INT = S(UTF("指数积分"));
		FUNCTION_1_ARG_LOG_INT = S(UTF("对数积分"));
		FUNCTION_1_ARG_OFF_LOG_INT = S(UTF("偏移对数积分"));
		FUNCTION_1_ARG_GAUSS_ERF = S(UTF("高斯误差函数"));
		FUNCTION_1_ARG_GAUSS_ERFC = S(UTF("高斯余误差函数"));
		FUNCTION_1_ARG_GAUSS_ERF_INV = S(UTF("反高斯误差函数"));
		FUNCTION_1_ARG_GAUSS_ERFC_INV = S(UTF("反高斯余误差函数"));
		FUNCTION_1_ARG_ULP = S(UTF("末位单元"));
		FUNCTION_1_ARG_ISNAN = S(UTF("如果值为非数字（NaN）返回 true，否则返回 false"));
		FUNCTION_1_ARG_NDIG10 = S(UTF("以 10 为底的数码系统中的数字数"));
		FUNCTION_1_ARG_NFACT = S(UTF("质数分解 - 不同质因数的数量"));
		FUNCTION_1_ARG_ARCSEC = S(UTF("反正割"));
		FUNCTION_1_ARG_ARCCSC = S(UTF("反余割"));
		FUNCTION_1_ARG_GAMMA = S(UTF("伽马函数"));
		FUNCTION_1_ARG_LAMBERT_W0 = S(UTF("拉姆伯特-W，主分支 0，也称为欧米伽函数或积对数"));
		FUNCTION_1_ARG_LAMBERT_W1 = S(UTF("拉姆伯特-W，分支 -1，也称为欧米伽函数或积对数"));
		FUNCTION_1_ARG_SGN_GAMMA = S(UTF("伽马函数符号"));
		FUNCTION_1_ARG_LOG_GAMMA = S(UTF("伽马对数"));
		FUNCTION_1_ARG_DI_GAMMA = S(UTF("伽马函数的对数导数（双伽马）"));
		FUNCTION_1_ARG_PARAM = S(UTF("自动生成的用户定义函数，返回索引为 'i' 的函数参数值"));
		// -------------------------------------------------
		FUNCTION_2_ARG_LOG = S(UTF("对数"));
		FUNCTION_2_ARG_MOD = S(UTF("取模"));
		FUNCTION_2_ARG_BINOM_COEFF = S(UTF("二项系数，从 n 元素集合中抽取 k 个组合的数量"));
		FUNCTION_2_ARG_BERNOULLI_NUMBER = S(UTF("伯努利数"));
		FUNCTION_2_ARG_STIRLING1_NUMBER = S(UTF("第一类斯特林数"));
		FUNCTION_2_ARG_STIRLING2_NUMBER = S(UTF("第二类斯特林数"));
		FUNCTION_2_ARG_WORPITZKY_NUMBER = S(UTF("沃尔皮茨基数"));
		FUNCTION_2_ARG_EULER_NUMBER = S(UTF("欧拉数"));
		FUNCTION_2_ARG_KRONECKER_DELTA = S(UTF("克罗内克 δ 函数"));
		FUNCTION_2_ARG_EULER_POLYNOMIAL = S(UTF("欧拉多项式"));
		FUNCTION_2_ARG_HARMONIC_NUMBER = S(UTF("调和数"));
		FUNCTION_2_ARG_ROUND = S(UTF("四舍五入"));
		FUNCTION_2_ARG_NDIG = S(UTF("在给定底数的数码系统中表示数字的位数"));
		FUNCTION_2_ARG_DIGIT10 = S(UTF("位于位置 1 ... n（左 -> 右）或 0 ... -(n-1)（右 -> 左）的数字 - 十进制系统"));
		FUNCTION_2_ARG_FACTVAL = S(UTF("质数分解 - 位于 1 ... nfact(n) 之间的因子值 - 按因子值升序排列"));
		FUNCTION_2_ARG_FACTEXP = S(UTF("质数分解 - 位于 1 ... nfact(n) 之间的因子指数/多重性 - 按因子值升序排列"));
		FUNCTION_2_ARG_ROOT = S(UTF("数的 n 次方根"));
		FUNCTION_2_ARG_INC_GAMMA_LOWER = S(UTF("下不完全伽马函数"));
		FUNCTION_2_ARG_INC_GAMMA_UPPER = S(UTF("上不完全伽马函数"));
		FUNCTION_2_ARG_REG_GAMMA_LOWER = S(UTF("下正则化伽马函数"));
		FUNCTION_2_ARG_REG_GAMMA_UPPER = S(UTF("上正则化伽马函数"));
		FUNCTION_2_ARG_PERMUTATIONS = S(UTF("从 n 元素集合中抽取 k 个排列的数量"));
		FUNCTION_2_ARG_BETA = S(UTF("贝塔函数，也称为第一类欧拉积分"));
		FUNCTION_2_ARG_LOG_BETA = S(UTF("贝塔函数对数，也称为第一类欧拉积分对数"));
		// -------------------------------------------------
		FUNCTION_3_ARG_IF = S(UTF("如果"));
		FUNCTION_3_ARG_CHI = S(UTF("x 属于 (a,b) 的特征函数"));
		FUNCTION_3_ARG_CHI_LR = S(UTF("x 属于 [a,b] 的特征函数"));
		FUNCTION_3_ARG_CHI_L = S(UTF("x 属于 [a,b) 的特征函数"));
		FUNCTION_3_ARG_CHI_R = S(UTF("x 属于 (a,b] 的特征函数"));
		FUNCTION_3_ARG_DIGIT = S(UTF("位于位置 1 ... n（左 -> 右）或 0 ... -(n-1)（右 -> 左）的数字 - 给定底数的数码系统"));
		FUNCTION_3_ARG_INC_BETA = S(UTF("不完全贝塔函数，也称为不完全欧拉积分"));
		FUNCTION_3_ARG_REG_BETA = S(UTF("正则化不完全贝塔函数，也称为正则化不完全欧拉积分"));
		// -------------------------------------------------
		FUNCTION_VARIADIC_IFF = S(UTF("如果函数"));
		FUNCTION_VARIADIC_MIN = S(UTF("最小值"));
		FUNCTION_VARIADIC_MAX = S(UTF("最大值"));
		FUNCTION_VARIADIC_CONT_FRAC = S(UTF("连分数"));
		FUNCTION_VARIADIC_CONT_POL = S(UTF("连多项式"));
		FUNCTION_VARIADIC_GCD = S(UTF("最大公约数"));
		FUNCTION_VARIADIC_LCM = S(UTF("最小公倍数"));
		FUNCTION_VARIADIC_SUM = S(UTF("求和"));
		FUNCTION_VARIADIC_PROD = S(UTF("乘积"));
		FUNCTION_VARIADIC_AVG = S(UTF("均值"));
		FUNCTION_VARIADIC_VAR = S(UTF("偏差校正的样本方差"));
		FUNCTION_VARIADIC_STD = S(UTF("偏差校正的样本标准差"));
		FUNCTION_VARIADIC_RND_LIST = S(UTF("从给定数字列表中返回随机数"));
		FUNCTION_VARIADIC_COALESCE = S(UTF("返回第一个非 NaN 值"));
		FUNCTION_VARIADIC_OR = S(UTF("逻辑或（OR） - 可变参数"));
		FUNCTION_VARIADIC_AND = S(UTF("逻辑与（AND） - 可变参数"));
		FUNCTION_VARIADIC_XOR = S(UTF("异或（XOR） - 可变参数"));
		FUNCTION_VARIADIC_ARGMIN = S(UTF("最小值的参数/索引"));
		FUNCTION_VARIADIC_ARGMAX = S(UTF("最大值的参数/索引"));
		FUNCTION_VARIADIC_MEDIAN = S(UTF("样本中位数"));
		FUNCTION_VARIADIC_MODE = S(UTF("众数 - 出现次数最多的值"));
		FUNCTION_VARIADIC_BASE = S(UTF("返回由数位表示的给定数码系统中的数字"));
		FUNCTION_VARIADIC_NDIST = S(UTF("不同值的数量"));
		// -------------------------------------------------
		OPERATOR_PLUS = S(UTF("加法"));
		OPERATOR_MINUS = S(UTF("减法"));
		OPERATOR_MULTIPLY = S(UTF("乘法"));
		OPERATOR_DIVIDE = S(UTF("除法"));
		OPERATOR_DIVIDE_QUOTIENT = S(UTF("整数除法（商）"));
		OPERATOR_POWER = S(UTF("幂运算"));
		OPERATOR_FACT = S(UTF("阶乘"));
		OPERATOR_MOD = S(UTF("取模"));
		OPERATOR_PERC = S(UTF("百分比"));
		OPERATOR_TETRATION = S(UTF("四重运算（超幂运算，幂塔，指数塔）"));
		OPERATOR_SQUARE_ROOT = S(UTF("平方根"));
		OPERATOR_CUBE_ROOT = S(UTF("立方根"));
		OPERATOR_FOURTH_ROOT = S(UTF("四次根"));
		// -------------------------------------------------
		PARSER_SYMBOL_LEFT_PARENTHESES = S(UTF("左括号"));
		PARSER_SYMBOL_RIGHT_PARENTHESES = S(UTF("右括号"));
		PARSER_SYMBOL_COMMA = S(UTF("逗号（函数参数）"));
		PARSER_SYMBOL_SEMI = S(UTF("分号（函数参数）"));
		PARSER_SYMBOL_BLANK = S(UTF("空白字符"));
		PARSER_SYMBOL_NUMBER_INTEGER = S(UTF("整数"));
		PARSER_SYMBOL_NUMBER_DECIMAL = S(UTF("小数"));
		PARSER_SYMBOL_NUMBER_LEADING_ZERO = S(UTF("前导零"));
		PARSER_SYMBOL_NUMBER_SCI_NOTATION = S(UTF("科学计数法"));
		PARSER_SYMBOL_NUMBER_NO_LEADING_ZERO = S(UTF("无前导零"));
		PARSER_SYMBOL_NUMBER_FRACTIONS = S(UTF("分数"));
		PARSER_SYMBOL_NUMBER_OTHER_NUMERAL_SYSTEMS = S(UTF("其他数码系统"));
		PARSER_SYMBOL_UNICODE_MATH = S(UTF(" - Unicode 数学符号"));
		// -------------------------------------------------
		DIMENSIONLESS_UNIT_PERC = S(UTF("百分比"));
		DIMENSIONLESS_UNIT_PERM = S(UTF("千分比"));
		DIMENSIONLESS_UNIT_YOTTA = S(UTF("尧他"));
		DIMENSIONLESS_UNIT_ZETTA = S(UTF("泽它"));
		DIMENSIONLESS_UNIT_EXA = S(UTF("艾可"));
		DIMENSIONLESS_UNIT_PETA = S(UTF("拍它"));
		DIMENSIONLESS_UNIT_TERA = S(UTF("太它"));
		DIMENSIONLESS_UNIT_GIGA = S(UTF("吉他"));
		DIMENSIONLESS_UNIT_MEGA = S(UTF("兆"));
		DIMENSIONLESS_UNIT_KILO = S(UTF("千"));
		DIMENSIONLESS_UNIT_HECTO = S(UTF("百"));
		DIMENSIONLESS_UNIT_DECA = S(UTF("十"));
		DIMENSIONLESS_UNIT_DECI = S(UTF("十分之一"));
		DIMENSIONLESS_UNIT_CENTI = S(UTF("百分之一"));
		DIMENSIONLESS_UNIT_MILLI = S(UTF("千分之一"));
		DIMENSIONLESS_UNIT_MICRO = S(UTF("百万分之一"));
		DIMENSIONLESS_UNIT_NANO = S(UTF("十亿分之一"));
		DIMENSIONLESS_UNIT_PICO = S(UTF("万亿分之一"));
		DIMENSIONLESS_UNIT_FEMTO = S(UTF("千万亿分之一"));
		DIMENSIONLESS_UNIT_ATTO = S(UTF("亿亿分之一"));
		DIMENSIONLESS_UNIT_ZEPTO = S(UTF("万亿亿分之一"));
		DIMENSIONLESS_UNIT_YOCTO = S(UTF("十万亿亿分之一"));
		// -------------------------------------------------
		UNIT_METRE = S(UTF("米"));
		UNIT_KILOMETRE = S(UTF("千米"));
		UNIT_CENTIMETRE = S(UTF("厘米"));
		UNIT_MILLIMETRE = S(UTF("毫米"));
		UNIT_INCH = S(UTF("英寸"));
		UNIT_YARD = S(UTF("码"));
		UNIT_FEET = S(UTF("英尺"));
		UNIT_MILE = S(UTF("英里"));
		UNIT_NAUTICAL_MILE = S(UTF("海里"));
		UNIT_METRE2 = S(UTF("平方米"));
		UNIT_CENTIMETRE2 = S(UTF("平方厘米"));
		UNIT_MILLIMETRE2 = S(UTF("平方毫米"));
		UNIT_ARE = S(UTF("公亩"));
		UNIT_HECTARE = S(UTF("公顷"));
		UNIT_ACRE = S(UTF("英亩"));
		UNIT_KILOMETRE2 = S(UTF("平方千米"));
		UNIT_MILLIMETRE3 = S(UTF("立方毫米"));
		UNIT_CENTIMETRE3 = S(UTF("立方厘米"));
		UNIT_METRE3 = S(UTF("立方米"));
		UNIT_KILOMETRE3 = S(UTF("立方千米"));
		UNIT_MILLILITRE = S(UTF("毫升"));
		UNIT_LITRE = S(UTF("升"));
		UNIT_GALLON = S(UTF("加仑"));
		UNIT_PINT = S(UTF("品脱"));
		UNIT_SECOND = S(UTF("秒"));
		UNIT_MILLISECOND = S(UTF("毫秒"));
		UNIT_MINUTE = S(UTF("分钟"));
		UNIT_HOUR = S(UTF("小时"));
		UNIT_DAY = S(UTF("天"));
		UNIT_WEEK = S(UTF("周"));
		UNIT_JULIAN_YEAR = S(UTF("儒略年 = 365.25 天"));
		UNIT_KILOGRAM = S(UTF("千克"));
		UNIT_GRAM = S(UTF("克"));
		UNIT_MILLIGRAM = S(UTF("毫克"));
		UNIT_DECAGRAM = S(UTF("十克"));
		UNIT_TONNE = S(UTF("吨"));
		UNIT_OUNCE = S(UTF("盎司"));
		UNIT_POUND = S(UTF("磅"));
		UNIT_BIT = S(UTF("比特"));
		UNIT_KILOBIT = S(UTF("千比特"));
		UNIT_MEGABIT = S(UTF("兆比特"));
		UNIT_GIGABIT = S(UTF("吉比特"));
		UNIT_TERABIT = S(UTF("太比特"));
		UNIT_PETABIT = S(UTF("拍比特"));
		UNIT_EXABIT = S(UTF("艾比特"));
		UNIT_ZETTABIT = S(UTF("泽比特"));
		UNIT_YOTTABIT = S(UTF("尧比特"));
		UNIT_BYTE = S(UTF("字节"));
		UNIT_KILOBYTE = S(UTF("千字节"));
		UNIT_MEGABYTE = S(UTF("兆字节"));
		UNIT_GIGABYTE = S(UTF("吉字节"));
		UNIT_TERABYTE = S(UTF("太字节"));
		UNIT_PETABYTE = S(UTF("拍字节"));
		UNIT_EXABYTE = S(UTF("艾字节"));
		UNIT_ZETTABYTE = S(UTF("泽字节"));
		UNIT_YOTTABYTE = S(UTF("尧字节"));
		UNIT_JOULE = S(UTF("焦耳"));
		UNIT_ELECTRONO_VOLT = S(UTF("电子伏特"));
		UNIT_KILO_ELECTRONO_VOLT = S(UTF("千电子伏特"));
		UNIT_MEGA_ELECTRONO_VOLT = S(UTF("兆电子伏特"));
		UNIT_GIGA_ELECTRONO_VOLT = S(UTF("吉电子伏特"));
		UNIT_TERA_ELECTRONO_VOLT = S(UTF("太电子伏特"));
		UNIT_METRE_PER_SECOND = S(UTF("米每秒"));
		UNIT_KILOMETRE_PER_HOUR = S(UTF("千米每小时"));
		UNIT_MILE_PER_HOUR = S(UTF("英里每小时"));
		UNIT_KNOT = S(UTF("节"));
		UNIT_METRE_PER_SECOND2 = S(UTF("米每平方秒"));
		UNIT_KILOMETRE_PER_HOUR2 = S(UTF("千米每平方小时"));
		UNIT_MILE_PER_HOUR2 = S(UTF("英里每平方小时"));
		UNIT_RADIAN_ARC = S(UTF("弧度"));
		UNIT_DEGREE_ARC = S(UTF("角度"));
		UNIT_MINUTE_ARC = S(UTF("角分"));
		UNIT_SECOND_ARC = S(UTF("角秒"));
	}
} // org::mariuszgromada::math::mxparser