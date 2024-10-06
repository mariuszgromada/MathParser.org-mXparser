/*
 * @(#)Units.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/mathcollection/Units.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/parsertokens/Unit.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Double.hpp"

namespace org::mariuszgromada::math::mxparser::mathcollection {
	using namespace org::mariuszgromada::math::mxparser::parsertokens;
	using namespace org::mariuszgromada::math::mxparser::wrapper;


	/**
	 * Returns unit value, where unit is represented by the
	 * token id in the Unit class
	 *
	 * @param unitId
	 * @return Returns unit value if id is known, otherwise Double.NaN is returned.
	 *
	 * @see Unit
	 */
	API_VISIBLE double Units::getUnitValue(int unitId) {
		switch (unitId) {
			case Unit::PERC_ID: return PERC;
			case Unit::PERM_ID: return PROMIL;
			/* Metric prefixes */
			case Unit::YOTTA_ID: return YOTTA;
			case Unit::ZETTA_ID: return ZETTA;
			case Unit::EXA_ID: return EXA;
			case Unit::PETA_ID: return PETA;
			case Unit::TERA_ID: return TERA;
			case Unit::GIGA_ID: return GIGA;
			case Unit::MEGA_ID: return MEGA;
			case Unit::KILO_ID: return KILO;
			case Unit::HECTO_ID: return HECTO;
			case Unit::DECA_ID: return DECA;
			case Unit::DECI_ID: return DECI;
			case Unit::CENTI_ID: return CENTI;
			case Unit::MILLI_ID: return MILLI;
			case Unit::MICRO_ID: return MICRO;
			case Unit::NANO_ID: return NANO;
			case Unit::PICO_ID: return PICO;
			case Unit::FEMTO_ID: return FEMTO;
			case Unit::ATTO_ID: return ATTO;
			case Unit::ZEPTO_ID: return ZEPTO;
			case Unit::YOCTO_ID: return YOCTO;
			/* Units of length / distance */
			case Unit::METRE_ID: return METRE;
			case Unit::KILOMETRE_ID: return KILOMETRE;
			case Unit::CENTIMETRE_ID: return CENTIMETRE;
			case Unit::MILLIMETRE_ID: return MILLIMETRE;
			case Unit::INCH_ID: return INCH;
			case Unit::YARD_ID: return YARD;
			case Unit::FEET_ID: return FEET;
			case Unit::MILE_ID: return MILE;
			case Unit::NAUTICAL_MILE_ID: return NAUTICAL_MILE;
			/* Units of area */
			case Unit::METRE2_ID: return METRE2;
			case Unit::CENTIMETRE2_ID: return CENTIMETRE2;
			case Unit::MILLIMETRE2_ID: return MILLIMETRE2;
			case Unit::ARE_ID: return ARE;
			case Unit::HECTARE_ID: return HECTARE;
			case Unit::ACRE_ID: return ACRE;
			case Unit::KILOMETRE2_ID: return KILOMETRE2;
			/* Units of volume */
			case Unit::MILLIMETRE3_ID: return MILLIMETRE3;
			case Unit::CENTIMETRE3_ID: return CENTIMETRE3;
			case Unit::METRE3_ID: return METRE3;
			case Unit::KILOMETRE3_ID: return KILOMETRE3;
			case Unit::MILLILITRE_ID: return MILLILITRE;
			case Unit::LITRE_ID: return LITRE;
			case Unit::GALLON_ID: return GALLON;
			case Unit::PINT_ID: return PINT;
			/* Units of time */
			case Unit::SECOND_ID: return SECOND;
			case Unit::MILLISECOND_ID: return MILLISECOND;
			case Unit::MINUTE_ID: return MINUTE;
			case Unit::HOUR_ID: return HOUR;
			case Unit::DAY_ID: return DAY;
			case Unit::WEEK_ID: return WEEK;
			case Unit::JULIAN_YEAR_ID: return JULIAN_YEAR;
			/* Units of mass */
			case Unit::KILOGRAM_ID: return KILOGRAM;
			case Unit::GRAM_ID: return GRAM;
			case Unit::MILLIGRAM_ID: return MILLIGRAM;
			case Unit::DECAGRAM_ID: return DECAGRAM;
			case Unit::TONNE_ID: return TONNE;
			case Unit::OUNCE_ID: return OUNCE;
			case Unit::POUND_ID: return POUND;
			/* Units of information */
			case Unit::BIT_ID: return BIT;
			case Unit::KILOBIT_ID: return KILOBIT;
			case Unit::MEGABIT_ID: return MEGABIT;
			case Unit::GIGABIT_ID: return GIGABIT;
			case Unit::TERABIT_ID: return TERABIT;
			case Unit::PETABIT_ID: return PETABIT;
			case Unit::EXABIT_ID: return EXABIT;
			case Unit::ZETTABIT_ID: return ZETTABIT;
			case Unit::YOTTABIT_ID: return YOTTABIT;
			case Unit::BYTE_ID: return BYTE;
			case Unit::KILOBYTE_ID: return KILOBYTE;
			case Unit::MEGABYTE_ID: return MEGABYTE;
			case Unit::GIGABYTE_ID: return GIGABYTE;
			case Unit::TERABYTE_ID: return TERABYTE;
			case Unit::PETABYTE_ID: return PETABYTE;
			case Unit::EXABYTE_ID: return EXABYTE;
			case Unit::ZETTABYTE_ID: return ZETTABYTE;
			case Unit::YOTTABYTE_ID: return YOTTABYTE;
			/* Units of energy */
			case Unit::JOULE_ID: return JOULE;
			case Unit::ELECTRONO_VOLT_ID: return ELECTRONO_VOLT;
			case Unit::KILO_ELECTRONO_VOLT_ID: return KILO_ELECTRONO_VOLT;
			case Unit::MEGA_ELECTRONO_VOLT_ID: return MEGA_ELECTRONO_VOLT;
			case Unit::GIGA_ELECTRONO_VOLT_ID: return GIGA_ELECTRONO_VOLT;
			case Unit::TERA_ELECTRONO_VOLT_ID: return TERA_ELECTRONO_VOLT;
			/* Units of speed */
			case Unit::METRE_PER_SECOND_ID: return METRE_PER_SECOND;
			case Unit::KILOMETRE_PER_HOUR_ID: return KILOMETRE_PER_HOUR;
			case Unit::MILE_PER_HOUR_ID: return MILE_PER_HOUR;
			case Unit::KNOT_ID: return KNOT;
			/* Units of acceleration */
			case Unit::METRE_PER_SECOND2_ID: return METRE_PER_SECOND2;
			case Unit::KILOMETRE_PER_HOUR2_ID: return KILOMETRE_PER_HOUR2;
			case Unit::MILE_PER_HOUR2_ID: return MILE_PER_HOUR2;
			/* Units of angle */
			case Unit::RADIAN_ARC_ID: return RADIAN_ARC;
			case Unit::DEGREE_ARC_ID: return DEGREE_ARC;
			case Unit::MINUTE_ARC_ID: return MINUTE_ARC;
			case Unit::SECOND_ARC_ID: return SECOND_ARC;
			default: return Double::NaN;
		}
	}
} // org::mariuszgromada::math::mxparser::mathcollection