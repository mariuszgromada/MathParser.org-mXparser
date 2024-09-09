/*
 * @(#)SyntaxChecker.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_SYNTAXCHECKER_SYNTAXCHECKER_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_SYNTAXCHECKER_SYNTAXCHECKER_H

#include "org/mariuszgromada/math/mxparser/syntaxchecker/CharStream.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/JavaCCToken.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/TokenManager.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerConstants.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/ErrorHandler.hpp"
#include "org/mariuszgromada/math/mxparser/syntaxchecker/ErrorMessage.hpp"

namespace org::mariuszgromada::math::mxparser::syntaxchecker {

	struct JJCalls {
		int gen;
		int arg;
		JJCalls *next;
		JavaCCToken *first;
		~JJCalls() { if (next) delete next; }

		JJCalls() {
			next = nullptr;
			arg = 0;
			gen = -1;
			first = nullptr;
		}
	};

	class SyntaxChecker {
	public:

		// ************************************************
		// !!!!! Code manualy added to the parser
		// ************************************************
		const VectorPtr<ErrorMessagePtr> errorMessages = new_Vector<ErrorMessagePtr>();
		bool checkSyntax();
		// ************************************************
		// ************************************************

		void start();

		void expression();

		void binaryExpression();

		void unaryRigthExpression();

		void unaryLeftExpression();

		void binaryOperator();

		void unaryRigthOperator();

		void unaryLeftOperator();

		void itemExpression();

		void bracketedExpressionOptionalImpliedMultiplication();

		void bracketedExpression();

		void itemOrFunctionOptionalImpliedMultiplication();

		void itemOrFunctionImpliedMultiplication();

		void itemOrFunction();

		void otherBaseNumber();

		void itemName();

		void unitOrSpecialConstant();

		void argumentList();

		inline bool jj_2_1(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_1() || jj_done); {
				jj_save(0, xla);
			}
		}

		inline bool jj_2_2(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_2() || jj_done); {
				jj_save(1, xla);
			}
		}

		inline bool jj_2_3(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_3() || jj_done); {
				jj_save(2, xla);
			}
		}

		inline bool jj_2_4(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_4() || jj_done); {
				jj_save(3, xla);
			}
		}

		inline bool jj_2_5(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_5() || jj_done); {
				jj_save(4, xla);
			}
		}

		inline bool jj_2_6(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_6() || jj_done); {
				jj_save(5, xla);
			}
		}

		inline bool jj_2_7(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_7() || jj_done); {
				jj_save(6, xla);
			}
		}

		inline bool jj_2_8(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_8() || jj_done); {
				jj_save(7, xla);
			}
		}

		inline bool jj_2_9(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_9() || jj_done); {
				jj_save(8, xla);
			}
		}

		inline bool jj_2_10(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_10() || jj_done); {
				jj_save(9, xla);
			}
		}

		inline bool jj_2_11(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_11() || jj_done); {
				jj_save(10, xla);
			}
		}

		inline bool jj_2_12(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_12() || jj_done); {
				jj_save(11, xla);
			}
		}

		inline bool jj_2_13(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_13() || jj_done); {
				jj_save(12, xla);
			}
		}

		inline bool jj_2_14(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_14() || jj_done); {
				jj_save(13, xla);
			}
		}

		inline bool jj_2_15(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_15() || jj_done); {
				jj_save(14, xla);
			}
		}

		inline bool jj_2_16(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_16() || jj_done); {
				jj_save(15, xla);
			}
		}

		inline bool jj_2_17(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_17() || jj_done); {
				jj_save(16, xla);
			}
		}

		inline bool jj_2_18(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_18() || jj_done); {
				jj_save(17, xla);
			}
		}

		inline bool jj_2_19(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_19() || jj_done); {
				jj_save(18, xla);
			}
		}

		inline bool jj_2_20(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_20() || jj_done); {
				jj_save(19, xla);
			}
		}

		inline bool jj_2_21(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_21() || jj_done); {
				jj_save(20, xla);
			}
		}

		inline bool jj_2_22(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_22() || jj_done); {
				jj_save(21, xla);
			}
		}

		inline bool jj_2_23(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_23() || jj_done); {
				jj_save(22, xla);
			}
		}

		inline bool jj_2_24(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_24() || jj_done); {
				jj_save(23, xla);
			}
		}

		inline bool jj_2_25(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_25() || jj_done); {
				jj_save(24, xla);
			}
		}

		inline bool jj_2_26(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_26() || jj_done); {
				jj_save(25, xla);
			}
		}

		inline bool jj_2_27(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_27() || jj_done); {
				jj_save(26, xla);
			}
		}

		inline bool jj_2_28(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_28() || jj_done); {
				jj_save(27, xla);
			}
		}

		inline bool jj_2_29(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_29() || jj_done); {
				jj_save(28, xla);
			}
		}

		inline bool jj_2_30(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_30() || jj_done); {
				jj_save(29, xla);
			}
		}

		inline bool jj_2_31(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_31() || jj_done); {
				jj_save(30, xla);
			}
		}

		inline bool jj_2_32(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_32() || jj_done); {
				jj_save(31, xla);
			}
		}

		inline bool jj_2_33(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_33() || jj_done); {
				jj_save(32, xla);
			}
		}

		inline bool jj_2_34(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_34() || jj_done); {
				jj_save(33, xla);
			}
		}

		inline bool jj_2_35(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_35() || jj_done); {
				jj_save(34, xla);
			}
		}

		inline bool jj_2_36(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_36() || jj_done); {
				jj_save(35, xla);
			}
		}

		inline bool jj_2_37(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_37() || jj_done); {
				jj_save(36, xla);
			}
		}

		inline bool jj_2_38(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_38() || jj_done); {
				jj_save(37, xla);
			}
		}

		inline bool jj_2_39(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_39() || jj_done); {
				jj_save(38, xla);
			}
		}

		inline bool jj_2_40(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_40() || jj_done); {
				jj_save(39, xla);
			}
		}

		inline bool jj_2_41(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_41() || jj_done); {
				jj_save(40, xla);
			}
		}

		inline bool jj_2_42(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_42() || jj_done); {
				jj_save(41, xla);
			}
		}

		inline bool jj_2_43(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_43() || jj_done); {
				jj_save(42, xla);
			}
		}

		inline bool jj_2_44(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_44() || jj_done); {
				jj_save(43, xla);
			}
		}

		inline bool jj_2_45(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_45() || jj_done); {
				jj_save(44, xla);
			}
		}

		inline bool jj_2_46(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_46() || jj_done); {
				jj_save(45, xla);
			}
		}

		inline bool jj_2_47(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_47() || jj_done); {
				jj_save(46, xla);
			}
		}

		inline bool jj_2_48(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_48() || jj_done); {
				jj_save(47, xla);
			}
		}

		inline bool jj_2_49(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_49() || jj_done); {
				jj_save(48, xla);
			}
		}

		inline bool jj_2_50(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_50() || jj_done); {
				jj_save(49, xla);
			}
		}

		inline bool jj_2_51(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_51() || jj_done); {
				jj_save(50, xla);
			}
		}

		inline bool jj_2_52(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_52() || jj_done); {
				jj_save(51, xla);
			}
		}

		inline bool jj_2_53(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_53() || jj_done); {
				jj_save(52, xla);
			}
		}

		inline bool jj_2_54(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_54() || jj_done); {
				jj_save(53, xla);
			}
		}

		inline bool jj_2_55(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_55() || jj_done); {
				jj_save(54, xla);
			}
		}

		inline bool jj_2_56(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_56() || jj_done); {
				jj_save(55, xla);
			}
		}

		inline bool jj_2_57(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_57() || jj_done); {
				jj_save(56, xla);
			}
		}

		inline bool jj_2_58(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_58() || jj_done); {
				jj_save(57, xla);
			}
		}

		inline bool jj_2_59(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_59() || jj_done); {
				jj_save(58, xla);
			}
		}

		inline bool jj_2_60(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_60() || jj_done); {
				jj_save(59, xla);
			}
		}

		inline bool jj_2_61(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_61() || jj_done); {
				jj_save(60, xla);
			}
		}

		inline bool jj_2_62(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_62() || jj_done); {
				jj_save(61, xla);
			}
		}

		inline bool jj_2_63(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_63() || jj_done); {
				jj_save(62, xla);
			}
		}

		inline bool jj_2_64(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_64() || jj_done); {
				jj_save(63, xla);
			}
		}

		inline bool jj_2_65(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_65() || jj_done); {
				jj_save(64, xla);
			}
		}

		inline bool jj_2_66(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_66() || jj_done); {
				jj_save(65, xla);
			}
		}

		inline bool jj_2_67(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_67() || jj_done); {
				jj_save(66, xla);
			}
		}

		inline bool jj_2_68(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_68() || jj_done); {
				jj_save(67, xla);
			}
		}

		inline bool jj_2_69(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_69() || jj_done); {
				jj_save(68, xla);
			}
		}

		inline bool jj_2_70(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_70() || jj_done); {
				jj_save(69, xla);
			}
		}

		inline bool jj_2_71(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_71() || jj_done); {
				jj_save(70, xla);
			}
		}

		inline bool jj_2_72(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_72() || jj_done); {
				jj_save(71, xla);
			}
		}

		inline bool jj_2_73(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_73() || jj_done); {
				jj_save(72, xla);
			}
		}

		inline bool jj_2_74(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_74() || jj_done); {
				jj_save(73, xla);
			}
		}

		inline bool jj_2_75(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_75() || jj_done); {
				jj_save(74, xla);
			}
		}

		inline bool jj_2_76(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_76() || jj_done); {
				jj_save(75, xla);
			}
		}

		inline bool jj_2_77(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_77() || jj_done); {
				jj_save(76, xla);
			}
		}

		inline bool jj_2_78(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_78() || jj_done); {
				jj_save(77, xla);
			}
		}

		inline bool jj_2_79(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_79() || jj_done); {
				jj_save(78, xla);
			}
		}

		inline bool jj_2_80(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_80() || jj_done); {
				jj_save(79, xla);
			}
		}

		inline bool jj_2_81(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_81() || jj_done); {
				jj_save(80, xla);
			}
		}

		inline bool jj_2_82(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_82() || jj_done); {
				jj_save(81, xla);
			}
		}

		inline bool jj_2_83(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_83() || jj_done); {
				jj_save(82, xla);
			}
		}

		inline bool jj_2_84(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_84() || jj_done); {
				jj_save(83, xla);
			}
		}

		inline bool jj_2_85(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_85() || jj_done); {
				jj_save(84, xla);
			}
		}

		inline bool jj_2_86(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_86() || jj_done); {
				jj_save(85, xla);
			}
		}

		inline bool jj_2_87(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_87() || jj_done); {
				jj_save(86, xla);
			}
		}

		inline bool jj_2_88(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_88() || jj_done); {
				jj_save(87, xla);
			}
		}

		inline bool jj_2_89(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_89() || jj_done); {
				jj_save(88, xla);
			}
		}

		inline bool jj_2_90(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_90() || jj_done); {
				jj_save(89, xla);
			}
		}

		inline bool jj_2_91(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_91() || jj_done); {
				jj_save(90, xla);
			}
		}

		inline bool jj_2_92(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_92() || jj_done); {
				jj_save(91, xla);
			}
		}

		inline bool jj_2_93(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_93() || jj_done); {
				jj_save(92, xla);
			}
		}

		inline bool jj_2_94(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_94() || jj_done); {
				jj_save(93, xla);
			}
		}

		inline bool jj_2_95(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_95() || jj_done); {
				jj_save(94, xla);
			}
		}

		inline bool jj_2_96(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_96() || jj_done); {
				jj_save(95, xla);
			}
		}

		inline bool jj_2_97(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_97() || jj_done); {
				jj_save(96, xla);
			}
		}

		inline bool jj_2_98(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_98() || jj_done); {
				jj_save(97, xla);
			}
		}

		inline bool jj_2_99(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_99() || jj_done); {
				jj_save(98, xla);
			}
		}

		inline bool jj_2_100(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_100() || jj_done); {
				jj_save(99, xla);
			}
		}

		inline bool jj_2_101(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_101() || jj_done); {
				jj_save(100, xla);
			}
		}

		inline bool jj_2_102(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_102() || jj_done); {
				jj_save(101, xla);
			}
		}

		inline bool jj_2_103(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_103() || jj_done); {
				jj_save(102, xla);
			}
		}

		inline bool jj_2_104(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_104() || jj_done); {
				jj_save(103, xla);
			}
		}

		inline bool jj_2_105(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_105() || jj_done); {
				jj_save(104, xla);
			}
		}

		inline bool jj_2_106(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_106() || jj_done); {
				jj_save(105, xla);
			}
		}

		inline bool jj_2_107(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_107() || jj_done); {
				jj_save(106, xla);
			}
		}

		inline bool jj_2_108(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_108() || jj_done); {
				jj_save(107, xla);
			}
		}

		inline bool jj_2_109(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_109() || jj_done); {
				jj_save(108, xla);
			}
		}

		inline bool jj_2_110(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_110() || jj_done); {
				jj_save(109, xla);
			}
		}

		inline bool jj_2_111(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_111() || jj_done); {
				jj_save(110, xla);
			}
		}

		inline bool jj_2_112(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_112() || jj_done); {
				jj_save(111, xla);
			}
		}

		inline bool jj_2_113(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_113() || jj_done); {
				jj_save(112, xla);
			}
		}

		inline bool jj_2_114(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_114() || jj_done); {
				jj_save(113, xla);
			}
		}

		inline bool jj_2_115(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_115() || jj_done); {
				jj_save(114, xla);
			}
		}

		inline bool jj_2_116(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_116() || jj_done); {
				jj_save(115, xla);
			}
		}

		inline bool jj_2_117(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_117() || jj_done); {
				jj_save(116, xla);
			}
		}

		inline bool jj_2_118(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_118() || jj_done); {
				jj_save(117, xla);
			}
		}

		inline bool jj_2_119(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_119() || jj_done); {
				jj_save(118, xla);
			}
		}

		inline bool jj_2_120(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_120() || jj_done); {
				jj_save(119, xla);
			}
		}

		inline bool jj_2_121(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_121() || jj_done); {
				jj_save(120, xla);
			}
		}

		inline bool jj_2_122(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_122() || jj_done); {
				jj_save(121, xla);
			}
		}

		inline bool jj_2_123(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_123() || jj_done); {
				jj_save(122, xla);
			}
		}

		inline bool jj_2_124(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_124() || jj_done); {
				jj_save(123, xla);
			}
		}

		inline bool jj_2_125(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_125() || jj_done); {
				jj_save(124, xla);
			}
		}

		inline bool jj_2_126(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_126() || jj_done); {
				jj_save(125, xla);
			}
		}

		inline bool jj_2_127(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_127() || jj_done); {
				jj_save(126, xla);
			}
		}

		inline bool jj_2_128(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_128() || jj_done); {
				jj_save(127, xla);
			}
		}

		inline bool jj_2_129(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_129() || jj_done); {
				jj_save(128, xla);
			}
		}

		inline bool jj_2_130(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_130() || jj_done); {
				jj_save(129, xla);
			}
		}

		inline bool jj_2_131(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_131() || jj_done); {
				jj_save(130, xla);
			}
		}

		inline bool jj_2_132(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_132() || jj_done); {
				jj_save(131, xla);
			}
		}

		inline bool jj_2_133(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_133() || jj_done); {
				jj_save(132, xla);
			}
		}

		inline bool jj_2_134(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_134() || jj_done); {
				jj_save(133, xla);
			}
		}

		inline bool jj_2_135(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_135() || jj_done); {
				jj_save(134, xla);
			}
		}

		inline bool jj_2_136(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_136() || jj_done); {
				jj_save(135, xla);
			}
		}

		inline bool jj_2_137(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_137() || jj_done); {
				jj_save(136, xla);
			}
		}

		inline bool jj_2_138(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_138() || jj_done); {
				jj_save(137, xla);
			}
		}

		inline bool jj_2_139(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_139() || jj_done); {
				jj_save(138, xla);
			}
		}

		inline bool jj_2_140(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_140() || jj_done); {
				jj_save(139, xla);
			}
		}

		inline bool jj_2_141(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_141() || jj_done); {
				jj_save(140, xla);
			}
		}

		inline bool jj_2_142(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_142() || jj_done); {
				jj_save(141, xla);
			}
		}

		inline bool jj_2_143(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_143() || jj_done); {
				jj_save(142, xla);
			}
		}

		inline bool jj_2_144(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_144() || jj_done); {
				jj_save(143, xla);
			}
		}

		inline bool jj_2_145(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_145() || jj_done); {
				jj_save(144, xla);
			}
		}

		inline bool jj_2_146(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_146() || jj_done); {
				jj_save(145, xla);
			}
		}

		inline bool jj_2_147(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_147() || jj_done); {
				jj_save(146, xla);
			}
		}

		inline bool jj_2_148(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_148() || jj_done); {
				jj_save(147, xla);
			}
		}

		inline bool jj_2_149(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_149() || jj_done); {
				jj_save(148, xla);
			}
		}

		inline bool jj_2_150(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_150() || jj_done); {
				jj_save(149, xla);
			}
		}

		inline bool jj_2_151(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_151() || jj_done); {
				jj_save(150, xla);
			}
		}

		inline bool jj_2_152(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_152() || jj_done); {
				jj_save(151, xla);
			}
		}

		inline bool jj_2_153(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_153() || jj_done); {
				jj_save(152, xla);
			}
		}

		inline bool jj_2_154(int xla) {
			jj_la = xla;
			jj_lastpos = jj_scanpos = token;
			jj_done = false;
			return (!jj_3_154() || jj_done); {
				jj_save(153, xla);
			}
		}

		inline bool jj_3_108() {
			if (jj_done) return true;
			if (jj_scan_token(BASE20)) return true;
			return false;
		}

		inline bool jj_3_107() {
			if (jj_done) return true;
			if (jj_scan_token(BASE19)) return true;
			return false;
		}

		inline bool jj_3_147() {
			if (jj_done) return true;
			if (jj_scan_token(DECIMAL_NUMBER)) return true;
			return false;
		}

		inline bool jj_3_43() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3_106() {
			if (jj_done) return true;
			if (jj_scan_token(BASE18)) return true;
			return false;
		}

		inline bool jj_3_45() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_43()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_43()) {
					jj_scanpos = xsp;
					break;
				}
			}
			if (jj_3R_itemOrFunctionOptionalImpliedMultiplication_500_5_22()) return true;
			return false;
		}

		inline bool jj_3_146() {
			if (jj_done) return true;
			if (jj_scan_token(LT)) return true;
			return false;
		}

		inline bool jj_3_68() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3_70() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_68()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_68()) {
					jj_scanpos = xsp;
					break;
				}
			}
			if (jj_scan_token(DECIMAL_NUMBER)) return true;
			return false;
		}

		inline bool jj_3_145() {
			if (jj_done) return true;
			if (jj_scan_token(GT)) return true;
			return false;
		}

		inline bool jj_3_105() {
			if (jj_done) return true;
			if (jj_scan_token(BASE17)) return true;
			return false;
		}

		inline bool jj_3_144() {
			if (jj_done) return true;
			if (jj_scan_token(OR)) return true;
			return false;
		}

		inline bool jj_3_71() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_69()) {
				jj_scanpos = xsp;
				if (jj_3_70()) return true;
			}
			return false;
		}

		inline bool jj_3_69() {
			if (jj_done) return true;
			if (jj_scan_token(DECIMAL_NUMBER)) return true;
			return false;
		}

		inline bool jj_3_104() {
			if (jj_done) return true;
			if (jj_scan_token(BASE16)) return true;
			return false;
		}

		inline bool jj_3_143() {
			if (jj_done) return true;
			if (jj_scan_token(COMMA)) return true;
			return false;
		}

		inline bool jj_3_103() {
			if (jj_done) return true;
			if (jj_scan_token(BASE15)) return true;
			return false;
		}

		inline bool jj_3_142() {
			if (jj_done) return true;
			if (jj_scan_token(PLUS)) return true;
			return false;
		}

		inline bool jj_3_102() {
			if (jj_done) return true;
			if (jj_scan_token(BASE14)) return true;
			return false;
		}

		inline bool jj_3_141() {
			if (jj_done) return true;
			if (jj_scan_token(MINUS)) return true;
			return false;
		}

		inline bool jj_3_46() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_44()) {
				jj_scanpos = xsp;
				if (jj_3_45()) return true;
			}
			return false;
		}

		inline bool jj_3_44() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunctionOptionalImpliedMultiplication_500_5_22()) return true;
			return false;
		}

		inline bool jj_3_101() {
			if (jj_done) return true;
			if (jj_scan_token(BASE13)) return true;
			return false;
		}

		inline bool jj_3_29() {
			if (jj_done) return true;
			if (jj_scan_token(BITWISE)) return true;
			return false;
		}

		inline bool jj_3_140() {
			if (jj_done) return true;
			if (jj_scan_token(RIGHT_PAR)) return true;
			return false;
		}

		inline bool jj_3_73() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunctionImpliedMultiplication_505_9_24()) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_71()) jj_scanpos = xsp;
			return false;
		}

		inline bool jj_3_28() {
			if (jj_done) return true;
			if (jj_scan_token(EQV)) return true;
			return false;
		}

		inline bool jj_3_100() {
			if (jj_done) return true;
			if (jj_scan_token(BASE12)) return true;
			return false;
		}

		inline bool jj_3_139() {
			if (jj_done) return true;
			if (jj_scan_token(LEFT_PAR)) return true;
			return false;
		}

		inline bool jj_3_27() {
			if (jj_done) return true;
			if (jj_scan_token(CNIMP)) return true;
			return false;
		}

		inline bool jj_3_99() {
			if (jj_done) return true;
			if (jj_scan_token(BASE11)) return true;
			return false;
		}

		inline bool jj_3_138() {
			if (jj_done) return true;
			if (jj_scan_token(DIV)) return true;
			return false;
		}

		inline bool jj_3_26() {
			if (jj_done) return true;
			if (jj_scan_token(NIMP)) return true;
			return false;
		}

		inline bool jj_3_98() {
			if (jj_done) return true;
			if (jj_scan_token(BASE10)) return true;
			return false;
		}

		inline bool jj_3_64() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3_25() {
			if (jj_done) return true;
			if (jj_scan_token(CIMP)) return true;
			return false;
		}

		inline bool jj_3_66() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_64()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_64()) {
					jj_scanpos = xsp;
					break;
				}
			}
			if (jj_scan_token(DECIMAL_NUMBER)) return true;
			return false;
		}

		inline bool jj_3_137() {
			if (jj_done) return true;
			if (jj_scan_token(MULTIPLY)) return true;
			return false;
		}

		inline bool jj_3_97() {
			if (jj_done) return true;
			if (jj_scan_token(BASE9)) return true;
			return false;
		}

		inline bool jj_3_24() {
			if (jj_done) return true;
			if (jj_scan_token(IMP)) return true;
			return false;
		}

		inline bool jj_3_136() {
			if (jj_done) return true;
			if (jj_scan_token(AND)) return true;
			return false;
		}

		inline bool jj_3_67() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_65()) {
				jj_scanpos = xsp;
				if (jj_3_66()) return true;
			}
			return false;
		}

		inline bool jj_3_65() {
			if (jj_done) return true;
			if (jj_scan_token(DECIMAL_NUMBER)) return true;
			return false;
		}

		inline bool jj_3_23() {
			if (jj_done) return true;
			if (jj_scan_token(XOR)) return true;
			return false;
		}

		inline bool jj_3_96() {
			if (jj_done) return true;
			if (jj_scan_token(BASE8)) return true;
			return false;
		}

		inline bool jj_3_82() {
			if (jj_done) return true;
			if (jj_3R_otherBaseNumber_515_9_26()) return true;
			return false;
		}

		inline bool jj_3_135() {
			if (jj_done) return true;
			if (jj_scan_token(POWER)) return true;
			return false;
		}

		inline bool jj_3_22() {
			if (jj_done) return true;
			if (jj_scan_token(NAND)) return true;
			return false;
		}

		inline bool jj_3_95() {
			if (jj_done) return true;
			if (jj_scan_token(BASE7)) return true;
			return false;
		}

		inline bool jj_3_60() {
			if (jj_done) return true;
			if (jj_scan_token(DECIMAL_NUMBER)) return true;
			return false;
		}

		inline bool jj_3_39() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3_134() {
			if (jj_done) return true;
			if (jj_scan_token(MODULO)) return true;
			return false;
		}

		inline bool jj_3_41() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_39()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_39()) {
					jj_scanpos = xsp;
					break;
				}
			}
			if (jj_3R_bracketedExpressionOptionalImpliedMultiplication_490_5_21()) return true;
			return false;
		}

		inline bool jj_3_21() {
			if (jj_done) return true;
			if (jj_scan_token(NOR)) return true;
			return false;
		}

		inline bool jj_3_94() {
			if (jj_done) return true;
			if (jj_scan_token(BASE6)) return true;
			return false;
		}

		inline bool jj_3_132() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_133()) {
				jj_scanpos = xsp;
				if (jj_3_134()) {
					jj_scanpos = xsp;
					if (jj_3_135()) {
						jj_scanpos = xsp;
						if (jj_3_136()) {
							jj_scanpos = xsp;
							if (jj_3_137()) {
								jj_scanpos = xsp;
								if (jj_3_138()) {
									jj_scanpos = xsp;
									if (jj_3_139()) {
										jj_scanpos = xsp;
										if (jj_3_140()) {
											jj_scanpos = xsp;
											if (jj_3_141()) {
												jj_scanpos = xsp;
												if (jj_3_142()) {
													jj_scanpos = xsp;
													if (jj_3_143()) {
														jj_scanpos = xsp;
														if (jj_3_144()) {
															jj_scanpos = xsp;
															if (jj_3_145()) {
																jj_scanpos = xsp;
																if (jj_3_146()) {
																	jj_scanpos = xsp;
																	if (jj_3_147()) return true;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			return false;
		}

		inline bool jj_3_133() {
			if (jj_done) return true;
			if (jj_scan_token(NOT)) return true;
			return false;
		}

		inline bool jj_3_20() {
			if (jj_done) return true;
			if (jj_scan_token(AND)) return true;
			return false;
		}

		inline bool jj_3_78() {
			if (jj_done) return true;
			if (jj_3R_otherBaseNumber_515_9_26()) return true;
			return false;
		}

		inline bool jj_3_93() {
			if (jj_done) return true;
			if (jj_scan_token(BASE5)) return true;
			return false;
		}

		inline bool jj_3_19() {
			if (jj_done) return true;
			if (jj_scan_token(OR)) return true;
			return false;
		}

		inline bool jj_3_18() {
			if (jj_done) return true;
			if (jj_scan_token(LEQ)) return true;
			return false;
		}

		inline bool jj_3_77() {
			if (jj_done) return true;
			if (jj_scan_token(DECIMAL_NUMBER)) return true;
			return false;
		}

		inline bool jj_3_92() {
			if (jj_done) return true;
			if (jj_scan_token(BASE4)) return true;
			return false;
		}

		inline bool jj_3_131() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_NAME)) return true;
			return false;
		}

		inline bool jj_3_17() {
			if (jj_done) return true;
			if (jj_scan_token(LT)) return true;
			return false;
		}

		inline bool jj_3_91() {
			if (jj_done) return true;
			if (jj_scan_token(BASE3)) return true;
			return false;
		}

		inline bool jj_3_154() {
			if (jj_done) return true;
			if (jj_scan_token(SEMICOLON)) return true;
			return false;
		}

		inline bool jj_3_59() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunctionImpliedMultiplication_505_9_24()) return true;
			return false;
		}

		inline bool jj_3_16() {
			if (jj_done) return true;
			if (jj_scan_token(GEQ)) return true;
			return false;
		}

		inline bool jj_3_130() {
			if (jj_done) return true;
			if (jj_scan_token(IDENTIFIER)) return true;
			return false;
		}

		inline bool jj_3_76() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunction_510_9_25()) return true;
			return false;
		}

		inline bool jj_3_90() {
			if (jj_done) return true;
			if (jj_scan_token(BASE2)) return true;
			return false;
		}

		inline bool jj_3_15() {
			if (jj_done) return true;
			if (jj_scan_token(GT)) return true;
			return false;
		}

		inline bool jj_3_153() {
			if (jj_done) return true;
			if (jj_scan_token(COMMA)) return true;
			return false;
		}

		inline bool jj_3_128() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_NAME)) return true;
			return false;
		}

		inline bool jj_3_152() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_153()) {
				jj_scanpos = xsp;
				if (jj_3_154()) return true;
			}
			if (jj_3R_expression_450_9_16()) return true;
			return false;
		}

		inline bool jj_3_125() {
			if (jj_done) return true;
			if (jj_scan_token(FRACTION)) return true;
			return false;
		}

		inline bool jj_3_42() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_40()) {
				jj_scanpos = xsp;
				if (jj_3_41()) return true;
			}
			return false;
		}

		inline bool jj_3_40() {
			if (jj_done) return true;
			if (jj_3R_bracketedExpressionOptionalImpliedMultiplication_490_5_21()) return true;
			return false;
		}

		inline bool jj_3_14() {
			if (jj_done) return true;
			if (jj_scan_token(NEQ)) return true;
			return false;
		}

		inline bool jj_3_89() {
			if (jj_done) return true;
			if (jj_scan_token(BASE1)) return true;
			return false;
		}

		inline bool jj_3_129() {
			if (jj_done) return true;
			if (jj_scan_token(OTHER_CHAR)) return true;
			return false;
		}

		inline bool jj_3_58() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3_83() {
			if (jj_done) return true;
			if (jj_3R_argumentList_530_9_27()) return true;
			return false;
		}

		inline bool jj_3_148() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_129()) {
				jj_scanpos = xsp;
				if (jj_3_130()) {
					jj_scanpos = xsp;
					if (jj_3_131()) return true;
				}
			}
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_132()) {
					jj_scanpos = xsp;
					break;
				}
			}
			return false;
		}

		inline bool jj_3_62() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_58()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_58()) {
					jj_scanpos = xsp;
					break;
				}
			}
			xsp = jj_scanpos;
			if (jj_3_59()) {
				jj_scanpos = xsp;
				if (jj_3_60()) return true;
			}
			return false;
		}

		inline bool jj_3_13() {
			if (jj_done) return true;
			if (jj_scan_token(EQ)) return true;
			return false;
		}

		inline bool jj_3_124() {
			if (jj_done) return true;
			if (jj_scan_token(BASE36)) return true;
			return false;
		}

		inline bool jj_3_75() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3_80() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_75()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_75()) {
					jj_scanpos = xsp;
					break;
				}
			}
			xsp = jj_scanpos;
			if (jj_3_76()) {
				jj_scanpos = xsp;
				if (jj_3_77()) {
					jj_scanpos = xsp;
					if (jj_3_78()) return true;
				}
			}
			return false;
		}

		inline bool jj_3_151() {
			if (jj_done) return true;
			if (jj_scan_token(128)) return true;
			JavaCCToken *xsp;
			if (jj_3_148()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_148()) {
					jj_scanpos = xsp;
					break;
				}
			}
			return false;
		}

		inline bool jj_3_88() {
			if (jj_done) return true;
			if (jj_scan_token(BINARY)) return true;
			return false;
		}

		inline bool jj_3_85() {
			if (jj_done) return true;
			if (jj_3R_itemName_520_9_29()) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_83()) jj_scanpos = xsp;
			return false;
		}

		inline bool jj_3_54() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3_127() {
			if (jj_done) return true;
			if (jj_scan_token(LEFT_OR_RIGHT_DER)) return true;
			return false;
		}

		inline bool jj_3_56() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_54()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_54()) {
					jj_scanpos = xsp;
					break;
				}
			}
			if (jj_3R_bracketedExpression_495_5_23()) return true;
			return false;
		}

		inline bool jj_3_123() {
			if (jj_done) return true;
			if (jj_scan_token(BASE35)) return true;
			return false;
		}

		inline bool jj_3_150() {
			if (jj_done) return true;
			if (jj_scan_token(127)) return true;
			return false;
		}

		inline bool jj_3_12() {
			if (jj_done) return true;
			if (jj_scan_token(TETRATION)) return true;
			return false;
		}

		inline bool jj_3_87() {
			if (jj_done) return true;
			if (jj_scan_token(OCTAL)) return true;
			return false;
		}

		inline bool jj_3R_argumentList_530_9_27() {
			if (jj_done) return true;
			if (jj_scan_token(LEFT_PAR)) return true;
			if (jj_3R_expression_450_9_16()) return true;
			return false;
		}

		inline bool jj_3R_unitOrSpecialConstant_525_9_28() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_149()) {
				jj_scanpos = xsp;
				if (jj_3_150()) {
					jj_scanpos = xsp;
					if (jj_3_151()) return true;
				}
			}
			return false;
		}

		inline bool jj_3_149() {
			if (jj_done) return true;
			if (jj_scan_token(126)) return true;
			return false;
		}

		inline bool jj_3_74() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_79()) {
				jj_scanpos = xsp;
				if (jj_3_80()) return true;
			}
			return false;
		}

		inline bool jj_3_79() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunction_510_9_25()) return true;
			return false;
		}

		inline bool jj_3_122() {
			if (jj_done) return true;
			if (jj_scan_token(BASE34)) return true;
			return false;
		}

		inline bool jj_3_11() {
			if (jj_done) return true;
			if (jj_scan_token(POWER)) return true;
			return false;
		}

		inline bool jj_3_47() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3R_itemName_520_9_29() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_126()) {
				jj_scanpos = xsp;
				if (jj_3_127()) {
					jj_scanpos = xsp;
					if (jj_3_128()) return true;
				}
			}
			return false;
		}

		inline bool jj_3_126() {
			if (jj_done) return true;
			if (jj_scan_token(IDENTIFIER)) return true;
			return false;
		}

		inline bool jj_3_49() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_47()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_47()) {
					jj_scanpos = xsp;
					break;
				}
			}
			if (jj_3R_itemOrFunctionOptionalImpliedMultiplication_500_5_22()) return true;
			return false;
		}

		inline bool jj_3R_otherBaseNumber_515_9_26() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_86()) {
				jj_scanpos = xsp;
				if (jj_3_87()) {
					jj_scanpos = xsp;
					if (jj_3_88()) {
						jj_scanpos = xsp;
						if (jj_3_89()) {
							jj_scanpos = xsp;
							if (jj_3_90()) {
								jj_scanpos = xsp;
								if (jj_3_91()) {
									jj_scanpos = xsp;
									if (jj_3_92()) {
										jj_scanpos = xsp;
										if (jj_3_93()) {
											jj_scanpos = xsp;
											if (jj_3_94()) {
												jj_scanpos = xsp;
												if (jj_3_95()) {
													jj_scanpos = xsp;
													if (jj_3_96()) {
														jj_scanpos = xsp;
														if (jj_3_97()) {
															jj_scanpos = xsp;
															if (jj_3_98()) {
																jj_scanpos = xsp;
																if (jj_3_99()) {
																	jj_scanpos = xsp;
																	if (jj_3_100()) {
																		jj_scanpos = xsp;
																		if (jj_3_101()) {
																			jj_scanpos = xsp;
																			if (jj_3_102()) {
																				jj_scanpos = xsp;
																				if (jj_3_103()) {
																					jj_scanpos = xsp;
																					if (jj_3_104()) {
																						jj_scanpos = xsp;
																						if (jj_3_105()) {
																							jj_scanpos = xsp;
																							if (jj_3_106()) {
																								jj_scanpos = xsp;
																								if (jj_3_107()) {
																									jj_scanpos = xsp;
																									if (jj_3_108()) {
																										jj_scanpos =
																												xsp;
																										if (
																											jj_3_109()) {
																											jj_scanpos =
																													xsp;
																											if (
																												jj_3_110()) {
																												jj_scanpos
																														= xsp;
																												if (
																													jj_3_111()) {
																													jj_scanpos
																															= xsp;
																													if (
																														jj_3_112()) {
																														jj_scanpos
																																= xsp;
																														if
																														(jj_3_113()) {
																															jj_scanpos
																																	= xsp;
																															if
																															(jj_3_114()) {
																																jj_scanpos
																																		= xsp;
																																if
																																(jj_3_115()) {
																																	jj_scanpos
																																			= xsp;
																																	if
																																	(jj_3_116()) {
																																		jj_scanpos
																																				= xsp;
																																		if
																																		(jj_3_117()) {
																																			jj_scanpos
																																					= xsp;
																																			if
																																			(jj_3_118()) {
																																				jj_scanpos
																																						= xsp;
																																				if
																																				(jj_3_119()) {
																																					jj_scanpos
																																							= xsp;
																																					if
																																					(jj_3_120()) {
																																						jj_scanpos
																																								= xsp;
																																						if
																																						(jj_3_121()) {
																																							jj_scanpos
																																									= xsp;
																																							if
																																							(jj_3_122()) {
																																								jj_scanpos
																																										= xsp;
																																								if
																																								(jj_3_123()) {
																																									jj_scanpos
																																											= xsp;
																																									if
																																									(jj_3_124()) {
																																										jj_scanpos
																																												= xsp;
																																										if
																																										(jj_3_125())
																																											return
																																													true;
																																									}
																																								}
																																							}
																																						}
																																					}
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			return false;
		}

		inline bool jj_3_86() {
			if (jj_done) return true;
			if (jj_scan_token(HEXADECIMAL)) return true;
			return false;
		}

		inline bool jj_3_121() {
			if (jj_done) return true;
			if (jj_scan_token(BASE33)) return true;
			return false;
		}

		inline bool jj_3R_itemOrFunction_510_9_25() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_84()) {
				jj_scanpos = xsp;
				if (jj_3_85()) return true;
			}
			return false;
		}

		inline bool jj_3_57() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_55()) {
				jj_scanpos = xsp;
				if (jj_3_56()) return true;
			}
			return false;
		}

		inline bool jj_3_55() {
			if (jj_done) return true;
			if (jj_3R_bracketedExpression_495_5_23()) return true;
			return false;
		}

		inline bool jj_3_10() {
			if (jj_done) return true;
			if (jj_scan_token(MODULO)) return true;
			return false;
		}

		inline bool jj_3_84() {
			if (jj_done) return true;
			if (jj_3R_unitOrSpecialConstant_525_9_28()) return true;
			return false;
		}

		inline bool jj_3_63() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_61()) {
				jj_scanpos = xsp;
				if (jj_3_62()) return true;
			}
			return false;
		}

		inline bool jj_3_61() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunctionImpliedMultiplication_505_9_24()) return true;
			return false;
		}

		inline bool jj_3R_itemOrFunctionImpliedMultiplication_505_9_24() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_81()) {
				jj_scanpos = xsp;
				if (jj_3_82()) return true;
			}
			return false;
		}

		inline bool jj_3_53() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_51()) {
				jj_scanpos = xsp;
				if (jj_3_52()) return true;
			}
			return false;
		}

		inline bool jj_3_51() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunctionOptionalImpliedMultiplication_500_5_22()) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_42()) jj_scanpos = xsp;
			xsp = jj_scanpos;
			if (jj_3_46()) jj_scanpos = xsp;
			return false;
		}

		inline bool jj_3_81() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunction_510_9_25()) return true;
			JavaCCToken *xsp;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_74()) {
					jj_scanpos = xsp;
					break;
				}
			}
			return false;
		}

		inline bool jj_3_9() {
			if (jj_done) return true;
			if (jj_scan_token(DIV)) return true;
			return false;
		}

		inline bool jj_3_120() {
			if (jj_done) return true;
			if (jj_scan_token(BASE32)) return true;
			return false;
		}

		inline bool jj_3_32() {
			if (jj_done) return true;
			if (jj_scan_token(UNICODE_ROOT)) return true;
			return false;
		}

		inline bool jj_3_35() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			if (jj_3_32()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_32()) {
					jj_scanpos = xsp;
					break;
				}
			}
			return false;
		}

		inline bool jj_3R_itemOrFunctionOptionalImpliedMultiplication_500_5_22() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_72()) {
				jj_scanpos = xsp;
				if (jj_3_73()) return true;
			}
			return false;
		}

		inline bool jj_3_72() {
			if (jj_done) return true;
			if (jj_scan_token(DECIMAL_NUMBER)) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_63()) jj_scanpos = xsp;
			xsp = jj_scanpos;
			if (jj_3_67()) jj_scanpos = xsp;
			return false;
		}

		inline bool jj_3_37() {
			if (jj_done) return true;
			if (jj_scan_token(MINUS)) return true;
			return false;
		}

		inline bool jj_3R_bracketedExpression_495_5_23() {
			if (jj_done) return true;
			if (jj_scan_token(LEFT_PAR)) return true;
			if (jj_3R_expression_450_9_16()) return true;
			return false;
		}

		inline bool jj_3_119() {
			if (jj_done) return true;
			if (jj_scan_token(BASE31)) return true;
			return false;
		}

		inline bool jj_3_8() {
			if (jj_done) return true;
			if (jj_scan_token(MULTIPLY)) return true;
			return false;
		}

		inline bool jj_3_31() {
			if (jj_done) return true;
			if (jj_scan_token(PERCENTAGE)) return true;
			return false;
		}

		inline bool jj_3_34() {
			if (jj_done) return true;
			if (jj_scan_token(BITNOT)) return true;
			return false;
		}

		inline bool jj_3R_bracketedExpressionOptionalImpliedMultiplication_490_5_21() {
			if (jj_done) return true;
			if (jj_3R_bracketedExpression_495_5_23()) return true;
			return false;
		}

		inline bool jj_3_4() {
			if (jj_done) return true;
			if (jj_3R_unaryRigthOperator_475_9_19()) return true;
			return false;
		}

		inline bool jj_3_38() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_36()) {
				jj_scanpos = xsp;
				if (jj_3_37()) return true;
			}
			return false;
		}

		inline bool jj_3_36() {
			if (jj_done) return true;
			if (jj_scan_token(PLUS)) return true;
			return false;
		}

		inline bool jj_3R_itemExpression_485_5_32() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_38()) jj_scanpos = xsp;
			if (jj_3_53()) return true;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_53()) {
					jj_scanpos = xsp;
					break;
				}
			}
			return false;
		}

		inline bool jj_3R_unaryLeftOperator_480_9_20() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_33()) {
				jj_scanpos = xsp;
				if (jj_3_34()) {
					jj_scanpos = xsp;
					if (jj_3_35()) return true;
				}
			}
			return false;
		}

		inline bool jj_3_3() {
			if (jj_done) return true;
			if (jj_3R_binaryOperator_470_9_17()) return true;
			if (jj_3R_unaryRigthExpression_460_9_18()) return true;
			return false;
		}

		inline bool jj_3_33() {
			if (jj_done) return true;
			if (jj_scan_token(NOT)) return true;
			return false;
		}

		inline bool jj_3_7() {
			if (jj_done) return true;
			if (jj_scan_token(MINUS)) return true;
			return false;
		}

		inline bool jj_3_118() {
			if (jj_done) return true;
			if (jj_scan_token(BASE30)) return true;
			return false;
		}

		inline bool jj_3R_unaryRigthOperator_475_9_19() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_30()) {
				jj_scanpos = xsp;
				if (jj_3_31()) return true;
			}
			return false;
		}

		inline bool jj_3_30() {
			if (jj_done) return true;
			if (jj_scan_token(FACTORIAL)) return true;
			return false;
		}

		inline bool jj_3_50() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_48()) {
				jj_scanpos = xsp;
				if (jj_3_49()) return true;
			}
			return false;
		}

		inline bool jj_3_48() {
			if (jj_done) return true;
			if (jj_3R_itemOrFunctionOptionalImpliedMultiplication_500_5_22()) return true;
			return false;
		}

		inline bool jj_3R_binaryOperator_470_9_17() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_6()) {
				jj_scanpos = xsp;
				if (jj_3_7()) {
					jj_scanpos = xsp;
					if (jj_3_8()) {
						jj_scanpos = xsp;
						if (jj_3_9()) {
							jj_scanpos = xsp;
							if (jj_3_10()) {
								jj_scanpos = xsp;
								if (jj_3_11()) {
									jj_scanpos = xsp;
									if (jj_3_12()) {
										jj_scanpos = xsp;
										if (jj_3_13()) {
											jj_scanpos = xsp;
											if (jj_3_14()) {
												jj_scanpos = xsp;
												if (jj_3_15()) {
													jj_scanpos = xsp;
													if (jj_3_16()) {
														jj_scanpos = xsp;
														if (jj_3_17()) {
															jj_scanpos = xsp;
															if (jj_3_18()) {
																jj_scanpos = xsp;
																if (jj_3_19()) {
																	jj_scanpos = xsp;
																	if (jj_3_20()) {
																		jj_scanpos = xsp;
																		if (jj_3_21()) {
																			jj_scanpos = xsp;
																			if (jj_3_22()) {
																				jj_scanpos = xsp;
																				if (jj_3_23()) {
																					jj_scanpos = xsp;
																					if (jj_3_24()) {
																						jj_scanpos = xsp;
																						if (jj_3_25()) {
																							jj_scanpos = xsp;
																							if (jj_3_26()) {
																								jj_scanpos = xsp;
																								if (jj_3_27()) {
																									jj_scanpos = xsp;
																									if (jj_3_28()) {
																										jj_scanpos =
																												xsp;
																										if (jj_3_29())
																											return true;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			return false;
		}

		inline bool jj_3_6() {
			if (jj_done) return true;
			if (jj_scan_token(PLUS)) return true;
			return false;
		}

		inline bool jj_3_117() {
			if (jj_done) return true;
			if (jj_scan_token(BASE29)) return true;
			return false;
		}

		inline bool jj_3_5() {
			if (jj_done) return true;
			if (jj_3R_unaryLeftOperator_480_9_20()) return true;
			return false;
		}

		inline bool jj_3_2() {
			if (jj_done) return true;
			if (jj_scan_token(0)) return true;
			return false;
		}

		inline bool jj_3R_unaryLeftExpression_465_9_31() {
			if (jj_done) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_5()) jj_scanpos = xsp;
			if (jj_3R_itemExpression_485_5_32()) return true;
			return false;
		}

		inline bool jj_3R_unaryRigthExpression_460_9_18() {
			if (jj_done) return true;
			if (jj_3R_unaryLeftExpression_465_9_31()) return true;
			JavaCCToken *xsp;
			xsp = jj_scanpos;
			if (jj_3_4()) jj_scanpos = xsp;
			return false;
		}

		inline bool jj_3_116() {
			if (jj_done) return true;
			if (jj_scan_token(BASE28)) return true;
			return false;
		}

		inline bool jj_3R_binaryExpression_455_9_30() {
			if (jj_done) return true;
			if (jj_3R_unaryRigthExpression_460_9_18()) return true;
			JavaCCToken *xsp;
			while (true) {
				xsp = jj_scanpos;
				if (jj_3_3()) {
					jj_scanpos = xsp;
					break;
				}
			}
			return false;
		}

		inline bool jj_3R_expression_450_9_16() {
			if (jj_done) return true;
			if (jj_3R_binaryExpression_455_9_30()) return true;
			return false;
		}

		inline bool jj_3_115() {
			if (jj_done) return true;
			if (jj_scan_token(BASE27)) return true;
			return false;
		}

		inline bool jj_3_1() {
			if (jj_done) return true;
			if (jj_3R_expression_450_9_16()) return true;
			if (jj_scan_token(0)) return true;
			return false;
		}

		inline bool jj_3_114() {
			if (jj_done) return true;
			if (jj_scan_token(BASE26)) return true;
			return false;
		}

		inline bool jj_3_113() {
			if (jj_done) return true;
			if (jj_scan_token(BASE25)) return true;
			return false;
		}

		inline bool jj_3_52() {
			if (jj_done) return true;
			if (jj_3R_bracketedExpressionOptionalImpliedMultiplication_490_5_21()) return true;
			return false;
		}

		inline bool jj_3_112() {
			if (jj_done) return true;
			if (jj_scan_token(BASE24)) return true;
			return false;
		}

		inline bool jj_3_111() {
			if (jj_done) return true;
			if (jj_scan_token(BASE23)) return true;
			return false;
		}

		inline bool jj_3_110() {
			if (jj_done) return true;
			if (jj_scan_token(BASE22)) return true;
			return false;
		}

		inline bool jj_3_109() {
			if (jj_done) return true;
			if (jj_scan_token(BASE21)) return true;
			return false;
		}

	public:
		void setErrorHandler(ErrorHandler *eh) {
			if (errorHandler) delete errorHandler;
			errorHandler = eh;
		}

		TokenManager *token_source = nullptr;
		CharStream *jj_input_stream = nullptr;
		/** Current token. */
		JavaCCToken *token = nullptr;
		/** Next token. */
		JavaCCToken *jj_nt = nullptr;

	private:
		int jj_ntk;
		JJCalls jj_2_rtns[155];
		bool jj_rescan;
		int jj_gc;
		JavaCCToken *jj_scanpos, *jj_lastpos;
		int jj_la;
		/** Whether we are looking ahead. */
		bool jj_lookingAhead;
		bool jj_semLA;
		int jj_gen;
		int jj_la1[1];
		ErrorHandler *errorHandler = nullptr;

	protected:
		bool hasError;

		JavaCCToken *head;

	public:
		explicit SyntaxChecker(TokenManager *tokenManager);
		virtual ~SyntaxChecker();
		void ReInit(TokenManager *tokenManager);
		void clear();
		JavaCCToken *jj_consume_token(int kind);
		bool jj_scan_token(int kind);
		JavaCCToken *getNextToken();
		JavaCCToken *getToken(int index) const;
		int jj_ntk_f();

	private:
		int jj_kind;
		int **jj_expentries;
		int *jj_expentry;

		void jj_add_error_token(int kind, int pos);

	protected:
		/** Generate ParseException. */
		virtual void parseError();

	private:
		int indent; // trace indentation
		bool trace = false; // trace enabled if true

	public:
		bool trace_enabled() const;
		void enable_tracing();
		void disable_tracing();
		void jj_rescan_token();
		void jj_save(int index, int xla);

	private:
		bool jj_done;
	};

	// ************************************************
	// !!!!! Code manualy added to the parser
	// ************************************************
	inline SyntaxCheckerPtr new_SyntaxChecker(SyntaxCheckerTokenManagerPtr &tokenMmanager) {
		return std::make_shared<SyntaxChecker>(tokenMmanager.get());
	}
	// ************************************************
	// ************************************************

} // namespace org::mariuszgromada::math::mxparser::syntaxchecker {

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_SYNTAXCHECKER_SYNTAXCHECKER_H

/* Generated By:JavaCC: Do not edit this line. ParseException.h Version 7.0 */
/* JavaCCOptions:STATIC=false,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */