/*
 * @(#)Units.cs        5.0.4    2022-05-22
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
using System;

namespace org.mariuszgromada.math.mxparser.mathcollection {
	/**
	 * Units - class representing the most important units (length, area, volume, mass).
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
	 * @version        5.0.0
	 */
	[CLSCompliant(true)]
	public sealed class Units {
		/* ===========================================
		 * Units prefixes
		 * ===========================================
		 */
		/**
		 * Percentage
		 */
		public const double PERC = 0.01;
		/**
		 * Promil, Per mille
		 */
		public const double PROMIL = 0.001;
		/**
		 * Yotta
		 */
		public const double YOTTA = 1.0E24;
		/**
		 * Zetta
		 */
		public const double ZETTA = 1.0E21;
		/**
		 * Exa
		 */
		public const double EXA = 1.0E18;
		/**
		 * Peta
		 */
		public const double PETA = 1.0E15;
		/**
		 * Tera
		 */
		public const double TERA = 1.0E12;
		/**
		 * Giga
		 */
		public const double GIGA = 1000000000.0;
		/**
		 * Mega
		 */
		public const double MEGA = 1000000.0;
		/**
		 * Kilo
		 */
		public const double KILO = 1000.0;
		/**
		 * Hecto
		 */
		public const double HECTO = 100.0;
		/**
		 * Deca
		 */
		public const double DECA = 10.0;
		/**
		 * Deci
		 */
		public const double DECI = 0.1;
		/**
		 * Centi
		 */
		public const double CENTI = 0.01;
		/**
		 * Milli
		 */
		public const double MILLI = 0.001;
		/**
		 * Micro
		 */
		public const double MICRO = 0.000001;
		/**
		 * Nano
		 */
		public const double NANO = 0.000000001;
		/**
		 * Pico
		 */
		public const double PICO = 1.0E-12;
		/**
		 * Femto
		 */
		public const double FEMTO = 1.0E-15;
		/**
		 * Atto
		 */
		public const double ATTO = 1.0E-18;
		/**
		 * Zepto
		 */
		public const double ZEPTO = 1.0E-21;
		/**
		 * Yocto
		 */
		public const double YOCTO = 1.0E-24;

		/* ===========================================
		 * Units of length / distance
		 * ===========================================
		 */
		/**
		 * Meter
		 */
		public const double METRE = 1.0;
		/**
		 * Kilometer
		 */
		public const double KILOMETRE = 1000.0 * METRE;
		/**
		 * Centimeter
		 */
		public const double CENTIMETRE = CENTI * METRE;
		/**
		 * Millimetre
		 */
		public const double MILLIMETRE = MILLI * METRE;
		/**
		 * Inch
		 */
		public const double INCH = 2.54 * CENTIMETRE;
		/**
		 * Yard
		 */
		public const double YARD = 0.9144 * METRE;
		/**
		 * Feet
		 */
		public const double FEET = 30.48 * CENTIMETRE;
		/**
		 * Mile
		 */
		public const double MILE = 1.609344 * KILOMETRE;
		/**
		 * Nautical mile
		 */
		public const double NAUTICAL_MILE = 1.852 * KILOMETRE;

		/* ===========================================
		 * Units of area
		 * ===========================================
		 */
		/**
		 * Square metre
		 */
		public const double METRE2 = METRE * METRE;
		/**
		 * Square centimetre
		 */
		public const double CENTIMETRE2 = CENTIMETRE * CENTIMETRE;
		/**
		 * Square millimetre
		 */
		public const double MILLIMETRE2 = MILLIMETRE * MILLIMETRE;
		/**
		 * Are
		 */
		public const double ARE = (10.0 * METRE) * (10.0 * METRE);
		/**
		 * Hectare
		 */
		public const double HECTARE = (100.0 * METRE) * (100.0 * METRE);
		/**
		 * Square kilometre
		 */
		public const double KILOMETRE2 = KILOMETRE * KILOMETRE;
		/**
		 * Acre
		 */
		public const double ACRE = (66.0 * FEET) * (660.0 * FEET);

		/* ===========================================
		 * Units of volume
		 * ===========================================
		 */
		/**
		 * Qubic millimetre
		 */
		public const double MILLIMETRE3 = MILLIMETRE * MILLIMETRE * MILLIMETRE;
		/**
		 * Qubic centimetre
		 */
		public const double CENTIMETRE3 = CENTIMETRE * CENTIMETRE * CENTIMETRE;
		/**
		 * Qubic metre
		 */
		public const double METRE3 = METRE * METRE * METRE;
		/**
		 * Qubic kilometre
		 */
		public const double KILOMETRE3 = KILOMETRE * KILOMETRE * KILOMETRE;
		/**
		 * Millilitre
		 */
		public const double MILLILITRE = CENTIMETRE3;
		/**
		 * Litre
		 */
		public const double LITRE = 1000.0 * MILLILITRE;
		/**
		 * Gallon
		 */
		public const double GALLON = 3.78541178 * LITRE;
		/**
		 * Pint
		 */
		public const double PINT = 473.176473 * MILLILITRE;

		/* ===========================================
		 * Units of time
		 * ===========================================
		 */
		/**
		 * Second
		 */
		public const double SECOND = 1.0;
		/**
		 * Millisecond
		 */
		public const double MILLISECOND = MILLI * SECOND;
		/**
		 * MINUTE
		 */
		public const double MINUTE = 60.0 * SECOND;
		/**
		 * HOUR
		 */
		public const double HOUR = 60.0 * MINUTE;
		/**
		 * DAY
		 */
		public const double DAY = 24.0 * HOUR;
		/**
		 * WEEK
		 */
		public const double WEEK = 7.0 * DAY;
		/**
		 * JULIAN YEAR
		 */
		public const double JULIAN_YEAR = 365.25 * DAY;

		/* ===========================================
		 * Units of mass
		 * ===========================================
		 */
		/**
		 * Kilogram
		 */
		public const double KILOGRAM = 1.0;
		/**
		 * Gram
		 */
		public const double GRAM = 0.001 * KILOGRAM;
		/**
		 * Milligram
		 */
		public const double MILLIGRAM = MILLI * GRAM;
		/**
		 * Decagram
		 */
		public const double DECAGRAM = DECA * GRAM;
		/**
		 * Tonne
		 */
		public const double TONNE = 1000.0 * KILOGRAM;
		/**
		 * Ounce
		 */
		public const double OUNCE = 28.3495231 * GRAM;
		/**
		 * Pound
		 */
		public const double POUND = 0.45359237 * KILOGRAM;

		/* ===========================================
		 * Units of Amount
		 * ===========================================
		 */
		public const double MOLE = 1.0;

		/* ===========================================
		 * Units of Charge
		 * ===========================================
		 */
		/**
		 * Coulomb
		 */
		public const double COULOMB = 1.0;

		/**
		 * Ampere
		 */
		public const double AMPERE = COULOMB / SECOND;

        /* ===========================================
         * Units of Temperature
         * ===========================================
         */
		/**
		 * Kelvin
		 */
		public const double KELVIN = 1.0;

		/**
		 * Celcius
		 */
		public const double CELCIUS = 1.0;

		/**
		 * Farenheight
		 */
		public const double FARENHEIGHT = 1.8;

		/* ===========================================
		 * Units of information
		 * ===========================================
		 */
		/**
		 * Bit
		 */
		public const double BIT = 1.0;
		/**
		 * Kilobit
		 */
		public const double KILOBIT = 1024.0 * BIT;
		/**
		 * Megabit
		 */
		public const double MEGABIT = 1024.0 * KILOBIT;
		/**
		 * Gigabit
		 */
		public const double GIGABIT = 1024.0 * MEGABIT;
		/**
		 * Terabit
		 */
		public const double TERABIT = 1024.0 * GIGABIT;
		/**
		 * Petabit
		 */
		public const double PETABIT = 1024.0 * TERABIT;
		/**
		 * Exabit
		 */
		public const double EXABIT = 1024.0 * PETABIT;
		/**
		 * Zettabit
		 */
		public const double ZETTABIT = 1024.0 * EXABIT;
		/**
		 * Yottabit
		 */
		public const double YOTTABIT = 1024.0 * ZETTABIT;
		/**
		 * Byte
		 */
		public const double BYTE = 8.0 * BIT;
		/**
		 * Kilobyte
		 */
		public const double KILOBYTE = 1024.0 * BYTE;
		/**
		 * Megabyte
		 */
		public const double MEGABYTE = 1024.0 * KILOBYTE;
		/**
		 * Gigabyte
		 */
		public const double GIGABYTE = 1024.0 * MEGABYTE;
		/**
		 * Terabyte
		 */
		public const double TERABYTE = 1024.0 * GIGABYTE;
		/**
		 * Petabyte
		 */
		public const double PETABYTE = 1024.0 * TERABYTE;
		/**
		 * Exabyte
		 */
		public const double EXABYTE = 1024.0 * PETABYTE;
		/**
		 * Zettabyte
		 */
		public const double ZETTABYTE = 1024.0 * EXABYTE;
		/**
		 * Yottabyte
		 */
		public const double YOTTABYTE = 1024.0 * ZETTABYTE;

		/* ===========================================
		 * Units of energy
		 * ===========================================
		 */
		/**
		 * Jule
		 */
		public const double JOULE = (KILOGRAM * METRE * METRE) / (SECOND * SECOND);
		/**
		 * Electrono-Volt
		 */
		public const double ELECTRONO_VOLT = 1.6021766208E-19 * JOULE;
		/**
		 * Kilo Electrono-Volt
		 */
		public const double KILO_ELECTRONO_VOLT = KILO * ELECTRONO_VOLT;
		/**
		 * Mega Electrono-Volt
		 */
		public const double MEGA_ELECTRONO_VOLT = MEGA * ELECTRONO_VOLT;
		/**
		 * Giga Electrono-Volt
		 */
		public const double GIGA_ELECTRONO_VOLT = GIGA * ELECTRONO_VOLT;
		/**
		 * Tera Electrono-Volt
		 */
		public const double TERA_ELECTRONO_VOLT = TERA * ELECTRONO_VOLT;

		/* ===========================================
		 * Units of speed
		 * ===========================================
		 */
		/**
		 * Metre per second
		 */
		public const double METRE_PER_SECOND = METRE / SECOND;
		/**
		 * Kilometre per hour
		 */
		public const double KILOMETRE_PER_HOUR = KILOMETRE / HOUR;
		/**
		 * Mile per hour
		 */
		public const double MILE_PER_HOUR = MILE / HOUR;
		/**
		 * Knot
		 */
		public const double KNOT = 0.514444444 * METRE / SECOND;

		/* ===========================================
		 * Units of acceleration
		 * ===========================================
		 */
		/**
		 * Metre per squared second
		 */
		public const double METRE_PER_SECOND2 = METRE / (SECOND * SECOND);
		/**
		 * Kilometre per squared hour
		 */
		public const double KILOMETRE_PER_HOUR2 = KILOMETRE / (HOUR * HOUR);
		/**
		 * Mile per squared hour
		 */
		public const double MILE_PER_HOUR2 = MILE / (HOUR * HOUR);

		/* ===========================================
		 * Units of angle
		 * ===========================================
		 */
		/**
		 * Radian (angle)
		 */
		public const double RADIAN_ARC = 1.0;
		/**
		 * Degree (angle)
		 */
		public const double DEGREE_ARC = (MathConstants.PI / 180.0) * RADIAN_ARC;
		/**
		 * Minute (angle)
		 */
		public const double MINUTE_ARC = DEGREE_ARC / 60.0;
		/**
		 * Second (angle)
		 */
		public const double SECOND_ARC = MINUTE_ARC / 60.0;
	}
}