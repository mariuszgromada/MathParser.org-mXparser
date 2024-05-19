/*
 * @(#)Unit.cs        6.0.0    2024-05-19
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
using System;

namespace org.mariuszgromada.math.mxparser.parsertokens {
	/**
	 * Units - mXparser tokens definition.
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
	 * @version        6.0.0
	 */
	public sealed class Unit {
		/*
		 * Unit - token type id.
		 */
		public const int TYPE_ID = 12;
        public static String TYPE_DESC = ParserSymbol.NA;
        /*
		 * Unit - tokens id.
		 */
        /* Ratio, Fraction */
        public const int PERC_ID				= 1;
		public const int PERM_ID				= 2;
		/* Metric prefixes */
		public const int YOTTA_ID				= 101;
		public const int ZETTA_ID				= 102;
		public const int EXA_ID					= 103;
		public const int PETA_ID				= 104;
		public const int TERA_ID				= 105;
		public const int GIGA_ID				= 106;
		public const int MEGA_ID				= 107;
		public const int KILO_ID				= 108;
		public const int HECTO_ID				= 109;
		public const int DECA_ID				= 110;
		public const int DECI_ID				= 111;
		public const int CENTI_ID				= 112;
		public const int MILLI_ID				= 113;
		public const int MICRO_ID				= 114;
		public const int NANO_ID				= 115;
		public const int PICO_ID				= 116;
		public const int FEMTO_ID				= 117;
		public const int ATTO_ID				= 118;
		public const int ZEPTO_ID				= 119;
		public const int YOCTO_ID				= 120;
		/* Units of length / distance */
		public const int METRE_ID				= 201;
		public const int KILOMETRE_ID			= 202;
		public const int CENTIMETRE_ID			= 203;
		public const int MILLIMETRE_ID			= 204;
		public const int INCH_ID				= 205;
		public const int YARD_ID				= 206;
		public const int FEET_ID				= 207;
		public const int MILE_ID				= 208;
		public const int NAUTICAL_MILE_ID		= 209;
		/* Units of area */
		public const int METRE2_ID				= 301;
		public const int CENTIMETRE2_ID			= 302;
		public const int MILLIMETRE2_ID			= 303;
		public const int ARE_ID					= 304;
		public const int HECTARE_ID				= 305;
		public const int ACRE_ID				= 306;
		public const int KILOMETRE2_ID			= 307;
		/* Units of volume */
		public const int MILLIMETRE3_ID			= 401;
		public const int CENTIMETRE3_ID			= 402;
		public const int METRE3_ID				= 403;
		public const int KILOMETRE3_ID			= 404;
		public const int MILLILITRE_ID			= 405;
		public const int LITRE_ID				= 406;
		public const int GALLON_ID				= 407;
		public const int PINT_ID				= 408;
		/* Units of time */
		public const int SECOND_ID				= 501;
		public const int MILLISECOND_ID			= 502;
		public const int MINUTE_ID				= 503;
		public const int HOUR_ID				= 504;
		public const int DAY_ID					= 505;
		public const int WEEK_ID				= 506;
		public const int JULIAN_YEAR_ID			= 507;
		/* Units of mass */
		public const int KILOGRAM_ID			= 508;
		public const int GRAM_ID				= 509;
		public const int MILLIGRAM_ID			= 510;
		public const int DECAGRAM_ID			= 511;
		public const int TONNE_ID				= 512;
		public const int OUNCE_ID				= 513;
		public const int POUND_ID				= 514;
		/* Units of information */
		public const int BIT_ID					= 601;
		public const int KILOBIT_ID				= 602;
		public const int MEGABIT_ID				= 603;
		public const int GIGABIT_ID				= 604;
		public const int TERABIT_ID				= 605;
		public const int PETABIT_ID				= 606;
		public const int EXABIT_ID				= 607;
		public const int ZETTABIT_ID			= 608;
		public const int YOTTABIT_ID			= 609;
		public const int BYTE_ID				= 610;
		public const int KILOBYTE_ID			= 611;
		public const int MEGABYTE_ID			= 612;
		public const int GIGABYTE_ID			= 613;
		public const int TERABYTE_ID			= 614;
		public const int PETABYTE_ID			= 615;
		public const int EXABYTE_ID				= 616;
		public const int ZETTABYTE_ID			= 617;
		public const int YOTTABYTE_ID			= 618;
		/* Units of energy */
		public const int JOULE_ID				= 701;
		public const int ELECTRONO_VOLT_ID		= 702;
		public const int KILO_ELECTRONO_VOLT_ID	= 703;
		public const int MEGA_ELECTRONO_VOLT_ID	= 704;
		public const int GIGA_ELECTRONO_VOLT_ID	= 705;
		public const int TERA_ELECTRONO_VOLT_ID	= 706;
		/* Units of speed */
		public const int METRE_PER_SECOND_ID	= 801;
		public const int KILOMETRE_PER_HOUR_ID	= 802;
		public const int MILE_PER_HOUR_ID		= 803;
		public const int KNOT_ID				= 804;
		/* Units of acceleration */
		public const int METRE_PER_SECOND2_ID	= 901;
		public const int KILOMETRE_PER_HOUR2_ID	= 902;
		public const int MILE_PER_HOUR2_ID		= 903;
		/* Units of angle */
		public const int RADIAN_ARC_ID			= 1001;
		public const int DEGREE_ARC_ID			= 1002;
		public const int MINUTE_ARC_ID			= 1003;
		public const int SECOND_ARC_ID			= 1004;
		/*
		 * Unit - tokens key words.
		 */
		/* Ratio, Fraction */
		public const String PERC_STR				= "[%]";
		public const String PERM_STR				= "[%%]";
		/* Metric prefixes */
		public const String YOTTA_STR				= "[Y]";
		public const String YOTTA_SEPT_STR			= "[sept]";
		public const String ZETTA_STR				= "[Z]";
		public const String ZETTA_SEXT_STR			= "[sext]";
		public const String EXA_STR					= "[E]";
		public const String EXA_QUINT_STR			= "[quint]";
		public const String PETA_STR				= "[P]";
		public const String PETA_QUAD_STR			= "[quad]";
		public const String TERA_STR				= "[T]";
		public const String TERA_TRIL_STR			= "[tril]";
		public const String GIGA_STR				= "[G]";
		public const String GIGA_BIL_STR			= "[bil]";
		public const String MEGA_STR				= "[M]";
		public const String MEGA_MIL_STR			= "[mil]";
		public const String KILO_STR				= "[k]";
		public const String KILO_TH_STR				= "[th]";
		public const String HECTO_STR				= "[hecto]";
		public const String HECTO_HUND_STR			= "[hund]";
		public const String DECA_STR				= "[deca]";
		public const String DECA_TEN_STR			= "[ten]";
		public const String DECI_STR				= "[deci]";
		public const String CENTI_STR				= "[centi]";
		public const String MILLI_STR				= "[milli]";
		public const String MICRO_STR				= "[mic]";
		public const String NANO_STR				= "[n]";
		public const String PICO_STR				= "[p]";
		public const String FEMTO_STR				= "[f]";
		public const String ATTO_STR				= "[a]";
		public const String ZEPTO_STR				= "[z]";
		public const String YOCTO_STR				= "[y]";
		/* Units of length / distance */
		public const String METRE_STR				= "[m]";
		public const String KILOMETRE_STR			= "[km]";
		public const String CENTIMETRE_STR			= "[cm]";
		public const String MILLIMETRE_STR			= "[mm]";
		public const String INCH_STR				= "[inch]";
		public const String YARD_STR				= "[yd]";
		public const String FEET_STR				= "[ft]";
		public const String MILE_STR				= "[mile]";
		public const String NAUTICAL_MILE_STR		= "[nmi]";
		/* Units of area */
		public const String METRE2_STR				= "[m2]";
		public const String CENTIMETRE2_STR			= "[cm2]";
		public const String MILLIMETRE2_STR			= "[mm2]";
		public const String ARE_STR					= "[are]";
		public const String HECTARE_STR				= "[ha]";
		public const String ACRE_STR				= "[acre]";
		public const String KILOMETRE2_STR			= "[km2]";
		/* Units of volume */
		public const String MILLIMETRE3_STR			= "[mm3]";
		public const String CENTIMETRE3_STR			= "[cm3]";
		public const String METRE3_STR				= "[m3]";
		public const String KILOMETRE3_STR			= "[km3]";
		public const String MILLILITRE_STR			= "[ml]";
		public const String LITRE_STR				= "[l]";
		public const String GALLON_STR				= "[gall]";
		public const String PINT_STR				= "[pint]";
		/* Units of time */
		public const String SECOND_STR				= "[s]";
		public const String MILLISECOND_STR			= "[ms]";
		public const String MINUTE_STR				= "[min]";
		public const String HOUR_STR				= "[h]";
		public const String DAY_STR					= "[day]";
		public const String WEEK_STR				= "[week]";
		public const String JULIAN_YEAR_STR			= "[yearj]";
		/* Units of mass */
		public const String KILOGRAM_STR			= "[kg]";
		public const String GRAM_STR				= "[gr]";
		public const String MILLIGRAM_STR			= "[mg]";
		public const String DECAGRAM_STR			= "[dag]";
		public const String TONNE_STR				= "[t]";
		public const String OUNCE_STR				= "[oz]";
		public const String POUND_STR				= "[lb]";
		/* Units of information */
		public const String BIT_STR					= "[b]";
		public const String KILOBIT_STR				= "[kb]";
		public const String MEGABIT_STR				= "[Mb]";
		public const String GIGABIT_STR				= "[Gb]";
		public const String TERABIT_STR				= "[Tb]";
		public const String PETABIT_STR				= "[Pb]";
		public const String EXABIT_STR				= "[Eb]";
		public const String ZETTABIT_STR			= "[Zb]";
		public const String YOTTABIT_STR			= "[Yb]";
		public const String BYTE_STR				= "[B]";
		public const String KILOBYTE_STR			= "[kB]";
		public const String MEGABYTE_STR			= "[MB]";
		public const String GIGABYTE_STR			= "[GB]";
		public const String TERABYTE_STR			= "[TB]";
		public const String PETABYTE_STR			= "[PB]";
		public const String EXABYTE_STR				= "[EB]";
		public const String ZETTABYTE_STR			= "[ZB]";
		public const String YOTTABYTE_STR			= "[YB]";
		/* Units of energy */
		public const String JOULE_STR				= "[J]";
		public const String ELECTRONO_VOLT_STR		= "[eV]";
		public const String KILO_ELECTRONO_VOLT_STR	= "[keV]";
		public const String MEGA_ELECTRONO_VOLT_STR	= "[MeV]";
		public const String GIGA_ELECTRONO_VOLT_STR	= "[GeV]";
		public const String TERA_ELECTRONO_VOLT_STR	= "[TeV]";
		/* Units of speed */
		public const String METRE_PER_SECOND_STR	= "[m/s]";
		public const String KILOMETRE_PER_HOUR_STR	= "[km/h]";
		public const String MILE_PER_HOUR_STR		= "[mi/h]";
		public const String KNOT_STR				= "[knot]";
		/* Units of acceleration */
		public const String METRE_PER_SECOND2_STR	= "[m/s2]";
		public const String KILOMETRE_PER_HOUR2_STR	= "[km/h2]";
		public const String MILE_PER_HOUR2_STR		= "[mi/h2]";
		/* Units of angle */
		public const String RADIAN_ARC_STR			= "[rad]";
		public const String DEGREE_ARC_STR			= "[deg]";
		public const String MINUTE_ARC_STR			= "[']";
		public const String SECOND_ARC_STR			= "['']";
		/*
		 * Unit - syntax.
		 */
		/* Ratio, Fraction */
		public const String PERC_SYN				= PERC_STR;
		public const String PERM_SYN				= PERM_STR;
		/* Metric prefixes */
		public const String YOTTA_SYN				= YOTTA_STR;
		public const String YOTTA_SEPT_SYN			= YOTTA_SEPT_STR;
		public const String ZETTA_SYN				= ZETTA_STR;
		public const String ZETTA_SEXT_SYN			= ZETTA_SEXT_STR;
		public const String EXA_SYN					= EXA_STR;
		public const String EXA_QUINT_SYN			= EXA_QUINT_STR;
		public const String PETA_SYN				= PETA_STR;
		public const String PETA_QUAD_SYN			= PETA_QUAD_STR;
		public const String TERA_SYN				= TERA_STR;
		public const String TERA_TRIL_SYN			= TERA_TRIL_STR;
		public const String GIGA_SYN				= GIGA_STR;
		public const String GIGA_BIL_SYN			= GIGA_BIL_STR;
		public const String MEGA_SYN				= MEGA_STR;
		public const String MEGA_MIL_SYN			= MEGA_MIL_STR;
		public const String KILO_SYN				= KILO_STR;
		public const String KILO_TH_SYN				= KILO_TH_STR;
		public const String HECTO_SYN				= HECTO_STR;
		public const String HECTO_HUND_SYN			= HECTO_HUND_STR;
		public const String DECA_SYN				= DECA_STR;
		public const String DECA_TEN_SYN			= DECA_TEN_STR;
		public const String DECI_SYN				= DECI_STR;
		public const String CENTI_SYN				= CENTI_STR;
		public const String MILLI_SYN				= MILLI_STR;
		public const String MICRO_SYN				= MICRO_STR;
		public const String NANO_SYN				= NANO_STR;
		public const String PICO_SYN				= PICO_STR;
		public const String FEMTO_SYN				= FEMTO_STR;
		public const String ATTO_SYN				= ATTO_STR;
		public const String ZEPTO_SYN				= ZEPTO_STR;
		public const String YOCTO_SYN				= YOCTO_STR;
		/* Units of length / distance */
		public const String METRE_SYN				= METRE_STR;
		public const String KILOMETRE_SYN			= KILOMETRE_STR;
		public const String CENTIMETRE_SYN			= CENTIMETRE_STR;
		public const String MILLIMETRE_SYN			= MILLIMETRE_STR;
		public const String INCH_SYN				= INCH_STR;
		public const String YARD_SYN				= YARD_STR;
		public const String FEET_SYN				= FEET_STR;
		public const String MILE_SYN				= MILE_STR;
		public const String NAUTICAL_MILE_SYN		= NAUTICAL_MILE_STR;
		/* Units of area */
		public const String METRE2_SYN				= METRE2_STR;
		public const String CENTIMETRE2_SYN			= CENTIMETRE2_STR;
		public const String MILLIMETRE2_SYN			= MILLIMETRE2_STR;
		public const String ARE_SYN					= ARE_STR;
		public const String HECTARE_SYN				= HECTARE_STR;
		public const String ACRE_SYN				= ACRE_STR;
		public const String KILOMETRE2_SYN			= KILOMETRE2_STR;
		/* Units of volume */
		public const String MILLIMETRE3_SYN			= MILLIMETRE3_STR;
		public const String CENTIMETRE3_SYN			= CENTIMETRE3_STR;
		public const String METRE3_SYN				= METRE3_STR;
		public const String KILOMETRE3_SYN			= KILOMETRE3_STR;
		public const String MILLILITRE_SYN			= MILLILITRE_STR;
		public const String LITRE_SYN				= LITRE_STR;
		public const String GALLON_SYN				= GALLON_STR;
		public const String PINT_SYN				= PINT_STR;
		/* Units of time */
		public const String SECOND_SYN				= SECOND_STR;
		public const String MILLISECOND_SYN			= MILLISECOND_STR;
		public const String MINUTE_SYN				= MINUTE_STR;
		public const String HOUR_SYN				= HOUR_STR;
		public const String DAY_SYN					= DAY_STR;
		public const String WEEK_SYN				= WEEK_STR;
		public const String JULIAN_YEAR_SYN			= JULIAN_YEAR_STR;
		/* Units of mass */
		public const String KILOGRAM_SYN			= KILOGRAM_STR;
		public const String GRAM_SYN				= GRAM_STR;
		public const String MILLIGRAM_SYN			= MILLIGRAM_STR;
		public const String DECAGRAM_SYN			= DECAGRAM_STR;
		public const String TONNE_SYN				= TONNE_STR;
		public const String OUNCE_SYN				= OUNCE_STR;
		public const String POUND_SYN				= POUND_STR;
		/* Units of information */
		public const String BIT_SYN					= BIT_STR;
		public const String KILOBIT_SYN				= KILOBIT_STR;
		public const String MEGABIT_SYN				= MEGABIT_STR;
		public const String GIGABIT_SYN				= GIGABIT_STR;
		public const String TERABIT_SYN				= TERABIT_STR;
		public const String PETABIT_SYN				= PETABIT_STR;
		public const String EXABIT_SYN				= EXABIT_STR;
		public const String ZETTABIT_SYN			= ZETTABIT_STR;
		public const String YOTTABIT_SYN			= YOTTABIT_STR;
		public const String BYTE_SYN				= BYTE_STR;
		public const String KILOBYTE_SYN			= KILOBYTE_STR;
		public const String MEGABYTE_SYN			= MEGABYTE_STR;
		public const String GIGABYTE_SYN			= GIGABYTE_STR;
		public const String TERABYTE_SYN			= TERABYTE_STR;
		public const String PETABYTE_SYN			= PETABYTE_STR;
		public const String EXABYTE_SYN				= EXABYTE_STR;
		public const String ZETTABYTE_SYN			= ZETTABYTE_STR;
		public const String YOTTABYTE_SYN			= YOTTABYTE_STR;
		/* Units of energy */
		public const String JOULE_SYN				= JOULE_STR;
		public const String ELECTRONO_VOLT_SYN		= ELECTRONO_VOLT_STR;
		public const String KILO_ELECTRONO_VOLT_SYN	= KILO_ELECTRONO_VOLT_STR;
		public const String MEGA_ELECTRONO_VOLT_SYN	= MEGA_ELECTRONO_VOLT_STR;
		public const String GIGA_ELECTRONO_VOLT_SYN	= GIGA_ELECTRONO_VOLT_STR;
		public const String TERA_ELECTRONO_VOLT_SYN	= TERA_ELECTRONO_VOLT_STR;
		/* Units of speed */
		public const String METRE_PER_SECOND_SYN	= METRE_PER_SECOND_STR;
		public const String KILOMETRE_PER_HOUR_SYN	= KILOMETRE_PER_HOUR_STR;
		public const String MILE_PER_HOUR_SYN		= MILE_PER_HOUR_STR;
		public const String KNOT_SYN					= KNOT_STR;
		/* Units of acceleration */
		public const String METRE_PER_SECOND2_SYN	= METRE_PER_SECOND2_STR;
		public const String KILOMETRE_PER_HOUR2_SYN	= KILOMETRE_PER_HOUR2_STR;
		public const String MILE_PER_HOUR2_SYN		= MILE_PER_HOUR2_STR;
		/* Units of angle */
		public const String RADIAN_ARC_SYN			= RADIAN_ARC_STR;
		public const String DEGREE_ARC_SYN			= DEGREE_ARC_STR;
		public const String MINUTE_ARC_SYN			= MINUTE_ARC_STR;
		public const String SECOND_ARC_SYN			= SECOND_ARC_STR;

        /*
		 * Unit - tokens description.
		 */
        /* Ratio, Fraction */
        public static String PERC_DESC = ParserSymbol.NA;
        public static String PERM_DESC = ParserSymbol.NA;
        public static String YOTTA_DESC = ParserSymbol.NA;
        public static String ZETTA_DESC = ParserSymbol.NA;
        public static String EXA_DESC = ParserSymbol.NA;
        public static String PETA_DESC = ParserSymbol.NA;
        public static String TERA_DESC = ParserSymbol.NA;
        public static String GIGA_DESC = ParserSymbol.NA;
        public static String MEGA_DESC = ParserSymbol.NA;
        public static String KILO_DESC = ParserSymbol.NA;
        public static String HECTO_DESC = ParserSymbol.NA;
        public static String DECA_DESC = ParserSymbol.NA;
        public static String DECI_DESC = ParserSymbol.NA;
        public static String CENTI_DESC = ParserSymbol.NA;
        public static String MILLI_DESC = ParserSymbol.NA;
        public static String MICRO_DESC = ParserSymbol.NA;
        public static String NANO_DESC = ParserSymbol.NA;
        public static String PICO_DESC = ParserSymbol.NA;
        public static String FEMTO_DESC = ParserSymbol.NA;
        public static String ATTO_DESC = ParserSymbol.NA;
        public static String ZEPTO_DESC = ParserSymbol.NA;
        public static String YOCTO_DESC = ParserSymbol.NA;
        public static String METRE_DESC = ParserSymbol.NA;
        public static String KILOMETRE_DESC = ParserSymbol.NA;
        public static String CENTIMETRE_DESC = ParserSymbol.NA;
        public static String MILLIMETRE_DESC = ParserSymbol.NA;
        public static String INCH_DESC = ParserSymbol.NA;
        public static String YARD_DESC = ParserSymbol.NA;
        public static String FEET_DESC = ParserSymbol.NA;
        public static String MILE_DESC = ParserSymbol.NA;
        public static String NAUTICAL_MILE_DESC = ParserSymbol.NA;
        public static String METRE2_DESC = ParserSymbol.NA;
        public static String CENTIMETRE2_DESC = ParserSymbol.NA;
        public static String MILLIMETRE2_DESC = ParserSymbol.NA;
        public static String ARE_DESC = ParserSymbol.NA;
        public static String HECTARE_DESC = ParserSymbol.NA;
        public static String ACRE_DESC = ParserSymbol.NA;
        public static String KILOMETRE2_DESC = ParserSymbol.NA;
        public static String MILLIMETRE3_DESC = ParserSymbol.NA;
        public static String CENTIMETRE3_DESC = ParserSymbol.NA;
        public static String METRE3_DESC = ParserSymbol.NA;
        public static String KILOMETRE3_DESC = ParserSymbol.NA;
        public static String MILLILITRE_DESC = ParserSymbol.NA;
        public static String LITRE_DESC = ParserSymbol.NA;
        public static String GALLON_DESC = ParserSymbol.NA;
        public static String PINT_DESC = ParserSymbol.NA;
        public static String SECOND_DESC = ParserSymbol.NA;
        public static String MILLISECOND_DESC = ParserSymbol.NA;
        public static String MINUTE_DESC = ParserSymbol.NA;
        public static String HOUR_DESC = ParserSymbol.NA;
        public static String DAY_DESC = ParserSymbol.NA;
        public static String WEEK_DESC = ParserSymbol.NA;
        public static String JULIAN_YEAR_DESC = ParserSymbol.NA;
        public static String KILOGRAM_DESC = ParserSymbol.NA;
        public static String GRAM_DESC = ParserSymbol.NA;
        public static String MILLIGRAM_DESC = ParserSymbol.NA;
        public static String DECAGRAM_DESC = ParserSymbol.NA;
        public static String TONNE_DESC = ParserSymbol.NA;
        public static String OUNCE_DESC = ParserSymbol.NA;
        public static String POUND_DESC = ParserSymbol.NA;
        public static String BIT_DESC = ParserSymbol.NA;
        public static String KILOBIT_DESC = ParserSymbol.NA;
        public static String MEGABIT_DESC = ParserSymbol.NA;
        public static String GIGABIT_DESC = ParserSymbol.NA;
        public static String TERABIT_DESC = ParserSymbol.NA;
        public static String PETABIT_DESC = ParserSymbol.NA;
        public static String EXABIT_DESC = ParserSymbol.NA;
        public static String ZETTABIT_DESC = ParserSymbol.NA;
        public static String YOTTABIT_DESC = ParserSymbol.NA;
        public static String BYTE_DESC = ParserSymbol.NA;
        public static String KILOBYTE_DESC = ParserSymbol.NA;
        public static String MEGABYTE_DESC = ParserSymbol.NA;
        public static String GIGABYTE_DESC = ParserSymbol.NA;
        public static String TERABYTE_DESC = ParserSymbol.NA;
        public static String PETABYTE_DESC = ParserSymbol.NA;
        public static String EXABYTE_DESC = ParserSymbol.NA;
        public static String ZETTABYTE_DESC = ParserSymbol.NA;
        public static String YOTTABYTE_DESC = ParserSymbol.NA;
        public static String JOULE_DESC = ParserSymbol.NA;
        public static String ELECTRONO_VOLT_DESC = ParserSymbol.NA;
        public static String KILO_ELECTRONO_VOLT_DESC = ParserSymbol.NA;
        public static String MEGA_ELECTRONO_VOLT_DESC = ParserSymbol.NA;
        public static String GIGA_ELECTRONO_VOLT_DESC = ParserSymbol.NA;
        public static String TERA_ELECTRONO_VOLT_DESC = ParserSymbol.NA;
        public static String METRE_PER_SECOND_DESC = ParserSymbol.NA;
        public static String KILOMETRE_PER_HOUR_DESC = ParserSymbol.NA;
        public static String MILE_PER_HOUR_DESC = ParserSymbol.NA;
        public static String KNOT_DESC = ParserSymbol.NA;
        public static String METRE_PER_SECOND2_DESC = ParserSymbol.NA;
        public static String KILOMETRE_PER_HOUR2_DESC = ParserSymbol.NA;
        public static String MILE_PER_HOUR2_DESC = ParserSymbol.NA;
        public static String RADIAN_ARC_DESC = ParserSymbol.NA;
        public static String DEGREE_ARC_DESC = ParserSymbol.NA;
        public static String MINUTE_ARC_DESC = ParserSymbol.NA;
        public static String SECOND_ARC_DESC = ParserSymbol.NA;
        /*
		 * Unit - since.
		 */
        /* Ratio, Fraction */
        public const String PERC_SINCE					= mXparser.NAMEv40;
		public const String PERM_SINCE					= mXparser.NAMEv40;
		/* Metric prefixes */
		public const String YOTTA_SINCE					= mXparser.NAMEv40;
		public const String YOTTA_SEPT_SINCE			= mXparser.NAMEv40;
		public const String ZETTA_SINCE					= mXparser.NAMEv40;
		public const String ZETTA_SEXT_SINCE			= mXparser.NAMEv40;
		public const String EXA_SINCE					= mXparser.NAMEv40;
		public const String EXA_QUINT_SINCE				= mXparser.NAMEv40;
		public const String PETA_SINCE					= mXparser.NAMEv40;
		public const String PETA_QUAD_SINCE				= mXparser.NAMEv40;
		public const String TERA_SINCE					= mXparser.NAMEv40;
		public const String TERA_TRIL_SINCE				= mXparser.NAMEv40;
		public const String GIGA_SINCE					= mXparser.NAMEv40;
		public const String GIGA_BIL_SINCE				= mXparser.NAMEv40;
		public const String MEGA_SINCE					= mXparser.NAMEv40;
		public const String MEGA_MIL_SINCE				= mXparser.NAMEv40;
		public const String KILO_SINCE					= mXparser.NAMEv40;
		public const String KILO_TH_SINCE				= mXparser.NAMEv40;
		public const String HECTO_SINCE					= mXparser.NAMEv40;
		public const String HECTO_HUND_SINCE			= mXparser.NAMEv40;
		public const String DECA_SINCE					= mXparser.NAMEv40;
		public const String DECA_TEN_SINCE				= mXparser.NAMEv40;
		public const String DECI_SINCE					= mXparser.NAMEv40;
		public const String CENTI_SINCE					= mXparser.NAMEv40;
		public const String MILLI_SINCE					= mXparser.NAMEv40;
		public const String MICRO_SINCE					= mXparser.NAMEv40;
		public const String NANO_SINCE					= mXparser.NAMEv40;
		public const String PICO_SINCE					= mXparser.NAMEv40;
		public const String FEMTO_SINCE					= mXparser.NAMEv40;
		public const String ATTO_SINCE					= mXparser.NAMEv40;
		public const String ZEPTO_SINCE					= mXparser.NAMEv40;
		public const String YOCTO_SINCE					= mXparser.NAMEv40;
		/* Units of length / distance */
		public const String METRE_SINCE					= mXparser.NAMEv40;
		public const String KILOMETRE_SINCE				= mXparser.NAMEv40;
		public const String CENTIMETRE_SINCE			= mXparser.NAMEv40;
		public const String MILLIMETRE_SINCE			= mXparser.NAMEv40;
		public const String INCH_SINCE					= mXparser.NAMEv40;
		public const String YARD_SINCE					= mXparser.NAMEv40;
		public const String FEET_SINCE					= mXparser.NAMEv40;
		public const String MILE_SINCE					= mXparser.NAMEv40;
		public const String NAUTICAL_MILE_SINCE			= mXparser.NAMEv40;
		/* Units of area */
		public const String METRE2_SINCE				= mXparser.NAMEv40;
		public const String CENTIMETRE2_SINCE			= mXparser.NAMEv40;
		public const String MILLIMETRE2_SINCE			= mXparser.NAMEv40;
		public const String ARE_SINCE					= mXparser.NAMEv40;
		public const String HECTARE_SINCE				= mXparser.NAMEv40;
		public const String ACRE_SINCE					= mXparser.NAMEv40;
		public const String KILOMETRE2_SINCE			= mXparser.NAMEv40;
		/* Units of volume */
		public const String MILLIMETRE3_SINCE			= mXparser.NAMEv40;
		public const String CENTIMETRE3_SINCE			= mXparser.NAMEv40;
		public const String METRE3_SINCE				= mXparser.NAMEv40;
		public const String KILOMETRE3_SINCE			= mXparser.NAMEv40;
		public const String MILLILITRE_SINCE			= mXparser.NAMEv40;
		public const String LITRE_SINCE					= mXparser.NAMEv40;
		public const String GALLON_SINCE				= mXparser.NAMEv40;
		public const String PINT_SINCE					= mXparser.NAMEv40;
		/* Units of time */
		public const String SECOND_SINCE				= mXparser.NAMEv40;
		public const String MILLISECOND_SINCE			= mXparser.NAMEv40;
		public const String MINUTE_SINCE				= mXparser.NAMEv40;
		public const String HOUR_SINCE					= mXparser.NAMEv40;
		public const String DAY_SINCE					= mXparser.NAMEv40;
		public const String WEEK_SINCE					= mXparser.NAMEv40;
		public const String JULIAN_YEAR_SINCE			= mXparser.NAMEv40;
		/* Units of mass */
		public const String KILOGRAM_SINCE				= mXparser.NAMEv40;
		public const String GRAM_SINCE					= mXparser.NAMEv40;
		public const String MILLIGRAM_SINCE				= mXparser.NAMEv40;
		public const String DECAGRAM_SINCE				= mXparser.NAMEv40;
		public const String TONNE_SINCE					= mXparser.NAMEv40;
		public const String OUNCE_SINCE					= mXparser.NAMEv40;
		public const String POUND_SINCE					= mXparser.NAMEv40;
		/* Units of information */
		public const String BIT_SINCE					= mXparser.NAMEv40;
		public const String KILOBIT_SINCE				= mXparser.NAMEv40;
		public const String MEGABIT_SINCE				= mXparser.NAMEv40;
		public const String GIGABIT_SINCE				= mXparser.NAMEv40;
		public const String TERABIT_SINCE				= mXparser.NAMEv40;
		public const String PETABIT_SINCE				= mXparser.NAMEv40;
		public const String EXABIT_SINCE				= mXparser.NAMEv40;
		public const String ZETTABIT_SINCE				= mXparser.NAMEv40;
		public const String YOTTABIT_SINCE				= mXparser.NAMEv40;
		public const String BYTE_SINCE					= mXparser.NAMEv40;
		public const String KILOBYTE_SINCE				= mXparser.NAMEv40;
		public const String MEGABYTE_SINCE				= mXparser.NAMEv40;
		public const String GIGABYTE_SINCE				= mXparser.NAMEv40;
		public const String TERABYTE_SINCE				= mXparser.NAMEv40;
		public const String PETABYTE_SINCE				= mXparser.NAMEv40;
		public const String EXABYTE_SINCE				= mXparser.NAMEv40;
		public const String ZETTABYTE_SINCE				= mXparser.NAMEv40;
		public const String YOTTABYTE_SINCE				= mXparser.NAMEv40;
		/* Units of energy */
		public const String JOULE_SINCE					= mXparser.NAMEv40;
		public const String ELECTRONO_VOLT_SINCE		= mXparser.NAMEv40;
		public const String KILO_ELECTRONO_VOLT_SINCE	= mXparser.NAMEv40;
		public const String MEGA_ELECTRONO_VOLT_SINCE	= mXparser.NAMEv40;
		public const String GIGA_ELECTRONO_VOLT_SINCE	= mXparser.NAMEv40;
		public const String TERA_ELECTRONO_VOLT_SINCE	= mXparser.NAMEv40;
		/* Units of speed */
		public const String METRE_PER_SECOND_SINCE		= mXparser.NAMEv40;
		public const String KILOMETRE_PER_HOUR_SINCE	= mXparser.NAMEv40;
		public const String MILE_PER_HOUR_SINCE			= mXparser.NAMEv40;
		public const String KNOT_SINCE					= mXparser.NAMEv40;
		/* Units of acceleration */
		public const String METRE_PER_SECOND2_SINCE		= mXparser.NAMEv40;
		public const String KILOMETRE_PER_HOUR2_SINCE	= mXparser.NAMEv40;
		public const String MILE_PER_HOUR2_SINCE		= mXparser.NAMEv40;
		/* Units of angle */
		public const String RADIAN_ARC_SINCE			= mXparser.NAMEv40;
		public const String DEGREE_ARC_SINCE			= mXparser.NAMEv40;
		public const String MINUTE_ARC_SINCE			= mXparser.NAMEv40;
		public const String SECOND_ARC_SINCE			= mXparser.NAMEv40;
	}
}