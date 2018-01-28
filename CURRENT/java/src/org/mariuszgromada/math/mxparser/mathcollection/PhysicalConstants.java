/*
 * @(#)PhysicalConstants.java        4.2.0    2018-01-28
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2018 MARIUSZ GROMADA. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY <MARIUSZ GROMADA> ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of MARIUSZ GROMADA.
 *
 * If you have any questions/bugs feel free to contact:
 *
 *     Mariusz Gromada
 *     mariuszgromada.org@gmail.com
 *     http://mathparser.org
 *     http://mathspace.pl
 *     http://janetsudoku.mariuszgromada.org
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser
 *     http://mxparser.sourceforge.net
 *     http://bitbucket.org/mariuszgromada/mxparser
 *     http://mxparser.codeplex.com
 *     http://github.com/mariuszgromada/Janet-Sudoku
 *     http://janetsudoku.codeplex.com
 *     http://sourceforge.net/projects/janetsudoku
 *     http://bitbucket.org/mariuszgromada/janet-sudoku
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser.mathcollection;

/**
 * PhysicalConstants - class representing the most important physical constants.
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 *                 <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br>
 *                 <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br>
 *                 <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br>
 *                 <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br>
 *                 <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br>
 *                 <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br>
 *
 * @version        4.2.0
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