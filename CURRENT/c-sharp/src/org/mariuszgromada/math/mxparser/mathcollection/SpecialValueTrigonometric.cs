/*
 * @(#)SpecialValueTrigonometric.java        4.3.4   2019-12-22
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
 * Some parts of the SpecialFunctions class were adopted from Math.NET Numerics project
 * Copyright (c) 2002-2015 Math.NET   http://numerics.mathdotnet.com/
 * http://numerics.mathdotnet.com/License.html
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
using System.Collections.Generic;
namespace org.mariuszgromada.math.mxparser.mathcollection {
	/**
	 * SpecialValueTrigonometric - stores special values for trigonometric and inverse trigonometric functions.
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
	 * @version        4.3.4
	 */
	[CLSCompliant(true)]
	public class SpecialValueTrigonometric {

		/**
		 * Epsilon is used to compare the x value with regards to some given small interval
		 */
		public static readonly double EPSILON = 10 * BinaryRelations.DEFAULT_COMPARISON_EPSILON;
		/* 0 DEGREES ------- */
		public static readonly double SIN_0 = 0.0;
		public static readonly double COS_0 = 1.0;
		public static readonly double TAN_0 = 0.0;
		public static readonly double CTAN_0 = Double.NaN;
		public static readonly double SEC_0 = 1.0;
		public static readonly double CSC_0 = Double.NaN;
		/* 30 DEGREES ------- */
		public static readonly double SIN_30 = 0.5;
		public static readonly double COS_30 = MathConstants.SQRT3BY2;
		public static readonly double TAN_30 = MathConstants.SQRT3BY3;
		public static readonly double CTAN_30 = MathConstants.SQRT3;
		public static readonly double SEC_30 = MathConstants.D2BYSQRT3;
		public static readonly double CSC_30 = 2.0;
		/* 45 DEGREES ------- */
		public static readonly double SIN_45 = MathConstants.SQRT2BY2;
		public static readonly double COS_45 = MathConstants.SQRT2BY2;
		public static readonly double TAN_45 = 1.0;
		public static readonly double CTAN_45 = 1.0;
		public static readonly double SEC_45 = MathConstants.SQRT2;
		public static readonly double CSC_45 = MathConstants.SQRT2;
		/* 60 DEGREES ------- */
		public static readonly double SIN_60 = MathConstants.SQRT3BY2;
		public static readonly double COS_60 = 0.5;
		public static readonly double TAN_60 = MathConstants.SQRT3;
		public static readonly double CTAN_60 = MathConstants.SQRT3BY3;
		public static readonly double SEC_60 = 2.0;
		public static readonly double CSC_60 = MathConstants.D2BYSQRT3;
		/* 90 DEGREES ------- */
		public static readonly double SIN_90 = 1.0;
		public static readonly double COS_90 = 0.0;
		public static readonly double TAN_90 = Double.NaN;
		public static readonly double CTAN_90 = 0;
		public static readonly double SEC_90 = Double.NaN;
		public static readonly double CSC_90 = 1.0;
		/* 120 DEGREES ------- */
		public static readonly double SIN_120 = SIN_60;
		public static readonly double COS_120 = -COS_60;
		public static readonly double TAN_120 = -TAN_60;
		public static readonly double CTAN_120 = -CTAN_60;
		public static readonly double SEC_120 = -SEC_60;
		public static readonly double CSC_120 = CSC_60;
		/* 135 DEGREES ------- */
		public static readonly double SIN_135 = SIN_45;
		public static readonly double COS_135 = -COS_45;
		public static readonly double TAN_135 = -TAN_45;
		public static readonly double CTAN_135 = -CTAN_45;
		public static readonly double SEC_135 = -SEC_45;
		public static readonly double CSC_135 = CSC_45;
		/* 150 DEGREES ------- */
		public static readonly double SIN_150 = SIN_30;
		public static readonly double COS_150 = -COS_30;
		public static readonly double TAN_150 = -TAN_30;
		public static readonly double CTAN_150 = -CTAN_30;
		public static readonly double SEC_150 = -SEC_30;
		public static readonly double CSC_150 = CSC_30;
		/* 180 DEGREES ------- */
		public static readonly double SIN_180 = SIN_0;
		public static readonly double COS_180 = -COS_0;
		public static readonly double TAN_180 = TAN_0;
		public static readonly double CTAN_180 = CTAN_0;
		public static readonly double SEC_180 = -SEC_0;
		public static readonly double CSC_180 = CSC_0;
		/* 210 DEGREES ------- */
		public static readonly double SIN_210 = -SIN_30;
		public static readonly double COS_210 = -COS_30;
		public static readonly double TAN_210 = TAN_30;
		public static readonly double CTAN_210 = CTAN_30;
		public static readonly double SEC_210 = -SEC_30;
		public static readonly double CSC_210 = -CSC_30;
		/* 225 DEGREES ------- */
		public static readonly double SIN_225 = -SIN_45;
		public static readonly double COS_225 = -COS_45;
		public static readonly double TAN_225 = TAN_45;
		public static readonly double CTAN_225 = CTAN_45;
		public static readonly double SEC_225 = -SEC_45;
		public static readonly double CSC_225 = -CSC_45;
		/* 240 DEGREES ------- */
		public static readonly double SIN_240 = -SIN_60;
		public static readonly double COS_240 = -COS_60;
		public static readonly double TAN_240 = TAN_60;
		public static readonly double CTAN_240 = CTAN_60;
		public static readonly double SEC_240 = -SEC_60;
		public static readonly double CSC_240 = -CSC_60;
		/* 270 DEGREES ------- */
		public static readonly double SIN_270 = -SIN_90;
		public static readonly double COS_270 = COS_90;
		public static readonly double TAN_270 = TAN_90;
		public static readonly double CTAN_270 = CTAN_90;
		public static readonly double SEC_270 = SEC_90;
		public static readonly double CSC_270 = -CSC_90;
		/* 300 DEGREES ------- */
		public static readonly double SIN_300 = -SIN_60;
		public static readonly double COS_300 = COS_60;
		public static readonly double TAN_300 = -TAN_60;
		public static readonly double CTAN_300 = -CTAN_60;
		public static readonly double SEC_300 = SEC_60;
		public static readonly double CSC_300 = -CSC_60;
		/* 315 DEGREES ------- */
		public static readonly double SIN_315 = -SIN_45;
		public static readonly double COS_315 = COS_45;
		public static readonly double TAN_315 = -TAN_45;
		public static readonly double CTAN_315 = -CTAN_45;
		public static readonly double SEC_315 = SEC_45;
		public static readonly double CSC_315 = -CSC_45;
		/* 330 DEGREES ------- */
		public static readonly double SIN_330 = -SIN_30;
		public static readonly double COS_330 = COS_30;
		public static readonly double TAN_330 = -TAN_30;
		public static readonly double CTAN_330 = -CTAN_30;
		public static readonly double SEC_330 = SEC_30;
		public static readonly double CSC_330 = -CSC_30;
		/* 360 DEGREES ------- */
		public static readonly double SIN_360 = SIN_0;
		public static readonly double COS_360 = COS_0;
		public static readonly double TAN_360 = TAN_0;
		public static readonly double CTAN_360 = CTAN_0;
		public static readonly double SEC_360 = SEC_0;
		public static readonly double CSC_360 = CSC_0;

		/**
		 * List of special values for all main trigonometric functions
		 */
		public static SpecialValueTrigonometric[] valuesListTrig = {
			/* 0 degrees ------- */
			new SpecialValueTrigonometric( 0.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0 )
			,new SpecialValueTrigonometric( 2.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0 )
			,new SpecialValueTrigonometric( -2.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0 )
			,new SpecialValueTrigonometric( 4.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0 )
			,new SpecialValueTrigonometric( -4.0, SIN_0, COS_0, TAN_0, CTAN_0, SEC_0, CSC_0 )
			/* 30 degrees ------- */
			,new SpecialValueTrigonometric( (1.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30 )
			,new SpecialValueTrigonometric( (13.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30 )
			,new SpecialValueTrigonometric( (-11.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30 )
			,new SpecialValueTrigonometric( (25.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30 )
			,new SpecialValueTrigonometric( (-23.0 / 6.0), SIN_30, COS_30, TAN_30, CTAN_30, SEC_30, CSC_30 )
			/* 45 degrees ------- */
			,new SpecialValueTrigonometric( (1.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45 )
			,new SpecialValueTrigonometric( (9.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45 )
			,new SpecialValueTrigonometric( (-7.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45 )
			,new SpecialValueTrigonometric( (17.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45 )
			,new SpecialValueTrigonometric( (-15.0 / 4.0), SIN_45, COS_45, TAN_45, CTAN_45, SEC_45, CSC_45 )
			/* 60 degrees ------- */
			,new SpecialValueTrigonometric( (1.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60 )
			,new SpecialValueTrigonometric( (7.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60 )
			,new SpecialValueTrigonometric( (-5.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60 )
			,new SpecialValueTrigonometric( (13.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60 )
			,new SpecialValueTrigonometric( (-11.0 / 3.0), SIN_60, COS_60, TAN_60, CTAN_60, SEC_60, CSC_60 )
			/* 90 degrees ------- */
			,new SpecialValueTrigonometric( (1.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90 )
			,new SpecialValueTrigonometric( (5.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90 )
			,new SpecialValueTrigonometric( (-3.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90 )
			,new SpecialValueTrigonometric( (9.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90 )
			,new SpecialValueTrigonometric( (-7.0 / 2.0), SIN_90, COS_90, TAN_90, CTAN_90, SEC_90, CSC_90 )
			/* 120 degrees ------- */
			,new SpecialValueTrigonometric( (2.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120 )
			,new SpecialValueTrigonometric( (8.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120 )
			,new SpecialValueTrigonometric( (-4.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120 )
			,new SpecialValueTrigonometric( (14.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120 )
			,new SpecialValueTrigonometric( (-10.0 / 3.0), SIN_120, COS_120, TAN_120, CTAN_120, SEC_120, CSC_120 )
			/* 135 degrees ------- */
			,new SpecialValueTrigonometric( (3.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135 )
			,new SpecialValueTrigonometric( (11.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135 )
			,new SpecialValueTrigonometric( (-5.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135 )
			,new SpecialValueTrigonometric( (19.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135 )
			,new SpecialValueTrigonometric( (-13.0 / 4.0), SIN_135, COS_135, TAN_135, CTAN_135, SEC_135, CSC_135 )
			/* 150 degrees ------- */
			,new SpecialValueTrigonometric( (5.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150 )
			,new SpecialValueTrigonometric( (17.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150 )
			,new SpecialValueTrigonometric( (-7.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150 )
			,new SpecialValueTrigonometric( (29.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150 )
			,new SpecialValueTrigonometric( (-19.0 / 6.0), SIN_150, COS_150, TAN_150, CTAN_150, SEC_150, CSC_150 )
			/* 180 degrees ------- */
			,new SpecialValueTrigonometric( 1.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180 )
			,new SpecialValueTrigonometric( 3.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180 )
			,new SpecialValueTrigonometric( -1.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180 )
			,new SpecialValueTrigonometric( 5.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180 )
			,new SpecialValueTrigonometric( -3.0, SIN_180, COS_180, TAN_180, CTAN_180, SEC_180, CSC_180 )
			/* 210 degrees ------- */
			,new SpecialValueTrigonometric( (7.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210 )
			,new SpecialValueTrigonometric( (19.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210 )
			,new SpecialValueTrigonometric( (-5.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210 )
			,new SpecialValueTrigonometric( (31.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210 )
			,new SpecialValueTrigonometric( (-17.0 / 6.0), SIN_210, COS_210, TAN_210, CTAN_210, SEC_210, CSC_210 )
			/* 225 degrees ------- */
			,new SpecialValueTrigonometric( (5.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225 )
			,new SpecialValueTrigonometric( (13.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225 )
			,new SpecialValueTrigonometric( (-3.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225 )
			,new SpecialValueTrigonometric( (21.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225 )
			,new SpecialValueTrigonometric( (-11.0 / 4.0), SIN_225, COS_225, TAN_225, CTAN_225, SEC_225, CSC_225 )
			/* 240 degrees ------- */
			,new SpecialValueTrigonometric( (4.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240 )
			,new SpecialValueTrigonometric( (10.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240 )
			,new SpecialValueTrigonometric( (-2.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240 )
			,new SpecialValueTrigonometric( (16.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240 )
			,new SpecialValueTrigonometric( (-8.0 / 3.0), SIN_240, COS_240, TAN_240, CTAN_240, SEC_240, CSC_240 )
			/* 270 degrees ------- */
			,new SpecialValueTrigonometric( (3.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270 )
			,new SpecialValueTrigonometric( (7.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270 )
			,new SpecialValueTrigonometric( (-1.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270 )
			,new SpecialValueTrigonometric( (11.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270 )
			,new SpecialValueTrigonometric( (-5.0 / 2.0), SIN_270, COS_270, TAN_270, CTAN_270, SEC_270, CSC_270 )
			/* 300 degrees ------- */
			,new SpecialValueTrigonometric( (5.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300 )
			,new SpecialValueTrigonometric( (11.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300 )
			,new SpecialValueTrigonometric( (-1.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300 )
			,new SpecialValueTrigonometric( (17.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300 )
			,new SpecialValueTrigonometric( (-7.0 / 3.0), SIN_300, COS_300, TAN_300, CTAN_300, SEC_300, CSC_300 )
			/* 315 degrees ------- */
			,new SpecialValueTrigonometric( (7.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315 )
			,new SpecialValueTrigonometric( (15.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315 )
			,new SpecialValueTrigonometric( (-1.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315 )
			,new SpecialValueTrigonometric( (23.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315 )
			,new SpecialValueTrigonometric( (-9.0 / 4.0), SIN_315, COS_315, TAN_315, CTAN_315, SEC_315, CSC_315 )
			/* 330 degrees ------- */
			,new SpecialValueTrigonometric( (11.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330 )
			,new SpecialValueTrigonometric( (23.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330 )
			,new SpecialValueTrigonometric( (-1.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330 )
			,new SpecialValueTrigonometric( (35.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330 )
			,new SpecialValueTrigonometric( (-13.0 / 6.0), SIN_330, COS_330, TAN_330, CTAN_330, SEC_330, CSC_330 )
			/* 360 degrees ------- */
			,new SpecialValueTrigonometric( 6.0, SIN_360, COS_360, TAN_360, CTAN_360, SEC_360, CSC_360 )
	};

		/**
		 * List of special values of inverse sine function
		 */
		public static List<SpecialValue> valuesListAsin;
		/**
		 * List of special values of inverse cosine function
		 */
		public static List<SpecialValue> valuesListAcos;
		/**
		 * List of special values of inverse tangent function
		 */
		public static List<SpecialValue> valuesListAtan;
		/**
		 * List of special values of inverse cotangent function
		 */
		public static List<SpecialValue> valuesListActan;
		/**
		 * List of special values of inverse secant function
		 */
		public static List<SpecialValue> valuesListAsec;
		/**
		 * List of special values of inverse cosecant function
		 */
		public static List<SpecialValue> valuesListAcsc;

		/**
		 * Angle factor in Pi radians
		 */
		public double factor;
		/**
		 * Angle in radians
		 */
		public double xrad;
		/**
		 * Angle in degrees
		 */
		public double xdeg;
		/**
		 * Angle in radians - the start of the interval where the function value is given
		 */
		public double xradFrom;
		/**
		 * Angle in radians - the end of the interval where the function value is given
		 */
		public double xradTo;
		/**
		 * The sine function value
		 */
		public double sin;
		/**
		 * The cosine function value
		 */
		public double cos;
		/**
		 * The tangent function value
		 */
		public double tan;
		/**
		 * The cotangent function value
		 */
		public double ctan;
		/**
		 * The secant function value
		 */
		public double sec;
		/**
		 * The cosecant function value
		 */
		public double csc;

		/**
		 * Main constructor
		 * @param factor  The angle provided as a factor of PI
		 * @param sin     The sine function value
		 * @param cos     The cosine function value
		 * @param tan     The tangent function value
		 * @param ctan    The cotangent function value
		 * @param sec     The secant function value
		 * @param csc     The cosecant function value
		 */
		public SpecialValueTrigonometric(double factor, double sin, double cos, double tan, double ctan, double sec, double csc) {
			this.factor = factor;
			this.xrad = factor * MathConstants.PI;
			this.xdeg = MathFunctions.round(factor * 180.0, 0);
			this.sin = sin;
			this.cos = cos;
			this.tan = tan;
			this.ctan = ctan;
			this.sec = sec;
			this.csc = csc;
			xradFrom = xrad - EPSILON;
			xradTo = xrad + EPSILON;

			/**
			 * Adding values to the special values lists of inverse trigonometric functions
			 */
			if ((-MathConstants.PIBY2 - EPSILON <= xrad) && (xrad <= MathConstants.PIBY2 + EPSILON)) {
				if (valuesListAsin == null) valuesListAsin = new List<SpecialValue>();
				if (valuesListAtan == null) valuesListAtan = new List<SpecialValue>();
				if (valuesListAcsc == null) valuesListAcsc = new List<SpecialValue>();
				valuesListAsin.Add(new SpecialValue(sin, xrad, xdeg));
				valuesListAtan.Add(new SpecialValue(tan, xrad, xdeg));
				valuesListAcsc.Add(new SpecialValue(csc, xrad, xdeg));
			}


			/**
			 * Adding values to the special values lists of inverse trigonometric functions
			 */
			if ((-EPSILON <= xrad) && (xrad <= MathConstants.PI + EPSILON)) {
				if (valuesListAcos == null) valuesListAcos = new List<SpecialValue>();
				if (valuesListActan == null) valuesListActan = new List<SpecialValue>();
				if (valuesListAsec == null) valuesListAsec = new List<SpecialValue>();
				valuesListAcos.Add(new SpecialValue(cos, xrad, xdeg));
				valuesListActan.Add(new SpecialValue(ctan, xrad, xdeg));
				valuesListAsec.Add(new SpecialValue(sec, xrad, xdeg));
			}

		}
		/**
		 * Returns special values of trigonometric functions
		 *
		 * @param xrad   The angle provided in radians
		 * @return       Returns special values of trigonometric functions object if the special value was found for a given x
		 * otherwise returns null
		 */
		public static SpecialValueTrigonometric getSpecialValueTrigonometric(double xrad) {
			if (Double.IsNaN(xrad)) return null;
			if (Double.IsInfinity(xrad)) return null;
			foreach (SpecialValueTrigonometric sv in valuesListTrig) {
				if ((sv.xradFrom <= xrad) && (xrad <= sv.xradTo)) return sv;
			}
			return null;
		}
		/**
		 * Returns special value of inverse trigonometric sine function
		 * @param x    The sine value
		 * @return     Returns special value object if special value was found,
		 * other wise returns null.
		 */
		public static SpecialValue getSpecialValueAsin(double x) {
			return getSpecialValue(x, valuesListAsin);
		}
		/**
		 * Returns special value of inverse trigonometric cosine function
		 * @param x    The cosine value
		 * @return     Returns special value object if special value was found,
		 * other wise returns null.
		 */
		public static SpecialValue getSpecialValueAcos(double x) {
			return getSpecialValue(x, valuesListAcos);
		}
		/**
		 * Returns special value of inverse trigonometric tangent function
		 * @param x    The tangent value
		 * @return     Returns special value object if special value was found,
		 * other wise returns null.
		 */
		public static SpecialValue getSpecialValueAtan(double x) {
			return getSpecialValue(x, valuesListAtan);
		}
		/**
		 * Returns special value of inverse trigonometric cotangent function
		 * @param x    The cotangent value
		 * @return     Returns special value object if special value was found,
		 * other wise returns null.
		 */
		public static SpecialValue getSpecialValueActan(double x) {
			return getSpecialValue(x, valuesListActan);
		}
		/**
		 * Returns special value of inverse trigonometric secant function
		 * @param x    The secant value
		 * @return     Returns special value object if special value was found,
		 * other wise returns null.
		 */
		public static SpecialValue getSpecialValueAsec(double x) {
			return getSpecialValue(x, valuesListAsec);
		}
		/**
		 * Returns special value of inverse trigonometric cosecant function
		 * @param x    The cosecant value
		 * @return     Returns special value object if special value was found,
		 * other wise returns null.
		 */
		public static SpecialValue getSpecialValueAcsc(double x) {
			return getSpecialValue(x, valuesListAcsc);
		}
		/**
		 * Returns special value of inverse trigonometric function
		 * @param x              The trigonometric function value value
		 * @param valuesList     List of special values of a given trigonometric function
		 * @return               Returns special value object if special value was found,
		 * other wise returns null.
		 */
		private static SpecialValue getSpecialValue(double x, List<SpecialValue> valuesList) {
			if (Double.IsNaN(x)) return null;
			if (Double.IsInfinity(x)) return null;
			foreach (SpecialValue sv in valuesList) {
				if ((sv.xFrom <= x) && (x <= sv.xTo)) return sv;
			}
			return null;
		}
	}
}