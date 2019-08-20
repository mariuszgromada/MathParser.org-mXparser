/*
 * @(#)AstronomicalConstants.cs        4.0.0    2017-03-11
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
using System;

namespace org.mariuszgromada.math.mxparser.mathcollection {
	/// <summary>AstronomicalConstants - class representing the most important astronomical constants.</summary>
	///
	/// <remarks>
	/// Author: <b>Mariusz Gromada</b><br/>
	/// <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br/>
	/// <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br/>
	/// <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br/>
	/// <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br/>
	/// <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br/>
	/// <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br/>
	/// <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br/>
	/// <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br/>
	/// <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br/>
	/// <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br/>
	/// <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br/>
	/// <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br/>
	/// <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br/>
	/// <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br/>
	/// <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a>
	/// <para/>
	/// Version: 4.0.0
	/// </remarks>
	[CLSCompliant(true)]
	public sealed class AstronomicalConstants {
		/// <summary>Light year</summary>
		public const double LIGHT_YEAR = PhysicalConstants.LIGHT_SPEED * Units.JULIAN_YEAR;
		/// <summary>Astronomical unit</summary>
		public const double ASTRONOMICAL_UNIT = 149597870700.0 * Units.METRE;
		/// <summary>Parsec</summary>
		public const double PARSEC = 206264.806247096 * ASTRONOMICAL_UNIT;
		/// <summary>Kiloparsec</summary>
		public const double KILOPARSEC = Units.KILO * PARSEC;
		/// <summary>Earth equatorial radius</summary>
		public const double EARTH_RADIUS_EQUATORIAL = 6378.1370 * Units.KILOMETRE;
		/// <summary>Earth polar radius</summary>
		public const double EARTH_RADIUS_POLAR = 6356.7523 * Units.KILOMETRE;
		/// <summary>Earth mean radius</summary>
		public const double EARTH_RADIUS_MEAN = 6371.0088 * Units.KILOMETRE;
		/// <summary>Earth mass</summary>
		public const double EARTH_MASS = 5.9722 * Units.YOTTA * Units.KILOGRAM;
		/// <summary>Earth semi-major axis</summary>
		public const double EARTH_SEMI_MAJOR_AXIS = 1.000001018 * ASTRONOMICAL_UNIT;
		/// <summary>Moon mean radius</summary>
		public const double MOON_RADIUS_MEAN = 1737.1 * Units.KILOMETRE;
		/// <summary>Moon mass</summary>
		public const double MOON_MASS = 0.012300037 * EARTH_MASS;
		/// <summary>Moon semi-major axis</summary>
		public const double MONN_SEMI_MAJOR_AXIS = 384399 * Units.KILOMETRE;
		/// <summary>Solar radius</summary>
		public const double SOLAR_RADIUS = 695700 * Units.KILOMETRE;
		/// <summary>Solar mass</summary>
		public const double SOLAR_MASS = 332946.0487 * EARTH_MASS;
		/// <summary>Mercury radius</summary>
		public const double MERCURY_RADIUS_MEAN = 2439.7 * Units.KILOMETRE;
		/// <summary>Mercury mass</summary>
		public const double MERCURY_MASS = 0.0553 * EARTH_MASS;
		/// <summary>Mercury semi-major axis</summary>
		public const double MERCURY_SEMI_MAJOR_AXIS = 0.387098 * ASTRONOMICAL_UNIT;
		/// <summary>Venus radius</summary>
		public const double VENUS_RADIUS_MEAN = 6051.8 * Units.KILOMETRE;
		/// <summary>Venus mass</summary>
		public const double VENUS_MASS = 0.815 * EARTH_MASS;
		/// <summary>Venus semi-major axis</summary>
		public const double VENUS_SEMI_MAJOR_AXIS = 0.723332 * ASTRONOMICAL_UNIT;
		/// <summary>Mars radius</summary>
		public const double MARS_RADIUS_MEAN = 3389.5 * Units.KILOMETRE;
		/// <summary>Mars mass</summary>
		public const double MARS_MASS = 0.107 * EARTH_MASS;
		/// <summary>Mars semi-major axis</summary>
		public const double MARS_SEMI_MAJOR_AXIS = 1.523679 * ASTRONOMICAL_UNIT;
		/// <summary>Jupiter radius</summary>
		public const double JUPITER_RADIUS_MEAN = 69911 * Units.KILOMETRE;
		/// <summary>Jupiter mass</summary>
		public const double JUPITER_MASS = 317.8 * EARTH_MASS;
		/// <summary>Jupiter semi-major axis</summary>
		public const double JUPITER_SEMI_MAJOR_AXIS = 5.20260 * ASTRONOMICAL_UNIT;
		/// <summary>Saturn radius</summary>
		public const double SATURN_RADIUS_MEAN = 58232 * Units.KILOMETRE;
		/// <summary>Saturn mass</summary>
		public const double SATURN_MASS = 95.159 * EARTH_MASS;
		/// <summary>Saturn semi-major axis</summary>
		public const double SATURN_SEMI_MAJOR_AXIS = 9.5549 * ASTRONOMICAL_UNIT;
		/// <summary>Uranus radius</summary>
		public const double URANUS_RADIUS_MEAN = 25362 * Units.KILOMETRE;
		/// <summary>Uranus mass</summary>
		public const double URANUS_MASS = 14.536 * EARTH_MASS;
		/// <summary>Uranus semi-major axis</summary>
		public const double URANUS_SEMI_MAJOR_AXIS = 19.2184 * ASTRONOMICAL_UNIT;
		/// <summary>Neptune radius</summary>
		public const double NEPTUNE_RADIUS_MEAN = 24622 * Units.KILOMETRE;
		/// <summary>Neptune mass</summary>
		public const double NEPTUNE_MASS = 17.147 * EARTH_MASS;
		/// <summary>Neptune semi-major axis</summary>
		public const double NEPTUNE_SEMI_MAJOR_AXIS = 30.110387 * ASTRONOMICAL_UNIT;
	}
}