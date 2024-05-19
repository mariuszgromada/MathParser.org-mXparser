/*
 * @(#)Units.java        6.0.0    2024-05-19
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
package org.mariuszgromada.math.mxparser.mathcollection;

import org.mariuszgromada.math.mxparser.parsertokens.Unit;

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
 * @version        5.2.0
 */
public final class Units {
	/* ===========================================
	 * Units prefixes
	 * ===========================================
	 */
	/**
	 * Percentage
	 */
	public static final double PERC = 0.01;
	/**
	 * Promil, Per mille
	 */
	public static final double PROMIL = 0.001;
	/**
	 * Yotta
	 */
	public static final double YOTTA = 1.0E24;
	/**
	 * Zetta
	 */
	public static final double ZETTA = 1.0E21;
	/**
	 * Exa
	 */
	public static final double EXA = 1.0E18;
	/**
	 * Peta
	 */
	public static final double PETA = 1.0E15;
	/**
	 * Tera
	 */
	public static final double TERA = 1.0E12;
	/**
	 * Giga
	 */
	public static final double GIGA = 1000000000.0;
	/**
	 * Mega
	 */
	public static final double MEGA = 1000000.0;
	/**
	 * Kilo
	 */
	public static final double KILO = 1000.0;
	/**
	 * Hecto
	 */
	public static final double HECTO = 100.0;
	/**
	 * Deca
	 */
	public static final double DECA = 10.0;
	/**
	 * Deci
	 */
	public static final double DECI = 0.1;
	/**
	 * Centi
	 */
	public static final double CENTI = 0.01;
	/**
	 * Milli
	 */
	public static final double MILLI = 0.001;
	/**
	 * Micro
	 */
	public static final double MICRO = 0.000001;
	/**
	 * Nano
	 */
	public static final double NANO = 0.000000001;
	/**
	 * Pico
	 */
	public static final double PICO = 1.0E-12;
	/**
	 * Femto
	 */
	public static final double FEMTO = 1.0E-15;
	/**
	 * Atto
	 */
	public static final double ATTO = 1.0E-18;
	/**
	 * Zepto
	 */
	public static final double ZEPTO = 1.0E-21;
	/**
	 * Yocto
	 */
	public static final double YOCTO = 1.0E-24;

	/* ===========================================
	 * Units of length / distance
	 * ===========================================
	 */
	/**
	 * Meter
	 */
	public static final double METRE = 1.0;
	/**
	 * Kilometer
	 */
	public static final double KILOMETRE = 1000.0 * METRE;
	/**
	 * Centimeter
	 */
	public static final double CENTIMETRE = CENTI * METRE;
	/**
	 * Millimetre
	 */
	public static final double MILLIMETRE = MILLI * METRE;
	/**
	 * Inch
	 */
	public static final double INCH = 2.54 * CENTIMETRE;
	/**
	 * Yard
	 */
	public static final double YARD = 0.9144 * METRE;
	/**
	 * Feet
	 */
	public static final double FEET = 30.48 * CENTIMETRE;
	/**
	 * Mile
	 */
	public static final double MILE = 1.609344 * KILOMETRE;
	/**
	 * Nautical mile
	 */
	public static final double NAUTICAL_MILE = 1.852 * KILOMETRE;

	/* ===========================================
	 * Units of area
	 * ===========================================
	 */
	/**
	 * Square metre
	 */
	public static final double METRE2 = METRE * METRE;
	/**
	 * Square centimetre
	 */
	public static final double CENTIMETRE2 = CENTIMETRE * CENTIMETRE;
	/**
	 * Square millimetre
	 */
	public static final double MILLIMETRE2 = MILLIMETRE * MILLIMETRE;
	/**
	 * Are
	 */
	public static final double ARE = (10.0 * METRE) * (10.0 * METRE);
	/**
	 * Hectare
	 */
	public static final double HECTARE = (100.0 * METRE) * (100.0 * METRE);
	/**
	 * Square kilometre
	 */
	public static final double KILOMETRE2 = KILOMETRE * KILOMETRE;
	/**
	 * Acre
	 */
	public static final double ACRE = (66.0 * FEET) * (660.0 * FEET);

	/* ===========================================
	 * Units of volume
	 * ===========================================
	 */
	/**
	 * Qubic millimetre
	 */
	public static final double MILLIMETRE3 = MILLIMETRE * MILLIMETRE * MILLIMETRE;
	/**
	 * Qubic centimetre
	 */
	public static final double CENTIMETRE3 = CENTIMETRE * CENTIMETRE * CENTIMETRE;
	/**
	 * Qubic metre
	 */
	public static final double METRE3 = METRE * METRE * METRE;
	/**
	 * Qubic kilometre
	 */
	public static final double KILOMETRE3 = KILOMETRE * KILOMETRE * KILOMETRE;
	/**
	 * Millilitre
	 */
	public static final double MILLILITRE = CENTIMETRE3;
	/**
	 * Litre
	 */
	public static final double LITRE = 1000.0 * MILLILITRE;
	/**
	 * Gallon
	 */
	public static final double GALLON = 3.78541178 * LITRE;
	/**
	 * Pint
	 */
	public static final double PINT = 473.176473 * MILLILITRE;

	/* ===========================================
	 * Units of time
	 * ===========================================
	 */
	/**
	 * Second
	 */
	public static final double SECOND = 1.0;
	/**
	 * Millisecond
	 */
	public static final double MILLISECOND = MILLI * SECOND;
	/**
	 * MINUTE
	 */
	public static final double MINUTE = 60.0 * SECOND;
	/**
	 * HOUR
	 */
	public static final double HOUR = 60.0 * MINUTE;
	/**
	 * DAY
	 */
	public static final double DAY = 24.0 * HOUR;
	/**
	 * WEEK
	 */
	public static final double WEEK = 7.0 * DAY;
	/**
	 * JULIAN YEAR
	 */
	public static final double JULIAN_YEAR = 365.25 * DAY;

	/* ===========================================
	 * Units of mass
	 * ===========================================
	 */
	/**
	 * Kilogram
	 */
	public static final double KILOGRAM = 1.0;
	/**
	 * Gram
	 */
	public static final double GRAM = 0.001 * KILOGRAM;
	/**
	 * Milligram
	 */
	public static final double MILLIGRAM = MILLI * GRAM;
	/**
	 * Decagram
	 */
	public static final double DECAGRAM = DECA * GRAM;
	/**
	 * Tonne
	 */
	public static final double TONNE = 1000.0 * KILOGRAM;
	/**
	 * Ounce
	 */
	public static final double OUNCE = 28.3495231 * GRAM;
	/**
	 * Pound
	 */
	public static final double POUND = 0.45359237 * KILOGRAM;

	/* ===========================================
	 * Units of Amount
	 * ===========================================
	 */
	public static final double MOLE = 1.0;

	/* ===========================================
	 * Units of Charge
	 * ===========================================
	 */
	/**
	 * Coulomb
	 */
	public static final double COULOMB = 1.0;

	/**
	 * Ampere
	 */
	public static final double AMPERE = COULOMB / SECOND;

	/* ===========================================
	 * Units of Temperature
	 * ===========================================
	 */
	/**
	 * Kelvin
	 */
	public static final double KELVIN = 1.0;

	/**
	 * Celcius
	 */
	public static final double CELCIUS = 1.0;

	/**
	 * Farenheight
	 */
	public static final double FARENHEIGHT = 1.8;

	/* ===========================================
	 * Units of information
	 * ===========================================
	 */
	/**
	 * Bit
	 */
	public static final double BIT = 1.0;
	/**
	 * Kilobit
	 */
	public static final double KILOBIT = 1024.0 * BIT;
	/**
	 * Megabit
	 */
	public static final double MEGABIT = 1024.0 * KILOBIT;
	/**
	 * Gigabit
	 */
	public static final double GIGABIT = 1024.0 * MEGABIT;
	/**
	 * Terabit
	 */
	public static final double TERABIT = 1024.0 * GIGABIT;
	/**
	 * Petabit
	 */
	public static final double PETABIT = 1024.0 * TERABIT;
	/**
	 * Exabit
	 */
	public static final double EXABIT = 1024.0 * PETABIT;
	/**
	 * Zettabit
	 */
	public static final double ZETTABIT = 1024.0 * EXABIT;
	/**
	 * Yottabit
	 */
	public static final double YOTTABIT = 1024.0 * ZETTABIT;
	/**
	 * Byte
	 */
	public static final double BYTE = 8.0 * BIT;
	/**
	 * Kilobyte
	 */
	public static final double KILOBYTE = 1024.0 * BYTE;
	/**
	 * Megabyte
	 */
	public static final double MEGABYTE = 1024.0 * KILOBYTE;
	/**
	 * Gigabyte
	 */
	public static final double GIGABYTE = 1024.0 * MEGABYTE;
	/**
	 * Terabyte
	 */
	public static final double TERABYTE = 1024.0 * GIGABYTE;
	/**
	 * Petabyte
	 */
	public static final double PETABYTE = 1024.0 * TERABYTE;
	/**
	 * Exabyte
	 */
	public static final double EXABYTE = 1024.0 * PETABYTE;
	/**
	 * Zettabyte
	 */
	public static final double ZETTABYTE = 1024.0 * EXABYTE;
	/**
	 * Yottabyte
	 */
	public static final double YOTTABYTE = 1024.0 * ZETTABYTE;

	/* ===========================================
	 * Units of energy
	 * ===========================================
	 */
	/**
	 * Jule
	 */
	public static final double JOULE = (KILOGRAM * METRE * METRE) / (SECOND * SECOND);
	/**
	 * Electrono-Volt
	 */
	public static final double ELECTRONO_VOLT = 1.6021766208E-19 * JOULE;
	/**
	 * Kilo Electrono-Volt
	 */
	public static final double KILO_ELECTRONO_VOLT = KILO * ELECTRONO_VOLT;
	/**
	 * Mega Electrono-Volt
	 */
	public static final double MEGA_ELECTRONO_VOLT = MEGA * ELECTRONO_VOLT;
	/**
	 * Giga Electrono-Volt
	 */
	public static final double GIGA_ELECTRONO_VOLT = GIGA * ELECTRONO_VOLT;
	/**
	 * Tera Electrono-Volt
	 */
	public static final double TERA_ELECTRONO_VOLT = TERA * ELECTRONO_VOLT;

	/* ===========================================
	 * Units of speed
	 * ===========================================
	 */
	/**
	 * Metre per second
	 */
	public static final double METRE_PER_SECOND = METRE / SECOND;
	/**
	 * Kilometre per hour
	 */
	public static final double KILOMETRE_PER_HOUR = KILOMETRE / HOUR;
	/**
	 * Mile per hour
	 */
	public static final double MILE_PER_HOUR = MILE / HOUR;
	/**
	 * Knot
	 */
	public static final double KNOT = 0.514444444 * METRE / SECOND;

	/* ===========================================
	 * Units of acceleration
	 * ===========================================
	 */
	/**
	 * Metre per squared second
	 */
	public static final double METRE_PER_SECOND2 = METRE / (SECOND * SECOND);
	/**
	 * Kilometre per squared hour
	 */
	public static final double KILOMETRE_PER_HOUR2 = KILOMETRE / (HOUR * HOUR);
	/**
	 * Mile per squared hour
	 */
	public static final double MILE_PER_HOUR2 = MILE / (HOUR * HOUR);

	/* ===========================================
	 * Units of angle
	 * ===========================================
	 */
	/**
	 * Radian (angle)
	 */
	public static final double RADIAN_ARC = 1.0;
	/**
	 * Degree (angle)
	 */
	public static final double DEGREE_ARC = (MathConstants.PI / 180.0) * RADIAN_ARC;
	/**
	 * Minute (angle)
	 */
	public static final double MINUTE_ARC = DEGREE_ARC / 60.0;
	/**
	 * Second (angle)
	 */
	public static final double SECOND_ARC = MINUTE_ARC / 60.0;
	/**
	 * Returns unit value, where unit is represented by the
	 * token id in the Unit class
	 *
	 * @param unitId
	 * @return Returns unit value if id is known, otherwise Double.NaN is returned.
	 *
	 * @see Unit
	 */
	public static double getUnitValue(int unitId) {
		switch (unitId) {
			case Unit.PERC_ID: return PERC;
			case Unit.PERM_ID: return PROMIL;
			/* Metric prefixes */
			case Unit.YOTTA_ID: return YOTTA;
			case Unit.ZETTA_ID: return ZETTA;
			case Unit.EXA_ID: return EXA;
			case Unit.PETA_ID: return PETA;
			case Unit.TERA_ID: return TERA;
			case Unit.GIGA_ID: return GIGA;
			case Unit.MEGA_ID: return MEGA;
			case Unit.KILO_ID: return KILO;
			case Unit.HECTO_ID: return HECTO;
			case Unit.DECA_ID: return DECA;
			case Unit.DECI_ID: return DECI;
			case Unit.CENTI_ID: return CENTI;
			case Unit.MILLI_ID: return MILLI;
			case Unit.MICRO_ID: return MICRO;
			case Unit.NANO_ID: return NANO;
			case Unit.PICO_ID: return PICO;
			case Unit.FEMTO_ID: return FEMTO;
			case Unit.ATTO_ID: return ATTO;
			case Unit.ZEPTO_ID: return ZEPTO;
			case Unit.YOCTO_ID: return YOCTO;
			/* Units of length / distance */
			case Unit.METRE_ID: return METRE;
			case Unit.KILOMETRE_ID: return KILOMETRE;
			case Unit.CENTIMETRE_ID: return CENTIMETRE;
			case Unit.MILLIMETRE_ID: return MILLIMETRE;
			case Unit.INCH_ID: return INCH;
			case Unit.YARD_ID: return YARD;
			case Unit.FEET_ID: return FEET;
			case Unit.MILE_ID: return MILE;
			case Unit.NAUTICAL_MILE_ID: return NAUTICAL_MILE;
			/* Units of area */
			case Unit.METRE2_ID: return METRE2;
			case Unit.CENTIMETRE2_ID: return CENTIMETRE2;
			case Unit.MILLIMETRE2_ID: return MILLIMETRE2;
			case Unit.ARE_ID: return ARE;
			case Unit.HECTARE_ID: return HECTARE;
			case Unit.ACRE_ID: return ACRE;
			case Unit.KILOMETRE2_ID: return KILOMETRE2;
			/* Units of volume */
			case Unit.MILLIMETRE3_ID: return MILLIMETRE3;
			case Unit.CENTIMETRE3_ID: return CENTIMETRE3;
			case Unit.METRE3_ID: return METRE3;
			case Unit.KILOMETRE3_ID: return KILOMETRE3;
			case Unit.MILLILITRE_ID: return MILLILITRE;
			case Unit.LITRE_ID: return LITRE;
			case Unit.GALLON_ID: return GALLON;
			case Unit.PINT_ID: return PINT;
			/* Units of time */
			case Unit.SECOND_ID: return SECOND;
			case Unit.MILLISECOND_ID: return MILLISECOND;
			case Unit.MINUTE_ID: return MINUTE;
			case Unit.HOUR_ID: return HOUR;
			case Unit.DAY_ID: return DAY;
			case Unit.WEEK_ID: return WEEK;
			case Unit.JULIAN_YEAR_ID: return JULIAN_YEAR;
			/* Units of mass */
			case Unit.KILOGRAM_ID: return KILOGRAM;
			case Unit.GRAM_ID: return GRAM;
			case Unit.MILLIGRAM_ID: return MILLIGRAM;
			case Unit.DECAGRAM_ID: return DECAGRAM;
			case Unit.TONNE_ID: return TONNE;
			case Unit.OUNCE_ID: return OUNCE;
			case Unit.POUND_ID: return POUND;
			/* Units of information */
			case Unit.BIT_ID: return BIT;
			case Unit.KILOBIT_ID: return KILOBIT;
			case Unit.MEGABIT_ID: return MEGABIT;
			case Unit.GIGABIT_ID: return GIGABIT;
			case Unit.TERABIT_ID: return TERABIT;
			case Unit.PETABIT_ID: return PETABIT;
			case Unit.EXABIT_ID: return EXABIT;
			case Unit.ZETTABIT_ID: return ZETTABIT;
			case Unit.YOTTABIT_ID: return YOTTABIT;
			case Unit.BYTE_ID: return BYTE;
			case Unit.KILOBYTE_ID: return KILOBYTE;
			case Unit.MEGABYTE_ID: return MEGABYTE;
			case Unit.GIGABYTE_ID: return GIGABYTE;
			case Unit.TERABYTE_ID: return TERABYTE;
			case Unit.PETABYTE_ID: return PETABYTE;
			case Unit.EXABYTE_ID: return EXABYTE;
			case Unit.ZETTABYTE_ID: return ZETTABYTE;
			case Unit.YOTTABYTE_ID: return YOTTABYTE;
			/* Units of energy */
			case Unit.JOULE_ID: return JOULE;
			case Unit.ELECTRONO_VOLT_ID: return ELECTRONO_VOLT;
			case Unit.KILO_ELECTRONO_VOLT_ID: return KILO_ELECTRONO_VOLT;
			case Unit.MEGA_ELECTRONO_VOLT_ID: return MEGA_ELECTRONO_VOLT;
			case Unit.GIGA_ELECTRONO_VOLT_ID: return GIGA_ELECTRONO_VOLT;
			case Unit.TERA_ELECTRONO_VOLT_ID: return TERA_ELECTRONO_VOLT;
			/* Units of speed */
			case Unit.METRE_PER_SECOND_ID: return METRE_PER_SECOND;
			case Unit.KILOMETRE_PER_HOUR_ID: return KILOMETRE_PER_HOUR;
			case Unit.MILE_PER_HOUR_ID: return MILE_PER_HOUR;
			case Unit.KNOT_ID: return KNOT;
			/* Units of acceleration */
			case Unit.METRE_PER_SECOND2_ID: return METRE_PER_SECOND2;
			case Unit.KILOMETRE_PER_HOUR2_ID: return KILOMETRE_PER_HOUR2;
			case Unit.MILE_PER_HOUR2_ID: return MILE_PER_HOUR2;
			/* Units of angle */
			case Unit.RADIAN_ARC_ID: return RADIAN_ARC;
			case Unit.DEGREE_ARC_ID: return DEGREE_ARC;
			case Unit.MINUTE_ARC_ID: return MINUTE_ARC;
			case Unit.SECOND_ARC_ID: return SECOND_ARC;
		}
		return Double.NaN;
	}
}