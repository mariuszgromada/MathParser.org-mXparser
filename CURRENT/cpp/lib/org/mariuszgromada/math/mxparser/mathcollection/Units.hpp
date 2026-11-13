/*
 * @(#)Units.hpp        6.2.0    2026-11-13
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_UNITS_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_UNITS_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/wrapper/Math.hpp"

namespace org::mariuszgromada::math::mxparser::mathcollection {
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	class API_VISIBLE Units {
	public:
		Units() = delete;


		/* ===========================================
		 * Units prefixes
		 * ===========================================
		 */
		/**
		 * \brief Percentage
		 */
		static constexpr double PERC = 0.01;
		/**
		 * \brief Promil, Per mille
		 */
		static constexpr double PROMIL = 0.001;
		/**
		 * \brief Yotta
		 */
		static constexpr double YOTTA = 1.0E24;
		/**
		 * \brief Zetta
		 */
		static constexpr double ZETTA = 1.0E21;
		/**
		 * \brief Exa
		 */
		static constexpr double EXA = 1.0E18;
		/**
		 * \brief Peta
		 */
		static constexpr double PETA = 1.0E15;
		/**
		 * \brief Tera
		 */
		static constexpr double TERA = 1.0E12;
		/**
		 * \brief Giga
		 */
		static constexpr double GIGA = 1000000000.0;
		/**
		 * \brief Mega
		 */
		static constexpr double MEGA = 1000000.0;
		/**
		 * \brief Kilo
		 */
		static constexpr double KILO = 1000.0;
		/**
		 * \brief Hecto
		 */
		static constexpr double HECTO = 100.0;
		/**
		 * \brief Deca
		 */
		static constexpr double DECA = 10.0;
		/**
		 * \brief Deci
		 */
		static constexpr double DECI = 0.1;
		/**
		 * \brief Centi
		 */
		static constexpr double CENTI = 0.01;
		/**
		 * \brief Milli
		 */
		static constexpr double MILLI = 0.001;
		/**
		 * \brief Micro
		 */
		static constexpr double MICRO = 0.000001;
		/**
		 * \brief Nano
		 */
		static constexpr double NANO = 0.000000001;
		/**
		 * \brief Pico
		 */
		static constexpr double PICO = 1.0E-12;
		/**
		 * \brief Femto
		 */
		static constexpr double FEMTO = 1.0E-15;
		/**
		 * \brief Atto
		 */
		static constexpr double ATTO = 1.0E-18;
		/**
		 * \brief Zepto
		 */
		static constexpr double ZEPTO = 1.0E-21;
		/**
		 * \brief Yocto
		 */
		static constexpr double YOCTO = 1.0E-24;

		/* ===========================================
		 * Units of length / distance
		 * ===========================================
		 */
		/**
		 * \brief Meter
		 */
		static constexpr double METRE = 1.0;
		/**
		 * \brief Kilometer
		 */
		static constexpr double KILOMETRE = 1000.0 * METRE;
		/**
		 * \brief Centimeter
		 */
		static constexpr double CENTIMETRE = CENTI * METRE;
		/**
		 * \brief Millimetre
		 */
		static constexpr double MILLIMETRE = MILLI * METRE;
		/**
		 * \brief Inch
		 */
		static constexpr double INCH = 2.54 * CENTIMETRE;
		/**
		 * \brief Yard
		 */
		static constexpr double YARD = 0.9144 * METRE;
		/**
		 * \brief Feet
		 */
		static constexpr double FEET = 30.48 * CENTIMETRE;
		/**
		 * \brief Mile
		 */
		static constexpr double MILE = 1.609344 * KILOMETRE;
		/**
		 * \brief Nautical mile
		 */
		static constexpr double NAUTICAL_MILE = 1.852 * KILOMETRE;

		/* ===========================================
		 * Units of area
		 * ===========================================
		 */
		/**
		 * \brief Square metre
		 */
		static constexpr double METRE2 = METRE * METRE;
		/**
		 * \brief Square centimetre
		 */
		static constexpr double CENTIMETRE2 = CENTIMETRE * CENTIMETRE;
		/**
		 * \brief Square millimetre
		 */
		static constexpr double MILLIMETRE2 = MILLIMETRE * MILLIMETRE;
		/**
		 * \brief Are
		 */
		static constexpr double ARE = (10.0 * METRE) * (10.0 * METRE);
		/**
		 * \brief Hectare
		 */
		static constexpr double HECTARE = (100.0 * METRE) * (100.0 * METRE);
		/**
		 * \brief Square kilometre
		 */
		static constexpr double KILOMETRE2 = KILOMETRE * KILOMETRE;
		/**
		 * \brief Acre
		 */
		static constexpr double ACRE = (66.0 * FEET) * (660.0 * FEET);

		/* ===========================================
		 * Units of volume
		 * ===========================================
		 */
		/**
		 * \brief Qubic millimetre
		 */
		static constexpr double MILLIMETRE3 = MILLIMETRE * MILLIMETRE * MILLIMETRE;
		/**
		 * \brief Qubic centimetre
		 */
		static constexpr double CENTIMETRE3 = CENTIMETRE * CENTIMETRE * CENTIMETRE;
		/**
		 * \brief Qubic metre
		 */
		static constexpr double METRE3 = METRE * METRE * METRE;
		/**
		 * \brief Qubic kilometre
		 */
		static constexpr double KILOMETRE3 = KILOMETRE * KILOMETRE * KILOMETRE;
		/**
		 * \brief Millilitre
		 */
		static constexpr double MILLILITRE = CENTIMETRE3;
		/**
		 * \brief Litre
		 */
		static constexpr double LITRE = 1000.0 * MILLILITRE;
		/**
		 * \brief Gallon
		 */
		static constexpr double GALLON = 3.78541178 * LITRE;
		/**
		 * \brief Pint
		 */
		static constexpr double PINT = 473.176473 * MILLILITRE;

		/* ===========================================
		 * Units of time
		 * ===========================================
		 */
		/**
		 * \brief Second
		 */
		static constexpr double SECOND = 1.0;
		/**
		 * \brief Millisecond
		 */
		static constexpr double MILLISECOND = MILLI * SECOND;
		/**
		 * \brief MINUTE
		 */
		static constexpr double MINUTE = 60.0 * SECOND;
		/**
		 * \brief HOUR
		 */
		static constexpr double HOUR = 60.0 * MINUTE;
		/**
		 * \brief DAY
		 */
		static constexpr double DAY = 24.0 * HOUR;
		/**
		 * \brief WEEK
		 */
		static constexpr double WEEK = 7.0 * DAY;
		/**
		 * \brief JULIAN YEAR
		 */
		static constexpr double JULIAN_YEAR = 365.25 * DAY;

		/* ===========================================
		 * Units of mass
		 * ===========================================
		 */
		/**
		 * \brief Kilogram
		 */
		static constexpr double KILOGRAM = 1.0;
		/**
		 * \brief Gram
		 */
		static constexpr double GRAM = 0.001 * KILOGRAM;
		/**
		 * \brief Milligram
		 */
		static constexpr double MILLIGRAM = MILLI * GRAM;
		/**
		 * \brief Decagram
		 */
		static constexpr double DECAGRAM = DECA * GRAM;
		/**
		 * \brief Tonne
		 */
		static constexpr double TONNE = 1000.0 * KILOGRAM;
		/**
		 * \brief Ounce
		 */
		static constexpr double OUNCE = 28.3495231 * GRAM;
		/**
		 * \brief Pound
		 */
		static constexpr double POUND = 0.45359237 * KILOGRAM;

		/* ===========================================
		 * Units of Amount
		 * ===========================================
		 */
		static constexpr double MOLE = 1.0;

		/* ===========================================
		 * Units of Charge
		 * ===========================================
		 */
		/**
		 * \brief Coulomb
		 */
		static constexpr double COULOMB = 1.0;

		/**
		 * \brief Ampere
		 */
		static constexpr double AMPERE = COULOMB / SECOND;

		/* ===========================================
		 * Units of Temperature
		 * ===========================================
		 */
		/**
		 * \brief Kelvin
		 */
		static constexpr double KELVIN = 1.0;

		/**
		 * \brief Celcius
		 */
		static constexpr double CELCIUS = 1.0;

		/**
		 * \brief Farenheight
		 */
		static constexpr double FARENHEIGHT = 1.8;

		/* ===========================================
		 * Units of information
		 * ===========================================
		 */
		/**
		 * \brief Bit
		 */
		static constexpr double BIT = 1.0;
		/**
		 * \brief Kilobit
		 */
		static constexpr double KILOBIT = 1024.0 * BIT;
		/**
		 * \brief Megabit
		 */
		static constexpr double MEGABIT = 1024.0 * KILOBIT;
		/**
		 * \brief Gigabit
		 */
		static constexpr double GIGABIT = 1024.0 * MEGABIT;
		/**
		 * \brief Terabit
		 */
		static constexpr double TERABIT = 1024.0 * GIGABIT;
		/**
		 * \brief Petabit
		 */
		static constexpr double PETABIT = 1024.0 * TERABIT;
		/**
		 * \brief Exabit
		 */
		static constexpr double EXABIT = 1024.0 * PETABIT;
		/**
		 * \brief Zettabit
		 */
		static constexpr double ZETTABIT = 1024.0 * EXABIT;
		/**
		 * \brief Yottabit
		 */
		static constexpr double YOTTABIT = 1024.0 * ZETTABIT;
		/**
		 * \brief Byte
		 */
		static constexpr double BYTE = 8.0 * BIT;
		/**
		 * \brief Kilobyte
		 */
		static constexpr double KILOBYTE = 1024.0 * BYTE;
		/**
		 * \brief Megabyte
		 */
		static constexpr double MEGABYTE = 1024.0 * KILOBYTE;
		/**
		 * \brief Gigabyte
		 */
		static constexpr double GIGABYTE = 1024.0 * MEGABYTE;
		/**
		 * \brief Terabyte
		 */
		static constexpr double TERABYTE = 1024.0 * GIGABYTE;
		/**
		 * \brief Petabyte
		 */
		static constexpr double PETABYTE = 1024.0 * TERABYTE;
		/**
		 * \brief Exabyte
		 */
		static constexpr double EXABYTE = 1024.0 * PETABYTE;
		/**
		 * \brief Zettabyte
		 */
		static constexpr double ZETTABYTE = 1024.0 * EXABYTE;
		/**
		 * \brief Yottabyte
		 */
		static constexpr double YOTTABYTE = 1024.0 * ZETTABYTE;

		/* ===========================================
		 * Units of energy
		 * ===========================================
		 */
		/**
		 * \brief Jule
		 */
		static constexpr double JOULE = (KILOGRAM * METRE * METRE) / (SECOND * SECOND);
		/**
		 * \brief Electrono-Volt
		 */
		static constexpr double ELECTRONO_VOLT = 1.6021766208E-19 * JOULE;
		/**
		 * \brief Kilo Electrono-Volt
		 */
		static constexpr double KILO_ELECTRONO_VOLT = KILO * ELECTRONO_VOLT;
		/**
		 * \brief Mega Electrono-Volt
		 */
		static constexpr double MEGA_ELECTRONO_VOLT = MEGA * ELECTRONO_VOLT;
		/**
		 * \brief Giga Electrono-Volt
		 */
		static constexpr double GIGA_ELECTRONO_VOLT = GIGA * ELECTRONO_VOLT;
		/**
		 * \brief Tera Electrono-Volt
		 */
		static constexpr double TERA_ELECTRONO_VOLT = TERA * ELECTRONO_VOLT;

		/* ===========================================
		 * Units of speed
		 * ===========================================
		 */
		/**
		 * \brief Metre per second
		 */
		static constexpr double METRE_PER_SECOND = METRE / SECOND;
		/**
		 * \brief Kilometre per hour
		 */
		static constexpr double KILOMETRE_PER_HOUR = KILOMETRE / HOUR;
		/**
		 * \brief Mile per hour
		 */
		static constexpr double MILE_PER_HOUR = MILE / HOUR;
		/**
		 * \brief Knot
		 */
		static constexpr double KNOT = 0.514444444 * METRE / SECOND;

		/* ===========================================
		 * Units of acceleration
		 * ===========================================
		 */
		/**
		 * \brief Metre per squared second
		 */
		static constexpr double METRE_PER_SECOND2 = METRE / (SECOND * SECOND);
		/**
		 * \brief Kilometre per squared hour
		 */
		static constexpr double KILOMETRE_PER_HOUR2 = KILOMETRE / (HOUR * HOUR);
		/**
		 * \brief Mile per squared hour
		 */
		static constexpr double MILE_PER_HOUR2 = MILE / (HOUR * HOUR);

		/* ===========================================
		 * Units of angle
		 * ===========================================
		 */
		/**
		 * \brief Radian (angle)
		 */
		static constexpr double RADIAN_ARC = 1.0;
		/**
		 * \brief Degree (angle)
		 */
		static constexpr double DEGREE_ARC = (Math::PI / 180.0) * RADIAN_ARC;
		/**
		 * \brief Minute (angle)
		 */
		static constexpr double MINUTE_ARC = DEGREE_ARC / 60.0;
		/**
		 * \brief Second (angle)
		 */
		static constexpr double SECOND_ARC = MINUTE_ARC / 60.0;

		/**
		 * \brief Returns the numeric value of a built-in unit or prefix.
		 * \param unitId The token identifier defined by \ref org::mariuszgromada::math::mxparser::parsertokens::Unit.
		 * \return The unit or prefix value, or `Double.NaN` if the identifier is unknown.
		 */
		static double getUnitValue(int unitId);
	};
} // namespace org::mariuszgromada::math::mxparser::mathcollection

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_MATHCOLLECTION_UNITS_H