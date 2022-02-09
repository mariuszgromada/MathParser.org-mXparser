/*
 * @(#)SyntaxTest.java        5.0.0    2022-02-09
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2022 MARIUSZ GROMADA. All rights reserved.
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
package org.mariuszgromada.math.mxparser.test;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.mariuszgromada.math.mxparser.*;


/**
 * Unit tests covering syntax
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
 * @version        5.0.0
 *
 */
public final class SyntaxTest {
    @Test
    public void testSyn0() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "";
        TestCommonTools.consolePrintTestSynStart(0, expStr);
        Argument x = new Argument("x");
        Expression e = new Expression(expStr, x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn1() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "1++";
        TestCommonTools.consolePrintTestSynStart(1, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn2() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "1+1-";
        TestCommonTools.consolePrintTestSynStart(2, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn3() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "+-1";
        TestCommonTools.consolePrintTestSynStart(3, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn4() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "1-(2))";
        TestCommonTools.consolePrintTestSynStart(4, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn5() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "1id";
        TestCommonTools.consolePrintTestSynStart(5, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn6() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(6, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn7() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(7, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn8() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin";
        TestCommonTools.consolePrintTestSynStart(8, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn9() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin()";
        TestCommonTools.consolePrintTestSynStart(9, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn10() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "cos(1,2)";
        TestCommonTools.consolePrintTestSynStart(10, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn11() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "log";
        TestCommonTools.consolePrintTestSynStart(11, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn12() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "log()";
        TestCommonTools.consolePrintTestSynStart(12, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn13() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "log(1)";
        TestCommonTools.consolePrintTestSynStart(13, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn14() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "log(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(14, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn15() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "if";
        TestCommonTools.consolePrintTestSynStart(15, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn16() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "if()";
        TestCommonTools.consolePrintTestSynStart(16, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn17() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "if(1)";
        TestCommonTools.consolePrintTestSynStart(17, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn18() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "if(1,2)";
        TestCommonTools.consolePrintTestSynStart(18, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn19() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "if(1,2,3,4)";
        TestCommonTools.consolePrintTestSynStart(19, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn20() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "pi()";
        TestCommonTools.consolePrintTestSynStart(20, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn21() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "pi(1)";
        TestCommonTools.consolePrintTestSynStart(21, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn22() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "[K*]()";
        TestCommonTools.consolePrintTestSynStart(22, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn23() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "[K*](12)";
        TestCommonTools.consolePrintTestSynStart(23, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn24() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "min";
        TestCommonTools.consolePrintTestSynStart(24, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn25() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "min()";
        TestCommonTools.consolePrintTestSynStart(25, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn26() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "max";
        TestCommonTools.consolePrintTestSynStart(26, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn27() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "max()";
        TestCommonTools.consolePrintTestSynStart(27, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn28() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "iff";
        TestCommonTools.consolePrintTestSynStart(28, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn29() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "iff()";
        TestCommonTools.consolePrintTestSynStart(29, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn30() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "iff(1)";
        TestCommonTools.consolePrintTestSynStart(30, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn31() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "iff(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(31, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn32() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "iff(1,2,3,4,5)";
        TestCommonTools.consolePrintTestSynStart(32, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn33() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum";
        TestCommonTools.consolePrintTestSynStart(33, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn34() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum()";
        TestCommonTools.consolePrintTestSynStart(34, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn35() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum(1)";
        TestCommonTools.consolePrintTestSynStart(35, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn36() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum(1,2)";
        TestCommonTools.consolePrintTestSynStart(36, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn37() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(37, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn38() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum(1,2,3,4,5,6)";
        TestCommonTools.consolePrintTestSynStart(38, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn39() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "prod()";
        TestCommonTools.consolePrintTestSynStart(39, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn40() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "prod(1)";
        TestCommonTools.consolePrintTestSynStart(40, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn41() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "prod(1,2)";
        TestCommonTools.consolePrintTestSynStart(41, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn42() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "prod(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(42, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn43() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "prod(1,2,3,4,5,6)";
        TestCommonTools.consolePrintTestSynStart(43, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn44() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum(1,2,3,4)";
        TestCommonTools.consolePrintTestSynStart(44, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn45() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum(a*b,2,3,4)";
        TestCommonTools.consolePrintTestSynStart(45, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn46() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sum(i,1,a,4)";
        TestCommonTools.consolePrintTestSynStart(46, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn47() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "prod(1,2,3,4)";
        TestCommonTools.consolePrintTestSynStart(47, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn48() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "prod(a*b,2,3,4)";
        TestCommonTools.consolePrintTestSynStart(48, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn49() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "prod(i,1,a,4)";
        TestCommonTools.consolePrintTestSynStart(49, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn50() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "int";
        TestCommonTools.consolePrintTestSynStart(50, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn51() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "int()";
        TestCommonTools.consolePrintTestSynStart(51, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn52() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "int(1)";
        TestCommonTools.consolePrintTestSynStart(52, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn53() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "int(1,2)";
        TestCommonTools.consolePrintTestSynStart(53, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn54() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "int(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(54, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn55() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "int(1,2,3,4,5)";
        TestCommonTools.consolePrintTestSynStart(55, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn56() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        Argument x = new Argument("x", 5);
        String expStr = "int(,2,3,4)";
        TestCommonTools.consolePrintTestSynStart(56, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn57() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "int(1,2,0,1)";
        TestCommonTools.consolePrintTestSynStart(57, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn58() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der";
        TestCommonTools.consolePrintTestSynStart(58, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn59() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der()";
        TestCommonTools.consolePrintTestSynStart(59, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn60() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der(1)";
        TestCommonTools.consolePrintTestSynStart(60, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn61() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(61, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn62() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der(1,2,3,4,5)";
        TestCommonTools.consolePrintTestSynStart(62, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn63() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der(1,2)";
        TestCommonTools.consolePrintTestSynStart(63, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn64() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der+";
        TestCommonTools.consolePrintTestSynStart(64, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn65() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der+()";
        TestCommonTools.consolePrintTestSynStart(65, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn66() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der+(1)";
        TestCommonTools.consolePrintTestSynStart(66, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn67() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der+(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(67, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn68() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der+(1,2,3,4,5)";
        TestCommonTools.consolePrintTestSynStart(68, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn69() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der+(1,2)";
        TestCommonTools.consolePrintTestSynStart(69, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn70() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der-";
        TestCommonTools.consolePrintTestSynStart(70, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn71() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der-()";
        TestCommonTools.consolePrintTestSynStart(71, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn72() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der-(1)";
        TestCommonTools.consolePrintTestSynStart(72, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn73() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der-(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(73, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn74() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der-(1,2,3,4,5)";
        TestCommonTools.consolePrintTestSynStart(74, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn75() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der-(1,2)";
        TestCommonTools.consolePrintTestSynStart(75, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn76() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "diff";
        TestCommonTools.consolePrintTestSynStart(76, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn77() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "diff()";
        TestCommonTools.consolePrintTestSynStart(77, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn78() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "diff(1)";
        TestCommonTools.consolePrintTestSynStart(78, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn79() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "diff(1,2,3,4)";
        TestCommonTools.consolePrintTestSynStart(79, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn80() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "diff(1,2)";
        TestCommonTools.consolePrintTestSynStart(80, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn81() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "difb";
        TestCommonTools.consolePrintTestSynStart(81, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn82() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "difb()";
        TestCommonTools.consolePrintTestSynStart(82, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn83() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "difb(1)";
        TestCommonTools.consolePrintTestSynStart(83, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn84() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "difb(1,2,3,4)";
        TestCommonTools.consolePrintTestSynStart(84, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn85() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "difb(1,2)";
        TestCommonTools.consolePrintTestSynStart(85, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn86() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f()=x+y";
        TestCommonTools.consolePrintTestSynStart(86, expStr);
        Function f = new Function(expStr);
        String msg = f.getErrorMessage();
        Expression e = new Expression("f", f);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn87() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(1,x,y)=x+y";
        TestCommonTools.consolePrintTestSynStart(87, expStr);
        Function f = new Function(expStr);
        String msg = f.getErrorMessage();
        Expression e = new Expression("f", f);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn88() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(1)=x+y";
        TestCommonTools.consolePrintTestSynStart(88, expStr);
        Function f = new Function(expStr);
        String msg = f.getErrorMessage();
        Expression e = new Expression("f", f);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn89() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(x,)=x+y";
        TestCommonTools.consolePrintTestSynStart(89, expStr);
        Function f = new Function(expStr);
        String msg = f.getErrorMessage();
        Expression e = new Expression("f", f);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn90() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(x,  a, x, )=x+y";
        TestCommonTools.consolePrintTestSynStart(90, expStr);
        Function f = new Function(expStr);
        String msg = f.getErrorMessage();
        Expression e = new Expression("f", f);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn91() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "  f   (x ,   y,    z   )  = x +  y  +z  ";
        TestCommonTools.consolePrintTestSynStart(91, expStr);
        Function f = new Function(expStr);
        String msg = f.getErrorMessage();
        Expression e = new Expression("f(1,2,3)", f);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (
                (msg.indexOf("pattern not mathes") == -1) &&
                        (reg == syn)
        )
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn92() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x()=y+z";
        TestCommonTools.consolePrintTestSynStart(92, expStr);
        Argument x = new Argument(expStr);
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("Invalid argument definition") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn93() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x(1,a,b)=a+b";
        TestCommonTools.consolePrintTestSynStart(93, expStr);
        Argument x = new Argument(expStr);
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("Invalid argument definition") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn94() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x(1)=a+b";
        TestCommonTools.consolePrintTestSynStart(94, expStr);
        Argument x = new Argument(expStr);
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("Invalid argument definition") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn95() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x(a,)=a+b";
        TestCommonTools.consolePrintTestSynStart(95, expStr);
        Argument x = new Argument(expStr);
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("Invalid argument definition") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn96() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x(a, b, c,)=a+c";
        TestCommonTools.consolePrintTestSynStart(96, expStr);
        Argument x = new Argument(expStr);
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("Invalid argument definition") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn97() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "  x (  a, b   , c  ) = a+b+c";
        TestCommonTools.consolePrintTestSynStart(97, expStr);
        Argument x = new Argument(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (
                (msg.indexOf("Invalid argument definition") == -1) &&
                        (reg == syn) &&
                        (e.calculate() == 6)
        )
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn98() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x 5";
        TestCommonTools.consolePrintTestSynStart(98, expStr);
        Argument x = new Argument(expStr);
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("Invalid argument definition") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn99() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "  x = 5 + 1 + 2";
        TestCommonTools.consolePrintTestSynStart(99, expStr);
        Argument x = new Argument(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (
                (msg.indexOf("Invalid argument definition") == -1) &&
                        (reg == syn) &&
                        (e.calculate() == 8)
        )
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn100() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(n,m)=n*f(n-1)";
        TestCommonTools.consolePrintTestSynStart(100, expStr);
        Argument x = new RecursiveArgument(expStr);
        String msg = x.getErrorMessage();
        Expression e = new Expression("x", x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("Invalid argument definition") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn101() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "RecursiveArgument name    1fa";
        TestCommonTools.consolePrintTestSynStart(101, expStr);
        Argument x = new RecursiveArgument("1fa","f(n-1)", "n");
        String msg = x.getErrorMessage();
        Expression e = new Expression("x(1)", x);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("Invalid argument name") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn102() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x()=y+z";
        TestCommonTools.consolePrintTestSynStart(102, expStr);
        Constant c1 = new Constant(expStr);
        String msg = c1.getErrorMessage();
        Expression e = new Expression("x", c1);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn103() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x(1,a,b)=a+b";
        TestCommonTools.consolePrintTestSynStart(103, expStr);
        Constant c1 = new Constant(expStr);
        String msg = c1.getErrorMessage();
        Expression e = new Expression("x", c1);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn104() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x(1)=a+b";
        TestCommonTools.consolePrintTestSynStart(104, expStr);
        Constant c1 = new Constant(expStr);
        String msg = c1.getErrorMessage();
        Expression e = new Expression("x", c1);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn105() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x(a,)=a+b";
        TestCommonTools.consolePrintTestSynStart(105, expStr);
        Constant c1 = new Constant(expStr);
        String msg = c1.getErrorMessage();
        Expression e = new Expression("x", c1);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn106() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x(a, b, c,)=a+c";
        TestCommonTools.consolePrintTestSynStart(106, expStr);
        Constant c1 = new Constant(expStr);
        String msg = c1.getErrorMessage();
        Expression e = new Expression("x", c1);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn107() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "  x = a+b+c";
        TestCommonTools.consolePrintTestSynStart(107, expStr);
        Constant c1 = new Constant(expStr, new Argument("a = 1"), new Argument("b = 2"), new Argument("   c = 3"));
        String msg = c1.getErrorMessage();
        Expression e = new Expression("x", c1);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (
                (msg.indexOf("pattern not mathes") == -1) &&
                        (reg == syn) &&
                        (e.calculate() == 6)
        )
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn108() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "x 5";
        TestCommonTools.consolePrintTestSynStart(108, expStr);
        Constant c1 = new Constant(expStr);
        String msg = c1.getErrorMessage();
        Expression e = new Expression("x", c1);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("pattern not mathes") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn109() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "  x = 5 + 1 + 2";
        TestCommonTools.consolePrintTestSynStart(109, expStr);
        Constant c1 = new Constant(expStr);
        String msg = c1.getErrorMessage();
        Expression e = new Expression("x", c1);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (
                (msg.indexOf("pattern not mathes") == -1) &&
                        (reg == syn) &&
                        (e.calculate() == 8)
        )
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn110() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "Constant name    1fa";
        TestCommonTools.consolePrintTestSynStart(110, expStr);
        Constant c1 = new Constant("1fa",1);
        String msg = c1.getErrorMessage();
        Expression e = new Expression("1fa", c1);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (msg.indexOf("invalid constant name") >= 0)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn111() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        Function ff = new Function("ff", new FunExt());
        String expStr = "ff(4,5)";
        TestCommonTools.consolePrintTestSynStart(111, expStr);
        Expression e = new Expression(expStr, ff);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == Expression.NO_SYNTAX_ERRORS)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn112() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        Function ff = new Function("ff", new FunExt());
        String expStr = "ff(4,5,6)";
        TestCommonTools.consolePrintTestSynStart(112, expStr);
        Expression e = new Expression(expStr, ff);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn113() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "solve(2*x - 4, x+y, -10, 10)";
        TestCommonTools.consolePrintTestSynStart(113, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn114() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        mXparser.unremoveAllBuiltinTokens();
        mXparser.removeBuiltinTokens("sin");
        String expStr = "sin(2)";
        TestCommonTools.consolePrintTestSynStart(114, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        mXparser.unremoveAllBuiltinTokens();
        if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn115() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        mXparser.unmodifyAllBuiltinTokens();
        mXparser.modifyBuiltinToken("sin", "sinos");
        String expStr = "sin(2)";
        TestCommonTools.consolePrintTestSynStart(115, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        mXparser.unmodifyAllBuiltinTokens();
        if (syn == Expression.SYNTAX_ERROR_OR_STATUS_UNKNOWN)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn116() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        mXparser.unmodifyAllBuiltinTokens();
        mXparser.modifyBuiltinToken("sin", "sinos");
        String expStr = "sinos(2)";
        TestCommonTools.consolePrintTestSynStart(116, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        mXparser.unmodifyAllBuiltinTokens();
        if (syn == Expression.NO_SYNTAX_ERRORS)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn117() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        mXparser.setNotToOverrideBuiltinTokens();
        Function sin = new Function("sin(x,y) = 2*x + y");
        Argument ee = new Argument("e = 5");
        Constant pi = new Constant("pi = 2");
        String expStr = "sin(e,pi)";
        TestCommonTools.consolePrintTestSynStart(117, expStr);
        Expression e = new Expression(expStr, sin, ee, pi);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn118() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        mXparser.setToOverrideBuiltinTokens();
        Function sin = new Function("sin(x,y) = 2*x + y");
        Argument ee = new Argument("e = 5");
        Constant pi = new Constant("pi = 2");
        String expStr = "sin(e,pi)";
        TestCommonTools.consolePrintTestSynStart(118, expStr);
        Expression e = new Expression(expStr, sin, ee, pi);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn119() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "h.1234567890aBcDeF + H.001234567890aBcDeF";
        TestCommonTools.consolePrintTestSynStart(119, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn120() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "o.12345670 + O.0012345670";
        TestCommonTools.consolePrintTestSynStart(120, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn121() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b.101010 + B.000101010";
        TestCommonTools.consolePrintTestSynStart(121, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn122() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "h.1234567890aBcDeFu + y.001234567890aBcDeF";
        TestCommonTools.consolePrintTestSynStart(122, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn123() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "o.123456708 + O.00123456709";
        TestCommonTools.consolePrintTestSynStart(123, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn124() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b.2101010 + B.0001010103";
        TestCommonTools.consolePrintTestSynStart(124, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn125() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b1. + B1.111";
        TestCommonTools.consolePrintTestSynStart(125, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn126() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b1.111 + B1.1101";
        TestCommonTools.consolePrintTestSynStart(126, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn127() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b2.01 + B2.0101";
        TestCommonTools.consolePrintTestSynStart(127, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn128() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b2.012 + B2.0101";
        TestCommonTools.consolePrintTestSynStart(128, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn129() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b3.012 + B3.0012";
        TestCommonTools.consolePrintTestSynStart(129, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn130() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b3.012 + B3.00123";
        TestCommonTools.consolePrintTestSynStart(130, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn131() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b4.0123 + B4.00123";
        TestCommonTools.consolePrintTestSynStart(131, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn132() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b4.01234 + B4.00123";
        TestCommonTools.consolePrintTestSynStart(132, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn133() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b5.01234 + B5.001234";
        TestCommonTools.consolePrintTestSynStart(133, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn134() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b5.012345 + B5.001234";
        TestCommonTools.consolePrintTestSynStart(134, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn135() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b6.012345 + B6.0012345";
        TestCommonTools.consolePrintTestSynStart(135, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn136() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b6.012345 + B6.00123456";
        TestCommonTools.consolePrintTestSynStart(136, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn137() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b7.0123456 + B7.00123456";
        TestCommonTools.consolePrintTestSynStart(137, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn138() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b7.0123456 + B7.001234568";
        TestCommonTools.consolePrintTestSynStart(138, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn139() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b8.01234567 + B8.001234567";
        TestCommonTools.consolePrintTestSynStart(139, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn140() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b8.01234567 + B8.0012345679";
        TestCommonTools.consolePrintTestSynStart(140, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn141() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b9.012345678 + B9.0012345678";
        TestCommonTools.consolePrintTestSynStart(141, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn142() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b9.0123456789 + B9.0012345678";
        TestCommonTools.consolePrintTestSynStart(142, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn143() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b10.0123456789 + B10.00123456789";
        TestCommonTools.consolePrintTestSynStart(143, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn144() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b10.0123456789 + B10.00123456789a";
        TestCommonTools.consolePrintTestSynStart(144, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn145() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b11.0123456789a + B11.00123456789A";
        TestCommonTools.consolePrintTestSynStart(145, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn146() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b11.0123456789a + B11.00123456789Ab";
        TestCommonTools.consolePrintTestSynStart(146, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn147() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b12.0123456789ab + B12.00123456789AB";
        TestCommonTools.consolePrintTestSynStart(147, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn148() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b12.0123456789abC + B12.00123456789AB";
        TestCommonTools.consolePrintTestSynStart(148, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn149() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b13.0123456789abc + B13.00123456789ABC";
        TestCommonTools.consolePrintTestSynStart(149, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn150() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b13.0123456789abc + B13.00123456789ABCd";
        TestCommonTools.consolePrintTestSynStart(150, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn151() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b14.0123456789abcd + B14.00123456789ABCD";
        TestCommonTools.consolePrintTestSynStart(151, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn152() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b14.0123456789abcdE + B14.00123456789ABCD";
        TestCommonTools.consolePrintTestSynStart(152, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn153() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b15.0123456789abcde + B15.00123456789ABCDE";
        TestCommonTools.consolePrintTestSynStart(153, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn154() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b15.0123456789abcde + B15.00123456789ABCDEf";
        TestCommonTools.consolePrintTestSynStart(154, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn155() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b16.0123456789abcdef + B16.00123456789ABCDEF";
        TestCommonTools.consolePrintTestSynStart(155, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn156() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b16.0123456789abcdefg + B16.00123456789ABCDEF";
        TestCommonTools.consolePrintTestSynStart(156, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn157() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b16.0123456789abcdef + B16.00123456789ABCDEF";
        TestCommonTools.consolePrintTestSynStart(157, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn158() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b16.0123456789abcdefg + B16.00123456789ABCDEF";
        TestCommonTools.consolePrintTestSynStart(158, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn159() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b17.0123456789abcdefg + B17.00123456789ABCDEFG";
        TestCommonTools.consolePrintTestSynStart(159, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn160() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b17.0123456789abcdefg + B17.00123456789ABCDEFGh";
        TestCommonTools.consolePrintTestSynStart(160, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn161() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b18.0123456789abcdefgh + B18.00123456789ABCDEFGH";
        TestCommonTools.consolePrintTestSynStart(161, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn162() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b18.0123456789abcdefghI + B18.00123456789ABCDEFGH";
        TestCommonTools.consolePrintTestSynStart(162, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn163() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b19.0123456789abcdefghi + B19.00123456789ABCDEFGI";
        TestCommonTools.consolePrintTestSynStart(163, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn164() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b19.0123456789abcdefghi + B19.00123456789ABCDEFGIj";
        TestCommonTools.consolePrintTestSynStart(164, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn165() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b20.0123456789abcdefghij + B20.00123456789ABCDEFGIJ";
        TestCommonTools.consolePrintTestSynStart(165, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn166() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b20.0123456789abcdefghijK + B20.00123456789ABCDEFGIJ";
        TestCommonTools.consolePrintTestSynStart(166, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn167() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b21.0123456789abcdefghijk + B21.00123456789ABCDEFGIJK";
        TestCommonTools.consolePrintTestSynStart(167, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn168() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b21.0123456789abcdefghijk + B21.00123456789ABCDEFGIJKl";
        TestCommonTools.consolePrintTestSynStart(168, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn169() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b22.0123456789abcdefghijkl + B22.00123456789ABCDEFGIJKL";
        TestCommonTools.consolePrintTestSynStart(169, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn170() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b22.0123456789abcdefghijklM + B22.00123456789ABCDEFGIJKL";
        TestCommonTools.consolePrintTestSynStart(170, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn171() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b23.0123456789abcdefghijklm + B23.00123456789ABCDEFGIJKLM";
        TestCommonTools.consolePrintTestSynStart(171, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn172() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b23.0123456789abcdefghijklm + B23.00123456789ABCDEFGIJKLMn";
        TestCommonTools.consolePrintTestSynStart(172, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn173() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b24.0123456789abcdefghijklmn + B24.00123456789ABCDEFGIJKLMN";
        TestCommonTools.consolePrintTestSynStart(173, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn174() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b24.0123456789abcdefghijklmnO + B24.00123456789ABCDEFGIJKLMN";
        TestCommonTools.consolePrintTestSynStart(174, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn175() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b25.0123456789abcdefghijklmno + B25.00123456789ABCDEFGIJKLMNO";
        TestCommonTools.consolePrintTestSynStart(175, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn176() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b25.0123456789abcdefghijklmno + B25.00123456789ABCDEFGIJKLMNOp";
        TestCommonTools.consolePrintTestSynStart(176, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn177() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b26.0123456789abcdefghijklmnop + B26.00123456789ABCDEFGIJKLMNOP";
        TestCommonTools.consolePrintTestSynStart(177, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn178() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b26.0123456789abcdefghijklmnop + B26.00123456789ABCDEFGIJKLMNOPq";
        TestCommonTools.consolePrintTestSynStart(178, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn179() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b27.0123456789abcdefghijklmnopq + B27.00123456789ABCDEFGIJKLMNOPQ";
        TestCommonTools.consolePrintTestSynStart(179, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn180() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b27.0123456789abcdefghijklmnopqR + B27.00123456789ABCDEFGIJKLMNOPQ";
        TestCommonTools.consolePrintTestSynStart(180, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn181() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b28.0123456789abcdefghijklmnopqr + B28.00123456789ABCDEFGIJKLMNOPQR";
        TestCommonTools.consolePrintTestSynStart(181, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn182() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b28.0123456789abcdefghijklmnopqr + B28.00123456789ABCDEFGIJKLMNOPQRs";
        TestCommonTools.consolePrintTestSynStart(182, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn183() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b29.0123456789abcdefghijklmnopqrs + B29.00123456789ABCDEFGIJKLMNOPQRS";
        TestCommonTools.consolePrintTestSynStart(183, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn184() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b29.0123456789abcdefghijklmnopqrsT + B29.00123456789ABCDEFGIJKLMNOPQRS";
        TestCommonTools.consolePrintTestSynStart(184, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn185() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b30.0123456789abcdefghijklmnopqrst + B30.00123456789ABCDEFGIJKLMNOPQRST";
        TestCommonTools.consolePrintTestSynStart(185, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn186() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b30.0123456789abcdefghijklmnopqrst + B30.00123456789ABCDEFGIJKLMNOPQRSTu";
        TestCommonTools.consolePrintTestSynStart(186, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn187() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b31.0123456789abcdefghijklmnopqrstu + B31.00123456789ABCDEFGIJKLMNOPQRSTU";
        TestCommonTools.consolePrintTestSynStart(187, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn188() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b31.0123456789abcdefghijklmnopqrstuV + B31.00123456789ABCDEFGIJKLMNOPQRSTU";
        TestCommonTools.consolePrintTestSynStart(188, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn189() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b32.0123456789abcdefghijklmnopqrstuv + B32.00123456789ABCDEFGIJKLMNOPQRSTUV";
        TestCommonTools.consolePrintTestSynStart(189, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn190() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b32.0123456789abcdefghijklmnopqrstuv + B32.00123456789ABCDEFGIJKLMNOPQRSTUVw";
        TestCommonTools.consolePrintTestSynStart(190, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn191() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b33.0123456789abcdefghijklmnopqrstuvw + B33.00123456789ABCDEFGIJKLMNOPQRSTUVW";
        TestCommonTools.consolePrintTestSynStart(191, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn192() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b33.0123456789abcdefghijklmnopqrstuvwX + B33.00123456789ABCDEFGIJKLMNOPQRSTUVW";
        TestCommonTools.consolePrintTestSynStart(192, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn193() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b34.0123456789abcdefghijklmnopqrstuvwx + B34.00123456789ABCDEFGIJKLMNOPQRSTUVWX";
        TestCommonTools.consolePrintTestSynStart(193, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn194() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b34.0123456789abcdefghijklmnopqrstuvwx + B34.00123456789ABCDEFGIJKLMNOPQRSTUVWXy";
        TestCommonTools.consolePrintTestSynStart(194, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn195() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b35.0123456789abcdefghijklmnopqrstuvwxy + B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY";
        TestCommonTools.consolePrintTestSynStart(195, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn196() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b35.0123456789abcdefghijklmnopqrstuvwxyZ + B35.00123456789ABCDEFGIJKLMNOPQRSTUVWXY";
        TestCommonTools.consolePrintTestSynStart(196, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn197() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyz + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
        TestCommonTools.consolePrintTestSynStart(197, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn198() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "b36.0123456789abcdefghijklmnopqrstuvwxyzą + B36.00123456789ABCDEFGIJKLMNOPQRSTUVWXYZ";
        TestCommonTools.consolePrintTestSynStart(198, expStr);
        Expression e = new Expression(expStr);
        e.disableImpliedMultiplicationMode();
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn199() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        Argument x = new Argument("x = pi");
        String expStr = "der( sin(x), x )";
        TestCommonTools.consolePrintTestSynStart(199, expStr);
        Expression e = new Expression(expStr, x);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn200() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        Argument x = new Argument("x = pi");
        String expStr = "der( sin(x), x, 0.01, 100 )";
        TestCommonTools.consolePrintTestSynStart(200, expStr);
        Expression e = new Expression(expStr, x);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn201() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der( sin(x), x , pi )";
        TestCommonTools.consolePrintTestSynStart(201, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn202() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der( sin(x), x , pi )";
        TestCommonTools.consolePrintTestSynStart(202, expStr);
        Argument x = new Argument("x");
        Expression e = new Expression(expStr, x);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn203() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der( sin(x), x , pi, 0.01, 100 )";
        TestCommonTools.consolePrintTestSynStart(203, expStr);
        Expression e = new Expression(expStr);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn204() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der( sin(x), x , pi, 0.01, 100 )";
        TestCommonTools.consolePrintTestSynStart(204, expStr);
        Argument x = new Argument("x");
        Expression e = new Expression(expStr, x);
        boolean reg = true;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn205() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der( sin(x), x )";
        TestCommonTools.consolePrintTestSynStart(205, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn206() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "der( sin(x), x, 0.1, 100 )";
        TestCommonTools.consolePrintTestSynStart(206, expStr);
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn207() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(pi)+cos(pi)";
        TestCommonTools.consolePrintTestSynStart(207, expStr);
        Expression e = new Expression(expStr);
        mXparser.unremoveAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn208() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(pi)+cos(pi)";
        TestCommonTools.consolePrintTestSynStart(208, expStr);
        Expression e = new Expression(expStr);
        mXparser.unremoveAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.removeBuiltinTokens("sin", "cos");
        syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        mXparser.unremoveAllBuiltinTokens();
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn209() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(pi)+cos(pi)";
        TestCommonTools.consolePrintTestSynStart(209, expStr);
        Expression e = new Expression(expStr);
        mXparser.unremoveAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.removeBuiltinTokens("sin", "cos");
        syn = e.checkSyntax();
        mXparser.unremoveBuiltinTokens("cos");
        syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        mXparser.unremoveAllBuiltinTokens();
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn210() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(pi)+cos(pi)";
        TestCommonTools.consolePrintTestSynStart(210, expStr);
        Expression e = new Expression(expStr);
        mXparser.unremoveAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.removeBuiltinTokens("sin", "cos");
        syn = e.checkSyntax();
        mXparser.unremoveBuiltinTokens("cos");
        syn = e.checkSyntax();
        mXparser.unremoveAllBuiltinTokens();
        syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn211() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sine(pi)+cosine(pi)";
        TestCommonTools.consolePrintTestSynStart(211, expStr);
        Expression e = new Expression(expStr);
        mXparser.unmodifyAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn212() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sine(pi)+cosine(pi)";
        TestCommonTools.consolePrintTestSynStart(212, expStr);
        Expression e = new Expression(expStr);
        mXparser.unmodifyAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.modifyBuiltinToken("sin", "sine");
        syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        mXparser.unmodifyAllBuiltinTokens();
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn213() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sine(pi)+cosine(pi)";
        TestCommonTools.consolePrintTestSynStart(213, expStr);
        Expression e = new Expression(expStr);
        mXparser.unmodifyAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.modifyBuiltinToken("sin", "sine");
        syn = e.checkSyntax();
        mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
        syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        mXparser.unmodifyAllBuiltinTokens();
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn214() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sine(pi)+cosine(pi)";
        TestCommonTools.consolePrintTestSynStart(214, expStr);
        Expression e = new Expression(expStr);
        mXparser.unmodifyAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.modifyBuiltinToken("sin", "sine");
        syn = e.checkSyntax();
        mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
        syn = e.checkSyntax();
        mXparser.unmodifyBuiltinTokens("sin");
        syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        mXparser.unmodifyAllBuiltinTokens();
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn215() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sine(pi)+cosine(pi)";
        TestCommonTools.consolePrintTestSynStart(215, expStr);
        Expression e = new Expression(expStr);
        mXparser.unmodifyAllBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.modifyBuiltinToken("sin", "sine");
        syn = e.checkSyntax();
        mXparser.modifyBuiltinToken("cos", "cosine", "My new cosine token");
        syn = e.checkSyntax();
        mXparser.unmodifyAllBuiltinTokens();
        syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn216() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(pi)";
        TestCommonTools.consolePrintTestSynStart(216, expStr);
        Function sin = new Function("sin(x) = 2*x");
        Constant pi = new Constant("pi = 1");
        Expression e = new Expression(expStr, sin, pi);
        mXparser.setNotToOverrideBuiltinTokens();
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn217() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(pi)";
        TestCommonTools.consolePrintTestSynStart(217, expStr);
        Function sin = new Function("sin(x) = 2*x");
        Constant pi = new Constant("pi = 1");
        Expression e = new Expression(expStr, sin, pi);
        mXparser.setNotToOverrideBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.setToOverrideBuiltinTokens();
        syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        mXparser.setNotToOverrideBuiltinTokens();
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn218() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(pi)";
        TestCommonTools.consolePrintTestSynStart(218, expStr);
        Function sin = new Function("sin(x) = 2*x");
        Constant pi = new Constant("pi = 1");
        Expression e = new Expression(expStr, sin, pi);
        mXparser.setNotToOverrideBuiltinTokens();
        boolean syn = e.checkSyntax();
        mXparser.setToOverrideBuiltinTokens();
        syn = e.checkSyntax();
        mXparser.setNotToOverrideBuiltinTokens();
        syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn219() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(350.0/5) + 60.0 + + (180/3)*5";
        TestCommonTools.consolePrintTestSynStart(219, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn220() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(350.0/5) + 60.0 + - (180/3)*5";
        TestCommonTools.consolePrintTestSynStart(220, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn221() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(350.0/5) + 60.0 -  + (180/3)*5";
        TestCommonTools.consolePrintTestSynStart(221, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn222() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(350.0/5) + 60.0 -   - (180/3)*5";
        TestCommonTools.consolePrintTestSynStart(222, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn223() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*2_3_5";
        TestCommonTools.consolePrintTestSynStart(223, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn224() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(-2_3_5)";
        TestCommonTools.consolePrintTestSynStart(224, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn225() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "-2_3_5+5_2";
        TestCommonTools.consolePrintTestSynStart(225, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn226() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(-2_3_5+5_2*b5.12)";
        TestCommonTools.consolePrintTestSynStart(226, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn227() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(101_102_103+2653_123*b5.12)";
        TestCommonTools.consolePrintTestSynStart(227, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn228() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2^^3+2^3+2^2^^2";
        TestCommonTools.consolePrintTestSynStart(228, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn229() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "pi^^sin(pi)";
        TestCommonTools.consolePrintTestSynStart(229, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn230() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(x) = (3 + 5*x";
        TestCommonTools.consolePrintTestSynStart(230, expStr);
        Function f = new Function(expStr);
        Expression e = new Expression("");
        boolean syn = f.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn231() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(x) = (3 + 5*x)";
        TestCommonTools.consolePrintTestSynStart(231, expStr);
        Function f = new Function(expStr);
        Expression e = new Expression("");
        boolean syn = f.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn232() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "[npar]";
        TestCommonTools.consolePrintTestSynStart(232, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn233() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "par(1)";
        TestCommonTools.consolePrintTestSynStart(233, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn234() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(x) = [npar] + par(1)";
        TestCommonTools.consolePrintTestSynStart(234, expStr);
        Function f = new Function(expStr);
        Expression e = new Expression("");
        boolean syn = f.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn235() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(...) = [npar] + par(1)";
        TestCommonTools.consolePrintTestSynStart(235, expStr);
        Function f = new Function(expStr);
        Expression e = new Expression("");
        boolean syn = f.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn236() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "f(... = [npar] + par(1)";
        TestCommonTools.consolePrintTestSynStart(236, expStr);
        Function f = new Function(expStr);
        Expression e = new Expression("");
        boolean syn = f.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn237() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "{fun-ext-var}";
        TestCommonTools.consolePrintTestSynStart(237, expStr);
        FunExtVar fx = new FunExtVar();
        Function f = new Function("f", fx);
        Expression e = new Expression("");
        boolean syn = f.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn238() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        FunExtVar gx = new FunExtVar();
        Function f = new Function("f(...) = sum(i, 1, [npar], par(i) )");
        Function g = new Function("g", gx);
        String expStr = "f(1) + f(1,2) + f(1,2,3) + g(1) + g(1,2) + g(1,2,3)";
        TestCommonTools.consolePrintTestSynStart(238, expStr);
        Expression e = new Expression(expStr, f, g);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn239() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = ".2";
        TestCommonTools.consolePrintTestSynStart(239, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn240() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "+.2";
        TestCommonTools.consolePrintTestSynStart(240, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn241() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "-.2";
        TestCommonTools.consolePrintTestSynStart(241, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn242() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "-.2^.3";
        TestCommonTools.consolePrintTestSynStart(242, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn243() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = ".2 ^ .3";
        TestCommonTools.consolePrintTestSynStart(243, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn244() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "-2 + 3 - .2 + 1.5 - .2^.3 + (2/.3)";
        TestCommonTools.consolePrintTestSynStart(244, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn245() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        Argument fun = new Argument("fun");
        Argument x = new Argument("x");
        String expStr = "fun(x)";
        TestCommonTools.consolePrintTestSynStart(245, expStr);
        Expression e = new Expression(expStr, fun, x);
        boolean lex = e.checkLexSyntax();
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg && lex == true)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn246() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2(3)";
        TestCommonTools.consolePrintTestSynStart(246, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn247() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "(3)2";
        TestCommonTools.consolePrintTestSynStart(247, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn248() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2(3)2";
        TestCommonTools.consolePrintTestSynStart(248, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn249() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2(3+4)2";
        TestCommonTools.consolePrintTestSynStart(249, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn250() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2(3+4)2(3)(3)2cos(pi)2sin(pi)2pi";
        TestCommonTools.consolePrintTestSynStart(250, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn251() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "-2(3+4)2(3)(3)-2cos(pi)+2sin(pi)2-pi";
        TestCommonTools.consolePrintTestSynStart(251, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn252() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2(3+4)2 - 2*(3+4)*2";
        TestCommonTools.consolePrintTestSynStart(252, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn253() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2e-2*e";
        TestCommonTools.consolePrintTestSynStart(253, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn254() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = ".01e-0.01*e";
        TestCommonTools.consolePrintTestSynStart(254, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn255() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "e[h-]sin(.1pi)";
        TestCommonTools.consolePrintTestSynStart(255, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn256() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2[h-]2[h-]2[h-]";
        TestCommonTools.consolePrintTestSynStart(256, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn257() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "[h-](1)";
        TestCommonTools.consolePrintTestSynStart(257, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn258() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "[h-](1,2)";
        TestCommonTools.consolePrintTestSynStart(258, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn259() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
        TestCommonTools.consolePrintTestSynStart(259, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn260() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2.1a2.1e2(.3+0.4).01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
        TestCommonTools.consolePrintTestSynStart(260, expStr);
        Expression e = new Expression(expStr);
        e.addArguments(new Argument("a = 2"));
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn261() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2.1a2.1e2(.3+0.4)[h-].01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
        TestCommonTools.consolePrintTestSynStart(261, expStr);
        Expression e = new Expression(expStr);
        e.addArguments(new Argument("a = 2"));
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn262() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2.1a[h-]2.1e2(.3+0.4)[h-].01(3-2)(3^2)2cos(2.1pi)2sin(1.9pi)0.1pi";
        TestCommonTools.consolePrintTestSynStart(262, expStr);
        Expression e = new Expression(expStr);
        e.addArguments(new Argument("a = 2"));
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
}
