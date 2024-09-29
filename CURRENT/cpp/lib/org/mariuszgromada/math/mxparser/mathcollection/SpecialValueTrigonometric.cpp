/*
 * @(#)SpecialValueTrigonometric.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialValueTrigonometric.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp"
#include "org/mariuszgromada/math/mxparser/mathcollection/SpecialValue.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/List.hpp"

namespace org::mariuszgromada::math::mxparser::mathcollection {
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	/**
	 * List of special values of inverse sine function
	 */
	API_VISIBLE ListPtr<SpecialValuePtr> SpecialValueTrigonometric::valuesListAsin = nullptr;
	/**
	 * List of special values of inverse cosine function
	 */
	API_VISIBLE ListPtr<SpecialValuePtr> SpecialValueTrigonometric::valuesListAcos = nullptr;
	/**
	 * List of special values of inverse tangent function
	 */
	API_VISIBLE ListPtr<SpecialValuePtr> SpecialValueTrigonometric::valuesListAtan = nullptr;
	/**
	 * List of special values of inverse cotangent function
	 */
	API_VISIBLE ListPtr<SpecialValuePtr> SpecialValueTrigonometric::valuesListActan = nullptr;
	/**
	 * List of special values of inverse secant function
	 */
	API_VISIBLE ListPtr<SpecialValuePtr> SpecialValueTrigonometric::valuesListAsec = nullptr;
	/**
	 * List of special values of inverse cosecant function
	 */
	API_VISIBLE ListPtr<SpecialValuePtr> SpecialValueTrigonometric::valuesListAcsc = nullptr;

	/**
	 * List of special values for all main trigonometric functions
	 */
	API_VISIBLE SpecialValueTrigonometricPtr SpecialValueTrigonometric::valuesListTrig[] = {
		/* 0 degrees ------- */
		new_SpecialValueTrigonometric(0.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0),
		new_SpecialValueTrigonometric(2.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0),
		new_SpecialValueTrigonometric(-2.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0),
		new_SpecialValueTrigonometric(4.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0),
		new_SpecialValueTrigonometric(-4.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0)
		/* 30 degrees ------- */
		,
		new_SpecialValueTrigonometric((1.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30),
		new_SpecialValueTrigonometric((13.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30),
		new_SpecialValueTrigonometric((-11.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30),
		new_SpecialValueTrigonometric((25.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30),
		new_SpecialValueTrigonometric((-23.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30)
		/* 45 degrees ------- */
		,
		new_SpecialValueTrigonometric((1.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45),
		new_SpecialValueTrigonometric((9.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45),
		new_SpecialValueTrigonometric((-7.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45),
		new_SpecialValueTrigonometric((17.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45),
		new_SpecialValueTrigonometric((-15.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45)
		/* 60 degrees ------- */
		,
		new_SpecialValueTrigonometric((1.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60),
		new_SpecialValueTrigonometric((7.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60),
		new_SpecialValueTrigonometric((-5.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60),
		new_SpecialValueTrigonometric((13.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60),
		new_SpecialValueTrigonometric((-11.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60)
		/* 90 degrees ------- */
		,
		new_SpecialValueTrigonometric((1.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90),
		new_SpecialValueTrigonometric((5.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90),
		new_SpecialValueTrigonometric((-3.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90),
		new_SpecialValueTrigonometric((9.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90),
		new_SpecialValueTrigonometric((-7.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90)
		/* 120 degrees ------- */
		,
		new_SpecialValueTrigonometric((2.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120),
		new_SpecialValueTrigonometric((8.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120),
		new_SpecialValueTrigonometric((-4.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120),
		new_SpecialValueTrigonometric((14.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120),
		new_SpecialValueTrigonometric((-10.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120)
		/* 135 degrees ------- */
		,
		new_SpecialValueTrigonometric((3.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135),
		new_SpecialValueTrigonometric((11.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135),
		new_SpecialValueTrigonometric((-5.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135),
		new_SpecialValueTrigonometric((19.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135),
		new_SpecialValueTrigonometric((-13.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135)
		/* 150 degrees ------- */
		,
		new_SpecialValueTrigonometric((5.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150),
		new_SpecialValueTrigonometric((17.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150),
		new_SpecialValueTrigonometric((-7.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150),
		new_SpecialValueTrigonometric((29.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150),
		new_SpecialValueTrigonometric((-19.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150)
		/* 180 degrees ------- */
		,
		new_SpecialValueTrigonometric(1.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180),
		new_SpecialValueTrigonometric(3.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180),
		new_SpecialValueTrigonometric(-1.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180),
		new_SpecialValueTrigonometric(5.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180),
		new_SpecialValueTrigonometric(-3.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180)
		/* 210 degrees ------- */
		,
		new_SpecialValueTrigonometric((7.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210),
		new_SpecialValueTrigonometric((19.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210),
		new_SpecialValueTrigonometric((-5.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210),
		new_SpecialValueTrigonometric((31.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210),
		new_SpecialValueTrigonometric((-17.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210)
		/* 225 degrees ------- */
		,
		new_SpecialValueTrigonometric((5.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225),
		new_SpecialValueTrigonometric((13.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225),
		new_SpecialValueTrigonometric((-3.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225),
		new_SpecialValueTrigonometric((21.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225),
		new_SpecialValueTrigonometric((-11.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225)
		/* 240 degrees ------- */
		,
		new_SpecialValueTrigonometric((4.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240),
		new_SpecialValueTrigonometric((10.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240),
		new_SpecialValueTrigonometric((-2.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240),
		new_SpecialValueTrigonometric((16.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240),
		new_SpecialValueTrigonometric((-8.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240)
		/* 270 degrees ------- */
		,
		new_SpecialValueTrigonometric((3.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270),
		new_SpecialValueTrigonometric((7.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270),
		new_SpecialValueTrigonometric((-1.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270),
		new_SpecialValueTrigonometric((11.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270),
		new_SpecialValueTrigonometric((-5.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270)
		/* 300 degrees ------- */
		,
		new_SpecialValueTrigonometric((5.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300),
		new_SpecialValueTrigonometric((11.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300),
		new_SpecialValueTrigonometric((-1.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300),
		new_SpecialValueTrigonometric((17.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300),
		new_SpecialValueTrigonometric((-7.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300)
		/* 315 degrees ------- */
		,
		new_SpecialValueTrigonometric((7.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315),
		new_SpecialValueTrigonometric((15.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315),
		new_SpecialValueTrigonometric((-1.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315),
		new_SpecialValueTrigonometric((23.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315),
		new_SpecialValueTrigonometric((-9.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315)
		/* 330 degrees ------- */
		,
		new_SpecialValueTrigonometric((11.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330),
		new_SpecialValueTrigonometric((23.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330),
		new_SpecialValueTrigonometric((-1.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330),
		new_SpecialValueTrigonometric((35.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330),
		new_SpecialValueTrigonometric((-13.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330)
		/* 360 degrees ------- */
		,
		new_SpecialValueTrigonometric(6.0, SIN_360, COS_360, TAN_360, CTAN_360, SEC_360, CSC_360)
	};




	/**
	 * factor: Angle factor in Pi radians
	 * xrad: Angle in radians
	 * xdeg: Angle in degrees
	 * xradFrom: Angle in radians - the start of the interval where the function value is given
	 * xradTo: Angle in radians - the end of the interval where the function value is given
	 * sin: The sine function value
	 * cos: The cosine function value
	 * tan: The tangent function value
	 * ctan: The cotangent function value
	 * sec: The secant function value
	 * csc: The cosecant function value
	 */

	/**
	 * Main constructor
	 * @param factor  The angle provided as a factor of PI
	 * @param sin     The sine function value
	 * @param cos     The cosine function value
	 * @param tan     The tangent function value
	 * @param ctan    The cotangent function value
	 * @param sec     The secant function value
	 * @param csc     The cosecant function value
	 */
	API_VISIBLE SpecialValueTrigonometric::SpecialValueTrigonometric(double factor, double sin, double cos, double tan, double ctan,
	                                                     double sec, double csc) {
		this->factor = factor;
		this->xrad = factor * MathConstants::PI;
		this->xdeg = MathFunctions::round(factor * 180.0, 0);
		this->sin = sin;
		this->cos = cos;
		this->tan = tan;
		this->ctan = ctan;
		this->sec = sec;
		this->csc = csc;
		xradFrom = xrad - EPSILON;
		xradTo = xrad + EPSILON;

		/*
		 * Adding values to the special values lists of inverse trigonometric functions
		 */
		if ((-MathConstants::PIBY2 - EPSILON <= xrad) && (xrad <= MathConstants::PIBY2 + EPSILON)) {
			if (valuesListAsin == nullptr) valuesListAsin = new_List<SpecialValuePtr>();
			if (valuesListAtan == nullptr) valuesListAtan = new_List<SpecialValuePtr>();
			if (valuesListAcsc == nullptr) valuesListAcsc = new_List<SpecialValuePtr>();
			valuesListAsin->add(new_SpecialValue(sin, xrad, xdeg));
			valuesListAtan->add(new_SpecialValue(tan, xrad, xdeg));
			valuesListAcsc->add(new_SpecialValue(csc, xrad, xdeg));
		}


		/*
		 * Adding values to the special values lists of inverse trigonometric functions
		 */
		if ((-EPSILON <= xrad) && (xrad <= MathConstants::PI + EPSILON)) {
			if (valuesListAcos == nullptr) valuesListAcos = new_List<SpecialValuePtr>();
			if (valuesListActan == nullptr) valuesListActan = new_List<SpecialValuePtr>();
			if (valuesListAsec == nullptr) valuesListAsec = new_List<SpecialValuePtr>();
			valuesListAcos->add(new_SpecialValue(cos, xrad, xdeg));
			valuesListActan->add(new_SpecialValue(ctan, xrad, xdeg));
			valuesListAsec->add(new_SpecialValue(sec, xrad, xdeg));
		}
	}

	/**
	 * Returns special values of trigonometric functions
	 *
	 * @param xrad   The angle provided in radians
	 * @return       Returns special values of trigonometric functions object if the special value was found for a given x
	 * otherwise returns null
	 */
	API_VISIBLE SpecialValueTrigonometricPtr SpecialValueTrigonometric::getSpecialValueTrigonometric(double xrad) {
		if (SpecialValue::specialCasesDisabled) return nullptr;
		if (Double::isNaN(xrad)) return nullptr;
		if (Double::isInfinite(xrad)) return nullptr;
		for (SpecialValueTrigonometricPtr& sv : valuesListTrig) {
			if ((sv->xradFrom <= xrad) && (xrad <= sv->xradTo)) return sv;
		}
		return nullptr;
	}

	/**
	 * Returns special value of inverse trigonometric sine function
	 * @param x    The sine value
	 * @return     Returns special value object if special value was found,
	 * otherwise returns null.
	 */
	API_VISIBLE SpecialValuePtr SpecialValueTrigonometric::getSpecialValueAsin(double x) {
		return getSpecialValue(x, valuesListAsin);
	}

	/**
	 * Returns special value of inverse trigonometric cosine function
	 * @param x    The cosine value
	 * @return     Returns special value object if special value was found,
	 * otherwise returns null.
	 */
	API_VISIBLE SpecialValuePtr SpecialValueTrigonometric::getSpecialValueAcos(double x) {
		return getSpecialValue(x, valuesListAcos);
	}

	/**
	 * Returns special value of inverse trigonometric tangent function
	 * @param x    The tangent value
	 * @return     Returns special value object if special value was found,
	 * otherwise returns null.
	 */
	API_VISIBLE SpecialValuePtr SpecialValueTrigonometric::getSpecialValueAtan(double x) {
		return getSpecialValue(x, valuesListAtan);
	}

	/**
	 * Returns special value of inverse trigonometric cotangent function
	 * @param x    The cotangent value
	 * @return     Returns special value object if special value was found,
	 * otherwise returns null.
	 */
	API_VISIBLE SpecialValuePtr SpecialValueTrigonometric::getSpecialValueActan(double x) {
		return getSpecialValue(x, valuesListActan);
	}

	/**
	 * Returns special value of inverse trigonometric secant function
	 * @param x    The secant value
	 * @return     Returns special value object if special value was found,
	 * otherwise returns null.
	 */
	API_VISIBLE SpecialValuePtr SpecialValueTrigonometric::getSpecialValueAsec(double x) {
		return getSpecialValue(x, valuesListAsec);
	}

	/**
	 * Returns special value of inverse trigonometric cosecant function
	 * @param x    The cosecant value
	 * @return     Returns special value object if special value was found,
	 * otherwise returns null.
	 */
	API_VISIBLE SpecialValuePtr SpecialValueTrigonometric::getSpecialValueAcsc(double x) {
		return getSpecialValue(x, valuesListAcsc);
	}

	/**
	 * Returns special value of inverse trigonometric function
	 * @param x              The trigonometric function value value
	 * @param valuesList     List of special values of a given trigonometric function
	 * @return               Returns special value object if special value was found,
	 * otherwise returns null.
	 */
	SpecialValuePtr SpecialValueTrigonometric::getSpecialValue(double x, const ListPtr<SpecialValuePtr> &valuesList) {
		if (SpecialValue::specialCasesDisabled) return nullptr;
		if (Double::isNaN(x)) return nullptr;
		if (Double::isInfinite(x)) return nullptr;
		for (SpecialValuePtr& sv : *valuesList) {
			if ((sv->xFrom <= x) && (x <= sv->xTo)) return sv;
		}
		return nullptr;
	}

} // org::mariuszgromada::math::mxparser::mathcollection
