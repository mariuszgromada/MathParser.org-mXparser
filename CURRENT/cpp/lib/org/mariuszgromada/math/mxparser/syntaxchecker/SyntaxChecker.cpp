/*
 * @(#)SyntaxChecker.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxChecker.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/syntaxchecker/TokenMgrError.hpp"

namespace org::mariuszgromada::math::mxparser::syntaxchecker {

	// ************************************************
	// !!!!! Code manualy added to the parser
	// ************************************************
	bool SyntaxChecker::checkSyntax() {
		start();

		if (hasError) return false;
		if (errorMessages != nullptr && errorMessages->size() > 0) return false;
		if (token_source != nullptr && token_source->errorMessages != nullptr && token_source->errorMessages->size() > 0) return false;

		return true;
	}
	// ************************************************

	void SyntaxChecker::start() {
		if (jj_2_1(2)) {
			if (!hasError) {
				expression();
			}
			if (!hasError) {
				jj_consume_token(0);
			}
		} else if (jj_2_2(2)) {
			if (!hasError) {
				jj_consume_token(0);
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::expression() {
		if (!hasError) {
			binaryExpression();
		}
	}


	void SyntaxChecker::binaryExpression() {
		if (!hasError) {
			unaryRigthExpression();
		}
		if (!hasError) {
			while (!hasError) {
				if (jj_2_3(2)) {
					;
				} else {
					goto end_label_1;
				}
				if (!hasError) {
					binaryOperator();
				}
				if (!hasError) {
					unaryRigthExpression();
				}
			}
		end_label_1: ;
		}
	}


	void SyntaxChecker::unaryRigthExpression() {
		if (!hasError) {
			unaryLeftExpression();
		}
		if (!hasError) {
			if (jj_2_4(2)) {
				if (!hasError) {
					unaryRigthOperator();
				}
			} else {
				;
			}
		}
	}


	void SyntaxChecker::unaryLeftExpression() {
		if (!hasError) {
			if (jj_2_5(2)) {
				if (!hasError) {
					unaryLeftOperator();
				}
			} else {
				;
			}
		}
		if (!hasError) {
			itemExpression();
		}
	}


	void SyntaxChecker::binaryOperator() {
		if (jj_2_6(2)) {
			if (!hasError) {
				jj_consume_token(PLUS);
			}
		} else if (jj_2_7(2)) {
			if (!hasError) {
				jj_consume_token(MINUS);
			}
		} else if (jj_2_8(2)) {
			if (!hasError) {
				jj_consume_token(MULTIPLY);
			}
		} else if (jj_2_9(2)) {
			if (!hasError) {
				jj_consume_token(DIV);
			}
		} else if (jj_2_10(2)) {
			if (!hasError) {
				jj_consume_token(MODULO);
			}
		} else if (jj_2_11(2)) {
			if (!hasError) {
				jj_consume_token(POWER);
			}
		} else if (jj_2_12(2)) {
			if (!hasError) {
				jj_consume_token(TETRATION);
			}
		} else if (jj_2_13(2)) {
			if (!hasError) {
				jj_consume_token(EQ);
			}
		} else if (jj_2_14(2)) {
			if (!hasError) {
				jj_consume_token(NEQ);
			}
		} else if (jj_2_15(2)) {
			if (!hasError) {
				jj_consume_token(GT);
			}
		} else if (jj_2_16(2)) {
			if (!hasError) {
				jj_consume_token(GEQ);
			}
		} else if (jj_2_17(2)) {
			if (!hasError) {
				jj_consume_token(LT);
			}
		} else if (jj_2_18(2)) {
			if (!hasError) {
				jj_consume_token(LEQ);
			}
		} else if (jj_2_19(2)) {
			if (!hasError) {
				jj_consume_token(OR);
			}
		} else if (jj_2_20(2)) {
			if (!hasError) {
				jj_consume_token(AND);
			}
		} else if (jj_2_21(2)) {
			if (!hasError) {
				jj_consume_token(NOR);
			}
		} else if (jj_2_22(2)) {
			if (!hasError) {
				jj_consume_token(NAND);
			}
		} else if (jj_2_23(2)) {
			if (!hasError) {
				jj_consume_token(XOR);
			}
		} else if (jj_2_24(2)) {
			if (!hasError) {
				jj_consume_token(IMP);
			}
		} else if (jj_2_25(2)) {
			if (!hasError) {
				jj_consume_token(CIMP);
			}
		} else if (jj_2_26(2)) {
			if (!hasError) {
				jj_consume_token(NIMP);
			}
		} else if (jj_2_27(2)) {
			if (!hasError) {
				jj_consume_token(CNIMP);
			}
		} else if (jj_2_28(2)) {
			if (!hasError) {
				jj_consume_token(EQV);
			}
		} else if (jj_2_29(2)) {
			if (!hasError) {
				jj_consume_token(BITWISE);
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::unaryRigthOperator() {
		if (jj_2_30(2)) {
			if (!hasError) {
				jj_consume_token(FACTORIAL);
			}
		} else if (jj_2_31(2)) {
			if (!hasError) {
				jj_consume_token(PERCENTAGE);
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::unaryLeftOperator() {
		if (jj_2_33(2)) {
			if (!hasError) {
				jj_consume_token(NOT);
			}
		} else if (jj_2_34(2)) {
			if (!hasError) {
				jj_consume_token(BITNOT);
			}
		} else if (jj_2_35(2)) {
			if (!hasError) {
				while (!hasError) {
					if (!hasError) {
						jj_consume_token(UNICODE_ROOT);
					}
					if (jj_2_32(2)) {
						;
					} else {
						goto end_label_2;
					}
				}
			end_label_2: ;
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::itemExpression() {
		if (!hasError) {
			if (jj_2_38(2)) {
				if (jj_2_36(2)) {
					if (!hasError) {
						jj_consume_token(PLUS);
					}
				} else if (jj_2_37(2)) {
					if (!hasError) {
						jj_consume_token(MINUS);
					}
				} else {
					jj_consume_token(-1);
					errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
				}
			} else {
				;
			}
		}
		if (!hasError) {
			while (!hasError) {
				if (jj_2_51(2)) {
					if (!hasError) {
						itemOrFunctionOptionalImpliedMultiplication();
					}
					if (!hasError) {
						if (jj_2_42(2)) {
							if (jj_2_40(2)) {
								if (!hasError) {
									bracketedExpressionOptionalImpliedMultiplication();
								}
							} else if (jj_2_41(2)) {
								if (!hasError) {
									while (!hasError) {
										if (!hasError) {
											jj_consume_token(UNICODE_ROOT);
										}
										if (jj_2_39(2)) {
											;
										} else {
											goto end_label_4;
										}
									}
								end_label_4: ;
								}
								if (!hasError) {
									bracketedExpressionOptionalImpliedMultiplication();
								}
							} else {
								jj_consume_token(-1);
								errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
							}
						} else {
							;
						}
					}
					if (!hasError) {
						if (jj_2_46(2)) {
							if (jj_2_44(2)) {
								if (!hasError) {
									itemOrFunctionOptionalImpliedMultiplication();
								}
							} else if (jj_2_45(2)) {
								if (!hasError) {
									while (!hasError) {
										if (!hasError) {
											jj_consume_token(UNICODE_ROOT);
										}
										if (jj_2_43(2)) {
											;
										} else {
											goto end_label_5;
										}
									}
								end_label_5: ;
								}
								if (!hasError) {
									itemOrFunctionOptionalImpliedMultiplication();
								}
							} else {
								jj_consume_token(-1);
								errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
							}
						} else {
							;
						}
					}
				} else if (jj_2_52(2)) {
					if (!hasError) {
						if (!hasError) {
							bracketedExpressionOptionalImpliedMultiplication();
						}
					}
					if (!hasError) {
						if (jj_2_50(2)) {
							if (jj_2_48(2)) {
								if (!hasError) {
									itemOrFunctionOptionalImpliedMultiplication();
								}
							} else if (jj_2_49(2)) {
								if (!hasError) {
									while (!hasError) {
										if (!hasError) {
											jj_consume_token(UNICODE_ROOT);
										}
										if (jj_2_47(2)) {
											;
										} else {
											goto end_label_6;
										}
									}
								end_label_6: ;
								}
								if (!hasError) {
									itemOrFunctionOptionalImpliedMultiplication();
								}
							} else {
								jj_consume_token(-1);
								errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
							}
						} else {
							;
						}
					}
				} else {
					jj_consume_token(-1);
					errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
				}
				if (jj_2_53(2)) {
					;
				} else {
					goto end_label_3;
				}
			}
		end_label_3: ;
		}
	}


	void SyntaxChecker::bracketedExpressionOptionalImpliedMultiplication() {
		if (!hasError) {
			bracketedExpression();
		}
		if (!hasError) {
			if (jj_2_57(2)) {
				if (jj_2_55(2)) {
					if (!hasError) {
						bracketedExpression();
					}
				} else if (jj_2_56(2)) {
					if (!hasError) {
						while (!hasError) {
							if (!hasError) {
								jj_consume_token(UNICODE_ROOT);
							}
							if (jj_2_54(2)) {
								;
							} else {
								goto end_label_7;
							}
						}
					end_label_7: ;
					}
					if (!hasError) {
						bracketedExpression();
					}
				} else {
					jj_consume_token(-1);
					errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
				}
			} else {
				;
			}
		}
	}


	void SyntaxChecker::bracketedExpression() {
		if (!hasError) {
			jj_consume_token(LEFT_PAR);
		}
		if (!hasError) {
			expression();
		}
		if (!hasError) {
			jj_consume_token(RIGHT_PAR);
		}
	}


	void SyntaxChecker::itemOrFunctionOptionalImpliedMultiplication() {
		if (jj_2_72(2)) {
			if (!hasError) {
				jj_consume_token(DECIMAL_NUMBER);
			}
			if (!hasError) {
				if (jj_2_63(2)) {
					if (jj_2_61(2)) {
						if (!hasError) {
							itemOrFunctionImpliedMultiplication();
						}
					} else if (jj_2_62(2)) {
						if (!hasError) {
							while (!hasError) {
								if (!hasError) {
									jj_consume_token(UNICODE_ROOT);
								}
								if (jj_2_58(2)) {
									;
								} else {
									goto end_label_8;
								}
							}
						end_label_8: ;
						}
						if (!hasError) {
							if (jj_2_59(2)) {
								if (!hasError) {
									itemOrFunctionImpliedMultiplication();
								}
							} else if (jj_2_60(2)) {
								if (!hasError) {
									jj_consume_token(DECIMAL_NUMBER);
								}
							} else {
								jj_consume_token(-1);
								errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
							}
						}
					} else {
						jj_consume_token(-1);
						errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
					}
				} else {
					;
				}
			}
			if (!hasError) {
				if (jj_2_67(2)) {
					if (jj_2_65(2)) {
						if (!hasError) {
							jj_consume_token(DECIMAL_NUMBER);
						}
					} else if (jj_2_66(2)) {
						if (!hasError) {
							while (!hasError) {
								if (!hasError) {
									jj_consume_token(UNICODE_ROOT);
								}
								if (jj_2_64(2)) {
									;
								} else {
									goto end_label_9;
								}
							}
						end_label_9: ;
						}
						if (!hasError) {
							jj_consume_token(DECIMAL_NUMBER);
						}
					} else {
						jj_consume_token(-1);
						errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
					}
				} else {
					;
				}
			}
		} else if (jj_2_73(2)) {
			if (!hasError) {
				if (!hasError) {
					itemOrFunctionImpliedMultiplication();
				}
			}
			if (!hasError) {
				if (jj_2_71(2)) {
					if (jj_2_69(2)) {
						if (!hasError) {
							jj_consume_token(DECIMAL_NUMBER);
						}
					} else if (jj_2_70(2)) {
						if (!hasError) {
							while (!hasError) {
								if (!hasError) {
									jj_consume_token(UNICODE_ROOT);
								}
								if (jj_2_68(2)) {
									;
								} else {
									goto end_label_10;
								}
							}
						end_label_10: ;
						}
						if (!hasError) {
							jj_consume_token(DECIMAL_NUMBER);
						}
					} else {
						jj_consume_token(-1);
						errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
					}
				} else {
					;
				}
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::itemOrFunctionImpliedMultiplication() {
		if (jj_2_81(2)) {
			if (!hasError) {
				itemOrFunction();
			}
			if (!hasError) {
				while (!hasError) {
					if (jj_2_74(2)) {
						;
					} else {
						goto end_label_11;
					}
					if (jj_2_79(2)) {
						if (!hasError) {
							itemOrFunction();
						}
					} else if (jj_2_80(2)) {
						if (!hasError) {
							while (!hasError) {
								if (!hasError) {
									jj_consume_token(UNICODE_ROOT);
								}
								if (jj_2_75(2)) {
									;
								} else {
									goto end_label_12;
								}
							}
						end_label_12: ;
						}
						if (!hasError) {
							if (jj_2_76(2)) {
								if (!hasError) {
									itemOrFunction();
								}
							} else if (jj_2_77(2)) {
								if (!hasError) {
									jj_consume_token(DECIMAL_NUMBER);
								}
							} else if (jj_2_78(2)) {
								if (!hasError) {
									otherBaseNumber();
								}
							} else {
								jj_consume_token(-1);
								errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
							}
						}
					} else {
						jj_consume_token(-1);
						errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
					}
				}
			end_label_11: ;
			}
		} else if (jj_2_82(2)) {
			if (!hasError) {
				otherBaseNumber();
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::itemOrFunction() {
		if (jj_2_84(2)) {
			if (!hasError) {
				unitOrSpecialConstant();
			}
		} else if (jj_2_85(2)) {
			if (!hasError) {
				itemName();
			}
			if (!hasError) {
				if (jj_2_83(2)) {
					if (!hasError) {
						argumentList();
					}
				} else {
					;
				}
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::otherBaseNumber() {
		if (jj_2_86(2)) {
			if (!hasError) {
				jj_consume_token(HEXADECIMAL);
			}
		} else if (jj_2_87(2)) {
			if (!hasError) {
				jj_consume_token(OCTAL);
			}
		} else if (jj_2_88(2)) {
			if (!hasError) {
				jj_consume_token(BINARY);
			}
		} else if (jj_2_89(2)) {
			if (!hasError) {
				jj_consume_token(BASE1);
			}
		} else if (jj_2_90(2)) {
			if (!hasError) {
				jj_consume_token(BASE2);
			}
		} else if (jj_2_91(2)) {
			if (!hasError) {
				jj_consume_token(BASE3);
			}
		} else if (jj_2_92(2)) {
			if (!hasError) {
				jj_consume_token(BASE4);
			}
		} else if (jj_2_93(2)) {
			if (!hasError) {
				jj_consume_token(BASE5);
			}
		} else if (jj_2_94(2)) {
			if (!hasError) {
				jj_consume_token(BASE6);
			}
		} else if (jj_2_95(2)) {
			if (!hasError) {
				jj_consume_token(BASE7);
			}
		} else if (jj_2_96(2)) {
			if (!hasError) {
				jj_consume_token(BASE8);
			}
		} else if (jj_2_97(2)) {
			if (!hasError) {
				jj_consume_token(BASE9);
			}
		} else if (jj_2_98(2)) {
			if (!hasError) {
				jj_consume_token(BASE10);
			}
		} else if (jj_2_99(2)) {
			if (!hasError) {
				jj_consume_token(BASE11);
			}
		} else if (jj_2_100(2)) {
			if (!hasError) {
				jj_consume_token(BASE12);
			}
		} else if (jj_2_101(2)) {
			if (!hasError) {
				jj_consume_token(BASE13);
			}
		} else if (jj_2_102(2)) {
			if (!hasError) {
				jj_consume_token(BASE14);
			}
		} else if (jj_2_103(2)) {
			if (!hasError) {
				jj_consume_token(BASE15);
			}
		} else if (jj_2_104(2)) {
			if (!hasError) {
				jj_consume_token(BASE16);
			}
		} else if (jj_2_105(2)) {
			if (!hasError) {
				jj_consume_token(BASE17);
			}
		} else if (jj_2_106(2)) {
			if (!hasError) {
				jj_consume_token(BASE18);
			}
		} else if (jj_2_107(2)) {
			if (!hasError) {
				jj_consume_token(BASE19);
			}
		} else if (jj_2_108(2)) {
			if (!hasError) {
				jj_consume_token(BASE20);
			}
		} else if (jj_2_109(2)) {
			if (!hasError) {
				jj_consume_token(BASE21);
			}
		} else if (jj_2_110(2)) {
			if (!hasError) {
				jj_consume_token(BASE22);
			}
		} else if (jj_2_111(2)) {
			if (!hasError) {
				jj_consume_token(BASE23);
			}
		} else if (jj_2_112(2)) {
			if (!hasError) {
				jj_consume_token(BASE24);
			}
		} else if (jj_2_113(2)) {
			if (!hasError) {
				jj_consume_token(BASE25);
			}
		} else if (jj_2_114(2)) {
			if (!hasError) {
				jj_consume_token(BASE26);
			}
		} else if (jj_2_115(2)) {
			if (!hasError) {
				jj_consume_token(BASE27);
			}
		} else if (jj_2_116(2)) {
			if (!hasError) {
				jj_consume_token(BASE28);
			}
		} else if (jj_2_117(2)) {
			if (!hasError) {
				jj_consume_token(BASE29);
			}
		} else if (jj_2_118(2)) {
			if (!hasError) {
				jj_consume_token(BASE30);
			}
		} else if (jj_2_119(2)) {
			if (!hasError) {
				jj_consume_token(BASE31);
			}
		} else if (jj_2_120(2)) {
			if (!hasError) {
				jj_consume_token(BASE32);
			}
		} else if (jj_2_121(2)) {
			if (!hasError) {
				jj_consume_token(BASE33);
			}
		} else if (jj_2_122(2)) {
			if (!hasError) {
				jj_consume_token(BASE34);
			}
		} else if (jj_2_123(2)) {
			if (!hasError) {
				jj_consume_token(BASE35);
			}
		} else if (jj_2_124(2)) {
			if (!hasError) {
				jj_consume_token(BASE36);
			}
		} else if (jj_2_125(2)) {
			if (!hasError) {
				jj_consume_token(FRACTION);
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::itemName() {
		if (jj_2_126(2)) {
			if (!hasError) {
				jj_consume_token(IDENTIFIER);
			}
		} else if (jj_2_127(2)) {
			if (!hasError) {
				jj_consume_token(LEFT_OR_RIGHT_DER);
			}
		} else if (jj_2_128(2)) {
			if (!hasError) {
				jj_consume_token(UNICODE_NAME);
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::unitOrSpecialConstant() {
		if (jj_2_149(2)) {
			if (!hasError) {
				jj_consume_token(126);
			}
		} else if (jj_2_150(2)) {
			if (!hasError) {
				jj_consume_token(127);
			}
		} else if (jj_2_151(2)) {
			if (!hasError) {
				jj_consume_token(128);
			}
			if (!hasError) {
				while (!hasError) {
					if (!hasError) {
						if (jj_2_129(2)) {
							if (!hasError) {
								jj_consume_token(OTHER_CHAR);
							}
						} else if (jj_2_130(2)) {
							if (!hasError) {
								jj_consume_token(IDENTIFIER);
							}
						} else if (jj_2_131(2)) {
							if (!hasError) {
								jj_consume_token(UNICODE_NAME);
							}
						} else {
							jj_consume_token(-1);
							errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
						}
					}
					if (!hasError) {
						while (!hasError) {
							if (jj_2_132(2)) {
								;
							} else {
								goto end_label_14;
							}
							if (jj_2_133(2)) {
								if (!hasError) {
									jj_consume_token(NOT);
								}
							} else if (jj_2_134(2)) {
								if (!hasError) {
									jj_consume_token(MODULO);
								}
							} else if (jj_2_135(2)) {
								if (!hasError) {
									jj_consume_token(POWER);
								}
							} else if (jj_2_136(2)) {
								if (!hasError) {
									jj_consume_token(AND);
								}
							} else if (jj_2_137(2)) {
								if (!hasError) {
									jj_consume_token(MULTIPLY);
								}
							} else if (jj_2_138(2)) {
								if (!hasError) {
									jj_consume_token(DIV);
								}
							} else if (jj_2_139(2)) {
								if (!hasError) {
									jj_consume_token(LEFT_PAR);
								}
							} else if (jj_2_140(2)) {
								if (!hasError) {
									jj_consume_token(RIGHT_PAR);
								}
							} else if (jj_2_141(2)) {
								if (!hasError) {
									jj_consume_token(MINUS);
								}
							} else if (jj_2_142(2)) {
								if (!hasError) {
									jj_consume_token(PLUS);
								}
							} else if (jj_2_143(2)) {
								if (!hasError) {
									jj_consume_token(COMMA);
								}
							} else if (jj_2_144(2)) {
								if (!hasError) {
									jj_consume_token(OR);
								}
							} else if (jj_2_145(2)) {
								if (!hasError) {
									jj_consume_token(GT);
								}
							} else if (jj_2_146(2)) {
								if (!hasError) {
									jj_consume_token(LT);
								}
							} else if (jj_2_147(2)) {
								if (!hasError) {
									jj_consume_token(DECIMAL_NUMBER);
								}
							} else {
								jj_consume_token(-1);
								errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
							}
						}
					end_label_14: ;
					}
					if (jj_2_148(2)) {
						;
					} else {
						goto end_label_13;
					}
				}
			end_label_13: ;
			}
			if (!hasError) {
				jj_consume_token(129);
			}
		} else {
			jj_consume_token(-1);
			errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
		}
	}


	void SyntaxChecker::argumentList() {
		if (!hasError) {
			jj_consume_token(LEFT_PAR);
		}
		if (!hasError) {
			expression();
		}
		if (!hasError) {
			while (!hasError) {
				if (jj_2_152(2)) {
					;
				} else {
					goto end_label_15;
				}
				if (!hasError) {
					if (jj_2_153(2)) {
						if (!hasError) {
							jj_consume_token(COMMA);
						}
					} else if (jj_2_154(2)) {
						if (!hasError) {
							jj_consume_token(SEMICOLON);
						}
					} else {
						jj_consume_token(-1);
						errorHandler->handleParseError(token, getToken(1), __FUNCTION__, this), hasError = true;
					}
				}
				if (!hasError) {
					expression();
				}
			}
		end_label_15: ;
		}
		if (!hasError) {
			jj_consume_token(RIGHT_PAR);
		}
	}


	SyntaxChecker::SyntaxChecker(TokenManager *tokenManager) {
		head = nullptr;
		ReInit(tokenManager);
	}

	SyntaxChecker::~SyntaxChecker() {
		clear();
	}

	void SyntaxChecker::ReInit(TokenManager *tokenManager) {
		clear();
		errorHandler = new ErrorHandler();
		hasError = false;
		token_source = tokenManager;
		head = token = new JavaCCToken();
		token->kind = 0;
		token->next = nullptr;
		jj_lookingAhead = false;
		jj_rescan = false;
		jj_done = false;
		jj_scanpos = jj_lastpos = nullptr;
		jj_gc = 0;
		jj_kind = -1;
		indent = 0;
		trace = false;
		jj_ntk = -1;
		jj_gen = 0;
	}


	void SyntaxChecker::clear() {
		//Since token manager was generate from outside,
		//parser should not take care of deleting
		//if (token_source) delete token_source;
		if (head) {
			JavaCCToken *next, *t = head;
			while (t) {
				next = t->next;
				delete t;
				t = next;
			}
		}
		if (errorHandler) {
			delete errorHandler, errorHandler = nullptr;
		}
	}


	JavaCCToken *SyntaxChecker::jj_consume_token(int kind) {
		JavaCCToken *oldToken;
		if ((oldToken = token)->next != nullptr) token = token->next;
		else token = token->next = token_source->getNextToken();
		jj_ntk = -1;
		if (token->kind == kind) {
			jj_gen++;
			if (++jj_gc > 100) {
				jj_gc = 0;
				for (int i = 0; i < 154; i++) {
					JJCalls *c = &jj_2_rtns[i];
					while (c != nullptr) {
						if (c->gen < jj_gen) c->first = nullptr;
						c = c->next;
					}
				}
			}
			return token;
		}
		token = oldToken;
		jj_kind = kind;
		JJString image = kind >= 0 ? tokenImage[kind] : tokenImage[0];
		errorHandler->handleUnexpectedToken(kind, image.substr(1, image.size() - 2), getToken(1), this);
		hasError = true;
		return token;
	}


	bool SyntaxChecker::jj_scan_token(int kind) {
		if (jj_scanpos == jj_lastpos) {
			jj_la--;
			if (jj_scanpos->next == nullptr) {
				jj_lastpos = jj_scanpos = jj_scanpos->next = token_source->getNextToken();
			} else {
				jj_lastpos = jj_scanpos = jj_scanpos->next;
			}
		} else {
			jj_scanpos = jj_scanpos->next;
		}
		if (jj_rescan) {
			int i = 0;
			JavaCCToken *tok = token;
			while (tok != nullptr && tok != jj_scanpos) {
				i++;
				tok = tok->next;
			}
			if (tok != nullptr) jj_add_error_token(kind, i);
		}
		if (jj_scanpos->kind != kind) return true;
		if (jj_la == 0 && jj_scanpos == jj_lastpos) { return jj_done = true; }
		return false;
	}


	/** Get the next Token. */

	JavaCCToken *SyntaxChecker::getNextToken() {
		if (token->next != nullptr) token = token->next;
		else token = token->next = token_source->getNextToken();
		jj_ntk = -1;
		jj_gen++;
		return token;
	}

	/** Get the specific Token. */

	JavaCCToken *SyntaxChecker::getToken(int index) const {
		JavaCCToken *t = token;
		for (int i = 0; i < index; i++) {
			if (t->next != nullptr) t = t->next;
			else t = t->next = token_source->getNextToken();
		}
		return t;
	}


	int SyntaxChecker::jj_ntk_f() {
		if ((jj_nt = token->next) == nullptr)
			return (jj_ntk = (token->next = token_source->getNextToken())->kind);
		else
			return (jj_ntk = jj_nt->kind);
	}


	void SyntaxChecker::jj_add_error_token(int kind, int pos) {
	}


	void SyntaxChecker::parseError() {
		fprintf(stderr, "Parse error at: %d:%d, after token: %s encountered: %s\n", token->beginLine,
		        token->beginColumn, addUnicodeEscapes(token->image).c_str(),
		        addUnicodeEscapes(getToken(1)->image).c_str());
	}


	bool SyntaxChecker::trace_enabled() const {
		return trace;
	}


	void SyntaxChecker::enable_tracing() {
	}

	void SyntaxChecker::disable_tracing() {
	}


	void SyntaxChecker::jj_rescan_token() {
		jj_rescan = true;
		for (int i = 0; i < 154; i++) {
			JJCalls *p = &jj_2_rtns[i];
			do {
				if (p->gen > jj_gen) {
					jj_la = p->arg;
					jj_lastpos = jj_scanpos = p->first;
					switch (i) {
						case 0: jj_3_1();
							break;
						case 1: jj_3_2();
							break;
						case 2: jj_3_3();
							break;
						case 3: jj_3_4();
							break;
						case 4: jj_3_5();
							break;
						case 5: jj_3_6();
							break;
						case 6: jj_3_7();
							break;
						case 7: jj_3_8();
							break;
						case 8: jj_3_9();
							break;
						case 9: jj_3_10();
							break;
						case 10: jj_3_11();
							break;
						case 11: jj_3_12();
							break;
						case 12: jj_3_13();
							break;
						case 13: jj_3_14();
							break;
						case 14: jj_3_15();
							break;
						case 15: jj_3_16();
							break;
						case 16: jj_3_17();
							break;
						case 17: jj_3_18();
							break;
						case 18: jj_3_19();
							break;
						case 19: jj_3_20();
							break;
						case 20: jj_3_21();
							break;
						case 21: jj_3_22();
							break;
						case 22: jj_3_23();
							break;
						case 23: jj_3_24();
							break;
						case 24: jj_3_25();
							break;
						case 25: jj_3_26();
							break;
						case 26: jj_3_27();
							break;
						case 27: jj_3_28();
							break;
						case 28: jj_3_29();
							break;
						case 29: jj_3_30();
							break;
						case 30: jj_3_31();
							break;
						case 31: jj_3_32();
							break;
						case 32: jj_3_33();
							break;
						case 33: jj_3_34();
							break;
						case 34: jj_3_35();
							break;
						case 35: jj_3_36();
							break;
						case 36: jj_3_37();
							break;
						case 37: jj_3_38();
							break;
						case 38: jj_3_39();
							break;
						case 39: jj_3_40();
							break;
						case 40: jj_3_41();
							break;
						case 41: jj_3_42();
							break;
						case 42: jj_3_43();
							break;
						case 43: jj_3_44();
							break;
						case 44: jj_3_45();
							break;
						case 45: jj_3_46();
							break;
						case 46: jj_3_47();
							break;
						case 47: jj_3_48();
							break;
						case 48: jj_3_49();
							break;
						case 49: jj_3_50();
							break;
						case 50: jj_3_51();
							break;
						case 51: jj_3_52();
							break;
						case 52: jj_3_53();
							break;
						case 53: jj_3_54();
							break;
						case 54: jj_3_55();
							break;
						case 55: jj_3_56();
							break;
						case 56: jj_3_57();
							break;
						case 57: jj_3_58();
							break;
						case 58: jj_3_59();
							break;
						case 59: jj_3_60();
							break;
						case 60: jj_3_61();
							break;
						case 61: jj_3_62();
							break;
						case 62: jj_3_63();
							break;
						case 63: jj_3_64();
							break;
						case 64: jj_3_65();
							break;
						case 65: jj_3_66();
							break;
						case 66: jj_3_67();
							break;
						case 67: jj_3_68();
							break;
						case 68: jj_3_69();
							break;
						case 69: jj_3_70();
							break;
						case 70: jj_3_71();
							break;
						case 71: jj_3_72();
							break;
						case 72: jj_3_73();
							break;
						case 73: jj_3_74();
							break;
						case 74: jj_3_75();
							break;
						case 75: jj_3_76();
							break;
						case 76: jj_3_77();
							break;
						case 77: jj_3_78();
							break;
						case 78: jj_3_79();
							break;
						case 79: jj_3_80();
							break;
						case 80: jj_3_81();
							break;
						case 81: jj_3_82();
							break;
						case 82: jj_3_83();
							break;
						case 83: jj_3_84();
							break;
						case 84: jj_3_85();
							break;
						case 85: jj_3_86();
							break;
						case 86: jj_3_87();
							break;
						case 87: jj_3_88();
							break;
						case 88: jj_3_89();
							break;
						case 89: jj_3_90();
							break;
						case 90: jj_3_91();
							break;
						case 91: jj_3_92();
							break;
						case 92: jj_3_93();
							break;
						case 93: jj_3_94();
							break;
						case 94: jj_3_95();
							break;
						case 95: jj_3_96();
							break;
						case 96: jj_3_97();
							break;
						case 97: jj_3_98();
							break;
						case 98: jj_3_99();
							break;
						case 99: jj_3_100();
							break;
						case 100: jj_3_101();
							break;
						case 101: jj_3_102();
							break;
						case 102: jj_3_103();
							break;
						case 103: jj_3_104();
							break;
						case 104: jj_3_105();
							break;
						case 105: jj_3_106();
							break;
						case 106: jj_3_107();
							break;
						case 107: jj_3_108();
							break;
						case 108: jj_3_109();
							break;
						case 109: jj_3_110();
							break;
						case 110: jj_3_111();
							break;
						case 111: jj_3_112();
							break;
						case 112: jj_3_113();
							break;
						case 113: jj_3_114();
							break;
						case 114: jj_3_115();
							break;
						case 115: jj_3_116();
							break;
						case 116: jj_3_117();
							break;
						case 117: jj_3_118();
							break;
						case 118: jj_3_119();
							break;
						case 119: jj_3_120();
							break;
						case 120: jj_3_121();
							break;
						case 121: jj_3_122();
							break;
						case 122: jj_3_123();
							break;
						case 123: jj_3_124();
							break;
						case 124: jj_3_125();
							break;
						case 125: jj_3_126();
							break;
						case 126: jj_3_127();
							break;
						case 127: jj_3_128();
							break;
						case 128: jj_3_129();
							break;
						case 129: jj_3_130();
							break;
						case 130: jj_3_131();
							break;
						case 131: jj_3_132();
							break;
						case 132: jj_3_133();
							break;
						case 133: jj_3_134();
							break;
						case 134: jj_3_135();
							break;
						case 135: jj_3_136();
							break;
						case 136: jj_3_137();
							break;
						case 137: jj_3_138();
							break;
						case 138: jj_3_139();
							break;
						case 139: jj_3_140();
							break;
						case 140: jj_3_141();
							break;
						case 141: jj_3_142();
							break;
						case 142: jj_3_143();
							break;
						case 143: jj_3_144();
							break;
						case 144: jj_3_145();
							break;
						case 145: jj_3_146();
							break;
						case 146: jj_3_147();
							break;
						case 147: jj_3_148();
							break;
						case 148: jj_3_149();
							break;
						case 149: jj_3_150();
							break;
						case 150: jj_3_151();
							break;
						case 151: jj_3_152();
							break;
						case 152: jj_3_153();
							break;
						case 153: jj_3_154();
							break;
					}
				}
				p = p->next;
			} while (p != nullptr);
		}
		jj_rescan = false;
	}


	void SyntaxChecker::jj_save(int index, int xla) {
		JJCalls *p = &jj_2_rtns[index];
		while (p->gen > jj_gen) {
			if (p->next == nullptr) {
				p = p->next = new JJCalls();
				break;
			}
			p = p->next;
		}
		p->gen = jj_gen + xla - jj_la;
		p->first = token;
		p->arg = xla;
	}
} // namespace org::mariuszgromada::math::mxparser::syntaxchecker

/* Generated By:JavaCC: Do not edit this line. ParseException.h Version 7.0 */
/* JavaCCOptions:STATIC=false,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */