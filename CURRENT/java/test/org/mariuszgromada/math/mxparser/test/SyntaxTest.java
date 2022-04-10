/*
 * @(#)SyntaxTest.java        5.0.0    2022-04-10
 *
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
package org.mariuszgromada.math.mxparser.test;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.mariuszgromada.math.mxparser.*;
/**
 * Unit tests covering syntax
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
 *
 */
public final class SyntaxTest {
    @Test
    public void testSyn0000() {
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
    public void testSyn0001() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "1++";
        TestCommonTools.consolePrintTestSynStart(1, expStr);
        mXparser.disableAttemptToFixExpStrMode();
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0002() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "1+1-";
        TestCommonTools.consolePrintTestSynStart(2, expStr);
        mXparser.disableAttemptToFixExpStrMode();
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0003() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "+-1";
        TestCommonTools.consolePrintTestSynStart(3, expStr);
        mXparser.disableAttemptToFixExpStrMode();
        Expression e = new Expression(expStr);
        boolean reg = false;
        boolean syn = e.checkSyntax();
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0004() {
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
    public void testSyn0005() {
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
    public void testSyn0006() {
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
    public void testSyn0007() {
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
    public void testSyn0008() {
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
    public void testSyn0009() {
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
    public void testSyn0010() {
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
    public void testSyn0011() {
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
    public void testSyn0012() {
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
    public void testSyn0013() {
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
    public void testSyn0014() {
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
    public void testSyn0015() {
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
    public void testSyn0016() {
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
    public void testSyn0017() {
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
    public void testSyn0018() {
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
    public void testSyn0019() {
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
    public void testSyn0020() {
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
    public void testSyn0021() {
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
    public void testSyn0022() {
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
    public void testSyn0023() {
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
    public void testSyn0024() {
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
    public void testSyn0025() {
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
    public void testSyn0026() {
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
    public void testSyn0027() {
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
    public void testSyn0028() {
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
    public void testSyn0029() {
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
    public void testSyn0030() {
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
    public void testSyn0031() {
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
    public void testSyn0032() {
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
    public void testSyn0033() {
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
    public void testSyn0034() {
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
    public void testSyn0035() {
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
    public void testSyn0036() {
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
    public void testSyn0037() {
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
    public void testSyn0038() {
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
    public void testSyn0039() {
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
    public void testSyn0040() {
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
    public void testSyn0041() {
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
    public void testSyn0042() {
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
    public void testSyn0043() {
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
    public void testSyn0044() {
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
    public void testSyn0045() {
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
    public void testSyn0046() {
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
    public void testSyn0047() {
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
    public void testSyn0048() {
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
    public void testSyn0049() {
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
    public void testSyn0050() {
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
    public void testSyn0051() {
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
    public void testSyn0052() {
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
    public void testSyn0053() {
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
    public void testSyn0054() {
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
    public void testSyn0055() {
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
    public void testSyn0056() {
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
    public void testSyn0057() {
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
    public void testSyn0058() {
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
    public void testSyn0059() {
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
    public void testSyn0060() {
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
    public void testSyn0061() {
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
    public void testSyn0062() {
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
    public void testSyn0063() {
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
    public void testSyn0064() {
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
    public void testSyn0065() {
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
    public void testSyn0066() {
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
    public void testSyn0067() {
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
    public void testSyn0068() {
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
    public void testSyn0069() {
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
    public void testSyn0070() {
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
    public void testSyn0071() {
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
    public void testSyn0072() {
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
    public void testSyn0073() {
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
    public void testSyn0074() {
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
    public void testSyn0075() {
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
    public void testSyn0076() {
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
    public void testSyn0077() {
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
    public void testSyn0078() {
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
    public void testSyn0079() {
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
    public void testSyn0080() {
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
    public void testSyn0081() {
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
    public void testSyn0082() {
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
    public void testSyn0083() {
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
    public void testSyn0084() {
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
    public void testSyn0085() {
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
    public void testSyn0086() {
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
    public void testSyn0087() {
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
    public void testSyn0088() {
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
    public void testSyn0089() {
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
    public void testSyn0090() {
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
    public void testSyn0091() {
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
    public void testSyn0092() {
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
    public void testSyn0093() {
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
    public void testSyn0094() {
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
    public void testSyn0095() {
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
    public void testSyn0096() {
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
    public void testSyn0097() {
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
    public void testSyn0098() {
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
    public void testSyn0099() {
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
    public void testSyn0100() {
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
    public void testSyn0101() {
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
    public void testSyn0102() {
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
    public void testSyn0103() {
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
    public void testSyn0104() {
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
    public void testSyn0105() {
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
    public void testSyn0106() {
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
    public void testSyn0107() {
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
    public void testSyn0108() {
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
    public void testSyn0109() {
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
    public void testSyn0110() {
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
    public void testSyn0111() {
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
    public void testSyn0112() {
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
    public void testSyn0113() {
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
    public void testSyn0114() {
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
    public void testSyn0115() {
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
    public void testSyn0116() {
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
    public void testSyn0117() {
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
    public void testSyn0118() {
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
    public void testSyn0119() {
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
    public void testSyn0120() {
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
    public void testSyn0121() {
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
    public void testSyn0122() {
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
    public void testSyn0123() {
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
    public void testSyn0124() {
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
    public void testSyn0125() {
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
    public void testSyn0126() {
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
    public void testSyn0127() {
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
    public void testSyn0128() {
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
    public void testSyn0129() {
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
    public void testSyn0130() {
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
    public void testSyn0131() {
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
    public void testSyn0132() {
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
    public void testSyn0133() {
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
    public void testSyn0134() {
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
    public void testSyn0135() {
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
    public void testSyn0136() {
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
    public void testSyn0137() {
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
    public void testSyn0138() {
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
    public void testSyn0139() {
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
    public void testSyn0140() {
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
    public void testSyn0141() {
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
    public void testSyn0142() {
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
    public void testSyn0143() {
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
    public void testSyn0144() {
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
    public void testSyn0145() {
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
    public void testSyn0146() {
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
    public void testSyn0147() {
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
    public void testSyn0148() {
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
    public void testSyn0149() {
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
    public void testSyn0150() {
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
    public void testSyn0151() {
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
    public void testSyn0152() {
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
    public void testSyn0153() {
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
    public void testSyn0154() {
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
    public void testSyn0155() {
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
    public void testSyn0156() {
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
    public void testSyn0157() {
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
    public void testSyn0158() {
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
    public void testSyn0159() {
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
    public void testSyn0160() {
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
    public void testSyn0161() {
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
    public void testSyn0162() {
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
    public void testSyn0163() {
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
    public void testSyn0164() {
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
    public void testSyn0165() {
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
    public void testSyn0166() {
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
    public void testSyn0167() {
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
    public void testSyn0168() {
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
    public void testSyn0169() {
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
    public void testSyn0170() {
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
    public void testSyn0171() {
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
    public void testSyn0172() {
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
    public void testSyn0173() {
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
    public void testSyn0174() {
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
    public void testSyn0175() {
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
    public void testSyn0176() {
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
    public void testSyn0177() {
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
    public void testSyn0178() {
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
    public void testSyn0179() {
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
    public void testSyn0180() {
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
    public void testSyn0181() {
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
    public void testSyn0182() {
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
    public void testSyn0183() {
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
    public void testSyn0184() {
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
    public void testSyn0185() {
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
    public void testSyn0186() {
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
    public void testSyn0187() {
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
    public void testSyn0188() {
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
    public void testSyn0189() {
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
    public void testSyn0190() {
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
    public void testSyn0191() {
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
    public void testSyn0192() {
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
    public void testSyn0193() {
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
    public void testSyn0194() {
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
    public void testSyn0195() {
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
    public void testSyn0196() {
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
    public void testSyn0197() {
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
    public void testSyn0198() {
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
    public void testSyn0199() {
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
    public void testSyn0200() {
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
    public void testSyn0201() {
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
    public void testSyn0202() {
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
    public void testSyn0203() {
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
    public void testSyn0204() {
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
    public void testSyn0205() {
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
    public void testSyn0206() {
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
    public void testSyn0207() {
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
    public void testSyn0208() {
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
    public void testSyn0209() {
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
    public void testSyn0210() {
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
    public void testSyn0211() {
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
    public void testSyn0212() {
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
    public void testSyn0213() {
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
    public void testSyn0214() {
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
    public void testSyn0215() {
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
    public void testSyn0216() {
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
    public void testSyn0217() {
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
    public void testSyn0218() {
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
    public void testSyn0219() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(350.0/5) + 60.0 + + (180/3)*5";
        TestCommonTools.consolePrintTestSynStart(219, expStr);
        mXparser.disableAttemptToFixExpStrMode();
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0220() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(350.0/5) + 60.0 + - (180/3)*5";
        TestCommonTools.consolePrintTestSynStart(220, expStr);
        mXparser.disableAttemptToFixExpStrMode();
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0221() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(350.0/5) + 60.0 -  + (180/3)*5";
        TestCommonTools.consolePrintTestSynStart(221, expStr);
        mXparser.disableAttemptToFixExpStrMode();
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0222() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "10*(350.0/5) + 60.0 -   - (180/3)*5";
        TestCommonTools.consolePrintTestSynStart(222, expStr);
        mXparser.disableAttemptToFixExpStrMode();
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0223() {
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
    public void testSyn0224() {
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
    public void testSyn0225() {
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
    public void testSyn0226() {
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
    public void testSyn0227() {
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
    public void testSyn0228() {
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
    public void testSyn0229() {
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
    public void testSyn0230() {
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
    public void testSyn0231() {
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
    public void testSyn0232() {
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
    public void testSyn0233() {
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
    public void testSyn0234() {
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
    public void testSyn0235() {
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
    public void testSyn0236() {
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
    public void testSyn0237() {
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
    public void testSyn0238() {
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
    public void testSyn0239() {
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
    public void testSyn0240() {
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
    public void testSyn0241() {
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
    public void testSyn0242() {
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
    public void testSyn0243() {
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
    public void testSyn0244() {
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
    public void testSyn0245() {
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
    public void testSyn0246() {
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
    public void testSyn0247() {
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
    public void testSyn0248() {
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
    public void testSyn0249() {
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
    public void testSyn0250() {
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
    public void testSyn0251() {
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
    public void testSyn0252() {
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
    public void testSyn0253() {
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
    public void testSyn0254() {
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
    public void testSyn0255() {
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
    public void testSyn0256() {
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
    public void testSyn0257() {
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
    public void testSyn0258() {
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
    public void testSyn0259() {
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
    public void testSyn0260() {
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
    public void testSyn0261() {
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
    public void testSyn0262() {
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
    @Test
    public void testSyn0263() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2×4";
        TestCommonTools.consolePrintTestSynStart(263, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0264() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2⨉4";
        TestCommonTools.consolePrintTestSynStart(264, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0265() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2∙4";
        TestCommonTools.consolePrintTestSynStart(265, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0266() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2÷4";
        TestCommonTools.consolePrintTestSynStart(266, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0267() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "¬1+1∧0+0∨1";
        TestCommonTools.consolePrintTestSynStart(267, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0268() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "(1⇒1) + (0⇐1) + (1⇏0) + (0⇍0) + (1⇔1)";
        TestCommonTools.consolePrintTestSynStart(268, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0269() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "(1~∧1) + (1¬&1) + (1¬&&1) + (1¬/\\1) + (1¬∧1)";
        TestCommonTools.consolePrintTestSynStart(269, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0270() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "(1~∨1) + (1¬|1) + (1¬||1) + (1¬\\/1) + (1¬∨1)";
        TestCommonTools.consolePrintTestSynStart(270, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0271() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "1 ≠ 2";
        TestCommonTools.consolePrintTestSynStart(271, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0272() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "(1 ≤ 2) & (1 ⋜ 2)";
        TestCommonTools.consolePrintTestSynStart(272, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0273() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "(2 ≥ 1) & (2 ⋝ 1)";
        TestCommonTools.consolePrintTestSynStart(273, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0274() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "√4+2*√8+√(3+3)+√e";
        TestCommonTools.consolePrintTestSynStart(274, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0275() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∛4+2*∛8+∛(3+3)+∛e";
        TestCommonTools.consolePrintTestSynStart(275, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0276() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∜4+2*∜8+∜(3+3)+∜e";
        TestCommonTools.consolePrintTestSynStart(276, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0277() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "pi+π+ℼ";
        TestCommonTools.consolePrintTestSynStart(277, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0278() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "e+ℯ+ⅇ";
        TestCommonTools.consolePrintTestSynStart(278, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0279() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∑(i, 1, 10, i^2) + Σ(i, 1, 10, i^2)";
        TestCommonTools.consolePrintTestSynStart(279, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0280() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∏(i, 1, 10, i^2) + ℿ(i, 1, 10, i^2) + Π(i, 1, 10, i^2)";
        TestCommonTools.consolePrintTestSynStart(280, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0281() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∫(x^2, x, 0, 1)";
        TestCommonTools.consolePrintTestSynStart(281, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0282() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∂(x^2, x, 1)";
        TestCommonTools.consolePrintTestSynStart(282, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0283() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∂+(x^2, x, 0)";
        TestCommonTools.consolePrintTestSynStart(283, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0284() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∂-(x^2, x, 0)";
        TestCommonTools.consolePrintTestSynStart(284, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0285() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        Argument x = new Argument("x = 2");
        String expStr = "∆(x^2, x) + Δ(x^2, x)";
        TestCommonTools.consolePrintTestSynStart(285, expStr);
        Expression e = new Expression(expStr, x);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0286() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        Argument x = new Argument("x = 2");
        String expStr = "∇(x^2, x)";
        TestCommonTools.consolePrintTestSynStart(286, expStr);
        Expression e = new Expression(expStr, x);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0287() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "√√√4+√√4+2√4";
        TestCommonTools.consolePrintTestSynStart(287, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0288() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∛∛∛4+∛∛4+2∛4";
        TestCommonTools.consolePrintTestSynStart(288, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0289() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∜∜∜4+∜∜4+2∜4";
        TestCommonTools.consolePrintTestSynStart(289, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0290() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∜∛√4+∜∛√4+2√4";
        TestCommonTools.consolePrintTestSynStart(290, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0291() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∜2∛3√4+∜2∛√4+2√4";
        TestCommonTools.consolePrintTestSynStart(291, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0292() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "sin(pi)∜2∛3√4+∜2∛√4+pi√4";
        TestCommonTools.consolePrintTestSynStart(292, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0293() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∜∛+4";
        TestCommonTools.consolePrintTestSynStart(293, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0294() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∜∛-4";
        TestCommonTools.consolePrintTestSynStart(294, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0295() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "5+∜";
        TestCommonTools.consolePrintTestSynStart(295, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0296() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∜∜*4";
        TestCommonTools.consolePrintTestSynStart(296, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0297() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "∜∜pi";
        TestCommonTools.consolePrintTestSynStart(297, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0298() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2∜∛*4+√pi*sin(√4)∛4";
        TestCommonTools.consolePrintTestSynStart(298, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0299() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "pi√pi";
        TestCommonTools.consolePrintTestSynStart(299, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0300() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2pi√pi";
        TestCommonTools.consolePrintTestSynStart(300, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0301() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2pi√√pi";
        TestCommonTools.consolePrintTestSynStart(301, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0302() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2pi2√√pi";
        TestCommonTools.consolePrintTestSynStart(302, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkLexSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0303() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2pi2√√pi";
        TestCommonTools.consolePrintTestSynStart(303, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = false;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
    @Test
    public void testSyn0304() {
        TestCommonTools.testSynSettingsInit();
        boolean testResult = false;
        String expStr = "2pi√√2pi";
        TestCommonTools.consolePrintTestSynStart(304, expStr);
        Expression e = new Expression(expStr);
        boolean syn = e.checkSyntax();
        boolean reg = true;
        if (syn == reg)
            testResult = true;
        TestCommonTools.consolePrintTestSynEnd(syn, reg, testResult, e);
        Assertions.assertTrue(testResult);
    }
}
