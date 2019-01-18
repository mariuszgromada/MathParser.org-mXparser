/*
 * @(#)AstronomicalConstants.java        4.0.0    2017-03-11
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2019 MARIUSZ GROMADA. All rights reserved.
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
 *     http://scalarmath.org/
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser.mathcollection;

/**
 * AstronomicalConstants - class representing the most important astronomical constants.
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
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
 *                 <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a><br>
 *
 * @version        4.0.0
 */
public final class AstronomicalConstants {
	/**
	 * Light year
	 */
	public static final double LIGHT_YEAR = PhysicalConstants.LIGHT_SPEED * Units.JULIAN_YEAR;
	/**
	 * Astronomical unit
	 */
	public static final double ASTRONOMICAL_UNIT = 149597870700.0 * Units.METRE;
	/**
	 * Parsec
	 */
	public static final double PARSEC = 206264.806247096 * ASTRONOMICAL_UNIT;
	/**
	 * Kiloparsec
	 */
	public static final double KILOPARSEC = Units.KILO * PARSEC;
	/**
	 * Earth equatorial radius
	 */
	public static final double EARTH_RADIUS_EQUATORIAL = 6378.1370 * Units.KILOMETRE;
	/**
	 * Earth polar radius
	 */
	public static final double EARTH_RADIUS_POLAR = 6356.7523 * Units.KILOMETRE;
	/**
	 * Earth mean radius
	 */
	public static final double EARTH_RADIUS_MEAN = 6371.0088 * Units.KILOMETRE;
	/**
	 * Earth mass
	 */
	public static final double EARTH_MASS = 5.9722 * Units.YOTTA * Units.KILOGRAM;
	/**
	 * Earth semi-major axis
	 */
	public static final double EARTH_SEMI_MAJOR_AXIS = 1.000001018 * ASTRONOMICAL_UNIT;
	/**
	 * Moon mean radius
	 */
	public static final double MOON_RADIUS_MEAN = 1737.1 * Units.KILOMETRE;
	/**
	 * Moon mass
	 */
	public static final double MOON_MASS = 0.012300037 * EARTH_MASS;
	/**
	 * Moon semi-major axis
	 */
	public static final double MONN_SEMI_MAJOR_AXIS = 384399 * Units.KILOMETRE;
	/**
	 * Solar radius
	 */
	public static final double SOLAR_RADIUS = 695700 * Units.KILOMETRE;
	/**
	 * Solar mass
	 */
	public static final double SOLAR_MASS = 332946.0487 * EARTH_MASS;
	/**
	 * Mercury radius
	 */
	public static final double MERCURY_RADIUS_MEAN = 2439.7 * Units.KILOMETRE;
	/**
	 * Mercury mass
	 */
	public static final double MERCURY_MASS = 0.0553 * EARTH_MASS;
	/**
	 * Mercury semi-major axis
	 */
	public static final double MERCURY_SEMI_MAJOR_AXIS = 0.387098 * ASTRONOMICAL_UNIT;
	/**
	 * Venus radius
	 */
	public static final double VENUS_RADIUS_MEAN = 6051.8 * Units.KILOMETRE;
	/**
	 * Venus mass
	 */
	public static final double VENUS_MASS = 0.815 * EARTH_MASS;
	/**
	 * Venus semi-major axis
	 */
	public static final double VENUS_SEMI_MAJOR_AXIS = 0.723332 * ASTRONOMICAL_UNIT;
	/**
	 * Mars radius
	 */
	public static final double MARS_RADIUS_MEAN = 3389.5 * Units.KILOMETRE;
	/**
	 * Mars mass
	 */
	public static final double MARS_MASS = 0.107 * EARTH_MASS;
	/**
	 * Mars semi-major axis
	 */
	public static final double MARS_SEMI_MAJOR_AXIS = 1.523679 * ASTRONOMICAL_UNIT;
	/**
	 * Jupiter radius
	 */
	public static final double JUPITER_RADIUS_MEAN = 69911 * Units.KILOMETRE;
	/**
	 * Jupiter mass
	 */
	public static final double JUPITER_MASS = 317.8 * EARTH_MASS;
	/**
	 * Jupiter semi-major axis
	 */
	public static final double JUPITER_SEMI_MAJOR_AXIS = 5.20260 * ASTRONOMICAL_UNIT;
	/**
	 * Saturn radius
	 */
	public static final double SATURN_RADIUS_MEAN = 58232 * Units.KILOMETRE;
	/**
	 * Saturn mass
	 */
	public static final double SATURN_MASS = 95.159 * EARTH_MASS;
	/**
	 * Saturn semi-major axis
	 */
	public static final double SATURN_SEMI_MAJOR_AXIS = 9.5549 * ASTRONOMICAL_UNIT;
	/**
	 * Uranus radius
	 */
	public static final double URANUS_RADIUS_MEAN = 25362 * Units.KILOMETRE;
	/**
	 * Uranus mass
	 */
	public static final double URANUS_MASS = 14.536 * EARTH_MASS;
	/**
	 * Uranus semi-major axis
	 */
	public static final double URANUS_SEMI_MAJOR_AXIS = 19.2184 * ASTRONOMICAL_UNIT;
	/**
	 * Neptune radius
	 */
	public static final double NEPTUNE_RADIUS_MEAN = 24622 * Units.KILOMETRE;
	/**
	 * Neptune mass
	 */
	public static final double NEPTUNE_MASS = 17.147 * EARTH_MASS;
	/**
	 * Neptune semi-major axis
	 */
	public static final double NEPTUNE_SEMI_MAJOR_AXIS = 30.110387 * ASTRONOMICAL_UNIT;
}