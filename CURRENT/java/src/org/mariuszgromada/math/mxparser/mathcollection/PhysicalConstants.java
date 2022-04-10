/*
 * @(#)PhysicalConstants.java        5.0.0    2022-04-10
 * Copyright 2010 - 2022 MARIUSZ GROMADA. All rights reserved.
 *
 * PRODUCT: MathParser.org-mXparser
 * LICENSE: DUAL LICENSE
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE SOFTWARE, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * MARIUSZ GROMADA provides MathParser.org-mXparser SOFTWARE under the
 * DUAL LICENSE model designed to meet the needs of both Non-Commercial Use
 * as well as Commercial Use.
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
 * IN CASE YOU WANT TO USE THE SOFTWARE COMMERCIALLY, YOU MUST PURCHASE
 * THE APPROPRIATE LICENSE FROM "INFIMA IWONA GLOWACKA-GROMADA", ONLINE
 * STORE ADDRESS: HTTPS://PAYHIP.COM/INFIMA
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms, with
 * or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain unmodified content of the
 *    entire MathParser.org-mXparser DUAL LICENSE, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE in the documentation and/or other
 *    materials provided with the distribution, including definition of
 *    NON-COMMERCIAL USE, definition of COMMERCIAL USE, NON-COMMERCIAL
 *    LICENSE conditions, COMMERCIAL LICENSE conditions, and the following
 *    DISCLAIMER.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, MARIUSZ GROMADA allows you to
 *     download, install and use up to three copies of the PRODUCT to perform
 *     integration tests, confirm the quality of the PRODUCT and its
 *     suitability. The testing period should be limited to one month. Tests
 *     should take place via test environments. The purpose of the tests must
 *     not be to generate profit.
 *  2. Provided that you purchased a license from "INFIMA IWONA GLOWACKA-GROMADA"
 *     (online store address: https://payhip.com/INFIMA), you comply with all
 *     below terms and conditions, and you have acknowledged and understood the
 *     following DISCLAIMER, MARIUSZ GROMADA grants you a nonexclusive license
 *     including the following rights:
 *  3. In case you purchased a "Single License" You can install and use the
 *     PRODUCT from one workstation.
 *  4. Additional copies of the PRODUCT can be installed and used from more
 *     than one workstation; however, this number is limited to the number of
 *     copies purchased as per order.
 *  5. In case you purchased a "Site License", the PRODUCT can be installed
 *     and used from all workstations located at your premises.
 *  6. You may incorporate the unmodified PRODUCT into your own products and
 *     software.
 *  7. If you purchased a license with the "Source Code" option, you may modify
 *     the PRODUCT's source code and incorporate the modified source code into
 *     your own products and / or software.
 *  8. You may distribute your product and / or software with the incorporated
 *     PRODUCT royalty-free.
 *  9. You may make copies of the PRODUCT for backup and archival purposes.
 * 10. MARIUSZ GROMADA reserves all rights not expressly granted to you in
 *     this agreement.
 *
 * CONTACT
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://payhip.com/INFIMA
 *
 * DISCLAIMER
 *
 * THIS SOFTWARE IS PROVIDED BY MARIUSZ GROMADA "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL MATHPARSER.ORG MARIUSZ GROMADA OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE SOFTWARE AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING OFFICIAL
 * POLICIES, EITHER EXPRESSED OR IMPLIED, OF MARIUSZ GROMADA.
 */
package org.mariuszgromada.math.mxparser.mathcollection;

/**
 * PhysicalConstants - class representing the most important physical constants.
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
public final class PhysicalConstants {
	/**
	 * Light speed
	 */
	public static final double LIGHT_SPEED = 299792458.0 * Units.METRE_PER_SECOND;
	/**
	 * Gravitational constant
	 */
	public static final double GRAVITATIONAL_CONSTANT = 6.67408E-11 * Units.METRE3 * (1.0 / Units.KILOGRAM) * (1.0 / (Units.SECOND * Units.SECOND)) ;
	/**
	 * Gravitational acceleration - Earth (normal)
	 */
	public static final double GRAVIT_ACC_EARTH = 9.80665 * Units.METRE_PER_SECOND2;
	/**
	 * Planck constant
	 */
	public static final double PLANCK_CONSTANT = 6.626070040E-34 * Units.METRE2 * Units.KILOGRAM / Units.SECOND;
	/**
	 * Reduced Planck constant
	 */
	public static final double PLANCK_CONSTANT_REDUCED = PLANCK_CONSTANT / (2 * MathConstants.PI);
	/**
	 * Planck length
	 */
	public static final double PLANCK_LENGTH = 1.616229E-35 * Units.METRE;
	/**
	 * Planck mass
	 */
	public static final double PLANCK_MASS = 2.176470E-8 * Units.KILOGRAM;
	/**
	 * Planck time
	 */
	public static final double PLANCK_TIME = 5.39116E-44 * Units.SECOND;
	/**
	 * Avagadro's constant
	 */
	public static final double N_A = 6.022140857E23 / Units.MOLE;
	/**
	 * Gas constant
	 */
	public static final double R = 8.3144598 * Units.JOULE / (Units.KELVIN * Units.MOLE);
	/**
	 * Boltzmann constant
	 */
	public static final double BOLTZMANN_CONSTANT = R / N_A;
	/**
	 * Neutron rest mass
	 */
	public static final double NEUTRON_REST_MASS = 1.674927471E-27 * Units.KILOGRAM;
	/**
	 * Neutron equivalent rest mass
	 */
	public static final double NEUTRON_EQUIVALENT_REST_MASS = 939.5654133 * Units.MEGA_ELECTRONO_VOLT / (LIGHT_SPEED * LIGHT_SPEED);
	/**
	 * Proton rest mass
	 */
	public static final double PROTON_REST_MASS = 1.672621898E-27 * Units.KILOGRAM;
	/**
	 * Proton equivalent rest mass
	 */
	public static final double PROTON_EQUIVALENT_REST_MASS = 938.2720813 * Units.MEGA_ELECTRONO_VOLT / (LIGHT_SPEED * LIGHT_SPEED);
	/**
	 * Elementary charge
	 */
	public static final double ELEMENTARY_CHARGE = 1.6021766208E-19*Units.COULOMB;
	/**
	 * Electron rest mass
	 */
	public static final double ELECTRON_REST_MASS = 9.10938356E-31 * Units.KILOGRAM;
	/**
	 * Electron equivalent rest mass
	 */
	public static final double ELECTRON_EQUIVALENT_REST_MASS = 0.5109989461 * Units.MEGA_ELECTRONO_VOLT / (LIGHT_SPEED * LIGHT_SPEED);
	/**
	 * Vacuum permittivity
	 */
	public static final double VACUUM_PERMITTIVITY = 8.854187817E-12 * Units.AMPERE * Units.AMPERE * Units.SECOND * Units.SECOND * Units.SECOND * Units.SECOND / (Units.METRE3 * Units.KILOGRAM);
	/**
	 * Vacuum permeability
	 */
	public static final double VACUUM_PERMEABILITY = 4.0E-7 * Math.PI * Units.KILOGRAM * Units.METRE / (Units.SECOND * Units.SECOND * Units.AMPERE * Units.AMPERE);
}