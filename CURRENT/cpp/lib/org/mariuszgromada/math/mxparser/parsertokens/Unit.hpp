/*
 * @(#)Unit.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_UNIT_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_UNIT_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {

	class API_VISIBLE Unit {
	public:
		Unit() = delete;

		static constexpr int TYPE_ID = 12;
		static StringPtr TYPE_DESC;

		/* Ratio, Fraction */
		static constexpr int PERC_ID = 1;
		static constexpr int PERM_ID = 2;
		/* Metric prefixes */
		static constexpr int YOTTA_ID = 101;
		static constexpr int ZETTA_ID = 102;
		static constexpr int EXA_ID = 103;
		static constexpr int PETA_ID = 104;
		static constexpr int TERA_ID = 105;
		static constexpr int GIGA_ID = 106;
		static constexpr int MEGA_ID = 107;
		static constexpr int KILO_ID = 108;
		static constexpr int HECTO_ID = 109;
		static constexpr int DECA_ID = 110;
		static constexpr int DECI_ID = 111;
		static constexpr int CENTI_ID = 112;
		static constexpr int MILLI_ID = 113;
		static constexpr int MICRO_ID = 114;
		static constexpr int NANO_ID = 115;
		static constexpr int PICO_ID = 116;
		static constexpr int FEMTO_ID = 117;
		static constexpr int ATTO_ID = 118;
		static constexpr int ZEPTO_ID = 119;
		static constexpr int YOCTO_ID = 120;
		/* Units of length / distance */
		static constexpr int METRE_ID = 201;
		static constexpr int KILOMETRE_ID = 202;
		static constexpr int CENTIMETRE_ID = 203;
		static constexpr int MILLIMETRE_ID = 204;
		static constexpr int INCH_ID = 205;
		static constexpr int YARD_ID = 206;
		static constexpr int FEET_ID = 207;
		static constexpr int MILE_ID = 208;
		static constexpr int NAUTICAL_MILE_ID = 209;
		/* Units of area */
		static constexpr int METRE2_ID = 301;
		static constexpr int CENTIMETRE2_ID = 302;
		static constexpr int MILLIMETRE2_ID = 303;
		static constexpr int ARE_ID = 304;
		static constexpr int HECTARE_ID = 305;
		static constexpr int ACRE_ID = 306;
		static constexpr int KILOMETRE2_ID = 307;
		/* Units of volume */
		static constexpr int MILLIMETRE3_ID = 401;
		static constexpr int CENTIMETRE3_ID = 402;
		static constexpr int METRE3_ID = 403;
		static constexpr int KILOMETRE3_ID = 404;
		static constexpr int MILLILITRE_ID = 405;
		static constexpr int LITRE_ID = 406;
		static constexpr int GALLON_ID = 407;
		static constexpr int PINT_ID = 408;
		/* Units of time */
		static constexpr int SECOND_ID = 501;
		static constexpr int MILLISECOND_ID = 502;
		static constexpr int MINUTE_ID = 503;
		static constexpr int HOUR_ID = 504;
		static constexpr int DAY_ID = 505;
		static constexpr int WEEK_ID = 506;
		static constexpr int JULIAN_YEAR_ID = 507;
		/* Units of mass */
		static constexpr int KILOGRAM_ID = 508;
		static constexpr int GRAM_ID = 509;
		static constexpr int MILLIGRAM_ID = 510;
		static constexpr int DECAGRAM_ID = 511;
		static constexpr int TONNE_ID = 512;
		static constexpr int OUNCE_ID = 513;
		static constexpr int POUND_ID = 514;
		/* Units of information */
		static constexpr int BIT_ID = 601;
		static constexpr int KILOBIT_ID = 602;
		static constexpr int MEGABIT_ID = 603;
		static constexpr int GIGABIT_ID = 604;
		static constexpr int TERABIT_ID = 605;
		static constexpr int PETABIT_ID = 606;
		static constexpr int EXABIT_ID = 607;
		static constexpr int ZETTABIT_ID = 608;
		static constexpr int YOTTABIT_ID = 609;
		static constexpr int BYTE_ID = 610;
		static constexpr int KILOBYTE_ID = 611;
		static constexpr int MEGABYTE_ID = 612;
		static constexpr int GIGABYTE_ID = 613;
		static constexpr int TERABYTE_ID = 614;
		static constexpr int PETABYTE_ID = 615;
		static constexpr int EXABYTE_ID = 616;
		static constexpr int ZETTABYTE_ID = 617;
		static constexpr int YOTTABYTE_ID = 618;
		/* Units of energy */
		static constexpr int JOULE_ID = 701;
		static constexpr int ELECTRONO_VOLT_ID = 702;
		static constexpr int KILO_ELECTRONO_VOLT_ID = 703;
		static constexpr int MEGA_ELECTRONO_VOLT_ID = 704;
		static constexpr int GIGA_ELECTRONO_VOLT_ID = 705;
		static constexpr int TERA_ELECTRONO_VOLT_ID = 706;
		/* Units of speed */
		static constexpr int METRE_PER_SECOND_ID = 801;
		static constexpr int KILOMETRE_PER_HOUR_ID = 802;
		static constexpr int MILE_PER_HOUR_ID = 803;
		static constexpr int KNOT_ID = 804;
		/* Units of acceleration */
		static constexpr int METRE_PER_SECOND2_ID = 901;
		static constexpr int KILOMETRE_PER_HOUR2_ID = 902;
		static constexpr int MILE_PER_HOUR2_ID = 903;
		/* Units of angle */
		static constexpr int RADIAN_ARC_ID = 1001;
		static constexpr int DEGREE_ARC_ID = 1002;
		static constexpr int MINUTE_ARC_ID = 1003;
		static constexpr int SECOND_ARC_ID = 1004;

		/*
		 * Unit - tokens key words.
		 */
		/* Ratio, Fraction */
		static StringPtr PERC_STR;
		static StringPtr PERM_STR;
		/* Metric prefixes */
		static StringPtr YOTTA_STR;
		static StringPtr YOTTA_SEPT_STR;
		static StringPtr ZETTA_STR;
		static StringPtr ZETTA_SEXT_STR;
		static StringPtr EXA_STR;
		static StringPtr EXA_QUINT_STR;
		static StringPtr PETA_STR;
		static StringPtr PETA_QUAD_STR;
		static StringPtr TERA_STR;
		static StringPtr TERA_TRIL_STR;
		static StringPtr GIGA_STR;
		static StringPtr GIGA_BIL_STR;
		static StringPtr MEGA_STR;
		static StringPtr MEGA_MIL_STR;
		static StringPtr KILO_STR;
		static StringPtr KILO_TH_STR;
		static StringPtr HECTO_STR;
		static StringPtr HECTO_HUND_STR;
		static StringPtr DECA_STR;
		static StringPtr DECA_TEN_STR;
		static StringPtr DECI_STR;
		static StringPtr CENTI_STR;
		static StringPtr MILLI_STR;
		static StringPtr MICRO_STR;
		static StringPtr NANO_STR;
		static StringPtr PICO_STR;
		static StringPtr FEMTO_STR;
		static StringPtr ATTO_STR;
		static StringPtr ZEPTO_STR;
		static StringPtr YOCTO_STR;
		/* Units of length / distance */
		static StringPtr METRE_STR;
		static StringPtr KILOMETRE_STR;
		static StringPtr CENTIMETRE_STR;
		static StringPtr MILLIMETRE_STR;
		static StringPtr INCH_STR;
		static StringPtr YARD_STR;
		static StringPtr FEET_STR;
		static StringPtr MILE_STR;
		static StringPtr NAUTICAL_MILE_STR;
		/* Units of area */
		static StringPtr METRE2_STR;
		static StringPtr CENTIMETRE2_STR;
		static StringPtr MILLIMETRE2_STR;
		static StringPtr ARE_STR;
		static StringPtr HECTARE_STR;
		static StringPtr ACRE_STR;
		static StringPtr KILOMETRE2_STR;
		/* Units of volume */
		static StringPtr MILLIMETRE3_STR;
		static StringPtr CENTIMETRE3_STR;
		static StringPtr METRE3_STR;
		static StringPtr KILOMETRE3_STR;
		static StringPtr MILLILITRE_STR;
		static StringPtr LITRE_STR;
		static StringPtr GALLON_STR;
		static StringPtr PINT_STR;
		/* Units of time */
		static StringPtr SECOND_STR;
		static StringPtr MILLISECOND_STR;
		static StringPtr MINUTE_STR;
		static StringPtr HOUR_STR;
		static StringPtr DAY_STR;
		static StringPtr WEEK_STR;
		static StringPtr JULIAN_YEAR_STR;
		/* Units of mass */
		static StringPtr KILOGRAM_STR;
		static StringPtr GRAM_STR;
		static StringPtr MILLIGRAM_STR;
		static StringPtr DECAGRAM_STR;
		static StringPtr TONNE_STR;
		static StringPtr OUNCE_STR;
		static StringPtr POUND_STR;
		/* Units of information */
		static StringPtr BIT_STR;
		static StringPtr KILOBIT_STR;
		static StringPtr MEGABIT_STR;
		static StringPtr GIGABIT_STR;
		static StringPtr TERABIT_STR;
		static StringPtr PETABIT_STR;
		static StringPtr EXABIT_STR;
		static StringPtr ZETTABIT_STR;
		static StringPtr YOTTABIT_STR;
		static StringPtr BYTE_STR;
		static StringPtr KILOBYTE_STR;
		static StringPtr MEGABYTE_STR;
		static StringPtr GIGABYTE_STR;
		static StringPtr TERABYTE_STR;
		static StringPtr PETABYTE_STR;
		static StringPtr EXABYTE_STR;
		static StringPtr ZETTABYTE_STR;
		static StringPtr YOTTABYTE_STR;
		/* Units of energy */
		static StringPtr JOULE_STR;
		static StringPtr ELECTRONO_VOLT_STR;
		static StringPtr KILO_ELECTRONO_VOLT_STR;
		static StringPtr MEGA_ELECTRONO_VOLT_STR;
		static StringPtr GIGA_ELECTRONO_VOLT_STR;
		static StringPtr TERA_ELECTRONO_VOLT_STR;
		/* Units of speed */
		static StringPtr METRE_PER_SECOND_STR;
		static StringPtr KILOMETRE_PER_HOUR_STR;
		static StringPtr MILE_PER_HOUR_STR;
		static StringPtr KNOT_STR;
		/* Units of acceleration */
		static StringPtr METRE_PER_SECOND2_STR;
		static StringPtr KILOMETRE_PER_HOUR2_STR;
		static StringPtr MILE_PER_HOUR2_STR;
		/* Units of angle */
		static StringPtr RADIAN_ARC_STR;
		static StringPtr DEGREE_ARC_STR;
		static StringPtr MINUTE_ARC_STR;
		static StringPtr SECOND_ARC_STR;
		/*
		 * Unit - syntax.
		 */
		/* Ratio, Fraction */
		static StringPtr PERC_SYN;
		static StringPtr PERM_SYN;
		/* Metric prefixes */
		static StringPtr YOTTA_SYN;
		static StringPtr YOTTA_SEPT_SYN;
		static StringPtr ZETTA_SYN;
		static StringPtr ZETTA_SEXT_SYN;
		static StringPtr EXA_SYN;
		static StringPtr EXA_QUINT_SYN;
		static StringPtr PETA_SYN;
		static StringPtr PETA_QUAD_SYN;
		static StringPtr TERA_SYN;
		static StringPtr TERA_TRIL_SYN;
		static StringPtr GIGA_SYN;
		static StringPtr GIGA_BIL_SYN;
		static StringPtr MEGA_SYN;
		static StringPtr MEGA_MIL_SYN;
		static StringPtr KILO_SYN;
		static StringPtr KILO_TH_SYN;
		static StringPtr HECTO_SYN;
		static StringPtr HECTO_HUND_SYN;
		static StringPtr DECA_SYN;
		static StringPtr DECA_TEN_SYN;
		static StringPtr DECI_SYN;
		static StringPtr CENTI_SYN;
		static StringPtr MILLI_SYN;
		static StringPtr MICRO_SYN;
		static StringPtr NANO_SYN;
		static StringPtr PICO_SYN;
		static StringPtr FEMTO_SYN;
		static StringPtr ATTO_SYN;
		static StringPtr ZEPTO_SYN;
		static StringPtr YOCTO_SYN;
		/* Units of length / distance */
		static StringPtr METRE_SYN;
		static StringPtr KILOMETRE_SYN;
		static StringPtr CENTIMETRE_SYN;
		static StringPtr MILLIMETRE_SYN;
		static StringPtr INCH_SYN;
		static StringPtr YARD_SYN;
		static StringPtr FEET_SYN;
		static StringPtr MILE_SYN;
		static StringPtr NAUTICAL_MILE_SYN;
		/* Units of area */
		static StringPtr METRE2_SYN;
		static StringPtr CENTIMETRE2_SYN;
		static StringPtr MILLIMETRE2_SYN;
		static StringPtr ARE_SYN;
		static StringPtr HECTARE_SYN;
		static StringPtr ACRE_SYN;
		static StringPtr KILOMETRE2_SYN;
		/* Units of volume */
		static StringPtr MILLIMETRE3_SYN;
		static StringPtr CENTIMETRE3_SYN;
		static StringPtr METRE3_SYN;
		static StringPtr KILOMETRE3_SYN;
		static StringPtr MILLILITRE_SYN;
		static StringPtr LITRE_SYN;
		static StringPtr GALLON_SYN;
		static StringPtr PINT_SYN;
		/* Units of time */
		static StringPtr SECOND_SYN;
		static StringPtr MILLISECOND_SYN;
		static StringPtr MINUTE_SYN;
		static StringPtr HOUR_SYN;
		static StringPtr DAY_SYN;
		static StringPtr WEEK_SYN;
		static StringPtr JULIAN_YEAR_SYN;
		/* Units of mass */
		static StringPtr KILOGRAM_SYN;
		static StringPtr GRAM_SYN;
		static StringPtr MILLIGRAM_SYN;
		static StringPtr DECAGRAM_SYN;
		static StringPtr TONNE_SYN;
		static StringPtr OUNCE_SYN;
		static StringPtr POUND_SYN;
		/* Units of information */
		static StringPtr BIT_SYN;
		static StringPtr KILOBIT_SYN;
		static StringPtr MEGABIT_SYN;
		static StringPtr GIGABIT_SYN;
		static StringPtr TERABIT_SYN;
		static StringPtr PETABIT_SYN;
		static StringPtr EXABIT_SYN;
		static StringPtr ZETTABIT_SYN;
		static StringPtr YOTTABIT_SYN;
		static StringPtr BYTE_SYN;
		static StringPtr KILOBYTE_SYN;
		static StringPtr MEGABYTE_SYN;
		static StringPtr GIGABYTE_SYN;
		static StringPtr TERABYTE_SYN;
		static StringPtr PETABYTE_SYN;
		static StringPtr EXABYTE_SYN;
		static StringPtr ZETTABYTE_SYN;
		static StringPtr YOTTABYTE_SYN;
		/* Units of energy */
		static StringPtr JOULE_SYN;
		static StringPtr ELECTRONO_VOLT_SYN;
		static StringPtr KILO_ELECTRONO_VOLT_SYN;
		static StringPtr MEGA_ELECTRONO_VOLT_SYN;
		static StringPtr GIGA_ELECTRONO_VOLT_SYN;
		static StringPtr TERA_ELECTRONO_VOLT_SYN;
		/* Units of speed */
		static StringPtr METRE_PER_SECOND_SYN;
		static StringPtr KILOMETRE_PER_HOUR_SYN;
		static StringPtr MILE_PER_HOUR_SYN;
		static StringPtr KNOT_SYN;
		/* Units of acceleration */
		static StringPtr METRE_PER_SECOND2_SYN;
		static StringPtr KILOMETRE_PER_HOUR2_SYN;
		static StringPtr MILE_PER_HOUR2_SYN;
		/* Units of angle */
		static StringPtr RADIAN_ARC_SYN;
		static StringPtr DEGREE_ARC_SYN;
		static StringPtr MINUTE_ARC_SYN;
		static StringPtr SECOND_ARC_SYN;

		/*
		 * Unit - tokens description.
		 */
		static StringPtr PERC_DESC;
		static StringPtr PERM_DESC;
		static StringPtr YOTTA_DESC;
		static StringPtr ZETTA_DESC;
		static StringPtr EXA_DESC;
		static StringPtr PETA_DESC;
		static StringPtr TERA_DESC;
		static StringPtr GIGA_DESC;
		static StringPtr MEGA_DESC;
		static StringPtr KILO_DESC;
		static StringPtr HECTO_DESC;
		static StringPtr DECA_DESC;
		static StringPtr DECI_DESC;
		static StringPtr CENTI_DESC;
		static StringPtr MILLI_DESC;
		static StringPtr MICRO_DESC;
		static StringPtr NANO_DESC;
		static StringPtr PICO_DESC;
		static StringPtr FEMTO_DESC;
		static StringPtr ATTO_DESC;
		static StringPtr ZEPTO_DESC;
		static StringPtr YOCTO_DESC;
		static StringPtr METRE_DESC;
		static StringPtr KILOMETRE_DESC;
		static StringPtr CENTIMETRE_DESC;
		static StringPtr MILLIMETRE_DESC;
		static StringPtr INCH_DESC;
		static StringPtr YARD_DESC;
		static StringPtr FEET_DESC;
		static StringPtr MILE_DESC;
		static StringPtr NAUTICAL_MILE_DESC;
		static StringPtr METRE2_DESC;
		static StringPtr CENTIMETRE2_DESC;
		static StringPtr MILLIMETRE2_DESC;
		static StringPtr ARE_DESC;
		static StringPtr HECTARE_DESC;
		static StringPtr ACRE_DESC;
		static StringPtr KILOMETRE2_DESC;
		static StringPtr MILLIMETRE3_DESC;
		static StringPtr CENTIMETRE3_DESC;
		static StringPtr METRE3_DESC;
		static StringPtr KILOMETRE3_DESC;
		static StringPtr MILLILITRE_DESC;
		static StringPtr LITRE_DESC;
		static StringPtr GALLON_DESC;
		static StringPtr PINT_DESC;
		static StringPtr SECOND_DESC;
		static StringPtr MILLISECOND_DESC;
		static StringPtr MINUTE_DESC;
		static StringPtr HOUR_DESC;
		static StringPtr DAY_DESC;
		static StringPtr WEEK_DESC;
		static StringPtr JULIAN_YEAR_DESC;
		static StringPtr KILOGRAM_DESC;
		static StringPtr GRAM_DESC;
		static StringPtr MILLIGRAM_DESC;
		static StringPtr DECAGRAM_DESC;
		static StringPtr TONNE_DESC;
		static StringPtr OUNCE_DESC;
		static StringPtr POUND_DESC;
		static StringPtr BIT_DESC;
		static StringPtr KILOBIT_DESC;
		static StringPtr MEGABIT_DESC;
		static StringPtr GIGABIT_DESC;
		static StringPtr TERABIT_DESC;
		static StringPtr PETABIT_DESC;
		static StringPtr EXABIT_DESC;
		static StringPtr ZETTABIT_DESC;
		static StringPtr YOTTABIT_DESC;
		static StringPtr BYTE_DESC;
		static StringPtr KILOBYTE_DESC;
		static StringPtr MEGABYTE_DESC;
		static StringPtr GIGABYTE_DESC;
		static StringPtr TERABYTE_DESC;
		static StringPtr PETABYTE_DESC;
		static StringPtr EXABYTE_DESC;
		static StringPtr ZETTABYTE_DESC;
		static StringPtr YOTTABYTE_DESC;
		static StringPtr JOULE_DESC;
		static StringPtr ELECTRONO_VOLT_DESC;
		static StringPtr KILO_ELECTRONO_VOLT_DESC;
		static StringPtr MEGA_ELECTRONO_VOLT_DESC;
		static StringPtr GIGA_ELECTRONO_VOLT_DESC;
		static StringPtr TERA_ELECTRONO_VOLT_DESC;
		static StringPtr METRE_PER_SECOND_DESC;
		static StringPtr KILOMETRE_PER_HOUR_DESC;
		static StringPtr MILE_PER_HOUR_DESC;
		static StringPtr KNOT_DESC;
		static StringPtr METRE_PER_SECOND2_DESC;
		static StringPtr KILOMETRE_PER_HOUR2_DESC;
		static StringPtr MILE_PER_HOUR2_DESC;
		static StringPtr RADIAN_ARC_DESC;
		static StringPtr DEGREE_ARC_DESC;
		static StringPtr MINUTE_ARC_DESC;
		static StringPtr SECOND_ARC_DESC;
		/*
		 * Unit - since.
		 */
		/* Ratio, Fraction */
		static StringPtr PERC_SINCE;
		static StringPtr PERM_SINCE;
		/* Metric prefixes */
		static StringPtr YOTTA_SINCE;
		static StringPtr ZETTA_SINCE;
		static StringPtr EXA_SINCE;
		static StringPtr PETA_SINCE;
		static StringPtr TERA_SINCE;
		static StringPtr GIGA_SINCE;
		static StringPtr MEGA_SINCE;
		static StringPtr KILO_SINCE;
		static StringPtr HECTO_SINCE;
		static StringPtr DECA_SINCE;
		static StringPtr DECI_SINCE;
		static StringPtr CENTI_SINCE;
		static StringPtr MILLI_SINCE;
		static StringPtr MICRO_SINCE;
		static StringPtr NANO_SINCE;
		static StringPtr PICO_SINCE;
		static StringPtr FEMTO_SINCE;
		static StringPtr ATTO_SINCE;
		static StringPtr ZEPTO_SINCE;
		static StringPtr YOCTO_SINCE;
		/* Units of length / distance */
		static StringPtr METRE_SINCE;
		static StringPtr KILOMETRE_SINCE;
		static StringPtr CENTIMETRE_SINCE;
		static StringPtr MILLIMETRE_SINCE;
		static StringPtr INCH_SINCE;
		static StringPtr YARD_SINCE;
		static StringPtr FEET_SINCE;
		static StringPtr MILE_SINCE;
		static StringPtr NAUTICAL_MILE_SINCE;
		/* Units of area */
		static StringPtr METRE2_SINCE;
		static StringPtr CENTIMETRE2_SINCE;
		static StringPtr MILLIMETRE2_SINCE;
		static StringPtr ARE_SINCE;
		static StringPtr HECTARE_SINCE;
		static StringPtr ACRE_SINCE;
		static StringPtr KILOMETRE2_SINCE;
		/* Units of volume */
		static StringPtr MILLIMETRE3_SINCE;
		static StringPtr CENTIMETRE3_SINCE;
		static StringPtr METRE3_SINCE;
		static StringPtr KILOMETRE3_SINCE;
		static StringPtr MILLILITRE_SINCE;
		static StringPtr LITRE_SINCE;
		static StringPtr GALLON_SINCE;
		static StringPtr PINT_SINCE;
		/* Units of time */
		static StringPtr SECOND_SINCE;
		static StringPtr MILLISECOND_SINCE;
		static StringPtr MINUTE_SINCE;
		static StringPtr HOUR_SINCE;
		static StringPtr DAY_SINCE;
		static StringPtr WEEK_SINCE;
		static StringPtr JULIAN_YEAR_SINCE;
		/* Units of mass */
		static StringPtr KILOGRAM_SINCE;
		static StringPtr GRAM_SINCE;
		static StringPtr MILLIGRAM_SINCE;
		static StringPtr DECAGRAM_SINCE;
		static StringPtr TONNE_SINCE;
		static StringPtr OUNCE_SINCE;
		static StringPtr POUND_SINCE;
		/* Units of information */
		static StringPtr BIT_SINCE;
		static StringPtr KILOBIT_SINCE;
		static StringPtr MEGABIT_SINCE;
		static StringPtr GIGABIT_SINCE;
		static StringPtr TERABIT_SINCE;
		static StringPtr PETABIT_SINCE;
		static StringPtr EXABIT_SINCE;
		static StringPtr ZETTABIT_SINCE;
		static StringPtr YOTTABIT_SINCE;
		static StringPtr BYTE_SINCE;
		static StringPtr KILOBYTE_SINCE;
		static StringPtr MEGABYTE_SINCE;
		static StringPtr GIGABYTE_SINCE;
		static StringPtr TERABYTE_SINCE;
		static StringPtr PETABYTE_SINCE;
		static StringPtr EXABYTE_SINCE;
		static StringPtr ZETTABYTE_SINCE;
		static StringPtr YOTTABYTE_SINCE;
		/* Units of energy */
		static StringPtr JOULE_SINCE;
		static StringPtr ELECTRONO_VOLT_SINCE;
		static StringPtr KILO_ELECTRONO_VOLT_SINCE;
		static StringPtr MEGA_ELECTRONO_VOLT_SINCE;
		static StringPtr GIGA_ELECTRONO_VOLT_SINCE;
		static StringPtr TERA_ELECTRONO_VOLT_SINCE;
		/* Units of speed */
		static StringPtr METRE_PER_SECOND_SINCE;
		static StringPtr KILOMETRE_PER_HOUR_SINCE;
		static StringPtr MILE_PER_HOUR_SINCE;
		static StringPtr KNOT_SINCE;
		/* Units of acceleration */
		static StringPtr METRE_PER_SECOND2_SINCE;
		static StringPtr KILOMETRE_PER_HOUR2_SINCE;
		static StringPtr MILE_PER_HOUR2_SINCE;
		/* Units of angle */
		static StringPtr RADIAN_ARC_SINCE;
		static StringPtr DEGREE_ARC_SINCE;
		static StringPtr MINUTE_ARC_SINCE;
		static StringPtr SECOND_ARC_SINCE;

		STATIC_VARS_INITI_H;
	};
} // namespace org::mariuszgromada::math::mxparser::parsertokens

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_PARSERTOKENS_UNIT_H
