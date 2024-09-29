/*
 * @(#)Unit.cpp        6.1.0    2024-09-08
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

#include "org/mariuszgromada/math/mxparser/parsertokens/Unit.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {
	API_VISIBLE StringPtr Unit::TYPE_DESC = nullptr;

	/*
	 * Unit - tokens key words.
	 */
	/* Ratio, Fraction */
	API_VISIBLE StringPtr Unit::PERC_STR = nullptr;
	API_VISIBLE StringPtr Unit::PERM_STR = nullptr;
	/* Metric prefixes */
	API_VISIBLE StringPtr Unit::YOTTA_STR = nullptr;
	API_VISIBLE StringPtr Unit::YOTTA_SEPT_STR = nullptr;
	API_VISIBLE StringPtr Unit::ZETTA_STR = nullptr;
	API_VISIBLE StringPtr Unit::ZETTA_SEXT_STR = nullptr;
	API_VISIBLE StringPtr Unit::EXA_STR = nullptr;
	API_VISIBLE StringPtr Unit::EXA_QUINT_STR = nullptr;
	API_VISIBLE StringPtr Unit::PETA_STR = nullptr;
	API_VISIBLE StringPtr Unit::PETA_QUAD_STR = nullptr;
	API_VISIBLE StringPtr Unit::TERA_STR = nullptr;
	API_VISIBLE StringPtr Unit::TERA_TRIL_STR = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_STR = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_BIL_STR = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_STR = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_MIL_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILO_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILO_TH_STR = nullptr;
	API_VISIBLE StringPtr Unit::HECTO_STR = nullptr;
	API_VISIBLE StringPtr Unit::HECTO_HUND_STR = nullptr;
	API_VISIBLE StringPtr Unit::DECA_STR = nullptr;
	API_VISIBLE StringPtr Unit::DECA_TEN_STR = nullptr;
	API_VISIBLE StringPtr Unit::DECI_STR = nullptr;
	API_VISIBLE StringPtr Unit::CENTI_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILLI_STR = nullptr;
	API_VISIBLE StringPtr Unit::MICRO_STR = nullptr;
	API_VISIBLE StringPtr Unit::NANO_STR = nullptr;
	API_VISIBLE StringPtr Unit::PICO_STR = nullptr;
	API_VISIBLE StringPtr Unit::FEMTO_STR = nullptr;
	API_VISIBLE StringPtr Unit::ATTO_STR = nullptr;
	API_VISIBLE StringPtr Unit::ZEPTO_STR = nullptr;
	API_VISIBLE StringPtr Unit::YOCTO_STR = nullptr;
	/* Units of length / distance */
	API_VISIBLE StringPtr Unit::METRE_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_STR = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE_STR = nullptr;
	API_VISIBLE StringPtr Unit::INCH_STR = nullptr;
	API_VISIBLE StringPtr Unit::YARD_STR = nullptr;
	API_VISIBLE StringPtr Unit::FEET_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILE_STR = nullptr;
	API_VISIBLE StringPtr Unit::NAUTICAL_MILE_STR = nullptr;
	/* Units of area */
	API_VISIBLE StringPtr Unit::METRE2_STR = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE2_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE2_STR = nullptr;
	API_VISIBLE StringPtr Unit::ARE_STR = nullptr;
	API_VISIBLE StringPtr Unit::HECTARE_STR = nullptr;
	API_VISIBLE StringPtr Unit::ACRE_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE2_STR = nullptr;
	/* Units of volume */
	API_VISIBLE StringPtr Unit::MILLIMETRE3_STR = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE3_STR = nullptr;
	API_VISIBLE StringPtr Unit::METRE3_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE3_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILLILITRE_STR = nullptr;
	API_VISIBLE StringPtr Unit::LITRE_STR = nullptr;
	API_VISIBLE StringPtr Unit::GALLON_STR = nullptr;
	API_VISIBLE StringPtr Unit::PINT_STR = nullptr;
	/* Units of time */
	API_VISIBLE StringPtr Unit::SECOND_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILLISECOND_STR = nullptr;
	API_VISIBLE StringPtr Unit::MINUTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::HOUR_STR = nullptr;
	API_VISIBLE StringPtr Unit::DAY_STR = nullptr;
	API_VISIBLE StringPtr Unit::WEEK_STR = nullptr;
	API_VISIBLE StringPtr Unit::JULIAN_YEAR_STR = nullptr;
	/* Units of mass */
	API_VISIBLE StringPtr Unit::KILOGRAM_STR = nullptr;
	API_VISIBLE StringPtr Unit::GRAM_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILLIGRAM_STR = nullptr;
	API_VISIBLE StringPtr Unit::DECAGRAM_STR = nullptr;
	API_VISIBLE StringPtr Unit::TONNE_STR = nullptr;
	API_VISIBLE StringPtr Unit::OUNCE_STR = nullptr;
	API_VISIBLE StringPtr Unit::POUND_STR = nullptr;
	/* Units of information */
	API_VISIBLE StringPtr Unit::BIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILOBIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::MEGABIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::GIGABIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::TERABIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::PETABIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::EXABIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::ZETTABIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::YOTTABIT_STR = nullptr;
	API_VISIBLE StringPtr Unit::BYTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILOBYTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::MEGABYTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::GIGABYTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::TERABYTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::PETABYTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::EXABYTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::ZETTABYTE_STR = nullptr;
	API_VISIBLE StringPtr Unit::YOTTABYTE_STR = nullptr;
	/* Units of energy */
	API_VISIBLE StringPtr Unit::JOULE_STR = nullptr;
	API_VISIBLE StringPtr Unit::ELECTRONO_VOLT_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILO_ELECTRONO_VOLT_STR = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_ELECTRONO_VOLT_STR = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_ELECTRONO_VOLT_STR = nullptr;
	API_VISIBLE StringPtr Unit::TERA_ELECTRONO_VOLT_STR = nullptr;
	/* Units of speed */
	API_VISIBLE StringPtr Unit::METRE_PER_SECOND_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_PER_HOUR_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILE_PER_HOUR_STR = nullptr;
	API_VISIBLE StringPtr Unit::KNOT_STR = nullptr;
	/* Units of acceleration */
	API_VISIBLE StringPtr Unit::METRE_PER_SECOND2_STR = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_PER_HOUR2_STR = nullptr;
	API_VISIBLE StringPtr Unit::MILE_PER_HOUR2_STR = nullptr;
	/* Units of angle */
	API_VISIBLE StringPtr Unit::RADIAN_ARC_STR = nullptr;
	API_VISIBLE StringPtr Unit::DEGREE_ARC_STR = nullptr;
	API_VISIBLE StringPtr Unit::MINUTE_ARC_STR = nullptr;
	API_VISIBLE StringPtr Unit::SECOND_ARC_STR = nullptr;
	/*
	 * Unit - syntax.
	 */
	/* Ratio, Fraction */
	API_VISIBLE StringPtr Unit::PERC_SYN = nullptr;
	API_VISIBLE StringPtr Unit::PERM_SYN = nullptr;
	/* Metric prefixes */
	API_VISIBLE StringPtr Unit::YOTTA_SYN = nullptr;
	API_VISIBLE StringPtr Unit::YOTTA_SEPT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ZETTA_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ZETTA_SEXT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::EXA_SYN = nullptr;
	API_VISIBLE StringPtr Unit::EXA_QUINT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::PETA_SYN = nullptr;
	API_VISIBLE StringPtr Unit::PETA_QUAD_SYN = nullptr;
	API_VISIBLE StringPtr Unit::TERA_SYN = nullptr;
	API_VISIBLE StringPtr Unit::TERA_TRIL_SYN = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_SYN = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_BIL_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_MIL_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILO_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILO_TH_SYN = nullptr;
	API_VISIBLE StringPtr Unit::HECTO_SYN = nullptr;
	API_VISIBLE StringPtr Unit::HECTO_HUND_SYN = nullptr;
	API_VISIBLE StringPtr Unit::DECA_SYN = nullptr;
	API_VISIBLE StringPtr Unit::DECA_TEN_SYN = nullptr;
	API_VISIBLE StringPtr Unit::DECI_SYN = nullptr;
	API_VISIBLE StringPtr Unit::CENTI_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILLI_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MICRO_SYN = nullptr;
	API_VISIBLE StringPtr Unit::NANO_SYN = nullptr;
	API_VISIBLE StringPtr Unit::PICO_SYN = nullptr;
	API_VISIBLE StringPtr Unit::FEMTO_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ATTO_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ZEPTO_SYN = nullptr;
	API_VISIBLE StringPtr Unit::YOCTO_SYN = nullptr;
	/* Units of length / distance */
	API_VISIBLE StringPtr Unit::METRE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::INCH_SYN = nullptr;
	API_VISIBLE StringPtr Unit::YARD_SYN = nullptr;
	API_VISIBLE StringPtr Unit::FEET_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::NAUTICAL_MILE_SYN = nullptr;
	/* Units of area */
	API_VISIBLE StringPtr Unit::METRE2_SYN = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE2_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE2_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ARE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::HECTARE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ACRE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE2_SYN = nullptr;
	/* Units of volume */
	API_VISIBLE StringPtr Unit::MILLIMETRE3_SYN = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE3_SYN = nullptr;
	API_VISIBLE StringPtr Unit::METRE3_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE3_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILLILITRE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::LITRE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::GALLON_SYN = nullptr;
	API_VISIBLE StringPtr Unit::PINT_SYN = nullptr;
	/* Units of time */
	API_VISIBLE StringPtr Unit::SECOND_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILLISECOND_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MINUTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::HOUR_SYN = nullptr;
	API_VISIBLE StringPtr Unit::DAY_SYN = nullptr;
	API_VISIBLE StringPtr Unit::WEEK_SYN = nullptr;
	API_VISIBLE StringPtr Unit::JULIAN_YEAR_SYN = nullptr;
	/* Units of mass */
	API_VISIBLE StringPtr Unit::KILOGRAM_SYN = nullptr;
	API_VISIBLE StringPtr Unit::GRAM_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILLIGRAM_SYN = nullptr;
	API_VISIBLE StringPtr Unit::DECAGRAM_SYN = nullptr;
	API_VISIBLE StringPtr Unit::TONNE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::OUNCE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::POUND_SYN = nullptr;
	/* Units of information */
	API_VISIBLE StringPtr Unit::BIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILOBIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MEGABIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::GIGABIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::TERABIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::PETABIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::EXABIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ZETTABIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::YOTTABIT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::BYTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILOBYTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MEGABYTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::GIGABYTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::TERABYTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::PETABYTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::EXABYTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ZETTABYTE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::YOTTABYTE_SYN = nullptr;
	/* Units of energy */
	API_VISIBLE StringPtr Unit::JOULE_SYN = nullptr;
	API_VISIBLE StringPtr Unit::ELECTRONO_VOLT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILO_ELECTRONO_VOLT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_ELECTRONO_VOLT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_ELECTRONO_VOLT_SYN = nullptr;
	API_VISIBLE StringPtr Unit::TERA_ELECTRONO_VOLT_SYN = nullptr;
	/* Units of speed */
	API_VISIBLE StringPtr Unit::METRE_PER_SECOND_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_PER_HOUR_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILE_PER_HOUR_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KNOT_SYN = nullptr;
	/* Units of acceleration */
	API_VISIBLE StringPtr Unit::METRE_PER_SECOND2_SYN = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_PER_HOUR2_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MILE_PER_HOUR2_SYN = nullptr;
	/* Units of angle */
	API_VISIBLE StringPtr Unit::RADIAN_ARC_SYN = nullptr;
	API_VISIBLE StringPtr Unit::DEGREE_ARC_SYN = nullptr;
	API_VISIBLE StringPtr Unit::MINUTE_ARC_SYN = nullptr;
	API_VISIBLE StringPtr Unit::SECOND_ARC_SYN = nullptr;

	/*
	 * Unit - tokens description.
	 */
	API_VISIBLE StringPtr Unit::PERC_DESC = nullptr;
	API_VISIBLE StringPtr Unit::PERM_DESC = nullptr;
	API_VISIBLE StringPtr Unit::YOTTA_DESC = nullptr;
	API_VISIBLE StringPtr Unit::ZETTA_DESC = nullptr;
	API_VISIBLE StringPtr Unit::EXA_DESC = nullptr;
	API_VISIBLE StringPtr Unit::PETA_DESC = nullptr;
	API_VISIBLE StringPtr Unit::TERA_DESC = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::HECTO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::DECA_DESC = nullptr;
	API_VISIBLE StringPtr Unit::DECI_DESC = nullptr;
	API_VISIBLE StringPtr Unit::CENTI_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILLI_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MICRO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::NANO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::PICO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::FEMTO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::ATTO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::ZEPTO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::YOCTO_DESC = nullptr;
	API_VISIBLE StringPtr Unit::METRE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::INCH_DESC = nullptr;
	API_VISIBLE StringPtr Unit::YARD_DESC = nullptr;
	API_VISIBLE StringPtr Unit::FEET_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::NAUTICAL_MILE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::METRE2_DESC = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE2_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE2_DESC = nullptr;
	API_VISIBLE StringPtr Unit::ARE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::HECTARE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::ACRE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE2_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE3_DESC = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE3_DESC = nullptr;
	API_VISIBLE StringPtr Unit::METRE3_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE3_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILLILITRE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::LITRE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::GALLON_DESC = nullptr;
	API_VISIBLE StringPtr Unit::PINT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::SECOND_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILLISECOND_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MINUTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::HOUR_DESC = nullptr;
	API_VISIBLE StringPtr Unit::DAY_DESC = nullptr;
	API_VISIBLE StringPtr Unit::WEEK_DESC = nullptr;
	API_VISIBLE StringPtr Unit::JULIAN_YEAR_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILOGRAM_DESC = nullptr;
	API_VISIBLE StringPtr Unit::GRAM_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILLIGRAM_DESC = nullptr;
	API_VISIBLE StringPtr Unit::DECAGRAM_DESC = nullptr;
	API_VISIBLE StringPtr Unit::TONNE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::OUNCE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::POUND_DESC = nullptr;
	API_VISIBLE StringPtr Unit::BIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILOBIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MEGABIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::GIGABIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::TERABIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::PETABIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::EXABIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::ZETTABIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::YOTTABIT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::BYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILOBYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MEGABYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::GIGABYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::TERABYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::PETABYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::EXABYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::ZETTABYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::YOTTABYTE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::JOULE_DESC = nullptr;
	API_VISIBLE StringPtr Unit::ELECTRONO_VOLT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILO_ELECTRONO_VOLT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_ELECTRONO_VOLT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_ELECTRONO_VOLT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::TERA_ELECTRONO_VOLT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::METRE_PER_SECOND_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_PER_HOUR_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILE_PER_HOUR_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KNOT_DESC = nullptr;
	API_VISIBLE StringPtr Unit::METRE_PER_SECOND2_DESC = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_PER_HOUR2_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MILE_PER_HOUR2_DESC = nullptr;
	API_VISIBLE StringPtr Unit::RADIAN_ARC_DESC = nullptr;
	API_VISIBLE StringPtr Unit::DEGREE_ARC_DESC = nullptr;
	API_VISIBLE StringPtr Unit::MINUTE_ARC_DESC = nullptr;
	API_VISIBLE StringPtr Unit::SECOND_ARC_DESC = nullptr;
	/*
	 * Unit - since.
	 */
	/* Ratio, Fraction */
	API_VISIBLE StringPtr Unit::PERC_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::PERM_SINCE = nullptr;
	/* Metric prefixes */
	API_VISIBLE StringPtr Unit::YOTTA_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::ZETTA_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::EXA_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::PETA_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::TERA_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILO_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::HECTO_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::DECA_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::DECI_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::CENTI_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILLI_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MICRO_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::NANO_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::PICO_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::FEMTO_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::ATTO_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::ZEPTO_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::YOCTO_SINCE = nullptr;
	/* Units of length / distance */
	API_VISIBLE StringPtr Unit::METRE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::INCH_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::YARD_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::FEET_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::NAUTICAL_MILE_SINCE = nullptr;
	/* Units of area */
	API_VISIBLE StringPtr Unit::METRE2_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE2_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILLIMETRE2_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::ARE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::HECTARE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::ACRE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE2_SINCE = nullptr;
	/* Units of volume */
	API_VISIBLE StringPtr Unit::MILLIMETRE3_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::CENTIMETRE3_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::METRE3_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE3_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILLILITRE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::LITRE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::GALLON_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::PINT_SINCE = nullptr;
	/* Units of time */
	API_VISIBLE StringPtr Unit::SECOND_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILLISECOND_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MINUTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::HOUR_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::DAY_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::WEEK_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::JULIAN_YEAR_SINCE = nullptr;
	/* Units of mass */
	API_VISIBLE StringPtr Unit::KILOGRAM_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::GRAM_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILLIGRAM_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::DECAGRAM_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::TONNE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::OUNCE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::POUND_SINCE = nullptr;
	/* Units of information */
	API_VISIBLE StringPtr Unit::BIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILOBIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MEGABIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::GIGABIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::TERABIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::PETABIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::EXABIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::ZETTABIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::YOTTABIT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::BYTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILOBYTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MEGABYTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::GIGABYTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::TERABYTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::PETABYTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::EXABYTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::ZETTABYTE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::YOTTABYTE_SINCE = nullptr;
	/* Units of energy */
	API_VISIBLE StringPtr Unit::JOULE_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::ELECTRONO_VOLT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILO_ELECTRONO_VOLT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MEGA_ELECTRONO_VOLT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::GIGA_ELECTRONO_VOLT_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::TERA_ELECTRONO_VOLT_SINCE = nullptr;
	/* Units of speed */
	API_VISIBLE StringPtr Unit::METRE_PER_SECOND_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_PER_HOUR_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILE_PER_HOUR_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KNOT_SINCE = nullptr;
	/* Units of acceleration */
	API_VISIBLE StringPtr Unit::METRE_PER_SECOND2_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::KILOMETRE_PER_HOUR2_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MILE_PER_HOUR2_SINCE = nullptr;
	/* Units of angle */
	API_VISIBLE StringPtr Unit::RADIAN_ARC_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::DEGREE_ARC_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::MINUTE_ARC_SINCE = nullptr;
	API_VISIBLE StringPtr Unit::SECOND_ARC_SINCE = nullptr;

	STATIC_VARS_INITI_CPP(Unit,

		STATIC_VARS_INITI_DEPENDENCY(mXparser);
		STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);

		INIT_WITH_NA(TYPE_DESC);

		/*
		 * Unit - tokens key words.
		 */
		/* Ratio, Fraction */
		PERC_STR = S(UTF("[%]"));
		PERM_STR = S(UTF("[%%]"));
		/* Metric prefixes */
		YOTTA_STR = S(UTF("[Y]"));
		YOTTA_SEPT_STR = S(UTF("[sept]"));
		ZETTA_STR = S(UTF("[Z]"));
		ZETTA_SEXT_STR = S(UTF("[sext]"));
		EXA_STR = S(UTF("[E]"));
		EXA_QUINT_STR = S(UTF("[quint]"));
		PETA_STR = S(UTF("[P]"));
		PETA_QUAD_STR = S(UTF("[quad]"));
		TERA_STR = S(UTF("[T]"));
		TERA_TRIL_STR = S(UTF("[tril]"));
		GIGA_STR = S(UTF("[G]"));
		GIGA_BIL_STR = S(UTF("[bil]"));
		MEGA_STR = S(UTF("[M]"));
		MEGA_MIL_STR = S(UTF("[mil]"));
		KILO_STR = S(UTF("[k]"));
		KILO_TH_STR = S(UTF("[th]"));
		HECTO_STR = S(UTF("[hecto]"));
		HECTO_HUND_STR = S(UTF("[hund]"));
		DECA_STR = S(UTF("[deca]"));
		DECA_TEN_STR = S(UTF("[ten]"));
		DECI_STR = S(UTF("[deci]"));
		CENTI_STR = S(UTF("[centi]"));
		MILLI_STR = S(UTF("[milli]"));
		MICRO_STR = S(UTF("[mic]"));
		NANO_STR = S(UTF("[n]"));
		PICO_STR = S(UTF("[p]"));
		FEMTO_STR = S(UTF("[f]"));
		ATTO_STR = S(UTF("[a]"));
		ZEPTO_STR = S(UTF("[z]"));
		YOCTO_STR = S(UTF("[y]"));
		/* Units of length / distance */
		METRE_STR = S(UTF("[m]"));
		KILOMETRE_STR = S(UTF("[km]"));
		CENTIMETRE_STR = S(UTF("[cm]"));
		MILLIMETRE_STR = S(UTF("[mm]"));
		INCH_STR = S(UTF("[inch]"));
		YARD_STR = S(UTF("[yd]"));
		FEET_STR = S(UTF("[ft]"));
		MILE_STR = S(UTF("[mile]"));
		NAUTICAL_MILE_STR = S(UTF("[nmi]"));
		/* Units of area */
		METRE2_STR = S(UTF("[m2]"));
		CENTIMETRE2_STR = S(UTF("[cm2]"));
		MILLIMETRE2_STR = S(UTF("[mm2]"));
		ARE_STR = S(UTF("[are]"));
		HECTARE_STR = S(UTF("[ha]"));
		ACRE_STR = S(UTF("[acre]"));
		KILOMETRE2_STR = S(UTF("[km2]"));
		/* Units of volume */
		MILLIMETRE3_STR = S(UTF("[mm3]"));
		CENTIMETRE3_STR = S(UTF("[cm3]"));
		METRE3_STR = S(UTF("[m3]"));
		KILOMETRE3_STR = S(UTF("[km3]"));
		MILLILITRE_STR = S(UTF("[ml]"));
		LITRE_STR = S(UTF("[l]"));
		GALLON_STR = S(UTF("[gall]"));
		PINT_STR = S(UTF("[pint]"));
		/* Units of time */
		SECOND_STR = S(UTF("[s]"));
		MILLISECOND_STR = S(UTF("[ms]"));
		MINUTE_STR = S(UTF("[min]"));
		HOUR_STR = S(UTF("[h]"));
		DAY_STR = S(UTF("[day]"));
		WEEK_STR = S(UTF("[week]"));
		JULIAN_YEAR_STR = S(UTF("[yearj]"));
		/* Units of mass */
		KILOGRAM_STR = S(UTF("[kg]"));
		GRAM_STR = S(UTF("[gr]"));
		MILLIGRAM_STR = S(UTF("[mg]"));
		DECAGRAM_STR = S(UTF("[dag]"));
		TONNE_STR = S(UTF("[t]"));
		OUNCE_STR = S(UTF("[oz]"));
		POUND_STR = S(UTF("[lb]"));
		/* Units of information */
		BIT_STR = S(UTF("[b]"));
		KILOBIT_STR = S(UTF("[kb]"));
		MEGABIT_STR = S(UTF("[Mb]"));
		GIGABIT_STR = S(UTF("[Gb]"));
		TERABIT_STR = S(UTF("[Tb]"));
		PETABIT_STR = S(UTF("[Pb]"));
		EXABIT_STR = S(UTF("[Eb]"));
		ZETTABIT_STR = S(UTF("[Zb]"));
		YOTTABIT_STR = S(UTF("[Yb]"));
		BYTE_STR = S(UTF("[B]"));
		KILOBYTE_STR = S(UTF("[kB]"));
		MEGABYTE_STR = S(UTF("[MB]"));
		GIGABYTE_STR = S(UTF("[GB]"));
		TERABYTE_STR = S(UTF("[TB]"));
		PETABYTE_STR = S(UTF("[PB]"));
		EXABYTE_STR = S(UTF("[EB]"));
		ZETTABYTE_STR = S(UTF("[ZB]"));
		YOTTABYTE_STR = S(UTF("[YB]"));
		/* Units of energy */
		JOULE_STR = S(UTF("[J]"));
		ELECTRONO_VOLT_STR = S(UTF("[eV]"));
		KILO_ELECTRONO_VOLT_STR = S(UTF("[keV]"));
		MEGA_ELECTRONO_VOLT_STR = S(UTF("[MeV]"));
		GIGA_ELECTRONO_VOLT_STR = S(UTF("[GeV]"));
		TERA_ELECTRONO_VOLT_STR = S(UTF("[TeV]"));
		/* Units of speed */
		METRE_PER_SECOND_STR = S(UTF("[m/s]"));
		KILOMETRE_PER_HOUR_STR = S(UTF("[km/h]"));
		MILE_PER_HOUR_STR = S(UTF("[mi/h]"));
		KNOT_STR = S(UTF("[knot]"));
		/* Units of acceleration */
		METRE_PER_SECOND2_STR = S(UTF("[m/s2]"));
		KILOMETRE_PER_HOUR2_STR = S(UTF("[km/h2]"));
		MILE_PER_HOUR2_STR = S(UTF("[mi/h2]"));
		/* Units of angle */
		RADIAN_ARC_STR = S(UTF("[rad]"));
		DEGREE_ARC_STR = S(UTF("[deg]"));
		MINUTE_ARC_STR = S(UTF("[']"));
		SECOND_ARC_STR = S(UTF("['']"));

		/*
		 * Unit - syntax.
		 */
		/* Ratio, Fraction */
		PERC_SYN = PERC_STR;
		PERM_SYN = PERM_STR;
		/* Metric prefixes */
		YOTTA_SYN = YOTTA_STR;
		YOTTA_SEPT_SYN = YOTTA_SEPT_STR;
		ZETTA_SYN = ZETTA_STR;
		ZETTA_SEXT_SYN = ZETTA_SEXT_STR;
		EXA_SYN = EXA_STR;
		EXA_QUINT_SYN = EXA_QUINT_STR;
		PETA_SYN = PETA_STR;
		PETA_QUAD_SYN = PETA_QUAD_STR;
		TERA_SYN = TERA_STR;
		TERA_TRIL_SYN = TERA_TRIL_STR;
		GIGA_SYN = GIGA_STR;
		GIGA_BIL_SYN = GIGA_BIL_STR;
		MEGA_SYN = MEGA_STR;
		MEGA_MIL_SYN = MEGA_MIL_STR;
		KILO_SYN = KILO_STR;
		KILO_TH_SYN = KILO_TH_STR;
		HECTO_SYN = HECTO_STR;
		HECTO_HUND_SYN = HECTO_HUND_STR;
		DECA_SYN = DECA_STR;
		DECA_TEN_SYN = DECA_TEN_STR;
		DECI_SYN = DECI_STR;
		CENTI_SYN = CENTI_STR;
		MILLI_SYN = MILLI_STR;
		MICRO_SYN = MICRO_STR;
		NANO_SYN = NANO_STR;
		PICO_SYN = PICO_STR;
		FEMTO_SYN = FEMTO_STR;
		ATTO_SYN = ATTO_STR;
		ZEPTO_SYN = ZEPTO_STR;
		YOCTO_SYN = YOCTO_STR;
		/* Units of length / distance */
		METRE_SYN = METRE_STR;
		KILOMETRE_SYN = KILOMETRE_STR;
		CENTIMETRE_SYN = CENTIMETRE_STR;
		MILLIMETRE_SYN = MILLIMETRE_STR;
		INCH_SYN = INCH_STR;
		YARD_SYN = YARD_STR;
		FEET_SYN = FEET_STR;
		MILE_SYN = MILE_STR;
		NAUTICAL_MILE_SYN = NAUTICAL_MILE_STR;
		/* Units of area */
		METRE2_SYN = METRE2_STR;
		CENTIMETRE2_SYN = CENTIMETRE2_STR;
		MILLIMETRE2_SYN = MILLIMETRE2_STR;
		ARE_SYN = ARE_STR;
		HECTARE_SYN = HECTARE_STR;
		ACRE_SYN = ACRE_STR;
		KILOMETRE2_SYN = KILOMETRE2_STR;
		/* Units of volume */
		MILLIMETRE3_SYN = MILLIMETRE3_STR;
		CENTIMETRE3_SYN = CENTIMETRE3_STR;
		METRE3_SYN = METRE3_STR;
		KILOMETRE3_SYN = KILOMETRE3_STR;
		MILLILITRE_SYN = MILLILITRE_STR;
		LITRE_SYN = LITRE_STR;
		GALLON_SYN = GALLON_STR;
		PINT_SYN = PINT_STR;
		/* Units of time */
		SECOND_SYN = SECOND_STR;
		MILLISECOND_SYN = MILLISECOND_STR;
		MINUTE_SYN = MINUTE_STR;
		HOUR_SYN = HOUR_STR;
		DAY_SYN = DAY_STR;
		WEEK_SYN = WEEK_STR;
		JULIAN_YEAR_SYN = JULIAN_YEAR_STR;
		/* Units of mass */
		KILOGRAM_SYN = KILOGRAM_STR;
		GRAM_SYN = GRAM_STR;
		MILLIGRAM_SYN = MILLIGRAM_STR;
		DECAGRAM_SYN = DECAGRAM_STR;
		TONNE_SYN = TONNE_STR;
		OUNCE_SYN = OUNCE_STR;
		POUND_SYN = POUND_STR;
		/* Units of information */
		BIT_SYN = BIT_STR;
		KILOBIT_SYN = KILOBIT_STR;
		MEGABIT_SYN = MEGABIT_STR;
		GIGABIT_SYN = GIGABIT_STR;
		TERABIT_SYN = TERABIT_STR;
		PETABIT_SYN = PETABIT_STR;
		EXABIT_SYN = EXABIT_STR;
		ZETTABIT_SYN = ZETTABIT_STR;
		YOTTABIT_SYN = YOTTABIT_STR;
		BYTE_SYN = BYTE_STR;
		KILOBYTE_SYN = KILOBYTE_STR;
		MEGABYTE_SYN = MEGABYTE_STR;
		GIGABYTE_SYN = GIGABYTE_STR;
		TERABYTE_SYN = TERABYTE_STR;
		PETABYTE_SYN = PETABYTE_STR;
		EXABYTE_SYN = EXABYTE_STR;
		ZETTABYTE_SYN = ZETTABYTE_STR;
		YOTTABYTE_SYN = YOTTABYTE_STR;
		/* Units of energy */
		JOULE_SYN = JOULE_STR;
		ELECTRONO_VOLT_SYN = ELECTRONO_VOLT_STR;
		KILO_ELECTRONO_VOLT_SYN = KILO_ELECTRONO_VOLT_STR;
		MEGA_ELECTRONO_VOLT_SYN = MEGA_ELECTRONO_VOLT_STR;
		GIGA_ELECTRONO_VOLT_SYN = GIGA_ELECTRONO_VOLT_STR;
		TERA_ELECTRONO_VOLT_SYN = TERA_ELECTRONO_VOLT_STR;
		/* Units of speed */
		METRE_PER_SECOND_SYN = METRE_PER_SECOND_STR;
		KILOMETRE_PER_HOUR_SYN = KILOMETRE_PER_HOUR_STR;
		MILE_PER_HOUR_SYN = MILE_PER_HOUR_STR;
		KNOT_SYN = KNOT_STR;
		/* Units of acceleration */
		METRE_PER_SECOND2_SYN = METRE_PER_SECOND2_STR;
		KILOMETRE_PER_HOUR2_SYN = KILOMETRE_PER_HOUR2_STR;
		MILE_PER_HOUR2_SYN = MILE_PER_HOUR2_STR;
		/* Units of angle */
		RADIAN_ARC_SYN = RADIAN_ARC_STR;
		DEGREE_ARC_SYN = DEGREE_ARC_STR;
		MINUTE_ARC_SYN = MINUTE_ARC_STR;
		SECOND_ARC_SYN = SECOND_ARC_STR;

		/*
		 * Unit - tokens description.
		 */
		INIT_WITH_NA(PERC_DESC);
		INIT_WITH_NA(PERM_DESC);
		INIT_WITH_NA(YOTTA_DESC);
		INIT_WITH_NA(ZETTA_DESC);
		INIT_WITH_NA(EXA_DESC);
		INIT_WITH_NA(PETA_DESC);
		INIT_WITH_NA(TERA_DESC);
		INIT_WITH_NA(GIGA_DESC);
		INIT_WITH_NA(MEGA_DESC);
		INIT_WITH_NA(KILO_DESC);
		INIT_WITH_NA(HECTO_DESC);
		INIT_WITH_NA(DECA_DESC);
		INIT_WITH_NA(DECI_DESC);
		INIT_WITH_NA(CENTI_DESC);
		INIT_WITH_NA(MILLI_DESC);
		INIT_WITH_NA(MICRO_DESC);
		INIT_WITH_NA(NANO_DESC);
		INIT_WITH_NA(PICO_DESC);
		INIT_WITH_NA(FEMTO_DESC);
		INIT_WITH_NA(ATTO_DESC);
		INIT_WITH_NA(ZEPTO_DESC);
		INIT_WITH_NA(YOCTO_DESC);
		INIT_WITH_NA(METRE_DESC);
		INIT_WITH_NA(KILOMETRE_DESC);
		INIT_WITH_NA(CENTIMETRE_DESC);
		INIT_WITH_NA(MILLIMETRE_DESC);
		INIT_WITH_NA(INCH_DESC);
		INIT_WITH_NA(YARD_DESC);
		INIT_WITH_NA(FEET_DESC);
		INIT_WITH_NA(MILE_DESC);
		INIT_WITH_NA(NAUTICAL_MILE_DESC);
		INIT_WITH_NA(METRE2_DESC);
		INIT_WITH_NA(CENTIMETRE2_DESC);
		INIT_WITH_NA(MILLIMETRE2_DESC);
		INIT_WITH_NA(ARE_DESC);
		INIT_WITH_NA(HECTARE_DESC);
		INIT_WITH_NA(ACRE_DESC);
		INIT_WITH_NA(KILOMETRE2_DESC);
		INIT_WITH_NA(MILLIMETRE3_DESC);
		INIT_WITH_NA(CENTIMETRE3_DESC);
		INIT_WITH_NA(METRE3_DESC);
		INIT_WITH_NA(KILOMETRE3_DESC);
		INIT_WITH_NA(MILLILITRE_DESC);
		INIT_WITH_NA(LITRE_DESC);
		INIT_WITH_NA(GALLON_DESC);
		INIT_WITH_NA(PINT_DESC);
		INIT_WITH_NA(SECOND_DESC);
		INIT_WITH_NA(MILLISECOND_DESC);
		INIT_WITH_NA(MINUTE_DESC);
		INIT_WITH_NA(HOUR_DESC);
		INIT_WITH_NA(DAY_DESC);
		INIT_WITH_NA(WEEK_DESC);
		INIT_WITH_NA(JULIAN_YEAR_DESC);
		INIT_WITH_NA(KILOGRAM_DESC);
		INIT_WITH_NA(GRAM_DESC);
		INIT_WITH_NA(MILLIGRAM_DESC);
		INIT_WITH_NA(DECAGRAM_DESC);
		INIT_WITH_NA(TONNE_DESC);
		INIT_WITH_NA(OUNCE_DESC);
		INIT_WITH_NA(POUND_DESC);
		INIT_WITH_NA(BIT_DESC);
		INIT_WITH_NA(KILOBIT_DESC);
		INIT_WITH_NA(MEGABIT_DESC);
		INIT_WITH_NA(GIGABIT_DESC);
		INIT_WITH_NA(TERABIT_DESC);
		INIT_WITH_NA(PETABIT_DESC);
		INIT_WITH_NA(EXABIT_DESC);
		INIT_WITH_NA(ZETTABIT_DESC);
		INIT_WITH_NA(YOTTABIT_DESC);
		INIT_WITH_NA(BYTE_DESC);
		INIT_WITH_NA(KILOBYTE_DESC);
		INIT_WITH_NA(MEGABYTE_DESC);
		INIT_WITH_NA(GIGABYTE_DESC);
		INIT_WITH_NA(TERABYTE_DESC);
		INIT_WITH_NA(PETABYTE_DESC);
		INIT_WITH_NA(EXABYTE_DESC);
		INIT_WITH_NA(ZETTABYTE_DESC);
		INIT_WITH_NA(YOTTABYTE_DESC);
		INIT_WITH_NA(JOULE_DESC);
		INIT_WITH_NA(ELECTRONO_VOLT_DESC);
		INIT_WITH_NA(KILO_ELECTRONO_VOLT_DESC);
		INIT_WITH_NA(MEGA_ELECTRONO_VOLT_DESC);
		INIT_WITH_NA(GIGA_ELECTRONO_VOLT_DESC);
		INIT_WITH_NA(TERA_ELECTRONO_VOLT_DESC);
		INIT_WITH_NA(METRE_PER_SECOND_DESC);
		INIT_WITH_NA(KILOMETRE_PER_HOUR_DESC);
		INIT_WITH_NA(MILE_PER_HOUR_DESC);
		INIT_WITH_NA(KNOT_DESC);
		INIT_WITH_NA(METRE_PER_SECOND2_DESC);
		INIT_WITH_NA(KILOMETRE_PER_HOUR2_DESC);
		INIT_WITH_NA(MILE_PER_HOUR2_DESC);
		INIT_WITH_NA(RADIAN_ARC_DESC);
		INIT_WITH_NA(DEGREE_ARC_DESC);
		INIT_WITH_NA(MINUTE_ARC_DESC);
		INIT_WITH_NA(SECOND_ARC_DESC);
		/*
		 * Unit - since.
		 */
		/* Ratio, Fraction */
		PERC_SINCE = mXparser::NAMEv40;
		PERM_SINCE = mXparser::NAMEv40;
		/* Metric prefixes */
		YOTTA_SINCE = mXparser::NAMEv40;
		ZETTA_SINCE = mXparser::NAMEv40;
		EXA_SINCE = mXparser::NAMEv40;
		PETA_SINCE = mXparser::NAMEv40;
		TERA_SINCE = mXparser::NAMEv40;
		GIGA_SINCE = mXparser::NAMEv40;
		MEGA_SINCE = mXparser::NAMEv40;
		KILO_SINCE = mXparser::NAMEv40;
		HECTO_SINCE = mXparser::NAMEv40;
		DECA_SINCE = mXparser::NAMEv40;
		DECI_SINCE = mXparser::NAMEv40;
		CENTI_SINCE = mXparser::NAMEv40;
		MILLI_SINCE = mXparser::NAMEv40;
		MICRO_SINCE = mXparser::NAMEv40;
		NANO_SINCE = mXparser::NAMEv40;
		PICO_SINCE = mXparser::NAMEv40;
		FEMTO_SINCE = mXparser::NAMEv40;
		ATTO_SINCE = mXparser::NAMEv40;
		ZEPTO_SINCE = mXparser::NAMEv40;
		YOCTO_SINCE = mXparser::NAMEv40;
		/* Units of length / distance */
		METRE_SINCE = mXparser::NAMEv40;
		KILOMETRE_SINCE = mXparser::NAMEv40;
		CENTIMETRE_SINCE = mXparser::NAMEv40;
		MILLIMETRE_SINCE = mXparser::NAMEv40;
		INCH_SINCE = mXparser::NAMEv40;
		YARD_SINCE = mXparser::NAMEv40;
		FEET_SINCE = mXparser::NAMEv40;
		MILE_SINCE = mXparser::NAMEv40;
		NAUTICAL_MILE_SINCE = mXparser::NAMEv40;
		/* Units of area */
		METRE2_SINCE = mXparser::NAMEv40;
		CENTIMETRE2_SINCE = mXparser::NAMEv40;
		MILLIMETRE2_SINCE = mXparser::NAMEv40;
		ARE_SINCE = mXparser::NAMEv40;
		HECTARE_SINCE = mXparser::NAMEv40;
		ACRE_SINCE = mXparser::NAMEv40;
		KILOMETRE2_SINCE = mXparser::NAMEv40;
		/* Units of volume */
		MILLIMETRE3_SINCE = mXparser::NAMEv40;
		CENTIMETRE3_SINCE = mXparser::NAMEv40;
		METRE3_SINCE = mXparser::NAMEv40;
		KILOMETRE3_SINCE = mXparser::NAMEv40;
		MILLILITRE_SINCE = mXparser::NAMEv40;
		LITRE_SINCE = mXparser::NAMEv40;
		GALLON_SINCE = mXparser::NAMEv40;
		PINT_SINCE = mXparser::NAMEv40;
		/* Units of time */
		SECOND_SINCE = mXparser::NAMEv40;
		MILLISECOND_SINCE = mXparser::NAMEv40;
		MINUTE_SINCE = mXparser::NAMEv40;
		HOUR_SINCE = mXparser::NAMEv40;
		DAY_SINCE = mXparser::NAMEv40;
		WEEK_SINCE = mXparser::NAMEv40;
		JULIAN_YEAR_SINCE = mXparser::NAMEv40;
		/* Units of mass */
		KILOGRAM_SINCE = mXparser::NAMEv40;
		GRAM_SINCE = mXparser::NAMEv40;
		MILLIGRAM_SINCE = mXparser::NAMEv40;
		DECAGRAM_SINCE = mXparser::NAMEv40;
		TONNE_SINCE = mXparser::NAMEv40;
		OUNCE_SINCE = mXparser::NAMEv40;
		POUND_SINCE = mXparser::NAMEv40;
		/* Units of information */
		BIT_SINCE = mXparser::NAMEv40;
		KILOBIT_SINCE = mXparser::NAMEv40;
		MEGABIT_SINCE = mXparser::NAMEv40;
		GIGABIT_SINCE = mXparser::NAMEv40;
		TERABIT_SINCE = mXparser::NAMEv40;
		PETABIT_SINCE = mXparser::NAMEv40;
		EXABIT_SINCE = mXparser::NAMEv40;
		ZETTABIT_SINCE = mXparser::NAMEv40;
		YOTTABIT_SINCE = mXparser::NAMEv40;
		BYTE_SINCE = mXparser::NAMEv40;
		KILOBYTE_SINCE = mXparser::NAMEv40;
		MEGABYTE_SINCE = mXparser::NAMEv40;
		GIGABYTE_SINCE = mXparser::NAMEv40;
		TERABYTE_SINCE = mXparser::NAMEv40;
		PETABYTE_SINCE = mXparser::NAMEv40;
		EXABYTE_SINCE = mXparser::NAMEv40;
		ZETTABYTE_SINCE = mXparser::NAMEv40;
		YOTTABYTE_SINCE = mXparser::NAMEv40;
		/* Units of energy */
		JOULE_SINCE = mXparser::NAMEv40;
		ELECTRONO_VOLT_SINCE = mXparser::NAMEv40;
		KILO_ELECTRONO_VOLT_SINCE = mXparser::NAMEv40;
		MEGA_ELECTRONO_VOLT_SINCE = mXparser::NAMEv40;
		GIGA_ELECTRONO_VOLT_SINCE = mXparser::NAMEv40;
		TERA_ELECTRONO_VOLT_SINCE = mXparser::NAMEv40;
		/* Units of speed */
		METRE_PER_SECOND_SINCE = mXparser::NAMEv40;
		KILOMETRE_PER_HOUR_SINCE = mXparser::NAMEv40;
		MILE_PER_HOUR_SINCE = mXparser::NAMEv40;
		KNOT_SINCE = mXparser::NAMEv40;
		/* Units of acceleration */
		METRE_PER_SECOND2_SINCE = mXparser::NAMEv40;
		KILOMETRE_PER_HOUR2_SINCE = mXparser::NAMEv40;
		MILE_PER_HOUR2_SINCE = mXparser::NAMEv40;
		/* Units of angle */
		RADIAN_ARC_SINCE = mXparser::NAMEv40;
		DEGREE_ARC_SINCE = mXparser::NAMEv40;
		MINUTE_ARC_SINCE = mXparser::NAMEv40;
		SECOND_ARC_SINCE = mXparser::NAMEv40;

	);

} // namespace org::mariuszgromada::math::mxparser::parsertokens
